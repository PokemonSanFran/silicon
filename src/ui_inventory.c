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
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/party_menu.h"
#include "constants/inventory.h"
#include "ui_options_menu.h"

#define FAVORITE_ITEMS_POCKET POCKETS_COUNT
#define NUM_INVENTORY_POCKETS FAVORITE_ITEMS_POCKET + 1 //Favorite Pocket
#define MAX_INVENTORY_FAVORITE_ITEMS  5
#define MAX_INVENTORY_ITEMS           255
#define DISABLE_REGISTER_NON_KEY_ITEMS FALSE

enum{
	FAVORITE_ITEM_ID,
	FAVORITE_ITEM_QUANTITY,
	FAVORITE_ITEM_POCKET_INDEX,
	FAVORITE_ITEM_POCKET,
	NUM_FAVORITE_ITEMS_ARRAY_SIZE,
};

enum{
	INVENTORY_FRONT_BG,
	INVENTORY_BG_NORMAL,
	INVENTORY_BG_TRANSPARENT,
	NUM_INVENTORY_BACKGROUNDS,
};

enum{
    INVENTORY_SPRITE_UP_ARROW,
    INVENTORY_SPRITE_DOWN_ARROW,
    INVENTORY_SPRITE_LEFT_ARROW,
    INVENTORY_SPRITE_RIGHT_ARROW,
    INVENTORY_SPRITE_ITEM_ICON,
    INVENTORY_SPRITE_REGISTERED_ITEM_UP,
    INVENTORY_SPRITE_REGISTERED_ITEM_DOWN,
    INVENTORY_SPRITE_REGISTERED_ITEM_LEFT,
    INVENTORY_SPRITE_REGISTERED_ITEM_RIGHT,
    NUM_INVENTORY_SPRITES,
};

enum{
    INVENTORY_ITEM_OPTION_CANCEL,
    INVENTORY_ITEM_OPTION_USE,
    INVENTORY_ITEM_OPTION_GIVE,
    INVENTORY_ITEM_OPTION_TOSS,
    INVENTORY_ITEM_OPTION_FAVORITE,
    INVENTORY_ITEM_OPTION_REGISTER,
    NUM_INVENTORY_ITEM_OPTIONS,
};

#define INVENTORY_TRANSPARENCY_STRENGTH 7

//==========DEFINES==========//
struct MenuResources
{
    u8 gfxLoadState;
	u16 bgTilemapBuffers[NUM_INVENTORY_BACKGROUNDS][0x800];
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

enum WindowIds
{
    WINDOW_1,
};

enum SelectModes
{
    INVENTORY_MODE_DEFAULT,
    INVENTORY_MODE_MOVE_ITEMS,
    INVENTORY_MODE_REGISTER,
    INVENTORY_MODE_USE_OPTIONS,
    INVENTORY_MODE_REORDER,
    INVENTORY_MODE_TOSS_HOW_MANY,
    INVENTORY_MODE_TOSS_CONFIRMATION,
    INVENTORY_MESSAGE_CANT_MOVE_FAVORITE,
    INVENTORY_MESSAGE_SORTED_ITEMS_BY,
    INVENTORY_MESSAGE_CANT_USE_ITEM,
    INVENTORY_MESSAGE_CANT_TOSS_ITEM,
    INVENTORY_MESSAGE_USED_ITEM,
};

#define NUM_TOSS_CONFIRMATION_OPTIONS 2

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static EWRAM_DATA MainCallback savedCallback = NULL; // determines callback to run when we exit. e.g. where do we want to go after closing the menu

//==========STATIC=DEFINES==========//
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void Menu_FadeAndBail(void);
static bool8 Menu_LoadGraphics(void);
static void Menu_InitWindows(void);
static void PrintToWindow(u8 windowId, u8 colorIdx);
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
static void SortItemsInBag(u8 pocket, u8 type);
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
        .bg = 0,    // windows, etc
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,    // this bg loads the UI tilemap
        .charBaseIndex = 3,
        .mapBaseIndex = 29,
        .screenSize = 2,
        .priority = 2
    },
    {
        .bg = 2,
        .charBaseIndex = 3,
        .mapBaseIndex = 28,
        .priority = 3,
    }
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [WINDOW_1] =
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 0,   // position from left (per 8 pixels)
        .tilemapTop = 0,    // position from top (per 8 pixels)
        .width = 30,        // width (per 8 pixels)
        .height = 20,       // height (per 8 pixels)
        .paletteNum = 1,    // palette index to use for text
        .baseBlock = 1,     // tile start in VRAM
    },
};

static const u32 sMenuTiles[]                    = INCBIN_U32("graphics/ui_menus/inventory/tiles.4bpp.lz");
static const u32 sMenuTilemap[]                  = INCBIN_U32("graphics/ui_menus/inventory/tilemap.bin.lz");
static const u32 sMenuTilemap_KeyItems[]         = INCBIN_U32("graphics/ui_menus/inventory/tilemap_key_items.bin.lz");
static const u32 sBackgroundTilemap[]            = INCBIN_U32("graphics/ui_menus/inventory/bg_tilemap.bin.lz");

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

enum Colors
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_WHITE_2,
    FONT_RED,
    FONT_BLUE,
};

static const u8 sMenuWindowFontColors[][3] =
{
    [FONT_BLACK]   = {TEXT_COLOR_TRANSPARENT,  3,  TEXT_COLOR_TRANSPARENT},
    [FONT_WHITE]   = {TEXT_COLOR_TRANSPARENT,  1,  TEXT_COLOR_TRANSPARENT},
    [FONT_WHITE_2] = {TEXT_COLOR_TRANSPARENT,  2,  TEXT_COLOR_TRANSPARENT},
    [FONT_RED]     = {TEXT_COLOR_TRANSPARENT,  14, TEXT_COLOR_TRANSPARENT},
    [FONT_BLUE]    = {TEXT_COLOR_TRANSPARENT,  4,  TEXT_COLOR_TRANSPARENT},
};

//==========FUNCTIONS==========//
// UI loader template
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
#define INVENTORY_MAX_ITEMS_SHOWN     5

