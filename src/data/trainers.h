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
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .ability = ABILITY_POISON_HEAL,
#line 635
            .lvl = 49,
#line 636
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 637
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
                MOVE_EARTHQUAKE,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 642
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 642
            .heldItem = ITEM_CHOPLE_BERRY,
#line 646
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 643
            .ability = ABILITY_SERENE_GRACE,
#line 644
            .lvl = 51,
#line 645
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 647
                MOVE_WISH,
                MOVE_TELEPORT,
                MOVE_TOXIC,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 652
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 652
            .heldItem = ITEM_SITRUS_BERRY,
#line 656
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 653
            .ability = ABILITY_CUD_CHEW,
#line 654
            .lvl = 50,
#line 655
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 657
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_SIGNAL_BEAM,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 662
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .heldItem = ITEM_BLACK_SLUDGE,
#line 666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 663
            .ability = ABILITY_MERCILESS,
#line 664
            .lvl = 50,
#line 665
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 666
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_BANEFUL_BUNKER,
                MOVE_RECOVER,
            },
            },
            {
#line 671
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .heldItem = ITEM_STEELIUM_Z,
#line 675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 672
            .ability = ABILITY_STANCE_CHANGE,
#line 673
            .lvl = 52,
#line 674
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_IRON_HEAD,
                MOVE_HEX,
                MOVE_AUTOTOMIZE,
                MOVE_KINGS_SHIELD,
            },
            },
        },
    },
#line 680
    [DIFFICULTY_NORMAL][TRAINER_DIMU] =
    {
#line 681
        .trainerName = _("Dimu"),
#line 685
        .trainerClass = TRAINER_CLASS_LEADER,
#line 682
        .trainerPic = TRAINER_PIC_DIMU,
        .encounterMusic_gender =
0,
#line 683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 684
        .characterRevealId = REVEAL_DIMU,
#line 686
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 687
        .objectEventGraphicsId = OBJ_EVENT_GFX_DIMU,
#line 688
        .mapSec = MAPSEC_HALERBA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_DIMU,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 690
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 690
            .heldItem = ITEM_FOCUS_SASH,
#line 696
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 691
            .ability = ABILITY_WIND_RIDER,
#line 692
            .lvl = 49,
#line 693
            .ball = ITEM_MASTER_BALL,
#line 695
            .friendship = 1,
#line 697
            .nature = NATURE_JOLLY,
#line 694
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 698
                MOVE_GRASSY_GLIDE,
                MOVE_NIGHT_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 703
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 703
            .heldItem = ITEM_SITRUS_BERRY,
#line 709
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 711
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 704
            .ability = ABILITY_FLOWER_VEIL,
#line 705
            .lvl = 50,
#line 706
            .ball = ITEM_MASTER_BALL,
#line 708
            .friendship = 1,
#line 710
            .nature = NATURE_MODEST,
#line 707
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 712
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
            },
            },
            {
#line 717
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 717
            .heldItem = ITEM_LEFTOVERS,
#line 723
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 718
            .ability = ABILITY_MOODY,
#line 719
            .lvl = 50,
#line 720
            .ball = ITEM_MASTER_BALL,
#line 722
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 721
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 724
                MOVE_OVERHEAT,
                MOVE_SEED_BOMB,
                MOVE_GRASSY_GLIDE,
                MOVE_PROTECT,
            },
            },
            {
#line 729
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 729
            .heldItem = ITEM_GRASSY_SEED,
#line 735
            .ev = TRAINER_PARTY_EVS(100, 200, 0, 100, 0, 0),
#line 737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 730
            .ability = ABILITY_INTIMIDATE,
#line 731
            .lvl = 51,
#line 732
            .ball = ITEM_MASTER_BALL,
#line 734
            .friendship = 1,
#line 736
            .nature = NATURE_JOLLY,
#line 733
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 737
                MOVE_PSYSHIELD_BASH,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_REST,
            },
            },
            {
#line 742
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 742
            .heldItem = ITEM_GRASSIUM_Z,
#line 748
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 750
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 743
            .ability = ABILITY_SEED_SOWER,
#line 744
            .lvl = 52,
#line 745
            .ball = ITEM_MASTER_BALL,
#line 747
            .friendship = 1,
#line 749
            .nature = NATURE_MODEST,
#line 746
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 751
                MOVE_ENERGY_BALL,
                MOVE_HYPER_VOICE,
                MOVE_EARTH_POWER,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 756
    [DIFFICULTY_NORMAL][TRAINER_BD] =
    {
#line 757
        .trainerName = _("BD"),
#line 761
        .trainerClass = TRAINER_CLASS_LEADER,
#line 758
        .trainerPic = TRAINER_PIC_BD,
        .encounterMusic_gender =
0,
#line 759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 760
        .characterRevealId = REVEAL_BD,
#line 762
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 763
        .objectEventGraphicsId = OBJ_EVENT_GFX_BD,
#line 764
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_BD,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 766
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 766
            .heldItem = ITEM_RED_CARD,
#line 772
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 774
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 767
            .ability = ABILITY_EFFECT_SPORE,
#line 768
            .lvl = 49,
#line 769
            .ball = ITEM_MASTER_BALL,
#line 771
            .friendship = 1,
#line 773
            .nature = NATURE_MODEST,
#line 770
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 775
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 780
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 780
            .heldItem = ITEM_RED_CARD,
#line 786
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 781
            .ability = ABILITY_CONTRARY,
#line 782
            .lvl = 50,
#line 783
            .ball = ITEM_MASTER_BALL,
#line 785
            .friendship = 1,
#line 787
            .nature = NATURE_JOLLY,
#line 784
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 788
                MOVE_SUPERPOWER,
                MOVE_DOUBLE_EDGE,
                MOVE_DIZZY_PUNCH,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 793
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 793
            .heldItem = ITEM_RED_CARD,
#line 799
            .ev = TRAINER_PARTY_EVS(200, 100, 0, 0, 100, 0),
#line 801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 794
            .ability = ABILITY_LEVITATE,
#line 795
            .lvl = 50,
#line 796
            .ball = ITEM_MASTER_BALL,
#line 798
            .friendship = 1,
#line 800
            .nature = NATURE_BRAVE,
#line 797
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 801
                MOVE_GUNK_SHOT,
                MOVE_DESTINY_BOND,
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 806
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 806
            .heldItem = ITEM_POISONIUM_Z,
#line 812
            .ev = TRAINER_PARTY_EVS(100, 250, 0, 50, 0, 0),
#line 814
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 807
            .ability = ABILITY_UNBURDEN,
#line 808
            .lvl = 51,
#line 809
            .ball = ITEM_MASTER_BALL,
#line 811
            .friendship = 1,
#line 813
            .nature = NATURE_ADAMANT,
#line 810
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 814
                MOVE_GUNK_SHOT,
                MOVE_LOW_SWEEP,
                MOVE_KNOCK_OFF,
                MOVE_TAUNT,
            },
            },
            {
#line 819
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 819
            .heldItem = ITEM_SITRUS_BERRY,
#line 825
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 820
            .ability = ABILITY_DEFIANT,
#line 821
            .lvl = 52,
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
                MOVE_CLOSE_COMBAT,
                MOVE_DRAIN_PUNCH,
                MOVE_SHADOW_CLAW,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 832
    [DIFFICULTY_NORMAL][TRAINER_AMIARGENTO] =
    {
#line 833
        .trainerName = _("AmiArgento"),
#line 837
        .trainerClass = TRAINER_CLASS_LEADER,
#line 834
        .trainerPic = TRAINER_PIC_AMI,
        .encounterMusic_gender =
0,
#line 835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 836
        .characterRevealId = REVEAL_AMI,
#line 838
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 839
        .objectEventGraphicsId = OBJ_EVENT_GFX_AMIARGENTO,
#line 840
        .mapSec = MAPSEC_IRISINA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_AMI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 842
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 842
            .heldItem = ITEM_LEFTOVERS,
#line 848
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 850
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 843
            .ability = ABILITY_OBLIVIOUS,
#line 844
            .lvl = 49,
#line 845
            .ball = ITEM_MASTER_BALL,
#line 847
            .friendship = 1,
#line 849
            .nature = NATURE_RELAXED,
#line 846
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 851
                MOVE_IRON_DEFENSE,
                MOVE_BODY_PRESS,
                MOVE_TRICK_ROOM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 856
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 856
            .heldItem = ITEM_EVIOLITE,
#line 862
            .ev = TRAINER_PARTY_EVS(200, 0, 50, 0, 75, 75),
#line 864
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 857
            .ability = ABILITY_DOWNLOAD,
#line 858
            .lvl = 50,
#line 859
            .ball = ITEM_MASTER_BALL,
#line 861
            .friendship = 1,
#line 863
            .nature = NATURE_QUIET,
#line 860
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 865
                MOVE_TRI_ATTACK,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 870
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 870
            .heldItem = ITEM_ROCKY_HELMET,
#line 876
            .ev = TRAINER_PARTY_EVS(200, 0, 75, 0, 50, 75),
#line 878
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 871
            .ability = ABILITY_FLAME_BODY,
#line 872
            .lvl = 50,
#line 873
            .ball = ITEM_MASTER_BALL,
#line 875
            .friendship = 1,
#line 877
            .nature = NATURE_QUIET,
#line 874
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 879
                MOVE_FLAMETHROWER,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 884
            .species = SPECIES_COPPERAJAH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 884
            .heldItem = ITEM_IRON_BALL,
#line 890
            .ev = TRAINER_PARTY_EVS(0, 200, 100, 0, 0, 100),
#line 892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 885
            .ability = ABILITY_SHEER_FORCE,
#line 886
            .lvl = 51,
#line 887
            .ball = ITEM_MASTER_BALL,
#line 889
            .friendship = 1,
#line 891
            .nature = NATURE_BRAVE,
#line 888
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 893
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 898
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 898
            .heldItem = ITEM_FAIRIUM_Z,
#line 904
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 906
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 899
            .ability = ABILITY_MAGIC_BOUNCE,
#line 900
            .lvl = 52,
#line 901
            .ball = ITEM_MASTER_BALL,
#line 903
            .friendship = 1,
#line 905
            .nature = NATURE_QUIET,
#line 902
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 907
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC,
                MOVE_DARK_PULSE,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 912
    [DIFFICULTY_NORMAL][TRAINER_KAI_BATTLE8] =
    {
#line 913
        .trainerName = _("Kai"),
#line 915
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 914
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 917
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 919
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 919
            .heldItem = ITEM_FOCUS_SASH,
#line 925
            .ev = TRAINER_PARTY_EVS(0, 0, 150, 0, 0, 150),
#line 926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 920
            .ability = ABILITY_EFFECT_SPORE,
#line 921
            .lvl = 47,
#line 922
            .ball = ITEM_MASTER_BALL,
#line 924
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 923
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 926
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 931
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 937
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
#line 939
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 932
            .ability = ABILITY_LEVITATE,
#line 933
            .lvl = 49,
#line 934
            .ball = ITEM_MASTER_BALL,
#line 936
            .friendship = 1,
#line 938
            .nature = NATURE_TIMID,
#line 935
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 940
                MOVE_OVERHEAT,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 945
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 945
            .heldItem = ITEM_MYSTIC_WATER,
#line 951
            .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 0, 0),
#line 953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 946
            .ability = ABILITY_WATER_VEIL,
#line 947
            .lvl = 48,
#line 948
            .ball = ITEM_MASTER_BALL,
#line 950
            .friendship = 1,
#line 952
            .nature = NATURE_ADAMANT,
#line 949
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 953
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_AQUA_RING,
                MOVE_CLAMP,
            },
            },
            {
#line 958
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 964
            .ev = TRAINER_PARTY_EVS(100, 50, 0, 150, 0, 0),
#line 966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 959
            .ability = ABILITY_CUTE_CHARM,
#line 960
            .lvl = 49,
#line 961
            .ball = ITEM_MASTER_BALL,
#line 963
            .friendship = 1,
#line 965
            .nature = NATURE_JOLLY,
#line 962
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 966
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_PAYBACK,
            },
            },
            {
#line 971
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 971
            .heldItem = ITEM_DRAGONIUM_Z,
#line 977
            .ev = TRAINER_PARTY_EVS(0, 175, 0, 100, 15, 0),
#line 978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 972
            .ability = ABILITY_SHED_SKIN,
#line 973
            .lvl = 51,
#line 974
            .ball = ITEM_MASTER_BALL,
#line 976
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 975
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 978
                MOVE_DRAGON_RUSH,
                MOVE_IRON_HEAD,
                MOVE_EXTREME_SPEED,
                MOVE_WATERFALL,
            },
            },
        },
    },
#line 983
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_BEACHBATTLE] =
    {
#line 984
        .trainerName = _("Charlotte"),
#line 985
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 988
            .species = SPECIES_PALAFIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 988
            .heldItem = ITEM_CHOICE_SCARF,
#line 994
            .ev = TRAINER_PARTY_EVS(0, 250, 0, 150, 0, 0),
#line 996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 989
            .ability = ABILITY_ZERO_TO_HERO,
#line 990
            .lvl = 50,
#line 991
            .ball = ITEM_MASTER_BALL,
#line 993
            .friendship = 1,
#line 995
            .nature = NATURE_ADAMANT,
#line 992
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 996
                MOVE_WAVE_CRASH,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 1001
            .species = SPECIES_TALONFLAME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1001
            .heldItem = ITEM_SHARP_BEAK,
#line 1007
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 1009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1002
            .ability = ABILITY_GALE_WINGS,
#line 1003
            .lvl = 49,
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
                MOVE_BRAVE_BIRD,
                MOVE_FLARE_BLITZ,
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 1014
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1014
            .heldItem = ITEM_EVIOLITE,
#line 1020
            .ev = TRAINER_PARTY_EVS(50, 250, 0, 0, 0, 100),
#line 1022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1015
            .ability = ABILITY_NO_GUARD,
#line 1016
            .lvl = 50,
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
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1027
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1027
            .heldItem = ITEM_GROUNDIUM_Z,
#line 1033
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1035
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1028
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 1029
            .lvl = 51,
#line 1030
            .ball = ITEM_MASTER_BALL,
#line 1032
            .friendship = 1,
#line 1034
            .nature = NATURE_MODEST,
#line 1031
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1036
                MOVE_EARTH_POWER,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 1041
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .heldItem = ITEM_FOCUS_SASH,
#line 1047
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 250, 0),
#line 1049
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1042
            .ability = ABILITY_LEVITATE,
#line 1043
            .lvl = 52,
#line 1044
            .ball = ITEM_MASTER_BALL,
#line 1046
            .friendship = 1,
#line 1048
            .nature = NATURE_SERIOUS,
#line 1045
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1050
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1055
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1055
            .heldItem = ITEM_GALLADITE,
#line 1061
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 1063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1056
            .ability = ABILITY_SHARPNESS,
#line 1057
            .lvl = 53,
#line 1058
            .ball = ITEM_MASTER_BALL,
#line 1060
            .friendship = 1,
#line 1062
            .nature = NATURE_SERIOUS,
#line 1059
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1063
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_NIGHT_SLASH,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 1068
    [DIFFICULTY_NORMAL][TRAINER_ALCMENE] =
    {
#line 1069
        .trainerName = _("Alcmene"),
#line 1074
        .trainerClass = TRAINER_CLASS_THE_TIDE_LEADER,
#line 1070
        .trainerPic = TRAINER_PIC_ALCMENE,
        .encounterMusic_gender =
0,
#line 1072
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1073
        .characterRevealId = REVEAL_ALCMENE,
#line 1075
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1076
        .objectEventGraphicsId = OBJ_EVENT_GFX_ALCMENE,
#line 1077
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_ALCMENE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1079
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1079
            .heldItem = ITEM_FOCUS_SASH,
#line 1085
            .ev = TRAINER_PARTY_EVS(12, 248, 0, 248, 0, 0),
#line 1087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1080
            .ability = ABILITY_SWIFT_SWIM,
#line 1081
            .lvl = 76,
#line 1082
            .ball = ITEM_MASTER_BALL,
#line 1084
            .friendship = 1,
#line 1086
            .nature = NATURE_ADAMANT,
#line 1083
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1087
                MOVE_LIQUIDATION,
                MOVE_CLOSE_COMBAT,
                MOVE_ICE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1092
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1092
            .heldItem = ITEM_WACAN_BERRY,
#line 1098
            .ev = TRAINER_PARTY_EVS(132, 132, 4, 236, 0, 4),
#line 1100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1093
            .ability = ABILITY_INTIMIDATE,
#line 1094
            .lvl = 75,
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
                MOVE_WATERFALL,
                MOVE_POWER_WHIP,
                MOVE_CRUNCH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 1105
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1105
            .heldItem = ITEM_WATERIUM_Z,
#line 1111
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1106
            .ability = ABILITY_SWIFT_SWIM,
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
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_AQUA_JET,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 1118
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1118
            .heldItem = ITEM_CHOICE_BAND,
#line 1124
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1119
            .ability = ABILITY_INNER_FOCUS,
#line 1120
            .lvl = 76,
#line 1121
            .ball = ITEM_MASTER_BALL,
#line 1123
            .friendship = 1,
#line 1125
            .nature = NATURE_JOLLY,
#line 1122
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1126
                MOVE_CLOSE_COMBAT,
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_TRIPLE_AXEL,
            },
            },
            {
#line 1131
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1131
            .heldItem = ITEM_FLYING_GEM,
#line 1137
            .ev = TRAINER_PARTY_EVS(64, 196, 0, 248, 0, 0),
#line 1139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1132
            .ability = ABILITY_HYPER_CUTTER,
#line 1133
            .lvl = 76,
#line 1134
            .ball = ITEM_MASTER_BALL,
#line 1136
            .friendship = 1,
#line 1138
            .nature = NATURE_ADAMANT,
#line 1135
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1139
                MOVE_HIGH_HORSEPOWER,
                MOVE_ACROBATICS,
                MOVE_X_SCISSOR,
                MOVE_CRABHAMMER,
            },
            },
            {
#line 1144
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1144
            .heldItem = ITEM_SWAMPERTITE,
#line 1150
            .ev = TRAINER_PARTY_EVS(136, 116, 4, 248, 0, 4),
#line 1152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1145
            .ability = ABILITY_TORRENT,
#line 1146
            .lvl = 77,
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
                MOVE_LIQUIDATION,
                MOVE_EARTHQUAKE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1157
    [DIFFICULTY_NORMAL][TRAINER_KAI_WHYAREYOUHELPINGTHEM] =
    {
#line 1158
        .trainerName = _("Kai"),
#line 1160
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1159
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1162
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1164
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1164
            .heldItem = ITEM_FOCUS_SASH,
#line 1170
            .ev = TRAINER_PARTY_EVS(0, 0, 200, 0, 0, 200),
#line 1171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1165
            .ability = ABILITY_EFFECT_SPORE,
#line 1166
            .lvl = 67,
#line 1167
            .ball = ITEM_MASTER_BALL,
#line 1169
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1168
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1171
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1176
            .species = SPECIES_ROTOM_FROST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1182
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1184
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1177
            .ability = ABILITY_LEVITATE,
#line 1178
            .lvl = 69,
#line 1179
            .ball = ITEM_MASTER_BALL,
#line 1181
            .friendship = 1,
#line 1183
            .nature = NATURE_SERIOUS,
#line 1180
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1185
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 1190
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1190
            .heldItem = ITEM_CHARCOAL,
#line 1196
            .ev = TRAINER_PARTY_EVS(50, 150, 0, 200, 0, 0),
#line 1198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1191
            .ability = ABILITY_FLASH_FIRE,
#line 1192
            .lvl = 68,
#line 1193
            .ball = ITEM_MASTER_BALL,
#line 1195
            .friendship = 1,
#line 1197
            .nature = NATURE_ADAMANT,
#line 1194
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1198
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_BULK_UP,
            },
            },
            {
#line 1203
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1203
            .heldItem = ITEM_SITRUS_BERRY,
#line 1209
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 150, 150, 0),
#line 1211
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1204
            .ability = ABILITY_SHEER_FORCE,
