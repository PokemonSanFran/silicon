#include "global.h"
#include "ui_start_menu.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "frontier_pass.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "link.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "option_menu.h"
#include "palette.h"
#include "party_menu.h"
#include "ui_pokedex.h"
#include "dexnav.h"
#include "pokenav.h"
#include "pokemon_icon.h"
#include "quests.h"
#include "quest_flavor_lookup.h"
#include "rtc.h"
#include "region_map.h"
#include "ui_map_system.h"
#include "trainer_card.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "ui_options_menu.h"
#include "ui_presto.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/flags.h"
#include "new_game.h"
#include "save.h"
#include "start_menu.h"
#include "ui_map_system.h"
#include "buzzr.h"
#include "glass.h"
#include "constants/form_change_types.h"
#include "ui_main_menu.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"

//==========DEFINES==========//
struct MenuResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 gfxLoadState;
    u8 currentAppId;
    u8 TempAppId;
    bool8 areYouOnSecondScreen;
    bool8 areYouOnSecondScreenTemp;
    bool8 isAppSelectedForMove;
    bool8 shouldShowErrorMessage;
    bool8 calledFromOverworld;
    u8 saveMode;
    u8 startMenuAppTempIndex[NUM_TOTAL_APPS];
    u8 PartyPokemonIcon[PARTY_SIZE];
    bool32 isMoveMode;
};

enum WindowIds
{
    WINDOW_PHONE_SIGNAL,
    WINDOW_TIME_NUMBER,
    WINDOW_PARTY,
    WINDOW_TIME_STRING,
    WINDOW_PHONE_APPS,
    WINDOW_NAME_MAP,
    WINDOW_POINTER,
    WINDOW_NAME_APP,
    WINDOW_QUEST_INFO,
    WINDOW_HELP_BAR,
    WINDOW_OVERWRITE_MODAL,
};

enum
{
    SAVE_MODE_NOT_ENGAGED,
    SAVE_MODE_ASK,
    SAVE_MODE_IN_PROGRESS,
    SAVE_MODE_SUCCESS,
    SAVE_MODE_CANCELED,
    SAVE_MODE_ERROR,
    SAVE_MODE_OVERWRITE,
    SAVE_MODE_FORCE,
};

//Defines
#define  NUM_APPS_PER_SCREEN    5

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static const u32 sInstalledAppFlagsIndex[NUM_TOTAL_APPS] =
{
    FLAG_SYS_APP_POKEMON_GET, // FLAG_SYS_APP_PROLOUGE_GET
    FLAG_SYS_APP_BAG_GET, // FLAG_SYS_APP_PROLOUGE_GET
    FLAG_SYS_APP_MAP_GET, // FLAG_SYS_STARTER_APPS_GET
    FLAG_SYS_APP_QUEST_GET, // FLAG_SYS_STARTER_APPS_GET
    FLAG_SYS_APP_DEXNAV_GET, // Get later
    FLAG_SYS_APP_POKEDEX_GET, // FLAG_SYS_STARTER_APPS_GET
    FLAG_SYS_APP_BUZZR_GET, // After 1 badge
    FLAG_SYS_APP_OPTIONS_GET, // FLAG_SYS_APP_PROLOUGE_GET
    FLAG_SYS_APP_TRAINER_CARD_GET, // FLAG_SYS_STARTER_APPS_GET
    FLAG_SYS_APP_PRESTO_GET, // After meeting YC CEO in office
};


//==========STATIC=DEFINES==========//
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void Menu_FadeAndBail(void);
static bool8 Menu_LoadGraphics(void);
static void StartMenu_LoadBackgroundPalette(void);
static void Menu_InitWindows(void);
static void Menu_BufferToVram_Windows(void);
static u32 GetStaggeredIndexPosition(u32);

static void StartMenu_DisplayPartyIcons(void);
static void StartMenu_DisplayPhoneSignal(void);
static void StartMenu_PrintTime(void);
static bool32 IsMonNotEmpty(u32);
static u32 GetHPEggCyclePercent(u32);
static const u8 *GetBarGfx(u32);
static void StartMenu_DisplayHP(void);
static void StartMenu_PrintTimeOfDay(void);
static void StartMenu_DrawPhoneAppIcon(u8 i, u8 windowId, const u8 * gfx, const u8 * moveModeGfx, u8 x, u8 y, u8 width, u8 height);
static bool8 StartMenu_DisplayPhoneApps(void);
static void StartMenu_PrintMapName(void);
static void StartMenu_DisplaySelector(void);
static bool8 StartMenu_DisplayPointer(void);
static void StartMenu_PrintAppName(void);
static void StartMenu_PrintQuestInfo(void);
static void StartMenu_PrintHelpBar(void);
static u8 StartMenu_GetCurrentApp(void);

static void PrintToAllWindows(void);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static enum AppsIds GetCurrentAppFromIndex(u8 index);
static u8 GetCurrentSignal();
static void *GetSpriteCallbackForIcon(u32, bool32);
static u8 ShowSpeciesIcon(u8 slot, u8 x, u8 y);
static bool32 IsAppUnlocked(u32 appId);
static bool32 IsAppInIndex(u32 appId);
static s32 GetFirstEmptyIndexSlot(void);
static u32 CountNumberAppsInIndex(void);
static void StartMenuTempIndextoIndex(void);
static void StartMenuIndextoTempIndex(void);
static void PopulateStartMenuIndex(void);
static void PopulateStartMenuIndexFromNull(void);
static void AddNewAppsToStartMenuIndex(void);

static void StartMenu_Task_SaveDialog(u8 taskId);
static void StartMenu_Task_OverworldSave(u8 taskId);
static void StartMenu_SaveDialog_CheckSave(void);
static void StartMenu_PlaySaveSoundEffect(void);
static void StartMenu_PerformSave(void);
static bool8 StartMenuSaveScreenCallback(void);
static bool8 StartMenuUiStartMenuCallback(void);
static void StartMenu_SaveDialog_DoSave(void);
static void StartMenu_SaveDialog_ReturnToField(void);
static void StartMenu_SaveDialog_ReturnToMenu(u8 taskId);
static void StartMenu_UpdateTextAndSetSaveMode(u8 saveMode);
static void StartMenu_SaveDialog_GetMessage(void);
void StartMenu_SetSaveSuccessState(void);
u8 StartMenu_GetQuestForStartMenu(void);
void ClearStartMenuDataBeforeExit(void);

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    },
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [WINDOW_PHONE_SIGNAL] =
    {
        .bg = 0,
        .tilemapLeft = 21,
        .tilemapTop = 0,
        .width = 2,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },

    [WINDOW_TIME_NUMBER] =
    {
        .bg = 0,
        .tilemapLeft = 25,
        .tilemapTop = 0,
        .width = 6,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 5,
    },

    [WINDOW_PARTY] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 25,
        .height = 5,
        .paletteNum = 0,
        .baseBlock = 17,
    },

    [WINDOW_TIME_STRING] =
    {
        .bg = 0,
        .tilemapLeft = 25,
        .tilemapTop = 2,
        .width = 6,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 142,
    },

    [WINDOW_PHONE_APPS] =
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 6,
        .width = 30,
        .height = 5,
        .paletteNum = 0,
        .baseBlock = 154,
    },

    [WINDOW_NAME_MAP] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 11,
        .width = 12,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 304,
    },

    [WINDOW_POINTER] =
    {
        .bg = 0,
        .tilemapLeft = 14,
        .tilemapTop = 11,
        .width = 2,
        .height = 3,
        .paletteNum = 0,
        .baseBlock = 328,
    },

    [WINDOW_NAME_APP] =
    {
        .bg = 0,
        .tilemapLeft = 19,
        .tilemapTop = 11,
        .width = 12,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 334,
    },

    [WINDOW_QUEST_INFO] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 14,
        .width = 30,
        .height = 5,
        .paletteNum = 15,
        .baseBlock = 358,
    },

    [WINDOW_HELP_BAR] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 508,
    },
    [WINDOW_OVERWRITE_MODAL] =
    {
        .bg = 0,
        .tilemapLeft = 1.5,
        .tilemapTop = 5,
        .width = 28.5,
        .height = 13,
        .paletteNum = 15,
        .baseBlock = 508 + (30 * 2),
    },
    DUMMY_WIN_TEMPLATE
};

