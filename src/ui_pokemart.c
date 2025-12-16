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
#include "field_screen_effect.h"
#include "ui_shop.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/items.h"
#include "constants/party_menu.h"

// constants
#define TILE_TO_PIXELS(t)   ((t) ? ((t) * 8) : 1)
#define PIXELS_TO_TILES(p)  ((p) ? ((p) / 8) : 1)

#define SHOP_LEFT_ARROW_X  ((TILE_TO_PIXELS(3) + 3) + 4)
#define SHOP_LEFT_ARROW_Y  ((TILE_TO_PIXELS(4) + 7) + 8)

#define SHOP_RIGHT_ARROW_X ((TILE_TO_PIXELS(9) + 3) + 4)
#define SHOP_RIGHT_ARROW_Y ((TILE_TO_PIXELS(3) - 1) + 8)

#define SHOP_UP_ARROW_X    (TILE_TO_PIXELS(20) + 16)
#define SHOP_UP_ARROW_Y    (TILE_TO_PIXELS(0) + 0)

#define SHOP_DOWN_ARROW_X  SHOP_UP_ARROW_X
#define SHOP_DOWN_ARROW_Y  ((TILE_TO_PIXELS(11) + 4) + 8)

enum PokeMartInputs
{
    MART_INPUT_BUY = 0,
    MART_INPUT_SELL,
    MART_INPUT_QUIT,

    NUM_MART_INPUTS
};

// structs
struct PokeMartData
{
    union {
        u8 winId;
        u8 numRows;
    } misc;
    u8 row;
    s8 input;
};

// ram
static EWRAM_INIT struct PokeMartData sPokeMartData =
{
    .misc =
    {
        .winId = WINDOW_NONE,
    },
    .row = 0,
    .input = MART_INPUT_BUY,
};

// declarations
static void MartInterface_Open(void);

static void Task_MartInterface_Idle(u8);
static void Task_MartInterface_HandleBuyOrSell(u8);
static void Task_MartInterface_HandleQuit(u8);
static void Task_MartInterface_FadeIntoMenu(u8);
static void Task_MartReload_WaitForFade(u8);
static void Task_MartReload_Finish(u8);

static void CB2_MartMenu_OpenBuyMenu(void);
static void CB2_MartMenu_OpenSellMenu(void);
static void CB2_MartReload_ReturnToField(void);

static void FieldCB_MartReload_PrepareInterface(void);

static void MartHelper_UpdateFrontEnd(void);
static void MartHelper_GridInput(s32, s32);
static void MartHelper_LRInput(s32);

static u32 MartPurchase_GetTotalItemPrice(u16, u16);

static u32 MartGrid_GetNumberOfRows(void);
static void MartGrid_SetNumberOfRows(u32);
static u32 MartGrid_GetCurrentRow(void);
static void MartGrid_SetCurrentRow(u32);
static u32 MartGrid_GetSizeOfCurrentRow(void);

static void MartSprite_SetCategoryCursorCoord(u32);
static u32 MartSprite_GetCategoryCursorCoord(void);

static void SpriteCB_BuyIcon(struct Sprite *);
static void SpriteCB_UpArrow(struct Sprite *);
static void SpriteCB_DownArrow(struct Sprite *);
static void SpriteCB_LeftArrow(struct Sprite *);
static void SpriteCB_RightArrow(struct Sprite *);
static void SpriteCB_UpArrowSmall(struct Sprite *);
static void SpriteCB_DownArrowSmall(struct Sprite *);

// const data
static const u32 sPokeMart_ExtraTilemap[] = INCBIN_U32("graphics/ui_menus/mart/textbox.bin.smolTM");