void InitializeInventoryData(void){
    u8 i;

    sMenuDataPtr->gfxLoadState      = 0;
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
    savedCallback = callback;
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
        ResetVramOamAndBgCntRegs();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (Menu_InitBgs())
        {
            sMenuDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            Menu_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        if (Menu_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        LoadMessageBoxAndBorderGfx();
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
        PrintToWindow(WINDOW_1, FONT_WHITE);
        CreateTask(Task_MenuWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
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

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

bool8 shouldShowRegisteredItems(void){
    bool8 UseRegisterGrid = (gSaveBlock3Ptr->InventoryData.pocketNum == KEYITEMS_POCKET || sMenuDataPtr->currentSelectMode == INVENTORY_MODE_REGISTER);

    return UseRegisterGrid;
}

#define Y_VALUE_REGISTERED (8 * 19) << 8
static void Menu_UpdateTilemap(void)
{
    s32 value;
    if(!shouldShowRegisteredItems())
        value = ChangeBgY(INVENTORY_BG_NORMAL, 0, BG_COORD_SET);
    else
        value = ChangeBgY(INVENTORY_BG_NORMAL, Y_VALUE_REGISTERED, BG_COORD_SET);

    DebugPrintfLevel(MGBA_LOG_WARN, "Menu_UpdateTilemap value; %d", value);
}

static void Menu_FreeResources(void)
{
    //Resets Pocket Info too
    //gSaveBlock3Ptr->InventoryData.itemIdx = 0;
    //gSaveBlock3Ptr->InventoryData.yFirstItem = 0;
    //gSaveBlock3Ptr->InventoryData.pocketNum = 0;

    try_free(sMenuDataPtr);
    try_free(sBg1TilemapBuffer);
    try_free(savedCallback);
    FreeAllWindowBuffers();
}

static void Menu_FreeResources_NoCallback(void)
{
    try_free(sMenuDataPtr);
    try_free(sBg1TilemapBuffer);
    FreeAllWindowBuffers();
}

static void Task_MenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(savedCallback);
        Menu_FreeResources();
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
    ResetBgsAndClearDma3BusyFlags(0);
    //Background 1
    setNormalBackground();

    //Background 2 - Transparent
    setTransparentBackground();
    return TRUE;
}

static void setNormalBackground(void){
    SetBgAttribute(INVENTORY_BG_NORMAL, BG_ATTR_PRIORITY, INVENTORY_BG_NORMAL);
    InitBgsFromTemplates(0, sMenuBgTemplates, ARRAY_COUNT(sMenuBgTemplates));
    SetBgTilemapBuffer(INVENTORY_BG_NORMAL, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_NORMAL]);
    ScheduleBgCopyTilemapToVram(INVENTORY_BG_NORMAL);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(INVENTORY_FRONT_BG);
    ShowBg(INVENTORY_BG_NORMAL);
    ChangeBgX(INVENTORY_BG_NORMAL, 0, 0);
    ChangeBgY(INVENTORY_BG_NORMAL, 0, 0);
}

static void setTransparentBackground(void){
    u8 strength = INVENTORY_TRANSPARENCY_STRENGTH;
    SetBgTilemapBuffer(INVENTORY_BG_TRANSPARENT, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_TRANSPARENT]);
    ScheduleBgCopyTilemapToVram(INVENTORY_BG_TRANSPARENT);

    //Transparency
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_ALL | BLDCNT_TGT1_BG1); //Blend Background over the rest
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(strength, strength));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);

    ShowBg(INVENTORY_BG_TRANSPARENT);
    ChangeBgX(INVENTORY_BG_TRANSPARENT, 0, 0);
    ChangeBgY(INVENTORY_BG_TRANSPARENT, 0, 0);
}

static void removeTransparentBackground(){
    SetBgAttribute(INVENTORY_BG_TRANSPARENT, BG_ATTR_PRIORITY, INVENTORY_BG_TRANSPARENT);
    InitBgsFromTemplates(0, sMenuBgTemplates, ARRAY_COUNT(sMenuBgTemplates));
    SetBgTilemapBuffer(INVENTORY_BG_TRANSPARENT, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_TRANSPARENT]);
    ScheduleBgCopyTilemapToVram(INVENTORY_BG_TRANSPARENT);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(INVENTORY_BG_TRANSPARENT);
}

static bool8 Menu_LoadGraphics(void)
{
    switch (sMenuDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sMenuTiles, 0, 0, 0);
        sMenuDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sMenuTilemap, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_NORMAL]);
            LZDecompressWram(sBackgroundTilemap, sMenuDataPtr->bgTilemapBuffers[INVENTORY_BG_TRANSPARENT]);
            Menu_UpdateTilemap();
            sMenuDataPtr->gfxLoadState++;
        }
        break;
    case 2:
        Inventory_LoadBackgroundPalette();
        sMenuDataPtr->gfxLoadState++;
        break;
    default:
        sMenuDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void Menu_InitWindows(void)
{
    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(WINDOW_1, 0);
    LoadUserWindowBorderGfx(WINDOW_1, 720, 14 * 16);
    PutWindowTilemap(WINDOW_1);
    CopyWindowToVram(WINDOW_1, 3);

    ScheduleBgCopyTilemapToVram(2);
}

u16 getMaxItemsFromPocket(u8 pocket){
    switch(pocket){
        case MEDICINE_POCKET:
            return BAG_MEDICINE_COUNT;
        break;
        case BALLS_POCKET:
            return BAG_POKEBALLS_COUNT;
        break;
        case BATTLE_ITEMS_POCKET:
            return BAG_BATTLE_ITEMS_COUNT;
        break;
        case POWERUP_POCKET:
            return BAG_POWERUP_COUNT;
        break;
        case BERRIES_POCKET:
            return BAG_BERRIES_COUNT;
        break;
        case OTHER_POCKET:
            return BAG_OTHER_COUNT;
        break;
        case TMHM_POCKET:
            return BAG_TMHM_COUNT;
        break;
        case TREASURE_POCKET:
            return BAG_TREASURES_COUNT;
        break;
        case Z_CRYSTALS_POCKET:
            return BAG_Z_CRYSTALS_COUNT;
        break;
        case MEGA_STONES_POCKET:
            return BAG_MEGA_STONES_COUNT;
        break;
        case KEYITEMS_POCKET:
            return BAG_KEYITEMS_COUNT;
        break;
        case FAVORITE_ITEMS_POCKET:
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
    sMenuDataPtr->numItems[FAVORITE_ITEMS_POCKET] = 0;

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
                k = sMenuDataPtr->numItems[FAVORITE_ITEMS_POCKET];
                itemId = pocket->itemSlots[j].itemId;
                count = CountTotalItemQuantityInBag(itemId);
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_ID]           = itemId; //ItemId
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_QUANTITY]     = count; //Count
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_POCKET_INDEX] = j; //Item Index
                sMenuDataPtr->FavoritePocketItems[k][FAVORITE_ITEM_POCKET]       = i; //Original Pocket
                sMenuDataPtr->numItems[FAVORITE_ITEMS_POCKET]++;
            }
            else
                break;
        }
    }
    sMenuDataPtr->numItems[FAVORITE_ITEMS_POCKET]++; //Exit Button
}

