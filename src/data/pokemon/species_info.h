#include "constants/abilities.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
    .affineAnims = gDummySpriteAffineAnimTable,                                                                                         \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CircledQuestionMark,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CircledQuestionMarkF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSpriteFemale = gMonIcon_QuestionMarkF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    */
// Start siliconMerge
    #if P_FAMILY_NIHILEGO
    [SPECIES_NIHILEGO_SHARPRISE] =
    {
        .baseHP        = 109,
        .baseAttack    = 53,
        .baseDefense   = 47,
        .baseSpeed     = 103,
        .baseSpAttack  = 127,
        .baseSpDefense = 131,
        .types = MON_TYPES(TYPE_ROCK, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Nihilego"),
        .cryId = CRY_NIHILEGO,
        .natDexNum = NATIONAL_DEX_NIHILEGO,
        .categoryName = _("Parasite"),
        .height = 12,
        .weight = 555,
        .description = COMPOUND_STRING(
            "One of several mysterious Ultra Beasts.\n"
            "It's unclear whether or not this Pokémon\n"
            "is sentient, but sometimes it can be\n"
            "observed behaving like a young girl."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nihilego,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Nihilego,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Nihilego,
        .shinyPalette = gMonShinyPalette_Nihilego,
        .iconSprite = gMonIcon_Nihilego,
        .iconPalIndex = 0,
        FOOTPRINT(Nihilego)
        OVERWORLD(
            sPicTable_Nihilego,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nihilego,
            gShinyOverworldPalette_Nihilego
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sNihilegoLevelUpLearnset,
        .teachableLearnset = sNihilegoTeachableLearnset,
    },
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
    [SPECIES_BUZZWOLE_SHARPRISE] =
    {
        .baseHP        = 107,
        .baseAttack    = 139,
        .baseDefense   = 139,
        .baseSpeed     = 79,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Attack = 1,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Buzzwole"),
        .cryId = CRY_BUZZWOLE,
        .natDexNum = NATIONAL_DEX_BUZZWOLE,
        .categoryName = _("Swollen"),
        .height = 24,
        .weight = 3336,
        .description = COMPOUND_STRING(
            "This life-form called an Ultra Beast\n"
            "appeared from another world. It shows\n"
            "off its body, but whether that display\n"
            "is a boast or a threat remains unclear."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Buzzwole,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Buzzwole,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Buzzwole,
        .shinyPalette = gMonShinyPalette_Buzzwole,
        .iconSprite = gMonIcon_Buzzwole,
        .iconPalIndex = 0,
        FOOTPRINT(Buzzwole)
        OVERWORLD(
            sPicTable_Buzzwole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Buzzwole,
            gShinyOverworldPalette_Buzzwole
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sBuzzwoleLevelUpLearnset,
        .teachableLearnset = sBuzzwoleTeachableLearnset,
    },
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_PHEROMOSA
    [SPECIES_PHEROMOSA_SHARPRISE] =
    {
        .baseHP        = 71,
        .baseAttack    = 137,
        .baseDefense   = 37,
        .baseSpeed     = 151,
        .baseSpAttack  = 137,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pheromosa"),
        .cryId = CRY_PHEROMOSA,
        .natDexNum = NATIONAL_DEX_PHEROMOSA,
        .categoryName = _("Lissome"),
        .height = 18,
        .weight = 250,
        .description = COMPOUND_STRING(
            "One of the dangerous Ultra Beasts,\n"
            "it refuses to touch anything, perhaps\n"
            "because it senses some uncleanness\n"
            "in this world."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Pheromosa,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Pheromosa,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pheromosa,
        .shinyPalette = gMonShinyPalette_Pheromosa,
        .iconSprite = gMonIcon_Pheromosa,
        .iconPalIndex = 2,
        FOOTPRINT(Pheromosa)
        OVERWORLD(
            sPicTable_Pheromosa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pheromosa,
            gShinyOverworldPalette_Pheromosa
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sPheromosaLevelUpLearnset,
        .teachableLearnset = sPheromosaTeachableLearnset,
    },
#endif //P_FAMILY_PHEROMOSA

#if P_FAMILY_XURKITREE
    [SPECIES_XURKITREE_SHARPRISE] =
    {
        .baseHP        = 83,
        .baseAttack    = 89,
        .baseDefense   = 71,
        .baseSpeed     = 83,
        .baseSpAttack  = 173,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Xurkitree"),
        .cryId = CRY_XURKITREE,
        .natDexNum = NATIONAL_DEX_XURKITREE,
        .categoryName = _("Glowing"),
        .height = 38,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "One of the mysterious life-forms known\n"
            "as Ultra Beasts. Astonishing electric\n"
            "shocks emanate from its entire body,\n"
            "according to witnesses."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_Xurkitree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHAKE_FLASH_YELLOW_FAST,
        .backPic = gMonBackPic_Xurkitree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Xurkitree,
        .shinyPalette = gMonShinyPalette_Xurkitree,
        .iconSprite = gMonIcon_Xurkitree,
        .iconPalIndex = 0,
        FOOTPRINT(Xurkitree)
        OVERWORLD(
            sPicTable_Xurkitree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Xurkitree,
            gShinyOverworldPalette_Xurkitree
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sXurkitreeLevelUpLearnset,
        .teachableLearnset = sXurkitreeTeachableLearnset,
    },
#endif //P_FAMILY_XURKITREE

#if P_FAMILY_CELESTEELA
    [SPECIES_CELESTEELA_SHARPRISE] =
    {
        .baseHP        = 97,
        .baseAttack    = 101,
        .baseDefense   = 103,
        .baseSpeed     = 61,
        .baseSpAttack  = 107,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Celesteela"),
        .cryId = CRY_CELESTEELA,
        .natDexNum = NATIONAL_DEX_CELESTEELA,
        .categoryName = _("Launch"),
        .height = 92,
        .weight = 9999,
        .description = COMPOUND_STRING(
            "It appeared from the Ultra Wormhole.\n"
            "One kind of Ultra Beast, witnesses saw\n"
            "it flying across the sky by expelling gas\n"
            "from its two arms."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Celesteela,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_GROW_STUTTER_SLOW,
        .backPic = gMonBackPic_Celesteela,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Celesteela,
        .shinyPalette = gMonShinyPalette_Celesteela,
        .iconSprite = gMonIcon_Celesteela,
        .iconPalIndex = 0,
        FOOTPRINT(Celesteela)
        OVERWORLD(
            sPicTable_Celesteela,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Celesteela,
            gShinyOverworldPalette_Celesteela
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sCelesteelaLevelUpLearnset,
        .teachableLearnset = sCelesteelaTeachableLearnset,
    },
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_KARTANA
    [SPECIES_KARTANA_SHARPRISE] =
    {
        .baseHP        = 59,
        .baseAttack    = 181,
        .baseDefense   = 131,
        .baseSpeed     = 109,
        .baseSpAttack  = 59,
        .baseSpDefense = 31,
        .types = MON_TYPES(TYPE_GRASS, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kartana"),
        .cryId = CRY_KARTANA,
        .natDexNum = NATIONAL_DEX_KARTANA,
        .categoryName = _("Drawn Sword"),
        .height = 3,
        .weight = 1,
        .description = COMPOUND_STRING(
            "This Ultra Beast came from the\n"
            "Ultra Wormhole. It seems not to attack\n"
            "enemies on its own, but its sharp body is\n"
            "a dangerous weapon in itself."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kartana,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Kartana,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kartana,
        .shinyPalette = gMonShinyPalette_Kartana,
        .iconSprite = gMonIcon_Kartana,
        .iconPalIndex = 0,
        FOOTPRINT(Kartana)
        OVERWORLD(
            sPicTable_Kartana,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kartana,
            gShinyOverworldPalette_Kartana
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sKartanaLevelUpLearnset,
        .teachableLearnset = sKartanaTeachableLearnset,
    },
#endif //P_FAMILY_KARTANA

#if P_FAMILY_GUZZLORD
    [SPECIES_GUZZLORD_SHARPRISE] =
    {
        .baseHP        = 223,
        .baseAttack    = 101,
        .baseDefense   = 53,
        .baseSpeed     = 43,
        .baseSpAttack  = 97,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Guzzlord"),
        .cryId = CRY_GUZZLORD,
        .natDexNum = NATIONAL_DEX_GUZZLORD,
        .categoryName = _("Junkivore"),
        .height = 55,
        .weight = 8880,
        .description = COMPOUND_STRING(
            "A dangerous Ultra Beast, it has gobbled\n"
            "mountains and swallowed whole buildings,\n"
            "according to reports. But for some reason\n"
            "its droppings have never been found."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Guzzlord,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Guzzlord,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Guzzlord,
        .shinyPalette = gMonShinyPalette_Guzzlord,
        .iconSprite = gMonIcon_Guzzlord,
        .iconPalIndex = 0,
        FOOTPRINT(Guzzlord)
        OVERWORLD(
            sPicTable_Guzzlord,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Guzzlord,
            gShinyOverworldPalette_Guzzlord
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sGuzzlordLevelUpLearnset,
        .teachableLearnset = sGuzzlordTeachableLearnset,
    },
#endif //P_FAMILY_GUZZLORD

#if P_FAMILY_POIPOLE
    [SPECIES_POIPOLE_SHARPRISE] =
    {
        .baseHP        = 67,
        .baseAttack    = 73,
        .baseDefense   = 67,
        .baseSpeed     = 73,
        .baseSpAttack  = 73,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 210 : 189,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Poipole"),
        .cryId = CRY_POIPOLE,
        .natDexNum = NATIONAL_DEX_POIPOLE,
        .categoryName = _("Poison Pin"),
        .height = 6,
        .weight = 18,
        .description = COMPOUND_STRING(
            "This Ultra Beast is well enough\n"
            "liked to be chosen as a\n"
            "first partner in its own world."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poipole,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHAKE_GLOW_PURPLE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Poipole,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Poipole,
        .shinyPalette = gMonShinyPalette_Poipole,
        .iconSprite = gMonIcon_Poipole,
        .iconPalIndex = 0,
        FOOTPRINT(Poipole)
        OVERWORLD(
            sPicTable_Poipole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Poipole,
            gShinyOverworldPalette_Poipole
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sPoipoleLevelUpLearnset,
        .teachableLearnset = sPoipoleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_NAGANADEL, CONDITIONS({IF_KNOWS_MOVE, MOVE_DRAGON_PULSE})}),
    },

    [SPECIES_NAGANADEL_SHARPRISE] =
    {
        .baseHP        = 73,
        .baseAttack    = 73,
        .baseDefense   = 73,
        .baseSpeed     = 121,
        .baseSpAttack  = 127,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 270 : 243,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Naganadel"),
        .cryId = CRY_NAGANADEL,
        .natDexNum = NATIONAL_DEX_NAGANADEL,
        .categoryName = _("Poison Pin"),
        .height = 36,
        .weight = 1500,
        .description = COMPOUND_STRING(
            "It stores hundreds of liters of poisonous\n"
            "liquid inside its body. It is one of the\n"
            "organisms known as UBs."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 405,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Naganadel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_TRIANGLE_DOWN_TWICE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Naganadel,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Naganadel,
        .shinyPalette = gMonShinyPalette_Naganadel,
        .iconSprite = gMonIcon_Naganadel,
        .iconPalIndex = 0,
        FOOTPRINT(Naganadel)
        OVERWORLD(
            sPicTable_Naganadel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Naganadel,
            gShinyOverworldPalette_Naganadel
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sNaganadelLevelUpLearnset,
        .teachableLearnset = sNaganadelTeachableLearnset,
    },
#endif //P_FAMILY_POIPOLE

#if P_FAMILY_STAKATAKA
    [SPECIES_STAKATAKA_SHARPRISE] =
    {
        .baseHP        = 61,
        .baseAttack    = 131,
        .baseDefense   = 211,
        .baseSpeed     = 13,
        .baseSpAttack  = 53,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_ROCK, TYPE_STEEL),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Stakataka"),
        .cryId = CRY_STAKATAKA,
        .natDexNum = NATIONAL_DEX_STAKATAKA,
        .categoryName = _("Rampart"),
        .height = 55,
        .weight = 8200,
        .description = COMPOUND_STRING(
            "It appeared from an Ultra Wormhole. Each\n"
            "one appears to be made up of many life-\n"
            "forms stacked one on top of each other."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Stakataka,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Stakataka,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Stakataka,
        .shinyPalette = gMonShinyPalette_Stakataka,
        .iconSprite = gMonIcon_Stakataka,
        .iconPalIndex = 0,
        FOOTPRINT(Stakataka)
        OVERWORLD(
            sPicTable_Stakataka,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stakataka,
            gShinyOverworldPalette_Stakataka
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sStakatakaLevelUpLearnset,
        .teachableLearnset = sStakatakaTeachableLearnset,
    },
#endif //P_FAMILY_STAKATAKA

#if P_FAMILY_BLACEPHALON
    [SPECIES_BLACEPHALON_SHARPRISE] =
    {
        .baseHP        = 53,
        .baseAttack    = 127,
        .baseDefense   = 53,
        .baseSpeed     = 107,
        .baseSpAttack  = 151,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_ASCENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Blacephalon"),
        .cryId = CRY_BLACEPHALON,
        .natDexNum = NATIONAL_DEX_BLACEPHALON,
        .categoryName = _("Fireworks"),
        .height = 18,
        .weight = 130,
        .description = COMPOUND_STRING(
            "It slithers toward people and explode\n"
            "its head without warning. It is\n"
            "one kind of Ultra Beast."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Blacephalon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHAKE_GLOW_RED,
        .backPic = gMonBackPic_Blacephalon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Blacephalon,
        .shinyPalette = gMonShinyPalette_Blacephalon,
        .iconSprite = gMonIcon_Blacephalon,
        .iconPalIndex = 0,
        FOOTPRINT(Blacephalon)
        OVERWORLD(
            sPicTable_Blacephalon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blacephalon,
            gShinyOverworldPalette_Blacephalon
        )
        .isUltraBeast = TRUE,
        .levelUpLearnset = sBlacephalonLevelUpLearnset,
        .teachableLearnset = sBlacephalonTeachableLearnset,
    },
#endif //P_FAMILY_BLACEPHALON
    [SPECIES_FOG_UNKNOWN] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .abilities = { ABILITY_NONE, ABILITY_NONE, ABILITY_NONE },
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .genderRatio = MON_GENDERLESS,
        .description = COMPOUND_STRING(
            "This is a Pokémon.\n"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fog,
        .backPic = gMonFrontPic_Fog,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Fog,
        .shinyPalette = gMonPalette_Fog,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .baseHP        = 255,
        .baseAttack    = 255,
        .baseDefense   = 255,
        .baseSpeed     = 255,
        .baseSpAttack  = 255,
        .baseSpDefense = 255,
        FOOTPRINT(QuestionMark)
    },
    #include "species_info/testing_species.h" // trainerExpTests
	// End siliconMerge
};
