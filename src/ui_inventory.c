#include "global.h"
#include "ui_inventory.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
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
#include "line_break.h"
#include "palette.h"
#include "party_menu.h"
#include "pokemon_icon.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "trig.h"
#include "options_battle.h"
#include "overworld.h"
#include "ui_options_menu.h"
#include "util.h"
#include "constants/inventory.h"
#include "ui_inventory.h"
#include "frontier_pass.h"
#include "ui_options_menu.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/party_menu.h"
#include "ui_pokedex.h"
#include "ui_main_menu.h"
#include "ui_start_menu.h"

//==========DEFINES==========//
struct MenuResources
{
    u16 itemIdx;
    u16 itemIdxPickMode;
    u16 numItemsToToss;
    u8 currentSelectMode;
    u8 windowInfoNum;
    u8 spriteIDs[NUM_INVENTORY_SPRITES];
    u16 numItems[NUM_INVENTORY_POCKETS];
    u8 PartyPokemonIcon[PARTY_SIZE];
    u16 FavoritePocketItems[POCKETS_COUNT * MAX_INVENTORY_FAVORITE_ITEMS][NUM_FAVORITE_ITEMS_ARRAY_SIZE];
    u8 inventoryMode;
};

struct InventoryListMenuStruct
{
    struct WindowTemplate menuWindow;
    enum InventoryWindowIds inventoryMenuWindowId;
    u8 menuItemsCount;
    u8 calcWidth;
    struct SpeciesMenu menuItems[INVENTORY_MODE_COUNT];
    u8 menuPosition;
};

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;
static struct InventoryListMenuStruct *sInventoryListMenu = NULL;
static u8 *bgTilemapBuffers[INVENTORY_BG_COUNT] = {NULL};
EWRAM_DATA MainCallback inventorySavedCallback;

//==========STATIC=DEFINES==========//
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void HandleAndShowBgs(void);
static void SetScheduleBgs(u32 backgroundId);
static void SetBackgroundTransparency(void);
static bool8 DebugShouldSkipBg(u32 bg);
static bool8 AllocZeroedTilemapBuffers(void);
static void Menu_FadeAndBail(void);
static void Menu_LoadGraphics(void);
static bool32 AreTilesOrTilemapEmpty(u32 backgroundId);
static void Inventory_AddItemPlatform(enum InventoryRegisterDirection direction);
static void Inventory_AddAllItemPlatforms(void);
static void SpriteCB_RegisteredItem_Icon_Callback(struct Sprite *sprite);
static void Menu_InitWindows(void);
static void Inventory_PrintHeader(void);
static bool32 IsMonNotEmpty(u32 partyIndex);
static u32 Inventory_GetItemIdFromPocketIndex(u32 itemIndex, enum Pocket pocketId);
static void Inventory_TryPrintListCursor(enum Pocket pocketId, u32 itemScreenListIndex, u32 itemId, u32 itemIndex, u32 numItems);
static void Inventory_TryPrintFavoriteIcon(enum Pocket pocketId, u32 itemIdx, u32 itemScreenListIndex);
static void Inventory_PrintItems(enum Pocket pocketId, u32 itemId, u32 itemIndex, u32 itemScreenListIndex);
static void Inventory_PrintItemList(void);
static void Inventory_PrintDesc(void);
static void Inventory_PrintFooter(void);
static void Inventory_PrintToAllWindows(void);
static void FreeInventoryBackgrounds(void);
static void Menu_FreeResources(void);
static void Menu_FreeResourcesAndCallback(void);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static void Inventory_CreateMonBar(u32 partyIndex, u32 species, u32 status,u32 healthPercentage, u32 x, u32 y);
static void Inventory_LoadBackgroundPalette(void);
static void removeTransparentBackground(void);
static void Inventory_PartyDisplay(void);
static u8 ShowSpeciesIcon(u8 slot, u8 x, u8 y);
static void Inventory_CreateHeldItemSprite(u32 partyIndex, struct Pokemon *mon, u32 x, u32 y);
static void SpriteCB_Species_Icon_Dummy(struct Sprite *);
u8 UpdateMonIconFrameCropped(struct Sprite *sprite);
static u16 Inventory_GetItemIdCurrentlySelected(void);
static u8 getItemOptionNum(u16 item, u8 num);
static u8 getSelectedItemOptionNum(u8 num);
static void ForceReloadInventory(void);
bool8 isFavoriteItem(u8 pocketId, u8 itemIdx);
static void Inventory_UseItem(u8 taskId);
static u8 CreateRegisteredItemIcon(u8 slot);
static const u8 Inventory_GetItemCoordinates(u32 direction, u32 axis);
static void CreateAllRegisteredItemIcon(void);
static void RemoveItemInSlot(u8 pocketId, u8 itemIdx);
static void RemoveInventoryItem(u8 pocketId, u8 itemIdx, u16 quanity);
void ItemUseInBattle_UseTMHM(u8 taskId);
void ItemUseOutOfBattle_Repel_New(u8 taskId);
bool8 shouldShowRegisteredItems(void);
void ForceReloadInventory(void);
static void Task_ReturnToMainInventoryMenu(u8 taskId, u8 message);

//bag sort
static void SortItemsInInventory(u8 pocket, u8 type);
static void MergeSort(struct ItemSlot* array, u32 low, u32 high, s8 (*comparator)(struct ItemSlot*, struct ItemSlot*));
static void Merge(struct ItemSlot* array, u32 low, u32 mid, u32 high, s8 (*comparator)(struct ItemSlot*, struct ItemSlot*));
static s8 CompareItemsAlphabetically(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2);
static s8 CompareItemsByMost(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2);
static s8 CompareItemsByType(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2);
static s8 CompareItemsById(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2);

//Sprites
static void CreateUpArrowSprite(void);
static void CreateDownArrowSprite(void);

// Inventory Menu
static void Inventory_InitalizeMenu(u32 species);
static void Inventory_PopulateMenuItems(void);
static u32 Inventory_GetMenuHeight(void);
static void Inventory_CreateMenu(void);
static void Inventory_PrintListMenuText(u32 windowId, u32 menuItemsCount);
static void Inventory_DrawWindowFrame(u32 windowId);
static void Inventory_PrintCursorAndText(u32 windowId, u32 menuItemsCount);
static void Task_Inventory_HandleMenuInput(u8 taskId);
static void Inventory_HandleAButtonPress(u8 taskId);
u32 Inventory_GetMenuPosition(void);
static void Inventory_SetMenuPosition(u32 position);
static void Inventory_ChangeMenuPosition(s32 direction);
static void Inventory_PrintCursor(u32 windowId);
static u32 Inventory_CalculateCursorYPosition(void);
static void Inventory_CreateTossMenu(u8 taskId);
static void Inventory_PrintTossMenu(void);
static void Inventory_RemoveTossMenu(u8 taskId);
static void Task_Inventory_HandleTossInput(u8 taskId);
static void Inventory_ChangeTossAmount(s32 direction);
static void Inventory_HandleRegister(u8 taskId);
static void Task_Inventory_HandleRegisterDirection(u8 taskId);
static void Inventory_EnterMoveMode(u8 taskId);
static void Task_Inventory_HandleCantMoveInput(u8 taskId);
static void Inventory_MoveMode_HandleMovement(bool32 isUp);
static void Inventory_MoveMode_HandleMoveUp(u8 taskId);
static void Inventory_MoveMode_HandleMoveDown(u8 taskId);
static void Inventory_MoveMode_CancelMove(u8 taskId);
static void Task_Inventory_HandleMoveInput(u8 taskId);
static void Inventory_CancelFavorite(u8 taskId);
static bool8 Inventory_LastItemInMenu(void);
static void Inventory_TurnOff(u8 taskId);

void WaitSound(void);

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[INVENTORY_BG_COUNT] =
{
    {
        .bg = INVENTORY_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = INVENTORY_BG_NORMAL,
        .charBaseIndex = 2,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    {
        .bg = INVENTORY_BG_SHADOWS,
        .charBaseIndex = 2,
        .mapBaseIndex = 27,
        .priority = 2,
    },
    {
        .bg = INVENTORY_BG_WALLPAPER,
        .charBaseIndex = 3,
        .mapBaseIndex = 25,
        .priority = 2,
    },
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [INVENTORY_WINDOW_HEADER] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
    },
    [INVENTORY_WINDOW_ITEM_LIST] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 8,
        .tilemapTop = 2,
        .width = 22,
        .height = 11,
        .paletteNum = 1,
    },
    [INVENTORY_WINDOW_DESC] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 6,
        .tilemapTop = 13,
        .width = 24,
        .height = 5,
        .paletteNum = 1,
    },
    [INVENTORY_WINDOW_FOOTER] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
    },
    DUMMY_WIN_TEMPLATE,
};

static const u16 sMenuInterfacePalette[]         = INCBIN_U16("graphics/ui_menus/inventory/interface_palette.gbapal");
//static const u16 sMenuInterfacePalette_Sprites[] = INCBIN_U16("graphics/ui_menus/inventory/interface_palette_sprites.gbapal");
static const u16 sMenuInterfacePalette_Sprites[] = INCBIN_U16("graphics/ui_menus/start_menu/text.gbapal");

static const u16 sMenuPalette[]                  = INCBIN_U16("graphics/ui_menus/inventory/palette_custom.gbapal");
static const u16 sMenuPalette_Red[]              = INCBIN_U16("graphics/ui_menus/inventory/palettes/red.gbapal");
static const u16 sMenuPalette_Black[]            = INCBIN_U16("graphics/ui_menus/inventory/palettes/black.gbapal");
static const u16 sMenuPalette_Green[]            = INCBIN_U16("graphics/ui_menus/inventory/palettes/green.gbapal");
static const u16 sMenuPalette_Blue[]             = INCBIN_U16("graphics/ui_menus/inventory/palettes/blue.gbapal");
static const u16 sMenuPalette_Platinum[]         = INCBIN_U16("graphics/ui_menus/inventory/palettes/platinum.gbapal");
static const u16 sMenuPalette_Scarlet[]          = INCBIN_U16("graphics/ui_menus/inventory/palettes/scarlet.gbapal");
static const u16 sMenuPalette_Violet[]           = INCBIN_U16("graphics/ui_menus/inventory/palettes/violet.gbapal");
static const u16 sMenuPalette_White[]            = INCBIN_U16("graphics/ui_menus/inventory/palettes/white.gbapal");
static const u16 sMenuPalette_Yellow[]           = INCBIN_U16("graphics/ui_menus/inventory/palettes/yellow.gbapal");

static const u8 sInventoryFontColors[][3] =
{
    [INVENTORY_FONT_BLACK]   = {TEXT_COLOR_TRANSPARENT,  3,  TEXT_COLOR_TRANSPARENT},
    [INVENTORY_FONT_WHITE]   = {TEXT_COLOR_TRANSPARENT,  1,  TEXT_COLOR_TRANSPARENT},
    [INVENTORY_FONT_OUTLINE_COLOR] = {TEXT_COLOR_TRANSPARENT,  2, 1},
    [INVENTORY_FONT_RED]     = {TEXT_COLOR_TRANSPARENT,  14, TEXT_COLOR_TRANSPARENT},
    [INVENTORY_FONT_BLUE]    = {TEXT_COLOR_TRANSPARENT,  4,  TEXT_COLOR_TRANSPARENT},
};

//==========FUNCTIONS==========//
// UI loader template
void CB2_InventoryFromStartMenu(void)
{
    Inventory_Init(CB2_StartMenu_ReturnToUI, INVENTORY_MODE_FIELD);
}
void Task_OpenInventoryFromStartMenu(u8 taskId)
{
    //s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        Inventory_Init(CB2_ReturnToFieldWithOpenMenu, INVENTORY_MODE_FIELD);
        DestroyTask(taskId);
    }
}

void InitializeInventoryData(void)
{
    sMenuDataPtr->itemIdxPickMode   = 0;
    sMenuDataPtr->numItemsToToss    = 0;
    sMenuDataPtr->windowInfoNum     = 0;
    sInventoryListMenu->inventoryMenuWindowId = WINDOW_NONE;

    for(u32 i = 0; i < PARTY_SIZE; i++)
        sMenuDataPtr->PartyPokemonIcon[i] = 0xFF;

    for(u32 i = 0; i < NUM_INVENTORY_SPRITES; i++)
        sMenuDataPtr->spriteIDs[i] = 0xFF;

    ForceReloadInventory();
}

// This is our main initialization function if you want to call the menu from elsewhere
void Inventory_Init(MainCallback callback, u8 mode)
{
    sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources));
    sInventoryListMenu = AllocZeroed(sizeof(struct MenuResources));

    if (sMenuDataPtr == NULL || sInventoryListMenu == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    // initialize stuff
    inventorySavedCallback = callback;
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
    sMenuDataPtr->inventoryMode     = mode;

    InitializeInventoryData();

    SetMainCallback2(Menu_RunSetup);
}

static void Menu_RunSetup(void)
{
    while (1)
    {
        if (Menu_DoGfxSetup() == TRUE)
            break;
    }
}

static void Menu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Menu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static bool8 Menu_DoGfxSetup(void)
{
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000)
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ResetGpuRegsAndBgs();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        ResetPaletteFade();
        ResetTasks();
        ResetSpriteData();
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 2:
        if (Menu_InitBgs())
            gMain.state++;
        else
        {
            Menu_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        Menu_LoadGraphics();
        gMain.state++;
        break;
    case 4:
        Menu_InitWindows();
        gMain.state++;
        break;
    case 5:
        BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
        CreateUpArrowSprite();
        CreateDownArrowSprite();
        Inventory_PartyDisplay();
        LoadPalette(sMenuInterfacePalette, 16, 32);
        CreateTask(Task_MenuWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        Inventory_PrintToAllWindows();
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(Menu_VBlankCB);
        SetMainCallback2(Menu_MainCB);
        return TRUE;
    }
    return FALSE;
}

bool8 shouldShowRegisteredItems(void)
{
    return (gSaveBlock3Ptr->InventoryData.pocketNum == POCKET_KEY_ITEMS || sMenuDataPtr->currentSelectMode == INVENTORY_MODE_REGISTER);
}

static void Menu_FreeResourcesAndCallback(void)
{
    Menu_FreeResources();
}

static void FreeInventoryBackgrounds(void)
{
    for (enum InventoryBackgrounds backgroundId = 0; backgroundId < INVENTORY_BG_COUNT; backgroundId++)
        if (bgTilemapBuffers[backgroundId] != NULL)
            Free(bgTilemapBuffers[backgroundId]);
}

static void Menu_FreeResources(void)
{
    TRY_FREE_AND_SET_NULL(sMenuDataPtr);
    TRY_FREE_AND_SET_NULL(sInventoryListMenu);
    FreeMonIconPalettes();
    FreeAllWindowBuffers();
    FreeInventoryBackgrounds();
}

static void Task_MenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(inventorySavedCallback);
        Menu_FreeResourcesAndCallback();
        DestroyTask(taskId);
    }
}

static void Menu_FadeAndBail(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_MenuWaitFadeAndBail, 0);
    SetVBlankCallback(Menu_VBlankCB);
    SetMainCallback2(Menu_MainCB);
}

static bool8 Menu_InitBgs(void)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return TRUE;

    HandleAndShowBgs();
    return TRUE;
}

static bool8 DebugShouldSkipBg(u32 bg)
{
    bool32 skipBg[4] =
    {
        [0] = FALSE,
        [1] = FALSE,
        [2] = FALSE,
        [3] = FALSE,
    };

    return skipBg[bg];
}

static bool8 AllocZeroedTilemapBuffers(void)
{
    for (enum InventoryBackgrounds backgroundId = 0; backgroundId < INVENTORY_BG_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        u32 size = BG_SCREEN_SIZE;
        if (backgroundId > INVENTORY_BG_TEXT && backgroundId < INVENTORY_BG_WALLPAPER)
            size *= 2;

        bgTilemapBuffers[backgroundId] = AllocZeroed(size);

        if (bgTilemapBuffers[backgroundId] == NULL)
            return FALSE;

        memset(bgTilemapBuffers[backgroundId],0,size);
    }
    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, INVENTORY_BG_COUNT);

    for (enum InventoryBackgrounds backgroundId = 0; backgroundId < INVENTORY_BG_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, bgTilemapBuffers[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT1_BG2 | BLDCNT_TGT2_BG3);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
    ShowBg(INVENTORY_BG_SHADOWS);
}

static void removeTransparentBackground(){
    SetBgAttribute(INVENTORY_BG_SHADOWS, BG_ATTR_PRIORITY, INVENTORY_BG_SHADOWS);
    InitBgsFromTemplates(0, sMenuBgTemplates, ARRAY_COUNT(sMenuBgTemplates));
    //SetBgTilemapBuffer(INVENTORY_BG_SHADOWS, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_SHADOWS]);
    ScheduleBgCopyTilemapToVram(INVENTORY_BG_SHADOWS);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(INVENTORY_BG_SHADOWS);
}

