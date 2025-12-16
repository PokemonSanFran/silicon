#include "global.h"
#include "ui_presto.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "money.h"
#include "palette.h"
#include "party_menu.h"
#include "region_map.h"
#include "random.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "trig.h"
#include "overworld.h"
#include "quests.h"
#include "quest_logic.h"
#include "event_data.h"
#include "ui_shop.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/items.h"
#include "constants/party_menu.h"

#define TILE_TO_PIXELS(t)   ((t) ? ((t) * 8) : 1)
#define PIXELS_TO_TILES(p)  ((p) ? ((p) / 8) : 1)

#define SHOP_LEFT_ARROW_X  ((TILE_TO_PIXELS(3) + 3) + 4)
#define SHOP_LEFT_ARROW_Y  ((TILE_TO_PIXELS(4) + 7) + 8)

#define SHOP_RIGHT_ARROW_X ((TILE_TO_PIXELS(8) + 1) + 4)
#define SHOP_RIGHT_ARROW_Y SHOP_LEFT_ARROW_Y

#define SHOP_UP_ARROW_X    (TILE_TO_PIXELS(15) + 16)
#define SHOP_UP_ARROW_Y    (TILE_TO_PIXELS(0) + 8)

#define SHOP_DOWN_ARROW_X  SHOP_UP_ARROW_X
#define SHOP_DOWN_ARROW_Y  ((TILE_TO_PIXELS(17) + 4) + 8)

#define TOTAL_SHOWN_PRESTO_ITEMS_PER_CATEGORIES 5
#define TOTAL_SHOWN_PRESTO_ITEM_ROWS            3
#define TOTAL_SHOWN_PRESTO_CATEGORIES           5

#define PRESTO_FEE_BASE_DRONE 50
#define PRESTO_FEE_RECOMMENDED_BOOST 2
#define PRESTO_FEE_SHARP_RISE_DISCOUNT 30

enum PrestoPriceTypes
{
    PRESTO_PRICE_ITEM,
    PRESTO_PRICE_DRONE,
    PRESTO_PRICE_FINAL,
};

enum PrestoShopTypes
{
    PRESTO_TYPE_APP,
    PRESTO_TYPE_TERMINAL,

    NUM_PRESTO_TYPES
};

static EWRAM_INIT u8 sPrestoItemIconSpriteId = SPRITE_NONE;

static u32 PrestoPurchase_GetDroneFee(void);
static u32 PrestoPurchase_GetItemPrice(u16, u16, enum PrestoPriceTypes);
static u32 PrestoPurchase_GetTotalItemPrice(u16, u16);

static void PrestoHelper_UpdateFrontEnd(void);
static enum PrestoShopTypes PrestoHelper_GetShopType(void);
static void PrestoHelper_GridInput(s32, s32);

static void SpriteCB_BuyIcon(struct Sprite *);
static void SpriteCB_UpArrow(struct Sprite *);
static void SpriteCB_DownArrow(struct Sprite *);
static void SpriteCB_LeftArrow(struct Sprite *);
static void SpriteCB_RightArrow(struct Sprite *);
static void SpriteCB_UpArrowSmall(struct Sprite *);
static void SpriteCB_DownArrowSmall(struct Sprite *);

static const u8 sOrderWindow[]         = INCBIN_U8("graphics/ui_menus/presto/orderwindow.4bpp");
static const u8 sItemSelector[]        = INCBIN_U8("graphics/ui_menus/presto/item_selector.4bpp");

