//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_BATTLE8] =
    {
#line 933
        .trainerName = _("Kai"),
#line 935
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 934
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 937
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ALCMENE] =
    {
#line 1089
        .trainerName = _("Alcmene"),
#line 1094
        .trainerClass = TRAINER_CLASS_THE_TIDE_LEADER,
#line 1090
        .trainerPic = TRAINER_PIC_ALCMENE,
        .encounterMusic_gender =
0,
#line 1092
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1093
        .characterRevealId = REVEAL_ALCMENE,
#line 1095
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1096
        .objectEventGraphicsId = OBJ_EVENT_GFX_ALCMENE,
#line 1097
        .mapSec = MAPSEC_NAVAL_BASE,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_WHYAREYOUHELPINGTHEM] =
    {
#line 1178
        .trainerName = _("Kai"),
#line 1180
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1179
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1182
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_FINALS] =
    {
#line 1439
        .trainerName = _("Kai"),
#line 1441
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1440
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSGRABLUNCH] =
    {
#line 1524
        .trainerName = _("Kai"),
#line 1526
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1525
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1528
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSBURNTHISMOTHERDOWN] =
    {
#line 1863
        .trainerName = _("Kai"),
#line 1865
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1864
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1867
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_A] =
    {
#line 2644
        .trainerName = _("Adelaide"),
#line 2648
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 2645
        .trainerPic = TRAINER_PIC_ADELAIDE,
        .encounterMusic_gender =
0,
#line 2646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2647
        .characterRevealId = REVEAL_ADELAIDE,
#line 2649
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2650
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADELAIDE,
#line 2651
        .mapSec = MAPSEC_SHARPRISESPIRE,
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
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_B] =
    {
#line 2737
        .trainerName = _("Adelaide"),
#line 2738
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2741
            .species = SPECIES_NIHILEGO_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2741
            .heldItem = ITEM_POWER_HERB,
#line 2747
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2749
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2742
            .ability = ABILITY_SWIFT_ASCENT,
#line 2743
            .lvl = 90,
#line 2744
            .ball = ITEM_MASTER_BALL,
#line 2746
            .friendship = 1,
#line 2748
            .nature = NATURE_TIMID,
#line 2745
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2750
                MOVE_POWER_GEM,
                MOVE_SLUDGE_WAVE,
                MOVE_DAZZLING_GLEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 2755
            .species = SPECIES_CELESTEELA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2755
            .heldItem = ITEM_LEFTOVERS,
#line 2761
            .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
#line 2762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2756
            .ability = ABILITY_SWIFT_ASCENT,
#line 2757
            .lvl = 90,
#line 2758
            .ball = ITEM_MASTER_BALL,
#line 2760
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2759
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2762
                MOVE_HEAVY_SLAM,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 2767
            .species = SPECIES_KARTANA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2767
            .heldItem = ITEM_ASSAULT_VEST,
#line 2773
            .ev = TRAINER_PARTY_EVS(0, 8, 0, 252, 0, 248),
#line 2775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2768
            .ability = ABILITY_SWIFT_ASCENT,
#line 2769
            .lvl = 90,
#line 2770
            .ball = ITEM_MASTER_BALL,
#line 2772
            .friendship = 1,
#line 2774
            .nature = NATURE_ADAMANT,
#line 2771
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2775
                MOVE_LEAF_BLADE,
                MOVE_SMART_STRIKE,
                MOVE_SACRED_SWORD,
                MOVE_GUILLOTINE,
            },
            },
            {
#line 2780
            .species = SPECIES_GUZZLORD_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2780
            .heldItem = ITEM_ROSELI_BERRY,
#line 2786
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
#line 2787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2781
            .ability = ABILITY_SWIFT_ASCENT,
#line 2782
            .lvl = 90,
#line 2783
            .ball = ITEM_MASTER_BALL,
#line 2785
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2784
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2788
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_GYRO_BALL,
            },
            },
            {
#line 2793
            .species = SPECIES_NAGANADEL_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2793
            .heldItem = ITEM_POISONIUM_Z,
#line 2799
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2801
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2794
            .ability = ABILITY_SWIFT_ASCENT,
#line 2795
            .lvl = 90,
#line 2796
            .ball = ITEM_MASTER_BALL,
#line 2798
            .friendship = 1,
#line 2800
            .nature = NATURE_TIMID,
#line 2797
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2802
                MOVE_SLUDGE_WAVE,
                MOVE_DRACO_METEOR,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2807
            .species = SPECIES_STAKATAKA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2807
            .heldItem = ITEM_SHUCA_BERRY,
#line 2813
            .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
#line 2815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2808
            .ability = ABILITY_SWIFT_ASCENT,
#line 2809
            .lvl = 90,
#line 2810
            .ball = ITEM_MASTER_BALL,
#line 2812
            .friendship = 1,
#line 2814
            .nature = NATURE_CAREFUL,
#line 2811
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2816
                MOVE_GYRO_BALL,
                MOVE_STONE_EDGE,
                MOVE_BODY_PRESS,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 2821
    [DIFFICULTY_NORMAL][TRAINER_MAGNUS_PROLOGUE] =
    {
#line 2822
        .trainerName = _("Magnus"),
#line 2827
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2823
        .trainerPic = TRAINER_PIC_MAGNUS,
        .encounterMusic_gender =
0,
#line 2825
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2826
        .characterRevealId = REVEAL_MAGNUS,
#line 2828
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2829
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 2830
        .mapSec = MAPSEC_OROLAND_COLISEUM,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2832
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2832
            .heldItem = ITEM_MYSTIC_WATER,
#line 2838
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2833
            .ability = ABILITY_SAND_RUSH,
#line 2834
            .lvl = 87,
#line 2835
            .ball = ITEM_MASTER_BALL,
#line 2837
            .friendship = 1,
#line 2839
            .nature = NATURE_ADAMANT,
#line 2836
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2840
                MOVE_FISHIOUS_REND,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2845
            .species = SPECIES_SANDACONDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2845
            .heldItem = ITEM_SITRUS_BERRY,
#line 2851
            .ev = TRAINER_PARTY_EVS(252, 80, 0, 0, 0, 176),
#line 2853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2846
            .ability = ABILITY_SAND_SPIT,
#line 2847
            .lvl = 88,
#line 2848
            .ball = ITEM_MASTER_BALL,
#line 2850
            .friendship = 1,
#line 2852
            .nature = NATURE_CAREFUL,
#line 2849
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2853
                MOVE_HIGH_HORSEPOWER,
                MOVE_STONE_EDGE,
                MOVE_GLARE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 2858
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2858
            .heldItem = ITEM_SCOPE_LENS,
#line 2864
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 2866
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2859
            .ability = ABILITY_SUPER_LUCK,
#line 2860
            .lvl = 87,
#line 2861
            .ball = ITEM_MASTER_BALL,
#line 2863
            .friendship = 1,
#line 2865
            .nature = NATURE_TIMID,
#line 2862
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2867
                MOVE_DAZZLING_GLEAM,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 2872
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2872
            .heldItem = ITEM_FLYING_GEM,
#line 2878
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2873
            .ability = ABILITY_SAND_VEIL,
#line 2874
            .lvl = 87,
#line 2875
            .ball = ITEM_MASTER_BALL,
#line 2877
            .friendship = 1,
#line 2879
            .nature = NATURE_JOLLY,
#line 2876
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2880
                MOVE_ACROBATICS,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SWORDS_DANCE,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2885
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2885
            .heldItem = ITEM_GROUNDIUM_Z,
#line 2891
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2886
            .ability = ABILITY_SAND_RUSH,
#line 2887
            .lvl = 88,
#line 2888
            .ball = ITEM_MASTER_BALL,
#line 2890
            .friendship = 1,
#line 2892
            .nature = NATURE_ADAMANT,
#line 2889
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2893
                MOVE_DRILL_RUN,
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2898
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2898
            .heldItem = ITEM_TYRANITARITE,
#line 2904
            .ev = TRAINER_PARTY_EVS(252, 104, 0, 76, 0, 76),
#line 2906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2899
            .ability = ABILITY_SAND_STREAM,
#line 2900
            .lvl = 89,
#line 2901
            .ball = ITEM_MASTER_BALL,
#line 2903
            .friendship = 1,
#line 2905
            .nature = NATURE_ADAMANT,
#line 2902
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2906
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_STONE_EDGE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 2911
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 2912
        .trainerName = _("Ellen"),
#line 2913
        .trainerPic = TRAINER_PIC_ELLEN,
        .encounterMusic_gender =
0,
#line 2915
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2916
        .characterRevealId = REVEAL_ELLEN,
#line 2917
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2918
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELLEN,
#line 2919
        .mapSec = MAPSEC_NAVAL_BASE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2921
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2921
            .heldItem = ITEM_SITRUS_BERRY,
#line 2927
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2929
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2922
            .ability = ABILITY_SERENE_GRACE,
#line 2923
            .lvl = 89,
#line 2924
            .ball = ITEM_MASTER_BALL,
#line 2926
            .friendship = 1,
#line 2928
            .nature = NATURE_MODEST,
#line 2925
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2930
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2935
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2935
            .heldItem = ITEM_SWAMPERTITE,
#line 2941
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2936
            .ability = ABILITY_TORRENT,
#line 2937
            .lvl = 91,
#line 2938
            .ball = ITEM_MASTER_BALL,
#line 2940
            .friendship = 1,
#line 2942
            .nature = NATURE_ADAMANT,
#line 2939
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2943
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2948
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2948
            .heldItem = ITEM_GRASSIUM_Z,
#line 2954
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2949
            .ability = ABILITY_STEELWORKER,
#line 2950
            .lvl = 89,
#line 2951
            .ball = ITEM_MASTER_BALL,
#line 2953
            .friendship = 1,
#line 2955
            .nature = NATURE_JOLLY,
#line 2952
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2956
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2961
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2961
            .heldItem = ITEM_NORMAL_GEM,
#line 2967
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2962
            .ability = ABILITY_INTIMIDATE,
#line 2963
            .lvl = 90,
#line 2964
            .ball = ITEM_MASTER_BALL,
#line 2966
            .friendship = 1,
#line 2968
            .nature = NATURE_ADAMANT,
#line 2965
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2969
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 2974
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2974
            .heldItem = ITEM_BLACK_SLUDGE,
#line 2980
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2975
            .ability = ABILITY_MERCILESS,
#line 2976
            .lvl = 89,
#line 2977
            .ball = ITEM_MASTER_BALL,
#line 2979
            .friendship = 1,
#line 2981
            .nature = NATURE_ADAMANT,
#line 2978
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2982
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 2987
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2987
            .heldItem = ITEM_ASSAULT_VEST,
#line 2993
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 2995
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2988
            .ability = ABILITY_STAMINA,
#line 2989
            .lvl = 90,
#line 2990
            .ball = ITEM_MASTER_BALL,
#line 2992
            .friendship = 1,
#line 2994
            .nature = NATURE_MODEST,
#line 2991
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2996
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 3001
    [DIFFICULTY_NORMAL][TRAINER_ARMANDO] =
    {
#line 3002
        .trainerName = _("Armando"),
#line 3003
        .trainerPic = TRAINER_PIC_ARMANDO,
        .encounterMusic_gender =
0,
#line 3005
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3006
        .characterRevealId = REVEAL_ARMANDO,
#line 3007
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 3008
        .objectEventGraphicsId = OBJ_EVENT_GFX_ARMANDO,
#line 3009
        .mapSec = MAPSEC_LEAVERRA_FOREST,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3011
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3011
            .heldItem = ITEM_LIFE_ORB,
#line 3017
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3019
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3012
            .ability = ABILITY_CHLOROPHYLL,
#line 3013
            .lvl = 87,
#line 3014
            .ball = ITEM_MASTER_BALL,
#line 3016
            .friendship = 1,
#line 3018
            .nature = NATURE_MODEST,
#line 3015
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3020
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3025
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3025
            .heldItem = ITEM_DRAGON_GEM,
#line 3031
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3033
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3026
            .ability = ABILITY_LEVITATE,
#line 3027
            .lvl = 88,
#line 3028
            .ball = ITEM_MASTER_BALL,
#line 3030
            .friendship = 1,
#line 3032
            .nature = NATURE_TIMID,
#line 3029
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3034
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3039
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .heldItem = ITEM_LEFTOVERS,
#line 3045
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3047
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3040
            .ability = ABILITY_TELEPATHY,
#line 3041
            .lvl = 88,
#line 3042
            .ball = ITEM_MASTER_BALL,
#line 3044
            .friendship = 1,
#line 3046
            .nature = NATURE_BOLD,
#line 3043
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3048
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3053
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3053
            .heldItem = ITEM_FLAME_ORB,
#line 3059
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3054
            .ability = ABILITY_GUTS,
#line 3055
            .lvl = 87,
#line 3056
            .ball = ITEM_MASTER_BALL,
#line 3058
            .friendship = 1,
#line 3060
            .nature = NATURE_ADAMANT,
#line 3057
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3061
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3066
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3066
            .heldItem = ITEM_FIRIUM_Z,
#line 3072
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3074
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3067
            .ability = ABILITY_FLAME_BODY,
#line 3068
            .lvl = 88,
#line 3069
            .ball = ITEM_MASTER_BALL,
#line 3071
            .friendship = 1,
#line 3073
            .nature = NATURE_MODEST,
#line 3070
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3075
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3081
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3087
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3082
            .ability = ABILITY_WHITE_SMOKE,
#line 3083
            .lvl = 89,
#line 3084
            .ball = ITEM_MASTER_BALL,
#line 3086
            .friendship = 1,
#line 3088
            .nature = NATURE_JOLLY,
#line 3085
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3089
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3094
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3095
        .trainerName = _("Kei-ying"),
#line 3099
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3096
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
0,
#line 3098
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3101
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3101
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3107
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3102
            .ability = ABILITY_UNSEEN_FIST,
#line 3103
            .lvl = 88,
#line 3104
            .ball = ITEM_MASTER_BALL,
#line 3106
            .friendship = 1,
#line 3108
            .nature = NATURE_ADAMANT,
#line 3105
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3109
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3114
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3114
            .heldItem = ITEM_FLYING_GEM,
#line 3120
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3122
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3115
            .ability = ABILITY_DRIZZLE,
#line 3116
            .lvl = 86,
#line 3117
            .ball = ITEM_MASTER_BALL,
#line 3119
            .friendship = 1,
#line 3121
            .nature = NATURE_TIMID,
#line 3118
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3123
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3128
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3128
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3134
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3129
            .ability = ABILITY_DRY_SKIN,
#line 3130
            .lvl = 87,
#line 3131
            .ball = ITEM_MASTER_BALL,
#line 3133
            .friendship = 1,
#line 3135
            .nature = NATURE_ADAMANT,
#line 3132
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3136
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3141
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3141
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3147
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3142
            .ability = ABILITY_TECHNICIAN,
#line 3143
            .lvl = 86,
#line 3144
            .ball = ITEM_MASTER_BALL,
#line 3146
            .friendship = 1,
#line 3148
            .nature = NATURE_ADAMANT,
#line 3145
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3149
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3154
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3154
            .heldItem = ITEM_LIFE_ORB,
#line 3160
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3155
            .ability = ABILITY_IRON_FIST,
#line 3156
            .lvl = 87,
#line 3157
            .ball = ITEM_MASTER_BALL,
#line 3159
            .friendship = 1,
#line 3161
            .nature = NATURE_JOLLY,
#line 3158
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3162
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3167
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3167
            .heldItem = ITEM_FOCUS_SASH,
#line 3173
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3168
            .ability = ABILITY_UNSEEN_FIST,
#line 3169
            .lvl = 88,
#line 3170
            .ball = ITEM_MASTER_BALL,
#line 3172
            .friendship = 1,
#line 3174
            .nature = NATURE_JOLLY,
#line 3171
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3175
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3180
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
    {
#line 3181
        .trainerName = _("Melissa"),
#line 3182
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3184
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3186
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3187
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3189
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3190
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3192
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3193
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3195
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3196
        .trainerName = _("Melissa"),
#line 3197
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3199
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3201
            .species = SPECIES_DACHSBUN,
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
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3205
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3207
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3208
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3210
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3211
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3213
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3214
        .trainerName = _("Melissa"),
#line 3215
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3217
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3219
            .species = SPECIES_DACHSBUN,
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
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3223
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3225
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3228
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3229
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3231
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3232
        .trainerName = _("Melissa"),
#line 3233
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3235
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3237
            .species = SPECIES_DACHSBUN,
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
            .species = SPECIES_FARIGIRAF,
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
            .species = SPECIES_DUSCLOPS,
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
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3247
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3249
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3252
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3253
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3255
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3256
        .trainerName = _("Monty"),
#line 3257
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3260
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3262
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3263
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3267
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3268
        .trainerName = _("Oliver"),
#line 3269
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
0,
#line 3271
        .isNative = TRUE,
#line 3270
        .characterRevealId = REVEAL_OLIVER,
#line 3272
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3274
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3275
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3277
    [DIFFICULTY_NORMAL][TRAINER_00317DFA] =
    {
#line 3278
        .trainerName = _("00317DFA"),
#line 3279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3282
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3281
        .mapSec = MAPSEC_GLAVEZ_HILL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3284
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3287
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3289
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3285
            .ability = ABILITY_FRIEND_GUARD,
#line 3286
            .lvl = 19,
#line 3288
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3290
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3294
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .heldItem = ITEM_ORAN_BERRY,
#line 3297
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3299
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3295
            .ability = ABILITY_HARVEST,
#line 3296
            .lvl = 20,
#line 3298
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3300
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3305
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3308
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3310
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3306
            .ability = ABILITY_HUSTLE,
#line 3307
            .lvl = 22,
#line 3309
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3311
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3316
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3317
        .trainerName = _("0049EFE8"),
#line 3318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3320
        .mapSec = MAPSEC_ROUTE8,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3322
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3322
            .heldItem = ITEM_CHARCOAL,
#line 3324
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3326
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3323
            .ability = ABILITY_DROUGHT,
#line 3327
            .lvl = 22,
#line 3325
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3328
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3333
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3333
            .heldItem = ITEM_PASSHO_BERRY,
#line 3335
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3337
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3334
            .ability = ABILITY_FLAME_BODY,
#line 3338
            .lvl = 22,
#line 3336
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3339
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3343
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3346
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3344
            .ability = ABILITY_FLAME_BODY,
#line 3347
            .lvl = 21,
#line 3345
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3348
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3353
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3354
        .trainerName = _("023957DE"),
#line 3355
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3357
        .mapSec = MAPSEC_ROUTE6,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3359
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3359
            .heldItem = ITEM_ORAN_BERRY,
#line 3362
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3364
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3360
            .ability = ABILITY_SHED_SKIN,
#line 3361
            .lvl = 25,
#line 3363
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3365
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3370
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3373
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3375
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3371
            .ability = ABILITY_HUSTLE,
#line 3372
            .lvl = 21,
#line 3374
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3376
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3380
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3383
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3385
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3381
            .ability = ABILITY_HUSTLE,
#line 3382
            .lvl = 22,
#line 3384
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3386
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3391
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3392
        .trainerName = _("006E7EFD"),
#line 3393
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3395
        .mapSec = MAPSEC_GLAVEZ_HILL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3397
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3402
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3398
            .ability = ABILITY_INNER_FOCUS,
#line 3399
            .lvl = 22,
#line 3401
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3403
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3408
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3413
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3409
            .ability = ABILITY_IRON_FIST,
#line 3410
            .lvl = 21,
#line 3412
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3414
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3419
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3419
            .heldItem = ITEM_FOCUS_SASH,
#line 3422
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3424
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3420
            .ability = ABILITY_RECKLESS,
#line 3421
            .lvl = 21,
#line 3423
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3425
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3430
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3431
        .trainerName = _("007F06A5"),
#line 3432
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3434
        .mapSec = MAPSEC_ROUTE8,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3436
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .heldItem = ITEM_SITRUS_BERRY,
#line 3439
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3437
            .ability = ABILITY_TORRENT,
#line 3438
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3440
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3444
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3447
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3445
            .ability = ABILITY_OWN_TEMPO,
#line 3446
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3448
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3452
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3452
            .heldItem = ITEM_METRONOME,
#line 3455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3453
            .ability = ABILITY_PROPELLER_TAIL,
#line 3454
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3455
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3457
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3458
        .trainerName = _("01103D48"),
#line 3459
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3462
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3461
        .mapSec = MAPSEC_ROUTE8,
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
#line 3500
        .mapSec = MAPSEC_GLAVEZ_HILL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3502
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .heldItem = ITEM_ROCKY_HELMET,
#line 3505
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3507
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3503
            .ability = ABILITY_ROUGH_SKIN,
#line 3504
            .lvl = 25,
#line 3506
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3508
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3512
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3515
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3517
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3513
            .ability = ABILITY_UNBURDEN,
#line 3514
            .lvl = 24,
#line 3516
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3518
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3522
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3522
            .heldItem = ITEM_MENTAL_HERB,
#line 3525
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3527
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3523
            .ability = ABILITY_PRANKSTER,
#line 3524
            .lvl = 25,
#line 3526
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3528
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3533
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3534
        .trainerName = _("022A53A0"),
#line 3535
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3538
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3537
        .mapSec = MAPSEC_ROUTE6,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3540
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3540
            .heldItem = ITEM_FOCUS_BAND,
#line 3543
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3545
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3541
            .ability = ABILITY_SWARM,
#line 3542
            .lvl = 20,
#line 3544
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3546
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3550
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3550
            .heldItem = ITEM_FOCUS_BAND,
#line 3553
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3555
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3551
            .ability = ABILITY_SWARM,
#line 3552
            .lvl = 24,
#line 3554
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3556
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3560
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3560
            .heldItem = ITEM_SILVER_POWDER,
#line 3563
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3565
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3561
            .ability = ABILITY_SWARM,
#line 3562
            .lvl = 25,
#line 3564
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3566
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3572
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3573
        .trainerName = _("012ED80D"),
#line 3574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3576
        .mapSec = MAPSEC_GLAVEZ_HILL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3578
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3581
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3583
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3579
            .ability = ABILITY_STAMINA,
#line 3580
            .lvl = 21,
#line 3582
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3584
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3589
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3592
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3594
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3590
            .ability = ABILITY_SAND_FORCE,
#line 3591
            .lvl = 20,
#line 3593
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3595
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3600
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3603
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3605
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3601
            .ability = ABILITY_SIMPLE,
#line 3602
            .lvl = 21,
#line 3604
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3606
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3610
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3611
        .trainerName = _("01E6E96E"),
#line 3612
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3615
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3614
        .mapSec = MAPSEC_ROUTE8,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3617
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3617
            .heldItem = ITEM_POWER_HERB,
#line 3620
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3622
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3618
            .ability = ABILITY_SHIELDS_DOWN,
#line 3619
            .lvl = 22,
#line 3621
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3623
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3628
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3628
            .heldItem = ITEM_MENTAL_HERB,
#line 3631
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3633
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3629
            .ability = ABILITY_FRIEND_GUARD,
#line 3630
            .lvl = 20,
#line 3632
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3634
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3639
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3639
            .heldItem = ITEM_SILK_SCARF,
#line 3642
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3644
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3640
            .ability = ABILITY_SCRAPPY,
#line 3641
            .lvl = 22,
#line 3643
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3645
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3650
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3651
        .trainerName = _("0092D526"),
#line 3652
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3655
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3654
        .mapSec = MAPSEC_ROUTE6,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3657
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3662
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3658
            .ability = ABILITY_LEAF_GUARD,
#line 3659
            .lvl = 21,
#line 3661
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3663
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3666
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3666
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3669
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3670
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3667
            .ability = ABILITY_EFFECT_SPORE,
#line 3668
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3671
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3676
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3679
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3681
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3677
            .ability = ABILITY_CHLOROPHYLL,
#line 3678
            .lvl = 21,
#line 3680
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3682
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3686
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3687
        .trainerName = _("00C593A8"),
#line 3688
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3691
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3690
        .mapSec = MAPSEC_GLAVEZ_HILL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3693
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3693
            .heldItem = ITEM_WACAN_BERRY,
#line 3696
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3698
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3694
            .ability = ABILITY_ICE_BODY,
#line 3695
            .lvl = 20,
#line 3697
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3699
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3703
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3703
            .heldItem = ITEM_METRONOME,
#line 3706
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3708
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3704
            .ability = ABILITY_ICE_BODY,
#line 3705
            .lvl = 24,
#line 3707
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3709
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3713
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3716
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3718
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3714
            .ability = ABILITY_OBLIVIOUS,
#line 3715
            .lvl = 23,
#line 3717
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3719
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3723
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3724
        .trainerName = _("01E7C79B"),
#line 3725
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3727
        .mapSec = MAPSEC_ROUTE6,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3729
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3732
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3734
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3730
            .ability = ABILITY_SWARM,
#line 3731
            .lvl = 22,
#line 3733
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3735
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3740
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3740
            .heldItem = ITEM_TWISTED_SPOON,
#line 3743
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3745
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3741
            .ability = ABILITY_ANTICIPATION,
#line 3742
            .lvl = 23,
#line 3744
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3746
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3750
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3753
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3755
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3751
            .ability = ABILITY_PURE_POWER,
#line 3752
            .lvl = 24,
#line 3754
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3756
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3760
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3761
        .trainerName = _("01C7AF3F"),
#line 3762
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3765
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3764
        .mapSec = MAPSEC_GLAVEZ_HILL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3767
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3767
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3767
            .heldItem = ITEM_ORAN_BERRY,
#line 3770
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3772
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3768
            .ability = ABILITY_SYMBIOSIS,
#line 3769
            .lvl = 23,
#line 3771
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3773
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3778
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3781
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3783
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3779
            .ability = ABILITY_TRACE,
#line 3780
            .lvl = 20,
#line 3782
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3784
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3788
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3788
            .heldItem = ITEM_SITRUS_BERRY,
#line 3791
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3793
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3789
            .ability = ABILITY_TRACE,
#line 3790
            .lvl = 21,
#line 3792
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3794
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3800
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3801
        .trainerName = _("02EEB783"),
#line 3802
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3805
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3804
        .mapSec = MAPSEC_ROUTE8,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3807
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3810
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3812
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3808
            .ability = ABILITY_MUMMY,
#line 3809
            .lvl = 21,
#line 3811
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3813
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3817
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3817
            .heldItem = ITEM_OCCA_BERRY,
#line 3820
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3822
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3818
            .ability = ABILITY_NO_GUARD,
#line 3819
            .lvl = 25,
#line 3821
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3823
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3827
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3830
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3832
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3828
            .ability = ABILITY_LEVITATE,
#line 3829
            .lvl = 25,
#line 3831
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3833
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3840
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3841
        .trainerName = _("026E91A6"),
#line 3842
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3844
        .mapSec = MAPSEC_ROUTE8,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3846
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .heldItem = ITEM_SITRUS_BERRY,
#line 3849
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3851
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3847
            .ability = ABILITY_ROCK_HEAD,
#line 3848
            .lvl = 20,
#line 3850
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3852
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3857
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3857
            .heldItem = ITEM_GANLON_BERRY,
#line 3860
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3862
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3858
            .ability = ABILITY_CLEAR_BODY,
#line 3859
            .lvl = 24,
#line 3861
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3863
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3867
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3872
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3868
            .ability = ABILITY_OVERCOAT,
#line 3869
            .lvl = 25,
#line 3871
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3873
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3878
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3879
        .trainerName = _("029E0EF0"),
#line 3880
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3882
        .mapSec = MAPSEC_ROUTE6,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3884
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3887
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3889
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3885
            .ability = ABILITY_POISON_POINT,
#line 3886
            .lvl = 22,
#line 3888
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3890
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3895
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3898
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3900
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3896
            .ability = ABILITY_CLEAR_BODY,
#line 3897
            .lvl = 25,
#line 3899
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3901
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3905
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3905
            .heldItem = ITEM_SITRUS_BERRY,
#line 3908
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3910
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3906
            .ability = ABILITY_GLUTTONY,
#line 3907
            .lvl = 23,
#line 3909
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3911
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3916
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3917
        .trainerName = _("00E46F7D"),
#line 3918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3921
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3920
        .mapSec = MAPSEC_ROUTE6,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3923
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3926
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3928
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3924
            .ability = ABILITY_SHED_SKIN,
#line 3925
            .lvl = 23,
#line 3927
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3929
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3933
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3936
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3938
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3934
            .ability = ABILITY_WEAK_ARMOR,
#line 3935
            .lvl = 22,
#line 3937
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3939
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 3944
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3944
            .heldItem = ITEM_HARD_STONE,
#line 3947
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 3949
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3945
            .ability = ABILITY_STURDY,
#line 3946
            .lvl = 23,
#line 3948
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3950
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3955
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 3956
        .trainerName = _("Blank"),
#line 3957
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3960
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3959
        .mapSec = MAPSEC_MERMEREZA_CITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3962
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3962
            .heldItem = ITEM_BIG_NUGGET,
#line 3965
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 3967
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3963
            .ability = ABILITY_UNBURDEN,
#line 3964
            .lvl = 21,
#line 3966
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3968
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 3972
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3972
            .heldItem = ITEM_ASPEAR_BERRY,
#line 3975
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 3977
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3973
            .ability = ABILITY_FLASH_FIRE,
#line 3974
            .lvl = 25,
#line 3976
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3978
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 3983
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 3984
        .trainerName = _("Blank"),
#line 3985
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3987
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 3989
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3988
        .mapSec = MAPSEC_MERMEREZA_CITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3991
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3991
            .heldItem = ITEM_FIGY_BERRY,
#line 3994
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 3996
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3992
            .ability = ABILITY_GLUTTONY,
#line 3993
            .lvl = 20,
#line 3995
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3997
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 4002
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 4003
        .trainerName = _("Blank"),
#line 4004
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4005
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4007
        .mapSec = MAPSEC_MERMEREZA_CITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4009
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4009
            .heldItem = ITEM_RINDO_BERRY,
#line 4012
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 4014
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4010
            .ability = ABILITY_SWIFT_SWIM,
#line 4011
            .lvl = 23,
#line 4013
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4015
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4019
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4019
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4022
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4024
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4020
            .ability = ABILITY_STENCH,
#line 4021
            .lvl = 20,
#line 4023
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4025
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4029
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4030
        .trainerName = _("Blank"),
#line 4031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4034
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4034
            .heldItem = ITEM_TWISTED_SPOON,
#line 4037
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4039
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4035
            .ability = ABILITY_PRANKSTER,
#line 4036
            .lvl = 25,
#line 4038
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4040
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4044
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4044
            .heldItem = ITEM_ROSELI_BERRY,
#line 4047
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4049
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4045
            .ability = ABILITY_CONTRARY,
#line 4046
            .lvl = 26,
#line 4048
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4050
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4054
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4054
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4057
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4059
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4055
            .ability = ABILITY_TINTED_LENS,
#line 4056
            .lvl = 26,
#line 4058
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4060
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4063
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4064
        .trainerName = _("Blank"),
#line 4065
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4068
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4068
            .heldItem = ITEM_SHUCA_BERRY,
#line 4071
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4073
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4069
            .ability = ABILITY_EFFECT_SPORE,
#line 4070
            .lvl = 24,
#line 4072
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4074
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4078
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4081
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4083
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4079
            .ability = ABILITY_OVERCOAT,
#line 4080
            .lvl = 26,
#line 4082
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4084
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4088
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4088
            .heldItem = ITEM_SPELL_TAG,
#line 4091
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4093
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4089
            .ability = ABILITY_SWARM,
#line 4090
            .lvl = 24,
#line 4092
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4094
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4097
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4098
        .trainerName = _("Blank"),
#line 4099
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4102
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4102
            .heldItem = ITEM_MYSTIC_WATER,
#line 4105
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4107
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4103
            .ability = ABILITY_LIMBER,
#line 4104
            .lvl = 25,
#line 4106
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4108
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4111
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4111
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4114
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4116
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4112
            .ability = ABILITY_HUSTLE,
#line 4113
            .lvl = 25,
#line 4115
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4117
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4120
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4121
        .trainerName = _("Blank"),
#line 4122
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4125
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4126
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4128
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4129
        .trainerName = _("Blank"),
#line 4130
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4133
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4134
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4136
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4137
        .trainerName = _("Blank"),
#line 4138
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4141
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4142
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4144
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4145
        .trainerName = _("Blank"),
#line 4146
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4149
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4150
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4152
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4153
        .trainerName = _("Blank"),
#line 4154
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4157
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4158
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4160
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4161
        .trainerName = _("Blank"),
#line 4162
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4165
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4166
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4172
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4173
        .trainerName = _("Blank"),
#line 4174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4177
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4178
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4180
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4181
        .trainerName = _("Blank"),
#line 4182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4185
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4188
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4189
        .trainerName = _("Blank"),
#line 4190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4193
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4194
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4196
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4197
        .trainerName = _("Blank"),
#line 4198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4201
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4204
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4205
        .trainerName = _("Blank"),
#line 4206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4209
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4212
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4213
        .trainerName = _("Blank"),
#line 4214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4217
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4218
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4220
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4221
        .trainerName = _("Blank"),
#line 4222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4225
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4228
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4229
        .trainerName = _("Blank"),
#line 4230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4233
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4236
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4237
        .trainerName = _("Blank"),
#line 4238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4241
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4242
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4244
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4245
        .trainerName = _("Blank"),
#line 4246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4249
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4252
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4253
        .trainerName = _("Blank"),
#line 4254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4257
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4258
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4260
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4261
        .trainerName = _("Blank"),
#line 4262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4265
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4266
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4268
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4269
        .trainerName = _("Blank"),
#line 4270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4273
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4274
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4276
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4277
        .trainerName = _("Blank"),
#line 4278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4281
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4282
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4284
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4285
        .trainerName = _("Blank"),
#line 4286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4289
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4290
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4292
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4293
        .trainerName = _("Blank"),
#line 4294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4297
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4298
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4300
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4301
        .trainerName = _("Blank"),
#line 4302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4305
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4306
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4308
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 4309
        .trainerName = _("Blank"),
#line 4310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4314
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4316
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 4317
        .trainerName = _("Blank"),
#line 4318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4321
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4322
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4324
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 4325
        .trainerName = _("Blank"),
#line 4326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4329
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4330
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4332
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 4333
        .trainerName = _("Blank"),
#line 4334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4337
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4338
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4340
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 4341
        .trainerName = _("Blank"),
#line 4342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4345
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4346
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4348
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 4349
        .trainerName = _("Blank"),
#line 4350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4353
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4354
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4356
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 4357
        .trainerName = _("Blank"),
#line 4358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4361
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4362
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4364
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 4365
        .trainerName = _("Blank"),
#line 4366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4369
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4370
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4372
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 4373
        .trainerName = _("Blank"),
#line 4374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4377
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4378
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4380
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 4381
        .trainerName = _("Blank"),
#line 4382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4385
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4386
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4388
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 4389
        .trainerName = _("Blank"),
#line 4390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4393
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4394
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4396
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 4397
        .trainerName = _("Blank"),
#line 4398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4401
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4402
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4404
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 4405
        .trainerName = _("Blank"),
#line 4406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4409
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4410
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4412
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 4413
        .trainerName = _("Blank"),
#line 4414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4417
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4418
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4420
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 4421
        .trainerName = _("Blank"),
#line 4422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4425
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4426
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4428
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 4429
        .trainerName = _("Blank"),
#line 4430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4433
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4434
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4436
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 4437
        .trainerName = _("Blank"),
#line 4438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4441
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4442
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4444
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 4445
        .trainerName = _("Blank"),
#line 4446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4449
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4450
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4452
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 4453
        .trainerName = _("Blank"),
#line 4454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4457
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4458
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4460
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 4461
        .trainerName = _("Blank"),
#line 4462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4465
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4466
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4468
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 4469
        .trainerName = _("Blank"),
#line 4470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4473
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4474
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4476
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 4477
        .trainerName = _("Blank"),
#line 4478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4481
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4482
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4484
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 4485
        .trainerName = _("Blank"),
#line 4486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4489
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4490
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4492
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 4493
        .trainerName = _("Blank"),
#line 4494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4497
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4498
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4500
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 4501
        .trainerName = _("Blank"),
#line 4502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4505
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4506
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4508
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 4509
        .trainerName = _("Blank"),
#line 4510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4513
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4514
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4516
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 4517
        .trainerName = _("Blank"),
#line 4518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4521
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4522
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4524
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 4525
        .trainerName = _("Blank"),
#line 4526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4529
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4530
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4532
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 4533
        .trainerName = _("Blank"),
#line 4534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4537
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4538
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4540
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 4541
        .trainerName = _("Blank"),
#line 4542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4545
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4546
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4548
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 4549
        .trainerName = _("Blank"),
#line 4550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4553
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4554
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4556
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 4557
        .trainerName = _("Blank"),
#line 4558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4561
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4562
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4564
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 4565
        .trainerName = _("Blank"),
#line 4566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4569
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4570
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4572
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 4573
        .trainerName = _("Blank"),
#line 4574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4577
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4578
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4580
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 4581
        .trainerName = _("Blank"),
#line 4582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4585
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4586
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4588
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 4589
        .trainerName = _("Blank"),
#line 4590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4593
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4594
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4596
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 4597
        .trainerName = _("Blank"),
#line 4598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4601
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4602
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4604
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 4605
        .trainerName = _("Blank"),
#line 4606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4609
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4610
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4612
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 4613
        .trainerName = _("Blank"),
#line 4614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4617
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4618
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4620
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 4621
        .trainerName = _("Blank"),
#line 4622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4625
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4626
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4628
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 4629
        .trainerName = _("Blank"),
#line 4630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4633
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4634
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4636
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 4637
        .trainerName = _("Blank"),
#line 4638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4641
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4642
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4644
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 4645
        .trainerName = _("Blank"),
#line 4646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4649
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4650
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4652
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 4653
        .trainerName = _("Blank"),
#line 4654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4657
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4658
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4660
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 4661
        .trainerName = _("Blank"),
#line 4662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4665
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4666
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4668
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 4669
        .trainerName = _("Blank"),
#line 4670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4673
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4674
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4676
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 4677
        .trainerName = _("Blank"),
#line 4678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4681
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4682
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4684
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 4685
        .trainerName = _("Blank"),
#line 4686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4689
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4690
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4692
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 4693
        .trainerName = _("Blank"),
#line 4694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4697
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4698
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4700
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 4701
        .trainerName = _("Blank"),
#line 4702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4705
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4706
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4708
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 4709
        .trainerName = _("Blank"),
#line 4710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4713
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4714
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4716
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 4717
        .trainerName = _("Blank"),
#line 4718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4721
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4722
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4724
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 4725
        .trainerName = _("Blank"),
#line 4726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4729
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4730
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4732
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 4733
        .trainerName = _("Blank"),
#line 4734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4737
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4738
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4740
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 4741
        .trainerName = _("Blank"),
#line 4742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4745
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4746
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4748
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 4749
        .trainerName = _("Blank"),
#line 4750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4753
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4754
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4756
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 4757
        .trainerName = _("Blank"),
#line 4758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4761
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4762
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4764
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 4765
        .trainerName = _("Blank"),
#line 4766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4769
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4770
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4772
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 4773
        .trainerName = _("Blank"),
#line 4774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4777
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4778
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4780
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 4781
        .trainerName = _("Blank"),
#line 4782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4785
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4786
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4788
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 4789
        .trainerName = _("Blank"),
#line 4790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4793
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4794
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4796
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 4797
        .trainerName = _("Blank"),
#line 4798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4801
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4802
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4804
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 4805
        .trainerName = _("Blank"),
#line 4806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4809
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4810
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4812
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 4813
        .trainerName = _("Blank"),
#line 4814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4817
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4818
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4820
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 4821
        .trainerName = _("Blank"),
#line 4822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4825
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4826
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4828
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 4829
        .trainerName = _("Blank"),
#line 4830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4833
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4834
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4836
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 4837
        .trainerName = _("Blank"),
#line 4838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4841
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4842
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4844
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 4845
        .trainerName = _("Blank"),
#line 4846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4849
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4850
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4852
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 4853
        .trainerName = _("Blank"),
#line 4854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4857
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4858
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4860
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 4861
        .trainerName = _("Blank"),
#line 4862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4865
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4866
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4868
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 4869
        .trainerName = _("Blank"),
#line 4870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4873
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4874
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4876
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 4877
        .trainerName = _("Blank"),
#line 4878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4881
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4882
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4884
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 4885
        .trainerName = _("Blank"),
#line 4886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4889
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4890
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4892
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 4893
        .trainerName = _("Blank"),
#line 4894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4897
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4898
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4900
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 4901
        .trainerName = _("Blank"),
#line 4902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4905
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4906
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4908
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 4909
        .trainerName = _("Blank"),
#line 4910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4913
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4914
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4916
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 4917
        .trainerName = _("Blank"),
#line 4918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4921
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4922
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4924
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 4925
        .trainerName = _("Blank"),
#line 4926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4929
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4930
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4932
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 4933
        .trainerName = _("Blank"),
#line 4934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4937
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4938
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4940
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 4941
        .trainerName = _("Blank"),
#line 4942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4945
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4946
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4948
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 4949
        .trainerName = _("Blank"),
#line 4950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4953
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4954
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4956
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 4957
        .trainerName = _("Blank"),
#line 4958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4961
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4962
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4964
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 4965
        .trainerName = _("Blank"),
#line 4966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4969
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4970
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4972
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 4973
        .trainerName = _("Blank"),
#line 4974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4977
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4978
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4980
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 4981
        .trainerName = _("Blank"),
#line 4982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4985
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4986
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4988
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 4989
        .trainerName = _("Blank"),
#line 4990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4993
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4994
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4996
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 4997
        .trainerName = _("Blank"),
#line 4998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5001
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5002
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5004
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 5005
        .trainerName = _("Blank"),
#line 5006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5009
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5010
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5012
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 5013
        .trainerName = _("Blank"),
#line 5014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5017
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5018
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5020
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 5021
        .trainerName = _("Blank"),
#line 5022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5025
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5026
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5028
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 5029
        .trainerName = _("Blank"),
#line 5030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5033
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5034
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5036
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 5037
        .trainerName = _("Blank"),
#line 5038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5041
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5042
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5044
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 5045
        .trainerName = _("Blank"),
#line 5046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5049
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5050
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5052
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 5053
        .trainerName = _("Blank"),
#line 5054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5057
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5058
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5060
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 5061
        .trainerName = _("Blank"),
#line 5062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5065
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5066
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5068
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 5069
        .trainerName = _("Blank"),
#line 5070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5073
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5074
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5076
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 5077
        .trainerName = _("Blank"),
#line 5078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5081
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5082
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5084
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 5085
        .trainerName = _("Blank"),
#line 5086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5089
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5090
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5092
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 5093
        .trainerName = _("Blank"),
#line 5094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5097
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5098
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5100
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 5101
        .trainerName = _("Blank"),
#line 5102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5105
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5106
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5108
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 5109
        .trainerName = _("Blank"),
#line 5110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5113
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5114
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5116
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 5117
        .trainerName = _("Blank"),
#line 5118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5121
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5122
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5124
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 5125
        .trainerName = _("Blank"),
#line 5126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5129
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5130
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5132
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 5133
        .trainerName = _("Blank"),
#line 5134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5137
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5138
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5140
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 5141
        .trainerName = _("Blank"),
#line 5142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5145
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5146
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5148
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 5149
        .trainerName = _("Blank"),
#line 5150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5153
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5154
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5156
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 5157
        .trainerName = _("Blank"),
#line 5158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5161
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5162
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5164
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 5165
        .trainerName = _("Blank"),
#line 5166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5169
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5170
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5172
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 5173
        .trainerName = _("Blank"),
#line 5174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5177
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5178
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5180
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 5181
        .trainerName = _("Blank"),
#line 5182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5185
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5188
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 5189
        .trainerName = _("Blank"),
#line 5190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5193
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5194
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5196
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 5197
        .trainerName = _("Blank"),
#line 5198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5201
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5204
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 5205
        .trainerName = _("Blank"),
#line 5206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5209
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5212
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 5213
        .trainerName = _("Blank"),
#line 5214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5217
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5218
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5220
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 5221
        .trainerName = _("Blank"),
#line 5222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5225
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5228
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 5229
        .trainerName = _("Blank"),
#line 5230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5233
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5236
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 5237
        .trainerName = _("Blank"),
#line 5238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5241
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5242
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5244
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 5245
        .trainerName = _("Blank"),
#line 5246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5249
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5252
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 5253
        .trainerName = _("Blank"),
#line 5254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5257
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5258
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5260
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 5261
        .trainerName = _("Blank"),
#line 5262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5265
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5266
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5268
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 5269
        .trainerName = _("Blank"),
#line 5270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5273
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5274
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5276
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 5277
        .trainerName = _("Blank"),
#line 5278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5281
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5282
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5284
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 5285
        .trainerName = _("Blank"),
#line 5286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5289
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5290
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5292
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 5293
        .trainerName = _("Blank"),
#line 5294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5297
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5298
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5300
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 5301
        .trainerName = _("Blank"),
#line 5302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5305
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5306
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5308
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 5309
        .trainerName = _("Blank"),
#line 5310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5313
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5314
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5316
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 5317
        .trainerName = _("Blank"),
#line 5318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5321
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5322
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5324
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 5325
        .trainerName = _("Blank"),
#line 5326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5329
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5330
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5332
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 5333
        .trainerName = _("Blank"),
#line 5334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5337
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5338
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5340
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 5341
        .trainerName = _("Blank"),
#line 5342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5345
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5346
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5348
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 5349
        .trainerName = _("Blank"),
#line 5350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5353
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5354
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5356
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 5357
        .trainerName = _("Blank"),
#line 5358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5361
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5362
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5364
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 5365
        .trainerName = _("Blank"),
#line 5366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5369
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5370
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5372
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 5373
        .trainerName = _("Blank"),
#line 5374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5377
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5378
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5380
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 5381
        .trainerName = _("Blank"),
#line 5382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5385
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5386
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5388
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 5389
        .trainerName = _("Blank"),
#line 5390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5393
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5394
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5396
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 5397
        .trainerName = _("Blank"),
#line 5398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5401
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5402
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5404
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 5405
        .trainerName = _("Blank"),
#line 5406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5409
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5410
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5412
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 5413
        .trainerName = _("Blank"),
#line 5414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5417
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5418
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5420
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 5421
        .trainerName = _("Blank"),
#line 5422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5425
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5426
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5428
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 5429
        .trainerName = _("Blank"),
#line 5430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5433
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5434
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5436
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 5437
        .trainerName = _("Blank"),
#line 5438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5441
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5442
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5444
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 5445
        .trainerName = _("Blank"),
#line 5446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5449
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5450
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5452
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 5453
        .trainerName = _("Blank"),
#line 5454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5457
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5458
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5460
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 5461
        .trainerName = _("Blank"),
#line 5462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5465
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5466
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5468
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 5469
        .trainerName = _("Blank"),
#line 5470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5473
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5474
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5476
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 5477
        .trainerName = _("Blank"),
#line 5478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5481
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5482
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5484
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 5485
        .trainerName = _("Blank"),
#line 5486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5489
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5490
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5492
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 5493
        .trainerName = _("Blank"),
#line 5494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5497
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5498
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5500
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 5501
        .trainerName = _("Blank"),
#line 5502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5505
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5506
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5508
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 5509
        .trainerName = _("Blank"),
#line 5510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5513
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5514
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5516
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 5517
        .trainerName = _("Blank"),
#line 5518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5521
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5522
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5524
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 5525
        .trainerName = _("Blank"),
#line 5526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5529
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5530
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5532
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 5533
        .trainerName = _("Blank"),
#line 5534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5537
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5538
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5540
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 5541
        .trainerName = _("Blank"),
#line 5542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5545
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5546
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5548
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 5549
        .trainerName = _("Blank"),
#line 5550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5553
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5554
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5556
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 5557
        .trainerName = _("Blank"),
#line 5558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5561
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5562
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5564
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 5565
        .trainerName = _("Blank"),
#line 5566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5569
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5570
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5572
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 5573
        .trainerName = _("Blank"),
#line 5574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5577
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5578
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5580
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 5581
        .trainerName = _("Blank"),
#line 5582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5585
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5586
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5588
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 5589
        .trainerName = _("Blank"),
#line 5590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5593
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5594
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5596
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 5597
        .trainerName = _("Blank"),
#line 5598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5601
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5602
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5604
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 5605
        .trainerName = _("Blank"),
#line 5606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5609
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5610
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5612
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 5613
        .trainerName = _("Blank"),
#line 5614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5618
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5620
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 5621
        .trainerName = _("Blank"),
#line 5622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5625
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5626
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5628
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 5629
        .trainerName = _("Blank"),
#line 5630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5633
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5634
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5636
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 5637
        .trainerName = _("Blank"),
#line 5638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5641
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5642
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5644
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 5645
        .trainerName = _("Blank"),
#line 5646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5649
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5650
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5652
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 5653
        .trainerName = _("Blank"),
#line 5654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5657
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5658
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5660
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 5661
        .trainerName = _("Blank"),
#line 5662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5665
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5666
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5668
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 5669
        .trainerName = _("Blank"),
#line 5670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5673
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5674
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5676
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 5677
        .trainerName = _("Blank"),
#line 5678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5681
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5682
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5684
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 5685
        .trainerName = _("Blank"),
#line 5686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5689
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5690
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5692
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 5693
        .trainerName = _("Blank"),
#line 5694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5697
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5698
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5700
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 5701
        .trainerName = _("Blank"),
#line 5702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5705
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5706
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5708
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 5709
        .trainerName = _("Blank"),
#line 5710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5713
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5714
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5716
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 5717
        .trainerName = _("Blank"),
#line 5718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5721
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5722
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5724
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 5725
        .trainerName = _("Blank"),
#line 5726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5729
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5730
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5732
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 5733
        .trainerName = _("Blank"),
#line 5734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5737
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5738
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5740
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 5741
        .trainerName = _("Blank"),
#line 5742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5745
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5746
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5748
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 5749
        .trainerName = _("Blank"),
#line 5750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5753
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5754
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5756
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 5757
        .trainerName = _("Blank"),
#line 5758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5761
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5762
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5764
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 5765
        .trainerName = _("Blank"),
#line 5766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5769
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5770
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5772
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 5773
        .trainerName = _("Blank"),
#line 5774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5777
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5778
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5780
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 5781
        .trainerName = _("Blank"),
#line 5782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5785
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5786
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5788
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 5789
        .trainerName = _("Blank"),
#line 5790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5793
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5794
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5796
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 5797
        .trainerName = _("Blank"),
#line 5798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5801
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5802
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5804
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 5805
        .trainerName = _("Blank"),
#line 5806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5809
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5810
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5812
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 5813
        .trainerName = _("Blank"),
#line 5814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5817
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5818
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5820
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 5821
        .trainerName = _("Blank"),
#line 5822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5825
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5826
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5828
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 5829
        .trainerName = _("Blank"),
#line 5830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5833
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5834
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5836
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 5837
        .trainerName = _("Blank"),
#line 5838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5841
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5842
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5844
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 5845
        .trainerName = _("Blank"),
#line 5846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5849
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5850
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5852
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 5853
        .trainerName = _("Blank"),
#line 5854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5857
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5858
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5860
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 5861
        .trainerName = _("Blank"),
#line 5862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5865
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5866
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5868
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 5869
        .trainerName = _("Blank"),
#line 5870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5873
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5874
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5876
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 5877
        .trainerName = _("Blank"),
#line 5878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5881
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5882
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5884
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 5885
        .trainerName = _("Blank"),
#line 5886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5889
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5890
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5892
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 5893
        .trainerName = _("Blank"),
#line 5894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5897
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5898
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5900
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 5901
        .trainerName = _("Blank"),
#line 5902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5905
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5906
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5908
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 5909
        .trainerName = _("Blank"),
#line 5910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5913
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5914
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5916
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 5917
        .trainerName = _("Blank"),
#line 5918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5921
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5922
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5924
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 5925
        .trainerName = _("Blank"),
#line 5926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5929
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5930
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5932
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 5933
        .trainerName = _("Blank"),
#line 5934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5937
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5938
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5940
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 5941
        .trainerName = _("Blank"),
#line 5942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5945
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5946
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5948
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 5949
        .trainerName = _("Blank"),
#line 5950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5953
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5954
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5956
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 5957
        .trainerName = _("Blank"),
#line 5958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5961
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5962
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5964
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 5965
        .trainerName = _("Blank"),
#line 5966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5969
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5970
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5972
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 5973
        .trainerName = _("Blank"),
#line 5974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5977
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5978
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5980
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 5981
        .trainerName = _("Blank"),
#line 5982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5985
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5986
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5988
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 5989
        .trainerName = _("Blank"),
#line 5990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5993
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5994
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5996
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 5997
        .trainerName = _("Blank"),
#line 5998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6001
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6002
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6004
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 6005
        .trainerName = _("Blank"),
#line 6006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6009
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6010
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6012
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 6013
        .trainerName = _("Blank"),
#line 6014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6017
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6018
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6020
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 6021
        .trainerName = _("Blank"),
#line 6022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6025
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6026
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6028
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 6029
        .trainerName = _("Blank"),
#line 6030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6033
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6034
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6036
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 6037
        .trainerName = _("Blank"),
#line 6038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6041
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6042
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6044
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 6045
        .trainerName = _("Blank"),
#line 6046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6049
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6050
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6052
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 6053
        .trainerName = _("Blank"),
#line 6054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6057
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6058
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6060
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 6061
        .trainerName = _("Blank"),
#line 6062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 6069
        .trainerName = _("Blank"),
#line 6070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 6077
        .trainerName = _("Blank"),
#line 6078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 6085
        .trainerName = _("Blank"),
#line 6086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 6093
        .trainerName = _("Blank"),
#line 6094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 6101
        .trainerName = _("Blank"),
#line 6102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 6109
        .trainerName = _("Blank"),
#line 6110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 6117
        .trainerName = _("Blank"),
#line 6118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 6125
        .trainerName = _("Blank"),
#line 6126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 6133
        .trainerName = _("Blank"),
#line 6134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 6141
        .trainerName = _("Blank"),
#line 6142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 6149
        .trainerName = _("Blank"),
#line 6150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 6157
        .trainerName = _("Blank"),
#line 6158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 6165
        .trainerName = _("Blank"),
#line 6166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 6173
        .trainerName = _("Blank"),
#line 6174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 6181
        .trainerName = _("Blank"),
#line 6182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 6189
        .trainerName = _("Blank"),
#line 6190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 6197
        .trainerName = _("Blank"),
#line 6198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 6205
        .trainerName = _("Blank"),
#line 6206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 6213
        .trainerName = _("Blank"),
#line 6214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 6221
        .trainerName = _("Blank"),
#line 6222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 6229
        .trainerName = _("Blank"),
#line 6230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 6237
        .trainerName = _("Blank"),
#line 6238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 6245
        .trainerName = _("Blank"),
#line 6246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 6253
        .trainerName = _("Blank"),
#line 6254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 6261
        .trainerName = _("Blank"),
#line 6262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 6269
        .trainerName = _("Blank"),
#line 6270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 6277
        .trainerName = _("Blank"),
#line 6278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 6285
        .trainerName = _("Blank"),
#line 6286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 6293
        .trainerName = _("Blank"),
#line 6294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 6301
        .trainerName = _("Blank"),
#line 6302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 6309
        .trainerName = _("Blank"),
#line 6310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 6317
        .trainerName = _("Blank"),
#line 6318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 6325
        .trainerName = _("Blank"),
#line 6326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 6333
        .trainerName = _("Blank"),
#line 6334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 6341
        .trainerName = _("Blank"),
#line 6342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 6349
        .trainerName = _("Blank"),
#line 6350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 6357
        .trainerName = _("Blank"),
#line 6358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 6365
        .trainerName = _("Blank"),
#line 6366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 6373
        .trainerName = _("Blank"),
#line 6374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 6381
        .trainerName = _("Blank"),
#line 6382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 6389
        .trainerName = _("Blank"),
#line 6390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 6397
        .trainerName = _("Blank"),
#line 6398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 6405
        .trainerName = _("Blank"),
#line 6406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 6413
        .trainerName = _("Blank"),
#line 6414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 6421
        .trainerName = _("Blank"),
#line 6422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 6429
        .trainerName = _("Blank"),
#line 6430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 6437
        .trainerName = _("Blank"),
#line 6438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 6445
        .trainerName = _("Blank"),
#line 6446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 6453
        .trainerName = _("Blank"),
#line 6454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 6461
        .trainerName = _("Blank"),
#line 6462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 6469
        .trainerName = _("Blank"),
#line 6470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 6477
        .trainerName = _("Blank"),
#line 6478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 6485
        .trainerName = _("Blank"),
#line 6486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 6493
        .trainerName = _("Blank"),
#line 6494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 6501
        .trainerName = _("Blank"),
#line 6502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 6509
        .trainerName = _("Blank"),
#line 6510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 6517
        .trainerName = _("Blank"),
#line 6518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 6525
        .trainerName = _("Blank"),
#line 6526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 6533
        .trainerName = _("Blank"),
#line 6534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 6541
        .trainerName = _("Blank"),
#line 6542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 6549
        .trainerName = _("Blank"),
#line 6550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 6557
        .trainerName = _("Blank"),
#line 6558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 6565
        .trainerName = _("Blank"),
#line 6566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 6573
        .trainerName = _("Blank"),
#line 6574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 6581
        .trainerName = _("Blank"),
#line 6582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 6589
        .trainerName = _("Blank"),
#line 6590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 6597
        .trainerName = _("Blank"),
#line 6598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 6605
        .trainerName = _("Blank"),
#line 6606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 6613
        .trainerName = _("Blank"),
#line 6614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 6621
        .trainerName = _("Blank"),
#line 6622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 6629
        .trainerName = _("Blank"),
#line 6630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 6637
        .trainerName = _("Blank"),
#line 6638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 6645
        .trainerName = _("Blank"),
#line 6646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 6653
        .trainerName = _("Blank"),
#line 6654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 6661
        .trainerName = _("Blank"),
#line 6662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 6669
        .trainerName = _("Blank"),
#line 6670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 6677
        .trainerName = _("Blank"),
#line 6678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 6685
        .trainerName = _("Blank"),
#line 6686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 6693
        .trainerName = _("Blank"),
#line 6694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 6701
        .trainerName = _("Blank"),
#line 6702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 6709
        .trainerName = _("Blank"),
#line 6710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 6717
        .trainerName = _("Blank"),
#line 6718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 6725
        .trainerName = _("Blank"),
#line 6726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 6733
        .trainerName = _("Blank"),
#line 6734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 6741
        .trainerName = _("Blank"),
#line 6742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 6749
        .trainerName = _("Blank"),
#line 6750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 6757
        .trainerName = _("Blank"),
#line 6758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 6765
        .trainerName = _("Blank"),
#line 6766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 6773
        .trainerName = _("Blank"),
#line 6774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 6781
        .trainerName = _("Blank"),
#line 6782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 6789
        .trainerName = _("Blank"),
#line 6790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 6797
        .trainerName = _("Blank"),
#line 6798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 6805
        .trainerName = _("Blank"),
#line 6806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 6813
        .trainerName = _("Blank"),
#line 6814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 6821
        .trainerName = _("Blank"),
#line 6822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 6829
        .trainerName = _("Blank"),
#line 6830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 6837
        .trainerName = _("Blank"),
#line 6838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 6845
        .trainerName = _("Blank"),
#line 6846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 6853
        .trainerName = _("Blank"),
#line 6854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 6861
        .trainerName = _("Blank"),
#line 6862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 6869
        .trainerName = _("Blank"),
#line 6870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 6877
        .trainerName = _("Blank"),
#line 6878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 6885
        .trainerName = _("Blank"),
#line 6886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 6893
        .trainerName = _("Blank"),
#line 6894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 6901
        .trainerName = _("Blank"),
#line 6902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 6909
        .trainerName = _("Blank"),
#line 6910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 6917
        .trainerName = _("Blank"),
#line 6918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 6925
        .trainerName = _("Blank"),
#line 6926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 6933
        .trainerName = _("Blank"),
#line 6934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 6941
        .trainerName = _("Blank"),
#line 6942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 6949
        .trainerName = _("Blank"),
#line 6950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 6957
        .trainerName = _("Blank"),
#line 6958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 6965
        .trainerName = _("Blank"),
#line 6966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 6973
        .trainerName = _("Blank"),
#line 6974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 6981
        .trainerName = _("Blank"),
#line 6982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 6989
        .trainerName = _("Blank"),
#line 6990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 6997
        .trainerName = _("Blank"),
#line 6998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 7005
        .trainerName = _("Blank"),
#line 7006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 7013
        .trainerName = _("Blank"),
#line 7014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 7021
        .trainerName = _("Blank"),
#line 7022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 7029
        .trainerName = _("Blank"),
#line 7030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 7037
        .trainerName = _("Blank"),
#line 7038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 7045
        .trainerName = _("Blank"),
#line 7046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 7053
        .trainerName = _("Blank"),
#line 7054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 7061
        .trainerName = _("Blank"),
#line 7062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 7069
        .trainerName = _("Blank"),
#line 7070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 7077
        .trainerName = _("Blank"),
#line 7078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 7085
        .trainerName = _("Blank"),
#line 7086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 7093
        .trainerName = _("Blank"),
#line 7094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 7101
        .trainerName = _("Blank"),
#line 7102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 7109
        .trainerName = _("Blank"),
#line 7110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 7117
        .trainerName = _("Blank"),
#line 7118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 7125
        .trainerName = _("Blank"),
#line 7126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 7133
        .trainerName = _("Blank"),
#line 7134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 7141
        .trainerName = _("Blank"),
#line 7142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 7149
        .trainerName = _("Blank"),
#line 7150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 7157
        .trainerName = _("Blank"),
#line 7158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 7165
        .trainerName = _("Blank"),
#line 7166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 7173
        .trainerName = _("Blank"),
#line 7174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 7181
        .trainerName = _("Blank"),
#line 7182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 7189
        .trainerName = _("Blank"),
#line 7190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 7197
        .trainerName = _("Blank"),
#line 7198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 7205
        .trainerName = _("Blank"),
#line 7206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 7213
        .trainerName = _("Blank"),
#line 7214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 7221
        .trainerName = _("Blank"),
#line 7222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 7229
        .trainerName = _("Blank"),
#line 7230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 7237
        .trainerName = _("Blank"),
#line 7238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 7245
        .trainerName = _("Blank"),
#line 7246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 7253
        .trainerName = _("Blank"),
#line 7254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 7261
        .trainerName = _("Blank"),
#line 7262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 7269
        .trainerName = _("Blank"),
#line 7270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 7277
        .trainerName = _("Blank"),
#line 7278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 7285
        .trainerName = _("Blank"),
#line 7286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 7293
        .trainerName = _("Blank"),
#line 7294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 7301
        .trainerName = _("Blank"),
#line 7302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 7309
        .trainerName = _("Blank"),
#line 7310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 7317
        .trainerName = _("Blank"),
#line 7318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 7325
        .trainerName = _("Blank"),
#line 7326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 7333
        .trainerName = _("Blank"),
#line 7334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 7341
        .trainerName = _("Blank"),
#line 7342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 7349
        .trainerName = _("Blank"),
#line 7350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 7357
        .trainerName = _("Blank"),
#line 7358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 7365
        .trainerName = _("Blank"),
#line 7366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 7373
        .trainerName = _("Blank"),
#line 7374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 7381
        .trainerName = _("Blank"),
#line 7382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 7389
        .trainerName = _("Blank"),
#line 7390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 7397
        .trainerName = _("Blank"),
#line 7398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 7405
        .trainerName = _("Blank"),
#line 7406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 7413
        .trainerName = _("Blank"),
#line 7414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 7421
        .trainerName = _("Blank"),
#line 7422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 7429
        .trainerName = _("Blank"),
#line 7430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 7437
        .trainerName = _("Blank"),
#line 7438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 7445
        .trainerName = _("Blank"),
#line 7446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 7453
        .trainerName = _("Blank"),
#line 7454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 7461
        .trainerName = _("Blank"),
#line 7462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 7469
        .trainerName = _("Blank"),
#line 7470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 7477
        .trainerName = _("Blank"),
#line 7478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 7485
        .trainerName = _("Blank"),
#line 7486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 7493
        .trainerName = _("Blank"),
#line 7494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 7501
        .trainerName = _("Blank"),
#line 7502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 7509
        .trainerName = _("Blank"),
#line 7510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 7517
        .trainerName = _("Blank"),
#line 7518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 7525
        .trainerName = _("Blank"),
#line 7526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 7533
        .trainerName = _("Blank"),
#line 7534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 7541
        .trainerName = _("Blank"),
#line 7542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 7549
        .trainerName = _("Blank"),
#line 7550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 7557
        .trainerName = _("Blank"),
#line 7558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 7565
        .trainerName = _("Blank"),
#line 7566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 7573
        .trainerName = _("Blank"),
#line 7574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 7581
        .trainerName = _("Blank"),
#line 7582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 7589
        .trainerName = _("Blank"),
#line 7590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 7597
        .trainerName = _("Blank"),
#line 7598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 7605
        .trainerName = _("Blank"),
#line 7606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 7613
        .trainerName = _("Blank"),
#line 7614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 7621
        .trainerName = _("Blank"),
#line 7622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 7629
        .trainerName = _("Blank"),
#line 7630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 7637
        .trainerName = _("Blank"),
#line 7638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 7645
        .trainerName = _("Blank"),
#line 7646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 7653
        .trainerName = _("Blank"),
#line 7654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 7661
        .trainerName = _("Blank"),
#line 7662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 7669
        .trainerName = _("Blank"),
#line 7670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 7677
        .trainerName = _("Blank"),
#line 7678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 7685
        .trainerName = _("Blank"),
#line 7686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 7693
        .trainerName = _("Blank"),
#line 7694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 7701
        .trainerName = _("Blank"),
#line 7702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 7709
        .trainerName = _("Blank"),
#line 7710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 7717
        .trainerName = _("Blank"),
#line 7718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 7725
        .trainerName = _("Blank"),
#line 7726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 7733
        .trainerName = _("Blank"),
#line 7734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 7741
        .trainerName = _("Blank"),
#line 7742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 7749
        .trainerName = _("Blank"),
#line 7750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 7757
        .trainerName = _("Blank"),
#line 7758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 7765
        .trainerName = _("Blank"),
#line 7766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 7773
        .trainerName = _("Blank"),
#line 7774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 7781
        .trainerName = _("Blank"),
#line 7782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 7789
        .trainerName = _("Blank"),
#line 7790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 7797
        .trainerName = _("Blank"),
#line 7798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 7805
        .trainerName = _("Blank"),
#line 7806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 7813
        .trainerName = _("Blank"),
#line 7814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 7821
        .trainerName = _("Blank"),
#line 7822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 7829
        .trainerName = _("Blank"),
#line 7830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 7837
        .trainerName = _("Blank"),
#line 7838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 7845
        .trainerName = _("Blank"),
#line 7846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 7853
        .trainerName = _("Blank"),
#line 7854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 7861
        .trainerName = _("Blank"),
#line 7862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 7869
        .trainerName = _("Blank"),
#line 7870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 7877
        .trainerName = _("Blank"),
#line 7878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 7885
        .trainerName = _("Blank"),
#line 7886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 7893
        .trainerName = _("Blank"),
#line 7894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 7901
        .trainerName = _("Blank"),
#line 7902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 7909
        .trainerName = _("Blank"),
#line 7910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 7917
        .trainerName = _("Blank"),
#line 7918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 7925
        .trainerName = _("Blank"),
#line 7926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 7933
        .trainerName = _("Blank"),
#line 7934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 7941
        .trainerName = _("Blank"),
#line 7942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 7949
        .trainerName = _("Blank"),
#line 7950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 7957
        .trainerName = _("Blank"),
#line 7958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 7965
        .trainerName = _("Blank"),
#line 7966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 7973
        .trainerName = _("Blank"),
#line 7974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 7981
        .trainerName = _("Blank"),
#line 7982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 7989
        .trainerName = _("Blank"),
#line 7990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 7997
        .trainerName = _("Blank"),
#line 7998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 8005
        .trainerName = _("Blank"),
#line 8006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 8013
        .trainerName = _("Blank"),
#line 8014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 8021
        .trainerName = _("Blank"),
#line 8022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 8029
        .trainerName = _("Blank"),
#line 8030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 8037
        .trainerName = _("Blank"),
#line 8038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 8045
        .trainerName = _("Blank"),
#line 8046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 8053
        .trainerName = _("Blank"),
#line 8054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 8061
        .trainerName = _("Blank"),
#line 8062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 8069
        .trainerName = _("Blank"),
#line 8070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 8077
        .trainerName = _("Blank"),
#line 8078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 8085
        .trainerName = _("Blank"),
#line 8086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 8093
        .trainerName = _("Blank"),
#line 8094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 8101
        .trainerName = _("Blank"),
#line 8102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 8109
        .trainerName = _("Blank"),
#line 8110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 8117
        .trainerName = _("Blank"),
#line 8118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 8125
        .trainerName = _("Blank"),
#line 8126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 8133
        .trainerName = _("Blank"),
#line 8134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 8141
        .trainerName = _("Blank"),
#line 8142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 8149
        .trainerName = _("Blank"),
#line 8150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 8157
        .trainerName = _("Blank"),
#line 8158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 8165
        .trainerName = _("Blank"),
#line 8166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 8173
        .trainerName = _("Blank"),
#line 8174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 8181
        .trainerName = _("Blank"),
#line 8182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 8189
        .trainerName = _("Blank"),
#line 8190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 8197
        .trainerName = _("Blank"),
#line 8198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 8205
        .trainerName = _("Blank"),
#line 8206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 8213
        .trainerName = _("Blank"),
#line 8214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 8221
        .trainerName = _("Blank"),
#line 8222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 8229
        .trainerName = _("Blank"),
#line 8230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 8237
        .trainerName = _("Blank"),
#line 8238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 8245
        .trainerName = _("Blank"),
#line 8246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 8253
        .trainerName = _("Blank"),
#line 8254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 8261
        .trainerName = _("Blank"),
#line 8262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 8269
        .trainerName = _("Blank"),
#line 8270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 8277
        .trainerName = _("Blank"),
#line 8278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 8285
        .trainerName = _("Blank"),
#line 8286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 8293
        .trainerName = _("Blank"),
#line 8294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 8301
        .trainerName = _("Blank"),
#line 8302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 8309
        .trainerName = _("Blank"),
#line 8310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 8317
        .trainerName = _("Blank"),
#line 8318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 8325
        .trainerName = _("Blank"),
#line 8326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 8333
        .trainerName = _("Blank"),
#line 8334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 8341
        .trainerName = _("Blank"),
#line 8342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 8349
        .trainerName = _("Blank"),
#line 8350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 8357
        .trainerName = _("Blank"),
#line 8358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 8365
        .trainerName = _("Blank"),
#line 8366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 8373
        .trainerName = _("Blank"),
#line 8374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 8381
        .trainerName = _("Blank"),
#line 8382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 8389
        .trainerName = _("Blank"),
#line 8390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 8397
        .trainerName = _("Blank"),
#line 8398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 8405
        .trainerName = _("Blank"),
#line 8406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 8413
        .trainerName = _("Blank"),
#line 8414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 8421
        .trainerName = _("Blank"),
#line 8422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 8429
        .trainerName = _("Blank"),
#line 8430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 8437
        .trainerName = _("Blank"),
#line 8438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 8445
        .trainerName = _("Blank"),
#line 8446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 8453
        .trainerName = _("Blank"),
#line 8454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 8461
        .trainerName = _("Blank"),
#line 8462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 8469
        .trainerName = _("Blank"),
#line 8470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 8477
        .trainerName = _("Blank"),
#line 8478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 8485
        .trainerName = _("Blank"),
#line 8486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 8493
        .trainerName = _("Blank"),
#line 8494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 8501
        .trainerName = _("Blank"),
#line 8502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 8509
        .trainerName = _("Blank"),
#line 8510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 8517
        .trainerName = _("Blank"),
#line 8518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 8525
        .trainerName = _("Blank"),
#line 8526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 8533
        .trainerName = _("Blank"),
#line 8534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 8541
        .trainerName = _("Blank"),
#line 8542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 8549
        .trainerName = _("Blank"),
#line 8550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 8557
        .trainerName = _("Blank"),
#line 8558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 8565
        .trainerName = _("Blank"),
#line 8566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 8573
        .trainerName = _("Blank"),
#line 8574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 8581
        .trainerName = _("Blank"),
#line 8582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 8589
        .trainerName = _("Blank"),
#line 8590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 8597
        .trainerName = _("Blank"),
#line 8598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 8605
        .trainerName = _("Blank"),
#line 8606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 8613
        .trainerName = _("Blank"),
#line 8614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 8621
        .trainerName = _("Blank"),
#line 8622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 8629
        .trainerName = _("Blank"),
#line 8630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 8637
        .trainerName = _("Blank"),
#line 8638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 8645
        .trainerName = _("Blank"),
#line 8646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 8653
        .trainerName = _("Blank"),
#line 8654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 8661
        .trainerName = _("Blank"),
#line 8662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 8669
        .trainerName = _("Blank"),
#line 8670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 8677
        .trainerName = _("Blank"),
#line 8678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 8685
        .trainerName = _("Blank"),
#line 8686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 8693
        .trainerName = _("Blank"),
#line 8694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 8701
        .trainerName = _("Blank"),
#line 8702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 8709
        .trainerName = _("Blank"),
#line 8710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 8717
        .trainerName = _("Blank"),
#line 8718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 8725
        .trainerName = _("Blank"),
#line 8726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 8733
        .trainerName = _("Blank"),
#line 8734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 8741
        .trainerName = _("Blank"),
#line 8742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 8749
        .trainerName = _("Blank"),
#line 8750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 8757
        .trainerName = _("Blank"),
#line 8758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 8765
        .trainerName = _("Blank"),
#line 8766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 8773
        .trainerName = _("Blank"),
#line 8774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 8781
        .trainerName = _("Blank"),
#line 8782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 8789
        .trainerName = _("Blank"),
#line 8790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 8797
        .trainerName = _("Blank"),
#line 8798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 8805
        .trainerName = _("Blank"),
#line 8806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 8813
        .trainerName = _("Blank"),
#line 8814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 8821
        .trainerName = _("Blank"),
#line 8822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 8829
        .trainerName = _("Blank"),
#line 8830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 8837
        .trainerName = _("Blank"),
#line 8838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 8845
        .trainerName = _("Blank"),
#line 8846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 8853
        .trainerName = _("Blank"),
#line 8854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 8861
        .trainerName = _("Blank"),
#line 8862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 8869
        .trainerName = _("Blank"),
#line 8870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 8877
        .trainerName = _("Blank"),
#line 8878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 8885
        .trainerName = _("Blank"),
#line 8886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 8893
        .trainerName = _("Blank"),
#line 8894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 8901
        .trainerName = _("Blank"),
#line 8902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 8909
        .trainerName = _("Blank"),
#line 8910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 8917
        .trainerName = _("Blank"),
#line 8918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 8925
        .trainerName = _("Blank"),
#line 8926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 8933
        .trainerName = _("Blank"),
#line 8934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 8941
        .trainerName = _("Blank"),
#line 8942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 8949
        .trainerName = _("Blank"),
#line 8950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 8957
        .trainerName = _("Blank"),
#line 8958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 8965
        .trainerName = _("Blank"),
#line 8966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 8973
        .trainerName = _("Blank"),
#line 8974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 8981
        .trainerName = _("Blank"),
#line 8982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 8989
        .trainerName = _("Blank"),
#line 8990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 8997
        .trainerName = _("Blank"),
#line 8998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 9005
        .trainerName = _("Blank"),
#line 9006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 9013
        .trainerName = _("Blank"),
#line 9014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 9021
        .trainerName = _("Blank"),
#line 9022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 9029
        .trainerName = _("Blank"),
#line 9030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 9037
        .trainerName = _("Blank"),
#line 9038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 9045
        .trainerName = _("Blank"),
#line 9046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 9053
        .trainerName = _("Blank"),
#line 9054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 9061
        .trainerName = _("Blank"),
#line 9062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 9069
        .trainerName = _("Blank"),
#line 9070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 9077
        .trainerName = _("Blank"),
#line 9078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 9085
        .trainerName = _("Blank"),
#line 9086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 9093
        .trainerName = _("Blank"),
#line 9094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 9101
        .trainerName = _("Blank"),
#line 9102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 9109
        .trainerName = _("Blank"),
#line 9110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 9117
        .trainerName = _("Blank"),
#line 9118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 9125
        .trainerName = _("Blank"),
#line 9126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 9133
        .trainerName = _("Blank"),
#line 9134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 9141
        .trainerName = _("Blank"),
#line 9142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 9149
        .trainerName = _("Blank"),
#line 9150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 9157
        .trainerName = _("Blank"),
#line 9158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 9165
        .trainerName = _("Blank"),
#line 9166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 9173
        .trainerName = _("Blank"),
#line 9174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 9181
        .trainerName = _("Blank"),
#line 9182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 9189
        .trainerName = _("Blank"),
#line 9190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 9197
        .trainerName = _("Blank"),
#line 9198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 9205
        .trainerName = _("Blank"),
#line 9206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 9213
        .trainerName = _("Blank"),
#line 9214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 9221
        .trainerName = _("Blank"),
#line 9222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 9229
        .trainerName = _("Blank"),
#line 9230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 9237
        .trainerName = _("Blank"),
#line 9238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 9245
        .trainerName = _("Blank"),
#line 9246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 9253
        .trainerName = _("Blank"),
#line 9254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 9261
        .trainerName = _("Blank"),
#line 9262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 9269
        .trainerName = _("Blank"),
#line 9270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 9277
        .trainerName = _("Blank"),
#line 9278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 9285
        .trainerName = _("Blank"),
#line 9286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 9293
        .trainerName = _("Blank"),
#line 9294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 9301
        .trainerName = _("Blank"),
#line 9302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 9309
        .trainerName = _("Blank"),
#line 9310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 9317
        .trainerName = _("Blank"),
#line 9318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 9325
        .trainerName = _("Blank"),
#line 9326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 9333
        .trainerName = _("Blank"),
#line 9334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
