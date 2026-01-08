#include "global.h"
#include "ui_presto.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "field_message_box.h"
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
#include "event_object_movement.h"
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

// unrelated to keeper sprite
enum PokeMartKeeperDialogues
{
    MART_KEEPER_DIALOGUE_NONE,

    MART_KEEPER_DIALOGUE_PURCHASE,
    MART_KEEPER_DIALOGUE_SUCCESS,
    MART_KEEPER_DIALOGUE_FAILURE,

    NUM_MART_KEEPER_DIALOGUES
};

// structs
struct PokeMartData
{
    const u16 *products;
    enum PokeMartKeeperDialogues dialogue;
    u8 active:1;
    s8 input:7;
    u8 winId;
    #if MART_KEEPER_ICON == TRUE
    u8 keeperSpriteId;
    #endif
    u8 arrowSpriteId; // category sprite
    u16 gfxId;
};

// ram
static EWRAM_INIT struct PokeMartData sPokeMartData =
{
    .dialogue = MART_KEEPER_DIALOGUE_NONE,
    .active = FALSE,
    .input = MART_INPUT_BUY,
    .winId = WINDOW_NONE,
    #if MART_KEEPER_ICON == TRUE
    .keeperSpriteId = SPRITE_NONE,
    #endif
    .arrowSpriteId = SPRITE_NONE,
    .gfxId = NUM_OBJ_EVENT_GFX,
};

// declarations
static void MartInterface_Open(void);

static void Task_MartInterface_Idle(u8);
static void Task_MartInterface_HandleBuyOrSell(u8);
static void Task_MartInterface_HandleQuit(u8);
static void Task_MartInterface_FadeIntoMenu(u8);
static void Task_MartReload_WaitForFade(u8);

static void CB2_MartMenu_OpenBuyMenu(void);
static void CB2_MartMenu_OpenSellMenu(void);
static void CB2_MartReload_ReturnToField(void);

static void FieldCB_MartReload_PrepareInterface(void);

static void MartHelper_UpdateFrontEnd(void);
static u32 MartHelper_InitItemsList(void);

static void MartPrint_AddTextPrinter(u32, u32, u32, u32, const u8 *);
static void MartPrint_PlayersMoney(void);
static void MartPrint_Category(void);
static void MartPrint_ItemInfo(void);
static void MartPrint_KeeperDialogue(void);
static void MartPrint_ItemQuantity(void);

static u32 MartPurchase_GetTotalItemPrice(u16, u16);

static void MartSprite_Init(void);
static void MartSprite_SetCategoryArrowSpriteId(u32);
static u32 MartSprite_GetCategoryArrowSpriteId(void);