static const struct ShopSpriteConfigs sPokeMartShopSprites[] =
{
    [SHOP_SPRITE_BUY_ICON] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/cursor.4bpp.smol"),
        .x = (TILE_TO_PIXELS(14)) + 16,
        .y = (TILE_TO_PIXELS(0)) + 16,
        .callback = SpriteCB_BuyIcon,
    },
    [SHOP_SPRITE_UP_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/arrow_up.4bpp.smol"),
        .x = SHOP_UP_ARROW_X,
        .y = SHOP_UP_ARROW_Y,
        .callback = SpriteCB_UpArrow,
    },
    [SHOP_SPRITE_DOWN_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/arrow_down.4bpp.smol"),
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
    [SHOP_SPRITE_RIGHT_ARROW] = // used for category selector
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/arrow_right.4bpp.smol"),
        .x = SHOP_RIGHT_ARROW_X,
        .y = SHOP_RIGHT_ARROW_Y,
        .callback = SpriteCB_RightArrow,
    },
    [SHOP_SPRITE_UP_ARROW_SMALL] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/arrow_up_small.4bpp.smol"),
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(11) + 2) + 4,
        .callback = SpriteCB_UpArrowSmall,
    },
    [SHOP_SPRITE_DOWN_ARROW_SMALL] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/arrow_down_small.4bpp.smol"),
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(13) + 6) + 4,
        .callback = SpriteCB_DownArrowSmall,
    },
};

static const struct ShopMenuConfigs sPokeMartShopConfigs =
{
    .sprites = sPokeMartShopSprites,
    .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/mart/bg.4bpp.smol"),
    .map = (const u32[])INCBIN_U32("graphics/ui_menus/mart/bg.bin.smolTM"),
    .mapBuy = (const u32[])INCBIN_U32("graphics/ui_menus/mart/bg.bin.smolTM"), // nothing happens
    .palette = (const u16[])INCBIN_U16("graphics/ui_menus/mart/bg.gbapal"),
    .categoryBlit = (const u8[])INCBIN_U8("graphics/ui_menus/mart/categories.4bpp"),
    .fontColors = (const u8[][3]){
        [SHOP_FNTCLR_PRIMARY]    = {TEXT_COLOR_TRANSPARENT,  15,   TEXT_COLOR_TRANSPARENT},
        [SHOP_FNTCLR_SECONDARY]  = {TEXT_COLOR_TRANSPARENT,   8,   TEXT_COLOR_TRANSPARENT},
    },

    .categoryCoords = (const u8[]){
        [SHOP_COORD_X]   = TILE_TO_PIXELS(10) + 2,
        [SHOP_COORD_Y]   = TILE_TO_PIXELS(2) + 3,
        [SHOP_COORD_PAD] = TILE_TO_PIXELS(3) + 2,
    },

    .itemIconCoords = (const u8[]){
        [SHOP_COORD_X]    = (TILE_TO_PIXELS(14) + 4) + 16,
        [SHOP_COORD_Y]    = (TILE_TO_PIXELS(0) + 3) + 16,
        [SHOP_COORD_PAD]  = TILE_TO_PIXELS(4),
        [SHOP_COORD_PAD2] = TILE_TO_PIXELS(4),
    },

    .totalShownItems = 4,
    .totalShownItemRows = 3,
    .totalShownCategories = 3,
    .gridMode = SHOP_GRID_VERTICAL,

    .handleFrontend = MartHelper_UpdateFrontEnd,
    .handleTotalPrice = MartPurchase_GetTotalItemPrice,
    .handleGrid = MartHelper_GridInput,
    .handleLR = MartHelper_LRInput,
};

static const struct MenuAction sPokeMart_MenuActions[] =
{
    [MART_INPUT_BUY]  = { COMPOUND_STRING("Buy"),     { .void_u8 = Task_MartInterface_HandleBuyOrSell } },
    [MART_INPUT_SELL] = { COMPOUND_STRING("Sell"),    { .void_u8 = Task_MartInterface_HandleBuyOrSell } },
    [MART_INPUT_QUIT] = { COMPOUND_STRING("See ya!"), { .void_u8 = Task_MartInterface_HandleQuit } }
};

// code
void OpenPokeMartWithinScript(struct ScriptContext *ctx)
{
    const u16 *products = (const u16 *)ScriptReadWord(ctx);

    MartInterface_Open();
}

static void MartInterface_Open(void)
{
    LockPlayerFieldControls();

    struct WindowTemplate winTemplate =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = GetMaxWidthInMenuTable(sPokeMart_MenuActions, ARRAY_COUNT(sPokeMart_MenuActions)),
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x8,
    };

    sPokeMartData.misc.winId = AddWindow(&winTemplate);

    SetStandardWindowBorderStyle(sPokeMartData.misc.winId, FALSE);
    PrintMenuTable(sPokeMartData.misc.winId, ARRAY_COUNT(sPokeMart_MenuActions), sPokeMart_MenuActions);
    InitMenuInUpperLeftCornerNormal(sPokeMartData.misc.winId, ARRAY_COUNT(sPokeMart_MenuActions), sPokeMartData.input);
    PutWindowTilemap(sPokeMartData.misc.winId);
    CopyWindowToVram(sPokeMartData.misc.winId, COPYWIN_MAP);

    CreateTask(Task_MartInterface_Idle, 0);
}