static const u32* const sInventoryTilesLUT[] =
{
    [INVENTORY_BG_TEXT] = NULL,
    [INVENTORY_BG_NORMAL] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/tallmerge.4bpp.smol"),
    [INVENTORY_BG_SHADOWS] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/tallmerge.4bpp.smol"),
    [INVENTORY_BG_WALLPAPER] = (const u32[])INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.4bpp.smol"),
};

static const u32* const sInventoryTilemapLUT[] =
{
    [INVENTORY_BG_TEXT] = NULL,
    [INVENTORY_BG_NORMAL] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/tall_merge_textlayer.bin.smolTM"),
    [INVENTORY_BG_SHADOWS] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/tall_merge_shadows.bin.smolTM"),
    [INVENTORY_BG_WALLPAPER] = (const u32[])INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.bin.smolTM"),
};

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sInventoryTilesLUT[backgroundId] == NULL || sInventoryTilemapLUT[backgroundId] == NULL);
}

static const struct {
    const struct SpriteSheet sheets[NUM_ITEM_INVENTORY_TAGS];
    const struct SpritePalette palette;
} sInventory_SpriteGraphics =
{
    {
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/inventory/backgrounds/sprites/partyShadow.4bpp"),
            TILE_OFFSET_4BPP(INVENTORY_SPRITE_PLATFORM_SIZE), TAG_ITEM_INVENTORY_PLATFORMS
        },
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/inventory/backgrounds/sprites/itemPlatform.4bpp"),
            TILE_OFFSET_4BPP(INVENTORY_SPRITE_PLATFORM_ITEM_SIZE), TAG_ITEM_INVENTORY_PLATFORMS_ITEM
        },
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/inventory/icons/register_arrows.4bpp"),
            TILE_OFFSET_4BPP(INVENTORY_SPRITE_PLATFORM_ITEM_SIZE), TAG_ITEM_INVENTORY_PLATFORMS_COMPASS
        },
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/inventory/icons/held_item.4bpp"),
            TILE_OFFSET_4BPP(INVENTORY_SPRITE_HELD_ITEM_SIZE), TAG_ITEM_INVENTORY_HELD_ITEM
        },
        { NULL }
    },
    { sMenuInterfacePalette_Sprites, TAG_ITEM_INVENTORY_SPRITE_PALETTE}
};

static const struct OamData sInventory_HeldItemOamData  =
{
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
    .priority = 1
};

static const struct SpriteTemplate sInventory_HeldItemTemplate =
{
    .tileTag = TAG_ITEM_INVENTORY_HELD_ITEM,
    .paletteTag = TAG_ITEM_INVENTORY_SPRITE_PALETTE,
    .oam = &sInventory_HeldItemOamData,
    .images = NULL,
    .anims = gDummySpriteAnimTable,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Species_Icon_Dummy,
};

static const struct OamData sInventory_MonPlatformNormalOamData  =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 1
};

static const struct SpriteTemplate sInventory_CompassSpriteTemplate =
{
    .tileTag = TAG_ITEM_INVENTORY_PLATFORMS_COMPASS,
    .paletteTag = TAG_ITEM_INVENTORY_SPRITE_PALETTE,
    .oam = &sInventory_MonPlatformNormalOamData,
    .images = NULL,
    .anims = gDummySpriteAnimTable,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_RegisteredItem_Icon_Callback,
};

static const struct OamData sInventory_MonPlatformOamData  =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .objMode = ST_OAM_OBJ_BLEND,
    .priority = 2
};

static const struct SpriteTemplate sMonStatus_PlatformSpriteTemplate =
{
    .tileTag = TAG_ITEM_INVENTORY_PLATFORMS,
    .paletteTag = TAG_ITEM_INVENTORY_SPRITE_PALETTE,
    .oam = &sInventory_MonPlatformOamData ,
    .images = NULL,
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){ ANIMCMD_FRAME(16, 1), ANIMCMD_END },
        (const union AnimCmd[]){ ANIMCMD_FRAME(0, 1), ANIMCMD_END },
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Species_Icon_Dummy,
};

static const struct OamData sInventory_ItemPlatformOamData  =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .objMode = ST_OAM_OBJ_BLEND,
    .priority = 2
};

static const struct SpriteTemplate sItemPlatformSpriteTemplate =
{
    .tileTag = TAG_ITEM_INVENTORY_PLATFORMS_ITEM,
    .paletteTag = TAG_ITEM_INVENTORY_SPRITE_PALETTE,
    .oam = &sInventory_ItemPlatformOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_RegisteredItem_Icon_Callback,
};

static void Inventory_AddAllItemPlatforms(void)
{
    for (enum InventoryRegisterDirection direction = 0; direction < INVENTORY_REGISTER_NUM_DIRECTIONS; direction++)
        Inventory_AddItemPlatform(direction);

    u8 *spriteIds = sMenuDataPtr->spriteIDs;
    struct Sprite *sprite = NULL;

    if (spriteIds[INVENTORY_SPRITE_REGISTER_COMPASS] != SPRITE_NONE)
        return;

    spriteIds[INVENTORY_SPRITE_REGISTER_COMPASS] = CreateSprite(&sInventory_CompassSpriteTemplate,0,0,2);

    sprite = &gSprites[spriteIds[INVENTORY_SPRITE_REGISTER_COMPASS]];
    sprite->x2 = REGISTERED_ITEM_COMPASS_X;
    sprite->y2 = REGISTERED_ITEM_COMPASS_Y;
}

static void Inventory_AddItemPlatform(enum InventoryRegisterDirection direction)
{
    u8 *spriteIds = sMenuDataPtr->spriteIDs;
    struct Sprite *sprite = NULL;

    if (spriteIds[INVENTORY_SPRITE_ITEM_PLATFORM_1 + direction] != SPRITE_NONE)
        return;

    spriteIds[INVENTORY_SPRITE_ITEM_PLATFORM_1 + direction] = CreateSprite(&sItemPlatformSpriteTemplate,0,0,2);

    sprite = &gSprites[spriteIds[INVENTORY_SPRITE_ITEM_PLATFORM_1 + direction]];
    sprite->x2 = Inventory_GetItemCoordinates(direction, AXIS_X);
    sprite->y2 = Inventory_GetItemCoordinates(direction, AXIS_Y);
}

static void Inventory_AddMonPlatforms(bool32 firstColumn, u32 partyIndex, u32 x, u32 y)
{
    u8 *spriteIds = sMenuDataPtr->spriteIDs;
    struct Sprite *sprite = NULL;

    if (spriteIds[INVENTORY_SPRITE_MON_PLATFORM_SHADOW_1 + partyIndex] != SPRITE_NONE)
        return;

    spriteIds[INVENTORY_SPRITE_MON_PLATFORM_SHADOW_1 + partyIndex] = CreateSprite(&sMonStatus_PlatformSpriteTemplate, 0, 0, 2);

    sprite = &gSprites[spriteIds[INVENTORY_SPRITE_MON_PLATFORM_SHADOW_1 + partyIndex]];
    sprite->x2 = x;
    sprite->y2 = y;

    StartSpriteAnim(sprite, firstColumn);
}

static void Inventory_PartyDisplay(void)
{
    u32 x = 16;
    u32 y = 32;

    if (!gPlayerPartyCount)
        return;

    for (u32 partyIndex = 0; partyIndex < PARTY_SIZE; partyIndex++)
    {
        bool32 firstColumn = ((partyIndex % 2) == 0);

        ShowSpeciesIcon(partyIndex,x,y);
        Inventory_AddMonPlatforms(firstColumn,partyIndex,x,y);

        if (firstColumn)
        {
            x += 32;
        }
        else
    {
            x = 16;
            y += 26;

            if (partyIndex > 3)
                y -= 2;
        }
    }
    Inventory_AddAllItemPlatforms();
    CreateAllRegisteredItemIcon();
}

static void Menu_LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum InventoryBackgrounds backgroundId = 0; backgroundId < INVENTORY_BG_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sInventoryTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sInventoryTilemapLUT[backgroundId],0,0);
    }
    Inventory_LoadBackgroundPalette();
    LoadSpriteSheets(sInventory_SpriteGraphics.sheets);
    LoadSpritePalette(&sInventory_SpriteGraphics.palette);
}

static void Menu_InitWindows(void)
{
    u32 baseBlock = 1;
    enum InventoryWindowIds windowId = 0;
    struct WindowTemplate template;
    InitWindows(&gDummyWindowTemplate);
    FreeAllWindowBuffers();
    DeactivateAllTextPrinters();

    for (; windowId < INVENTORY_WINDOW_COUNT; windowId++)
    {
        template = sMenuWindowTemplates[windowId];
        template.baseBlock = baseBlock;

        AddWindow(&template);
        FillWindowPixelBuffer(windowId, TEXT_COLOR_TRANSPARENT);
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);

        baseBlock += template.width * template.height;
    }
}

u16 getMaxItemsFromPocket(u8 pocket)
{
    switch(pocket)
    {
        case POCKET_MEDICINE:
            return BAG_MEDICINE_COUNT;
        break;
        case POCKET_POKE_BALLS:
            return BAG_POKEBALLS_COUNT;
        break;
        case POCKET_BATTLE_ITEMS:
            return BAG_BATTLE_ITEMS_COUNT;
        break;
        case POCKET_POWERUP:
            return BAG_POWERUP_COUNT;
        break;
        case POCKET_BERRIES:
            return BAG_BERRIES_COUNT;
        break;
        case POCKET_OTHER:
            return BAG_OTHER_COUNT;
        break;
        case POCKET_TM_HM:
            return BAG_TMHM_COUNT;
        break;
        case POCKET_TREASURE:
            return BAG_TREASURES_COUNT;
        break;
        case POCKET_Z_CRYSTALS:
            return BAG_Z_CRYSTALS_COUNT;
        break;
        case POCKET_MEGA_STONES:
            return BAG_MEGA_STONES_COUNT;
        break;
        case POCKET_KEY_ITEMS:
            return BAG_KEYITEMS_COUNT;
        break;
        case POCKET_FAVORITE_ITEMS:
            return (MAX_INVENTORY_FAVORITE_ITEMS * POCKETS_COUNT);
        break;
    }

    return 0;
}

void ForceReloadInventory(void){
    u16 i, j, k, itemId, count, maxCount;
    struct BagPocket *pocket;

    for(i = 0; i < NUM_INVENTORY_POCKETS - 1; i++){
        pocket = &gBagPockets[i];
        maxCount = getMaxItemsFromPocket(i);

        for(j = 0; j < maxCount; j++){
            itemId = pocket->itemSlots[j].itemId;
            if(itemId == ITEM_NONE)
                break;
        }

        sMenuDataPtr->numItems[i] = j + 1; // +1 for the Exit Button
    }

    //Check for Registered Items
    RemoveEmptyRegisteredItems();

    //Favorite Pocket
    sMenuDataPtr->numItems[POCKET_FAVORITE_ITEMS] = 0;

    //Clears Favorite Pocket
    for(i = 0; i < (POCKETS_COUNT * MAX_INVENTORY_FAVORITE_ITEMS); i++){
        sMenuDataPtr->FavoritePocketItems[i][FAVORITE_ITEM_ID]           = ITEM_NONE; //ItemId
        sMenuDataPtr->FavoritePocketItems[i][FAVORITE_ITEM_QUANTITY]     = 0;         //Count
        sMenuDataPtr->FavoritePocketItems[i][FAVORITE_ITEM_POCKET_INDEX] = 0;         //Item Index
        sMenuDataPtr->FavoritePocketItems[i][FAVORITE_ITEM_POCKET]       = 0;         //Original Pocket
    }

    for(i = 0; i < (NUM_INVENTORY_POCKETS - 1); i++){
        pocket = &gBagPockets[i];

        //Sets Favorite Pocket
        for(j = 0; j < MAX_INVENTORY_FAVORITE_ITEMS; j++){
            if(gSaveBlock3Ptr->InventoryData.numFavoriteItems[i] > j){
                k = sMenuDataPtr->numItems[POCKET_FAVORITE_ITEMS];
                itemId = pocket->itemSlots[j].itemId;
                count = CountTotalItemQuantityInBag(itemId);
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_ID]           = itemId; //ItemId
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_QUANTITY]     = count; //Count
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_POCKET_INDEX] = j; //Item Index
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_POCKET]       = i; //Original Pocket
                sMenuDataPtr->numItems[POCKET_FAVORITE_ITEMS]++;
            }
            else
                break;
        }
    }
    sMenuDataPtr->numItems[POCKET_FAVORITE_ITEMS]++; //Exit Button
}

// Bag sorting
static const u8 sText_Toss_Yes[] = _("Yes");
static const u8 sText_Toss_No[]  = _("No");

static const struct StringList sDirectionStrings[INVENTORY_REGISTER_NUM_DIRECTIONS + 1] = {
    [INVENTORY_REGISTER_DIRECTION_UP]    = { _("Up"),     },
    [INVENTORY_REGISTER_DIRECTION_DOWN]  = { _("Down"),   },
    [INVENTORY_REGISTER_DIRECTION_LEFT]  = { _("Left"),   },
    [INVENTORY_REGISTER_DIRECTION_RIGHT] = { _("Right"),  },
    [INVENTORY_REGISTER_NUM_DIRECTIONS]  = { _("Cancel"), },
};

static const u8 sBagMenuSortItems[] =
{
    INVENTORY_ACTION_BY_NAME,
    INVENTORY_ACTION_BY_TYPE,
    INVENTORY_ACTION_BY_AMOUNT,
    INVENTORY_ACTION_CANCEL,
};

static const u8 sBagMenuSortKeyItems[] =
{
    INVENTORY_ACTION_BY_NAME,
    INVENTORY_ACTION_CANCEL,
};

static const u8 sBagMenuSortPokeBallsBerries[] =
{
    INVENTORY_ACTION_BY_NAME,
    INVENTORY_ACTION_BY_AMOUNT,
    INVENTORY_ACTION_DUMMY,
    INVENTORY_ACTION_CANCEL,
};

static void SortItemsInInventory(u8 pocket, u8 type)
{
    struct ItemSlot* itemMem;
    u16 itemAmount = getMaxItemsFromPocket(pocket);
    u8 low = 0;

    if(pocket <= POCKETS_COUNT)
        low = gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocket];

    switch (pocket)
    {
    case POCKET_MEDICINE:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_Medicine;
        break;
    case POCKET_POKE_BALLS:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_PokeBalls;
        break;
    case POCKET_BATTLE_ITEMS:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_BattleItems;
    break;
    case POCKET_POWERUP:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_PowerUp;
    break;
    case POCKET_BERRIES:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_Berries;
        break;
    case POCKET_OTHER:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_Other;
    break;
    case POCKET_TM_HM:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_TMsHMs;
    break;
    case POCKET_TREASURE:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_Treasure;
    break;
    case POCKET_Z_CRYSTALS:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_Z_Crystals;
    break;
    case POCKET_MEGA_STONES:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_Mega_Stones;
    break;
    case POCKET_KEY_ITEMS:
        itemMem = gSaveBlock1Ptr->bag.bagPocket_KeyItems;
        break;
    case POCKET_FAVORITE_ITEMS:
    default:
        return;
    }

    switch (type)
    {
    case ITEM_SORT_ALPHABETICALLY:
        MergeSort(itemMem, low, itemAmount - 1, CompareItemsAlphabetically);
        break;
    case ITEM_SORT_BY_AMOUNT:
        MergeSort(itemMem, low, itemAmount - 1, CompareItemsByMost);
        break;
    default:
        MergeSort(itemMem, low, itemAmount - 1, CompareItemsByType);
        break;
    }
}

static void MergeSort(struct ItemSlot* array, u32 low, u32 high, s8 (*comparator)(struct ItemSlot*, struct ItemSlot*))
{
    u32 mid;

    if (high <= low)
        return;

    mid = low + (high - low) / 2;
    MergeSort(array, low, mid, comparator);      // Sort left half.
    MergeSort(array, mid + 1, high, comparator); // Sort right half.
    Merge(array, low, mid, high, comparator);    // Merge results.
}

static void Merge(struct ItemSlot* array, u32 low, u32 mid, u32 high, s8 (*comparator)(struct ItemSlot*, struct ItemSlot*))
{
    u32 i = low;
    u32 j = mid + 1;
    u32 k;
    struct ItemSlot aux[high + 1];

    for (k = low; k <= high; ++k)
        aux[k] = array[k];

    for (k = low; k <= high; ++k)
    { //Merge back to a[low..high]
        if (i > mid)
            array[k] = aux[j++];
        else if (j > high)
            array[k] = aux[i++];
        else if (comparator(&aux[j], &aux[i]) < 0)
            array[k] = aux[j++];
        else
            array[k] = aux[i++];
    }
}

