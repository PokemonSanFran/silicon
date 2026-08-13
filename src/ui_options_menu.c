#include "global.h"
#include "strings.h"
#include "dma3.h"
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
#include "line_break.h"
#include "main_menu.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "overworld.h"
#include "trig.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/visual_options.h"
#include "constants/options_game.h"
#include "constants/options_battle.h"
#include "ui_options_menu.h"
#include "options_music.h"
#include "ui_main_menu.h"
#include "new_game.h"


//==========DEFINES==========//
struct MenuResources
{
	MainCallback savedCallback;
    u8 spriteIds[OPTIONS_SPRITE_ID_ARROW_COUNT];
    bool8 shouldShowDiscardDialogue;
    u8 currentOptionId;
    u8 currentScreenId;
    u8 currentFirstOption;
    bool8 areYouNotOnSettingsHub;
    //u8 TemporalOptions[SETTINGS_COUNT][NUM_OPTIONS_MAX_SETTINGS];
};

enum WindowIds
{
	WINDOW_1,
};

//==========EWRAM==========//
static struct MenuResources *sMenuDataPtr = NULL;
static u8 *sBgTilemapBuffer[MENU_BACKGROUND_COUNT] = {NULL};
static u8 TemporalOptions[SETTINGS_COUNT][NUM_OPTIONS_MAX_SETTINGS]; //This is a temporal data used for the Discard Feature on Leave Dialog

//==========STATIC=DEFINES==========//
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void Menu_FadeAndBail(void);
static void Menu_LoadGraphics(void);
static void Menu_InitWindows(void);
static void PrintToWindow(u8 windowId, u8 colorIdx);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static u32 OptionMenu_FadeWhiteIfMainMenu();

static void HandlePresetData();
static void ChangePresetDataToCustom();

static void CopySaveBlockDataToTemporalData();
static void CopyTemporalDataToSaveBlockData();
bool8 AreYouOnCustomPresetData();
static void ChangeCurrentScreenPresetDataToCustom();
bool32 HaveSettingsChanged();
void PlaySoundEffectBasedOnTemporalMute(u16);
static void InitializeBackgroundsAndLoadBackgroundGraphics(void);

static bool32 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(void);
static void SetScheduleBgs(u32 backgroundId);
static void SpriteCallback_UpArrow(struct Sprite *sprite);
static void CreateUpArrowSprite(void);
static void SpriteCallback_DownArrow(struct Sprite *sprite);
static void CreateDownArrowSprite(void);
static void SpriteCallback_LeftArrow(struct Sprite *sprite);
static void CreateLeftArrowSprite(void);
static void SpriteCallback_RightArrow(struct Sprite *sprite);
static void CreateRightArrowSprite(void);
static void ResetAllSpriteIds(void);
static bool8 OptionsMenu_GetShouldShowDiscardDialogue(void);
static void OptionsMenu_SetShouldShowDiscardDialogue(bool8 value);
static void OptionsMenu_ToggleShouldShowDiscardDialogue(void);
static bool8 OptionsMenu_GetAreYouNotOnSettingsHub(void);
static void OptionsMenu_SetAreYouNotOnSettingsHub(bool8 value);
static void OptionsMenu_ToggleAreYouNotOnSettingsHub(void);
static u8 OptionsMenu_GetCurrentOptionId(void);
static void OptionsMenu_SetCurrentOptionId(u8 value);
static void OptionsMenu_IncrementCurrentOptionId(void);
static void OptionsMenu_DecrementCurrentOptionId(void);
static u8 OptionsMenu_GetCurrentScreenId(void);
static void OptionsMenu_SetCurrentScreenId(u8 value);
static void OptionsMenu_IncrementCurrentScreenId(void);
static void OptionsMenu_DecrementCurrentScreenId(void);
static u8 OptionsMenu_GetCurrentFirstOption(void);
static void OptionsMenu_SetCurrentFirstOption(u8 value);
static u16 OptionsMenu_GetTemporalOptions(enum OptionsIds settings, u32 option);
static void OptionsMenu_SetTemporalOptions(enum OptionsIds settings, u32 option, u8 value);
static void OptionsMenu_DecrementCurrentFirstOption(void);
static void OptionsMenu_IncrementCurrentFirstOption(void);

u8 OptionsMenu_GetSavedOptions(u32 category, u32 setting)
{
    return gSaveBlock2Ptr->options[category][setting];
}

void OptionsMenu_SetSavedOptions(u32 category, u32 setting, u32 value)
{
    gSaveBlock2Ptr->options[category][setting] = value;
}

void CopyTemporalDataToSaveBlockData()
{
	for(u32 i = 0 ;i < NUM_OF_PRESET_OPTIONS; i++)
        for(u32 j = 0 ;j < NUM_OPTIONS_GAME_SETTINGS; j++)
            gSaveBlock2Ptr->options[i][j] = TemporalOptions[i][j];
}

void CopySaveBlockDataToTemporalData()
{
	for(u32 i = 0 ;i < NUM_OF_PRESET_OPTIONS; i++)
        for(u32 j = 0 ;j < NUM_OPTIONS_GAME_SETTINGS; j++)
            TemporalOptions[i][j] = gSaveBlock2Ptr->options[i][j];
}

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[] =
{
	{
		.bg = 0,    // windows, etc
		.charBaseIndex = 0,
		.mapBaseIndex = 31,
		.priority = 0,
	},
	{
		.bg = 1,    // this bg loads the UI tilemap
		.charBaseIndex = 2,
		.mapBaseIndex = 25,
		.priority = 1,
	},
	{
		.bg = 2,    // this bg loads the UI tilemap
		.charBaseIndex = 3,
		.mapBaseIndex = 20,
		.priority = 2,
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
		.paletteNum = 0,    // palette index to use for text
		.baseBlock = 1,     // tile start in VRAM
	},
    DUMMY_WIN_TEMPLATE
};


static const u32 sCustomizationMenuUpArrow_Gfx[]        = INCGFX_U32("graphics/ui_menus/character_customization/up_arrow.png", ".4bpp.smol");
static const u32 sCustomizationMenuDownArrow_Gfx[]      = INCGFX_U32("graphics/ui_menus/character_customization/down_arrow.png", ".4bpp.smol");
static const u32 sCustomizationMenuLeftArrow_Gfx[]      = INCGFX_U32("graphics/ui_menus/character_customization/left_arrow.png", ".4bpp.smol");
static const u32 sCustomizationMenuRightArrow_Gfx[]     = INCGFX_U32("graphics/ui_menus/character_customization/right_arrow.png", ".4bpp.smol");

static const u32 sTMenuTiles[]   = INCGFX_U32("graphics/ui_menus/options_menu/tTiles.png", ".4bpp.smol");
static const u32 sTMenuTilemap[] = INCBIN_U32("graphics/ui_menus/options_menu/tTiles.bin.smolTM");

static const u32 sMenuTiles[]   = INCGFX_U32("graphics/ui_menus/options_menu/tiles.png", ".4bpp.smol");
static const u32 sMenuTilemap[] = INCBIN_U32("graphics/ui_menus/options_menu/tiles.bin.smolTM");
static const u16 sMenuPalette[] = INCGFX_U16("graphics/ui_menus/options_menu/palette_custom.pal", ".gbapal");
static const struct SpritePalette sInterfaceSpritePalette[] = {{sMenuPalette, 0}};

static const u16 sMenuPalette_Red[]      = INCGFX_U16("graphics/ui_menus/options_menu/palettes/red.pal", ".gbapal");
static const u16 sMenuPalette_Black[]    = INCGFX_U16("graphics/ui_menus/options_menu/palettes/black.pal", ".gbapal");
static const u16 sMenuPalette_Green[]    = INCGFX_U16("graphics/ui_menus/options_menu/palettes/green.pal", ".gbapal");
static const u16 sMenuPalette_Blue[]     = INCGFX_U16("graphics/ui_menus/options_menu/palettes/blue.pal", ".gbapal");
static const u16 sMenuPalette_Platinum[] = INCGFX_U16("graphics/ui_menus/options_menu/palettes/platinum.pal", ".gbapal");
static const u16 sMenuPalette_Scarlet[]  = INCGFX_U16("graphics/ui_menus/options_menu/palettes/scarlet.pal", ".gbapal");
static const u16 sMenuPalette_Violet[]   = INCGFX_U16("graphics/ui_menus/options_menu/palettes/violet.pal", ".gbapal");
static const u16 sMenuPalette_White[]    = INCGFX_U16("graphics/ui_menus/options_menu/palettes/white.pal", ".gbapal");
static const u16 sMenuPalette_Yellow[]   = INCGFX_U16("graphics/ui_menus/options_menu/palettes/yellow.pal", ".gbapal");
enum Colors
{
	FONT_BLACK,
	FONT_WHITE,
	FONT_RED,
	FONT_BLUE,
};
static const u8 sMenuWindowFontColors[][3] =
{
	[FONT_BLACK]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,   TEXT_COLOR_TRANSPARENT},
	[FONT_WHITE]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,       TEXT_COLOR_TRANSPARENT},
	[FONT_RED]      = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_RED,         TEXT_COLOR_TRANSPARENT},
	[FONT_BLUE]     = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_BLUE,        TEXT_COLOR_TRANSPARENT},
};

//==========FUNCTIONS==========//
// UI loader template
void CB2_OptionsFromStartMenu(void)
{
    Options_Menu_Init(CB2_StartMenu_ReturnToUI);
}

void CB2_InitUiOptionMenuFromDevLetter(void)
{
    NewGameInitData();
    SetUpMainMenuFromOutsideGame();
    Options_Menu_Init(CB2_NewGame);
}

void SetUpMainMenuFromOutsideGame(void)
{
	s32 i;

	ResetSpriteData();
	FreeAllSpritePalettes();
	ResetTasks();
	ResetBgsAndClearDma3BusyFlags(0);
	DeactivateAllTextPrinters();

	for (i = 0; i < 2; i++)
		FillWindowPixelBuffer(i, PIXEL_FILL(0));

    FillBgTilemapBufferRect_Palette0(0, 0, 0, 0, DISPLAY_TILE_WIDTH, DISPLAY_TILE_HEIGHT);
    LoadUserWindowBorderGfx(0, 1u, 0xD0u);
    Menu_LoadStdPalAt(0xE0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    StopMapMusic();
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
    FillPalette(RGB_BLACK, 0, 2);
}

void CB2_InitUIOptionMenuFromMainMenu(void)
{
    SetUpMainMenuFromOutsideGame();
    Options_Menu_Init(CB2_InitUiMainMenuFromTitleScreen);
}

// This is our main initialization function if you want to call the menu from elsewhere
void Options_Menu_Init(MainCallback callback)
{
	if ((sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources))) == NULL)
	{
		SetMainCallback2(callback);
		return;
	}

	// initialize stuff
	sMenuDataPtr->savedCallback = callback;

	SetMainCallback2(Menu_RunSetup);
}

static void Menu_RunSetup(void)
{
	while (1)
	{
		CopySaveBlockDataToTemporalData();

		if (Menu_DoGfxSetup() == TRUE)
			break;
	}
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT1_BG1 | BLDCNT_TGT2_BG2);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
    ShowBg(1);
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
            ResetPaletteFade();
            ResetTasks();
            ResetSpriteData();
            FreeSpriteTileRanges();
            FreeAllSpritePalettes();
            ClearDma3Requests();
			gMain.state++;
			break;
		case 2:
            InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
			break;
		case 3:
            gMain.state++;
			break;
		case 4:
			//LoadMessageBoxAndBorderGfx();
			Menu_InitWindows();
			gMain.state++;
			break;
		case 5:
			PrintToWindow(WINDOW_1, FONT_WHITE);
			CreateTask(Task_MenuWaitFadeIn, 0);
			//BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
			gMain.state++;
			break;
		case 6:
            ResetAllSpriteIds();
            CreateUpArrowSprite();
            CreateDownArrowSprite();
            CreateLeftArrowSprite();
            CreateRightArrowSprite();
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