static const u32 sMenuTiles[]                       = INCBIN_U32("graphics/start_menu/tiles.4bpp.lz");
static const u32 sMenuTilemap[]                     = INCBIN_U32("graphics/start_menu/tilemap.bin.lz");

static const u16 sMenuPalette[]                     = INCBIN_U16("graphics/start_menu/palette.gbapal");

static const u16 sMenuPalette_Red[]      = INCBIN_U16("graphics/start_menu/palettes/red.gbapal");
static const u16 sMenuPalette_Black[]    = INCBIN_U16("graphics/start_menu/palettes/black.gbapal");
static const u16 sMenuPalette_Green[]    = INCBIN_U16("graphics/start_menu/palettes/green.gbapal");
static const u16 sMenuPalette_Blue[]     = INCBIN_U16("graphics/start_menu/palettes/blue.gbapal");
static const u16 sMenuPalette_Platinum[] = INCBIN_U16("graphics/start_menu/palettes/platinum.gbapal");
static const u16 sMenuPalette_Scarlet[]  = INCBIN_U16("graphics/start_menu/palettes/scarlet.gbapal");
static const u16 sMenuPalette_Violet[]   = INCBIN_U16("graphics/start_menu/palettes/violet.gbapal");
static const u16 sMenuPalette_White[]    = INCBIN_U16("graphics/start_menu/palettes/white.gbapal");
static const u16 sMenuPalette_Yellow[]   = INCBIN_U16("graphics/start_menu/palettes/yellow.gbapal");

static const u8 sStartMenuCursor_Gfx[]              = INCBIN_U8("graphics/start_menu/menu_cursor.4bpp");
static const u8 sStartMenuCursorMoveMode_Gfx[]      = INCBIN_U8("graphics/start_menu/menu_cursor_move.4bpp");
static const u8 sStartMenuCursorMoveMode2_Gfx[]     = INCBIN_U8("graphics/start_menu/menu_cursor_move2.4bpp");
static const u8 sStartMenuRowIcon_Gfx[]             = INCBIN_U8("graphics/start_menu/menu_row_icon.4bpp");

//HP Bar
static const u8 sStartMenu_HPBar_Gfx[]              = INCBIN_U8("graphics/start_menu/hp_bar.4bpp");
static const u8 sStartMenu_HPBar_Full_Gfx[]         = INCBIN_U8("graphics/start_menu/hp_bar_full.4bpp");
static const u8 sStartMenu_HPBar_90_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_90_percent.4bpp");
static const u8 sStartMenu_HPBar_80_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_80_percent.4bpp");
static const u8 sStartMenu_HPBar_70_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_70_percent.4bpp");
static const u8 sStartMenu_HPBar_60_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_60_percent.4bpp");
static const u8 sStartMenu_HPBar_50_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_50_percent.4bpp");
static const u8 sStartMenu_HPBar_40_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_40_percent.4bpp");
static const u8 sStartMenu_HPBar_30_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_30_percent.4bpp");
static const u8 sStartMenu_HPBar_20_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_20_percent.4bpp");
static const u8 sStartMenu_HPBar_10_Percent_Gfx[]   = INCBIN_U8("graphics/start_menu/hp_bar_10_percent.4bpp");
static const u8 sStartMenu_HPBar_Fainted_Gfx[]      = INCBIN_U8("graphics/start_menu/hp_bar_fainted.4bpp");

enum Colors
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_RED,
};
static const u8 sMenuWindowFontColors[][3] =
{
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_RED, TEXT_COLOR_TRANSPARENT},
};

//==========FUNCTIONS==========//
// UI loader template
void Task_OpenMenuFromStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        StartMenu_Menu_Init(CB2_ReturnToField, FALSE);
        DestroyTask(taskId);
    }
}

void Task_OpenMenuFromOverworld(u8 taskId)
{
    bool8 calledFromOverworld = TRUE;

    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        StartMenu_Menu_Init(CB2_ReturnToFieldContinueScript, calledFromOverworld);
        DestroyTask(taskId);
    }
}

static void StartMenu_InitAsSaveScreen(bool8 calledFromOverworld)
{
    if (FlagGet(FLAG_SHOULD_SKIP_CREDITS))
    {
        sMenuDataPtr->calledFromOverworld = TRUE;
        sMenuDataPtr->saveMode = SAVE_MODE_FORCE;
    }
    else if(calledFromOverworld)
    {
        sMenuDataPtr->calledFromOverworld = TRUE;
        sMenuDataPtr->saveMode = SAVE_MODE_ASK;
    }
    else
    {
        sMenuDataPtr->calledFromOverworld = FALSE;
        sMenuDataPtr->saveMode = SAVE_MODE_NOT_ENGAGED;
    }
}

#define CURRENT_APP_ID_VAR VAR_CURRENT_START_MENU_APP

// This is our main initialization function if you want to call the menu from elsewhere
void StartMenu_Menu_Init(MainCallback callback, bool8 calledFromOverworld)
{
    u16 currentApp = VarGet(CURRENT_APP_ID_VAR);
    u32 x;

    if ((sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    // initialize stuff

    sMenuDataPtr->gfxLoadState = 0;
    sMenuDataPtr->savedCallback = callback;
    sMenuDataPtr->currentAppId = currentApp % NUM_APPS_PER_SCREEN;
    sMenuDataPtr->areYouOnSecondScreen = (currentApp >= NUM_APPS_PER_SCREEN) ? TRUE : FALSE;

    sMenuDataPtr->TempAppId = 0;
    sMenuDataPtr->areYouOnSecondScreenTemp = FALSE;
    sMenuDataPtr->isAppSelectedForMove = FALSE;
    sMenuDataPtr->shouldShowErrorMessage = FALSE;
    sMenuDataPtr->isMoveMode = FALSE;
    StartMenu_InitAsSaveScreen(calledFromOverworld);

    for (x = 0; x < PARTY_SIZE; x++)
        sMenuDataPtr->PartyPokemonIcon[x] = 0;

    PopulateStartMenuIndex();
    StartMenuIndextoTempIndex();
    SetMainCallback2(Menu_RunSetup);
}

static void PopulateStartMenuIndex(void)
{
    if(CountNumberAppsInIndex() < 2)
        PopulateStartMenuIndexFromNull();

    AddNewAppsToStartMenuIndex();
}

static void PopulateStartMenuIndexFromNull(void)
{
    u32 x;
    for(x = 0; x < NUM_TOTAL_APPS; x++)
        gSaveBlock3Ptr->startMenuAppIndex[x] = APP_NONE;
}

static void AddNewAppsToStartMenuIndex(void)
{
    u32 appId;


    for(appId = 0; appId < NUM_TOTAL_APPS; appId++)
    {
        if (IsAppUnlocked(appId) && !IsAppInIndex(appId))
        {
            if (GetFirstEmptyIndexSlot() == NO_SLOTS)
                break;

            gSaveBlock3Ptr->startMenuAppIndex[GetFirstEmptyIndexSlot()] = appId;
        }
    }
}

static u32 GetStaggeredIndexPosition(u32 index)
{
    return index % 2 == 0 ? index / 2 : 9 - index / 2;
}

static bool32 IsAppInIndex(u32 appId)
{
    u32 indexSlot;
    for(indexSlot = 0; indexSlot < NUM_TOTAL_APPS; indexSlot++)
        if (gSaveBlock3Ptr->startMenuAppIndex[indexSlot] == appId)
            return TRUE;

    return FALSE;
}

static s32 GetFirstEmptyIndexSlot(void)
{
    u32 x;
    for(x = 0; x < NUM_TOTAL_APPS; x++)
    {
        u32 newIndexPosition = GetStaggeredIndexPosition(x);
        if (gSaveBlock3Ptr->startMenuAppIndex[newIndexPosition] == APP_NONE)
            return newIndexPosition;
    }
    return NO_SLOTS;
}

static bool32 IsAppUnlocked(u32 appId)
{
    if (appId == APP_NONE)
        return FALSE;

    return (FlagGet(sInstalledAppFlagsIndex[appId]));
}

static u32 CountNumberAppsInIndex(void)
{
    u32 count = 0, slotIndex;

    for (slotIndex = 0; slotIndex < NUM_TOTAL_APPS; slotIndex++)
        if(IsAppInIndex(slotIndex))
            count++;

    return count;
}

static void StartMenuTempIndextoIndex()
{
    u8 i;

    for(i = 0; i < NUM_TOTAL_APPS; i++){
        gSaveBlock3Ptr->startMenuAppIndex[i] = sMenuDataPtr->startMenuAppTempIndex[i];

        sMenuDataPtr->currentAppId = sMenuDataPtr->TempAppId;
        sMenuDataPtr->areYouOnSecondScreen = sMenuDataPtr->areYouOnSecondScreenTemp;
    }
}

static enum AppsIds GetCurrentAppFromIndex(u8 index)
{
    enum AppsIds app;
    if(index >= NUM_TOTAL_APPS)
        app = gSaveBlock3Ptr->startMenuAppIndex[index % NUM_TOTAL_APPS];
    else
        app = gSaveBlock3Ptr->startMenuAppIndex[index];

    if (app > APP_NONE)
        app = APP_NONE;

    return app;
}

static void StartMenuIndextoTempIndex()
{
    u8 i;
    for(i = 0; i < NUM_TOTAL_APPS - 1; i++){
        sMenuDataPtr->startMenuAppTempIndex[i] = GetCurrentAppFromIndex(i);
    }
    sMenuDataPtr->TempAppId = sMenuDataPtr->currentAppId;
    sMenuDataPtr->areYouOnSecondScreenTemp = sMenuDataPtr->areYouOnSecondScreen;
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
            Menu_InitWindows();
            gMain.state++;
            break;
        case 5:
            StartMenu_DisplayPartyIcons();
            PrintToAllWindows();
            StartMenu_PrintHelpBar(); //Print Help Bar
            BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
            CreateTask(Task_MenuWaitFadeIn, 0);
            gMain.state++;
            break;
        case 6:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
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

void StartMenu_Menu_FreeResources(void)
{
    try_free(sMenuDataPtr);
    try_free(sBg1TilemapBuffer);
    FreeAllWindowBuffers();
}


static void Task_MenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMenuDataPtr->savedCallback);
        StartMenu_Menu_FreeResources();
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

    sBg1TilemapBuffer = Alloc(0x800);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;

    memset(sBg1TilemapBuffer, 0, 0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, NELEMS(sMenuBgTemplates));
    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
    ShowBg(0);
    ShowBg(1);
    return TRUE;
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
                LZDecompressWram(sMenuTilemap, sBg1TilemapBuffer);
                sMenuDataPtr->gfxLoadState++;
            }
            break;
        case 2:
            StartMenu_LoadBackgroundPalette();
            sMenuDataPtr->gfxLoadState++;
            break;
        default:
            sMenuDataPtr->gfxLoadState = 0;
            return TRUE;
    }
    return FALSE;
}