#line 1205
            .lvl = 68,
#line 1206
            .ball = ITEM_MASTER_BALL,
#line 1208
            .friendship = 1,
#line 1210
            .nature = NATURE_TIMID,
#line 1207
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1212
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_ROAR,
            },
            },
            {
#line 1217
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1223
            .ev = TRAINER_PARTY_EVS(100, 50, 25, 200, 0, 25),
#line 1225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1218
            .ability = ABILITY_CUTE_CHARM,
#line 1219
            .lvl = 69,
#line 1220
            .ball = ITEM_MASTER_BALL,
#line 1222
            .friendship = 1,
#line 1224
            .nature = NATURE_JOLLY,
#line 1221
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1225
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 1230
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1236
            .ev = TRAINER_PARTY_EVS(0, 235, 0, 150, 15, 0),
#line 1237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1231
            .ability = ABILITY_INNER_FOCUS,
#line 1232
            .lvl = 70,
#line 1233
            .ball = ITEM_MASTER_BALL,
#line 1235
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1234
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1237
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_EXTREME_SPEED,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 1242
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT1] =
    {
#line 1243
        .trainerName = _("League1"),
#line 1244
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1247
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1247
            .heldItem = ITEM_ROCKY_HELMET,
#line 1253
            .ev = TRAINER_PARTY_EVS(252, 240, 12, 4, 0, 0),
#line 1255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1248
            .ability = ABILITY_PRANKSTER,
#line 1249
            .lvl = 72,
#line 1250
            .ball = ITEM_MASTER_BALL,
#line 1252
            .friendship = 1,
#line 1254
            .nature = NATURE_ADAMANT,
#line 1251
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1255
                MOVE_SCARY_FACE,
                MOVE_ENCORE,
                MOVE_GUNK_SHOT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 1260
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1260
            .heldItem = ITEM_DARKINIUM_Z,
#line 1266
            .ev = TRAINER_PARTY_EVS(4, 4, 0, 248, 252, 0),
#line 1268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1261
            .ability = ABILITY_ILLUSION,
#line 1262
            .lvl = 72,
#line 1263
            .ball = ITEM_MASTER_BALL,
#line 1265
            .friendship = 1,
#line 1267
            .nature = NATURE_HASTY,
#line 1264
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1268
                MOVE_DARK_PULSE,
                MOVE_SUCKER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 1273
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1273
            .heldItem = ITEM_SCIZORITE,
#line 1279
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 4, 0, 4),
#line 1281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1274
            .ability = ABILITY_TECHNICIAN,
#line 1275
            .lvl = 73,
#line 1276
            .ball = ITEM_MASTER_BALL,
#line 1278
            .friendship = 1,
#line 1280
            .nature = NATURE_ADAMANT,
#line 1277
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1281
                MOVE_BULLET_PUNCH,
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 1286
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT2] =
    {
#line 1287
        .trainerName = _("League2"),
#line 1288
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1291
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1291
            .heldItem = ITEM_ICY_ROCK,
#line 1297
            .ev = TRAINER_PARTY_EVS(220, 0, 0, 252, 36, 0),
#line 1299
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1292
            .ability = ABILITY_SNOW_WARNING,
#line 1293
            .lvl = 72,
#line 1294
            .ball = ITEM_MASTER_BALL,
#line 1296
            .friendship = 1,
#line 1298
            .nature = NATURE_TIMID,
#line 1295
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1300
                MOVE_BLIZZARD,
                MOVE_AURORA_VEIL,
                MOVE_FLASH_CANNON,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 1305
            .species = SPECIES_CETITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .heldItem = ITEM_SITRUS_BERRY,
#line 1311
            .ev = TRAINER_PARTY_EVS(8, 112, 104, 100, 0, 184),
#line 1313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1306
            .ability = ABILITY_SLUSH_RUSH,
#line 1307
            .lvl = 72,
#line 1308
            .ball = ITEM_MASTER_BALL,
#line 1310
            .friendship = 1,
#line 1312
            .nature = NATURE_ADAMANT,
#line 1309
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1313
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_BELLY_DRUM,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 1319
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1325
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
#line 1327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1320
            .ability = ABILITY_HYPER_CUTTER,
#line 1321
            .lvl = 73,
#line 1322
            .ball = ITEM_MASTER_BALL,
#line 1324
            .friendship = 1,
#line 1326
            .nature = NATURE_ADAMANT,
#line 1323
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1327
                MOVE_CRABHAMMER,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 1332
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT3] =
    {
#line 1333
        .trainerName = _("League3"),
#line 1334
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1337
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1337
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1343
            .ev = TRAINER_PARTY_EVS(252, 12, 84, 0, 0, 160),
#line 1345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1338
            .ability = ABILITY_MERCILESS,
#line 1339
            .lvl = 72,
#line 1340
            .ball = ITEM_MASTER_BALL,
#line 1342
            .friendship = 1,
#line 1344
            .nature = NATURE_ADAMANT,
#line 1341
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1345
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
                MOVE_LIQUIDATION,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1350
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1350
            .heldItem = ITEM_CHESTO_BERRY,
#line 1356
            .ev = TRAINER_PARTY_EVS(248, 48, 0, 0, 0, 212),
#line 1358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1351
            .ability = ABILITY_UNNERVE,
#line 1352
            .lvl = 72,
#line 1353
            .ball = ITEM_MASTER_BALL,
#line 1355
            .friendship = 1,
#line 1357
            .nature = NATURE_CAREFUL,
#line 1354
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1358
                MOVE_YAWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1363
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1363
            .heldItem = ITEM_SLOWBRONITE,
#line 1369
            .ev = TRAINER_PARTY_EVS(252, 0, 60, 0, 0, 196),
#line 1371
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1364
            .ability = ABILITY_OBLIVIOUS,
#line 1365
            .lvl = 73,
#line 1366
            .ball = ITEM_MASTER_BALL,
#line 1368
            .friendship = 1,
#line 1370
            .nature = NATURE_CALM,
#line 1367
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1372
                MOVE_TOXIC,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
        },
    },
#line 1377
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT4] =
    {
#line 1378
        .trainerName = _("League4"),
#line 1379
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1382
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1382
            .heldItem = ITEM_FLYINIUM_Z,
#line 1388
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 1390
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1383
            .ability = ABILITY_COMPETITIVE,
#line 1384
            .lvl = 73,
#line 1385
            .ball = ITEM_MASTER_BALL,
#line 1387
            .friendship = 1,
#line 1389
            .nature = NATURE_TIMID,
#line 1386
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1391
                MOVE_HURRICANE,
                MOVE_AIR_SLASH,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 1396
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1396
            .heldItem = ITEM_MENTAL_HERB,
#line 1402
            .ev = TRAINER_PARTY_EVS(156, 0, 100, 252, 0, 0),
#line 1404
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1397
            .ability = ABILITY_INNER_FOCUS,
#line 1398
            .lvl = 73,
#line 1399
            .ball = ITEM_MASTER_BALL,
#line 1401
            .friendship = 1,
#line 1403
            .nature = NATURE_JOLLY,
#line 1400
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1405
                MOVE_BELLY_DRUM,
                MOVE_BATON_PASS,
                MOVE_COUNTER,
            },
            },
            {
#line 1409
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1409
            .heldItem = ITEM_GYARADOSITE,
#line 1411
            .ev = TRAINER_PARTY_EVS(156, 252, 0, 100, 0, 0),
#line 1413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1410
            .ability = ABILITY_INTIMIDATE,
#line 1413
            .lvl = 100,
#line 1412
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1413
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 1418
    [DIFFICULTY_NORMAL][TRAINER_KAI_FINALS] =
    {
#line 1419
        .trainerName = _("Kai"),
#line 1421
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1420
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1424
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1424
            .heldItem = ITEM_LIGHT_CLAY,
#line 1430
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1432
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1425
            .ability = ABILITY_PRANKSTER,
#line 1426
            .lvl = 73,
#line 1427
            .ball = ITEM_MASTER_BALL,
#line 1429
            .friendship = 1,
#line 1431
            .nature = NATURE_MODEST,
#line 1428
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1433
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1438
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1438
            .heldItem = ITEM_MYSTIC_WATER,
#line 1444
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1439
            .ability = ABILITY_WATER_VEIL,
#line 1440
            .lvl = 73,
#line 1441
            .ball = ITEM_MASTER_BALL,
#line 1443
            .friendship = 1,
#line 1445
            .nature = NATURE_ADAMANT,
#line 1442
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1446
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1451
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1451
            .heldItem = ITEM_CHARCOAL,
#line 1457
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1452
            .ability = ABILITY_FLASH_FIRE,
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
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1464
            .species = SPECIES_ROTOM_MOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1464
            .heldItem = ITEM_MIRACLE_SEED,
#line 1470
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 200, 4),
#line 1472
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1465
            .ability = ABILITY_LEVITATE,
#line 1466
            .lvl = 73,
#line 1467
            .ball = ITEM_MASTER_BALL,
#line 1469
            .friendship = 1,
#line 1471
            .nature = NATURE_TIMID,
#line 1468
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1473
                MOVE_LEAF_STORM,
                MOVE_THUNDERBOLT,
                MOVE_NASTY_PLOT,
                MOVE_DISCHARGE,
            },
            },
            {
#line 1478
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .heldItem = ITEM_LOPUNNITE,
#line 1484
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1479
            .ability = ABILITY_CUTE_CHARM,
#line 1480
            .lvl = 74,
#line 1481
            .ball = ITEM_MASTER_BALL,
#line 1483
            .friendship = 1,
#line 1485
            .nature = NATURE_JOLLY,
#line 1482
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1486
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_BOUNCE,
            },
            },
            {
#line 1491
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1497
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1492
            .ability = ABILITY_INNER_FOCUS,
#line 1493
            .lvl = 74,
#line 1494
            .ball = ITEM_MASTER_BALL,
#line 1496
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1495
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1498
                MOVE_OUTRAGE,
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1503
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSGRABLUNCH] =
    {
#line 1504
        .trainerName = _("Kai"),
#line 1506
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1505
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1508
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1510
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1510
            .heldItem = ITEM_LIGHT_CLAY,
#line 1516
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1518
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1511
            .ability = ABILITY_PRANKSTER,
#line 1512
            .lvl = 73,
#line 1513
            .ball = ITEM_MASTER_BALL,
#line 1515
            .friendship = 1,
#line 1517
            .nature = NATURE_MODEST,
#line 1514
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1519
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1524
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1524
            .heldItem = ITEM_LIFE_ORB,
#line 1530
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 212, 196, 0),
#line 1532
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1525
            .ability = ABILITY_SHEER_FORCE,
#line 1526
            .lvl = 73,
#line 1527
            .ball = ITEM_MASTER_BALL,
#line 1529
            .friendship = 1,
#line 1531
            .nature = NATURE_TIMID,
#line 1528
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1533
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_WAVE,
                MOVE_ICE_BEAM,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 1538
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1538
            .heldItem = ITEM_MYSTIC_WATER,
#line 1544
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1539
            .ability = ABILITY_WATER_VEIL,
#line 1540
            .lvl = 73,
#line 1541
            .ball = ITEM_MASTER_BALL,
#line 1543
            .friendship = 1,
#line 1545
            .nature = NATURE_ADAMANT,
#line 1542
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1546
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1551
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1551
            .heldItem = ITEM_CHARCOAL,
#line 1557
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1552
            .ability = ABILITY_FLASH_FIRE,
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
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1564
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1564
            .heldItem = ITEM_LOPUNNITE,
#line 1570
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1565
            .ability = ABILITY_CUTE_CHARM,
#line 1566
            .lvl = 74,
#line 1567
            .ball = ITEM_MASTER_BALL,
#line 1569
            .friendship = 1,
#line 1571
            .nature = NATURE_JOLLY,
#line 1568
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1572
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1577
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .heldItem = ITEM_FLYINIUM_Z,
#line 1583
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1578
            .ability = ABILITY_INNER_FOCUS,
#line 1579
            .lvl = 75,
#line 1580
            .ball = ITEM_MASTER_BALL,
#line 1582
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1581
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1584
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_DRAGON_DANCE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1589
    [DIFFICULTY_NORMAL][TRAINER_DOYLE_ZENZU_ISLAND] =
    {
#line 1590
        .trainerName = _("Doyle"),
#line 1592
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1591
        .trainerPic = TRAINER_PIC_DOYLE,
        .encounterMusic_gender =
0,
#line 1594
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1595
        .characterRevealId = REVEAL_DOYLE,
#line 1596
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1597
        .objectEventGraphicsId = OBJ_EVENT_GFX_DOYLE,
#line 1598
        .mapSec = MAPSEC_ZENZU_ISLAND,
#line 0
        .trainerBackPic = TRAINER_PIC_DOYLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1600
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1600
            .heldItem = ITEM_LIFE_ORB,
#line 1606
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 1608
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1601
            .ability = ABILITY_SHEER_FORCE,
#line 1602
            .lvl = 75,
#line 1603
            .ball = ITEM_MASTER_BALL,
#line 1605
            .friendship = 1,
#line 1607
            .nature = NATURE_TIMID,
#line 1604
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1609
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 1614
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1614
            .heldItem = ITEM_CHOPLE_BERRY,
#line 1620
            .ev = TRAINER_PARTY_EVS(252, 60, 52, 0, 0, 144),
#line 1622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1615
            .ability = ABILITY_SAND_STREAM,
#line 1616
            .lvl = 75,
#line 1617
            .ball = ITEM_MASTER_BALL,
#line 1619
            .friendship = 1,
#line 1621
            .nature = NATURE_ADAMANT,
#line 1618
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1622
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_HELPING_HAND,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 1627
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1627
            .heldItem = ITEM_ASSAULT_VEST,
#line 1633
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 252, 148, 8),
#line 1635
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1628
            .ability = ABILITY_LEVITATE,
#line 1629
            .lvl = 74,
#line 1630
            .ball = ITEM_MASTER_BALL,
#line 1632
            .friendship = 1,
#line 1634
            .nature = NATURE_MODEST,
#line 1631
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1636
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_EARTH_POWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1641
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1641
            .heldItem = ITEM_FIRIUM_Z,
#line 1647
            .ev = TRAINER_PARTY_EVS(128, 0, 120, 252, 8, 0),
#line 1649
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1642
            .ability = ABILITY_FLAME_BODY,
#line 1643
            .lvl = 76,
#line 1644
            .ball = ITEM_MASTER_BALL,
#line 1646
            .friendship = 1,
#line 1648
            .nature = NATURE_TIMID,
#line 1645
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1650
                MOVE_FLAMETHROWER,
                MOVE_BUG_BUZZ,
                MOVE_GIGA_DRAIN,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1656
            .species = SPECIES_DURALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1662
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 0, 248, 252),
#line 1664
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1657
            .ability = ABILITY_STALWART,
#line 1658
            .lvl = 76,
#line 1659
            .ball = ITEM_MASTER_BALL,
#line 1661
            .friendship = 1,
#line 1663
            .nature = NATURE_MODEST,