static void Menu_FreeResources(void)
{

    OptionsMenu_SetShouldShowDiscardDialogue(FALSE);
    FreeAllSpritePalettes();

    if (sMenuDataPtr != NULL)
        Free(sMenuDataPtr);

    for (u32 backgroundId = 0; backgroundId < MENU_BACKGROUND_COUNT; backgroundId++)
        Free(sBgTilemapBuffer[backgroundId]);

    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void Task_MenuWaitFadeAndBail(u8 taskId)
{
	if (!gPaletteFade.active)
	{
		SetMainCallback2(sMenuDataPtr->savedCallback);
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
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs();

	return TRUE;
}

static bool32 AllocZeroedTilemapBuffers(void)
{
    u32 backgroundId;

    for (backgroundId = 0; backgroundId < MENU_BACKGROUND_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, MENU_BACKGROUND_COUNT);

    for (u32 backgroundId = 0; backgroundId < MENU_BACKGROUND_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void LoadOptionsMenuPalettes(void)
{
    LoadSpritePalette(sInterfaceSpritePalette);
    switch(gSaveBlock2Ptr->options[VISUAL_SETTINGS][VISUAL_OPTIONS_COLOR]){
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

static const u32* const sOptionsTilesLUT[] =
{
    [0] = NULL,
    [1] = sTMenuTiles,
    [2] = sMenuTiles,
};

static const u32* const sOptionsTilemapLUT[] =
{
    [0] = NULL,
    [1] = sTMenuTilemap,
    [2] = sMenuTilemap,
};

static void Menu_LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (u32 backgroundId = 1; backgroundId < MENU_BACKGROUND_COUNT; backgroundId++)
    {
        DecompressAndLoadBgGfxUsingHeap(backgroundId, sOptionsTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sOptionsTilemapLUT[backgroundId],0,0);
    }
    LoadOptionsMenuPalettes();
}

static void Menu_InitWindows(void)
{
	InitWindows(sMenuWindowTemplates);
	DeactivateAllTextPrinters();

	FillWindowPixelBuffer(WINDOW_1, 0);
	LoadUserWindowBorderGfx(WINDOW_1, 720, 14 * 16);
	PutWindowTilemap(WINDOW_1);
	CopyWindowToVram(WINDOW_1, 3);
}

static const u32 screenOptionNumber[] = 
{
    [GAME_SETTINGS] = NUM_OPTIONS_GAME_SETTINGS,
    [BATTLE_SETTINGS] = NUM_OPTIONS_BATTLE_SETTINGS,
    [VISUAL_SETTINGS] = NUM_OPTIONS_VISUAL_SETTINGS,
    [MUSIC_SETTINGS] = NUM_OPTIONS_MUSIC_SETTINGS,
    [RANDOM_SETTINGS] = NUM_OPTIONS_RANDOM_SETTINGS,
};

static u8 GetCurrentScreenOptionNumber(){

    u32 value = OptionsMenu_GetCurrentScreenId();
    return screenOptionNumber[value];
}

// --------------------------------------------------------------------------------------------------------------------

static u8 GetCurrentSlotOption(u8 option)
{
	return OptionsMenu_GetCurrentFirstOption() + option;
}

static u8 GetCursorPosition()
{
	return OptionsMenu_GetCurrentOptionId() - OptionsMenu_GetCurrentFirstOption();
}

static void PressedDownButton(){
	u8 halfScreen = ((NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN) - 1) / 2;
	u8 finalhalfScreen = GetCurrentScreenOptionNumber() - halfScreen;

	if(OptionsMenu_GetCurrentOptionId() < halfScreen){
		OptionsMenu_IncrementCurrentOptionId();
	}
	else if(OptionsMenu_GetCurrentOptionId() >= (GetCurrentScreenOptionNumber() - 1)){ //If you are in the last option go to the first one
		OptionsMenu_SetCurrentOptionId(0);
		OptionsMenu_SetCurrentFirstOption(0);
	}
	else if(OptionsMenu_GetCurrentOptionId() >= (finalhalfScreen - 1)){
		OptionsMenu_IncrementCurrentOptionId();
	}
	else{
		OptionsMenu_IncrementCurrentOptionId();
		OptionsMenu_IncrementCurrentFirstOption();
	}
}

static void PressedUpButton(){
	u8 halfScreen = ((NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN) - 1) / 2;
	u8 finalhalfScreen = GetCurrentScreenOptionNumber() - halfScreen;

	if(OptionsMenu_GetCurrentOptionId() > halfScreen && OptionsMenu_GetCurrentOptionId() <= (finalhalfScreen - 1)){
		OptionsMenu_DecrementCurrentOptionId();
		OptionsMenu_DecrementCurrentFirstOption();
	}
	else if(OptionsMenu_GetCurrentOptionId() == 0){ //If you are in the first option go to the last one
        OptionsMenu_SetCurrentOptionId(GetCurrentScreenOptionNumber() - 1);
        OptionsMenu_SetCurrentFirstOption(GetCurrentScreenOptionNumber() - NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN);
	}
	else{
		OptionsMenu_DecrementCurrentOptionId();
	}
}

struct OptionData
{
	const u8* title;
	const u8* options[MAX_OPTIONS_PER_SETTING];
	const u8* optionDescription[MAX_OPTIONS_PER_SETTING];
	const u8 numOptions;
};

//Graphics
static const u8 sOptionMenuIcon_Settings_Game[]   = INCGFX_U8("graphics/ui_menus/options_menu/icon_game_settings.png", ".4bpp");
static const u8 sOptionMenuIcon_Settings_Battle[] = INCGFX_U8("graphics/ui_menus/options_menu/icon_battle_settings.png", ".4bpp");
static const u8 sOptionMenuIcon_Settings_Visual[] = INCGFX_U8("graphics/ui_menus/options_menu/icon_visual_settings.png", ".4bpp");
static const u8 sOptionMenuIcon_Settings_Music[]  = INCGFX_U8("graphics/ui_menus/options_menu/icon_music_settings.png", ".4bpp");
static const u8 sOptionMenuIcon_Settings_Random[] = INCGFX_U8("graphics/ui_menus/options_menu/icon_random_settings.png", ".4bpp");

static const u8* const sOptionMenuIcons[SETTINGS_COUNT] =
{
    [GAME_SETTINGS]   = sOptionMenuIcon_Settings_Game,
    [BATTLE_SETTINGS] = sOptionMenuIcon_Settings_Battle,
    [VISUAL_SETTINGS] = sOptionMenuIcon_Settings_Visual,
    [MUSIC_SETTINGS]  = sOptionMenuIcon_Settings_Music,
    [RANDOM_SETTINGS] = sOptionMenuIcon_Settings_Random,
};

//Arrows
static const u8 sOptionMenuArrow_Up[]       = INCGFX_U8("graphics/ui_menus/options_menu/arrow_up.png", ".4bpp");
static const u8 sOptionMenuArrow_Down[]     = INCGFX_U8("graphics/ui_menus/options_menu/arrow_down.png", ".4bpp");
static const u8 sOptionMenuArrow_Left[]     = INCGFX_U8("graphics/ui_menus/options_menu/arrow_left.png", ".4bpp");
static const u8 sOptionMenuArrow_Right[]     = INCGFX_U8("graphics/ui_menus/options_menu/arrow_right.png", ".4bpp");

static const u8 sOptionMenuSelector[]       = INCGFX_U8("graphics/ui_menus/options_menu/selector.png", ".4bpp");
// Preset

static const u8 Preset_Options[NUM_OF_PRESET_OPTIONS][NUM_MAX_SETTINGS][MAX_OPTIONS_PER_SETTING] = {
    [GAME_SETTINGS] =
    {
        [GAME_PRESET_DEFAULT]  = {
            [GAME_OPTIONS_PRESET]            = GAME_PRESET_DEFAULT,
            [GAME_OPTIONS_SAVE_BOOT]         = GAME_OPTION_SAVE_BOOT_CONTINUE,
            [GAME_OPTIONS_BUTTON_MODE]       = OPTIONS_BUTTON_MODE_LR,
            [GAME_OPTIONS_SAVE_BEHAVIOR]     = GAME_OPTION_AUTOSAVE_ON,
            [GAME_OPTIONS_RUN]               = GAME_OPTION_RUN_ALWAYS,
            [GAME_OPTIONS_PUZZLES]           = GAME_OPTION_PUZZLES_ON,
            [GAME_OPTIONS_CUTSCENE]          = GAME_OPTION_CUTSCENE_PLAY,
            [GAME_OPTIONS_SKIP_GUIDES]       = GAME_OPTION_GUIDE_SKIP_OFF,
        },
        [GAME_PRESET_SPEEDRUN] = {
            [GAME_OPTIONS_PRESET]            = GAME_PRESET_SPEEDRUN,
            [GAME_OPTIONS_SAVE_BOOT]         = GAME_OPTION_SAVE_BOOT_CONTINUE,
            [GAME_OPTIONS_BUTTON_MODE]       = OPTIONS_BUTTON_MODE_LR,
            [GAME_OPTIONS_SAVE_BEHAVIOR]     = GAME_OPTION_AUTOSAVE_OFF,
            [GAME_OPTIONS_RUN]               = GAME_OPTION_RUN_ALWAYS,
            [GAME_OPTIONS_PUZZLES]           = GAME_OPTION_PUZZLES_ON,
            [GAME_OPTIONS_CUTSCENE]          = GAME_OPTION_CUTSCENE_SKIP,
            [GAME_OPTIONS_SKIP_GUIDES]       = GAME_OPTION_GUIDE_SKIP_ALL,
        }
    },
    [BATTLE_SETTINGS] =
    {
        [BATTLE_PRESET_DEFAULT]  = {
            [BATTLE_OPTIONS_PRESET]                 = BATTLE_PRESET_DEFAULT,
            [BATTLE_OPTIONS_EXPERIENCE]             = BATTLE_OPTION_EXPERIENCE_ALL,
            [BATTLE_OPTIONS_POINTS_MESSAGES]        = BATTLE_OPTION_POINTS_MESSAGES_ON,
            [BATTLE_OPTIONS_EXP_MULTIPLIER]         = BATTLE_OPTION_MULTIPLIER_1,
            [BATTLE_OPTIONS_PLAYER_LEVEL]                  = BATTLE_OPTION_LEVEL_CAP,
            [BATTLE_OPTIONS_TRAINER_SCALING] = BATTLE_OPTION_TRAINER_SCALING_PARTY,
            [BATTLE_OPTIONS_WILD_SCALING] = BATTLE_OPTION_WILD_SCALING_OFF,
            [BATTLE_OPTIONS_SWITCH_STYLE]           = OPTIONS_BATTLE_STYLE_SET,
            [BATTLE_OPTIONS_TAKE_WILD_ITEMS]        = BATTLE_OPTION_TAKE_WILD_ITEMS_ALWAYS,
            [BATTLE_OPTIONS_LAST_USED_BALL]         = BATTLE_OPTION_BALL_BEST,
            [BATTLE_OPTIONS_QUICK_RUN]              = 0,
            [BATTLE_OPTIONS_MID_BATTLE_EVOLUTION]   = BATTLE_OPTION_MID_BATTLE_EVOLUTION_ON,
            [BATTLE_OPTIONS_BATTLE_DIFFICULTY]      = BATTLE_OPTION_DIFFICULTY_NORMAL,
            [BATTLE_OPTIONS_FAINTED_MON]            = BATTLE_OPTION_FAINTED_MON_ALLOWED,
            [BATTLE_OPTIONS_FIRST_POKEMON_CATCH]    = BATTLE_OPTION_FIRST_POKEMON_CATCH_DEFAULT,
            [BATTLE_OPTIONS_NICKNAME]               = 0,
            [BATTLE_OPTIONS_WHITEOUT]               = BATTLE_OPTION_WHITEOUT_RESPAWN,
            [BATTLE_OPTIONS_ITEM_HEALING]           = BATTLE_OPTION_ITEM_HEALING_ALLOWED,
            [BATTLE_OPTIONS_CENTER_HEALING]         = BATTLE_OPTION_CENTER_HEALING_ALLOWED,
            [BATTLE_OPTIONS_MOVE_HEALING]           = BATTLE_OPTION_MOVE_HEALING_ALLOWED,
            [BATTLE_OPTIONS_BAG_ITEMS]              = BATTLE_OPTION_BAG_ITEMS_NO_BOSS,
            [BATTLE_OPTIONS_OPPONENTS_ITEMS]        = BATTLE_OPTION_OPPONENTS_ITEMS_ALLOWED,
            /*
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
            */
            [BATTLE_OPTIONS_TYPE_ICONS]             = 0,
            [BATTLE_OPTIONS_ANIMATIONS]             = 0,
            [BATTLE_OPTIONS_INTRO]                  = 1,
            [BATTLE_OPTIONS_HP_SPEED]               = 0,
            [BATTLE_OPTIONS_EXP_SPEED]              = 0,
            [BATTLE_OPTIONS_EFFORT_VALUES]          = BATTLE_OPTION_EFFORT_VALUES_ENABLED,
            [BATTLE_OPTIONS_INDIVIDUAL_VALUES]      = BATTLE_OPTION_INDIVIDUAL_VALUES_DISABLED,
        },
        [BATTLE_PRESET_CHALLENGE]  = {
            [BATTLE_OPTIONS_PRESET]                 = BATTLE_PRESET_CHALLENGE,
            [BATTLE_OPTIONS_EXPERIENCE]             = BATTLE_OPTION_EXPERIENCE_ALL,
            [BATTLE_OPTIONS_POINTS_MESSAGES]        = BATTLE_OPTION_POINTS_MESSAGES_ON,
            [BATTLE_OPTIONS_EXP_MULTIPLIER]         = BATTLE_OPTION_MULTIPLIER_1,
            [BATTLE_OPTIONS_PLAYER_LEVEL]                  = BATTLE_OPTION_LEVEL_CAP,
            [BATTLE_OPTIONS_TRAINER_SCALING] = BATTLE_OPTION_TRAINER_SCALING_PARTY,
            [BATTLE_OPTIONS_WILD_SCALING] = BATTLE_OPTION_WILD_SCALING_OFF,
            [BATTLE_OPTIONS_SWITCH_STYLE]           = OPTIONS_BATTLE_STYLE_SET,
            [BATTLE_OPTIONS_TAKE_WILD_ITEMS]        = BATTLE_OPTION_TAKE_WILD_ITEMS_ALWAYS,
            [BATTLE_OPTIONS_LAST_USED_BALL]         = BATTLE_OPTION_BALL_BEST,
            [BATTLE_OPTIONS_QUICK_RUN]              = 0,
            [BATTLE_OPTIONS_MID_BATTLE_EVOLUTION]   = BATTLE_OPTION_MID_BATTLE_EVOLUTION_ON,
            [BATTLE_OPTIONS_BATTLE_DIFFICULTY]      = BATTLE_OPTION_DIFFICULTY_HARD,
            [BATTLE_OPTIONS_FAINTED_MON]            = BATTLE_OPTION_FAINTED_MON_ALLOWED,
            [BATTLE_OPTIONS_FIRST_POKEMON_CATCH]    = BATTLE_OPTION_FIRST_POKEMON_CATCH_DEFAULT,
            [BATTLE_OPTIONS_NICKNAME]               = 0,
            [BATTLE_OPTIONS_WHITEOUT]               = BATTLE_OPTION_WHITEOUT_RESPAWN,
            [BATTLE_OPTIONS_ITEM_HEALING]           = BATTLE_OPTION_ITEM_HEALING_ALLOWED,
            [BATTLE_OPTIONS_CENTER_HEALING]         = BATTLE_OPTION_CENTER_HEALING_ALLOWED,
            [BATTLE_OPTIONS_MOVE_HEALING]           = BATTLE_OPTION_MOVE_HEALING_ALLOWED,
            [BATTLE_OPTIONS_BAG_ITEMS]              = BATTLE_OPTION_BAG_ITEMS_NO_TRAINER,
            [BATTLE_OPTIONS_OPPONENTS_ITEMS]        = BATTLE_OPTION_OPPONENTS_ITEMS_ALLOWED,
            /*
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
            */
            [BATTLE_OPTIONS_TYPE_ICONS]             = 0,
            [BATTLE_OPTIONS_ANIMATIONS]             = 1,
            [BATTLE_OPTIONS_INTRO]                  = 1,
            [BATTLE_OPTIONS_HP_SPEED]               = 0,
            [BATTLE_OPTIONS_EXP_SPEED]              = 0,
            [BATTLE_OPTIONS_EFFORT_VALUES]          = BATTLE_OPTION_EFFORT_VALUES_ENABLED,
            [BATTLE_OPTIONS_INDIVIDUAL_VALUES]      = BATTLE_OPTION_INDIVIDUAL_VALUES_DISABLED,
        },
        [BATTLE_PRESET_SPEEDRUN]  = {
            [BATTLE_OPTIONS_PRESET]                 = BATTLE_PRESET_SPEEDRUN,
            [BATTLE_OPTIONS_EXPERIENCE]             = BATTLE_OPTION_EXPERIENCE_ALL,
            [BATTLE_OPTIONS_POINTS_MESSAGES]        = BATTLE_OPTION_POINTS_MESSAGES_OFF,
            [BATTLE_OPTIONS_EXP_MULTIPLIER]         = BATTLE_OPTION_MULTIPLIER_1,
            [BATTLE_OPTIONS_PLAYER_LEVEL]                  = BATTLE_OPTION_LEVEL_CAP,
            [BATTLE_OPTIONS_TRAINER_SCALING] = BATTLE_OPTION_TRAINER_SCALING_OFF,
            [BATTLE_OPTIONS_WILD_SCALING] = BATTLE_OPTION_WILD_SCALING_OFF,
            [BATTLE_OPTIONS_SWITCH_STYLE]           = OPTIONS_BATTLE_STYLE_SET,
            [BATTLE_OPTIONS_TAKE_WILD_ITEMS]        = BATTLE_OPTION_TAKE_WILD_ITEMS_ALWAYS,
            [BATTLE_OPTIONS_LAST_USED_BALL]         = BATTLE_OPTION_BALL_ALWAYS,
            [BATTLE_OPTIONS_QUICK_RUN]              = 0,
            [BATTLE_OPTIONS_MID_BATTLE_EVOLUTION]   = BATTLE_OPTION_MID_BATTLE_EVOLUTION_ON,
            [BATTLE_OPTIONS_BATTLE_DIFFICULTY]      = BATTLE_OPTION_DIFFICULTY_NORMAL,
            [BATTLE_OPTIONS_FAINTED_MON]            = BATTLE_OPTION_FAINTED_MON_ALLOWED,
            [BATTLE_OPTIONS_FIRST_POKEMON_CATCH]    = BATTLE_OPTION_FIRST_POKEMON_CATCH_DEFAULT,
            [BATTLE_OPTIONS_NICKNAME]               = 2,
            [BATTLE_OPTIONS_WHITEOUT]               = BATTLE_OPTION_WHITEOUT_RESPAWN,
            [BATTLE_OPTIONS_ITEM_HEALING]           = BATTLE_OPTION_ITEM_HEALING_ALLOWED,
            [BATTLE_OPTIONS_CENTER_HEALING]         = BATTLE_OPTION_CENTER_HEALING_ALLOWED,
            [BATTLE_OPTIONS_MOVE_HEALING]           = BATTLE_OPTION_MOVE_HEALING_ALLOWED,
            [BATTLE_OPTIONS_BAG_ITEMS]              = BATTLE_OPTION_BAG_ITEMS_NO_BOSS,
            [BATTLE_OPTIONS_OPPONENTS_ITEMS]        = BATTLE_OPTION_OPPONENTS_ITEMS_ALLOWED,
            /*
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
            */
            [BATTLE_OPTIONS_TYPE_ICONS]             = 0,
            [BATTLE_OPTIONS_ANIMATIONS]             = 1,
            [BATTLE_OPTIONS_INTRO]                  = 1,
            [BATTLE_OPTIONS_HP_SPEED]               = 2,
            [BATTLE_OPTIONS_EXP_SPEED]              = 2,
            [BATTLE_OPTIONS_EFFORT_VALUES]          = BATTLE_OPTION_EFFORT_VALUES_ENABLED,
            [BATTLE_OPTIONS_INDIVIDUAL_VALUES]      = BATTLE_OPTION_INDIVIDUAL_VALUES_DISABLED,
        },
        [BATTLE_PRESET_NUZLOCKE]  = {
            [BATTLE_OPTIONS_PRESET]                 = BATTLE_PRESET_NUZLOCKE,
            [BATTLE_OPTIONS_EXPERIENCE]             = BATTLE_OPTION_EXPERIENCE_ALL,
            [BATTLE_OPTIONS_POINTS_MESSAGES]        = BATTLE_OPTION_POINTS_MESSAGES_OFF,
            [BATTLE_OPTIONS_EXP_MULTIPLIER]         = BATTLE_OPTION_MULTIPLIER_1,
            [BATTLE_OPTIONS_PLAYER_LEVEL]                  = BATTLE_OPTION_LEVEL_CAP,
            [BATTLE_OPTIONS_TRAINER_SCALING] = BATTLE_OPTION_TRAINER_SCALING_PARTY,
            [BATTLE_OPTIONS_WILD_SCALING] = BATTLE_OPTION_WILD_SCALING_ON,
            [BATTLE_OPTIONS_SWITCH_STYLE]           = OPTIONS_BATTLE_STYLE_SET,
            [BATTLE_OPTIONS_TAKE_WILD_ITEMS]        = BATTLE_OPTION_TAKE_WILD_ITEMS_ALWAYS,
            [BATTLE_OPTIONS_LAST_USED_BALL]         = BATTLE_OPTION_BALL_BEST,
            [BATTLE_OPTIONS_QUICK_RUN]              = 2,
            [BATTLE_OPTIONS_MID_BATTLE_EVOLUTION]   = BATTLE_OPTION_MID_BATTLE_EVOLUTION_ON,
            [BATTLE_OPTIONS_BATTLE_DIFFICULTY]      = BATTLE_OPTION_DIFFICULTY_NORMAL,
            [BATTLE_OPTIONS_FAINTED_MON]            = BATTLE_OPTION_FAINTED_MON_BOX,
            [BATTLE_OPTIONS_FIRST_POKEMON_CATCH]    = BATTLE_OPTION_FIRST_POKEMON_CATCH_DUPLICATE,
            [BATTLE_OPTIONS_NICKNAME]               = 1,
            [BATTLE_OPTIONS_WHITEOUT]               = BATTLE_OPTION_WHITEOUT_RESPAWN,
            [BATTLE_OPTIONS_ITEM_HEALING]           = BATTLE_OPTION_ITEM_HEALING_ALLOWED,
            [BATTLE_OPTIONS_CENTER_HEALING]         = BATTLE_OPTION_CENTER_HEALING_ALLOWED,
            [BATTLE_OPTIONS_MOVE_HEALING]           = BATTLE_OPTION_MOVE_HEALING_ALLOWED,
            [BATTLE_OPTIONS_BAG_ITEMS]              = BATTLE_OPTION_BAG_ITEMS_NO_BOSS,
            [BATTLE_OPTIONS_OPPONENTS_ITEMS]        = BATTLE_OPTION_OPPONENTS_ITEMS_ALLOWED,
            /*
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
            */
            [BATTLE_OPTIONS_TYPE_ICONS]             = 0,
            [BATTLE_OPTIONS_ANIMATIONS]             = 0,
            [BATTLE_OPTIONS_INTRO]                  = 0,
            [BATTLE_OPTIONS_HP_SPEED]               = 0,
            [BATTLE_OPTIONS_EXP_SPEED]              = 0,
            [BATTLE_OPTIONS_EFFORT_VALUES]          = BATTLE_OPTION_EFFORT_VALUES_ENABLED,
            [BATTLE_OPTIONS_INDIVIDUAL_VALUES]      = BATTLE_OPTION_INDIVIDUAL_VALUES_DISABLED,
        },
        [BATTLE_PRESET_KAIZO]  = {
            [BATTLE_OPTIONS_PRESET]                 = BATTLE_PRESET_KAIZO,
            [BATTLE_OPTIONS_EXPERIENCE]             = BATTLE_OPTION_EXPERIENCE_ACTIVE,
            [BATTLE_OPTIONS_POINTS_MESSAGES]        = BATTLE_OPTION_POINTS_MESSAGES_OFF,
            [BATTLE_OPTIONS_EXP_MULTIPLIER]         = BATTLE_OPTION_MULTIPLIER_1,
            [BATTLE_OPTIONS_PLAYER_LEVEL]                  = BATTLE_OPTION_LEVEL_CAP,
            [BATTLE_OPTIONS_TRAINER_SCALING] = BATTLE_OPTION_TRAINER_SCALING_PARTY,
            [BATTLE_OPTIONS_WILD_SCALING] = BATTLE_OPTION_WILD_SCALING_OFF,
            [BATTLE_OPTIONS_SWITCH_STYLE]           = OPTIONS_BATTLE_STYLE_SET,
            [BATTLE_OPTIONS_TAKE_WILD_ITEMS]        = BATTLE_OPTION_TAKE_WILD_ITEMS_ALWAYS,
            [BATTLE_OPTIONS_LAST_USED_BALL]         = BATTLE_OPTION_BALL_BEST,
            [BATTLE_OPTIONS_QUICK_RUN]              = 2,
            [BATTLE_OPTIONS_MID_BATTLE_EVOLUTION]   = BATTLE_OPTION_MID_BATTLE_EVOLUTION_ON,
            [BATTLE_OPTIONS_BATTLE_DIFFICULTY]      = BATTLE_OPTION_DIFFICULTY_HARD,
            [BATTLE_OPTIONS_FAINTED_MON]            = BATTLE_OPTION_FAINTED_MON_ALLOWED,
            [BATTLE_OPTIONS_FIRST_POKEMON_CATCH]    = BATTLE_OPTION_FIRST_POKEMON_CATCH_DEFAULT,
            [BATTLE_OPTIONS_NICKNAME]               = 0,
            [BATTLE_OPTIONS_WHITEOUT]               = BATTLE_OPTION_WHITEOUT_DEATH,
            [BATTLE_OPTIONS_ITEM_HEALING]           = BATTLE_OPTION_ITEM_HEALING_DISABLED,
            [BATTLE_OPTIONS_CENTER_HEALING]         = BATTLE_OPTION_CENTER_HEALING_DISABLED,
            [BATTLE_OPTIONS_MOVE_HEALING]           = BATTLE_OPTION_MOVE_HEALING_DISABLED,
            [BATTLE_OPTIONS_BAG_ITEMS]              = BATTLE_OPTION_BAG_ITEMS_NO_ITEMS,
            [BATTLE_OPTIONS_OPPONENTS_ITEMS]        = BATTLE_OPTION_OPPONENTS_ITEMS_ALLOWED,
            /*
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
            */
            [BATTLE_OPTIONS_TYPE_ICONS]             = 1,
            [BATTLE_OPTIONS_ANIMATIONS]             = 0,
            [BATTLE_OPTIONS_INTRO]                  = 0,
            [BATTLE_OPTIONS_HP_SPEED]               = 0,
            [BATTLE_OPTIONS_EXP_SPEED]              = 0,
            [BATTLE_OPTIONS_EFFORT_VALUES]          = BATTLE_OPTION_EFFORT_VALUES_ENABLED,
            [BATTLE_OPTIONS_INDIVIDUAL_VALUES]      = BATTLE_OPTION_INDIVIDUAL_VALUES_DISABLED,
        },
    },
    [VISUAL_SETTINGS] =
    {
        [VISUAL_PRESET_DEFAULT]  = {
            [VISUAL_OPTIONS_PRESET]          = VISUAL_PRESET_DEFAULT,
            [VISUAL_OPTIONS_UNITS]           = VISUAL_OPTION_UNITS_IMPERIAL_PERIOD,
            [VISUAL_OPTIONS_TIME]            = VISUAL_OPTION_12_HOUR,
            [VISUAL_OPTIONS_TEXT_SPEED]      = VISUAL_OPTION_TEXTSPEED_FAST,
            [VISUAL_OPTIONS_FONT_SWITCHER]   = VISUAL_OPTION_FONT_SWITCHER_EMERALD,
            [VISUAL_OPTIONS_COLOR]           = VISUAL_OPTION_COLOR_PLATINUM,
            [VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_INDIVIDUAL_VALUES,
        },
        [VISUAL_PRESET_SPEEDRUN] = {
            [VISUAL_OPTIONS_PRESET]          = VISUAL_PRESET_SPEEDRUN,
            [VISUAL_OPTIONS_UNITS]           = VISUAL_OPTION_UNITS_IMPERIAL_PERIOD,
            [VISUAL_OPTIONS_TIME]            = VISUAL_OPTION_12_HOUR,
            [VISUAL_OPTIONS_TEXT_SPEED]      = VISUAL_OPTION_TEXTSPEED_INSTANT,
            [VISUAL_OPTIONS_FONT_SWITCHER]   = VISUAL_OPTION_FONT_SWITCHER_EMERALD,
            [VISUAL_OPTIONS_COLOR]           = VISUAL_OPTION_COLOR_PLATINUM,
            [VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_INDIVIDUAL_VALUES,
        }
    },
    [MUSIC_SETTINGS] =
    {
        [MUSIC_OPTIONS_RESIDO]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_RESIDO,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_RESIDO,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_RESIDO,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_RESIDO,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_RESIDO,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_RESIDO,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_RESIDO,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_RESIDO,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_KANTO]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_KANTO,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_TOHJO,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_KANTO,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_KANTO,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_KANTO,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_KANTO,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_TOHJO,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_KANTO_OLD,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_JOHTO]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_JOHTO,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_TOHJO,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_JOHTO,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_JOHTO,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_JOHTO,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_JOHTO,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_TOHJO,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_KANTO_NEW,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_HOENN]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_HOENN,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_HOENN,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_HOENN,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_HOENN,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_HOENN,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_HOENN,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_HOENN,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_HOENN,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_SINNOH]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_SINNOH,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_SINNOH,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_SINNOH,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_SINNOH,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_SINNOH,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_SINNOH,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_SINNOH,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_SINNOH,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_UNOVA]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_UNOVA,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_UNOVA,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_UNOVA,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_UNOVA,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_UNOVA,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_UNOVA,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_UNOVA,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_UNOVA_NEW,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_KALOS]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_KALOS,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_KALOS,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_KALOS,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_KALOS,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_KALOS,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_KALOS,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_KALOS,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_KALOS,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_ALOLA]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_ALOLA,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_ALOLA,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_ALOLA,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_ALOLA,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_ALOLA,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_ALOLA,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_ALOLA,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_ALOLA,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_GALAR]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_GALAR,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_RESIDO,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_RESIDO,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_GALAR,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_GALAR,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_GALAR,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_GALAR,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_GALAR,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_OPTIONS_PALDEA]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_OPTIONS_PALDEA,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_OPTION_SURF_RESIDO,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_OPTION_BIKE_RESIDO,
            [MUSIC_OPTIONS_WILD]             = MUSIC_OPTION_BATTLE_WILD_PALDEA,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_OPTION_BATTLE_TRAINER_PALDEA,
            [MUSIC_OPTIONS_GYM]              = MUSIC_OPTION_BATTLE_GYM_PALDEA,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_OPTION_BATTLE_TOURNAMENT_PALDEA,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_OPTION_BATTLE_CHAMPION_PALDEA,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
    },
    [RANDOM_SETTINGS] =
    {
        [RANDOM_PRESET_DEFAULT]  = {
            [RANDOM_OPTIONS_PRESET]             = RANDOM_PRESET_DEFAULT,
            [RANDOM_OPTIONS_STARTER]            = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_WILD_BATTLE]        = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TRAINER_BATTLE]     = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_EVOLUTION]          = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_EVOLUTION_METHOD]   = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TYPE_EFFECTIVENESS] = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_BASE_STATS]         = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TYPES]              = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_ABILITIES]          = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_LEVEL_UP_MOVES]     = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TMS]                = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_MOVE_TUTORS]        = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_LEARNSETS]          = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_ITEMS]              = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_STATIC_ENCOUNTERS]  = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TRAINERS]           = RANDOM_DEFAULT,
        },
        [RANDOM_PRESET_SANE]  = {
            [RANDOM_OPTIONS_PRESET]             = RANDOM_PRESET_SANE,
            [RANDOM_OPTIONS_STARTER]            = RANDOM_RANDOM,
            [RANDOM_OPTIONS_WILD_BATTLE]        = RANDOM_RANDOM,
            [RANDOM_OPTIONS_TRAINER_BATTLE]     = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_EVOLUTION]          = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_EVOLUTION_METHOD]   = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TYPE_EFFECTIVENESS] = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_BASE_STATS]         = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TYPES]              = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_ABILITIES]          = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_LEVEL_UP_MOVES]     = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TMS]                = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_MOVE_TUTORS]        = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_LEARNSETS]          = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_ITEMS]              = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_STATIC_ENCOUNTERS]  = RANDOM_DEFAULT,
            [RANDOM_OPTIONS_TRAINERS]           = RANDOM_DEFAULT,
        },
        [RANDOM_PRESET_CRAZY]  = {
            [RANDOM_OPTIONS_PRESET]             = RANDOM_PRESET_CRAZY,
            [RANDOM_OPTIONS_STARTER]            = RANDOM_RANDOM,
            [RANDOM_OPTIONS_WILD_BATTLE]        = RANDOM_RANDOM,
            [RANDOM_OPTIONS_TRAINER_BATTLE]     = RANDOM_RANDOM,
            [RANDOM_OPTIONS_EVOLUTION]          = RANDOM_RANDOM,
            [RANDOM_OPTIONS_EVOLUTION_METHOD]   = RANDOM_RANDOM,
            [RANDOM_OPTIONS_TYPE_EFFECTIVENESS] = RANDOM_RANDOM,
            [RANDOM_OPTIONS_BASE_STATS]         = RANDOM_RANDOM,
            [RANDOM_OPTIONS_TYPES]              = RANDOM_RANDOM,
            [RANDOM_OPTIONS_ABILITIES]          = RANDOM_RANDOM,
            [RANDOM_OPTIONS_LEVEL_UP_MOVES]     = RANDOM_RANDOM,
            [RANDOM_OPTIONS_TMS]                = RANDOM_RANDOM,
            [RANDOM_OPTIONS_MOVE_TUTORS]        = RANDOM_RANDOM,
            [RANDOM_OPTIONS_LEARNSETS]          = RANDOM_RANDOM,
            [RANDOM_OPTIONS_ITEMS]              = RANDOM_RANDOM,
            [RANDOM_OPTIONS_STATIC_ENCOUNTERS]  = RANDOM_RANDOM,
            [RANDOM_OPTIONS_TRAINERS]           = RANDOM_RANDOM,
        },
        [RANDOM_PRESET_TOTAL_CHAOS]  = {
            [RANDOM_OPTIONS_PRESET]             = RANDOM_PRESET_TOTAL_CHAOS,
            [RANDOM_OPTIONS_STARTER]            = RANDOM_CHAOS,
            [RANDOM_OPTIONS_WILD_BATTLE]        = RANDOM_CHAOS,
            [RANDOM_OPTIONS_TRAINER_BATTLE]     = RANDOM_CHAOS,
            [RANDOM_OPTIONS_EVOLUTION]          = RANDOM_CHAOS + 1,
            [RANDOM_OPTIONS_EVOLUTION_METHOD]   = RANDOM_CHAOS,
            [RANDOM_OPTIONS_TYPE_EFFECTIVENESS] = RANDOM_CHAOS,
            [RANDOM_OPTIONS_BASE_STATS]         = RANDOM_CHAOS,
            [RANDOM_OPTIONS_TYPES]              = RANDOM_CHAOS,
            [RANDOM_OPTIONS_ABILITIES]          = RANDOM_CHAOS,
            [RANDOM_OPTIONS_LEVEL_UP_MOVES]     = RANDOM_CHAOS,
            [RANDOM_OPTIONS_TMS]                = RANDOM_CHAOS,
            [RANDOM_OPTIONS_MOVE_TUTORS]        = RANDOM_CHAOS,
            [RANDOM_OPTIONS_LEARNSETS]          = RANDOM_CHAOS,
            [RANDOM_OPTIONS_ITEMS]              = RANDOM_CHAOS,
            [RANDOM_OPTIONS_STATIC_ENCOUNTERS]  = RANDOM_CHAOS,
            [RANDOM_OPTIONS_TRAINERS]           = RANDOM_CHAOS,
        },
    },
};