static s8 CompareItemsAlphabetically(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2)
{
    u16 item1 = itemSlot1->itemId;
    u16 item2 = itemSlot2->itemId;
    int i;
    const u8 *name1;
    const u8 *name2;

    if (item1 == ITEM_NONE)
        return 1;
    else if (item2 == ITEM_NONE)
        return -1;


    if (gSaveBlock3Ptr->InventoryData.pocketNum == POCKET_TM_HM)
    {
        name1 = GetMoveName(GetItemSecondaryId(item1));
        name2 = GetMoveName(GetItemSecondaryId(item2));
    }
    else
    {
        name1 = GetItemName(item1);
        name2 = GetItemName(item2);
    }

    for (i = 0; ; ++i)
    {
        if (name1[i] == EOS && name2[i] != EOS)
            return -1;
        else if (name1[i] != EOS && name2[i] == EOS)
            return 1;
        else if (name1[i] == EOS && name2[i] == EOS)
            return 0;

        if (name1[i] < name2[i])
            return -1;
        else if (name1[i] > name2[i])
            return 1;
    }

    return 0; //Will never be reached
}

static s8 CompareItemsByMost(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2)
{
    if (gSaveBlock3Ptr->InventoryData.pocketNum == POCKET_TM_HM)
        return CompareItemsById(itemSlot1, itemSlot2);

    u32 quantity1 = itemSlot1->quantity;
    u32 quantity2 = itemSlot2->quantity;

    if (itemSlot1->itemId == ITEM_NONE)
        return 1;
    else if (itemSlot2->itemId == ITEM_NONE)
        return -1;

    if (quantity1 < quantity2)
        return 1;
    else if (quantity1 > quantity2)
        return -1;

    return CompareItemsAlphabetically(itemSlot1, itemSlot2); //Items have same quantity so sort alphabetically
}

static s8 CompareItemsByType(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2)
{
    u32 type1, type2;

    if (itemSlot1->itemId == ITEM_NONE)
        return 1;
    else if (itemSlot2->itemId == ITEM_NONE)
        return -1;

    if (gSaveBlock3Ptr->InventoryData.pocketNum == POCKET_TM_HM)
    {
        type1 = GetMoveType(GetItemSecondaryId(itemSlot1->itemId));
        type2 = GetMoveType(GetItemSecondaryId(itemSlot2->itemId));
    }
    else
    {
        type1 = (itemSlot1->itemId == ITEM_NONE) ? 0xFF : GetItemSortType(itemSlot1->itemId);
        type2 = (itemSlot2->itemId == ITEM_NONE) ? 0xFF : GetItemSortType(itemSlot2->itemId);
    }

    if (type1 < type2)
        return -1;
    else if (type1 > type2)
        return 1;

    if (gSaveBlock3Ptr->InventoryData.pocketNum == POCKET_TM_HM)
        return CompareItemsById(itemSlot1, itemSlot2);

    return CompareItemsAlphabetically(itemSlot1, itemSlot2); //Items are of same type so sort alphabetically
}

static s8 CompareItemsById(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2)
{
    u32 id1 = itemSlot1->itemId;
    u32 id2 = itemSlot2->itemId;

    if (id1 < id2)
        return -1;
    else if (id1 > id2)
        return 1;

    return CompareItemsAlphabetically(itemSlot1, itemSlot2); //Items are of same type so sort alphabetically
}

static void TrySortBag(void)
{
    u8 pocket = gSaveBlock3Ptr->InventoryData.pocketNum;
    u8 numFavorites = gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocket];
    u16 numItems = sMenuDataPtr->numItems[pocket] - numFavorites;
    //can't sort with 0 or 1 item in bag + Exit Button
    if (numItems <= 2)
        PlaySE(SE_FAILURE);
    else{
        SortItemsInInventory(pocket, sMenuDataPtr->itemIdxPickMode);
        PlaySE(SE_SELECT);
    }
}

//Arrows
static void SpriteCallback_Inventory_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if(gSaveBlock3Ptr->InventoryData.itemIdx == 0)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

static void SpriteCallback_Inventory_DownArrow(struct Sprite *sprite)
{
    u16 numitems = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum];
    u8 val = sprite->data[0] + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if(gSaveBlock3Ptr->InventoryData.itemIdx >= numitems -1) //Because of the Exit Button
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

static const u8 sInventoryListMenuCursor[] = INCBIN_U8("graphics/ui_menus/inventory/listMenuCursor.4bpp");

static const u32 gInventoryUpArrow_Gfx[]    = INCBIN_U32("graphics/ui_menus/inventory/arrow_up.4bpp.lz");
static const u32 gInventoryDownArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/inventory/arrow_down.4bpp.lz");
static const u32 gInventoryLeftArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/inventory/arrow_left.4bpp.lz");
static const u32 gInventoryRightArrow_Gfx[] = INCBIN_U32("graphics/ui_menus/inventory/arrow_right.4bpp.lz");

static const u8 sInventoryCursor_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/cursor.4bpp");
static const u8 sInventoryCursor2_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/cursor2.4bpp");

static const u8 sInventoryCursor_Move_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/cursor_move.4bpp");
static const u8 sInventoryCursor2_Move_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/cursor2_move.4bpp");
static const u8 sInventoryCursor3_Move_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/cursor3_move.4bpp");

static const u8 sInventoryPickMenuTile_Gfx[]       = INCBIN_U8("graphics/ui_menus/inventory/white_cursor.4bpp");
static const u8 sInventorySelectorCursor_Gfx[]     = INCBIN_U8("graphics/ui_menus/inventory/selector_pick_mode.4bpp");
static const u8 sInventorySelectorCursorToss_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/selector_toss_mode.4bpp");

static const u8 sInventoryPocketIcon0_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/pocket_0.4bpp");
static const u8 sInventoryPocketIcon1_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/pocket_1.4bpp");

static const u8 gInventoryHeldItem_Gfx[]       = INCBIN_U8("graphics/ui_menus/inventory/icons/held_item.4bpp");

static const u8 gInventoryIcon_Pinned_Gfx[]      = INCBIN_U8("graphics/ui_menus/inventory/icons/pinned.4bpp");

static const u8 sInventoryRegisterIndicator_Up_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/register_up.4bpp");
static const u8 sInventoryRegisterIndicator_Down_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/register_down.4bpp");
static const u8 sInventoryRegisterIndicator_Left_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/register_left.4bpp");
static const u8 sInventoryRegisterIndicator_Right_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/indicators/register_right.4bpp");

static const u8 sInventoryTMHM_Type1_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/type1.4bpp");
static const u8 sInventoryTMHM_Type1_2_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type1_2.4bpp");
static const u8 sInventoryTMHM_Type1_3_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type1_3.4bpp");

static const u8 sInventoryTMHM_Type2_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/type2.4bpp");
static const u8 sInventoryTMHM_Type2_2_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type2_2.4bpp");
static const u8 sInventoryTMHM_Type2_3_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type2_3.4bpp");

static const u8 sInventoryTMHM_Type3_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/type3.4bpp");
static const u8 sInventoryTMHM_Type3_2_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type3_2.4bpp");
static const u8 sInventoryTMHM_Type3_3_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type3_3.4bpp");

static const u8 sInventoryTMHM_Type4_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/type4.4bpp");
static const u8 sInventoryTMHM_Type4_2_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type4_2.4bpp");
static const u8 sInventoryTMHM_Type4_3_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type4_3.4bpp");

static const u8 sInventoryTMHM_Type5_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/type5.4bpp");
static const u8 sInventoryTMHM_Type5_2_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type5_2.4bpp");
static const u8 sInventoryTMHM_Type5_3_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/type5_3.4bpp");

static const u8 sInventoryTMHM_Cursor_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/indicators/cursor_type.4bpp");

static const u8 sInventoryTMHM_Type_Bug_Gfx[]      = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_bug.4bpp");
static const u8 sInventoryTMHM_Type_Dark_Gfx[]     = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_dark.4bpp");
static const u8 sInventoryTMHM_Type_Dragon_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_dragon.4bpp");
static const u8 sInventoryTMHM_Type_Electric_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_electric.4bpp");
static const u8 sInventoryTMHM_Type_Fighting_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_fighting.4bpp");
static const u8 sInventoryTMHM_Type_Fire_Gfx[]     = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_fire.4bpp");
static const u8 sInventoryTMHM_Type_Flying_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_flying.4bpp");
static const u8 sInventoryTMHM_Type_Ghost_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_ghost.4bpp");
static const u8 sInventoryTMHM_Type_Grass_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_grass.4bpp");
static const u8 sInventoryTMHM_Type_Ground_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_ground.4bpp");
static const u8 sInventoryTMHM_Type_Ice_Gfx[]      = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_ice.4bpp");
static const u8 sInventoryTMHM_Type_Normal_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_normal.4bpp");
static const u8 sInventoryTMHM_Type_Poison_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_poison.4bpp");
static const u8 sInventoryTMHM_Type_Psychic_Gfx[]  = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_psychic.4bpp");
static const u8 sInventoryTMHM_Type_Rock_Gfx[]     = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_rock.4bpp");
static const u8 sInventoryTMHM_Type_Steel_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_steel.4bpp");
static const u8 sInventoryTMHM_Type_Water_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_water.4bpp");
static const u8 sInventoryTMHM_Type_Fairy_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/indicators/types/type_fairy.4bpp");

static const struct SpritePalette sInventoryInterfaceSpritePalette[] = {
    {sMenuInterfacePalette_Sprites, PAL_UI_SPRITES},
};

static void CreateUpArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = INVENTORY_SPRITE_UP_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_InventoryUpArrow = {gInventoryUpArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_Inventory_UpArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_InventoryUpArrow);
    LoadSpritePalette(sInventoryInterfaceSpritePalette);
    spriteId = CreateSprite(&TempSpriteTemplate, INVENTORY_UP_ARROW_X, INVENTORY_UP_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape       = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size        = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority    = 1;
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.paletteNum  = PAL_UI_SPRITES;
}

static void CreateDownArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = INVENTORY_SPRITE_DOWN_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_InventoryDownArrow = {gInventoryDownArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_Inventory_DownArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_InventoryDownArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, INVENTORY_DOWN_ARROW_X, INVENTORY_DOWN_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape      = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size       = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority   = 1;
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.paletteNum = PAL_UI_SPRITES;
}

//Pokemon Icon Stuff
static void SpriteCB_Species_Icon_Dummy(struct Sprite *sprite)
{
    if(shouldShowRegisteredItems())
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

static bool8 canMonLearnCurrentTMHM(u8 partyIndex){
    enum Pocket pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u16 itemId = Inventory_GetItemIdCurrentlySelected();
    enum Pocket itemPocket = GetItemPocket(itemId);

    if(pocketId != POCKET_TM_HM && itemPocket != POCKET_TM_HM)
    {
        return TRUE;
    }
    else
    {
        struct Pokemon *mon = &gPlayerParty[partyIndex];
        u16 move = ItemIdToBattleMoveId(itemId);

        switch(CanTeachMove(mon, move)){
            case CANNOT_LEARN_MOVE_IS_EGG:
            case CANNOT_LEARN_MOVE:
                return FALSE;
                break;
            case CAN_LEARN_MOVE:
            case ALREADY_KNOWS_MOVE:
                return TRUE;
                break;
        }
    }

    return FALSE; //Fallback
}

void SpriteCB_MonIconCropped(struct Sprite *sprite)
{
    u8 partyNum = sprite->data[0];

    //Disable them when in the key items pocket
    if(shouldShowRegisteredItems())
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;

    if(canMonLearnCurrentTMHM(partyNum))
        UpdateMonIconFrameCropped(sprite);
}

static void *GetSpriteCallbackForIcon(u32 percent, bool32 isEgg)
{
    if (((percent > 20) && isEgg) || percent == 0)
        return SpriteCB_Species_Icon_Dummy;

    return SpriteCB_MonIconCropped;
}

static u32 GetHPEggCyclePercent(u32 partyIndex)
{
    struct Pokemon *mon = &gPlayerParty[partyIndex];

    if (!GetMonData(mon, MON_DATA_IS_EGG))
        return ((GetMonData(mon, MON_DATA_HP)) * 100 / (GetMonData(mon,MON_DATA_MAX_HP)));
    else
        return ((GetMonData(mon, MON_DATA_FRIENDSHIP)) * 100 / (gSpeciesInfo[GetMonData(mon,MON_DATA_SPECIES)].eggCycles));
}

static void UpdateEggIconFrame(u8 SpriteID){
    RequestSpriteCopy(
        (u8 *)gSprites[SpriteID].images + (INVENTORY_ICON_FRAME_SCROLL),     // The sprite used + the pixels that it will scroll
        (u8 *)(OBJ_VRAM0 + gSprites[SpriteID].oam.tileNum * TILE_SIZE_4BPP), // No Idea :P
        INVENTORY_ICON_SPRITE_SIZE                                           // The total size of the image
    );
}

u8 UpdateMonIconFrameCropped(struct Sprite *sprite)
{
    u8 result = 0;
    u16 pixelscroll = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            pixelscroll = (INVENTORY_ICON_FRAME_SCROLL + ((frame * INVENTORY_ICON_FRAME_COUNT ) * INVENTORY_ICON_FRAME_SCROLL)); //Scroll 256 pixels (32 * 8 / 2) for frame 0 and 1280 Pixels (32 * 40 / 2) for frame 1

            RequestSpriteCopy(
                (u8 *)sprite->images + pixelscroll,                       // The sprite used + the pixels that it will scroll
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP), // No Idea :P
                INVENTORY_ICON_SPRITE_SIZE);                              // The total size of the image
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 ShowSpeciesIcon(u8 slot, u8 x, u8 y)
{
    struct Pokemon *mon = &gPlayerParty[slot];
    u32 species = ReturnTransformationIfConditionMet(mon);

    u32 SpriteID = SPRITE_NONE;

    if (!IsMonNotEmpty(slot))
        return SpriteID;

    u32 percent = GetHPEggCyclePercent(slot);
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY);
    u16 currentHP = GetMonData(mon, MON_DATA_HP);
    bool32 isEgg = (species == SPECIES_EGG);
    u32 status = GetMonData(&gPlayerParty[slot], MON_DATA_STATUS);
    u32 currentStatus = GetAilmentFromStatus(status);
    u8 palette = LoadMonIconPaletteWithAilment(species, personality, currentStatus, currentHP, slot + MON_STARTING_PALETTE_NUM);

    sMenuDataPtr->PartyPokemonIcon[slot] = SpriteID;


    y -= 8;

    SpriteID = CreateMonIcon(species, GetSpriteCallbackForIcon(percent, isEgg), x, y, 0, GetMonData(mon,MON_DATA_PERSONALITY));

    sMenuDataPtr->PartyPokemonIcon[slot] = SpriteID;

    gSprites[SpriteID].oam.matrixNum  = AllocOamMatrix();
    gSprites[SpriteID].oam.affineMode = ST_OAM_AFFINE_NORMAL;
    gSprites[SpriteID].oam.shape      = SPRITE_SHAPE(32x16);
    gSprites[SpriteID].oam.size       = SPRITE_SIZE(32x16);
    gSprites[SpriteID].oam.priority   = 2;
    gSprites[SpriteID].oam.paletteNum = palette;
    gSprites[SpriteID].data[0]        = slot;

    UpdateEggIconFrame(SpriteID); //Updates the frame once to correct the coordinates

    CalcCenterToCornerVec(&gSprites[SpriteID], SPRITE_SHAPE(32x16), SPRITE_SIZE(32x16), ST_OAM_AFFINE_NORMAL);

    SetOamMatrixRotationScaling(gSprites[SpriteID].oam.matrixNum, -512, 512, 0);

    gSprites[SpriteID].invisible = FALSE;
    Inventory_CreateMonBar(slot, species, status, percent, x, y);
    Inventory_CreateHeldItemSprite(slot, mon, x, y);
    return SpriteID;
}

static void Inventory_CreateHeldItemSprite(u32 partyIndex, struct Pokemon *mon, u32 x, u32 y)
{
    if (GetMonData(mon,MON_DATA_HELD_ITEM) == ITEM_NONE)
        return;

    u8 *spriteIds = sMenuDataPtr->spriteIDs;
    struct Sprite *sprite = NULL;

    spriteIds[INVENTORY_SPRITE_MON_ITEM_1 + partyIndex] = CreateSprite(&sInventory_HeldItemTemplate, 0, 0, 0);

    sprite = &gSprites[spriteIds[INVENTORY_SPRITE_MON_ITEM_1 + partyIndex]];
    sprite->x2 = x + 16;
    sprite->y2 = y + 12;
    sprite->callback = SpriteCB_Species_Icon_Dummy;
}

static const u8 sBlankGfx[] = INCBIN_U8("graphics/interface/blank.4bpp");
static const struct SpriteFrameImage sInventoryDummyFrames[] = { obj_frame_tiles(sBlankGfx) };