#line 1660
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1665
                MOVE_FLASH_CANNON,
                MOVE_DRAGON_PULSE,
                MOVE_THUNDERBOLT,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 1670
    [DIFFICULTY_NORMAL][TRAINER_IMELDA] =
    {
#line 1671
        .trainerName = _("Imelda"),
#line 1672
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1673
        .trainerPic = TRAINER_PIC_IMELDA,
        .encounterMusic_gender =
0,
#line 1675
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1676
        .characterRevealId = REVEAL_IMELDA,
#line 1677
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1678
        .objectEventGraphicsId = OBJ_EVENT_GFX_IMELDA,
#line 1679
        .mapSec = MAPSEC_ESPULEE_OUTSKIRTS,
#line 0
        .trainerBackPic = TRAINER_PIC_IMELDA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1681
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1681
            .heldItem = ITEM_COVERT_CLOAK,
#line 1687
            .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
#line 1689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1682
            .ability = ABILITY_OVERCOAT,
#line 1683
            .lvl = 75,
#line 1684
            .ball = ITEM_MASTER_BALL,
#line 1686
            .friendship = 1,
#line 1688
            .nature = NATURE_JOLLY,
#line 1685
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1689
                MOVE_SPIN_OUT,
                MOVE_POISON_GAS,
                MOVE_GUNK_SHOT,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 1694
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1694
            .heldItem = ITEM_WHITE_HERB,
#line 1700
            .ev = TRAINER_PARTY_EVS(140, 0, 100, 252, 16, 0),
#line 1702
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1695
            .ability = ABILITY_WEAK_ARMOR,
#line 1696
            .lvl = 74,
#line 1697
            .ball = ITEM_MASTER_BALL,
#line 1699
            .friendship = 1,
#line 1701
            .nature = NATURE_TIMID,
#line 1698
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1703
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SHELL_SMASH,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 1708
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1708
            .heldItem = ITEM_PSYCHIUM_Z,
#line 1714
            .ev = TRAINER_PARTY_EVS(128, 0, 132, 0, 248, 0),
#line 1716
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 1709
            .ability = ABILITY_FLASH_FIRE,
#line 1710
            .lvl = 76,
#line 1711
            .ball = ITEM_MASTER_BALL,
#line 1713
            .friendship = 1,
#line 1715
            .nature = NATURE_RELAXED,
#line 1712
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1717
                MOVE_SHADOW_BALL,
                MOVE_HEAT_WAVE,
                MOVE_TRICK_ROOM,
                MOVE_INFERNO,
            },
            },
            {
#line 1722
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1722
            .heldItem = ITEM_ASSAULT_VEST,
#line 1728
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1723
            .ability = ABILITY_STEELWORKER,
#line 1724
            .lvl = 75,
#line 1725
            .ball = ITEM_MASTER_BALL,
#line 1727
            .friendship = 1,
#line 1729
            .nature = NATURE_BRAVE,
#line 1726
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1731
                MOVE_POLTERGEIST,
                MOVE_POWER_WHIP,
                MOVE_ANCHOR_SHOT,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 1737
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1743
            .ev = TRAINER_PARTY_EVS(4, 248, 128, 0, 0, 128),
#line 1745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1738
            .ability = ABILITY_STENCH,
#line 1739
            .lvl = 76,
#line 1740
            .ball = ITEM_MASTER_BALL,
#line 1742
            .friendship = 1,
#line 1744
            .nature = NATURE_BRAVE,
#line 1741
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1746
                MOVE_GUNK_SHOT,
                MOVE_PAYBACK,
                MOVE_SEED_BOMB,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 1751
    [DIFFICULTY_NORMAL][TRAINER_ADAORA_HOWDISAPPOINTING] =
    {
#line 1752
        .trainerName = _("Adaora"),
#line 1757
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1753
        .trainerPic = TRAINER_PIC_ADAORA,
        .encounterMusic_gender =
0,
#line 1755
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1756
        .characterRevealId = REVEAL_ADAORA,
#line 1758
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1759
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADAORA,
#line 1760
        .mapSec = MAPSEC_HODOU_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_ADAORA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1762
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1762
            .heldItem = ITEM_CHOICE_BAND,
#line 1768
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1763
            .ability = ABILITY_SWIFT_SWIM,
#line 1764
            .lvl = 73,
#line 1765
            .ball = ITEM_MASTER_BALL,
#line 1767
            .friendship = 1,
#line 1769
            .nature = NATURE_ADAMANT,
#line 1766
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1770
                MOVE_LIQUIDATION,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_CRUNCH,
            },
            },
            {
#line 1775
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1775
            .heldItem = ITEM_ROCKIUM_Z,
#line 1781
            .ev = TRAINER_PARTY_EVS(136, 100, 8, 252, 0, 12),
#line 1783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1776
            .ability = ABILITY_SWIFT_SWIM,
#line 1777
            .lvl = 74,
#line 1778
            .ball = ITEM_MASTER_BALL,
#line 1780
            .friendship = 1,
#line 1782
            .nature = NATURE_JOLLY,
#line 1779
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1783
                MOVE_ROCK_SLIDE,
                MOVE_X_SCISSOR,
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 1788
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1788
            .heldItem = ITEM_ASSAULT_VEST,
#line 1794
            .ev = TRAINER_PARTY_EVS(252, 112, 132, 0, 0, 12),
#line 1796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1789
            .ability = ABILITY_TECHNICIAN,
#line 1790
            .lvl = 73,
#line 1791
            .ball = ITEM_MASTER_BALL,
#line 1793
            .friendship = 1,
#line 1795
            .nature = NATURE_ADAMANT,
#line 1792
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1796
                MOVE_CLOSE_COMBAT,
                MOVE_CIRCLE_THROW,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 1801
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1801
            .heldItem = ITEM_FOCUS_SASH,
#line 1807
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 1809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1802
            .ability = ABILITY_TECHNICIAN,
#line 1803
            .lvl = 74,
#line 1804
            .ball = ITEM_MASTER_BALL,
#line 1806
            .friendship = 1,
#line 1808
            .nature = NATURE_JOLLY,
#line 1805
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1809
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1814
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1814
            .heldItem = ITEM_CHOICE_SPECS,
#line 1820
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 12, 248, 0),
#line 1822
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1815
            .ability = ABILITY_RAIN_DISH,
#line 1816
            .lvl = 74,
#line 1817
            .ball = ITEM_MASTER_BALL,
#line 1819
            .friendship = 1,
#line 1821
            .nature = NATURE_MODEST,
#line 1818
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1823
                MOVE_SLUDGE_BOMB,
                MOVE_MUDDY_WATER,
                MOVE_DAZZLING_GLEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 1829
            .species = SPECIES_DREDNAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1835
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
#line 1837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1830
            .ability = ABILITY_SWIFT_SWIM,
#line 1831
            .lvl = 75,
#line 1832
            .ball = ITEM_MASTER_BALL,
#line 1834
            .friendship = 1,
#line 1836
            .nature = NATURE_CAREFUL,
#line 1833
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1837
                MOVE_ROCK_SLIDE,
                MOVE_LIQUIDATION,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
#line 1842
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSBURNTHISMOTHERDOWN] =
    {
#line 1843
        .trainerName = _("Kai"),
#line 1845
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1844
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1847
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1849
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1849
            .heldItem = ITEM_LIGHT_CLAY,
#line 1855
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1857
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1850
            .ability = ABILITY_PRANKSTER,
#line 1851
            .lvl = 74,
#line 1852
            .ball = ITEM_MASTER_BALL,
#line 1854
            .friendship = 1,
#line 1856
            .nature = NATURE_MODEST,
#line 1853
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1858
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1863
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1863
            .heldItem = ITEM_LOPUNNITE,
#line 1869
            .ev = TRAINER_PARTY_EVS(100, 156, 0, 252, 0, 0),
#line 1871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1864
            .ability = ABILITY_CUTE_CHARM,
#line 1865
            .lvl = 76,
#line 1866
            .ball = ITEM_MASTER_BALL,
#line 1868
            .friendship = 1,
#line 1870
            .nature = NATURE_JOLLY,
#line 1867
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1871
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_U_TURN,
            },
            },
            {
#line 1876
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1876
            .heldItem = ITEM_LIFE_ORB,
#line 1882
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 212, 196, 0),
#line 1884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1877
            .ability = ABILITY_SHEER_FORCE,
#line 1878
            .lvl = 75,
#line 1879
            .ball = ITEM_MASTER_BALL,
#line 1881
            .friendship = 1,
#line 1883
            .nature = NATURE_HASTY,
#line 1880
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1884
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 1889
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1889
            .heldItem = ITEM_BIG_ROOT,
#line 1895
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1890
            .ability = ABILITY_FLASH_FIRE,
#line 1891
            .lvl = 75,
#line 1892
            .ball = ITEM_MASTER_BALL,
#line 1894
            .friendship = 1,
#line 1896
            .nature = NATURE_ADAMANT,
#line 1893
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1897
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1902
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1902
            .heldItem = ITEM_SITRUS_BERRY,
#line 1908
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 1910
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1903
            .ability = ABILITY_LEVITATE,
#line 1904
            .lvl = 75,
#line 1905
            .ball = ITEM_MASTER_BALL,
#line 1907
            .friendship = 1,
#line 1909
            .nature = NATURE_TIMID,
#line 1906
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1911
                MOVE_HYDRO_PUMP,
                MOVE_THUNDERBOLT,
                MOVE_WILL_O_WISP,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1916
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1916
            .heldItem = ITEM_FLYINIUM_Z,
#line 1922
            .ev = TRAINER_PARTY_EVS(52, 252, 0, 200, 0, 4),
#line 1924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1917
            .ability = ABILITY_INNER_FOCUS,
#line 1918
            .lvl = 77,
#line 1919
            .ball = ITEM_MASTER_BALL,
#line 1921
            .friendship = 1,
#line 1923
            .nature = NATURE_ADAMANT,
#line 1920
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1924
                MOVE_DRAGON_CLAW,
                MOVE_FLY,
                MOVE_IRON_HEAD,
                MOVE_DRAGON_DANCE,
            },
            },
        },
    },
#line 1929
    [DIFFICULTY_NORMAL][TRAINER_DIANTHA] =
    {
#line 1930
        .trainerName = _("Diantha"),
#line 1931
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1934
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1934
            .heldItem = ITEM_FLYING_GEM,
#line 1940
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1935
            .ability = ABILITY_UNBURDEN,
#line 1936
            .lvl = 77,
#line 1937
            .ball = ITEM_MASTER_BALL,
#line 1939
            .friendship = 1,
#line 1941
            .nature = NATURE_ADAMANT,
#line 1938
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1942
                MOVE_ACROBATICS,
                MOVE_FLYING_PRESS,
                MOVE_X_SCISSOR,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1947
            .species = SPECIES_TYRANTRUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1947
            .heldItem = ITEM_ASSAULT_VEST,
#line 1953
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 1955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1948
            .ability = ABILITY_ROCK_HEAD,
#line 1949
            .lvl = 76,
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
                MOVE_HEAD_SMASH,
                MOVE_DRAGON_CLAW,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1960
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1960
            .heldItem = ITEM_EJECT_BUTTON,
#line 1966
            .ev = TRAINER_PARTY_EVS(244, 0, 80, 0, 172, 12),
#line 1968
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1961
            .ability = ABILITY_REGENERATOR,
#line 1962
            .lvl = 76,
#line 1963
            .ball = ITEM_MASTER_BALL,
#line 1965
            .friendship = 1,
#line 1967
            .nature = NATURE_MODEST,
#line 1964
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1969
                MOVE_SLUDGE_BOMB,
                MOVE_GRASS_KNOT,
                MOVE_SPORE,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 1974
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1974
            .heldItem = ITEM_LIFE_ORB,
#line 1980
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
#line 1982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1975
            .ability = ABILITY_STANCE_CHANGE,
#line 1976
            .lvl = 78,
#line 1977
            .ball = ITEM_MASTER_BALL,
#line 1979
            .friendship = 1,
#line 1981
            .nature = NATURE_MODEST,
#line 1978
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1982
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 1987
            .species = SPECIES_BAXCALIBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1987
            .heldItem = ITEM_ICIUM_Z,
#line 1993
            .ev = TRAINER_PARTY_EVS(76, 180, 0, 252, 0, 0),
#line 1995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1988
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 1989
            .lvl = 78,
#line 1990
            .ball = ITEM_MASTER_BALL,
#line 1992
            .friendship = 1,
#line 1994
            .nature = NATURE_ADAMANT,
#line 1991
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1995
                MOVE_ICICLE_CRASH,
                MOVE_GLAIVE_RUSH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 2000
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2000
            .heldItem = ITEM_GARDEVOIRITE,
#line 2006
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2008
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2001
            .ability = ABILITY_TRACE,
#line 2002
            .lvl = 79,
#line 2003
            .ball = ITEM_MASTER_BALL,
#line 2005
            .friendship = 1,
#line 2007
            .nature = NATURE_TIMID,
#line 2004
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2009
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 2014
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING_WAREHOUSE_RAVE] =
    {
#line 2015
        .trainerName = _("Kei-ying"),
#line 2019
        .trainerClass = TRAINER_CLASS_SHARPRISE_COO,
#line 2016
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
0,
#line 2017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2018
        .characterRevealId = REVEAL_KEI_YING,
#line 2020
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2021
        .objectEventGraphicsId = OBJ_EVENT_GFX_KEIYING,
#line 2022
        .mapSec = MAPSEC_CURENO_PORT,
#line 0
        .trainerBackPic = TRAINER_PIC_KEI_YING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2024
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2024
            .heldItem = ITEM_FAIRY_GEM,
#line 2030
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 204, 252, 0),
#line 2032
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2025
            .ability = ABILITY_TELEPATHY,
#line 2026
            .lvl = 81,
#line 2027
            .ball = ITEM_MASTER_BALL,
#line 2029
            .friendship = 1,
#line 2031
            .nature = NATURE_TIMID,
#line 2028
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2033
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2035
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2035
            .heldItem = ITEM_FAIRY_GEM,
#line 2041
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2043
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2036
            .ability = ABILITY_FLOWER_VEIL,
#line 2037
            .lvl = 81,
#line 2038
            .ball = ITEM_MASTER_BALL,
#line 2040
            .friendship = 1,
#line 2042
            .nature = NATURE_TIMID,
#line 2039
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2044
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2046
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2046
            .heldItem = ITEM_FAIRY_GEM,
#line 2052
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 2054
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2047
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2048
            .lvl = 81,
#line 2049
            .ball = ITEM_MASTER_BALL,
#line 2051
            .friendship = 1,
#line 2053
            .nature = NATURE_MODEST,
#line 2050
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2055
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2057
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2057
            .heldItem = ITEM_NORMAL_GEM,
#line 2063
            .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
#line 2065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2058
            .ability = ABILITY_LEVITATE,
#line 2059
            .lvl = 81,
#line 2060
            .ball = ITEM_MASTER_BALL,
#line 2062
            .friendship = 1,
#line 2064
            .nature = NATURE_BRAVE,
#line 2061
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2066
                MOVE_EXPLOSION,
            },
            },
        },
    },
#line 2068
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO] =
    {
#line 2069
        .trainerName = _("Arribaceo"),
#line 2070
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2073
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2073
            .heldItem = ITEM_SHUCA_BERRY,
#line 2079
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2074
            .ability = ABILITY_FILTER,
#line 2075
            .lvl = 80,
#line 2076
            .ball = ITEM_MASTER_BALL,
#line 2078
            .friendship = 1,
#line 2080
            .nature = NATURE_JOLLY,
#line 2077
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2081
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2086
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2086
            .heldItem = ITEM_ASSAULT_VEST,
#line 2092
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2094
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2087
            .ability = ABILITY_LEVITATE,
#line 2088
            .lvl = 79,
#line 2089
            .ball = ITEM_MASTER_BALL,
#line 2091
            .friendship = 1,
#line 2093
            .nature = NATURE_TIMID,
#line 2090
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2095
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2100
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2100
            .heldItem = ITEM_FOCUS_SASH,
#line 2106
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2101
            .ability = ABILITY_SPEED_BOOST,
#line 2102
            .lvl = 79,
#line 2103
            .ball = ITEM_MASTER_BALL,
#line 2105
            .friendship = 1,
#line 2107
            .nature = NATURE_ADAMANT,
#line 2104
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2108
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2113
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2113
            .heldItem = ITEM_FIGHTING_GEM,
#line 2119
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2114
            .ability = ABILITY_UNBURDEN,
#line 2115
            .lvl = 80,
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
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 2126
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO] =
    {
#line 2127
        .trainerName = _("Arribaceo"),
#line 2128
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2131
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2131
            .heldItem = ITEM_FLAME_ORB,
#line 2137
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2132
            .ability = ABILITY_GUTS,
#line 2133
            .lvl = 80,
#line 2134
            .ball = ITEM_MASTER_BALL,
#line 2136
            .friendship = 1,
#line 2138
            .nature = NATURE_JOLLY,
#line 2135
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2139
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2144
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2144
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2150
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2152
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2145
            .ability = ABILITY_ADAPTABILITY,
#line 2146
            .lvl = 79,
#line 2147
            .ball = ITEM_MASTER_BALL,
#line 2149
            .friendship = 1,
#line 2151
            .nature = NATURE_MODEST,
#line 2148
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2153
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2158
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2158
            .heldItem = ITEM_FOCUS_SASH,
#line 2164
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2159
            .ability = ABILITY_SHARPNESS,
#line 2160
            .lvl = 79,
#line 2161
            .ball = ITEM_MASTER_BALL,
#line 2163
            .friendship = 1,
#line 2165
            .nature = NATURE_JOLLY,
#line 2162
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2166
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2171
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2171
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2177
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2179
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2172
            .ability = ABILITY_FLASH_FIRE,
#line 2173
            .lvl = 80,
#line 2174
            .ball = ITEM_MASTER_BALL,
#line 2176
            .friendship = 1,
#line 2178
            .nature = NATURE_MODEST,
#line 2175
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2180
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 2185
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO] =
    {
#line 2186
        .trainerName = _("Buzzrceo"),
#line 2187
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2190
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2190
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2196
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2191
            .ability = ABILITY_HUSTLE,
#line 2192
            .lvl = 80,
#line 2193
            .ball = ITEM_MASTER_BALL,
#line 2195
            .friendship = 1,
#line 2197
            .nature = NATURE_JOLLY,
#line 2194
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2198
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2203
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2203
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2209
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2204
            .ability = ABILITY_UNBURDEN,
#line 2205
            .lvl = 79,
#line 2206
            .ball = ITEM_MASTER_BALL,
#line 2208
            .friendship = 1,
#line 2210
            .nature = NATURE_ADAMANT,
#line 2207
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2211
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2216
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2216
            .heldItem = ITEM_ASSAULT_VEST,
#line 2222
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2217
            .ability = ABILITY_TECHNICIAN,
#line 2218
            .lvl = 79,
#line 2219
            .ball = ITEM_MASTER_BALL,
#line 2221
            .friendship = 1,
#line 2223
            .nature = NATURE_JOLLY,
#line 2220
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2224
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2229
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2229
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2235
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2237
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2230
            .ability = ABILITY_LEVITATE,
#line 2231
            .lvl = 80,
#line 2232
            .ball = ITEM_MASTER_BALL,
#line 2234
            .friendship = 1,
#line 2236
            .nature = NATURE_MODEST,
#line 2233
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2238
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 2243
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO_RAID] =
    {
#line 2244
        .trainerName = _("Buzzrceo"),
#line 2245
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2248
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2248
            .heldItem = ITEM_SHUCA_BERRY,
#line 2254
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2249
            .ability = ABILITY_FILTER,
#line 2250
            .lvl = 80,
#line 2251
            .ball = ITEM_MASTER_BALL,
#line 2253
            .friendship = 1,
#line 2255
            .nature = NATURE_JOLLY,
#line 2252
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2256
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2261
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2261
            .heldItem = ITEM_ASSAULT_VEST,
#line 2267
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2269
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2262
            .ability = ABILITY_LEVITATE,
#line 2263
            .lvl = 79,
#line 2264
            .ball = ITEM_MASTER_BALL,
#line 2266
            .friendship = 1,
#line 2268
            .nature = NATURE_TIMID,
#line 2265
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2270
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2275
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2275
            .heldItem = ITEM_FOCUS_SASH,
#line 2281
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2276
            .ability = ABILITY_SPEED_BOOST,
#line 2277
            .lvl = 79,
#line 2278
            .ball = ITEM_MASTER_BALL,
#line 2280
            .friendship = 1,
#line 2282
            .nature = NATURE_ADAMANT,
#line 2279
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2283
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2288
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2288
            .heldItem = ITEM_FIGHTING_GEM,
#line 2294
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2289
            .ability = ABILITY_UNBURDEN,
#line 2290
            .lvl = 80,
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
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 2301
            .species = SPECIES_PHEROMOSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2301
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 2307
            .ev = TRAINER_PARTY_EVS(100, 28, 0, 128, 252, 0),
#line 2308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2302
            .ability = ABILITY_SWIFT_ASCENT,
#line 2303
            .lvl = 81,
#line 2304
            .ball = ITEM_MASTER_BALL,
#line 2306
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2305
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2308
                MOVE_FOCUS_BLAST,
                MOVE_BUG_BUZZ,
                MOVE_ICE_BEAM,
                MOVE_CLOSE_COMBAT,
            },
            },
        },
    },
