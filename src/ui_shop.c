#include "global.h"
#include "ui_shop.h"
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

#define PRESTO_FEE_BASE_DRONE 50
#define PRESTO_FEE_RECOMMENDED_BOOST 2
#define PRESTO_FEE_SHARP_RISE_DISCOUNT 30

#define SHOP_HORIZONTAL_INCREMENT_NUMBER 5

#define NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES 5
#define NUM_SHOP_CATEGORIES_ON_SCREEN 3
#define NUM_SHOP_ITEMS_PER_CATEGORIES 150
#define NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS 10

#define TOTAL_SHOP_ITEMS_ON_SCREEN 16
#define FIRST_ITEM_SPRITE_ID NUM_SHOP_SPRITES

#define SHOP_WINDOW_MAIN    (0)

enum ShopMenuSetupSteps
{
    SHOP_SETUP_RESET,
    SHOP_SETUP_BACKGROUNDS,
    SHOP_SETUP_GRAPHICS,
    SHOP_SETUP_WINDOWS,
    SHOP_SETUP_FRONT_END,
    SHOP_SETUP_FADE,

    SHOP_SETUP_FINISH
};

enum ShopMenuBackgrounds
{
    SHOP_BG_WINDOW,
    SHOP_BG_TILEMAP,

    NUM_SHOP_BGS
};

enum ShopMenuSprites
{
    SHOP_SPRITE_BUY_ICON_ID,
    SHOP_SPRITE_UP_ARROW,
    SHOP_SPRITE_DOWN_ARROW,
    SHOP_SPRITE_LEFT_ARROW,
    SHOP_SPRITE_RIGHT_ARROW,
    SHOP_SPRITE_UP_ARROW_SMALL,
    SHOP_SPRITE_DOWN_ARROW_SMALL,
    SHOP_SPRITE_BUY_ITEM_ICON,

    NUM_SHOP_SPRITES,
};

enum
{
    TAG_PRESTO_INTERFACE = 0x4200,
    TAG_BUY_ICON = TAG_PRESTO_INTERFACE,
    TAG_UP_ARROW,
    TAG_DOWN_ARROW,
    TAG_LEFT_ARROW,
    TAG_RIGHT_ARROW,
    TAG_UP_ARROW_SMALL,
    TAG_DOWN_ARROW_SMALL,
};

enum ShopMenuPrices
{
    SHOP_PRICE_ITEM,
    SHOP_PRICE_DRONE,
    SHOP_PRICE_FINAL,
};

enum ShopMenuFontColors
{
    SHOP_FNTCLR_BLACK,
    SHOP_FNTCLR_WHITE,
};

enum ShopMenuGraphicsType
{
    SHOP_GFX_TILES,
    SHOP_GFX_TILEMAP,
    SHOP_GFX_TILEMAP_BUY,
    SHOP_GFX_PALETTE,

    NUM_SHOP_GRAPHICS
};

// structs, typedefs

struct ShopMenuData
{
    enum ShopMenuTypes type;
    MainCallback savedCallback;
    u8 notEnoughMoneyWindow:1;
    u8 sortCategories:1;
    u8 buyScreen:1;
    u8 buyWindow:1;
    u8 pad:4;
    struct UCoords8 currIdx, firstIdx;
    u16 itemQuantity;
    u16 maxItemQuantity;
    u16 categoryItems[NUM_SHOP_CATEGORIES][NUM_SHOP_ITEMS_PER_CATEGORIES];
    u16 recommendedItems[NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS];
    u8 categoryNumItems[NUM_SHOP_CATEGORIES];
    u32 selectedItemId;
    enum ShopMenuCategories shownCategories[NUM_SHOP_CATEGORIES];
    u16 numCategories;
    u8 spriteIds[TOTAL_SHOP_ITEMS_ON_SCREEN + FIRST_ITEM_SPRITE_ID];
    u8 *tilemapBuf;
};

struct ShopSprite
{
    u32 idx, tileTag, priority, size;
    u32 spriteShape:2;
    u32 spriteSize:2;
    const u32 *gfx;
    SpriteCallback cb;
    s16 x, y;
};

// ram
static EWRAM_DATA struct ShopMenuData *sShopMenuDataPtr = NULL;

// declarations
static void CB2_ShopSetup(void);
static void CB2_ShopMenu(void);
static void VBlankCB_ShopMenu(void);

static void ShopSetup_Backgrounds(void);
static void ShopSetup_Graphics(void);
static void ShopSetup_Windows(void);

static void ShopHelper_UpdateFrontEnd(void);
static void ShopHelper_BailExit(void);
static void ShopHelper_FreeResources(void);

static void Task_Shop_WaitFadeInAndGoIdle(u8);
static void Task_Shop_WaitFadeAndExit(u8);
static void Task_Shop_Idle(u8);

static void SpriteCB_BuyIcon(struct Sprite *);
static void SpriteCB_UpArrow(struct Sprite *);
static void SpriteCB_DownArrow(struct Sprite *);
static void SpriteCB_LeftArrow(struct Sprite *);
static void SpriteCB_RightArrow(struct Sprite *);
static void SpriteCB_UpArrowSmall(struct Sprite *);
static void SpriteCB_DownArrowSmall(struct Sprite *);

static void ShopSprite_CreateGenericSprites(void);
static void ShopSprite_CreateItemSprite(u16, u8, u8, u8);
static void ShopSprite_CreateItemSprites(void);
static void ShopSprite_DestroyItemSprites(void);
static void ShopSprite_ToggleItemIconsVisibility(void);

static void ShopInventory_InitCategoryLists(void);
static void ShopInventory_InitRecommendedList(void);
static enum ShopMenuCarousels ShopInventory_GetRecommendedCarousel(void);
static u32 ShopInventory_IsItemRecommended(u16);
static bool32 ShopInventory_IsPlayerWithinAForest(void);
static bool32 ShopInventory_IsPlayerOnWater(void);
static bool32 ShopInventory_IsPlayerWithinARoute(void);
static bool32 ShopInventory_IsPlayerInsideACave(void);
static bool32 ShopInventory_IsItemUsefulInForest(u16);
static bool32 ShopInventory_IsItemUsefulInWater(u16);
static bool32 ShopInventory_IsItemUsefulInCave(u16);

static void ShopPurchase_CalculateMaxQuantity(void);
static bool32 ShopPurchase_IsCategoryOneTimePurchase(enum ShopMenuCategories);
static u32 ShopPurchase_GetDroneFee(void);
static u32 ShopPurchase_GetItemPriceByType(u8, u16, enum ShopMenuPrices);
static void ShopPurchase_AddItem(u16, u8);

static enum ShopMenuCategories ShopGrid_CategoryInRow(u8);
static enum ShopMenuCategories ShopGrid_CurrentCategoryRow(void);
static void ShopGrid_SwitchMode(void);
static void ShopGrid_DownInput(void);
static void ShopGrid_UpInput(void);
static void ShopGrid_RightInput(void);
static void ShopGrid_LeftInput(void);
static u32 ShopGrid_RowInCategory(enum ShopMenuCategories);

static void ShopBlit_Category(enum ShopMenuCategories, u32, u32);
static inline void ShopBlit_Categories(void);
static inline void ShopBlit_SelectedItem(void);

static inline void ShopPrint_AddTextPrinter(u32, u32, u32, enum ShopMenuFontColors, const u8 *);
static inline void ShopPrint_Categories(void);
static inline void ShopPrint_ItemPrice(void);
static inline void ShopPrint_HelpBar(void);

static const void *const ShopGraphics_GetByType(enum ShopMenuGraphicsType);