#if MART_KEEPER_ICON == TRUE
static u32 MartSprite_GetKeeperIndex(void);
static const u32 *MartSprite_GetKeeperGfx(void);
static const u16 *MartSprite_GetKeeperPal(void);
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
static const struct {
    u32 gfxId;
    const u32 *gfx;
    const u16 *pal;
} sPokeMart_KeeperGraphics[] =
{
    {
        .gfxId = OBJ_EVENT_GFX_MART_EMPLOYEE,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/shopkeeper.4bpp.smol"),
        .pal = (const u16[])INCBIN_U16("graphics/ui_menus/mart/shopkeeper.gbapal"),
    },
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
        [MART_KEEPER_ANIM_IDLE + MART_KEEPER_EMOTE_NEUTRAL] = (const union AnimCmd[]){
            ANIMCMD_FRAME((MART_KEEPER_ANIM_IDLE + MART_KEEPER_EMOTE_NEUTRAL) * 16),
            ANIMCMD_END
        },
        [MART_KEEPER_ANIM_TALK + MART_KEEPER_EMOTE_NEUTRAL] = (const union AnimCmd[]){
            ANIMCMD_FRAME((MART_KEEPER_ANIM_IDLE + MART_KEEPER_EMOTE_NEUTRAL) * 16, 5),
            ANIMCMD_FRAME((MART_KEEPER_ANIM_TALK + MART_KEEPER_EMOTE_NEUTRAL) * 16, 5),
            ANIMCMD_JUMP(0)
        },

        [MART_KEEPER_ANIM_IDLE + (MART_KEEPER_EMOTE_WAIT * 2)] = (const union AnimCmd[]){
            ANIMCMD_FRAME((MART_KEEPER_ANIM_IDLE + (MART_KEEPER_EMOTE_WAIT * 2)) * 16),
            ANIMCMD_END
        },
        [MART_KEEPER_ANIM_TALK + (MART_KEEPER_EMOTE_WAIT * 2)] = (const union AnimCmd[]){
            ANIMCMD_FRAME((MART_KEEPER_ANIM_IDLE + (MART_KEEPER_EMOTE_WAIT * 2)) * 16, 5),
            ANIMCMD_FRAME((MART_KEEPER_ANIM_TALK + (MART_KEEPER_EMOTE_WAIT * 2)) * 16, 5),
            ANIMCMD_JUMP(0)
        },

        [MART_KEEPER_ANIM_IDLE + (MART_KEEPER_EMOTE_HAPPY * 2)] = (const union AnimCmd[]){
            ANIMCMD_FRAME((MART_KEEPER_ANIM_IDLE + (MART_KEEPER_EMOTE_HAPPY * 2)) * 16),
            ANIMCMD_END
        },

        [MART_KEEPER_ANIM_TALK + (MART_KEEPER_EMOTE_HAPPY * 2)] = (const union AnimCmd[]){
            ANIMCMD_FRAME((MART_KEEPER_ANIM_IDLE + (MART_KEEPER_EMOTE_HAPPY * 2)) * 16, 5),
            ANIMCMD_FRAME((MART_KEEPER_ANIM_TALK + (MART_KEEPER_EMOTE_HAPPY * 2)) * 16, 5),
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
        .y = (TILE_TO_PIXELS(1)) + 16,
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
        .x = (TILE_TO_PIXELS(26) + 4) + 8,
        .y = (TILE_TO_PIXELS(12) + 4) + 4,
        .callback = SpriteCB_UpArrowSmall,
    },
    [SHOP_SPRITE_DOWN_ARROW_SMALL] =
    {
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mart/arrow_down_small.4bpp.smol"),
        .x = (TILE_TO_PIXELS(26) + 4) + 8,
        .y = (TILE_TO_PIXELS(16) + 4) + 4,
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
    .handleInitList = MartHelper_InitItemsList,
};

static const struct MenuAction sPokeMart_MenuActions[] =
{
    [MART_INPUT_BUY]  = { COMPOUND_STRING("Buy"),     { .void_u8 = Task_MartInterface_HandleBuyOrSell } },
    [MART_INPUT_SELL] = { COMPOUND_STRING("Sell"),    { .void_u8 = Task_MartInterface_HandleBuyOrSell } },
    [MART_INPUT_QUIT] = { COMPOUND_STRING("See ya!"), { .void_u8 = Task_MartInterface_HandleQuit } }
};

// either {a} {Premier Ball} or {number} {Premier Balls}
// appended to MART_KEEPER_DIALOGUE_SUCCESS.
static const u8 sPokeMart_KeeperPremierBallDialogue[] = _("I'll throw in {STR_VAR_2} {STR_VAR_3} there, too.");

static const u8 *const sPokeMart_KeeperDialogues[] =
{
    [MART_KEEPER_DIALOGUE_NONE] = COMPOUND_STRING("ERROR"),

    [MART_KEEPER_DIALOGUE_PURCHASE] = COMPOUND_STRING(
        "{STR_VAR_1}? Certainly. How many would you like?\n"
        "Currently you owned {STR_VAR_2} in your inventory."),

    [MART_KEEPER_DIALOGUE_SUCCESS] = COMPOUND_STRING(
        "Here you go! Thank you very much.\n"
        "{STR_VAR_1}"),

    [MART_KEEPER_DIALOGUE_FAILURE] = COMPOUND_STRING(
        "You don't have enough money to buy\n"
        "{STR_VAR_1} {STR_VAR_2}!"),
};

// code
bool32 PokeMart_IsActive(void)
{
    return sPokeMartData.active;
}

void OpenPokeMartWithinScript(struct ScriptContext *ctx)
{
    const u16 *products = (const u16 *)ScriptReadWord(ctx);
    if (!products)
    {
        return;
    }

    u32 objId = GetObjectEventIdByLocalIdAndMap(gSpecialVar_LastTalked,
                                                    gSaveBlock1Ptr->location.mapNum,
                                                    gSaveBlock1Ptr->location.mapGroup);
    u32 gfxId = gObjectEvents[objId].graphicsId;
    sPokeMartData.gfxId = gfxId;
    sPokeMartData.products = products;
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

    sPokeMartData.active = TRUE;
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

    #if MART_KEEPER_ICON == TRUE
    MartSprite_SetKeeperSpriteId(SPRITE_NONE);
    #endif

    sPokeMartData.dialogue = MART_KEEPER_DIALOGUE_NONE;
    sPokeMartData.winId = WINDOW_NONE;
    MartSprite_SetCategoryArrowSpriteId(SPRITE_NONE);
    sPokeMartData.input = MART_INPUT_BUY;
    sPokeMartData.gfxId = NUM_OBJ_EVENT_GFX;
    sPokeMartData.active = FALSE;

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
        sPokeMartData.dialogue = MART_KEEPER_DIALOGUE_NONE;
        SetMainCallback2(sPokeMartData.input == MART_INPUT_BUY ? CB2_MartMenu_OpenBuyMenu : CB2_MartMenu_OpenSellMenu);
        DestroyTask(taskId);
    }
}

