#ifndef GUARD_UI_INVENTORY
#define GUARD_UI_INVENTORY

void Task_OpenInventoryFromStartMenu(u8 taskId);
void Inventory_Init(MainCallback callback, u8 mode);
//void TryToRemoveFavoriteItem(u8 pocketId, u8 itemIdx);
void CB2_ReturnToInventoryMenu(void);
void CB2_ReturnToInventoryBattleMenu(void);
void RemoveEmptyRegisteredItems(void);
void CB2_InventoryFromStartMenu(void);
bool8 isCurrentItemFavorite(void);

struct StringList
{
    const u8 string[STRINGLIST_MAX_LENGHT];
};

#endif // GUARD_UI_INVENTORY
