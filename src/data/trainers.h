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
#line 3281
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3283
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3286
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3288
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3284
            .ability = ABILITY_FRIEND_GUARD,
#line 3285
            .lvl = 19,
#line 3287
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3289
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3293
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3293
            .heldItem = ITEM_ORAN_BERRY,
#line 3296
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3298
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3294
            .ability = ABILITY_HARVEST,
#line 3295
            .lvl = 20,
#line 3297
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3299
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3304
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3307
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3309
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3305
            .ability = ABILITY_HUSTLE,
#line 3306
            .lvl = 22,
#line 3308
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3310
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3315
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3316
        .trainerName = _("0049EFE8"),
#line 3317
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3320
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3320
            .heldItem = ITEM_CHARCOAL,
#line 3322
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3324
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3321
            .ability = ABILITY_DROUGHT,
#line 3325
            .lvl = 22,
#line 3323
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3326
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3331
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .heldItem = ITEM_PASSHO_BERRY,
#line 3333
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3335
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3332
            .ability = ABILITY_FLAME_BODY,
#line 3336
            .lvl = 22,
#line 3334
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3337
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3341
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3344
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3342
            .ability = ABILITY_FLAME_BODY,
#line 3345
            .lvl = 21,
#line 3343
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3346
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3351
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3352
        .trainerName = _("023957DE"),
#line 3353
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3393
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3396
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3398
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3394
            .ability = ABILITY_INNER_FOCUS,
#line 3395
            .lvl = 22,
#line 3397
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3399
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3404
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3407
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3409
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3405
            .ability = ABILITY_IRON_FIST,
#line 3406
            .lvl = 21,
#line 3408
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3410
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3415
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3415
            .heldItem = ITEM_FOCUS_SASH,
#line 3418
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3420
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3416
            .ability = ABILITY_RECKLESS,
#line 3417
            .lvl = 21,
#line 3419
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3421
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3426
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3427
        .trainerName = _("007F06A5"),
#line 3428
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3431
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3431
            .heldItem = ITEM_SITRUS_BERRY,
#line 3435
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3432
            .ability = ABILITY_TORRENT,