static const struct OamData sMonStatus_OamData =
{
    .shape = SPRITE_SHAPE(32x8),
    .size = SPRITE_SIZE(32x8),
};

static const struct SpriteTemplate sMonStatus_SpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_ITEM_INVENTORY_SPRITE_PALETTE,
    .oam = &sMonStatus_OamData,
    .anims = gDummySpriteAnimTable,
    .images = sInventoryDummyFrames,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static void Inventory_CreateMonBar(u32 partyIndex, u32 species, u32 status,u32 healthPercentage, u32 x, u32 y)
{
    u8 *spriteIds = sMenuDataPtr->spriteIDs;
    struct Sprite *sprite = NULL;

    spriteIds[INVENTORY_SPRITE_MON_STATUS_1 + partyIndex] = CreateSprite(&sMonStatus_SpriteTemplate, (((status & STATUS1_ANY) || !healthPercentage) ? 4 : 0) + 16, 0, 0);

    sprite = &gSprites[spriteIds[INVENTORY_SPRITE_MON_STATUS_1 + partyIndex]];
    MonStatus_InjectStatusGraphics(sprite, status, healthPercentage);
    sprite->x2 = x - 17;
    sprite->y2 = y + 12;
    sprite->callback = SpriteCB_Species_Icon_Dummy;
}

static void Inventory_LoadBackgroundPalette(void)
{
    u8 chosenBackgroundColor = gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR];

    switch(chosenBackgroundColor){
        case VISUAL_OPTION_COLOR_BLACK:
            LoadPalette(sMenuPalette_Black, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_BLUE:
            LoadPalette(sMenuPalette_Blue, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_GREEN:
            LoadPalette(sMenuPalette_Green, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_PLATINUM:
            LoadPalette(sMenuPalette_Platinum, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_RED:
            LoadPalette(sMenuPalette_Red, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_SCARLET:
            LoadPalette(sMenuPalette_Scarlet, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_VIOLET:
            LoadPalette(sMenuPalette_Violet, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_WHITE:
            LoadPalette(sMenuPalette_White, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_YELLOW:
            LoadPalette(sMenuPalette_Yellow, 0, 32);
            break;
        default:
            LoadPalette(sMenuPalette, 0, 32);
            break;
    }
    LoadPalette(sMenuInterfacePalette, 16, 32);
}

static void SpriteCB_RegisteredItem_Icon_Callback(struct Sprite *sprite)
{
    if(!shouldShowRegisteredItems())
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

static void FreeRegisteredItemIconSprite(u8 slot)
{
    u8 *spriteId = &sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_REGISTERED_ITEM_UP + slot];
    u8 tag = TAG_ITEM_INVENTORY_REGISTERED_ICON + slot;

    if (*spriteId != SPRITE_NONE)
    {
        FreeSpriteTilesByTag(tag);
        FreeSpritePaletteByTag(tag);
        FreeSpriteOamMatrix(&gSprites[*spriteId]);
        DestroySprite(&gSprites[*spriteId]);
        *spriteId = SPRITE_NONE;
        sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_REGISTERED_ITEM_UP + slot] = SPRITE_NONE;
    }
}

static const u8 sItemCoordinates[AXIS_COUNT][INVENTORY_REGISTER_NUM_DIRECTIONS] =
{
    [AXIS_X] = {REGISTERED_ITEM_ICON_X_UP, REGISTERED_ITEM_ICON_X_RIGHT, REGISTERED_ITEM_ICON_X_DOWN, REGISTERED_ITEM_ICON_X_LEFT},
    [AXIS_Y] = {REGISTERED_ITEM_ICON_Y_UP, REGISTERED_ITEM_ICON_Y_RIGHT, REGISTERED_ITEM_ICON_Y_DOWN, REGISTERED_ITEM_ICON_Y_LEFT},
};

static const u8 Inventory_GetItemCoordinates(u32 direction, u32 axis)
{
    return sItemCoordinates[axis][direction];
}

static void CreateAllRegisteredItemIcon(void)
{
    for(u32 direction = 0; direction < INVENTORY_REGISTER_NUM_DIRECTIONS; direction++)
        CreateRegisteredItemIcon(direction);
}

static u8 CreateRegisteredItemIcon(u8 slot)
{
    u8 itemSpriteId = SPRITE_NONE;
    u8 tag = TAG_ITEM_INVENTORY_REGISTERED_ICON + slot;
    u8 *spriteId = &sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_REGISTERED_ITEM_UP + slot];
    u16 itemId = gSaveBlock3Ptr->InventoryData.registeredItem[slot];

    FreeRegisteredItemIconSprite(slot);

    if (*spriteId == SPRITE_NONE && itemId != ITEM_NONE)
    {
        FreeSpriteTilesByTag(tag);
        FreeSpritePaletteByTag(tag);
        itemSpriteId = AddItemIconSprite(tag, tag, itemId);
        sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_REGISTERED_ITEM_UP + slot] = itemSpriteId;

        if (itemSpriteId != MAX_SPRITES)
        {
            *spriteId = itemSpriteId;
            gSprites[itemSpriteId].x2 = Inventory_GetItemCoordinates(slot, AXIS_X);
            gSprites[itemSpriteId].y2 = Inventory_GetItemCoordinates(slot, AXIS_Y);
            gSprites[itemSpriteId].callback = SpriteCB_RegisteredItem_Icon_Callback;
        }
    }

    return itemSpriteId;
}

static void FreeItemIconSprite(void)
{
    u8 *spriteId = &sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_ITEM_ICON];
    if (*spriteId != SPRITE_NONE)
    {
        FreeSpriteTilesByTag(TAG_ITEM_INVENTORY_ICON);
        FreeSpritePaletteByTag(TAG_ITEM_INVENTORY_ICON);
        FreeSpriteOamMatrix(&gSprites[*spriteId]);
        DestroySprite(&gSprites[*spriteId]);
        *spriteId = SPRITE_NONE;
        sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_ITEM_ICON] = SPRITE_NONE;
    }
}

static void ShowItemIcon(u16 itemId, u8 x, u8 y)
{
    u8 itemSpriteId;
    u8 *spriteId = &sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_ITEM_ICON];

    FreeItemIconSprite();

    if (*spriteId == SPRITE_NONE && itemId != ITEM_NONE)
    {
        FreeSpriteTilesByTag(TAG_ITEM_INVENTORY_ICON);
        FreeSpritePaletteByTag(TAG_ITEM_INVENTORY_ICON);
        itemSpriteId = AddItemIconSprite(TAG_ITEM_INVENTORY_ICON, TAG_ITEM_INVENTORY_ICON, itemId);
        sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_ITEM_ICON] = itemSpriteId;

        if (itemSpriteId != MAX_SPRITES)
        {
            *spriteId = itemSpriteId;
            gSprites[itemSpriteId].x2 = x;
            gSprites[itemSpriteId].y2 = y;
        }
    }
}

static const enum InventoryItemOptions sInventory_PocketOptions_Field[NUM_ITEMS_TYPES][NUM_INVENTORY_ITEM_OPTIONS] =
{
    [ITEM_TYPE_UNCATEGORIZED] =
    {
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_FIELD_USE] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_LEVEL_UP_ITEM] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_HEALTH_RECOVERY] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_STATUS_RECOVERY] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_PP_RECOVERY] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_NATURE_MINT] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_STAT_BOOST_DRINK] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_STAT_BOOST_FEATHER] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_STAT_BOOST_MOCHI] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_BATTLE_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_FLUTE] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_X_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_AUX_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_EVOLUTION_STONE] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_EVOLUTION_ITEM] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_SPECIAL_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_MEGA_STONE] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_Z_CRYSTAL] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_TERA_SHARD] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_TYPE_BOOST_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_CONTEST_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_EV_BOOST_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_GEM] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_PLATE] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_MEMORY] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_DRIVE] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_INCENSE] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_NECTAR] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_GROWTH] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_SHARD] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_SELLABLE] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_RELIC] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_FOSSIL] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_MAIL] =
    {
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_POKE_BALL] =
    {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },

    [ITEM_TYPE_TMHM] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_REPEL] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_KEY_ITEMS] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_UNUSABLE_KEY_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
};

static const enum InventoryItemOptions sInventory_PocketOptions_Battle[NUM_ITEMS_TYPES][NUM_INVENTORY_ITEM_OPTIONS] =
{
    [ITEM_TYPE_UNCATEGORIZED] =
    {
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_FIELD_USE] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_LEVEL_UP_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_HEALTH_RECOVERY] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_STATUS_RECOVERY] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_PP_RECOVERY] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_NATURE_MINT] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_STAT_BOOST_DRINK] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_STAT_BOOST_FEATHER] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,

    },
    [ITEM_TYPE_STAT_BOOST_MOCHI] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,

    },
    [ITEM_TYPE_BATTLE_ITEM] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_FLUTE] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_X_ITEM] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_AUX_ITEM] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_EVOLUTION_STONE] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_EVOLUTION_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_SPECIAL_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_MEGA_STONE] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_Z_CRYSTAL] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_TERA_SHARD] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_TYPE_BOOST_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_CONTEST_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_EV_BOOST_HELD_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_GEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_PLATE] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,

    },
    [ITEM_TYPE_MEMORY] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_DRIVE] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_INCENSE] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_NECTAR] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_GROWTH] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_SHARD] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_SELLABLE] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_RELIC] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_FOSSIL] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_MAIL] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_POKE_BALL] =
    {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_TMHM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_REPEL] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_KEY_ITEMS] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_UNUSABLE_KEY_ITEM] =
    {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
};

static const u8 *const sInventory_TossConfirm[] =
{
    COMPOUND_STRING("No"),
    COMPOUND_STRING("Yes"),
};

static const u8 *const sInventory_OptionStrings[] =
{
    [INVENTORY_ITEM_OPTION_USE]      = COMPOUND_STRING("Use"),
    [INVENTORY_ITEM_OPTION_GIVE]     = COMPOUND_STRING("Give"),
    [INVENTORY_ITEM_OPTION_TOSS]     = COMPOUND_STRING("Toss"),
    [INVENTORY_ITEM_OPTION_FAVORITE] = COMPOUND_STRING("Favorite"),
    [INVENTORY_ITEM_OPTION_REGISTER] = COMPOUND_STRING("Register"),
    [INVENTORY_ITEM_OPTION_CANCEL]   = COMPOUND_STRING("Cancel"),
    [INVENTORY_ITEM_OPTION_UNFAVORITE]   = COMPOUND_STRING("Unfavorite"),
};

static const u8 *const sSortTypeStrings[] =
{
    [ITEM_SORT_ALPHABETICALLY] = COMPOUND_STRING("Name"),
    [ITEM_SORT_BY_TYPE]        = COMPOUND_STRING("Type"),
    [ITEM_SORT_BY_AMOUNT]      = COMPOUND_STRING("Amount"),
    [ITEM_SORT_CANCEL]         = COMPOUND_STRING("Cancel"),
};

static u8 getNumInventoryOptions(u16 item){
    u8 i;

    for(i = 0; i < NUM_INVENTORY_ITEM_OPTIONS; i++){
        if(getItemOptionNum(item, i) == INVENTORY_ITEM_OPTION_CANCEL)
            return i + 1;
    }

    return NUM_INVENTORY_ITEM_OPTIONS;
}
static u8 getSelectedItemNumOptions(void)
{
    switch (sMenuDataPtr->currentSelectMode)
    {
        case INVENTORY_MODE_TOSS_CONFIRMATION:
            return NUM_TOSS_CONFIRMATION_OPTIONS;
        case INVENTORY_MODE_REORDER:
            return NUM_SORT_OPTIONS;
        default:
            return getNumInventoryOptions(Inventory_GetItemIdCurrentlySelected());
    }
}

static const struct StringList sInventory_TitleStrings[NUM_INVENTORY_POCKETS] = {
    [POCKET_MEDICINE]       = { _("Medicine"),     },
    [POCKET_POKE_BALLS]          = { _("Poké Balls"),   },
    [POCKET_BATTLE_ITEMS]   = { _("Battle Items"), },
    [POCKET_POWERUP]        = { _("Power Up"),     },
    [POCKET_BERRIES]        = { _("Berries"),      },
    [POCKET_OTHER]          = { _("Other Items"),  },
    [POCKET_TM_HM]           = { _("TMs & HMs"),    },
    [POCKET_TREASURE]       = { _("Treasures"),    },
    [POCKET_Z_CRYSTALS]     = { _("Z-Crystals"),   },
    [POCKET_MEGA_STONES]    = { _("Mega Stones"),  },
    [POCKET_KEY_ITEMS]       = { _("Key Items"),    },
    [POCKET_FAVORITE_ITEMS] = { _("Favorite"),    },
};

static const u8 sInventory_Exit_Desc[] = _("Close the Inventory");
static const u8 sInventory_Nothing[]   = _("---");
static const u8 sText_Item_Num[]       = _("x{STR_VAR_1}");

static const u8 sInventory_TM_Name[] = _("{STR_VAR_1} - {STR_VAR_2}");
static const u8 sInventory_TM_Desc[] = _("{STR_VAR_1} PWR\n{STR_VAR_2} ACC\n{STR_VAR_3} PP");