static const struct ShopSpriteConfigs sPrestoShopSprites[] =
{
    [SHOP_SPRITE_BUY_ICON] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/buyicon.4bpp.smol"),
        .x = (TILE_TO_PIXELS(4) + 1) + 16,
        .y = (TILE_TO_PIXELS(3) - 1) + 16,
        .callback = SpriteCB_BuyIcon,
    },
    [SHOP_SPRITE_UP_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_up.4bpp.smol"),
        .x = SHOP_UP_ARROW_X,
        .y = SHOP_UP_ARROW_Y,
        .callback = SpriteCB_UpArrow,
    },
    [SHOP_SPRITE_DOWN_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_down.4bpp.smol"),
        .x = SHOP_DOWN_ARROW_X,
        .y = SHOP_DOWN_ARROW_Y,
        .callback = SpriteCB_DownArrow,
    },
    [SHOP_SPRITE_LEFT_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_left.4bpp.smol"),
        .x = SHOP_LEFT_ARROW_X,
        .y = SHOP_LEFT_ARROW_Y,
        .callback = SpriteCB_LeftArrow,
    },
    [SHOP_SPRITE_RIGHT_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_right.4bpp.smol"),
        .x = SHOP_RIGHT_ARROW_X,
        .y = SHOP_RIGHT_ARROW_Y,
        .callback = SpriteCB_RightArrow,
    },
    [SHOP_SPRITE_UP_ARROW_SMALL] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_up_small.4bpp.smol"),
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(11) + 2) + 4,
        .callback = SpriteCB_UpArrowSmall,
    },
    [SHOP_SPRITE_DOWN_ARROW_SMALL] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_down_small.4bpp.smol"),
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(13) + 6) + 4,
        .callback = SpriteCB_DownArrowSmall,
    },
};

static const struct ShopMenuConfigs sPrestoShopConfigs =
{
    .sprites = sPrestoShopSprites,
    .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/presto/tiles.4bpp.smol"),
    .map = (const u32[])INCBIN_U32("graphics/ui_menus/presto/tilemap.bin.smolTM"),
    .mapBuy = (const u32[])INCBIN_U32("graphics/ui_menus/presto/tilemap_buy.bin.smolTM"),
    .palette = (const u16[])INCBIN_U16("graphics/ui_menus/presto/palette.gbapal"),
    .categoryBlit = (const u8[])INCBIN_U8("graphics/ui_menus/presto/categories.4bpp"),
    .fontColors = (const u8[][3]){
        [SHOP_FNTCLR_PRIMARY]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,   TEXT_COLOR_TRANSPARENT},
        [SHOP_FNTCLR_SECONDARY]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,       TEXT_COLOR_TRANSPARENT},
    },

    .categoryCoords = (const u8[]){
        [SHOP_COORD_X]   = TILE_TO_PIXELS(0) + 3,
        [SHOP_COORD_Y]   = TILE_TO_PIXELS(2) + 0,
        [SHOP_COORD_PAD] = TILE_TO_PIXELS(3) + 2,
    },

    .itemIconCoords = (const u8[]){
        [SHOP_COORD_X]    = TILE_TO_PIXELS(6) + 6,
        [SHOP_COORD_Y]    = TILE_TO_PIXELS(5) + 6,
        [SHOP_COORD_PAD]  = TILE_TO_PIXELS(5) + 2,
        [SHOP_COORD_PAD2] = TILE_TO_PIXELS(5) + 4,
    },

    .totalShownItems = TOTAL_SHOWN_PRESTO_ITEMS_PER_CATEGORIES,
    .totalShownItemRows = TOTAL_SHOWN_PRESTO_ITEM_ROWS,
    .totalShownCategories = TOTAL_SHOWN_PRESTO_CATEGORIES,
    .gridMode = SHOP_GRID_HORIZONTAL,

    .handleFrontend = PrestoHelper_UpdateFrontEnd,
    .handleTotalPrice = PrestoPurchase_GetTotalItemPrice,
    .handleGrid = PrestoHelper_GridInput,
};

static const u8 sText_FirstRowName[]      = _("{STR_VAR_1}: {STR_VAR_2}");
static const u8 sText_ItemNameOwned[]     = _("{STR_VAR_1} - {STR_VAR_2} Owned");
static const u8 sText_ItemCost[]          = _("Item Cost:{CLEAR_TO 56}¥ {STR_VAR_1}");
static const u8 sText_DroneFee[]          = _("Drone Fee:{CLEAR_TO 56}¥ {STR_VAR_1}");
static const u8 sText_OrderTotal[]        = _("Order Total:{CLEAR_TO 56}¥ {STR_VAR_1}");
static const u8 sText_ItemPrice[]         = _("¥ {STR_VAR_1}");
static const u8 sText_DeliveryTo[]        = _("Delivery to {STR_VAR_1} ({STR_VAR_2})");

static const u8 sText_OrderDelivered[]    = _("Order Delivered!");
static const u8 sText_ThanksForBuying[]   = _("Thank you for your purchase!");
static const u8 sText_YouGot[]            = _("You got");
static const u8 sText_ItemNumber[]        = _("{STR_VAR_1} x{STR_VAR_2}");

