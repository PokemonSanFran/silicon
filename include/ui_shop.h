#ifndef GUARD_UI_SHOP_H
#define GUARD_UI_SHOP_H

#include "main.h"
#include "sprite.h"
#include "constants/ui_shop.h"

extern const u8 *const gShopCategoryNames[NUM_SHOP_CATEGORIES];
extern struct ShopMenuData *gShopMenuDataPtr;

void ShopMenu_Init(const struct ShopMenuConfigs *, MainCallback);
void ShopHelper_SetMode(enum ShopMenuModes);
u32 ShopHelper_GetMode(void);
bool32 ShopHelper_IsProcessingPurchaseMode(void);
bool32 ShopHelper_IsPurchaseMode(void);
bool32 ShopHelper_IsPurchaseDone(void);
enum ShopMenuCategories ShopGrid_CategoryInRow(u8);
enum ShopMenuCategories ShopGrid_CurrentCategoryRow(void);
void ShopPrint_AddTextPrinter(u32, u32, u32, enum ShopMenuFontColors, const u8 *);
void ShopPrint_HelpBar(void);
const struct ShopMenuConfigs *ShopConfig_Get(void);
u8 ShopConfig_GetTotalShownItems(void);
u8 ShopConfig_GetTotalShownItemRows(void);
u8 ShopConfig_GetTotalShownCategories(void);
u8 ShopConfig_GetTotalShownItemsOnScreen(void);
const u8 *ShopConfig_GetFontColors(enum ShopMenuFontColors);
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
bool32 ShopGrid_IsAdditiveDelta(s32);
void ShopGrid_ResetIndexes(u32);
u32 ShopGrid_GetXHalfScreen(void);
u32 ShopGrid_GetYHalfScreen(void);
void ShopInventory_SetItemIdToGrid(u32, u32, u32);
u32 ShopInventory_GetItemIdFromGrid(u32, u32);
u32 ShopInventory_GetChosenItemId(void);
void ShopInventory_SetCategoryNumItems(u32, u32);
u32 ShopInventory_GetCategoryNumItems(u32);
bool32 ShopPurchase_IsCategoryOneTimePurchase(enum ShopMenuCategories);
u32 ShopSprite_GetSpriteId(enum ShopMenuSprites);
u32 ShopSprite_GetItemSpriteId(u32);
enum ShopMenuCarousels ShopInventory_GetRecommendedCarousel(void);
bool32 ShopInventory_IsItemUsefulInForest(u16);
bool32 ShopInventory_IsItemUsefulInWater(u16);
bool32 ShopInventory_IsItemUsefulInCave(u16);

#endif // GUARD_UI_SHOP_H