void HandlePresetData()
{
    u32 maxNumber = GetCurrentScreenOptionNumber();
    u32 settings = OptionsMenu_GetCurrentScreenId();

    if(AreYouOnCustomPresetData()){
        for (u32 i = 1; i < maxNumber; i++)
            TemporalOptions[settings][i] = gSaveBlock2Ptr->options[settings][i];
    }
    else{
        for (u32 i = 1; i < maxNumber; i++)
            TemporalOptions[settings][i] = Preset_Options[settings][TemporalOptions[settings][0]][i];
    }
}

bool8 AreYouOnCustomPresetData()
{
	switch(OptionsMenu_GetCurrentScreenId()){
		case GAME_SETTINGS:
			return (TemporalOptions[GAME_SETTINGS][0] == GAME_PRESET_CUSTOM);
			break;
		case BATTLE_SETTINGS:
			return (TemporalOptions[BATTLE_SETTINGS][0] == BATTLE_PRESET_CUSTOM);
			break;
		case VISUAL_SETTINGS:
			return (TemporalOptions[VISUAL_SETTINGS][0] == VISUAL_PRESET_CUSTOM);
			break;
		case MUSIC_SETTINGS:
			return (TemporalOptions[MUSIC_SETTINGS][0] == MUSIC_PRESET_CUSTOM);
			break;
		default:
		case RANDOM_SETTINGS:
			return (TemporalOptions[RANDOM_SETTINGS][0] == RANDOM_PRESET_CUSTOM);
			break;
	}
}