void CB2_PrestoFromStartMenu(void)
{
    ShopMenu_Init(&sPrestoShopConfigs, NULL, CB2_StartMenu_ReturnToUI);
}

static void Task_WaitFadeAndOpenPrestoTerminal(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        ShopMenu_Init(&sPrestoShopConfigs, NULL, CB2_ReturnToFieldContinueScript);
        DestroyTask(taskId);
    }
}

void OpenPrestoTerminalWithinScript(struct ScriptContext *ctx)
{
    CreateTask(Task_WaitFadeAndOpenPrestoTerminal, 0);
}

static u32 PrestoPurchase_GetDroneFee(void)
{
    s32 discount = (HasPlayerJoinedTheTide()) ? 0 : PRESTO_FEE_SHARP_RISE_DISCOUNT;
    u32 recommended = (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_RECOMMENDED) ? PRESTO_FEE_RECOMMENDED_BOOST : 0;

    return (PRESTO_FEE_BASE_DRONE - discount) + recommended;
}

static u32 PrestoPurchase_GetItemPrice(u16 itemId, u16 quantity, enum PrestoPriceTypes type)
{
    u32 itemPrice = (quantity + 1) * GetItemPrice(itemId);
    u32 dronePrice = (itemPrice * PrestoPurchase_GetDroneFee()) / 100;
    u32 totalPrice = itemPrice + dronePrice;

    switch (type)
    {
    default:
        return 0;
    case PRESTO_PRICE_ITEM:
        return itemPrice;
        break;
    case PRESTO_PRICE_DRONE:
        return dronePrice;
        break;
    case PRESTO_PRICE_FINAL:
        return PrestoHelper_GetShopType() == PRESTO_TYPE_APP ? totalPrice : itemPrice;
        break;
    }

    return 0;
}

static u32 PrestoPurchase_GetTotalItemPrice(u16 itemId, u16 quantity)
{
    return PrestoPurchase_GetItemPrice(itemId, quantity, PRESTO_PRICE_FINAL);
}

static inline void PrestoBlit_SelectedItem(void)
{
    u32 trueColIdx = ShopGrid_GetGridXCursor();
    u32 x = (5 * trueColIdx) + 4, x2 = (2 * trueColIdx) + 2;
    u32 y = 4;

    BlitBitmapToWindow(SHOP_WINDOW_MAIN, sItemSelector,
                       TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), 32, 24);
}

static inline void PrestoPrint_Categories(void)
{
    u32 x = 4, y = 2;

    for (u32 i = 0; i < ShopConfig_GetTotalShownItemRows(); i++)
    {
        u32 trueRowIdx = ShopGrid_GetCurrentCategoryIndex();

        u32 row = (trueRowIdx + i) % gShopMenuDataPtr->numCategories;

        if (!i)
        {
            StringCopy(gStringVar1, gShopCategoryNames[ShopGrid_CategoryInRow(row)]);
            StringCopy(gStringVar2, GetItemName(ShopInventory_GetItemIdFromGrid(row, ShopGrid_GetCurrentItemIndex())));
            StringExpandPlaceholders(gStringVar4, sText_FirstRowName);
        }
        else
        {
            StringCopy(gStringVar4, gShopCategoryNames[ShopGrid_CategoryInRow(row)]);
        }

        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW,
                                TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y) + (i * 4),
                                SHOP_FNTCLR_SECONDARY, gStringVar4);

        y += 5;
    }
}

static inline void PrestoPrint_ItemPrice(void)
{
    u32 x = 20, y = 2;
    u32 itemId = ShopInventory_GetChosenItemId();
    u32 price = GetItemPrice(itemId);

    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Price: "));
    ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, gStringVar4);

    u8 *strVar1 = StringCopy(gStringVar1, COMPOUND_STRING("¥ "));
    ConvertIntToDecimalStringN(strVar1, price, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    u32 fontId = GetFontIdToFit(gStringVar1, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(29));

    ShopPrint_AddTextPrinter(fontId, TILE_TO_PIXELS(x) + GetStringWidth(FONT_SMALL_NARROW, gStringVar4, 0), TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, gStringVar1);
}