// const data
static const struct BgTemplate sShopBgTemplates[NUM_SHOP_BGS] =
{
    [SHOP_BG_WINDOW] =
    {
        .bg = SHOP_BG_WINDOW,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    [SHOP_BG_TILEMAP] =
    {
        .bg = SHOP_BG_TILEMAP,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    },
};

static const struct WindowTemplate sShopWindowTemplates[] =
{
    [SHOP_WINDOW_MAIN] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 20,
        .paletteNum = 0,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct {
    const u32 *tiles;
    const u32 *map, *mapBuy;
    const u16 *palette;
} sShopMenuGraphics[NUM_SHOP_TYPES] =
{
    [SHOP_TYPE_PRESTO_APP ... SHOP_TYPE_PRESTO_TERMINAL] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/presto/tiles.4bpp.smol"),
        .map = (const u32[])INCBIN_U32("graphics/ui_menus/presto/tilemap.bin.smolTM"),
        .mapBuy = (const u32[])INCBIN_U32("graphics/ui_menus/presto/tilemap_buy.bin.smolTM"),
        .palette = (const u16[])INCBIN_U16("graphics/ui_menus/presto/palette.gbapal"),
    },
};

static const u8 sShopGfx_PrestoCategories[] = INCBIN_U8("graphics/ui_menus/presto/categories.4bpp");
static const u8 sOrderWindow[]         = INCBIN_U8("graphics/ui_menus/presto/orderwindow.4bpp");
static const u8 sItemSelector[]        = INCBIN_U8("graphics/ui_menus/presto/item_selector.4bpp");

static const struct ShopSprite sShopSprites[] =
{
    [SHOP_SPRITE_BUY_ICON_ID] =
    {
        .idx = SHOP_SPRITE_BUY_ICON_ID,
        .tileTag = TAG_BUY_ICON,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/buyicon.4bpp.smol"),
        .cb = SpriteCB_BuyIcon,
        .priority = 1,
        .spriteShape = SPRITE_SHAPE(32x16),
        .spriteSize = SPRITE_SIZE(32x16),
        .size = (32 * 16) / 2,
        .x = (TILE_TO_PIXELS(4) + 1) + 16,
        .y = (TILE_TO_PIXELS(4) + 7) + 8,
    },
    [SHOP_SPRITE_UP_ARROW] =
    {
        .idx = SHOP_SPRITE_UP_ARROW,
        .tileTag = TAG_UP_ARROW,
        .spriteShape = SPRITE_SHAPE(32x16),
        .spriteSize = SPRITE_SIZE(32x16),
        .priority = 1,
        .size = (32 * 16) / 2,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_up.4bpp.smol"),
        .cb = SpriteCB_UpArrow,
        .x = SHOP_UP_ARROW_X,
        .y = SHOP_UP_ARROW_Y,
    },
    [SHOP_SPRITE_DOWN_ARROW] =
    {
        .idx = SHOP_SPRITE_DOWN_ARROW,
        .tileTag = TAG_DOWN_ARROW,
        .spriteShape = SPRITE_SHAPE(32x16),
        .spriteSize = SPRITE_SIZE(32x16),
        .priority = 1,
        .size = (32 * 16) / 2,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_down.4bpp.smol"),
        .cb = SpriteCB_DownArrow,
        .x = SHOP_DOWN_ARROW_X,
        .y = SHOP_DOWN_ARROW_Y,
    },
    [SHOP_SPRITE_LEFT_ARROW] =
    {
        .idx = SHOP_SPRITE_LEFT_ARROW,
        .tileTag = TAG_LEFT_ARROW,
        .spriteShape = SPRITE_SHAPE(8x16),
        .spriteSize = SPRITE_SIZE(8x16),
        .priority = 1,
        .size = (8 * 16) / 2,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_left.4bpp.smol"),
        .cb = SpriteCB_LeftArrow,
        .x = SHOP_LEFT_ARROW_X,
        .y = SHOP_LEFT_ARROW_Y,
    },
    [SHOP_SPRITE_RIGHT_ARROW] =
    {
        .idx = SHOP_SPRITE_RIGHT_ARROW,
        .tileTag = TAG_RIGHT_ARROW,
        .spriteShape = SPRITE_SHAPE(8x16),
        .spriteSize = SPRITE_SIZE(8x16),
        .priority = 1,
        .size = (8 * 16) / 2,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_right.4bpp.smol"),
        .cb = SpriteCB_RightArrow,
        .x = SHOP_RIGHT_ARROW_X,
        .y = SHOP_RIGHT_ARROW_Y,
    },
    [SHOP_SPRITE_UP_ARROW_SMALL] =
    {
        .idx = SHOP_SPRITE_UP_ARROW_SMALL,
        .tileTag = TAG_UP_ARROW_SMALL,
        .spriteShape = SPRITE_SHAPE(16x8),
        .spriteSize = SPRITE_SIZE(16x8),
        .priority = 1,
        .size = (16 * 8) / 2,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_up_small.4bpp.smol"),
        .cb = SpriteCB_UpArrowSmall,
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(11) + 2) + 4,
    },
    [SHOP_SPRITE_DOWN_ARROW_SMALL] =
    {
        .idx = SHOP_SPRITE_DOWN_ARROW_SMALL,
        .tileTag = TAG_DOWN_ARROW_SMALL,
        .spriteShape = SPRITE_SHAPE(16x8),
        .spriteSize = SPRITE_SIZE(16x8),
        .priority = 1,
        .size = (16 * 8) / 2,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/presto/arrow_down_small.4bpp.smol"),
        .cb = SpriteCB_DownArrowSmall,
        .x = TILE_TO_PIXELS(12) + 8,
        .y = (TILE_TO_PIXELS(13) + 6) + 4,
    },
};

static const struct SpriteTemplate sShopSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_PRESTO_INTERFACE,
    .oam = &gDummyOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};


static const u8 sText_Help_Bar[]          = _("{DPAD_UPDOWN} Rows {DPAD_LEFTRIGHT} Items {A_BUTTON} Buy {B_BUTTON} Exit {START_BUTTON} Sort Rows");
static const u8 sText_Help_Bar_Buy[]      = _("{DPAD_UPDOWN} +1/-1 {DPAD_LEFTRIGHT} +5/-5 {A_BUTTON} Buy Now {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Complete[] = _("{A_BUTTON} Buy More {B_BUTTON} Return {START_BUTTON} Exit");
static const u8 sText_Money_Bar[]         = _("Money: ¥{STR_VAR_1}");
static const u8 sText_FirstRowName[]      = _("{STR_VAR_1}: {STR_VAR_2}");
static const u8 sText_ItemNameOwned[]     = _("{STR_VAR_1} - {STR_VAR_2} Owned");
static const u8 sText_ItemCost[]          = _("Item Cost:    ¥ {STR_VAR_1}");
static const u8 sText_DroneFee[]          = _("Drone Fee:    ¥ {STR_VAR_1}");
static const u8 sText_OrderTotal[]        = _("Order Total: ¥ {STR_VAR_1}");
static const u8 sText_ItemPrice[]         = _("¥ {STR_VAR_1}");
static const u8 sText_DeliveryTo[]        = _("Delivery to {STR_VAR_1} ({STR_VAR_2})");

static const u8 sText_OrderDelivered[]       = _("Order Delivered!");
static const u8 sText_ThanksForBuying[]      = _("Thank you for your purchase!");
static const u8 sText_YouGot[]               = _("You got");
static const u8 sText_ItemNumber[]           = _("{STR_VAR_1} x{STR_VAR_2}");

static const u8 sText_noEnoughMoney[]        = _("Your account has been declined for insufficient funds!");

static const u8 *const Presto_Rows[NUM_SHOP_CATEGORIES] =
{
    [SHOP_CATEGORY_BUY_AGAIN]    = COMPOUND_STRING("Buy Again"),
    [SHOP_CATEGORY_RECOMMENDED]  = COMPOUND_STRING("Recommended"),
    [SHOP_CATEGORY_MEDICINE]     = COMPOUND_STRING("Medicine"),
    [SHOP_CATEGORY_POKE_BALLS]   = COMPOUND_STRING("Pokeballs"),
    [SHOP_CATEGORY_OTHER_ITEMS]  = COMPOUND_STRING("Other Items"),
    [SHOP_CATEGORY_POWER_UPS]    = COMPOUND_STRING("Power-Ups"),
    [SHOP_CATEGORY_BATTLE_ITEMS] = COMPOUND_STRING("Battle Items"),
    [SHOP_CATEGORY_BERRIES]      = COMPOUND_STRING("Berries"),
    [SHOP_CATEGORY_TMS]          = COMPOUND_STRING("TMs"),
    [SHOP_CATEGORY_TREASURES]    = COMPOUND_STRING("Treasures"),
    [SHOP_CATEGORY_MEGA_STONES]  = COMPOUND_STRING("Mega Stones"),
    [SHOP_CATEGORY_Z_CRYSTALS]   = COMPOUND_STRING("Z-Crystals"),
};

static const u8 sMenuWindowFontColors[][3] =
{
    [SHOP_FNTCLR_BLACK]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,   TEXT_COLOR_TRANSPARENT},
    [SHOP_FNTCLR_WHITE]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,       TEXT_COLOR_TRANSPARENT},
};

// code

