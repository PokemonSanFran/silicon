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


//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;
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
static void Menu_UpdateTilemap(void);
static void Menu_InitWindows(void);
static void Inventory_PrintHeader(void);
static void Inventory_PrintPartyDisplay(void);
static u32 Inventory_GetItemIdFromPocketIndex(u32 itemIndex, enum Pocket pocketId);
static void Inventory_TryPrintListCursor(enum Pocket pocketId, u32 itemScreenListIndex, u32 itemId, u32 itemIndex, u32 numItems);
static void Inventory_TryPrintFavoriteIcon(enum Pocket pocketId, u32 itemIdx, u32 itemScreenListIndex);
static void Inventory_PrintItems(enum Pocket pocketId, u32 itemId, u32 itemIndex, u32 itemScreenListIndex);
static void Inventory_PrintItemList(void);
static void Inventory_PrintDesc(void);
static void Inventory_PrintFooter(void);
static void PrintToWindow(void);
static void FreeInventoryBackgrounds(void);
static void Menu_FreeResources(void);
static void Menu_FreeResourcesAndCallback(void);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static void Inventory_LoadBackgroundPalette(void);
static void setNormalBackground(void);
static void setTransparentBackground(void);
static void removeTransparentBackground(void);
static void StartMenu_DisplayPartyIcons(void);
static u8 ShowSpeciesIcon(u8 slot, u8 x, u8 y);
static void SpriteCB_Species_Icon_Dummy(struct Sprite *);
u8 UpdateMonIconFrameCropped(struct Sprite *sprite);
static u16 getCurrentSelectedItemIdx(void);
static u8 getItemOptionNum(u16 item, u8 num);
static void ForceReloadInventory(void);
bool8 isCurrentItemFavorite(void);
bool8 isFavoriteItem(u8 pocketId, u8 itemIdx);
static u8 CreateRegisteredItemIcon(u8 slot);
static void RemoveItemInSlot(u8 pocketId, u8 itemIdx);
void ItemUseInBattle_UseTMHM(u8 taskId);
void ItemUseOutOfBattle_Repel_New(u8 taskId);
bool8 shouldShowRegisteredItems(void);
void ForceReloadInventory(void);

//bag sort
static void SortItemsInInventory(u8 pocket, u8 type);
static void MergeSort(struct ItemSlot* array, u32 low, u32 high, s8 (*comparator)(struct ItemSlot*, struct ItemSlot*));
static void Merge(struct ItemSlot* array, u32 low, u32 mid, u32 high, s8 (*comparator)(struct ItemSlot*, struct ItemSlot*));
static s8 CompareItemsAlphabetically(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2);
static s8 CompareItemsByMost(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2);
static s8 CompareItemsByType(struct ItemSlot* itemSlot1, struct ItemSlot* itemSlot2);

//Sprites
static void CreateUpArrowSprite(void);
static void CreateDownArrowSprite(void);

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[] =
{
    {
        .bg = INVENTORY_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = INVENTORY_BG_NORMAL,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    {
        .bg = INVENTORY_BG_SHADOWS,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
    {
        .bg = INVENTORY_BG_WALLPAPER,
        .charBaseIndex = 3,
        .mapBaseIndex = 27,
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
        .baseBlock = 1,
    },
    [INVENTORY_WINDOW_PARTY_DISPLAY] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 8,
        .height = 11,
        .paletteNum = 1,
        .baseBlock = 1 + (30*2),
    },
    [INVENTORY_WINDOW_ITEM_LIST] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 8,
        .tilemapTop = 2,
        .width = 22,
        .height = 11,
        .paletteNum = 1,
        .baseBlock = 1 + (30*2) + (8*11),
    },
    [INVENTORY_WINDOW_DESC] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 30,
        .height = 5,
        .paletteNum = 1,
        .baseBlock = 1 + (30*2) + (8*11) + (22*11),
    },
    [INVENTORY_WINDOW_FOOTER] =
    {
        .bg = INVENTORY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 1 + (30*2) + (8*11) + (22*11) + (30*5),
    },
    DUMMY_WIN_TEMPLATE,
};

static const u16 sMenuInterfacePalette[]         = INCBIN_U16("graphics/ui_menus/inventory/interface_palette.gbapal");
static const u16 sMenuInterfacePalette_Sprites[] = INCBIN_U16("graphics/ui_menus/inventory/interface_palette_sprites.gbapal");

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

static const u8 sMenuWindowFontColors[][3] =
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
    u8 i;

    sMenuDataPtr->itemIdxPickMode   = 0;
    sMenuDataPtr->numItemsToToss    = 0;
    sMenuDataPtr->windowInfoNum     = 0;

    for(i = 0; i < PARTY_SIZE; i++)
        sMenuDataPtr->PartyPokemonIcon[i] = 0xFF;

    for(i = 0; i < NUM_INVENTORY_SPRITES; i++)
        sMenuDataPtr->spriteIDs[i] = 0xFF;

    ForceReloadInventory();
}

// This is our main initialization function if you want to call the menu from elsewhere
void Inventory_Init(MainCallback callback, u8 mode)
{
    if ((sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources))) == NULL)
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
    u8 i;

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
        StartMenu_DisplayPartyIcons();
        for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS; i++)
            CreateRegisteredItemIcon(i);
        LoadPalette(sMenuInterfacePalette, 16, 32);
        CreateTask(Task_MenuWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        PrintToWindow();
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

        bgTilemapBuffers[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (bgTilemapBuffers[backgroundId] == NULL)
            return FALSE;

        memset(bgTilemapBuffers[backgroundId],0,BG_SCREEN_SIZE);
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

static void UNUSED setNormalBackground(void){
    SetBgAttribute(INVENTORY_BG_NORMAL, BG_ATTR_PRIORITY, INVENTORY_BG_NORMAL);
    InitBgsFromTemplates(0, sMenuBgTemplates, ARRAY_COUNT(sMenuBgTemplates));
    //SetBgTilemapBuffer(INVENTORY_BG_NORMAL, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_NORMAL]);
    ScheduleBgCopyTilemapToVram(INVENTORY_BG_NORMAL);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(INVENTORY_BG_TEXT);
    ShowBg(INVENTORY_BG_NORMAL);
    ChangeBgX(INVENTORY_BG_NORMAL, 0, 0);
    ChangeBgY(INVENTORY_BG_NORMAL, 0, 0);
}

static void UNUSED setTransparentBackground(void){
    u8 strength = 6;
    //SetBgTilemapBuffer(INVENTORY_BG_SHADOWS, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_SHADOWS]);
    ScheduleBgCopyTilemapToVram(INVENTORY_BG_SHADOWS);

    //Transparency
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_ALL | BLDCNT_TGT1_BG1); //Blend Background over the rest
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(strength, strength));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);

    ShowBg(INVENTORY_BG_SHADOWS);
    ChangeBgX(INVENTORY_BG_SHADOWS, 0, 0);
    ChangeBgY(INVENTORY_BG_SHADOWS, 0, 0);
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
    [INVENTORY_BG_NORMAL] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/textlayer.4bpp.smol"),
    [INVENTORY_BG_SHADOWS] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/shadows.4bpp.smol"),
    [INVENTORY_BG_WALLPAPER] = (const u32[])INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.4bpp.smol"),
};

static const u32* const sInventoryTilemapLUT[] =
{
    [INVENTORY_BG_TEXT] = NULL,
    [INVENTORY_BG_NORMAL] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/textlayer.bin.smolTM"),
    [INVENTORY_BG_SHADOWS] = (const u32[])INCBIN_U32("graphics/ui_menus/inventory/backgrounds/shadows.bin.smolTM"),
    [INVENTORY_BG_WALLPAPER] = (const u32[])INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.bin.smolTM"),
};

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sInventoryTilesLUT[backgroundId] == NULL || sInventoryTilemapLUT[backgroundId] == NULL);
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
    Menu_UpdateTilemap();
}


static void Menu_UpdateTilemap(void)
{
    s32 value;
    if(!shouldShowRegisteredItems())
        value = ChangeBgY(INVENTORY_BG_NORMAL, 0, BG_COORD_SET);
    else
        value = ChangeBgY(INVENTORY_BG_NORMAL, Y_VALUE_REGISTERED, BG_COORD_SET);

    DebugPrintfLevel(MGBA_LOG_WARN, "Menu_UpdateTilemap value; %d", value);
}