static void Task_MartInterface_Idle(u8 taskId)
{
    s8 input = Menu_ProcessInputNoWrap();

    switch (input)
    {
    case MENU_NOTHING_CHOSEN:
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        Task_MartInterface_HandleQuit(taskId);
        break;
    default:
        sPokeMartData.input = input;
        sPokeMart_MenuActions[input].func.void_u8(taskId);
        break;
    }
}

static void Task_MartInterface_HandleBuyOrSell(u8 taskId)
{
    FadeScreen(FADE_TO_BLACK, 0);
    gTasks[taskId].func = Task_MartInterface_FadeIntoMenu;
}

static void Task_MartInterface_HandleQuit(u8 taskId)
{
    ClearStdWindowAndFrameToTransparent(sPokeMartData.misc.winId, TRUE);
    RemoveWindow(sPokeMartData.misc.winId);

    UnlockPlayerFieldControls();
    ScriptContext_Enable();

    sPokeMartData.misc.winId = WINDOW_NONE;
    sPokeMartData.input = MART_INPUT_BUY;

    DestroyTask(taskId);
}

static void Task_MartInterface_FadeIntoMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        sPokeMartData.misc.winId = WINDOW_NONE;
        SetMainCallback2(sPokeMartData.input == MART_INPUT_BUY ? CB2_MartMenu_OpenBuyMenu : CB2_MartMenu_OpenSellMenu);
        DestroyTask(taskId);
    }
}

static void Task_MartReload_WaitForFade(u8 taskId)
{
    if (IsWeatherNotFadingIn())
    {
        DisplayItemMessageOnField(taskId, gText_AnythingElseICanHelp, Task_MartReload_Finish);
    }
}

static void Task_MartReload_Finish(u8 taskId)
{
    MartInterface_Open();
    DestroyTask(taskId);
}

static void CB2_MartMenu_OpenBuyMenu(void)
{
    ShopMenu_Init(&sPokeMartShopConfigs, NULL, CB2_MartReload_ReturnToField);
}

static void CB2_MartMenu_OpenSellMenu(void)
{
    GoToBagMenu(ITEMMENULOCATION_SHOP, POCKETS_COUNT, CB2_MartReload_ReturnToField);
}

static void CB2_MartReload_ReturnToField(void)
{
    gFieldCallback = FieldCB_MartReload_PrepareInterface;
    SetMainCallback2(CB2_ReturnToField);
}

static void FieldCB_MartReload_PrepareInterface(void)
{
    FadeInFromBlack();
    CreateTask(Task_MartReload_WaitForFade, 0);
}

static void MartHelper_UpdateFrontEnd(void)
{
    if (gMain.state)
    {
        DecompressDataWithHeaderVram(sPokeMart_ExtraTilemap, (void *)BG_SCREEN_ADDR(29));
    }

    FillWindowPixelRect(SHOP_WINDOW_MAIN, PIXEL_FILL(15),
                        TILE_TO_PIXELS(0), TILE_TO_PIXELS(18),
                        DISPLAY_WIDTH, TILE_TO_PIXELS(16));
}