// Bag sorting
enum BagSortOptions
{
    SORT_ALPHABETICALLY,
    SORT_BY_TYPE,
    SORT_BY_AMOUNT, //greatest -> least
    SORT_CANCEL,
    NUM_SORT_OPTIONS
};

enum ItemSortType
{
	ITEM_TYPE_NONE,
	ITEM_TYPE_REPEL,
	ITEM_TYPE_FIELD_USE,
	ITEM_TYPE_HEALTH_RECOVERY,
	ITEM_TYPE_STATUS_RECOVERY,
	ITEM_TYPE_PP_RECOVERY,
	ITEM_TYPE_STAT_BOOST_DRINK,
    ITEM_TYPE_MINT,
	ITEM_TYPE_STAT_BOOST_FEATHER,
	ITEM_TYPE_EVOLUTION_STONE,
	ITEM_TYPE_EVOLUTION_ITEM,
	ITEM_TYPE_BATTLE_ITEM,
	ITEM_TYPE_FLUTE,
	ITEM_TYPE_STAT_BOOST_HELD_ITEM,
	ITEM_TYPE_HELD_ITEM,
	ITEM_TYPE_GEM,
	ITEM_TYPE_PLATE,
	ITEM_TYPE_MEMORY,
	ITEM_TYPE_DRIVE,
	ITEM_TYPE_INCENSE,
	ITEM_TYPE_MEGA_STONE,
	ITEM_TYPE_Z_CRYSTAL,
	ITEM_TYPE_NECTAR,
	ITEM_TYPE_SELLABLE,
	ITEM_TYPE_RELIC,
	ITEM_TYPE_SHARD,
	ITEM_TYPE_FOSSIL,
	ITEM_TYPE_MAIL,
	ITEM_TYPE_TMHM,
	ITEM_TYPE_POKE_BALL,
	ITEM_TYPE_UNUSABLE_KEY_ITEM,
	ITEM_TYPE_KEY_ITEMS,
	NUM_ITEMS_TYPES,
};

static const u8 sText_Toss_Yes[] = _("Yes");
static const u8 sText_Toss_No[]  = _("No");

static const struct StringList sSortTypeStrings[NUM_SORT_OPTIONS] = {
    [SORT_ALPHABETICALLY] = { _("Name"),   },
    [SORT_BY_TYPE]        = { _("Type"),   },
    [SORT_BY_AMOUNT]      = { _("Amount"), },
    [SORT_CANCEL]         = { _("Cancel"), },
};

static const struct StringList sDirectionStrings[INVENTORY_REGISTER_NUM_DIRECTIONS + 1] = {
    [INVENTORY_REGISTER_DIRECTION_UP]    = { _("Up"),     },
    [INVENTORY_REGISTER_DIRECTION_DOWN]  = { _("Down"),   },
    [INVENTORY_REGISTER_DIRECTION_LEFT]  = { _("Left"),   },
    [INVENTORY_REGISTER_DIRECTION_RIGHT] = { _("Right"),  },
    [INVENTORY_REGISTER_NUM_DIRECTIONS]  = { _("Cancel"), },
};

#define ACTION_BY_NAME   0
#define ACTION_BY_TYPE   1
#define ACTION_BY_AMOUNT 2
#define ACTION_CANCEL    3
#define ACTION_DUMMY     4

static const u8 sBagMenuSortItems[] =
{
    ACTION_BY_NAME,
    ACTION_BY_TYPE,
    ACTION_BY_AMOUNT,
    ACTION_CANCEL,
};

static const u8 sBagMenuSortKeyItems[] =
{
    ACTION_BY_NAME,
    ACTION_CANCEL,
};