static void Menu_InitWindows(void)
{
    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();

    for (enum InventoryWindowIds windowId = 0; windowId < INVENTORY_WINDOW_COUNT; windowId++)
    {
        FillWindowPixelBuffer(windowId, TEXT_COLOR_TRANSPARENT);
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

u16 getMaxItemsFromPocket(u8 pocket){
    switch(pocket){
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

static const struct StringList sSortTypeStrings[NUM_SORT_OPTIONS] = {
    [ITEM_SORT_ALPHABETICALLY] = { _("Name"),   },
    [ITEM_SORT_BY_TYPE]        = { _("Type"),   },
    [ITEM_SORT_BY_AMOUNT]      = { _("Amount"), },
    [ITEM_SORT_CANCEL]         = { _("Cancel"), },
};

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

static const u16 sItemsByType[ITEMS_COUNT] =
{
    [ITEM_REPEL] = ITEM_TYPE_REPEL,
    [ITEM_SUPER_REPEL] = ITEM_TYPE_REPEL,
    [ITEM_MAX_REPEL] = ITEM_TYPE_REPEL,
    [ITEM_LURE] = ITEM_TYPE_REPEL,
    [ITEM_SUPER_LURE] = ITEM_TYPE_REPEL,
    [ITEM_MAX_LURE] = ITEM_TYPE_REPEL,
    [ITEM_HEART_SCALE] = ITEM_TYPE_FIELD_USE,
    [ITEM_BLACK_FLUTE] = ITEM_TYPE_FIELD_USE,
    [ITEM_WHITE_FLUTE] = ITEM_TYPE_FIELD_USE,
    [ITEM_ESCAPE_ROPE] = ITEM_TYPE_KEY_ITEMS,

    [ITEM_POTION] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_FULL_RESTORE] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_MAX_POTION] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_HYPER_POTION] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_SUPER_POTION] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_REVIVE] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_MAX_REVIVE] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_FRESH_WATER] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_SODA_POP] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_LEMONADE] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_MOOMOO_MILK] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_ENERGY_POWDER] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_ENERGY_ROOT] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_REVIVAL_HERB] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_BERRY_JUICE] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_SACRED_ASH] = ITEM_TYPE_HEALTH_RECOVERY,

    [ITEM_ANTIDOTE] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_BURN_HEAL] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_ICE_HEAL] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_AWAKENING] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_PARALYZE_HEAL] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_FULL_HEAL] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_LAVA_COOKIE] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_PEWTER_CRUNCHIES] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_JUBILIFE_MUFFIN] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_REMEDY] = ITEM_TYPE_STATUS_RECOVERY,

    [ITEM_ETHER] = ITEM_TYPE_PP_RECOVERY,
    [ITEM_MAX_ETHER] = ITEM_TYPE_PP_RECOVERY,
    [ITEM_ELIXIR] = ITEM_TYPE_PP_RECOVERY,
    [ITEM_MAX_ELIXIR] = ITEM_TYPE_PP_RECOVERY,

    [ITEM_HP_UP] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_PROTEIN] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_IRON] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_CARBOS] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_CALCIUM] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_RARE_CANDY] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_EXP_CANDY_S] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_EXP_CANDY_XS] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_EXP_CANDY_M] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_EXP_CANDY_L] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_EXP_CANDY_XL] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_DYNAMAX_CANDY] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_PP_UP] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_ZINC] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_PP_MAX] = ITEM_TYPE_STAT_BOOST_DRINK,

    [ITEM_LONELY_MINT] = ITEM_TYPE_MINT,
    [ITEM_ADAMANT_MINT] = ITEM_TYPE_MINT,
    [ITEM_NAUGHTY_MINT] = ITEM_TYPE_MINT,
    [ITEM_BRAVE_MINT] = ITEM_TYPE_MINT,
    [ITEM_BOLD_MINT] = ITEM_TYPE_MINT,
    [ITEM_IMPISH_MINT] = ITEM_TYPE_MINT,
    [ITEM_LAX_MINT] = ITEM_TYPE_MINT,
    [ITEM_RELAXED_MINT] = ITEM_TYPE_MINT,
    [ITEM_MODEST_MINT] = ITEM_TYPE_MINT,
    [ITEM_MILD_MINT] = ITEM_TYPE_MINT,
    [ITEM_RASH_MINT] = ITEM_TYPE_MINT,
    [ITEM_QUIET_MINT] = ITEM_TYPE_MINT,
    [ITEM_CALM_MINT] = ITEM_TYPE_MINT,
    [ITEM_GENTLE_MINT] = ITEM_TYPE_MINT,
    [ITEM_CAREFUL_MINT] = ITEM_TYPE_MINT,
    [ITEM_SASSY_MINT] = ITEM_TYPE_MINT,
    [ITEM_TIMID_MINT] = ITEM_TYPE_MINT,
    [ITEM_HASTY_MINT] = ITEM_TYPE_MINT,
    [ITEM_JOLLY_MINT] = ITEM_TYPE_MINT,
    [ITEM_NAIVE_MINT] = ITEM_TYPE_MINT,
    [ITEM_SERIOUS_MINT] = ITEM_TYPE_MINT,

    [ITEM_MACHO_BRACE] = ITEM_TYPE_STAT_BOOST_HELD_ITEM,

    [ITEM_SUN_STONE] = ITEM_TYPE_EVOLUTION_STONE,
    [ITEM_MOON_STONE] = ITEM_TYPE_EVOLUTION_STONE,
    [ITEM_FIRE_STONE] = ITEM_TYPE_EVOLUTION_STONE,
    [ITEM_THUNDER_STONE] = ITEM_TYPE_EVOLUTION_STONE,
    [ITEM_WATER_STONE] = ITEM_TYPE_EVOLUTION_STONE,
    [ITEM_LEAF_STONE] = ITEM_TYPE_EVOLUTION_STONE,

    [ITEM_KINGS_ROCK] = ITEM_TYPE_EVOLUTION_ITEM,
    [ITEM_DEEP_SEA_TOOTH] = ITEM_TYPE_EVOLUTION_ITEM,
    [ITEM_DEEP_SEA_SCALE] = ITEM_TYPE_EVOLUTION_ITEM,
    [ITEM_EVERSTONE] = ITEM_TYPE_EVOLUTION_ITEM,
    [ITEM_METAL_COAT] = ITEM_TYPE_EVOLUTION_ITEM,
    [ITEM_DRAGON_SCALE] = ITEM_TYPE_EVOLUTION_ITEM,
    [ITEM_UP_GRADE] = ITEM_TYPE_EVOLUTION_ITEM,

    [ITEM_GUARD_SPEC] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_DIRE_HIT] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_X_ATTACK] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_X_DEFEND] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_X_SPEED] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_X_ACCURACY] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_X_SPECIAL] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_X_SP_DEF] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_POKE_DOLL] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_FLUFFY_TAIL] = ITEM_TYPE_BATTLE_ITEM,

    [ITEM_BRIGHT_POWDER] = ITEM_TYPE_HELD_ITEM,
    [ITEM_WHITE_HERB] = ITEM_TYPE_HELD_ITEM,
    [ITEM_EXP_SHARE] = ITEM_TYPE_HELD_ITEM,
    [ITEM_QUICK_CLAW] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SOOTHE_BELL] = ITEM_TYPE_HELD_ITEM,
    [ITEM_MENTAL_HERB] = ITEM_TYPE_HELD_ITEM,
    [ITEM_CHOICE_BAND] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SILVER_POWDER] = ITEM_TYPE_HELD_ITEM,
    [ITEM_AMULET_COIN] = ITEM_TYPE_HELD_ITEM,
    [ITEM_CLEANSE_TAG] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SOUL_DEW] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SMOKE_BALL] = ITEM_TYPE_HELD_ITEM,
    [ITEM_FOCUS_BAND] = ITEM_TYPE_HELD_ITEM,
    [ITEM_LUCKY_EGG] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SCOPE_LENS] = ITEM_TYPE_HELD_ITEM,
    [ITEM_LEFTOVERS] = ITEM_TYPE_HELD_ITEM,
    [ITEM_LIGHT_BALL] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SOFT_SAND] = ITEM_TYPE_HELD_ITEM,
    [ITEM_HARD_STONE] = ITEM_TYPE_HELD_ITEM,
    [ITEM_MIRACLE_SEED] = ITEM_TYPE_HELD_ITEM,
    [ITEM_BLACK_GLASSES] = ITEM_TYPE_HELD_ITEM,
    [ITEM_BLACK_BELT] = ITEM_TYPE_HELD_ITEM,
    [ITEM_MAGNET] = ITEM_TYPE_HELD_ITEM,
    [ITEM_MYSTIC_WATER] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SHARP_BEAK] = ITEM_TYPE_HELD_ITEM,
    [ITEM_POISON_BARB] = ITEM_TYPE_HELD_ITEM,
    [ITEM_NEVER_MELT_ICE] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SPELL_TAG] = ITEM_TYPE_HELD_ITEM,
    [ITEM_TWISTED_SPOON] = ITEM_TYPE_HELD_ITEM,
    [ITEM_CHARCOAL] = ITEM_TYPE_HELD_ITEM,
    [ITEM_DRAGON_FANG] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SILK_SCARF] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SHELL_BELL] = ITEM_TYPE_HELD_ITEM,
    [ITEM_LUCKY_PUNCH] = ITEM_TYPE_HELD_ITEM,
    [ITEM_METAL_POWDER] = ITEM_TYPE_HELD_ITEM,
    [ITEM_THICK_CLUB] = ITEM_TYPE_HELD_ITEM,
    [ITEM_STICK] = ITEM_TYPE_HELD_ITEM,

    [ITEM_RED_SCARF] = ITEM_TYPE_HELD_ITEM,
    [ITEM_BLUE_SCARF] = ITEM_TYPE_HELD_ITEM,
    [ITEM_PINK_SCARF] = ITEM_TYPE_HELD_ITEM,
    [ITEM_GREEN_SCARF] = ITEM_TYPE_HELD_ITEM,
    [ITEM_YELLOW_SCARF] = ITEM_TYPE_HELD_ITEM,

    [ITEM_SEA_INCENSE] = ITEM_TYPE_INCENSE,
    [ITEM_LAX_INCENSE] = ITEM_TYPE_INCENSE,

    [ITEM_RED_ORB] = ITEM_TYPE_MEGA_STONE,
    [ITEM_BLUE_ORB] = ITEM_TYPE_MEGA_STONE,

    [ITEM_BLUE_FLUTE] = ITEM_TYPE_FLUTE,
    [ITEM_YELLOW_FLUTE] = ITEM_TYPE_FLUTE,
    [ITEM_RED_FLUTE] = ITEM_TYPE_FLUTE,

    [ITEM_SHOAL_SALT] = ITEM_TYPE_SELLABLE,
    [ITEM_SHOAL_SHELL] = ITEM_TYPE_SELLABLE,
    [ITEM_TINY_MUSHROOM] = ITEM_TYPE_SELLABLE,
    [ITEM_BIG_MUSHROOM] = ITEM_TYPE_SELLABLE,
    [ITEM_PEARL] = ITEM_TYPE_SELLABLE,
    [ITEM_BIG_PEARL] = ITEM_TYPE_SELLABLE,
    [ITEM_STARDUST] = ITEM_TYPE_SELLABLE,
    [ITEM_STAR_PIECE] = ITEM_TYPE_SELLABLE,
    [ITEM_NUGGET] = ITEM_TYPE_SELLABLE,

    [ITEM_RED_SHARD] = ITEM_TYPE_SHARD,
    [ITEM_BLUE_SHARD] = ITEM_TYPE_SHARD,
    [ITEM_YELLOW_SHARD] = ITEM_TYPE_SHARD,
    [ITEM_GREEN_SHARD] = ITEM_TYPE_SHARD,

    [ITEM_HELIX_FOSSIL] = ITEM_TYPE_FOSSIL,
    [ITEM_DOME_FOSSIL] = ITEM_TYPE_FOSSIL,
    [ITEM_OLD_AMBER] = ITEM_TYPE_FOSSIL,

    [ITEM_ORANGE_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_HARBOR_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_GLITTER_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_MECH_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_WOOD_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_WAVE_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_BEAD_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_SHADOW_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_TROPIC_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_DREAM_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_FAB_MAIL] = ITEM_TYPE_MAIL,
    [ITEM_RETRO_MAIL] = ITEM_TYPE_MAIL,

    [ITEM_ORAN_BERRY]   = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_SITRUS_BERRY] = ITEM_TYPE_HEALTH_RECOVERY,

    [ITEM_FIGY_BERRY]   = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_WIKI_BERRY]   = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_MAGO_BERRY]   = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_AGUAV_BERRY]  = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_IAPAPA_BERRY] = ITEM_TYPE_HEALTH_RECOVERY,
    [ITEM_RAZZ_BERRY]   = ITEM_TYPE_HEALTH_RECOVERY,

    [ITEM_CHERI_BERRY]  = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_CHESTO_BERRY] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_PECHA_BERRY]  = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_RAWST_BERRY]  = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_ASPEAR_BERRY] = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_LEPPA_BERRY]  = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_LUM_BERRY]    = ITEM_TYPE_STATUS_RECOVERY,
    [ITEM_PERSIM_BERRY] = ITEM_TYPE_BATTLE_ITEM,

    [ITEM_BLUK_BERRY]   = ITEM_TYPE_RELIC,
    [ITEM_WEPEAR_BERRY] = ITEM_TYPE_RELIC,
    [ITEM_CORNN_BERRY]  = ITEM_TYPE_RELIC,
    [ITEM_MAGOST_BERRY] = ITEM_TYPE_RELIC,
    [ITEM_RABUTA_BERRY] = ITEM_TYPE_RELIC,
    [ITEM_NOMEL_BERRY]  = ITEM_TYPE_RELIC,
    [ITEM_SPELON_BERRY] = ITEM_TYPE_RELIC,
    [ITEM_PAMTRE_BERRY] = ITEM_TYPE_RELIC,
    [ITEM_DURIN_BERRY]  = ITEM_TYPE_RELIC,
    [ITEM_BELUE_BERRY]  = ITEM_TYPE_RELIC,

    [ITEM_NANAB_BERRY]  = ITEM_TYPE_RELIC,
    [ITEM_PINAP_BERRY]  = ITEM_TYPE_RELIC,

    [ITEM_POMEG_BERRY] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_KELPSY_BERRY] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_QUALOT_BERRY] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_HONDEW_BERRY] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_GREPA_BERRY] = ITEM_TYPE_STAT_BOOST_DRINK,
    [ITEM_TAMATO_BERRY] = ITEM_TYPE_STAT_BOOST_DRINK,

    [ITEM_CHILAN_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_OCCA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_PASSHO_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_WACAN_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_RINDO_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_YACHE_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_CHOPLE_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_KEBIA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SHUCA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_COBA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_PAYAPA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_TANGA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_CHARTI_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_KASIB_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_HABAN_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_COLBUR_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_BABIRI_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_ROSELI_BERRY] = ITEM_TYPE_HELD_ITEM,

    [ITEM_LIECHI_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_GANLON_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_SALAC_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_PETAYA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_APICOT_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_LANSAT_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_STARF_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_ENIGMA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_MICLE_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_CUSTAP_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_JABOCA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_ROWAP_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_KEE_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_MARANGA_BERRY] = ITEM_TYPE_HELD_ITEM,
    [ITEM_ENIGMA_BERRY_E_READER] = ITEM_TYPE_RELIC,

    [ITEM_ABILITY_SHIELD]   = ITEM_TYPE_HELD_ITEM,
    [ITEM_ADAMANT_CRYSTAL]  = ITEM_TYPE_HELD_ITEM,
    [ITEM_BOOSTER_ENERGY]   = ITEM_TYPE_HELD_ITEM,
    [ITEM_CHOICE_DUMPLING]  = ITEM_TYPE_HELD_ITEM,
    [ITEM_CLEAR_AMULET]     = ITEM_TYPE_HELD_ITEM,
    [ITEM_CORNERSTONE_MASK] = ITEM_TYPE_HELD_ITEM,
    [ITEM_WELLSPRING_MASK]  = ITEM_TYPE_HELD_ITEM,
    [ITEM_HEARTHFLAME_MASK] = ITEM_TYPE_HELD_ITEM,
    [ITEM_COVERT_CLOAK]     = ITEM_TYPE_HELD_ITEM,
    [ITEM_FAIRY_FEATHER]    = ITEM_TYPE_HELD_ITEM,
    [ITEM_GRISEOUS_CORE]    = ITEM_TYPE_HELD_ITEM,
    [ITEM_LOADED_DICE]      = ITEM_TYPE_HELD_ITEM,
    [ITEM_MIRROR_HERB]      = ITEM_TYPE_HELD_ITEM,
    [ITEM_TWICE_SPICED_RADISH]   = ITEM_TYPE_HELD_ITEM,
    
    [ITEM_AUX_POWER] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_AUX_POWERGUARD] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_AUX_GUARD] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_AUX_EVASION] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_BERSERK_GENE] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_POKE_TOY] = ITEM_TYPE_BATTLE_ITEM,
    [ITEM_SWAP_SNACK]   = ITEM_TYPE_BATTLE_ITEM,

    #ifdef ITEM_EXPANSION
        [ITEM_HONEY] = ITEM_TYPE_STATUS_RECOVERY,
        [ITEM_BIG_MALASADA] = ITEM_TYPE_STATUS_RECOVERY,
        [ITEM_CASTELIACONE] = ITEM_TYPE_STATUS_RECOVERY,
        [ITEM_LUMIOSE_GALETTE] = ITEM_TYPE_STATUS_RECOVERY,
        [ITEM_RAGE_CANDY_BAR] = ITEM_TYPE_STATUS_RECOVERY,
        [ITEM_SHALOUR_SABLE] = ITEM_TYPE_STATUS_RECOVERY,
        [ITEM_OLD_GATEAU] = ITEM_TYPE_STATUS_RECOVERY,
        [ITEM_HEAL_POWDER] = ITEM_TYPE_STATUS_RECOVERY,

        [ITEM_SWEET_HEART] = ITEM_TYPE_HEALTH_RECOVERY,

        [ITEM_ADAMANT_ORB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_LUSTROUS_ORB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_GRISEOUS_ORB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_EXPERT_BELT] = ITEM_TYPE_HELD_ITEM,
        [ITEM_POWER_HERB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_WIDE_LENS] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ZOOM_LENS] = ITEM_TYPE_HELD_ITEM,
        [ITEM_DESTINY_KNOT] = ITEM_TYPE_HELD_ITEM,
        [ITEM_SMOOTH_ROCK] = ITEM_TYPE_HELD_ITEM,
        [ITEM_DAMP_ROCK] = ITEM_TYPE_HELD_ITEM,
        [ITEM_HEAT_ROCK] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ICY_ROCK] = ITEM_TYPE_HELD_ITEM,
        [ITEM_BIG_ROOT] = ITEM_TYPE_HELD_ITEM,
        [ITEM_LIGHT_CLAY] = ITEM_TYPE_HELD_ITEM,
        [ITEM_SAFETY_GOGGLES] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ROCKY_HELMET] = ITEM_TYPE_HELD_ITEM,
        [ITEM_WEAKNESS_POLICY] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ASSAULT_VEST] = ITEM_TYPE_HELD_ITEM,
        [ITEM_EVIOLITE] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ABSORB_BULB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_AIR_BALLOON] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ADRENALINE_ORB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_BINDING_BAND] = ITEM_TYPE_HELD_ITEM,
        [ITEM_CELL_BATTERY] = ITEM_TYPE_HELD_ITEM,
        [ITEM_EJECT_BUTTON] = ITEM_TYPE_HELD_ITEM,
        [ITEM_FLOAT_STONE] = ITEM_TYPE_HELD_ITEM,
        [ITEM_FOCUS_SASH] = ITEM_TYPE_HELD_ITEM,
        [ITEM_GRIP_CLAW] = ITEM_TYPE_HELD_ITEM,
        [ITEM_IRON_BALL] = ITEM_TYPE_HELD_ITEM,
        [ITEM_LAGGING_TAIL] = ITEM_TYPE_HELD_ITEM,
        [ITEM_LUMINOUS_MOSS] = ITEM_TYPE_HELD_ITEM,
        [ITEM_QUICK_POWDER] = ITEM_TYPE_HELD_ITEM,
        [ITEM_METRONOME] = ITEM_TYPE_HELD_ITEM,
        [ITEM_MUSCLE_BAND] = ITEM_TYPE_HELD_ITEM,
        [ITEM_PROTECTIVE_PADS] = ITEM_TYPE_HELD_ITEM,
        [ITEM_RED_CARD] = ITEM_TYPE_HELD_ITEM,
        [ITEM_RING_TARGET] = ITEM_TYPE_HELD_ITEM,
        [ITEM_SHED_SHELL] = ITEM_TYPE_HELD_ITEM,
        [ITEM_SNOWBALL] = ITEM_TYPE_HELD_ITEM,
        [ITEM_STICKY_BARB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_TERRAIN_EXTENDER] = ITEM_TYPE_HELD_ITEM,
        [ITEM_WISE_GLASSES] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ELECTRIC_SEED] = ITEM_TYPE_HELD_ITEM,
        [ITEM_GRASSY_SEED] = ITEM_TYPE_HELD_ITEM,
        [ITEM_MISTY_SEED] = ITEM_TYPE_HELD_ITEM,
        [ITEM_PSYCHIC_SEED] = ITEM_TYPE_HELD_ITEM,
        [ITEM_LIFE_ORB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_TOXIC_ORB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_FLAME_ORB] = ITEM_TYPE_HELD_ITEM,
        [ITEM_BLACK_SLUDGE] = ITEM_TYPE_HELD_ITEM,
        [ITEM_CHOICE_SPECS] = ITEM_TYPE_HELD_ITEM,
        [ITEM_CHOICE_SCARF] = ITEM_TYPE_HELD_ITEM,
        [ITEM_EJECT_PACK] = ITEM_TYPE_HELD_ITEM,
        [ITEM_ROOM_SERVICE] = ITEM_TYPE_HELD_ITEM,
        [ITEM_BLUNDER_POLICY] = ITEM_TYPE_HELD_ITEM,
        [ITEM_HEAVY_DUTY_BOOTS] = ITEM_TYPE_HELD_ITEM,
        [ITEM_UTILITY_UMBRELLA] = ITEM_TYPE_HELD_ITEM,
        [ITEM_THROAT_SPRAY] = ITEM_TYPE_HELD_ITEM,
        [ITEM_FIST_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_SKY_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_TOXIC_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_EARTH_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_STONE_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_INSECT_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_SPOOKY_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_IRON_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_FLAME_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_SPLASH_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_MEADOW_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_ZAP_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_MIND_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_ICICLE_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_DRACO_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_DREAD_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_PIXIE_PLATE] = ITEM_TYPE_PLATE,
        [ITEM_FIGHTING_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_FLYING_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_POISON_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_GROUND_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_ROCK_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_BUG_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_GHOST_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_STEEL_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_FIRE_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_WATER_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_GRASS_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_ELECTRIC_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_PSYCHIC_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_ICE_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_DRAGON_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_DARK_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_FAIRY_MEMORY] = ITEM_TYPE_MEMORY,
        [ITEM_BURN_DRIVE] = ITEM_TYPE_DRIVE,
        [ITEM_DOUSE_DRIVE] = ITEM_TYPE_DRIVE,
        [ITEM_SHOCK_DRIVE] = ITEM_TYPE_DRIVE,
        [ITEM_CHILL_DRIVE] = ITEM_TYPE_DRIVE,
        [ITEM_NORMAL_GEM] = ITEM_TYPE_GEM,
        [ITEM_FIGHTING_GEM] = ITEM_TYPE_GEM,
        [ITEM_FLYING_GEM] = ITEM_TYPE_GEM,
        [ITEM_POISON_GEM] = ITEM_TYPE_GEM,
        [ITEM_GROUND_GEM] = ITEM_TYPE_GEM,
        [ITEM_ROCK_GEM] = ITEM_TYPE_GEM,
        [ITEM_BUG_GEM] = ITEM_TYPE_GEM,
        [ITEM_GHOST_GEM] = ITEM_TYPE_GEM,
        [ITEM_STEEL_GEM] = ITEM_TYPE_GEM,
        [ITEM_FIRE_GEM] = ITEM_TYPE_GEM,
        [ITEM_WATER_GEM] = ITEM_TYPE_GEM,
        [ITEM_GRASS_GEM] = ITEM_TYPE_GEM,
        [ITEM_ELECTRIC_GEM] = ITEM_TYPE_GEM,
        [ITEM_PSYCHIC_GEM] = ITEM_TYPE_GEM,
        [ITEM_ICE_GEM] = ITEM_TYPE_GEM,
        [ITEM_DRAGON_GEM] = ITEM_TYPE_GEM,
        [ITEM_DARK_GEM] = ITEM_TYPE_GEM,
        [ITEM_FAIRY_GEM] = ITEM_TYPE_GEM,

        [ITEM_LUCK_INCENSE] = ITEM_TYPE_INCENSE,
        [ITEM_FULL_INCENSE] = ITEM_TYPE_INCENSE,
        [ITEM_ODD_INCENSE] = ITEM_TYPE_INCENSE,
        [ITEM_PURE_INCENSE] = ITEM_TYPE_INCENSE,
        [ITEM_ROCK_INCENSE] = ITEM_TYPE_INCENSE,
        [ITEM_ROSE_INCENSE] = ITEM_TYPE_INCENSE,
        [ITEM_WAVE_INCENSE] = ITEM_TYPE_INCENSE,

        [ITEM_VENUSAURITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_CHARIZARDITE_X] = ITEM_TYPE_MEGA_STONE,
        [ITEM_CHARIZARDITE_Y] = ITEM_TYPE_MEGA_STONE,
        [ITEM_BLASTOISINITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_BEEDRILLITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_PIDGEOTITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_ALAKAZITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_SLOWBRONITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_GENGARITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_KANGASKHANITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_PINSIRITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_GYARADOSITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_AERODACTYLITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_MEWTWONITE_X] = ITEM_TYPE_MEGA_STONE,
        [ITEM_MEWTWONITE_Y] = ITEM_TYPE_MEGA_STONE,
        [ITEM_AMPHAROSITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_STEELIXITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_SCIZORITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_HERACRONITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_HOUNDOOMINITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_TYRANITARITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_SCEPTILITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_BLAZIKENITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_SWAMPERTITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_GARDEVOIRITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_SABLENITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_MAWILITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_AGGRONITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_MEDICHAMITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_MANECTITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_SHARPEDONITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_CAMERUPTITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_ALTARIANITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_BANETTITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_ABSOLITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_GLALITITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_SALAMENCITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_METAGROSSITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_LATIASITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_LATIOSITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_LOPUNNITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_GARCHOMPITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_LUCARIONITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_ABOMASITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_GALLADITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_AUDINITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_DIANCITE] = ITEM_TYPE_MEGA_STONE,
        [ITEM_ULTRANECROZIUM_Z] =  ITEM_TYPE_MEGA_STONE,

        [ITEM_NORMALIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_FIGHTINIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_FLYINIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_POISONIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_GROUNDIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_ROCKIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_BUGINIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_GHOSTIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_STEELIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_FIRIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_WATERIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_GRASSIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_ELECTRIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_PSYCHIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_ICIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_DRAGONIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_DARKINIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_FAIRIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_ALORAICHIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_DECIDIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_EEVIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_INCINIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_KOMMONIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_LUNALIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_LYCANIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_MARSHADIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_MEWNIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_MIMIKIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_PIKANIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_PIKASHUNIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_PRIMARIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_SNORLIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_SOLGANIUM_Z] = ITEM_TYPE_Z_CRYSTAL,
        [ITEM_TAPUNIUM_Z] = ITEM_TYPE_Z_CRYSTAL,

        [ITEM_RED_NECTAR] = ITEM_TYPE_NECTAR,
        [ITEM_YELLOW_NECTAR] = ITEM_TYPE_NECTAR,
        [ITEM_PINK_NECTAR] = ITEM_TYPE_NECTAR,
        [ITEM_PURPLE_NECTAR] = ITEM_TYPE_NECTAR,

        [ITEM_ABILITY_PATCH]   = ITEM_TYPE_STAT_BOOST_DRINK,
        [ITEM_ABILITY_CAPSULE] = ITEM_TYPE_STAT_BOOST_DRINK,
        [ITEM_HEALTH_FEATHER] = ITEM_TYPE_STAT_BOOST_FEATHER,
        [ITEM_MUSCLE_FEATHER] = ITEM_TYPE_STAT_BOOST_FEATHER,
        [ITEM_RESIST_FEATHER] = ITEM_TYPE_STAT_BOOST_FEATHER,
        [ITEM_GENIUS_FEATHER] = ITEM_TYPE_STAT_BOOST_FEATHER,
        [ITEM_CLEVER_FEATHER] = ITEM_TYPE_STAT_BOOST_FEATHER,
        [ITEM_SWIFT_FEATHER] = ITEM_TYPE_STAT_BOOST_FEATHER,
        [ITEM_PRETTY_FEATHER] = ITEM_TYPE_STAT_BOOST_FEATHER,

        [ITEM_POWER_BRACER] = ITEM_TYPE_STAT_BOOST_HELD_ITEM,
        [ITEM_POWER_BELT] = ITEM_TYPE_STAT_BOOST_HELD_ITEM,
        [ITEM_POWER_LENS] = ITEM_TYPE_STAT_BOOST_HELD_ITEM,
        [ITEM_POWER_BAND] = ITEM_TYPE_STAT_BOOST_HELD_ITEM,
        [ITEM_POWER_ANKLET] = ITEM_TYPE_STAT_BOOST_HELD_ITEM,
        [ITEM_POWER_WEIGHT] = ITEM_TYPE_STAT_BOOST_HELD_ITEM,

        [ITEM_DAWN_STONE] = ITEM_TYPE_EVOLUTION_STONE,
        [ITEM_DUSK_STONE] = ITEM_TYPE_EVOLUTION_STONE,
        [ITEM_SHINY_STONE] = ITEM_TYPE_EVOLUTION_STONE,
        [ITEM_ICE_STONE] = ITEM_TYPE_EVOLUTION_STONE,
        [ITEM_OVAL_STONE] = ITEM_TYPE_EVOLUTION_STONE,

        [ITEM_PROTECTOR] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_MAGMARIZER] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_PRISM_SCALE] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_SACHET] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_WHIPPED_DREAM] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_RAZOR_CLAW] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_RAZOR_FANG] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_REAPER_CLOTH] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_DUBIOUS_DISC] = ITEM_TYPE_EVOLUTION_ITEM,
        [ITEM_ELECTIRIZER] = ITEM_TYPE_EVOLUTION_ITEM,

        [ITEM_RARE_BONE] = ITEM_TYPE_SELLABLE,
        [ITEM_PEARL_STRING] = ITEM_TYPE_SELLABLE,
        [ITEM_BIG_NUGGET] = ITEM_TYPE_SELLABLE,
        [ITEM_COMET_SHARD] = ITEM_TYPE_SELLABLE,
        [ITEM_BALM_MUSHROOM] = ITEM_TYPE_SELLABLE,
        [ITEM_ODD_KEYSTONE] = ITEM_TYPE_SELLABLE,
        [ITEM_BOTTLE_CAP] = ITEM_TYPE_SELLABLE,
        [ITEM_GOLD_BOTTLE_CAP] = ITEM_TYPE_SELLABLE,
        [ITEM_WISHING_PIECE] = ITEM_TYPE_SELLABLE,
        [ITEM_RELIC_COPPER] = ITEM_TYPE_RELIC,
        [ITEM_RELIC_SILVER] = ITEM_TYPE_RELIC,
        [ITEM_RELIC_GOLD] = ITEM_TYPE_RELIC,
        [ITEM_RELIC_VASE] = ITEM_TYPE_RELIC,
        [ITEM_RELIC_BAND] = ITEM_TYPE_RELIC,
        [ITEM_RELIC_STATUE] = ITEM_TYPE_RELIC,
        [ITEM_RELIC_CROWN] = ITEM_TYPE_RELIC,

        [ITEM_ROOT_FOSSIL] = ITEM_TYPE_FOSSIL,
        [ITEM_CLAW_FOSSIL] = ITEM_TYPE_FOSSIL,
        [ITEM_SKULL_FOSSIL] = ITEM_TYPE_FOSSIL,
        [ITEM_ARMOR_FOSSIL] = ITEM_TYPE_FOSSIL,
        [ITEM_COVER_FOSSIL] = ITEM_TYPE_FOSSIL,
        [ITEM_PLUME_FOSSIL] = ITEM_TYPE_FOSSIL,
        [ITEM_JAW_FOSSIL] = ITEM_TYPE_FOSSIL,
        [ITEM_SAIL_FOSSIL] = ITEM_TYPE_FOSSIL,
    #endif

    [ITEM_MEGA_RING] = ITEM_TYPE_UNUSABLE_KEY_ITEM,
    [ITEM_GO_GOGGLES] = ITEM_TYPE_UNUSABLE_KEY_ITEM,
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
        return;
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

    name1 = GetItemName(item1);
    name2 = GetItemName(item2);

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
    u16 quantity1 = itemSlot1->quantity;
    u16 quantity2 = itemSlot2->quantity;

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
    //Null items go last
    u8 type1 = (itemSlot1->itemId == ITEM_NONE) ? 0xFF : sItemsByType[itemSlot1->itemId];
    u8 type2 = (itemSlot2->itemId == ITEM_NONE) ? 0xFF : sItemsByType[itemSlot2->itemId];

    if (type1 < type2)
        return -1;
    else if (type1 > type2)
        return 1;

    return CompareItemsAlphabetically(itemSlot1, itemSlot2); //Items are of same type so sort alphabetically
}

