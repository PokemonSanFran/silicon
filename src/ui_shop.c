#include "global.h"
#include "ui_shop.h"
#include "ui_presto.h"
#include "ui_character_customization_menu.h"
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
static void ShopSprite_CreateItemSprite(u16, u8, u8, u8, u8);
static void ShopSprite_CreateItemSprites(void);
static void ShopSprite_DestroyItemSprites(void);
static void ShopSprite_ToggleItemIconsVisibility(bool32);

static void ShopInventory_InitCategoryLists(void);
static bool32 ShopInventory_IsPlayerWithinAForest(void);
static bool32 ShopInventory_IsPlayerOnWater(void);
static bool32 ShopInventory_IsPlayerWithinARoute(void);
static bool32 ShopInventory_IsPlayerInsideACave(void);
static void ShopInventory_Reset(void);

static void ShopPurchase_CalculateMaxQuantity(void);
static void ShopPurchase_AddItem(u16, u16);

static void ShopGrid_SwitchMode(enum ShopMenuModes);
static void ShopGrid_VerticalInput(s32);
static void ShopGrid_HorizontalInput(s32);

static void ShopBlit_Category(enum ShopMenuCategories, u32, u32);
static inline void ShopBlit_Categories(void);

static const void *const ShopGraphics_GetByType(enum ShopMenuGraphicsType);

