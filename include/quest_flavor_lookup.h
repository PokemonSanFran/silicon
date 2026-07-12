#ifndef GUARD_QUEST_FLAVOR_LOOKUP
#define GUARD_QUEST_FLAVOR_LOOKUP

#include "constants/trainer_slide.h"

#define NUM_STRING_VARIABLES 4
#define QUEST_FLAVOR_TEXT_CONDITION_MAX 10

const u8 *GetQuestDesc_PlayersAdventure(void);
const u8 *GetQuestDoneDesc_PlayersAdventure(void);
const u8 *GetQuestDesc_BringFruit(void);
const u8 *GetQuestDesc_RabiesOutbreak(void);
const u8 *GetQuestDesc_BetweenAStoneAndAHardPlace(void);
const u8 *GetQuestDesc_FreshwaterEvolution(void);
const u8 *GetQuestDesc_SmoothieCrafting(void);
const u8 *GetQuestDesc_Hodoutunnels(void);
const u8 *GetQuestDesc_Psyop(void);
const u8 *GetQuestDesc_RockCollector(void);
const u8 *GetQuestDesc_BodegaBurnout(void);
const u8 *GetQuestDesc_GetTheBandBackTogether(void);
const u8 *GetQuestDesc_RestaurantExpansion1(void);
const u8 *GetQuestDesc_Freetheinnocent(void);
const u8 *GetQuestDesc_RestoreEspuleeOutskirts(void);
const u8 *GetQuestDesc_Improvbattling(void);
const u8 *GetQuestDesc_Teachatrainertofish(void);
const u8 *GetQuestDesc_Wildfirerisk(void);
const u8 *GetQuestDesc_Hang20(void);
const u8 *GetQuestDesc_CulturalPurity(void);
const u8 *GetQuestDesc_HybridCulture(void);
const u8 *GetQuestDesc_InstallNatureProbes(void);
const u8 *GetQuestDesc_Manhunt(void);
const u8 *GetQuestDesc_HowDisappointing(void);
const u8 *GetQuestDesc_Letsburnthismotherdown(void);

struct TextComponent
{
    const enum QuestFlavorGetNameType textTargetType;
    const u32 textTargetValue;
};

struct TextCondition
{
    const u32 targetValue;
    const u32 dataAddress;
    const enum QuestFlavorDataType dataType;
    const enum ComparisonOperators compareOp;
};

struct PlayerAdventureText
{
    const u8 *text;
    const struct TextComponent textComponent[NUM_STRING_VARIABLES];
    const struct TextCondition textCondition[QUEST_FLAVOR_TEXT_CONDITION_MAX];
};

#endif // GUARD_QUEST_FLAVOR_LOOKUP
