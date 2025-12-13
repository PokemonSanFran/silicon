#ifndef GUARD_UI_SHOP_H
#define GUARD_UI_SHOP_H

#include "main.h"
#include "constants/ui_shop.h"

extern const u8 *const gShopCategoryNames[NUM_SHOP_CATEGORIES];
extern struct ShopMenuData *gShopMenuDataPtr;

void ShopMenu_Init(const struct ShopMenuConfigs *, const u16 *, MainCallback);
enum ShopMenuCategories ShopGrid_CategoryInRow(u8);
enum ShopMenuCategories ShopGrid_CurrentCategoryRow(void);
void ShopPrint_AddTextPrinter(u32, u32, u32, enum ShopMenuFontColors, const u8 *);
const struct ShopMenuConfigs *ShopConfig_Get(void);
u8 ShopConfig_GetTotalShownItems(void);
u8 ShopConfig_GetTotalShownItemRows(void);
u8 ShopConfig_GetTotalShownCategories(void);
u8 ShopConfig_GetTotalShownItemsOnScreen(void);
void ShopGrid_SetGridXCursor(u32);
u32 ShopGrid_GetGridXCursor(void);
void ShopGrid_SetGridYCursor(u32);
u32 ShopGrid_GetGridYCursor(void);
void ShopGrid_SetCurrentCategoryIndex(u32);
void ShopGrid_SetFirstCategoryIndex(u32);
u32 ShopGrid_GetCurrentCategoryIndex(void);
u32 ShopGrid_GetFirstCategoryIndex(void);
void ShopGrid_SetCurrentItemIndex(u32);
void ShopGrid_SetFirstItemIndex(u32);
u32 ShopGrid_GetCurrentItemIndex(void);
u32 ShopGrid_GetFirstItemIndex(void);
u32 ShopInventory_GetItemIdFromGrid(u32, u32);
u32 ShopInventory_GetChosenItemId(void);

#endif // GUARD_UI_SHOP_H