static const u8 sText_Help_Bar[]                    = _("{DPAD_LEFTRIGHT} Pockets {A_BUTTON} Pick {B_BUTTON} Return {SELECT_BUTTON} Move {START_BUTTON} Sort");
static const u8 sText_Help_Bar_Battle[]             = _("{DPAD_LEFTRIGHT} Pockets {A_BUTTON} Pick {B_BUTTON} Return");
static const u8 sText_Help_Bar_GiveItem[]           = _("{DPAD_LEFTRIGHT} Pockets {A_BUTTON} Pick {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Use[]                = _("{DPAD_UPDOWN} Options {A_BUTTON} Choose {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Move[]               = _("Move the {STR_VAR_1} where? {DPAD_UPDOWN} Move {A_BUTTON} Confirm");
static const u8 sText_Help_Bar_Cant_Move_Favorite[] = _("You can't move a favorite item! {A_BUTTON} Confirm");
static const u8 sText_Help_Bar_Cant_Use[]           = _("You can't use this item right now! {A_BUTTON} Confirm");
static const u8 sText_Help_Bar_Cant_Toss[]          = _("You can't toss this item! {A_BUTTON} Confirm");
static const u8 sText_Help_Bar_SortItemsHow[]       = _("Sort items how? {DPAD_UPDOWN} Move {A_BUTTON} Choose");
static const u8 sText_Help_Bar_RegisterHow[]        = _("Register to what direction? {DPAD_NONE} Select {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_ItemsSorted[]        = _("Items sorted by {STR_VAR_1}! {A_BUTTON} Confirm");
static const u8 sText_Help_Bar_Used_Item[]          = _("{PLAYER} used the {STR_VAR_1} {A_BUTTON} Confirm");

static u16 Inventory_GetItemIdCurrentlySelected(void){
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u16 numitems = sMenuDataPtr->numItems[pocketId];
    struct BagPocket *pocket = &gBagPockets[pocketId];
    u16 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
    u16 itemId  = pocket->itemSlots[itemIdx].itemId;

    if(pocketId == POCKET_FAVORITE_ITEMS)
        itemId = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_ID];

    if(itemIdx == numitems){
        itemId = ITEM_NONE;
    }

    return itemId;
}

static u8 getItemType(u16 item)
{
    enum ItemSortType type  = GetItemSortType(item);

    if (type != ITEM_TYPE_UNCATEGORIZED)
        return type;

    switch(GetItemPocket(item))
    {
        case POCKET_MEDICINE:      return ITEM_TYPE_HEALTH_RECOVERY;
        case POCKET_POKE_BALLS:    return ITEM_TYPE_POKE_BALL;
        case POCKET_BATTLE_ITEMS:  return ITEM_TYPE_BATTLE_ITEM;
        case POCKET_POWERUP:       return ITEM_TYPE_EVOLUTION_STONE;
        case POCKET_BERRIES:       return ITEM_TYPE_HELD_ITEM;
        case POCKET_OTHER:         return ITEM_TYPE_FIELD_USE;
        case POCKET_TM_HM:         return ITEM_TYPE_TMHM;
        case POCKET_TREASURE:      return ITEM_TYPE_SELLABLE;
        case POCKET_Z_CRYSTALS:    return ITEM_TYPE_Z_CRYSTAL;
        case POCKET_MEGA_STONES:   return ITEM_TYPE_MEGA_STONE;
        case POCKET_KEY_ITEMS:     return ITEM_TYPE_UNUSABLE_KEY_ITEM;
        default:                   return ITEM_TYPE_UNCATEGORIZED;
    }
}

static u8 getItemOptionNum(u16 item, u8 num){
    u8 itemType = getItemType(item);
    u8 option = INVENTORY_ITEM_OPTION_CANCEL;

    switch(sMenuDataPtr->inventoryMode){
        case INVENTORY_MODE_FIELD:
            option = sInventory_PocketOptions_Field[itemType][num];
        break;
        case INVENTORY_MODE_BATTLE:
            option = sInventory_PocketOptions_Battle[itemType][num];
        break;
    }

    //if(currentPocket == POCKET_FAVORITE_ITEMS && option == INVENTORY_ITEM_OPTION_FAVORITE)
    //    option = INVENTORY_ITEM_OPTION_CANCEL;

    return option;
}

static u8 getSelectedItemOptionNum(u8 num){
    return getItemOptionNum(Inventory_GetItemIdCurrentlySelected(), num);
}
static u32 Inventory_CalculateWidestBagPocketTitle(void)
{
    u32 width = 0;

    for (enum Pocket pocketIndex = 0; pocketIndex < NUM_INVENTORY_POCKETS; pocketIndex++)
        width = max(width,(GetStringWidth(INVENTORY_FONT_HEADER,sInventory_TitleStrings[pocketIndex].string,GetFontAttribute(INVENTORY_FONT_HEADER,FONTATTR_LETTER_SPACING))));

    return width;
}

static void Inventory_PrintHeaderCursor(enum Pocket pocketId)
{
    u32 x = Inventory_CalculateWidestBagPocketTitle() + 23;
    for(enum Pocket pocketIndex = 0; pocketIndex < NUM_INVENTORY_POCKETS; pocketIndex++)
    {
        const u8* pixels = ((pocketId == pocketIndex) ? sInventoryPocketIcon1_Gfx : sInventoryPocketIcon0_Gfx);
        BlitBitmapToWindow(INVENTORY_WINDOW_HEADER, (const u8*) pixels, (x + (pocketIndex * TILE_WIDTH)), 4, TILE_WIDTH, TILE_WIDTH);
    }
}

static void Inventory_PrintHeader(void)
{
    u8 font = INVENTORY_FONT_HEADER;
    enum Pocket pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u32 x = 16, y = 0;
    u32 lineSpacing = GetFontAttribute(font,FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(font,FONTATTR_LETTER_SPACING);

    FillWindowPixelBuffer(INVENTORY_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    AddTextPrinterParameterized4(INVENTORY_WINDOW_HEADER, font, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_WHITE], TEXT_SKIP_DRAW, sInventory_TitleStrings[pocketId].string);
    Inventory_PrintHeaderCursor(pocketId);

    PutWindowTilemap(INVENTORY_WINDOW_HEADER);
    CopyWindowToVram(INVENTORY_WINDOW_HEADER ,COPYWIN_FULL);
}

//Hp Bar Stuff
static const u8 sStartMenu_HPBar_Full_Gfx[]         = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_full.4bpp");
static const u8 sStartMenu_HPBar_90_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_90_percent.4bpp");
static const u8 sStartMenu_HPBar_80_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_80_percent.4bpp");
static const u8 sStartMenu_HPBar_70_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_70_percent.4bpp");
static const u8 sStartMenu_HPBar_60_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_60_percent.4bpp");
static const u8 sStartMenu_HPBar_50_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_50_percent.4bpp");
static const u8 sStartMenu_HPBar_40_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_40_percent.4bpp");
static const u8 sStartMenu_HPBar_30_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_30_percent.4bpp");
static const u8 sStartMenu_HPBar_20_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_20_percent.4bpp");
static const u8 sStartMenu_HPBar_10_Percent_Gfx[]   = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_10_percent.4bpp");
static const u8 sStartMenu_HPBar_Fainted_Gfx[]      = INCBIN_U8("graphics/ui_menus/inventory/hp_bar/hp_bar_fainted.4bpp");

static bool32 IsMonNotEmpty(u32 partyIndex)
{
    return (GetMonData(&gPlayerParty[partyIndex],MON_DATA_SPECIES_OR_EGG,NULL) != SPECIES_NONE);
}

static u32 Inventory_GetItemIdFromPocketIndex(u32 itemIndex, enum Pocket pocketId)
{
    struct BagPocket *pocket = &gBagPockets[pocketId];

    if(sMenuDataPtr->numItems[pocketId] == (itemIndex+1))
        return ITEM_NONE;

    return (pocketId == POCKET_FAVORITE_ITEMS) ? (sMenuDataPtr->FavoritePocketItems[itemIndex][FAVORITE_ITEM_ID]) : pocket->itemSlots[itemIndex].itemId;
}

static void Inventory_TryPrintFavoriteIcon(enum Pocket pocketId, u32 itemIdx, u32 itemScreenListIndex)
{
    if (pocketId == POCKET_FAVORITE_ITEMS)
        return;

    itemIdx++;

    if (itemIdx <= gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId])
        BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, gInventoryIcon_Pinned_Gfx, 0, (itemScreenListIndex * 17), 16, 8);
}

struct TMHMGfxTable
{
    const u8* left;
    const u8* middle;
    const u8* right;
};

static const struct TMHMGfxTable sTMHMGraphics[] =
{
    [0] = {sInventoryTMHM_Type1_Gfx, sInventoryTMHM_Type1_2_Gfx, sInventoryTMHM_Type1_3_Gfx},
    [1] = {sInventoryTMHM_Type2_Gfx, sInventoryTMHM_Type2_2_Gfx, sInventoryTMHM_Type2_3_Gfx},
    [2] = {sInventoryTMHM_Type3_Gfx, sInventoryTMHM_Type3_2_Gfx, sInventoryTMHM_Type3_3_Gfx},
    [3] = {sInventoryTMHM_Type4_Gfx, sInventoryTMHM_Type4_2_Gfx, sInventoryTMHM_Type4_3_Gfx},
    [4] = {sInventoryTMHM_Type5_Gfx, sInventoryTMHM_Type5_2_Gfx, sInventoryTMHM_Type5_3_Gfx},
};

static const u8* sTypeGraphics[] =
{
    [TYPE_NORMAL]   = sInventoryTMHM_Type_Normal_Gfx,
    [TYPE_FIGHTING] = sInventoryTMHM_Type_Fighting_Gfx,
    [TYPE_FLYING]   = sInventoryTMHM_Type_Flying_Gfx,
    [TYPE_POISON]   = sInventoryTMHM_Type_Poison_Gfx,
    [TYPE_GROUND]   = sInventoryTMHM_Type_Ground_Gfx,
    [TYPE_ROCK]     = sInventoryTMHM_Type_Rock_Gfx,
    [TYPE_BUG]      = sInventoryTMHM_Type_Bug_Gfx,
    [TYPE_GHOST]    = sInventoryTMHM_Type_Ghost_Gfx,
    [TYPE_STEEL]    = sInventoryTMHM_Type_Steel_Gfx,
    [TYPE_FIRE]     = sInventoryTMHM_Type_Fire_Gfx,
    [TYPE_WATER]    = sInventoryTMHM_Type_Water_Gfx,
    [TYPE_GRASS]    = sInventoryTMHM_Type_Grass_Gfx,
    [TYPE_ELECTRIC] = sInventoryTMHM_Type_Electric_Gfx,
    [TYPE_PSYCHIC]  = sInventoryTMHM_Type_Psychic_Gfx,
    [TYPE_ICE]      = sInventoryTMHM_Type_Ice_Gfx,
    [TYPE_DRAGON]   = sInventoryTMHM_Type_Dragon_Gfx,
    [TYPE_DARK]     = sInventoryTMHM_Type_Dark_Gfx,
    [TYPE_FAIRY]    = sInventoryTMHM_Type_Fairy_Gfx,
};

static void Inventory_TryPrintListCursor(enum Pocket pocketId, u32 itemScreenListIndex, u32 itemId, u32 itemIndex, u32 numItems)
{
    u32 j = 0;
    u32 y = itemScreenListIndex * 16;
    u32 x = 16;

    if(pocketId != POCKET_TM_HM || itemId == ITEM_NONE)
    {
        if((gSaveBlock3Ptr->InventoryData.itemIdx - gSaveBlock3Ptr->InventoryData.yFirstItem) == itemScreenListIndex)
        {
            if(sMenuDataPtr->currentSelectMode != INVENTORY_MODE_MOVE_ITEMS)
            {
                BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, sInventoryCursor_Gfx, x, y, 16, 16);

                for(j = 1; j < INVENTORY_CURSOR_SQUARES; j++)
                    BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, sInventoryCursor2_Gfx, (x + (j * 16)), y, 16, 16);
            }
            else
            {
                BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, sInventoryCursor_Move_Gfx, x, y, 16, 16);

                for(j = 1; j < INVENTORY_CURSOR_SQUARES - 1; j++)
                    BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, sInventoryCursor2_Move_Gfx,(x + (j * 16)), y,  16, 16);

                BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, sInventoryCursor3_Move_Gfx,(x + (j * 16)), y,  16, 16);
            }
        }
    }
    else
    {
        const struct TMHMGfxTable* gfx = &sTMHMGraphics[itemScreenListIndex];

        BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, gfx->left, x, y, 16, 16);

        for(j = 1; j < INVENTORY_CURSOR_SQUARES - 1; j++)
            BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, gfx->middle,(x + (j * 16)), y,  16, 16);

        BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, gfx->right,(x + (j * 16)), y,  16, 16);

        x = 160;

        if((gSaveBlock3Ptr->InventoryData.itemIdx - gSaveBlock3Ptr->InventoryData.yFirstItem) == itemScreenListIndex)
            BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, sInventoryTMHM_Cursor_Gfx, x, y, 16, 16);

        u32 moveType = (itemIndex == (numItems - 1)) ? TYPE_NORMAL : gMovesInfo[GetItemSecondaryId(itemId)].type;
        if((gSaveBlock3Ptr->InventoryData.yFirstItem + itemScreenListIndex) != (numItems - 1))
            if (moveType != TYPE_NONE && moveType != TYPE_STELLAR)
                BlitBitmapToWindow(INVENTORY_WINDOW_ITEM_LIST, sTypeGraphics[moveType], x, y, 16, 16);

        FillPalette(gTypesInfo[moveType].siliconRGBValue,INVENTORY_TMHM_PAL_COLOR_ADDRESS + itemScreenListIndex,2);
    }
}

static const u8* sRegisteredIndicator[] =
{
    [INVENTORY_REGISTER_DIRECTION_LEFT]   = sInventoryRegisterIndicator_Left_Gfx,
    [INVENTORY_REGISTER_DIRECTION_RIGHT]   = sInventoryRegisterIndicator_Right_Gfx,
    [INVENTORY_REGISTER_DIRECTION_DOWN]   = sInventoryRegisterIndicator_Down_Gfx,
    [INVENTORY_REGISTER_DIRECTION_UP]   = sInventoryRegisterIndicator_Up_Gfx,
};

static void Inventory_PrintItems(enum Pocket pocketId, u32 itemId, u32 itemIndex, u32 itemScreenListIndex)
{
    u32 x  = 18;
    u32 y = itemScreenListIndex * 16;
    u32 itemNum = 0;
    u32 fontId = INVENTORY_FONT_LIST;
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
    u32 windowId = INVENTORY_WINDOW_ITEM_LIST;
    u32 itemListItemNameWidth = GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_WIDTH - 24;
    u32 inventoryPadding = GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_WIDTH;
    enum Pocket itemPocket = GetItemPocket(itemId);

    if(itemId != ITEM_NONE)
    {
        if(pocketId != POCKET_TM_HM && itemPocket != POCKET_TM_HM)
        {
            CopyItemName(itemId, gStringVar1);
            AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, gStringVar1);

            if(pocketId == POCKET_FAVORITE_ITEMS)
                itemNum = sMenuDataPtr->FavoritePocketItems[itemIndex][FAVORITE_ITEM_QUANTITY];
            else
                itemNum = CountTotalItemQuantityInBag(itemId);

            ConvertIntToDecimalStringN(gStringVar1, itemNum, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
            StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("x{STR_VAR_1}"));
            x = 4 + GetStringRightAlignXOffset(fontId,gStringVar4,itemListItemNameWidth);
            AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, gStringVar4);

            //Registered Items

            x = TILE_WIDTH + GetStringRightAlignXOffset(fontId,gStringVar4,inventoryPadding);
            for (u32 direction = INVENTORY_REGISTER_DIRECTION_UP; direction < INVENTORY_REGISTER_NUM_DIRECTIONS; direction++)
                if(itemId == gSaveBlock3Ptr->InventoryData.registeredItem[direction])
                    BlitBitmapToWindow(windowId, sRegisteredIndicator[direction], x,y, 16, 16);
        }
        else
        {
            CopyItemName(itemId, gStringVar1);
            StringCopy(gStringVar2, gMovesInfo[GetItemSecondaryId(itemId)].name);
            StringExpandPlaceholders(gStringVar4, sInventory_TM_Name);
            AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, gStringVar4);
        }
    }
    else
    {
        if (Inventory_GetItemIdFromPocketIndex((itemIndex-1),pocketId) == ITEM_NONE)
            if (itemIndex != 0)
                return;

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, COMPOUND_STRING("Exit"));
    }
}

static void Inventory_PrintItemList(void)
{
    //PSF TODO the TM pocket has a blit background with dynamically changning palette colors
    // This needs to be updated to just print a sprite on the far right of the row with the type icon, which sits on top of the blit cursor
    // This also needs to be done for TMs in the favorites pocket
    enum Pocket pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u32 numitems = sMenuDataPtr->numItems[pocketId];

    FillWindowPixelBuffer(INVENTORY_WINDOW_ITEM_LIST, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    for(u32 i = 0; i < INVENTORY_MAX_ITEMS_SHOWN; i++)
    {
        u32 itemIdx = gSaveBlock3Ptr->InventoryData.yFirstItem + i;
        u32 itemId = Inventory_GetItemIdFromPocketIndex(itemIdx,pocketId);

        Inventory_TryPrintFavoriteIcon(pocketId,itemIdx,i);
        Inventory_TryPrintListCursor(pocketId,i,itemId,itemIdx,numitems);
        Inventory_PrintItems(pocketId, itemId, itemIdx,i);
    }

    PutWindowTilemap(INVENTORY_WINDOW_ITEM_LIST);
    CopyWindowToVram(INVENTORY_WINDOW_ITEM_LIST ,COPYWIN_FULL);
}

static void Inventory_PrintDesc(void)
{
    u32 x, x2, y, y2;
    u32 font = FONT_NORMAL;
    u32 lineSpacing = GetFontAttribute(font,FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(font,FONTATTR_LETTER_SPACING);
    enum Pocket pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u32 moveNum;
    u32 numitems = sMenuDataPtr->numItems[pocketId];

    FillWindowPixelBuffer(INVENTORY_WINDOW_DESC, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    // Item Description
    x  = 0;
    x2 = 4;
    y  = 13;
    y2 = 0;

    if(gSaveBlock3Ptr->InventoryData.itemIdx < numitems - 1)
    {
        u16 itemId = Inventory_GetItemIdCurrentlySelected();
        enum Pocket itemPocket = GetItemPocket(itemId);
        if(pocketId != POCKET_TM_HM && itemPocket != POCKET_TM_HM)
        {
            StringCopy(gStringVar1, GetItemDescription(itemId));

            // Item Icon
            x  = 2;
            x2 = 4;
            y  = 16;
            y2 = 0;
            ShowItemIcon(itemId, (x * 8) + x2, (y * 8) + y2);
        }
        else{
            u32 power, accuracy, movePP;
            moveNum = GetItemSecondaryId(itemId);
            FreeItemIconSprite();

            power    = gMovesInfo[moveNum].power;
            accuracy = gMovesInfo[moveNum].accuracy;
            movePP   = gMovesInfo[moveNum].pp;

            // TM Move Info
            x  = 0;
            x2 = 2;
            y  = 13;
            y2 = 4;
            if(power > 2 && gMovesInfo[moveNum].category != DAMAGE_CATEGORY_STATUS)
                ConvertIntToDecimalStringN(gStringVar1, power, STR_CONV_MODE_LEFT_ALIGN, 3);
            else
                StringCopy(gStringVar1, sInventory_Nothing);

            if(accuracy > 2 && accuracy < 101)
                ConvertIntToDecimalStringN(gStringVar2, accuracy, STR_CONV_MODE_LEFT_ALIGN, 3);
            else
                StringCopy(gStringVar2, sInventory_Nothing);

            ConvertIntToDecimalStringN(gStringVar3, movePP,   STR_CONV_MODE_LEFT_ALIGN, 3);

            StringExpandPlaceholders(gStringVar4, sInventory_TM_Desc);
            AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2 - 1, (y * 8) + y2, -4, -4, sInventoryFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar4);
            StringCopy(gStringVar1, gMovesInfo[moveNum].description);
        }
    }
    else
{
        StringCopy(gStringVar1, sInventory_Exit_Desc);
        FreeItemIconSprite();
    }

    y = 0;
    u32 width = GetWindowAttribute(INVENTORY_WINDOW_DESC,WINDOW_WIDTH) * TILE_WIDTH - 4;
    StripLineBreaks(gStringVar1);
    BreakStringNaive(gStringVar1, width, 3, font, HIDE_SCROLL_PROMPT);
    AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_BLACK], TEXT_SKIP_DRAW, gStringVar1);

    PutWindowTilemap(INVENTORY_WINDOW_DESC);
    CopyWindowToVram(INVENTORY_WINDOW_DESC,COPYWIN_FULL);
}