#line 3433
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3434
            .teraType = TYPE_WATER,
            .moves = {
#line 3436
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3440
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3444
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3441
            .ability = ABILITY_OWN_TEMPO,
#line 3442
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3443
            .teraType = TYPE_WATER,
            .moves = {
#line 3445
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3449
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3449
            .heldItem = ITEM_METRONOME,
#line 3453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3450
            .ability = ABILITY_PROPELLER_TAIL,
#line 3451
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3452
            .teraType = TYPE_WATER,
            .moves = {
#line 3453
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3455
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3456
        .trainerName = _("01103D48"),
#line 3457
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3459
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3461
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3464
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3466
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3462
            .ability = ABILITY_PICKUP,
#line 3463
            .lvl = 23,
#line 3465
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3467
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3472
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3472
            .heldItem = ITEM_ORAN_BERRY,
#line 3475
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3477
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3473
            .ability = ABILITY_WIND_POWER,
#line 3474
            .lvl = 22,
#line 3476
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3478
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3483
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3483
            .heldItem = ITEM_MAGNET,
#line 3486
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3487
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3484
            .ability = ABILITY_INTIMIDATE,
#line 3485
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3488
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3493
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3494
        .trainerName = _("0272920D"),
#line 3495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3498
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3498
            .heldItem = ITEM_ROCKY_HELMET,
#line 3501
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3503
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3499
            .ability = ABILITY_ROUGH_SKIN,
#line 3500
            .lvl = 25,
#line 3502
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3504
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3508
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3511
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3513
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3509
            .ability = ABILITY_UNBURDEN,
#line 3510
            .lvl = 24,
#line 3512
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3514
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3518
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3518
            .heldItem = ITEM_MENTAL_HERB,
#line 3521
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3523
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3519
            .ability = ABILITY_PRANKSTER,
#line 3520
            .lvl = 25,
#line 3522
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3524
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3529
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3530
        .trainerName = _("022A53A0"),
#line 3531
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3533
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3535
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3535
            .heldItem = ITEM_FOCUS_BAND,
#line 3538
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3540
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3536
            .ability = ABILITY_SWARM,
#line 3537
            .lvl = 20,
#line 3539
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3541
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3545
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3545
            .heldItem = ITEM_FOCUS_BAND,
#line 3548
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3550
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3546
            .ability = ABILITY_SWARM,
#line 3547
            .lvl = 24,
#line 3549
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3551
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3555
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3555
            .heldItem = ITEM_SILVER_POWDER,
#line 3558
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3560
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3556
            .ability = ABILITY_SWARM,
#line 3557
            .lvl = 25,
#line 3559
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3561
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3567
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3568
        .trainerName = _("012ED80D"),
#line 3569
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
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
#line 3608
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3610
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3610
            .heldItem = ITEM_POWER_HERB,
#line 3613
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3615
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3611
            .ability = ABILITY_SHIELDS_DOWN,
#line 3612
            .lvl = 22,
#line 3614
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3616
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3621
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3621
            .heldItem = ITEM_MENTAL_HERB,
#line 3624
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3626
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3622
            .ability = ABILITY_FRIEND_GUARD,
#line 3623
            .lvl = 20,
#line 3625
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3627
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3632
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3632
            .heldItem = ITEM_SILK_SCARF,
#line 3635
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3637
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3633
            .ability = ABILITY_SCRAPPY,
#line 3634
            .lvl = 22,
#line 3636
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3638
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3643
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3644
        .trainerName = _("0092D526"),
#line 3645
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3647
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3649
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3652
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3654
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3650
            .ability = ABILITY_LEAF_GUARD,
#line 3651
            .lvl = 21,
#line 3653
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3658
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3661
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3662
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3659
            .ability = ABILITY_EFFECT_SPORE,
#line 3660
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3663
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3668
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3673
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3669
            .ability = ABILITY_CHLOROPHYLL,
#line 3670
            .lvl = 21,
#line 3672
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3674
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3678
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3679
        .trainerName = _("00C593A8"),
#line 3680
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3682
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3684
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3684
            .heldItem = ITEM_WACAN_BERRY,
#line 3687
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3689
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3685
            .ability = ABILITY_ICE_BODY,
#line 3686
            .lvl = 20,
#line 3688
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3690
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3694
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3694
            .heldItem = ITEM_METRONOME,
#line 3697
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3699
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3695
            .ability = ABILITY_ICE_BODY,
#line 3696
            .lvl = 24,
#line 3698
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3700
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3704
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3707
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3709
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3705
            .ability = ABILITY_OBLIVIOUS,
#line 3706
            .lvl = 23,
#line 3708
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3710
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3714
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3715
        .trainerName = _("01E7C79B"),
#line 3716
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3719
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3722
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3724
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3720
            .ability = ABILITY_SWARM,
#line 3721
            .lvl = 22,
#line 3723
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3725
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3730
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3730
            .heldItem = ITEM_TWISTED_SPOON,
#line 3733
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3735
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3731
            .ability = ABILITY_ANTICIPATION,
#line 3732
            .lvl = 23,
#line 3734
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3736
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3740
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3745
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3741
            .ability = ABILITY_PURE_POWER,
#line 3742
            .lvl = 24,
#line 3744
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3746
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3750
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3751
        .trainerName = _("01C7AF3F"),
#line 3752
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3754
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3756
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3756
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .heldItem = ITEM_ORAN_BERRY,
#line 3759
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3761
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3757
            .ability = ABILITY_SYMBIOSIS,
#line 3758
            .lvl = 23,
#line 3760
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3762
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3767
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3770
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3772
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3768
            .ability = ABILITY_TRACE,
#line 3769
            .lvl = 20,
#line 3771
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3773
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3777
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3777
            .heldItem = ITEM_SITRUS_BERRY,
#line 3780
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3782
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3778
            .ability = ABILITY_TRACE,
#line 3779
            .lvl = 21,
#line 3781
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3783
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3789
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3790
        .trainerName = _("02EEB783"),
#line 3791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3793
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3795
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3800
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3796
            .ability = ABILITY_MUMMY,
#line 3797
            .lvl = 21,
#line 3799
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3801
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3805
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3805
            .heldItem = ITEM_OCCA_BERRY,
#line 3808
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3810
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3806
            .ability = ABILITY_NO_GUARD,
#line 3807
            .lvl = 25,
#line 3809
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3811
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3815
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3818
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3820
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3816
            .ability = ABILITY_LEVITATE,
#line 3817
            .lvl = 25,
#line 3819
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3821
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3828
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3829
        .trainerName = _("026E91A6"),
#line 3830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3833
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3833
            .heldItem = ITEM_SITRUS_BERRY,
#line 3836
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3838
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3834
            .ability = ABILITY_ROCK_HEAD,
#line 3835
            .lvl = 20,
#line 3837
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3839
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3844
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3844
            .heldItem = ITEM_GANLON_BERRY,
#line 3847
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3849
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3845
            .ability = ABILITY_CLEAR_BODY,
#line 3846
            .lvl = 24,
#line 3848
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3850
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3854
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3857
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3859
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3855
            .ability = ABILITY_OVERCOAT,
#line 3856
            .lvl = 25,
#line 3858
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3860
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3865
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3866
        .trainerName = _("029E0EF0"),
#line 3867
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3870
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3873
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3875
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3871
            .ability = ABILITY_POISON_POINT,
#line 3872
            .lvl = 22,
#line 3874
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3876
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3881
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3884
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3886
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3882
            .ability = ABILITY_CLEAR_BODY,
#line 3883
            .lvl = 25,
#line 3885
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3887
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3891
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3891
            .heldItem = ITEM_SITRUS_BERRY,
#line 3894
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3896
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3892
            .ability = ABILITY_GLUTTONY,
#line 3893
            .lvl = 23,
#line 3895
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3897
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3902
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3903
        .trainerName = _("00E46F7D"),
#line 3904
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3906
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3908
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3912
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3914
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3909
            .ability = ABILITY_SHED_SKIN,
#line 3910
            .lvl = 23,
#line 3913
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3911
            .teraType = TYPE_ROCK,
            .moves = {
#line 3915
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3919
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3925
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3920
            .ability = ABILITY_WEAK_ARMOR,
#line 3921
            .lvl = 22,
#line 3924
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3922
            .teraType = TYPE_ROCK,
            .moves = {
#line 3926
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 3931
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3931
            .heldItem = ITEM_HARD_STONE,
#line 3935
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 3937
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3932
            .ability = ABILITY_STURDY,
#line 3933
            .lvl = 23,
#line 3936
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3934
            .teraType = TYPE_ROCK,
            .moves = {
#line 3938
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3943
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 3944
        .trainerName = _("Blank"),
#line 3945
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3948
            .species = SPECIES_SPEWPA,
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3960
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3961
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3963
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 3964
        .trainerName = _("Blank"),
#line 3965
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3968
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3969
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3971
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 3972
        .trainerName = _("Blank"),
#line 3973
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3976
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3977
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3979
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 3980
        .trainerName = _("Blank"),
#line 3981
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3984
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3985
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3987
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 3988
        .trainerName = _("Blank"),
#line 3989
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3992
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3993
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3995
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 3996
        .trainerName = _("Blank"),
#line 3997
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4000
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4001
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4003
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4004
        .trainerName = _("Blank"),
#line 4005
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4008
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4009
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4011
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4012
        .trainerName = _("Blank"),
#line 4013
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4016
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4017
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4019
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4020
        .trainerName = _("Blank"),
#line 4021
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4024
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4025
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4027
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4028
        .trainerName = _("Blank"),
#line 4029
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4032
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4033
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4035
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4036
        .trainerName = _("Blank"),
#line 4037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4040
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4041
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4043
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4044
        .trainerName = _("Blank"),
#line 4045
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4048
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4049
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4051
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4052
        .trainerName = _("Blank"),
#line 4053
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4056
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4057
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4059
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4060
        .trainerName = _("Blank"),
#line 4061
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4064
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4065
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4067
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4068
        .trainerName = _("Blank"),
#line 4069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4072
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4073
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4075
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4076
        .trainerName = _("Blank"),
#line 4077
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4080
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4081
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4083
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4084
        .trainerName = _("Blank"),
#line 4085
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4088
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4089
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4091
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4092
        .trainerName = _("Blank"),
#line 4093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4096
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4097
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4099
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4100
        .trainerName = _("Blank"),
#line 4101
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4104
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4105
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4107
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4108
        .trainerName = _("Blank"),
#line 4109
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4112
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4113
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4115
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4116
        .trainerName = _("Blank"),
#line 4117
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4120
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4121
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4123
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4124
        .trainerName = _("Blank"),
#line 4125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4128
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4129
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4131
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4132
        .trainerName = _("Blank"),
#line 4133
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4136
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4137
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4139
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4140
        .trainerName = _("Blank"),
#line 4141
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4144
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4145
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4147
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4148
        .trainerName = _("Blank"),
#line 4149
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4152
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4153
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4155
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4156
        .trainerName = _("Blank"),
#line 4157
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4160
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4161
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4163
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4164
        .trainerName = _("Blank"),
#line 4165
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4168
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4169
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4171
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4172
        .trainerName = _("Blank"),
#line 4173
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4176
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4177
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4179
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 4180
        .trainerName = _("Blank"),
#line 4181
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4184
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4185
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4187
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 4188
        .trainerName = _("Blank"),
#line 4189
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4192
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4193
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4195
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 4196
        .trainerName = _("Blank"),
#line 4197
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4200
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4201
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4203
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 4204
        .trainerName = _("Blank"),
#line 4205
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4208
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4209
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4211
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 4212
        .trainerName = _("Blank"),
#line 4213
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4216
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4217
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4219
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 4220
        .trainerName = _("Blank"),
#line 4221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4225
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4227
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 4228
        .trainerName = _("Blank"),
#line 4229
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4232
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4233
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4235
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 4236
        .trainerName = _("Blank"),
#line 4237
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4240
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4241
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4243
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 4244
        .trainerName = _("Blank"),
#line 4245
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4248
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4249
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4251
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 4252
        .trainerName = _("Blank"),
#line 4253
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4256
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4257
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4259
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 4260
        .trainerName = _("Blank"),
#line 4261
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4264
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4265
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4267
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 4268
        .trainerName = _("Blank"),
#line 4269
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4272
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4273
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4275
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 4276
        .trainerName = _("Blank"),
#line 4277
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4280
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4281
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4283
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 4284
        .trainerName = _("Blank"),
#line 4285
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4288
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4289
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4291
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 4292
        .trainerName = _("Blank"),
#line 4293
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4296
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4297
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4299
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 4300
        .trainerName = _("Blank"),
#line 4301
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4304
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4305
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4307
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 4308
        .trainerName = _("Blank"),
#line 4309
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4312
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4313
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4315
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 4316
        .trainerName = _("Blank"),
#line 4317
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4320
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4321
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4323
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 4324
        .trainerName = _("Blank"),
#line 4325
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4328
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4329
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4331
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 4332
        .trainerName = _("Blank"),
#line 4333
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4336
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4337
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4339
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 4340
        .trainerName = _("Blank"),
#line 4341
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4344
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4345
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4347
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 4348
        .trainerName = _("Blank"),
#line 4349
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4352
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4353
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4355
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 4356
        .trainerName = _("Blank"),
#line 4357
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4360
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4361
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4363
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 4364
        .trainerName = _("Blank"),
#line 4365
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4368
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4369
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4371
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 4372
        .trainerName = _("Blank"),
#line 4373
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4376
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4377
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4379
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 4380
        .trainerName = _("Blank"),
#line 4381
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4384
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4385
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4387
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 4388
        .trainerName = _("Blank"),
#line 4389
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4392
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4393
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4395
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 4396
        .trainerName = _("Blank"),
#line 4397
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4400
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4401
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4403
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 4404
        .trainerName = _("Blank"),
#line 4405
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4408
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4409
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4411
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 4412
        .trainerName = _("Blank"),
#line 4413
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4416
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4417
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4419
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 4420
        .trainerName = _("Blank"),
#line 4421
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4424
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4425
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4427
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 4428
        .trainerName = _("Blank"),
#line 4429
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4432
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4433
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4435
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 4436
        .trainerName = _("Blank"),
#line 4437
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4440
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4441
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4443
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 4444
        .trainerName = _("Blank"),
#line 4445
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4448
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4449
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4451
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 4452
        .trainerName = _("Blank"),
#line 4453
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4456
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4457
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4459
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 4460
        .trainerName = _("Blank"),
#line 4461
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4464
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4465
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4467
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 4468
        .trainerName = _("Blank"),
#line 4469
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4472
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4473
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4475
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 4476
        .trainerName = _("Blank"),
#line 4477
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4480
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4481
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4483
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 4484
        .trainerName = _("Blank"),
#line 4485
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4488
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4489
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4491
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 4492
        .trainerName = _("Blank"),
#line 4493
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4496
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4497
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4499
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 4500
        .trainerName = _("Blank"),
#line 4501
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4504
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4505
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4507
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 4508
        .trainerName = _("Blank"),
#line 4509
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4512
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4513
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4515
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 4516
        .trainerName = _("Blank"),
#line 4517
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4520
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4521
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4523
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 4524
        .trainerName = _("Blank"),
#line 4525
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4528
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4529
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4531
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 4532
        .trainerName = _("Blank"),
#line 4533
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4536
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4537
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4539
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 4540
        .trainerName = _("Blank"),
#line 4541
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4544
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4545
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4547
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 4548
        .trainerName = _("Blank"),
#line 4549
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4552
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4553
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4555
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 4556
        .trainerName = _("Blank"),
#line 4557
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4560
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4561
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4563
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 4564
        .trainerName = _("Blank"),
#line 4565
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4568
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4569
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4571
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 4572
        .trainerName = _("Blank"),
#line 4573
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4576
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4577
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4579
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 4580
        .trainerName = _("Blank"),
#line 4581
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4584
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4585
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4587
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 4588
        .trainerName = _("Blank"),
#line 4589
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4592
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4593
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4595
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 4596
        .trainerName = _("Blank"),
#line 4597
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4600
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4601
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4603
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 4604
        .trainerName = _("Blank"),
#line 4605
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4608
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4609
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4611
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 4612
        .trainerName = _("Blank"),
#line 4613
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4616
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4617
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4619
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 4620
        .trainerName = _("Blank"),
#line 4621
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4624
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4625
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4627
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 4628
        .trainerName = _("Blank"),
#line 4629
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4632
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4633
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4635
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 4636
        .trainerName = _("Blank"),
#line 4637
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4640
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4641
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4643
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 4644
        .trainerName = _("Blank"),
#line 4645
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4648
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4649
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4651
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 4652
        .trainerName = _("Blank"),
#line 4653
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4656
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4657
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4659
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 4660
        .trainerName = _("Blank"),
#line 4661
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4664
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4665
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4667
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 4668
        .trainerName = _("Blank"),
#line 4669
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4672
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4673
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4675
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 4676
        .trainerName = _("Blank"),
#line 4677
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4680
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4681
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4683
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 4684
        .trainerName = _("Blank"),
#line 4685
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4688
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4689
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4691
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 4692
        .trainerName = _("Blank"),
#line 4693
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4696
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4697
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4699
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 4700
        .trainerName = _("Blank"),
#line 4701
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4704
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4705
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4707
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 4708
        .trainerName = _("Blank"),
#line 4709
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4712
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4713
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4715
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 4716
        .trainerName = _("Blank"),
#line 4717
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4720
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4721
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4723
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 4724
        .trainerName = _("Blank"),
#line 4725
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4728
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4729
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4731
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 4732
        .trainerName = _("Blank"),
#line 4733
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4736
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4737
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4739
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 4740
        .trainerName = _("Blank"),
#line 4741
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4744
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4745
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4747
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 4748
        .trainerName = _("Blank"),
#line 4749
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4752
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4753
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4755
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 4756
        .trainerName = _("Blank"),
#line 4757
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4760
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4761
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4763
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 4764
        .trainerName = _("Blank"),
#line 4765
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4768
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4769
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4771
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 4772
        .trainerName = _("Blank"),
#line 4773
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4776
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4777
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4779
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 4780
        .trainerName = _("Blank"),
#line 4781
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4784
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4785
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4787
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 4788
        .trainerName = _("Blank"),
#line 4789
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4792
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4793
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4795
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 4796
        .trainerName = _("Blank"),
#line 4797
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4800
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4802
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4801
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4803
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 4804
        .trainerName = _("Blank"),
#line 4805
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4808
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4809
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4811
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 4812
        .trainerName = _("Blank"),
#line 4813
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4816
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4817
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4819
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 4820
        .trainerName = _("Blank"),
#line 4821
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4824
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4825
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4827
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 4828
        .trainerName = _("Blank"),
#line 4829
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4832
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4833
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4835
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 4836
        .trainerName = _("Blank"),
#line 4837
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4840
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4841
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4843
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 4844
        .trainerName = _("Blank"),
#line 4845
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4848
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4849
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4851
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 4852
        .trainerName = _("Blank"),
#line 4853
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4856
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4857
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4859
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 4860
        .trainerName = _("Blank"),
#line 4861
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4864
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4865
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4867
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 4868
        .trainerName = _("Blank"),
#line 4869
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4872
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4873
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4875
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 4876
        .trainerName = _("Blank"),
#line 4877
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4880
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4881
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4883
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 4884
        .trainerName = _("Blank"),
#line 4885
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4888
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4889
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4891
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 4892
        .trainerName = _("Blank"),
#line 4893
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4896
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4897
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4899
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 4900
        .trainerName = _("Blank"),
#line 4901
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4904
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4905
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4907
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 4908
        .trainerName = _("Blank"),
#line 4909
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4912
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4913
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4915
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 4916
        .trainerName = _("Blank"),
#line 4917
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4920
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4921
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4923
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 4924
        .trainerName = _("Blank"),
#line 4925
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4928
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4930
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4929
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4931
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 4932
        .trainerName = _("Blank"),
#line 4933
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4936
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4937
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4939
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 4940
        .trainerName = _("Blank"),
#line 4941
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4944
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4945
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4947
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 4948
        .trainerName = _("Blank"),
#line 4949
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4952
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4953
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4955
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 4956
        .trainerName = _("Blank"),
#line 4957
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4960
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4961
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4963
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 4964
        .trainerName = _("Blank"),
#line 4965
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4968
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4969
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4971
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 4972
        .trainerName = _("Blank"),
#line 4973
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4976
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4977
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4979
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 4980
        .trainerName = _("Blank"),
#line 4981
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4984
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4985
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4987
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 4988
        .trainerName = _("Blank"),
#line 4989
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4992
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4993
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4995
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 4996
        .trainerName = _("Blank"),
#line 4997
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5000
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5001
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5003
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 5004
        .trainerName = _("Blank"),
#line 5005
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5008
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5009
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5011
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 5012
        .trainerName = _("Blank"),
#line 5013
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5016
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5017
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5019
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 5020
        .trainerName = _("Blank"),
#line 5021
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5024
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5025
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5027
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 5028
        .trainerName = _("Blank"),
#line 5029
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5033
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5035
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 5036
        .trainerName = _("Blank"),
#line 5037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5040
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5041
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5043
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 5044
        .trainerName = _("Blank"),
#line 5045
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5048
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5049
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5051
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 5052
        .trainerName = _("Blank"),
#line 5053
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5056
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5057
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5059
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 5060
        .trainerName = _("Blank"),
#line 5061
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5064
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5065
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5067
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 5068
        .trainerName = _("Blank"),
#line 5069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5072
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5073
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5075
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 5076
        .trainerName = _("Blank"),
#line 5077
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5080
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5081
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5083
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 5084
        .trainerName = _("Blank"),
#line 5085
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5088
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5089
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5091
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 5092
        .trainerName = _("Blank"),
#line 5093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5096
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5097
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5099
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 5100
        .trainerName = _("Blank"),
#line 5101
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5104
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5105
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5107
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 5108
        .trainerName = _("Blank"),
#line 5109
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5112
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5113
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5115
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 5116
        .trainerName = _("Blank"),
#line 5117
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5120
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5121
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5123
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 5124
        .trainerName = _("Blank"),
#line 5125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5128
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5129
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5131
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 5132
        .trainerName = _("Blank"),
#line 5133
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5136
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5137
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5139
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 5140
        .trainerName = _("Blank"),
#line 5141
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5144
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5145
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5147
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 5148
        .trainerName = _("Blank"),
#line 5149
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5152
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5153
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5155
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 5156
        .trainerName = _("Blank"),
#line 5157
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5160
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5161
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5163
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 5164
        .trainerName = _("Blank"),
#line 5165
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5168
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5169
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5171
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 5172
        .trainerName = _("Blank"),
#line 5173
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5176
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5177
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5179
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 5180
        .trainerName = _("Blank"),
#line 5181
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5184
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5185
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5187
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 5188
        .trainerName = _("Blank"),
#line 5189
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5192
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5193
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5195
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 5196
        .trainerName = _("Blank"),
#line 5197
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5200
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5201
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5203
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 5204
        .trainerName = _("Blank"),
#line 5205
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5208
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5209
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5211
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 5212
        .trainerName = _("Blank"),
#line 5213
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5216
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5217
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5219
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 5220
        .trainerName = _("Blank"),
#line 5221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5224
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5225
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5227
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 5228
        .trainerName = _("Blank"),
#line 5229
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5232
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5233
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5235
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 5236
        .trainerName = _("Blank"),
#line 5237
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5240
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5241
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5243
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 5244
        .trainerName = _("Blank"),
#line 5245
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5248
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5249
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5251
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 5252
        .trainerName = _("Blank"),
#line 5253
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5256
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5257
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5259
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 5260
        .trainerName = _("Blank"),
#line 5261
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5264
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5265
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5267
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 5268
        .trainerName = _("Blank"),
#line 5269
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5272
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5273
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5275
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 5276
        .trainerName = _("Blank"),
#line 5277
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5280
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5281
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5283
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 5284
        .trainerName = _("Blank"),
#line 5285
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5288
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5289
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5291
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 5292
        .trainerName = _("Blank"),
#line 5293
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5296
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5297
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5299
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 5300
        .trainerName = _("Blank"),
#line 5301
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5304
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5305
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5307
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 5308
        .trainerName = _("Blank"),
#line 5309
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5312
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5313
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5315
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 5316
        .trainerName = _("Blank"),
#line 5317
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5320
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5321
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5323
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 5324
        .trainerName = _("Blank"),
#line 5325
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5328
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5329
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5331
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 5332
        .trainerName = _("Blank"),
#line 5333
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5336
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5337
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5339
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 5340
        .trainerName = _("Blank"),
#line 5341
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5344
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5345
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5347
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 5348
        .trainerName = _("Blank"),
#line 5349
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5352
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5353
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5355
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 5356
        .trainerName = _("Blank"),
#line 5357
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5360
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5361
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5363
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 5364
        .trainerName = _("Blank"),
#line 5365
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5368
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5369
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5371
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 5372
        .trainerName = _("Blank"),
#line 5373
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5376
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5377
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5379
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 5380
        .trainerName = _("Blank"),
#line 5381
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5384
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5385
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5387
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 5388
        .trainerName = _("Blank"),
#line 5389
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5392
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5393
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5395
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 5396
        .trainerName = _("Blank"),
#line 5397
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5400
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5401
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5403
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 5404
        .trainerName = _("Blank"),
#line 5405
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5408
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5409
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5411
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 5412
        .trainerName = _("Blank"),
#line 5413
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5416
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5417
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5419
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 5420
        .trainerName = _("Blank"),
#line 5421
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5424
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5425
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5427
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 5428
        .trainerName = _("Blank"),
#line 5429
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5432
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5433
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5435
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 5436
        .trainerName = _("Blank"),
#line 5437
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5440
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5441
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5443
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 5444
        .trainerName = _("Blank"),
#line 5445
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5448
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5449
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5451
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 5452
        .trainerName = _("Blank"),
#line 5453
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5456
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5457
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5459
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 5460
        .trainerName = _("Blank"),
#line 5461
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5464
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5465
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5467
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 5468
        .trainerName = _("Blank"),
#line 5469
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5472
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5473
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5475
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 5476
        .trainerName = _("Blank"),
#line 5477
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5480
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5481
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5483
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 5484
        .trainerName = _("Blank"),
#line 5485
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5488
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5489
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5491
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 5492
        .trainerName = _("Blank"),
#line 5493
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5496
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5497
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5499
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 5500
        .trainerName = _("Blank"),
#line 5501
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5504
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5505
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5507
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 5508
        .trainerName = _("Blank"),
#line 5509
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5512
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5513
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5515
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 5516
        .trainerName = _("Blank"),
#line 5517
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5520
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5521
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5523
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 5524
        .trainerName = _("Blank"),
#line 5525
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5528
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5529
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5531
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 5532
        .trainerName = _("Blank"),
#line 5533
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5536
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5537
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5539
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 5540
        .trainerName = _("Blank"),
#line 5541
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5544
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5545
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5547
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 5548
        .trainerName = _("Blank"),
#line 5549
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5552
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5553
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5555
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 5556
        .trainerName = _("Blank"),
#line 5557
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5560
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5561
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5563
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 5564
        .trainerName = _("Blank"),
#line 5565
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5568
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5569
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5571
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 5572
        .trainerName = _("Blank"),
#line 5573
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5576
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5577
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5579
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 5580
        .trainerName = _("Blank"),
#line 5581
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5584
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5585
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5587
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 5588
        .trainerName = _("Blank"),
#line 5589
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5592
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5593
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5595
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 5596
        .trainerName = _("Blank"),
#line 5597
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5600
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5601
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5603
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 5604
        .trainerName = _("Blank"),
#line 5605
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5608
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5609
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5611
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 5612
        .trainerName = _("Blank"),
#line 5613
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5616
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5617
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5619
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 5620
        .trainerName = _("Blank"),
#line 5621
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5624
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5625
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5627
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 5628
        .trainerName = _("Blank"),
#line 5629
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5632
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5633
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5635
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 5636
        .trainerName = _("Blank"),
#line 5637
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5640
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5641
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5643
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 5644
        .trainerName = _("Blank"),
#line 5645
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5648
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5649
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5651
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 5652
        .trainerName = _("Blank"),
#line 5653
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5656
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5657
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5659
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 5660
        .trainerName = _("Blank"),
#line 5661
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5664
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5665
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5667
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 5668
        .trainerName = _("Blank"),
#line 5669
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5672
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5673
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5675
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 5676
        .trainerName = _("Blank"),
#line 5677
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5680
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5681
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5683
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 5684
        .trainerName = _("Blank"),
#line 5685
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5688
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5689
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5691
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 5692
        .trainerName = _("Blank"),
#line 5693
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5696
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5697
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5699
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 5700
        .trainerName = _("Blank"),
#line 5701
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5704
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5705
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5707
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 5708
        .trainerName = _("Blank"),
#line 5709
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5712
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5713
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5715
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 5716
        .trainerName = _("Blank"),
#line 5717
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5720
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5721
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5723
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 5724
        .trainerName = _("Blank"),
#line 5725
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5728
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5729
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5731
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 5732
        .trainerName = _("Blank"),
#line 5733
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5736
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5737
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5739
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 5740
        .trainerName = _("Blank"),
#line 5741
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5744
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5745
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5747
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 5748
        .trainerName = _("Blank"),
#line 5749
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5752
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5753
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5755
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 5756
        .trainerName = _("Blank"),
#line 5757
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5760
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5761
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5763
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 5764
        .trainerName = _("Blank"),
#line 5765
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5768
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5769
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5771
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 5772
        .trainerName = _("Blank"),
#line 5773
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5776
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5777
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5779
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 5780
        .trainerName = _("Blank"),
#line 5781
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5784
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5785
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5787
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 5788
        .trainerName = _("Blank"),
#line 5789
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5792
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5793
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5795
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 5796
        .trainerName = _("Blank"),
#line 5797
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5800
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5802
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5801
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5803
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 5804
        .trainerName = _("Blank"),
#line 5805
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5808
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5809
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5811
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 5812
        .trainerName = _("Blank"),
#line 5813
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5816
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5817
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5819
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 5820
        .trainerName = _("Blank"),
#line 5821
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5824
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5825
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5827
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 5828
        .trainerName = _("Blank"),
#line 5829
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5832
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5833
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5835
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 5836
        .trainerName = _("Blank"),
#line 5837
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5840
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5841
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5843
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 5844
        .trainerName = _("Blank"),
#line 5845
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5848
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5849
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5851
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 5852
        .trainerName = _("Blank"),
#line 5853
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5856
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5857
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5859
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 5860
        .trainerName = _("Blank"),
#line 5861
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5864
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5865
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5867
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 5868
        .trainerName = _("Blank"),
#line 5869
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5872
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5873
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5875
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 5876
        .trainerName = _("Blank"),
#line 5877
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5880
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5881
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5883
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 5884
        .trainerName = _("Blank"),
#line 5885
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5888
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5889
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5891
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 5892
        .trainerName = _("Blank"),
#line 5893
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5896
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5897
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5899
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 5900
        .trainerName = _("Blank"),
#line 5901
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5904
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5905
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5907
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 5908
        .trainerName = _("Blank"),
#line 5909
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5912
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5913
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5915
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 5916
        .trainerName = _("Blank"),
#line 5917
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5920
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5921
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5923
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 5924
        .trainerName = _("Blank"),
#line 5925
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5928
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5930
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5929
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5931
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 5932
        .trainerName = _("Blank"),
#line 5933
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5936
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5937
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5939
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 5940
        .trainerName = _("Blank"),
#line 5941
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5944
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5945
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5947
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 5948
        .trainerName = _("Blank"),
#line 5949
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5952
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5953
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5955
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 5956
        .trainerName = _("Blank"),
#line 5957
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5960
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5961
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5963
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 5964
        .trainerName = _("Blank"),
#line 5965
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5968
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5969
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5971
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 5972
        .trainerName = _("Blank"),
#line 5973
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5976
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5977
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5979
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 5980
        .trainerName = _("Blank"),
#line 5981
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5984
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5985
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5987
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 5988
        .trainerName = _("Blank"),
#line 5989
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5992
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5993
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5995
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 5996
        .trainerName = _("Blank"),
#line 5997
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6000
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6001
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6003
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 6004
        .trainerName = _("Blank"),
#line 6005
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6008
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6009
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6011
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 6012
        .trainerName = _("Blank"),
#line 6013
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6016
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6017
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6019
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 6020
        .trainerName = _("Blank"),
#line 6021
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6024
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6025
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6027
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 6028
        .trainerName = _("Blank"),
#line 6029
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6032
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6033
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6035
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 6036
        .trainerName = _("Blank"),
#line 6037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6040
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6041
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6043
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 6044
        .trainerName = _("Blank"),
#line 6045
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6048
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6049
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6051
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 6052
        .trainerName = _("Blank"),
#line 6053
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6056
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6057
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6059
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 6060
        .trainerName = _("Blank"),
#line 6061
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6064
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6065
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6067
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 6068
        .trainerName = _("Blank"),
#line 6069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6072
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6073
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6075
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 6076
        .trainerName = _("Blank"),
#line 6077
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6080
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6081
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6083
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 6084
        .trainerName = _("Blank"),
#line 6085
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6088
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6089
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6091
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 6092
        .trainerName = _("Blank"),
#line 6093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6096
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6097
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6099
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 6100
        .trainerName = _("Blank"),
#line 6101
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6104
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6105
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6107
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 6108
        .trainerName = _("Blank"),
#line 6109
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6112
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6113
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6115
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 6116
        .trainerName = _("Blank"),
#line 6117
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6120
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6121
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6123
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 6124
        .trainerName = _("Blank"),
#line 6125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6128
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6129
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6131
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 6132
        .trainerName = _("Blank"),
#line 6133
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6136
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6137
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6139
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 6140
        .trainerName = _("Blank"),
#line 6141
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6144
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6145
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6147
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 6148
        .trainerName = _("Blank"),
#line 6149
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6152
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6153
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6155
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 6156
        .trainerName = _("Blank"),
#line 6157
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6160
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6161
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6163
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 6164
        .trainerName = _("Blank"),
#line 6165
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6168
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6169
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6171
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 6172
        .trainerName = _("Blank"),
#line 6173
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6176
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6177
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6179
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 6180
        .trainerName = _("Blank"),
#line 6181
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6184
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6185
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6187
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 6188
        .trainerName = _("Blank"),
#line 6189
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6192
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6193
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6195
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 6196
        .trainerName = _("Blank"),
#line 6197
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6200
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6201
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6203
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 6204
        .trainerName = _("Blank"),
#line 6205
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6208
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6209
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6211
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 6212
        .trainerName = _("Blank"),
#line 6213
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6216
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6217
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6219
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 6220
        .trainerName = _("Blank"),
#line 6221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6224
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6225
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6227
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 6228
        .trainerName = _("Blank"),
#line 6229
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6232
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6233
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6235
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 6236
        .trainerName = _("Blank"),
#line 6237
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6240
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6241
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6243
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 6244
        .trainerName = _("Blank"),
#line 6245
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6248
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6249
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6251
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 6252
        .trainerName = _("Blank"),
#line 6253
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6256
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6257
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6259
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 6260
        .trainerName = _("Blank"),
#line 6261
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6264
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6265
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6267
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 6268
        .trainerName = _("Blank"),
#line 6269
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6272
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6273
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6275
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 6276
        .trainerName = _("Blank"),
#line 6277
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6280
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6281
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6283
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 6284
        .trainerName = _("Blank"),
#line 6285
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6288
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6289
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6291
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 6292
        .trainerName = _("Blank"),
#line 6293
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6296
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6297
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6299
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 6300
        .trainerName = _("Blank"),
#line 6301
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6304
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6305
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6307
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 6308
        .trainerName = _("Blank"),
#line 6309
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6312
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6313
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6315
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 6316
        .trainerName = _("Blank"),
#line 6317
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6320
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6321
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6323
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 6324
        .trainerName = _("Blank"),
#line 6325
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6328
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6329
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6331
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 6332
        .trainerName = _("Blank"),
#line 6333
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6336
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6337
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6339
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 6340
        .trainerName = _("Blank"),
#line 6341
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6344
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6345
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6347
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 6348
        .trainerName = _("Blank"),
#line 6349
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6352
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6353
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6355
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 6356
        .trainerName = _("Blank"),
#line 6357
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6360
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6361
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6363
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 6364
        .trainerName = _("Blank"),
#line 6365
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6368
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6369
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6371
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 6372
        .trainerName = _("Blank"),
#line 6373
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6376
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6377
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6379
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 6380
        .trainerName = _("Blank"),
#line 6381
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6384
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6385
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6387
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 6388
        .trainerName = _("Blank"),
#line 6389
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6392
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6393
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6395
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 6396
        .trainerName = _("Blank"),
#line 6397
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6400
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6401
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6403
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 6404
        .trainerName = _("Blank"),
#line 6405
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6408
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6409
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6411
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 6412
        .trainerName = _("Blank"),
#line 6413
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6416
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6417
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6419
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 6420
        .trainerName = _("Blank"),
#line 6421
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6424
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6425
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6427
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 6428
        .trainerName = _("Blank"),
#line 6429
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6432
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6433
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6435
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 6436
        .trainerName = _("Blank"),
#line 6437
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6440
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6441
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6443
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 6444
        .trainerName = _("Blank"),
#line 6445
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6448
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6449
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6451
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 6452
        .trainerName = _("Blank"),
#line 6453
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6456
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6457
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6459
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 6460
        .trainerName = _("Blank"),
#line 6461
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6464
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6465
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6467
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 6468
        .trainerName = _("Blank"),
#line 6469
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6472
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6473
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6475
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 6476
        .trainerName = _("Blank"),
#line 6477
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6480
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6481
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6483
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 6484
        .trainerName = _("Blank"),
#line 6485
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6488
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6489
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6491
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 6492
        .trainerName = _("Blank"),
#line 6493
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6496
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6497
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6499
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 6500
        .trainerName = _("Blank"),
#line 6501
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6504
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6505
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6507
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 6508
        .trainerName = _("Blank"),
#line 6509
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6512
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6513
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6515
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 6516
        .trainerName = _("Blank"),
#line 6517
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6520
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6521
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6523
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 6524
        .trainerName = _("Blank"),
#line 6525
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6528
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6529
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6531
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 6532
        .trainerName = _("Blank"),
#line 6533
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6536
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6537
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6539
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 6540
        .trainerName = _("Blank"),
#line 6541
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6544
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6545
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6547
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 6548
        .trainerName = _("Blank"),
#line 6549
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6552
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6553
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6555
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 6556
        .trainerName = _("Blank"),
#line 6557
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6560
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6561
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6563
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 6564
        .trainerName = _("Blank"),
#line 6565
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6568
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6569
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6571
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 6572
        .trainerName = _("Blank"),
#line 6573
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6576
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6577
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6579
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 6580
        .trainerName = _("Blank"),
#line 6581
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6584
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6585
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6587
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 6588
        .trainerName = _("Blank"),
#line 6589
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6592
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6593
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6595
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 6596
        .trainerName = _("Blank"),
#line 6597
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6600
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6601
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6603
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 6604
        .trainerName = _("Blank"),
#line 6605
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6608
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6609
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6611
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 6612
        .trainerName = _("Blank"),
#line 6613
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6616
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6617
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6619
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 6620
        .trainerName = _("Blank"),
#line 6621
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6624
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6625
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6627
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 6628
        .trainerName = _("Blank"),
#line 6629
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6632
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6633
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6635
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 6636
        .trainerName = _("Blank"),
#line 6637
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6640
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6641
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6643
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 6644
        .trainerName = _("Blank"),
#line 6645
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6648
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6649
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6651
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 6652
        .trainerName = _("Blank"),
#line 6653
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6656
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6657
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6659
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 6660
        .trainerName = _("Blank"),
#line 6661
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6664
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6665
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6667
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 6668
        .trainerName = _("Blank"),
#line 6669
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6672
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6673
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6675
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 6676
        .trainerName = _("Blank"),
#line 6677
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6680
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6681
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6683
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 6684
        .trainerName = _("Blank"),
#line 6685
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6688
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6689
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6691
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 6692
        .trainerName = _("Blank"),
#line 6693
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6696
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6697
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6699
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 6700
        .trainerName = _("Blank"),
#line 6701
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6704
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6705
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6707
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 6708
        .trainerName = _("Blank"),
#line 6709
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6712
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6713
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6715
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 6716
        .trainerName = _("Blank"),
#line 6717
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6720
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6721
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6723
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 6724
        .trainerName = _("Blank"),
#line 6725
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6728
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6729
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6731
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 6732
        .trainerName = _("Blank"),
#line 6733
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6736
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6737
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6739
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 6740
        .trainerName = _("Blank"),
#line 6741
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6744
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6745
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6747
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 6748
        .trainerName = _("Blank"),
#line 6749
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6752
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6753
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6755
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 6756
        .trainerName = _("Blank"),
#line 6757
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6760
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6761
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6763
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 6764
        .trainerName = _("Blank"),
#line 6765
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6768
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6769
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6771
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 6772
        .trainerName = _("Blank"),
#line 6773
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6776
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6777
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6779
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 6780
        .trainerName = _("Blank"),
#line 6781
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6784
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6785
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6787
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 6788
        .trainerName = _("Blank"),
#line 6789
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6792
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6793
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6795
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 6796
        .trainerName = _("Blank"),
#line 6797
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6800
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6802
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6801
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6803
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 6804
        .trainerName = _("Blank"),
#line 6805
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6808
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6809
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6811
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 6812
        .trainerName = _("Blank"),
#line 6813
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6816
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6817
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6819
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 6820
        .trainerName = _("Blank"),
#line 6821
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6824
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6825
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6827
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 6828
        .trainerName = _("Blank"),
#line 6829
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6832
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6833
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6835
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 6836
        .trainerName = _("Blank"),
#line 6837
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6840
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6841
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6843
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 6844
        .trainerName = _("Blank"),
#line 6845
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6848
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6849
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6851
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 6852
        .trainerName = _("Blank"),
#line 6853
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6856
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6857
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6859
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 6860
        .trainerName = _("Blank"),
#line 6861
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6864
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6865
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6867
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 6868
        .trainerName = _("Blank"),
#line 6869
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6872
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6873
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6875
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 6876
        .trainerName = _("Blank"),
#line 6877
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6880
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6881
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6883
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 6884
        .trainerName = _("Blank"),
#line 6885
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6888
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6889
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6891
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 6892
        .trainerName = _("Blank"),
#line 6893
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6896
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6897
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6899
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 6900
        .trainerName = _("Blank"),
#line 6901
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6904
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6905
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6907
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 6908
        .trainerName = _("Blank"),
#line 6909
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6912
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6913
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6915
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 6916
        .trainerName = _("Blank"),
#line 6917
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6920
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6921
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6923
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 6924
        .trainerName = _("Blank"),
#line 6925
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6928
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6930
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6929
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6931
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 6932
        .trainerName = _("Blank"),
#line 6933
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6936
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6937
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6939
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 6940
        .trainerName = _("Blank"),
#line 6941
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6944
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6945
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6947
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 6948
        .trainerName = _("Blank"),
#line 6949
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6952
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6953
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6955
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 6956
        .trainerName = _("Blank"),
#line 6957
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6960
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6961
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6963
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 6964
        .trainerName = _("Blank"),
#line 6965
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6968
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6969
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6971
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 6972
        .trainerName = _("Blank"),
#line 6973
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6976
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6977
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6979
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 6980
        .trainerName = _("Blank"),
#line 6981
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6984
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6985
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6987
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 6988
        .trainerName = _("Blank"),
#line 6989
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6992
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6993
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6995
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 6996
        .trainerName = _("Blank"),
#line 6997
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7000
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7001
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7003
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 7004
        .trainerName = _("Blank"),
#line 7005
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7008
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7009
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7011
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 7012
        .trainerName = _("Blank"),
#line 7013
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7016
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7017
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7019
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 7020
        .trainerName = _("Blank"),
#line 7021
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7024
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7025
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7027
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 7028
        .trainerName = _("Blank"),
#line 7029
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7032
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7033
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7035
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 7036
        .trainerName = _("Blank"),
#line 7037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7040
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7041
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7043
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 7044
        .trainerName = _("Blank"),
#line 7045
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7048
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7049
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7051
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 7052
        .trainerName = _("Blank"),
#line 7053
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7056
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7057
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7059
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 7060
        .trainerName = _("Blank"),
#line 7061
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7064
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7065
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7067
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 7068
        .trainerName = _("Blank"),
#line 7069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7072
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7073
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7075
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 7076
        .trainerName = _("Blank"),
#line 7077
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7080
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7081
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7083
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 7084
        .trainerName = _("Blank"),
#line 7085
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7088
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7089
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7091
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 7092
        .trainerName = _("Blank"),
#line 7093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7096
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7097
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7099
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 7100
        .trainerName = _("Blank"),
#line 7101
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7104
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7105
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7107
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 7108
        .trainerName = _("Blank"),
#line 7109
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7112
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7113
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7115
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 7116
        .trainerName = _("Blank"),
#line 7117
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7120
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7121
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7123
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 7124
        .trainerName = _("Blank"),
#line 7125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7128
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7129
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7131
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 7132
        .trainerName = _("Blank"),
#line 7133
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7136
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7137
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7139
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 7140
        .trainerName = _("Blank"),
#line 7141
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7144
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7145
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7147
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 7148
        .trainerName = _("Blank"),
#line 7149
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7152
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7153
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7155
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 7156
        .trainerName = _("Blank"),
#line 7157
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7160
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7161
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7163
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 7164
        .trainerName = _("Blank"),
#line 7165
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7168
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7169
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7171
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 7172
        .trainerName = _("Blank"),
#line 7173
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7176
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7177
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7179
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 7180
        .trainerName = _("Blank"),
#line 7181
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7184
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7185
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7187
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 7188
        .trainerName = _("Blank"),
#line 7189
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7192
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7193
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7195
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 7196
        .trainerName = _("Blank"),
#line 7197
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7200
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7201
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7203
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 7204
        .trainerName = _("Blank"),
#line 7205
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7208
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7209
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7211
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 7212
        .trainerName = _("Blank"),
#line 7213
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7216
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7217
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7219
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 7220
        .trainerName = _("Blank"),
#line 7221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7224
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7225
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7227
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 7228
        .trainerName = _("Blank"),
#line 7229
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7232
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7233
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7235
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 7236
        .trainerName = _("Blank"),
#line 7237
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7240
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7241
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7243
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 7244
        .trainerName = _("Blank"),
#line 7245
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7248
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7249
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7251
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 7252
        .trainerName = _("Blank"),
#line 7253
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7256
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7257
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7259
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 7260
        .trainerName = _("Blank"),
#line 7261
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7264
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7265
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7267
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 7268
        .trainerName = _("Blank"),
#line 7269
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7272
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7273
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7275
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 7276
        .trainerName = _("Blank"),
#line 7277
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7280
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7281
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7283
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 7284
        .trainerName = _("Blank"),
#line 7285
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7288
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7289
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7291
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 7292
        .trainerName = _("Blank"),
#line 7293
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7296
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7297
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7299
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 7300
        .trainerName = _("Blank"),
#line 7301
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7304
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7305
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7307
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 7308
        .trainerName = _("Blank"),
#line 7309
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7312
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7313
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7315
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 7316
        .trainerName = _("Blank"),
#line 7317
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7320
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7321
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7323
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 7324
        .trainerName = _("Blank"),
#line 7325
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7328
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7329
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7331
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 7332
        .trainerName = _("Blank"),
#line 7333
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7336
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7337
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7339
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 7340
        .trainerName = _("Blank"),
#line 7341
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7344
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7345
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7347
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 7348
        .trainerName = _("Blank"),
#line 7349
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7352
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7353
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7355
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 7356
        .trainerName = _("Blank"),
#line 7357
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7360
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7361
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7363
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 7364
        .trainerName = _("Blank"),
#line 7365
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7368
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7369
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7371
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 7372
        .trainerName = _("Blank"),
#line 7373
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7376
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7377
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7379
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 7380
        .trainerName = _("Blank"),
#line 7381
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7384
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7385
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7387
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 7388
        .trainerName = _("Blank"),
#line 7389
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7392
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7393
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7395
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 7396
        .trainerName = _("Blank"),
#line 7397
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7400
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7401
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7403
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 7404
        .trainerName = _("Blank"),
#line 7405
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7408
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7409
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7411
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 7412
        .trainerName = _("Blank"),
#line 7413
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7416
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7417
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7419
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 7420
        .trainerName = _("Blank"),
#line 7421
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7424
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7425
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7427
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 7428
        .trainerName = _("Blank"),
#line 7429
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7432
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7433
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7435
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 7436
        .trainerName = _("Blank"),
#line 7437
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7440
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7441
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7443
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 7444
        .trainerName = _("Blank"),
#line 7445
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7448
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7449
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7451
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 7452
        .trainerName = _("Blank"),
#line 7453
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7456
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7457
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7459
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 7460
        .trainerName = _("Blank"),
#line 7461
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7464
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7465
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7467
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 7468
        .trainerName = _("Blank"),
#line 7469
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7472
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7473
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7475
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 7476
        .trainerName = _("Blank"),
#line 7477
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7480
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7481
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7483
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 7484
        .trainerName = _("Blank"),
#line 7485
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7488
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7489
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7491
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 7492
        .trainerName = _("Blank"),
#line 7493
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7496
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7497
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7499
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 7500
        .trainerName = _("Blank"),
#line 7501
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7504
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7505
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7507
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 7508
        .trainerName = _("Blank"),
#line 7509
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7512
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7513
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7515
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 7516
        .trainerName = _("Blank"),
#line 7517
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7520
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7521
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7523
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 7524
        .trainerName = _("Blank"),
#line 7525
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7528
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7529
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7531
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 7532
        .trainerName = _("Blank"),
#line 7533
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7536
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7537
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7539
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 7540
        .trainerName = _("Blank"),
#line 7541
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7544
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7545
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7547
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 7548
        .trainerName = _("Blank"),
#line 7549
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7552
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7553
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7555
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 7556
        .trainerName = _("Blank"),
#line 7557
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7560
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7561
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7563
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 7564
        .trainerName = _("Blank"),
#line 7565
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7568
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7569
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7571
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 7572
        .trainerName = _("Blank"),
#line 7573
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7576
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7577
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7579
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 7580
        .trainerName = _("Blank"),
#line 7581
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7584
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7585
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7587
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 7588
        .trainerName = _("Blank"),
#line 7589
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7592
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7593
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7595
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 7596
        .trainerName = _("Blank"),
#line 7597
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7600
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7601
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7603
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 7604
        .trainerName = _("Blank"),
#line 7605
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7608
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7609
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7611
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 7612
        .trainerName = _("Blank"),
#line 7613
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7616
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7617
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7619
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 7620
        .trainerName = _("Blank"),
#line 7621
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7624
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7625
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7627
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 7628
        .trainerName = _("Blank"),
#line 7629
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7632
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7633
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7635
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 7636
        .trainerName = _("Blank"),
#line 7637
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7640
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7641
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7643
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 7644
        .trainerName = _("Blank"),
#line 7645
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7648
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7649
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7651
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 7652
        .trainerName = _("Blank"),
#line 7653
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7656
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7657
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7659
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 7660
        .trainerName = _("Blank"),
#line 7661
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7664
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7665
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7667
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 7668
        .trainerName = _("Blank"),
#line 7669
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7672
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7673
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7675
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 7676
        .trainerName = _("Blank"),
#line 7677
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7680
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7681
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7683
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 7684
        .trainerName = _("Blank"),
#line 7685
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7688
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7689
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7691
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 7692
        .trainerName = _("Blank"),
#line 7693
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7696
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7697
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7699
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 7700
        .trainerName = _("Blank"),
#line 7701
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7704
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7705
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7707
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 7708
        .trainerName = _("Blank"),
#line 7709
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7712
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7713
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7715
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 7716
        .trainerName = _("Blank"),
#line 7717
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7720
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7721
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7723
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 7724
        .trainerName = _("Blank"),
#line 7725
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7728
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7729
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7731
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 7732
        .trainerName = _("Blank"),
#line 7733
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7736
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7737
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7739
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 7740
        .trainerName = _("Blank"),
#line 7741
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7744
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7745
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7747
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 7748
        .trainerName = _("Blank"),
#line 7749
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7752
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7753
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7755
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 7756
        .trainerName = _("Blank"),
#line 7757
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7760
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7761
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7763
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 7764
        .trainerName = _("Blank"),
#line 7765
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7768
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7769
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7771
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 7772
        .trainerName = _("Blank"),
#line 7773
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7776
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7777
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7779
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 7780
        .trainerName = _("Blank"),
#line 7781
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7784
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7785
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7787
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 7788
        .trainerName = _("Blank"),
#line 7789
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7792
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7793
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7795
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 7796
        .trainerName = _("Blank"),
#line 7797
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7800
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7802
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7801
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7803
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 7804
        .trainerName = _("Blank"),
#line 7805
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7808
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7809
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7811
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 7812
        .trainerName = _("Blank"),
#line 7813
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7816
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7817
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7819
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 7820
        .trainerName = _("Blank"),
#line 7821
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7824
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7825
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7827
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 7828
        .trainerName = _("Blank"),
#line 7829
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7832
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7833
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7835
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 7836
        .trainerName = _("Blank"),
#line 7837
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7840
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7841
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7843
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 7844
        .trainerName = _("Blank"),
#line 7845
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7848
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7849
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7851
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 7852
        .trainerName = _("Blank"),
#line 7853
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7856
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7857
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7859
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 7860
        .trainerName = _("Blank"),
#line 7861
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7864
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7865
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7867
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 7868
        .trainerName = _("Blank"),
#line 7869
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7872
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7873
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7875
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 7876
        .trainerName = _("Blank"),
#line 7877
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7880
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7881
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7883
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 7884
        .trainerName = _("Blank"),
#line 7885
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7888
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7889
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7891
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 7892
        .trainerName = _("Blank"),
#line 7893
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7896
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7897
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7899
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 7900
        .trainerName = _("Blank"),
#line 7901
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7904
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7905
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7907
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 7908
        .trainerName = _("Blank"),
#line 7909
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7912
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7913
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7915
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 7916
        .trainerName = _("Blank"),
#line 7917
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7920
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7921
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7923
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 7924
        .trainerName = _("Blank"),
#line 7925
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7928
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7930
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7929
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7931
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 7932
        .trainerName = _("Blank"),
#line 7933
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7936
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7937
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7939
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 7940
        .trainerName = _("Blank"),
#line 7941
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7944
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7945
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7947
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 7948
        .trainerName = _("Blank"),
#line 7949
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7952
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7953
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7955
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 7956
        .trainerName = _("Blank"),
#line 7957
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7960
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7961
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7963
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 7964
        .trainerName = _("Blank"),
#line 7965
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7968
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7969
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7971
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 7972
        .trainerName = _("Blank"),
#line 7973
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7976
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7977
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7979
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 7980
        .trainerName = _("Blank"),
#line 7981
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7984
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7985
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7987
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 7988
        .trainerName = _("Blank"),
#line 7989
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7992
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7993
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7995
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 7996
        .trainerName = _("Blank"),
#line 7997
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8000
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8001
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8003
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 8004
        .trainerName = _("Blank"),
#line 8005
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8008
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8009
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8011
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 8012
        .trainerName = _("Blank"),
#line 8013
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8016
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8017
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8019
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 8020
        .trainerName = _("Blank"),
#line 8021
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8024
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8025
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8027
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 8028
        .trainerName = _("Blank"),
#line 8029
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8032
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8033
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8035
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 8036
        .trainerName = _("Blank"),
#line 8037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8040
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8041
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8043
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 8044
        .trainerName = _("Blank"),
#line 8045
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8048
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8049
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8051
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 8052
        .trainerName = _("Blank"),
#line 8053
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8056
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8057
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8059
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 8060
        .trainerName = _("Blank"),
#line 8061
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8064
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8065
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8067
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 8068
        .trainerName = _("Blank"),
#line 8069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8072
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8073
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8075
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 8076
        .trainerName = _("Blank"),
#line 8077
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8080
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8081
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8083
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 8084
        .trainerName = _("Blank"),
#line 8085
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8088
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8089
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8091
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 8092
        .trainerName = _("Blank"),
#line 8093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8096
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8097
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8099
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 8100
        .trainerName = _("Blank"),
#line 8101
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8104
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8105
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8107
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 8108
        .trainerName = _("Blank"),
#line 8109
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8112
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8113
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8115
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 8116
        .trainerName = _("Blank"),
#line 8117
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8120
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8121
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8123
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 8124
        .trainerName = _("Blank"),
#line 8125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8128
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8129
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8131
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 8132
        .trainerName = _("Blank"),
#line 8133
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8136
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8137
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8139
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 8140
        .trainerName = _("Blank"),
#line 8141
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8144
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8145
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8147
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 8148
        .trainerName = _("Blank"),
#line 8149
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8152
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8153
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8155
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 8156
        .trainerName = _("Blank"),
#line 8157
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8160
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8161
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8163
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 8164
        .trainerName = _("Blank"),
#line 8165
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8168
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8169
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8171
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 8172
        .trainerName = _("Blank"),
#line 8173
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8176
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8177
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8179
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 8180
        .trainerName = _("Blank"),
#line 8181
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8184
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8185
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8187
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 8188
        .trainerName = _("Blank"),
#line 8189
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8192
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8193
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8195
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 8196
        .trainerName = _("Blank"),
#line 8197
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8200
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8201
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8203
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 8204
        .trainerName = _("Blank"),
#line 8205
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8208
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8209
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8211
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 8212
        .trainerName = _("Blank"),
#line 8213
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8216
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8217
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8219
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 8220
        .trainerName = _("Blank"),
#line 8221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8224
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8225
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8227
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 8228
        .trainerName = _("Blank"),
#line 8229
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8232
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8233
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8235
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 8236
        .trainerName = _("Blank"),
#line 8237
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8240
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8241
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8243
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 8244
        .trainerName = _("Blank"),
#line 8245
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8248
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8249
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8251
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 8252
        .trainerName = _("Blank"),
#line 8253
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8256
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8257
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8259
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 8260
        .trainerName = _("Blank"),
#line 8261
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8264
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8265
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8267
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 8268
        .trainerName = _("Blank"),
#line 8269
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8272
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8273
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8275
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 8276
        .trainerName = _("Blank"),
#line 8277
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8280
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8281
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8283
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 8284
        .trainerName = _("Blank"),
#line 8285
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8288
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8289
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8291
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 8292
        .trainerName = _("Blank"),
#line 8293
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8296
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8297
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8299
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 8300
        .trainerName = _("Blank"),
#line 8301
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8304
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8305
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8307
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 8308
        .trainerName = _("Blank"),
#line 8309
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8312
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8313
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8315
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 8316
        .trainerName = _("Blank"),
#line 8317
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8320
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8321
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8323
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 8324
        .trainerName = _("Blank"),
#line 8325
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8328
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8329
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8331
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 8332
        .trainerName = _("Blank"),
#line 8333
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8336
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8337
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8339
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 8340
        .trainerName = _("Blank"),
#line 8341
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8344
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8345
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8347
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 8348
        .trainerName = _("Blank"),
#line 8349
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8352
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8353
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8355
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 8356
        .trainerName = _("Blank"),
#line 8357
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8360
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8361
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8363
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 8364
        .trainerName = _("Blank"),
#line 8365
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8368
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8369
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8371
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 8372
        .trainerName = _("Blank"),
#line 8373
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8376
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8377
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8379
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 8380
        .trainerName = _("Blank"),
#line 8381
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8384
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8385
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8387
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 8388
        .trainerName = _("Blank"),
#line 8389
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8392
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8393
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8395
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 8396
        .trainerName = _("Blank"),
#line 8397
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8400
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8401
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8403
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 8404
        .trainerName = _("Blank"),
#line 8405
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8408
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8409
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8411
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 8412
        .trainerName = _("Blank"),
#line 8413
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8416
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8417
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8419
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 8420
        .trainerName = _("Blank"),
#line 8421
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8424
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8425
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8427
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 8428
        .trainerName = _("Blank"),
#line 8429
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8432
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8433
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8435
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 8436
        .trainerName = _("Blank"),
#line 8437
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8440
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8441
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8443
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 8444
        .trainerName = _("Blank"),
#line 8445
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8448
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8449
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8451
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 8452
        .trainerName = _("Blank"),
#line 8453
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8456
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8457
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8459
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 8460
        .trainerName = _("Blank"),
#line 8461
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8464
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8465
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8467
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 8468
        .trainerName = _("Blank"),
#line 8469
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8472
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8473
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8475
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 8476
        .trainerName = _("Blank"),
#line 8477
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8480
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8481
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8483
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 8484
        .trainerName = _("Blank"),
#line 8485
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8488
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8489
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8491
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 8492
        .trainerName = _("Blank"),
#line 8493
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8496
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8497
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8499
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 8500
        .trainerName = _("Blank"),
#line 8501
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8504
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8505
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8507
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 8508
        .trainerName = _("Blank"),
#line 8509
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8512
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8513
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8515
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 8516
        .trainerName = _("Blank"),
#line 8517
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8520
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8521
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8523
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 8524
        .trainerName = _("Blank"),
#line 8525
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8528
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8529
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8531
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 8532
        .trainerName = _("Blank"),
#line 8533
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8536
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8537
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8539
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 8540
        .trainerName = _("Blank"),
#line 8541
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8544
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8545
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8547
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 8548
        .trainerName = _("Blank"),
#line 8549
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8552
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8553
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8555
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 8556
        .trainerName = _("Blank"),
#line 8557
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8560
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8561
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8563
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 8564
        .trainerName = _("Blank"),
#line 8565
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8568
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8569
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8571
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 8572
        .trainerName = _("Blank"),
#line 8573
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8576
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8577
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8579
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 8580
        .trainerName = _("Blank"),
#line 8581
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8584
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8585
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8587
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 8588
        .trainerName = _("Blank"),
#line 8589
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8592
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8593
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8595
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 8596
        .trainerName = _("Blank"),
#line 8597
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8600
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8601
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8603
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 8604
        .trainerName = _("Blank"),
#line 8605
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8608
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8609
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8611
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 8612
        .trainerName = _("Blank"),
#line 8613
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8616
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8617
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8619
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 8620
        .trainerName = _("Blank"),
#line 8621
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8624
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8625
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8627
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 8628
        .trainerName = _("Blank"),
#line 8629
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8632
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8633
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8635
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 8636
        .trainerName = _("Blank"),
#line 8637
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8640
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8641
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8643
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 8644
        .trainerName = _("Blank"),
#line 8645
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8648
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8649
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8651
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 8652
        .trainerName = _("Blank"),
#line 8653
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8656
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8657
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8659
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 8660
        .trainerName = _("Blank"),
#line 8661
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8664
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8665
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8667
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 8668
        .trainerName = _("Blank"),
#line 8669
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8672
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8673
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8675
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 8676
        .trainerName = _("Blank"),
#line 8677
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8680
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8681
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8683
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 8684
        .trainerName = _("Blank"),
#line 8685
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8688
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8689
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8691
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 8692
        .trainerName = _("Blank"),
#line 8693
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8696
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8697
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8699
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 8700
        .trainerName = _("Blank"),
#line 8701
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8704
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8705
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8707
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 8708
        .trainerName = _("Blank"),
#line 8709
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8712
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8713
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8715
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 8716
        .trainerName = _("Blank"),
#line 8717
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8720
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8721
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8723
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 8724
        .trainerName = _("Blank"),
#line 8725
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8728
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8729
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8731
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 8732
        .trainerName = _("Blank"),
#line 8733
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8736
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8737
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8739
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 8740
        .trainerName = _("Blank"),
#line 8741
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8744
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8745
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8747
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 8748
        .trainerName = _("Blank"),
#line 8749
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8752
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8753
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8755
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 8756
        .trainerName = _("Blank"),
#line 8757
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8760
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8761
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8763
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 8764
        .trainerName = _("Blank"),
#line 8765
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8768
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8769
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8771
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 8772
        .trainerName = _("Blank"),
#line 8773
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8776
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8777
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8779
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 8780
        .trainerName = _("Blank"),
#line 8781
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8784
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8785
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8787
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 8788
        .trainerName = _("Blank"),
#line 8789
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8792
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8793
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8795
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 8796
        .trainerName = _("Blank"),
#line 8797
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8800
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8802
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8801
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8803
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 8804
        .trainerName = _("Blank"),
#line 8805
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8808
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8809
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8811
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 8812
        .trainerName = _("Blank"),
#line 8813
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8816
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8817
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8819
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 8820
        .trainerName = _("Blank"),
#line 8821
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8824
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8825
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8827
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 8828
        .trainerName = _("Blank"),
#line 8829
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8832
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8833
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8835
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 8836
        .trainerName = _("Blank"),
#line 8837
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8840
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8841
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8843
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 8844
        .trainerName = _("Blank"),
#line 8845
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8848
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8849
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8851
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 8852
        .trainerName = _("Blank"),
#line 8853
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8856
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8857
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8859
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 8860
        .trainerName = _("Blank"),
#line 8861
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8864
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8865
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8867
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 8868
        .trainerName = _("Blank"),
#line 8869
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8872
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8873
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8875
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 8876
        .trainerName = _("Blank"),
#line 8877
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8880
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8881
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8883
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 8884
        .trainerName = _("Blank"),
#line 8885
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8888
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8889
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8891
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 8892
        .trainerName = _("Blank"),
#line 8893
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8896
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8897
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8899
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 8900
        .trainerName = _("Blank"),
#line 8901
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8904
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8905
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8907
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 8908
        .trainerName = _("Blank"),
#line 8909
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8912
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8913
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8915
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 8916
        .trainerName = _("Blank"),
#line 8917
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8920
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8921
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8923
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 8924
        .trainerName = _("Blank"),
#line 8925
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8928
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8930
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8929
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8931
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 8932
        .trainerName = _("Blank"),
#line 8933
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8936
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8937
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8939
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 8940
        .trainerName = _("Blank"),
#line 8941
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8944
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8945
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8947
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 8948
        .trainerName = _("Blank"),
#line 8949
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8952
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8953
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8955
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 8956
        .trainerName = _("Blank"),
#line 8957
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8960
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8961
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8963
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 8964
        .trainerName = _("Blank"),
#line 8965
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8968
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8969
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8971
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 8972
        .trainerName = _("Blank"),
#line 8973
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8976
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8977
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8979
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 8980
        .trainerName = _("Blank"),
#line 8981
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8984
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8985
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8987
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 8988
        .trainerName = _("Blank"),
#line 8989
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8992
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8993
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8995
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 8996
        .trainerName = _("Blank"),
#line 8997
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9000
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9001
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9003
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 9004
        .trainerName = _("Blank"),
#line 9005
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9008
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9009
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9011
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 9012
        .trainerName = _("Blank"),
#line 9013
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9016
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9017
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9019
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 9020
        .trainerName = _("Blank"),
#line 9021
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9024
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9025
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9027
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 9028
        .trainerName = _("Blank"),
#line 9029
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9032
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9033
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9035
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 9036
        .trainerName = _("Blank"),
#line 9037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9040
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9041
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9043
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 9044
        .trainerName = _("Blank"),
#line 9045
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9048
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9049
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9051
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 9052
        .trainerName = _("Blank"),
#line 9053
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9056
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9057
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9059
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 9060
        .trainerName = _("Blank"),
#line 9061
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9064
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9065
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9067
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 9068
        .trainerName = _("Blank"),
#line 9069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9072
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9073
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9075
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 9076
        .trainerName = _("Blank"),
#line 9077
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9080
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9081
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9083
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 9084
        .trainerName = _("Blank"),
#line 9085
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9088
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9089
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9091
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 9092
        .trainerName = _("Blank"),
#line 9093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9096
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9097
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9099
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 9100
        .trainerName = _("Blank"),
#line 9101
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9104
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9105
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9107
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 9108
        .trainerName = _("Blank"),
#line 9109
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9112
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9113
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9115
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 9116
        .trainerName = _("Blank"),
#line 9117
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9120
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9121
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9123
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 9124
        .trainerName = _("Blank"),
#line 9125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9128
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9129
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9131
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 9132
        .trainerName = _("Blank"),
#line 9133
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9136
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9137
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9139
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 9140
        .trainerName = _("Blank"),
#line 9141
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9144
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9145
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9147
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 9148
        .trainerName = _("Blank"),
#line 9149
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9152
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9153
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9155
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 9156
        .trainerName = _("Blank"),
#line 9157
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9160
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9161
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9163
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 9164
        .trainerName = _("Blank"),
#line 9165
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9168
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9169
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9171
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 9172
        .trainerName = _("Blank"),
#line 9173
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9176
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9177
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9179
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 9180
        .trainerName = _("Blank"),
#line 9181
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9184
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9185
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9187
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 9188
        .trainerName = _("Blank"),
#line 9189
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9192
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9193
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9195
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 9196
        .trainerName = _("Blank"),
#line 9197
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9200
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9201
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9203
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 9204
        .trainerName = _("Blank"),
#line 9205
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9208
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9209
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