static void StartMenu_LoadBackgroundPalette(void)
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
}

static void Menu_InitWindows(void)
{
    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
    Menu_BufferToVram_Windows();

    FillWindowPixelBuffer(WINDOW_OVERWRITE_MODAL, PIXEL_FILL(TEXT_COLOR_WHITE));
}

static void Menu_BufferToVram_Windows(void)
{
    u8 windowIndex;

    for (windowIndex = WINDOW_PHONE_SIGNAL; windowIndex < WINDOW_OVERWRITE_MODAL; windowIndex++)
    {
        FillWindowPixelBuffer(windowIndex, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
        PutWindowTilemap(windowIndex);
        CopyWindowToVram(windowIndex, COPYWIN_FULL);
    }
}

static const u8 sText_App_None[] = _("");

static const u8 sText_App_Pokemon[] = _("Pokémon");
static const u8 sText_App_Bag[]     = _("Bag");
static const u8 sText_App_Map[]     = _("Map");
static const u8 sText_App_Quest[]   = _("Quest");
static const u8 sText_App_Dexnav[]  = _("Dexnav");
static const u8 sText_App_Pokedex[] = _("Pokédex");
static const u8 sText_App_Buzzr[] = _("Buzzr");
static const u8 sText_App_Profile[] =_("Profile");
static const u8 sText_App_Glass[] =_("Google Glass");
static const u8 sText_App_Options[] = _("Options");
static const u8 sText_App_Presto[]  = _("Presto");

static const u8 sText_Unknown_Location[] = _("Unknown");

static const u8 sText_ClockDigits[] =  _("{STR_VAR_2}:{STR_VAR_3}$");
static const u8 sText_ClockDigitsLeadingZero[] =  _("{STR_VAR_2}:0{STR_VAR_3}$");

static const u8 sText_HelpBar_Default[] = _("{A_BUTTON} Open {B_BUTTON} Return {SELECT_BUTTON} Reorder {START_BUTTON} Save");
static const u8 sText_HelpBar_MoveMode[] = _("{A_BUTTON} Place {B_BUTTON} Return to Menu");
static const u8 sText_HelpBar_SaveAsk[] = _("{START_BUTTON} Save Adventure {B_BUTTON} Cancel");
static const u8 sText_HelpBar_SaveComplete[] = _("{START_BUTTON} Return to Overworld {B_BUTTON} Return to Menu");
static const u8 sText_HelpBar_OverworldSaveComplete[]  = _("{START_BUTTON} Return to Overworld");
static const u8 sText_HelpBar_SaveOverwriteAsk[] = _("{START_BUTTON}+ {A_BUTTON} Overwrite Old Adventure {B_BUTTON} Cancel");

static const u8 sStartMenuApp_Pokemon_Gfx[]  = INCBIN_U8("graphics/start_menu/app_pokemon.4bpp");
static const u8 sStartMenuApp_Bag_Gfx[]      = INCBIN_U8("graphics/start_menu/app_bag.4bpp");
static const u8 sStartMenuApp_Map_Gfx[]      = INCBIN_U8("graphics/start_menu/app_map.4bpp");
static const u8 sStartMenuApp_Quest_Gfx[]    = INCBIN_U8("graphics/start_menu/app_quest.4bpp");
static const u8 sStartMenuApp_Dexnav_Gfx[]   = INCBIN_U8("graphics/start_menu/app_dexnav.4bpp");
static const u8 sStartMenuApp_Pokedex_Gfx[]  = INCBIN_U8("graphics/start_menu/app_pokedex.4bpp");
static const u8 sStartMenuApp_Buzzr_Gfx[]    = INCBIN_U8("graphics/start_menu/app_buzzr.4bpp");
static const u8 sStartMenuApp_Options_Gfx[]  = INCBIN_U8("graphics/start_menu/app_options.4bpp");
static const u8 sStartMenuApp_Profile_Gfx[]  = INCBIN_U8("graphics/start_menu/app_profile.4bpp");
static const u8 sStartMenuApp_Presto_Gfx[]   = INCBIN_U8("graphics/start_menu/app_presto.4bpp");
static const u8 sStartMenuApp_Default_Gfx[]  = INCBIN_U8("graphics/start_menu/app_default.4bpp");
static const u8 sStartMenuApp_Glass_Gfx[]  = INCBIN_U8("graphics/start_menu/app_glass.4bpp");

static const u8 sStartMenuApp_Glass_Move_Mode_Gfx[]  = INCBIN_U8("graphics/start_menu/app_glass_move.4bpp");
static const u8 sStartMenuApp_Pokemon_Move_Mode_Gfx[]  = INCBIN_U8("graphics/start_menu/app_pokemon_move.4bpp");
static const u8 sStartMenuApp_Bag_Move_Mode_Gfx[]      = INCBIN_U8("graphics/start_menu/app_bag_move.4bpp");
static const u8 sStartMenuApp_Map_Move_Mode_Gfx[]      = INCBIN_U8("graphics/start_menu/app_map_move.4bpp");
static const u8 sStartMenuApp_Quest_Move_Mode_Gfx[]    = INCBIN_U8("graphics/start_menu/app_quest_move.4bpp");
static const u8 sStartMenuApp_Dexnav_Move_Mode_Gfx[]   = INCBIN_U8("graphics/start_menu/app_dexnav_move.4bpp");
static const u8 sStartMenuApp_Pokedex_Move_Mode_Gfx[]  = INCBIN_U8("graphics/start_menu/app_pokedex_move.4bpp");
static const u8 sStartMenuApp_Buzzr_Move_Mode_Gfx[]  = INCBIN_U8("graphics/start_menu/app_buzzr_move.4bpp");
static const u8 sStartMenuApp_Options_Move_Mode_Gfx[]  = INCBIN_U8("graphics/start_menu/app_options_move.4bpp");
static const u8 sStartMenuApp_Profile_Move_Mode_Gfx[]  = INCBIN_U8("graphics/start_menu/app_profile_move.4bpp");
static const u8 sStartMenuApp_Presto_Move_Mode_Gfx[]   = INCBIN_U8("graphics/start_menu/app_presto_move.4bpp");
static const u8 sStartMenuApp_Default_Move_Mode_Gfx[]  = INCBIN_U8("graphics/start_menu/app_default_move.4bpp");

static const u8 sStartMenuApp_Signal_0_Gfx[]  = INCBIN_U8("graphics/start_menu/signal_0.4bpp");
static const u8 sStartMenuApp_Signal_1_Gfx[]  = INCBIN_U8("graphics/start_menu/signal_1.4bpp");
static const u8 sStartMenuApp_Signal_2_Gfx[]  = INCBIN_U8("graphics/start_menu/signal_2.4bpp");
static const u8 sStartMenuApp_Signal_3_Gfx[]  = INCBIN_U8("graphics/start_menu/signal_3.4bpp");

static void StartMenu_DisplayPartyIcons(void)
{
    u8 x = sMenuWindowTemplates[WINDOW_PARTY].tilemapLeft + 2;
    u8 y = sMenuWindowTemplates[WINDOW_PARTY].tilemapTop + 1;

    u8 i;

    for(i = 0; i < PARTY_SIZE; i++){
        if(GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) != SPECIES_NONE)
            ShowSpeciesIcon(i, (x*8) + 4, (y*8));
        x = x + 4;
    }
}