static void MartHelper_GridInput(s32 vDelta, s32 hDelta)
{
    u32 trueIdx = ShopGrid_GetCurrentItemIndex();
    u32 numItems = gShopMenuDataPtr->categoryNumItems[ShopGrid_GetCurrentCategoryIndex()] - 1;
    u32 xGridIdx = ShopGrid_GetGridXCursor(), yGridIdx = ShopGrid_GetGridYCursor();
    bool32 scroll = (numItems + 1) > ShopConfig_GetTotalShownItemsOnScreen();

    MartGrid_SetNumberOfRows(numItems / ShopConfig_GetTotalShownItems());
    u32 rowIdx = MartGrid_GetCurrentRow(), numRows = MartGrid_GetNumberOfRows();

    if (vDelta != 0)
    {
        bool32 additiveDelta = ShopGrid_IsAdditiveDelta(vDelta);
        u32 halfScreen = ShopConfig_GetTotalShownItemRows() / 2;
        u32 finalHalfScreen = numRows - halfScreen;

        if (((rowIdx >= halfScreen && rowIdx < finalHalfScreen && additiveDelta)
         || (rowIdx > halfScreen && rowIdx <= finalHalfScreen && !additiveDelta))
         && scroll)
        {
            MartGrid_SetCurrentRow(rowIdx + vDelta);
            ShopGrid_SetFirstItemIndex(ShopGrid_GetFirstItemIndex() + vDelta);
            ShopGrid_SetGridYCursor(halfScreen);
        }
        else if (rowIdx >= numRows && additiveDelta)
        {
            MartGrid_SetCurrentRow(0);
            ShopGrid_SetFirstItemIndex(0);
            ShopGrid_SetGridYCursor(0);
        }
        else if (!rowIdx && !additiveDelta)
        {
            MartGrid_SetCurrentRow(numRows);
            if (scroll)
            {
                ShopGrid_SetFirstItemIndex(numRows - (ShopConfig_GetTotalShownItemRows() - 1));
            }

            u32 endYCursor = ShopConfig_GetTotalShownItemRows() - 1;

            if (numRows < endYCursor)
                endYCursor = numRows;

            ShopGrid_SetGridYCursor(endYCursor);
        }
        else
        {
            MartGrid_SetCurrentRow(rowIdx + vDelta);
            ShopGrid_SetGridYCursor(yGridIdx + vDelta);
        }
    }

    if (hDelta != 0)
    {
        bool32 additiveDelta = ShopGrid_IsAdditiveDelta(hDelta);
        u32 shownItems = MartGrid_GetSizeOfCurrentRow();

        if (xGridIdx >= shownItems && additiveDelta)
        {
            ShopGrid_SetGridXCursor(0);
        }
        else if (!xGridIdx && !additiveDelta)
        {
            ShopGrid_SetGridXCursor(shownItems);
        }
        else
        {
            ShopGrid_SetGridXCursor(xGridIdx + hDelta);
        }
    }

    // CURRENT ITEM
    xGridIdx = ShopGrid_GetGridXCursor(), yGridIdx = ShopGrid_GetGridYCursor(), rowIdx = MartGrid_GetCurrentRow();
    ShopGrid_SetCurrentItemIndex((rowIdx * ShopConfig_GetTotalShownItems()) + xGridIdx);

    // GLITCH ITEM FIXUP
    while (!ShopInventory_GetChosenItemId() || ShopInventory_GetChosenItemId() >= ITEMS_COUNT)
    {
        ShopGrid_SetCurrentItemIndex(ShopGrid_GetCurrentItemIndex() - 1);
        ShopGrid_SetGridXCursor(ShopGrid_GetGridXCursor() - 1);
    }

    if (trueIdx != ShopGrid_GetCurrentItemIndex())
    {
        PlaySE(SE_SELECT);
    }
}

static void MartHelper_LRInput(s32 delta)
{
    u32 trueIdx = ShopGrid_GetCurrentCategoryIndex();
    u32 numItems = gShopMenuDataPtr->numCategories - 1;
    u32 halfScreen = ShopConfig_GetTotalShownCategories() / 2;
    u32 finalHalfScreen = numItems - halfScreen;

    bool32 additiveDelta = ShopGrid_IsAdditiveDelta(delta);
    bool32 scroll = (numItems + 1) > ShopConfig_GetTotalShownCategories();

    if (((trueIdx >= halfScreen && trueIdx < finalHalfScreen && additiveDelta)
     || (trueIdx > halfScreen && trueIdx <= finalHalfScreen && !additiveDelta))
     && scroll)
    {
        ShopGrid_SetCurrentCategoryIndex(trueIdx + delta);
        ShopGrid_SetFirstCategoryIndex(ShopGrid_GetFirstCategoryIndex() + delta);
        MartSprite_SetCategoryCursorCoord(halfScreen);
    }
    else if (trueIdx >= numItems && additiveDelta)
    {
        ShopGrid_SetCurrentCategoryIndex(0);
        ShopGrid_SetFirstCategoryIndex(0);
        MartSprite_SetCategoryCursorCoord(0);
    }
    else if (!trueIdx && !additiveDelta)
    {
        ShopGrid_SetCurrentCategoryIndex(numItems);
        MartSprite_SetCategoryCursorCoord(ShopConfig_GetTotalShownItemRows() - 1);
        if (scroll)
        {
            ShopGrid_SetFirstCategoryIndex(numItems - (ShopConfig_GetTotalShownItemRows() - 1));
        }
    }
    else
    {
        ShopGrid_SetCurrentCategoryIndex(trueIdx + delta);
        MartSprite_SetCategoryCursorCoord(MartSprite_GetCategoryCursorCoord() + delta);
    }

    ShopGrid_ResetIndexes(SHOP_IDX_RESET_ITEM | SHOP_IDX_RESET_X_GRID | SHOP_IDX_RESET_Y_GRID);
    MartGrid_SetCurrentRow(0);

    if (trueIdx != ShopGrid_GetCurrentCategoryIndex())
    {
        PlaySE(SE_SUCCESS);
    }
}