static void PrestoHelper_UpdateFrontEnd(void)
{
    u32 x, y, x2;

    if (!gShopMenuDataPtr->buyScreen)
    {
        if (sPrestoItemIconSpriteId != SPRITE_NONE)
        {
            gSprites[sPrestoItemIconSpriteId].invisible = TRUE;
            DestroySprite(&gSprites[sPrestoItemIconSpriteId]);
            sPrestoItemIconSpriteId = SPRITE_NONE;
        }

        PrestoBlit_SelectedItem();
        PrestoPrint_Categories();
        PrestoPrint_ItemPrice();
    }
    else
    {
        u32 itemId = gShopMenuDataPtr->selectedItemId;

        if (sPrestoItemIconSpriteId == SPRITE_NONE)
        {
            x = 3, y = 6;

            u32 selectedSpriteIdx = ShopGrid_GetGridXCursor();
            u32 spriteId = AddItemIconSprite(selectedSpriteIdx, selectedSpriteIdx, itemId);

            gSprites[spriteId].x2 = TILE_TO_PIXELS(x);
            gSprites[spriteId].y2 = TILE_TO_PIXELS(y);
            gSprites[spriteId].oam.priority = 0;

            sPrestoItemIconSpriteId = spriteId;
        }

        x = 1, y = 2;
        u32 quantity = CountTotalItemQuantityInBag(itemId);
        StringCopy(gStringVar1, GetItemName(itemId));
        ConvertIntToDecimalStringN(gStringVar2, quantity, STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar4, sText_ItemNameOwned);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, gStringVar4);

        x = 25, y = 2;
        ConvertIntToDecimalStringN(gStringVar1, GetItemPrice(itemId), STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
        StringExpandPlaceholders(gStringVar4, sText_ItemPrice);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, gStringVar4);

        // why is this one use FONT_SHORT_COPY_3
        x = 5, y = 4;
        ShopPrint_AddTextPrinter(FONT_SHORT_COPY_3, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, GetItemDescription(itemId));

        x = 16, y = 10;
        quantity = (gShopMenuDataPtr->itemQuantity + 1) * GetItemPrice(itemId);
        ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
        StringExpandPlaceholders(gStringVar4, sText_ItemCost);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, gStringVar4);

        if (PrestoHelper_GetShopType() == PRESTO_TYPE_APP)
        {
            x = 16, y = 12;
            quantity = PrestoPurchase_GetItemPrice(itemId, gShopMenuDataPtr->itemQuantity, PRESTO_PRICE_DRONE);

            ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
            StringExpandPlaceholders(gStringVar4, sText_DroneFee);
            ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, gStringVar4);
        }

        x = 16, y = PrestoHelper_GetShopType() == PRESTO_TYPE_APP ? 14 : 12;
        quantity = ShopConfig_Get()->handleTotalPrice(itemId, gShopMenuDataPtr->itemQuantity);
        ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
        StringExpandPlaceholders(gStringVar4, sText_OrderTotal);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, gStringVar4);

        x = 12, y = 12;
        quantity = gShopMenuDataPtr->itemQuantity + 1;
        ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, 5);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, gStringVar1);

        x = 1, y = 16, x2 = 4;
        GetMapNameGeneric(gStringVar1, gMapHeader.regionMapSectionId);
        StringCopy_PlayerName(gStringVar2, gSaveBlock2Ptr->playerName);
        StringExpandPlaceholders(gStringVar4, sText_DeliveryTo);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, gStringVar4);

        if (gShopMenuDataPtr->buyWindow && !gShopMenuDataPtr->notEnoughMoneyWindow)
        {
            x = 5, y = 5;
            BlitBitmapToWindow(SHOP_WINDOW_MAIN, sOrderWindow, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), 152, 72);

            x = 6, y = 5, x2 = GetStringCenterAlignXOffset(FONT_NARROW, sText_OrderDelivered, TILE_TO_PIXELS(16));
            ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, sText_OrderDelivered);

            y += 2, x2 = GetStringCenterAlignXOffset(FONT_NARROW, sText_ThanksForBuying, TILE_TO_PIXELS(16));
            ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, sText_ThanksForBuying);

            y += 2, x2 = GetStringCenterAlignXOffset(FONT_NARROW, sText_YouGot, TILE_TO_PIXELS(16));
            ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, sText_YouGot);

            y += 2;
            StringCopy(gStringVar1, GetItemName(itemId));
            ConvertIntToDecimalStringN(gStringVar2, quantity, STR_CONV_MODE_LEFT_ALIGN, 2);
            StringExpandPlaceholders(gStringVar4, sText_ItemNumber);
            x2 = GetStringCenterAlignXOffset(FONT_NARROW, gStringVar4, TILE_TO_PIXELS(16));
            ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_PRIMARY, gStringVar4);
        }
        else if (!gShopMenuDataPtr->buyWindow && gShopMenuDataPtr->notEnoughMoneyWindow)
        {
            ShopPrint_AddTextPrinter(FONT_SMALL_NARROWER,
                                    TILE_TO_PIXELS(0) + 4, TILE_TO_PIXELS(18),
                                    SHOP_FNTCLR_SECONDARY,
                                    COMPOUND_STRING("Your account has been declined for insufficient funds!"));
        }
    }

    x = 19, y = 0;
    ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, COMPOUND_STRING("Money: "));

    u8 *strVar1 = StringCopy(gStringVar1, COMPOUND_STRING("¥ "));
    ConvertIntToDecimalStringN(strVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    x = GetStringRightAlignXOffset(FONT_SMALL_NARROW, gStringVar1, TILE_TO_PIXELS(29));

    ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, x, TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, gStringVar1);
}

