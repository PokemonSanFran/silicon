#include "quest_logic.h"
///////////////////////////////////////////////////////////////////////////////
//////////////////////BEGIN SUBQUEST CUSTOMIZATION/////////////////////////////

//Declaration of subquest structures. Edits to subquests are made here.
#define sub_quest(i, n, d, m, s, st, t) {.id = i, .name = n, .desc = d, .map = m, .sprite = s, .spritetype = st, .type = t}

static const struct SubQuest sBreakTheInternet_Sub[QUEST_BREAKTHEINTERNET_SUB_COUNT] = {
	sub_quest(
	        10,
	        gText_Quest_BreakTheInternet_Sub1_Name,
	        gText_Quest_BreakTheInternet_Sub1_Desc,
	        gText_Quest_BreakTheInternet_Sub1_Map,
	        OBJ_EVENT_GFX_REPORTER_F,
	        QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Debunked")
	),
	sub_quest(
	        11,
	        gText_Quest_BreakTheInternet_Sub2_Name,
	        gText_Quest_BreakTheInternet_Sub2_Desc,
	        gText_Quest_BreakTheInternet_Sub2_Map,
	        OBJ_EVENT_GFX_REPORTER_M,
	        QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Debunked")
	),
	sub_quest(
	        12,
	        gText_Quest_BreakTheInternet_Sub3_Name,
	        gText_Quest_BreakTheInternet_Sub3_Desc,
	        gText_Quest_BreakTheInternet_Sub3_Map,
	        SPECIES_SLURPUFF,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest sInstallNatureProbes_Sub[QUEST_INSTALLNATUREPROBES_SUB_COUNT] = {
	sub_quest(
	        17,
	        gText_Quest_InstallNatureProbes_Sub1_Name,
	        gText_Quest_InstallNatureProbes_Sub1_Desc,
	        gText_Quest_InstallNatureProbes_Sub1_Map,
	        OBJ_EVENT_GFX_ARTIST,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("PutIn")
	),
	sub_quest(
	        18,
	        gText_Quest_InstallNatureProbes_Sub2_Name,
	        gText_Quest_InstallNatureProbes_Sub2_Desc,
	        gText_Quest_InstallNatureProbes_Sub2_Map,
	        OBJ_EVENT_GFX_ARTIST,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("PutIn")
	),
	sub_quest(
	        19,
	        gText_Quest_InstallNatureProbes_Sub3_Name,
	        gText_Quest_InstallNatureProbes_Sub3_Desc,
	        gText_Quest_InstallNatureProbes_Sub3_Map,
	        OBJ_EVENT_GFX_ARTIST,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("PutIn")
	),
};

static const struct SubQuest sRestaurantExpansion1_Sub[QUEST_RESTAURANTEXPANSION1_SUB_COUNT] = {
	sub_quest(
	        20,
	        gText_Quest_RestaurantExpansion1_Sub1_Name,
	        gText_Quest_RestaurantExpansion1_Sub1_Desc,
	        gText_Quest_RestaurantExpansion1_Sub1_Map,
	        OBJ_EVENT_GFX_NURSE,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Distributed")
	),
	sub_quest(
	        21,
	        gText_Quest_RestaurantExpansion1_Sub2_Name,
	        gText_Quest_RestaurantExpansion1_Sub2_Desc,
	        gText_Quest_RestaurantExpansion1_Sub2_Map,
	        OBJ_EVENT_GFX_NURSE,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Distributed")
	),
	sub_quest(
	        22,
	        gText_Quest_RestaurantExpansion1_Sub3_Name,
	        gText_Quest_RestaurantExpansion1_Sub3_Desc,
	        gText_Quest_RestaurantExpansion1_Sub3_Map,
	        OBJ_EVENT_GFX_NURSE,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Distributed")
	),
	sub_quest(
	        23,
	        gText_Quest_RestaurantExpansion1_Sub4_Name,
	        gText_Quest_RestaurantExpansion1_Sub4_Desc,
	        gText_Quest_RestaurantExpansion1_Sub4_Map,
	        OBJ_EVENT_GFX_NURSE,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Distributed")
	),
};

static const struct SubQuest sRestaurantExpansion2_Sub[QUEST_RESTAURANTEXPANSION2_SUB_COUNT] = {
	sub_quest(
	        24,
	        gText_Quest_RestaurantExpansion2_Sub1_Name,
	        gText_Quest_RestaurantExpansion2_Sub1_Desc,
	        gText_Quest_RestaurantExpansion2_Sub1_Map,
	        OBJ_EVENT_GFX_LINK_RECEPTIONIST,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
	sub_quest(
	        25,
	        gText_Quest_RestaurantExpansion2_Sub2_Name,
	        gText_Quest_RestaurantExpansion2_Sub2_Desc,
	        gText_Quest_RestaurantExpansion2_Sub2_Map,
	        OBJ_EVENT_GFX_MAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
	sub_quest(
	        26,
	        gText_Quest_RestaurantExpansion2_Sub3_Name,
	        gText_Quest_RestaurantExpansion2_Sub3_Desc,
	        gText_Quest_RestaurantExpansion2_Sub3_Map,
	        OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
	sub_quest(
	        27,
	        gText_Quest_RestaurantExpansion2_Sub4_Name,
	        gText_Quest_RestaurantExpansion2_Sub4_Desc,
	        gText_Quest_RestaurantExpansion2_Sub4_Map,
	        OBJ_EVENT_GFX_TEALA,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
	sub_quest(
	        28,
	        gText_Quest_RestaurantExpansion2_Sub5_Name,
	        gText_Quest_RestaurantExpansion2_Sub5_Desc,
	        gText_Quest_RestaurantExpansion2_Sub5_Map,
	        OBJ_EVENT_GFX_ROOFTOP_SALE_WOMAN,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
};

static const struct SubQuest sHybridCulture_Sub[QUEST_HYBRIDCULTURE_SUB_COUNT] = {
	sub_quest(
	        29,
	        gText_Quest_HybridCulture_Sub1_Name,
	        gText_Quest_HybridCulture_Sub1_Desc,
	        gText_Quest_HybridCulture_Sub1_Map,
	        OBJ_EVENT_GFX_GENTLEMAN,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Discovered")
	),
	sub_quest(
	        30,
	        gText_Quest_HybridCulture_Sub2_Name,
	        gText_Quest_HybridCulture_Sub2_Desc,
	        gText_Quest_HybridCulture_Sub2_Map,
	        OBJ_EVENT_GFX_WOMAN_5,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Discovered")
	),
	sub_quest(
	        31,
	        gText_Quest_HybridCulture_Sub3_Name,
	        gText_Quest_HybridCulture_Sub3_Desc,
	        gText_Quest_HybridCulture_Sub3_Map,
	        OBJ_EVENT_GFX_MAN_2,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Discovered")
	),
};

static const struct SubQuest sBuildingAnExhibit_Sub[QUEST_BUILDINGANEXHIBIT_SUB_COUNT] = {
	sub_quest(
	        32,
	        gText_Quest_BuildingAnExhibit_Sub1_Name,
	        gText_Quest_BuildingAnExhibit_Sub1_Desc,
	        gText_Quest_BuildingAnExhibit_Sub1_Map,
	        OBJ_EVENT_GFX_YOUNGSTER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        33,
	        gText_Quest_BuildingAnExhibit_Sub2_Name,
	        gText_Quest_BuildingAnExhibit_Sub2_Desc,
	        gText_Quest_BuildingAnExhibit_Sub2_Map,
	        OBJ_EVENT_GFX_HIKER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        34,
	        gText_Quest_BuildingAnExhibit_Sub3_Name,
	        gText_Quest_BuildingAnExhibit_Sub3_Desc,
	        gText_Quest_BuildingAnExhibit_Sub3_Map,
	        OBJ_EVENT_GFX_BEAUTY,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        35,
	        gText_Quest_BuildingAnExhibit_Sub4_Name,
	        gText_Quest_BuildingAnExhibit_Sub4_Desc,
	        gText_Quest_BuildingAnExhibit_Sub4_Map,
	        OBJ_EVENT_GFX_OLD_MAN,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Found")
	),
};

static const struct SubQuest sContractorPorygon_Sub[QUEST_CONTRACTORPORYGON_SUB_COUNT] = {
	sub_quest(
	        50,
	        gText_Quest_ContractorPorygon_Sub1_Name,
	        gText_Quest_ContractorPorygon_Sub1_Desc,
	        gText_Quest_ContractorPorygon_Sub1_Map,
	        OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        51,
	        gText_Quest_ContractorPorygon_Sub2_Name,
	        gText_Quest_ContractorPorygon_Sub2_Desc,
	        gText_Quest_ContractorPorygon_Sub2_Map,
	        OBJ_EVENT_GFX_TEALA,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        52,
	        gText_Quest_ContractorPorygon_Sub3_Name,
	        gText_Quest_ContractorPorygon_Sub3_Desc,
	        gText_Quest_ContractorPorygon_Sub3_Map,
	        OBJ_EVENT_GFX_COOK,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Delievered")
	),
};

static const struct SubQuest sGetTheBandBackTogether_Sub[QUEST_GETTHEBANDBACKTOGETHER_SUB_COUNT] = {
	sub_quest(
	        53,
	        gText_Quest_GetTheBandBackTogether_Sub1_Name,
	        gText_Quest_GetTheBandBackTogether_Sub1_Desc,
	        gText_Quest_GetTheBandBackTogether_Sub1_Map,
	        OBJ_EVENT_GFX_BOY_1,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Informed")
	),
	sub_quest(
	        54,
	        gText_Quest_GetTheBandBackTogether_Sub2_Name,
	        gText_Quest_GetTheBandBackTogether_Sub2_Desc,
	        gText_Quest_GetTheBandBackTogether_Sub2_Map,
	        OBJ_EVENT_GFX_TEALA,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Informed")
	),
	sub_quest(
	        55,
	        gText_Quest_GetTheBandBackTogether_Sub3_Name,
	        gText_Quest_GetTheBandBackTogether_Sub3_Desc,
	        gText_Quest_GetTheBandBackTogether_Sub3_Map,
	        OBJ_EVENT_GFX_WOMAN_2,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Informed")
	),
	sub_quest(
	        56,
	        gText_Quest_GetTheBandBackTogether_Sub4_Name,
	        gText_Quest_GetTheBandBackTogether_Sub4_Desc,
	        gText_Quest_GetTheBandBackTogether_Sub4_Map,
	        OBJ_EVENT_GFX_COOK,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Informed")
	),
	sub_quest(
	        57,
	        gText_Quest_GetTheBandBackTogether_Sub5_Name,
	        gText_Quest_GetTheBandBackTogether_Sub5_Desc,
	        gText_Quest_GetTheBandBackTogether_Sub5_Map,
	        OBJ_EVENT_GFX_GAMEBOY_KID,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Informed")
	),
};

static const struct SubQuest sChallengeOfThe7Sisters_Sub[QUEST_CHALLENGEOFTHE7SISTERS_SUB_COUNT] = {
	sub_quest(
	        61,
	        gText_Quest_ChallengeOfThe7Sisters_Sub1_Name,
	        gText_Quest_ChallengeOfThe7Sisters_Sub1_Desc,
	        gText_Quest_ChallengeOfThe7Sisters_Sub1_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Completed")
	),
	sub_quest(
	        62,
	        gText_Quest_ChallengeOfThe7Sisters_Sub2_Name,
	        gText_Quest_ChallengeOfThe7Sisters_Sub2_Desc,
	        gText_Quest_ChallengeOfThe7Sisters_Sub2_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Completed")
	),
	sub_quest(
	        63,
	        gText_Quest_ChallengeOfThe7Sisters_Sub3_Name,
	        gText_Quest_ChallengeOfThe7Sisters_Sub3_Desc,
	        gText_Quest_ChallengeOfThe7Sisters_Sub3_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Completed")
	),
	sub_quest(
	        64,
	        gText_Quest_ChallengeOfThe7Sisters_Sub4_Name,
	        gText_Quest_ChallengeOfThe7Sisters_Sub4_Desc,
	        gText_Quest_ChallengeOfThe7Sisters_Sub4_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Completed")
	),
	sub_quest(
	        65,
	        gText_Quest_ChallengeOfThe7Sisters_Sub5_Name,
	        gText_Quest_ChallengeOfThe7Sisters_Sub5_Desc,
	        gText_Quest_ChallengeOfThe7Sisters_Sub5_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Completed")
	),
	sub_quest(
	        66,
	        gText_Quest_ChallengeOfThe7Sisters_Sub6_Name,
	        gText_Quest_ChallengeOfThe7Sisters_Sub6_Desc,
	        gText_Quest_ChallengeOfThe7Sisters_Sub6_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Completed")
	),
	sub_quest(
	        67,
	        gText_Quest_ChallengeOfThe7Sisters_Sub7_Name,
	        gText_Quest_ChallengeOfThe7Sisters_Sub7_Desc,
	        gText_Quest_ChallengeOfThe7Sisters_Sub7_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Completed")
	),
};

static const struct SubQuest sCutePokemon_Sub[QUEST_CUTEPOKEMON_SUB_COUNT] = {
	sub_quest(
	        68,
	        gText_Quest_CutePokemon_Sub1_Name,
	        gText_Quest_CutePokemon_Sub1_Desc,
	        gText_Quest_CutePokemon_Sub1_Map,
	        SPECIES_DUSKULL,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        69,
	        gText_Quest_CutePokemon_Sub2_Name,
	        gText_Quest_CutePokemon_Sub2_Desc,
	        gText_Quest_CutePokemon_Sub2_Map,
	        SPECIES_SCRAFTY,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        70,
	        gText_Quest_CutePokemon_Sub3_Name,
	        gText_Quest_CutePokemon_Sub3_Desc,
	        gText_Quest_CutePokemon_Sub3_Map,
	        SPECIES_TEDDIURSA,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        71,
	        gText_Quest_CutePokemon_Sub4_Name,
	        gText_Quest_CutePokemon_Sub4_Desc,
	        gText_Quest_CutePokemon_Sub4_Map,
	        SPECIES_EISCUE,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
};

static const struct SubQuest sWallaceArmy_Sub[QUEST_WALLACEARMY_SUB_COUNT] = {
	sub_quest(
	        72,
	        gText_Quest_WallaceArmy_Sub2_Name,
	        gText_Quest_WallaceArmy_Sub2_Desc,
	        gText_Quest_WallaceArmy_Sub2_Map,
	        OBJ_EVENT_GFX_GIRL_1,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        73,
	        gText_Quest_WallaceArmy_Sub3_Name,
	        gText_Quest_WallaceArmy_Sub3_Desc,
	        gText_Quest_WallaceArmy_Sub3_Map,
	        OBJ_EVENT_GFX_SAILOR,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        74,
	        gText_Quest_WallaceArmy_Sub4_Name,
	        gText_Quest_WallaceArmy_Sub4_Desc,
	        gText_Quest_WallaceArmy_Sub4_Map,
	        OBJ_EVENT_GFX_DEVON_EMPLOYEE,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        75,
	        gText_Quest_WallaceArmy_Sub5_Name,
	        gText_Quest_WallaceArmy_Sub5_Desc,
	        gText_Quest_WallaceArmy_Sub5_Map,
	        OBJ_EVENT_GFX_MAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        76,
	        gText_Quest_WallaceArmy_Sub6_Name,
	        gText_Quest_WallaceArmy_Sub6_Desc,
	        gText_Quest_WallaceArmy_Sub6_Map,
	        OBJ_EVENT_GFX_WOMAN_4,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest sDexCompletion_Sub[QUEST_DEXCOMPLETION_SUB_COUNT] = {
	sub_quest(
	        77,
	        gText_Quest_DexCompletion_Sub1_Name,
	        gText_Quest_DexCompletion_Sub1_Desc,
	        gText_Quest_DexCompletion_Sub1_Map,
	        ITEM_OVAL_CHARM,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Completed")
	),
	sub_quest(
	        78,
	        gText_Quest_DexCompletion_Sub2_Name,
	        gText_Quest_DexCompletion_Sub2_Desc,
	        gText_Quest_DexCompletion_Sub2_Map,
	        ITEM_SHINY_CHARM,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Completed")
	),
};

static const struct SubQuest sKitchenVolunteering_Sub[QUEST_KITCHENVOLUNTEERING_SUB_COUNT] = {
	sub_quest(
	        79,
	        gText_Quest_KitchenVolunteering_Sub1_Name,
	        gText_Quest_KitchenVolunteering_Sub1_Desc,
	        gText_Quest_KitchenVolunteering_Sub1_Map,
	        ITEM_BIG_MALASADA,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        80,
	        gText_Quest_KitchenVolunteering_Sub2_Name,
	        gText_Quest_KitchenVolunteering_Sub2_Desc,
	        gText_Quest_KitchenVolunteering_Sub2_Map,
	        ITEM_BIG_MALASADA,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        81,
	        gText_Quest_KitchenVolunteering_Sub3_Name,
	        gText_Quest_KitchenVolunteering_Sub3_Desc,
	        gText_Quest_KitchenVolunteering_Sub3_Map,
	        ITEM_BIG_MALASADA,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        82,
	        gText_Quest_KitchenVolunteering_Sub4_Name,
	        gText_Quest_KitchenVolunteering_Sub4_Desc,
	        gText_Quest_KitchenVolunteering_Sub4_Map,
	        ITEM_BIG_MALASADA,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        83,
	        gText_Quest_KitchenVolunteering_Sub5_Name,
	        gText_Quest_KitchenVolunteering_Sub5_Desc,
	        gText_Quest_KitchenVolunteering_Sub5_Map,
	        ITEM_BIG_MALASADA,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
};

static const struct SubQuest sArtisanBalls_Sub[QUEST_ARTISANBALLS_SUB_COUNT] = {
	sub_quest(
	        84,
	        gText_Quest_ArtisanBalls_Sub1_Name,
	        gText_Quest_ArtisanBalls_Sub1_Desc,
	        gText_Quest_ArtisanBalls_Sub1_Map,
	        ITEM_FAST_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Tested")
	),
	sub_quest(
	        85,
	        gText_Quest_ArtisanBalls_Sub2_Name,
	        gText_Quest_ArtisanBalls_Sub2_Desc,
	        gText_Quest_ArtisanBalls_Sub2_Map,
	        ITEM_LEVEL_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Tested")
	),
	sub_quest(
	        86,
	        gText_Quest_ArtisanBalls_Sub3_Name,
	        gText_Quest_ArtisanBalls_Sub3_Desc,
	        gText_Quest_ArtisanBalls_Sub3_Map,
	        ITEM_LURE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Tested")
	),
	sub_quest(
	        87,
	        gText_Quest_ArtisanBalls_Sub4_Name,
	        gText_Quest_ArtisanBalls_Sub4_Desc,
	        gText_Quest_ArtisanBalls_Sub4_Map,
	        ITEM_HEAVY_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Tested")
	),
	sub_quest(
	        88,
	        gText_Quest_ArtisanBalls_Sub5_Name,
	        gText_Quest_ArtisanBalls_Sub5_Desc,
	        gText_Quest_ArtisanBalls_Sub5_Map,
	        ITEM_LOVE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Tested")
	),
	sub_quest(
	        89,
	        gText_Quest_ArtisanBalls_Sub6_Name,
	        gText_Quest_ArtisanBalls_Sub6_Desc,
	        gText_Quest_ArtisanBalls_Sub6_Map,
	        ITEM_FRIEND_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Tested")
	),
	sub_quest(
	        90,
	        gText_Quest_ArtisanBalls_Sub7_Name,
	        gText_Quest_ArtisanBalls_Sub7_Desc,
	        gText_Quest_ArtisanBalls_Sub7_Map,
	        ITEM_MOON_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Tested")
	),
};

static const struct SubQuest sArtisanBalls2_Sub[QUEST_ARTISANBALLS2_SUB_COUNT] = {
	sub_quest(
	        91,
	        gText_Quest_ArtisanBalls2_Sub1_Name,
	        gText_Quest_ArtisanBalls2_Sub1_Desc,
	        gText_Quest_ArtisanBalls2_Sub1_Map,
	        OBJ_EVENT_GFX_MANIAC,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
	sub_quest(
	        92,
	        gText_Quest_ArtisanBalls2_Sub2_Name,
	        gText_Quest_ArtisanBalls2_Sub2_Desc,
	        gText_Quest_ArtisanBalls2_Sub2_Map,
	        OBJ_EVENT_GFX_RUNNING_TRIATHLETE_M,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
	sub_quest(
	        93,
	        gText_Quest_ArtisanBalls2_Sub3_Name,
	        gText_Quest_ArtisanBalls2_Sub3_Desc,
	        gText_Quest_ArtisanBalls2_Sub3_Map,
	        OBJ_EVENT_GFX_MAN_1,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Recruited")
	),
};

static const struct SubQuest sNeighborhoodCleanUp_Sub[QUEST_NEIGHBORHOODCLEANUP_SUB_COUNT] = {
	sub_quest(
	        104,
	        gText_Quest_NeighborhoodCleanUp_Sub1_Name,
	        gText_Quest_NeighborhoodCleanUp_Sub1_Desc,
	        gText_Quest_NeighborhoodCleanUp_Sub1_Map,
	        OBJ_EVENT_GFX_MAN_2,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        105,
	        gText_Quest_NeighborhoodCleanUp_Sub2_Name,
	        gText_Quest_NeighborhoodCleanUp_Sub2_Desc,
	        gText_Quest_NeighborhoodCleanUp_Sub2_Map,
	        OBJ_EVENT_GFX_FISHERMAN,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        106,
	        gText_Quest_NeighborhoodCleanUp_Sub3_Name,
	        gText_Quest_NeighborhoodCleanUp_Sub3_Desc,
	        gText_Quest_NeighborhoodCleanUp_Sub3_Map,
	        OBJ_EVENT_GFX_CAMPER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        107,
	        gText_Quest_NeighborhoodCleanUp_Sub4_Name,
	        gText_Quest_NeighborhoodCleanUp_Sub4_Desc,
	        gText_Quest_NeighborhoodCleanUp_Sub4_Map,
	        OBJ_EVENT_GFX_BEAUTY,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        108,
	        gText_Quest_NeighborhoodCleanUp_Sub5_Name,
	        gText_Quest_NeighborhoodCleanUp_Sub5_Desc,
	        gText_Quest_NeighborhoodCleanUp_Sub5_Map,
	        OBJ_EVENT_GFX_GIRL_1,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest sNeighborhoodCleanUp2_Sub[QUEST_NEIGHBORHOODCLEANUP2_SUB_COUNT] = {
	sub_quest(
	        109,
	        gText_Quest_NeighborhoodCleanUp2_Sub1_Name,
	        gText_Quest_NeighborhoodCleanUp2_Sub1_Desc,
	        gText_Quest_NeighborhoodCleanUp2_Sub1_Map,
	        OBJ_EVENT_GFX_MAN_2,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        110,
	        gText_Quest_NeighborhoodCleanUp2_Sub2_Name,
	        gText_Quest_NeighborhoodCleanUp2_Sub2_Desc,
	        gText_Quest_NeighborhoodCleanUp2_Sub2_Map,
	        OBJ_EVENT_GFX_FISHERMAN,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        111,
	        gText_Quest_NeighborhoodCleanUp2_Sub3_Name,
	        gText_Quest_NeighborhoodCleanUp2_Sub3_Desc,
	        gText_Quest_NeighborhoodCleanUp2_Sub3_Map,
	        OBJ_EVENT_GFX_CAMPER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        112,
	        gText_Quest_NeighborhoodCleanUp2_Sub4_Name,
	        gText_Quest_NeighborhoodCleanUp2_Sub4_Desc,
	        gText_Quest_NeighborhoodCleanUp2_Sub4_Map,
	        OBJ_EVENT_GFX_BEAUTY,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest sNeighborhoodCleanUp3_Sub[QUEST_NEIGHBORHOODCLEANUP3_SUB_COUNT] = {
	sub_quest(
	        113,
	        gText_Quest_NeighborhoodCleanUp3_Sub1_Name,
	        gText_Quest_NeighborhoodCleanUp3_Sub1_Desc,
	        gText_Quest_NeighborhoodCleanUp3_Sub1_Map,
	        OBJ_EVENT_GFX_MAN_2,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        114,
	        gText_Quest_NeighborhoodCleanUp3_Sub2_Name,
	        gText_Quest_NeighborhoodCleanUp3_Sub2_Desc,
	        gText_Quest_NeighborhoodCleanUp3_Sub2_Map,
	        OBJ_EVENT_GFX_FISHERMAN,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        115,
	        gText_Quest_NeighborhoodCleanUp3_Sub3_Name,
	        gText_Quest_NeighborhoodCleanUp3_Sub3_Desc,
	        gText_Quest_NeighborhoodCleanUp3_Sub3_Map,
	        OBJ_EVENT_GFX_CAMPER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest sRockCollector_Sub[QUEST_ROCKCOLLECTOR_SUB_COUNT] = {
	sub_quest(
	        116,
	        gText_Quest_RockCollector_Sub1_Name,
	        gText_Quest_RockCollector_Sub1_Desc,
	        gText_Quest_RockCollector_Sub1_Map,
	        ITEM_FIRE_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        117,
	        gText_Quest_RockCollector_Sub2_Name,
	        gText_Quest_RockCollector_Sub2_Desc,
	        gText_Quest_RockCollector_Sub2_Map,
	        ITEM_WATER_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        118,
	        gText_Quest_RockCollector_Sub3_Name,
	        gText_Quest_RockCollector_Sub3_Desc,
	        gText_Quest_RockCollector_Sub3_Map,
	        ITEM_THUNDER_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        119,
	        gText_Quest_RockCollector_Sub4_Name,
	        gText_Quest_RockCollector_Sub4_Desc,
	        gText_Quest_RockCollector_Sub4_Map,
	        ITEM_LEAF_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        120,
	        gText_Quest_RockCollector_Sub5_Name,
	        gText_Quest_RockCollector_Sub5_Desc,
	        gText_Quest_RockCollector_Sub5_Map,
	        ITEM_ICE_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        121,
	        gText_Quest_RockCollector_Sub6_Name,
	        gText_Quest_RockCollector_Sub6_Desc,
	        gText_Quest_RockCollector_Sub6_Map,
	        ITEM_SUN_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        122,
	        gText_Quest_RockCollector_Sub7_Name,
	        gText_Quest_RockCollector_Sub7_Desc,
	        gText_Quest_RockCollector_Sub7_Map,
	        ITEM_MOON_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        123,
	        gText_Quest_RockCollector_Sub8_Name,
	        gText_Quest_RockCollector_Sub8_Desc,
	        gText_Quest_RockCollector_Sub8_Map,
	        ITEM_SHINY_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        124,
	        gText_Quest_RockCollector_Sub9_Name,
	        gText_Quest_RockCollector_Sub9_Desc,
	        gText_Quest_RockCollector_Sub9_Map,
	        ITEM_DUSK_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
	sub_quest(
	        125,
	        gText_Quest_RockCollector_Sub10_Name,
	        gText_Quest_RockCollector_Sub10_Desc,
	        gText_Quest_RockCollector_Sub10_Map,
	        ITEM_DAWN_STONE,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Delievered")
	),
};

static const struct SubQuest sHiddenGrottoMapping_Sub[QUEST_HIDDENGROTTOMAPPING_SUB_COUNT] = {
	sub_quest(
	        131,
	        gText_Quest_HiddenGrottoMapping_Sub1_Name,
	        gText_Quest_HiddenGrottoMapping_Sub1_Desc,
	        gText_Quest_HiddenGrottoMapping_Sub1_Map,
	        OBJ_EVENT_GFX_CAMPER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Discovered")
	),
	sub_quest(
	        132,
	        gText_Quest_HiddenGrottoMapping_Sub2_Name,
	        gText_Quest_HiddenGrottoMapping_Sub2_Desc,
	        gText_Quest_HiddenGrottoMapping_Sub2_Map,
	        OBJ_EVENT_GFX_CAMPER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Discovered")
	),
	sub_quest(
	        133,
	        gText_Quest_HiddenGrottoMapping_Sub3_Name,
	        gText_Quest_HiddenGrottoMapping_Sub3_Desc,
	        gText_Quest_HiddenGrottoMapping_Sub3_Map,
	        OBJ_EVENT_GFX_CAMPER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Discovered")
	),
};

static const struct SubQuest sUltraWormholeResearch_Sub[QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT] = {
	sub_quest(
	        134,
	        gText_Quest_UltraWormholeResearch_Sub1_Name,
	        gText_Quest_UltraWormholeResearch_Sub1_Desc,
	        gText_Quest_UltraWormholeResearch_Sub1_Map,
	        SPECIES_POIPOLE,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        135,
	        gText_Quest_UltraWormholeResearch_Sub2_Name,
	        gText_Quest_UltraWormholeResearch_Sub2_Desc,
	        gText_Quest_UltraWormholeResearch_Sub2_Map,
	        SPECIES_DUSCLOPS,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        136,
	        gText_Quest_UltraWormholeResearch_Sub3_Name,
	        gText_Quest_UltraWormholeResearch_Sub3_Desc,
	        gText_Quest_UltraWormholeResearch_Sub3_Map,
	        SPECIES_VOLCARONA,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        137,
	        gText_Quest_UltraWormholeResearch_Sub4_Name,
	        gText_Quest_UltraWormholeResearch_Sub4_Desc,
	        gText_Quest_UltraWormholeResearch_Sub4_Map,
	        SPECIES_CAMERUPT,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        138,
	        gText_Quest_UltraWormholeResearch_Sub5_Name,
	        gText_Quest_UltraWormholeResearch_Sub5_Desc,
	        gText_Quest_UltraWormholeResearch_Sub5_Map,
	        SPECIES_DEINO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        139,
	        gText_Quest_UltraWormholeResearch_Sub6_Name,
	        gText_Quest_UltraWormholeResearch_Sub6_Desc,
	        gText_Quest_UltraWormholeResearch_Sub6_Map,
	        SPECIES_NOIVERN,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        140,
	        gText_Quest_UltraWormholeResearch_Sub7_Name,
	        gText_Quest_UltraWormholeResearch_Sub7_Desc,
	        gText_Quest_UltraWormholeResearch_Sub7_Map,
	        SPECIES_SHUCKLE,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        141,
	        gText_Quest_UltraWormholeResearch_Sub8_Name,
	        gText_Quest_UltraWormholeResearch_Sub8_Desc,
	        gText_Quest_UltraWormholeResearch_Sub8_Map,
	        SPECIES_KINGLER,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        142,
	        gText_Quest_UltraWormholeResearch_Sub9_Name,
	        gText_Quest_UltraWormholeResearch_Sub9_Desc,
	        gText_Quest_UltraWormholeResearch_Sub9_Map,
	        SPECIES_ORBEETLE,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
	sub_quest(
	        143,
	        gText_Quest_UltraWormholeResearch_Sub10_Name,
	        gText_Quest_UltraWormholeResearch_Sub10_Desc,
	        gText_Quest_UltraWormholeResearch_Sub10_Map,
	        SPECIES_DONPHAN,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Caught")
	),
};

static const struct SubQuest sWildfireRisk_Sub[QUEST_WILDFIRERISK_SUB_COUNT] = {
	sub_quest(
	        144,
	        gText_Quest_WildfireRisk_Sub1_Name,
	        gText_Quest_WildfireRisk_Sub1_Desc,
	        gText_Quest_WildfireRisk_Sub1_Map,
	        ITEM_FIRE_GEM,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        145,
	        gText_Quest_WildfireRisk_Sub2_Name,
	        gText_Quest_WildfireRisk_Sub2_Desc,
	        gText_Quest_WildfireRisk_Sub2_Map,
	        ITEM_FLYING_GEM,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        146,
	        gText_Quest_WildfireRisk_Sub3_Name,
	        gText_Quest_WildfireRisk_Sub3_Desc,
	        gText_Quest_WildfireRisk_Sub3_Map,
	        ITEM_ELECTRIC_GEM,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest sTheBoyWhoCriesWithWolves_Sub[QUEST_THEBOYWHOCRIESWITHWOLVES_SUB_COUNT]
	= {
	sub_quest(
	        147,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub1_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub1_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub1_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        148,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub2_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub2_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub2_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        149,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub3_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub3_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub3_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        150,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub4_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub4_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub4_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        151,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub5_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub5_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub5_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        152,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub6_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub6_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub6_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        153,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub7_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub7_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub7_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        154,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub8_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub8_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub8_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
	sub_quest(
	        155,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub9_Name,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub9_Desc,
	        gText_Quest_TheBoyWhoCriesWithWolves_Sub9_Map,
	        ITEM_POKE_BALL,
	        QUEST_SPRITE_TYPE_ITEM,
	        COMPOUND_STRING("Found")
	),
};

static const struct SubQuest sTaxicabturnaround_Sub[QUEST_TAXICABTURNAROUND_SUB_COUNT] = {
	sub_quest(
	        156,
	        gText_Quest_TaxicabturnaroundSea_Sub1_Name,
	        gText_Quest_TaxicabturnaroundSea_Sub1_Desc,
	        gText_Quest_TaxicabturnaroundSea_Sub1_Map,
	        SPECIES_LAPRAS,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        157,
	        gText_Quest_TaxicabturnaroundSea_Sub2_Name,
	        gText_Quest_TaxicabturnaroundSea_Sub2_Desc,
	        gText_Quest_TaxicabturnaroundSea_Sub2_Map,
	        SPECIES_LAPRAS,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        158,
	        gText_Quest_TaxicabturnaroundSea_Sub3_Name,
	        gText_Quest_TaxicabturnaroundSea_Sub3_Desc,
	        gText_Quest_TaxicabturnaroundSea_Sub3_Map,
	        SPECIES_LAPRAS,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        159,
	        gText_Quest_TaxicabturnaroundSea_Sub4_Name,
	        gText_Quest_TaxicabturnaroundSea_Sub4_Desc,
	        gText_Quest_TaxicabturnaroundSea_Sub4_Map,
	        SPECIES_LAPRAS,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        160,
	        gText_Quest_TaxicabturnaroundSea_Sub5_Name,
	        gText_Quest_TaxicabturnaroundSea_Sub5_Desc,
	        gText_Quest_TaxicabturnaroundSea_Sub5_Map,
	        SPECIES_LAPRAS,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        161,
	        gText_Quest_TaxicabturnaroundSea_Sub6_Name,
	        gText_Quest_TaxicabturnaroundSea_Sub6_Desc,
	        gText_Quest_TaxicabturnaroundSea_Sub6_Map,
	        SPECIES_LAPRAS,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        162,
	        gText_Quest_TaxicabturnaroundAir_Sub1_Name,
	        gText_Quest_TaxicabturnaroundAir_Sub1_Desc,
	        gText_Quest_TaxicabturnaroundAir_Sub1_Map,
	        SPECIES_PIDGEOT,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        163,
	        gText_Quest_TaxicabturnaroundAir_Sub2_Name,
	        gText_Quest_TaxicabturnaroundAir_Sub2_Desc,
	        gText_Quest_TaxicabturnaroundAir_Sub2_Map,
	        SPECIES_PIDGEOT,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        164,
	        gText_Quest_TaxicabturnaroundAir_Sub3_Name,
	        gText_Quest_TaxicabturnaroundAir_Sub3_Desc,
	        gText_Quest_TaxicabturnaroundAir_Sub3_Map,
	        SPECIES_PIDGEOT,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        165,
	        gText_Quest_TaxicabturnaroundAir_Sub4_Name,
	        gText_Quest_TaxicabturnaroundAir_Sub4_Desc,
	        gText_Quest_TaxicabturnaroundAir_Sub4_Map,
	        SPECIES_PIDGEOT,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        166,
	        gText_Quest_TaxicabturnaroundAir_Sub5_Name,
	        gText_Quest_TaxicabturnaroundAir_Sub5_Desc,
	        gText_Quest_TaxicabturnaroundAir_Sub5_Map,
	        SPECIES_PIDGEOT,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        167,
	        gText_Quest_TaxicabturnaroundAir_Sub6_Name,
	        gText_Quest_TaxicabturnaroundAir_Sub6_Desc,
	        gText_Quest_TaxicabturnaroundAir_Sub6_Map,
	        SPECIES_PIDGEOT,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        168,
	        gText_Quest_TaxicabturnaroundLand_Sub1_Name,
	        gText_Quest_TaxicabturnaroundLand_Sub1_Desc,
	        gText_Quest_TaxicabturnaroundLand_Sub1_Map,
	        SPECIES_DODRIO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        169,
	        gText_Quest_TaxicabturnaroundLand_Sub2_Name,
	        gText_Quest_TaxicabturnaroundLand_Sub2_Desc,
	        gText_Quest_TaxicabturnaroundLand_Sub2_Map,
	        SPECIES_DODRIO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        170,
	        gText_Quest_TaxicabturnaroundLand_Sub3_Name,
	        gText_Quest_TaxicabturnaroundLand_Sub3_Desc,
	        gText_Quest_TaxicabturnaroundLand_Sub3_Map,
	        SPECIES_DODRIO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        171,
	        gText_Quest_TaxicabturnaroundLand_Sub4_Name,
	        gText_Quest_TaxicabturnaroundLand_Sub4_Desc,
	        gText_Quest_TaxicabturnaroundLand_Sub4_Map,
	        SPECIES_DODRIO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        172,
	        gText_Quest_TaxicabturnaroundLand_Sub5_Name,
	        gText_Quest_TaxicabturnaroundLand_Sub5_Desc,
	        gText_Quest_TaxicabturnaroundLand_Sub5_Map,
	        SPECIES_DODRIO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        173,
	        gText_Quest_TaxicabturnaroundLand_Sub6_Name,
	        gText_Quest_TaxicabturnaroundLand_Sub6_Desc,
	        gText_Quest_TaxicabturnaroundLand_Sub6_Map,
	        SPECIES_DODRIO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        174,
	        gText_Quest_TaxicabturnaroundLand_Sub7_Name,
	        gText_Quest_TaxicabturnaroundLand_Sub7_Desc,
	        gText_Quest_TaxicabturnaroundLand_Sub7_Map,
	        SPECIES_DODRIO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
};

static const struct SubQuest sPersuasivePassenger_Sub[QUEST_PERSUASIVEPASSENGER_SUB_COUNT] = {
	sub_quest(
	        175,
	        gText_Quest_PersuasivePassenger_Sub1_Name,
	        gText_Quest_PersuasivePassenger_Sub1_Desc,
	        gText_Quest_PersuasivePassenger_Sub1_Map,
	        OBJ_EVENT_GFX_GIRL_3,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Helped")
	),
	sub_quest(
	        176,
	        gText_Quest_PersuasivePassenger_Sub2_Name,
	        gText_Quest_PersuasivePassenger_Sub2_Desc,
	        gText_Quest_PersuasivePassenger_Sub2_Map,
	        OBJ_EVENT_GFX_WOMAN_1,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Helped")
	),
	sub_quest(
	        177,
	        gText_Quest_PersuasivePassenger_Sub3_Name,
	        gText_Quest_PersuasivePassenger_Sub3_Desc,
	        gText_Quest_PersuasivePassenger_Sub3_Map,
	        OBJ_EVENT_GFX_HIKER,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest sBodegaBurnout_Sub[QUEST_BODEGABURNOUT_SUB_COUNT] = {
	sub_quest(
	        178,
	        gText_Quest_BodegaBurnout_Sub1_Name,
	        gText_Quest_BodegaBurnout_Sub1_Desc,
	        gText_Quest_BodegaBurnout_Sub1_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        179,
	        gText_Quest_BodegaBurnout_Sub2_Name,
	        gText_Quest_BodegaBurnout_Sub2_Desc,
	        gText_Quest_BodegaBurnout_Sub2_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        180,
	        gText_Quest_BodegaBurnout_Sub3_Name,
	        gText_Quest_BodegaBurnout_Sub3_Desc,
	        gText_Quest_BodegaBurnout_Sub3_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        181,
	        gText_Quest_BodegaBurnout_Sub4_Name,
	        gText_Quest_BodegaBurnout_Sub4_Desc,
	        gText_Quest_BodegaBurnout_Sub4_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        182,
	        gText_Quest_BodegaBurnout_Sub5_Name,
	        gText_Quest_BodegaBurnout_Sub5_Desc,
	        gText_Quest_BodegaBurnout_Sub5_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        183,
	        gText_Quest_BodegaBurnout_Sub6_Name,
	        gText_Quest_BodegaBurnout_Sub6_Desc,
	        gText_Quest_BodegaBurnout_Sub6_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        184,
	        gText_Quest_BodegaBurnout_Sub7_Name,
	        gText_Quest_BodegaBurnout_Sub7_Desc,
	        gText_Quest_BodegaBurnout_Sub7_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        185,
	        gText_Quest_BodegaBurnout_Sub8_Name,
	        gText_Quest_BodegaBurnout_Sub8_Desc,
	        gText_Quest_BodegaBurnout_Sub8_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        186,
	        gText_Quest_BodegaBurnout_Sub9_Name,
	        gText_Quest_BodegaBurnout_Sub9_Desc,
	        gText_Quest_BodegaBurnout_Sub9_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        187,
	        gText_Quest_BodegaBurnout_Sub10_Name,
	        gText_Quest_BodegaBurnout_Sub10_Desc,
	        gText_Quest_BodegaBurnout_Sub10_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        188,
	        gText_Quest_BodegaBurnout_Sub11_Name,
	        gText_Quest_BodegaBurnout_Sub11_Desc,
	        gText_Quest_BodegaBurnout_Sub11_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        189,
	        gText_Quest_BodegaBurnout_Sub12_Name,
	        gText_Quest_BodegaBurnout_Sub12_Desc,
	        gText_Quest_BodegaBurnout_Sub12_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        190,
	        gText_Quest_BodegaBurnout_Sub13_Name,
	        gText_Quest_BodegaBurnout_Sub13_Desc,
	        gText_Quest_BodegaBurnout_Sub13_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        191,
	        gText_Quest_BodegaBurnout_Sub14_Name,
	        gText_Quest_BodegaBurnout_Sub14_Desc,
	        gText_Quest_BodegaBurnout_Sub14_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        192,
	        gText_Quest_BodegaBurnout_Sub15_Name,
	        gText_Quest_BodegaBurnout_Sub15_Desc,
	        gText_Quest_BodegaBurnout_Sub15_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        193,
	        gText_Quest_BodegaBurnout_Sub16_Name,
	        gText_Quest_BodegaBurnout_Sub16_Desc,
	        gText_Quest_BodegaBurnout_Sub16_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        194,
	        gText_Quest_BodegaBurnout_Sub17_Name,
	        gText_Quest_BodegaBurnout_Sub17_Desc,
	        gText_Quest_BodegaBurnout_Sub17_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        195,
	        gText_Quest_BodegaBurnout_Sub18_Name,
	        gText_Quest_BodegaBurnout_Sub18_Desc,
	        gText_Quest_BodegaBurnout_Sub18_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
	sub_quest(
	        196,
	        gText_Quest_BodegaBurnout_Sub19_Name,
	        gText_Quest_BodegaBurnout_Sub19_Desc,
	        gText_Quest_BodegaBurnout_Sub19_Map,
	        SPECIES_DITTO,
	        QUEST_SPRITE_TYPE_PKMN,
	        COMPOUND_STRING("Gave")
	),
};

static const struct SubQuest sWarehouseWarfare_Sub[QUEST_WAREHOUSEWARFARE_SUB_COUNT] = {
	sub_quest(
	        197,
	        gText_Quest_WarehouseWarfare_Sub1_Name,
	        gText_Quest_WarehouseWarfare_Sub1_Desc,
	        gText_Quest_WarehouseWarfare_Sub1_Map,
	        OBJ_EVENT_GFX_ARTIST,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        198,
	        gText_Quest_WarehouseWarfare_Sub2_Name,
	        gText_Quest_WarehouseWarfare_Sub2_Desc,
	        gText_Quest_WarehouseWarfare_Sub2_Map,
	        OBJ_EVENT_GFX_ROOFTOP_SALE_WOMAN,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
	sub_quest(
	        199,
	        gText_Quest_WarehouseWarfare_Sub3_Name,
	        gText_Quest_WarehouseWarfare_Sub3_Desc,
	        gText_Quest_WarehouseWarfare_Sub3_Map,
	        OBJ_EVENT_GFX_MAN_5,
	        QUEST_SPRITE_TYPE_OBJECT,
	        COMPOUND_STRING("Defeated")
	),
};

static const struct SubQuest
	sRestoreEspuleeOutskirts_Sub[QUEST_RESTOREESPULEEGYM_SUB_COUNT] = {
	sub_quest(
	        204,
	        gText_Quest_RestoreEspuleeOutskirts_Sub1_Name,
	        gText_Quest_RestoreEspuleeOutskirts_Sub1_Desc,
	        gText_Quest_RestoreEspuleeOutskirts_Sub1_Map,
	        SPECIES_KRABBY,
	        QUEST_SPRITE_TYPE_PKMN,
            COMPOUND_STRING("Caught")
	),
	sub_quest(
	        205,
	        gText_Quest_RestoreEspuleeOutskirts_Sub2_Name,
	        gText_Quest_RestoreEspuleeOutskirts_Sub2_Desc,
	        gText_Quest_RestoreEspuleeOutskirts_Sub2_Map,
	        SPECIES_COPPERAJAH,
	        QUEST_SPRITE_TYPE_PKMN,
            COMPOUND_STRING("Caught")
	),
};
static const struct SubQuest sRestoreHodouCity_Sub[QUEST_RESTOREHODOUGYM_SUB_COUNT] = {
    sub_quest(
            206,
            gText_Quest_RestoreHodouCity_Sub1_Name,
            gText_Quest_RestoreHodouCity_Sub1_Desc,
            gText_Quest_RestoreHodouCity_Sub1_Map,
            OBJ_EVENT_GFX_BLACK_BELT,
            QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Recruited")
            ),
    sub_quest(
            207,
            gText_Quest_RestoreHodouCity_Sub2_Name,
            gText_Quest_RestoreHodouCity_Sub2_Desc,
            gText_Quest_RestoreHodouCity_Sub2_Map,
            OBJ_EVENT_GFX_BLACK_BELT,
            QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Recruited")
            ),
    sub_quest(
            208,
            gText_Quest_RestoreHodouCity_Sub3_Name,
            gText_Quest_RestoreHodouCity_Sub3_Desc,
            gText_Quest_RestoreHodouCity_Sub3_Map,
            OBJ_EVENT_GFX_BLACK_BELT,
            QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Recruited")
            ),
    sub_quest(
            209,
            gText_Quest_RestoreHodouCity_Sub4_Name,
            gText_Quest_RestoreHodouCity_Sub4_Desc,
            gText_Quest_RestoreHodouCity_Sub4_Map,
            OBJ_EVENT_GFX_BLACK_BELT,
            QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Recruited")
            ),
    sub_quest(
            210,
            gText_Quest_RestoreHodouCity_Sub5_Name,
            gText_Quest_RestoreHodouCity_Sub5_Desc,
            gText_Quest_RestoreHodouCity_Sub5_Map,
            OBJ_EVENT_GFX_BLACK_BELT,
            QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Recruited")
            ),
    sub_quest(
            211,
            gText_Quest_RestoreHodouCity_Sub6_Name,
            gText_Quest_RestoreHodouCity_Sub6_Desc,
            gText_Quest_RestoreHodouCity_Sub6_Map,
            OBJ_EVENT_GFX_BLACK_BELT,
            QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Recruited")
            ),
    sub_quest(
            212,
            gText_Quest_RestoreHodouCity_Sub7_Name,
            gText_Quest_RestoreHodouCity_Sub7_Desc,
            gText_Quest_RestoreHodouCity_Sub7_Map,
            OBJ_EVENT_GFX_BLACK_BELT,
            QUEST_SPRITE_TYPE_OBJECT,
            COMPOUND_STRING("Recruited")
            ),
};
static const struct SubQuest
	sRestoreZenzuIsland_Sub[QUEST_RESTOREZENZUGYM_SUB_COUNT] = {
	sub_quest(
	        213,
	        gText_Quest_RestoreZenzuIsland_Sub1_Name,
	        gText_Quest_RestoreZenzuIsland_Sub1_Desc,
	        gText_Quest_RestoreZenzuIsland_Sub1_Map,
	        ITEM_FLAME_ORB,
	        QUEST_SPRITE_TYPE_ITEM,
            COMPOUND_STRING("Found")
	),
	sub_quest(
	        214,
	        gText_Quest_RestoreZenzuIsland_Sub2_Name,
	        gText_Quest_RestoreZenzuIsland_Sub2_Desc,
	        gText_Quest_RestoreZenzuIsland_Sub2_Map,
	        ITEM_TM27,
	        QUEST_SPRITE_TYPE_ITEM,
            COMPOUND_STRING("Found")
	),
	sub_quest(
	        215,
	        gText_Quest_RestoreZenzuIsland_Sub3_Name,
	        gText_Quest_RestoreZenzuIsland_Sub3_Desc,
	        gText_Quest_RestoreZenzuIsland_Sub3_Map,
	        SPECIES_BEHEEYEM,
	        QUEST_SPRITE_TYPE_PKMN,
            COMPOUND_STRING("Found")
	),
	sub_quest(
	        216,
	        gText_Quest_RestoreZenzuIsland_Sub4_Name,
	        gText_Quest_RestoreZenzuIsland_Sub4_Desc,
	        gText_Quest_RestoreZenzuIsland_Sub4_Map,
	        SPECIES_SHROOMISH,
	        QUEST_SPRITE_TYPE_PKMN,
            COMPOUND_STRING("Found")
	),
};
static const struct SubQuest
    sRecruitLocalArtists_Sub[QUEST_RECRUITLOCALARTISTS_SUB_COUNT] = {
	sub_quest(
	        217,
            gText_Quest_Recruitlocalartists_Sub1_Name,
            gText_Quest_Recruitlocalartists_Sub1_Desc,
            gText_Quest_Recruitlocalartists_Sub1_Map,
	        SPECIES_SMEARGLE,
	        QUEST_SPRITE_TYPE_PKMN,
            COMPOUND_STRING("Caught")
	),
	sub_quest(
	        218,
            gText_Quest_Recruitlocalartists_Sub2_Name,
            gText_Quest_Recruitlocalartists_Sub2_Desc,
            gText_Quest_Recruitlocalartists_Sub2_Map,
	        SPECIES_SMEARGLE,
	        QUEST_SPRITE_TYPE_PKMN,
            COMPOUND_STRING("Caught")
	),
	sub_quest(
	        219,
            gText_Quest_Recruitlocalartists_Sub3_Name,
            gText_Quest_Recruitlocalartists_Sub3_Desc,
            gText_Quest_Recruitlocalartists_Sub3_Map,
	        SPECIES_SMEARGLE,
	        QUEST_SPRITE_TYPE_PKMN,
            COMPOUND_STRING("Caught")
	),
};
////////////////////////END SUBQUEST CUSTOMIZATION/////////////////////////////
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
////////////////////////BEGIN QUEST CUSTOMIZATION//////////////////////////////

#define side_quest_map(map) .mapGroup = MAP_GROUP(map), .mapNum = MAP_NUM(map)

const struct SideQuest sSideQuests[QUEST_COUNT] =
{
    [QUEST_PLAYERSADVENTURE] =
    {
        .name = gText_Quest_PlayersAdventure_Name,
        .desc = gText_Quest_PlayersAdventure_Desc,
        .donedesc = gText_Quest_PlayersAdventure_DoneDesc,
        .map = gText_Quest_PlayersAdventure_Map,
        .sprite = OBJ_EVENT_GFX_BRENDAN_NORMAL,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_RETURNDOLL] =
    {
        .name = gText_Quest_ReturnDoll_Name,
        .desc = gText_Quest_ReturnDoll_Desc,
        .donedesc = gText_Quest_ReturnDoll_DoneDesc,
        .map = gText_Quest_ReturnDoll_Map,
        .sprite = OBJ_EVENT_GFX_LITTLE_GIRL,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_STOLENTRADE] =
    {
        .name = gText_Quest_StolenTrade_Name,
        .desc = gText_Quest_StolenTrade_Desc,
        .donedesc = gText_Quest_StolenTrade_DoneDesc,
        .map = gText_Quest_StolenTrade_Map,
        .sprite = OBJ_EVENT_GFX_GIRL_3,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_RABIESOUTBREAK] =
    {
        .name = COMPOUND_STRING("Rabies Outbreak"),
        .desc = COMPOUND_STRING("Feral {STR_VAR_1} are attacking pets and people in {STR_VAR_1}. Subdue 10 of them to help reduce the outbreak. There are {STR_VAR_3} remaining."),
        .rewardDesc = COMPOUND_STRING("Find the RSPCP staff member!"),
        .donedesc = COMPOUND_STRING("There's no rabies outbreak, but the Purrloin found in Glavez Heights are more likely to have Pokérus."),
        .map = COMPOUND_STRING("Glavez Heights"),
        .sprite = QUEST_RABIES_OUTBREAK_SPECIES,
        .spritetype = QUEST_SPRITE_TYPE_PKMN,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_RABIES_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not_Started"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_STARTED] =
            {
                .name = COMPOUND_STRING("Started"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_1] =
            {
                .name = COMPOUND_STRING("Defeated 1"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_2] =
            {
                .name = COMPOUND_STRING("Defeated 2"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_3] =
            {
                .name = COMPOUND_STRING("Defeated 3"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_4] =
            {
                .name = COMPOUND_STRING("Defeated 4"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_5] =
            {
                .name = COMPOUND_STRING("Defeated 5"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_6] =
            {
                .name = COMPOUND_STRING("Defeated 6"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_7] =
            {
                .name = COMPOUND_STRING("Defeated 7"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_8] =
            {
                .name = COMPOUND_STRING("Defeated 8"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_DEFEATED_9] =
            {
                .name = COMPOUND_STRING("Defeated 9"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_REWARD] =
            {
                .name = COMPOUND_STRING("Defeated 10"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
            [STATE_QUEST_RABIES_COMPLETE] =
            {
                .name = COMPOUND_STRING("Complete"),
                .setupFunc = DebugQuest_RabiesOutbreak,
                side_quest_map(MAP_GLAVEZ_HEIGHTS),
                .warpId = 0,
            },
        }
    },
    [QUEST_SMOOTHIECRAFTING] =
    {
        .name = COMPOUND_STRING("Smoothie Crafting"),
        .desc = COMPOUND_STRING("Bring {STR_VAR_2} to {STR_VAR_1}'s Marble Slab to make a drink to help train Pokémon!"),
        .donedesc = COMPOUND_STRING("The {STR_VAR_3} wasn’t all it was hyped up to be, but the Mochi Shop nearby sounds promising."),
        .map = gText_Chasilla,
        .sprite = QUEST_SMOOTHIE_CRAFTING_PRODUCT,
        .spritetype = QUEST_SPRITE_TYPE_ITEM,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_SMOOTHIECRAFTING_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not Started"),
                .setupFunc = DebugQuest_Smoothiecrafting,
                side_quest_map(QUEST_SMOOTHIE_CRAFTING_MAP),
                .warpId = 0,
            },
            [STATE_QUEST_SMOOTHIECRAFTING_STARTED] =
            {
                .name = COMPOUND_STRING("Started"),
                .setupFunc = DebugQuest_Smoothiecrafting,
                side_quest_map(QUEST_SMOOTHIE_CRAFTING_MAP),
                .warpId = 0,
            },
            [STATE_QUEST_SMOOTHIECRAFTING_HAS_ITEMS] =
            {
                .name = COMPOUND_STRING("Has Items"),
                .setupFunc = DebugQuest_Smoothiecrafting,
                side_quest_map(QUEST_SMOOTHIE_CRAFTING_MAP),
                .warpId = 0,
            },
            [STATE_QUEST_SMOOTHIECRAFTING_REWARD] =
            {
                .name = COMPOUND_STRING("Has Reward"),
                .setupFunc = DebugQuest_Smoothiecrafting,
                side_quest_map(QUEST_SMOOTHIE_CRAFTING_MAP),
                .warpId = 0,
            },
            [STATE_QUEST_SMOOTHIECRAFTING_COMPLETE] =
            {
                .name = COMPOUND_STRING("Complete"),
                .setupFunc = DebugQuest_Smoothiecrafting,
                side_quest_map(QUEST_SMOOTHIE_CRAFTING_MAP),
                .warpId = 0,
            },
        },
    },
    [QUEST_VSDEOXYS] =
    {
        .name = gText_Quest_VSDeoxys_Name,
        .desc = gText_Quest_VSDeoxys_Desc,
        .donedesc = gText_Quest_VSDeoxys_DoneDesc,
        .map = gText_Quest_VSDeoxys_Map,
        .sprite = SPECIES_DEOXYS_SPEED,
        .spritetype = QUEST_SPRITE_TYPE_PKMN,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_VSDEOXYS_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not Started"),
                .setupFunc = DebugQuest_VSDeoxys,
                side_quest_map(MAP_ROUTE9),
                .warpId = -1,
                .x = 17,
                .y = 3,
            },
            [STATE_QUEST_VSDEOXYS_RECIVED_ROCK_SMASH_TM] =
            {
                .name = COMPOUND_STRING("Recived Rock Smash TM"),
                .setupFunc = DebugQuest_VSDeoxys,
                side_quest_map(MAP_ROUTE9),
                .warpId = -1,
                .x = 9,
                .y = 1,
            },
            [STATE_QUEST_VSDEOXYS_AFTER_MINIOR_BATTLE] =
            {
                .name = COMPOUND_STRING("After Minior Battle"),
                .setupFunc = DebugQuest_VSDeoxys,
                side_quest_map(MAP_HALERBA_CITY),
                .warpId = -1,
                .x = 39,
                .y = 10,
            },
            [STATE_QUEST_VSDEOXYS_HAS_ENTERED_RESEARCH] =
            {
                .name = COMPOUND_STRING("Has Entered Research"),
                .setupFunc = DebugQuest_VSDeoxys,
                side_quest_map(MAP_GLDNTEPARK_HELEBRA_RESEARCH),
                .warpId = 0,
            },
            [STATE_QUEST_VSDEOXYS_COMPLETE_QUEST] =
            {
                .name = COMPOUND_STRING("Complete Quest"),
                .setupFunc = DebugQuest_VSDeoxys,
                side_quest_map(MAP_GLDNTEPARK_HELEBRA_RESEARCH),
                .warpId = 0,
            },
        },
    },
    [QUEST_HODOUTUNNELS] =
    {
        .name = COMPOUND_STRING("Hodou City Tunnels"),
        .desc = COMPOUND_STRING("Find somebody who might know the oldest secrets of the treasures hidden under {STR_VAR_1}."),
        .donedesc = COMPOUND_STRING("The eldest member of {STR_VAR_1} tricked you into helping him recover a treasure - his childhood photos..."),
        .map = gText_HodouCity,
        .sprite = OBJ_EVENT_GFX_OLD_MAN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_FRESHWATEREVOLUTION] =
    {
        .name = COMPOUND_STRING("Freshwater Evolution"),
        .desc = COMPOUND_STRING("Bring an octopus-like Pokémon to the secret spring in {STR_VAR_1}. Will it transform into a shiny?"),
        .donedesc = COMPOUND_STRING("{STR_VAR_2} changes color when exposed to freshwater, but they don’t turn shiny."),
        .map = gText_HalerbaWilds,
        .sprite = QUEST_FRESHWATER_EVOLUTION_SPECIES,
        .spritetype = QUEST_SPRITE_TYPE_PKMN,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_FRESHWATER_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not_Started"),
                .setupFunc = DebugQuest_FreshwaterEvolution,
                side_quest_map(MAP_HALERBA_WILDS_SPRING),
                .warpId = 0,
            },
            [STATE_QUEST_FRESHWATER_STARTED] =
            {
                .name = COMPOUND_STRING("Started"),
                .setupFunc = DebugQuest_FreshwaterEvolution,
                side_quest_map(MAP_HALERBA_WILDS_SPRING),
                .warpId = 0,
            },
            [STATE_QUEST_FRESHWATER_REWARD] =
            {
                .name = COMPOUND_STRING("Reward"),
                .setupFunc = DebugQuest_FreshwaterEvolution,
                side_quest_map(MAP_HALERBA_WILDS_SPRING),
                .warpId = 0,
            },
            [STATE_QUEST_FRESHWATER_COMPLETE] =
            {
                .name = COMPOUND_STRING("Complete"),
                .setupFunc = DebugQuest_FreshwaterEvolution,
                side_quest_map(MAP_HALERBA_WILDS_SPRING),
                .warpId = 0,
            },
        },
    },
    [QUEST_BETWEENASTONEANDAHARDPLACE] =
    {
        .name = gText_Quest_BetweenAStoneAndAHardPlace_Name,
        .desc = gText_Quest_BetweenAStoneAndAHardPlace_Desc,
        .donedesc = gText_Quest_BetweenAStoneAndAHardPlace_DoneDesc,
        .map = gText_Quest_BetweenAStoneAndAHardPlace_Map,
        .sprite = ITEM_FIRE_STONE,
        .spritetype = QUEST_SPRITE_TYPE_ITEM,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_BREAKTHEINTERNET] =
    {
        .name = gText_Quest_BreakTheInternet_Name,
        .desc = gText_Quest_BreakTheInternet_Desc,
        .donedesc = gText_Quest_BreakTheInternet_DoneDesc,
        .map = gText_Quest_BreakTheInternet_Map,
        .sprite = OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sBreakTheInternet_Sub,
        .numSubquests = QUEST_BREAKTHEINTERNET_SUB_COUNT
    },
    [QUEST_SHUTDOWNMEDICINEMAN] =
    {
        .name = gText_Quest_ShutDownMedicineMan_Name,
        .desc = gText_Quest_ShutDownMedicineMan_Desc,
        .donedesc = gText_Quest_ShutDownMedicineMan_DoneDesc,
        .map = gText_Quest_ShutDownMedicineMan_Map,
        .sprite = OBJ_EVENT_GFX_RICH_BOY,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_BUILDINGSCOPE] =
    {
        .name = gText_Quest_BuildingScope_Name,
        .desc = gText_Quest_BuildingScope_Desc,
        .donedesc = gText_Quest_BuildingScope_DoneDesc,
        .map = gText_Quest_BuildingScope_Map,
        .sprite = OBJ_EVENT_GFX_KEIYING,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_IMPROVBATTLING] =
    {
        .name = gText_Quest_ImprovBattling_Name,
        .desc = gText_Quest_ImprovBattling_Desc,
        .donedesc = gText_Quest_ImprovBattling_DoneDesc,
        .map = gText_Quest_ImprovBattling_Map,
        .sprite = OBJ_EVENT_GFX_RICH_BOY,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_INSTALLNATUREPROBES] =
    {
        .name = gText_Quest_InstallNatureProbes_Name,
        .desc = gText_Quest_InstallNatureProbes_Desc,
        .donedesc = gText_Quest_InstallNatureProbes_DoneDesc,
        .map = gText_Quest_InstallNatureProbes_Map,
        .sprite = OBJ_EVENT_GFX_ARTIST,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sInstallNatureProbes_Sub,
        .numSubquests = QUEST_INSTALLNATUREPROBES_SUB_COUNT
    },
    [QUEST_MANOFMANYHATS] =
    {
        .name = gText_Quest_ManOfManyHats_Name,
        .desc = gText_Quest_ManOfManyHats_Desc,
        .donedesc = gText_Quest_ManOfManyHats_DoneDesc,
        .map = gText_Quest_ManOfManyHats_Map,
        .sprite = OBJ_EVENT_GFX_ARTIST,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_RECRUITLOCALARTISTS] =
    {
        .name = gText_Quest_RecruitLocalArtists_Name,
        .desc = gText_Quest_RecruitLocalArtists_Desc,
        .donedesc = gText_Quest_RecruitLocalArtists_DoneDesc,
        .map = gText_Quest_RecruitLocalArtists_Map,
        .sprite = OBJ_EVENT_GFX_RAMESH,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sRecruitLocalArtists_Sub,
        .numSubquests = QUEST_RECRUITLOCALARTISTS_SUB_COUNT
    },
    [QUEST_RESTAURANTEXPANSION1] =
    {
        .name = gText_Quest_RestaurantExpansion1_Name,
        .desc = gText_Quest_RestaurantExpansion1_Desc,
        .donedesc = gText_Quest_RestaurantExpansion1_DoneDesc,
        .map = gText_Quest_RestaurantExpansion1_Map,
        .sprite = OBJ_EVENT_GFX_BELEN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sRestaurantExpansion1_Sub,
        .numSubquests = QUEST_RESTAURANTEXPANSION1_SUB_COUNT
    },
    [QUEST_RESTAURANTEXPANSION2] =
    {
        .name = gText_Quest_RestaurantExpansion2_Name,
        .desc = gText_Quest_RestaurantExpansion2_Desc,
        .donedesc = gText_Quest_RestaurantExpansion2_DoneDesc,
        .map = gText_Quest_RestaurantExpansion2_Map,
        .sprite = OBJ_EVENT_GFX_BELEN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sRestaurantExpansion2_Sub,
        .numSubquests = QUEST_RESTAURANTEXPANSION2_SUB_COUNT
    },
    [QUEST_CULTURALPURITY] =
    {
        .name = gText_Quest_CulturalPurity_Name,
        .desc = gText_Quest_CulturalPurity_Desc,
        .donedesc = gText_Quest_CulturalPurity_DoneDesc,
        .map = gText_Quest_CulturalPurity_Map,
        .sprite = OBJ_EVENT_GFX_SHINZO,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_HYBRIDCULTURE] =
    {
        .name = gText_Quest_HybridCulture_Name,
        .desc = gText_Quest_HybridCulture_Desc,
        .donedesc = gText_Quest_HybridCulture_DoneDesc,
        .map = gText_Quest_HybridCulture_Map,
        .sprite = OBJ_EVENT_GFX_SHINZO,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sHybridCulture_Sub,
        .numSubquests = QUEST_HYBRIDCULTURE_SUB_COUNT
    },
    [QUEST_ALOHAFROMALOLA] =
    {
        .name = gText_Quest_AlohaFromAlola_Name,
        .desc = gText_Quest_AlohaFromAlola_Desc,
        .donedesc = gText_Quest_AlohaFromAlola_DoneDesc,
        .map = gText_Quest_AlohaFromAlola_Map,
        .sprite = OBJ_EVENT_GFX_EMRYS,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_BUILDINGANEXHIBIT] =
    {
        .name = gText_Quest_BuildingAnExhibit_Name,
        .desc = gText_Quest_BuildingAnExhibit_Desc,
        .donedesc = gText_Quest_BuildingAnExhibit_DoneDesc,
        .map = gText_Quest_BuildingAnExhibit_Map,
        .sprite = OBJ_EVENT_GFX_EMRYS,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sBuildingAnExhibit_Sub,
        .numSubquests = QUEST_BUILDINGANEXHIBIT_SUB_COUNT
    },
    [QUEST_STEALTHEAXE] =
    {
        .name = gText_Quest_StealTheAxe_Name,
        .desc = gText_Quest_StealTheAxe_Desc,
        .donedesc = gText_Quest_StealTheAxe_DoneDesc,
        .map = gText_Quest_StealTheAxe_Map,
        .sprite = OBJ_EVENT_GFX_NERIENE,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_INVERSEHALLUCINOGENIC] =
    {
        .name = gText_Quest_InverseHallucinogenic_Name,
        .desc = gText_Quest_InverseHallucinogenic_Desc,
        .donedesc = gText_Quest_InverseHallucinogenic_DoneDesc,
        .map = gText_Quest_InverseHallucinogenic_Map,
        .sprite = OBJ_EVENT_GFX_BD,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_CONTRACTORPORYGON] =
    {
        .name = gText_Quest_ContractorPorygon_Name,
        .desc = gText_Quest_ContractorPorygon_Desc,
        .donedesc = gText_Quest_ContractorPorygon_DoneDesc,
        .map = gText_Quest_ContractorPorygon_Map,
        .sprite = OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sContractorPorygon_Sub,
        .numSubquests = QUEST_CONTRACTORPORYGON_SUB_COUNT
    },
    [QUEST_ANGELDELIVERY] =
    {
        .name = gText_Quest_AngelDelivery_Name,
        .desc = gText_Quest_AngelDelivery_Desc,
        .donedesc = gText_Quest_AngelDelivery_DoneDesc,
        .map = gText_Quest_AngelDelivery_Map,
        .sprite = OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_ANGELDELIVERY_QUEST_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Quest Not Started"),
                .setupFunc = DebugQuest_AngelDelivery,
                side_quest_map(MAP_PIOCA_BRIDGE),
                .warpId = -1,
                .x = 7,
                .y = 17,
            },
            [STATE_QUEST_ANGELDELIVERY_RECIEVED_BIKE] =
            {
                .name = COMPOUND_STRING("Recieved Bike"),
                .setupFunc = DebugQuest_AngelDelivery,
                side_quest_map(MAP_PIOCA_BRIDGE),
                .warpId = -1,
                .x = 7,
                .y = 17,
            },
            [STATE_QUEST_ANGELDELIVERY_ABOUT_TO_DELIVER_ITEM] =
            {
                .name = COMPOUND_STRING("About To_Deliver Item"),
                .setupFunc = DebugQuest_AngelDelivery,
                side_quest_map(MAP_ROUTE9),
                .warpId = -1,
                .x = 29,
                .y = 3,
            },
            [STATE_QUEST_ANGELDELIVERY_DELIVERED_ITEM] =
            {
                .name = COMPOUND_STRING("Delivered Item"),
                .setupFunc = DebugQuest_AngelDelivery,
                side_quest_map(MAP_ROUTE98),
                .warpId = -1,
                .x = 29,
                .y = 3,
            },
            [STATE_QUEST_ANGELDELIVERY_BEFORE_BATTLE] =
            {
                .name = COMPOUND_STRING("Before Battle"),
                .setupFunc = DebugQuest_AngelDelivery,
                side_quest_map(MAP_CURENO_PORT_GEAR_GRIND_GANG_HOUSE),
                .warpId = 0,
            },
            [STATE_QUEST_ANGELDELIVERY_HAS_LOST_BATTLE] =
            {
                .name = COMPOUND_STRING("Has Lost Battle"),
                .setupFunc = DebugQuest_AngelDelivery,
                side_quest_map(MAP_CURENO_PORT),
                .warpId = 0,
            },
            [STATE_QUEST_ANGELDELIVERY_COMPLETED_QUEST] =
            {
                .name = COMPOUND_STRING("Completed Quest"),
                .setupFunc = DebugQuest_AngelDelivery,
                side_quest_map(MAP_CURENO_PORT_GEAR_GRIND_GANG_HOUSE),
                .warpId = 0,
            },
        },
    },
    [QUEST_GETTHEBANDBACKTOGETHER] =
    {
        .name = gText_Quest_GetTheBandBackTogether_Name,
        .desc = gText_Quest_GetTheBandBackTogether_Desc,
        .donedesc = gText_Quest_GetTheBandBackTogether_DoneDesc,
        .map = gText_Quest_GetTheBandBackTogether_Map,
        .sprite = OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sGetTheBandBackTogether_Sub,
        .numSubquests = QUEST_GETTHEBANDBACKTOGETHER_SUB_COUNT
    },
    [QUEST_FOODTRUCKBUREACRACY] =
    {
        .name = gText_Quest_FoodTruckBureacracy_Name,
        .desc = gText_Quest_FoodTruckBureacracy_Desc,
        .donedesc = gText_Quest_FoodTruckBureacracy_DoneDesc,
        .map = gText_Quest_FoodTruckBureacracy_Map,
        .sprite = OBJ_EVENT_GFX_YOUNGSTER,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 4 //PSF TODO should this be one quest or a bunch of subquests
    },
    [QUEST_CHALLENGEOFTHE7SISTERS] =
    {
        .name = gText_Quest_ChallengeOfThe7Sisters_Name,
        .desc = gText_Quest_ChallengeOfThe7Sisters_Desc,
        .donedesc = gText_Quest_ChallengeOfThe7Sisters_DoneDesc,
        .map = gText_Quest_ChallengeOfThe7Sisters_Map,
        .sprite = OBJ_EVENT_GFX_HEX_MANIAC,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sChallengeOfThe7Sisters_Sub,
        .numSubquests = QUEST_CHALLENGEOFTHE7SISTERS_SUB_COUNT
    },
    [QUEST_CUTEPOKEMON] =
    {
        .name = gText_Quest_CutePokemon_Name,
        .desc = gText_Quest_CutePokemon_Desc,
        .donedesc = gText_Quest_CutePokemon_DoneDesc,
        .map = gText_Quest_CutePokemon_Map,
        .sprite = OBJ_EVENT_GFX_WOMAN_5,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sCutePokemon_Sub,
        .numSubquests = ARRAY_COUNT(sCutePokemon_Sub),
        .states =
        {
            [STATE_QUEST_CUTEPOKEMON_QUEST_NOT_STARTED]=
            {
                .name = COMPOUND_STRING("Quest Not Started"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_PERLACIA_CITY),
                .warpId = 11,
            },
            [STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_EISCUE]=
            {
                .name = COMPOUND_STRING("Guessing for Eiscue"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_PERLACIA_CITY_COFFEE),
                .x = 4,
                .y = 7,
            },
            [STATE_QUEST_CUTEPOKEMON_GAVE_EISCUE]=
            {
                .name = COMPOUND_STRING("Gave Eiscue"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_QIU_VILLAGE),
                .warpId = 2,
            },
            [STATE_QUEST_CUTEPOKEMON_WON_BATTLE_1]=
            {
                .name = COMPOUND_STRING("Won Battle 1"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_QIU_VILLAGE),
                .warpId = 2,
            },
            [STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_CORSOLA]=
            {
                .name = COMPOUND_STRING("Guessing for Corsola"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_QIU_VILLAGE),
                .warpId = 2,
            },
            [STATE_QUEST_CUTEPOKEMON_GAVE_CORSOLA]=
            {
                .name = COMPOUND_STRING("Gave Corsola"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_CRESALTA_VISTA),
                .warpId = 0,
            },
            [STATE_QUEST_CUTEPOKEMON_WON_BATTLE_2]=
            {
                .name = COMPOUND_STRING("Won Battle 2"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_CRESALTA_VISTA),
                .warpId = 0,
            },
            [STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_DUSKULL]=
            {
                .name = COMPOUND_STRING("Guessing for Duskull"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_CRESALTA_VISTA),
                .warpId = 0,
            },
            [STATE_QUEST_CUTEPOKEMON_GAVE_DUSKULL]=
            {
                .name = COMPOUND_STRING("Gave Duskull"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_HALAI_ISLAND),
                .warpId = 4,
            },
            [STATE_QUEST_CUTEPOKEMON_WON_BATTLE_3]=
            {
                .name = COMPOUND_STRING("Won Battle 3"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_HALAI_ISLAND),
                .warpId = 4,
            },
            [STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_SCRAFTY]=
            {
                .name = COMPOUND_STRING("Guessing for Scrafty"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_HALAI_ISLAND),
                .warpId = 4,
            },
            [STATE_QUEST_CUTEPOKEMON_QUEST_COMPLETE]=
            {
                .name = COMPOUND_STRING("Quest Complete"),
                .setupFunc = DebugQuest_CutePokemon,
                side_quest_map(MAP_HALAI_ISLAND),
                .warpId = 4,
            },
        },
    },
    [QUEST_WALLACEARMY] =
    {
        .name = gText_Quest_WallaceArmy_Name,
        .desc = gText_Quest_WallaceArmy_Desc,
        .donedesc = gText_Quest_WallaceArmy_DoneDesc,
        .map = gText_Quest_WallaceArmy_Map,
        .sprite = OBJ_EVENT_GFX_SAILOR,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sWallaceArmy_Sub,
        .numSubquests = QUEST_WALLACEARMY_SUB_COUNT
    },
    [QUEST_DEXCOMPLETION] =
    {
        .name = gText_Quest_DexCompletion_Name,
        .desc = gText_Quest_DexCompletion_Desc,
        .donedesc = gText_Quest_DexCompletion_DoneDesc,
        .map = gText_Quest_DexCompletion_Map,
        .sprite = OBJ_EVENT_GFX_SCIENTIST_2,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sDexCompletion_Sub,
        .numSubquests = QUEST_DEXCOMPLETION_SUB_COUNT
    },
    [QUEST_KITCHENVOLUNTEERING] =
    {
        .name = gText_Quest_KitchenVolunteering_Name,
        .desc = gText_Quest_KitchenVolunteering_Desc,
        .donedesc = gText_Quest_KitchenVolunteering_DoneDesc,
        .map = gText_Quest_KitchenVolunteering_Map,
        .sprite = OBJ_EVENT_GFX_SCIENTIST_1,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sKitchenVolunteering_Sub,
        .numSubquests = QUEST_KITCHENVOLUNTEERING_SUB_COUNT
    },
    [QUEST_ARTISANBALLS1] =
    {
        .name = gText_Quest_ArtisanBalls1_Name,
        .desc = gText_Quest_ArtisanBalls1_Desc,
        .donedesc = gText_Quest_ArtisanBalls1_DoneDesc,
        .map = gText_Quest_ArtisanBalls1_Map,
        .sprite = OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sArtisanBalls_Sub,
        .numSubquests = QUEST_ARTISANBALLS_SUB_COUNT
    },
    [QUEST_ARTISANBALLS2] =
    {
        .name = gText_Quest_ArtisanBalls2_Name,
        .desc = gText_Quest_ArtisanBalls2_Desc,
        .donedesc = gText_Quest_ArtisanBalls2_DoneDesc,
        .map = gText_Quest_ArtisanBalls2_Map,
        .sprite = OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sArtisanBalls2_Sub,
        .numSubquests = QUEST_ARTISANBALLS2_SUB_COUNT
    },
    [QUEST_ARTISANBALLS3] =
    {
        .name = gText_Quest_ArtisanBalls3_Name,
        .desc = gText_Quest_ArtisanBalls3_Desc,
        .donedesc = gText_Quest_ArtisanBalls3_DoneDesc,
        .map = gText_Quest_ArtisanBalls3_Map,
        .sprite = OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_MUTUALAIDFUND] =
    {
        .name = gText_Quest_Mutualaidfund_Name,
        .desc = gText_Quest_Mutualaidfund_Desc,
        .donedesc = gText_Quest_Mutualaidfund_DoneDesc,
        .map = gText_Quest_Mutualaidfund_Map,
        .sprite = OBJ_EVENT_GFX_FAT_MAN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_LASTMUSICVENUEINRESIDO] =
    {
        .name = gText_Quest_LastMusicVenueInResido_Name,
        .desc = gText_Quest_LastMusicVenueInResido_Desc,
        .donedesc = gText_Quest_LastMusicVenueInResido_DoneDesc,
        .map = gText_Quest_LastMusicVenueInResido_Map,
        .sprite = OBJ_EVENT_GFX_YOUNGSTER,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_GARDENCLEANUP] =
    {
        .name = gText_Quest_GardenCleanup_Name,
        .desc = gText_Quest_GardenCleanup_Desc,
        .donedesc = gText_Quest_GardenCleanup_DoneDesc,
        .map = gText_Quest_GardenCleanup_Map,
        .sprite = OBJ_EVENT_GFX_SCHOOL_KID_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_BUTONLYINMYBACKYARD] =
    {
        .name = gText_Quest_ButOnlyInMyBackyard_Name,
        .desc = gText_Quest_ButOnlyInMyBackyard_Desc,
        .donedesc = gText_Quest_ButOnlyInMyBackyard_DoneDesc,
        .map = gText_Quest_ButOnlyInMyBackyard_Map,
        .sprite = OBJ_EVENT_GFX_WOMAN_3,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_NEIGHBORHOODCLEANUP] =
    {
        .name = gText_Quest_NeighborhoodCleanUp_Name,
        .desc = gText_Quest_NeighborhoodCleanUp_Desc,
        .donedesc = gText_Quest_NeighborhoodCleanUp_DoneDesc,
        .map = gText_Quest_NeighborhoodCleanUp_Map,
        .sprite = OBJ_EVENT_GFX_POKEFAN_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sNeighborhoodCleanUp_Sub,
        .numSubquests = QUEST_NEIGHBORHOODCLEANUP_SUB_COUNT
    },
    [QUEST_NEIGHBORHOODCLEANUP2] =
    {
        .name = gText_Quest_NeighborhoodCleanUp2_Name,
        .desc = gText_Quest_NeighborhoodCleanUp2_Desc,
        .donedesc = gText_Quest_NeighborhoodCleanUp2_DoneDesc,
        .map = gText_Quest_NeighborhoodCleanUp2_Map,
        .sprite = OBJ_EVENT_GFX_POKEFAN_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sNeighborhoodCleanUp2_Sub,
        .numSubquests = QUEST_NEIGHBORHOODCLEANUP2_SUB_COUNT
    },
    [QUEST_NEIGHBORHOODCLEANUP3] =
    {
        .name = gText_Quest_NeighborhoodCleanUp3_Name,
        .desc = gText_Quest_NeighborhoodCleanUp3_Desc,
        .donedesc = gText_Quest_NeighborhoodCleanUp3_DoneDesc,
        .map = gText_Quest_NeighborhoodCleanUp3_Map,
        .sprite = OBJ_EVENT_GFX_POKEFAN_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sNeighborhoodCleanUp3_Sub,
        .numSubquests = QUEST_NEIGHBORHOODCLEANUP3_SUB_COUNT
    },
    [QUEST_ROCKCOLLECTOR] =
    {
        .name = gText_Quest_RockCollector_Name,
        .desc = gText_Quest_RockCollector_Desc,
        .donedesc = gText_Quest_RockCollector_DoneDesc,
        .map = gText_Quest_RockCollector_Map,
        .sprite = OBJ_EVENT_GFX_COOK,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sRockCollector_Sub,
        .numSubquests = QUEST_ROCKCOLLECTOR_SUB_COUNT
    },
    [QUEST_HANG20] =
    {
        .name = gText_Quest_Hang20_Name,
        .desc = gText_Quest_Hang20_Desc,
        .donedesc = gText_Quest_Hang20_DoneDesc,
        .map = gText_Quest_Hang20_Map,
        .sprite = OBJ_EVENT_GFX_SWIMMER_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_ALLTHATGLITTERSMIGHTBEGOLD] =
    {
        .name = gText_Quest_AllThatGlittersMightBeGold_Name,
        .desc = gText_Quest_AllThatGlittersMightBeGold_Desc,
        .donedesc = gText_Quest_AllThatGlittersMightBeGold_DoneDesc,
        .map = gText_Quest_AllThatGlittersMightBeGold_Map,
        .sprite = OBJ_EVENT_GFX_FISHERMAN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_HIDDENGROTTOMAPPING] =
    {
        .name = gText_Quest_HiddenGrottoMapping_Name,
        .desc = gText_Quest_HiddenGrottoMapping_Desc,
        .donedesc = gText_Quest_HiddenGrottoMapping_DoneDesc,
        .map = gText_Quest_HiddenGrottoMapping_Map,
        .sprite = OBJ_EVENT_GFX_TWIN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sHiddenGrottoMapping_Sub,
        .numSubquests = QUEST_HIDDENGROTTOMAPPING_SUB_COUNT
    },
    [QUEST_ULTRAWORMHOLERESEARCH] =
    {
        .name = gText_Quest_UltraWormholeResearch_Name,
        .desc = gText_Quest_UltraWormholeResearch_Desc,
        .donedesc = gText_Quest_UltraWormholeResearch_DoneDesc,
        .map = gText_Quest_UltraWormholeResearch_Map,
        .sprite = OBJ_EVENT_GFX_OLD_MAN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sUltraWormholeResearch_Sub,
        .numSubquests = QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT
    },
    [QUEST_IBELIEVEICANFLY] =
    {
        .name = gText_Quest_IBelieveICanFly_Name,
        .desc = gText_Quest_IBelieveICanFly_Desc,
        .donedesc = gText_Quest_IBelieveICanFly_DoneDesc,
        .map = gText_Quest_IBelieveICanFly_Map,
        .sprite = OBJ_EVENT_GFX_BEAUTY,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_WILDFIRERISK] =
    {
        .name = gText_Quest_WildfireRisk_Name,
        .desc = gText_Quest_WildfireRisk_Desc,
        .donedesc = gText_Quest_WildfireRisk_DoneDesc,
        .map = gText_Quest_WildfireRisk_Map,
        .sprite = OBJ_EVENT_GFX_ARTIST,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sWildfireRisk_Sub,
        .numSubquests = QUEST_WILDFIRERISK_SUB_COUNT
    },
    [QUEST_THEBOYWHOCRIESWITHWOLVES] =
    {
        .name = gText_Quest_TheBoyWhoCriesWithWolves_Name,
        .desc = gText_Quest_TheBoyWhoCriesWithWolves_Desc,
        .donedesc = gText_Quest_TheBoyWhoCriesWithWolves_DoneDesc,
        .map = gText_Quest_TheBoyWhoCriesWithWolves_Map,
        .sprite = OBJ_EVENT_GFX_GENTLEMAN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sTheBoyWhoCriesWithWolves_Sub,
        .numSubquests = QUEST_THEBOYWHOCRIESWITHWOLVES_SUB_COUNT
    },
    [QUEST_TAXICABTURNAROUND] =
    {
        .name = gText_Quest_Taxicabturnaround_Name,
        .desc = gText_Quest_Taxicabturnaround_Desc,
        .donedesc = gText_Quest_Taxicabturnaround_DoneDesc,
        .map = gText_Quest_Taxicabturnaround_Map,
        .sprite = OBJ_EVENT_GFX_TRUCK,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sTaxicabturnaround_Sub,
        .numSubquests = QUEST_TAXICABTURNAROUND_SUB_COUNT
    },
    [QUEST_PERSUASIVEPASSENGER] =
    {
        .name = gText_Quest_PersuasivePassenger_Name,
        .desc = gText_Quest_PersuasivePassenger_Desc,
        .donedesc = gText_Quest_PersuasivePassenger_DoneDesc,
        .map = gText_Quest_PersuasivePassenger_Map,
        .sprite = OBJ_EVENT_GFX_GIRL_3,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sPersuasivePassenger_Sub,
        .numSubquests = QUEST_PERSUASIVEPASSENGER_SUB_COUNT
    },
    [QUEST_BODEGABURNOUT] =
    {
        .name = gText_Quest_BodegaBurnout_Name,
        .desc = gText_Quest_BodegaBurnout_Desc,
        .donedesc = gText_Quest_BodegaBurnout_DoneDesc,
        .map = gText_Quest_BodegaBurnout_Map,
        .sprite = OBJ_EVENT_GFX_TWIN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sBodegaBurnout_Sub,
        .numSubquests = QUEST_BODEGABURNOUT_SUB_COUNT
    },
    [QUEST_WAREHOUSEWARFARE] =
    {
        .name = gText_Quest_WarehouseWarfare_Name,
        .desc = gText_Quest_WarehouseWarfare_Desc,
        .donedesc = gText_Quest_WarehouseWarfare_DoneDesc,
        .map = gText_Quest_WarehouseWarfare_Map,
        .sprite = OBJ_EVENT_GFX_GENTLEMAN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sWarehouseWarfare_Sub,
        .numSubquests = QUEST_WAREHOUSEWARFARE_SUB_COUNT
    },
    [QUEST_HOWDISAPPOINTING] =
    {
        .name = gText_Quest_HowDisappointing_Name,
        .desc = gText_Quest_HowDisappointing_Desc,
        .donedesc = gText_Quest_HowDisappointing_DoneDesc,
        .map = gText_Quest_HowDisappointing_Map,
        .sprite = OBJ_EVENT_GFX_ADAORA,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .skipQuestWhenCounting = TRUE,
    },
    [QUEST_LETSBURNTHISMOTHERDOWN] =
    {
        .name = gText_Quest_LetsBurnThisMotherDown_Name,
        .desc = gText_Quest_LetsBurnThisMotherDown_Desc,
        .donedesc = gText_Quest_LetsBurnThisMotherDown_DoneDesc,
        .map = gText_Quest_LetsBurnThisMotherDown_Map,
        .sprite = OBJ_EVENT_GFX_WALLY,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .skipQuestWhenCounting = TRUE,
    },
    [QUEST_MANHUNT] =
    {
        .name = gText_Quest_Manhunt_Name,
        .desc = gText_Quest_Manhunt_Desc,
        .donedesc = gText_Quest_Manhunt_DoneDesc,
        .map = gText_Quest_Manhunt_Map,
        .sprite = OBJ_EVENT_GFX_VIGRIM,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .skipQuestWhenCounting = TRUE,
    },
    [QUEST_RESTOREHODOUGYM] =
    {
        .name = gText_Quest_RestoreHodouCity_Name,
        .desc = gText_Quest_RestoreHodouCity_Desc,
        .donedesc = gText_Quest_RestoreHodouCity_DoneDesc,
        .map = gText_Quest_RestoreHodouCity_Map,
        .sprite = OBJ_EVENT_GFX_BLACK_BELT,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sRestoreHodouCity_Sub,
        .numSubquests = QUEST_RESTOREHODOUGYM_SUB_COUNT
    },
    [QUEST_RESTOREESPULEEGYM] =
    {
        .name = gText_Quest_RestoreEspuleeOutskirts_Name,
        .desc = gText_Quest_RestoreEspuleeOutskirts_Desc,
        .donedesc = gText_Quest_RestoreEspuleeOutskirts_DoneDesc,
        .map = gText_Quest_RestoreEspuleeOutskirts_Map,
        .sprite = OBJ_EVENT_GFX_IMELDA,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sRestoreEspuleeOutskirts_Sub,
        .numSubquests = QUEST_RESTOREESPULEEGYM_SUB_COUNT
    },
    [QUEST_RESTOREZENZUGYM] =
    {
        .name = gText_Quest_RestoreZenzuIsland_Name,
        .desc = gText_Quest_RestoreZenzuIsland_Desc,
        .donedesc = gText_Quest_RestoreZenzuIsland_DoneDesc,
        .map = gText_Quest_RestoreZenzuIsland_Map,
        .sprite = OBJ_EVENT_GFX_DOYLE,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = sRestoreZenzuIsland_Sub,
        .numSubquests = QUEST_RESTOREZENZUGYM_SUB_COUNT
    },
    [QUEST_RESTORETIRABUDINGYM] =
    {
        .name = gText_Quest_RestoreTirabudinPlace_Name,
        .desc = gText_Quest_RestoreTirabudinPlace_Desc,
        .donedesc = gText_Quest_RestoreTirabudinPlace_DoneDesc,
        .map = gText_Quest_RestoreTirabudinPlace_Map,
        .sprite = OBJ_EVENT_GFX_MAN_3,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [0]=
            {
                .name = COMPOUND_STRING("Not Started"),
                .setupFunc = DebugQuest_RestoreTirabudinGym,
                side_quest_map(MAP_TIRABUDIN_PLACE),
                .warpId = 1,
            },
            [1]=
            {
                .name = COMPOUND_STRING("Completed"),
                .setupFunc = DebugQuest_RestoreTirabudinGym,
                side_quest_map(MAP_TIRABUDIN_PLACE_GYM),
                .warpId = -1,
                .x = 6,
                .y = 5,
            },
        },
    },
    [QUEST_REDOMUGGING] =
    {
        .name = gText_Quest_RedoMugging_Name,
        .desc = gText_Quest_RedoMugging_Desc,
        .donedesc = gText_Quest_RedoMugging_DoneDesc,
        .map = gText_Quest_RedoMugging_Map,
        .sprite = OBJ_EVENT_GFX_HIKER,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_SKILLLIBRARY] =
    {
        .name = gText_Quest_Skilllibrary_Name,
        .desc = gText_Quest_Skilllibrary_Desc,
        .donedesc = gText_Quest_Skilllibrary_DoneDesc,
        .map = gText_Quest_Skilllibrary_Map,
        .sprite = OBJ_EVENT_GFX_NURSE,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_BATTLEARCADEMINIQUEST] =
    {
        .name = gText_Quest_Battlearcademiniquest_Name,
        .desc = gText_Quest_Battlearcademiniquest_Desc,
        .donedesc = gText_Quest_Battlearcademiniquest_DoneDesc,
        .map = gText_Quest_Battlearcademiniquest_Map,
        .sprite = OBJ_EVENT_GFX_MYSTERY_GIFT_MAN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_HUNKYJESUS] =
    {
        .name = gText_Quest_Hunkyjesus_Name,
        .desc = gText_Quest_Hunkyjesus_Desc,
        .donedesc = gText_Quest_Hunkyjesus_DoneDesc,
        .map = gText_Quest_Hunkyjesus_Map,
        .sprite = OBJ_EVENT_GFX_SCHOOL_KID_M,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_WHIRLPOOLFERRY] =
    {
        .name = gText_Quest_Whirlpool_Name,
        .desc = gText_Quest_Whirlpool_Desc,
        .donedesc = gText_Quest_Whirlpool_DoneDesc,
        .map = gText_Quest_Whirlpool_Map,
        .sprite = OBJ_EVENT_GFX_YOUNGSTER,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },
    [QUEST_DRUGHELMETTEST] =
    {
        .name = COMPOUND_STRING("Drug Helmet Test"),
        .desc = gText_Quest_DrugHelmetTest_Desc,
        .donedesc = gText_Quest_DrugHelmetTest_DoneDesc,
        .map = gText_IrisinaTown,
        .sprite = OBJ_EVENT_GFX_YOUNGSTER,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_DRUGHELMETTEST_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not Started"),
                .setupFunc = DebugQuest_DrugHelmetTest,
                side_quest_map(MAP_IRISINA_TOWN),
                .warpId = -1,
                .x = 7,
                .y = 21,
            },
            [STATE_QUEST_DRUGHELMETTEST_LOST_BATTLE] =
            {
                .name = COMPOUND_STRING("Lost Battle"),
                .setupFunc = DebugQuest_DrugHelmetTest,
                side_quest_map(MAP_IRISINA_TOWN),
                .warpId = -1,
                .x = 7,
                .y = 21,
            },
            [STATE_QUEST_DRUGHELMETTEST_DEFEATED_ALL_THREE] =
            {
                .name = COMPOUND_STRING("Defeated All Three"),
                .setupFunc = DebugQuest_DrugHelmetTest,
                side_quest_map(MAP_IRISINA_TOWN),
                .warpId = -1,
                .x = 7,
                .y = 21,
            },
            [STATE_QUEST_DRUGHELMETTEST_COMPLETED_QUEST] =
            {
                .name = COMPOUND_STRING("Completed Quest"),
                .setupFunc = DebugQuest_DrugHelmetTest,
                side_quest_map(MAP_IRISINA_TOWN),
                .warpId = -1,
                .x = 7,
                .y = 21,
            },
        }
    },
    [QUEST_RPS] =
    {
        .name = COMPOUND_STRING("RPS"),
        .desc = COMPOUND_STRING("Beat Monty in a friendly wager over Mach-Focus-Hand."),
        .donedesc = COMPOUND_STRING("Monty admitted to cheating, but you beat him anyways. He still wants to go double or nothing - how much money does Monty have?"),
        .map = gText_CapheCity,
        .sprite = SPECIES_HITMONCHAN,
        .spritetype = QUEST_SPRITE_TYPE_PKMN,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_RPS_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not Started"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STARTED] =
            {
                .name = COMPOUND_STRING("Started Quest"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_COMPLETE] =
            {
                .name = COMPOUND_STRING("Quest Complete"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_0] =
            {
                .name = COMPOUND_STRING("Streak 0"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_1] =
            {
                .name = COMPOUND_STRING("Streak 1"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_2] =
            {
                .name = COMPOUND_STRING("Streak 2"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_3] =
            {
                .name = COMPOUND_STRING("Streak 3"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_4] =
            {
                .name = COMPOUND_STRING("Streak 4"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_5] =
            {
                .name = COMPOUND_STRING("Streak 5"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_6] =
            {
                .name = COMPOUND_STRING("Streak 6"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_7] =
            {
                .name = COMPOUND_STRING("Streak 7"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_8] =
            {
                .name = COMPOUND_STRING("Streak 8"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_9] =
            {
                .name = COMPOUND_STRING("Streak 9"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_STREAK_10] =
            {
                .name = COMPOUND_STRING("Streak 10"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_REWARD] =
            {
                .name = COMPOUND_STRING("Ready For Dice"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
            [STATE_QUEST_RPS_DICE_GIVEN] =
            {
                .name = COMPOUND_STRING("Dice Given"),
                .setupFunc = DebugQuest_RPS,
                side_quest_map(MAP_CAPHE_CITY),
                .warpId = -1,
                .x = 9,
                .y = 19,
            },
        }
    },
    [QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP] =
    {
        .name = COMPOUND_STRING("Compulsive Healing Peer Support Group"),
        .desc = COMPOUND_STRING("See if you can power up by battling NoPoMod without using Potions."),
        .donedesc = COMPOUND_STRING("You were able to beat NoPoMod, and now he’s questioning the entire practice…"),
        .map = COMPOUND_STRING("Leaverra Forest"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not Started"),
                .setupFunc = DebugQuest_CompulsiveHealingPeerSupport,
                side_quest_map(MAP_LEAVERRA_FOREST),
                .warpId = -1,
                .x = 22,
                .y = 43,
            },
            [STATE_QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP_STARTED_QUEST] =
            {
                .name = COMPOUND_STRING("Started Quest"),
                .setupFunc = DebugQuest_CompulsiveHealingPeerSupport,
                side_quest_map(MAP_LEAVERRA_FOREST),
                .warpId = -1,
                .x = 22,
                .y = 43,
            },
            [STATE_QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP_COMPLETE_QUEST] =
            {
                .name = COMPOUND_STRING("Completed Quest"),
                .setupFunc = DebugQuest_CompulsiveHealingPeerSupport,
                side_quest_map(MAP_LEAVERRA_FOREST),
                .warpId = -1,
                .x = 22,
                .y = 43,
            },
        }
    },
    [QUEST_STRESSCUP] =
    {
        .name = COMPOUND_STRING("Stress Cup"),
        .desc = COMPOUND_STRING("Help Stresscuporganizer relive the glory days and give them some battles to remember!"),
        .donedesc = COMPOUND_STRING("Stresscuporganizer has finally calmed down, but still wants some excitement in his life..."),
        .map = COMPOUND_STRING("Cresalta Vista"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
        .states =
        {
            [STATE_QUEST_STRESSCUP_NOT_STARTED] =
            {
                .name = COMPOUND_STRING("Not Started"),
                .setupFunc = DebugQuest_StressCup,
                side_quest_map(MAP_CRESALTA_VISTA),
                .warpId = -1,
                .x = 36,
                .y = 35,
            },
            [STATE_QUEST_STRESSCUP_STARTED_QUEST] =
            {
                .name = COMPOUND_STRING("Started Quest"),
                .setupFunc = DebugQuest_StressCup,
                side_quest_map(MAP_CRESALTA_VISTA),
                .warpId = -1,
                .x = 36,
                .y = 35,
            },
            [STATE_QUEST_STRESSCUP_COMPLETE_QUEST] =
            {
                .name = COMPOUND_STRING("Completed Quest"),
                .setupFunc = DebugQuest_StressCup,
                side_quest_map(MAP_CRESALTA_VISTA),
                .warpId = -1,
                .x = 36,
                .y = 35,
            },
        }
    },
    [QUEST_PSYOP] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_TEACHATRAINERTOFISH] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_NERIENEQUEST2] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_ECOSYSTEMIMPACTSTUDY] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_POISONEDLAKEINVESTIGATION] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_FRANCHISEDRAG] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_POPUPEVENT] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_DIGGINGUPADAORASDIRT] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_FREETHEINNOCENT] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_FINDTHEGUILTY] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_FLIGHTPATTERNS] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_MUTUALAIDOUTREACH] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_THELEANINGTOWER] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_GF_ROUNDUP] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_GF_CRIM] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_GF_JACKIECAT] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_GF_LITTLESPARROW] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_GF_MM] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_GF_STRIDER] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
    [QUEST_GF_PSF] =
    {
        .name = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .donedesc = COMPOUND_STRING("???"),
        .map = COMPOUND_STRING("???"),
        .sprite = OBJ_EVENT_GFX_UNKNOWN,
        .spritetype = QUEST_SPRITE_TYPE_OBJECT,
        .subquests = NULL,
        .numSubquests = 0,
    },
};

////////////////////////END QUEST CUSTOMIZATION////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
