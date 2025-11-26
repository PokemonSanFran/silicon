#ifndef GUARD_UI_INVENTORY
#define GUARD_UI_INVENTORY

#include "main.h"

void Task_OpenInventoryFromStartMenu(u8 taskId);
void Inventory_Init(MainCallback callback, u8 mode);
void TryToRemoveFavoriteItem(u8 pocketId, u8 itemIdx);
void CB2_ReturnToInventoryMenu(void);
void CB2_ReturnToInventoryBattleMenu(void);

struct StringList
{
    const u8 string[STRINGLIST_MAX_LENGHT];
};

//Needs to be optimized
struct NewInventoryData
{
    u8 numFavoriteItems[POCKETS_COUNT];
    u16 itemIdx;
    u8 pocketNum;
    u16 yFirstItem;
    u16 registeredItem[NUM_REGISTER_ITEMS];
};

#endif // GUARD_UI_INVENTORY
