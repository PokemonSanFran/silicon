#include "global.h"
#include "data.h"
#include "battle_setup.h"
#include "constants/items.h"
#include "berry.h"
#include "item.h"
#include "battle.h"
#include "random.h"
#include "give_native_item.h"
#include "constants/give_native_item.h"

//#define CMD_ARGS(...) const struct __attribute__((packed)) { u8 opcode; MEMBERS(__VA_ARGS__) const u8 nextInstr[0]; } *const cmd UNUSED = (const void *)gBattlescriptCurrInstr
#define NATIVE_ARGS(...) CMD_ARGS(void (*func)(void), ##__VA_ARGS__)

#define MEMBERS(...) VARARG_8(MEMBERS_, __VA_ARGS__)
#define MEMBERS_0()
#define MEMBERS_1(a) a;
#define MEMBERS_2(a, b) a; b;
#define MEMBERS_3(a, b, c) a; b; c;
#define MEMBERS_4(a, b, c, d) a; b; c; d;
#define MEMBERS_5(a, b, c, d, e) a; b; c; d; e;
#define MEMBERS_6(a, b, c, d, e, f) a; b; c; d; e; f;
#define MEMBERS_7(a, b, c, d, e, f, g) a; b; c; d; e; f; g;
#define MEMBERS_8(a, b, c, d, e, f, g, h) a; b; c; d; e; f; g; h;

static bool32 IsEnemyNative(void);
static u32 GetRandomNativeItemGroup(void);
static u32 GetNativeItemAmount(u32 firstIndex);
static void GetRandomItemIndexes(u32* firstIndex, u32* lastIndex);
static u32 GenerateItemsGroupAndRandomlyChooseItem(u32 firstIndex, u32 lastIndex);

static bool32 IsEnemyNative(void)
{
    return (
            gTrainers[GetCurrentDifficultyLevel()][gTrainerBattleParameter.params.opponentA].isNative ||
            ((gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) &&
             gTrainers[GetCurrentDifficultyLevel()][gTrainerBattleParameter.params.opponentB].isNative)
           );
}

static u32 GetRandomNativeItemGroup(void)
{
    u32 randNum = Random() % 16;

    return (randNum < 8) ? NATIVE_ITEM_GROUP_1 :
        (randNum < 12) ? NATIVE_ITEM_GROUP_2 :
        (randNum < 14) ? NATIVE_ITEM_GROUP_3 :
        (randNum < 15) ? NATIVE_ITEM_GROUP_4 :
        NATIVE_ITEM_GROUP_5;
}

static u32 GetNativeItemAmount(u32 firstIndex)
{
    u32 amount = 0;

    if (firstIndex == FIRST_MINT_INDEX)
        amount = (Random() % NATIVE_ITEM_AMOUNT_MAX);

    return amount + NATIVE_ITEM_AMOUNT_DEFAULT;
}

static void GetRandomItemIndexes(u32* firstIndex, u32* lastIndex)
{
    bool32 isBerry = ((Random() % 10) < NATIVE_ITEM_BERRY_THRESHOLD);

    *firstIndex = (isBerry) ? FIRST_BERRY_INDEX : FIRST_MINT_INDEX;
    *lastIndex = (isBerry) ? LAST_BERRY_INDEX : LAST_MINT_INDEX;
}

static u32 GenerateItemsGroupAndRandomlyChooseItem(u32 firstIndex, u32 lastIndex)
{
    u32 itemIndex, numItems = 0;
    u32 itemGroup = GetRandomNativeItemGroup();
    u32 itemsInGroup[NATIVE_ITEM_GROUP_SIZE_MAX] = {0};

    for(itemIndex = firstIndex; itemIndex <= lastIndex; itemIndex++)
        if (GetItemNativeGroup(itemIndex) == itemGroup)
            itemsInGroup[numItems++] = itemIndex;

    return itemsInGroup[Random() % numItems];
}

void BS_GetPrizeNativeItem(void)
{
    NATIVE_ARGS(const u8 *jumpInstr);
    u32 firstIndex, lastIndex, itemId, itemAmount;

    gBattlescriptCurrInstr = cmd->jumpInstr;

    if (!IsEnemyNative())
        return;

    GetRandomItemIndexes(&firstIndex, &lastIndex);

    itemAmount = GetNativeItemAmount(firstIndex);
    itemId = GenerateItemsGroupAndRandomlyChooseItem(firstIndex, lastIndex);

    if (itemId == ITEM_NONE)
        return;

    while (itemAmount > 0 && !CheckBagHasSpace(itemId, itemAmount))
        itemAmount--;

    if (itemAmount == 0)
        return;

    AddBagItem(itemId, itemAmount);
    PREPARE_ITEM_BUFFER(gBattleTextBuff1, itemId);
    gBattlescriptCurrInstr = cmd->nextInstr;
    // PSF TODO this should change to the plural version if itemAount is > 1
}
