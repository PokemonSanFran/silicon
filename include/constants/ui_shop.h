#ifndef GUARD_CONSTANTS_UI_SHOP_H
#define GUARD_CONSTANTS_UI_SHOP_H

#define NUM_SHOP_ITEMS_PER_CATEGORIES 150
#define NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS 10

#define SHOP_WINDOW_MAIN 0
#define SHOP_BG0_OFFSET  2

enum ShopMenuBackgrounds
{
    SHOP_BG_WINDOW,

    // if needed
    SHOP_BG_DESC,
    SHOP_BG_EXTRA,

    SHOP_BG_TILEMAP,

    NUM_SHOP_BGS
};

enum ShopMenuCategories
{
    SHOP_CATEGORY_BUY_AGAIN,
    SHOP_CATEGORY_RECOMMENDED,
    SHOP_CATEGORY_MEDICINE,
    SHOP_CATEGORY_POKE_BALLS,
    SHOP_CATEGORY_OTHER_ITEMS,
    SHOP_CATEGORY_POWER_UPS,
    SHOP_CATEGORY_BATTLE_ITEMS,
    SHOP_CATEGORY_BERRIES,
    SHOP_CATEGORY_TMS,
    SHOP_CATEGORY_TREASURES,
    SHOP_CATEGORY_MEGA_STONES,
    SHOP_CATEGORY_Z_CRYSTALS,

    NUM_SHOP_CATEGORIES,

    // shortcuts

    // Recommended/History items are dynamic categories.
    SHOP_CATEGORY_STATIC_START = SHOP_CATEGORY_MEDICINE,

    // Categories that can appear in the recommmended carousel.
    SHOP_CATEGORY_DEFAULT_CAROUSEL_START = SHOP_CATEGORY_STATIC_START,
    SHOP_CATEGORY_DEFAULT_CAROUSEL_END = SHOP_CATEGORY_BERRIES,

    SHOP_CATEGORY_FIELD_CAROUSEL_START = SHOP_CATEGORY_POKE_BALLS,
    SHOP_CATEGORY_FIELD_CAROUSEL_END = SHOP_CATEGORY_OTHER_ITEMS,
};

enum ShopMenuCarousels
{
    SHOP_CAROUSEL_NEED_TO_HEAL,
    SHOP_CAROUSEL_TOURNAMENT_PREP,
    SHOP_CAROUSEL_FOREST_EXPLORE,
    SHOP_CAROUSEL_CAVE_EXPLORE,
    SHOP_CAROUSEL_WATER_EXPLORE,
    SHOP_CAROUSEL_ROUTE_EXPLORE,
    SHOP_CAROUSEL_RANDOM,

    NUM_SHOP_CAROUSELS,
};

enum ShopMenuSprites
{
    SHOP_SPRITE_BUY_ICON,
    SHOP_SPRITE_UP_ARROW,
    SHOP_SPRITE_DOWN_ARROW,
    SHOP_SPRITE_LEFT_ARROW,
    SHOP_SPRITE_RIGHT_ARROW,
    SHOP_SPRITE_UP_ARROW_SMALL,
    SHOP_SPRITE_DOWN_ARROW_SMALL,

    NUM_SHOP_SPRITES,
};

enum ShopMenuSpriteTags
{
    TAG_SHOP_MENU_UI = 0x4200,
    TAG_SHOP_BUY_ICON = TAG_SHOP_MENU_UI,
    TAG_SHOP_UP_ARROW,
    TAG_SHOP_DOWN_ARROW,
    TAG_SHOP_LEFT_ARROW,
    TAG_SHOP_RIGHT_ARROW,
    TAG_SHOP_UP_ARROW_SMALL,
    TAG_SHOP_DOWN_ARROW_SMALL,
};

enum ShopMenuFontColors
{
    SHOP_FNTCLR_PRIMARY,
    SHOP_FNTCLR_SECONDARY,
};

enum ShopMenuCoords
{
    SHOP_COORD_X,
    SHOP_COORD_Y,
    SHOP_COORD_PAD,
    SHOP_COORD_PAD2
};

enum ShopMenuResetIdxTypes
{
    SHOP_IDX_RESET_CATEGORY = (1 << 0),
    SHOP_IDX_RESET_ITEM = (1 << 1),
    SHOP_IDX_RESET_X_GRID = (1 << 2),
    SHOP_IDX_RESET_Y_GRID = (1 << 3),
    SHOP_IDX_RESET_ALL = (SHOP_IDX_RESET_CATEGORY | SHOP_IDX_RESET_ITEM | SHOP_IDX_RESET_X_GRID | SHOP_IDX_RESET_Y_GRID)
};

enum ShopMenuModes
{
    SHOP_MODE_DEFAULT = 0,
    SHOP_MODE_PURCHASE,
    SHOP_MODE_SUCCESS,
    SHOP_MODE_FAILURE,

    NUM_SHOP_MODES
};

struct ShopSpriteConfigs
{
    const u32 *gfx;
    s16 x, y;
    SpriteCallback callback;
};

struct ShopMenuConfigs
{
    // interface graphics
    const struct ShopSpriteConfigs *sprites;
    const u32 *tiles;
    const u32 *map, *mapBuy;
    const u16 *palette;
    const u8 *categoryBlit;
    const u8 (*fontColors)[3];

    // starting points of sprites/blits on the screen.
    const u8 *categoryCoords;
    const u8 *itemIconCoords;

    // constants
    u8 totalShownItems;
    u8 totalShownItemRows; // combined with totalShownItems for the total grand of item icons.
    u8 totalShownCategories;

    // functions that may be called in certain contexts.
    void (*handleFrontend)(void);      // what to do when refreshing the screen for e.g. show purchase menu
    u32 (*handleTotalPrice)(u16, u16); // what price to return for the backend. used for Presto App fee.
};

struct ShopMenuData
{
    const struct ShopMenuConfigs *configs;
    const u16 *products;
    MainCallback savedCallback;
    enum ShopMenuModes mode;

    u8 sortCategories:1;
    u8 categoryIdx:4;
    u8 firstCategory;
    u8 itemIdx, firstItem;

    // onscreen grid, does not include top-left paging
    struct {
        u8 row:4;
        u8 col:4;
    } gridIdx;

    u16 itemQuantity;
    u16 maxItemQuantity;
    u16 selectedItemId;

    u16 recommendedItems[NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS];
    u16 categoryItems[NUM_SHOP_CATEGORIES][NUM_SHOP_ITEMS_PER_CATEGORIES];
    u8 categoryNumItems[NUM_SHOP_CATEGORIES];

    enum ShopMenuCategories categoryList[NUM_SHOP_CATEGORIES];
    u16 numCategories;
};

struct ShopMenuStaticData
{
    u8 *tilemapBuf;
    u8 *itemIconIds;
    u8 spriteIds[NUM_SHOP_SPRITES];
};

struct ShopSprite
{
    enum ShopMenuSprites idx;
    u8 spriteShape:2;
    u8 spriteSize:2;
    u8 padding:4;
    u16 tileTag, size;
    u8 priority;
};

#endif // GUARD_CONSTANTS_UI_SHOP_H