#line 2313
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO_RAID] =
    {
#line 2314
        .trainerName = _("Prestoceo"),
#line 2315
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2318
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2318
            .heldItem = ITEM_FLAME_ORB,
#line 2324
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2319
            .ability = ABILITY_GUTS,
#line 2320
            .lvl = 80,
#line 2321
            .ball = ITEM_MASTER_BALL,
#line 2323
            .friendship = 1,
#line 2325
            .nature = NATURE_JOLLY,
#line 2322
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2326
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2331
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2331
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2337
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2339
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2332
            .ability = ABILITY_ADAPTABILITY,
#line 2333
            .lvl = 79,
#line 2334
            .ball = ITEM_MASTER_BALL,
#line 2336
            .friendship = 1,
#line 2338
            .nature = NATURE_MODEST,
#line 2335
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2340
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2345
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2345
            .heldItem = ITEM_FOCUS_SASH,
#line 2351
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2346
            .ability = ABILITY_SHARPNESS,
#line 2347
            .lvl = 79,
#line 2348
            .ball = ITEM_MASTER_BALL,
#line 2350
            .friendship = 1,
#line 2352
            .nature = NATURE_JOLLY,
#line 2349
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2353
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2358
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2358
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2364
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2366
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2359
            .ability = ABILITY_FLASH_FIRE,
#line 2360
            .lvl = 80,
#line 2361
            .ball = ITEM_MASTER_BALL,
#line 2363
            .friendship = 1,
#line 2365
            .nature = NATURE_MODEST,
#line 2362
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2367
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
            {
#line 2372
            .species = SPECIES_BLACEPHALON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2372
            .heldItem = ITEM_PSYCHIUM_Z,
#line 2378
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2380
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2373
            .ability = ABILITY_SWIFT_ASCENT,
#line 2374
            .lvl = 81,
#line 2375
            .ball = ITEM_MASTER_BALL,
#line 2377
            .friendship = 1,
#line 2379
            .nature = NATURE_TIMID,
#line 2376
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2381
                MOVE_EXPANDING_FORCE,
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_MIND_BLOWN,
            },
            },
        },
    },
#line 2386
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO_RAID] =
    {
#line 2387
        .trainerName = _("Prestoceo"),
#line 2388
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2391
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2391
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2397
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2392
            .ability = ABILITY_HUSTLE,
#line 2393
            .lvl = 80,
#line 2394
            .ball = ITEM_MASTER_BALL,
#line 2396
            .friendship = 1,
#line 2398
            .nature = NATURE_JOLLY,
#line 2395
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2399
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2404
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2404
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2410
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2405
            .ability = ABILITY_UNBURDEN,
#line 2406
            .lvl = 79,
#line 2407
            .ball = ITEM_MASTER_BALL,
#line 2409
            .friendship = 1,
#line 2411
            .nature = NATURE_ADAMANT,
#line 2408
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2412
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2417
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2417
            .heldItem = ITEM_ASSAULT_VEST,
#line 2423
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2418
            .ability = ABILITY_TECHNICIAN,
#line 2419
            .lvl = 79,
#line 2420
            .ball = ITEM_MASTER_BALL,
#line 2422
            .friendship = 1,
#line 2424
            .nature = NATURE_JOLLY,
#line 2421
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2425
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2430
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2430
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2436
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2438
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2431
            .ability = ABILITY_LEVITATE,
#line 2432
            .lvl = 80,
#line 2433
            .ball = ITEM_MASTER_BALL,
#line 2435
            .friendship = 1,
#line 2437
            .nature = NATURE_MODEST,
#line 2434
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2439
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2444
            .species = SPECIES_XURKITREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2444
            .heldItem = ITEM_ELECTRIUM_Z,
#line 2450
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2452
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2445
            .ability = ABILITY_SWIFT_ASCENT,
#line 2446
            .lvl = 81,
#line 2447
            .ball = ITEM_MASTER_BALL,
#line 2449
            .friendship = 1,
#line 2451
            .nature = NATURE_TIMID,
#line 2448
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2453
                MOVE_RISING_VOLTAGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_ENERGY_BALL,
                MOVE_TAIL_GLOW,
            },
            },
        },
    },
#line 2458
    [DIFFICULTY_NORMAL][TRAINER_RAMESH_IMIN] =
    {
#line 2459
        .trainerName = _("Ramesh"),
#line 2463
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 2460
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
0,
#line 2461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2462
        .characterRevealId = REVEAL_RAMESH,
#line 2464
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2465
        .objectEventGraphicsId = OBJ_EVENT_GFX_RAMESH,
#line 2466
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_MAGMA_ADMIN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2468
            .species = SPECIES_GHOLDENGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2468
            .heldItem = ITEM_STEEL_GEM,
#line 2474
            .ev = TRAINER_PARTY_EVS(248, 0, 96, 0, 0, 164),
#line 2476
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2469
            .ability = ABILITY_GOOD_AS_GOLD,
#line 2470
            .lvl = 84,
#line 2471
            .ball = ITEM_MASTER_BALL,
#line 2473
            .friendship = 1,
#line 2475
            .nature = NATURE_BOLD,
#line 2472
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2477
                MOVE_MAKE_IT_RAIN,
                MOVE_SHADOW_BALL,
                MOVE_NASTY_PLOT,
                MOVE_RECOVER,
            },
            },
            {
#line 2482
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2482
            .heldItem = ITEM_FOCUS_SASH,
#line 2488
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2490
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2483
            .ability = ABILITY_LEVITATE,
#line 2484
            .lvl = 83,
#line 2485
            .ball = ITEM_MASTER_BALL,
#line 2487
            .friendship = 1,
#line 2489
            .nature = NATURE_TIMID,
#line 2486
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2491
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2496
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2496
            .heldItem = ITEM_ASSAULT_VEST,
#line 2502
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
#line 2504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2497
            .ability = ABILITY_ROCK_HEAD,
#line 2498
            .lvl = 84,
#line 2499
            .ball = ITEM_MASTER_BALL,
#line 2501
            .friendship = 1,
#line 2503
            .nature = NATURE_CAREFUL,
#line 2500
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2504
                MOVE_HEAD_SMASH,
                MOVE_LIQUIDATION,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 2509
            .species = SPECIES_BUZZWOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2509
            .heldItem = ITEM_BUGINIUM_Z,
#line 2515
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 2517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2510
            .ability = ABILITY_SWIFT_ASCENT,
#line 2511
            .lvl = 85,
#line 2512
            .ball = ITEM_MASTER_BALL,
#line 2514
            .friendship = 1,
#line 2516
            .nature = NATURE_ADAMANT,
#line 2513
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2517
                MOVE_CLOSE_COMBAT,
                MOVE_LEECH_LIFE,
                MOVE_EARTHQUAKE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 2522
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2522
            .heldItem = ITEM_ALAKAZITE,
#line 2528
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 248, 252, 0),
#line 2530
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2523
            .ability = ABILITY_SYNCHRONIZE,
#line 2524
            .lvl = 85,
#line 2525
            .ball = ITEM_MASTER_BALL,
#line 2527
            .friendship = 1,
#line 2529
            .nature = NATURE_TIMID,
#line 2526
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2531
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_SHADOW_BALL,
                MOVE_FOCUS_BLAST,
            },
            },
        },
    },
#line 2536
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_IMIN] =
    {
#line 2537
        .trainerName = _("Charlotte"),
#line 2538
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2541
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2541
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 2547
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2549
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2542
            .ability = ABILITY_WEAK_ARMOR,
#line 2543
            .lvl = 85,
#line 2544
            .ball = ITEM_MASTER_BALL,
#line 2546
            .friendship = 1,
#line 2548
            .nature = NATURE_TIMID,
#line 2545
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2550
                MOVE_ARMOR_CANNON,
                MOVE_PSYCHIC,
                MOVE_AURA_SPHERE,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 2555
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2555
            .heldItem = ITEM_ASSAULT_VEST,
#line 2561
            .ev = TRAINER_PARTY_EVS(152, 252, 4, 100, 0, 0),
#line 2563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2556
            .ability = ABILITY_MOLD_BREAKER,
#line 2557
            .lvl = 86,
#line 2558
            .ball = ITEM_MASTER_BALL,
#line 2560
            .friendship = 1,
#line 2562
            .nature = NATURE_ADAMANT,
#line 2559
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2563
                MOVE_DRAGON_CLAW,
                MOVE_IRON_HEAD,
                MOVE_FIRST_IMPRESSION,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2568
            .species = SPECIES_CORVIKNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2568
            .heldItem = ITEM_WACAN_BERRY,
#line 2574
            .ev = TRAINER_PARTY_EVS(252, 100, 0, 100, 0, 56),
#line 2576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2569
            .ability = ABILITY_MIRROR_ARMOR,
#line 2570
            .lvl = 85,
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
                MOVE_IRON_HEAD,
                MOVE_BRAVE_BIRD,
                MOVE_BULK_UP,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 2581
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2581
            .heldItem = ITEM_FAIRY_GEM,
#line 2587
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2589
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2582
            .ability = ABILITY_SYNCHRONIZE,
#line 2583
            .lvl = 86,
#line 2584
            .ball = ITEM_MASTER_BALL,
#line 2586
            .friendship = 1,
#line 2588
            .nature = NATURE_TIMID,
#line 2585
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2590
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 2595
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2595
            .heldItem = ITEM_GRASSIUM_Z,
#line 2601
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2596
            .ability = ABILITY_CONTRARY,
#line 2597
            .lvl = 86,
#line 2598
            .ball = ITEM_MASTER_BALL,
#line 2600
            .friendship = 1,
#line 2602
            .nature = NATURE_QUIRKY,
#line 2599
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2603
                MOVE_LEAF_STORM,
                MOVE_AQUA_TAIL,
                MOVE_DRAGON_PULSE,
                MOVE_FRENZY_PLANT,
            },
            },
            {
#line 2609
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2615
            .ev = TRAINER_PARTY_EVS(176, 0, 0, 80, 252, 0),
#line 2617
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2610
            .ability = ABILITY_WATER_ABSORB,
#line 2611
            .lvl = 87,
#line 2612
            .ball = ITEM_MASTER_BALL,
#line 2614
            .friendship = 1,
#line 2616
            .nature = NATURE_MODEST,
#line 2613
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2618
                MOVE_ICE_BEAM,
                MOVE_SPARKLING_ARIA,
                MOVE_THUNDERBOLT,
                MOVE_REST,
            },
            },
        },
    },
#line 2623
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_A] =
    {
#line 2624
        .trainerName = _("Adelaide"),
#line 2628
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 2625
        .trainerPic = TRAINER_PIC_ADELAIDE,
        .encounterMusic_gender =
0,
#line 2626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2627
        .characterRevealId = REVEAL_ADELAIDE,
#line 2629
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2630
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADELAIDE,
#line 2631
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_ADELAIDE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2633
            .species = SPECIES_SALAZZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2633
            .heldItem = ITEM_FOCUS_SASH,
#line 2639
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 2641
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2634
            .ability = ABILITY_OBLIVIOUS,
#line 2635
            .lvl = 87,
#line 2636
            .ball = ITEM_MASTER_BALL,
#line 2638
            .friendship = 1,
#line 2640
            .nature = NATURE_TIMID,
#line 2637
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2642
                MOVE_FLAMETHROWER,
                MOVE_SLUDGE_WAVE,
                MOVE_TOXIC_SPIKES,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 2647
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2647
            .heldItem = ITEM_CHOPLE_BERRY,
#line 2653
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2655
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2648
            .ability = ABILITY_SAND_STREAM,
#line 2649
            .lvl = 86,
#line 2650
            .ball = ITEM_MASTER_BALL,
#line 2652
            .friendship = 1,
#line 2654
            .nature = NATURE_ADAMANT,
#line 2651
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2655
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
                MOVE_IRON_HEAD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 2660
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2660
            .heldItem = ITEM_FIGHTING_GEM,
#line 2666
            .ev = TRAINER_PARTY_EVS(252, 144, 12, 96, 0, 4),
#line 2668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2661
            .ability = ABILITY_DEFIANT,
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
                MOVE_RAGE_FIST,
                MOVE_DRAIN_PUNCH,
                MOVE_BULK_UP,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 2673
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2673
            .heldItem = ITEM_SCOPE_LENS,
#line 2679
            .ev = TRAINER_PARTY_EVS(116, 0, 0, 248, 144, 0),
#line 2681
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2674
            .ability = ABILITY_SUPER_LUCK,
#line 2675
            .lvl = 87,
#line 2676
            .ball = ITEM_MASTER_BALL,
#line 2678
            .friendship = 1,
#line 2680
            .nature = NATURE_TIMID,
#line 2677
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2682
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
                MOVE_TAILWIND,
            },
            },
            {
#line 2687
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2687
            .heldItem = ITEM_DRAGONIUM_Z,
#line 2693
            .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
#line 2695
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2688
            .ability = ABILITY_STAMINA,
#line 2689
            .lvl = 88,
#line 2690
            .ball = ITEM_MASTER_BALL,
#line 2692
            .friendship = 1,
#line 2694
            .nature = NATURE_BOLD,
#line 2691
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2696
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2702
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2708
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 8, 248, 0),
#line 2710
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2703
            .ability = ABILITY_FRISK,
#line 2704
            .lvl = 89,
#line 2705
            .ball = ITEM_MASTER_BALL,
#line 2707
            .friendship = 1,
#line 2709
            .nature = NATURE_MODEST,
