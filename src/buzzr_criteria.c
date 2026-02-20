#include "global.h"
#include "battle.h"
#include "constants/trainers.h"
#include "battle_anim.h"
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

    if (steps == USHRT_MAX)
        return;

    VarSet(VAR_BUZZR_STEP_COUNTER,++steps);
}

static bool32 TweetCriteria_CheckSteps(u32 cost)
{
    u32 steps = VarGet(VAR_BUZZR_STEP_COUNTER);

    if (steps < cost)
        return FALSE;

    VarSet(VAR_BUZZR_STEP_COUNTER,(steps -= cost));
    return TRUE;
}

void TweetCriteria_AlwaysTrue(void)
{
    gSpecialVar_Result = TRUE;
}

void TweetCriteria_Quest_NPC_Rabies(void)
{
    TweetCriteria_AlwaysTrue();
}

static bool32 TweetCriteria_HasTalkedReporter(void)
{
    return (VarGet(VAR_QUEST_BREAKTHEINTERNET_STATE) > TALA_MENTIONED_REPORTER);
}

static bool32 TweetCriteria_SocialMedia(void)
{
    // PSF TODO is the rate at which social media quests unlocked good? They are basically all unlocked as soon as the quest starts, flooding the timeline. is that okay?
    bool32 talkedReporter = TweetCriteria_HasTalkedReporter();
    bool32 hasSteps = TweetCriteria_CheckSteps(TWEET_SOCIAL_MEDIA_STEPS);
    return (talkedReporter && hasSteps);
}

void TweetCriteria_Quest_NPC_Robbery(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Ice(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Deoxys(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Tunnels(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Freshwater(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Gem(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Quest_NPC_Stone(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_Gym_MermerezaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_MERMEREZA_CITY_BADGE);
}

void TweetCriteria_Gym_ToraTown_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_TORA_TOWN_BADGE);
}

void TweetCriteria_Gym_PerlaciaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_PERLACIA_CITY_BADGE);
}

void TweetCriteria_Gym_Chasilla_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_CHASILLA_BADGE);
}

void TweetCriteria_Gym_FortYobu_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_FORT_YOBU_BADGE);
}

void TweetCriteria_Gym_HalerbaCity_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_HALERBA_CITY_BADGE);
}

void TweetCriteria_Gym_TirabudinPlace_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_TIRABUDIN_PLACE_BADGE);
}

void TweetCriteria_Gym_IrisinaTown_Badge(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_GYM_IRISINA_TOWN_BADGE);
}

void TweetCriteria_Story_GRUNT_Restored(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_GRUNT_RESTORED);
}

void TweetCriteria_Story_Strike_Begin1(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_STRIKE_BEGIN_1);
}

void TweetCriteria_Story_Strike_Begin2(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_STRIKE_BEGIN_2);
}

void TweetCriteria_Story_Warehouse_Rave(void)
{
	gSpecialVar_Result = Buzzr_IsTweetRead(TWEET_STORY_WAREHOUSE_RAVE);
}

void TweetCriteria_StoryClear(void)
{
    gSpecialVar_Result = (VarGet(VAR_STORYLINE_STATE) >= STORY_CLEAR);
}

void TweetCriteria_IsCompulsiveHealingReward(void)
{
    gSpecialVar_Result = ((IsQuestRewardState(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP)) || (IsQuestCompletedState(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP)));
}

void TweetCriteria_IsRabiesComplete(void)
{
    gSpecialVar_Result = (IsQuestCompletedState(QUEST_RABIESOUTBREAK));
}

void TweetCriteria_IsSmoothieCraftingComplete(void)
{
    gSpecialVar_Result = (IsQuestCompletedState(QUEST_SMOOTHIECRAFTING));
}

void TweetCriteria_Quest_NPC_Psyop(void)
{
    gSpecialVar_Result = TweetCriteria_SocialMedia();
}

void TweetCriteria_IsPsyopComplete(void)
{
    gSpecialVar_Result = (IsQuestCompletedState(QUEST_PSYOP));
}

void TweetCriteria_IsPsyopActive(void)
{
    gSpecialVar_Result = (IsQuestActiveState(QUEST_PSYOP));
}