static u8 GetCurrentSignal()
{
    //this one will be modified depending on how the story works, its not something that I will do since I'm not involved with the story
    //here you can change the signal this menu will get in certain areas in the game
    //the flag 0x89 is currently being used so I can't insert it but when anyone inserts it just remove the comments below
    //if(FlagGet(FLAG_PHONE_NO_SERVICE))
    //    return 0;
    //else
    return 3;
}

static void StartMenu_DisplayPhoneSignal(void)
{
    u8 signal = GetCurrentSignal();
    u8 x = 0, y = 0, signalIconHeight = 16, signalIconWidth = 16, windowId = WINDOW_PHONE_SIGNAL;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch(signal){
        case 0:
            BlitBitmapToWindow(windowId, sStartMenuApp_Signal_0_Gfx, x, y, signalIconWidth, signalIconHeight);
            break;
        case 1:
            BlitBitmapToWindow(windowId, sStartMenuApp_Signal_1_Gfx, x, y, signalIconWidth, signalIconHeight);
            break;
        case 2:
            BlitBitmapToWindow(windowId, sStartMenuApp_Signal_2_Gfx, x, y, signalIconWidth, signalIconHeight);
            break;
        default:
            BlitBitmapToWindow(windowId, sStartMenuApp_Signal_3_Gfx, x, y, signalIconWidth, signalIconHeight);
            break;
    }
    CopyWindowToVram(WINDOW_PHONE_SIGNAL,COPYWIN_GFX);
}