#line 2706
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2711
                MOVE_EXPANDING_FORCE,
                MOVE_BUG_BUZZ,
                MOVE_ENERGY_BALL,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 2716
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_B] =
    {
#line 2717
        .trainerName = _("Adelaide"),
#line 2718
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2720
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2722
            .species = SPECIES_NIHILEGO_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2722
            .heldItem = ITEM_POWER_HERB,
#line 2728
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2730
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2723
            .ability = ABILITY_SWIFT_ASCENT,
#line 2724
            .lvl = 90,
#line 2725
            .ball = ITEM_MASTER_BALL,
#line 2727
            .friendship = 1,
#line 2729
            .nature = NATURE_TIMID,
#line 2726
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2731
                MOVE_POWER_GEM,
                MOVE_SLUDGE_WAVE,
                MOVE_DAZZLING_GLEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 2736
            .species = SPECIES_CELESTEELA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2736
            .heldItem = ITEM_LEFTOVERS,
#line 2742
            .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
#line 2743
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2737
            .ability = ABILITY_SWIFT_ASCENT,
#line 2738
            .lvl = 90,
#line 2739
            .ball = ITEM_MASTER_BALL,
#line 2741
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2740
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2743
                MOVE_HEAVY_SLAM,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 2748
            .species = SPECIES_KARTANA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2748
            .heldItem = ITEM_ASSAULT_VEST,
#line 2754
            .ev = TRAINER_PARTY_EVS(0, 8, 0, 252, 0, 248),
#line 2756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2749
            .ability = ABILITY_SWIFT_ASCENT,
#line 2750
            .lvl = 90,
#line 2751
            .ball = ITEM_MASTER_BALL,
#line 2753
            .friendship = 1,
#line 2755
            .nature = NATURE_ADAMANT,
#line 2752
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2756
                MOVE_LEAF_BLADE,
                MOVE_SMART_STRIKE,
                MOVE_SACRED_SWORD,
                MOVE_GUILLOTINE,
            },
            },
            {
#line 2761
            .species = SPECIES_GUZZLORD_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2761
            .heldItem = ITEM_ROSELI_BERRY,
#line 2767
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
#line 2768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2762
            .ability = ABILITY_SWIFT_ASCENT,
#line 2763
            .lvl = 90,
#line 2764
            .ball = ITEM_MASTER_BALL,
#line 2766
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2765
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2769
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_GYRO_BALL,
            },
            },
            {
#line 2774
            .species = SPECIES_NAGANADEL_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .heldItem = ITEM_POISONIUM_Z,
#line 2780
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2782
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2775
            .ability = ABILITY_SWIFT_ASCENT,
#line 2776
            .lvl = 90,
#line 2777
            .ball = ITEM_MASTER_BALL,
#line 2779
            .friendship = 1,
#line 2781
            .nature = NATURE_TIMID,
#line 2778
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2783
                MOVE_SLUDGE_WAVE,
                MOVE_DRACO_METEOR,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2788
            .species = SPECIES_STAKATAKA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2788
            .heldItem = ITEM_SHUCA_BERRY,
#line 2794
            .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
#line 2796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2789
            .ability = ABILITY_SWIFT_ASCENT,
#line 2790
            .lvl = 90,
#line 2791
            .ball = ITEM_MASTER_BALL,
#line 2793
            .friendship = 1,
#line 2795
            .nature = NATURE_CAREFUL,
#line 2792
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2797
                MOVE_GYRO_BALL,
                MOVE_STONE_EDGE,
                MOVE_BODY_PRESS,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 2802
    [DIFFICULTY_NORMAL][TRAINER_MAGNUS_PROLOGUE] =
    {
#line 2803
        .trainerName = _("Magnus"),
#line 2808
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2804
        .trainerPic = TRAINER_PIC_MAGNUS,
        .encounterMusic_gender =
0,
#line 2806
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2807
        .characterRevealId = REVEAL_MAGNUS,
#line 2809
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2810
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 2811
        .mapSec = MAPSEC_OROLAND_COLISEUM,
#line 0
        .trainerBackPic = TRAINER_PIC_MAGNUS,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2813
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2813
            .heldItem = ITEM_MYSTIC_WATER,
#line 2819
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2814
            .ability = ABILITY_SAND_RUSH,
#line 2815
            .lvl = 87,
#line 2816
            .ball = ITEM_MASTER_BALL,
#line 2818
            .friendship = 1,
#line 2820
            .nature = NATURE_ADAMANT,
#line 2817
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2821
                MOVE_FISHIOUS_REND,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2826
            .species = SPECIES_SANDACONDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2826
            .heldItem = ITEM_SITRUS_BERRY,
#line 2832
            .ev = TRAINER_PARTY_EVS(252, 80, 0, 0, 0, 176),
#line 2834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2827
            .ability = ABILITY_SAND_SPIT,
#line 2828
            .lvl = 88,
#line 2829
            .ball = ITEM_MASTER_BALL,
#line 2831
            .friendship = 1,
#line 2833
            .nature = NATURE_CAREFUL,
#line 2830
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2834
                MOVE_HIGH_HORSEPOWER,
                MOVE_STONE_EDGE,
                MOVE_GLARE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 2839
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2839
            .heldItem = ITEM_SCOPE_LENS,
#line 2845
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 2847
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2840
            .ability = ABILITY_SUPER_LUCK,
#line 2841
            .lvl = 87,
#line 2842
            .ball = ITEM_MASTER_BALL,
#line 2844
            .friendship = 1,
#line 2846
            .nature = NATURE_TIMID,
#line 2843
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2848
                MOVE_DAZZLING_GLEAM,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 2853
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2853
            .heldItem = ITEM_FLYING_GEM,
#line 2859
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2854
            .ability = ABILITY_SAND_VEIL,
#line 2855
            .lvl = 87,
#line 2856
            .ball = ITEM_MASTER_BALL,
#line 2858
            .friendship = 1,
#line 2860
            .nature = NATURE_JOLLY,
#line 2857
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2861
                MOVE_ACROBATICS,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SWORDS_DANCE,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2866
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2866
            .heldItem = ITEM_GROUNDIUM_Z,
#line 2872
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2867
            .ability = ABILITY_SAND_RUSH,
#line 2868
            .lvl = 88,
#line 2869
            .ball = ITEM_MASTER_BALL,
#line 2871
            .friendship = 1,
#line 2873
            .nature = NATURE_ADAMANT,
#line 2870
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2874
                MOVE_DRILL_RUN,
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2879
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2879
            .heldItem = ITEM_TYRANITARITE,
#line 2885
            .ev = TRAINER_PARTY_EVS(252, 104, 0, 76, 0, 76),
#line 2887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2880
            .ability = ABILITY_SAND_STREAM,
#line 2881
            .lvl = 89,
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
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_STONE_EDGE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 2892
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 2893
        .trainerName = _("Ellen"),
#line 2894
        .trainerPic = TRAINER_PIC_ELLEN,
        .encounterMusic_gender =
0,
#line 2896
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2897
        .characterRevealId = REVEAL_ELLEN,
#line 2898
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2899
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELLEN,
#line 2900
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_ELLEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2902
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2902
            .heldItem = ITEM_SITRUS_BERRY,
#line 2908
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2910
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2903
            .ability = ABILITY_SERENE_GRACE,
#line 2904
            .lvl = 89,
#line 2905
            .ball = ITEM_MASTER_BALL,
#line 2907
            .friendship = 1,
#line 2909
            .nature = NATURE_MODEST,
#line 2906
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2911
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2916
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2916
            .heldItem = ITEM_SWAMPERTITE,
#line 2922
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2917
            .ability = ABILITY_TORRENT,
#line 2918
            .lvl = 91,
#line 2919
            .ball = ITEM_MASTER_BALL,
#line 2921
            .friendship = 1,
#line 2923
            .nature = NATURE_ADAMANT,
#line 2920
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2924
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2929
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2929
            .heldItem = ITEM_GRASSIUM_Z,
#line 2935
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2930
            .ability = ABILITY_STEELWORKER,
#line 2931
            .lvl = 89,
#line 2932
            .ball = ITEM_MASTER_BALL,
#line 2934
            .friendship = 1,
#line 2936
            .nature = NATURE_JOLLY,
#line 2933
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2937
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2942
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2942
            .heldItem = ITEM_NORMAL_GEM,
#line 2948
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2943
            .ability = ABILITY_INTIMIDATE,
#line 2944
            .lvl = 90,
#line 2945
            .ball = ITEM_MASTER_BALL,
#line 2947
            .friendship = 1,
#line 2949
            .nature = NATURE_ADAMANT,
#line 2946
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2950
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 2955
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2955
            .heldItem = ITEM_BLACK_SLUDGE,
#line 2961
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2956
            .ability = ABILITY_MERCILESS,
#line 2957
            .lvl = 89,
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
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 2968
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2968
            .heldItem = ITEM_ASSAULT_VEST,
#line 2974
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 2976
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2969
            .ability = ABILITY_STAMINA,
#line 2970
            .lvl = 90,
#line 2971
            .ball = ITEM_MASTER_BALL,
#line 2973
            .friendship = 1,
#line 2975
            .nature = NATURE_MODEST,
#line 2972
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2977
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 2982
    [DIFFICULTY_NORMAL][TRAINER_ARMANDO] =
    {
#line 2983
        .trainerName = _("Armando"),
#line 2984
        .trainerPic = TRAINER_PIC_ARMANDO,
        .encounterMusic_gender =
0,
#line 2986
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2987
        .characterRevealId = REVEAL_ARMANDO,
#line 2988
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2989
        .objectEventGraphicsId = OBJ_EVENT_GFX_ARMANDO,
#line 2990
        .mapSec = MAPSEC_LEAVERRA_FOREST,
#line 0
        .trainerBackPic = TRAINER_PIC_ARMANDO,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2992
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2992
            .heldItem = ITEM_LIFE_ORB,
#line 2998
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3000
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2993
            .ability = ABILITY_CHLOROPHYLL,
#line 2994
            .lvl = 87,
#line 2995
            .ball = ITEM_MASTER_BALL,
#line 2997
            .friendship = 1,
#line 2999
            .nature = NATURE_MODEST,
#line 2996
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3001
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3006
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3006
            .heldItem = ITEM_DRAGON_GEM,
#line 3012
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3014
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3007
            .ability = ABILITY_LEVITATE,
#line 3008
            .lvl = 88,
#line 3009
            .ball = ITEM_MASTER_BALL,
#line 3011
            .friendship = 1,
#line 3013
            .nature = NATURE_TIMID,
#line 3010
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3015
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3020
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3020
            .heldItem = ITEM_LEFTOVERS,
#line 3026
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3028
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3021
            .ability = ABILITY_TELEPATHY,
#line 3022
            .lvl = 88,
#line 3023
            .ball = ITEM_MASTER_BALL,
#line 3025
            .friendship = 1,
#line 3027
            .nature = NATURE_BOLD,
#line 3024
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3029
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3034
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3034
            .heldItem = ITEM_FLAME_ORB,
#line 3040
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3035
            .ability = ABILITY_GUTS,
#line 3036
            .lvl = 87,
#line 3037
            .ball = ITEM_MASTER_BALL,
#line 3039
            .friendship = 1,
#line 3041
            .nature = NATURE_ADAMANT,
#line 3038
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3042
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3047
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3047
            .heldItem = ITEM_FIRIUM_Z,
#line 3053
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3055
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3048
            .ability = ABILITY_FLAME_BODY,
#line 3049
            .lvl = 88,
#line 3050
            .ball = ITEM_MASTER_BALL,
#line 3052
            .friendship = 1,
#line 3054
            .nature = NATURE_MODEST,
#line 3051
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3056
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3062
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3068
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3063
            .ability = ABILITY_WHITE_SMOKE,
#line 3064
            .lvl = 89,
#line 3065
            .ball = ITEM_MASTER_BALL,
#line 3067
            .friendship = 1,
#line 3069
            .nature = NATURE_JOLLY,
#line 3066
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3070
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3075
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3076
        .trainerName = _("Kei-ying"),
#line 3080
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3077
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
0,
#line 3079
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KEI_YING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3082
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3082
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3088
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3083
            .ability = ABILITY_UNSEEN_FIST,
#line 3084
            .lvl = 88,
#line 3085
            .ball = ITEM_MASTER_BALL,
#line 3087
            .friendship = 1,
#line 3089
            .nature = NATURE_ADAMANT,
#line 3086
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3090
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3095
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3095
            .heldItem = ITEM_FLYING_GEM,
#line 3101
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3103
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3096
            .ability = ABILITY_DRIZZLE,
#line 3097
            .lvl = 86,
#line 3098
            .ball = ITEM_MASTER_BALL,
#line 3100
            .friendship = 1,
#line 3102
            .nature = NATURE_TIMID,
#line 3099
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3104
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3109
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3109
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3115
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3110
            .ability = ABILITY_DRY_SKIN,
#line 3111
            .lvl = 87,
#line 3112
            .ball = ITEM_MASTER_BALL,
#line 3114
            .friendship = 1,
#line 3116
            .nature = NATURE_ADAMANT,
#line 3113
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3117
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3122
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3122
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3128
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3123
            .ability = ABILITY_TECHNICIAN,
#line 3124
            .lvl = 86,
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
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3135
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3135
            .heldItem = ITEM_LIFE_ORB,
#line 3141
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3136
            .ability = ABILITY_IRON_FIST,
#line 3137
            .lvl = 87,
#line 3138
            .ball = ITEM_MASTER_BALL,
#line 3140
            .friendship = 1,
#line 3142
            .nature = NATURE_JOLLY,
#line 3139
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3143
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3148
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3148
            .heldItem = ITEM_FOCUS_SASH,
#line 3154
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3149
            .ability = ABILITY_UNSEEN_FIST,
#line 3150
            .lvl = 88,
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
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3161
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
    {
#line 3162
        .trainerName = _("Melissa"),
#line 3163
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3165
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3167
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3168
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3170
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3171
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3173
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3174
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3176
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3177
        .trainerName = _("Melissa"),
#line 3178
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3180
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3182
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3183
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3185
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3188
            .species = SPECIES_EISCUE,
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
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3192
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3194
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3195
        .trainerName = _("Melissa"),
#line 3196
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3198
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3200
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3201
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3203
            .species = SPECIES_FARIGIRAF,
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
            .species = SPECIES_DUSKULL,
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
        },
    },
#line 3212
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3213
        .trainerName = _("Melissa"),
#line 3214
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3216
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3218
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3219
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3221
            .species = SPECIES_FARIGIRAF,
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
            .species = SPECIES_DUSCLOPS,
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
            .species = SPECIES_NINETALES,
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
            {
#line 3233
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3236
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3237
        .trainerName = _("Monty"),
#line 3238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3241
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3241
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3243
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3244
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3248
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3249
        .trainerName = _("Oliver"),
#line 3250
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
0,
#line 3252
        .isNative = TRUE,
#line 3251
        .characterRevealId = REVEAL_OLIVER,
#line 3253
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3255
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3256
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3258
    [DIFFICULTY_NORMAL][TRAINER_00317DFA] =
    {
#line 3259
        .trainerName = _("00317DFA"),
#line 3260
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3263
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3262
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3265
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3268
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3270
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3266
            .ability = ABILITY_FRIEND_GUARD,
#line 3267
            .lvl = 19,
#line 3269
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3271
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3275
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3275
            .heldItem = ITEM_ORAN_BERRY,
#line 3278
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3280
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3276
            .ability = ABILITY_HARVEST,
#line 3277
            .lvl = 20,
#line 3279
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3281
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3286
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3289
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3291
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3287
            .ability = ABILITY_HUSTLE,
#line 3288
            .lvl = 22,
#line 3290
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3292
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3297
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3298
        .trainerName = _("0049EFE8"),
#line 3299
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3301
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3303
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3303
            .heldItem = ITEM_CHARCOAL,
#line 3305
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3307
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3304
            .ability = ABILITY_DROUGHT,
#line 3308
            .lvl = 22,
#line 3306
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3309
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3314
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3314
            .heldItem = ITEM_PASSHO_BERRY,
#line 3316
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3318
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3315
            .ability = ABILITY_FLAME_BODY,
#line 3319
            .lvl = 22,
#line 3317
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3320
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3324
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3325
            .ability = ABILITY_FLAME_BODY,
#line 3328
            .lvl = 21,
#line 3326
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3329
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3334
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3335
        .trainerName = _("023957DE"),
#line 3336
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3338
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3340
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3340
            .heldItem = ITEM_ORAN_BERRY,
#line 3343
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3345
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3341
            .ability = ABILITY_SHED_SKIN,
#line 3342
            .lvl = 25,
#line 3344
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3346
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3351
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3354
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3356
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3352
            .ability = ABILITY_HUSTLE,
#line 3353
            .lvl = 21,
#line 3355
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3357
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3361
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3364
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3366
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3362
            .ability = ABILITY_HUSTLE,
#line 3363
            .lvl = 22,
#line 3365
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3367
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3372
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3373
        .trainerName = _("006E7EFD"),
#line 3374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3376
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3378
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3381
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3383
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3379
            .ability = ABILITY_INNER_FOCUS,
#line 3380
            .lvl = 22,
#line 3382
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3384
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3389
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3392
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3394
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3390
            .ability = ABILITY_IRON_FIST,
#line 3391
            .lvl = 21,
#line 3393
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3395
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3400
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .heldItem = ITEM_FOCUS_SASH,
#line 3403
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3405
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3401
            .ability = ABILITY_RECKLESS,
#line 3402
            .lvl = 21,
#line 3404
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3406
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3411
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3412
        .trainerName = _("007F06A5"),
#line 3413
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3415
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3417
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3417
            .heldItem = ITEM_SITRUS_BERRY,
#line 3420
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3418
            .ability = ABILITY_TORRENT,
#line 3419
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3421
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3425
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3428
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3426
            .ability = ABILITY_OWN_TEMPO,
#line 3427
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3429
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3433
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3433
            .heldItem = ITEM_METRONOME,
#line 3436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3434
            .ability = ABILITY_PROPELLER_TAIL,
#line 3435
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3436
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3438
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3439
        .trainerName = _("01103D48"),
#line 3440
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3443
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3442
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3445
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3448
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3450
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3446
            .ability = ABILITY_PICKUP,
#line 3447
            .lvl = 23,
#line 3449
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3456
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3456
            .heldItem = ITEM_ORAN_BERRY,
#line 3459
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3461
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3457
            .ability = ABILITY_WIND_POWER,
#line 3458
            .lvl = 22,
#line 3460
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3462
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3467
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3467
            .heldItem = ITEM_MAGNET,
#line 3470
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3471
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3468
            .ability = ABILITY_INTIMIDATE,
#line 3469
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3472
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3477
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3478
        .trainerName = _("0272920D"),
#line 3479
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3481
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3483
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3483
            .heldItem = ITEM_ROCKY_HELMET,
#line 3486
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3488
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3484
            .ability = ABILITY_ROUGH_SKIN,
#line 3485
            .lvl = 25,
#line 3487
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3489
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3493
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3496
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3498
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3494
            .ability = ABILITY_UNBURDEN,
#line 3495
            .lvl = 24,
#line 3497
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3499
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3503
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3503
            .heldItem = ITEM_MENTAL_HERB,
#line 3506
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3508
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3504
            .ability = ABILITY_PRANKSTER,
#line 3505
            .lvl = 25,
#line 3507
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3509
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3514
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3515
        .trainerName = _("022A53A0"),
#line 3516
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3519
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3518
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3521
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3521
            .heldItem = ITEM_FOCUS_BAND,
#line 3524
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3526
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3522
            .ability = ABILITY_SWARM,
#line 3523
            .lvl = 20,
#line 3525
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3527
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3531
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3531
            .heldItem = ITEM_FOCUS_BAND,
#line 3534
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3536
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3532
            .ability = ABILITY_SWARM,
#line 3533
            .lvl = 24,
#line 3535
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3537
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3541
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3541
            .heldItem = ITEM_SILVER_POWDER,
#line 3544
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3546
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3542
            .ability = ABILITY_SWARM,
#line 3543
            .lvl = 25,
#line 3545
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3547
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3553
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3554
        .trainerName = _("012ED80D"),
#line 3555
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3557
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3559
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3562
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3564
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3560
            .ability = ABILITY_STAMINA,
#line 3561
            .lvl = 21,
#line 3563
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3565
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3570
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3573
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3575
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3571
            .ability = ABILITY_SAND_FORCE,
#line 3572
            .lvl = 20,
#line 3574
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3576
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3581
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3584
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3586
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3582
            .ability = ABILITY_SIMPLE,
#line 3583
            .lvl = 21,
#line 3585
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3591
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3592
        .trainerName = _("01E6E96E"),
#line 3593
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3596
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3595
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3598
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3598
            .heldItem = ITEM_POWER_HERB,
#line 3601
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3603
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3599
            .ability = ABILITY_SHIELDS_DOWN,
#line 3600
            .lvl = 22,
#line 3602
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3604
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3609
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3609
            .heldItem = ITEM_MENTAL_HERB,
#line 3612
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3614
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3610
            .ability = ABILITY_FRIEND_GUARD,
#line 3611
            .lvl = 20,
#line 3613
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3615
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3620
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .heldItem = ITEM_SILK_SCARF,
#line 3623
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3625
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3621
            .ability = ABILITY_SCRAPPY,
#line 3622
            .lvl = 22,
#line 3624
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3626
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3631
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3632
        .trainerName = _("0092D526"),
#line 3633
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3636
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3635
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3638
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3641
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3643
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3639
            .ability = ABILITY_LEAF_GUARD,
#line 3640
            .lvl = 21,
#line 3642
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3644
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3647
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3647
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3650
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3651
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3648
            .ability = ABILITY_EFFECT_SPORE,
#line 3649
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3652
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3657
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3662
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3658
            .ability = ABILITY_CHLOROPHYLL,
#line 3659
            .lvl = 21,
#line 3661
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3663
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3667
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3668
        .trainerName = _("00C593A8"),
#line 3669
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3672
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3671
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3674
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3674
            .heldItem = ITEM_WACAN_BERRY,
#line 3677
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3679
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3675
            .ability = ABILITY_ICE_BODY,
#line 3676
            .lvl = 20,
#line 3678
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3680
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3684
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3684
            .heldItem = ITEM_METRONOME,
#line 3687
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3689
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3685
            .ability = ABILITY_ICE_BODY,
#line 3686
            .lvl = 24,
#line 3688
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3690
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3694
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3697
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3699
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3695
            .ability = ABILITY_OBLIVIOUS,
#line 3696
            .lvl = 23,
#line 3698
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3700
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3704
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3705
        .trainerName = _("01E7C79B"),
#line 3706
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3708
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3710
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3713
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3715
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3711
            .ability = ABILITY_SWARM,
#line 3712
            .lvl = 22,
#line 3714
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3716
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3721
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3721
            .heldItem = ITEM_TWISTED_SPOON,
#line 3724
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3726
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3722
            .ability = ABILITY_ANTICIPATION,
#line 3723
            .lvl = 23,
#line 3725
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3727
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3731
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3734
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3736
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3732
            .ability = ABILITY_PURE_POWER,
#line 3733
            .lvl = 24,
#line 3735
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3737
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3741
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3742
        .trainerName = _("01C7AF3F"),
#line 3743
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3746
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3745
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3748
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3748
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3748
            .heldItem = ITEM_ORAN_BERRY,
#line 3751
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3753
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3749
            .ability = ABILITY_SYMBIOSIS,
#line 3750
            .lvl = 23,
#line 3752
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3754
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3759
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3764
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3760
            .ability = ABILITY_TRACE,
#line 3761
            .lvl = 20,
#line 3763
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3765
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3769
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3769
            .heldItem = ITEM_SITRUS_BERRY,
#line 3772
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3774
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3770
            .ability = ABILITY_TRACE,
#line 3771
            .lvl = 21,
#line 3773
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3775
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3781
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3782
        .trainerName = _("02EEB783"),
#line 3783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3786
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3785
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3788
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3791
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3793
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3789
            .ability = ABILITY_MUMMY,
#line 3790
            .lvl = 21,
#line 3792
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3794
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3798
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .heldItem = ITEM_OCCA_BERRY,
#line 3801
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3803
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3799
            .ability = ABILITY_NO_GUARD,
#line 3800
            .lvl = 25,
#line 3802
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3804
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3808
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3811
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3813
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3809
            .ability = ABILITY_LEVITATE,
#line 3810
            .lvl = 25,
#line 3812
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3814
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3819
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3820
        .trainerName = _("026E91A6"),
#line 3821
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3823
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3825
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .heldItem = ITEM_SITRUS_BERRY,
#line 3828
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3830
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3826
            .ability = ABILITY_ROCK_HEAD,
#line 3827
            .lvl = 20,
#line 3829
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3831
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3836
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3836
            .heldItem = ITEM_GANLON_BERRY,
#line 3839
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3841
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3837
            .ability = ABILITY_CLEAR_BODY,
#line 3838
            .lvl = 24,
#line 3840
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3842
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3846
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3849
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3851
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3847
            .ability = ABILITY_OVERCOAT,
#line 3848
            .lvl = 25,
#line 3850
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3852
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3857
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3858
        .trainerName = _("029E0EF0"),
#line 3859
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3861
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3863
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3866
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3868
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3864
            .ability = ABILITY_POISON_POINT,
#line 3865
            .lvl = 22,
#line 3867
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3869
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3874
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3877
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3879
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3875
            .ability = ABILITY_CLEAR_BODY,
#line 3876
            .lvl = 25,
#line 3878
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3880
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3884
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3884
            .heldItem = ITEM_SITRUS_BERRY,
#line 3887
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3889
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3885
            .ability = ABILITY_GLUTTONY,
#line 3886
            .lvl = 23,
#line 3888
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3890
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3895
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3896
        .trainerName = _("00E46F7D"),
#line 3897
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3900
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3899
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3902
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3905
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3907
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3903
            .ability = ABILITY_SHED_SKIN,
#line 3904
            .lvl = 23,
#line 3906
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3908
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3912
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3915
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3917
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3913
            .ability = ABILITY_WEAK_ARMOR,
#line 3914
            .lvl = 22,
#line 3916
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3918
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 3923
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .heldItem = ITEM_HARD_STONE,
#line 3926
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 3928
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3924
            .ability = ABILITY_STURDY,
#line 3925
            .lvl = 23,
#line 3927
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3929
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3934
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 3935
        .trainerName = _("Blank"),
#line 3936
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3939
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3938
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3941
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3941
            .heldItem = ITEM_BIG_NUGGET,
#line 3944
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 3946
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3942
            .ability = ABILITY_UNBURDEN,
#line 3943
            .lvl = 21,
#line 3945
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3947
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 3951
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3951
            .heldItem = ITEM_ASPEAR_BERRY,
#line 3954
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 3956
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3952
            .ability = ABILITY_FLASH_FIRE,
#line 3953
            .lvl = 25,
#line 3955
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3957
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 3962
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 3963
        .trainerName = _("Blank"),
#line 3964
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3966
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 3968
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3967
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3970
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3970
            .heldItem = ITEM_FIGY_BERRY,
#line 3973
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 3975
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3971
            .ability = ABILITY_GLUTTONY,
#line 3972
            .lvl = 20,
#line 3974
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3976
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3981
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 3982
        .trainerName = _("Blank"),
#line 3983
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 3984
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3986
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3988
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3988
            .heldItem = ITEM_RINDO_BERRY,
#line 3991
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 3993
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3989
            .ability = ABILITY_SWIFT_SWIM,
#line 3990
            .lvl = 23,
#line 3992
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3994
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3998
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3998
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4001
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4003
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3999
            .ability = ABILITY_STENCH,
#line 4000
            .lvl = 20,
#line 4002
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4004
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4008
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4009
        .trainerName = _("Blank"),
#line 4010
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4013
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4012
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4015
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .heldItem = ITEM_TWISTED_SPOON,
#line 4018
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4020
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4016
            .ability = ABILITY_PRANKSTER,
#line 4017
            .lvl = 26,
#line 4019
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4021
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4025
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4025
            .heldItem = ITEM_ROSELI_BERRY,
#line 4028
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4030
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4026
            .ability = ABILITY_CONTRARY,
#line 4027
            .lvl = 26,
#line 4029
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4031
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4035
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4035
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4038
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4040
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4036
            .ability = ABILITY_TINTED_LENS,
#line 4037
            .lvl = 26,
#line 4039
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4041
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4044
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4045
        .trainerName = _("Blank"),
#line 4046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4049
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4048
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4051
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4051
            .heldItem = ITEM_SHUCA_BERRY,
#line 4054
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4056
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4052
            .ability = ABILITY_EFFECT_SPORE,
#line 4053
            .lvl = 25,
#line 4055
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4057
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4061
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4061
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4064
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4066
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4062
            .ability = ABILITY_OVERCOAT,
#line 4063
            .lvl = 26,
#line 4065
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4067
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4071
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4071
            .heldItem = ITEM_SPELL_TAG,
#line 4074
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4076
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4072
            .ability = ABILITY_SWARM,
#line 4073
            .lvl = 24,
#line 4075
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4077
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4080
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4081
        .trainerName = _("Blank"),
#line 4082
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4085
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4084
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4087
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4087
            .heldItem = ITEM_MYSTIC_WATER,
#line 4090
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4092
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4088
            .ability = ABILITY_LIMBER,
#line 4089
            .lvl = 25,
#line 4091
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4093
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4096
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4096
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4099
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4101
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4097
            .ability = ABILITY_HUSTLE,
#line 4098
            .lvl = 26,
#line 4100
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4102
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4105
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4106
        .trainerName = _("Blank"),
#line 4107
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4110
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4109
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4112
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4112
            .heldItem = ITEM_QUICK_CLAW,
#line 4115
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4117
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4113
            .ability = ABILITY_LEVITATE,
#line 4114
            .lvl = 26,
#line 4116
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4118
                MOVE_TAUNT,
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 4122
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4125
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4127
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4123
            .ability = ABILITY_SPEED_BOOST,
#line 4124
            .lvl = 25,
#line 4126
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4128
                MOVE_DESTINY_BOND,
                MOVE_TAUNT,
                MOVE_ASSURANCE,
                MOVE_PSYCHIC_FANGS,
            },
            },
        },
    },