static void Task_MartReload_WaitForFade(u8 taskId)
{
    if (IsWeatherNotFadingIn())
    {
        if (ShowFieldMessage(gText_CanIHelpWithAnythingElse));
        {
            MartInterface_Open();
            DestroyTask(taskId);
        }
    }
}

static void CB2_MartMenu_OpenBuyMenu(void)
{
    ShopMenu_Init(&sPokeMartShopConfigs, CB2_MartReload_ReturnToField);
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
        MartSprite_Init();

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

    ShopPrint_HelpBar();

    MartPrint_PlayersMoney();
    MartPrint_Category();
    MartPrint_ItemInfo();

    MartPrint_KeeperDialogue();
    MartPrint_ItemQuantity();

    #if MART_KEEPER_ICON == TRUE
    switch (sPokeMartData.dialogue)
    {
    default:
        MartSprite_SetKeeperEmote(MART_KEEPER_EMOTE_NEUTRAL);
        break;
    case MART_KEEPER_DIALOGUE_PURCHASE:
    case MART_KEEPER_DIALOGUE_FAILURE:
        MartSprite_SetKeeperEmote(MART_KEEPER_EMOTE_WAIT);
        break;
    case MART_KEEPER_DIALOGUE_SUCCESS:
        MartSprite_SetKeeperEmote(MART_KEEPER_EMOTE_HAPPY);
        break;
    }

    MartSprite_SetKeeperAnim(MART_KEEPER_ANIM_TALK);
    #endif // MART_KEEPER_ICON
}

static u32 MartHelper_InitItemsList(void)
{
    u8 numItems[NUM_SHOP_CATEGORIES] = {0};
    u32 i = 0;

    ShopInventory_ProcessBuyAgainItems(numItems);

    while (sPokeMartData.products[i++] != ITEM_NONE)
    {
        u32 itemId = sPokeMartData.products[i];

        if (!GetItemPrice(itemId))
            continue;

        enum Pocket pocket = GetItemPocket(itemId);
        enum ShopMenuCategories category = ShopInventory_CanItemBeListed(itemId, pocket);

        if (category == NUM_SHOP_CATEGORIES)
            continue;

        ShopInventory_TryAddItemToList(itemId, GetItemShopCategory(itemId), numItems);
    }

    return ShopInventory_ProcessCategoryCounts(numItems);
}

static void MartPrint_AddTextPrinter(u32 fontId, u32 x, u32 y, u32 speed, const u8 *str)
{
    FillWindowPixelBuffer(sPokeMartData.winId, PIXEL_FILL(0));
    AddTextPrinterParameterized4(sPokeMartData.winId, fontId, x, y, 0, 0, ShopConfig_GetFontColors(SHOP_FNTCLR_PRIMARY), speed, str);
}

static void MartPrint_PlayersMoney(void)
{
    const u8 *str = COMPOUND_STRING("Money:");
    u32 fontId = FONT_SMALL_NARROW;
    u32 x = TILE_TO_PIXELS(1);
    u32 y = TILE_TO_PIXELS(0);

    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    ConvertIntToDecimalStringN(gStringVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("¥ {STR_VAR_1}"));

    str = gStringVar4;
    x = TILE_TO_PIXELS(1) + GetStringRightAlignXOffset(fontId, str, TILE_TO_PIXELS(12));
    y = TILE_TO_PIXELS(0);

    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);
}

