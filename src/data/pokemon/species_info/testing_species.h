#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen1[] =
{
#endif

    [SPECIES_TESTING_ERRATIC] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 177,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Erratic"),
        .cryId = CRY_WOBBUFFET,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wobbuffet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_DEEP_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Wobbuffet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Wobbuffet,
        .shinyPalette = gMonShinyPalette_Wobbuffet,
        .iconSprite = gMonIcon_Wobbuffet,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WobbuffetF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_WobbuffetF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_WobbuffetF,
        .iconPalIndexFemale = 0,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Wobbuffet)
        OVERWORLD(
            sPicTable_Wobbuffet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wobbuffet,
            gShinyOverworldPalette_Wobbuffet
        )
        OVERWORLD_FEMALE(
            sPicTable_WobbuffetF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sTestingSpeciesLevelUpLearnset,
        .teachableLearnset = sWobbuffetTeachableLearnset,
    },
    [SPECIES_TESTING_MEDIUM_SLOW] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 177,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Medium Slow"),
        .cryId = CRY_WOBBUFFET,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wobbuffet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_DEEP_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Wobbuffet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Wobbuffet,
        .shinyPalette = gMonShinyPalette_Wobbuffet,
        .iconSprite = gMonIcon_Wobbuffet,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WobbuffetF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_WobbuffetF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_WobbuffetF,
        .iconPalIndexFemale = 0,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Wobbuffet)
        OVERWORLD(
            sPicTable_Wobbuffet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wobbuffet,
            gShinyOverworldPalette_Wobbuffet
        )
        OVERWORLD_FEMALE(
            sPicTable_WobbuffetF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sTestingSpeciesLevelUpLearnset,
        .teachableLearnset = sWobbuffetTeachableLearnset,
    },
    [SPECIES_TESTING_SLOW] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 177,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Slow"),
        .cryId = CRY_WOBBUFFET,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wobbuffet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_DEEP_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Wobbuffet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Wobbuffet,
        .shinyPalette = gMonShinyPalette_Wobbuffet,
        .iconSprite = gMonIcon_Wobbuffet,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WobbuffetF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_WobbuffetF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_WobbuffetF,
        .iconPalIndexFemale = 0,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Wobbuffet)
        OVERWORLD(
            sPicTable_Wobbuffet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wobbuffet,
            gShinyOverworldPalette_Wobbuffet
        )
        OVERWORLD_FEMALE(
            sPicTable_WobbuffetF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sTestingSpeciesLevelUpLearnset,
        .teachableLearnset = sWobbuffetTeachableLearnset,
    },
    [SPECIES_TESTING_FLUCTUATING] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 177,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Fluctuating"),
        .cryId = CRY_WOBBUFFET,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wobbuffet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_DEEP_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Wobbuffet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Wobbuffet,
        .shinyPalette = gMonShinyPalette_Wobbuffet,
        .iconSprite = gMonIcon_Wobbuffet,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WobbuffetF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_WobbuffetF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_WobbuffetF,
        .iconPalIndexFemale = 0,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Wobbuffet)
        OVERWORLD(
            sPicTable_Wobbuffet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wobbuffet,
            gShinyOverworldPalette_Wobbuffet
        )
        OVERWORLD_FEMALE(
            sPicTable_WobbuffetF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sTestingSpeciesLevelUpLearnset,
        .teachableLearnset = sWobbuffetTeachableLearnset,
    },

#ifdef __INTELLISENSE__
};
#endif