static void TrySortBag(void){
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
static const u8 sInventorySelectorCursorMove_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/selector_move_item.4bpp");

static const u8 sInventoryPocketIcon0_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/pocket_0.4bpp");
static const u8 sInventoryPocketIcon1_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/pocket_1.4bpp");

static const u8 gInventoryHeldItem_Gfx[]       = INCBIN_U8("graphics/ui_menus/inventory/icons/held_item.4bpp");
static const u8 gInventoryRegisterArrows_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/icons/register_arrows.4bpp");

static const u8 gInventoryStatus_Burn_Gfx[]      = INCBIN_U8("graphics/ui_menus/inventory/icons/status_burn.4bpp");
static const u8 gInventoryStatus_Poison_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/icons/status_poison.4bpp");
static const u8 gInventoryStatus_Freeze_Gfx[]    = INCBIN_U8("graphics/ui_menus/inventory/icons/status_freeze.4bpp");
static const u8 gInventoryStatus_Paralysis_Gfx[] = INCBIN_U8("graphics/ui_menus/inventory/icons/status_paralysis.4bpp");
static const u8 gInventoryStatus_Sleep_Gfx[]     = INCBIN_U8("graphics/ui_menus/inventory/icons/status_sleep.4bpp");

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

static void StartMenu_DisplayPartyIcons(void)
{
    u8 i;
    u8 x = 2;
    u8 y = 3;
    u8 y2 = 0;

    for(i = 0; i < PARTY_SIZE; i++){
        if(GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) != SPECIES_NONE)
            ShowSpeciesIcon(i, (x * 8), (y * 8) + y2);

        if(i % 2 == 0)
            x = x + 4;
        else{
            y = y + 3;
            y2 = y2 + 2;
            x = 2;
        }
    }
}



