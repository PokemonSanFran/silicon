#include "global.h"
#include "battle.h"
#include "constants/trainers.h"
#include "battle_anim.h"
#include "event_data.h"
#include "field_specials.h"
#include "battle_setup.h"
#include "constants/moves.h"
#include "constants/abilities.h"
#include "pokedex.h"
#include "event_object_movement.h"
#include "event_data.h"
#include "fieldmap.h"
#include "item.h"
#include "malloc.h"
#include "mazegen.h"
#include "quests.h"
#include "money.h"
#include "party_menu.h"
#include "quest_logic.h"
#include "hidden_grotto.h"
#include "overworld.h"
#include "random.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "constants/sound.h"
#include "field_control_avatar.h"
#include "battle_main.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "constants/region_map_sections.h"
#include "region_map.h"
#include "random.h"
#include "event_data.h"
#include "buzzr.h"
#include "quests.h"

void Buzzr_IncrementSteps(void)
{
    u16 steps;

    if (!FlagGet(FLAG_SYS_APP_BUZZR_GET))
        return;

    steps = VarGet(VAR_BUZZR_STEP_COUNTER);

    if (steps == MAX_u16)
        return;

    VarSet(VAR_BUZZR_STEP_COUNTER,++steps);
}

static bool32 ZapCriteria_CheckSteps(u32 cost)
{
    u32 steps = VarGet(VAR_BUZZR_STEP_COUNTER);

    if (steps < cost)
        return FALSE;

    VarSet(VAR_BUZZR_STEP_COUNTER,(steps -= cost));
    return TRUE;
}

void ZapCriteria_AlwaysTrue(void)
{
    gSpecialVar_Result = TRUE;
}

void ZapCriteria_Quest_NPC_Rabies(void)
{
    ZapCriteria_AlwaysTrue();
}

static bool32 ZapCriteria_HasTalkedReporter(void)
{
    return (VarGet(VAR_QUEST_BREAKTHEINTERNET_STATE) > TALA_MENTIONED_REPORTER);
}

static bool32 ZapCriteria_SocialMedia(void)
{
    if (ZapCriteria_HasTalkedReporter() == FALSE)
        return FALSE;

    return ZapCriteria_CheckSteps(ZAP_SOCIAL_MEDIA_STEPS);
}

void ZapCriteria_RegularZap(void)
{
    gSpecialVar_Result = ZapCriteria_CheckSteps(ZAP_CHATTER_STEPS);
}

void ZapCriteria_Quest_NPC_Robbery(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Quest_NPC_Ice(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Quest_NPC_Deoxys(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Quest_NPC_Tunnels(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Quest_NPC_Freshwater(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Quest_NPC_Gem(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Quest_NPC_Stone(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Gym_MermerezaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_MERMEREZA_CITY_BADGE);
}

void ZapCriteria_Gym_ToraTown_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_TORA_TOWN_BADGE);
}

void ZapCriteria_Gym_PerlaciaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_PERLACIA_CITY_BADGE);
}

void ZapCriteria_Gym_Chasilla_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_CHASILLA_BADGE);
}

void ZapCriteria_Gym_FortYobu_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_FORT_YOBU_BADGE);
}

void ZapCriteria_Gym_HalerbaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_HALERBA_CITY_BADGE);
}

void ZapCriteria_Gym_TirabudinPlace_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_TIRABUDIN_PLACE_BADGE);
}

void ZapCriteria_Gym_IrisinaTown_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_GYM_IRISINA_TOWN_BADGE);
}

void ZapCriteria_Story_GRUNT_Restored(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_STORY_GRUNT_RESTORED);
}

void ZapCriteria_Story_Strike_Begin1(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_STORY_STRIKE_BEGIN_1);
}

void ZapCriteria_Story_Strike_Begin2(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_STORY_STRIKE_BEGIN_2);
}

void ZapCriteria_Story_Warehouse_Rave(void)
{
	gSpecialVar_Result = Buzzr_IsZapRead(ZAP_STORY_WAREHOUSE_RAVE);
}

void ZapCriteria_StoryClear(void)
{
    gSpecialVar_Result = (VarGet(VAR_STORYLINE_STATE) >= STORY_CLEAR);
}

void ZapCriteria_IsCompulsiveHealingReward(void)
{
    gSpecialVar_Result = ((IsQuestRewardState(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP)) || (IsQuestCompletedState(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP)));
}