void ShopMenu_Init(enum ShopMenuTypes type, MainCallback callback)
{
    if ((sShopMenuDataPtr = AllocZeroed(sizeof(struct ShopMenuData))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sShopMenuDataPtr->savedCallback = callback;
    sShopMenuDataPtr->type = type;
    sShopMenuDataPtr->maxItemQuantity = 1;
    memset(sShopMenuDataPtr->spriteIds, SPRITE_NONE, (TOTAL_SHOP_ITEMS_ON_SCREEN + FIRST_ITEM_SPRITE_ID) * sizeof(u8));

    ShopInventory_InitCategoryLists();
    ShopInventory_InitRecommendedList();

    SetMainCallback2(CB2_ShopSetup);
}

static void CB2_ShopSetup(void)
{
    enum ShopMenuSetupSteps steps = gMain.state;

    switch (steps)
    {
    case SHOP_SETUP_RESET:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case SHOP_SETUP_BACKGROUNDS:
        ShopSetup_Backgrounds();
        gMain.state++;
        break;
    case SHOP_SETUP_GRAPHICS:
        ShopSetup_Graphics();
        gMain.state++;
        break;
    case SHOP_SETUP_WINDOWS:
        ShopSetup_Windows();
        gMain.state++;
        break;
    case SHOP_SETUP_FRONT_END:
        ShopSprite_CreateGenericSprites();
        ShopHelper_UpdateFrontEnd();
        gMain.state++;
        break;
    case SHOP_SETUP_FADE:
        CreateTask(Task_Shop_WaitFadeInAndGoIdle, 0);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case SHOP_SETUP_FINISH:
        SetVBlankCallback(VBlankCB_ShopMenu);
        SetMainCallback2(CB2_ShopMenu);
        return;
    default:
        DebugPrintf("ERROR! stuck at setup step: %d", steps);
        return;
    }
}

static void CB2_ShopMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_ShopMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void ShopSetup_Backgrounds(void)
{
    ResetAllBgsCoordinates();
    sShopMenuDataPtr->tilemapBuf = AllocZeroed(BG_SCREEN_SIZE);
    if (!sShopMenuDataPtr->tilemapBuf)
    {
        ShopHelper_BailExit();
        return;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sShopBgTemplates, NELEMS(sShopBgTemplates));
    SetBgTilemapBuffer(SHOP_BG_TILEMAP, sShopMenuDataPtr->tilemapBuf);
    ScheduleBgCopyTilemapToVram(SHOP_BG_TILEMAP);
    ShowBg(SHOP_BG_WINDOW);
    ShowBg(SHOP_BG_TILEMAP);
}

static void ShopSetup_Graphics(void)
{
    ResetTempTileDataBuffers();
    DecompressAndCopyTileDataToVram(SHOP_BG_TILEMAP, ShopGraphics_GetByType(SHOP_GFX_TILES), 0, 0, 0);
    DecompressDataWithHeaderWram(ShopGraphics_GetByType(SHOP_GFX_TILEMAP), sShopMenuDataPtr->tilemapBuf);
    LoadPalette(ShopGraphics_GetByType(SHOP_GFX_PALETTE), BG_PLTT_ID(0), PLTT_SIZE_4BPP);
}

static void ShopSetup_Windows(void)
{
    InitWindows(sShopWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(SHOP_WINDOW_MAIN, PIXEL_FILL(0));
    LoadUserWindowBorderGfx(SHOP_WINDOW_MAIN, 720, BG_PLTT_ID(14));
    PutWindowTilemap(SHOP_WINDOW_MAIN);
    CopyWindowToVram(SHOP_WINDOW_MAIN, COPYWIN_FULL);
}

static void ShopHelper_UpdateFrontEnd(void)
{
    u32 x, y, x2;

    FillWindowPixelBuffer(SHOP_WINDOW_MAIN, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (!sShopMenuDataPtr->buyScreen)
    {
        ShopBlit_Categories();
        ShopBlit_SelectedItem();
        ShopSprite_CreateItemSprites();
        ShopPrint_Categories();
        ShopPrint_ItemPrice();
    }
    else
    {
        u32 itemId = sShopMenuDataPtr->selectedItemId;

        if (sShopMenuDataPtr->spriteIds[SHOP_SPRITE_BUY_ITEM_ICON] == SPRITE_NONE)
        {
            x = 3, y = 6;

            u32 selectedSpriteIdx = FIRST_ITEM_SPRITE_ID + (sShopMenuDataPtr->currIdx.x - sShopMenuDataPtr->firstIdx.x);
            u32 spriteId = AddItemIconSprite(selectedSpriteIdx, selectedSpriteIdx, itemId);

            gSprites[spriteId].x2 = TILE_TO_PIXELS(x);
            gSprites[spriteId].y2 = TILE_TO_PIXELS(y);
            sShopMenuDataPtr->spriteIds[SHOP_SPRITE_BUY_ITEM_ICON] = spriteId;
        }

        x = 1, y = 2;
        u32 quantity = CountTotalItemQuantityInBag(itemId);
        StringCopy(gStringVar1, GetItemName(itemId));
        ConvertIntToDecimalStringN(gStringVar2, quantity, STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar4, sText_ItemNameOwned);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_WHITE, gStringVar4);

        x = 25, y = 2;
        ConvertIntToDecimalStringN(gStringVar1, ShopPurchase_GetItemPriceByType(0, itemId, SHOP_PRICE_ITEM), STR_CONV_MODE_LEFT_ALIGN, 6);
        StringExpandPlaceholders(gStringVar4, sText_ItemPrice);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_WHITE, gStringVar4);

        // why is this one use FONT_SHORT_COPY_3
        x = 5, y = 4;
        ShopPrint_AddTextPrinter(FONT_SHORT_COPY_3, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, GetItemDescription(itemId));

        x = 16, y = 10;
        quantity = ShopPurchase_GetItemPriceByType(sShopMenuDataPtr->itemQuantity, itemId, SHOP_PRICE_ITEM);
        ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, 6);
        StringExpandPlaceholders(gStringVar4, sText_ItemCost);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, gStringVar4);

        if (sShopMenuDataPtr->type == SHOP_TYPE_PRESTO_APP)
        {
            x = 16, y = 12;
            quantity = ShopPurchase_GetItemPriceByType(sShopMenuDataPtr->itemQuantity, itemId, SHOP_PRICE_DRONE);

            ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, 6);
            ConvertIntToDecimalStringN(gStringVar2, ShopPurchase_GetDroneFee(), STR_CONV_MODE_LEFT_ALIGN, 2);
            StringExpandPlaceholders(gStringVar4, sText_DroneFee);
            ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, gStringVar4);
        }

        x = 16, y = (sShopMenuDataPtr->type == SHOP_TYPE_PRESTO_APP) ? 14 : 12;
        quantity = ShopPurchase_GetItemPriceByType(sShopMenuDataPtr->itemQuantity, itemId, SHOP_PRICE_FINAL);
        ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, 6);
        StringExpandPlaceholders(gStringVar4, sText_OrderTotal);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, gStringVar4);

        x = 12, y = 12;
        quantity = sShopMenuDataPtr->itemQuantity + 1;
        ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, 5);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, gStringVar1);

        x = 1, y = 16, x2 = 4;
        GetMapNameGeneric(gStringVar1, gMapHeader.regionMapSectionId);
        StringCopy_PlayerName(gStringVar2, gSaveBlock2Ptr->playerName);
        StringExpandPlaceholders(gStringVar4, sText_DeliveryTo);
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, gStringVar4);

        if (sShopMenuDataPtr->buyWindow)
        {
            if (!sShopMenuDataPtr->notEnoughMoneyWindow)
            {
                x = 5, y = 5;
                BlitBitmapToWindow(SHOP_WINDOW_MAIN, sOrderWindow, TILE_TO_PIXELS(x), TILE_TO_PIXELS(y), 152, 72);

                x = 6, y = 5, x2 = GetStringCenterAlignXOffset(FONT_NARROW, sText_OrderDelivered, TILE_TO_PIXELS(16));
                ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_WHITE, sText_OrderDelivered);

                y += 2, x2 = GetStringCenterAlignXOffset(FONT_NARROW, sText_ThanksForBuying, TILE_TO_PIXELS(16));
                ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, sText_ThanksForBuying);

                y += 2, x2 = GetStringCenterAlignXOffset(FONT_NARROW, sText_YouGot, TILE_TO_PIXELS(16));
                ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, sText_YouGot);

                y += 2;
                StringCopy(gStringVar1, GetItemName(itemId));
                ConvertIntToDecimalStringN(gStringVar2, quantity, STR_CONV_MODE_LEFT_ALIGN, 2);
                StringExpandPlaceholders(gStringVar4, sText_ItemNumber);
                x2 = GetStringCenterAlignXOffset(FONT_NARROW, gStringVar4, TILE_TO_PIXELS(16));
                ShopPrint_AddTextPrinter(FONT_NARROW, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), SHOP_FNTCLR_BLACK, gStringVar4);
            }
        }
    }

    ShopPrint_HelpBar();

    x = 20, y = 0;
    ConvertIntToDecimalStringN(gStringVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_RIGHT_ALIGN, 6);
    StringExpandPlaceholders(gStringVar4, sText_Money_Bar);
    ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y), SHOP_FNTCLR_WHITE, gStringVar4);

    PutWindowTilemap(SHOP_WINDOW_MAIN);
    CopyWindowToVram(SHOP_WINDOW_MAIN, COPYWIN_FULL);

    sShopMenuDataPtr->notEnoughMoneyWindow = FALSE;
}

static void ShopHelper_BailExit(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_Shop_WaitFadeAndExit, 0);
    SetVBlankCallback(VBlankCB_ShopMenu);
    SetMainCallback2(CB2_ShopMenu);
}

static void ShopHelper_FreeResources(void)
{
    TRY_FREE_AND_SET_NULL(sShopMenuDataPtr->tilemapBuf);
    TRY_FREE_AND_SET_NULL(sShopMenuDataPtr);
    FreeAllWindowBuffers();
}

static void Task_Shop_WaitFadeInAndGoIdle(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_Shop_Idle;
    }
}