#line 4133
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4134
        .trainerName = _("Blank"),
#line 4135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4138
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4137
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4140
            .species = SPECIES_MILTANK,
#line 4140
            .gender = TRAINER_MON_FEMALE,
#line 4140
            .heldItem = ITEM_COVERT_CLOAK,
#line 4143
            .ev = TRAINER_PARTY_EVS(44, 0, 48, 0, 0, 40),
#line 4145
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4141
            .ability = ABILITY_THICK_FAT,
#line 4142
            .lvl = 26,
#line 4144
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4146
                MOVE_SANDSTORM,
                MOVE_ROLLOUT,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4150
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .heldItem = ITEM_BRIGHT_POWDER,
#line 4153
            .ev = TRAINER_PARTY_EVS(132, 0, 0, 0, 0, 0),
#line 4155
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4151
            .ability = ABILITY_SAND_VEIL,
#line 4152
            .lvl = 23,
#line 4154
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4156
                MOVE_FURY_CUTTER,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 4161
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4161
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4164
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4166
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4162
            .ability = ABILITY_HEALER,
#line 4163
            .lvl = 23,
#line 4165
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4167
                MOVE_SANDSTORM,
                MOVE_HEAL_PULSE,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 4171
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4172
        .trainerName = _("Blank"),
#line 4173
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4176
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4175
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4178
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .heldItem = ITEM_ORAN_BERRY,
#line 4181
            .ev = TRAINER_PARTY_EVS(0, 0, 136, 0, 0, 0),
#line 4183
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4179
            .ability = ABILITY_GOOEY,
#line 4180
            .lvl = 26,
#line 4182
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4184
                MOVE_ACID_SPRAY,
                MOVE_CHILLING_WATER,
                MOVE_SKITTER_SMACK,
            },
            },
        },
    },
#line 4188
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4189
        .trainerName = _("Blank"),
#line 4190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4193
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4192
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4195
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4195
            .heldItem = ITEM_SITRUS_BERRY,
#line 4198
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4200
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4196
            .ability = ABILITY_STURDY,
#line 4197
            .lvl = 27,
#line 4199
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4201
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_HARDEN,
            },
            },
            {
#line 4205
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .heldItem = ITEM_FOCUS_BAND,
#line 4208
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4210
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4206
            .ability = ABILITY_STURDY,
#line 4207
            .lvl = 24,
#line 4209
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4211
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_ENDEAVOR,
                MOVE_SANDSTORM,
            },
            },
        },
    },
#line 4216
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4217
        .trainerName = _("Blank"),
#line 4218
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4221
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4220
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4223
            .species = SPECIES_FLOETTE,
#line 4223
            .gender = TRAINER_MON_FEMALE,
#line 4223
            .heldItem = ITEM_LUM_BERRY,
#line 4226
            .ev = TRAINER_PARTY_EVS(32, 0, 104, 0, 0, 0),
#line 4228
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4224
            .ability = ABILITY_FLOWER_VEIL,
#line 4225
            .lvl = 24,
#line 4227
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4229
                MOVE_WISH,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 4234
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .heldItem = ITEM_MYSTIC_WATER,
#line 4237
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 88, 0, 0),
#line 4239
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4235
            .ability = ABILITY_SHELL_ARMOR,
#line 4236
            .lvl = 25,
#line 4238
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4240
                MOVE_BRICK_BREAK,
                MOVE_RAZOR_SHELL,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 4244
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .heldItem = ITEM_MYSTIC_WATER,
#line 4247
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4249
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4245
            .ability = ABILITY_REGENERATOR,
#line 4246
            .lvl = 24,
#line 4248
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4250
                MOVE_AVALANCHE,
                MOVE_PSYCHIC_NOISE,
                MOVE_MUDDY_WATER,
            },
            },
        },
    },
#line 4255
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4256
        .trainerName = _("Blank"),
#line 4257
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4260
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4259
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4262
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .heldItem = ITEM_ORAN_BERRY,
#line 4265
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4267
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4263
            .ability = ABILITY_MOODY,
#line 4264
            .lvl = 25,
#line 4266
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4268
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_ICY_WIND,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4273
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4273
            .heldItem = ITEM_ORAN_BERRY,
#line 4276
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4278
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4274
            .ability = ABILITY_MOODY,
#line 4275
            .lvl = 25,
#line 4277
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4279
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_BULLET_SEED,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4284
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4284
            .heldItem = ITEM_ORAN_BERRY,
#line 4287
            .ev = TRAINER_PARTY_EVS(16, 32, 16, 24, 32, 16),
#line 4289
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4285
            .ability = ABILITY_MOODY,
#line 4286
            .lvl = 24,
#line 4288
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4290
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_MAGICAL_LEAF,
                MOVE_TEMPER_FLARE,
            },
            },
        },
    },
#line 4295
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4296
        .trainerName = _("Blank"),
#line 4297
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4300
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4299
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4302
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4305
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4303
            .ability = ABILITY_INSOMNIA,
#line 4304
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4306
                MOVE_SANDSTORM,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
            },
            },
            {
#line 4311
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4311
            .heldItem = ITEM_SITRUS_BERRY,
#line 4314
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4312
            .ability = ABILITY_EFFECT_SPORE,
#line 4313
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4315
                MOVE_POISON_POWDER,
                MOVE_POLLEN_PUFF,
                MOVE_PROTECT,
                MOVE_ABSORB,
            },
            },
            {
#line 4320
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4320
            .heldItem = ITEM_LEFTOVERS,
#line 4323
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4321
            .ability = ABILITY_IRON_FIST,
#line 4322
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4324
                MOVE_SANDSTORM,
                MOVE_CURSE,
                MOVE_KNOCK_OFF,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4329
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4330
        .trainerName = _("Blank"),
#line 4331
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4334
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4333
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4336
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4336
            .heldItem = ITEM_EJECT_BUTTON,
#line 4339
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4337
            .ability = ABILITY_BATTERY,
#line 4338
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4340
                MOVE_STICKY_WEB,
                MOVE_LIGHT_SCREEN,
                MOVE_ELECTROWEB,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4345
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4345
            .heldItem = ITEM_CHERI_BERRY,
#line 4348
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4346
            .ability = ABILITY_FLAME_BODY,
#line 4347
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4349
                MOVE_NIGHT_SHADE,
                MOVE_EMBER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4353
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4356
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4354
            .ability = ABILITY_NO_GUARD,
#line 4355
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4357
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_CLAW,
                MOVE_BRUTAL_SWING,
            },
            },
        },
    },
#line 4361
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4362
        .trainerName = _("Blank"),
#line 4363
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4366
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4365
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4368
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4371
            .ev = TRAINER_PARTY_EVS(0, 56, 72, 0, 0, 0),
#line 4373
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4369
            .ability = ABILITY_NEUTRALIZING_GAS,
#line 4370
            .lvl = 23,
#line 4372
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4374
                MOVE_WILL_O_WISP,
                MOVE_SLUDGE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4378
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .heldItem = ITEM_WIDE_LENS,
#line 4381
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4383
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4379
            .ability = ABILITY_FLASH_FIRE,
#line 4380
            .lvl = 23,
#line 4382
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4384
                MOVE_INFERNO,
                MOVE_BABY_DOLL_EYES,
                MOVE_DIG,
                MOVE_HEX,
            },
            },
            {
#line 4389
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4389
            .heldItem = ITEM_FLAME_ORB,
#line 4392
            .ev = TRAINER_PARTY_EVS(0, 28, 0, 0, 0, 108),
#line 4394
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4390
            .ability = ABILITY_QUICK_FEET,
#line 4391
            .lvl = 24,
#line 4393
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4395
                MOVE_FLING,
                MOVE_FACADE,
                MOVE_PROTECT,
            },
            },
            {
#line 4399
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .heldItem = ITEM_CHARCOAL,
#line 4402
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 48, 0, 0),
#line 4404
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4400
            .ability = ABILITY_FLAME_BODY,
#line 4401
            .lvl = 25,
#line 4403
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4405
                MOVE_WILL_O_WISP,
                MOVE_FLAME_WHEEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 4410
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4411
        .trainerName = _("Blank"),
#line 4412
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4414
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4415
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4417
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4417
            .heldItem = ITEM_SCOPE_LENS,
#line 4420
            .ev = TRAINER_PARTY_EVS(0, 0, 72, 0, 0, 64),
#line 4422
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4418
            .ability = ABILITY_SUPER_LUCK,
#line 4419
            .lvl = 24,
#line 4421
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4423
                MOVE_ANCIENT_POWER,
                MOVE_PLAY_ROUGH,
                MOVE_POUNCE,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 4428
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4431
            .ev = TRAINER_PARTY_EVS(0, 92, 44, 0, 0, 0),
#line 4432
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4429
            .ability = ABILITY_RATTLED,
#line 4430
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4433
                MOVE_FROST_BREATH,
                MOVE_DIG,
            },
            },
            {
#line 4436
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4436
            .heldItem = ITEM_SCOPE_LENS,
#line 4439
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 36, 0, 0),
#line 4441
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4437
            .ability = ABILITY_SUPER_LUCK,
#line 4438
            .lvl = 25,
#line 4440
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4442
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_SNARL,
            },
            },
            {
#line 4446
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .heldItem = ITEM_SCOPE_LENS,
#line 4450
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4452
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4447
            .ability = ABILITY_SNIPER,
#line 4448
            .lvl = 23,
#line 4451
            .nature = NATURE_ADAMANT,
#line 4449
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4453
                MOVE_CROSS_POISON,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4456
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4457
        .trainerName = _("Blank"),
#line 4458
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4460
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4461
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4463
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .heldItem = ITEM_FAIRY_FEATHER,
#line 4466
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 20, 104, 0),
#line 4468
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4464
            .ability = ABILITY_STATIC,
#line 4465
            .lvl = 25,
#line 4467
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4469
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 4472
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4472
            .heldItem = ITEM_EXPERT_BELT,
#line 4475
            .ev = TRAINER_PARTY_EVS(0, 96, 0, 0, 0, 32),
#line 4477
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4473
            .ability = ABILITY_OBLIVIOUS,
#line 4474
            .lvl = 25,
#line 4476
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4478
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4481
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4482
        .trainerName = _("Blank"),
#line 4483
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4486
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4485
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4488
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .heldItem = ITEM_MAGO_BERRY,
#line 4491
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 96, 0),
#line 4493
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4489
            .ability = ABILITY_TANGLED_FEET,
#line 4490
            .lvl = 27,
#line 4492
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4494
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 4498
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4498
            .heldItem = ITEM_BLUNDER_POLICY,
#line 4501
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4499
            .ability = ABILITY_QUICK_FEET,
#line 4500
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4502
                MOVE_ICY_WIND,
                MOVE_BODY_SLAM,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 4506
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4509
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4507
            .ability = ABILITY_DOWNLOAD,
#line 4508
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4510
                MOVE_ICY_WIND,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 4513
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4514
        .trainerName = _("Blank"),
#line 4515
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4518
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4517
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4520
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4520
            .heldItem = ITEM_SALAC_BERRY,
#line 4523
            .ev = TRAINER_PARTY_EVS(20, 116, 0, 0, 0, 0),
#line 4525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4521
            .ability = ABILITY_INNER_FOCUS,
#line 4522
            .lvl = 27,
#line 4524
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4525
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4529
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4529
            .heldItem = ITEM_BLACK_BELT,
#line 4532
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 0, 0, 12),
#line 4534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4530
            .ability = ABILITY_UNBURDEN,
#line 4531
            .lvl = 26,
#line 4533
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4534
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 4538
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4539
        .trainerName = _("07D063A5"),
#line 4540
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4543
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4542
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4545
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4548
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4550
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4546
            .ability = ABILITY_INTIMIDATE,
#line 4547
            .lvl = 25,
#line 4549
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4551
                MOVE_HELPING_HAND,
                MOVE_U_TURN,
            },
            },
            {
#line 4554
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4554
            .heldItem = ITEM_SHED_SHELL,
#line 4557
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4559
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4555
            .ability = ABILITY_INTIMIDATE,
#line 4556
            .lvl = 25,
#line 4558
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4560
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 4563
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4563
            .heldItem = ITEM_RED_CARD,
#line 4566
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4568
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4564
            .ability = ABILITY_INTIMIDATE,
#line 4565
            .lvl = 25,
#line 4567
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4569
                MOVE_HELPING_HAND,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4572
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4572
            .heldItem = ITEM_EJECT_BUTTON,
#line 4575
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4577
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4573
            .ability = ABILITY_INTIMIDATE,
#line 4574
            .lvl = 25,
#line 4576
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4578
                MOVE_HELPING_HAND,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4581
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4582
        .trainerName = _("Blank"),
#line 4583
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4586
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4585
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4588
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4591
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 124, 0),
#line 4592
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4589
            .ability = ABILITY_INNER_FOCUS,
#line 4590
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4593
                MOVE_THUNDER_WAVE,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4597
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4600
            .ev = TRAINER_PARTY_EVS(64, 0, 40, 0, 0, 24),
#line 4602
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4598
            .ability = ABILITY_VOLT_ABSORB,
#line 4599
            .lvl = 22,