static const u8 sBagMenuSortPokeBallsBerries[] =
{
    ACTION_BY_NAME,
    ACTION_BY_AMOUNT,
    ACTION_DUMMY,
    ACTION_CANCEL,
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

    #if I_KEY_ESCAPE_ROPE >= GEN_8
        [ITEM_ESCAPE_ROPE] = ITEM_TYPE_KEY_ITEMS,
    #else
        [ITEM_ESCAPE_ROPE] = ITEM_TYPE_FIELD_USE,
    #endif

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

static void SortItemsInBag(u8 pocket, u8 type)
{
    struct ItemSlot* itemMem;
    u16 itemAmount = getMaxItemsFromPocket(pocket);
    u8 low = 0;

    if(pocket <= POCKETS_COUNT)
        low = gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocket];

    switch (pocket)
    {
    case MEDICINE_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_Medicine;
        break;
    case BALLS_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_PokeBalls;
        break;
    case BATTLE_ITEMS_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_BattleItems;
    break;
    case POWERUP_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_PowerUp;
    break;
    case BERRIES_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_Berries;
        break;
    case OTHER_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_Other;
    break;
    case TMHM_POCKET:
        //itemMem = gSaveBlock1Ptr->bagPocket_TMHM;
        return;
    break;
    case TREASURE_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_Treasure;
    break;
    case Z_CRYSTALS_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_Z_Crystals;
    break;
    case MEGA_STONES_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_Mega_Stones;
    break;
    case KEYITEMS_POCKET:
        itemMem = gSaveBlock1Ptr->bagPocket_KeyItems;
        break;
    case FAVORITE_ITEMS_POCKET:
    default:
        return;
    }

    switch (type)
    {
    case SORT_ALPHABETICALLY:
        MergeSort(itemMem, low, itemAmount - 1, CompareItemsAlphabetically);
        break;
    case SORT_BY_AMOUNT:
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
    u16 quantity1 = GetBagItemQuantity(&itemSlot1->quantity);
    u16 quantity2 = GetBagItemQuantity(&itemSlot2->quantity);

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
        SortItemsInBag(pocket, sMenuDataPtr->itemIdxPickMode);
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


#define PAL_UI_SPRITES 0

static const struct SpritePalette sInventoryInterfaceSpritePalette[] = {
    {sMenuInterfacePalette_Sprites, PAL_UI_SPRITES},
};

#define UP_ARROW_X 160
#define UP_ARROW_Y 12

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
    spriteId = CreateSprite(&TempSpriteTemplate, UP_ARROW_X, UP_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape       = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size        = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority    = 1;
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.paletteNum  = PAL_UI_SPRITES;
}

#define DOWN_ARROW_X UP_ARROW_X
#define DOWN_ARROW_Y 96

static void CreateDownArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = INVENTORY_SPRITE_DOWN_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_InventoryDownArrow = {gInventoryDownArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_Inventory_DownArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_InventoryDownArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, DOWN_ARROW_X, DOWN_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape      = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size       = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority   = 1;
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.paletteNum = PAL_UI_SPRITES;
}

#define GFX_HELD_ITEM_X 3
#define GFX_HELD_ITEM_Y 3

#define GFX_HELD_ITEM_X_EXTRA 4
#define GFX_HELD_ITEM_Y_EXTRA 3

#define GFX_STATUS_MINUS_X 3

enum{
    INVENTORY_STATUS_NONE,
    INVENTORY_STATUS_BURN,
    INVENTORY_STATUS_PARALYSIS,
    INVENTORY_STATUS_FREEZE,
    INVENTORY_STATUS_POISON,
    INVENTORY_STATUS_SLEEP,
    NUM_INVENTORY_STATUS
};

//Pokemon Icon Stuff
static void SpriteCB_Species_Icon_Dummy(struct Sprite *sprite)
{
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
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

#define MON_STARTING_PALETTE_NUM 6

static bool8 canMonLearnCurrentTMHM(u8 partyIndex){
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;

    if(pocketId != TMHM_POCKET){
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
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
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

#define INVENTORY_ICON_FRAME_COUNT  4
#define INVENTORY_ICON_FRAME_SCROLL (32 * 8 / 2)
#define INVENTORY_ICON_SPRITE_SIZE  (32 * 16 / 2)

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

#define TAG_ITEM_ICON            4133
#define TAG_ITEM_REGISTERED_ICON TAG_ITEM_ICON + 1

static void SpriteCB_RegisteredItem_Icon_Callback(struct Sprite *sprite)
{
    if(!shouldShowRegisteredItems())
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

#define REGISTERED_ITEM_ICON_X_UP 42
#define REGISTERED_ITEM_ICON_Y_UP 37

#define REGISTERED_ITEM_ICON_X_DOWN REGISTERED_ITEM_ICON_X_UP
#define REGISTERED_ITEM_ICON_Y_DOWN 85

#define REGISTERED_ITEM_ICON_X_LEFT 18
#define REGISTERED_ITEM_ICON_Y_LEFT 61

#define REGISTERED_ITEM_ICON_X_RIGHT 66
#define REGISTERED_ITEM_ICON_Y_RIGHT REGISTERED_ITEM_ICON_Y_LEFT

static void FreeRegisteredItemIconSprite(u8 slot)
{
    u8 *spriteId = &sMenuDataPtr->spriteIDs[INVENTORY_SPRITE_REGISTERED_ITEM_UP + slot];
    u8 tag = TAG_ITEM_REGISTERED_ICON + slot;

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
    u8 tag = TAG_ITEM_REGISTERED_ICON + slot;
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
        FreeSpriteTilesByTag(TAG_ITEM_ICON);
        FreeSpritePaletteByTag(TAG_ITEM_ICON);
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
        FreeSpriteTilesByTag(TAG_ITEM_ICON);
        FreeSpritePaletteByTag(TAG_ITEM_ICON);
        itemSpriteId = AddItemIconSprite(TAG_ITEM_ICON, TAG_ITEM_ICON, itemId);
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
    [MEDICINE_POCKET]       = { _("Medicine"),     },
    [BALLS_POCKET]          = { _("Poké Balls"),   },
    [BATTLE_ITEMS_POCKET]   = { _("Battle Items"), },
    [POWERUP_POCKET]        = { _("Power Up"),     },
    [BERRIES_POCKET]        = { _("Berries"),      },
    [OTHER_POCKET]          = { _("Other Items"),  },
    [TMHM_POCKET]           = { _("TMs & HMs"),    },
    [TREASURE_POCKET]       = { _("Treasures"),    },
    [Z_CRYSTALS_POCKET]     = { _("Z-Crystals"),   },
    [MEGA_STONES_POCKET]    = { _("Mega Stones"),  },
    [KEYITEMS_POCKET]       = { _("Key Items"),    },
    [FAVORITE_ITEMS_POCKET] = { _("Favorite"),    },
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

#define INVENTORY_TEST_ITEM ITEM_VENUSAURITE
#define INVENTORY_CURSOR_SQUARES 10

#define NUM_PICK_MENU_OPTIONS       6
#define INVENTORY_PICK_MENU_SQUARES 4

#define INTERFACE_PALETTE_NUM 1
#define INTERFACE_TMHM_COLOR_FIRST_SLOT 9
#define INTERFACE_RGB_COLORS 3

static const s8 sInventory_TypeRGB[NUMBER_OF_MON_TYPES][INTERFACE_RGB_COLORS] = {
    //[TYPE_NONE]     = {31, 31, 31},
    [TYPE_NORMAL]   = {26, 26, 26},
    [TYPE_FIRE]     = {31, 20, 4},
    [TYPE_FIGHTING] = {30, 8,  12},
    [TYPE_WATER]    = {12, 17, 31},
    [TYPE_FLYING]   = {19, 25, 30},
    [TYPE_GRASS]    = {10, 25, 7},
    [TYPE_POISON]   = {22, 14, 27},
    [TYPE_ELECTRIC] = {27, 26, 6},
    [TYPE_ROCK]     = {28, 21, 9},
    [TYPE_PSYCHIC]  = {28, 15, 28},
    [TYPE_GROUND]   = {25, 24, 20},
    [TYPE_ICE]      = {16, 27, 27},
    [TYPE_BUG]      = {19, 28, 9},
    [TYPE_DRAGON]   = {9,  12, 24},
    [TYPE_GHOST]    = {16, 11, 21},
    [TYPE_DARK]     = {10, 10, 12},
    [TYPE_STEEL]    = {18, 20, 23},
    [TYPE_FAIRY]    = {30, 22, 30},
};

static u16 getCurrentSelectedItemIdx(void){
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    u16 numitems = sMenuDataPtr->numItems[pocketId];
    struct BagPocket *pocket = &gBagPockets[pocketId];
    u16 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
    u16 itemId  = pocket->itemSlots[itemIdx].itemId;

    if(pocketId == FAVORITE_ITEMS_POCKET)
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
    u8 currentPocket = gSaveBlock3Ptr->InventoryData.pocketNum;
    u8 option = INVENTORY_ITEM_OPTION_CANCEL;

    switch(sMenuDataPtr->inventoryMode){
        case INVENTORY_MODE_FIELD:
            option = sInventory_PocketOptions_Field[itemType][num];
        break;
        case INVENTORY_MODE_BATTLE:
            option = sInventory_PocketOptions_Battle[itemType][num];
        break;
    }

    //if(currentPocket == FAVORITE_ITEMS_POCKET && option == INVENTORY_ITEM_OPTION_FAVORITE)
    //    option = INVENTORY_ITEM_OPTION_CANCEL;

    return option;
}

static u8 getSelectedItemOptionNum(u8 num){
    return getItemOptionNum(getCurrentSelectedItemIdx(), num);
}

#define NUM_ITEMS_MAX_DIGITS 5

static void PrintToWindow(u8 windowId, u8 colorIdx)
{
    const u8 *desc;
    u16 i, j, x, x2, y, y2, itemIdx;
    u8 row, row2, currentStatus;
    u8 font = FONT_NARROW;
    u8 fontItemNames = FONT_SMALL;
    u8 itemNameFontColor = FONT_WHITE;
    u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
    struct BagPocket *pocket = &gBagPockets[pocketId];
    u16 itemId, itemNum, moveNum;
    u16 numitems = sMenuDataPtr->numItems[gSaveBlock3Ptr->InventoryData.pocketNum];
    u8 numPocketOptions = getSelectedItemNumOptions();
    u16 paletteIndex = INTERFACE_PALETTE_NUM * 16;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Inventory Title
    x  = 2;
    y  = 0;
    y2 = 0;
    x2 = 0;

    AddTextPrinterParameterized4(windowId, font, (x * 8) + 4, (y * 8), 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sInventory_TitleStrings[pocketId].string);

    x  = x + 8;
    y2 = 4;
    for(i = 0; i < NUM_INVENTORY_POCKETS; i++){
        if(pocketId == i)
            BlitBitmapToWindow(windowId, sInventoryPocketIcon1_Gfx, ((x + i) * 8) + x2, (y * 8) + y2, 8, 8);
        else
            BlitBitmapToWindow(windowId, sInventoryPocketIcon0_Gfx, ((x + i) * 8) + x2, (y * 8) + y2, 8, 8);
    }

    // Item Names
    x  = 10;
    y  = 2;
    y2 = 0;
    x2 = 2;

    for(i = 0; i < INVENTORY_MAX_ITEMS_SHOWN; i++){
        itemIdx = gSaveBlock3Ptr->InventoryData.yFirstItem + i;
        itemId  = pocket->itemSlots[itemIdx].itemId;

        if(pocketId == FAVORITE_ITEMS_POCKET)
            itemId = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_ID];

        if((itemIdx + 1) <= gSaveBlock3Ptr->InventoryData.numFavoriteItems[gSaveBlock3Ptr->InventoryData.pocketNum] && pocketId != FAVORITE_ITEMS_POCKET)
            BlitBitmapToWindow(windowId, gInventoryIcon_Pinned_Gfx, (x * 8) + x2 - 18, (y * 8) + y2 - 1 + 4, 16, 8);

        // Cursor
        if(pocketId != TMHM_POCKET || itemId == ITEM_NONE){
            if((gSaveBlock3Ptr->InventoryData.itemIdx - gSaveBlock3Ptr->InventoryData.yFirstItem) == i){
                if(sMenuDataPtr->currentSelectMode != INVENTORY_MODE_MOVE_ITEMS){
                    BlitBitmapToWindow(windowId, sInventoryCursor_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                    for(j = 1; j < INVENTORY_CURSOR_SQUARES; j++)
                        BlitBitmapToWindow(windowId, sInventoryCursor2_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                }
                else{
                    BlitBitmapToWindow(windowId, sInventoryCursor_Move_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                    for(j = 1; j < INVENTORY_CURSOR_SQUARES - 1; j++)
                        BlitBitmapToWindow(windowId, sInventoryCursor2_Move_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    BlitBitmapToWindow(windowId, sInventoryCursor3_Move_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                }
            }
        }
        else{
            //Palette Stuff
            u8 ColorRed, ColorGreen, ColorBlue;
            u8 moveType = gMovesInfo[GetItemSecondaryId(itemId)].type;

            if(itemIdx == (numitems - 1))
                moveType = TYPE_NORMAL;

            switch(i){
                case 0: //Type 1
                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type1_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                    for(j = 1; j < (INVENTORY_CURSOR_SQUARES - 1); j++)
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type1_2_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);

                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type1_3_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                break;
                case 1: //Type 2
                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type2_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                    for(j = 1; j < (INVENTORY_CURSOR_SQUARES - 1); j++)
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type2_2_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);

                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type2_3_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                break;
                case 2: //Type 3
                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type3_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                    for(j = 1; j < (INVENTORY_CURSOR_SQUARES - 1); j++)
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type3_2_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);

                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type3_3_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                break;
                case 3: //Type 4
                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type4_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                    for(j = 1; j < (INVENTORY_CURSOR_SQUARES - 1); j++)
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type4_2_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);

                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type4_3_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                break;
                case 4: //Type 5
                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type5_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                    for(j = 1; j < (INVENTORY_CURSOR_SQUARES - 1); j++)
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type5_2_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);

                    BlitBitmapToWindow(windowId, sInventoryTMHM_Type5_3_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                break;
            }

            if((gSaveBlock3Ptr->InventoryData.itemIdx - gSaveBlock3Ptr->InventoryData.yFirstItem) == i)
                BlitBitmapToWindow(windowId, sInventoryTMHM_Cursor_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);

            if((gSaveBlock3Ptr->InventoryData.yFirstItem + i) != (numitems - 1)){
                switch (moveType){
                    case TYPE_BUG:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Bug_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_DARK:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Dark_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_DRAGON:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Dragon_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_ELECTRIC:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Electric_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_FIRE:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Fire_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_FIGHTING:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Fighting_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_FLYING:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Flying_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_GHOST:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Ghost_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_GRASS:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Grass_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_GROUND:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Ground_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_ICE:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Ice_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_NORMAL:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Normal_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_POISON:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Poison_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_PSYCHIC:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Psychic_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_ROCK:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Rock_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_STEEL:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Steel_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_WATER:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Water_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                    case TYPE_FAIRY:
                        BlitBitmapToWindow(windowId, sInventoryTMHM_Type_Fairy_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                    break;
                }
            }
            /*else if((gSaveBlock3Ptr->InventoryData.itemIdx - gSaveBlock3Ptr->InventoryData.yFirstItem) == i){
                BlitBitmapToWindow(windowId, sInventoryCursor_Gfx, (x * 8) + x2 - 2, (y * 8) + y2 - 1, 16, 16);
                for(j = 1; j < INVENTORY_CURSOR_SQUARES; j++)
                    BlitBitmapToWindow(windowId, sInventoryCursor2_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
            }*/

            ColorRed   = sInventory_TypeRGB[moveType][0];
            ColorGreen = sInventory_TypeRGB[moveType][1];
            ColorBlue  = sInventory_TypeRGB[moveType][2];

            CopyRGBIntoSlot(INTERFACE_PALETTE_NUM, INTERFACE_TMHM_COLOR_FIRST_SLOT + i, ColorRed, ColorGreen, ColorBlue, FALSE);
        }

        if(itemId != ITEM_NONE){
            // Item Name
            if(pocketId != TMHM_POCKET){
                CopyItemName(itemId, gStringVar1);
                AddTextPrinterParameterized4(windowId, fontItemNames, (x * 8) + x2 + 1, (y * 8) + y2, 0, 0, sMenuWindowFontColors[itemNameFontColor], 0xFF, gStringVar1);

                // Item Num
                itemNum = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);

                if(pocketId == FAVORITE_ITEMS_POCKET){
                    itemNum = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_QUANTITY];
                }

                ConvertIntToDecimalStringN(gStringVar1, itemNum, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
                StringExpandPlaceholders(gStringVar4, sText_Item_Num);
                AddTextPrinterParameterized4(windowId, font, ((x + 15) * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[itemNameFontColor], 0xFF, gStringVar4);

                //Registered Items
                j = INVENTORY_CURSOR_SQUARES - 1;
                if(itemId == gSaveBlock3Ptr->InventoryData.registeredItem[INVENTORY_REGISTER_DIRECTION_UP])
                    BlitBitmapToWindow(windowId, sInventoryRegisterIndicator_Up_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                else if(itemId == gSaveBlock3Ptr->InventoryData.registeredItem[INVENTORY_REGISTER_DIRECTION_DOWN])
                    BlitBitmapToWindow(windowId, sInventoryRegisterIndicator_Down_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                else if(itemId == gSaveBlock3Ptr->InventoryData.registeredItem[INVENTORY_REGISTER_DIRECTION_LEFT])
                    BlitBitmapToWindow(windowId, sInventoryRegisterIndicator_Left_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
                else if(itemId == gSaveBlock3Ptr->InventoryData.registeredItem[INVENTORY_REGISTER_DIRECTION_RIGHT])
                    BlitBitmapToWindow(windowId, sInventoryRegisterIndicator_Right_Gfx, (x * 8) + x2 - 2 + (j * 16), (y * 8) + y2 - 1, 16, 16);
            }
            else{
                moveNum = GetItemSecondaryId(itemId);
                CopyItemName(itemId, gStringVar1);
                StringCopy(gStringVar2, gMovesInfo[moveNum].name);
                StringExpandPlaceholders(gStringVar4, sInventory_TM_Name);
                AddTextPrinterParameterized4(windowId, fontItemNames, (x * 8) + x2 + 2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[itemNameFontColor], 0xFF, gStringVar4);
            }
        }
        else{
            AddTextPrinterParameterized4(windowId, fontItemNames, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[itemNameFontColor], 0xFF, sInventory_Exit);
            break;
        }

        y = y + 2;
        y2 = y2 + 1;
    }

    if(gSaveBlock3Ptr->InventoryData.itemIdx < numitems - 1){
        itemId = getCurrentSelectedItemIdx();
        if(pocketId != TMHM_POCKET){
            desc = GetItemDescription(itemId);
            StringCopy(gStringVar1, desc);

            // Item Icon
            x  = 2;
            x2 = 4;
            y  = 16;
            y2 = 0;
            ShowItemIcon(itemId, (x * 8) + x2, (y * 8) + y2);
        }
        else{
            u8 power, accuracy, movePP;
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
            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2 - 1, (y * 8) + y2, -4, -4, sMenuWindowFontColors[FONT_BLACK], 0xFF, gStringVar4);
            StringCopy(gStringVar1, gMovesInfo[moveNum].description);
        }
    }
    else{
        StringCopy(gStringVar1, sInventory_Exit_Desc);
        FreeItemIconSprite();
    }

    // Item Description
    x  = 6;
    x2 = 4;
    y  = 13;
    y2 = 0;
    AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, -4, -4, sMenuWindowFontColors[FONT_BLACK], 0xFF, gStringVar1);

    //Pick Menu
    switch(sMenuDataPtr->currentSelectMode){
        case INVENTORY_MODE_USE_OPTIONS:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < numPocketOptions; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(windowId, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((numPocketOptions - (i + 1)) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(windowId, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

                y = y - 2;
            }

            y = y + 2;
            //x++;
            x2 = 4;
            for(i = 0; i < numPocketOptions; i++){
                StringCopy(gStringVar1, sInventory_OptionStrings[getSelectedItemOptionNum(i)].string);

                if(getSelectedItemOptionNum(i) == INVENTORY_ITEM_OPTION_FAVORITE && isCurrentItemFavorite())
                    StringCopy(gStringVar1, sInventory_Option_Unfavorite);

                AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[FONT_BLACK], 0xFF, gStringVar1);
            }
        break;
        case INVENTORY_MODE_REORDER:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < NUM_SORT_OPTIONS; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(windowId, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((NUM_SORT_OPTIONS - (i + 1)) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(windowId, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

                y = y - 2;
            }

            y = y + 2;
            //x++;
            x2 = 4;
            for(i = 0; i < NUM_SORT_OPTIONS; i++){
                StringCopy(gStringVar1, sSortTypeStrings[i].string);
                AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[FONT_BLACK], 0xFF, gStringVar1);
            }
        break;
        case INVENTORY_MODE_REGISTER:
            /*x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS + 1; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(windowId, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((INVENTORY_REGISTER_NUM_DIRECTIONS - i) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(windowId, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

                y = y - 2;
            }

            y = y + 2;
            //x++;
            x2 = 4;
            for(i = 0; i < INVENTORY_REGISTER_NUM_DIRECTIONS + 1; i++){
                StringCopy(gStringVar1, sDirectionStrings[i].string);
                AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[FONT_BLACK], 0xFF, gStringVar1);
            }*/
        break;
        case INVENTORY_MODE_TOSS_HOW_MANY:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            //for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
            //    BlitBitmapToWindow(windowId, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

            BlitBitmapToWindow(windowId, sInventorySelectorCursorToss_Gfx, (x * 8), (y * 8) + y2, 64, 16);

            ConvertIntToDecimalStringN(gStringVar1, sMenuDataPtr->numItemsToToss + 1, STR_CONV_MODE_LEFT_ALIGN, NUM_ITEMS_MAX_DIGITS);
            x  = 23;
            x2 = GetStringCenterAlignXOffset(font, gStringVar1, (6 * 8));

            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, -4, -4, sMenuWindowFontColors[FONT_BLACK], 0xFF, gStringVar1);
        break;
        case INVENTORY_MODE_TOSS_CONFIRMATION:
            x  = 22;
            x2 = 0;
            y  = 16;
            y2 = 2;

            for(i = 0; i < NUM_TOSS_CONFIRMATION_OPTIONS; i++){
                for(j = 0; j < INVENTORY_PICK_MENU_SQUARES; j++)
                    BlitBitmapToWindow(windowId, sInventoryPickMenuTile_Gfx, (x * 8) + x2 + (j * 16), (y * 8) + y2, 16, 16);

                if((NUM_TOSS_CONFIRMATION_OPTIONS - (i + 1)) == sMenuDataPtr->itemIdxPickMode)
                    BlitBitmapToWindow(windowId, sInventorySelectorCursor_Gfx, (x * 8), (y * 8) + y2, 64, 16);

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

                AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2 + (i * 16), -4, -4, sMenuWindowFontColors[FONT_BLACK], 0xFF, gStringVar1);
            }
        break;
    }

    if(!shouldShowRegisteredItems()){
        //Held Items & Status Icons
        for(i = 0; i < PARTY_SIZE; i++){
            currentStatus = GetAilmentFromStatus(GetMonData(&gPlayerParty[i], MON_DATA_STATUS));
            row = i / 2;
            row2 = i % 2;
            x = GFX_HELD_ITEM_X + (row2 * GFX_HELD_ITEM_X_EXTRA);
            y = GFX_HELD_ITEM_Y + (row  * GFX_HELD_ITEM_Y_EXTRA);
            x2 = 0;
            y2 = row * 2;

            if(!IsMonNotEmpty(i))
                continue;

            if(GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM) != ITEM_NONE)
                BlitBitmapToWindow(windowId, gInventoryHeldItem_Gfx, (x * 8) + x2, (y * 8) + y2, 8, 8);

            if(currentStatus != INVENTORY_STATUS_NONE){
                switch(currentStatus){
                    case AILMENT_BRN:
                        BlitBitmapToWindow(windowId, gInventoryStatus_Burn_Gfx, ((x - GFX_STATUS_MINUS_X) * 8) + x2, (y * 8) + y2, 8, 8);
                    break;
                    case AILMENT_PRZ:
                        BlitBitmapToWindow(windowId, gInventoryStatus_Paralysis_Gfx, ((x - GFX_STATUS_MINUS_X) * 8) + x2, (y * 8) + y2, 8, 8);
                    break;
                    case AILMENT_FRZ:
                    case AILMENT_FRB:
                        BlitBitmapToWindow(windowId, gInventoryStatus_Freeze_Gfx, ((x - GFX_STATUS_MINUS_X) * 8) + x2, (y * 8) + y2, 8, 8);
                    break;
                    case AILMENT_PSN:
                        BlitBitmapToWindow(windowId, gInventoryStatus_Poison_Gfx, ((x - GFX_STATUS_MINUS_X) * 8) + x2, (y * 8) + y2, 8, 8);
                    break;
                    case AILMENT_SLP:
                        BlitBitmapToWindow(windowId, gInventoryStatus_Sleep_Gfx, ((x - GFX_STATUS_MINUS_X) * 8) + x2, (y * 8) + y2, 8, 8);
                    break;
                }
            }

            BlitBitmapToWindow(windowId, GetBarGfx(GetHPEggCyclePercent(i)), ((x - GFX_STATUS_MINUS_X) * 8) + x2 + 4, (y * 8) + y2 + 7, 24, 8);
        }
    }
    else{
        x  = 3;
        y  = 5;
        x2 = 2;
        y2 = 5;

        BlitBitmapToWindow(windowId, gInventoryRegisterArrows_Gfx, (x * 8) + x2, (y * 8) + y2, 24, 24);
    }

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
            u16 quantity = pocket->itemSlots[gSaveBlock3Ptr->InventoryData.itemIdx].quantity;

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

    AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar4);

    if(pocketId == TMHM_POCKET)
        CpuCopy32(&gPlttBufferFaded[paletteIndex], &gPlttBufferUnfaded[paletteIndex], PLTT_SIZEOF(16));
    else
        LoadPalette(sMenuInterfacePalette, 16, 32);

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, 3);
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
        SetMainCallback2(savedCallback);
        Menu_FreeResources();
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
        Menu_FreeResources_NoCallback();
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
        SetMainCallback2(savedCallback);
        Menu_FreeResources();
        DestroyTask(taskId);
    }
}

void Task_UseItem(u8 taskId){
    if (!gPaletteFade.active)
    {
        u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;

        switch(pocketId){
            case BERRIES_POCKET:
                ItemUseOutOfBattle_Berry(taskId);
            break;
            case TMHM_POCKET:
                ItemUseInBattle_UseTMHM(taskId);
            break;
            default:
                GetItemFieldFunc(gSpecialVar_ItemId)(taskId);
            break;
        }

        Menu_FreeResources_NoCallback();
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

    PrintToWindow(WINDOW_1, FONT_WHITE);
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
        SetMainCallback2(savedCallback);

        Menu_FreeResources_NoCallback();
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

        Menu_FreeResources_NoCallback();
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
    Inventory_Init(savedCallback, INVENTORY_MODE_FIELD);
}

void CB2_ReturnToInventoryBattleMenu(void)
{
    CleanupOverworldWindowsAndTilemaps();
    Inventory_Init(savedCallback, INVENTORY_MODE_BATTLE);
}

void TryToRemoveFavoriteItem(u8 pocketId, u8 itemIdx){
    if(isFavoriteItem(pocketId, itemIdx)){
        gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]--;
    }

    ForceReloadInventory();
}

bool8 isFavoriteItem(u8 pocketId, u8 itemIdx){
    return (itemIdx < gSaveBlock3Ptr->InventoryData.numFavoriteItems[pocketId]) || pocketId == FAVORITE_ITEMS_POCKET;
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
    u16 ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);
    bool8 wasFavorite = FALSE;

    if(pocketId == FAVORITE_ITEMS_POCKET){
        //getCurrentSelectedItemIdx();
        pocketId   = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_POCKET];
        itemIdx    = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_POCKET_INDEX];
        ownedCount = sMenuDataPtr->FavoritePocketItems[oldItemIdx][FAVORITE_ITEM_QUANTITY];
        wasFavorite = TRUE;
    }

    ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);

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
                    ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);

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
            if(pocketId != FAVORITE_ITEMS_POCKET){
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

                    if(oldPocketId != FAVORITE_ITEMS_POCKET){
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

    if(pocketId == FAVORITE_ITEMS_POCKET){
        pocketId = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET];
        itemIdx  = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET_INDEX];
    }

    ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);
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

