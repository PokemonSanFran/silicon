#ifndef GUARD_UI_SHOP_CRITERIAS_H
#define GUARD_UI_SHOP_CRITERIAS_H

#define WRITE_CRITERIA_GOAL_VAR(varId, varValue) ((varId << 16) | (varValue))
#define READ_CRITERIA_GOAL_VAR_ID(criteria) ((criteria) >> 16)
#define READ_CRITERIA_GOAL_VAR_VALUE(criteria) ((criteria) & 0xFFFF)

typedef bool32 (*ShopCriteriaFunc)(u16);

// available to purchase criterias in gItemsInfo
bool32 ShopCriteriaFunc_TotalBadges(u16);
bool32 ShopCriteriaFunc_QuestCompletion(u16);
bool32 ShopCriteriaFunc_FlagStatus(u16);
bool32 ShopCriteriaFunc_VarStatus(u16);
bool32 ShopCriteriaFunc_OneTimePurchase(u16);

#endif // GUARD_UI_SHOP_CRITERIAS_H