#line 4601
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4603
                MOVE_BITE,
                MOVE_NUZZLE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 4607
            .species = SPECIES_SNIVY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4610
            .ev = TRAINER_PARTY_EVS(0, 120, 0, 0, 0, 16),
#line 4612
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4608
            .ability = ABILITY_OVERGROW,
#line 4609
            .lvl = 24,
#line 4611
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4613
                MOVE_PETAL_BLIZZARD,
                MOVE_GLARE,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 4617
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4620
            .ev = TRAINER_PARTY_EVS(84, 0, 0, 0, 0, 44),
#line 4622
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4618
            .ability = ABILITY_EFFECT_SPORE,
#line 4619
            .lvl = 24,
#line 4621
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4623
                MOVE_STUN_SPORE,
                MOVE_REVIVAL_BLESSING,
                MOVE_DRAINING_KISS,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4628
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4629
        .trainerName = _("Blank"),
#line 4630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4633
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4632
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4635
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .heldItem = ITEM_SITRUS_BERRY,
#line 4638
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4640
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4636
            .ability = ABILITY_CONTRARY,
#line 4637
            .lvl = 23,
#line 4639
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4641
                MOVE_SWAGGER,
                MOVE_LIGHT_SCREEN,
                MOVE_ACUPRESSURE,
            },
            },
            {
#line 4645
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4645
            .heldItem = ITEM_CHOICE_SCARF,
#line 4648
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 0, 72, 0),
#line 4650
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4646
            .ability = ABILITY_IMPOSTER,
#line 4647
            .lvl = 29,
#line 4649
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4652
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4653
        .trainerName = _("Blank"),
#line 4654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4657
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4656
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4659
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4659
            .heldItem = ITEM_MENTAL_HERB,
#line 4662
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4664
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4660
            .ability = ABILITY_CUTE_CHARM,
#line 4661
            .lvl = 25,
#line 4663
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4665
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4669
            .species = SPECIES_CLEFAIRY,
#line 4669
            .gender = TRAINER_MON_MALE,
#line 4669
            .heldItem = ITEM_MENTAL_HERB,
#line 4672
            .ev = TRAINER_PARTY_EVS(0, 0, 64, 0, 0, 64),
#line 4674
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4670
            .ability = ABILITY_CUTE_CHARM,
#line 4671
            .lvl = 25,
#line 4673
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4675
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4679
            .species = SPECIES_CLEFABLE,
#line 4679
            .gender = TRAINER_MON_FEMALE,
#line 4679
            .heldItem = ITEM_MENTAL_HERB,
#line 4682
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4684
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4680
            .ability = ABILITY_CUTE_CHARM,
#line 4681
            .lvl = 25,
#line 4683
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4685
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 4689
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4690
        .trainerName = _("Blank"),
#line 4691
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4693
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4694
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4696
            .species = SPECIES_MINIOR_METEOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4696
            .heldItem = ITEM_METRONOME,
#line 4699
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 84, 0, 0),
#line 4701
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4697
            .ability = ABILITY_SHIELDS_DOWN,
#line 4698
            .lvl = 35,
#line 4700
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4702
                MOVE_ROLLOUT,
            },
            },
            {
#line 4704
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4704
            .heldItem = ITEM_EVIOLITE,
#line 4707
            .ev = TRAINER_PARTY_EVS(52, 80, 0, 0, 0, 0),
#line 4709
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4705
            .ability = ABILITY_THICK_FAT,
#line 4706
            .lvl = 36,
#line 4708
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4710
                MOVE_ICE_BALL,
            },
            },
            {
#line 4712
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4712
            .heldItem = ITEM_PASSHO_BERRY,
#line 4715
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4717
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4713
            .ability = ABILITY_BATTLE_ARMOR,
#line 4714
            .lvl = 36,
#line 4716
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4718
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 4720
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4721
        .trainerName = _("Blank"),
#line 4722
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4724
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4725
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4727
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4727
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4730
            .ev = TRAINER_PARTY_EVS(72, 0, 0, 0, 56, 0),
#line 4732
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4728
            .ability = ABILITY_DRIZZLE,
#line 4729
            .lvl = 35,
#line 4731
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4733
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
                MOVE_STOCKPILE,
            },
            },
            {
#line 4738
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4738
            .heldItem = ITEM_UTILITY_UMBRELLA,
#line 4741
            .ev = TRAINER_PARTY_EVS(40, 0, 0, 0, 0, 88),
#line 4743
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4739
            .ability = ABILITY_STURDY,
#line 4740
            .lvl = 35,
#line 4742
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4744
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 4749
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4749
            .heldItem = ITEM_LEFTOVERS,
#line 4752
            .ev = TRAINER_PARTY_EVS(84, 0, 56, 0, 0, 0),
#line 4754
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4750
            .ability = ABILITY_RAIN_DISH,
#line 4751
            .lvl = 35,
#line 4753
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4755
                MOVE_WHIRLPOOL,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
                MOVE_PROTECT,
            },
            },
            {
#line 4760
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4760
            .heldItem = ITEM_SNOWBALL,
#line 4763
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 0, 0, 76),
#line 4765
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4761
            .ability = ABILITY_HYPER_CUTTER,
#line 4762
            .lvl = 35,
#line 4764
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4766
                MOVE_VENOSHOCK,
                MOVE_AERIAL_ACE,
                MOVE_BREAKING_SWIPE,
                MOVE_SAND_TOMB,
            },
            },
        },
    },
#line 4771
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4772
        .trainerName = _("Blank"),
#line 4773
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4775
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4776
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4778
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4778
            .heldItem = ITEM_EVIOLITE,
#line 4781
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 72, 0),
#line 4783
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4779
            .ability = ABILITY_LEVITATE,
#line 4780
            .lvl = 35,
#line 4782
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4784
                MOVE_EXTRASENSORY,
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4789
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4789
            .heldItem = ITEM_AIR_BALLOON,
#line 4792
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 0, 88),
#line 4794
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4790
            .ability = ABILITY_ANGER_SHELL,
#line 4791
            .lvl = 35,
#line 4793
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4795
                MOVE_BULLDOZE,
                MOVE_VISE_GRIP,
                MOVE_METAL_CLAW,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4800
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4800
            .heldItem = ITEM_ASSAULT_VEST,
#line 4803
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 44, 84),
#line 4805
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4801
            .ability = ABILITY_LEVITATE,
#line 4802
            .lvl = 36,
#line 4804
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4806
                MOVE_SLUDGE_BOMB,
                MOVE_BODY_SLAM,
                MOVE_VENOSHOCK,
                MOVE_GYRO_BALL,
            },
            },
        },
    },
#line 4811
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4812
        .trainerName = _("Blank"),
#line 4813
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4815
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4816
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4818
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4818
            .heldItem = ITEM_CHOICE_SCARF,
#line 4821
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4823
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4819
            .ability = ABILITY_SWIFT_SWIM,
#line 4820
            .lvl = 36,
#line 4822
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4824
                MOVE_SURF,
            },
            },
            {
#line 4826
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4826
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4829
            .ev = TRAINER_PARTY_EVS(52, 0, 76, 0, 0, 0),
#line 4831
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4827
            .ability = ABILITY_STORM_DRAIN,
#line 4828
            .lvl = 36,
#line 4830
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4832
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 4837
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4838
        .trainerName = _("Blank"),
#line 4839
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4841
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4842
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4844
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4844
            .heldItem = ITEM_DRAGON_FANG,
#line 4847
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4849
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4845
            .ability = ABILITY_PRESSURE,
#line 4846
            .lvl = 33,
#line 4848
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4850
                MOVE_ICE_FANG,
                MOVE_BITE,
                MOVE_DRAGON_BREATH,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4855
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4855
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4858
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4860
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4856
            .ability = ABILITY_SAND_SPIT,
#line 4857
            .lvl = 34,
#line 4859
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4861
                MOVE_SAND_TOMB,
                MOVE_WRAP,
                MOVE_GLARE,
            },
            },
            {
#line 4865
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4865
            .heldItem = ITEM_WIDE_LENS,
#line 4868
            .ev = TRAINER_PARTY_EVS(36, 0, 88, 0, 0, 0),
#line 4870
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4866
            .ability = ABILITY_PRESSURE,
#line 4867
            .lvl = 35,
#line 4869
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4871
                MOVE_DREAM_EATER,
                MOVE_NIGHT_SHADE,
                MOVE_HYPNOSIS,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 4876
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4876
            .heldItem = ITEM_HARD_STONE,
#line 4879
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4881
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4877
            .ability = ABILITY_SAND_VEIL,
#line 4878
            .lvl = 34,
#line 4880
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4882
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4887
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4888
        .trainerName = _("Blank"),
#line 4889
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4891
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4892
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4894
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4894
            .heldItem = ITEM_RINDO_BERRY,
#line 4897
            .ev = TRAINER_PARTY_EVS(0, 32, 0, 0, 0, 96),
#line 4899
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4895
            .ability = ABILITY_SOLID_ROCK,
#line 4896
            .lvl = 36,
#line 4898
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4900
                MOVE_ZEN_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_AQUA_JET,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 4905
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4905
            .heldItem = ITEM_RED_CARD,
#line 4908
            .ev = TRAINER_PARTY_EVS(48, 80, 0, 0, 0, 0),
#line 4910
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4906
            .ability = ABILITY_STURDY,
#line 4907
            .lvl = 35,
#line 4909
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4911
                MOVE_IRON_HEAD,
                MOVE_POWER_GEM,
                MOVE_METAL_BURST,
                MOVE_ROAR,
            },
            },
            {
#line 4916
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4916
            .heldItem = ITEM_KINGS_ROCK,
#line 4919
            .ev = TRAINER_PARTY_EVS(20, 0, 0, 0, 0, 108),
#line 4921
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4917
            .ability = ABILITY_SWARM,
#line 4918
            .lvl = 36,
#line 4920
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4922
                MOVE_WING_ATTACK,
                MOVE_POUNCE,
                MOVE_SMACK_DOWN,
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 4927
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 4928
        .trainerName = _("Blank"),
#line 4929
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4931
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4932
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4934
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4934
            .heldItem = ITEM_FLAME_ORB,
#line 4937
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4939
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4935
            .ability = ABILITY_MAGIC_GUARD,
#line 4936
            .lvl = 34,
#line 4938
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4940
                MOVE_AIR_CUTTER,
                MOVE_CONFUSION,
                MOVE_PSYCHO_SHIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4945
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4945
            .heldItem = ITEM_EJECT_BUTTON,
#line 4948
            .ev = TRAINER_PARTY_EVS(44, 0, 80, 0, 0, 0),
#line 4950
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4946
            .ability = ABILITY_FRIEND_GUARD,
#line 4947
            .lvl = 37,
#line 4949
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4951
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 4954
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4954
            .heldItem = ITEM_FOCUS_SASH,
#line 4957
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4959
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4955
            .ability = ABILITY_ARENA_TRAP,
#line 4956
            .lvl = 33,
#line 4958
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4960
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4965
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .heldItem = ITEM_SITRUS_BERRY,
#line 4968
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4970
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4966
            .ability = ABILITY_MUMMY,
#line 4967
            .lvl = 35,
#line 4969
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4971
                MOVE_HEX,
                MOVE_WILL_O_WISP,
                MOVE_MEAN_LOOK,
                MOVE_CURSE,
            },
            },
        },
    },
#line 4976
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 4977
        .trainerName = _("Blank"),
#line 4978
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4980
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4981
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4983
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4983
            .heldItem = ITEM_CHOICE_SCARF,
#line 4986
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 124, 0, 0),
#line 4988
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4984
            .ability = ABILITY_ROUGH_SKIN,
#line 4985
            .lvl = 36,
#line 4987
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4989
                MOVE_FLIP_TURN,
            },
            },
            {
#line 4991
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .heldItem = ITEM_SALAC_BERRY,
#line 4994
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 100, 0, 0),
#line 4996
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4992
            .ability = ABILITY_VOLT_ABSORB,
#line 4993
            .lvl = 35,
#line 4995
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4997
                MOVE_ROCK_TOMB,
                MOVE_ICY_WIND,
                MOVE_ELECTRO_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5002
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .heldItem = ITEM_SOFT_SAND,
#line 5005
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 5007
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5003
            .ability = ABILITY_SHELL_ARMOR,
#line 5004
            .lvl = 35,
#line 5006
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5008
                MOVE_BODY_SLAM,
                MOVE_FLAME_WHEEL,
                MOVE_BULLDOZE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5013
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 5014
        .trainerName = _("Blank"),
#line 5015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5017
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5019
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5019
            .heldItem = ITEM_EVIOLITE,
#line 5022
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5020
            .ability = ABILITY_WIND_POWER,
#line 5021
            .lvl = 43,
#line 5023
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5024
                MOVE_DISCHARGE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5028
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5028
            .heldItem = ITEM_CELL_BATTERY,
#line 5031
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5029
            .ability = ABILITY_LIMBER,
#line 5030
            .lvl = 43,
#line 5032
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5033
                MOVE_BLAZE_KICK,
                MOVE_SUCKER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5038
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5038
            .heldItem = ITEM_TOXIC_ORB,
#line 5041
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 0, 80),
#line 5043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5039
            .ability = ABILITY_MARVEL_SCALE,
#line 5040
            .lvl = 42,
#line 5042
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5043
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_BREAKING_SWIPE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5048
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5048
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5051
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5049
            .ability = ABILITY_STURDY,
#line 5050
            .lvl = 43,
#line 5052
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5053
                MOVE_STOMPING_TANTRUM,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_FANG,
                MOVE_COUNTER,
            },
            },
        },
    },
#line 5058
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 5059
        .trainerName = _("Blank"),
#line 5060
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5062
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5064
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5064
            .heldItem = ITEM_ROCKY_HELMET,
#line 5067
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 0, 0, 100),
#line 5069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5065
            .ability = ABILITY_PROPELLER_TAIL,
#line 5066
            .lvl = 43,
#line 5068
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5069
                MOVE_DIVE,
                MOVE_DRILL_RUN,
                MOVE_BITE,
                MOVE_AQUA_JET,
            },
            },
            {
#line 5074
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5074
            .heldItem = ITEM_MYSTIC_WATER,
#line 5077
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 100, 0, 0),
#line 5079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5075
            .ability = ABILITY_GULP_MISSILE,
#line 5076
            .lvl = 44,
#line 5078
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5079
                MOVE_SURF,
                MOVE_DIVE,
                MOVE_DRILL_PECK,
                MOVE_STOCKPILE,
            },
            },
            {
#line 5084
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5084
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 5087
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 40),
#line 5089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5085
            .ability = ABILITY_VOLT_ABSORB,
#line 5086
            .lvl = 44,
#line 5088
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5089
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_UPPER_HAND,
            },
            },
        },
    },
#line 5094
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 5095
        .trainerName = _("Billy"),
#line 5096
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
0,
#line 5098
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5100
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5100
            .heldItem = ITEM_WACAN_BERRY,
#line 5103
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5101
            .ability = ABILITY_INTIMIDATE,
#line 5102
            .lvl = 43,
#line 5104
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5105
                MOVE_TAKE_DOWN,
                MOVE_FLY,
                MOVE_U_TURN,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 5110
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .heldItem = ITEM_FLAME_ORB,
#line 5113
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 80, 0, 0),
#line 5115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5111
            .ability = ABILITY_GUTS,
#line 5112
            .lvl = 44,
#line 5114
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5115
                MOVE_FACADE,
                MOVE_LASH_OUT,
                MOVE_DUAL_WINGBEAT,
                MOVE_TORMENT,
            },
            },
            {
#line 5120
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5120
            .heldItem = ITEM_WIDE_LENS,
#line 5123
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5121
            .ability = ABILITY_HUSTLE,
#line 5122
            .lvl = 43,
#line 5124
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5125
                MOVE_FOUL_PLAY,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_ROOST,
            },
            },
            {
#line 5130
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5130
            .heldItem = ITEM_LIFE_ORB,
#line 5133
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5131
            .ability = ABILITY_SHEER_FORCE,
#line 5132
            .lvl = 44,
#line 5134
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5135
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_POUNCE,
                MOVE_MIMIC,
            },
            },
        },
    },
#line 5140
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 5141
        .trainerName = _("Blank"),
#line 5142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5144
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5146
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5146
            .heldItem = ITEM_ADRENALINE_ORB,
#line 5149
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5147
            .ability = ABILITY_KEEN_EYE,
#line 5148
            .lvl = 44,
#line 5150
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5151
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 5156
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5156
            .heldItem = ITEM_FOCUS_SASH,
#line 5159
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5157
            .ability = ABILITY_GALE_WINGS,
#line 5158
            .lvl = 45,
#line 5160
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5161
                MOVE_FLY,
                MOVE_STEEL_WING,
                MOVE_FIRE_SPIN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5166
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5166
            .heldItem = ITEM_POWER_HERB,
#line 5169
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5167
            .ability = ABILITY_WIND_RIDER,
#line 5168
            .lvl = 44,
#line 5170
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5171
                MOVE_SOLAR_BLADE,
                MOVE_THIEF,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5176
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5176
            .heldItem = ITEM_YACHE_BERRY,
#line 5179
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5177
            .ability = ABILITY_INFILTRATOR,
#line 5178
            .lvl = 44,
#line 5180
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5181
                MOVE_DRAGON_PULSE,
                MOVE_PSYCHIC_NOISE,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 5186
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 5187
        .trainerName = _("Blank"),
#line 5188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5190
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5192
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5192
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5195
            .ev = TRAINER_PARTY_EVS(0, 0, 140, 0, 0, 0),
#line 5197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5193
            .ability = ABILITY_TECHNICIAN,
#line 5194
            .lvl = 46,
#line 5196
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5197
                MOVE_BUG_BITE,
                MOVE_TRAILBLAZE,
                MOVE_DUAL_WINGBEAT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5202
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5202
            .heldItem = ITEM_MARANGA_BERRY,
#line 5205
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5203
            .ability = ABILITY_SIMPLE,
#line 5204
            .lvl = 44,
#line 5206
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5207
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5210
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5210
            .heldItem = ITEM_GANLON_BERRY,
#line 5213
            .ev = TRAINER_PARTY_EVS(0, 80, 60, 0, 0, 0),
#line 5214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5211
            .ability = ABILITY_CHEEK_POUCH,
#line 5212
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5214
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_SEED_BOMB,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 5219
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 5220
        .trainerName = _("Blank"),
#line 5221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5223
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5225
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5225
            .heldItem = ITEM_YACHE_BERRY,
#line 5228
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5226
            .ability = ABILITY_HYPER_CUTTER,
#line 5227
            .lvl = 45,
#line 5229
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5230
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
                MOVE_FIRE_FANG,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5235
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .heldItem = ITEM_LEFTOVERS,
#line 5238
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5236
            .ability = ABILITY_STURDY,
#line 5237
            .lvl = 46,
