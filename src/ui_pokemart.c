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

#define SHOP_RIGHT_ARROW_X ((TILE_TO_PIXELS(8) + 1) + 4)
#define SHOP_RIGHT_ARROW_Y SHOP_LEFT_ARROW_Y

#define SHOP_UP_ARROW_X    (TILE_TO_PIXELS(15) + 16)
#define SHOP_UP_ARROW_Y    (TILE_TO_PIXELS(0) + 8)

#define SHOP_DOWN_ARROW_X  SHOP_UP_ARROW_X
#define SHOP_DOWN_ARROW_Y  ((TILE_TO_PIXELS(17) + 4) + 8)

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
    u8 windowId;
    s8 input;
};

// ram
static EWRAM_INIT struct PokeMartData sPokeMartData =
{
    .windowId = WINDOW_NONE,
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

static u32 MartPurchase_GetTotalItemPrice(u16, u16);

// const data
static const struct ShopSpriteConfigs sPokeMartShopSprites[] =
{
    [SHOP_SPRITE_BUY_ICON] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/cursor.4bpp.smol"),
        .x = (TILE_TO_PIXELS(4) + 1) + 16,
        .y = (TILE_TO_PIXELS(3) - 1) + 16,
    },
    [SHOP_SPRITE_UP_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_up.4bpp.smol"),
        .x = SHOP_UP_ARROW_X,
        .y = SHOP_UP_ARROW_Y,
    },
    [SHOP_SPRITE_DOWN_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_down.4bpp.smol"),
        .x = SHOP_DOWN_ARROW_X,
        .y = SHOP_DOWN_ARROW_Y,
    },
    [SHOP_SPRITE_LEFT_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_left.4bpp.smol"),
        .x = SHOP_LEFT_ARROW_X,
        .y = SHOP_LEFT_ARROW_Y,
    },
    [SHOP_SPRITE_RIGHT_ARROW] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_right.4bpp.smol"),
        .x = SHOP_RIGHT_ARROW_X,
        .y = SHOP_RIGHT_ARROW_Y,
    },
    [SHOP_SPRITE_UP_ARROW_SMALL] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_up_small.4bpp.smol"),
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(11) + 2) + 4,
    },
    [SHOP_SPRITE_DOWN_ARROW_SMALL] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_down_small.4bpp.smol"),
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(13) + 6) + 4,
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

    .categoryCoords = (const u8[]){
        [SHOP_COORD_X]   = TILE_TO_PIXELS(10) + 2,
        [SHOP_COORD_Y]   = TILE_TO_PIXELS(2) + 3,
        [SHOP_COORD_PAD] = TILE_TO_PIXELS(3) + 2,
    },

    .itemIconCoords = (const u8[]){
        [SHOP_COORD_X]    = TILE_TO_PIXELS(14) + 16,
        [SHOP_COORD_Y]    = TILE_TO_PIXELS(0) + 16,
        [SHOP_COORD_PAD]  = TILE_TO_PIXELS(5) + 2,
        [SHOP_COORD_PAD2] = TILE_TO_PIXELS(5) + 4,
    },

    .totalShownItems = 4,
    .totalShownItemRows = 1,
    .totalShownCategories = 3,
    .gridMode = SHOP_GRID_VERTICAL,

    .handleFrontend = MartHelper_UpdateFrontEnd,
    .handleTotalPrice = MartPurchase_GetTotalItemPrice,
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

    sPokeMartData.windowId = AddWindow(&winTemplate);

    SetStandardWindowBorderStyle(sPokeMartData.windowId, FALSE);
    PrintMenuTable(sPokeMartData.windowId, ARRAY_COUNT(sPokeMart_MenuActions), sPokeMart_MenuActions);
    InitMenuInUpperLeftCornerNormal(sPokeMartData.windowId, ARRAY_COUNT(sPokeMart_MenuActions), sPokeMartData.input);
    PutWindowTilemap(sPokeMartData.windowId);
    CopyWindowToVram(sPokeMartData.windowId, COPYWIN_MAP);

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
    ClearStdWindowAndFrameToTransparent(sPokeMartData.windowId, TRUE);
    RemoveWindow(sPokeMartData.windowId);

    UnlockPlayerFieldControls();
    ScriptContext_Enable();

    sPokeMartData.windowId = WINDOW_NONE;
    sPokeMartData.input = MART_INPUT_BUY;

    DestroyTask(taskId);
}

static void Task_MartInterface_FadeIntoMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
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

}

static u32 MartPurchase_GetTotalItemPrice(u16 itemId, u16 quantity)
{
    return (quantity + 1) * GetItemPrice(itemId);
}