void ChangeCurrentScreenPresetDataToCustom()
{
	switch(OptionsMenu_GetCurrentScreenId()){
		case GAME_SETTINGS:
			TemporalOptions[GAME_SETTINGS][0] = GAME_PRESET_CUSTOM;
			break;
		case BATTLE_SETTINGS:
			TemporalOptions[BATTLE_SETTINGS][0] = BATTLE_PRESET_CUSTOM;
			break;
		case VISUAL_SETTINGS:
			TemporalOptions[VISUAL_SETTINGS][0] = VISUAL_PRESET_CUSTOM;
			break;
		case MUSIC_SETTINGS:
			TemporalOptions[MUSIC_SETTINGS][0] = MUSIC_PRESET_CUSTOM;
			break;
		case RANDOM_SETTINGS:
			TemporalOptions[RANDOM_SETTINGS][0] = RANDOM_PRESET_CUSTOM;
			break;
	}
}

void UNUSED ChangePresetDataToCustom()
{
	gSaveBlock2Ptr->options[GAME_SETTINGS][0] = GAME_PRESET_CUSTOM;
	gSaveBlock2Ptr->options[BATTLE_SETTINGS][0] = BATTLE_PRESET_CUSTOM;
	gSaveBlock2Ptr->options[VISUAL_SETTINGS][0] = VISUAL_PRESET_CUSTOM;
	gSaveBlock2Ptr->options[MUSIC_SETTINGS][0] = MUSIC_PRESET_CUSTOM;
	gSaveBlock2Ptr->options[RANDOM_SETTINGS][0] = RANDOM_PRESET_CUSTOM;
}

