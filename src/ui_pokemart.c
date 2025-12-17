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
#define MART_KEEPER_ICON    FALSE // PSF TODO disable/remove related code if we decide to deprecate this

#define TILE_TO_PIXELS(t)   ((t) ? ((t) * 8) : 1)
#define PIXELS_TO_TILES(p)  ((p) ? ((p) / 8) : 1)

#define SHOP_LEFT_ARROW_X  ((TILE_TO_PIXELS(14) + 0) + 4)
#define SHOP_LEFT_ARROW_Y  ((TILE_TO_PIXELS( 1) + 0) + 8)

#define SHOP_RIGHT_ARROW_X ((TILE_TO_PIXELS(29) + 0) + 4)
#define SHOP_RIGHT_ARROW_Y SHOP_LEFT_ARROW_Y

#define SHOP_UP_ARROW_X    (TILE_TO_PIXELS(20) + 16)
#define SHOP_UP_ARROW_Y    (TILE_TO_PIXELS(0) + 0)

#define SHOP_DOWN_ARROW_X  SHOP_UP_ARROW_X
#define SHOP_DOWN_ARROW_Y  ((TILE_TO_PIXELS(11) + 4) + 8)

#define MART_CATEGORY_ARROW_X ((TILE_TO_PIXELS(9) + 3) + 4)
#define MART_CATEGORY_ARROW_Y ((TILE_TO_PIXELS(3) - 1) + 8)

#define MART_KEEPER_X   ((TILE_TO_PIXELS(3) + 0) + 16)
#define MART_KEEPER_Y   ((TILE_TO_PIXELS(4) + 2) + 16)

#define MART_DESC_WIN_WIDTH     (23)

// SpriteCB_*Arrow
#define sArrow_SineValue         data[0]

#if MART_KEEPER_ICON == TRUE
// SpriteCB_MartKeeper
#define sKeeper_StartingTileNum  data[0]
#define sKeeper_Emote            data[1]
#define sKeeper_Anim             data[2]
#endif

enum PokeMartInputs
{
    MART_INPUT_BUY = 0,
    MART_INPUT_SELL,
    MART_INPUT_QUIT,

    NUM_MART_INPUTS
};

enum PokeMartSpriteTags
{
    TAG_MART_KEEPER = 0x9999,
    TAG_MART_CATEGORY_ARROW
};

#if MART_KEEPER_ICON == TRUE
#define MART_KEEPER_TOTAL_ANIMS 2 // per emotes

enum PokeMartKeeperAnims
{
    MART_KEEPER_ANIM_IDLE,
    MART_KEEPER_ANIM_TALK,

    NUM_MART_KEEPER_ANIMS
};

enum PokeMartKeeperEmotes
{
    MART_KEEPER_EMOTE_NEUTRAL,
    MART_KEEPER_EMOTE_WAIT,
    MART_KEEPER_EMOTE_HAPPY,

    NUM_MART_KEEPER_EMOTES
};
#endif

// structs
struct PokeMartData
{
    s8 input;
    u8 winId;
    #if MART_KEEPER_ICON == TRUE
    u8 keeperSpriteId;
    #endif
    u8 arrowSpriteId; // category sprite
};

// ram
static EWRAM_INIT struct PokeMartData sPokeMartData =
{
    .input = MART_INPUT_BUY,
    .winId = WINDOW_NONE,
    #if MART_KEEPER_ICON == TRUE
    .keeperSpriteId = SPRITE_NONE,
    #endif
    .arrowSpriteId = SPRITE_NONE,
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

static void MartSprite_SetCategoryArrowSpriteId(u32);
static u32 MartSprite_GetCategoryArrowSpriteId(void);

#if MART_KEEPER_ICON == TRUE
static void MartSprite_SetKeeperSpriteId(u32);
static u32 MartSprite_GetKeeperSpriteId(void);
static void MartSprite_SetKeeperEmote(enum PokeMartKeeperEmotes);
static void MartSprite_SetKeeperAnim(enum PokeMartKeeperAnims);
#endif

static void SpriteCB_BuyIcon(struct Sprite *);
static void SpriteCB_UpArrow(struct Sprite *);
static void SpriteCB_DownArrow(struct Sprite *);
static void SpriteCB_LeftArrow(struct Sprite *);
static void SpriteCB_RightArrow(struct Sprite *);
static void SpriteCB_UpArrowSmall(struct Sprite *);
static void SpriteCB_DownArrowSmall(struct Sprite *);
static void SpriteCB_CategoryArrow(struct Sprite *);
#if MART_KEEPER_ICON == TRUE
static void SpriteCB_MartKeeper(struct Sprite *);
#endif

// const data
static const u32 sPokeMart_ExtraTilemap[] = INCBIN_U32("graphics/ui_menus/mart/textbox.bin.smolTM");

static const struct CompressedSpriteSheet sPokeMart_CategoryArrowSpriteSheet =
{
    (const u32[])INCBIN_U32("graphics/ui_menus/mart/category_arrow.4bpp.smol"),
    ((8 * 16) / 2),
    TAG_MART_CATEGORY_ARROW
};

static const struct SpriteTemplate sPokeMart_CategoryArrowSpriteTemplate =
{
    .tileTag = TAG_MART_CATEGORY_ARROW,
    .paletteTag = TAG_SHOP_MENU_UI,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(8x16),
        .size = SPRITE_SIZE(8x16),
        .priority = 0,
    },
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CategoryArrow
};

