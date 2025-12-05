#ifndef GUARD_UI_SHOP_H
#define GUARD_UI_SHOP_H

#include "main.h"

enum ShopMenuCategories
{
    SHOP_CATEGORY_BUY_AGAIN,
    SHOP_CATEGORY_RECOMMENDED,
    SHOP_CATEGORY_MEDICINE,
    SHOP_CATEGORY_POKE_BALLS,
    SHOP_CATEGORY_OTHER_ITEMS,
    SHOP_CATEGORY_POWER_UPS,
    SHOP_CATEGORY_BATTLE_ITEMS,
    SHOP_CATEGORY_BERRIES,
    SHOP_CATEGORY_TMS,
    SHOP_CATEGORY_TREASURES,
    SHOP_CATEGORY_MEGA_STONES,
    SHOP_CATEGORY_Z_CRYSTALS,

    NUM_SHOP_CATEGORIES,

    // shortcuts

    // Recommended/History items are dynamic categories.
    SHOP_CATEGORY_STATIC_START = SHOP_CATEGORY_MEDICINE,

    // Categories that can appear in the recommmended carousel.
    SHOP_CATEGORY_DEFAULT_CAROUSEL_START = SHOP_CATEGORY_STATIC_START,
    SHOP_CATEGORY_DEFAULT_CAROUSEL_END = SHOP_CATEGORY_BERRIES,

    SHOP_CATEGORY_FIELD_CAROUSEL_START = SHOP_CATEGORY_POKE_BALLS,
    SHOP_CATEGORY_FIELD_CAROUSEL_END = SHOP_CATEGORY_OTHER_ITEMS,
};

enum ShopMenuCarousels
{
    SHOP_CAROUSEL_NEED_TO_HEAL,
    SHOP_CAROUSEL_TOURNAMENT_PREP,
    SHOP_CAROUSEL_FOREST_EXPLORE,
    SHOP_CAROUSEL_CAVE_EXPLORE,
    SHOP_CAROUSEL_WATER_EXPLORE,
    SHOP_CAROUSEL_ROUTE_EXPLORE,
    SHOP_CAROUSEL_RANDOM,

    NUM_SHOP_CAROUSELS,
};

enum ShopMenuTypes
{
    SHOP_TYPE_PRESTO_APP,
    SHOP_TYPE_PRESTO_TERMINAL,
    SHOP_TYPE_POKEMART,

    NUM_SHOP_TYPES
};

#define WRITE_CRITERIA_GOAL_VAR(varId, varValue) ((varId << 16) | (varValue))
#define READ_CRITERIA_GOAL_VAR_ID(criteria) ((criteria) >> 16)
#define READ_CRITERIA_GOAL_VAR_VALUE(criteria) ((criteria) & 0xFFFF)

typedef bool32 (*ShopCriteriaFunc)(u16);

void ShopMenu_Init(enum ShopMenuTypes, MainCallback);

// available to purchase criterias in gItemsInfo
bool32 ShopCriteriaFunc_TotalBadges(u16);
bool32 ShopCriteriaFunc_QuestCompletion(u16);
bool32 ShopCriteriaFunc_FlagStatus(u16);
bool32 ShopCriteriaFunc_VarStatus(u16);
bool32 ShopCriteriaFunc_OneTimePurchase(u16);

#endif // GUARD_UI_SHOP_H