static bool8 canMonLearnCurrentTMHM(u8 partyIndex){
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;

    if(pocketId != POCKET_TM_HM){
        return TRUE;
    }
    else{
        struct Pokemon *mon = &gPlayerParty[partyIndex];
        u16 itemId = getCurrentSelectedItemIdx();
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
    {
        return ((GetMonData(mon, MON_DATA_HP)) * 100 / (GetMonData(mon,MON_DATA_MAX_HP)));
    }
    else
    {
        return ((GetMonData(mon, MON_DATA_FRIENDSHIP)) * 100 / (gSpeciesInfo[GetMonData(mon,MON_DATA_SPECIES)].eggCycles));
    }
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
    u8 SpriteID = 0xFF;
    u32 percent = GetHPEggCyclePercent(slot);
    u16 species = GetMonData(mon, MON_DATA_SPECIES_OR_EGG);
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY);
    u16 currentHP = GetMonData(mon, MON_DATA_HP);
    bool32 isEgg = (species == SPECIES_EGG);
    u32 currentStatus = GetAilmentFromStatus(GetMonData(&gPlayerParty[slot], MON_DATA_STATUS));
    u8 palette = LoadMonIconPaletteWithAilment(species, personality, currentStatus, currentHP, slot + MON_STARTING_PALETTE_NUM);

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
    return SpriteID;
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

static u8 CreateRegisteredItemIcon(u8 slot)
{
    u8 itemSpriteId = SPRITE_NONE;
    u8 tag = TAG_ITEM_INVENTORY_REGISTERED_ICON + slot;
    u8 *spriteId = &sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_REGISTERED_ITEM_UP + slot];
    u16 itemId = gSaveBlock3Ptr->InventoryData.registeredItem[slot];
    u8 x, y;

    FreeRegisteredItemIconSprite(slot);

    switch(slot){
        default:
        case INVENTORY_REGISTER_DIRECTION_UP:
            x = REGISTERED_ITEM_ICON_X_UP;
            y = REGISTERED_ITEM_ICON_Y_UP;
        break;
        case INVENTORY_REGISTER_DIRECTION_DOWN:
            x = REGISTERED_ITEM_ICON_X_DOWN;
            y = REGISTERED_ITEM_ICON_Y_DOWN;
        break;
        case INVENTORY_REGISTER_DIRECTION_LEFT:
            x = REGISTERED_ITEM_ICON_X_LEFT;
            y = REGISTERED_ITEM_ICON_Y_LEFT;
        break;
        case INVENTORY_REGISTER_DIRECTION_RIGHT:
            x = REGISTERED_ITEM_ICON_X_RIGHT;
            y = REGISTERED_ITEM_ICON_Y_RIGHT;
        break;
    }

    if (*spriteId == SPRITE_NONE && itemId != ITEM_NONE)
    {
        FreeSpriteTilesByTag(tag);
        FreeSpritePaletteByTag(tag);
        itemSpriteId = AddItemIconSprite(tag, tag, itemId);
        sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_REGISTERED_ITEM_UP + slot] = itemSpriteId;

        if (itemSpriteId != MAX_SPRITES)
        {
            *spriteId = itemSpriteId;
            gSprites[itemSpriteId].x2 = x;
            gSprites[itemSpriteId].y2 = y;
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

static const u8 *GetBarGfx(u32 percent)
{
    u32 modifiedPercent = percent / 10;

    const u8 *sStartMenu_HPBar_Fill_Gfx[] = {
        sStartMenu_HPBar_Fainted_Gfx,
        sStartMenu_HPBar_10_Percent_Gfx,
        sStartMenu_HPBar_20_Percent_Gfx,
        sStartMenu_HPBar_30_Percent_Gfx,
        sStartMenu_HPBar_40_Percent_Gfx,
        sStartMenu_HPBar_50_Percent_Gfx,
        sStartMenu_HPBar_60_Percent_Gfx,
        sStartMenu_HPBar_70_Percent_Gfx,
        sStartMenu_HPBar_80_Percent_Gfx,
        sStartMenu_HPBar_90_Percent_Gfx,
        sStartMenu_HPBar_Full_Gfx,
    };

    if (percent == 0)
        return sStartMenu_HPBar_Fill_Gfx[percent];

    if (modifiedPercent == 0)
        return sStartMenu_HPBar_Fill_Gfx[1];

    return sStartMenu_HPBar_Fill_Gfx[modifiedPercent];
}

static const u8 sInventory_PocketOptions_Field[NUM_ITEMS_TYPES][NUM_INVENTORY_ITEM_OPTIONS] = {
    [ITEM_TYPE_FIELD_USE] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_REPEL] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Ultra Ball
    [ITEM_TYPE_POKE_BALL] = {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Mach Bike
    [ITEM_TYPE_KEY_ITEMS] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_REGISTER,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Flutes
    [ITEM_TYPE_FLUTE] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        #if DISABLE_REGISTER_NON_KEY_ITEMS != TRUE
            INVENTORY_ITEM_OPTION_REGISTER,
        #endif
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Oran Berry
    [ITEM_TYPE_HEALTH_RECOVERY] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        #if DISABLE_REGISTER_NON_KEY_ITEMS != TRUE
            INVENTORY_ITEM_OPTION_REGISTER,
        #endif
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Fire Stone
    [ITEM_TYPE_EVOLUTION_STONE] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        #if DISABLE_REGISTER_NON_KEY_ITEMS != TRUE
            INVENTORY_ITEM_OPTION_REGISTER,
        #endif
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Elixir
    [ITEM_TYPE_PP_RECOVERY] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        #if DISABLE_REGISTER_NON_KEY_ITEMS != TRUE
            INVENTORY_ITEM_OPTION_REGISTER,
        #endif
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Full Heal
    [ITEM_TYPE_STATUS_RECOVERY] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        #if DISABLE_REGISTER_NON_KEY_ITEMS != TRUE
            INVENTORY_ITEM_OPTION_REGISTER,
        #endif
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    // Generic TMHM
    [ITEM_TYPE_TMHM] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Blazikenite
    [ITEM_TYPE_MEGA_STONE] = {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Focus Sash
    [ITEM_TYPE_HELD_ITEM] = {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Poke Doll
    [ITEM_TYPE_BATTLE_ITEM] = {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Bugnium Z
    [ITEM_TYPE_Z_CRYSTAL] = {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Scanner
    [ITEM_TYPE_UNUSABLE_KEY_ITEM] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    // Magmarizer
    [ITEM_TYPE_EVOLUTION_ITEM] = {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    // Unusable Item
    [ITEM_TYPE_SELLABLE] = {
        INVENTORY_ITEM_OPTION_GIVE,
        INVENTORY_ITEM_OPTION_TOSS,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
};

static const u8 sInventory_PocketOptions_Battle[NUM_ITEMS_TYPES][NUM_INVENTORY_ITEM_OPTIONS] = {
    [ITEM_TYPE_FIELD_USE] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    [ITEM_TYPE_REPEL] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Ultra Ball
    [ITEM_TYPE_POKE_BALL] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Mach Bike
    [ITEM_TYPE_KEY_ITEMS] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Oran Berry
    [ITEM_TYPE_HEALTH_RECOVERY] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    // Water Stone
    [ITEM_TYPE_EVOLUTION_STONE] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Flutes
    [ITEM_TYPE_FLUTE] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Elixir
    [ITEM_TYPE_PP_RECOVERY] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Full Heal
    [ITEM_TYPE_STATUS_RECOVERY] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    // Generic TMHM
    [ITEM_TYPE_TMHM] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Blazikenite
    [ITEM_TYPE_MEGA_STONE] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Focus Sash
    [ITEM_TYPE_HELD_ITEM] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Poke Doll
    [ITEM_TYPE_BATTLE_ITEM] = {
        INVENTORY_ITEM_OPTION_USE,
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Bugnium Z
    [ITEM_TYPE_Z_CRYSTAL] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    //Scanner
    [ITEM_TYPE_UNUSABLE_KEY_ITEM] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    // Unusable Item
    [ITEM_TYPE_SELLABLE] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
    // Magmarizer
    [ITEM_TYPE_EVOLUTION_ITEM] = {
        INVENTORY_ITEM_OPTION_FAVORITE,
        INVENTORY_ITEM_OPTION_CANCEL,
    },
};

static const struct StringList sInventory_OptionStrings[NUM_INVENTORY_ITEM_OPTIONS] = {
    [INVENTORY_ITEM_OPTION_USE]      = { _("Use"),      },
    [INVENTORY_ITEM_OPTION_GIVE]     = { _("Give"),     },
    [INVENTORY_ITEM_OPTION_TOSS]     = { _("Toss"),     },
    [INVENTORY_ITEM_OPTION_FAVORITE] = { _("Favorite"), },
    [INVENTORY_ITEM_OPTION_REGISTER] = { _("Register"), },
    [INVENTORY_ITEM_OPTION_CANCEL]   = { _("Cancel"),   },
};

static const u8 sInventory_Option_Unfavorite[] = _("Unfavorite");

static u8 getNumInventoryOptions(u16 item){
    u8 i;

    for(i = 0; i < NUM_INVENTORY_ITEM_OPTIONS; i++){
        if(getItemOptionNum(item, i) == INVENTORY_ITEM_OPTION_CANCEL)
            return i + 1;
    }

    return NUM_INVENTORY_ITEM_OPTIONS;
}
static u8 getSelectedItemNumOptions(void){
    return getNumInventoryOptions(getCurrentSelectedItemIdx());
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

static const u8 sInventory_Exit[]      = _("Exit");
static const u8 sInventory_Exit_Desc[] = _("Close the Inventory");
static const u8 sInventory_Nothing[]   = _("---");
static const u8 sText_Item_Num[]       = _("x{STR_VAR_1}");

static const u8 sInventory_TM_Name[] = _("{STR_VAR_1} - {STR_VAR_2}");
static const u8 sInventory_TM_Desc[] = _("{STR_VAR_1} PWR\n{STR_VAR_2} ACC\n{STR_VAR_3} PP");

static const u8 sText_Help_Bar[]                    = _("{DPAD_LEFTRIGHT} Pockets {A_BUTTON} Pick {B_BUTTON} Return {SELECT_BUTTON} Move {START_BUTTON} Sort");
static const u8 sText_Help_Bar_Battle[]             = _("{DPAD_LEFTRIGHT} Pockets {A_BUTTON} Pick {B_BUTTON} Return");
static const u8 sText_Help_Bar_GiveItem[]           = _("{DPAD_LEFTRIGHT} Pockets {A_BUTTON} Pick {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Use[]                = _("{DPAD_UPDOWN} Options {A_BUTTON} Choose {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Move[]               = _("Move the {STR_VAR_1} where? {DPAD_UPDOWN} Move {A_BUTTON}{B_BUTTON} Confirm");
static const u8 sText_Help_Bar_Toss[]               = _("Toss how many? {A_BUTTON} Choose {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_Toss_Confirmation[]  = _("Are you sure you want to toss {STR_VAR_1} {STR_VAR_2}?");
static const u8 sText_Help_Bar_Cant_Move_Favorite[] = _("You can't move a favorite item {A_BUTTON}{B_BUTTON} Confirm");
static const u8 sText_Help_Bar_Cant_Use[]           = _("You can't use this item right now! {A_BUTTON}{B_BUTTON} Confirm");
static const u8 sText_Help_Bar_Cant_Toss[]          = _("You can't toss this item! {A_BUTTON}{B_BUTTON} Confirm");
static const u8 sText_Help_Bar_SortItemsHow[]       = _("Sort items how? {DPAD_UPDOWN} Move {A_BUTTON} Choose");
static const u8 sText_Help_Bar_RegisterHow[]        = _("Register to what direction? {DPAD_UPDOWN} Select {B_BUTTON} Cancel");
static const u8 sText_Help_Bar_ItemsSorted[]        = _("Items sorted by {STR_VAR_1}! {A_BUTTON}{B_BUTTON} Confirm");
static const u8 sText_Help_Bar_Used_Item[]          = _("{PLAYER} used the {STR_VAR_1} {A_BUTTON}{B_BUTTON} Confirm");

static u16 getCurrentSelectedItemIdx(void){
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

static u8 getItemType(u16 item){
    u8 itemPocket = gItemsInfo[item].pocket;
    u8 itemType   = sItemsByType[item];

    if(itemType == 0){
        switch(itemPocket){
            case POCKET_TM_HM:
                itemType = ITEM_TYPE_TMHM;
            break;
            case POCKET_POKE_BALLS:
                itemType = ITEM_TYPE_POKE_BALL;
            break;
            case POCKET_KEY_ITEMS:
                itemType = ITEM_TYPE_KEY_ITEMS;
            break;
            case POCKET_Z_CRYSTALS:
                itemType = ITEM_TYPE_Z_CRYSTAL;
            break;
            case POCKET_MEGA_STONES:
                itemType = ITEM_TYPE_MEGA_STONE;
            break;
        }
    }

    switch(itemType){
        case ITEM_TYPE_EVOLUTION_STONE:
        case ITEM_TYPE_STAT_BOOST_DRINK:
        case ITEM_TYPE_STAT_BOOST_FEATHER:
        case ITEM_TYPE_NECTAR:
        case ITEM_TYPE_MINT:
            itemType = ITEM_TYPE_EVOLUTION_STONE; //Usable outside but not in battle
        break;
        case ITEM_TYPE_HELD_ITEM:
        case ITEM_TYPE_GEM:
        case ITEM_TYPE_STAT_BOOST_HELD_ITEM:
        case ITEM_TYPE_SELLABLE:
        case ITEM_TYPE_RELIC:
        case ITEM_TYPE_FOSSIL:
        case ITEM_TYPE_INCENSE:
            itemType = ITEM_TYPE_HELD_ITEM; //Not usable but can be given
        break;
        case ITEM_TYPE_BATTLE_ITEM:
            itemType = ITEM_TYPE_BATTLE_ITEM; //Usable in battle but not outside Battle
        break;
    }

    return itemType;
}

static u8 getItemOptionNum(u16 item, u8 num){
    u8 itemType = getItemType(item);
    //u8 currentPocket = gSaveBlock3Ptr->InventoryData.pocketNum;
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
    return getItemOptionNum(getCurrentSelectedItemIdx(), num);
}
/*
//PSF TODO convert to sprite usage
static const struct OamData sInventoryCursor_OamData =
{
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
};

static const struct SpriteTemplate sInventoryCursor_SpriteTemplate =
{
    .tileTag = INVENTORY_TAG_CURSOR,
    .paletteTag = INVENTORY_TAG_PALETTE,
    .oam = &sInventoryCursor_OamData,
    .anims = (const union AnimCmd *const[])
    {
        [INVENTORY_CURSOR_OFF] = (const union AnimCmd[]){ ANIMCMD_FRAME(INVENTORY_CURSOR_OFF * 16), ANIMCMD_END },
        [INVENTORY_CURSOR_ON] = (const union AnimCmd[]){ ANIMCMD_FRAME(INVENTORY_CURSOR_ON * 16), ANIMCMD_END },
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Inventory_Cursor,
};

static void Inventory_PrintHeaderCursor(void)
{
}
*/

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
    AddTextPrinterParameterized4(INVENTORY_WINDOW_HEADER, font, x, y, letterSpacing, lineSpacing, sMenuWindowFontColors[INVENTORY_FONT_WHITE], TEXT_SKIP_DRAW, sInventory_TitleStrings[pocketId].string);
    Inventory_PrintHeaderCursor(pocketId);

    PutWindowTilemap(INVENTORY_WINDOW_HEADER);
    CopyWindowToVram(INVENTORY_WINDOW_HEADER ,COPYWIN_FULL);
}

static const u8* const sStatusIconGfxTable[] = 
{
    [AILMENT_NONE]   = NULL,
    [AILMENT_PSN]    = gInventoryStatus_Poison_Gfx,
    [AILMENT_PRZ]    = gInventoryStatus_Paralysis_Gfx,
    [AILMENT_SLP]    = gInventoryStatus_Sleep_Gfx,
    [AILMENT_FRZ]    = gInventoryStatus_Freeze_Gfx,
    [AILMENT_BRN]    = gInventoryStatus_Burn_Gfx,
    [AILMENT_PKRS]   = NULL,
    [AILMENT_FNT]    = NULL,
    [AILMENT_FRB]    = gInventoryStatus_Freeze_Gfx,
};

static void Inventory_PrintPartyDisplay_HeldItemStatus(void)
{
    for(u32 partyIndex = 0; partyIndex < PARTY_SIZE; partyIndex++)
    {
        u32 currentStatus = GetAilmentFromStatus(GetMonData(&gPlayerParty[partyIndex], MON_DATA_STATUS));
        u32 row = partyIndex / 2;
        u32 x = GFX_STATUS_MINUS_X + ((partyIndex % 2) * 32);
        u32 y = 8 + (row * 26);

        if(!IsMonNotEmpty(partyIndex))
            continue;

        if(GetMonData(&gPlayerParty[partyIndex], MON_DATA_HELD_ITEM) != ITEM_NONE)
            BlitBitmapToWindow(INVENTORY_WINDOW_PARTY_DISPLAY, gInventoryHeldItem_Gfx, x, y, 8, 8);

        if(currentStatus != AILMENT_NONE)
            BlitBitmapToWindow(INVENTORY_WINDOW_PARTY_DISPLAY, sStatusIconGfxTable[currentStatus], (x - GFX_STATUS_MINUS_X), y,8,8);

        BlitBitmapToWindow(INVENTORY_WINDOW_PARTY_DISPLAY, GetBarGfx(GetHPEggCyclePercent(partyIndex)), (x - GFX_HP_MINUS_X),(y + GFX_HP_PLUS_Y), 24, 8);
    }
}

static void Inventory_PrintPartyDisplay(void)
{
    FillWindowPixelBuffer(INVENTORY_WINDOW_PARTY_DISPLAY, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (shouldShowRegisteredItems())
        BlitBitmapToWindow(INVENTORY_WINDOW_PARTY_DISPLAY, gInventoryRegisterArrows_Gfx, 26, 29, INVENTORY_DPAD_WIDTH, INVENTORY_DPAD_HEIGHT);
    else
        Inventory_PrintPartyDisplay_HeldItemStatus();

    PutWindowTilemap(INVENTORY_WINDOW_PARTY_DISPLAY);
    CopyWindowToVram(INVENTORY_WINDOW_PARTY_DISPLAY ,COPYWIN_FULL);
}

static u32 Inventory_GetItemIdFromPocketIndex(u32 itemIndex, enum Pocket pocketId)
{
    struct BagPocket *pocket = &gBagPockets[pocketId];

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
    u32 buffer[] = {0,0,1,2,3};
    u32 y = (itemScreenListIndex * 16) + buffer[itemScreenListIndex];
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
    u32 buffer[] = {0,0,1,2,3};
    u32 y = (itemScreenListIndex * 16) + buffer[itemScreenListIndex];
    u32 itemNum = 0;
    u32 fontId = INVENTORY_FONT_LIST;
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
    u32 windowId = INVENTORY_WINDOW_ITEM_LIST;
    u32 itemListItemNameWidth = GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_WIDTH - 24;
    u32 inventoryPadding = GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_WIDTH;


    if(itemId != ITEM_NONE)
    {
        if(pocketId != POCKET_TM_HM)
        {
            CopyItemName(itemId, gStringVar1);
            AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sMenuWindowFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, gStringVar1);

            if(pocketId == POCKET_FAVORITE_ITEMS)
                itemNum = sMenuDataPtr->FavoritePocketItems[itemIndex][FAVORITE_ITEM_QUANTITY];
            else
                itemNum = CountTotalItemQuantityInBag(itemId);

            ConvertIntToDecimalStringN(gStringVar1, itemNum, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
            StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("x{STR_VAR_1}"));
            x = 4 + GetStringRightAlignXOffset(fontId,gStringVar4,itemListItemNameWidth);
            AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sMenuWindowFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, gStringVar4);

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
            AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sMenuWindowFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, gStringVar4);
        }
    }
    else 
    {
        if (Inventory_GetItemIdFromPocketIndex((itemIndex-1),pocketId) == ITEM_NONE)
            if (itemIndex != 0)
                return;

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sMenuWindowFontColors[INVENTORY_FONT_OUTLINE_COLOR], TEXT_SKIP_DRAW, sInventory_Exit);
    }
}

static void Inventory_PrintItemList(void)
{
    u16 i, x, x2, y, y2;
    u32 font = FONT_NARROW;
    enum Pocket pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u32 moveNum;
    u32 numitems = sMenuDataPtr->numItems[pocketId];

    FillWindowPixelBuffer(INVENTORY_WINDOW_ITEM_LIST, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    x  = 10;
    y  = 2;
    y2 = 0;
    x2 = 2;

    for(i = 0; i < INVENTORY_MAX_ITEMS_SHOWN; i++)
    {
        u32 itemIdx = gSaveBlock3Ptr->InventoryData.yFirstItem + i;
        u32 itemId = Inventory_GetItemIdFromPocketIndex(itemIdx,pocketId);

        Inventory_TryPrintFavoriteIcon(pocketId,itemIdx,i);
        Inventory_TryPrintListCursor(pocketId,i,itemId,itemIdx,numitems);
        Inventory_PrintItems(pocketId, itemId, itemIdx,i);

        y = y + 2;
        y2 = y2 + 1;
    }

    if(gSaveBlock3Ptr->InventoryData.itemIdx < numitems - 1)
    {
        u16 itemId = getCurrentSelectedItemIdx();
        if(pocketId != POCKET_TM_HM)
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
            AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2 - 1, (y * 8) + y2, -4, -4, sMenuWindowFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar4);
            StringCopy(gStringVar1, gMovesInfo[moveNum].description);
        }
    }
    else 
{
        StringCopy(gStringVar1, sInventory_Exit_Desc);
        FreeItemIconSprite();
    }
    PutWindowTilemap(INVENTORY_WINDOW_ITEM_LIST);
    CopyWindowToVram(INVENTORY_WINDOW_ITEM_LIST ,COPYWIN_FULL);
}

static void Inventory_PrintDesc(void)
{
    u16 i, j, x, x2, y, y2;
    u8 font = FONT_NARROW;
    u8 numPocketOptions = getSelectedItemNumOptions();

    FillWindowPixelBuffer(INVENTORY_WINDOW_DESC, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    // Item Description
    x  = 6;
    x2 = 4;
    y  = 13;
    y2 = 0;
    AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2, (y * 8) + y2, -4, -4, sMenuWindowFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar1);

    //Pick Menu
    switch(sMenuDataPtr->currentSelectMode){
        case INVENTORY_MODE_USE_OPTIONS:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < numPocketOptions; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((numPocketOptions - (i + 1)) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

                y = y - 2;
            }

            y = y + 2;
            //x++;
            x2 = 4;
            for(i = 0; i < numPocketOptions; i++){
                StringCopy(gStringVar1, sInventory_OptionStrings[getSelectedItemOptionNum(i)].string);

                if(getSelectedItemOptionNum(i) == INVENTORY_ITEM_OPTION_FAVORITE && isCurrentItemFavorite())
                    StringCopy(gStringVar1, sInventory_Option_Unfavorite);

                AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar1);
            }
            break;
        case INVENTORY_MODE_REORDER:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < NUM_SORT_OPTIONS; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((NUM_SORT_OPTIONS - (i + 1)) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

                y = y - 2;
            }

            y = y + 2;
            //x++;
            x2 = 4;
            for(i = 0; i < NUM_SORT_OPTIONS; i++){
                StringCopy(gStringVar1, sSortTypeStrings[i].string);
                AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar1);
            }
            break;
        case INVENTORY_MODE_REGISTER:
            /*x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS + 1; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((INVENTORY_REGISTER_NUM_DIRECTIONS - i) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

                y = y - 2;
            }

            y = y + 2;
            //x++;
            x2 = 4;
            for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS + 1; i++){
                StringCopy(gStringVar1, sDirectionStrings[i].string);
                AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar1);
            }*/
            break;
        case INVENTORY_MODE_TOSS_HOW_MANY:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            //for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
            //    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

            BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventorySelectorCursorToss_Gfx, (x * 8), (y * 8) + y2, 64, 16);

            ConvertIntToDecimalStringN(gStringVar1, sMenuDataPtr->numItemsToToss + 1, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
            x  = 23;
            x2 = GetStringCenterAlignXOffset(font, gStringVar1, (6 * 8));

            AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2, (y * 8) + y2, -4, -4, sMenuWindowFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar1);
            break;
        case INVENTORY_MODE_TOSS_CONFIRMATION:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < NUM_TOSS_CONFIRMATION_OPTIONS; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((NUM_TOSS_CONFIRMATION_OPTIONS - (i + 1)) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(INVENTORY_WINDOW_DESC, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

                y = y - 2;
            }

            y = y + 2;
            //x++;
            x2 = 4;
            for(i = 0; i < NUM_TOSS_CONFIRMATION_OPTIONS; i++){
                switch(i){
                    case 0:
                        StringCopy(gStringVar1, sText_Toss_Yes);
                        break;
                    case 1:
                        StringCopy(gStringVar1, sText_Toss_No);
                        break;
                }

                AddTextPrinterParameterized4(INVENTORY_WINDOW_DESC, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[INVENTORY_FONT_BLACK], 0xFF, gStringVar1);
            }
            break;
    }
    PutWindowTilemap(INVENTORY_WINDOW_DESC);
    CopyWindowToVram(INVENTORY_WINDOW_DESC,COPYWIN_FULL);
}

static void Inventory_PrintFooter(void)
{
    u16 x, x2, y, y2;
    u8 font = FONT_NARROW;
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u32 itemIdx = getCurrentSelectedItemIdx();
    u32 itemId = Inventory_GetItemIdFromPocketIndex(itemIdx,pocketId);
    u16 paletteIndex = INTERFACE_PALETTE_NUM * 16;

    FillWindowPixelBuffer(INVENTORY_WINDOW_FOOTER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    //Help Bar Text
    x  = 0;
    y  = 18;
    x2 = 4;
    y2 = 1;
    switch(sMenuDataPtr->currentSelectMode){
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
            StringCopy(gStringVar4, sText_Help_Bar_Toss);
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
                u16 quantity = sMenuDataPtr->numItemsToToss + 1;

                ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
                CopyItemNameHandlePlural(itemId, gStringVar2, quantity);
                StringExpandPlaceholders(gStringVar4, sText_Help_Bar_Toss_Confirmation);
            }
            break;
        case INVENTORY_MESSAGE_SORTED_ITEMS_BY:
            StringCopy(gStringVar1, sSortTypeStrings[sMenuDataPtr->itemIdxPickMode].string);
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

    AddTextPrinterParameterized4(INVENTORY_WINDOW_FOOTER, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[INVENTORY_FONT_WHITE], 0xFF, gStringVar4);

    if(pocketId == POCKET_TM_HM)
        CpuCopy32(&gPlttBufferFaded[paletteIndex], &gPlttBufferUnfaded[paletteIndex], PLTT_SIZEOF(16));
    else
        LoadPalette(sMenuInterfacePalette, 16, 32);

    PutWindowTilemap(INVENTORY_WINDOW_FOOTER);
    CopyWindowToVram(INVENTORY_WINDOW_FOOTER ,COPYWIN_FULL);
}

static void PrintToWindow(void)
{
    Inventory_PrintHeader();
    Inventory_PrintPartyDisplay();
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
        gSpecialVar_ItemId = getCurrentSelectedItemIdx();
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
        gSpecialVar_ItemId = getCurrentSelectedItemIdx();
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

void ItemUseOutOfBattle_Repel_New(u8 taskId)
{
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

    if (isUsable){
        u16 steps = GetItemHoldEffectParam(gSpecialVar_ItemId) | REPEL_LURE_MASK;
        remainingSteps += steps;
        VarSet(VAR_LAST_REPEL_LURE_USED, ItemId);
        VarSet(VAR_REPEL_STEP_COUNT, remainingSteps);
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_USED_ITEM;
    }
    else
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_USE_ITEM;

    PrintToWindow();
    gTasks[taskId].func = Task_MenuMain;
}

static void Task_ItemUseOnField(u8 taskId)
{
    u16 itemId = gSpecialVar_ItemId = getCurrentSelectedItemIdx();
    u8 itemType = sItemsByType[itemId];

    if (GetItemFieldFunc(itemId))
    {
        if (!IsPlayerAllowedToUseHealingItems(itemId, TRUE, FALSE, TRUE))
        {
            //Can't use item
            sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_USE_ITEM;
        }
        else if (CalculatePlayerPartyCount() == 0 && GetItemType(itemId) == ITEM_USE_PARTY_MENU)
        {
            //There is no Pokemon
            sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_USE_ITEM;
        }
        else if(itemType == ITEM_TYPE_REPEL){
            gTasks[taskId].func = ItemUseOutOfBattle_Repel_New;
        }
        else
        {
            ScheduleBgCopyTilemapToVram(0);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_UseItem;
        }
    }
    else{
        //Can't use item
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_USE_ITEM;
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
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_TOSS_ITEM;
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
    u16 itemId = gSpecialVar_ItemId = getCurrentSelectedItemIdx();
    u16 type = GetItemType(itemId);

    if (!GetItemBattleUsage(itemId))
        return;

    if (!CanUseBagItems(itemId) || !IsPlayerAllowedToUseHealingItems(itemId, FALSE, TRUE, FALSE))
    {
        sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_TOSS_ITEM;
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

void TryToRemoveFavoriteItem(u8 pocketId, u8 itemIdx){
    if(isFavoriteItem(pocketId, itemIdx)){
        gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]--;
    }

    ForceReloadInventory();
}

bool8 isFavoriteItem(u8 pocketId, u8 itemIdx){
    return (itemIdx < gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]) || pocketId == POCKET_FAVORITE_ITEMS;
}

bool8 isCurrentItemFavorite(void){
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;

    return isFavoriteItem(pocketId, itemIdx);
}

static void useItemWithOption(u8 taskId){
    u16 currentOption = getSelectedItemOptionNum(sMenuDataPtr->itemIdxPickMode);
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u16 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
    u8 importance = gItemsInfo[getCurrentSelectedItemIdx()].importance;
    u8 oldPocketId = pocketId;
    u16 oldItemIdx = itemIdx;
    u16 ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;
    bool8 wasFavorite = FALSE;

    if(pocketId == POCKET_FAVORITE_ITEMS){
        //getCurrentSelectedItemIdx();
        pocketId   = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_POCKET];
        itemIdx    = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_POCKET_INDEX];
        ownedCount = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_QUANTITY];
        wasFavorite = TRUE;
    }

    ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;

    switch(currentOption){
        case INVENTORY_ITEM_OPTION_USE:
            if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_FIELD)
                Task_ItemUseOnField(taskId);
            else
                Task_ItemUseOnBattle(taskId);
        break;
        case INVENTORY_ITEM_OPTION_TOSS:
        {
            if(!importance){
                if(!wasFavorite)
                    ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;

                sMenuDataPtr->numItemsToToss    = ownedCount - 1;
                sMenuDataPtr->currentSelectMode = INVENTORY_MODE_TOSS_HOW_MANY;
            }
            else{
                sMenuDataPtr->itemIdxPickMode = 0;
                sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_TOSS_ITEM;
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

                    if(oldPocketId != POCKET_FAVORITE_ITEMS){
                        do{
                            if(gSaveBlock3Ptr->InventoryData.itemIdx == numItemsInPocket - 1)
                                break;

                            PressedDownButton_Inventory();
                            numPress--;
                        }
                        while(numPress != 0);
                    }

                    gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]--;
                }
            }
            ForceReloadInventory();
        }
        break;
        case INVENTORY_ITEM_OPTION_REGISTER:
            sMenuDataPtr->itemIdxPickMode = 0;
            sMenuDataPtr->currentSelectMode = INVENTORY_MODE_REGISTER;
            Menu_UpdateTilemap();
        break;
        case INVENTORY_ITEM_OPTION_CANCEL:
            sMenuDataPtr->itemIdxPickMode = 0;
            sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
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
    item = getCurrentSelectedItemIdx();
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

static void RegisterItemIntoDirection(u8 direction){
    u8 i;
    u16 currentItem = getCurrentSelectedItemIdx();

    for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS; i++){
        if(gSaveBlock3Ptr->InventoryData.registeredItem[i] == currentItem)
            gSaveBlock3Ptr->InventoryData.registeredItem[i] = ITEM_NONE;
    }

    gSaveBlock3Ptr->InventoryData.registeredItem[direction] = currentItem;

    sMenuDataPtr->itemIdxPickMode = 0;
    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;

    for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS; i++)
        CreateRegisteredItemIcon(i);

    Menu_UpdateTilemap();
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
    u16 numitems = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum];
    u8 numPress = 0;

    if (JOY_NEW(A_BUTTON)){
        if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_FIELD || sMenuDataPtr->inventoryMode == INVENTORY_MODE_BATTLE){
            switch(sMenuDataPtr->currentSelectMode){
                case INVENTORY_MODE_USE_OPTIONS:
                    useItemWithOption(taskId);
                break;
                case INVENTORY_MODE_REORDER:
                    if(sMenuDataPtr->itemIdxPickMode != ITEM_SORT_CANCEL){
                        TrySortBag();
                        //sMenuDataPtr->itemIdxPickMode = 0;
                        //sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_SORTED_ITEMS_BY;
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                    }
                    else
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                break;
                case INVENTORY_MODE_TOSS_HOW_MANY:
                    sMenuDataPtr->itemIdxPickMode   = NUM_TOSS_CONFIRMATION_OPTIONS - 1;
                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_TOSS_CONFIRMATION;
                break;
                case INVENTORY_MODE_TOSS_CONFIRMATION:
                    if(sMenuDataPtr->itemIdxPickMode == 0){
                        //Confirmation
                        RemoveInventoryItem(gSaveBlock3Ptr->InventoryData.pocketNum, gSaveBlock3Ptr->InventoryData.itemIdx, sMenuDataPtr->numItemsToToss + 1);
                        ForceReloadInventory();
                    }

                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                break;
                case INVENTORY_MODE_REGISTER:
                    sMenuDataPtr->itemIdxPickMode = 0;
                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                    Menu_UpdateTilemap();
                break;
                //Generic Messages
                case INVENTORY_MODE_MOVE_ITEMS:
                case INVENTORY_MESSAGE_CANT_MOVE_FAVORITE:
                case INVENTORY_MESSAGE_CANT_USE_ITEM:
                case INVENTORY_MESSAGE_CANT_TOSS_ITEM:
                case INVENTORY_MESSAGE_SORTED_ITEMS_BY:
                case INVENTORY_MESSAGE_USED_ITEM:
                    sMenuDataPtr->itemIdxPickMode = 0;
                    sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                break;
                default:
                    if(gSaveBlock3Ptr->InventoryData.itemIdx >= numitems - 1){
                        gSpecialVar_ItemId = ITEM_NONE;
                        PlaySE(SE_PC_OFF);
                        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                        gTasks[taskId].func = Task_MenuTurnOff;
                    }
                    else{
                        sMenuDataPtr->itemIdxPickMode = 0;
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_USE_OPTIONS;
                    }
                break;
            }
        }
        else if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_GIVE_ITEM){
            if(canItemBeHold(getCurrentSelectedItemIdx())){
                PlaySE(SE_SELECT);
                BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_ReturnToPartyMenuToGiveItem;
            }
            else{
                PlaySE(SE_PC_OFF);
            }
        }

        PrintToWindow();
    }

    if (JOY_NEW(B_BUTTON))
    {
        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
                PrintToWindow();
                PlaySE(SE_PC_OFF);
                BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_MenuTurnOff;
            break;
            case INVENTORY_MODE_REGISTER:
                sMenuDataPtr->itemIdxPickMode = 0;
                sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                Menu_UpdateTilemap();
            break;
            default:
                sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                PrintToWindow();
            break;
        }
    }

    if ((JOY_NEW(DPAD_RIGHT)) || (JOY_REPEAT(DPAD_RIGHT))){
        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
            {
                u8 tempPocket = gSaveBlock3Ptr->InventoryData.pocketNum;

                if(gSaveBlock3Ptr->InventoryData.pocketNum >= NUM_INVENTORY_POCKETS - 1)
                    gSaveBlock3Ptr->InventoryData.pocketNum = 0;
                else
                    gSaveBlock3Ptr->InventoryData.pocketNum++;

                gSaveBlock3Ptr->InventoryData.itemIdx = 0;
                gSaveBlock3Ptr->InventoryData.yFirstItem = 0;

                PlaySE(SE_SELECT);
                if(tempPocket == POCKET_KEY_ITEMS || gSaveBlock3Ptr->InventoryData.pocketNum == POCKET_KEY_ITEMS)
                    Menu_UpdateTilemap();
                PrintToWindow();
            }
            break;
            case INVENTORY_MODE_REGISTER:
                RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_RIGHT);
                PrintToWindow();
            break;
            case INVENTORY_MODE_TOSS_HOW_MANY:
            {
                u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
                u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
                u16 ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;

                if(sMenuDataPtr->numItemsToToss < ownedCount - 1)
                    sMenuDataPtr->numItemsToToss++;
                else
                    sMenuDataPtr->numItemsToToss = 0;

                PrintToWindow();
            }
            break;
        }
    }

    if ((JOY_NEW(DPAD_LEFT)) || (JOY_REPEAT(DPAD_LEFT))){
        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
            {
                u8 tempPocket = gSaveBlock3Ptr->InventoryData.pocketNum;

                if(gSaveBlock3Ptr->InventoryData.pocketNum == 0)
                    gSaveBlock3Ptr->InventoryData.pocketNum = NUM_INVENTORY_POCKETS - 1;
                else
                    gSaveBlock3Ptr->InventoryData.pocketNum--;

                gSaveBlock3Ptr->InventoryData.itemIdx = 0;
                gSaveBlock3Ptr->InventoryData.yFirstItem = 0;

                PlaySE(SE_SELECT);
                if(tempPocket == POCKET_KEY_ITEMS || gSaveBlock3Ptr->InventoryData.pocketNum == POCKET_KEY_ITEMS)
                    Menu_UpdateTilemap();
                PrintToWindow();
            }
            break;
            case INVENTORY_MODE_REGISTER:
                RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_LEFT);
                PrintToWindow();
            break;
            case INVENTORY_MODE_TOSS_HOW_MANY:
            {
                u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
                u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
                u16 ownedCount = 0;

                if(pocketId == POCKET_FAVORITE_ITEMS){
                    pocketId  = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET];
                    itemIdx = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET_INDEX];
                }

                ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;

                if(sMenuDataPtr->numItemsToToss != 0)
                    sMenuDataPtr->numItemsToToss--;
                else
                    sMenuDataPtr->numItemsToToss = ownedCount - 1;

                PrintToWindow();
            }
            break;
        }
    }

    if ((JOY_NEW(DPAD_DOWN)) || (JOY_REPEAT(DPAD_DOWN))){
        u8 numPocketOptions;

        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
                PressedDownButton_Inventory();
            break;
            case INVENTORY_MODE_MOVE_ITEMS:
                if(MoveItems(FALSE))
                    PressedDownButton_Inventory();
            break;
            case INVENTORY_MODE_REORDER:
                numPocketOptions = NUM_SORT_OPTIONS;

                if(sMenuDataPtr->itemIdxPickMode < numPocketOptions - 1)
                    sMenuDataPtr->itemIdxPickMode++;
                else
                    sMenuDataPtr->itemIdxPickMode = 0;
            break;
            case INVENTORY_MODE_REGISTER:
                RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_DOWN);
            break;
            case INVENTORY_MODE_TOSS_HOW_MANY:
            {
                u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
                u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
                u16 ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;

                if(sMenuDataPtr->numItemsToToss < ownedCount - 1)
                    sMenuDataPtr->numItemsToToss++;
                else
                    sMenuDataPtr->numItemsToToss = 0;
            }
            break;
            case INVENTORY_MODE_TOSS_CONFIRMATION:
                numPocketOptions = NUM_TOSS_CONFIRMATION_OPTIONS;

                if(sMenuDataPtr->itemIdxPickMode < numPocketOptions - 1)
                    sMenuDataPtr->itemIdxPickMode++;
                else
                    sMenuDataPtr->itemIdxPickMode = 0;
            break;
            case INVENTORY_MODE_USE_OPTIONS:
                numPocketOptions = getNumInventoryOptions(getCurrentSelectedItemIdx());

                if(sMenuDataPtr->itemIdxPickMode < numPocketOptions - 1)
                    sMenuDataPtr->itemIdxPickMode++;
                else
                    sMenuDataPtr->itemIdxPickMode = 0;
            break;
        }

        PlaySE(SE_SELECT);
        PrintToWindow();
    }

    if ((JOY_NEW(DPAD_UP)) || (JOY_REPEAT(DPAD_UP))){
        u8 numPocketOptions;

        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
                PressedUpButton_Inventory();
            break;
            case INVENTORY_MODE_MOVE_ITEMS:
                if(MoveItems(TRUE))
                    PressedUpButton_Inventory();
            break;
            case INVENTORY_MODE_REORDER:
                numPocketOptions = NUM_SORT_OPTIONS;

                if(sMenuDataPtr->itemIdxPickMode != 0)
                    sMenuDataPtr->itemIdxPickMode--;
                else
                    sMenuDataPtr->itemIdxPickMode = numPocketOptions - 1;
            break;
            case INVENTORY_MODE_REGISTER:
                RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_UP);
            break;
            case INVENTORY_MODE_TOSS_HOW_MANY:
            {
                u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
                u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
                u16 ownedCount = 0;

                if(pocketId == POCKET_FAVORITE_ITEMS){
                    pocketId  = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET];
                    itemIdx = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET_INDEX];
                }

                ownedCount = gBagPockets[pocketId].itemSlots[itemIdx].quantity;

                if(sMenuDataPtr->numItemsToToss != 0)
                    sMenuDataPtr->numItemsToToss--;
                else
                    sMenuDataPtr->numItemsToToss = ownedCount - 1;
            }
            break;
            case INVENTORY_MODE_TOSS_CONFIRMATION:
                numPocketOptions = NUM_TOSS_CONFIRMATION_OPTIONS;

                if(sMenuDataPtr->itemIdxPickMode != 0)
                    sMenuDataPtr->itemIdxPickMode--;
                else
                    sMenuDataPtr->itemIdxPickMode = numPocketOptions - 1;
            break;
            case INVENTORY_MODE_USE_OPTIONS:
                numPocketOptions = getNumInventoryOptions(getCurrentSelectedItemIdx());

                if(sMenuDataPtr->itemIdxPickMode != 0)
                    sMenuDataPtr->itemIdxPickMode--;
                else
                    sMenuDataPtr->itemIdxPickMode = numPocketOptions - 1;
            break;
        }

        PlaySE(SE_SELECT);
        PrintToWindow();
    }

    if ((JOY_NEW(L_BUTTON))){
        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
                numPress = NUM_LR_CURSOR_MOVES;
                do{
                    if(gSaveBlock3Ptr->InventoryData.itemIdx == 0)
                        break;

                    PressedUpButton_Inventory();
                    numPress--;
                }
                while(numPress != 0);
                PrintToWindow();
            break;
        }
    }

    if ((JOY_NEW(R_BUTTON))){
        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
                numPress = NUM_LR_CURSOR_MOVES;
                do{
                    if(gSaveBlock3Ptr->InventoryData.itemIdx == numitems - 1)
                        break;

                    PressedDownButton_Inventory();
                    numPress--;
                }
                while(numPress != 0);
                PrintToWindow();
            break;
        }
    }

    if ((JOY_NEW(START_BUTTON))){
        //You can only Sort Items in the default inventory mode
        if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_FIELD){
            switch(sMenuDataPtr->currentSelectMode){
                case INVENTORY_MODE_DEFAULT:
                    if(sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum] > 2){
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_REORDER;
                        PrintToWindow();
                    }
                break;
            }
        }
    }

    if ((JOY_NEW(SELECT_BUTTON))){
        //You can only Sort Items in the default inventory mode
        if(sMenuDataPtr->inventoryMode == INVENTORY_MODE_FIELD){
            if(!isCurrentItemFavorite()){
                switch(sMenuDataPtr->currentSelectMode){
                    case INVENTORY_MODE_MOVE_ITEMS:
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_DEFAULT;
                    break;
                    case INVENTORY_MODE_DEFAULT:
                        sMenuDataPtr->currentSelectMode = INVENTORY_MODE_MOVE_ITEMS;
                    break;
                }
            }
            else{
                PlaySE(SE_PC_OFF);
                sMenuDataPtr->currentSelectMode = INVENTORY_MESSAGE_CANT_MOVE_FAVORITE;
            }
            PrintToWindow();
        }
    }
}