#if MART_KEEPER_ICON == TRUE
static const struct CompressedSpriteSheet sPokeMart_KeeperSpriteSheet =
{
    (const u32[])INCBIN_U32("graphics/ui_menus/mart/shopkeeper.4bpp.smol"),
    (NUM_MART_KEEPER_EMOTES * MART_KEEPER_TOTAL_ANIMS) * ((32 * 32) / 2),
    TAG_MART_KEEPER
};

static const struct SpritePalette sPokeMart_KeeperSpritePalette =
{
    (const u16[])INCBIN_U16("graphics/ui_menus/mart/shopkeeper.gbapal"),
    TAG_MART_KEEPER
};

static const struct SpriteTemplate sPokeMart_KeeperSpriteTemplate =
{
    .tileTag = TAG_MART_KEEPER,
    .paletteTag = TAG_MART_KEEPER,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(32x32),
        .size = SPRITE_SIZE(32x32),
        .priority = 0,
    },
    .anims = (const union AnimCmd *const[]){
        [MART_KEEPER_ANIM_IDLE] = (const union AnimCmd[]){
            ANIMCMD_FRAME(MART_KEEPER_ANIM_IDLE * 16),
            ANIMCMD_END
        },

        [MART_KEEPER_ANIM_TALK] = (const union AnimCmd[]){
            ANIMCMD_FRAME(MART_KEEPER_ANIM_IDLE * 16, 5),
            ANIMCMD_FRAME(MART_KEEPER_ANIM_TALK * 16, 5),
            ANIMCMD_JUMP(0)
        },
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_MartKeeper
};
#endif

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
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/arrow_left.4bpp.smol"),
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

    sPokeMartData.winId = AddWindow(&winTemplate);

    SetStandardWindowBorderStyle(sPokeMartData.winId, FALSE);
    PrintMenuTable(sPokeMartData.winId, ARRAY_COUNT(sPokeMart_MenuActions), sPokeMart_MenuActions);
    InitMenuInUpperLeftCornerNormal(sPokeMartData.winId, ARRAY_COUNT(sPokeMart_MenuActions), sPokeMartData.input);
    PutWindowTilemap(sPokeMartData.winId);
    CopyWindowToVram(sPokeMartData.winId, COPYWIN_MAP);

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
    ClearStdWindowAndFrameToTransparent(sPokeMartData.winId, TRUE);
    RemoveWindow(sPokeMartData.winId);

    UnlockPlayerFieldControls();
    ScriptContext_Enable();

    sPokeMartData.winId = WINDOW_NONE;
    #if MART_KEEPER_ICON == TRUE
    MartSprite_SetKeeperSpriteId(SPRITE_NONE);
    #endif
    MartSprite_SetCategoryArrowSpriteId(SPRITE_NONE);
    sPokeMartData.input = MART_INPUT_BUY;

    DestroyTask(taskId);
}

