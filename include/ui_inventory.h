#ifndef GUARD_UI_INVENTORY
#define GUARD_UI_INVENTORY

#include "task.h"

void Task_OpenInventoryFromStartMenu(u8 taskId);
void Inventory_Init(MainCallback callback, u8 mode);
void CB2_ReturnToInventoryMenu(void);
void CB2_ReturnToInventoryBattleMenu(void);
void RemoveEmptyRegisteredItems(void);
void CB2_InventoryFromStartMenu(void);
bool8 isCurrentItemFavorite(void);
void SiliconInventoryPrintMessage(u8 taskId, u8 fontId, const u8 *str, TaskFunc callback);
void Task_Inventory_HandleMenuInput(u8 taskId);
void Inventory_RemoveMenu(u8 taskId);

struct StringList
{
    const u8 string[STRINGLIST_MAX_LENGHT];
};

#endif // GUARD_UI_INVENTORY