void ZapCriteria_IsRabiesComplete(void)
{
    gSpecialVar_Result = (IsQuestCompletedState(QUEST_RABIESOUTBREAK));
}

void ZapCriteria_IsSmoothieCraftingComplete(void)
{
    gSpecialVar_Result = (IsQuestCompletedState(QUEST_SMOOTHIECRAFTING));
}

void ZapCriteria_Quest_NPC_Psyop(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_IsPsyopComplete(void)
{
    gSpecialVar_Result = (IsQuestCompletedState(QUEST_PSYOP));
}

void ZapCriteria_IsPsyopActive(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_PSYOP) ||(IsQuestRewardState(QUEST_PSYOP)) || (IsQuestCompletedState(QUEST_PSYOP))) ;
}

void ZapCriteria_Quest_NPC_BetweenAStoneAndAHardPlace(void)
{
    gSpecialVar_Result = ZapCriteria_SocialMedia();
}

void ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode1Times(void)
{
    gSpecialVar_Result = (Quest_BetweenAStoneAndAHardPlace_CountRides() >=1);
}

void ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode3Times(void)
{
    gSpecialVar_Result = (Quest_BetweenAStoneAndAHardPlace_CountRides() >=3);
}

void ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode5Times(void)
{
    gSpecialVar_Result = (Quest_BetweenAStoneAndAHardPlace_CountRides() >=5);
}

void ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode9Times(void)
{
    gSpecialVar_Result = (Quest_BetweenAStoneAndAHardPlace_CountRides() >=9);
}

void ZapCriteria_Quest_BetweenAStoneAndAHardPlace_IsRewardOrComplete(void)
{
    gSpecialVar_Result = FALSE;

    if (IsQuestCompletedState(QUEST_BETWEENASTONEANDAHARDPLACE))
    {
        gSpecialVar_Result = TRUE;
        return;
    }

    if (IsQuestRewardState(QUEST_BETWEENASTONEANDAHARDPLACE))
    {
        gSpecialVar_Result = TRUE;
        return;
    }
}

void ZapCriteria_Quest_RestaurantExpansion1_1(void)
{
    gSpecialVar_Result = (Quest_Generic_CountRemainingSubquests(QUEST_RESTAURANTEXPANSION1) <= (QUEST_RESTAURANTEXPANSION1_SUB_COUNT - 1));
}

void ZapCriteria_Quest_RestaurantExpansion1_2(void)
{
    gSpecialVar_Result = (Quest_Generic_CountRemainingSubquests(QUEST_RESTAURANTEXPANSION1) <= (QUEST_RESTAURANTEXPANSION1_SUB_COUNT - 2));
}

void ZapCriteria_Quest_RestaurantExpansion1_3(void)
{
    gSpecialVar_Result = (Quest_Generic_CountRemainingSubquests(QUEST_RESTAURANTEXPANSION1) <= (QUEST_RESTAURANTEXPANSION1_SUB_COUNT - 3));
}

void ZapCriteria_Quest_Diggingupadaorasdirt_1(void)
{
    gSpecialVar_Result = (VarGet(VAR_CURENO_PORT_STATE) >= POST_HOW_DO_WE_GET_HOME);
}

void ZapCriteria_Quest_ReturnDollComplete(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_RETURNDOLL);
}

void ZapCriteria_Quest_Freetheinnocent1(void)
{
    gSpecialVar_Result = TRUE;
}

void ZapCriteria_Quest_Freetheinnocent5(void)
{
    gSpecialVar_Result = QuestMenu_GetSetSubquestState(QUEST_FREETHEINNOCENT, FLAG_GET_COMPLETED, SUB_QUEST_6);
}

void ZapCriteria_Quest_Findtheguilty1(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_FINDTHEGUILTY);
}

void ZapCriteria_Quest_Restaurantexpansion1(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_RESTAURANTEXPANSION1);
}

void ZapCriteria_Quest_Kitchenvolunteering(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_RESTAURANTEXPANSION2);
}

void ZapCriteria_Quest_RestoreespuleegymActive(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_RESTOREESPULEEGYM) ||(IsQuestRewardState(QUEST_RESTOREESPULEEGYM)) || (IsQuestCompletedState(QUEST_RESTOREESPULEEGYM))) ;
}

void ZapCriteria_Quest_RestoreespuleegymComplete(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_RESTOREESPULEEGYM);
}