static void MartPrint_Category(void)
{
    const u8 *str = gShopCategoryNames[ShopGrid_CurrentCategoryRow()];
    u32 fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(8));
    u32 x = TILE_TO_PIXELS(1) + GetStringCenterAlignXOffset(fontId, str, TILE_TO_PIXELS(8));
    u32 y = (TILE_TO_PIXELS(2) - 3) + SHOP_BG0_OFFSET;

    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);
}

static void MartPrint_ItemInfo(void)
{
    u32 itemId = ShopInventory_GetChosenItemId();
    const u8 *str = NULL;
    u32 fontId, x, y, speed = (gMain.state || MART_KEEPER_ICON == FALSE) ? 0 : GetPlayerTextSpeedDelay();

    str = GetItemName(itemId);
    fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(8));
    x = TILE_TO_PIXELS(1) + GetStringCenterAlignXOffset(fontId, str, TILE_TO_PIXELS(8));
    y = (TILE_TO_PIXELS(8) + 4) + SHOP_BG0_OFFSET;

    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    ConvertIntToDecimalStringN(gStringVar1, MartPurchase_GetTotalItemPrice(itemId, 0), STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("¥ {STR_VAR_1}"));

    str = gStringVar4;
    fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(8));
    x = TILE_TO_PIXELS(1) + GetStringCenterAlignXOffset(fontId, str, TILE_TO_PIXELS(8));
    y += TILE_TO_PIXELS(1) + 4;

    ShopPrint_AddTextPrinter(fontId, x, y, SHOP_FNTCLR_PRIMARY, str);

    // don't print when shopkeeper's text is loaded
    if (ShopHelper_IsPurchaseMode())
    {
        return;
    }

    str = GetItemDescription(itemId);
    fontId = GetFontIdToFit(str, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(MART_DESC_WIN_WIDTH));
    x = TILE_TO_PIXELS(0);
    y = TILE_TO_PIXELS(0);

    MartPrint_AddTextPrinter(fontId, x, y, speed, str);
}

static enum PokeMartKeeperDialogues MartPrint_ConvertModeToDialogue(void)
{
    switch (ShopHelper_GetMode())
    {
    default:
        return MART_KEEPER_DIALOGUE_NONE;
    case SHOP_MODE_PURCHASE:
        return MART_KEEPER_DIALOGUE_PURCHASE;
    case SHOP_MODE_SUCCESS:
        return MART_KEEPER_DIALOGUE_SUCCESS;
    case SHOP_MODE_FAILURE:
        return MART_KEEPER_DIALOGUE_FAILURE;
    }
}

static void MartPrint_KeeperDialogue(void)
{
    u32 fontId, x = 0, y = 0, speed = (gMain.state || MART_KEEPER_ICON == FALSE) ? 0 : GetPlayerTextSpeedDelay();

    if (!ShopHelper_IsPurchaseMode())
    {
        sPokeMartData.dialogue = MART_KEEPER_DIALOGUE_NONE;
        return;
    }
    else
    {
        enum PokeMartKeeperDialogues dialogue = MartPrint_ConvertModeToDialogue();
        u32 itemId = gShopMenuDataPtr->selectedItemId;
        u32 ownedItems = CountTotalItemQuantityInBag(itemId);
        u32 itemQuantity = gShopMenuDataPtr->itemQuantity + 1;

        // don't reprint if we get the same dialogue
        if (dialogue == sPokeMartData.dialogue)
        {
            return;
        }

        sPokeMartData.dialogue = dialogue;

        switch (dialogue)
        {
        default:
            break;
        case MART_KEEPER_DIALOGUE_PURCHASE:
            StringCopy(gStringVar1, GetItemName(itemId));
            ConvertIntToDecimalStringN(gStringVar2, ownedItems, STR_CONV_MODE_LEFT_ALIGN, 4);
            break;
        case MART_KEEPER_DIALOGUE_SUCCESS:
            {
                StringCopy(gStringVar1, COMPOUND_STRING(" "));

                if (GetItemShopCategory(itemId) == SHOP_CATEGORY_POKE_BALLS && itemQuantity >= 10)
                {
                    ConvertIntToDecimalStringN(gStringVar2, itemQuantity / 10, STR_CONV_MODE_LEFT_ALIGN, 4);
                    StringCopy(gStringVar3, GetItemName(ITEM_PREMIER_BALL));
                    StringExpandPlaceholders(gStringVar1, sPokeMart_KeeperPremierBallDialogue);
                }

                break;
            }
        case MART_KEEPER_DIALOGUE_FAILURE:
            ConvertIntToDecimalStringN(gStringVar1, itemQuantity, STR_CONV_MODE_LEFT_ALIGN, 4);
            StringCopy(gStringVar2, GetItemName(itemId));
            break;
        }

        StringExpandPlaceholders(gStringVar4, sPokeMart_KeeperDialogues[dialogue]);
    }

    fontId = GetFontIdToFit(gStringVar4, FONT_SMALL_NARROW, 0, TILE_TO_PIXELS(MART_DESC_WIN_WIDTH));
    MartPrint_AddTextPrinter(fontId, x, y, speed, gStringVar4);
}