static void StartMenu_PrintTime(void)
{
    u8 hours = gLocalTime.hours;
    u8 minutes = gLocalTime.minutes;
    u8 x = 0, y = 0;

    FillWindowPixelBuffer(WINDOW_TIME_NUMBER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    ConvertIntToDecimalStringN(gStringVar2, hours, STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar3, minutes, STR_CONV_MODE_LEFT_ALIGN, 2);

    if(minutes >= 10)
        StringExpandPlaceholders(gStringVar4, sText_ClockDigits);
    else
        StringExpandPlaceholders(gStringVar4, sText_ClockDigitsLeadingZero);

    AddTextPrinterParameterized4(WINDOW_TIME_NUMBER, FONT_NARROW, x, y, GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar4);
    CopyWindowToVram(WINDOW_TIME_NUMBER,COPYWIN_GFX);
}

static bool32 IsMonNotEmpty(u32 partyIndex)
{
    return (GetMonData(&gPlayerParty[partyIndex],MON_DATA_SPECIES_OR_EGG,NULL) != SPECIES_NONE);
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

static void StartMenu_DisplayHP(void)
{
    u32 windowId = WINDOW_PARTY, y = 1, i;
    s32 x = -4;

    FillWindowPixelBuffer(WINDOW_PARTY, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    for(i = 0; i < PARTY_SIZE; i++)
    {
        x += 4;

        if(!IsMonNotEmpty(i))
            continue;

        BlitBitmapToWindow(windowId, sStartMenu_HPBar_Gfx, (x*8)+8, (y*8), 24, 16);
        BlitBitmapToWindow(windowId, GetBarGfx(GetHPEggCyclePercent(i)), (x*8)+8, ((y+2)*8), 24, 8);
    }

    CopyWindowToVram(WINDOW_PARTY,COPYWIN_GFX);
}

static void StartMenu_PrintTimeOfDay(void)
{
    u8 hours = gLocalTime.hours;
    u8 windowId = WINDOW_TIME_STRING, x = 0, y = 2;
    FillWindowPixelBuffer(WINDOW_TIME_STRING, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if(hours >= 6 && hours < 10)
        StringExpandPlaceholders(gStringVar1, gText_Morning);
    else if(hours < 19)
        StringExpandPlaceholders(gStringVar1, gText_Day);
    else if(hours < 20)
        StringExpandPlaceholders(gStringVar1, gText_Evening);
    else
        StringExpandPlaceholders(gStringVar1, gText_Night);

    AddTextPrinterParameterized4(windowId, FONT_NARROW, x, y, GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar1);
    CopyWindowToVram(WINDOW_TIME_STRING,COPYWIN_GFX);
}

static bool32 IsMenuInMoveMode(void)
{
    return sMenuDataPtr->isMoveMode;
}

static void StartMenu_DrawPhoneAppIcon(u8 i, u8 windowId, const u8 * gfx, const u8 * moveModeGfx, u8 x, u8 y, u8 width, u8 height)
{
    if(IsMenuInMoveMode() && i != 2)
    {
        BlitBitmapToWindow(windowId, moveModeGfx, (x*8),y,width, height);
        BlitBitmapToWindow(windowId, sStartMenuCursorMoveMode_Gfx, (x*8),y, width, height);
    } else {
        BlitBitmapToWindow(windowId, gfx, (x*8),y, width, height);
    }
}

static bool8 StartMenu_DisplayPhoneApps(void)
{
    u8 phoneIconSlot = 0, phoneApp = 0, appIconHeight = 40, appIconWidth = 40, windowId = WINDOW_PHONE_APPS, x = 0, y = 0;
    u8 currentApp = StartMenu_GetCurrentApp();

    const u8 *sStartMenuAppGfx[NUM_TOTAL_APPS + 1][2] =
    {
        {sStartMenuApp_Pokemon_Gfx, sStartMenuApp_Pokemon_Move_Mode_Gfx},
        {sStartMenuApp_Bag_Gfx, sStartMenuApp_Bag_Move_Mode_Gfx},
        {sStartMenuApp_Map_Gfx, sStartMenuApp_Map_Move_Mode_Gfx},
        {sStartMenuApp_Quest_Gfx, sStartMenuApp_Quest_Move_Mode_Gfx},
        {sStartMenuApp_Dexnav_Gfx, sStartMenuApp_Dexnav_Move_Mode_Gfx},
        {sStartMenuApp_Pokedex_Gfx, sStartMenuApp_Pokedex_Move_Mode_Gfx},
        {sStartMenuApp_Buzzr_Gfx, sStartMenuApp_Buzzr_Move_Mode_Gfx},
        {sStartMenuApp_Options_Gfx, sStartMenuApp_Options_Move_Mode_Gfx},
        //{sStartMenuApp_Profile_Gfx, sStartMenuApp_Profile_Move_Mode_Gfx},
        {sStartMenuApp_Glass_Gfx, sStartMenuApp_Glass_Move_Mode_Gfx},
        {sStartMenuApp_Presto_Gfx, sStartMenuApp_Presto_Move_Mode_Gfx},
        {sStartMenuApp_Default_Gfx, sStartMenuApp_Default_Move_Mode_Gfx},
    };

    if(sMenuDataPtr->calledFromOverworld)
        return FALSE;

    FillWindowPixelBuffer(WINDOW_PHONE_APPS, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    for(phoneIconSlot = 0; phoneIconSlot < NUM_APPS_PER_SCREEN; phoneIconSlot++){

        u32 index = (currentApp + NUM_TOTAL_APPS - phoneIconSlot + 2);
        phoneApp = GetCurrentAppFromIndex(index);
        StartMenu_DrawPhoneAppIcon(phoneIconSlot, windowId, sStartMenuAppGfx[phoneApp][0], sStartMenuAppGfx[phoneApp][1],x,y,appIconHeight,appIconWidth);

        x += 6;
    }

    StartMenu_DisplaySelector(); //Selection Sprite
    CopyWindowToVram(WINDOW_PHONE_APPS,COPYWIN_GFX);
    return TRUE;
}

static void StartMenu_PrintMapName(void)
{
    u8 windowId = WINDOW_NAME_MAP, x = 4, y = 0;
    FillWindowPixelBuffer(WINDOW_NAME_MAP, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    GetMapNameGeneric(gStringVar1, gMapHeader.regionMapSectionId);
    AddTextPrinterParameterized4(windowId, FONT_NARROW, x, y, GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar1);
    CopyWindowToVram(WINDOW_NAME_MAP,COPYWIN_GFX);
}

static void StartMenu_DisplaySelector(void)
{
    u8 appIconHeight = 40, appIconWidth = 40, windowId = WINDOW_PHONE_APPS, x = 96, y = 0;

    BlitBitmapToWindow(windowId, sStartMenuCursor_Gfx, x, y, appIconWidth, appIconHeight);
}

static bool8 StartMenu_DisplayPointer(void)
{
    u8 pointerWidth = 16, pointerHeight = 24, windowId = WINDOW_POINTER, x = 0, y = 0;

    if(sMenuDataPtr->calledFromOverworld)
        return FALSE;

    FillWindowPixelBuffer(WINDOW_POINTER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if(!IsMenuInMoveMode())
        BlitBitmapToWindow(windowId, sStartMenuRowIcon_Gfx, x, y, pointerWidth, pointerHeight);

    CopyWindowToVram(WINDOW_POINTER,COPYWIN_GFX);
    return TRUE;
}

static void StartMenu_PrintAppName(void)
{
    const u8 *str_SelectedOption;
    u8 x = 0, y = 0;
    u8 currentApp = StartMenu_GetCurrentApp();

    if(sMenuDataPtr->calledFromOverworld)
        return;

    FillWindowPixelBuffer(WINDOW_NAME_APP, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch(GetCurrentAppFromIndex(currentApp)){
        case APP_POKEMON:
            str_SelectedOption  = sText_App_Pokemon;
            break;
        case APP_BAG:
            str_SelectedOption = sText_App_Bag;
            break;
        case APP_MAP:
            str_SelectedOption = sText_App_Map;
            break;
        case APP_QUEST:
            str_SelectedOption = sText_App_Quest;
            break;
        case APP_DEXNAV:
            str_SelectedOption = sText_App_Dexnav;
            break;
        case APP_POKEDEX:
            str_SelectedOption = sText_App_Pokedex;
            break;
        case APP_BUZZR:
            str_SelectedOption = sText_App_Buzzr;
            break;
        case APP_OPTIONS:
            str_SelectedOption = sText_App_Options;
            break;
        case APP_PROFILE:
            str_SelectedOption = sText_App_Glass;
            break;
        case APP_PRESTO:
            str_SelectedOption = sText_App_Presto;
            break;
        default:
            str_SelectedOption = sText_App_None;
            break;
    }

    StringCopy(gStringVar3,str_SelectedOption);
    FillWindowPixelBuffer(WINDOW_NAME_APP, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    AddTextPrinterParameterized4(WINDOW_NAME_APP, FONT_NARROW, x, y, GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, str_SelectedOption);
    CopyWindowToVram(WINDOW_NAME_APP,COPYWIN_GFX);
}

static void StartMenu_SaveDialog_GetMessage(void)
{
    switch (sMenuDataPtr->saveMode)
    {
        case SAVE_MODE_ASK:
            StringCopy(gStringVar1, gText_SaveYourAdventure);
            break;
        case SAVE_MODE_FORCE:
        case SAVE_MODE_IN_PROGRESS:
            StringCopy(gStringVar1, gText_NowSavingAdventure);
            break;
        case SAVE_MODE_SUCCESS:
            StringCopy(gStringVar1, gText_YouSaved);
            break;
        case SAVE_MODE_ERROR:
            StringCopy(gStringVar1, gText_ThereWasAnError);
            break;
        case SAVE_MODE_OVERWRITE:
            StringCopy(gStringVar1, gText_Blank);
            break;
        default:
            break;
    }
}

u8 StartMenu_GetQuestForStartMenu(void)
{
    u8 i;
    u8 selectedQuest = QUEST_COUNT;

    for (i = QUEST_COUNT; i --> 0;){
        if(QuestMenu_GetSetQuestState(i,FLAG_GET_ACTIVE))
            selectedQuest = i;
    }

    for(i = 0; i < QUEST_COUNT; i++){
        if(QuestMenu_GetSetQuestState(i, FLAG_GET_FAVORITE) && QuestMenu_GetSetQuestState(i,FLAG_GET_ACTIVE))
            selectedQuest = i;
    }

    return selectedQuest;
}

static void StartMenu_PrintQuestInfo(void)
{
    u8 windowId = WINDOW_QUEST_INFO, x = 4, y = 0;

    bool8 hasCommunicationError = sMenuDataPtr->shouldShowErrorMessage;
    bool8 isSaveModeEngaged = (sMenuDataPtr->saveMode != SAVE_MODE_NOT_ENGAGED);
    bool8 storyNotClear = (VarGet(VAR_STORYLINE_STATE) < STORY_CLEAR);
    u8 selectedQuest = StartMenu_GetQuestForStartMenu();

    FillWindowPixelBuffer(WINDOW_QUEST_INFO, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (hasCommunicationError)
    {
        StringCopy(gStringVar1,gText_CommErrorEllipsis);
        sMenuDataPtr->shouldShowErrorMessage = FALSE;
    }

    else if (isSaveModeEngaged)
    {
        StartMenu_SaveDialog_GetMessage();
    }

    else if (storyNotClear)
    {
        StringCopy(gStringVar1,GetQuestDesc_PlayersAdventure());
    }
    else if(selectedQuest != QUEST_COUNT)
    {
        QuestMenu_UpdateQuestDesc(selectedQuest);
    }
    else
    {
        StringCopy(gStringVar1,gText_PokemonPsychoShift);
    }

    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, x, y, GetFontAttribute(FONT_SMALL_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_SMALL_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);

    CopyWindowToVram(WINDOW_QUEST_INFO,COPYWIN_GFX);
}

static void StartMenu_PrintHelpBar(void)
{
    u8 windowId = WINDOW_HELP_BAR, x = 4, y = 0;

    FillWindowPixelBuffer(WINDOW_HELP_BAR, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch(sMenuDataPtr->saveMode)
    {
        case SAVE_MODE_ASK:
            StringCopy(gStringVar1, sText_HelpBar_SaveAsk);
            break;
        case SAVE_MODE_IN_PROGRESS:
        case SAVE_MODE_FORCE:
            StringCopy(gStringVar1, gText_Blank);
            break;
        case SAVE_MODE_SUCCESS:
        case SAVE_MODE_ERROR:
            StringCopy(gStringVar1, sText_HelpBar_SaveComplete);

            if(sMenuDataPtr->calledFromOverworld)
                StringCopy(gStringVar1, sText_HelpBar_OverworldSaveComplete);
            break;
        case SAVE_MODE_OVERWRITE:
            StringCopy(gStringVar1, sText_HelpBar_SaveOverwriteAsk);
            break;
        default:
            StringCopy(gStringVar1, sText_HelpBar_Default);
            break;
    }

    if (IsMenuInMoveMode())
        StringCopy(gStringVar1, sText_HelpBar_MoveMode);

    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, x, y,GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);

    CopyWindowToVram(WINDOW_HELP_BAR,COPYWIN_GFX);
}

static u8 StartMenu_GetCurrentApp(void){
    u8 currentAppId = sMenuDataPtr->currentAppId;
    bool8 isOnSecondScreen = sMenuDataPtr->areYouOnSecondScreen;
    u8 adjustedAppId = isOnSecondScreen ? (currentAppId + NUM_APPS_PER_SCREEN) : currentAppId;

    return adjustedAppId;
}

static void StartMenu_PrintOverwriteModal(void)
{
    u8 windowId = WINDOW_OVERWRITE_MODAL;

    FillWindowPixelBuffer(WINDOW_OVERWRITE_MODAL, PIXEL_FILL(TEXT_COLOR_WHITE));
    PutWindowTilemap(WINDOW_OVERWRITE_MODAL);
    CopyWindowToVram(WINDOW_OVERWRITE_MODAL,COPYWIN_FULL);

        AddTextPrinterParameterized4(windowId, FONT_NORMAL, 88, 8,GetFontAttribute(FONT_NORMAL,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NORMAL,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gText_EraseHeader);
        AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, 33, 18,GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gText_EraseOldAdventure);
        AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, 33, 48,GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_RED], TEXT_SKIP_DRAW, gText_ConfirmOverwrite);
        AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, 33, 68,GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), GetFontAttribute(FONT_NARROW,FONTATTR_LETTER_SPACING), sMenuWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gText_CancelOverwrite);

        CopyWindowToVram(WINDOW_OVERWRITE_MODAL, COPYWIN_GFX);
        StartMenu_PrintQuestInfo(); //Print Quest Info
}

static void StartMenu_DestroyOverwriteModal(void)
{
    FillWindowPixelBuffer(WINDOW_OVERWRITE_MODAL, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    CopyWindowToVram(WINDOW_OVERWRITE_MODAL, COPYWIN_GFX);

    Menu_BufferToVram_Windows();
    PlaySE(SE_POKENAV_OFF);
    PrintToAllWindows();
}

static void PrintToAllWindows(void)
{
    StartMenu_DisplayPhoneSignal(); //Signal
    StartMenu_PrintTime(); //Time
    StartMenu_PrintTimeOfDay(); //Time of the Day
    StartMenu_DisplayHP(); //HP Bars
    StartMenu_DisplayPhoneApps(); //App Icons
    StartMenu_PrintMapName(); //Current Location
    StartMenu_DisplayPointer(); //Screen Indicator
    StartMenu_PrintAppName(); // Current App Title
    StartMenu_PrintQuestInfo(); //Print Quest Info
    StartMenu_PrintHelpBar(); //Print Help Bar
}

static void *GetSpriteCallbackForIcon(u32 percent, bool32 isEgg)
{
    if (((percent > 20) && isEgg) || percent == 0)
        return SpriteCallbackDummy;

    return SpriteCB_MonIcon;
}

static u8 ShowSpeciesIcon(u8 slot, u8 x, u8 y)
{
    struct Pokemon *mon = &gPlayerParty[slot];
    u32 percent = GetHPEggCyclePercent(slot);
    u16 species = GetMonData(mon, MON_DATA_SPECIES_OR_EGG);
    bool32 isEgg = (species == SPECIES_EGG);
    species = ReturnTransformationIfConditionMet(mon);
    LoadMonIconPalette(species);

    sMenuDataPtr->PartyPokemonIcon[slot] = CreateMonIcon(species,GetSpriteCallbackForIcon(percent, isEgg),x,y,0,GetMonData(mon,MON_DATA_PERSONALITY));

    gSprites[sMenuDataPtr->PartyPokemonIcon[slot]].invisible = FALSE;
    return sMenuDataPtr->PartyPokemonIcon[slot];
}

static void Task_MenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active && (sMenuDataPtr->calledFromOverworld))
        gTasks[taskId].func = StartMenu_Task_OverworldSave;
    else if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MenuMain;
}

static void Task_MenuTurnOff(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMenuDataPtr->savedCallback);
        StartMenu_Menu_FreeResources();
        DestroyTask(taskId);
    }
}

void Task_OpenSaveMenuStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        //PlayRainStoppingSoundEffect();
        //CleanupOverworldWindowsAndTilemaps();
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
    }
}

// App Callbacks ----------------------------------------------------------------------------------------------------
void Task_OpenPokemonPartyFromStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
		StartMenu_Menu_FreeResources();
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();
        SetMainCallback2(CB2_PartyMenuFromStartMenu); // Display party menu
    }
}