extern bool32 PokeMart_IsActive(void);

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
    [SHOP_BG_DESC] =
    {
        .bg = SHOP_BG_DESC,
        .charBaseIndex = 3,
        .mapBaseIndex = 28,
        .priority = 0
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
        .width = DISPLAY_TILE_WIDTH,
        .height = DISPLAY_TILE_HEIGHT,
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
        .priority = 1,
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

static const u8 sText_Help_Bar[]          = _("{DPAD_UPDOWN} Rows {DPAD_LEFTRIGHT} Items {A_BUTTON} Buy {B_BUTTON} Exit");
static const u8 sText_Help_Bar_Buy[]      = _("{DPAD_UPDOWN} +1/-1 {DPAD_LEFTRIGHT} +5/-5 {A_BUTTON} Buy Now {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Complete[] = _("{A_BUTTON} Buy More {B_BUTTON} Return {START_BUTTON} Exit");
static const u8 sText_HelpBar_Failure[]   = _("{A_BUTTON}{B_BUTTON} Return to purchase");

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

void ShopMenu_Init(const struct ShopMenuConfigs *configs, MainCallback callback)
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

    sShopMenuStaticDataPtr->shownItemsOnScreen = configs->totalShownItems * configs->totalShownItemRows;
    sShopMenuStaticDataPtr->itemIconIds = AllocZeroed(sShopMenuStaticDataPtr->shownItemsOnScreen);
    if (!sShopMenuStaticDataPtr->itemIconIds)
    {
        FREE_AND_SET_NULL(sShopMenuStaticDataPtr);
        FREE_AND_SET_NULL(gShopMenuDataPtr);
        SetMainCallback2(callback);
        return;
    }

    gShopMenuDataPtr->configs = configs;
    gShopMenuDataPtr->savedCallback = callback;
    memset(sShopMenuStaticDataPtr->spriteIds, SPRITE_NONE, NUM_SHOP_SPRITES);
    memset(sShopMenuStaticDataPtr->itemIconIds, SPRITE_NONE, configs->totalShownItems * configs->totalShownItemRows);

    PrestoHelper_DetermineCarousel();
    ShopInventory_InitCategoryLists();

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
    RunTextPrinters();
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
    ResetVramOamAndBgCntRegs();
    ResetAllBgsCoordinatesAndBgCntRegs();
    sShopMenuStaticDataPtr->tilemapBuf = AllocZeroed(BG_SCREEN_SIZE);
    if (!sShopMenuStaticDataPtr->tilemapBuf)
    {
        ShopHelper_BailExit();
        return;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_BG_ALL_ON);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, (SHOP_BG0_OFFSET * PokeMart_IsActive()));

    InitBgsFromTemplates(0, sShopBgTemplates, NELEMS(sShopBgTemplates));
    SetBgTilemapBuffer(SHOP_BG_TILEMAP, sShopMenuStaticDataPtr->tilemapBuf);
    ScheduleBgCopyTilemapToVram(SHOP_BG_DESC);
    ScheduleBgCopyTilemapToVram(SHOP_BG_EXTRA);
    ScheduleBgCopyTilemapToVram(SHOP_BG_TILEMAP);
    ShowBg(SHOP_BG_WINDOW);
    ShowBg(SHOP_BG_DESC);
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
    ScheduleBgCopyTilemapToVram(SHOP_BG_WINDOW);

    FillWindowPixelBuffer(SHOP_WINDOW_MAIN, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(SHOP_WINDOW_MAIN);
    CopyWindowToVram(SHOP_WINDOW_MAIN, COPYWIN_FULL);
}

static void ShopHelper_UpdateFrontEnd(void)
{
    FillWindowPixelBuffer(SHOP_WINDOW_MAIN, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (!ShopHelper_IsPurchaseMode() || PokeMart_IsActive())
    {
        ShopBlit_Categories();
        ShopSprite_CreateItemSprites();
    }

    ShopPrint_HelpBar();
    ShopConfig_Get()->handleFrontend();
    CopyWindowToVram(SHOP_WINDOW_MAIN, COPYWIN_GFX);
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
    for (u32 i = 0; i < ShopConfig_GetTotalShownItemsOnScreen(); i++)
    {
        DestroySprite(&gSprites[ShopSprite_GetItemSpriteId(i)]);
    }

    for (u32 i = TAG_SHOP_MENU_UI; i < NUM_SHOP_TAGS; i++)
    {
        FreeSpriteTilesByTag(i);
    }

    FreeSpritePaletteByTag(TAG_SHOP_MENU_UI);
    FreeSpritePaletteByTag(OBJ_EVENT_PAL_TAG_SILICON);

    for (u32 i = 0; i < NUM_SHOP_SPRITES; i++)
    {
        DestroySprite(&gSprites[ShopSprite_GetSpriteId(i)]);
    }

    UnsetBgTilemapBuffer(SHOP_BG_TILEMAP);

    TRY_FREE_AND_SET_NULL(sShopMenuStaticDataPtr->itemIconIds);
    TRY_FREE_AND_SET_NULL(sShopMenuStaticDataPtr->tilemapBuf);
    TRY_FREE_AND_SET_NULL(sShopMenuStaticDataPtr);
    TRY_FREE_AND_SET_NULL(gShopMenuDataPtr);
    FreeAllWindowBuffers();
}

void ShopHelper_SetMode(enum ShopMenuModes mode)
{
    gShopMenuDataPtr->mode = mode;
}

u32 ShopHelper_GetMode(void)
{
    return gShopMenuDataPtr->mode;
}

bool32 ShopHelper_IsProcessingPurchaseMode(void)
{
    return gShopMenuDataPtr->mode == SHOP_MODE_PURCHASE;
}

bool32 ShopHelper_IsPurchaseMode(void)
{
    return gShopMenuDataPtr->mode >= SHOP_MODE_PURCHASE;
}

bool32 ShopHelper_IsPurchaseDone(void)
{
    return gShopMenuDataPtr->mode >= SHOP_MODE_SUCCESS;
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
    enum ShopMenuModes mode = ShopHelper_GetMode();

    if (JOY_NEW(B_BUTTON))
    {
        switch (mode)
        {
        default:
            break;
        case SHOP_MODE_DEFAULT:
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_Shop_WaitFadeAndExit;
            return;
        case SHOP_MODE_PURCHASE:
            {
                PlaySE(SE_SELECT);
                gShopMenuDataPtr->itemQuantity = 0;
                ShopGrid_SwitchMode(SHOP_MODE_DEFAULT);
                /*
                 * PSF TODO figure out why this was here in the first place
                if (ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
                {
                    ShopInventory_InitCategoryLists();
                }
                */

                break;
            }
        case SHOP_MODE_SUCCESS:
        case SHOP_MODE_FAILURE:
            {
                PlaySE(SE_SELECT);
                gShopMenuDataPtr->itemQuantity = 0;
                gShopMenuDataPtr->selectedItemId = ITEM_NONE;

                if (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_BUY_AGAIN
                 || ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
                {
                    ShopInventory_InitCategoryLists();
                    ShopGrid_ResetIndexes(SHOP_IDX_RESET_X_GRID | SHOP_IDX_RESET_ITEM);
                }

                ShopGrid_SwitchMode(SHOP_MODE_DEFAULT);
                break;
            }
        }

        ShopHelper_UpdateFrontEnd();
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        switch (mode)
        {
        default:
            break;
        case SHOP_MODE_DEFAULT:
            PlaySE(SE_SELECT);
            ShopGrid_SwitchMode(SHOP_MODE_PURCHASE);
            break;
        case SHOP_MODE_PURCHASE:
            {
                if (GetMoney(&gSaveBlock1Ptr->money) >= ShopConfig_Get()->handleTotalPrice(gShopMenuDataPtr->selectedItemId, gShopMenuDataPtr->itemQuantity))
                {
                    PlaySE(SE_SHOP);
                    ShopPurchase_AddItem(gShopMenuDataPtr->selectedItemId, gShopMenuDataPtr->itemQuantity);
                }
                else
                {
                    PlaySE(SE_FAILURE);
                    ShopGrid_SwitchMode(SHOP_MODE_FAILURE);
                }
                break;
            }
        case SHOP_MODE_SUCCESS:
            {
                PlaySE(SE_SELECT);
                gShopMenuDataPtr->itemQuantity = 0;

                if (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_BUY_AGAIN
                 || ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
                {
                    ShopGrid_SwitchMode(SHOP_MODE_DEFAULT);
                    ShopGrid_ResetIndexes(SHOP_IDX_RESET_X_GRID | SHOP_IDX_RESET_ITEM);
                }
                else
                {
                    ShopGrid_SwitchMode(SHOP_MODE_PURCHASE);
                }

                break;
            }
        case SHOP_MODE_FAILURE:
            PlaySE(SE_SELECT);
            ShopGrid_SwitchMode(SHOP_MODE_DEFAULT);
            break;
        }

        ShopHelper_UpdateFrontEnd();
        return;
    }

    if (JOY_NEW(START_BUTTON))
    {
        switch (mode)
        {
        default:
            break;
                /*
        case SHOP_MODE_DEFAULT:
            {
                PlaySE(SE_SELECT);
                gShopMenuDataPtr->sortCategories ^= 1;
                gShopMenuDataPtr->selectedItemId = 0;
                ShopGrid_ResetIndexes(SHOP_IDX_RESET_ALL);
                ShopInventory_InitCategoryLists();
                ShopHelper_UpdateFrontEnd();
                break;
            }
            */
        case SHOP_MODE_SUCCESS:
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_Shop_WaitFadeAndExit;
            break;
        }

        return;
    }

    // return early for menu that does not need the dpad.
    if (ShopHelper_IsPurchaseDone())
    {
        return;
    }

    u32 itemIdx = ShopGrid_GetCurrentItemIndex(),
        categoryIdx = ShopGrid_GetCurrentCategoryIndex(),
        itemQuantity = gShopMenuDataPtr->itemQuantity;

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

    if (categoryIdx != ShopGrid_GetCurrentCategoryIndex()
     || itemIdx != ShopGrid_GetCurrentItemIndex()
     || itemQuantity != gShopMenuDataPtr->itemQuantity)
    {
        ShopHelper_UpdateFrontEnd();
    }
}

static void ShopSprite_CreateGenericSprites(void)
{
    for (u32 i = 0; i < NUM_SHOP_SPRITES; i++)
    {
        u32 palTag = TAG_SHOP_MENU_UI;
        bool32 usePlayerPal = PokeMart_IsActive() && i == SHOP_SPRITE_BUY_ICON;

        if (usePlayerPal)
        {
            palTag = OBJ_EVENT_PAL_TAG_SILICON;
        }

        const struct ShopSprite *template = &sShopSprites[i];
        const struct ShopSpriteConfigs *configs = &ShopConfig_Get()->sprites[i];

        struct SpriteTemplate spriteTemplate = sShopSpriteTemplate;
        spriteTemplate.paletteTag = palTag;

        struct CompressedSpriteSheet sheet = { configs->gfx, template->size, template->tileTag };

        LoadCompressedSpriteSheet(&sheet);
        spriteTemplate.tileTag = template->tileTag;

        struct SpritePalette palette = { ShopGraphics_GetByType(SHOP_GFX_PALETTE), palTag };
        LoadSpritePalette(&palette);

        struct OamData oamData = gDummyOamData;

        oamData.shape = template->spriteShape;
        oamData.size = template->spriteSize;
        oamData.priority = 0;

        spriteTemplate.oam = &oamData;

        spriteTemplate.callback = configs->callback;
        if (!spriteTemplate.callback)
        {
            spriteTemplate.callback = SpriteCallbackDummy;
        }

        u32 spriteId = CreateSprite(&spriteTemplate, configs->x, configs->y, template->priority);
        sShopMenuStaticDataPtr->spriteIds[template->idx] = spriteId;
        if (usePlayerPal)
        {
            SetPlayerPalette(palTag, &gSprites[spriteId]);
        }

        // store original x/y. useful for later.
        gSprites[spriteId].data[1] = configs->x;
        gSprites[spriteId].data[2] = configs->y;
    }
}

u32 ShopSprite_GetSpriteId(enum ShopMenuSprites id)
{
    return sShopMenuStaticDataPtr->spriteIds[id];
}

u32 ShopSprite_GetItemSpriteId(u32 idx)
{
    return sShopMenuStaticDataPtr->itemIconIds[idx];
}

static void ShopSprite_CreateItemSprite(u16 itemId, u8 row, u8 idx, u8 x, u8 y)
{
    u32 spriteIdx = idx;

    if (sShopMenuStaticDataPtr->itemIconIds[spriteIdx] != SPRITE_NONE
     || !itemId
     || itemId >= ITEMS_COUNT)
    {
        return;
    }

    u32 spriteId = AddItemIconSprite(spriteIdx, spriteIdx, itemId);
    gSprites[spriteId].x2 = x;
    gSprites[spriteId].y2 = y;
    gSprites[spriteId].oam.priority = 1;

    if (PokeMart_IsActive()
     && ShopGrid_CategoryInRow(row) != ShopGrid_CurrentCategoryRow())
    {
        gSprites[spriteId].oam.objMode = ST_OAM_OBJ_BLEND;
    }

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

            if (ShopInventory_GetItemIdFromGrid(row, idx) == ITEM_NONE)
            {
                continue;
            }

            ShopSprite_CreateItemSprite(ShopInventory_GetItemIdFromGrid(row, idx), row, temp, x, y);

            x += configs->itemIconCoords[SHOP_COORD_PAD];
            temp++, j++;
        }

        x = configs->itemIconCoords[SHOP_COORD_X];
        y += configs->itemIconCoords[SHOP_COORD_PAD2];
    }
}

static void ShopSprite_DestroyItemSprites(void)
{
    for (u32 i = 0; i < sShopMenuStaticDataPtr->shownItemsOnScreen; i++)
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

static void ShopSprite_ToggleItemIconsVisibility(bool32 flag)
{
    if (PokeMart_IsActive())
    {
        return;
    }

    for (u32 i = 0; i < ShopConfig_GetTotalShownItemsOnScreen(); i++)
    {
        u32 spriteId = sShopMenuStaticDataPtr->itemIconIds[i];
        if (spriteId != SPRITE_NONE)
        {
            gSprites[spriteId].invisible = flag;
        }
    }
}

static void ShopInventory_InitCategoryLists(void)
{
    ShopInventory_Reset();
    gShopMenuDataPtr->numCategories = ShopConfig_Get()->handleInitList();
}

enum ShopMenuCarousels ShopInventory_GetRecommendedCarousel(void)
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

    if ((partyHP < 26 || partyStatus < 33)
     && ShopGrid_RowInCategory(SHOP_CATEGORY_MEDICINE) != NUM_SHOP_CATEGORIES)
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

static void ShopInventory_Reset(void)
{
    for (u32 categoryIndex = 0; categoryIndex < NUM_SHOP_CATEGORIES; categoryIndex++)
        gShopMenuDataPtr->categoryList[categoryIndex] = NUM_SHOP_CATEGORIES;

    for (u32 itemIndex = 0; itemIndex < NUM_SHOP_RECOMMENDED_CATEGORY_ITEMS; itemIndex++)
        gShopMenuDataPtr->recommendedItems[itemIndex] = ITEM_NONE;

    memset(gShopMenuDataPtr->categoryNumItems, 0, NUM_SHOP_CATEGORIES * sizeof(u8));
    memset(gShopMenuDataPtr->categoryItems, ITEM_NONE, (NUM_SHOP_CATEGORIES * NUM_SHOP_ITEMS_PER_CATEGORIES) * sizeof(u16));
}

void ShopInventory_SetItemIdToGrid(u32 itemId, u32 category, u32 idx)
{
    gShopMenuDataPtr->categoryItems[category][idx] = itemId;
}

u32 ShopInventory_GetItemIdFromGrid(u32 category, u32 item)
{
    return gShopMenuDataPtr->categoryItems[category][item];
}

u32 ShopInventory_GetChosenItemId(void)
{
    return ShopInventory_GetItemIdFromGrid(ShopGrid_GetCurrentCategoryIndex(), ShopGrid_GetCurrentItemIndex());
}

void ShopInventory_SetCategoryNumItems(u32 num, u32 idx)
{
    gShopMenuDataPtr->categoryNumItems[idx] = num;
}

u32 ShopInventory_GetCategoryNumItems(u32 idx)
{
    return gShopMenuDataPtr->categoryNumItems[idx];
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

enum ShopMenuCategories ShopInventory_CanItemBeListed(u32 itemId, enum Pocket pocket)
{
    if (pocket == POCKET_KEY_ITEMS)
        return NUM_SHOP_CATEGORIES;

    ShopCriteriaFunc func = GetItemShopCriteriaFunc(itemId);
    if (func && !func(itemId))
        return NUM_SHOP_CATEGORIES;

    enum ShopMenuCategories itemCat = ConvertPocketToCategory(pocket);
    if (ShopPurchase_IsCategoryOneTimePurchase(itemCat)
     && CountTotalItemQuantityInBagWithPocket(pocket, itemId))
    {
        return NUM_SHOP_CATEGORIES;
    }

    return itemCat;
}

void ShopInventory_ProcessBuyAgainItems(u8 *categoryCounts)
{
    for (u32 i = 0; i < MAX_PRESTO_BUY_AGAIN_ITEMS; i++)
    {
        u32 item = gSaveBlock3Ptr->shopBuyAgainItems[i];
        if (!item)
            break;

        u32 risingCategory = ShopInventory_GetCategoryMap(SHOP_CATEGORY_BUY_AGAIN);
        ShopInventory_SetItemIdToGrid(item, risingCategory, categoryCounts[SHOP_CATEGORY_BUY_AGAIN]);
        categoryCounts[SHOP_CATEGORY_BUY_AGAIN]++;
    }
}

void ShopInventory_TryAddItemToList(u32 itemId, enum ShopMenuCategories category, u8 *numItems)
{
    if (numItems[category] >= NUM_SHOP_ITEMS_PER_CATEGORIES)
        return;

    u32 risingCategory = ShopInventory_GetCategoryMap(category);

    ShopInventory_SetItemIdToGrid(itemId, risingCategory, numItems[category]);
    numItems[category]++;

    //DebugPrintf("%S is getting set to category 	%d in position 	%d", GetItemName(itemId), risingCategory, numItems[category]);
}

u32 ShopInventory_GetCategoryMap(enum ShopMenuCategories category)
{
    for (u32 listIndex = 0; listIndex < NUM_SHOP_CATEGORIES; listIndex++)
    {
        if (gShopMenuDataPtr->categoryList[listIndex] == category)
            return listIndex;
    }

    for (u32 listIndex = 0; listIndex < NUM_SHOP_CATEGORIES; listIndex++)
    {
        if (gShopMenuDataPtr->categoryList[listIndex] == NUM_SHOP_CATEGORIES)
        {
            gShopMenuDataPtr->categoryList[listIndex] = category;
            return listIndex;
        }
    }

    return NUM_SHOP_CATEGORIES;
}

u32 ShopInventory_ProcessCategoryCounts(u8 *categoryCounts)
{
    u32 numCategories = 0;

    for (u32 categoryIndex = 0; categoryIndex < NUM_SHOP_CATEGORIES; categoryIndex++)
    {
        if (categoryCounts[categoryIndex] == 0)
        {
            continue;
        }

        u32 risingCategory = ShopInventory_GetCategoryMap(categoryIndex);
        ShopInventory_SetCategoryNumItems(categoryCounts[categoryIndex], risingCategory);

        if (ShopInventory_GetCategoryNumItems(risingCategory))
        {
            numCategories++;
        }
    }

    return numCategories;
}

bool32 ShopPurchase_IsCategoryOneTimePurchase(enum ShopMenuCategories category)
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

    quantity++;
    RemoveMoney(&gSaveBlock1Ptr->money, price);
    AddBagItem(itemId, quantity);
    if (PokeMart_IsActive() && GetItemShopCategory(itemId) == SHOP_CATEGORY_POKE_BALLS && quantity >= 10)
    {
        AddBagItem(ITEM_PREMIER_BALL, quantity / 10);
    }

    ShopGrid_SwitchMode(SHOP_MODE_SUCCESS);

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

    // only adjust category index once!
    if (!bak)
    {
        ShopGrid_VerticalInput(DOWN_PRESS);
    }

    if (ShopGrid_CurrentCategoryRow() == SHOP_CATEGORY_BUY_AGAIN
     || ShopPurchase_IsCategoryOneTimePurchase(ShopGrid_CurrentCategoryRow()))
    {
        ShopGrid_ResetIndexes(SHOP_IDX_RESET_ITEM | SHOP_IDX_RESET_X_GRID);
    }
}

static void ShopGrid_SwitchMode(enum ShopMenuModes mode)
{
    switch (mode)
    {
    default:
        break;
    case SHOP_MODE_DEFAULT:
        ShopSprite_ToggleItemIconsVisibility(FALSE);
        DecompressDataWithHeaderWram(
            ShopGraphics_GetByType(SHOP_GFX_TILEMAP), sShopMenuStaticDataPtr->tilemapBuf);
        break;
    case SHOP_MODE_PURCHASE ... SHOP_MODE_FAILURE:
        ShopSprite_ToggleItemIconsVisibility(TRUE);
        DecompressDataWithHeaderWram(
            ShopGraphics_GetByType(SHOP_GFX_TILEMAP_BUY), sShopMenuStaticDataPtr->tilemapBuf);
        break;
    }

    gShopMenuDataPtr->selectedItemId = ShopInventory_GetChosenItemId();
    ShopPurchase_CalculateMaxQuantity();
    ShopHelper_SetMode(mode);
    ScheduleBgCopyTilemapToVram(SHOP_BG_TILEMAP);
}

static void ShopGrid_VerticalInput(s32 delta)
{
    bool32 additiveDelta = ShopGrid_IsAdditiveDelta(delta);
    bool32 purchaseMode = ShopHelper_IsProcessingPurchaseMode();
    u32 trueIdx = purchaseMode ? gShopMenuDataPtr->itemQuantity : ShopGrid_GetCurrentCategoryIndex();
    u32 bak = trueIdx;

    if (!purchaseMode)
    {
        u32 numItems = gShopMenuDataPtr->numCategories - 1;
        u32 halfScreen = ShopGrid_GetYHalfScreen();

        bool32 scroll = (numItems + 1) > ShopConfig_GetTotalShownCategories();
        u32 finalHalfScreen = numItems - halfScreen;

        u32 gridIdx = ShopGrid_GetGridYCursor();

        if (((trueIdx >= halfScreen && trueIdx < finalHalfScreen && additiveDelta)
         || (trueIdx > halfScreen && trueIdx <= finalHalfScreen && !additiveDelta))
         && scroll)
        {
            ShopGrid_SetCurrentCategoryIndex(trueIdx + delta);
            ShopGrid_SetFirstCategoryIndex(ShopGrid_GetFirstCategoryIndex() + delta);
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
            ShopGrid_SetCurrentCategoryIndex(numItems);
            if (scroll)
                ShopGrid_SetFirstCategoryIndex(numItems - (ShopConfig_GetTotalShownItemRows() - 1));

            if (numItems >= (ShopConfig_GetTotalShownItemRows() - 1))
                ShopGrid_SetGridYCursor(ShopConfig_GetTotalShownItemRows() - 1);
            else
                ShopGrid_SetGridYCursor(numItems);
        }
        else
        {
            ShopGrid_SetCurrentCategoryIndex(trueIdx + delta);
            ShopGrid_SetGridYCursor(gridIdx + delta);
        }

        if (!ShopHelper_IsPurchaseDone())
        {
            ShopGrid_ResetIndexes(SHOP_IDX_RESET_ITEM | SHOP_IDX_RESET_X_GRID);
        }
    }
    else
    {
        bool32 additiveDelta = ShopGrid_IsAdditiveDelta(delta);

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
    }

    trueIdx = purchaseMode ? gShopMenuDataPtr->itemQuantity : ShopGrid_GetCurrentCategoryIndex();
    if (bak != trueIdx && !ShopHelper_IsPurchaseDone())
    {
        PlaySE(SE_SELECT);
    }
}

static void ShopGrid_HorizontalInput(s32 delta)
{
    bool32 additiveDelta = ShopGrid_IsAdditiveDelta(delta);
    u32 trueIdx = ShopHelper_IsPurchaseMode() ? gShopMenuDataPtr->itemQuantity : ShopGrid_GetCurrentItemIndex();
    u32 bak = trueIdx;

    if (!ShopHelper_IsPurchaseMode())
    {
        u32 halfScreen = ShopGrid_GetXHalfScreen();
        u32 categoryNumItems = ShopInventory_GetCategoryNumItems(ShopGrid_GetCurrentCategoryIndex()) - 1;
        u32 shownItems = ShopConfig_GetTotalShownItems() - 1;
        u32 finalHalfScreen = categoryNumItems - (shownItems - halfScreen);
        u32 gridIdx = ShopGrid_GetGridXCursor();
        bool32 scroll = categoryNumItems > shownItems;

        if (((trueIdx >= halfScreen && trueIdx < finalHalfScreen && additiveDelta)
         || (trueIdx > halfScreen && trueIdx <= finalHalfScreen && !additiveDelta))
         && scroll)
        {
            ShopGrid_SetGridXCursor(halfScreen);
            ShopGrid_SetCurrentItemIndex(trueIdx + delta);
            ShopGrid_SetFirstItemIndex(ShopGrid_GetFirstItemIndex() + delta);
        }
        else if (trueIdx >= categoryNumItems && additiveDelta)
        {
            ShopGrid_SetGridXCursor(0);
            ShopGrid_SetCurrentItemIndex(0);
            ShopGrid_SetFirstItemIndex(0);
        }
        else if (!trueIdx && !additiveDelta)
        {
            ShopGrid_SetCurrentItemIndex(categoryNumItems);
            if (scroll)
            {
                ShopGrid_SetFirstItemIndex(categoryNumItems - shownItems);
            }

            if (categoryNumItems >= shownItems)
                ShopGrid_SetGridXCursor(shownItems);
            else
                ShopGrid_SetGridXCursor(categoryNumItems);
        }
        else
        {
            ShopGrid_SetGridXCursor(gridIdx + delta);
            ShopGrid_SetCurrentItemIndex(trueIdx + delta);
        }
    }
    else
    {
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
    }

    trueIdx = ShopHelper_IsPurchaseMode() ? gShopMenuDataPtr->itemQuantity : ShopGrid_GetCurrentItemIndex();
    if (trueIdx != bak)
    {
        PlaySE(SE_SELECT);
    }
}

bool32 ShopGrid_IsAdditiveDelta(s32 delta)
{
    return (delta == 1);
}

u32 ShopGrid_RowInCategory(enum ShopMenuCategories category)
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

u32 ShopGrid_GetXHalfScreen(void)
{
    u32 halfScreen = ShopConfig_GetTotalShownItems() / 2;
    if (ShopConfig_GetTotalShownItems() % 2 == 0)
    {
        halfScreen--;
    }

    return halfScreen;
}

u32 ShopGrid_GetYHalfScreen(void)
{
    u32 halfScreen = ShopConfig_GetTotalShownCategories() / 2;
    if (ShopConfig_GetTotalShownCategories() % 2 == 0)
    {
        halfScreen--;
    }

    return halfScreen;
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

void ShopPrint_HelpBar(void)
{
    const u8 *str = NULL;

    switch (ShopHelper_GetMode())
    {
    default:
    case SHOP_MODE_FAILURE:
        {
            if (PokeMart_IsActive())
            {
                str = sText_HelpBar_Failure;
            }
            else
            {
                return;
            }

            break;
        }
    case SHOP_MODE_DEFAULT:
        str = sText_Help_Bar;
        break;
    case SHOP_MODE_PURCHASE:
        str = sText_Help_Bar_Buy;
        break;
    case SHOP_MODE_SUCCESS:
        str = sText_Help_Bar_Complete;
        break;
    }

    u32 y = TILE_TO_PIXELS(18) + (SHOP_BG0_OFFSET * PokeMart_IsActive());
    ShopPrint_AddTextPrinter(FONT_SMALL_NARROW, TILE_TO_PIXELS(0) + 4, y, SHOP_FNTCLR_SECONDARY, str);
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
    if (gShopMenuDataPtr->numCategories < ShopConfig_Get()->totalShownItemRows)
        return gShopMenuDataPtr->numCategories;
    else
        return ShopConfig_Get()->totalShownItemRows;
}

u8 ShopConfig_GetTotalShownCategories(void)
{
    if (gShopMenuDataPtr->numCategories < ShopConfig_Get()->totalShownCategories)
        return gShopMenuDataPtr->numCategories;
    else
        return ShopConfig_Get()->totalShownCategories;
}

u8 ShopConfig_GetTotalShownItemsOnScreen(void)
{
    return ShopConfig_GetTotalShownItems() * ShopConfig_GetTotalShownItemRows();
}

const u8 *ShopConfig_GetFontColors(enum ShopMenuFontColors color)
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