static void MartPrint_ItemQuantity(void)
{
    if (!ShopHelper_IsProcessingPurchaseMode())
    {
        return;
    }

    u32 fontId = FONT_SMALL_NARROW, x = 0, y = 0, quantity = 0;
    u32 itemId = gShopMenuDataPtr->selectedItemId;

    // ¥ {money}
    quantity = ShopConfig_Get()->handleTotalPrice(itemId, gShopMenuDataPtr->itemQuantity);
    ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("¥ {STR_VAR_1}"));
    x = GetStringRightAlignXOffset(fontId, gStringVar3, TILE_TO_PIXELS(DISPLAY_TILE_WIDTH - 1));
    y = (TILE_TO_PIXELS(13) + 4) + SHOP_BG0_OFFSET;
    ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, x, y, SHOP_FNTCLR_PRIMARY, gStringVar3);

    // x {num}
    quantity = gShopMenuDataPtr->itemQuantity + 1;
    ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("x{STR_VAR_1}"));
    x = GetStringRightAlignXOffset(fontId, gStringVar3, TILE_TO_PIXELS(DISPLAY_TILE_WIDTH - 1));
    y += TILE_TO_PIXELS(1) + 1;
    ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, x, y, SHOP_FNTCLR_PRIMARY, gStringVar3);
}

static u32 MartPurchase_GetTotalItemPrice(u16 itemId, u16 quantity)
{
    return (quantity + 1) * GetItemPrice(itemId);
}

static void MartSprite_Init(void)
{
    // enables darken coloring for item sprites
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(12, 0));

    LoadCompressedSpriteSheet(&sPokeMart_CategoryArrowSpriteSheet);
    MartSprite_SetCategoryArrowSpriteId(
        CreateSprite(&sPokeMart_CategoryArrowSpriteTemplate, MART_CATEGORY_ARROW_X, MART_CATEGORY_ARROW_Y, 0));

    #if MART_KEEPER_ICON == TRUE
    struct CompressedSpriteSheet sheet = {
        MartSprite_GetKeeperGfx(),
        (NUM_MART_KEEPER_EMOTES * MART_KEEPER_TOTAL_ANIMS) * ((32 * 32) / 2),
        TAG_MART_KEEPER
    };

    struct SpritePalette palette = {
        MartSprite_GetKeeperPal(),
        TAG_MART_KEEPER
    };

    LoadCompressedSpriteSheet(&sheet);
    LoadSpritePalette(&palette);

    MartSprite_SetKeeperSpriteId(CreateSprite(&sPokeMart_KeeperSpriteTemplate, MART_KEEPER_X, MART_KEEPER_Y, 0));

    if (MartSprite_GetKeeperSpriteId() != SPRITE_NONE)
    {
        struct Sprite *keeper = &gSprites[MartSprite_GetKeeperSpriteId()];

        keeper->sKeeper_StartingTileNum = keeper->oam.tileNum;
        MartSprite_SetKeeperEmote(MART_KEEPER_EMOTE_NEUTRAL);
        MartSprite_SetKeeperAnim(MART_KEEPER_ANIM_IDLE);
    }
    #endif // MART_KEEPER_ICON
}

static void MartSprite_SetCategoryArrowSpriteId(u32 spriteId)
{
    sPokeMartData.arrowSpriteId = spriteId;
}