void Task_OpenBagFromStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
		StartMenu_Menu_FreeResources();
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();
        SetMainCallback2(CB2_BagMenuFromStartMenu); // Display bag menu
    }
}

void Task_OpenTrainerCardFromStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();

        if (InUnionRoom())
            ShowPlayerTrainerCard(CB2_ReturnToUIMenu); // Display trainer card
        else if (FlagGet(FLAG_SYS_FRONTIER_PASS))
            ShowFrontierPass(CB2_ReturnToUIMenu); // Display frontier pass
        else
            ShowPlayerTrainerCard(CB2_ReturnToUIMenu); // Display trainer card
    }
}

void Task_OpenPokenavStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
		PlayRainStoppingSoundEffect();
		CleanupOverworldWindowsAndTilemaps();
        CreateTask(Task_OpenMapSystemFromStartMenu, 0);
    }
}

void Task_OpenOptionsMenuStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        StartMenu_Menu_FreeResources();
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();
        Options_Menu_Init(CB2_ReturnToUIMenu);
        //SetMainCallback2(Option_Menu_Init); // Display option menu
        gMain.savedCallback = CB2_ReturnToField;
    }
}

void Task_OpenPrestoStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        StartMenu_Menu_FreeResources();
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();
        Presto_Init(CB2_ReturnToUIMenu);
        //SetMainCallback2(Option_Menu_Init); // Display option menu
        gMain.savedCallback = CB2_ReturnToUIMenu;
    }
}

void ClearStartMenuDataBeforeExit(void)
{
    sMenuDataPtr->isAppSelectedForMove = FALSE;
    sMenuDataPtr->isMoveMode = FALSE;
}

