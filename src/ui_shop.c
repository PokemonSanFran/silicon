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

#define LEFT_PRESS  (-1)
#define RIGHT_PRESS (1)
#define UP_PRESS    (-1)
#define DOWN_PRESS  (1)

#define SHOP_HORIZONTAL_INCREMENT_NUMBER 5

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

enum ShopMenuGraphicsType
{
    SHOP_GFX_TILES,
    SHOP_GFX_TILEMAP,
    SHOP_GFX_TILEMAP_BUY,
    SHOP_GFX_PALETTE,
    SHOP_GFX_CATEGORIES,

    NUM_SHOP_GRAPHICS
};

// structs, typedefs

// ram
static EWRAM_DATA struct ShopMenuStaticData *sShopMenuStaticDataPtr = NULL;
EWRAM_DATA struct ShopMenuData *gShopMenuDataPtr = NULL;

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
static void ShopInventory_Reset(void);
static void ShopInventory_SetItemIdToGrid(u32, u32, u32);

static void ShopPurchase_CalculateMaxQuantity(void);
static bool32 ShopPurchase_IsCategoryOneTimePurchase(enum ShopMenuCategories);
static void ShopPurchase_AddItem(u16, u16);

static void ShopGrid_SwitchMode(void);
static void ShopGrid_VerticalInput(s32);
static void ShopGrid_HorizontalInput(s32);
static u32 ShopGrid_RowInCategory(enum ShopMenuCategories);
enum ShopMenuCategories ShopGrid_CategoryInRow(u8);
enum ShopMenuCategories ShopGrid_CurrentCategoryRow(void);

static void ShopBlit_Category(enum ShopMenuCategories, u32, u32);
static inline void ShopBlit_Categories(void);

static inline void ShopPrint_HelpBar(void);

static const void *const ShopGraphics_GetByType(enum ShopMenuGraphicsType);