static enum PrestoShopTypes PrestoHelper_GetShopType(void)
{
    if (gShopMenuDataPtr->savedCallback == CB2_ReturnToFieldContinueScript)
    {
        return PRESTO_TYPE_TERMINAL;
    }

    return PRESTO_TYPE_APP;
}

static void PrestoHelper_GridInput(s32 vDelta, s32 hDelta)
{
    if (vDelta != 0)
    {
        bool32 additiveDelta = ShopGrid_IsAdditiveDelta(vDelta);

        u32 trueIdx = ShopGrid_GetCurrentCategoryIndex();
        u32 numItems = gShopMenuDataPtr->numCategories - 1;
        u32 halfScreen = ShopConfig_GetTotalShownCategories() / 2;

        bool32 scroll = (numItems + 1) > ShopConfig_GetTotalShownCategories();
        u32 finalHalfScreen = numItems - halfScreen;

        u32 gridIdx = ShopGrid_GetGridYCursor();

        if (((trueIdx >= halfScreen && trueIdx < finalHalfScreen && additiveDelta)
         || (trueIdx > halfScreen && trueIdx <= finalHalfScreen && !additiveDelta))
         && scroll)
        {
            ShopGrid_SetCurrentCategoryIndex(trueIdx + vDelta);
            ShopGrid_SetFirstCategoryIndex(ShopGrid_GetFirstCategoryIndex() + vDelta);
            ShopGrid_SetGridYCursor(halfScreen);
        }
        else if (trueIdx >= numItems && additiveDelta)
        {
            ShopGrid_SetCurrentCategoryIndex(0);
            ShopGrid_SetFirstCategoryIndex(0);
            ShopGrid_SetGridYCursor(0);
        }
        else if (!trueIdx && !additiveDelta)
        {
            ShopGrid_SetCurrentCategoryIndex(numItems + vDelta);
            if (scroll)
                ShopGrid_SetFirstCategoryIndex(numItems - (ShopConfig_GetTotalShownItemRows() - 1) + vDelta);

            ShopGrid_SetGridYCursor(ShopConfig_GetTotalShownItemRows() - 1);
        }
        else
        {
            ShopGrid_SetCurrentCategoryIndex(trueIdx + vDelta);
            ShopGrid_SetGridYCursor(gridIdx + vDelta);
        }

        ShopGrid_ResetIndexes(SHOP_IDX_RESET_ITEM | SHOP_IDX_RESET_X_GRID);

        if (trueIdx != ShopGrid_GetCurrentCategoryIndex())
        {
            PlaySE(SE_SELECT);
        }

        DebugPrintf("firstIdx: %d", ShopGrid_GetFirstCategoryIndex());
    }

    if (hDelta != 0)
    {
        bool32 additiveDelta = ShopGrid_IsAdditiveDelta(hDelta);

        u32 halfScreen = ShopConfig_GetTotalShownItems() / 2;
        u32 categoryNumItems = gShopMenuDataPtr->categoryNumItems[ShopGrid_GetCurrentCategoryIndex()] - 1;
        u32 finalHalfScreen = categoryNumItems - halfScreen;

        u32 gridIdx = ShopGrid_GetGridXCursor();
        u32 trueIdx = ShopGrid_GetCurrentItemIndex();
        u32 shownItems = ShopConfig_GetTotalShownItems() - 1;

        if ((trueIdx >= halfScreen && trueIdx < finalHalfScreen && additiveDelta)
         || (trueIdx > halfScreen && trueIdx <= finalHalfScreen && !additiveDelta))
        {
            ShopGrid_SetGridXCursor(halfScreen);
            ShopGrid_SetCurrentItemIndex(trueIdx + hDelta);
            ShopGrid_SetFirstItemIndex(ShopGrid_GetFirstItemIndex() + hDelta);
        }
        else if (trueIdx >= categoryNumItems && additiveDelta)
        {
            ShopGrid_SetGridXCursor(0);
            ShopGrid_SetCurrentItemIndex(0);
            ShopGrid_SetFirstItemIndex(0);
        }
        else if (!trueIdx && !additiveDelta)
        {
            ShopGrid_SetGridXCursor(shownItems);
            ShopGrid_SetCurrentItemIndex(categoryNumItems);
            if (categoryNumItems > shownItems)
            {
                ShopGrid_SetFirstItemIndex(categoryNumItems - shownItems);
            }
        }
        else
        {
            ShopGrid_SetGridXCursor(gridIdx + hDelta);
            ShopGrid_SetCurrentItemIndex(trueIdx + hDelta);
        }

        if (trueIdx != ShopGrid_GetCurrentItemIndex())
        {
            PlaySE(SE_SELECT);
        }
    }
}