#define MAX_CURSOR_NUM_X    2
#define MAX_CURSOR_NUM_Y    8
#define NUM_LR_CURSOR_MOVES 5
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
                    if(sMenuDataPtr->itemIdxPickMode != SORT_CANCEL){
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

        PrintToWindow(WINDOW_1, FONT_WHITE);
    }

    if (JOY_NEW(B_BUTTON))
    {
        switch(sMenuDataPtr->currentSelectMode){
            case INVENTORY_MODE_DEFAULT:
                PrintToWindow(WINDOW_1, FONT_WHITE);
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
                PrintToWindow(WINDOW_1, FONT_WHITE);
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
                if(tempPocket == KEYITEMS_POCKET || gSaveBlock3Ptr->InventoryData.pocketNum == KEYITEMS_POCKET)
                    Menu_UpdateTilemap();
                PrintToWindow(WINDOW_1, FONT_WHITE);
            }
            break;
            case INVENTORY_MODE_REGISTER:
                RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_RIGHT);
                PrintToWindow(WINDOW_1, FONT_WHITE);
            break;
            case INVENTORY_MODE_TOSS_HOW_MANY:
            {
                u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
                u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
                u16 ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);

                if(sMenuDataPtr->numItemsToToss < ownedCount - 1)
                    sMenuDataPtr->numItemsToToss++;
                else
                    sMenuDataPtr->numItemsToToss = 0;

                PrintToWindow(WINDOW_1, FONT_WHITE);
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
                if(tempPocket == KEYITEMS_POCKET || gSaveBlock3Ptr->InventoryData.pocketNum == KEYITEMS_POCKET)
                    Menu_UpdateTilemap();
                PrintToWindow(WINDOW_1, FONT_WHITE);
            }
            break;
            case INVENTORY_MODE_REGISTER:
                RegisterItemIntoDirection(INVENTORY_REGISTER_DIRECTION_LEFT);
                PrintToWindow(WINDOW_1, FONT_WHITE);
            break;
            case INVENTORY_MODE_TOSS_HOW_MANY:
            {
                u8 pocketId = gSaveBlock3Ptr->InventoryData.pocketNum;
                u8 itemIdx = gSaveBlock3Ptr->InventoryData.itemIdx;
                u16 ownedCount = 0;

                if(pocketId == FAVORITE_ITEMS_POCKET){
                    pocketId  = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET];
                    itemIdx = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET_INDEX];
                }

                ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);

                if(sMenuDataPtr->numItemsToToss != 0)
                    sMenuDataPtr->numItemsToToss--;
                else
                    sMenuDataPtr->numItemsToToss = ownedCount - 1;

                PrintToWindow(WINDOW_1, FONT_WHITE);
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
                u16 ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);

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
        PrintToWindow(WINDOW_1, FONT_WHITE);
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

                if(pocketId == FAVORITE_ITEMS_POCKET){
                    pocketId  = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET];
                    itemIdx = sMenuDataPtr->FavoritePocketItems[itemIdx][FAVORITE_ITEM_POCKET_INDEX];
                }

                ownedCount = GetBagItemQuantity(&gBagPockets[pocketId].itemSlots[itemIdx].quantity);

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
        PrintToWindow(WINDOW_1, FONT_WHITE);
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
                PrintToWindow(WINDOW_1, FONT_WHITE);
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
                PrintToWindow(WINDOW_1, FONT_WHITE);
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
                        PrintToWindow(WINDOW_1, FONT_WHITE);
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
            PrintToWindow(WINDOW_1, FONT_WHITE);
        }
    }
}