void ZapCriteria_Quest_RestorezenzugymActive(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_RESTOREESPULEEGYM) ||(IsQuestRewardState(QUEST_RESTOREESPULEEGYM)) || (IsQuestCompletedState(QUEST_RESTOREESPULEEGYM))) ;
}

void ZapCriteria_Quest_RestorezenzugymComplete(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_RESTOREZENZUGYM);
}

void ZapCriteria_Quest_RestorehodoucityFoundLeader(void)
{
    gSpecialVar_Result = (VarGet(VAR_QUEST_RESTOREHODOUGYM) >= FOUND_HODOU_CITY_LEADER);
}

void ZapCriteria_Quest_RestorehodoucityAssigned(void)
{
    gSpecialVar_Result = (VarGet(VAR_STORYLINE_STATE) >= STORY_POST_BATTLE_BAIYA_ZENZU_ISLAND);
}

void ZapCriteria_Quest_RestorehodoucityComplete(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_RESTOREHODOUGYM);
}

void ZapCriteria_Quest_ImprovbattlingComplete(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_IMPROVBATTLING);
}
void ZapCriteria_Quest_ImprovbattlingActive(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_IMPROVBATTLING) ||(IsQuestRewardState(QUEST_IMPROVBATTLING)) || (IsQuestCompletedState(QUEST_IMPROVBATTLING))) ;
}

void ZapCriteria_Quest_Hang20_FirstZapRead(void)
{
    gSpecialVar_Result = Buzzr_IsZapRead(ZAP_QUEST_HANG20_WARNING);
}

void ZapCriteria_Quest_CulturalPurity_Active(void)
{
    gSpecialVar_Result = (ReturnQuestState(QUEST_CULTURALPURITY) > FLAG_GET_INACTIVE); }

void ZapCriteria_Quest_CulturalPurity_ReadyForA(void)
{
    gSpecialVar_Result = (VarGet(VAR_CULTURAL_PURITY) >= CULTURAL_PURITY_READY_FOR_A);
}

void ZapCriteria_Quest_CulturalPurity_ReadyForB(void)
{
    gSpecialVar_Result = (VarGet(VAR_CULTURAL_PURITY) >= CULTURAL_PURITY_READY_FOR_B);
}

void ZapCriteria_Quest_CulturalPurity_ReadyForC(void)
{
    gSpecialVar_Result = (VarGet(VAR_CULTURAL_PURITY) >= CULTURAL_PURITY_READY_FOR_C);
}

void ZapCriteria_Quest_CulturalPurity_ReadyForD(void)
{
    gSpecialVar_Result = (VarGet(VAR_CULTURAL_PURITY) >= CULTURAL_PURITY_READY_FOR_D);
}

void ZapCriteria_Quest_CulturalPurity_ReadyForDChampion(void)
{
    ZapCriteria_Quest_CulturalPurity_ReadyForD();

    gSpecialVar_Result = ((VarGet(VAR_STORYLINE_STATE) >= STORY_WON_FINALS) && (gSpecialVar_Result == TRUE));
}

void ZapCriteria_Quest_HybridCulture_HasQuestStarted(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_HYBRIDCULTURE) ||(IsQuestRewardState(QUEST_HYBRIDCULTURE)) || (IsQuestCompletedState(QUEST_HYBRIDCULTURE))) ;
}
void ZapCriteria_Quest_HybridCulture_HasSubquest1Completed(void)
{
    gSpecialVar_Result = QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE, FLAG_GET_COMPLETED, SUB_QUEST_1);
}
void ZapCriteria_Quest_HybridCulture_HasSubquest2Completed(void)
{
    gSpecialVar_Result = QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE, FLAG_GET_COMPLETED, SUB_QUEST_2);
}
void ZapCriteria_Quest_HybridCulture_HasSubquest3Completed(void)
{
    gSpecialVar_Result = QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE, FLAG_GET_COMPLETED, SUB_QUEST_3);
}
void ZapCriteria_Quest_HybridCulture_HasSubquest4Completed(void)
{
    gSpecialVar_Result = QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE, FLAG_GET_COMPLETED, SUB_QUEST_4);
}
void ZapCriteria_Quest_HybridCulture_HasSubquest5Completed(void)
{
    gSpecialVar_Result = QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE, FLAG_GET_COMPLETED, SUB_QUEST_5);
}
void ZapCriteria_Quest_InstallNatureProbes_HasQuestCompleted(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_INSTALLNATUREPROBES);
}