static void SpriteCB_BuyIcon(struct Sprite *sprite)
{
    u32 xCursor = ShopGrid_GetGridXCursor();
    u32 x = ShopConfig_GetTotalShownItems() * xCursor;
    u32 x2 = 3 * xCursor;

    if (xCursor)
    {
        x2 -= xCursor - 1;
    }

    sprite->x2 = TILE_TO_PIXELS(x) + x2;
    sprite->invisible = (gShopMenuDataPtr->buyScreen);
}

static void SpriteCB_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    sprite->invisible = (gShopMenuDataPtr->buyScreen || !ShopGrid_GetGridYCursor());
}

static void SpriteCB_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    sprite->invisible = (gShopMenuDataPtr->buyScreen
     || ShopGrid_GetGridYCursor() == ShopConfig_GetTotalShownCategories() - 1);
}

static void SpriteCB_LeftArrow(struct Sprite *sprite)
{
    u32 num = ShopGrid_GetGridXCursor();
    u32 x = (5 * num);
    u8 val = sprite->data[0] + 128;

    sprite->x = sprite->data[1] + TILE_TO_PIXELS(x) + (2 * num);
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    sprite->invisible = (gShopMenuDataPtr->buyScreen || !ShopGrid_GetGridXCursor());
}

static void SpriteCB_RightArrow(struct Sprite *sprite)
{
    u32 num = ShopGrid_GetGridXCursor();
    u32 x = (5 * num);
    u8 val = sprite->data[0];

    sprite->x = sprite->data[1] + TILE_TO_PIXELS(x) + (2 * num);
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    sprite->invisible = (gShopMenuDataPtr->buyScreen
     || ShopGrid_GetGridXCursor() == ShopConfig_GetTotalShownItems() - 1);
}

static void SpriteCB_UpArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->data[0];

    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;
    sprite->invisible = (!gShopMenuDataPtr->buyScreen
     || gShopMenuDataPtr->itemQuantity == (gShopMenuDataPtr->maxItemQuantity - 1)
     || (gShopMenuDataPtr->itemQuantity == 0 && gShopMenuDataPtr->maxItemQuantity == 0)
     || gShopMenuDataPtr->buyWindow);
}

static void SpriteCB_DownArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;

    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    sprite->invisible = (!gShopMenuDataPtr->buyScreen
     || gShopMenuDataPtr->itemQuantity == 0
     || gShopMenuDataPtr->buyWindow);
}