static void Task_MartInterface_FadeIntoMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        #if MART_KEEPER_ICON == TRUE
        MartSprite_SetKeeperSpriteId(SPRITE_NONE);
        #endif

        MartSprite_SetCategoryArrowSpriteId(SPRITE_NONE);
        sPokeMartData.winId = WINDOW_NONE;
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
    const u8 *str;
    u32 fontId, x, y;

    if (gMain.state)
    {
        LoadCompressedSpriteSheet(&sPokeMart_CategoryArrowSpriteSheet);
        MartSprite_SetCategoryArrowSpriteId(
            CreateSprite(&sPokeMart_CategoryArrowSpriteTemplate, MART_CATEGORY_ARROW_X, MART_CATEGORY_ARROW_Y, 0));

        #if MART_KEEPER_ICON == TRUE
        LoadCompressedSpriteSheet(&sPokeMart_KeeperSpriteSheet);
        LoadSpritePalette(&sPokeMart_KeeperSpritePalette);
        MartSprite_SetKeeperSpriteId(CreateSprite(&sPokeMart_KeeperSpriteTemplate, MART_KEEPER_X, MART_KEEPER_Y, 0));

        if (MartSprite_GetKeeperSpriteId() != SPRITE_NONE)
        {
            struct Sprite *keeper = &gSprites[MartSprite_GetKeeperSpriteId()];

            keeper->sKeeper_StartingTileNum = keeper->oam.tileNum;
            MartSprite_SetKeeperEmote(MART_KEEPER_EMOTE_WAIT);
            MartSprite_SetKeeperAnim(MART_KEEPER_ANIM_IDLE);
        }
        #endif // MART_KEEPER_ICON

        struct WindowTemplate winTemp =
        {
            .bg = SHOP_BG_DESC,
            .tilemapLeft = 1,
            .tilemapTop = 13,
            .width = MART_DESC_WIN_WIDTH,
            .height = 4,
            .paletteNum = 0,
            .baseBlock = 0x20,
        };

        sPokeMartData.winId = AddWindow(&winTemp);
        PutWindowTilemap(sPokeMartData.winId);
        CopyWindowToVram(sPokeMartData.winId, COPYWIN_FULL);

        DecompressDataWithHeaderVram(sPokeMart_ExtraTilemap, (void *)BG_SCREEN_ADDR(29));
    }

    #if MART_KEEPER_ICON == TRUE
    MartSprite_SetKeeperAnim(MART_KEEPER_ANIM_TALK);
    #endif // MART_KEEPER_ICON

    str = COMPOUND_STRING("Money:");
    fontId = FONT_SMALL_NARROW;
    x = TILE_TO_PIXELS(1);
    y = TILE_TO_PIXELS(0);
    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    ConvertIntToDecimalStringN(gStringVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("¥ {STR_VAR_1}"));
    str = gStringVar4;
    fontId = FONT_SMALL_NARROW;
    x = TILE_TO_PIXELS(1) + GetStringRightAlignXOffset(fontId, str, TILE_TO_PIXELS(12));
    y = TILE_TO_PIXELS(0);
    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    str = gShopCategoryNames[ShopGrid_CurrentCategoryRow()];
    fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(8));
    x = TILE_TO_PIXELS(1) + GetStringCenterAlignXOffset(fontId, str, TILE_TO_PIXELS(8));
    y = TILE_TO_PIXELS(2) - 3;
    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    u32 itemId = ShopInventory_GetChosenItemId();

    str = GetItemName(itemId);
    fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(8));
    x = TILE_TO_PIXELS(1) + GetStringCenterAlignXOffset(fontId, str, TILE_TO_PIXELS(8));
    y = TILE_TO_PIXELS(8) + 4;
    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    ConvertIntToDecimalStringN(gStringVar1, MartPurchase_GetTotalItemPrice(itemId, 0), STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("¥ {STR_VAR_1}"));
    str = gStringVar4;
    fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(8));
    x = TILE_TO_PIXELS(1) + GetStringCenterAlignXOffset(fontId, str, TILE_TO_PIXELS(8));
    y += TILE_TO_PIXELS(1) + 4;
    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    FillWindowPixelRect(SHOP_WINDOW_MAIN, PIXEL_FILL(15),
                        TILE_TO_PIXELS(0), TILE_TO_PIXELS(18),
                        DISPLAY_WIDTH, TILE_TO_PIXELS(16));
    ShopPrint_HelpBar();

    FillWindowPixelBuffer(sPokeMartData.winId, PIXEL_FILL(0));
    str = GetItemDescription(itemId);
    fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(MART_DESC_WIN_WIDTH));
    x = TILE_TO_PIXELS(0);
    y = TILE_TO_PIXELS(0);
    u32 speed = (gMain.state || MART_KEEPER_ICON == FALSE) ? 0 : GetPlayerTextSpeedDelay();
    AddTextPrinterParameterized4(sPokeMartData.winId, fontId, x, y, 0, 0, ShopConfig_GetFontColors(SHOP_FNTCLR_PRIMARY), speed, str);
}

static u32 MartPurchase_GetTotalItemPrice(u16 itemId, u16 quantity)
{
    return (quantity + 1) * GetItemPrice(itemId);
}