static void ShopConfig_RunGridFunc(s32, s32);
static const u8 *ShopConfig_GetFontColors(enum ShopMenuFontColors);

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
    [SHOP_BG_EXTRA] =
    {
        .bg = SHOP_BG_EXTRA,
        .charBaseIndex = 3,
        .mapBaseIndex = 29,
        .priority = 2
    },
    [SHOP_BG_TILEMAP] =
    {
        .bg = SHOP_BG_TILEMAP,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 3
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

static const struct ShopSprite sShopSprites[] =
{
    [SHOP_SPRITE_BUY_ICON] =
    {
        .idx = SHOP_SPRITE_BUY_ICON,
        .tileTag = TAG_SHOP_BUY_ICON,
        .priority = 0,
        .spriteShape = SPRITE_SHAPE(32x32),
        .spriteSize = SPRITE_SIZE(32x32),
        .size = (32 * 32) / 2,
    },
    [SHOP_SPRITE_UP_ARROW] =
    {
        .idx = SHOP_SPRITE_UP_ARROW,
        .tileTag = TAG_SHOP_UP_ARROW,
        .spriteShape = SPRITE_SHAPE(32x16),
        .spriteSize = SPRITE_SIZE(32x16),
        .priority = 0,
        .size = (32 * 16) / 2,
    },
    [SHOP_SPRITE_DOWN_ARROW] =
    {
        .idx = SHOP_SPRITE_DOWN_ARROW,
        .tileTag = TAG_SHOP_DOWN_ARROW,
        .spriteShape = SPRITE_SHAPE(32x16),
        .spriteSize = SPRITE_SIZE(32x16),
        .priority = 0,
        .size = (32 * 16) / 2,
    },
    [SHOP_SPRITE_LEFT_ARROW] =
    {
        .idx = SHOP_SPRITE_LEFT_ARROW,
        .tileTag = TAG_SHOP_LEFT_ARROW,
        .spriteShape = SPRITE_SHAPE(8x16),
        .spriteSize = SPRITE_SIZE(8x16),
        .priority = 0,
        .size = (8 * 16) / 2,
    },
    [SHOP_SPRITE_RIGHT_ARROW] =
    {
        .idx = SHOP_SPRITE_RIGHT_ARROW,
        .tileTag = TAG_SHOP_RIGHT_ARROW,
        .spriteShape = SPRITE_SHAPE(8x16),
        .spriteSize = SPRITE_SIZE(8x16),
        .priority = 0,
        .size = (8 * 16) / 2,
    },
    [SHOP_SPRITE_UP_ARROW_SMALL] =
    {
        .idx = SHOP_SPRITE_UP_ARROW_SMALL,
        .tileTag = TAG_SHOP_UP_ARROW_SMALL,
        .spriteShape = SPRITE_SHAPE(16x8),
        .spriteSize = SPRITE_SIZE(16x8),
        .priority = 0,
        .size = (16 * 8) / 2,
    },
    [SHOP_SPRITE_DOWN_ARROW_SMALL] =
    {
        .idx = SHOP_SPRITE_DOWN_ARROW_SMALL,
        .tileTag = TAG_SHOP_DOWN_ARROW_SMALL,
        .spriteShape = SPRITE_SHAPE(16x8),
        .spriteSize = SPRITE_SIZE(16x8),
        .priority = 0,
        .size = (16 * 8) / 2,
    },
};

static const struct SpriteTemplate sShopSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_SHOP_MENU_UI,
    .oam = &gDummyOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const u8 sText_Help_Bar[]          = _("{DPAD_UPDOWN} Rows {DPAD_LEFTRIGHT} Items {A_BUTTON} Buy {B_BUTTON} Exit {START_BUTTON} Sort Rows");
static const u8 sText_Help_Bar_Buy[]      = _("{DPAD_UPDOWN} +1/-1 {DPAD_LEFTRIGHT} +5/-5 {A_BUTTON} Buy Now {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Complete[] = _("{A_BUTTON} Buy More {B_BUTTON} Return {START_BUTTON} Exit");

const u8 *const gShopCategoryNames[NUM_SHOP_CATEGORIES] =
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

// code

void ShopMenu_Init(const struct ShopMenuConfigs *configs, const u16 *products, MainCallback callback)
{
    gShopMenuDataPtr = AllocZeroed(sizeof(struct ShopMenuData));
    if (!gShopMenuDataPtr)
    {
        SetMainCallback2(callback);
        return;
    }

    sShopMenuStaticDataPtr = AllocZeroed(sizeof(struct ShopMenuStaticData));
    if (!sShopMenuStaticDataPtr)
    {
        FREE_AND_SET_NULL(gShopMenuDataPtr);
        SetMainCallback2(callback);
        return;
    }

    sShopMenuStaticDataPtr->itemIconIds = AllocZeroed(configs->totalShownItems * configs->totalShownItemRows);
    if (!sShopMenuStaticDataPtr->itemIconIds)
    {
        FREE_AND_SET_NULL(sShopMenuStaticDataPtr);
        FREE_AND_SET_NULL(gShopMenuDataPtr);
        SetMainCallback2(callback);
        return;
    }

    gShopMenuDataPtr->configs = configs;
    gShopMenuDataPtr->products = products;
    gShopMenuDataPtr->savedCallback = callback;
    memset(sShopMenuStaticDataPtr->spriteIds, SPRITE_NONE, NUM_SHOP_SPRITES);
    memset(sShopMenuStaticDataPtr->itemIconIds, SPRITE_NONE, configs->totalShownItems * configs->totalShownItemRows);

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
        gMain.state = 0;
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
    sShopMenuStaticDataPtr->tilemapBuf = AllocZeroed(BG_SCREEN_SIZE);
    if (!sShopMenuStaticDataPtr->tilemapBuf)
    {
        ShopHelper_BailExit();
        return;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sShopBgTemplates, NELEMS(sShopBgTemplates));
    SetBgTilemapBuffer(SHOP_BG_TILEMAP, sShopMenuStaticDataPtr->tilemapBuf);
    ScheduleBgCopyTilemapToVram(SHOP_BG_TILEMAP);
    ShowBg(SHOP_BG_WINDOW);
    ShowBg(SHOP_BG_EXTRA);
    ShowBg(SHOP_BG_TILEMAP);
}

static void ShopSetup_Graphics(void)
{
    ResetTempTileDataBuffers();
    DecompressAndCopyTileDataToVram(SHOP_BG_TILEMAP, ShopGraphics_GetByType(SHOP_GFX_TILES), 0, 0, 0);
    DecompressDataWithHeaderWram(ShopGraphics_GetByType(SHOP_GFX_TILEMAP), sShopMenuStaticDataPtr->tilemapBuf);
    LoadPalette(ShopGraphics_GetByType(SHOP_GFX_PALETTE), BG_PLTT_ID(0), PLTT_SIZE_4BPP);
}

static void ShopSetup_Windows(void)
{
    InitWindows(sShopWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(SHOP_WINDOW_MAIN, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(SHOP_WINDOW_MAIN);
    CopyWindowToVram(SHOP_WINDOW_MAIN, COPYWIN_FULL);
}

static void ShopHelper_UpdateFrontEnd(void)
{
    FillWindowPixelBuffer(SHOP_WINDOW_MAIN, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (!gShopMenuDataPtr->buyScreen)
    {
        ShopBlit_Categories();
        ShopSprite_CreateItemSprites();
    }

    ShopConfig_Get()->handleFrontend();
    ShopPrint_HelpBar();

    CopyWindowToVram(SHOP_WINDOW_MAIN, COPYWIN_GFX);

    gShopMenuDataPtr->notEnoughMoneyWindow = FALSE;
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
    TRY_FREE_AND_SET_NULL(sShopMenuStaticDataPtr->itemIconIds);
    TRY_FREE_AND_SET_NULL(sShopMenuStaticDataPtr->tilemapBuf);
    TRY_FREE_AND_SET_NULL(sShopMenuStaticDataPtr);
    TRY_FREE_AND_SET_NULL(gShopMenuDataPtr);
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
        SetMainCallback2(gShopMenuDataPtr->savedCallback);
        ShopHelper_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_Shop_Idle(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        if (!gShopMenuDataPtr->buyWindow)
        {
            if (gShopMenuDataPtr->buyScreen)
            {
                gShopMenuDataPtr->itemQuantity = 0;
                PlaySE(SE_SELECT);
                ShopGrid_SwitchMode();
                if (ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
                {
                    ShopInventory_InitCategoryLists();
                }

                ShopHelper_UpdateFrontEnd();
            }
            else
            {
                PlaySE(SE_PC_OFF);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_Shop_WaitFadeAndExit;
            }

            return;
        }
        else
        {
            gShopMenuDataPtr->itemQuantity = 0;
            gShopMenuDataPtr->buyWindow = FALSE;

            if (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_BUY_AGAIN
             || ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
            {
                ShopInventory_InitCategoryLists();
                ShopGrid_SetCurrentCategoryIndex(0);
                ShopGrid_SetGridXCursor(0);
            }

            gShopMenuDataPtr->selectedItemId = 0;
            ShopGrid_SwitchMode();
            PlaySE(SE_SELECT);

            ShopHelper_UpdateFrontEnd();
            return;
        }
    }

    if (JOY_NEW(A_BUTTON))
    {
        if (!gShopMenuDataPtr->buyScreen)
        {
            PlaySE(SE_SELECT);
            ShopGrid_SwitchMode();
        }
        else
        {
            if (gShopMenuDataPtr->buyWindow)
            {
                gShopMenuDataPtr->buyWindow = FALSE;
                gShopMenuDataPtr->itemQuantity = 0;

                if (ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
                {
                    ShopGrid_SwitchMode();
                    if (gShopMenuDataPtr->selectedItemId == ITEM_NONE)
                    {
                        ShopGrid_SetCurrentItemIndex(0);
                        ShopGrid_SetGridYCursor(0);
                    }

                    PlaySE(SE_SELECT);
                }
            }
            else
            {
                if (GetMoney(&gSaveBlock1Ptr->money) >= ShopConfig_Get()->handleTotalPrice(gShopMenuDataPtr->selectedItemId, gShopMenuDataPtr->itemQuantity))
                {
                    ShopPurchase_AddItem(gShopMenuDataPtr->selectedItemId, gShopMenuDataPtr->itemQuantity);
                    PlaySE(SE_SHOP);
                }
                else
                {
                    gShopMenuDataPtr->notEnoughMoneyWindow = TRUE;
                    PlaySE(SE_FAILURE);
                }
            }
        }

        ShopHelper_UpdateFrontEnd();
        return;
    }

    if (JOY_NEW(START_BUTTON))
    {
        if (!gShopMenuDataPtr->buyScreen && !gShopMenuDataPtr->buyWindow)
        {
            gShopMenuDataPtr->sortCategories ^= 1;
            gShopMenuDataPtr->selectedItemId = 0;

            PlaySE(SE_SELECT);
            ShopGrid_ResetIndexes(SHOP_IDX_RESET_ALL);
            ShopInventory_InitCategoryLists();
            ShopHelper_UpdateFrontEnd();
        }
        else if (gShopMenuDataPtr->buyWindow)
        {
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_Shop_WaitFadeAndExit;
        }

        return;
    }

    // return early for menu that does not need the dpad.
    if (gShopMenuDataPtr->buyWindow)
    {
        return;
    }

    u32 itemIdx = ShopGrid_GetCurrentItemIndex(), categoryIdx = ShopGrid_GetCurrentCategoryIndex();

    if (JOY_NEW(DPAD_UP))
    {
        ShopGrid_VerticalInput(UP_PRESS);
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        ShopGrid_VerticalInput(DOWN_PRESS);
    }

    if (JOY_NEW(DPAD_RIGHT))
    {
        ShopGrid_HorizontalInput(RIGHT_PRESS);
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        ShopGrid_HorizontalInput(LEFT_PRESS);
    }

    if (ShopConfig_GetGridMode() == SHOP_GRID_VERTICAL && ShopConfig_Get()->handleLR)
    {
        if (JOY_NEW(L_BUTTON))
        {
            ShopConfig_Get()->handleLR(LEFT_PRESS);
        }

        if (JOY_NEW(R_BUTTON))
        {
            ShopConfig_Get()->handleLR(RIGHT_PRESS);
        }
    }

    if (categoryIdx != ShopGrid_GetCurrentCategoryIndex()
     || itemIdx != ShopGrid_GetCurrentItemIndex())
    {
        ShopHelper_UpdateFrontEnd();
    }
}

static void ShopSprite_CreateGenericSprites(void)
{
    for (u32 i = 0; i < NUM_SHOP_SPRITES; i++)
    {
        const struct ShopSprite *template = &sShopSprites[i];
        const struct ShopSpriteConfigs *configs = &ShopConfig_Get()->sprites[i];

        struct SpriteTemplate spriteTemplate = sShopSpriteTemplate;

        struct CompressedSpriteSheet sheet = { configs->gfx, template->size, template->tileTag };

        LoadCompressedSpriteSheet(&sheet);
        spriteTemplate.tileTag = template->tileTag;

        struct SpritePalette palette = { ShopGraphics_GetByType(SHOP_GFX_PALETTE), TAG_SHOP_MENU_UI };
        LoadSpritePalette(&palette);

        struct OamData oamData = gDummyOamData;

        oamData.shape = template->spriteShape;
        oamData.size = template->spriteSize;
        oamData.priority = template->priority;

        spriteTemplate.oam = &oamData;

        spriteTemplate.callback = configs->callback;
        if (!spriteTemplate.callback)
        {
            spriteTemplate.callback = SpriteCallbackDummy;
        }

        u32 spriteId = CreateSprite(&spriteTemplate, configs->x, configs->y, 0);
        sShopMenuStaticDataPtr->spriteIds[template->idx] = spriteId;

        // store original x/y. useful for later.
        gSprites[spriteId].data[1] = configs->x;
        gSprites[spriteId].data[2] = configs->y;
    }
}

static void ShopSprite_CreateItemSprite(u16 itemId, u8 idx, u8 x, u8 y)
{
    u32 spriteIdx = idx;

    if (sShopMenuStaticDataPtr->itemIconIds[spriteIdx] != SPRITE_NONE || (!itemId || itemId >= ITEMS_COUNT))
        return;

    u32 spriteId = AddItemIconSprite(spriteIdx, spriteIdx, itemId);
    gSprites[spriteId].x2 = x;
    gSprites[spriteId].y2 = y;
    gSprites[spriteId].oam.priority = 1;

    sShopMenuStaticDataPtr->itemIconIds[spriteIdx] = spriteId;
}

static void ShopSprite_CreateItemSprites(void)
{
    const struct ShopMenuConfigs *configs = ShopConfig_Get();
    u32 x = configs->itemIconCoords[SHOP_COORD_X], y = configs->itemIconCoords[SHOP_COORD_Y];

    ShopSprite_DestroyItemSprites();

    for (u32 i = 0, temp = 0, j = 0; i < ShopConfig_GetTotalShownItemRows(); i++)
    {
        for (u32 k = 0; k < ShopConfig_GetTotalShownItems(); k++)
        {
            u32 row = (ShopGrid_GetCurrentCategoryIndex() + i) % gShopMenuDataPtr->numCategories;
            u32 idx = k;

            if (ShopGrid_CurrentCategoryRow() == ShopGrid_CategoryInRow(row))
            {
                idx += ShopGrid_GetFirstItemIndex();
            }

            if (ShopConfig_GetGridMode() == SHOP_GRID_VERTICAL)
            {
                row = ShopGrid_GetCurrentCategoryIndex();
                idx = j + (ShopGrid_GetFirstItemIndex() * ShopConfig_GetTotalShownItems());
            }

            ShopSprite_CreateItemSprite(ShopInventory_GetItemIdFromGrid(row, idx), temp, x, y);

            x += configs->itemIconCoords[SHOP_COORD_PAD];
            temp++, j++;
        }

        x = configs->itemIconCoords[SHOP_COORD_X];
        y += configs->itemIconCoords[SHOP_COORD_PAD2];
    }
}

static void ShopSprite_DestroyItemSprites(void)
{
    for (u32 i = 0; i < ShopConfig_GetTotalShownItemsOnScreen(); i++)
    {
        if (sShopMenuStaticDataPtr->itemIconIds[i] != SPRITE_NONE)
        {
            DestroySprite(&gSprites[sShopMenuStaticDataPtr->itemIconIds[i]]);
            FreeSpritePaletteByTag(i);
            FreeSpriteTilesByTag(i);
            sShopMenuStaticDataPtr->itemIconIds[i] = SPRITE_NONE;
        }
    }
}

static void ShopSprite_ToggleItemIconsVisibility(void)
{
    for (u32 i = 0; i < ShopConfig_GetTotalShownItemsOnScreen(); i++)
    {
        u32 spriteId = sShopMenuStaticDataPtr->itemIconIds[i];
        if (spriteId != SPRITE_NONE)
        {
            gSprites[spriteId].invisible ^= 1;
        }
    }
}

static void ShopInventory_InitCategoryLists(void)
{
    ShopInventory_Reset();

    enum ShopMenuCategories category = gShopMenuDataPtr->sortCategories ? SHOP_CATEGORY_STATIC_START : 0;
    u32 numCategories = 0;

    for (u32 idx = 0; category < NUM_SHOP_CATEGORIES; category++)
    {
        category %= NUM_SHOP_CATEGORIES;

        // Never accept Buy Again or Recommended categories when sorting.
        if (gShopMenuDataPtr->sortCategories && category < SHOP_CATEGORY_STATIC_START)
        {
            break;
        }

        for (u32 itemId = 0; itemId < ITEMS_COUNT; itemId++)
        {
            // Continue to the next category if the current category is full.
            if (gShopMenuDataPtr->categoryNumItems[idx] >= NUM_SHOP_ITEMS_PER_CATEGORIES)
            {
                gShopMenuDataPtr->categoryNumItems[idx] = NUM_SHOP_ITEMS_PER_CATEGORIES;
                break;
            }

            if (category == SHOP_CATEGORY_BUY_AGAIN && gSaveBlock3Ptr->shopBuyAgainItems[0])
            {
                if (itemId >= MAX_PRESTO_BUY_AGAIN_ITEMS
                 || !gSaveBlock3Ptr->shopBuyAgainItems[itemId])
                {
                    break;
                }

                ShopInventory_SetItemIdToGrid(gSaveBlock3Ptr->shopBuyAgainItems[itemId], idx, gShopMenuDataPtr->categoryNumItems[idx]);
                gShopMenuDataPtr->categoryNumItems[idx]++;
            }
            else if (category == SHOP_CATEGORY_RECOMMENDED)
            {
                if (itemId >= NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS)
                    break;

                ShopInventory_SetItemIdToGrid(gShopMenuDataPtr->recommendedItems[itemId], idx, gShopMenuDataPtr->categoryNumItems[idx]);
                gShopMenuDataPtr->categoryNumItems[idx]++;
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

                if (!GetItemPrice(itemId))
                    canBuy = FALSE;

                if (canBuy)
                {
                    ShopInventory_SetItemIdToGrid(itemId, idx, gShopMenuDataPtr->categoryNumItems[idx]);
                    gShopMenuDataPtr->categoryNumItems[idx]++;
                }
            }
        }

        if (gShopMenuDataPtr->categoryNumItems[idx] != 0)
        {
            DebugPrintf("category %S has a total of %d items", gShopCategoryNames[category], gShopMenuDataPtr->categoryNumItems[idx]);
            DebugPrintf("which means it'll have a total of %d rows", gShopMenuDataPtr->categoryNumItems[idx] / ShopConfig_GetTotalShownItems());
            gShopMenuDataPtr->categoryList[numCategories] = category;
            numCategories++, idx++;
        }
    }

    gShopMenuDataPtr->numCategories = numCategories;
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
                randItemNum = (Random() + i) % gShopMenuDataPtr->categoryNumItems[randRow];
                if (!ShopInventory_IsItemRecommended(ShopInventory_GetItemIdFromGrid(randRow, randItemNum)))
                {
                    gShopMenuDataPtr->recommendedItems[i] = ShopInventory_GetItemIdFromGrid(randRow, randItemNum);
                }
            }
            while (gShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        case SHOP_CAROUSEL_TOURNAMENT_PREP:
            do
            {
                randRow = ShopGrid_RowInCategory((Random() % 2) ? SHOP_CATEGORY_BATTLE_ITEMS : SHOP_CATEGORY_TMS);
                randItemNum = (Random() + i) % gShopMenuDataPtr->categoryNumItems[randRow];
                if (!ShopInventory_IsItemRecommended(ShopInventory_GetItemIdFromGrid(randRow, randItemNum)))
                {
                    gShopMenuDataPtr->recommendedItems[i] = ShopInventory_GetItemIdFromGrid(randRow, randItemNum);
                }
            }
            while (gShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
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
                randItemNum = (Random() + i) % gShopMenuDataPtr->categoryNumItems[randRow];

                if (ShopInventory_IsItemUsefulInForest(ShopInventory_GetItemIdFromGrid(randRow, randItemNum))
                 && !ShopInventory_IsItemRecommended(ShopInventory_GetItemIdFromGrid(randRow, randItemNum)))
                {
                    gShopMenuDataPtr->recommendedItems[i] = ShopInventory_GetItemIdFromGrid(randRow, randItemNum);
                }
            }
            while (gShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        case SHOP_CAROUSEL_WATER_EXPLORE:
            do
            {
                randRow = (Random() % SHOP_CATEGORY_FIELD_CAROUSEL_END);
                // Prevent non-field rows.
                if (randRow < SHOP_CATEGORY_FIELD_CAROUSEL_START)
                    randRow += SHOP_CATEGORY_FIELD_CAROUSEL_START;

                randRow = ShopGrid_RowInCategory(randRow);
                randItemNum = (Random() + i) % gShopMenuDataPtr->categoryNumItems[randRow];

                if (ShopInventory_IsItemUsefulInWater(ShopInventory_GetItemIdFromGrid(randRow, randItemNum))
                 && !ShopInventory_IsItemRecommended(ShopInventory_GetItemIdFromGrid(randRow, randItemNum)))
                {
                    gShopMenuDataPtr->recommendedItems[i] = ShopInventory_GetItemIdFromGrid(randRow, randItemNum);
                }
            }
            while (gShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        case SHOP_CAROUSEL_CAVE_EXPLORE:
            do
            {
                randRow = (Random() % SHOP_CATEGORY_FIELD_CAROUSEL_END);
                // Prevent non-field rows.
                if (randRow < SHOP_CATEGORY_FIELD_CAROUSEL_START)
                    randRow += SHOP_CATEGORY_FIELD_CAROUSEL_START;

                randRow = ShopGrid_RowInCategory(randRow);
                randItemNum = (Random() + i) % gShopMenuDataPtr->categoryNumItems[randRow];

                if (ShopInventory_IsItemUsefulInCave(ShopInventory_GetItemIdFromGrid(randRow, randItemNum))
                 && !ShopInventory_IsItemRecommended(ShopInventory_GetItemIdFromGrid(randRow, randItemNum)))
                {
                    gShopMenuDataPtr->recommendedItems[i] = ShopInventory_GetItemIdFromGrid(randRow, randItemNum);
                }
            }
            while (gShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
            break;
        default:
            do
            {
                randRow = (Random() % SHOP_CATEGORY_DEFAULT_CAROUSEL_END);
                // Prevent Recommended/Buy Again row.
                if (randRow < SHOP_CATEGORY_DEFAULT_CAROUSEL_START)
                    randRow += SHOP_CATEGORY_DEFAULT_CAROUSEL_START;

                randRow = ShopGrid_RowInCategory(randRow);
                randItemNum = (Random() + i) % gShopMenuDataPtr->categoryNumItems[randRow];

                if (!ShopInventory_IsItemRecommended(ShopInventory_GetItemIdFromGrid(randRow, randItemNum)))
                {
                    gShopMenuDataPtr->recommendedItems[i] = ShopInventory_GetItemIdFromGrid(randRow, randItemNum);
                }
            }
            while (gShopMenuDataPtr->recommendedItems[i] == ITEM_NONE);
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
        if (gShopMenuDataPtr->recommendedItems[i] == itemId)
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

static void ShopInventory_Reset(void)
{
    memset(gShopMenuDataPtr->categoryList, NUM_SHOP_CATEGORIES, NUM_SHOP_CATEGORIES * sizeof(enum ShopMenuCategories));
    memset(gShopMenuDataPtr->categoryNumItems, 0, NUM_SHOP_CATEGORIES * sizeof(u8));
    memset(gShopMenuDataPtr->categoryItems, ITEM_NONE, (NUM_SHOP_CATEGORIES * NUM_SHOP_ITEMS_PER_CATEGORIES) * sizeof(u16));
}

static void ShopInventory_SetItemIdToGrid(u32 itemId, u32 category, u32 idx)
{
    gShopMenuDataPtr->categoryItems[category][idx] = itemId;
}

u32 ShopInventory_GetItemIdFromGrid(u32 x, u32 y)
{
    return gShopMenuDataPtr->categoryItems[x][y];
}

u32 ShopInventory_GetChosenItemId(void)
{
    return ShopInventory_GetItemIdFromGrid(ShopGrid_GetCurrentCategoryIndex(), ShopGrid_GetCurrentItemIndex());
}

static void ShopPurchase_CalculateMaxQuantity(void)
{
    u16 itemId = gShopMenuDataPtr->selectedItemId;
    u16 maxItemQuantity = GetMoney(&gSaveBlock1Ptr->money) / ShopConfig_Get()->handleTotalPrice(itemId, 0);

    if (maxItemQuantity > MAX_BAG_ITEM_CAPACITY)
        gShopMenuDataPtr->maxItemQuantity = MAX_BAG_ITEM_CAPACITY;
    else
        gShopMenuDataPtr->maxItemQuantity = maxItemQuantity;
}

static bool32 ShopPurchase_IsCategoryOneTimePurchase(enum ShopMenuCategories category)
{
    return (category == SHOP_CATEGORY_TMS
            || category == SHOP_CATEGORY_MEGA_STONES
            || category == SHOP_CATEGORY_Z_CRYSTALS);
}

static void ShopPurchase_AddItem(u16 itemId, u16 quantity)
{
    u16 price = ShopConfig_Get()->handleTotalPrice(itemId, quantity);
    bool32 newItem = TRUE;
    u32 oldItem = 0;
    u32 bak = gSaveBlock3Ptr->shopBuyAgainItems[0];

    RemoveMoney(&gSaveBlock1Ptr->money, price);
    AddBagItem(itemId, quantity + 1);

    gShopMenuDataPtr->buyWindow = TRUE;

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

    if (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_BUY_AGAIN
     || ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
    {
        u32 flag = 0;

        if (ShopConfig_GetGridMode() == SHOP_GRID_HORIZONTAL)
        {
            flag = (SHOP_IDX_RESET_X_GRID | SHOP_IDX_RESET_ITEM);
        }
        else
        {
            flag = (SHOP_IDX_RESET_X_GRID | SHOP_IDX_RESET_Y_GRID | SHOP_IDX_RESET_ITEM);
        }

        ShopGrid_ResetIndexes(flag);
    }

    // only adjust category index once!
    if (!bak)
    {
        u32 halfScreen = ShopConfig_GetTotalShownCategories() / 2;
        if (ShopGrid_GetCurrentCategoryIndex() > halfScreen)
        {
            ShopGrid_SetFirstCategoryIndex(ShopGrid_GetFirstCategoryIndex() + 1);
        }

        ShopGrid_SetCurrentCategoryIndex(ShopGrid_GetCurrentCategoryIndex() + 1);
    }
}

static void ShopGrid_SwitchMode(void)
{
    gShopMenuDataPtr->buyScreen ^= 1;
    gShopMenuDataPtr->selectedItemId = ShopInventory_GetChosenItemId();

    ShopPurchase_CalculateMaxQuantity();
    DecompressDataWithHeaderWram(
        ShopGraphics_GetByType(SHOP_GFX_TILEMAP + gShopMenuDataPtr->buyScreen), sShopMenuStaticDataPtr->tilemapBuf);
    ShopSprite_ToggleItemIconsVisibility();
    ScheduleBgCopyTilemapToVram(SHOP_BG_TILEMAP);
}

static void ShopGrid_VerticalInput(s32 delta)
{
    if (!gShopMenuDataPtr->buyScreen)
    {
        ShopConfig_RunGridFunc(delta, 0);
    }
    else
    {
        bool32 additiveDelta = ShopGrid_IsAdditiveDelta(delta);
        u32 bak = gShopMenuDataPtr->itemQuantity;

        // reverses input
        delta = additiveDelta ? -1 : 1;

        if (!ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()) && gShopMenuDataPtr->maxItemQuantity)
        {
            if (!gShopMenuDataPtr->itemQuantity && additiveDelta)
            {
                gShopMenuDataPtr->itemQuantity = gShopMenuDataPtr->maxItemQuantity - 1;
            }
            else if (gShopMenuDataPtr->itemQuantity == (gShopMenuDataPtr->maxItemQuantity - 1) && !additiveDelta)
            {
                gShopMenuDataPtr->itemQuantity = 0;
            }
            else
            {
                gShopMenuDataPtr->itemQuantity += delta;
            }
        }

        if (bak != gShopMenuDataPtr->itemQuantity)
        {
            PlaySE(SE_SELECT);
        }
    }
}

static void ShopGrid_HorizontalInput(s32 delta)
{
    if (!gShopMenuDataPtr->buyScreen)
    {
        ShopConfig_RunGridFunc(0, delta);
    }
    else
    {
        bool32 additiveDelta = ShopGrid_IsAdditiveDelta(delta);
        u32 bak = gShopMenuDataPtr->itemQuantity;

        if (!ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()) && gShopMenuDataPtr->maxItemQuantity)
        {
            if (gShopMenuDataPtr->itemQuantity >= (gShopMenuDataPtr->maxItemQuantity - 1)
             && additiveDelta)
            {
                gShopMenuDataPtr->itemQuantity = 0;
            }
            else if (!gShopMenuDataPtr->itemQuantity
             && !additiveDelta)
            {
                gShopMenuDataPtr->itemQuantity = gShopMenuDataPtr->maxItemQuantity - 1;
            }
            else
            {
                u32 result;

                delta *= SHOP_HORIZONTAL_INCREMENT_NUMBER;

                if (!additiveDelta && gShopMenuDataPtr->itemQuantity < SHOP_HORIZONTAL_INCREMENT_NUMBER)
                {
                    result = 0;
                }
                else
                {
                    result = gShopMenuDataPtr->itemQuantity + delta;
                }

                while (result >= gShopMenuDataPtr->maxItemQuantity)
                {
                    result--;
                }

                gShopMenuDataPtr->itemQuantity = result;
            }
        }

        if (bak != gShopMenuDataPtr->itemQuantity)
        {
            PlaySE(SE_SELECT);
        }
    }
}

bool32 ShopGrid_IsAdditiveDelta(s32 delta)
{
    return (delta == 1);
}

static u32 ShopGrid_RowInCategory(enum ShopMenuCategories category)
{
    for (u32 row = 0; row < gShopMenuDataPtr->numCategories; row++)
    {
        if (ShopGrid_CategoryInRow(row) == category)
            return row;
    }

    return NUM_SHOP_CATEGORIES;
}

enum ShopMenuCategories ShopGrid_CategoryInRow(u8 row)
{
    return gShopMenuDataPtr->categoryList[row % NUM_SHOP_CATEGORIES] % NUM_SHOP_CATEGORIES;
}

enum ShopMenuCategories ShopGrid_CurrentCategoryRow(void)
{
    return ShopGrid_CategoryInRow(ShopGrid_GetCurrentCategoryIndex());
}

void ShopGrid_SetGridXCursor(u32 position)
{
    gShopMenuDataPtr->gridIdx.row = position;
}

u32 ShopGrid_GetGridXCursor(void)
{
    return gShopMenuDataPtr->gridIdx.row;
}

void ShopGrid_SetGridYCursor(u32 position)
{
    gShopMenuDataPtr->gridIdx.col = position;
}

u32 ShopGrid_GetGridYCursor(void)
{
    return gShopMenuDataPtr->gridIdx.col;
}

void ShopGrid_SetCurrentCategoryIndex(u32 position)
{
    gShopMenuDataPtr->categoryIdx = position;
}

void ShopGrid_SetFirstCategoryIndex(u32 position)
{
    gShopMenuDataPtr->firstCategory = position;
}

u32 ShopGrid_GetCurrentCategoryIndex(void)
{
    return gShopMenuDataPtr->categoryIdx;
}

u32 ShopGrid_GetFirstCategoryIndex(void)
{
    return gShopMenuDataPtr->firstCategory;
}

void ShopGrid_SetCurrentItemIndex(u32 position)
{
    gShopMenuDataPtr->itemIdx = position;
}

void ShopGrid_SetFirstItemIndex(u32 position)
{
    gShopMenuDataPtr->firstItem = position;
}

u32 ShopGrid_GetCurrentItemIndex(void)
{
    return gShopMenuDataPtr->itemIdx;
}

u32 ShopGrid_GetFirstItemIndex(void)
{
    return gShopMenuDataPtr->firstItem;
}

void ShopGrid_ResetIndexes(u32 flag)
{
    if (flag & SHOP_IDX_RESET_CATEGORY)
    {
        ShopGrid_SetFirstCategoryIndex(0);
        ShopGrid_SetCurrentCategoryIndex(0);
    }

    if (flag & SHOP_IDX_RESET_ITEM)
    {
        ShopGrid_SetFirstItemIndex(0);
        ShopGrid_SetCurrentItemIndex(0);
    }

    if (flag & SHOP_IDX_RESET_X_GRID)
    {
        ShopGrid_SetGridXCursor(0);
    }

    if (flag & SHOP_IDX_RESET_Y_GRID)
    {
        ShopGrid_SetGridYCursor(0);
    }
}

static void ShopBlit_Category(enum ShopMenuCategories category, u32 x, u32 y)
{
    BlitBitmapRectToWindow(SHOP_WINDOW_MAIN, ShopGraphics_GetByType(SHOP_GFX_CATEGORIES),
                            0, category * 24,
                            24, NUM_SHOP_CATEGORIES * 24,
                            x, y,
                            24, 24);
}

static inline void ShopBlit_Categories(void)
{
    const struct ShopMenuConfigs *configs = ShopConfig_Get();

    u32 x = configs->categoryCoords[SHOP_COORD_X], y = configs->categoryCoords[SHOP_COORD_Y];

    for (u32 idx = 0; idx < ShopConfig_GetTotalShownCategories(); idx++)
    {
        u32 category = ShopGrid_CategoryInRow(ShopGrid_GetFirstCategoryIndex() + idx);

        if (ShopGrid_CurrentCategoryRow() == category)
        {
            ShopBlit_Category(NUM_SHOP_CATEGORIES, x, y);
        }

        ShopBlit_Category(category, x, y);

        y += configs->categoryCoords[SHOP_COORD_PAD];
    }
}

void ShopPrint_AddTextPrinter(u32 fontId, u32 x, u32 y, enum ShopMenuFontColors color, const u8 *str)
{
    AddTextPrinterParameterized4(SHOP_WINDOW_MAIN, fontId, x, y, 0, 0, ShopConfig_GetFontColors(color), TEXT_SKIP_DRAW, str);
}

static inline void ShopPrint_HelpBar(void)
{
    u32 x = 0, y = 18;
    const u8 *str = sText_Help_Bar;
    u32 fontId = FONT_SMALL_NARROW;

    if (gShopMenuDataPtr->buyScreen)
    {
        if (!gShopMenuDataPtr->buyWindow)
        {
            if (!gShopMenuDataPtr->notEnoughMoneyWindow)
            {
                str = sText_Help_Bar_Buy;
            }
            else
            {
                return; // let the shops do their own
            }
        }
        else
        {
            str = sText_Help_Bar_Complete;
        }
    }

    ShopPrint_AddTextPrinter(fontId, TILE_TO_PIXELS(x) + 4, TILE_TO_PIXELS(y), SHOP_FNTCLR_SECONDARY, str);
}

static const void *const ShopGraphics_GetByType(enum ShopMenuGraphicsType type)
{
    type %= NUM_SHOP_GRAPHICS;
    const struct ShopMenuConfigs *configs = ShopConfig_Get();

    switch (type)
    {
    default:
        DebugPrintf("WARNING! case %d has no return value", type);
        return NULL;
    case SHOP_GFX_TILES:
        return configs->tiles;
    case SHOP_GFX_TILEMAP:
        return configs->map;
    case SHOP_GFX_TILEMAP_BUY:
        return configs->mapBuy;
    case SHOP_GFX_PALETTE:
        return configs->palette;
    case SHOP_GFX_CATEGORIES:
        return configs->categoryBlit;
    }
}

const struct ShopMenuConfigs *ShopConfig_Get(void)
{
    return gShopMenuDataPtr->configs;
}

u8 ShopConfig_GetTotalShownItems(void)
{
    return ShopConfig_Get()->totalShownItems;
}

u8 ShopConfig_GetTotalShownItemRows(void)
{
    return ShopConfig_Get()->totalShownItemRows;
}

u8 ShopConfig_GetTotalShownCategories(void)
{
    return ShopConfig_Get()->totalShownCategories;
}

u8 ShopConfig_GetTotalShownItemsOnScreen(void)
{
    return ShopConfig_GetTotalShownItems() * ShopConfig_GetTotalShownItemRows();
}

enum ShopMenuGridModes ShopConfig_GetGridMode(void)
{
    return ShopConfig_Get()->gridMode;
}

static void ShopConfig_RunGridFunc(s32 vDelta, s32 hDelta)
{
    if (ShopConfig_Get()->handleGrid)
    {
        ShopConfig_Get()->handleGrid(vDelta, hDelta);
    }
}

static const u8 *ShopConfig_GetFontColors(enum ShopMenuFontColors color)
{
    return ShopConfig_Get()->fontColors[color];
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