void ZapCriteria_HasMetLucrezia(void)
{
    gSpecialVar_Result = (VarGet(VAR_SHARPRISESPIRE_CONFERENCE_STATE) >= POST_WOW_YOURE_STRONG);
}

void ZapCriteria_AfterSorryAbout(void)
{
    gSpecialVar_Result = (VarGet(VAR_FERRY_STATE) >=FERRY_ARANTRAZ_AVAILABLE);
}

void ZapCriteria_AfterChallengeStart(void)
{
    gSpecialVar_Result = FALSE;

    if (VarGet(VAR_PLAYER_HOME_STATE) < SLEPT_AFTER_SWAGBAG)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_HasAllBadges(void)
{
    gSpecialVar_Result = FALSE;

    if (GetNumberOfBadges() < 8)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_HasOneBadges(void)
{
    gSpecialVar_Result = FALSE;

    if (GetNumberOfBadges() < 1)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_HasTwoBadges(void)
{
    gSpecialVar_Result = FALSE;

    if (GetNumberOfBadges() < 2)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_HasFlownIn(void)
{
    gSpecialVar_Result = FALSE;

    if (VarGet(VAR_PLAYER_HOME_STATE) < HAS_MET_CHARLOTTE)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_AfterDefeatedCharlotte(void)
{
    gSpecialVar_Result = FALSE;

    if (FlagGet(TRAINER_FLAGS_START + TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS) == FALSE)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_AfterWowYoureStrong(void)
{
    gSpecialVar_Result = FALSE;

    if (VarGet(VAR_SHARPRISESPIRE_CONFERENCE_STATE) <= POST_WOW_YOURE_STRONG)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_AfterHowDoWeGetHome(void)
{
    gSpecialVar_Result = FALSE;

    if (VarGet(VAR_SHARPRISESPIRE_CONFERENCE_STATE) <= POST_WOW_YOURE_STRONG)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_FinishedHousingProtest(void)
{
    gSpecialVar_Result = (VarGet(VAR_ROUTE99_STATE) >= DEFEATED_THE_TIDE_ROUTE99);
}

void ZapCriteria_LearnedBreedingCenter(void)
{
    gSpecialVar_Result = (VarGet(VAR_CHASILLA_STATE) >= SWAGBAG_2_COMPLETE);
}

void ZapCriteria_VisitedArantraz(void)
{
    gSpecialVar_Result = FALSE;

    if (FlagGet(FLAG_VISITED_ARANTRAZ) == FALSE)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_AfterCapheRiot(void)
{
    gSpecialVar_Result = (VarGet(VAR_KEIYING_STATE) >= STATE_KEIYING_POST_RAISON_DETRE);
}

void ZapCriteria_AfterBeachBattle(void)
{
    gSpecialVar_Result = (FlagGet(TRAINER_FLAGS_START + TRAINER_CHARLOTTE_BEACHBATTLE));
}

void ZapCriteria_AfterParade(void)
{
    gSpecialVar_Result = FALSE;

    if (VarGet(VAR_TIRABUDIN_PLACE_STATE) < PARADE_COMPLETE)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_StrikeStarted(void)
{
    gSpecialVar_Result = (VarGet(VAR_CONSTRUCTION_STRIKE_STATE) >= STRIKE_HAS_BEGUN);
}

void ZapCriteria_PostGarbodor(void)
{
    gSpecialVar_Result = (VarGet(VAR_STORYLINE_STATE) > STORY_DEFEATED_GARBODOR);
}

void ZapCriteria_HackStarted(void)
{
    gSpecialVar_Result = (VarGet(VAR_LEAVERRA_FOREST_STATE) >= POST_HAVE_YOU_SEEN_THE_NEWS);
}

void ZapCriteria_HackStartedProgress(void)
{
    gSpecialVar_Result = FALSE;

    if (VarGet(VAR_LEAVERRA_FOREST_STATE) < POST_HAVE_YOU_SEEN_THE_NEWS)
        return;

    ZapCriteria_RegularZap();
}

void ZapCriteria_StartedNavalRaid(void)
{
    gSpecialVar_Result = VarGet(VAR_HALAI_ISLAND_STATE) >= START_SURVIVAL_CHANCE;
}

void ZapCriteria_FinishedNavalRaid(void)
{
    gSpecialVar_Result = VarGet(VAR_PLAYER_HOME_STATE) >= NEXT_DAY_CHAMPIONSHIP;
}

void ZapCriteria_TournamentStarted(void)
{
    gSpecialVar_Result = VarGet(VAR_STORYLINE_STATE) >= STORY_CHAMPIONSHIP_EXPLAINED;
}

void ZapCriteria_GroupStagesComplete(void)
{
    gSpecialVar_Result = VarGet(VAR_STORYLINE_STATE) >= STORY_GROUP_STATE_COMPLETE;
}

void ZapCriteria_BeforeFinals(void)
{
    gSpecialVar_Result = VarGet(VAR_STORYLINE_STATE) >= STORY_READY_FINALS;
}

void ZapCriteria_IsChampion(void)
{
    gSpecialVar_Result = (VarGet(VAR_STORYLINE_STATE) >= STORY_WON_FINALS);
}

void ZapCriteria_ZenzuBattle(void)
{
    gSpecialVar_Result = IsTrainerDiscovered(TRAINER_BAIYA_LETSGRABLUNCH);
}

void ZapCriteria_FoundHodouLeader(void)
{
    gSpecialVar_Result = VarGet(VAR_QUEST_RESTOREHODOUGYM) >= FOUND_HODOU_CITY_LEADER;
}

void ZapCriteria_FinishedZenzu(void)
{
    gSpecialVar_Result = IsQuestCompletedState(QUEST_RESTOREZENZUGYM);
}

void ZapCriteria_HasCompletedOneRestoration(void)
{
    gSpecialVar_Result = (VarGet(VAR_STORYLINE_STATE) > STORY_RESTORATION_1_COMPLETE);
}

void ZapCriteria_ArrivedSummonedArantraz(void)
{
    gSpecialVar_Result = VarGet(VAR_ARANTRAZ_STATE) >= POST_ARRIVE_ARANTRAZ;
}

void ZapCriteria_StartedHowDisappointing(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_HOWDISAPPOINTING) ||(IsQuestRewardState(QUEST_HOWDISAPPOINTING)) || (IsQuestCompletedState(QUEST_HOWDISAPPOINTING))) ;
}

void ZapCriteria_StartedManhunt(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_MANHUNT) ||(IsQuestRewardState(QUEST_MANHUNT)) || (IsQuestCompletedState(QUEST_MANHUNT))) ;
}

void ZapCriteria_TwoTideTakedown(void)
{
    u32 count = 0;

    if (IsQuestCompletedState(QUEST_MANHUNT))
        count++;

    if (IsQuestCompletedState(QUEST_HOWDISAPPOINTING))
        count++;

    if (IsQuestCompletedState(QUEST_LETSBURNTHISMOTHERDOWN))
        count++;

    gSpecialVar_Result = (count > 1);
}

void ZapCriteria_TideFinished(void)
{
    gSpecialVar_Result = VarGet(VAR_STORYLINE_STATE) >= STORY_THE_TIDE_FINISHED;
}

void ZapCriteria_GotWishTag(void)
{
    gSpecialVar_Result = VarGet(VAR_STORYLINE_STATE) >= STORY_RECIEVED_BAMBOO_STAR;
}

void ZapCriteria_VisitedTorgeot(void)
{
    gSpecialVar_Result = FlagGet(FLAG_VISITED_TORGEOT_CLIMB);
}

void ZapCriteria_MaskOffAssigned(void)
{
    gSpecialVar_Result = VarGet(VAR_MASK_OFF_STATE) > ASSIGNED_MASK_OFF;
}

void ZapCriteria_SpeechComplete(void)
{
    gSpecialVar_Result = VarGet(VAR_ARANTRAZ_STATE) > POST_SPEECHSPEECH;
}

void ZapCriteria_RaveComplete(void)
{
    gSpecialVar_Result = VarGet(VAR_WAREHOUSE_RAVE_STATE) > DEFEATED_KEIYING_WAREHOUSE;
}

void ZapCriteria_BodegaBurnout(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_WAREHOUSEWARFARE) ||(IsQuestRewardState(QUEST_WAREHOUSEWARFARE)) || (IsQuestCompletedState(QUEST_WAREHOUSEWARFARE))) ;
}

void ZapCriteria_EarthquakeHappened(void)
{
    gSpecialVar_Result = VarGet(VAR_HALAI_ISLAND_STATE) >= POST_EARTHQUAKE;
}

void ZapCriteria_TowerRaidStarted(void)
{
    gSpecialVar_Result = VarGet(VAR_TOWER_RAID_STATE) >= SEARCHING_RAMESH_HOUSE;
}