/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    u8 CurrentApp = sMenuDataPtr->currentAppId;

    if(sMenuDataPtr->areYouOnSecondScreen)
        CurrentApp = CurrentApp + NUM_APPS_PER_SCREEN;

    if (JOY_NEW(B_BUTTON))
    {
        if(IsMenuInMoveMode())
        {
            StartMenuTempIndextoIndex();
            sMenuDataPtr->isMoveMode = FALSE;
            sMenuDataPtr->isAppSelectedForMove = FALSE;

            StartMenu_DisplayPhoneApps(); //App Icons
            StartMenu_DisplayPointer(); //Screen Indicator
            StartMenu_PrintHelpBar(); //Print Help Bar

        }
        else{
            PlaySE(SE_PC_OFF);
            ClearStartMenuDataBeforeExit();
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_MenuTurnOff;
        }
    }

    if (JOY_NEW(R_BUTTON) || JOY_NEW(L_BUTTON))
    {
        if(!IsMenuInMoveMode())
            sMenuDataPtr->areYouOnSecondScreen = !sMenuDataPtr->areYouOnSecondScreen;

        StartMenu_DisplayPhoneApps(); //App Icons
        StartMenu_PrintAppName(); // Current App Title
    }


    if(JOY_NEW(DPAD_LEFT))
    {
        if(IsMenuInMoveMode() && sMenuDataPtr->isAppSelectedForMove)
        {
            if(CurrentApp < NUM_TOTAL_APPS-1){
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp + 1];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp + 1] = tempAppIndex;
            }
            else{
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[0];
                gSaveBlock3Ptr->startMenuAppIndex[0] = tempAppIndex;

            }
        }

        if(sMenuDataPtr->currentAppId < NUM_APPS_PER_SCREEN-1){
            sMenuDataPtr->currentAppId++;
        }
        else{
            sMenuDataPtr->currentAppId = 0;
            sMenuDataPtr->areYouOnSecondScreen = !sMenuDataPtr->areYouOnSecondScreen;
        }

        if(sMenuDataPtr->areYouOnSecondScreen){
            u8 tempAppIndex = sMenuDataPtr->currentAppId + NUM_APPS_PER_SCREEN;
            VarSet(CURRENT_APP_ID_VAR, tempAppIndex);
        }
        else{
            u8 tempAppIndex = sMenuDataPtr->currentAppId;
            VarSet(CURRENT_APP_ID_VAR, tempAppIndex);
        }

        PlaySE(SE_SELECT);

        StartMenu_DisplayPhoneApps(); //App Icons
        StartMenu_PrintAppName(); // Current App Title
    }

    if(JOY_NEW(DPAD_UP))
    {
        if(IsMenuInMoveMode() && sMenuDataPtr->isAppSelectedForMove)
        {
            if(CurrentApp < NUM_TOTAL_APPS-1){
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp + 1];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp + 1] = tempAppIndex;
            }
            else{
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[0];
                gSaveBlock3Ptr->startMenuAppIndex[0] = tempAppIndex;
            }
        }

        if(sMenuDataPtr->currentAppId < NUM_APPS_PER_SCREEN-1){
            sMenuDataPtr->currentAppId++;
        }
        else{
            sMenuDataPtr->currentAppId = 0;
            sMenuDataPtr->areYouOnSecondScreen = !sMenuDataPtr->areYouOnSecondScreen;
        }
        PlaySE(SE_SELECT);

        StartMenu_DisplayPhoneApps(); //App Icons
        StartMenu_PrintAppName(); // Current App Title
    }

    if(JOY_NEW(DPAD_RIGHT))
    {
        if(IsMenuInMoveMode() && sMenuDataPtr->isAppSelectedForMove)
        {
            if(CurrentApp > 0){
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp - 1];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp - 1] = tempAppIndex;
            }
            else{
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[NUM_TOTAL_APPS-1];
                gSaveBlock3Ptr->startMenuAppIndex[NUM_TOTAL_APPS-1] = tempAppIndex;
            }
        }

        if(sMenuDataPtr->currentAppId > 0){
            sMenuDataPtr->currentAppId--;
        }
        else{
            sMenuDataPtr->currentAppId = NUM_APPS_PER_SCREEN-1;
            sMenuDataPtr->areYouOnSecondScreen = !sMenuDataPtr->areYouOnSecondScreen;
        }

        if(sMenuDataPtr->areYouOnSecondScreen){
            u8 tempAppIndex = sMenuDataPtr->currentAppId + NUM_APPS_PER_SCREEN;
            VarSet(CURRENT_APP_ID_VAR, tempAppIndex);
        }
        else{
            u8 tempAppIndex = sMenuDataPtr->currentAppId;
            VarSet(CURRENT_APP_ID_VAR, tempAppIndex);
        }

        PlaySE(SE_SELECT);

        StartMenu_DisplayPhoneApps(); //App Icons
        StartMenu_PrintAppName(); // Current App Title
    }

    if(JOY_NEW(DPAD_DOWN))
    {
        if(IsMenuInMoveMode() && sMenuDataPtr->isAppSelectedForMove)
        {
            if(CurrentApp > 0){
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp - 1];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp - 1] = tempAppIndex;
            }
            else{
                u8 tempAppIndex;
                tempAppIndex = gSaveBlock3Ptr->startMenuAppIndex[CurrentApp];
                gSaveBlock3Ptr->startMenuAppIndex[CurrentApp] = gSaveBlock3Ptr->startMenuAppIndex[NUM_TOTAL_APPS-1];
                gSaveBlock3Ptr->startMenuAppIndex[NUM_TOTAL_APPS-1] = tempAppIndex;
            }
        }

        if(sMenuDataPtr->currentAppId > 0){
            sMenuDataPtr->currentAppId--;
        }
        else{
            sMenuDataPtr->currentAppId = NUM_APPS_PER_SCREEN-1;
            sMenuDataPtr->areYouOnSecondScreen = !sMenuDataPtr->areYouOnSecondScreen;
        }
        PlaySE(SE_SELECT);

        StartMenu_DisplayPhoneApps(); //App Icons
        StartMenu_PrintAppName(); // Current App Title
    }

    if (JOY_NEW(A_BUTTON))
    {
        if(!IsMenuInMoveMode())
        {
            ClearStartMenuDataBeforeExit();
            switch(GetCurrentAppFromIndex(CurrentApp))
            {
                case APP_NONE:
                    PlaySE(SE_BOO);
                    sMenuDataPtr->shouldShowErrorMessage = TRUE;
                    break;
                case APP_BAG:
                    PlaySE(SE_SELECT);
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    gTasks[taskId].func = Task_OpenBagFromStartMenu;
                    break;
                case APP_POKEDEX:
                    if(GetCurrentSignal() != 0){
                        PlaySE(SE_SELECT);
                        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                        gTasks[taskId].func = Task_OpenPokedexFromStartMenu;
                    }
                    else{
                        PlaySE(SE_BOO);
                        sMenuDataPtr->shouldShowErrorMessage = TRUE;
                    }

                    break;
                case APP_POKEMON:
                    PlaySE(SE_SELECT);
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    gTasks[taskId].func = Task_OpenPokemonPartyFromStartMenu;
                    break;
                case APP_PROFILE:
                    PlaySE(SE_SELECT);
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    gTasks[taskId].func = Task_OpenGlassFromStartMenu;
                    break;
                case APP_OPTIONS:
                    PlaySE(SE_SELECT);
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    gTasks[taskId].func = Task_OpenOptionsMenuStartMenu;
                    break;
                case APP_QUEST:
                    if(GetCurrentSignal() != 0){
                        PlaySE(SE_SELECT);
                        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                        gTasks[taskId].func = Task_QuestMenu_OpenFromStartMenu;
                    }
                    else{
                        PlaySE(SE_BOO);
                        sMenuDataPtr->shouldShowErrorMessage = TRUE;
                    }
                    break;
                case APP_BUZZR:
                    if(GetCurrentSignal() != 0){
                        PlayCry_Normal(SPECIES_CUTIEFLY,0);

                        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                        gTasks[taskId].func = Task_OpenBuzzrFromStartMenu;
                    }
                    else{
                        PlaySE(SE_BOO);
                        sMenuDataPtr->shouldShowErrorMessage = TRUE;
                    }
                    break;
                case APP_MAP:
                    if(GetCurrentSignal() != 0){
                        PlaySE(SE_SELECT);
                        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                        gTasks[taskId].func = Task_OpenPokenavStartMenu;
                    }
                    else{
                        PlaySE(SE_BOO);
                        sMenuDataPtr->shouldShowErrorMessage = TRUE;
                    }
                    break;
                case APP_PRESTO:
                    if(GetCurrentSignal() != 0){
                        PlaySE(SE_SELECT);
                        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                        gTasks[taskId].func = Task_OpenPrestoStartMenu;
                    }
                    else{
                        PlaySE(SE_BOO);
                        sMenuDataPtr->shouldShowErrorMessage = TRUE;
                    }
                    break;
                case APP_DEXNAV:
                    if(GetCurrentSignal() != 0){
                        PlaySE(SE_SELECT);
                        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                        gTasks[taskId].func = Task_OpenDexNavFromStartMenu;
                    }
                    else{
                        PlaySE(SE_BOO);
                        sMenuDataPtr->shouldShowErrorMessage = TRUE;
                    }
                    break;
            }
        }
        else{
            sMenuDataPtr->isMoveMode = FALSE;
            sMenuDataPtr->isAppSelectedForMove = FALSE;
            PlaySE(SE_SELECT);
        }

        StartMenu_DisplayPhoneApps(); //App Icons
        StartMenu_DisplayPointer(); //Screen Indicator
        StartMenu_PrintHelpBar(); //Print Help Bar
    }

    if(JOY_NEW(SELECT_BUTTON))
    {
        if (IsMenuInMoveMode())
        {
            sMenuDataPtr->isMoveMode = FALSE;
            sMenuDataPtr->isAppSelectedForMove = FALSE;
        }
        else{
            sMenuDataPtr->isMoveMode = TRUE;
            sMenuDataPtr->isAppSelectedForMove = TRUE;
        }
        PlaySE(SE_SELECT);
        StartMenuIndextoTempIndex();

        StartMenu_DisplayPhoneApps(); //App Icons
        StartMenu_DisplayPointer(); //Screen Indicator
        StartMenu_PrintHelpBar(); //Print Help Bar
    }

    if (JOY_NEW(START_BUTTON) && (!IsMenuInMoveMode()))
    {
        StartMenu_UpdateTextAndSetSaveMode(SAVE_MODE_ASK);
        gTasks[taskId].func = StartMenu_Task_SaveDialog;
    }
}