static u32 UNUSED MartSprite_GetCategoryArrowSpriteId(void)
{
    return sPokeMartData.arrowSpriteId;
}

#if MART_KEEPER_ICON == TRUE
static u32 MartSprite_GetKeeperIndex(void)
{
    for (u32 i = 0; i < ARRAY_COUNT(sPokeMart_KeeperGraphics); i++)
    {
        if (sPokeMartData.gfxId == sPokeMart_KeeperGraphics[i].gfxId)
        {
            return i;
        }
    }

    return 0;
}

static const u32 *MartSprite_GetKeeperGfx(void)
{
    return sPokeMart_KeeperGraphics[MartSprite_GetKeeperIndex()].gfx;
}

static const u16 *MartSprite_GetKeeperPal(void)
{
    return sPokeMart_KeeperGraphics[MartSprite_GetKeeperIndex()].pal;
}

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
}

static void MartSprite_SetKeeperAnim(enum PokeMartKeeperAnims anim)
{
    struct Sprite *keeper = &gSprites[MartSprite_GetKeeperSpriteId()];
    keeper->sKeeper_Anim = anim;
}
#endif

static void SpriteCB_BuyIcon(struct Sprite *sprite)
{
    u32 x2 = ShopConfig_GetTotalShownItems() * ShopGrid_GetGridXCursor();
    sprite->x2 = TILE_TO_PIXELS(x2);

    sprite->invisible = ShopHelper_IsPurchaseMode();
}

static void SpriteCB_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (ShopHelper_IsPurchaseMode()
     || !ShopGrid_GetGridYCursor()
     || gShopMenuDataPtr->numCategories <= ShopConfig_GetTotalShownItemRows());
}

static void SpriteCB_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (ShopHelper_IsPurchaseMode()
     || ShopGrid_GetGridYCursor() == ShopConfig_GetTotalShownCategories() - 1
     || gShopMenuDataPtr->numCategories <= ShopConfig_GetTotalShownItemRows());
}

static void SpriteCB_LeftArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->x2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    u32 halfScreen = ShopGrid_GetXHalfScreen();
    u32 categoryNumItems = ShopInventory_GetCategoryNumItems(ShopGrid_GetCurrentCategoryIndex()) - 1;
    u32 shownItems = (ShopConfig_GetTotalShownItems() - 1);
    bool32 scroll = categoryNumItems > shownItems;

    sprite->invisible = (ShopHelper_IsPurchaseMode() || (scroll && ShopGrid_GetCurrentItemIndex() <= halfScreen) || categoryNumItems <= shownItems);
}

static void SpriteCB_RightArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue;
    sprite->x2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    u32 halfScreen = ShopGrid_GetXHalfScreen();
    u32 categoryNumItems = ShopInventory_GetCategoryNumItems(ShopGrid_GetCurrentCategoryIndex()) - 1;
    u32 shownItems = (ShopConfig_GetTotalShownItems() - 1);
    u32 finalHalfScreen = categoryNumItems - (shownItems - halfScreen);
    bool32 scroll = categoryNumItems > shownItems;

    sprite->invisible = (ShopHelper_IsPurchaseMode() || (scroll && ShopGrid_GetCurrentItemIndex() >= finalHalfScreen) || categoryNumItems <= shownItems);
}

static void SpriteCB_UpArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (!ShopHelper_IsProcessingPurchaseMode()
     || gShopMenuDataPtr->itemQuantity == (gShopMenuDataPtr->maxItemQuantity - 1)
     || (gShopMenuDataPtr->itemQuantity == 0 && gShopMenuDataPtr->maxItemQuantity == 0));
}

static void SpriteCB_DownArrowSmall(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->invisible = (!ShopHelper_IsProcessingPurchaseMode()
     || gShopMenuDataPtr->itemQuantity == 0);
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
        }
    }

    StartSpriteAnimIfDifferent(sprite, sKeeper_Anim + ((u16)sKeeper_Emote * 2));
}
#endif

static void SpriteCB_CategoryArrow(struct Sprite *sprite)
{
    u8 val = sprite->sArrow_SineValue + 128;
    sprite->x2 = gSineTable[val] / 128;
    sprite->sArrow_SineValue += 8;

    sprite->y2 = ShopGrid_GetGridYCursor() * 26;
    sprite->invisible = ShopHelper_IsPurchaseMode();
}
