#ifndef GUARD_CONSTANTS_UI_SHOP_H
#define GUARD_CONSTANTS_UI_SHOP_H

#define NUM_SHOP_ITEMS_PER_CATEGORIES 150
#define NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS 10

#define SHOP_WINDOW_MAIN 0

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

enum ShopMenuGridModes
{
    SHOP_GRID_HORIZONTAL,   // presto
    SHOP_GRID_VERTICAL,     // pokemart
};

enum ShopMenuResetIdxTypes
{
    SHOP_IDX_RESET_CATEGORY = (1 << 0),
    SHOP_IDX_RESET_ITEM = (1 << 1),
    SHOP_IDX_RESET_X_GRID = (1 << 2),
    SHOP_IDX_RESET_Y_GRID = (1 << 3),
    SHOP_IDX_RESET_ALL = (SHOP_IDX_RESET_CATEGORY | SHOP_IDX_RESET_ITEM | SHOP_IDX_RESET_X_GRID | SHOP_IDX_RESET_Y_GRID)
};

typedef void (*ShopGridFunc)(s32, s32);

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
    u8 gridMode;           // no longer functions for actual grid, mostly useful for internal usage e.g. item icons.

    // functions that may be called in certain contexts.
    void (*handleFrontend)(void);      // what to do when refreshing the screen for e.g. show purchase menu
    u32 (*handleTotalPrice)(u16, u16); // what price to return for the backend. used for Presto App fee.
    void (*handleGrid)(s32, s32);      // what to update when pressing the dpads
    void (*handleLR)(s32);             // vertical grid only
};

struct ShopMenuData
{
    const struct ShopMenuConfigs *configs;
    const u16 *products;
    MainCallback savedCallback;

    u8 notEnoughMoneyWindow:1;
    u8 sortCategories:1;
    u8 buyScreen:1;
    u8 buyWindow:1;

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

#define WRITE_CRITERIA_GOAL_VAR(varId, varValue) ((varId << 16) | (varValue))
#define READ_CRITERIA_GOAL_VAR_ID(criteria) ((criteria) >> 16)
#define READ_CRITERIA_GOAL_VAR_VALUE(criteria) ((criteria) & 0xFFFF)

typedef bool32 (*ShopCriteriaFunc)(u16);

#endif // GUARD_CONSTANTS_UI_SHOP_H