static void StartMenu_UpdateTextAndSetSaveMode(u8 saveMode)
{
    sMenuDataPtr->saveMode = saveMode;
    StartMenu_PrintQuestInfo(); //Print Quest Info
    StartMenu_PrintHelpBar(); //Print Help Bar
}

static void StartMenu_SaveDialog_ReturnToMenu(u8 taskId)
{
    sMenuDataPtr->saveMode = SAVE_MODE_NOT_ENGAGED;
    StartMenu_PrintQuestInfo();
    gTasks[taskId].func = Task_MenuMain;
}
static void StartMenu_SaveDialog_ReturnToField(void)
{
    StartMenu_SetSaveSuccessState();
    Menu_FadeAndBail();
}

static void StartMenu_Task_OverworldSave(u8 taskId)
{
    switch(sMenuDataPtr->saveMode)
    {
        case SAVE_MODE_FORCE:
            StartMenu_PerformSave();
            break;
        case SAVE_MODE_ASK:
            if ((JOY_NEW(A_BUTTON)) || (JOY_NEW(START_BUTTON))){
                StartMenu_SaveDialog_CheckSave();
                StartMenu_PrintHelpBar(); //Print Help Bar
            }

            if (JOY_NEW(B_BUTTON)){
                StartMenu_SaveDialog_ReturnToField();
            }

            break;

        case SAVE_MODE_NOT_ENGAGED:
        case SAVE_MODE_IN_PROGRESS:
        case SAVE_MODE_CANCELED:
            break;

        case SAVE_MODE_ERROR:
        case SAVE_MODE_SUCCESS:
            if ((JOY_NEW(A_BUTTON)) || (JOY_NEW(START_BUTTON))){
                StartMenu_SaveDialog_ReturnToField();
            }

            if (JOY_NEW(B_BUTTON)){
                StartMenu_SaveDialog_ReturnToField();
            }
            break;

        case SAVE_MODE_OVERWRITE:
            if ((gMain.heldKeys & START_BUTTON) && (gMain.heldKeys & A_BUTTON))
            {
                StartMenu_SaveDialog_DoSave();
            }
            //else
            if(JOY_NEW(ALL_BUT_START_OR_A))
            {
                StartMenu_DestroyOverwriteModal();
                StartMenu_UpdateTextAndSetSaveMode(SAVE_MODE_ASK);
                gTasks[taskId].func = StartMenu_Task_OverworldSave;
            }
            break;
        default:
            break;
    }
}

static void StartMenu_Task_SaveDialog(u8 taskId)
{
    switch(sMenuDataPtr->saveMode)
    {
        case SAVE_MODE_ASK:
            if ((JOY_NEW(A_BUTTON)) || (JOY_NEW(START_BUTTON))){
                StartMenu_SaveDialog_CheckSave();
                StartMenu_PrintHelpBar(); //Print Help Bar
            }

            if (JOY_NEW(B_BUTTON)){
                StartMenu_SaveDialog_ReturnToMenu(taskId);
            }

            break;

        case SAVE_MODE_NOT_ENGAGED:
        case SAVE_MODE_IN_PROGRESS:
        case SAVE_MODE_CANCELED:
            break;

        case SAVE_MODE_ERROR:
        case SAVE_MODE_SUCCESS:
            if ((JOY_NEW(A_BUTTON)) || (JOY_NEW(START_BUTTON))){
                StartMenu_SaveDialog_ReturnToField();
            }

            if (JOY_NEW(B_BUTTON)){
                StartMenu_SaveDialog_ReturnToMenu(taskId);
            }
            break;

        case SAVE_MODE_OVERWRITE:
            if ((gMain.heldKeys & START_BUTTON) && (gMain.heldKeys & A_BUTTON))
            {
                StartMenu_SaveDialog_DoSave();
            }
            if(JOY_NEW(ALL_BUT_START_OR_A))
            {
                StartMenu_DestroyOverwriteModal();
                StartMenu_SaveDialog_ReturnToMenu(taskId);
            }
            break;
        default:
            break;
    }
}

static void StartMenu_SaveDialog_CheckSave(void)
{
    if (gDifferentSaveFile == TRUE && gSaveFileStatus != SAVE_STATUS_EMPTY){
        sMenuDataPtr->saveMode = SAVE_MODE_OVERWRITE;
        StartMenu_PlaySaveSoundEffect();
        StartMenu_PrintOverwriteModal();
    }
            else{
            StartMenu_SaveDialog_DoSave();
            }
            }

static void StartMenu_SaveDialog_DoSave(void)
{
    PlaySE(SE_SELECT);

    if (sMenuDataPtr->saveMode == SAVE_MODE_OVERWRITE)
        StartMenu_DestroyOverwriteModal();

    StartMenu_PerformSave();
}

static void StartMenu_PerformSave(void)
{
    u8 saveStatus;
    StartMenu_UpdateTextAndSetSaveMode(SAVE_MODE_IN_PROGRESS);

    IncrementGameStat(GAME_STAT_SAVED_GAME);

    if (gDifferentSaveFile == TRUE)
    {
        VarSet(VAR_AUTOSAVE,0);
        saveStatus = TrySavingData(SAVE_OVERWRITE_DIFFERENT_FILE);
        gDifferentSaveFile = FALSE;
    }
    else
    {
        saveStatus = TrySavingData(SAVE_NORMAL);
    }

    if (saveStatus == SAVE_STATUS_OK){
        sMenuDataPtr->saveMode = SAVE_MODE_SUCCESS;
        StartMenu_PlaySaveSoundEffect();
    }
    else
    {
        sMenuDataPtr->saveMode = SAVE_MODE_ERROR;
        StartMenu_PlaySaveSoundEffect();
    }

    SaveStartTimer();
    StartMenu_PrintQuestInfo(); //Print Quest Info
    StartMenu_PrintHelpBar(); //Print Help Bar
}

static void StartMenu_PlaySaveSoundEffect(void)
{
    switch (sMenuDataPtr->saveMode){
        case SAVE_MODE_SUCCESS:
            PlaySE(SE_SAVE);
            break;
        case SAVE_MODE_ERROR:
            PlaySE(SE_BOO);
            break;
        case SAVE_MODE_OVERWRITE:
            PlaySE(SE_POKENAV_ON);
            break;
    }
}

void StartMenu_SetSaveSuccessState(void){
    gSpecialVar_Result = (sMenuDataPtr->saveMode == SAVE_MODE_SUCCESS);
}

void ShowStartMenuSaveScreen(void)
{
    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }
    StartMenuSaveScreenCallback();
    LockPlayerFieldControls();
}

bool32 ShowUIStartMenu(void)
{
    if (gPlayerAvatar.preventStep)
        return FALSE;

    if (ArePlayerFieldControlsLocked())
        return FALSE;

    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }

    PlaySE(SE_WIN_OPEN);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    StartMenuUiStartMenuCallback();
    LockPlayerFieldControls();
    return TRUE;
}

static bool8 StartMenuSaveScreenCallback(void)
{
    CreateTask(Task_OpenMenuFromOverworld, 0);
    return TRUE;
}

static bool8 StartMenuUiStartMenuCallback(void)
{
    CreateTask(Task_OpenMenuFromStartMenu, 0);
    return TRUE;
}