static void MartSprite_SetCategoryArrowSpriteId(u32 spriteId)
{
    sPokeMartData.arrowSpriteId = spriteId;
}

static u32 MartSprite_GetCategoryArrowSpriteId(void)
{
    return sPokeMartData.arrowSpriteId;
}

#if MART_KEEPER_ICON == TRUE
static void MartSprite_SetKeeperSpriteId(u32 spriteId)
{
    sPokeMartData.keeperSpriteId = spriteId;
}

static u32 MartSprite_GetKeeperSpriteId(void)
{
    return sPokeMartData.keeperSpriteId;
}

static void MartSprite_SetKeeperEmote(enum PokeMartKeeperEmotes emote)
{
    struct Sprite *keeper = &gSprites[MartSprite_GetKeeperSpriteId()];
    keeper->sKeeper_Emote = emote;
    keeper->oam.tileNum = keeper->sKeeper_StartingTileNum + ((keeper->sKeeper_Emote * MART_KEEPER_TOTAL_ANIMS) * 16);
}

static void MartSprite_SetKeeperAnim(enum PokeMartKeeperAnims anim)
{
    struct Sprite *keeper = &gSprites[MartSprite_GetKeeperSpriteId()];
    keeper->sKeeper_Anim = anim;
    StartSpriteAnimIfDifferent(keeper, keeper->sKeeper_Anim);
}
#endif

static void SpriteCB_BuyIcon(struct Sprite *sprite)
{
    u32 x2 = ShopConfig_GetTotalShownItems() * ShopGrid_GetGridXCursor();
    sprite->x2 = TILE_TO_PIXELS(x2);
}

static void SpriteCB_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (gShopMenuDataPtr->buyScreen || !ShopGrid_GetGridYCursor());
}

static void SpriteCB_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (gShopMenuDataPtr->buyScreen
     || ShopGrid_GetGridYCursor() == ShopConfig_GetTotalShownCategories() - 1);
}

static void SpriteCB_LeftArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->x2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    u32 halfScreen = ShopGrid_GetXHalfScreen();
    u32 categoryNumItems = gShopMenuDataPtr->categoryNumItems[ShopGrid_GetCurrentCategoryIndex()] - 1;
    u32 shownItems = (ShopConfig_GetTotalShownItems() - 1);
    bool32 scroll = categoryNumItems > shownItems;

    sprite->invisible = (gShopMenuDataPtr->buyScreen || (scroll && ShopGrid_GetCurrentItemIndex() <= halfScreen));
}

static void SpriteCB_RightArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue;
    sprite->x2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    u32 halfScreen = ShopGrid_GetXHalfScreen();
    u32 categoryNumItems = gShopMenuDataPtr->categoryNumItems[ShopGrid_GetCurrentCategoryIndex()] - 1;
    u32 shownItems = (ShopConfig_GetTotalShownItems() - 1);
    u32 finalHalfScreen = categoryNumItems - (shownItems - halfScreen);
    bool32 scroll = categoryNumItems > shownItems;

    sprite->invisible = (gShopMenuDataPtr->buyScreen || (scroll && ShopGrid_GetCurrentItemIndex() >= finalHalfScreen));
}

static void SpriteCB_UpArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (!gShopMenuDataPtr->buyScreen
     || gShopMenuDataPtr->itemQuantity == (gShopMenuDataPtr->maxItemQuantity - 1)
     || (gShopMenuDataPtr->itemQuantity == 0 && gShopMenuDataPtr->maxItemQuantity == 0)
     || gShopMenuDataPtr->buyWindow);
}

static void SpriteCB_DownArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (!gShopMenuDataPtr->buyScreen
     || gShopMenuDataPtr->itemQuantity == 0
     || gShopMenuDataPtr->buyWindow);
}

#if MART_KEEPER_ICON == TRUE
static void SpriteCB_MartKeeper(struct Sprite *sprite)
{
    s16 *data = sprite->data;

    // switch back to idle once the description printer is finished.
    if (sKeeper_Anim == MART_KEEPER_ANIM_TALK)
    {
        RunTextPrinters();

        if (!IsTextPrinterActive(sPokeMartData.winId))
        {
            sKeeper_Anim = MART_KEEPER_ANIM_IDLE;
            StartSpriteAnim(sprite, sKeeper_Anim);
        }
    }
}
#endif

static void SpriteCB_CategoryArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->x2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->y2 = ShopGrid_GetGridYCursor() * 26;
    sprite->invisible = (gShopMenuDataPtr->buyScreen);
}