static void Inventory_OpenMenu(u8 taskId)
{
     u32 itemId = Inventory_GetItemIdCurrentlySelected();

    if (itemId == ITEM_NONE && sMenuDataPtr->currentSelectMode != INVENTORY_MODE_REORDER)
        return;

    Inventory_InitalizeMenu(itemId);
    Inventory_CreateMenu();
    PlaySE(SE_WIN_OPEN);
    DestroyTask(taskId);
    CreateTask(Task_Inventory_HandleMenuInput,0);
}

static void Inventory_RemoveMenu(u8 taskId)
{
    PlaySE(SE_BALL);
    u32 windowId = sInventoryListMenu->inventoryMenuWindowId;
    RemoveWindow(windowId);
    sInventoryListMenu->inventoryMenuWindowId = WINDOW_NONE;
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
    Inventory_PrintToAllWindows();
    gTasks[taskId].func = Task_MenuMain;
}

static void Inventory_RemoveMenu_AndShowMessage(u8 taskId)
{
    u32 windowId = sInventoryListMenu->inventoryMenuWindowId;
    RemoveWindow(windowId);
    sInventoryListMenu->inventoryMenuWindowId = WINDOW_NONE;
    Inventory_PrintToAllWindows();
    gTasks[taskId].func = Task_MenuMain;
}

static u32 Inventory_CalculateBaseblock(void)
{
    u32 lastWindow, baseBlock;

    for (lastWindow = 0xFF; lastWindow > 0; lastWindow--)
    {
        baseBlock = gWindows[lastWindow].window.baseBlock;

        if (baseBlock != 0)
            break;
    }
    struct WindowTemplate template = gWindows[lastWindow].window;
    baseBlock += (template.width * template.height);
    return baseBlock;
}

static void Inventory_InitalizeMenu(u32 species)
{
    sInventoryListMenu->menuItemsCount = getSelectedItemNumOptions();
    sInventoryListMenu->menuWindow.bg = INVENTORY_BG_TEXT;
    sInventoryListMenu->menuWindow.paletteNum = 0;
    sInventoryListMenu->menuWindow.baseBlock = Inventory_CalculateBaseblock();
    Inventory_PopulateMenuItems();
}

static void Inventory_PopulateMenuItems(void)
{
    u32 menuIndex = (sMenuDataPtr->currentSelectMode == INVENTORY_MODE_TOSS_CONFIRMATION) ? 0 : INVENTORY_ITEM_OPTION_CANCEL;

    for (u32 i = 0; i < sInventoryListMenu->menuItemsCount; i++)
    {

        if (sMenuDataPtr->currentSelectMode == INVENTORY_MODE_TOSS_CONFIRMATION)
        {
            menuIndex = i;
            sInventoryListMenu->menuItems[i].text = sInventory_TossConfirm[menuIndex];
            sInventoryListMenu->calcWidth = 4;
        }
        else if (sMenuDataPtr->currentSelectMode == INVENTORY_MODE_REORDER)
        {
            menuIndex = i;
            sInventoryListMenu->menuItems[i].text = sSortTypeStrings[menuIndex];
            sInventoryListMenu->calcWidth = 6;
        }
        else
        {
            menuIndex = getSelectedItemOptionNum(i);

            if ((isCurrentItemFavorite()) && (menuIndex == INVENTORY_ITEM_OPTION_FAVORITE))
                menuIndex = INVENTORY_ITEM_OPTION_UNFAVORITE;

            sInventoryListMenu->menuItems[i].text = sInventory_OptionStrings[menuIndex];
            sInventoryListMenu->calcWidth = 8;

            if (menuIndex == INVENTORY_ITEM_OPTION_UNFAVORITE)
                menuIndex = INVENTORY_ITEM_OPTION_FAVORITE;
        }

        sInventoryListMenu->menuItems[i].textId = menuIndex;

        menuIndex++;
    }
}

static u32 Inventory_GetMenuHeight(void)
{
    u32 count = sInventoryListMenu->menuItemsCount;
    u32 fontHeight = GetFontAttribute(INVENTORY_FONT_LIST,FONTATTR_MAX_LETTER_HEIGHT);
    u32 height = count * fontHeight;

    while ((height % TILE_WIDTH) != 0)
        height++;

    return (height / TILE_WIDTH);
}

static void Inventory_CreateMenu(void)
{
    u32 windowId;
    u32 footerHeight = GetWindowAttribute(INVENTORY_WINDOW_FOOTER,WINDOW_HEIGHT);

    sInventoryListMenu->menuWindow.width = sInventoryListMenu->calcWidth;
    sInventoryListMenu->menuWindow.height = Inventory_GetMenuHeight();
    sInventoryListMenu->menuWindow.tilemapLeft = (DISPLAY_TILE_WIDTH - sInventoryListMenu->menuWindow.width);
    sInventoryListMenu->menuWindow.tilemapTop = ((DISPLAY_TILE_HEIGHT - footerHeight) - sInventoryListMenu->menuWindow.height);

    Inventory_SetMenuPosition(0);
    windowId = AddWindow(&sInventoryListMenu->menuWindow);
    sInventoryListMenu->inventoryMenuWindowId = windowId;
    Inventory_DrawWindowFrame(windowId);
    Inventory_PrintCursorAndText(windowId,sInventoryListMenu->menuItemsCount);
    ScheduleBgCopyTilemapToVram(BG0_POKEDEX_TEXT_CONTENT);
}

static void Inventory_PrintListMenuText(u32 windowId, u32 menuItemsCount)
{
    u32 x = 5;
    u32 fontId = INVENTORY_FONT_MENU;
    u32 height = GetFontAttribute(fontId,FONTATTR_MAX_LETTER_HEIGHT);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    for (u32 optionIndex = 0; optionIndex < menuItemsCount; optionIndex++)
    {
        u32 y = (optionIndex * height);

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_BLACK], TEXT_SKIP_DRAW, sInventoryListMenu->menuItems[optionIndex].text);

    }
    CopyWindowToVram(windowId,COPYWIN_GFX);
}

static void Inventory_DrawWindowFrame(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    PutWindowTilemap(windowId);
}

static void Inventory_PrintCursorAndText(u32 windowId, u32 menuItemsCount)
{
    Inventory_PrintCursor(windowId);
    Inventory_PrintListMenuText(windowId,menuItemsCount);
}

static void Task_Inventory_HandleMenuInput(u8 taskId)
{
    if (JOY_NEW(DPAD_UP) || JOY_NEW(DPAD_LEFT))
        Inventory_ChangeMenuPosition(-1);
    else if (JOY_NEW(DPAD_DOWN) || JOY_NEW(DPAD_RIGHT))
        Inventory_ChangeMenuPosition(1);
    else if (JOY_NEW(A_BUTTON))
        Inventory_HandleAButtonPress(taskId);
    else if (JOY_NEW(B_BUTTON))
        Inventory_RemoveMenu(taskId);
}

static void Inventory_HandleAButtonPress(u8 taskId)
{
    if(sMenuDataPtr->inventoryMode != INVENTORY_MODE_FIELD && sMenuDataPtr->inventoryMode != INVENTORY_MODE_BATTLE)
        return;

    switch(sMenuDataPtr->currentSelectMode)
    {
        default:
            break;
        case INVENTORY_MODE_USE_OPTIONS:
            Inventory_UseItem(taskId);
            break;
        case INVENTORY_MODE_TOSS_HOW_MANY:
            if(sMenuDataPtr->numItemsToToss == 0)
            {
                sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                sMenuDataPtr->itemIdxPickMode   = NUM_TOSS_CONFIRMATION_OPTIONS - 1;
                Inventory_RemoveMenu(taskId);
            }
            else
            {
                sMenuDataPtr->currentSelectMode = INVENTORY_MODE_TOSS_CONFIRMATION;
                Inventory_PrintToAllWindows();
                Inventory_OpenMenu(taskId);
            }
            break;
        case INVENTORY_MODE_TOSS_CONFIRMATION:
            if (Inventory_GetMenuPosition() == 1)
                RemoveInventoryItem(gSaveBlock3Ptr->InventoryData.pocketNum, gSaveBlock3Ptr->InventoryData.itemIdx, sMenuDataPtr->numItemsToToss);
            Inventory_RemoveMenu(taskId);
            Inventory_PrintToAllWindows();
            sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
            break;
        case INVENTORY_MODE_REORDER:
            sMenuDataPtr->itemIdxPickMode = Inventory_GetMenuPosition();
            if(sMenuDataPtr->itemIdxPickMode != ITEM_SORT_CANCEL)
                TrySortBag();

            sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
            Inventory_RemoveMenu(taskId);
            Inventory_PrintToAllWindows();
            break;
    }
}

u32 Inventory_GetMenuPosition(void)
{
    return sInventoryListMenu->menuPosition;
}

static void Inventory_SetMenuPosition(u32 position)
{
    sInventoryListMenu->menuPosition = position;
}

static void Inventory_ChangeMenuPosition(s32 direction)
{
    u32 menuCount = sInventoryListMenu->menuItemsCount;
    u32 oldPosition = Inventory_GetMenuPosition();
    s32 newPosition = oldPosition + direction;
    u32 windowId = sInventoryListMenu->inventoryMenuWindowId;

    if (newPosition < 0)
        newPosition = menuCount - 1;

    if (newPosition >= menuCount)
        newPosition = 0;

    Inventory_SetMenuPosition(newPosition);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    Inventory_PrintCursorAndText(windowId,sInventoryListMenu->menuItemsCount);
    PutWindowTilemap(windowId);
    PlaySE(SE_RG_BAG_CURSOR);
}

static void Inventory_PrintCursor(u32 windowId)
{
    u32 x = 0;
    u32 y = Inventory_CalculateCursorYPosition();

    BlitBitmapToWindow(windowId, sInventoryListMenuCursor, x, y , 64, 16);
}

static u32 Inventory_CalculateCursorYPosition(void)
{
    return (Inventory_GetMenuPosition() * (GetFontAttribute(INVENTORY_FONT_MENU,FONTATTR_MAX_LETTER_HEIGHT)));
}

static void Inventory_PrintTossMenu(void)
{
    enum InventoryWindowIds windowId = INVENTORY_WINDOW_DESC;
    u32 fontId = INVENTORY_FONT_LIST;
    u32 x = 128;
    u32 y = 24;

    BlitBitmapToWindow(windowId, sInventorySelectorCursorToss_Gfx, x, y, 64, 16);
    ConvertIntToDecimalStringN(gStringVar1, sMenuDataPtr->numItemsToToss, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
    x += GetStringCenterAlignXOffset(fontId, gStringVar1, 64);
    AddTextPrinterParameterized4(windowId, fontId,x,y,0,0, sInventoryFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, gStringVar1);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId,COPYWIN_FULL);
}

static void Inventory_CreateTossMenu(u8 taskId)
{
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_TOSS_HOW_MANY;
    Inventory_PrintFooter();
    Inventory_PrintTossMenu();
    PlaySE(SE_WIN_OPEN);
    DestroyTask(taskId);
    CreateTask(Task_Inventory_HandleTossInput,0);
}

static void Inventory_ChangeTossAmount(s32 direction)
{
    u32 ownedItems = CountTotalItemQuantityInBag(Inventory_GetItemIdCurrentlySelected());
    s32 numItems = (sMenuDataPtr->numItemsToToss + direction);

    if (numItems < 0)
        numItems = ownedItems;

    if (numItems >= ownedItems)
        numItems = 0;

    sMenuDataPtr->numItemsToToss = numItems;

    //Inventory_PrintDesc();
    Inventory_PrintTossMenu();
    PlaySE(SE_SELECT);
}

static void Task_Inventory_HandleTossInput(u8 taskId)
{
    if (JOY_NEW(DPAD_UP) || JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT) || JOY_REPEAT(DPAD_UP))
        Inventory_ChangeTossAmount(-1);
    else if (JOY_NEW(DPAD_DOWN) || JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT) || JOY_REPEAT(DPAD_DOWN))
        Inventory_ChangeTossAmount(1);
    else if (JOY_NEW(A_BUTTON))
        Inventory_HandleAButtonPress(taskId);
    else if (JOY_NEW(B_BUTTON))
        Inventory_RemoveTossMenu(taskId);
}

static void Inventory_RemoveTossMenu(u8 taskId)
{
    PlaySE(SE_SELECT);
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
    Inventory_PrintToAllWindows();
    gTasks[taskId].func = Task_MenuMain;
}

static void Inventory_PrintFooter(void)
{
    u32 x = 4;
    u32 y = 0;
    u32 font = FONT_NARROW;
    u32 lineSpacing = GetFontAttribute(font,FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(font,FONTATTR_LETTER_SPACING);
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u32 itemId = Inventory_GetItemIdCurrentlySelected();
    u16 paletteIndex = INTERFACE_PALETTE_NUM * 16;

    FillWindowPixelBuffer(INVENTORY_WINDOW_FOOTER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch(sMenuDataPtr->currentSelectMode)
    {
        case INVENTORY_MODE_USE_OPTIONS:
            StringCopy(gStringVar4, sText_Help_Bar_Use);
            break;
        case INVENTORY_MODE_REORDER:
            StringCopy(gStringVar4, sText_Help_Bar_SortItemsHow);
            break;
        case INVENTORY_MODE_REGISTER:
            StringCopy(gStringVar4, sText_Help_Bar_RegisterHow);
            break;
        case INVENTORY_MODE_TOSS_HOW_MANY:
            StringCopy(gStringVar4, COMPOUND_STRING("Toss how many? {DPAD_LEFTRIGHT} Amount {A_BUTTON} Choose {B_BUTTON} Cancel"));
            break;
        case INVENTORY_MODE_MOVE_ITEMS:
            {
                u16 quantity = CountTotalItemQuantityInBag(itemId);
                CopyItemNameHandlePlural(itemId, gStringVar1, quantity);
                StringExpandPlaceholders(gStringVar4, sText_Help_Bar_Move);
            }
            break;
        case INVENTORY_MODE_TOSS_CONFIRMATION:
            {
                u16 quantity = sMenuDataPtr->numItemsToToss;

                ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
                CopyItemNameHandlePlural(itemId, gStringVar2, quantity);
                StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Are you sure you want to toss {STR_VAR_1} {STR_VAR_2}?"));
            }
            break;
        case INVENTORY_MESSAGE_SORTED_ITEMS_BY:
            StringCopy(gStringVar1, sSortTypeStrings[sMenuDataPtr->itemIdxPickMode]);
            StringExpandPlaceholders(gStringVar4, sText_Help_Bar_ItemsSorted);
            break;
        case INVENTORY_MESSAGE_CANT_MOVE_FAVORITE:
            StringCopy(gStringVar4, sText_Help_Bar_Cant_Move_Favorite);
            break;
        case INVENTORY_MESSAGE_CANT_USE_ITEM:
            StringCopy(gStringVar4, sText_Help_Bar_Cant_Use);
            break;
        case INVENTORY_MESSAGE_CANT_TOSS_ITEM:
            StringCopy(gStringVar4, sText_Help_Bar_Cant_Toss);
            break;
        case INVENTORY_MESSAGE_USED_ITEM:
            CopyItemName(itemId, gStringVar1);
            StringExpandPlaceholders(gStringVar4, sText_Help_Bar_Used_Item);
            break;
        default:
            if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_FIELD)
                StringCopy(gStringVar4, sText_Help_Bar);
            else if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_BATTLE)
                StringCopy(gStringVar4, sText_Help_Bar_Battle);
            else
                StringCopy(gStringVar4, sText_Help_Bar_GiveItem);
            break;
    }

    AddTextPrinterParameterized4(INVENTORY_WINDOW_FOOTER, font, x, y, letterSpacing, lineSpacing, sInventoryFontColors[INVENTORY_FONT_WHITE], TEXT_SKIP_DRAW, gStringVar4);

    if(pocketId == POCKET_TM_HM)
        CpuCopy32(&gPlttBufferFaded[paletteIndex], &gPlttBufferUnfaded[paletteIndex], PLTT_SIZEOF(16));
    else
        LoadPalette(sMenuInterfacePalette, 16, 32);

    PutWindowTilemap(INVENTORY_WINDOW_FOOTER);
    CopyWindowToVram(INVENTORY_WINDOW_FOOTER ,COPYWIN_FULL);
}