static void Task_Shop_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sShopMenuDataPtr->savedCallback);
        ShopHelper_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_Shop_Idle(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        if (!sShopMenuDataPtr->buyWindow)
        {
            if (sShopMenuDataPtr->buyScreen)
            {
                sShopMenuDataPtr->itemQuantity = 0;
                PlaySE(SE_SELECT);
                ShopGrid_SwitchMode();
                if (ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
                {
                    ShopInventory_InitCategoryLists();
                }

                ShopHelper_UpdateFrontEnd();
                return;
            }
            else
            {
                PlaySE(SE_PC_OFF);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_Shop_WaitFadeAndExit;
            }
        }
        else
        {
            sShopMenuDataPtr->itemQuantity = 0;
            sShopMenuDataPtr->buyWindow = FALSE;

            if (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_BUY_AGAIN
             || ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
            {
                ShopInventory_InitCategoryLists();
                sShopMenuDataPtr->currIdx.x = 0;
                sShopMenuDataPtr->firstIdx.x = 0;
            }

            ShopGrid_SwitchMode();
            sShopMenuDataPtr->selectedItemId = 0;
            PlaySE(SE_SELECT);

            ShopHelper_UpdateFrontEnd();
        }
    }

    if (JOY_NEW(A_BUTTON))
    {
        if (!sShopMenuDataPtr->buyScreen)
        {
            PlaySE(SE_SELECT);
            ShopGrid_SwitchMode();
        }
        else
        {
            if (sShopMenuDataPtr->buyWindow)
            {
                sShopMenuDataPtr->buyWindow = FALSE;
                sShopMenuDataPtr->itemQuantity = 0;

                if (ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
                {
                    ShopGrid_SwitchMode();
                    if (sShopMenuDataPtr->selectedItemId == ITEM_NONE)
                    {
                        sShopMenuDataPtr->firstIdx.y = 0;
                        sShopMenuDataPtr->currIdx.y = 0;
                    }

                    PlaySE(SE_SELECT);
                }
            }
            else
            {
                if (GetMoney(&gSaveBlock1Ptr->money) >= ShopPurchase_GetItemPriceByType(sShopMenuDataPtr->itemQuantity, sShopMenuDataPtr->selectedItemId, SHOP_PRICE_FINAL))
                {
                    ShopPurchase_AddItem(sShopMenuDataPtr->selectedItemId, sShopMenuDataPtr->itemQuantity);
                    PlaySE(SE_SHOP);
                }
                else
                {
                    sShopMenuDataPtr->notEnoughMoneyWindow = TRUE;
                    PlaySE(SE_FAILURE);
                }
            }
        }

        ShopHelper_UpdateFrontEnd();
    }

    if (JOY_NEW(START_BUTTON))
    {
        if (!sShopMenuDataPtr->buyScreen && !sShopMenuDataPtr->buyWindow)
        {
            sShopMenuDataPtr->sortCategories ^= 1;

            sShopMenuDataPtr->currIdx.x = 0;
            sShopMenuDataPtr->currIdx.y = 0;

            sShopMenuDataPtr->firstIdx.x = 0;
            sShopMenuDataPtr->firstIdx.y = 0;

            sShopMenuDataPtr->selectedItemId = 0;

            PlaySE(SE_SELECT);

            ShopInventory_InitCategoryLists();
            ShopHelper_UpdateFrontEnd();
        }
        else if (sShopMenuDataPtr->buyWindow)
        {
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_Shop_WaitFadeAndExit;
        }
    }

    // return early for menu that does not need the dpad.
    if (sShopMenuDataPtr->buyWindow)
    {
        return;
    }

    if (JOY_NEW(DPAD_UP))
    {
        ShopGrid_UpInput();
        PlaySE(SE_SELECT);

        ShopHelper_UpdateFrontEnd();
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        ShopGrid_DownInput();
        PlaySE(SE_SELECT);

        ShopHelper_UpdateFrontEnd();
    }

    if (JOY_NEW(DPAD_RIGHT))
    {
        ShopGrid_RightInput();
        PlaySE(SE_SELECT);

        ShopHelper_UpdateFrontEnd();
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        ShopGrid_LeftInput();
        PlaySE(SE_SELECT);

        ShopHelper_UpdateFrontEnd();
    }
}

static void SpriteCB_BuyIcon(struct Sprite *sprite)
{
    if (sShopMenuDataPtr->buyScreen)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        u32 num = (sShopMenuDataPtr->currIdx.x - sShopMenuDataPtr->firstIdx.x);
        u32 x = (NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES * num);
        u32 x2 = 3 * num;
        if (num)
        {
            x2 -= num - 1;
        }

        sprite->x2 = TILE_TO_PIXELS(x) + x2;
        sprite->invisible = FALSE;
    }
}

static void SpriteCB_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if (sShopMenuDataPtr->buyScreen
     || !sShopMenuDataPtr->currIdx.y)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

static void SpriteCB_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if (sShopMenuDataPtr->buyScreen
     || sShopMenuDataPtr->currIdx.y == sShopMenuDataPtr->numCategories - 1)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

static void SpriteCB_LeftArrow(struct Sprite *sprite)
{
    u32 num = (sShopMenuDataPtr->currIdx.x - sShopMenuDataPtr->firstIdx.x);
    u32 x = (5 * num);
    u8 val = sprite->data[0] + 128;

    sprite->x = SHOP_LEFT_ARROW_X + TILE_TO_PIXELS(x) + (2 * num);
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if (sShopMenuDataPtr->buyScreen || !sShopMenuDataPtr->currIdx.x)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

static void SpriteCB_RightArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    u32 num = (sShopMenuDataPtr->currIdx.x - sShopMenuDataPtr->firstIdx.x);
    u32 x = (5 * num);

    sprite->x = SHOP_RIGHT_ARROW_X + TILE_TO_PIXELS(x) + (2 * num);
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if (sShopMenuDataPtr->buyScreen
     || sShopMenuDataPtr->currIdx.x == sShopMenuDataPtr->categoryNumItems[sShopMenuDataPtr->currIdx.y] - 1)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

static void SpriteCB_UpArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->data[0];

    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if (!sShopMenuDataPtr->buyScreen
     || sShopMenuDataPtr->itemQuantity == (sShopMenuDataPtr->maxItemQuantity - 1)
     || sShopMenuDataPtr->buyWindow)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

static void SpriteCB_DownArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;

    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if (!sShopMenuDataPtr->buyScreen
     || sShopMenuDataPtr->itemQuantity == 0
     || sShopMenuDataPtr->buyWindow)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

static void ShopSprite_CreateGenericSprites(void)
{
    for (u32 i = 0; i < NELEMS(sShopSprites); i++)
    {
        struct ShopSprite const *template = &sShopSprites[i];

        struct SpriteTemplate spriteTemplate = sShopSpriteTemplate;

        if (template->gfx)
        {
            struct CompressedSpriteSheet sheet = { template->gfx, template->size, template->tileTag };

            LoadCompressedSpriteSheet(&sheet);
            spriteTemplate.tileTag = template->tileTag;
        }

        struct SpritePalette palette = { ShopGraphics_GetByType(SHOP_GFX_PALETTE), TAG_PRESTO_INTERFACE };
        LoadSpritePalette(&palette);

        struct OamData oamData = gDummyOamData;

        oamData.shape = template->spriteShape;
        oamData.size = template->spriteSize;
        oamData.priority = template->priority;

        spriteTemplate.oam = &oamData;
        spriteTemplate.callback = template->cb;

        if (!spriteTemplate.callback)
        {
            spriteTemplate.callback = SpriteCallbackDummy;
        }

        u32 spriteId = CreateSprite(&spriteTemplate, template->x, template->y, 0);
        sShopMenuDataPtr->spriteIds[template->idx] = spriteId;
    }
}

static void ShopSprite_CreateItemSprite(u16 itemId, u8 idx, u8 x, u8 y)
{
    u32 spriteIdx = FIRST_ITEM_SPRITE_ID + idx;

    if (sShopMenuDataPtr->spriteIds[spriteIdx] != SPRITE_NONE || (!itemId || itemId >= ITEMS_COUNT))
        return;

    u32 spriteId = AddItemIconSprite(spriteIdx, spriteIdx, itemId);
    gSprites[spriteId].x2 = x;
    gSprites[spriteId].y2 = y;
    sShopMenuDataPtr->spriteIds[spriteIdx] = spriteId;
}

static void ShopSprite_CreateItemSprites(void)
{
    u32 x = 6, y = 5;
    u32 x2 = 6, y2 = 6;

    u32 halfScreen = NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES / 2;
    u32 numCategories = sShopMenuDataPtr->numCategories - 1;
    u32 finalHalfScreen = numCategories - halfScreen;

    ShopSprite_DestroyItemSprites();

    for (u32 i = 0, temp = 0; i < NUM_SHOP_CATEGORIES_ON_SCREEN; i++)
    {
        u32 trueRowIdx = sShopMenuDataPtr->currIdx.y;
        if (sShopMenuDataPtr->currIdx.y > halfScreen && sShopMenuDataPtr->currIdx.y < finalHalfScreen)
        {
            trueRowIdx = sShopMenuDataPtr->firstIdx.y + halfScreen;
        }

        u32 row = (trueRowIdx + i) % sShopMenuDataPtr->numCategories;

        for (u32 j = 0; j < NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES; j++)
        {
            u32 idx = j;
            if (ShopGrid_CurrentCategoryRow() == ShopGrid_CategoryInRow(row))
            {
                idx += sShopMenuDataPtr->firstIdx.x;
            }

            ShopSprite_CreateItemSprite(sShopMenuDataPtr->categoryItems[row][idx], temp,
                             TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y) + y2);

            x += 5, x2 += 2;
            temp++;
        }

        x = 6, x2 = 6;
        y += 5, y2 += 4;
    }
}

static void ShopSprite_DestroyItemSprites(void)
{
    for (u32 i = 0; i < TOTAL_SHOP_ITEMS_ON_SCREEN; i++)
    {
        u32 idx = FIRST_ITEM_SPRITE_ID + i;

        if (sShopMenuDataPtr->spriteIds[idx] != SPRITE_NONE)
        {
            DestroySprite(&gSprites[sShopMenuDataPtr->spriteIds[idx]]);
            FreeSpritePaletteByTag(idx);
            FreeSpriteTilesByTag(idx);
            sShopMenuDataPtr->spriteIds[idx] = SPRITE_NONE;
        }
    }
}

static void ShopSprite_ToggleItemIconsVisibility(void)
{
    for (u32 i = 0; i < TOTAL_SHOP_ITEMS_ON_SCREEN; i++)
    {
        u32 spriteId = sShopMenuDataPtr->spriteIds[FIRST_ITEM_SPRITE_ID + i];
        if (spriteId != SPRITE_NONE)
        {
            gSprites[spriteId].invisible ^= 1;
        }
    }
}

static void ShopInventory_InitCategoryLists(void)
{
    memset(sShopMenuDataPtr->shownCategories, NUM_SHOP_CATEGORIES, NUM_SHOP_CATEGORIES * sizeof(enum ShopMenuCategories));
    memset(sShopMenuDataPtr->categoryNumItems, 0, NUM_SHOP_CATEGORIES * sizeof(u8));
    memset(sShopMenuDataPtr->categoryItems, ITEM_NONE, (NUM_SHOP_CATEGORIES * NUM_SHOP_ITEMS_PER_CATEGORIES) * sizeof(u16));

    enum ShopMenuCategories category = sShopMenuDataPtr->sortCategories ? SHOP_CATEGORY_STATIC_START : 0;
    u32 numCategories = 0;

    for (u32 idx = 0; category < NUM_SHOP_CATEGORIES; category++)
    {
        category %= NUM_SHOP_CATEGORIES;

        // Never accept Buy Again or Recommended categories when sorting.
        if (sShopMenuDataPtr->sortCategories && category < SHOP_CATEGORY_STATIC_START)
        {
            break;
        }

        for (u32 itemId = 0; itemId < ITEMS_COUNT; itemId++)
        {
            // Continue to the next category if the current category is full.
            if (sShopMenuDataPtr->categoryNumItems[idx] >= NUM_SHOP_ITEMS_PER_CATEGORIES)
            {
                sShopMenuDataPtr->categoryNumItems[idx] = NUM_SHOP_ITEMS_PER_CATEGORIES;
                continue;
            }

            if (category == SHOP_CATEGORY_BUY_AGAIN && gSaveBlock3Ptr->shopBuyAgainItems[0])
            {
                if (itemId >= MAX_PRESTO_BUY_AGAIN_ITEMS
                 || !gSaveBlock3Ptr->shopBuyAgainItems[sShopMenuDataPtr->categoryNumItems[idx]])
                {
                    break;
                }

                sShopMenuDataPtr->categoryItems[idx][sShopMenuDataPtr->categoryNumItems[idx]] = gSaveBlock3Ptr->shopBuyAgainItems[sShopMenuDataPtr->categoryNumItems[idx]];
                sShopMenuDataPtr->categoryNumItems[idx]++;
            }
            else if (category == SHOP_CATEGORY_RECOMMENDED)
            {
                if (itemId >= NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS)
                    break;

                sShopMenuDataPtr->categoryItems[idx][sShopMenuDataPtr->categoryNumItems[idx]] = sShopMenuDataPtr->recommendedItems[itemId];
                sShopMenuDataPtr->categoryNumItems[idx]++;
            }
            else if (category >= SHOP_CATEGORY_STATIC_START)
            {
                // Skip mismatching idx.
                if (GetItemShopCategory(itemId) != category)
                    continue;

                bool32 canBuy = TRUE;
                ShopCriteriaFunc func = GetItemShopCriteriaFunc(itemId);

                if (func != NULL)
                    canBuy = func(itemId);

                if (!ShopPurchase_GetItemPriceByType(0, itemId, SHOP_PRICE_ITEM))
                    canBuy = FALSE;

                if (canBuy)
                {
                    sShopMenuDataPtr->categoryItems[idx][sShopMenuDataPtr->categoryNumItems[idx]] = itemId;
                    sShopMenuDataPtr->categoryNumItems[idx]++;
                }
            }
        }

        if (sShopMenuDataPtr->categoryNumItems[idx] != 0)
        {
            sShopMenuDataPtr->shownCategories[numCategories] = category;
            numCategories++, idx++;
        }
    }

    sShopMenuDataPtr->numCategories = numCategories;
}

static void ShopInventory_InitRecommendedList(void)
{
    enum ShopMenuCarousels carousel = ShopInventory_GetRecommendedCarousel();

    for (u32 i = 0, randRow = 0, randItemNum = 0; i < NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS; i++)
    {
        switch (carousel)
        {
        case SHOP_CAROUSEL_NEED_TO_HEAL:
            do
            {
                randRow = ShopGrid_RowInCategory(SHOP_CATEGORY_MEDICINE);
                randItemNum = (Random() + i) % sShopMenuDataPtr->categoryNumItems[randRow];
                if (!ShopInventory_IsItemRecommended(sShopMenuDataPtr->categoryItems[randRow][randItemNum]))
                {
                    sShopMenuDataPtr->recommendedItems[i] = sShopMenuDataPtr->categoryItems[randRow][randItemNum];
                }
            }
            while (sShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        case SHOP_CAROUSEL_TOURNAMENT_PREP:
            do
            {
                randRow = ShopGrid_RowInCategory((Random() % 2) ? SHOP_CATEGORY_BATTLE_ITEMS : SHOP_CATEGORY_TMS);
                randItemNum = (Random() + i) % sShopMenuDataPtr->categoryNumItems[randRow];
                if (!ShopInventory_IsItemRecommended(sShopMenuDataPtr->categoryItems[randRow][randItemNum]))
                {
                    sShopMenuDataPtr->recommendedItems[i] = sShopMenuDataPtr->categoryItems[randRow][randItemNum];
                }
            }
            while (sShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        case SHOP_CAROUSEL_ROUTE_EXPLORE:
        case SHOP_CAROUSEL_FOREST_EXPLORE:
            do
            {
                randRow = (Random() % SHOP_CATEGORY_FIELD_CAROUSEL_END);
                // Prevent non-field rows.
                if (randRow < SHOP_CATEGORY_FIELD_CAROUSEL_START)
                    randRow += SHOP_CATEGORY_FIELD_CAROUSEL_START;

                randRow = ShopGrid_RowInCategory(randRow);
                randItemNum = (Random() + i) % sShopMenuDataPtr->categoryNumItems[randRow];

                if (ShopInventory_IsItemUsefulInForest(sShopMenuDataPtr->categoryItems[randRow][randItemNum])
                 && !ShopInventory_IsItemRecommended(sShopMenuDataPtr->categoryItems[randRow][randItemNum]))
                {
                    sShopMenuDataPtr->recommendedItems[i] = sShopMenuDataPtr->categoryItems[randRow][randItemNum];
                }
            }
            while (sShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        case SHOP_CAROUSEL_WATER_EXPLORE:
            do
            {
                randRow = (Random() % SHOP_CATEGORY_FIELD_CAROUSEL_END);
                // Prevent non-field rows.
                if (randRow < SHOP_CATEGORY_FIELD_CAROUSEL_START)
                    randRow += SHOP_CATEGORY_FIELD_CAROUSEL_START;

                randRow = ShopGrid_RowInCategory(randRow);
                randItemNum = (Random() + i) % sShopMenuDataPtr->categoryNumItems[randRow];

                if (ShopInventory_IsItemUsefulInWater(sShopMenuDataPtr->categoryItems[randRow][randItemNum])
                 && !ShopInventory_IsItemRecommended(sShopMenuDataPtr->categoryItems[randRow][randItemNum]))
                {
                    sShopMenuDataPtr->recommendedItems[i] = sShopMenuDataPtr->categoryItems[randRow][randItemNum];
                }
            }
            while (sShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        case SHOP_CAROUSEL_CAVE_EXPLORE:
            do
            {
                randRow = (Random() % SHOP_CATEGORY_FIELD_CAROUSEL_END);
                // Prevent non-field rows.
                if (randRow < SHOP_CATEGORY_FIELD_CAROUSEL_START)
                    randRow += SHOP_CATEGORY_FIELD_CAROUSEL_START;

                randRow = ShopGrid_RowInCategory(randRow);
                randItemNum = (Random() + i) % sShopMenuDataPtr->categoryNumItems[randRow];

                if (ShopInventory_IsItemUsefulInCave(sShopMenuDataPtr->categoryItems[randRow][randItemNum])
                 && !ShopInventory_IsItemRecommended(sShopMenuDataPtr->categoryItems[randRow][randItemNum]))
                {
                    sShopMenuDataPtr->recommendedItems[i] = sShopMenuDataPtr->categoryItems[randRow][randItemNum];
                }
            }
            while (sShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        default:
            do
            {
                randRow = (Random() % SHOP_CATEGORY_DEFAULT_CAROUSEL_END);
                // Prevent Recommended/Buy Again row.
                if (randRow < SHOP_CATEGORY_DEFAULT_CAROUSEL_START)
                    randRow += SHOP_CATEGORY_DEFAULT_CAROUSEL_START;

                randRow = ShopGrid_RowInCategory(randRow);
                randItemNum = (Random() + i) % sShopMenuDataPtr->categoryNumItems[randRow];

                if (!ShopInventory_IsItemRecommended(sShopMenuDataPtr->categoryItems[randRow][randItemNum]))
                {
                    sShopMenuDataPtr->recommendedItems[i] = sShopMenuDataPtr->categoryItems[randRow][randItemNum];
                }
            }
            while (sShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        }
    }

    ShopInventory_InitCategoryLists();
}

static enum ShopMenuCarousels ShopInventory_GetRecommendedCarousel(void)
{
    if (VarGet(VAR_STORYLINE_STATE) > STORY_COMPLETED_NAVAL_BASE
     && VarGet(VAR_STORYLINE_STATE) < STORY_EXPLORE_ZENZU_ISLAND)
    {
        return SHOP_CAROUSEL_TOURNAMENT_PREP;
    }

    u32 currentHP = 0, maxHP = 0, partyStatus = 0, partyHP = 0;
    u32 partySize = gPlayerPartyCount;

    // Merge all mon's hp in the party.
    for (u32 i = 0; i < partySize; i++)
    {
        currentHP += GetMonData(&gPlayerParty[i], MON_DATA_HP);
        maxHP += GetMonData(&gPlayerParty[i], MON_DATA_MAX_HP);
        u32 ailment = GetMonAilment(&gPlayerParty[i]);
        if (ailment != AILMENT_NONE && ailment != AILMENT_PKRS)
            partyStatus++;
    }

    partyStatus = 100 - ((partyStatus / partySize) * 100);
    partyHP = (currentHP / maxHP) * 100;

    if (partyHP < 26 || partyStatus < 33)
    {
        return SHOP_CAROUSEL_NEED_TO_HEAL;
    }

    if (ShopInventory_IsPlayerWithinAForest())
    {
        return SHOP_CAROUSEL_FOREST_EXPLORE;
    }

    if (ShopInventory_IsPlayerOnWater())
    {
        return SHOP_CAROUSEL_WATER_EXPLORE;
    }

    if (ShopInventory_IsPlayerWithinARoute())
    {
        return SHOP_CAROUSEL_ROUTE_EXPLORE;
    }

    if (ShopInventory_IsPlayerInsideACave())
    {
        return SHOP_CAROUSEL_CAVE_EXPLORE;
    }

    return SHOP_CAROUSEL_RANDOM;
}

static u32 ShopInventory_IsItemRecommended(u16 itemId)
{
    u32 ret = 0;

    for (u32 i = 0; i < NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS; i++)
    {
        if (sShopMenuDataPtr->recommendedItems[i] == itemId)
            ret++;
    }

    return ret;
}

// PSF TODO should these be determined by map type (e.g. MAP_TYPE_ROUTE) instead?

static bool32 ShopInventory_IsPlayerWithinAForest(void)
{
    s32 mapNum = gSaveBlock1Ptr->location.mapNum;
    s32 mapGroup = gSaveBlock1Ptr->location.mapGroup;

    return (mapNum == MAP_NUM(MAP_ROUTE22) && mapGroup == MAP_GROUP(MAP_ROUTE22))
        || (mapNum == MAP_NUM(MAP_ROUTE100) && mapGroup == MAP_GROUP(MAP_ROUTE100))
        || (mapNum == MAP_NUM(MAP_HALERBA_CITY) && mapGroup == MAP_GROUP(MAP_HALERBA_CITY))
        || (mapNum == MAP_NUM(MAP_ESPULEE_OUTSKIRTS) && mapGroup == MAP_GROUP(MAP_ESPULEE_OUTSKIRTS))
        || (mapNum == MAP_NUM(MAP_ROUTE18) && mapGroup == MAP_GROUP(MAP_ROUTE18));
}

static bool32 ShopInventory_IsPlayerOnWater(void)
{
    s32 mapNum = gSaveBlock1Ptr->location.mapNum;
    s32 mapGroup = gSaveBlock1Ptr->location.mapGroup;

    return (mapNum == MAP_NUM(MAP_NONGYU_BRIDGE) && mapGroup == MAP_GROUP(MAP_NONGYU_BRIDGE))
        || (mapNum == MAP_NUM(MAP_ROUTE20) && mapGroup == MAP_GROUP(MAP_ROUTE20))
        || (mapNum == MAP_NUM(MAP_ROUTE98) && mapGroup == MAP_GROUP(MAP_ROUTE98))
        || (mapNum == MAP_NUM(MAP_ROUTE_B) && mapGroup == MAP_GROUP(MAP_ROUTE_B));
    // PSF TODO Uncomment relevant lines when routes are created
    /*
        || (mapNum == MAP_NUM(MAP_ROUTE_D) && mapGroup == MAP_GROUP(MAP_ROUTE_D))
        || (mapNum == MAP_NUM(MAP_ROUTE_C) && mapGroup == MAP_GROUP(MAP_ROUTE_C))
        || (mapNum == MAP_NUM(MAP_ROUTE_A) && mapGroup == MAP_GROUP(MAP_ROUTE_A))
        || (mapNum == MAP_NUM(MAP_ROUTE_E) && mapGroup == MAP_GROUP(MAP_ROUTE_E));
    */
}

static bool32 ShopInventory_IsPlayerWithinARoute(void)
{
    s32 mapNum = gSaveBlock1Ptr->location.mapNum;
    s32 mapGroup = gSaveBlock1Ptr->location.mapGroup;

    return (mapNum == MAP_NUM(MAP_ROUTE11) && mapGroup == MAP_GROUP(MAP_ROUTE11))
        || (mapNum == MAP_NUM(MAP_ROUTE16) && mapGroup == MAP_GROUP(MAP_ROUTE16))
        || (mapNum == MAP_NUM(MAP_ROUTE4) && mapGroup == MAP_GROUP(MAP_ROUTE4))
        || (mapNum == MAP_NUM(MAP_ROUTE10) && mapGroup == MAP_GROUP(MAP_ROUTE10))
        || (mapNum == MAP_NUM(MAP_ROUTE8) && mapGroup == MAP_GROUP(MAP_ROUTE8))
        || (mapNum == MAP_NUM(MAP_PSFROUTE7E17FDD1) && mapGroup == MAP_GROUP(MAP_PSFROUTE7E17FDD1))
        || (mapNum == MAP_NUM(MAP_ROUTE14) && mapGroup == MAP_GROUP(MAP_ROUTE14))
        || (mapNum == MAP_NUM(MAP_ROUTE5) && mapGroup == MAP_GROUP(MAP_ROUTE5))
        || (mapNum == MAP_NUM(MAP_ROUTE6) && mapGroup == MAP_GROUP(MAP_ROUTE6))
        || (mapNum == MAP_NUM(MAP_ROUTE3) && mapGroup == MAP_GROUP(MAP_ROUTE3))
        || (mapNum == MAP_NUM(MAP_PSFROUTE9F45DA86) && mapGroup == MAP_GROUP(MAP_PSFROUTE9F45DA86))
        || (mapNum == MAP_NUM(MAP_ROUTE1) && mapGroup == MAP_GROUP(MAP_ROUTE1))
        || (mapNum == MAP_NUM(MAP_ROUTE2) && mapGroup == MAP_GROUP(MAP_ROUTE2))
        || (mapNum == MAP_NUM(MAP_SECRET_PATH) && mapGroup == MAP_GROUP(MAP_SECRET_PATH))
        || (mapNum == MAP_NUM(MAP_NONGYU_BRIDGE) && mapGroup == MAP_GROUP(MAP_NONGYU_BRIDGE))
        || (mapNum == MAP_NUM(MAP_ROUTE9) && mapGroup == MAP_GROUP(MAP_ROUTE9))
        || (mapNum == MAP_NUM(MAP_ROUTE7) && mapGroup == MAP_GROUP(MAP_ROUTE7))
        || (mapNum == MAP_NUM(MAP_ROUTE13) && mapGroup == MAP_GROUP(MAP_ROUTE13))
        || (mapNum == MAP_NUM(MAP_ROUTE100) && mapGroup == MAP_GROUP(MAP_ROUTE100))
        || (mapNum == MAP_NUM(MAP_ROUTE99) && mapGroup == MAP_GROUP(MAP_ROUTE99))
        || (mapNum == MAP_NUM(MAP_ROUTE12) && mapGroup == MAP_GROUP(MAP_ROUTE12));
}

static bool32 ShopInventory_IsPlayerInsideACave(void)
{
    s32 mapNum = gSaveBlock1Ptr->location.mapNum;
    s32 mapGroup = gSaveBlock1Ptr->location.mapGroup;

    return (mapNum == MAP_NUM(MAP_ARANTRAZ) && mapGroup == MAP_GROUP(MAP_ARANTRAZ))
        || (mapNum == MAP_NUM(MAP_PIOCA_BRIDGE) && mapGroup == MAP_GROUP(MAP_PIOCA_BRIDGE));
}

static bool32 ShopInventory_IsItemUsefulInForest(u16 itemId)
{
    return (itemId == ITEM_REPEL
             || itemId == ITEM_SUPER_REPEL
             || itemId == ITEM_MAX_REPEL
             || itemId == ITEM_LURE
             || itemId == ITEM_SUPER_LURE
             || itemId == ITEM_MAX_LURE
             || itemId == ITEM_POKE_BALL
             || itemId == ITEM_GREAT_BALL
             || itemId == ITEM_ULTRA_BALL
             || itemId == ITEM_HEAL_BALL
             || itemId == ITEM_TIMER_BALL
             || itemId == ITEM_QUICK_BALL
             || itemId == ITEM_REPEAT_BALL
             || itemId == ITEM_LUXURY_BALL);
}

static bool32 ShopInventory_IsItemUsefulInWater(u16 itemId)
{
    return (itemId == ITEM_REPEL
             || itemId == ITEM_SUPER_REPEL
             || itemId == ITEM_MAX_REPEL
             || itemId == ITEM_LURE
             || itemId == ITEM_SUPER_LURE
             || itemId == ITEM_MAX_LURE
             || itemId == ITEM_POKE_BALL
             || itemId == ITEM_GREAT_BALL
             || itemId == ITEM_ULTRA_BALL
             || itemId == ITEM_NET_BALL
             || itemId == ITEM_DIVE_BALL
             || itemId == ITEM_LURE_BALL);
}

static bool32 ShopInventory_IsItemUsefulInCave(u16 itemId)
{
    return (itemId == ITEM_REPEL
             || itemId == ITEM_SUPER_REPEL
             || itemId == ITEM_MAX_REPEL
             || itemId == ITEM_LURE
             || itemId == ITEM_SUPER_LURE
             || itemId == ITEM_MAX_LURE
             || itemId == ITEM_POKE_BALL
             || itemId == ITEM_GREAT_BALL
             || itemId == ITEM_ULTRA_BALL
             || itemId == ITEM_DUSK_BALL);
}

static void ShopPurchase_CalculateMaxQuantity(void)
{
    u16 itemId = sShopMenuDataPtr->selectedItemId;
    u16 maxItemQuantity = GetMoney(&gSaveBlock1Ptr->money) / ShopPurchase_GetItemPriceByType(0, itemId, SHOP_PRICE_FINAL);

    if (maxItemQuantity > MAX_BAG_ITEM_CAPACITY)
        sShopMenuDataPtr->maxItemQuantity = MAX_BAG_ITEM_CAPACITY;
    else
        sShopMenuDataPtr->maxItemQuantity = maxItemQuantity;
}

static bool32 ShopPurchase_IsCategoryOneTimePurchase(enum ShopMenuCategories category)
{
    return (category == SHOP_CATEGORY_TMS
            || category == SHOP_CATEGORY_MEGA_STONES
            || category == SHOP_CATEGORY_Z_CRYSTALS);
}

static u32 ShopPurchase_GetDroneFee(void)
{
    s32 discount = (HasPlayerJoinedTheTide()) ? 0 : PRESTO_FEE_SHARP_RISE_DISCOUNT;
    u32 recommended = (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_RECOMMENDED) ? PRESTO_FEE_RECOMMENDED_BOOST : 0;

    return (PRESTO_FEE_BASE_DRONE - discount) + recommended;
}

static u32 ShopPurchase_GetItemPriceByType(u8 quantity, u16 itemId, enum ShopMenuPrices type)
{
    u32 itemPrice = (quantity + 1) * GetItemPrice(itemId);
    u32 dronePrice = (itemPrice * ShopPurchase_GetDroneFee()) / 100;
    u32 totalPrice = itemPrice + dronePrice;

    switch (type)
    {
        case SHOP_PRICE_ITEM:
            return itemPrice;
            break;
        case SHOP_PRICE_DRONE:
            return dronePrice;
            break;
        case SHOP_PRICE_FINAL:
            return (sShopMenuDataPtr->type == SHOP_TYPE_PRESTO_APP) ? totalPrice : itemPrice;
            break;
    }

    return 0;
}

static void ShopPurchase_AddItem(u16 itemId, u8 quantity)
{
    u16 price = ShopPurchase_GetItemPriceByType(quantity, itemId, SHOP_PRICE_FINAL);
    bool32 newItem = TRUE;
    u32 oldItem = 0;
    u32 bak = gSaveBlock3Ptr->shopBuyAgainItems[0];

    RemoveMoney(&gSaveBlock1Ptr->money, price);
    AddBagItem(itemId, quantity + 1);

    sShopMenuDataPtr->buyWindow = TRUE;

    if (!ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
    {
        // Has the player purchased this item before?
        for (u32 i = 0; i < MAX_PRESTO_BUY_AGAIN_ITEMS; i++)
        {
            if (itemId == gSaveBlock3Ptr->shopBuyAgainItems[i])
            {
                newItem = FALSE;
                oldItem = i;
            }
        }

        // Move other items to the back and put the new item at the very top.
        if (newItem)
        {
            for (u32 i = 0; i < MAX_PRESTO_BUY_AGAIN_ITEMS - 1; i++)
            {
                gSaveBlock3Ptr->shopBuyAgainItems[(MAX_PRESTO_BUY_AGAIN_ITEMS - i) - 1] = gSaveBlock3Ptr->shopBuyAgainItems[(MAX_PRESTO_BUY_AGAIN_ITEMS - i) - 2];
            }
        }
        else
        {
            gSaveBlock3Ptr->shopBuyAgainItems[oldItem] = ITEM_NONE;

            for (u32 i = 0; i < oldItem; i++)
            {
                gSaveBlock3Ptr->shopBuyAgainItems[oldItem - i] = gSaveBlock3Ptr->shopBuyAgainItems[oldItem - i - 1];
            }
        }

        gSaveBlock3Ptr->shopBuyAgainItems[0] = itemId;
    }

    ShopInventory_InitCategoryLists();

    // Reconfigure cursor, only when necessary.
    if (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_BUY_AGAIN
     || ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
    {
        sShopMenuDataPtr->currIdx.x = 0;
        sShopMenuDataPtr->firstIdx.x = 0;
    }

    // only adjust row cursor once!
    if (bak)
    {
        return;
    }

    u32 halfScreen = NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES / 2;
    u32 numCategories = sShopMenuDataPtr->numCategories - 1;
    u32 finalHalfScreen = numCategories - halfScreen;

    if (sShopMenuDataPtr->currIdx.y >= halfScreen && sShopMenuDataPtr->currIdx.y < finalHalfScreen)
    {
        sShopMenuDataPtr->currIdx.y++;
        sShopMenuDataPtr->firstIdx.y++;
    }
    else if (sShopMenuDataPtr->currIdx.y >= numCategories)
    {
        sShopMenuDataPtr->currIdx.y = 0;
        sShopMenuDataPtr->firstIdx.y = 0;
    }
    else
    {
        sShopMenuDataPtr->currIdx.y++;
    }
}

static enum ShopMenuCategories ShopGrid_CategoryInRow(u8 row)
{
    return sShopMenuDataPtr->shownCategories[row % NUM_SHOP_CATEGORIES] % NUM_SHOP_CATEGORIES;
}

static enum ShopMenuCategories ShopGrid_CurrentCategoryRow(void)
{
    return ShopGrid_CategoryInRow(sShopMenuDataPtr->currIdx.y);
}

static void ShopGrid_SwitchMode(void)
{
    sShopMenuDataPtr->buyScreen ^= 1;
    sShopMenuDataPtr->selectedItemId = sShopMenuDataPtr->categoryItems[sShopMenuDataPtr->currIdx.y][sShopMenuDataPtr->currIdx.x];
    ShopPurchase_CalculateMaxQuantity();

    if (sShopMenuDataPtr->buyScreen)
    {
        DecompressDataWithHeaderWram(ShopGraphics_GetByType(SHOP_GFX_TILEMAP_BUY), sShopMenuDataPtr->tilemapBuf);
    }
    else
    {
        if (sShopMenuDataPtr->spriteIds[SHOP_SPRITE_BUY_ITEM_ICON] != SPRITE_NONE)
        {
            gSprites[sShopMenuDataPtr->spriteIds[SHOP_SPRITE_BUY_ITEM_ICON]].invisible = TRUE;
            DestroySprite(&gSprites[sShopMenuDataPtr->spriteIds[SHOP_SPRITE_BUY_ITEM_ICON]]);
            sShopMenuDataPtr->spriteIds[SHOP_SPRITE_BUY_ITEM_ICON] = SPRITE_NONE;
        }

        DecompressDataWithHeaderWram(ShopGraphics_GetByType(SHOP_GFX_TILEMAP), sShopMenuDataPtr->tilemapBuf);
    }

    ShopSprite_ToggleItemIconsVisibility();
    ScheduleBgCopyTilemapToVram(1);
}

static void ShopGrid_DownInput(void)
{
    if (!sShopMenuDataPtr->buyScreen)
    {
        u32 halfScreen = NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES / 2;
        u32 numCategories = sShopMenuDataPtr->numCategories - 1;
        u32 finalHalfScreen = numCategories - halfScreen;

        sShopMenuDataPtr->currIdx.x = 0;
        sShopMenuDataPtr->firstIdx.x = 0;

        if (sShopMenuDataPtr->currIdx.y >= halfScreen && sShopMenuDataPtr->currIdx.y < finalHalfScreen)
        {
            sShopMenuDataPtr->currIdx.y++;
            sShopMenuDataPtr->firstIdx.y++;
        }
        else if (sShopMenuDataPtr->currIdx.y >= numCategories)
        {
            sShopMenuDataPtr->currIdx.y = 0;
            sShopMenuDataPtr->firstIdx.y = 0;
        }
        else
        {
            sShopMenuDataPtr->currIdx.y++;
        }
    }
    else
    {
        if (!ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
        {
            if (sShopMenuDataPtr->maxItemQuantity != 0)
            {
                if (sShopMenuDataPtr->itemQuantity != 0)
                    sShopMenuDataPtr->itemQuantity--;
                else
                    sShopMenuDataPtr->itemQuantity = sShopMenuDataPtr->maxItemQuantity - 1;
            }
        }
    }
}

static void ShopGrid_UpInput(void)
{
    if (!sShopMenuDataPtr->buyScreen)
    {
        u32 halfScreen = NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES / 2;
        u32 numCategories = sShopMenuDataPtr->numCategories - 1;
        u32 finalHalfScreen = numCategories - halfScreen;

        sShopMenuDataPtr->currIdx.x = 0;
        sShopMenuDataPtr->firstIdx.x = 0;

        if (sShopMenuDataPtr->currIdx.y > halfScreen && sShopMenuDataPtr->currIdx.y <= finalHalfScreen)
        {
            sShopMenuDataPtr->currIdx.y--;
            sShopMenuDataPtr->firstIdx.y--;
        }
        else if (!sShopMenuDataPtr->currIdx.y)
        {
            sShopMenuDataPtr->currIdx.y = numCategories;
            sShopMenuDataPtr->firstIdx.y = (numCategories + 1) - NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES;
        }
        else
        {
            sShopMenuDataPtr->currIdx.y--;
        }
    }
    else
    {
        if (!ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
        {
            if (sShopMenuDataPtr->itemQuantity != MAX_BAG_ITEM_CAPACITY - 1
             && sShopMenuDataPtr->maxItemQuantity > sShopMenuDataPtr->itemQuantity + 1)
            {
                sShopMenuDataPtr->itemQuantity++;
            }
            else
            {
                sShopMenuDataPtr->itemQuantity = 0;
            }
        }
    }
}

static void ShopGrid_RightInput(void)
{
    if (!sShopMenuDataPtr->buyScreen)
    {
        u32 halfScreen = NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES / 2;
        u32 categoryNumItems = sShopMenuDataPtr->categoryNumItems[sShopMenuDataPtr->currIdx.y] - 1;
        u32 finalHalfScreen = categoryNumItems - halfScreen;

        if (sShopMenuDataPtr->currIdx.x >= halfScreen && sShopMenuDataPtr->currIdx.x < finalHalfScreen)
        {
            sShopMenuDataPtr->currIdx.x++;
            sShopMenuDataPtr->firstIdx.x++;
        }
        else if (sShopMenuDataPtr->currIdx.x >= categoryNumItems)
        {
            sShopMenuDataPtr->currIdx.x = 0;
            sShopMenuDataPtr->firstIdx.x = 0;
        }
        else
        {
            sShopMenuDataPtr->currIdx.x++;
        }
    }
    else
    {
        if (!ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
        {
            if (sShopMenuDataPtr->itemQuantity != MAX_BAG_ITEM_CAPACITY - 1 &&
               (sShopMenuDataPtr->maxItemQuantity - 1) > (sShopMenuDataPtr->itemQuantity + SHOP_HORIZONTAL_INCREMENT_NUMBER))
            {
                sShopMenuDataPtr->itemQuantity = sShopMenuDataPtr->itemQuantity + SHOP_HORIZONTAL_INCREMENT_NUMBER;
            }
            else if (sShopMenuDataPtr->itemQuantity != sShopMenuDataPtr->maxItemQuantity - 1)
            {
                sShopMenuDataPtr->itemQuantity = sShopMenuDataPtr->maxItemQuantity - 1;
            }
            else
            {
                sShopMenuDataPtr->itemQuantity = 0;
            }
        }
    }
}

static void ShopGrid_LeftInput(void)
{
    if (!sShopMenuDataPtr->buyScreen)
    {
        u32 halfScreen = NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES / 2;
        u32 categoryNumItems = sShopMenuDataPtr->categoryNumItems[sShopMenuDataPtr->currIdx.y] - 1;
        u32 finalHalfScreen = categoryNumItems - halfScreen;

        if (sShopMenuDataPtr->currIdx.x > halfScreen && sShopMenuDataPtr->currIdx.x <= finalHalfScreen)
        {
            sShopMenuDataPtr->currIdx.x--;
            sShopMenuDataPtr->firstIdx.x--;
        }
        else if (!sShopMenuDataPtr->currIdx.x)
        {
            sShopMenuDataPtr->currIdx.x = categoryNumItems;
            if ((categoryNumItems + 1) > NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES)
            {
                sShopMenuDataPtr->firstIdx.x = (categoryNumItems + 1) - NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES;
            }
        }
        else
        {
            sShopMenuDataPtr->currIdx.x--;
        }
    }
    else
    {
        if (!ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
        {
            if (sShopMenuDataPtr->maxItemQuantity != 0)
            {
                if (sShopMenuDataPtr->itemQuantity >= SHOP_HORIZONTAL_INCREMENT_NUMBER)
                {
                    sShopMenuDataPtr->itemQuantity = sShopMenuDataPtr->itemQuantity - SHOP_HORIZONTAL_INCREMENT_NUMBER;
                }
                else if (sShopMenuDataPtr->itemQuantity != 0)
                {
                    sShopMenuDataPtr->itemQuantity = 0;
                }
                else
                {
                    sShopMenuDataPtr->itemQuantity = sShopMenuDataPtr->maxItemQuantity - 1;
                }
            }
        }
    }
}

static u32 ShopGrid_RowInCategory(enum ShopMenuCategories category)
{
    for (u32 row = 0; row < sShopMenuDataPtr->numCategories; row++)
    {
        if (sShopMenuDataPtr->shownCategories[row] == category)
            return row;
    }

    return NUM_SHOP_CATEGORIES;
}

static void ShopBlit_Category(enum ShopMenuCategories category, u32 x, u32 y)
{
    if (category > NUM_SHOP_CATEGORIES)
        return;

    BlitBitmapRectToWindow(SHOP_WINDOW_MAIN, sShopGfx_PrestoCategories,
                            0, category * 24,
                            24, NUM_SHOP_CATEGORIES * 24,
                            x, y,
                            24, 24);
}

static inline void ShopBlit_Categories(void)
{
    u32 x = 0, y = 2;
    u32 x2 = 3, y2 = 0;

    for (u32 idx = 0; idx < NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES; idx++)
    {
        if (ShopGrid_CurrentCategoryRow() == ShopGrid_CategoryInRow(sShopMenuDataPtr->firstIdx.y + idx))
        {
            ShopBlit_Category(NUM_SHOP_CATEGORIES, TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y) + y2);
        }

        ShopBlit_Category(ShopGrid_CategoryInRow(sShopMenuDataPtr->firstIdx.y + idx),
                          TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y) + y2);

        y += 3, y2 += 2;
    }
}

static inline void ShopBlit_SelectedItem(void)
{
    if (sShopMenuDataPtr->type == SHOP_TYPE_POKEMART)
        return;

    u32 trueColIdx = sShopMenuDataPtr->currIdx.x - sShopMenuDataPtr->firstIdx.x;
    u32 x = (5 * trueColIdx) + 4, x2 = (2 * trueColIdx) + 2;
    u32 y = 4;

    BlitBitmapToWindow(SHOP_WINDOW_MAIN, sItemSelector,
                       TILE_TO_PIXELS(x) + x2, TILE_TO_PIXELS(y), 32, 24);
}

static inline void ShopPrint_AddTextPrinter(u32 fontId, u32 x, u32 y, enum ShopMenuFontColors color, const u8 *str)
{
    AddTextPrinterParameterized4(SHOP_WINDOW_MAIN, fontId, x, y, 0, 0, sMenuWindowFontColors[color], TEXT_SKIP_DRAW, str);
}

static inline void ShopPrint_Categories(void)
{
    u32 x = 4, y = 2;

    u32 halfScreen = NUM_SHOP_ITEMS_ON_SCREEN_PER_CATEGORIES / 2;
    u32 numCategories = sShopMenuDataPtr->numCategories - 1;
    u32 finalHalfScreen = numCategories - halfScreen;

    for (u32 i = 0; i < NUM_SHOP_CATEGORIES_ON_SCREEN; i++)
    {
        u32 trueRowIdx = sShopMenuDataPtr->currIdx.y;
        if (sShopMenuDataPtr->currIdx.y > halfScreen && sShopMenuDataPtr->currIdx.y < finalHalfScreen)
        {
            trueRowIdx = sShopMenuDataPtr->firstIdx.y + halfScreen;
        }

        u32 row = (trueRowIdx + i) % sShopMenuDataPtr->numCategories;

        if (!i)
        {
            StringCopy(gStringVar1, Presto_Rows[ShopGrid_CategoryInRow(row)]);
            StringCopy(gStringVar2, GetItemName(sShopMenuDataPtr->categoryItems[row][sShopMenuDataPtr->currIdx.x]));
            StringExpandPlaceholders(gStringVar4, sText_FirstRowName);
        }
        else
        {
            StringCopy(gStringVar4, Presto_Rows[ShopGrid_CategoryInRow(row)]);
        }

        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW,
                                TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y) + (i * 4),
                                SHOP_FNTCLR_WHITE, gStringVar4);

        y += 5;
    }
}

static inline void ShopPrint_ItemPrice(void)
{
    u32 x = 20, y = 2;
    u32 itemId = sShopMenuDataPtr->categoryItems[sShopMenuDataPtr->currIdx.y][sShopMenuDataPtr->currIdx.x];
    u32 price = ShopPurchase_GetItemPriceByType(0, itemId, SHOP_PRICE_ITEM);

    ConvertIntToDecimalStringN(gStringVar1, price, STR_CONV_MODE_LEFT_ALIGN, 5);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Price: ¥{STR_VAR_1}"));

    if (sShopMenuDataPtr->categoryItems[sShopMenuDataPtr->currIdx.y][sShopMenuDataPtr->currIdx.x] != ITEM_NONE)
    {
        ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y), SHOP_FNTCLR_WHITE, gStringVar4);
    }
}

static inline void ShopPrint_HelpBar(void)
{
    u32 x = 0, y = 18;
    const u8 *str = sText_Help_Bar;
    u32 fontId = FONT_SMALL_NARROW;

    if (sShopMenuDataPtr->buyScreen)
    {
        if (!sShopMenuDataPtr->buyWindow)
        {
            if (!sShopMenuDataPtr->notEnoughMoneyWindow)
            {
                str = sText_Help_Bar_Buy;
            }
            else
            {
                str = sText_noEnoughMoney;
                fontId = FONT_SMALL_NARROWER;
            }
        }
        else
        {
            str = sText_Help_Bar_Complete;
        }
    }

    ShopPrint_AddTextPrinter(fontId, TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y), SHOP_FNTCLR_WHITE, str);
}

static const void *const ShopGraphics_GetByType(enum ShopMenuGraphicsType type)
{
    type %= NUM_SHOP_GRAPHICS;

    switch (type)
    {
    default:
    case SHOP_GFX_TILES:
        return sShopMenuGraphics[sShopMenuDataPtr->type].tiles;
    case SHOP_GFX_TILEMAP:
        return sShopMenuGraphics[sShopMenuDataPtr->type].map;
    case SHOP_GFX_TILEMAP_BUY:
        return sShopMenuGraphics[sShopMenuDataPtr->type].mapBuy;
    case SHOP_GFX_PALETTE:
        return sShopMenuGraphics[sShopMenuDataPtr->type].palette;
    }
}

// Available to purchase criterias in gItemsInfo.

bool32 ShopCriteriaFunc_TotalBadges(u16 itemId)
{
    u32 currTotalBadges = 0;

    for (u32 badgeFlag = FLAG_BADGE01_GET; badgeFlag < FLAG_BADGE01_GET + NUM_BADGES; badgeFlag++)
    {
        if (FlagGet(badgeFlag))
        {
            currTotalBadges++;
        }
    }

    if (currTotalBadges >= GetItemShopCriteriaGoal(itemId))
    {
        return TRUE;
    }

    return FALSE;
}

bool32 ShopCriteriaFunc_QuestCompletion(u16 itemId)
{
    if (QuestMenu_GetSetQuestState(GetItemShopCriteriaGoal(itemId), FLAG_GET_COMPLETED))
    {
        return TRUE;
    }

    return FALSE;
}

bool32 ShopCriteriaFunc_FlagStatus(u16 itemId)
{
    u32 criteria = GetItemShopCriteriaGoal(itemId);

    if (FlagGet(criteria))
    {
        return TRUE;
    }

    return FALSE;
}

bool32 ShopCriteriaFunc_VarStatus(u16 itemId)
{
    u32 criteria = GetItemShopCriteriaGoal(itemId);
    u32 varId = VarGet(READ_CRITERIA_GOAL_VAR_ID(criteria));
    u32 varValue = READ_CRITERIA_GOAL_VAR_VALUE(criteria);

    if (varId >= varValue)
    {
        return TRUE;
    }

    return FALSE;
}

bool32 ShopCriteriaFunc_OneTimePurchase(u16 itemId)
{
    enum ShopMenuCategories category = GetItemShopCategory(itemId);
    bool32 importance = GetItemImportance(itemId);

    if ((importance || ShopPurchase_IsCategoryOneTimePurchase(category)) && !CheckBagHasItem(itemId, 1))
    {
        return TRUE;
    }

    return FALSE;
}