static u32 MartPurchase_GetTotalItemPrice(u16 itemId, u16 quantity)
{
    return (quantity + 1) * GetItemPrice(itemId);
}

static u32 MartGrid_GetNumberOfRows(void)
{
    return sPokeMartData.misc.numRows;
}

static void MartGrid_SetNumberOfRows(u32 value)
{
    sPokeMartData.misc.numRows = value;
}

static u32 MartGrid_GetCurrentRow(void)
{
    return sPokeMartData.row;
}

static void MartGrid_SetCurrentRow(u32 value)
{
    sPokeMartData.row = value;
}

static u32 MartGrid_GetSizeOfCurrentRow(void)
{
    bool32 isLastRow = (MartGrid_GetCurrentRow() == MartGrid_GetNumberOfRows());
    u32 numItems = gShopMenuDataPtr->categoryNumItems[ShopGrid_GetCurrentCategoryIndex()];
    u32 shownItems = ShopConfig_GetTotalShownItems();
    u32 divisor = (numItems % shownItems);

    if (divisor && isLastRow)
    {
        return divisor - 1;
    }
    else
    {
        return shownItems - 1;
    }
}

static void MartSprite_SetCategoryCursorCoord(u32 y)
{
    struct Sprite *cursor = &gSprites[ShopSprite_GetSpriteId(SHOP_SPRITE_RIGHT_ARROW)];
    cursor->data[0] = y;
}

static u32 MartSprite_GetCategoryCursorCoord(void)
{
    struct Sprite *cursor = &gSprites[ShopSprite_GetSpriteId(SHOP_SPRITE_RIGHT_ARROW)];
    return cursor->data[0];
}

static void SpriteCB_BuyIcon(struct Sprite *sprite)
{
    u32 xCursor = ShopGrid_GetGridXCursor(),
        yCursor = ShopGrid_GetGridYCursor();

    u32 x = ShopConfig_GetTotalShownItems() * xCursor,
        y = (ShopConfig_GetTotalShownItemRows() * yCursor) + yCursor;

    sprite->x2 = TILE_TO_PIXELS(x);
    sprite->y2 = TILE_TO_PIXELS(y);
}

static void SpriteCB_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    u32 numItems = gShopMenuDataPtr->categoryNumItems[ShopGrid_GetCurrentCategoryIndex()];
    bool32 scroll = numItems > ShopConfig_GetTotalShownItemsOnScreen();

    sprite->invisible = (gShopMenuDataPtr->buyScreen
     || (scroll && sPokeMartData.row <= (ShopConfig_GetTotalShownItemRows() / 2))
     || !scroll);
}

static void SpriteCB_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    u32 finalHalfScreen = MartGrid_GetNumberOfRows() - (ShopConfig_GetTotalShownItemRows() / 2);
    u32 numItems = gShopMenuDataPtr->categoryNumItems[ShopGrid_GetCurrentCategoryIndex()];
    bool32 scroll = numItems > ShopConfig_GetTotalShownItemsOnScreen();

    sprite->invisible = (gShopMenuDataPtr->buyScreen
     || (scroll && sPokeMartData.row >= finalHalfScreen)
     || !scroll);
}

static void SpriteCB_LeftArrow(struct Sprite *sprite)
{
    sprite->invisible = TRUE;
}

static void SpriteCB_RightArrow(struct Sprite *sprite)
{
    u32 yIdx = sprite->data[0];

    sprite->y2 = (yIdx * 26);
    sprite->invisible = (gShopMenuDataPtr->buyScreen);
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