static void Inventory_PrintToAllWindows(void)
{
    Inventory_PrintHeader();
    Inventory_PrintItemList();
    Inventory_PrintDesc();
    Inventory_PrintFooter();
}

static void Task_MenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MenuMain;
}

static void Task_MenuTurnOff(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gSpecialVar_ItemId = ITEM_NONE;
        removeTransparentBackground();
        SetMainCallback2(inventorySavedCallback);
        Menu_FreeResourcesAndCallback();
        DestroyTask(taskId);
    }
}

static void MoveItemToTop(void){
    u16 i;
    u16 currentItemIdx, tempItem, tempItemIdx, tempItemQuantity;
    struct BagPocket *pocket = &gBagPockets[gSaveBlock3Ptr->InventoryData.pocketNum];
    bool8 moveItem = 0;

    currentItemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;

    if(currentItemIdx != 0)
        moveItem = TRUE;

    if(moveItem){
        u16 numCurrentItems = gSaveBlock3Ptr->InventoryData.itemIdx;
        u16 numNextItem;

        for(i = 0; i < numCurrentItems; i++){
            numNextItem = currentItemIdx - i;
            tempItemIdx = numNextItem    - 1;

            tempItem         = pocket->itemSlots[numNextItem].itemId;
            tempItemQuantity = pocket->itemSlots[numNextItem].quantity;

            pocket->itemSlots[numNextItem].itemId   = pocket->itemSlots[tempItemIdx].itemId;
            pocket->itemSlots[numNextItem].quantity = pocket->itemSlots[tempItemIdx].quantity;

            pocket->itemSlots[tempItemIdx].itemId   = tempItem;
            pocket->itemSlots[tempItemIdx].quantity = tempItemQuantity;
        }
    }
}

static void MoveUnfavoriteItem(void){
    u16 i, tempItem, tempItemIdx, tempItemQuantity;
    struct BagPocket *pocket = &gBagPockets[gSaveBlock3Ptr->InventoryData.pocketNum];
    u16 currentItemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
    u16 numitems = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum] - 1;
    u8 numFavorites = gSaveBlock3Ptr->InventoryData.numFavoriteItems[gSaveBlock3Ptr->InventoryData.pocketNum] - currentItemIdx - 1;
    bool8 moveItem = FALSE;

    if(currentItemIdx < numitems - 1)
        moveItem = TRUE;

    if(moveItem){
        u16 numNextItem;

        for(i = 0; i < numFavorites; i++){
            numNextItem = currentItemIdx + i;
            tempItemIdx = numNextItem    + 1;

            tempItem         = pocket->itemSlots[numNextItem].itemId;
            tempItemQuantity = pocket->itemSlots[numNextItem].quantity;

            pocket->itemSlots[numNextItem].itemId   = pocket->itemSlots[tempItemIdx].itemId;
            pocket->itemSlots[numNextItem].quantity = pocket->itemSlots[tempItemIdx].quantity;

            pocket->itemSlots[tempItemIdx].itemId   = tempItem;
            pocket->itemSlots[tempItemIdx].quantity = tempItemQuantity;
        }
    }
}

static void PressedUpButton_Inventory(){
    u16 numitems        = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum];
    u16 halfScreen      = INVENTORY_MAX_ITEMS_SHOWN / 2;
    u16 finalhalfScreen = numitems - halfScreen - 1;

    if(INVENTORY_MAX_ITEMS_SHOWN > numitems){
        //Disables Scrolling if there are less moves than the screen can show
        if(gSaveBlock3Ptr->InventoryData.itemIdx == 0)
            gSaveBlock3Ptr->InventoryData.itemIdx = numitems - 1;
        else
            gSaveBlock3Ptr->InventoryData.itemIdx--;

        gSaveBlock3Ptr->InventoryData.yFirstItem = 0;
    }
    else{
        if(gSaveBlock3Ptr->InventoryData.itemIdx > halfScreen && gSaveBlock3Ptr->InventoryData.itemIdx <= finalhalfScreen){
            //If you are in the last option go to the first one
            gSaveBlock3Ptr->InventoryData.itemIdx--;
            gSaveBlock3Ptr->InventoryData.yFirstItem--;
        }
        else if(gSaveBlock3Ptr->InventoryData.itemIdx == 0){
            //If you are in the first option go to the last one
            gSaveBlock3Ptr->InventoryData.itemIdx    = numitems - 1;
            gSaveBlock3Ptr->InventoryData.yFirstItem = numitems - INVENTORY_MAX_ITEMS_SHOWN; //10 - 8 = 2
        }
        else{
            gSaveBlock3Ptr->InventoryData.itemIdx--;
        }
    }
}

static void PressedDownButton_Inventory(){
    u16 numitems        = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum];
    u16 halfScreen      = INVENTORY_MAX_ITEMS_SHOWN / 2; // 4
    u16 finalhalfScreen = numitems - halfScreen - 1;  // 10 - 4 = 6

    if(INVENTORY_MAX_ITEMS_SHOWN > numitems){
        //Disables Scrolling if there are less moves than the screen can show
        if(gSaveBlock3Ptr->InventoryData.itemIdx >= numitems - 1)
            gSaveBlock3Ptr->InventoryData.itemIdx = 0;
        else
            gSaveBlock3Ptr->InventoryData.itemIdx++;

        gSaveBlock3Ptr->InventoryData.yFirstItem = 0;
    }
    else{
        if(gSaveBlock3Ptr->InventoryData.itemIdx < halfScreen){
            //Check if your are below the first half of the screen
            gSaveBlock3Ptr->InventoryData.itemIdx++;
        }
        else if(gSaveBlock3Ptr->InventoryData.itemIdx >= (numitems - 1)){
            //If you are in the last option go to the first one
            gSaveBlock3Ptr->InventoryData.itemIdx = 0;
            gSaveBlock3Ptr->InventoryData.yFirstItem = 0;
        }
        else if(gSaveBlock3Ptr->InventoryData.itemIdx >= finalhalfScreen){
            gSaveBlock3Ptr->InventoryData.itemIdx++;
        }
        else{
            gSaveBlock3Ptr->InventoryData.itemIdx++;
            gSaveBlock3Ptr->InventoryData.yFirstItem++;
        }
    }
}

static void Task_GiveItem(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        //removeTransparentBackground();
        gSpecialVar_ItemId = Inventory_GetItemIdCurrentlySelected();
        SetMainCallback2(CB2_ChooseMonToGiveItem_ReturnToNewInventory);
        Menu_FreeResources();
        DestroyTask(taskId);
    }
}

static bool8 canItemBeHold(u16 item){
    u8 itemPocket = gItemsInfo[item].pocket;
    u8 importance = gItemsInfo[item].importance;

    switch(itemPocket){
        case POCKET_TM_HM:
        case POCKET_KEY_ITEMS:
            return FALSE;
        break;
    }

    if(importance) //Important items cannot be hold
        return FALSE;

    return TRUE;
}

static void Task_ReturnToPartyMenuToGiveItem(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gSpecialVar_ItemId = Inventory_GetItemIdCurrentlySelected();
        removeTransparentBackground();
        SetMainCallback2(inventorySavedCallback);
        Menu_FreeResourcesAndCallback();
        DestroyTask(taskId);
    }
}

void Task_UseItem(u8 taskId){
    if (!gPaletteFade.active)
    {
        u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;

        switch(pocketId){
            case POCKET_BERRIES:
                ItemUseOutOfBattle_Berry(taskId);
            break;
            case POCKET_TM_HM:
                ItemUseInBattle_UseTMHM(taskId);
            break;
            default:
                GetItemFieldFunc(gSpecialVar_ItemId)(taskId);
            break;
        }

        Menu_FreeResources();
        removeTransparentBackground();

        DestroyTask(taskId);
    }
}

static void Task_ReturnToMainInventoryMenu(u8 taskId, u8 message){
    sMenuDataPtr->currentSelectMode = message;
    Inventory_RemoveMenu_AndShowMessage(taskId);
}

void WaitSound(void){
    while (IsSEPlaying());
}

void ItemUseOutOfBattle_Repel_New(u8 taskId)
{
    u32 windowId = sInventoryListMenu->inventoryMenuWindowId;
    u16 ItemId = gSpecialVar_ItemId;
    u16 LastRepelUsed = VarGet(VAR_LAST_REPEL_LURE_USED);
    u16 remainingSteps = VarGet(VAR_REPEL_STEP_COUNT);
    bool8 isLure = FALSE;
    bool8 lastItemWasLure = FALSE;
    bool8 isUsable = TRUE;

    switch(ItemId){
        case ITEM_LURE:
        case ITEM_SUPER_LURE:
        case ITEM_MAX_LURE:
            isLure = TRUE;
        break;
    }

    switch(LastRepelUsed){
        case ITEM_LURE:
        case ITEM_SUPER_LURE:
        case ITEM_MAX_LURE:
            lastItemWasLure = TRUE;
        break;
    }

    if(remainingSteps != 0 && isLure != lastItemWasLure)
        isUsable = FALSE;
    WaitSound();

    if (isUsable){
        u16 steps = GetItemHoldEffectParam(gSpecialVar_ItemId) | REPEL_LURE_MASK;
        remainingSteps += steps;
        PlaySE(SE_REPEL);
        VarSet(VAR_LAST_REPEL_LURE_USED, ItemId);
        VarSet(VAR_REPEL_STEP_COUNT, remainingSteps);
        WaitSound();
        Task_ReturnToMainInventoryMenu(taskId, INVENTORY_MESSAGE_USED_ITEM);
    }
    else
        Task_ReturnToMainInventoryMenu(taskId, INVENTORY_MESSAGE_CANT_USE_ITEM);
}

static bool8 CanUseSpecificItem(u16 item){
    switch(item){
        case ITEM_ESCAPE_ROPE:
            if(!CanUseDigOrEscapeRopeOnCurMap())
                return FALSE;
        break;
    }

    return TRUE;
}

static void Task_ItemUseOnField(u8 taskId)
{
    u16 itemId = gSpecialVar_ItemId = Inventory_GetItemIdCurrentlySelected();
    enum ItemSortType itemType = GetItemSortType(itemId);

    if (GetItemFieldFunc(itemId) && CanUseSpecificItem(itemId))
    {
        if (!IsPlayerAllowedToUseHealingItems(itemId, TRUE, FALSE, TRUE))
        {
            //Can't use item
            Task_ReturnToMainInventoryMenu(taskId, INVENTORY_MESSAGE_CANT_USE_ITEM);
        }
        else if (CalculatePlayerPartyCount() == 0 && GetItemType(itemId) == ITEM_USE_PARTY_MENU)
        {
            //There is no Pokemon
            Task_ReturnToMainInventoryMenu(taskId, INVENTORY_MESSAGE_CANT_USE_ITEM);
        }
        else if(itemType == ITEM_TYPE_REPEL){
            gTasks[taskId].func = ItemUseOutOfBattle_Repel_New;
        }
        else
        {
            //DebugPrintf("Task_ItemUseOnField %d Test", itemId);
            ScheduleBgCopyTilemapToVram(0);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_UseItem;
        }
    }
    else{
        Task_ReturnToMainInventoryMenu(taskId, INVENTORY_MESSAGE_CANT_USE_ITEM);
    }

    sMenuDataPtr->itemIdxPickMode = 0;
}

void Task_CloseNewBagMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        // If ready for a new screen (e.g. party menu for giving an item) go to that screen
        // Otherwise exit the bag and use callback set up when the bag was first opened
        SetMainCallback2(inventorySavedCallback);

        Menu_FreeResources();
        removeTransparentBackground();

        DestroyTask(taskId);
    }
}

void Task_CloseNewBagMenu_Temp(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        // If ready for a new screen (e.g. party menu for giving an item) go to that screen
        // Otherwise exit the bag and use callback set up when the bag was first opened
        SetMainCallback2(ChooseMonForInBattleItem);

        Menu_FreeResources();
        removeTransparentBackground();

        DestroyTask(taskId);
    }
}

static void RemoveUsedItem(void)
{
    RemoveBagItem(gSpecialVar_ItemId, 1);
    CopyItemName(gSpecialVar_ItemId, gStringVar2);
    StringExpandPlaceholders(gStringVar4, gText_PlayerUsedVar2);
    //UpdatePocketItemList(ItemId_GetPocket(gSpecialVar_ItemId));
    //UpdatePocketListPosition(ItemId_GetPocket(gSpecialVar_ItemId));
}

void ItemUseInBattle_NewBagMenu(u8 taskId)
{
    if (CannotUseItemsInBattle(gSpecialVar_ItemId, NULL))
    {
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_USE_ITEM;
    }
    else
    {
        PlaySE(SE_SELECT);
        if (!(B_TRY_CATCH_TRAINER_BALL >= GEN_4 && (GetItemBattleUsage(gSpecialVar_ItemId) == EFFECT_ITEM_THROW_BALL) && (gBattleTypeFlags & BATTLE_TYPE_TRAINER)))
            RemoveUsedItem();
        TryToIncreaseBattleItemUseCount(gSpecialVar_ItemId);

        ScheduleBgCopyTilemapToVram(0);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);

        gTasks[taskId].func = Task_CloseNewBagMenu;
    }
}

static void ItemUseInBattle_ShowPartyMenu(u8 taskId)
{
    ScheduleBgCopyTilemapToVram(0);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    //Task_CloseNewBagMenu_Temp(taskId);
    gTasks[taskId].func = Task_CloseNewBagMenu_Temp;
}

void ItemUseInBattle_PartyMenu_New(u8 taskId)
{
    gItemUseCB = ItemUseCB_BattleScript;
    ItemUseInBattle_ShowPartyMenu(taskId);
}

void ItemUseInBattle_UseTMHM(u8 taskId)
{
    gItemUseCB = ItemUseCB_TMHM;
    SetMainCallback2(CB2_ShowPartyMenuForItemUse);
}

static void Task_ItemUseOnBattle(u8 taskId)
{
    // Safety check
    u16 itemId = gSpecialVar_ItemId = Inventory_GetItemIdCurrentlySelected();
    u16 type = GetItemType(itemId);

    if (!GetItemBattleUsage(itemId))
        return;

    if (!CanUseBagItems(itemId) || !IsPlayerAllowedToUseHealingItems(itemId, FALSE, TRUE, FALSE))
    {
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_USE_ITEM;
    }
    else{
        if (type == ITEM_USE_BAG_MENU) //Working
            ItemUseInBattle_NewBagMenu(taskId);
        else if (type == ITEM_USE_PARTY_MENU)
            ItemUseInBattle_PartyMenu_New(taskId);
        else if (type == ITEM_USE_PARTY_MENU_MOVES)
            ItemUseInBattle_PartyMenuChooseMove(taskId);

        sMenuDataPtr->itemIdxPickMode = 0;
    }
}

void CB2_ReturnToInventoryMenu(void)
{
    CleanupOverworldWindowsAndTilemaps();
    Inventory_Init(inventorySavedCallback, INVENTORY_MODE_FIELD);
}

void CB2_ReturnToInventoryBattleMenu(void)
{
    CleanupOverworldWindowsAndTilemaps();
    Inventory_Init(inventorySavedCallback, INVENTORY_MODE_BATTLE);
}

            /*
void TryToRemoveFavoriteItem(u8 pocketId, u8 itemIdx){
    if(isFavoriteItem(pocketId, itemIdx)){
        gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]--;
    }

    ForceReloadInventory();
}
             */

bool8 isFavoriteItem(u8 pocketId, u8 itemIdx){
    return (itemIdx < gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]) || pocketId == POCKET_FAVORITE_ITEMS;
}

bool8 isCurrentItemFavorite(void){
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;

    return isFavoriteItem(pocketId, itemIdx);
}