// For Game Settings
static const struct OptionData Settings_Options[SETTINGS_COUNT][NUM_OPTIONS_MAX_SETTINGS] =
{
    [GAME_SETTINGS] = 
    {
        [GAME_OPTIONS_PRESET] =
        {
            .title = COMPOUND_STRING("Game Settings"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Speedrun"),
                COMPOUND_STRING("Custom"),
            },
            .optionDescription = {
                COMPOUND_STRING("Gameplay options like autosave, autorun, puzzles, cutscenes, and Adventure Guides are optimized for the game's intended design."),
                COMPOUND_STRING("Gameplay options like autosave, autorun, puzzles, cutscenes, and Adventure Guides are optimized for speedrunning."),
                COMPOUND_STRING(""),
            },
            .numOptions = GAME_PRESET_COUNT,
        },
        [GAME_OPTIONS_SAVE_BOOT] =
        {
            .title = COMPOUND_STRING("Save Boot"),
            .options = {
                COMPOUND_STRING("Traditional"),
                COMPOUND_STRING("Continue"),
            },
            .optionDescription = {
                COMPOUND_STRING("After pressing {START_BUTTON} on the title screen, the game will proceed to the Main Menu."),
                COMPOUND_STRING("After pressing {START_BUTTON} on the title screen, the game will directly proceed to the saved adventure."),
            },
            .numOptions = GAME_OPTION_SAVE_BOOT_COUNT,
        },
        [GAME_OPTIONS_BUTTON_MODE] =
        {
            .title = COMPOUND_STRING("Button Mode"),
            .options = {
                COMPOUND_STRING("{L_BUTTON}{R_BUTTON}"),
                COMPOUND_STRING("{L_BUTTON} {EMOJI_EQUALS} {A_BUTTON}"),
            },
            .optionDescription = {
                COMPOUND_STRING("{L_BUTTON} and {R_BUTTON} are used for navigation within menus."),
                COMPOUND_STRING("Pressing {L_BUTTON} is treated like {A_BUTTON}. {R_BUTTON} is used for navigation within menus. When {L_BUTTON} is held, it is treated like a turbo {A_BUTTON}."),
            },
            .numOptions = OPTIONS_BUTTON_MODE_L_MODE_COUNT,
        },
        [GAME_OPTIONS_SAVE_BEHAVIOR] =
        {
            .title = COMPOUND_STRING("Save Behavior"),
            .options = {
                COMPOUND_STRING("Manual"),
                COMPOUND_STRING("Automatic"),
            },
            .optionDescription = {
                COMPOUND_STRING("Players will need to manually save their progress."),
                COMPOUND_STRING("Progress will automatically save after ten wild battles since the last save, after every cutscene, and after every heal at the Pokémon Center."),
            },
            .numOptions = GAME_OPTION_AUTOSAVE_COUNT,
        },
        [GAME_OPTIONS_RUN] =
        {
            .title = COMPOUND_STRING("Run"),
            .options = {
                COMPOUND_STRING("Always"),
                COMPOUND_STRING("Toggle"),
                COMPOUND_STRING("Manual"),
            },
            .optionDescription = {
                COMPOUND_STRING("The player will always run. When holding the {B_BUTTON} and using {DPAD_UPDOWN}, the player will walk."),
                COMPOUND_STRING("Pressing the {L_BUTTON} will change the player's behavior betweeen always walking and always running."),
                COMPOUND_STRING("The player will always walk. When holding the {B_BUTTON} and using {DPAD_UPDOWN}, the player will run."),
            },
            .numOptions = 3,
        },
        [GAME_OPTIONS_PUZZLES] =
        {
            .title = COMPOUND_STRING("Puzzles"),
            .options = {
                COMPOUND_STRING("Disabled"),
                COMPOUND_STRING("Normal"),
            },
            .optionDescription = {
                COMPOUND_STRING("Puzzles outside of Pokémon battles are disabled."),
                COMPOUND_STRING("Puzzles function as normal."),
            },
            .numOptions = 2,
        },
        [GAME_OPTIONS_CUTSCENE] =
        {
            .title = COMPOUND_STRING("Cutscenes"),
            .options = {
                COMPOUND_STRING("Play"),
                //COMPOUND_STRING("Ask"),
                //COMPOUND_STRING("Hold"),
                COMPOUND_STRING("Skip"),
            },
            .optionDescription = {
                //COMPOUND_STRING("Story related scenes without gameplay will play as normal."),
                COMPOUND_STRING("Story related scenes without gameplay will play as normal. The player can hold {START_BUTTON} to automatically skip the cutscene."),
                //COMPOUND_STRING("Before every story related scene,the player is asked if they would like to play or skip the cutscene."),
                //COMPOUND_STRING("During every story related scene,the player can hold {START_BUTTON} to automaticlaly skip the cutscene."),
                COMPOUND_STRING("Every story related scene without gameplay is automatically skipped."),
            },
            .numOptions = GAME_OPTION_CUTSCENE_COUNT,
        },
        [GAME_OPTIONS_SKIP_GUIDES] =
        {
            .title = COMPOUND_STRING("Adventure Guides"),
            .options = {
                COMPOUND_STRING("Skip None"),
                COMPOUND_STRING("Skip General"),
                COMPOUND_STRING("Skip All"),
            },
            .optionDescription = {
                COMPOUND_STRING("The game will instruct and inform players about all systems and mechanics."),
                COMPOUND_STRING("The game will instruct and inform players about all mechanics and additions that are new to Pokémon Silicon."),
                COMPOUND_STRING("The game will not instruct players about any game mehanics."),
            },
            .numOptions = GAME_OPTION_GUIDE_SKIP_COUNT,
        },
    },
    [BATTLE_SETTINGS] = 
    {
        [BATTLE_OPTIONS_PRESET] =
        {
            .title = COMPOUND_STRING("Battle Settings"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Challenge"),
                COMPOUND_STRING("Speedrun"),
                COMPOUND_STRING("Nuzlocke"),
                COMPOUND_STRING("Kaizo"),
                COMPOUND_STRING("Custom"),
            },
            .optionDescription = {
                COMPOUND_STRING("Trainer difficulty, Individual Values, Nuzlocking, Healing, Animations and more are optimized for the game's intended design."),
                COMPOUND_STRING("Trainer difficulty, Individual Values, Nuzlocking, Healing, Animations and more are optimized for challenging playthrough."),
                COMPOUND_STRING("Trainer difficulty, Individual Values, Nuzlocking, Healing, Animations and more are optimized for speedrunning."),
                COMPOUND_STRING("Trainer difficulty, Individual Values, Nuzlocking, Healing, Animations and more are optimized for nuzlocking."),
                COMPOUND_STRING("Trainer difficulty, Individual Values, Nuzlocking, Healing, Animations and more are optimized for an insanely brutal playthrough."),
                COMPOUND_STRING(""),
            },
            .numOptions = 6,
        },
        [BATTLE_OPTIONS_EXPERIENCE] =
        {
            .title = COMPOUND_STRING("Experience"),
            .options = {
                COMPOUND_STRING("All"),
                COMPOUND_STRING("Party"),
                COMPOUND_STRING("Active"),
            },
            .optionDescription = {
                COMPOUND_STRING("Exp. Points and Effort Values earned in battle are given to all the Pokemon in the player's party and the player's PC storage boxes."),
                COMPOUND_STRING("Exp. Points and Effort Values earned in battle are given to all the Pokemon in the player's party."),
                COMPOUND_STRING("Exp. Points and Effort Values earned in battle are given to the Pokemon that participated in battle."),
            },
            .numOptions = 3,
        },
        [BATTLE_OPTIONS_POINTS_MESSAGES] =
        {
            .title = COMPOUND_STRING("Points Message"),
            .options = {
                COMPOUND_STRING("On"),
                COMPOUND_STRING("Off"),
            },
            .optionDescription = {
                COMPOUND_STRING("When a Pokémon gains Experience or Effort Values, a message will be displayed."),
                COMPOUND_STRING("When a Pokémon gains Experience of Effort Values a message will NOT be displayed."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_EXP_MULTIPLIER] =
        {
            .title = COMPOUND_STRING("Exp Multiplier"),
            .options = {
                COMPOUND_STRING("0"),
                COMPOUND_STRING("Normal"),
                COMPOUND_STRING("2"),
            },
            .optionDescription = {
                COMPOUND_STRING("Exp. Points earned in battle are multiplied by 0."),
                COMPOUND_STRING("Exp. Points earned in battle are multiplied by 1."),
                COMPOUND_STRING("Exp. Points earned in battle are multiplied by 2."),
            },
            .numOptions = BATTLE_OPTION_MULTIPLIER_COUNT,
        },
        [BATTLE_OPTIONS_EFFORT_VALUES] =
        {
            .title = COMPOUND_STRING("Effort Values"),
            .options = {
                COMPOUND_STRING("Disabled"),
                COMPOUND_STRING("Enabled"),
            },
            .optionDescription = {
                COMPOUND_STRING("When a Pokémon's stats are calculated, their Effort Values do not impact the calculation."),
                COMPOUND_STRING("When a Pokémon's stats are calculated, their Effort Values impact the calculation normally."),
            },
            .numOptions = BATTLE_OPTION_EFFORT_VALUES_COUNT,
        },
        [BATTLE_OPTIONS_INDIVIDUAL_VALUES] =
        {
            .title = COMPOUND_STRING("Individual Values"),
            .options = {
                COMPOUND_STRING("Disabled"),
                COMPOUND_STRING("Enabled"),
            },
            .optionDescription = {
                COMPOUND_STRING("When a Pokémon's stats are calculated, their Individual Values are assumed to be 31 / Perfect."),
                COMPOUND_STRING("When a Pokémon's stats are calculated, their Individual Values are not altered in any way."),
            },
            .numOptions = BATTLE_OPTION_INDIVIDUAL_VALUES_COUNT,
        },
        [BATTLE_OPTIONS_PLAYER_LEVEL] =
        {
            .title = COMPOUND_STRING("Player Level"),
            .options = {
                COMPOUND_STRING("Level Cap"),
                COMPOUND_STRING("No Cap"),
            },
            .optionDescription = {
                COMPOUND_STRING("As the player progresses, their Pokémon will never grow past a certain level. This level grows throughout the game."),
                COMPOUND_STRING("Pokémon have no restrictions on their ability to grow."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_TRAINER_SCALING] =
        {
            .title = COMPOUND_STRING("Trainer Scaling"),
            .options = {
                COMPOUND_STRING("Party"),
                COMPOUND_STRING("Level"),
                COMPOUND_STRING("Off"),
            },
            .optionDescription = {
                COMPOUND_STRING("Enemy Trainer Pokémon species and levels change based on the size of the player's party and the highest leveled Pokémon in their party."),
                COMPOUND_STRING("Enemy Trainer Pokémon levels change based on the size of the player's party and the highest leveled Pokémon in their party."),
                COMPOUND_STRING("Enemy Trainer Pokémon do not change."),
            },
            .numOptions = BATTLE_OPTION_TRAINER_SCALING_COUNT,
        },
        [BATTLE_OPTIONS_WILD_SCALING] =
        {
            .title = COMPOUND_STRING("Wild Scaling"),
            .options = {
                COMPOUND_STRING("On"),
                COMPOUND_STRING("Off"),
            },
            .optionDescription = {
                COMPOUND_STRING("Not implemented."),
                COMPOUND_STRING("Not implemented."),
            },
            .numOptions = BATTLE_OPTION_WILD_SCALING_COUNT,
        },
        [BATTLE_OPTIONS_SWITCH_STYLE] =
        {
            .title = COMPOUND_STRING("Switch Style"),
            .options = {
                COMPOUND_STRING("Switch"),
                COMPOUND_STRING("Set"),
            },
            .optionDescription = {
                COMPOUND_STRING("The player is allowed to switch their Pokémon whenver the opponent sends out their next Pokémon."),
                COMPOUND_STRING("The player is not allowed to switch their Pokémon whenever the opponent sends out their next Pokémon."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_TAKE_WILD_ITEMS] =
        {
            .title = COMPOUND_STRING("Take Wild Items"),
            .options = {
                COMPOUND_STRING("Never"),
                COMPOUND_STRING("Ask"),
                COMPOUND_STRING("Always"),
            },
            .optionDescription = {
                COMPOUND_STRING("When Wild Pokémon faint while holding an item nothing happens."),
                COMPOUND_STRING("When Wild Pokémon faint while holding an item the player is asked if they want to take it."),
                COMPOUND_STRING("When Wild Pokémon faint while holding an item the player will add the item to their Bag."),
            },
            .numOptions = 3,
        },
        [BATTLE_OPTIONS_LAST_USED_BALL] =
        {
            .title = COMPOUND_STRING("Last Used Ball"),
            .options = {
                COMPOUND_STRING("Last Ball"),
                COMPOUND_STRING("Best Ball"),
                COMPOUND_STRING("After 1st"),
                COMPOUND_STRING("Off"),
            },
            .optionDescription = {
                COMPOUND_STRING("In a wild battle, pressing {R_BUTTON} from the main battle menu will throw a Poké Ball. This ball is the last one thrown by the palyer."),
                COMPOUND_STRING("In a wild battle, pressing {R_BUTTON} from the main battle menu will throw a Poké Ball. This ball is the ball with the best chance of success."),
                COMPOUND_STRING("In a wild battle, pressing {R_BUTTON} from the main battle menu will throw a Poké Ball. This ball is the last one thrown by the player during this battle."),
                COMPOUND_STRING("In a wild battle, pressing {R_BUTTON} from the main battle menu will NOT throw a Poké Ball."),
            },
            .numOptions = BATTLE_OPTION_BALL_COUNT,
        },
        [BATTLE_OPTIONS_QUICK_RUN] =
        {
            .title = COMPOUND_STRING("Quick Run"),
            .options = {
                COMPOUND_STRING("{B_BUTTON} {RIGHT_ARROW} {A_BUTTON}"),
                COMPOUND_STRING("{L_BUTTON}"),
                COMPOUND_STRING("Off"),
            },
            .optionDescription = {
                COMPOUND_STRING("In a battle, pressing {B_BUTTON} {RIGHT_ARROW} {A_BUTTON} from the main battle menu will attempt to run from battle."),
                COMPOUND_STRING("In a battle, pressing {L_BUTTON} from the main battle menu will attempt to run from battle."),
                COMPOUND_STRING("In a battle, there is no button to quickly flee."),
            },
            .numOptions = BATTLE_OPTION_QUICK_RUN_COUNT,
        },
        [BATTLE_OPTIONS_MID_BATTLE_EVOLUTION] =
        {
            .title = COMPOUND_STRING("Mid Battle Evo"),
            .options = {
                COMPOUND_STRING("On"),
                COMPOUND_STRING("Off"),
            },
            .optionDescription = {
                COMPOUND_STRING("If a Pokémon meets the threshold for evolution during battle, it will evolve during the battle."),
                COMPOUND_STRING("If a Pokémon meets the threshold for evolution during battle, it will evolve after the player wins the battle."),
            },
            .numOptions = BATTLE_OPTION_MID_BATTLE_EVOLUTION_COUNT,
        },
        [BATTLE_OPTIONS_BATTLE_DIFFICULTY] =
        {
            .title = COMPOUND_STRING("Battle Difficulty"),
            .options = {
                COMPOUND_STRING("Cinematic"),
                COMPOUND_STRING("Standard"),
                COMPOUND_STRING("Challenge"),
            },
            .optionDescription = {
                COMPOUND_STRING("Battles use weaker Pokemon and strategies. This is the difficulty of a normal Pokemon title. Designed for those that don't want a challenge."),
                COMPOUND_STRING("Battles use strong Pokemon and strategies. More difficult than a normal Pokemon title. Designed for players of all skill levels."),
                COMPOUND_STRING("Battles use extreme Pokemon and strategies. Designed only for battling experts."),
            },
            .numOptions = BATTLE_OPTION_DIFFICULTY_COUNT,
        },
        [BATTLE_OPTIONS_FAINTED_MON] =
        {
            .title = COMPOUND_STRING("Fainted Mon"),
            .options = {
                COMPOUND_STRING("Allowed"),
                COMPOUND_STRING("Box"),
                COMPOUND_STRING("Release"),
            },
            .optionDescription = {
                COMPOUND_STRING("Pokémon in the player's party faint normally."),
                COMPOUND_STRING("Pokémon in the player's party are sent to the box when they faint, and cannot be withdrawn."),
                COMPOUND_STRING("Pokémon in the player's party are released when they faint."),
            },
            .numOptions = 3,
        },
        [BATTLE_OPTIONS_FIRST_POKEMON_CATCH] =
        {
            .title = COMPOUND_STRING("First Pokemon Catch"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("First Only"),
                COMPOUND_STRING("Duplicate"),
            },
            .optionDescription = {
                COMPOUND_STRING("Players can catch Pokémon normally."),
                COMPOUND_STRING("Players can catch only catch the first Pokémon encoutered on a route. Shiny Pokémon can always be captured."),
                COMPOUND_STRING("Players can catch only catch the first  new Pokémon encoutered on a route. Shiny Pokémon can always be captured."),
            },
            .numOptions = 3,
        },
        [BATTLE_OPTIONS_NICKNAME] =
        {
            .title = COMPOUND_STRING("Nickname"),
            .options = {
                COMPOUND_STRING("Ask"),
                COMPOUND_STRING("Forced"),
                COMPOUND_STRING("None"),
            },
            .optionDescription = {
                COMPOUND_STRING("Players are asked if they want to nickname a new Pokémon upon capture."),
                COMPOUND_STRING("Players forced to nickname a new Pokémon upon capture."),
                COMPOUND_STRING("Players are not asked if they want to nickname a new Pokémon upon capture."),
            },
            .numOptions = 3,
        },
        [BATTLE_OPTIONS_WHITEOUT] =
        {
            .title = COMPOUND_STRING("Whiteout"),
            .options = {
                COMPOUND_STRING("Respawn"),
                COMPOUND_STRING("Death"),
            },
            .optionDescription = {
                COMPOUND_STRING("When 'Fainted Mon' is turned on & the player whites out, a Pokémon is withdrawn from PC. If there are no Pokémon, the game loads the last save."),
                COMPOUND_STRING("When 'Fainted Mon' is turned on & the player whites out, the save file is permanently deleted!"),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_ITEM_HEALING] =
        {
            .title = COMPOUND_STRING("Item Healing"),
            .options = {
                COMPOUND_STRING("Allowed"),
                COMPOUND_STRING("Disabled"),
            },
            .optionDescription = {
                COMPOUND_STRING("Players can use items to heal Hit Points and Power Points."),
                COMPOUND_STRING("Players can not use items to heal Hit Points and Power Points."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_CENTER_HEALING] =
        {
            .title = COMPOUND_STRING("Center Healing"),
            .options = {
                COMPOUND_STRING("Allowed"),
                COMPOUND_STRING("Disabled"),
            },
            .optionDescription = {
                COMPOUND_STRING("Pokémon Centers and rest stops will heal the player's party."),
                COMPOUND_STRING("Pokémon Centers and rest stops will not heal the player's party."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_MOVE_HEALING] =
        {
            .title = COMPOUND_STRING("Move Healing"),
            .options = {
                COMPOUND_STRING("Allowed"),
                COMPOUND_STRING("Disabled"),
            },
            .optionDescription = {
                COMPOUND_STRING("Players can use moves to heal Hit Points and Power Points."),
                COMPOUND_STRING("Players can not use moves to heal Hit Points and Power Points."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_BAG_ITEMS] =
        {
            .title = COMPOUND_STRING("Bag Items"),
            .options = {
                COMPOUND_STRING("Allowed"),
                COMPOUND_STRING("No Boss"),
                COMPOUND_STRING("No Trainer"),
                COMPOUND_STRING("4 Items"),
                COMPOUND_STRING("No Items"),
            },
            .optionDescription = {
                COMPOUND_STRING("The player can use items during battle."),
                COMPOUND_STRING("The player cannot use items during Gym and Important battles."),
                COMPOUND_STRING("The player cannot use items during Trainer battles."),
                COMPOUND_STRING("The player can use up to 4 items during a single battle."),
                COMPOUND_STRING("The player cannot use items during battle."),
            },
            .numOptions = 5,
        },
        [BATTLE_OPTIONS_OPPONENTS_ITEMS] =
        {
            .title = COMPOUND_STRING("Opponent Items"),
            .options = {
                COMPOUND_STRING("Allowed"),
                COMPOUND_STRING("Disabled"),
            },
            .optionDescription = {
                COMPOUND_STRING("Opposing Trainers can use up to 4 items during battle."),
                COMPOUND_STRING("Opposing Trainers can not use items during battle."),
            },
            .numOptions = 2,
        },
        /*
           [BATTLE_OPTIONS_BASE_STAT_EQUALIZER] =
           {
           .title = COMPOUND_STRING("Base Stat Equalizer"),
           .options = {
           COMPOUND_STRING("Disabled"),
           COMPOUND_STRING("100"),
           COMPOUND_STRING("255"),
           COMPOUND_STRING("500"),
           },
           .optionDescription = {
           COMPOUND_STRING("Disabled"),
           COMPOUND_STRING("100"),
           COMPOUND_STRING("255"),
           COMPOUND_STRING("500"),
           },
           .numOptions = 4,
           },
           [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE] =
           {
           .title = COMPOUND_STRING("One Type Challenge"),
           .options = {
           COMPOUND_STRING("Normal"),
           COMPOUND_STRING("Fighting"),
           COMPOUND_STRING("Flying"),
           COMPOUND_STRING("Poison"),
           COMPOUND_STRING("Ground"),
           COMPOUND_STRING("Rock"),
           COMPOUND_STRING("Bug"),
           COMPOUND_STRING("Ghost"),
           COMPOUND_STRING("Steel"),
           COMPOUND_STRING("Fire"),
           COMPOUND_STRING("Water"),
           COMPOUND_STRING("Grass"),
           COMPOUND_STRING("Electric"),
           COMPOUND_STRING("Psychic"),
           COMPOUND_STRING("Ice"),
           COMPOUND_STRING("Dragon"),
           COMPOUND_STRING("Dark"),
           COMPOUND_STRING("Fairy"),
           },
           .optionDescription = {
           COMPOUND_STRING("Normal"),
           COMPOUND_STRING("Fighting"),
           COMPOUND_STRING("Flying"),
           COMPOUND_STRING("Poison"),
           COMPOUND_STRING("Ground"),
           COMPOUND_STRING("Rock"),
           COMPOUND_STRING("Bug"),
           COMPOUND_STRING("Ghost"),
           COMPOUND_STRING("Steel"),
           COMPOUND_STRING("Fire"),
           COMPOUND_STRING("Water"),
           COMPOUND_STRING("Grass"),
           COMPOUND_STRING("Electric"),
           COMPOUND_STRING("Psychic"),
           COMPOUND_STRING("Ice"),
           COMPOUND_STRING("Dragon"),
           COMPOUND_STRING("Dark"),
           COMPOUND_STRING("Fairy"),
           },
           .numOptions = NUMBER_OF_MON_TYPES + 1,
           },
           */
        [BATTLE_OPTIONS_TYPE_ICONS] =
        {
            .title = COMPOUND_STRING("Type Icons"),
            .options = {
                COMPOUND_STRING("Show"),
                COMPOUND_STRING("Hide"),
            },
            .optionDescription = {
                COMPOUND_STRING("Not implemented."),
                COMPOUND_STRING("Not implemented."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_ANIMATIONS] =
        {
            .title = COMPOUND_STRING("Animations"),
            .options = {
                COMPOUND_STRING("On"),
                COMPOUND_STRING("Off"),
            },
            .optionDescription = {
                COMPOUND_STRING("Graphical battle elements such as move animations,  status afflications and weather are played."),
                COMPOUND_STRING("Graphical battle elements such as move animations,  status afflications and weather are not played."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_INTRO] =
        {
            .title = COMPOUND_STRING("Battle Intro"),
            .options = {
                COMPOUND_STRING("Normal"),
                COMPOUND_STRING("Skip"),
            },
            .optionDescription = {
                COMPOUND_STRING("The slide animation that happens at the beginning of the battle plays normally."),
                COMPOUND_STRING("The slide animation that happens at the beginning of the battle is skipped."),
            },
            .numOptions = 2,
        },
        [BATTLE_OPTIONS_HP_SPEED] =
        {
            .title = COMPOUND_STRING("HP Speed"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Fast"),
                COMPOUND_STRING("Instant"),
            },
            .optionDescription = {
                COMPOUND_STRING("The speed at which the HP bar will change  is normal."),
                COMPOUND_STRING("The speed at which the HP bar will change  is fast."),
                COMPOUND_STRING("The speed at which the HP bar will change  is instaneous."),
            },
            .numOptions = BATTLE_OPTION_BAR_SPEED_COUNT,
        },
        [BATTLE_OPTIONS_EXP_SPEED] =
        {
            .title = COMPOUND_STRING("EXP Speed"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Fast"),
                COMPOUND_STRING("Instant"),
            },
            .optionDescription = {
                COMPOUND_STRING("The speed at which the HP bar will change  is normal."),
                COMPOUND_STRING("The speed at which the HP bar will change  is fast."),
                COMPOUND_STRING("The speed at which the HP bar will change  is instaneous."),
            },
            .numOptions = BATTLE_OPTION_BAR_SPEED_COUNT,
        },
    },
    [VISUAL_SETTINGS] =
    {
        [VISUAL_OPTIONS_PRESET] =
        {
            .title = COMPOUND_STRING("Visual Settings"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Speedrun"),
                COMPOUND_STRING("Custom"),
            },
            .optionDescription = {
                COMPOUND_STRING("Measurements, Time, Pokemon colors, font, interface colors, and more are optimized for the game's intended design."),
                COMPOUND_STRING("Measurements, Time, Pokemon colors, font, interface colors, and more are optimized for speedrunning."),
                COMPOUND_STRING(""),
            },
            .numOptions = 3,
        },
        [VISUAL_OPTIONS_UNITS] =
        {
            .title = COMPOUND_STRING("Units"),
            .options = {
                COMPOUND_STRING("Imperial ."),
                COMPOUND_STRING("Metric ."),
                COMPOUND_STRING("Imperial ,"),
                COMPOUND_STRING("Metric ,"),
            },
            .optionDescription = {
                COMPOUND_STRING("The Pokémon Cranidos weighs 64.4 lbs."),
                COMPOUND_STRING("The Pokémon Cranidos weighs 31.5 kg."),
                COMPOUND_STRING("The Pokémon Cranidos weighs 64,4 lbs."),
                COMPOUND_STRING("The Pokémon Cranidos weighs 31,5 kg."),
            },
            .numOptions = VISUAL_OPTION_UNITS_COUNT,
        },
        [VISUAL_OPTIONS_TIME] =
        {
            .title = COMPOUND_STRING("Time"),
            .options = {
                COMPOUND_STRING("24 Hour"),
                COMPOUND_STRING("12 Hour"),
            },
            .optionDescription = {
                COMPOUND_STRING("The most interesting time of day is 16:20."),
                COMPOUND_STRING("The most interesting time of day is 4:20 PM."),
            },
            .numOptions = VISUAL_OPTION_TIME_COUNT,
        },
        [VISUAL_OPTIONS_TEXT_SPEED] =
        {
            .title = COMPOUND_STRING("Text Speed"),
            .options = {
                COMPOUND_STRING("Slow"),
                COMPOUND_STRING("Medium"),
                COMPOUND_STRING("Fast"),
                COMPOUND_STRING("Instant"),
            },
            .optionDescription = {
                COMPOUND_STRING("Slow"),
                COMPOUND_STRING("Medium"),
                COMPOUND_STRING("Fast"),
                COMPOUND_STRING("Instant"),
            },
            .numOptions = 4,
        },
        [VISUAL_OPTIONS_FONT_SWITCHER] =
        {
            .title = COMPOUND_STRING("Font Switcher"),
            .options = {
                COMPOUND_STRING("Emerald"),
                COMPOUND_STRING("Fire Red"),
            },
            .optionDescription = {
                COMPOUND_STRING("All interfaces will use the font from Emerald."),
                COMPOUND_STRING("All interfaces will use the font from Fire Red."),
            },
            .numOptions = 2,
        },
        [VISUAL_OPTIONS_COLOR] =
        {
            .title = COMPOUND_STRING("Color"),
            .options = {
                COMPOUND_STRING("Red"),
                COMPOUND_STRING("Green"),
                COMPOUND_STRING("Blue"),
                COMPOUND_STRING("Yellow"),
                COMPOUND_STRING("Black"),
                COMPOUND_STRING("White"),
                COMPOUND_STRING("Platinum"),
                COMPOUND_STRING("Scarlet"),
                COMPOUND_STRING("Violet"),
                COMPOUND_STRING("Custom"),
            },
            .optionDescription = {
                COMPOUND_STRING("Game elements will use Red as an accent color."),
                COMPOUND_STRING("Game elements will use Green as an accent color."),
                COMPOUND_STRING("Game elements will use Blue as an accent color."),
                COMPOUND_STRING("Game elements will use Yellow as an accent color."),
                COMPOUND_STRING("Game elements will use Black as an accent color."),
                COMPOUND_STRING("Game elements will use White as an accent color."),
                COMPOUND_STRING("Game elements will use Platinum as an accent color."),
                COMPOUND_STRING("Game elements will use Scarlet as an accent color."),
                COMPOUND_STRING("Game elements will use Violet as an accent color."),
                COMPOUND_STRING("Game elements will use a custom accent color."),
            },
            .numOptions = 10,
        },
        [VISUAL_OPTIONS_COLOR_VARIATION] =
        {
            .title = COMPOUND_STRING("Pokémon Variation"),
            .options = {
                COMPOUND_STRING("None"),
                COMPOUND_STRING("Persona"),
                COMPOUND_STRING("Stats"),
                COMPOUND_STRING("Nickname"),
            },
            .optionDescription = {
                COMPOUND_STRING("Your Pokémon's color will not be influenced by any other factors."),
                COMPOUND_STRING("Your Pokémon's color will be influenced by the Pokémon's hidden personality value."),
                COMPOUND_STRING("Your Pokémon's color will be influenced by the Pokémon's Individual Values."),
                COMPOUND_STRING("Your Pokémon's color will be influenced by the Pokémon's nickname and the Pokémon's Original Trainer's name."),
            },
            .numOptions = VISUAL_OPTION_COLOR_VARIATION_COUNT,
        },
    },
    [MUSIC_SETTINGS] = 
    {
        [MUSIC_OPTIONS_PRESET] =
        {
            .title = COMPOUND_STRING("Music Settings"),
            .options = {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("Kanto"),
                COMPOUND_STRING("Johto"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
                COMPOUND_STRING("Galar"),
                COMPOUND_STRING("Paldea"),
                COMPOUND_STRING("Custom"),
            },
            .optionDescription = {
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Resido region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Kanto region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Johto region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Hoenn region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Sinnoh region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Unova region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Kalos region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Alola region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Galar region."),
                COMPOUND_STRING("Surfing, biking, and select battles (Wild, Trainer, and more) use music from the Paldea region."),
                COMPOUND_STRING(""),
            },
            .numOptions = MUSIC_PRESET_COUNT,
        },
        [MUSIC_OPTIONS_SPEAKER] =
        {
            .title = COMPOUND_STRING("Speaker"),
            .options =
            {
                COMPOUND_STRING("Mono"),
                COMPOUND_STRING("Stereo"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("All audio is handled by the system's mono audio mode."),
                COMPOUND_STRING("All audio is handled by the system's stereo audio mode."),
            },
            .numOptions = MUSIC_OPTIONS_SPEAKER_COUNT,
        },
        [MUSIC_OPTIONS_SURF] =
        {
            .title = COMPOUND_STRING("Surf"),
            .options =
            {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("Tohjo"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
                COMPOUND_STRING("Mantine Surf"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("While Surfing, you'll hear Resido's Surfing music."),
                COMPOUND_STRING("While Surfing, you'll hear the Surfing music from Johto and Kanto."),
                COMPOUND_STRING("While Surfing, you'll hear the Surfing music from Hoenn."),
                COMPOUND_STRING("While Surfing, you'll hear the Surfing music from Sinnoh."),
                COMPOUND_STRING("While Surfing, you'll hear the Surfing music from Unova."),
                COMPOUND_STRING("While Surfing, you'll hear the Surfing music from Kalos."),
                COMPOUND_STRING("While Surfing, you'll hear the Surfing music from Alola."),
                COMPOUND_STRING("While Surfing, you'll hear the Surfing music from Alola's Mantine Surf."),

            },
            .numOptions = MUSIC_SURF_OPTIONS_COUNT,
        },
        [MUSIC_OPTIONS_BIKE] =
        {
            .title = COMPOUND_STRING("Bike"),
            .options =
            {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("Kanto"),
                COMPOUND_STRING("Johto"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("While riding a bicycle, you'll hear Resido's bicycle music."),
                COMPOUND_STRING("While riding a bicycle, you'll hear the bicycle music from Kanto."),
                COMPOUND_STRING("While riding a bicycle, you'll hear the bicycle music from Johto."),
                COMPOUND_STRING("While riding a bicycle, you'll hear the bicycle music from Hoenn."),
                COMPOUND_STRING("While riding a bicycle, you'll hear the bicycle music from Sinnoh."),
                COMPOUND_STRING("While riding a bicycle, you'll hear the bicycle music from Unova."),
                COMPOUND_STRING("While riding a bicycle, you'll hear the bicycle music from Kalos."),
                COMPOUND_STRING("While riding a bicycle, you'll hear the bicycle music from Alola."),
            },
            .numOptions = MUSIC_BIKE_OPTIONS_COUNT,
        },
        [MUSIC_OPTIONS_WILD] =
        {
            .title = COMPOUND_STRING("Wild Battle"),
            .options =
            {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("Kanto"),
                COMPOUND_STRING("Johto"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
                COMPOUND_STRING("Galar"),
                COMPOUND_STRING("Paldea"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear Resido's wild battle music."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Kanto."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Johto."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Hoenn."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Sinnoh."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Unova."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Kalos."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Alola."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Galar."),
                COMPOUND_STRING("While battling a wild Pokemon, you'll hear the wild battle music from Paldea."),
            },
            .numOptions = MUSIC_BATTLE_WILD_OPTIONS_COUNT,
        },
        [MUSIC_OPTIONS_TRAINER] =
        {
            .title = COMPOUND_STRING("Trainer Battle"),
            .options =
            {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("Kanto"),
                COMPOUND_STRING("Johto"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
                COMPOUND_STRING("Galar"),
                COMPOUND_STRING("Paldea"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear Resido's Trainer battle music."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Kanto."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Johto."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Hoenn."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Sinnoh."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Unova."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Kalos."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Alola."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Galar."),
                COMPOUND_STRING("While battling a Pokemon Trainer, you'll hear the Trainer battle music from Paldea."),
            },
            .numOptions = MUSIC_BATTLE_TRAINER_OPTIONS_COUNT,
        },
        [MUSIC_OPTIONS_GYM] =
        {
            .title = COMPOUND_STRING("Gym Battle"),
            .options =
            {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("Kanto"),
                COMPOUND_STRING("Johto"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
                COMPOUND_STRING("Galar"),
                COMPOUND_STRING("Paldea")
            },
            .optionDescription =
            {
                COMPOUND_STRING("While battling a Gym Leader, you'll hear Resido's Gym Battle music."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Kanto."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Johto."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Hoenn."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Sinnoh."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Unova."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Kalos."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Kahuna Battle music from Alola."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Galar."),
                COMPOUND_STRING("While battling a Gym Leader, you'll hear the Gym Battle music from Paldea."),
            },
            .numOptions = MUSIC_BATTLE_GYM_OPTIONS_COUNT,
        },
        [MUSIC_OPTIONS_TOURNAMENT] =
        {
            .title = COMPOUND_STRING("Tournament Battle"),
            .options =
            {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("Tohjo"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
                COMPOUND_STRING("Galar"),
                COMPOUND_STRING("Paldea"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("While battling in a tournament, you'll hear Resido's tournament Battle music."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the Elite Four music from Kanto and Johto."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the Elite Four music from Hoenn."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the Elite Four music from Sinnoh."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the Elite Four music from Unova."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the Elite Four music from Kalos."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the Elite Four music from Alola."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the tournament music from Galar."),
                COMPOUND_STRING("While battling in a tournament, you'll hear the Elite Four music from Paldea."),
            },
            .numOptions = MUSIC_OPTION_BATTLE_TOURNAMENT_COUNT,
        },
        [MUSIC_OPTIONS_CHAMPION] =
        {
            .title = COMPOUND_STRING("Champion Battle"),
            .options =
            {
                COMPOUND_STRING("Resido"),
                COMPOUND_STRING("old Kanto"),
                COMPOUND_STRING("new Kanto"),
                COMPOUND_STRING("Hoenn"),
                COMPOUND_STRING("Sinnoh"),
                COMPOUND_STRING("old Unova"),
                COMPOUND_STRING("new Unova"),
                COMPOUND_STRING("Kalos"),
                COMPOUND_STRING("Alola"),
                COMPOUND_STRING("Galar"),
                COMPOUND_STRING("Paldea"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear Resido's tournament Battle music."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from old Kanto."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from new Kanto."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from Hoenn."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from Sinnoh."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from old Unova."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from new Unova."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from Kalos."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from Alola."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from Galar."),
                COMPOUND_STRING("While battling in the finals of a tournament, you'll hear the Champion battle music from Paldea."),
            },
            .numOptions = MUSIC_BATTLE_CHAMPION_OPTIONS_COUNT,
        },
        [MUSIC_OPTIONS_MUTE_MUSIC] =
        {
            .title = COMPOUND_STRING("Mute Music"),
            .options =
            {
                COMPOUND_STRING("Unmuted"),
                COMPOUND_STRING("Muted"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("The background music throughout the game plays normally."),
                COMPOUND_STRING("The background music throughout the game does not play."),
            },
            .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
        },
        [MUSIC_OPTIONS_MUTE_SOUNDFX] =
        {
            .title = COMPOUND_STRING("Mute Sound Effects"),
            .options =
            {
                COMPOUND_STRING("Unmuted"),
                COMPOUND_STRING("Muted"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("The sound effects throughout the game play normally."),
                COMPOUND_STRING("The sound effects throughout the game do not play."),
            },
            .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
        },
        [MUSIC_OPTIONS_MUTE_CRIES] =
        {
            .title = COMPOUND_STRING("Mute Cries"),
            .options =
            {
                COMPOUND_STRING("Unmuted"),
                COMPOUND_STRING("Muted"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("The Pokemon's cries throughout the game play normally."),
                COMPOUND_STRING("The Pokemon's cries throughout the game do not play."),
            },
            .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
        },
        [MUSIC_OPTIONS_MUTE_FANFARES] =
        {
            .title = COMPOUND_STRING("Mute Fanfares"),
            .options =
            {
                COMPOUND_STRING("Unmuted"),
                COMPOUND_STRING("Muted"),
            },
            .optionDescription =
            {
                COMPOUND_STRING("The musical fanfares throughout the game play normally."),
                COMPOUND_STRING("The musical fanfares throughout the game do not play."),
            },
            .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
        },
    },
    [RANDOM_SETTINGS] = 
    {
        [RANDOM_OPTIONS_PRESET] =
        {
            .title = COMPOUND_STRING("Random Settings"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Sane"),
                COMPOUND_STRING("Crazy"),
                COMPOUND_STRING("Total Chaos"),
                COMPOUND_STRING("Custom"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default Description"),
                COMPOUND_STRING("Sane Description"),
                COMPOUND_STRING("Crazy Description"),
                COMPOUND_STRING("Total Chaos Description"),
                COMPOUND_STRING("Custom Description"),
            },
            .numOptions = 5,
        },
        [RANDOM_OPTIONS_STARTER] =
        {
            .title = COMPOUND_STRING("Starter"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_WILD_BATTLE] =
        {
            .title = COMPOUND_STRING("Wild Battle"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_TRAINER_BATTLE] =
        {
            .title = COMPOUND_STRING("Trainer Battle"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_EVOLUTION] =
        {
            .title = COMPOUND_STRING("Evolution"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Legends"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Legends"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 4,
        },
        [RANDOM_OPTIONS_EVOLUTION_METHOD] =
        {
            .title = COMPOUND_STRING("Evolution Method"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_TYPE_EFFECTIVENESS] =
        {
            .title = COMPOUND_STRING("Type Effectiveness"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_BASE_STATS] =
        {
            .title = COMPOUND_STRING("Base Stats"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_TYPES] =
        {
            .title = COMPOUND_STRING("Types"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_ABILITIES] =
        {
            .title = COMPOUND_STRING("Abilities"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_LEVEL_UP_MOVES] =
        {
            .title = COMPOUND_STRING("Level Up Moves"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_TMS] =
        {
            .title = COMPOUND_STRING("TMs"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_MOVE_TUTORS] =
        {
            .title = COMPOUND_STRING("Move Tutors"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_LEARNSETS] =
        {
            .title = COMPOUND_STRING("Learnsets"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_ITEMS] =
        {
            .title = COMPOUND_STRING("Items"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_STATIC_ENCOUNTERS] =
        {
            .title = COMPOUND_STRING("Static Encounters"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        },
        [RANDOM_OPTIONS_TRAINERS] =
        {
            .title = COMPOUND_STRING("Trainers"),
            .options = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .optionDescription = {
                COMPOUND_STRING("Default"),
                COMPOUND_STRING("Random"),
                COMPOUND_STRING("Chaos"),
            },
            .numOptions = 3,
        }
    },
};

static void PrintToWindow(u8 windowId, u8 colorIdx)
{
	u8 i;
	u8 x = 1;
	u8 y = 1;

	FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

	// Selector Sprite --------------------------------------------------------------------------------------------------------------------
	x = 0;
	if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE))
		y = 2 + (OptionsMenu_GetCurrentScreenId() * 2);
	else
		y = 2 + (GetCursorPosition() * 2);

	BlitBitmapToWindow(windowId, sOptionMenuSelector, (x*8) + 5, (y*8), 104, 24);

	// Settings Icons --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
		x = 1;
		y = 2;

		for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
            BlitBitmapToWindow(windowId, sOptionMenuIcons[i], (x*8) + 2, (y*8) + 5, 16, 16);

			y = y + 2;
		}
	}
	// Current Setting Icon --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you have a selected settings
	if(OptionsMenu_GetAreYouNotOnSettingsHub()){
		x = 0;
		y = 0;

        BlitBitmapToWindow(windowId, sOptionMenuIcons[OptionsMenu_GetCurrentScreenId()], (x*8), (y*8), 16, 16);
	}

	// Settings Hub Text --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
		x = 0;
		y = 0;

		AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, COMPOUND_STRING("Settings Hub"));
	}

	// Current Settings Title --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you have a selected settings
	if(OptionsMenu_GetAreYouNotOnSettingsHub()){
		x = 2;
		y = 0;

		AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF,  Settings_Options[OptionsMenu_GetCurrentScreenId()][0].title);
	}

	// Settings Names --------------------------------------------------------------------------------------------------------------------
	if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
		x = 3;
		y = 2;
		for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
            StringExpandPlaceholders(gStringVar1,Settings_Options[i][0].title);
            u32 fontId = FONT_OPTION_DESC;
            u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
            u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
            u32 windowWidth = 90;
            fontId = GetFontIdToFit(gStringVar1,FONT_OPTION_DESC,letterSpacing,windowWidth);
			AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8) + 4, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);
			y = y + 2;
		}
	}
    else{
        x = 1;
        y = 2;
        for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
            StringExpandPlaceholders(gStringVar1,Settings_Options[OptionsMenu_GetCurrentScreenId()][GetCurrentSlotOption(i)].title);
            u32 fontId = FONT_OPTION_DESC;
            u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
            u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
            u32 windowWidth = 90;
            fontId = GetFontIdToFit(gStringVar1,FONT_OPTION_DESC,letterSpacing,windowWidth);
            AddTextPrinterParameterized4(windowId, fontId, (x*8) + 4, (y*8) + 4, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);
            y = y + 2;
        }
    }

	// Current Settings --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
		x = 21;
		y = 2;

		for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
            StringExpandPlaceholders(gStringVar1,Settings_Options[i][0].options[TemporalOptions[i][0]]);
            u32 fontId = FONT_OPTION_DESC;
            u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
            u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
            u32 windowWidth = 48;
            fontId = GetFontIdToFit(gStringVar1,FONT_OPTION_DESC,letterSpacing,windowWidth);
            AddTextPrinterParameterized4(windowId, fontId, (x*8) + 6, (y*8) + 4, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);
			y = y + 2;
		}
	}
	else{
		x = 21;
		y = 2;


		for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
            StringExpandPlaceholders(gStringVar1,Settings_Options[OptionsMenu_GetCurrentScreenId()][GetCurrentSlotOption(i)].options[TemporalOptions[OptionsMenu_GetCurrentScreenId()][GetCurrentSlotOption(i)]]);
            u32 fontId = FONT_OPTION_DESC;
            u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
            u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
            u32 windowWidth = 48;
            fontId = GetFontIdToFit(gStringVar1,FONT_OPTION_DESC,letterSpacing,windowWidth);
            AddTextPrinterParameterized4(windowId, fontId, (x*8) + 6, (y*8) + 4, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);
			y = y + 2;
		}
	}

	// Option Description --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	x = 0;
	y = 14;
	if(OptionsMenu_GetShouldShowDiscardDialogue()){
		AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, COMPOUND_STRING("Are you sure you want to leave without\nsaving the changes?"));
	}
	else if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
        StringExpandPlaceholders(gStringVar1,Settings_Options[OptionsMenu_GetCurrentScreenId()][0].optionDescription[TemporalOptions[OptionsMenu_GetCurrentScreenId()][0]]);
        u32 halfTile = (TILE_SIZE_1BPP / 2);
        u32 fontId = FONT_OPTION_DESC;
        u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
        u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
        BreakStringNaive(gStringVar1,OPTION_DESC_PIXEL_WIDTH,OPTION_DESC_LINES_COUNT,fontId, HIDE_SCROLL_PROMPT);
        AddTextPrinterParameterized4(windowId, fontId, halfTile, 108, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);
	}
    else
    {
        StringExpandPlaceholders(gStringVar1,Settings_Options[OptionsMenu_GetCurrentScreenId()][OptionsMenu_GetCurrentOptionId()].optionDescription[TemporalOptions[OptionsMenu_GetCurrentScreenId()][OptionsMenu_GetCurrentOptionId()]]);
        u32 halfTile = (TILE_SIZE_1BPP / 2);
        u32 fontId = FONT_OPTION_DESC;
        u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
        u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
        BreakStringNaive(gStringVar1,OPTION_DESC_PIXEL_WIDTH,OPTION_DESC_LINES_COUNT,fontId, HIDE_SCROLL_PROMPT);
        AddTextPrinterParameterized4(windowId, fontId, halfTile, 108, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar1);
    }

	// Help Bar --------------------------------------------------------------------------------------------------------------------
	x = 0;
	y = 18;

//Text
    if(OptionsMenu_GetShouldShowDiscardDialogue()){
        AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, COMPOUND_STRING("{A_BUTTON} Yes {B_BUTTON} Cancel {START_BUTTON} Save"));
    }
    else if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
        AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, COMPOUND_STRING("{DPAD_LEFTRIGHT} Preset {A_BUTTON} Explore {B_BUTTON} Discard {START_BUTTON} Save and Quit"));
    }
    else{
        AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, COMPOUND_STRING("{DPAD_LEFTRIGHT} Change {B_BUTTON} Discard {START_BUTTON} Save {L_BUTTON}{R_BUTTON} Next Page"));
    }
	// --------------------------------------------------------------------------------------------------------------------
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
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        Menu_FreeResources();
        ResetCurrentlyPlayingMusic();
        SetMainCallback2(sMenuDataPtr->savedCallback);
        DestroyTask(taskId);
    }
}

static void RecolorWindow(){
	FreeAllSpritePalettes();
	switch(TemporalOptions[VISUAL_SETTINGS][VISUAL_OPTIONS_COLOR]){
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

/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    if(JOY_NEW(DPAD_UP) && (OptionsMenu_GetShouldShowDiscardDialogue() == FALSE))
    {
        if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
            if(OptionsMenu_GetCurrentScreenId() > 0){
                OptionsMenu_DecrementCurrentScreenId();
            }
            else{
                OptionsMenu_SetCurrentScreenId(NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN - 1);
            }
        }
        else{
            PressedUpButton();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
    }

	if(JOY_NEW(DPAD_DOWN) && (OptionsMenu_GetShouldShowDiscardDialogue() == FALSE))
	{
        if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
            if(OptionsMenu_GetCurrentScreenId() < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN-1){
                OptionsMenu_IncrementCurrentScreenId();
            }
            else{
                OptionsMenu_SetCurrentScreenId(0);
            }
        }
        else{
            PressedDownButton();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if(JOY_NEW(DPAD_LEFT) && (OptionsMenu_GetShouldShowDiscardDialogue() == FALSE))
	{
        if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE) || OptionsMenu_GetCurrentOptionId() == 0){
            //For Presets
            switch(OptionsMenu_GetCurrentScreenId()){
                case GAME_SETTINGS:
                    if(TemporalOptions[GAME_SETTINGS][0] > 0)
                        TemporalOptions[GAME_SETTINGS][0]--;
                    else
                        TemporalOptions[GAME_SETTINGS][0] = Settings_Options[GAME_SETTINGS][0].numOptions - 2;

                break;
                case BATTLE_SETTINGS:
                    if(TemporalOptions[BATTLE_SETTINGS][0] > 0)
                        TemporalOptions[BATTLE_SETTINGS][0]--;
                    else
                        TemporalOptions[BATTLE_SETTINGS][0] = Settings_Options[BATTLE_SETTINGS][0].numOptions - 2;
                break;
                case VISUAL_SETTINGS:
                    if(TemporalOptions[VISUAL_SETTINGS][0] > 0)
                        TemporalOptions[VISUAL_SETTINGS][0]--;
                    else
                        TemporalOptions[VISUAL_SETTINGS][0] = Settings_Options[VISUAL_SETTINGS][0].numOptions - 2;
                break;
                case MUSIC_SETTINGS:
                    if(TemporalOptions[MUSIC_SETTINGS][0] > 0)
                        TemporalOptions[MUSIC_SETTINGS][0]--;
                    else
                        TemporalOptions[MUSIC_SETTINGS][0] = Settings_Options[MUSIC_SETTINGS][0].numOptions - 2;
                PreviewBGM(OptionsMenu_GetCurrentOptionId(), TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()]);
                break;
                case RANDOM_SETTINGS:
                    if(TemporalOptions[RANDOM_SETTINGS][0] > 0)
                        TemporalOptions[RANDOM_SETTINGS][0]--;
                    else
                        TemporalOptions[RANDOM_SETTINGS][0] = Settings_Options[RANDOM_SETTINGS][0].numOptions - 2;
                break;
            }

			HandlePresetData();
			if(OptionsMenu_GetCurrentScreenId() == VISUAL_SETTINGS)
				RecolorWindow();
		}
		else{
			// For Other Options
			switch(OptionsMenu_GetCurrentScreenId()){
				case GAME_SETTINGS:
					if(TemporalOptions[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()] > 0){
						TemporalOptions[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()]--;
					}
					else
						TemporalOptions[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()] = Settings_Options[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1;
					break;
				case BATTLE_SETTINGS:
					if(TemporalOptions[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()] > 0)
						TemporalOptions[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()]--;
					else
						TemporalOptions[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()] = Settings_Options[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1;
					break;
				case VISUAL_SETTINGS:
					if(TemporalOptions[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()] > 0)
						TemporalOptions[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()]--;
					else
						TemporalOptions[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()] = Settings_Options[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1;

                    if(OptionsMenu_GetCurrentOptionId() == VISUAL_OPTIONS_COLOR)
                        RecolorWindow();
                break;
                case MUSIC_SETTINGS:
                    if(TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()] > 0)
                        TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()]--;
                    else
                        TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()] = Settings_Options[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1;
                    PreviewBGM(OptionsMenu_GetCurrentOptionId(), TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()]);
                break;
                case RANDOM_SETTINGS:
                    if(TemporalOptions[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()] > 0)
                        TemporalOptions[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()]--;
                    else
                        TemporalOptions[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()] = Settings_Options[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1;
                break;
            }

            ChangeCurrentScreenPresetDataToCustom();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if(JOY_NEW(DPAD_RIGHT) && (OptionsMenu_GetShouldShowDiscardDialogue() == FALSE))
	{
        if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE) || OptionsMenu_GetCurrentOptionId() == 0){
            //For Presets
            switch(OptionsMenu_GetCurrentScreenId()){
                case GAME_SETTINGS:
                    if(TemporalOptions[GAME_SETTINGS][0] == Settings_Options[GAME_SETTINGS][0].numOptions - 2)
                        TemporalOptions[GAME_SETTINGS][0] = 0;
                    else if(TemporalOptions[GAME_SETTINGS][0] < Settings_Options[GAME_SETTINGS][0].numOptions - 1)
                        TemporalOptions[GAME_SETTINGS][0]++;
                    else
                        TemporalOptions[GAME_SETTINGS][0] = 0;
                break;
                case BATTLE_SETTINGS:
                    if(TemporalOptions[BATTLE_SETTINGS][0] == Settings_Options[BATTLE_SETTINGS][0].numOptions - 2)
                        TemporalOptions[BATTLE_SETTINGS][0] = 0;
                else if(TemporalOptions[BATTLE_SETTINGS][0] < Settings_Options[BATTLE_SETTINGS][0].numOptions - 1)
                        TemporalOptions[BATTLE_SETTINGS][0]++;
                    else
                        TemporalOptions[BATTLE_SETTINGS][0] = 0;
                break;
                case VISUAL_SETTINGS:
                    if(TemporalOptions[VISUAL_SETTINGS][0] == Settings_Options[VISUAL_SETTINGS][0].numOptions - 2)
                        TemporalOptions[VISUAL_SETTINGS][0] = 0;
                else if(TemporalOptions[VISUAL_SETTINGS][0] < Settings_Options[VISUAL_SETTINGS][0].numOptions - 1)
                        TemporalOptions[VISUAL_SETTINGS][0]++;
                    else
                        TemporalOptions[VISUAL_SETTINGS][0] = 0;
                break;
                case MUSIC_SETTINGS:
                    if(TemporalOptions[MUSIC_SETTINGS][0] == Settings_Options[MUSIC_SETTINGS][0].numOptions - 2)
                        TemporalOptions[MUSIC_SETTINGS][0] = 0;
                else if(TemporalOptions[MUSIC_SETTINGS][0] < Settings_Options[MUSIC_SETTINGS][0].numOptions - 1)
                        TemporalOptions[MUSIC_SETTINGS][0]++;
                    else
                        TemporalOptions[MUSIC_SETTINGS][0] = 0;
                PreviewBGM(OptionsMenu_GetCurrentOptionId(), TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()]);
                break;
                case RANDOM_SETTINGS:
                    if(TemporalOptions[RANDOM_SETTINGS][0] == Settings_Options[RANDOM_SETTINGS][0].numOptions - 2)
                        TemporalOptions[RANDOM_SETTINGS][0] = 0;
                else if(TemporalOptions[RANDOM_SETTINGS][0] < Settings_Options[RANDOM_SETTINGS][0].numOptions - 1)
                        TemporalOptions[RANDOM_SETTINGS][0]++;
                    else
                        TemporalOptions[RANDOM_SETTINGS][0] = 0;
                break;
            }

			HandlePresetData();
			if(OptionsMenu_GetCurrentScreenId() == VISUAL_SETTINGS)
				RecolorWindow();
		}
		else{
			//For other Options
			switch(OptionsMenu_GetCurrentScreenId()){
				case GAME_SETTINGS:
					if(TemporalOptions[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()] < Settings_Options[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1){
						TemporalOptions[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()]++;
					}
					else
						TemporalOptions[GAME_SETTINGS][OptionsMenu_GetCurrentOptionId()] = 0;
					break;
				case BATTLE_SETTINGS:
					if(TemporalOptions[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()] < Settings_Options[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1){
						TemporalOptions[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()]++;
					}
					else
						TemporalOptions[BATTLE_SETTINGS][OptionsMenu_GetCurrentOptionId()] = 0;
					break;
				case VISUAL_SETTINGS:
					if(TemporalOptions[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()] < Settings_Options[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1){
						TemporalOptions[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()]++;
					}
					else
						TemporalOptions[VISUAL_SETTINGS][OptionsMenu_GetCurrentOptionId()] = 0;

                    if(OptionsMenu_GetCurrentOptionId() == VISUAL_OPTIONS_COLOR)
                            RecolorWindow();
                break;
                case MUSIC_SETTINGS:
                    if(TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()] < Settings_Options[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1){
                        TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()]++;
                    }
                    else
                        TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()] = 0;

                    PreviewBGM(OptionsMenu_GetCurrentOptionId(), TemporalOptions[MUSIC_SETTINGS][OptionsMenu_GetCurrentOptionId()]);
                break;
                case RANDOM_SETTINGS:
                    if(TemporalOptions[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()] < Settings_Options[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()].numOptions - 1){
                        TemporalOptions[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()]++;
                    }
                    else
                        TemporalOptions[RANDOM_SETTINGS][OptionsMenu_GetCurrentOptionId()] = 0;
                break;
            }

            ChangeCurrentScreenPresetDataToCustom();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if (JOY_NEW(A_BUTTON))
	{
		if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE) && (OptionsMenu_GetShouldShowDiscardDialogue() == FALSE)){
            OptionsMenu_ToggleAreYouNotOnSettingsHub();
			HandlePresetData();
			OptionsMenu_SetCurrentOptionId(0);
			OptionsMenu_SetCurrentFirstOption(0);

			if(OptionsMenu_GetCurrentScreenId() == VISUAL_SETTINGS){
				RecolorWindow();
			}

            PrintToWindow(WINDOW_1, FONT_BLACK);
        }
        else if(OptionsMenu_GetAreYouNotOnSettingsHub() && OptionsMenu_GetShouldShowDiscardDialogue()){
            CopySaveBlockDataToTemporalData();
            OptionsMenu_SetShouldShowDiscardDialogue(FALSE);
            OptionsMenu_ToggleAreYouNotOnSettingsHub();
            OptionsMenu_SetCurrentOptionId(0);
            OptionsMenu_SetCurrentFirstOption(0);
            PrintToWindow(WINDOW_1, FONT_BLACK);
        }
        else if((OptionsMenu_GetShouldShowDiscardDialogue())&& (OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
            PlaySoundEffectBasedOnTemporalMute(SE_PC_OFF);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, OptionMenu_FadeWhiteIfMainMenu());
            gTasks[taskId].func = Task_MenuTurnOff;
        }
    }

    if (JOY_NEW(B_BUTTON))
    {
        if(HaveSettingsChanged())
            OptionsMenu_ToggleShouldShowDiscardDialogue();
        else if ((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
            PlaySoundEffectBasedOnTemporalMute(SE_PC_OFF);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, OptionMenu_FadeWhiteIfMainMenu());
            gTasks[taskId].func = Task_MenuTurnOff;
        }
        else{
            OptionsMenu_ToggleAreYouNotOnSettingsHub();
            OptionsMenu_SetCurrentOptionId(0);
            OptionsMenu_SetCurrentFirstOption(0);
        }

		PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if (JOY_NEW(START_BUTTON))
	{
		OptionsMenu_SetShouldShowDiscardDialogue(FALSE);

        if((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE)){
            CopyTemporalDataToSaveBlockData();
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, OptionMenu_FadeWhiteIfMainMenu());
            gTasks[taskId].func = Task_MenuTurnOff;
        }
        else{
            CopyTemporalDataToSaveBlockData();
            OptionsMenu_ToggleAreYouNotOnSettingsHub();
            OptionsMenu_SetCurrentOptionId(0);
            OptionsMenu_SetCurrentFirstOption(0);
            PrintToWindow(WINDOW_1, FONT_BLACK);
        }
    }

	if (JOY_NEW(L_BUTTON) && (OptionsMenu_GetShouldShowDiscardDialogue() == FALSE))
	{
		if(OptionsMenu_GetAreYouNotOnSettingsHub()){
			if(OptionsMenu_GetCurrentScreenId() > 0){
				OptionsMenu_DecrementCurrentScreenId();
			}
			else{
                OptionsMenu_SetCurrentScreenId(NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN - 1);
			}

			OptionsMenu_SetCurrentOptionId(0);
			OptionsMenu_SetCurrentFirstOption(0);
			PrintToWindow(WINDOW_1, FONT_BLACK);
		}
	}

	if (JOY_NEW(R_BUTTON) && (OptionsMenu_GetShouldShowDiscardDialogue() == FALSE))
	{
		if(OptionsMenu_GetAreYouNotOnSettingsHub()){
			if(OptionsMenu_GetCurrentScreenId() < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN-1){
				OptionsMenu_IncrementCurrentScreenId();
			}
			else{
				OptionsMenu_SetCurrentScreenId(0);
			}

			OptionsMenu_SetCurrentOptionId(0);
			OptionsMenu_SetCurrentFirstOption(0);
			PrintToWindow(WINDOW_1, FONT_BLACK);
		}
	}
}

static u32 OptionMenu_FadeWhiteIfMainMenu(void)
{
    return (sMenuDataPtr->savedCallback == CB2_InitUiMainMenuFromTitleScreen) ? RGB_WHITE : RGB_BLACK;
}

void OptionMenu_ResetAllToDefault(void)
{
	u32 i = 0;

	for (i = 0; i < NUM_OPTIONS_GAME_SETTINGS; i++)
	{
		gSaveBlock2Ptr->options[GAME_SETTINGS][i] = Preset_Options[GAME_SETTINGS][GAME_PRESET_DEFAULT][i];
	}

	for (i = 0; i < NUM_OPTIONS_BATTLE_SETTINGS; i++)
	{
		gSaveBlock2Ptr->options[BATTLE_SETTINGS][i] = Preset_Options[BATTLE_SETTINGS][BATTLE_PRESET_DEFAULT][i];
	}
	for (i = 0; i < NUM_OPTIONS_MUSIC_SETTINGS; i++)
	{
		gSaveBlock2Ptr->options[MUSIC_SETTINGS][i] = Preset_Options[MUSIC_SETTINGS][MUSIC_PRESET_DEFAULT][i];
	}

	for (i = 0; i < NUM_OPTIONS_RANDOM_SETTINGS; i++)
	{
		gSaveBlock2Ptr->options[RANDOM_SETTINGS][i] = Preset_Options[RANDOM_SETTINGS][RANDOM_PRESET_DEFAULT][i];
	}
	for (i = 0; i < NUM_OPTIONS_VISUAL_SETTINGS; i++)
	{
		gSaveBlock2Ptr->options[VISUAL_SETTINGS][i] = Preset_Options[VISUAL_SETTINGS][VISUAL_PRESET_DEFAULT][i];
	}
}

bool32 HaveSettingsChanged(void)
{
	u8 i, j;

	for(i = 0 ;i < NUM_OF_PRESET_OPTIONS; i++){
		switch(i){
			case GAME_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_GAME_SETTINGS; j++){
					if (gSaveBlock2Ptr->options[GAME_SETTINGS][j] != TemporalOptions[GAME_SETTINGS][j])
						return TRUE;
				}
				break;
			case BATTLE_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_BATTLE_SETTINGS; j++){
					if (gSaveBlock2Ptr->options[BATTLE_SETTINGS][j] != TemporalOptions[BATTLE_SETTINGS][j])
						return TRUE;
				}
				break;
			case VISUAL_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_VISUAL_SETTINGS; j++){
					if (gSaveBlock2Ptr->options[VISUAL_SETTINGS][j] != TemporalOptions[VISUAL_SETTINGS][j])
						return TRUE;
				}
				break;
			case MUSIC_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_MUSIC_SETTINGS; j++){
					if (gSaveBlock2Ptr->options[MUSIC_SETTINGS][j] != TemporalOptions[MUSIC_SETTINGS][j])
						return TRUE;
				}
				break;
			case RANDOM_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_RANDOM_SETTINGS; j++){
					if (gSaveBlock2Ptr->options[RANDOM_SETTINGS][j] != TemporalOptions[RANDOM_SETTINGS][j])
						return TRUE;
				}
				break;
		}
	}
	return FALSE;
}

void PlaySoundEffectBasedOnTemporalMute(u16 songNum)
{
    if (!TemporalOptions[MUSIC_SETTINGS][MUSIC_OPTIONS_MUTE_SOUNDFX])
        PlaySE(songNum);
}

static void InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Menu_InitBgs())
        Menu_LoadGraphics();
    else
        Menu_FadeAndBail();
}

static void SpriteCallback_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

	if(((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE) && OptionsMenu_GetCurrentScreenId() != 0) || (OptionsMenu_GetAreYouNotOnSettingsHub() && OptionsMenu_GetCurrentFirstOption() != 0))
    {
        sprite->invisible = FALSE;
    }
    else 
    {
        sprite->invisible = TRUE;
    }
}

static void CreateUpArrowSprite(void)
{
    u32 SpriteTag = OPTIONS_SPRITETAG_ARROW_UP;
    struct CompressedSpriteSheet sSpriteSheet_OptionsDownArrow = {sCustomizationMenuUpArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_UpArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_OptionsDownArrow);
    u32 spriteId = CreateSprite(&TempSpriteTemplate, ARROW_UP_POSITION_X, ARROW_UP_POSITION_Y, 0);
    sMenuDataPtr->spriteIds[OPTIONS_SPRITE_ID_ARROW_UP] = spriteId;

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
}

static void SpriteCallback_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

	if(((OptionsMenu_GetAreYouNotOnSettingsHub() == FALSE) && OptionsMenu_GetCurrentScreenId() != (NUM_OF_SCREENS - 1)) ||
			(OptionsMenu_GetAreYouNotOnSettingsHub() && (OptionsMenu_GetCurrentFirstOption() + NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN) <= (GetCurrentScreenOptionNumber() - 1)))
    {
        sprite->invisible = FALSE;
    }
    else 
    {
        sprite->invisible = TRUE;
    }
}

static void CreateDownArrowSprite(void)
{
    u32 SpriteTag = OPTIONS_SPRITETAG_ARROW_DOWN;
    struct CompressedSpriteSheet sSpriteSheet_OptionsDownArrow = {sCustomizationMenuDownArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_DownArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_OptionsDownArrow);
    u32 spriteId = CreateSprite(&TempSpriteTemplate, ARROW_DOWN_POSITION_X, ARROW_DOWN_POSITION_Y, 0);
    sMenuDataPtr->spriteIds[OPTIONS_SPRITE_ID_ARROW_DOWN] = spriteId;

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
}

static void SpriteCallback_LeftArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    u32 position = (OptionsMenu_GetAreYouNotOnSettingsHub() == TRUE) ? GetCursorPosition() : OptionsMenu_GetCurrentScreenId();
    u32 y = ARROW_LEFT_POSITION_Y + (position * 16);

    sprite->x = ARROW_LEFT_POSITION_X;
    sprite->y = y;
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;
}

static void CreateLeftArrowSprite(void)
{
    u32 SpriteTag = OPTIONS_SPRITETAG_ARROW_LEFT;
    struct CompressedSpriteSheet sSpriteSheet_OptionsLeftArrow = {sCustomizationMenuLeftArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_LeftArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_OptionsLeftArrow);
    u32 spriteId = CreateSprite(&TempSpriteTemplate, ARROW_LEFT_POSITION_X, ARROW_LEFT_POSITION_Y, 0);
    sMenuDataPtr->spriteIds[OPTIONS_SPRITE_ID_ARROW_LEFT] = spriteId;

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
}

static void SpriteCallback_RightArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    u32 position = (OptionsMenu_GetAreYouNotOnSettingsHub() == TRUE) ? GetCursorPosition() : OptionsMenu_GetCurrentScreenId();
    u32 y = ARROW_RIGHT_POSITION_Y + (position * 16);

    sprite->x = ARROW_RIGHT_POSITION_X;
    sprite->y = y;
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;
}

static void CreateRightArrowSprite(void)
{
    u32 SpriteTag = OPTIONS_SPRITETAG_ARROW_RIGHT;
    struct CompressedSpriteSheet sSpriteSheet_OptionsLeftArrow = {sCustomizationMenuRightArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_RightArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_OptionsLeftArrow);
    u32 spriteId = CreateSprite(&TempSpriteTemplate, ARROW_RIGHT_POSITION_X, ARROW_RIGHT_POSITION_Y, 0);
    sMenuDataPtr->spriteIds[OPTIONS_SPRITE_ID_ARROW_RIGHT] = spriteId;

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
}

static void ResetAllSpriteIds(void)
{
    for (u32 spriteId = 0; spriteId < OPTIONS_SPRITE_ID_ARROW_COUNT; spriteId++)
        sMenuDataPtr->spriteIds[spriteId] = SPRITE_NONE;

}

static bool8 OptionsMenu_GetShouldShowDiscardDialogue(void)
{
    return sMenuDataPtr->shouldShowDiscardDialogue;
}

static void OptionsMenu_SetShouldShowDiscardDialogue(bool8 value)
{
    sMenuDataPtr->shouldShowDiscardDialogue = value;
}

static void OptionsMenu_ToggleShouldShowDiscardDialogue(void)
{
    bool32 value = OptionsMenu_GetShouldShowDiscardDialogue();
    value = !value;
    OptionsMenu_SetShouldShowDiscardDialogue(value);
}

static bool8 OptionsMenu_GetAreYouNotOnSettingsHub(void)
{
    return sMenuDataPtr->areYouNotOnSettingsHub;
}

static void OptionsMenu_SetAreYouNotOnSettingsHub(bool8 value)
{
    sMenuDataPtr->areYouNotOnSettingsHub = value;
}

static void OptionsMenu_ToggleAreYouNotOnSettingsHub(void)
{
    bool32 value = OptionsMenu_GetAreYouNotOnSettingsHub();
    value = !value;
    OptionsMenu_SetAreYouNotOnSettingsHub(value);
}

static u8 OptionsMenu_GetCurrentOptionId(void)
{
    return sMenuDataPtr->currentOptionId;
}

static void OptionsMenu_SetCurrentOptionId(u8 value)
{
    sMenuDataPtr->currentOptionId = value;
}

static void OptionsMenu_IncrementCurrentOptionId(void)
{
    u32 value = OptionsMenu_GetCurrentOptionId();

    if (value == MAX_u8)
        return;
    
    value++;
    OptionsMenu_SetCurrentOptionId(value);
}

static void OptionsMenu_DecrementCurrentOptionId(void)
{
    u32 value = OptionsMenu_GetCurrentOptionId();

    if (value == 0)
        return;

    value--;
    OptionsMenu_SetCurrentOptionId(value);
}

static u8 OptionsMenu_GetCurrentScreenId(void)
{
    return sMenuDataPtr->currentScreenId;
}

static void OptionsMenu_SetCurrentScreenId(u8 value)
{
    sMenuDataPtr->currentScreenId = value;
}

static void OptionsMenu_IncrementCurrentScreenId(void)
{
    u32 value = OptionsMenu_GetCurrentScreenId();

    if (value == MAX_u8)
        return;
    
    value++;
    OptionsMenu_SetCurrentScreenId(value);
}

static void OptionsMenu_DecrementCurrentScreenId(void)
{
    u32 value = OptionsMenu_GetCurrentScreenId();

    if (value == 0)
        return;

    value--;
    OptionsMenu_SetCurrentScreenId(value);
}

static u8 OptionsMenu_GetCurrentFirstOption(void)
{
    return sMenuDataPtr->currentFirstOption;
}

static void OptionsMenu_SetCurrentFirstOption(u8 value)
{
    sMenuDataPtr->currentFirstOption = value;
}

/*
static u16 OptionsMenu_GetTemporalOptions(enum OptionsIds setting, u32 option)
{
    return sMenuDataPtr->TemporalOptions[setting][option];
}

static void OptionsMenu_SetTemporalOptions(enum OptionsIds setting, u32 option, u8 value)
{
    sMenuDataPtr->TemporalOptions[setting][option] = value;
}
*/

static void OptionsMenu_IncrementCurrentFirstOption(void)
{
    u32 value = OptionsMenu_GetCurrentFirstOption();

    if (value == MAX_u8)
        return;
    
    value++;
    OptionsMenu_SetCurrentFirstOption(value);
}

static void OptionsMenu_DecrementCurrentFirstOption(void)
{
    u32 value = OptionsMenu_GetCurrentFirstOption();

    if (value == 0)
        return;

    value--;
    OptionsMenu_SetCurrentFirstOption(value);
}