#line 5239
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5240
                MOVE_KNOCK_OFF,
                MOVE_INFESTATION,
                MOVE_WRAP,
                MOVE_PROTECT,
            },
            },
            {
#line 5245
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5245
            .heldItem = ITEM_ASSAULT_VEST,
#line 5248
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5246
            .ability = ABILITY_SHEER_FORCE,
#line 5247
            .lvl = 45,
#line 5249
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5250
                MOVE_LIQUIDATION,
                MOVE_NIGHT_SLASH,
                MOVE_METAL_CLAW,
                MOVE_HAMMER_ARM,
            },
            },
        },
    },
#line 5255
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 5256
        .trainerName = _("Blank"),
#line 5257
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5259
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5261
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5261
            .heldItem = ITEM_SCOPE_LENS,
#line 5264
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 60, 0),
#line 5266
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5262
            .ability = ABILITY_KEEN_EYE,
#line 5263
            .lvl = 46,
#line 5265
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5267
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_TAILWIND,
                MOVE_UPROAR,
            },
            },
            {
#line 5272
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5272
            .heldItem = ITEM_CHARTI_BERRY,
#line 5275
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5273
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 5274
            .lvl = 45,
#line 5276
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5277
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SLIDE,
                MOVE_ACROBATICS,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 5282
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .heldItem = ITEM_ABSORB_BULB,
#line 5285
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 60, 80),
#line 5287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5283
            .ability = ABILITY_DANCER,
#line 5284
            .lvl = 45,
#line 5286
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5287
                MOVE_REVELATION_DANCE,
                MOVE_ACROBATICS,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 5292
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5292
            .heldItem = ITEM_WIDE_LENS,
#line 5295
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 40, 0, 0),
#line 5297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5293
            .ability = ABILITY_KEEN_EYE,
#line 5294
            .lvl = 45,
#line 5296
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5297
                MOVE_DREAM_EATER,
                MOVE_AIR_SLASH,
                MOVE_PSYBEAM,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 5302
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 5303
        .trainerName = _("Blank"),
#line 5304
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5307
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5307
            .heldItem = ITEM_EVIOLITE,
#line 5310
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5311
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5308
            .ability = ABILITY_FRIEND_GUARD,
#line 5309
            .lvl = 54,
#line 5312
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5313
                MOVE_FOLLOW_ME,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 5318
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5318
            .heldItem = ITEM_SITRUS_BERRY,
#line 5321
            .ev = TRAINER_PARTY_EVS(252, 48, 0, 0, 0, 0),
#line 5322
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5319
            .ability = ABILITY_CHEEK_POUCH,
#line 5320
            .lvl = 51,
#line 5323
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5324
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_COUNTER,
                MOVE_CRUNCH,
            },
            },
            {
#line 5329
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5329
            .heldItem = ITEM_SITRUS_BERRY,
#line 5332
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5333
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5330
            .ability = ABILITY_HARVEST,
#line 5331
            .lvl = 49,
#line 5334
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5335
                MOVE_GIGA_DRAIN,
                MOVE_EARTH_POWER,
                MOVE_LEECH_SEED,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 5340
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5340
            .heldItem = ITEM_SITRUS_BERRY,
#line 5343
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 48, 0, 0),
#line 5344
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5341
            .ability = ABILITY_PICKUP,
#line 5342
            .lvl = 52,
#line 5345
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5346
                MOVE_WILD_CHARGE,
                MOVE_PLAY_ROUGH,
                MOVE_SEED_BOMB,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 5351
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5351
            .heldItem = ITEM_STARF_BERRY,
#line 5354
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 152, 0),
#line 5356
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5352
            .ability = ABILITY_WEAK_ARMOR,
#line 5353
            .lvl = 49,
#line 5355
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5357
                MOVE_TEATIME,
                MOVE_GIGA_DRAIN,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 5362
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 5363
        .trainerName = _("Blank"),
#line 5364
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5367
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5367
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5370
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 252, 0, 0),
#line 5372
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5368
            .ability = ABILITY_CLEAR_BODY,
#line 5369
            .lvl = 50,
#line 5371
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5373
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_HEX,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5378
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .heldItem = ITEM_SPELL_TAG,
#line 5381
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5382
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5379
            .ability = ABILITY_LEVITATE,
#line 5380
            .lvl = 51,
#line 5383
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5384
                MOVE_HEX,
                MOVE_DAZZLING_GLEAM,
                MOVE_MEAN_LOOK,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5389
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5389
            .heldItem = ITEM_FOCUS_SASH,
#line 5392
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5393
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5390
            .ability = ABILITY_SNIPER,
#line 5391
            .lvl = 52,
#line 5394
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5395
                MOVE_VENOSHOCK,
                MOVE_TOXIC_THREAD,
                MOVE_FELL_STINGER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 5400
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 5401
        .trainerName = _("Blank"),
#line 5402
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5405
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5408
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5409
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5406
            .ability = ABILITY_POISON_TOUCH,
#line 5407
            .lvl = 51,
#line 5410
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5411
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5416
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 5417
        .trainerName = _("Blank"),
#line 5418
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5419
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5421
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5421
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5424
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5425
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5422
            .ability = ABILITY_PRESSURE,
#line 5423
            .lvl = 50,
#line 5426
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5427
                MOVE_FUTURE_SIGHT,
                MOVE_SHADOW_SNEAK,
                MOVE_LEECH_LIFE,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 5432
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5432
            .heldItem = ITEM_EXPERT_BELT,
#line 5435
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5436
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5433
            .ability = ABILITY_JUSTIFIED,
#line 5434
            .lvl = 50,
#line 5437
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5438
                MOVE_FUTURE_SIGHT,
                MOVE_DRAIN_PUNCH,
                MOVE_PSYCHO_CUT,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 5443
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5443
            .heldItem = ITEM_FAIRY_FEATHER,
#line 5446
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5448
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5444
            .ability = ABILITY_TRACE,
#line 5445
            .lvl = 50,
#line 5447
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5449
                MOVE_FUTURE_SIGHT,
                MOVE_DRAINING_KISS,
                MOVE_PSYCHIC,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 5454
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5454
            .heldItem = ITEM_LEFTOVERS,
#line 5457
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5459
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5455
            .ability = ABILITY_SWARM,
#line 5456
            .lvl = 51,
#line 5458
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5460
                MOVE_FUTURE_SIGHT,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 5465
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 5466
        .trainerName = _("Blank"),
#line 5467
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5470
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5470
            .heldItem = ITEM_ROSELI_BERRY,
#line 5473
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5474
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5471
            .ability = ABILITY_LEVITATE,
#line 5472
            .lvl = 43,
#line 5475
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5476
                MOVE_BELCH,
                MOVE_ACROBATICS,
                MOVE_DRAGON_BREATH,
                MOVE_TAILWIND,
            },
            },
            {
#line 5481
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5481
            .heldItem = ITEM_SALAC_BERRY,
#line 5484
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5485
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5482
            .ability = ABILITY_STURDY,
#line 5483
            .lvl = 46,
#line 5486
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5487
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
                MOVE_WATERFALL,
                MOVE_SCALE_SHOT,
            },
            },
            {
#line 5492
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5492
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5495
            .ev = TRAINER_PARTY_EVS(52, 248, 0, 0, 0, 0),
#line 5497
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5493
            .ability = ABILITY_GLUTTONY,
#line 5494
            .lvl = 46,
#line 5496
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5498
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_THROAT_CHOP,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 5503
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 5504
        .trainerName = _("Blank"),
#line 5505
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5508
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5511
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5513
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5509
            .ability = ABILITY_LEVITATE,
#line 5510
            .lvl = 46,
#line 5512
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5514
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_BOMB,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5519
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5519
            .heldItem = ITEM_SITRUS_BERRY,
#line 5522
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5524
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5520
            .ability = ABILITY_SCRAPPY,
#line 5521
            .lvl = 43,
#line 5523
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5525
                MOVE_SUBSTITUTE,
                MOVE_CIRCLE_THROW,
                MOVE_DARKEST_LARIAT,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 5530
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5530
            .heldItem = ITEM_ASSAULT_VEST,
#line 5533
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5534
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5531
            .ability = ABILITY_FLAME_BODY,
#line 5532
            .lvl = 45,
#line 5535
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5536
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 5541
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5541
            .heldItem = ITEM_FOCUS_SASH,
#line 5544
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5546
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5542
            .ability = ABILITY_GULP_MISSILE,
#line 5543
            .lvl = 46,
#line 5545
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5547
                MOVE_AGILITY,
                MOVE_SURF,
                MOVE_ENDEAVOR,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 5552
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5552
            .heldItem = ITEM_AIR_BALLOON,
#line 5555
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5557
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5553
            .ability = ABILITY_AFTERMATH,
#line 5554
            .lvl = 44,
#line 5556
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5558
                MOVE_HEX,
                MOVE_VENOSHOCK,
                MOVE_NASTY_PLOT,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5563
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 5564
        .trainerName = _("Blank"),
#line 5565
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5568
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .heldItem = ITEM_FOCUS_SASH,
#line 5571
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5572
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5569
            .ability = ABILITY_REGENERATOR,
#line 5570
            .lvl = 45,
#line 5573
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5574
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 5579
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5579
            .heldItem = ITEM_LEFTOVERS,
#line 5582
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5584
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5580
            .ability = ABILITY_REGENERATOR,
#line 5581
            .lvl = 45,
#line 5583
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5585
                MOVE_SCALD,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 5590
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .heldItem = ITEM_EVIOLITE,
#line 5593
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5595
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5591
            .ability = ABILITY_SERENE_GRACE,
#line 5592
            .lvl = 48,
#line 5594
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5596
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_WISH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 5601
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5601
            .heldItem = ITEM_NORMAL_GEM,
#line 5604
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5606
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5602
            .ability = ABILITY_UNBURDEN,
#line 5603
            .lvl = 46,
#line 5605
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5607
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
                MOVE_DARK_PULSE,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5612
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 5613
        .trainerName = _("Blank"),
#line 5614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5617
            .heldItem = ITEM_TOXIC_ORB,
#line 5620
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5622
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5618
            .ability = ABILITY_POISON_HEAL,
#line 5619
            .lvl = 45,
#line 5621
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5623
                MOVE_SUBSTITUTE,
                MOVE_DRAIN_PUNCH,
                MOVE_GIGA_DRAIN,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 5628
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5628
            .heldItem = ITEM_BIG_ROOT,
#line 5631
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 0, 0, 24),
#line 5633
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5629
            .ability = ABILITY_DRY_SKIN,
#line 5630
            .lvl = 47,
#line 5632
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5634
                MOVE_LEECH_SEED,
                MOVE_LEECH_LIFE,
                MOVE_GIGA_DRAIN,
                MOVE_SPORE,
            },
            },
            {
#line 5639
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5639
            .heldItem = ITEM_LEFTOVERS,
#line 5642
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5644
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5640
            .ability = ABILITY_FLASH_FIRE,
#line 5641
            .lvl = 48,
#line 5643
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5645
                MOVE_BITTER_BLADE,
                MOVE_PHANTOM_FORCE,
                MOVE_WILL_O_WISP,
                MOVE_BULK_UP,
            },
            },
            {
#line 5650
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5650
            .heldItem = ITEM_BABIRI_BERRY,
#line 5653
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5655
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5651
            .ability = ABILITY_FLOWER_VEIL,
#line 5652
            .lvl = 46,
#line 5654
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5656
                MOVE_MOONBLAST,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5661
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
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
            .species = SPECIES_SPEWPA,
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
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
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
            .species = SPECIES_SPEWPA,
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
#line 9749
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 9750
        .trainerName = _("Blank"),
#line 9751
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9757
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 9758
        .trainerName = _("Blank"),
#line 9759
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9765
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 9766
        .trainerName = _("Blank"),
#line 9767
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9773
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 9774
        .trainerName = _("Blank"),
#line 9775
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9781
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 9782
        .trainerName = _("Blank"),
#line 9783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9789
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 9790
        .trainerName = _("Blank"),
#line 9791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9797
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 9798
        .trainerName = _("Blank"),
#line 9799
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9805
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 9806
        .trainerName = _("Blank"),
#line 9807
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9813
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 9814
        .trainerName = _("Blank"),
#line 9815
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9821
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 9822
        .trainerName = _("Blank"),
#line 9823
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9829
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 9830
        .trainerName = _("Blank"),
#line 9831
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9837
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 9838
        .trainerName = _("Blank"),
#line 9839
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9845
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 9846
        .trainerName = _("Blank"),
#line 9847
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9853
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 9854
        .trainerName = _("Blank"),
#line 9855
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9861
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 9862
        .trainerName = _("Blank"),
#line 9863
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9869
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 9870
        .trainerName = _("Blank"),
#line 9871
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9877
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 9878
        .trainerName = _("Blank"),
#line 9879
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9885
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 9886
        .trainerName = _("Blank"),
#line 9887
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9893
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 9894
        .trainerName = _("Blank"),
#line 9895
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9901
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 9902
        .trainerName = _("Blank"),
#line 9903
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9909
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 9910
        .trainerName = _("Blank"),
#line 9911
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9917
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 9918
        .trainerName = _("Blank"),
#line 9919
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9925
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 9926
        .trainerName = _("Blank"),
#line 9927
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9933
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 9934
        .trainerName = _("Blank"),
#line 9935
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9941
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 9942
        .trainerName = _("Blank"),
#line 9943
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9949
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 9950
        .trainerName = _("Blank"),
#line 9951
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9957
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 9958
        .trainerName = _("Blank"),
#line 9959
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9965
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 9966
        .trainerName = _("Blank"),
#line 9967
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9973
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 9974
        .trainerName = _("Blank"),
#line 9975
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9981
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 9982
        .trainerName = _("Blank"),
#line 9983
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9989
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 9990
        .trainerName = _("Blank"),
#line 9991
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9997
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 9998
        .trainerName = _("Blank"),
#line 9999
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10005
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 10006
        .trainerName = _("Blank"),
#line 10007
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10013
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 10014
        .trainerName = _("Blank"),
#line 10015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10021
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10022
        .trainerName = _("Blank"),
#line 10023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10029
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10030
        .trainerName = _("Blank"),
#line 10031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10037
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 10038
        .trainerName = _("Blank"),
#line 10039
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10045
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 10046
        .trainerName = _("Blank"),
#line 10047
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10053
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 10054
        .trainerName = _("Blank"),
#line 10055
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10061
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 10062
        .trainerName = _("Blank"),
#line 10063
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10069
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 10070
        .trainerName = _("Blank"),
#line 10071
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10077
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 10078
        .trainerName = _("Blank"),
#line 10079
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10085
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 10086
        .trainerName = _("Blank"),
#line 10087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10093
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 10094
        .trainerName = _("Blank"),
#line 10095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10101
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 10102
        .trainerName = _("Blank"),
#line 10103
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10109
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 10110
        .trainerName = _("Blank"),
#line 10111
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10117
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 10118
        .trainerName = _("Blank"),
#line 10119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10125
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 10126
        .trainerName = _("Blank"),
#line 10127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10133
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 10134
        .trainerName = _("Blank"),
#line 10135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10141
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 10142
        .trainerName = _("Blank"),
#line 10143
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10149
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 10150
        .trainerName = _("Blank"),
#line 10151
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10157
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 10158
        .trainerName = _("Blank"),
#line 10159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10165
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 10166
        .trainerName = _("Blank"),
#line 10167
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10173
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 10174
        .trainerName = _("Blank"),
#line 10175
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10181
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 10182
        .trainerName = _("Blank"),
#line 10183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10189
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 10190
        .trainerName = _("Blank"),
#line 10191
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10197
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 10198
        .trainerName = _("Blank"),
#line 10199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10205
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 10206
        .trainerName = _("Blank"),
#line 10207
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10213
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 10214
        .trainerName = _("Blank"),
#line 10215
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10221
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 10222
        .trainerName = _("Blank"),
#line 10223
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10229
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 10230
        .trainerName = _("Blank"),
#line 10231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10237
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 10238
        .trainerName = _("Blank"),
#line 10239
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10245
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 10246
        .trainerName = _("Blank"),
#line 10247
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10253
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 10254
        .trainerName = _("Blank"),
#line 10255
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10261
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 10262
        .trainerName = _("Blank"),
#line 10263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10269
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 10270
        .trainerName = _("Blank"),
#line 10271
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10277
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 10278
        .trainerName = _("Blank"),
#line 10279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10285
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 10286
        .trainerName = _("Blank"),
#line 10287
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10293
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 10294
        .trainerName = _("Blank"),
#line 10295
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10301
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 10302
        .trainerName = _("Blank"),
#line 10303
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10309
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 10310
        .trainerName = _("Blank"),
#line 10311
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10317
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 10318
        .trainerName = _("Blank"),
#line 10319
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10325
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 10326
        .trainerName = _("Blank"),
#line 10327
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10333
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 10334
        .trainerName = _("Blank"),
#line 10335
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10341
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 10342
        .trainerName = _("Blank"),
#line 10343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10349
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 10350
        .trainerName = _("Blank"),
#line 10351
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10357
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 10358
        .trainerName = _("Blank"),
#line 10359
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10365
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 10366
        .trainerName = _("Blank"),
#line 10367
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10373
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 10374
        .trainerName = _("Blank"),
#line 10375
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10381
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 10382
        .trainerName = _("Blank"),
#line 10383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10389
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 10390
        .trainerName = _("Blank"),
#line 10391
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10397
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 10398
        .trainerName = _("Blank"),
#line 10399
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10405
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 10406
        .trainerName = _("Blank"),
#line 10407
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10413
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 10414
        .trainerName = _("Blank"),
#line 10415
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10421
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 10422
        .trainerName = _("Blank"),
#line 10423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10429
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 10430
        .trainerName = _("Blank"),
#line 10431
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10437
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 10438
        .trainerName = _("Blank"),
#line 10439
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10445
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 10446
        .trainerName = _("Blank"),
#line 10447
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10453
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 10454
        .trainerName = _("Blank"),
#line 10455
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10461
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 10462
        .trainerName = _("Blank"),
#line 10463
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10469
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 10470
        .trainerName = _("Blank"),
#line 10471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10477
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 10478
        .trainerName = _("Blank"),
#line 10479
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10485
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 10486
        .trainerName = _("Blank"),
#line 10487
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10493
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 10494
        .trainerName = _("Blank"),
#line 10495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10501
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 10502
        .trainerName = _("Blank"),
#line 10503
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10509
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 10510
        .trainerName = _("Blank"),
#line 10511
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10517
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 10518
        .trainerName = _("Blank"),
#line 10519
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10525
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 10526
        .trainerName = _("Blank"),
#line 10527
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10533
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 10534
        .trainerName = _("Blank"),
#line 10535
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10541
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 10542
        .trainerName = _("Blank"),
#line 10543
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10549
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 10550
        .trainerName = _("Blank"),
#line 10551
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10557
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10558
        .trainerName = _("Blank"),
#line 10559
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10565
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10566
        .trainerName = _("Blank"),
#line 10567
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