static void Inventory_UseItem(u8 taskId)
{
    //u16 currentOption = getSelectedItemOptionNum(sMenuDataPtr->itemIdxPickMode);
    u16 currentOption = getSelectedItemOptionNum(Inventory_GetMenuPosition());
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u16 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
    u8 importance = gItemsInfo[Inventory_GetItemIdCurrentlySelected()].importance;
    u8 oldPocketId = pocketId;
    u16 oldItemIdx = itemIdx;

    if(pocketId == POCKET_FAVORITE_ITEMS)
    {
        //Inventory_GetItemIdCurrentlySelected();
        pocketId   = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_POCKET];
        itemIdx    = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_POCKET_INDEX];
    }

    switch(currentOption){
        case INVENTORY_ITEM_OPTION_USE:
            if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_FIELD)
                Task_ItemUseOnField(taskId);
            else
                Task_ItemUseOnBattle(taskId);
        break;
        case INVENTORY_ITEM_OPTION_TOSS:
        {
            Inventory_RemoveMenu(taskId);
            if(!importance)
            {
                sMenuDataPtr-> numItemsToToss = CountTotalItemQuantityInBag(Inventory_GetItemIdCurrentlySelected());
                Inventory_CreateTossMenu(taskId);
            }
            else{
                sMenuDataPtr->itemIdxPickMode = 0;
                sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_TOSS_ITEM;
                Inventory_PrintToAllWindows();
            }
        }
        break;
        case INVENTORY_ITEM_OPTION_GIVE:
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_GiveItem;
        break;
        case INVENTORY_ITEM_OPTION_FAVORITE:
        {
            bool8 isAlreadyFavorite = isCurrentItemFavorite();
            //oldPocketId
            if(pocketId != POCKET_FAVORITE_ITEMS){
                if(!isAlreadyFavorite){
                    //Favorite
                    MoveItemToTop();
                    sMenuDataPtr->itemIdxPickMode = 0;
                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;

                    gSaveBlock3Ptr->InventoryData.itemIdx = 0;
                    gSaveBlock3Ptr->InventoryData.yFirstItem = 0;

                    if(gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId] < MAX_INVENTORY_FAVORITE_ITEMS)
                        gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]++;
                }
                else{
                    //Unfavorite
                    u8 numItemsInPocket = sMenuDataPtr->numItems[pocketId] - 1;
                    u8 numPress = gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId] - 1;

                    MoveUnfavoriteItem();
                    sMenuDataPtr->itemIdxPickMode = 0;
                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;

                    gSaveBlock3Ptr->InventoryData.itemIdx = 0;
                    gSaveBlock3Ptr->InventoryData.yFirstItem = 0;

                    if(oldPocketId != POCKET_FAVORITE_ITEMS)
                    {
                        do
                        {
                            if(gSaveBlock3Ptr->InventoryData.itemIdx == numItemsInPocket - 1)
                                break;

                            if (numPress == 0)
                                break;

                            PressedDownButton_Inventory();
                            numPress--;
                        }
                        while(numPress != 0);
                    }
                    gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]--;
                }
            }
            Inventory_RemoveMenu(taskId);
            ForceReloadInventory();
            Inventory_PrintItemList();
            Inventory_PrintDesc();
        }
        break;
        case INVENTORY_ITEM_OPTION_REGISTER:
            sMenuDataPtr->itemIdxPickMode = 0;
            sMenuDataPtr->currentSelectMode = INVENTORY_MODE_REGISTER;
            Inventory_HandleRegister(taskId);
        break;
        case INVENTORY_ITEM_OPTION_CANCEL:
            sMenuDataPtr->itemIdxPickMode = 0;
            Inventory_RemoveMenu(taskId);
        break;
    }
}

static void RemoveItemInSlot(u8 pocketId, u8 itemIdx){
    u8 i;
    struct BagPocket *pocket = &gBagPockets[pocketId];
    u8 numItemsInPocket = sMenuDataPtr->numItems[pocketId] - 1;

    if(isFavoriteItem(pocketId, itemIdx))
        gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]--;

    for(i = itemIdx; i < numItemsInPocket; i++){
        pocket->itemSlots[i].itemId   = pocket->itemSlots[i + 1].itemId;
        pocket->itemSlots[i].quantity = pocket->itemSlots[i + 1].quantity;
    }

    pocket->itemSlots[i].itemId   = ITEM_NONE;
    pocket->itemSlots[i].quantity = 0;
}

static void RemoveInventoryItem(u8 pocketId, u8 itemIdx, u16 quanity){
    u16 ownedCount, item;
    bool8 removedItem;

    if(pocketId == POCKET_FAVORITE_ITEMS){
        pocketId = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET];
        itemIdx  = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET_INDEX];
    }

    ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;
    item = Inventory_GetItemIdCurrentlySelected();
    removedItem = (ownedCount == quanity);

    if(CheckBagHasItem(item, quanity)){
        if(removedItem)
            RemoveItemInSlot(pocketId, itemIdx);
        else
            RemoveBagItem(item, quanity);

        if(removedItem && itemIdx != 0)
            gSaveBlock3Ptr->InventoryData.itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx - 1;
    }
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;

    ForceReloadInventory();
}

static bool8 MoveItems(bool8 isUp){
    u16 currentItemIdx, tempItem, tempItemIdx, tempItemQuantity;
    bool8 moveItem = FALSE;
    u8 pocketNum = gSaveBlock3Ptr->InventoryData.pocketNum;
    u8 numFavorites = gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketNum];
    u8 numItems = sMenuDataPtr->numItems[pocketNum] - 1;
    struct BagPocket *pocket = &gBagPockets[pocketNum];

    currentItemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;

    if(!isUp){
        if(currentItemIdx < numItems - 1)
            moveItem = TRUE;

        tempItemIdx = currentItemIdx + 1;
    }
    else{
        if(currentItemIdx > numFavorites)
            moveItem = TRUE;

        tempItemIdx = currentItemIdx - 1;
    }

    if(moveItem){
        tempItem         = pocket->itemSlots[currentItemIdx].itemId;
        tempItemQuantity = pocket->itemSlots[currentItemIdx].quantity;

        pocket->itemSlots[currentItemIdx].itemId   = pocket->itemSlots[tempItemIdx].itemId;
        pocket->itemSlots[currentItemIdx].quantity = pocket->itemSlots[tempItemIdx].quantity;

        pocket->itemSlots[tempItemIdx].itemId   = tempItem;
        pocket->itemSlots[tempItemIdx].quantity = tempItemQuantity;
    }

    return moveItem;
}

static void RegisterItemIntoDirection(u8 direction)
{
    u32 currentItem = Inventory_GetItemIdCurrentlySelected();

    if(gSaveBlock3Ptr->InventoryData.registeredItem[direction] == currentItem)
    {
        gSaveBlock3Ptr->InventoryData.registeredItem[direction] = ITEM_NONE;
        FreeRegisteredItemIconSprite(direction);
        return;
    }

    for(u32 i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS; i++)
        if(gSaveBlock3Ptr->InventoryData.registeredItem[i] == currentItem)
            gSaveBlock3Ptr->InventoryData.registeredItem[i] = ITEM_NONE;

    gSaveBlock3Ptr->InventoryData.registeredItem[direction] = currentItem;

    sMenuDataPtr->itemIdxPickMode = 0;
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;

    CreateAllRegisteredItemIcon();
}

void RemoveEmptyRegisteredItems(void){
    u8 i;

    for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS; i++){
        u16 item = gSaveBlock3Ptr->InventoryData.registeredItem[i];
        if(!CheckBagHasItem(item, 1))
            gSaveBlock3Ptr->InventoryData.registeredItem[i] = ITEM_NONE;
    }
}

/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    u32 numitems = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum];
    u32 numPress = 0;

    if (JOY_NEW(A_BUTTON))
    {
        bool8 shouldOpenMenu = TRUE;
        if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_FIELD || sMenuDataPtr->inventoryMode == INVENTORY_MODE_BATTLE)
        {
            switch(sMenuDataPtr->currentSelectMode)
            {
                case INVENTORY_MODE_REORDER:
                    if(sMenuDataPtr->itemIdxPickMode != ITEM_SORT_CANCEL)
                    {
                        TrySortBag();
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                    }
                    else
                    {
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                    }
                    break;
                case INVENTORY_MODE_TOSS_HOW_MANY:
                case INVENTORY_MODE_REGISTER:
                    break;
                    //Generic Messages
                case INVENTORY_MESSAGE_CANT_MOVE_FAVORITE:
                case INVENTORY_MESSAGE_CANT_USE_ITEM:
                case INVENTORY_MESSAGE_CANT_TOSS_ITEM:
                case INVENTORY_MESSAGE_SORTED_ITEMS_BY:
                    sMenuDataPtr->itemIdxPickMode = 0;
                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                    shouldOpenMenu = FALSE;
                    break;
                case INVENTORY_MESSAGE_USED_ITEM:
                    RemoveInventoryItem(gSaveBlock3Ptr->InventoryData.pocketNum, gSaveBlock3Ptr->InventoryData.itemIdx, 1);
                    sMenuDataPtr->itemIdxPickMode = 0;
                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                    shouldOpenMenu = FALSE;
                    break;
                default:
                    if (Inventory_LastItemInMenu())
                    {
                        gSpecialVar_ItemId = ITEM_NONE;
                        Inventory_TurnOff(taskId);
                        return;
                    }
                    else
                    {
                        sMenuDataPtr->itemIdxPickMode = 0;
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_USE_OPTIONS;
                    }
                break;
            }
        }
        else if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_GIVE_ITEM)
        {
            if(canItemBeHold(Inventory_GetItemIdCurrentlySelected()))
            {
                PlaySE(SE_SELECT);
                BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_ReturnToPartyMenuToGiveItem;
            }
            else
            {
                PlaySE(SE_PC_OFF);
            }
        }

        Inventory_PrintToAllWindows();
        if(shouldOpenMenu)
            Inventory_OpenMenu(taskId);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        switch(sMenuDataPtr->currentSelectMode)
        {
            case INVENTORY_MODE_DEFAULT:
                Inventory_PrintToAllWindows();
                Inventory_TurnOff(taskId);
                break;
            case INVENTORY_MODE_REGISTER:
                sMenuDataPtr->itemIdxPickMode = 0;
                sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                break;
            default:
                sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                Inventory_RemoveMenu(taskId);
                Inventory_PrintToAllWindows();
                break;
        }
    }

    if ((JOY_NEW(DPAD_RIGHT)) || (JOY_REPEAT(DPAD_RIGHT)))
    {
        if (sMenuDataPtr->currentSelectMode != INVENTORY_MODE_DEFAULT)
            return;

        if(gSaveBlock3Ptr->InventoryData.pocketNum >= NUM_INVENTORY_POCKETS - 1)

            gSaveBlock3Ptr->InventoryData.pocketNum = 0;
        else
            gSaveBlock3Ptr->InventoryData.pocketNum++;

        gSaveBlock3Ptr->InventoryData.itemIdx = 0;
        gSaveBlock3Ptr->InventoryData.yFirstItem = 0;

        PlaySE(SE_SELECT);
        Inventory_PrintToAllWindows();
    }

    if ((JOY_NEW(DPAD_LEFT)) || (JOY_REPEAT(DPAD_LEFT)))
    {
        if (sMenuDataPtr->currentSelectMode != INVENTORY_MODE_DEFAULT)
            return;

        if(gSaveBlock3Ptr->InventoryData.pocketNum == 0)
            gSaveBlock3Ptr->InventoryData.pocketNum = NUM_INVENTORY_POCKETS - 1;
        else
            gSaveBlock3Ptr->InventoryData.pocketNum--;

        gSaveBlock3Ptr->InventoryData.itemIdx = 0;
        gSaveBlock3Ptr->InventoryData.yFirstItem = 0;

        PlaySE(SE_SELECT);
        Inventory_PrintToAllWindows();
    }

    if ((JOY_NEW(DPAD_DOWN)) || (JOY_REPEAT(DPAD_DOWN)))
    {
        if (sMenuDataPtr->currentSelectMode != INVENTORY_MODE_DEFAULT)
            return;

        PressedDownButton_Inventory();
        PlaySE(SE_SELECT);
        Inventory_PrintToAllWindows();
    }

    if ((JOY_NEW(DPAD_UP)) || (JOY_REPEAT(DPAD_UP)))
    {
        if (sMenuDataPtr->currentSelectMode != INVENTORY_MODE_DEFAULT)
            return;

        PressedUpButton_Inventory();
        PlaySE(SE_SELECT);
        Inventory_PrintToAllWindows();
    }

    if ((JOY_NEW(L_BUTTON)))
    {
        if (sMenuDataPtr->currentSelectMode != INVENTORY_MODE_DEFAULT)
            return;

        numPress = NUM_LR_CURSOR_MOVES;
        PlaySE(SE_SELECT);
        do
        {
            if(gSaveBlock3Ptr->InventoryData.itemIdx == 0)
                break;

            PressedUpButton_Inventory();
            numPress--;
        }
        while(numPress != 0);
        Inventory_PrintToAllWindows();
    }

    if ((JOY_NEW(R_BUTTON)))
    {
        if (sMenuDataPtr->currentSelectMode != INVENTORY_MODE_DEFAULT)
            return;

        numPress = NUM_LR_CURSOR_MOVES;
        PlaySE(SE_SELECT);
        do
        {
            if(gSaveBlock3Ptr->InventoryData.itemIdx == 0)
                break;

            PressedDownButton_Inventory();
            numPress--;
        }
        while(numPress != 0);
        Inventory_PrintToAllWindows();
    }


    if ((JOY_NEW(START_BUTTON)))
    {
        //You can only Sort Items in the default inventory mode
        if(sMenuDataPtr->inventoryMode != INVENTORY_MODE_FIELD)
            return;

        if (sMenuDataPtr->currentSelectMode != INVENTORY_MODE_DEFAULT)
            return;

        if(sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum] <= 1)
            return;

        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_REORDER;
        Inventory_PrintToAllWindows();
        Inventory_OpenMenu(taskId);
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        Inventory_EnterMoveMode(taskId);
    }
}

static void Inventory_HandleRegister(u8 taskId)
{
    u32 windowId = sInventoryListMenu->inventoryMenuWindowId;
    RemoveWindow(windowId);
    sInventoryListMenu->inventoryMenuWindowId = WINDOW_NONE;
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_REGISTER;
    Inventory_PrintToAllWindows();
    gTasks[taskId].func = Task_Inventory_HandleRegisterDirection;
}

static void Task_Inventory_HandleRegisterDirection(u8 taskId)
{
    if (JOY_NEW(DPAD_UP))
    {
        RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_UP);
        Inventory_CancelFavorite(taskId);
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_DOWN);
        Inventory_CancelFavorite(taskId);
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_LEFT);
        Inventory_CancelFavorite(taskId);
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_RIGHT);
        Inventory_CancelFavorite(taskId);
    }
    else if (JOY_NEW(JOY_EXCL_DPAD))
    {
        Inventory_CancelFavorite(taskId);
    }
}

static void Task_Inventory_HandleCantMoveInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON) || JOY_NEW(SELECT_BUTTON) || JOY_NEW(A_BUTTON))
    {
        //Inventory_PrintFooter();
        Inventory_MoveMode_CancelMove(taskId);
    }
}

static void Inventory_EnterMoveMode(u8 taskId)
{
    if(sMenuDataPtr->inventoryMode != INVENTORY_MODE_FIELD)
        return;

    if (Inventory_LastItemInMenu())
    {
        PlaySE(SE_PC_OFF);
        return;
    }

    if (isCurrentItemFavorite())
    {
        PlaySE(SE_PC_OFF);
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_MOVE_FAVORITE;
        Inventory_PrintToAllWindows();
        gTasks[taskId].func = Task_Inventory_HandleCantMoveInput;
        return;
    }

    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_MOVE_ITEMS;
    Inventory_PrintFooter();
    Inventory_PrintItemList();
    PlaySE(SE_WIN_OPEN);
    gTasks[taskId].func = Task_Inventory_HandleMoveInput;
}

static void Inventory_MoveMode_HandleMovement(bool32 isUp)
{
    if (!MoveItems(isUp))
    {
        PlaySE(SE_FAILURE);
        return;
    }

    if (isUp == TRUE)
        PressedUpButton_Inventory();
    else
        PressedDownButton_Inventory();

    PlaySE(SE_SELECT);
    Inventory_PrintItemList();
    Inventory_PrintDesc();
    return;
}

static void Inventory_MoveMode_HandleMoveUp(u8 taskId)
{
    Inventory_MoveMode_HandleMovement(TRUE);
}

static void Inventory_MoveMode_HandleMoveDown(u8 taskId)
{
    Inventory_MoveMode_HandleMovement(FALSE);
}

static void Inventory_MoveMode_CancelMove(u8 taskId)
{
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
    ForceReloadInventory();
    Inventory_PrintToAllWindows();
    PlaySE(SE_SELECT);
    gTasks[taskId].func = Task_MenuMain;
}

static void Task_Inventory_HandleMoveInput(u8 taskId)
{
    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        Inventory_MoveMode_HandleMoveUp(taskId);
    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        Inventory_MoveMode_HandleMoveDown(taskId);
    else if (JOY_NEW(B_BUTTON) || JOY_NEW(SELECT_BUTTON) || JOY_NEW(A_BUTTON))
        Inventory_MoveMode_CancelMove(taskId);
}

static void Inventory_CancelFavorite(u8 taskId)
{
    sMenuDataPtr->itemIdxPickMode = 0;
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
    Inventory_PrintToAllWindows();
    gTasks[taskId].func = Task_MenuMain;
}

static bool8 Inventory_LastItemInMenu(void)
{
    u32 itemId = gSaveBlock3Ptr->InventoryData.itemIdx;
    u32 numItems = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum];
    u32 lastItemIndex = numItems - 1;

    return (itemId >= lastItemIndex);
}

static void Inventory_TurnOff(u8 taskId)
{
    PlaySE(SE_PC_OFF);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_MenuTurnOff;
}
