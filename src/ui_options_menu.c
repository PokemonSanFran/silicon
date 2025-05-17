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
#include "ui_start_menu.h"
#include "ui_main_menu.h"
#include "new_game.h"


//==========DEFINES==========//
struct MenuResources
{
	MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
};

enum WindowIds
{
	WINDOW_1,
};

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;
static EWRAM_DATA u8 *sBgTilemapBuffer[MENU_BACKGROUND_COUNT] = {NULL};
static EWRAM_DATA bool8 ShouldShowDiscardDialogue = FALSE;
static EWRAM_DATA u8  currentOptionId = 0;
static EWRAM_DATA u8  currentScreenId = 0;
static EWRAM_DATA u8  currentFirstOption = 0;
static EWRAM_DATA bool8 areYouNotOnSettingsHub = FALSE;

//static EWRAM_DATA u8 Temporal_Options_Preset_Settings[NUM_OF_PRESET_OPTIONS];       //This is a temporal data used for the Discard Feature on Leave Dialog
static EWRAM_DATA u8 Temporal_Options_Game_Settings[NUM_OPTIONS_GAME_SETTINGS];     //This is a temporal data used for the Discard Feature on Leave Dialog
static EWRAM_DATA u8 Temporal_Options_Battle_Settings[NUM_OPTIONS_BATTLE_SETTINGS]; //This is a temporal data used for the Discard Feature on Leave Dialog
static EWRAM_DATA u8 Temporal_Options_Music_Settings[NUM_OPTIONS_MUSIC_SETTINGS];   //This is a temporal data used for the Discard Feature on Leave Dialog
static EWRAM_DATA u8 Temporal_Options_Visual_Settings[NUM_OPTIONS_VISUAL_SETTINGS]; //This is a temporal data used for the Discard Feature on Leave Dialog
static EWRAM_DATA u8 Temporal_Options_Random_Settings[NUM_OPTIONS_RANDOM_SETTINGS]; //This is a temporal data used for the Discard Feature on Leave Dialog

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

void CopyTemporalDataToSaveBlockData()
{
	u8 i, j;

	for(i = 0 ;i < NUM_OF_PRESET_OPTIONS; i++){
		switch(i){
			case GAME_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_GAME_SETTINGS; j++){
					gSaveBlock2Ptr->optionsGame[j] = Temporal_Options_Game_Settings[j];
				}
				break;
			case BATTLE_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_BATTLE_SETTINGS; j++){
					gSaveBlock2Ptr->optionsBattle[j] = Temporal_Options_Battle_Settings[j];
				}
				break;
			case VISUAL_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_VISUAL_SETTINGS; j++){
					gSaveBlock2Ptr->optionsVisual[j] = Temporal_Options_Visual_Settings[j];
				}
				break;
			case MUSIC_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_MUSIC_SETTINGS; j++){
					gSaveBlock2Ptr->optionsMusic[j] = Temporal_Options_Music_Settings[j];
				}
				break;
			case RANDOM_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_RANDOM_SETTINGS; j++){
					gSaveBlock2Ptr->optionsRandom[j] = Temporal_Options_Random_Settings[j];
				}
				break;
		}
	}
}

void CopySaveBlockDataToTemporalData()
{
	u8 i, j;

	for(i = 0 ;i < NUM_OF_PRESET_OPTIONS; i++){
		switch(i){
			case GAME_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_GAME_SETTINGS; j++){
					Temporal_Options_Game_Settings[j] = gSaveBlock2Ptr->optionsGame[j];
				}
				break;
			case BATTLE_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_BATTLE_SETTINGS; j++){
					Temporal_Options_Battle_Settings[j] = gSaveBlock2Ptr->optionsBattle[j];
				}
				break;
			case VISUAL_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_VISUAL_SETTINGS; j++){
					Temporal_Options_Visual_Settings[j] = gSaveBlock2Ptr->optionsVisual[j];
				}
				break;
			case MUSIC_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_MUSIC_SETTINGS; j++){
					Temporal_Options_Music_Settings[j] = gSaveBlock2Ptr->optionsMusic[j];
				}
				break;
			case RANDOM_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_RANDOM_SETTINGS; j++){
					Temporal_Options_Random_Settings[j] = gSaveBlock2Ptr->optionsRandom[j];
				}
				break;
		}
	}
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

static const u32 sTMenuTiles[]   = INCBIN_U32("graphics/ui_menus/options_menu/tTiles.4bpp.lz");
static const u32 sTMenuTilemap[] = INCBIN_U32("graphics/ui_menus/options_menu/tTiles.bin.lz");

static const u32 sMenuTiles[]   = INCBIN_U32("graphics/ui_menus/options_menu/tiles.4bpp.lz");
static const u32 sMenuTilemap[] = INCBIN_U32("graphics/ui_menus/options_menu/tiles.bin.lz");
static const u16 sMenuPalette[] = INCBIN_U16("graphics/ui_menus/options_menu/palette_custom.gbapal");

static const u16 sMenuPalette_Red[]      = INCBIN_U16("graphics/ui_menus/options_menu/palettes/red.gbapal");
static const u16 sMenuPalette_Black[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/black.gbapal");
static const u16 sMenuPalette_Green[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/green.gbapal");
static const u16 sMenuPalette_Blue[]     = INCBIN_U16("graphics/ui_menus/options_menu/palettes/blue.gbapal");
static const u16 sMenuPalette_Platinum[] = INCBIN_U16("graphics/ui_menus/options_menu/palettes/platinum.gbapal");
static const u16 sMenuPalette_Scarlet[]  = INCBIN_U16("graphics/ui_menus/options_menu/palettes/scarlet.gbapal");
static const u16 sMenuPalette_Violet[]   = INCBIN_U16("graphics/ui_menus/options_menu/palettes/violet.gbapal");
static const u16 sMenuPalette_White[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/white.gbapal");
static const u16 sMenuPalette_Yellow[]   = INCBIN_U16("graphics/ui_menus/options_menu/palettes/yellow.gbapal");
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
void Task_OpenOptionsMenuFromStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
		StartMenu_Menu_FreeResources();
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();
        Options_Menu_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
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
    ShouldShowDiscardDialogue = FALSE;
    FreeAllSpritePalettes();
    Free(sMenuDataPtr);
    Free(Temporal_Options_Game_Settings);
    Free(Temporal_Options_Battle_Settings);
    Free(Temporal_Options_Music_Settings);
    Free(Temporal_Options_Visual_Settings);
    Free(Temporal_Options_Random_Settings);

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
    switch(gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR]){
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

static u8 GetCurrentScreenOptionNumber(){
	switch(currentScreenId){
		case GAME_SETTINGS:
			return NUM_OPTIONS_GAME_SETTINGS;
			break;
		case BATTLE_SETTINGS:
			return NUM_OPTIONS_BATTLE_SETTINGS;
			break;
		case VISUAL_SETTINGS:
			return NUM_OPTIONS_VISUAL_SETTINGS;
			break;
		case MUSIC_SETTINGS:
			return NUM_OPTIONS_MUSIC_SETTINGS;
		default:
		case RANDOM_SETTINGS:
			return NUM_OPTIONS_RANDOM_SETTINGS;
			break;
	}
}

// --------------------------------------------------------------------------------------------------------------------

static u8 GetCurrentSlotOption(u8 option)
{
	return currentFirstOption + option;
}

static u8 GetCursorPosition()
{
	return currentOptionId - currentFirstOption;
}

static void PressedDownButton(){
	u8 halfScreen = ((NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN) - 1) / 2;
	u8 finalhalfScreen = GetCurrentScreenOptionNumber() - halfScreen;

	if(currentOptionId < halfScreen){
		currentOptionId++;
	}
	else if(currentOptionId >= (GetCurrentScreenOptionNumber() - 1)){ //If you are in the last option go to the first one
		currentOptionId = 0;
		currentFirstOption = 0;
	}
	else if(currentOptionId >= (finalhalfScreen - 1)){
		currentOptionId++;
	}
	else{
		currentOptionId++;
		currentFirstOption++;
	}
}

static void PressedUpButton(){
	u8 halfScreen = ((NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN) - 1) / 2;
	u8 finalhalfScreen = GetCurrentScreenOptionNumber() - halfScreen;

	if(currentOptionId > halfScreen && currentOptionId <= (finalhalfScreen - 1)){
		currentOptionId--;
		currentFirstOption--;
	}
	else if(currentOptionId == 0){ //If you are in the first option go to the last one
		currentOptionId = GetCurrentScreenOptionNumber() - 1;
		currentFirstOption = GetCurrentScreenOptionNumber() - NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN;
	}
	else{
		currentOptionId--;
	}
}

#define OPTION_NAME_LENGTH 20
#define MAX_OPTION_DESCRIPTION_LENGTH 400

struct OptionData
{
	const u8 title[OPTION_NAME_LENGTH];
	const u8 options[OPTION_NAME_LENGTH][MAX_OPTIONS_PER_SETTING];
	const u8 optionDescription[MAX_OPTIONS_PER_SETTING][MAX_OPTION_DESCRIPTION_LENGTH];
	const u8 numOptions;
};

//Graphics
static const u8 sOptionMenuIcon_Game_Settings[]     = INCBIN_U8("graphics/ui_menus/options_menu/icon_game_settings.4bpp");
static const u8 sOptionMenuIcon_Battle_Settings[]   = INCBIN_U8("graphics/ui_menus/options_menu/icon_battle_settings.4bpp");
static const u8 sOptionMenuIcon_Visual_Settings[]   = INCBIN_U8("graphics/ui_menus/options_menu/icon_visual_settings.4bpp");
static const u8 sOptionMenuIcon_Music_Settings[]    = INCBIN_U8("graphics/ui_menus/options_menu/icon_music_settings.4bpp");
static const u8 sOptionMenuIcon_Random_Settings[]   = INCBIN_U8("graphics/ui_menus/options_menu/icon_random_settings.4bpp");

//Arrows
static const u8 sOptionMenuArrow_Up[]       = INCBIN_U8("graphics/ui_menus/options_menu/arrow_up.4bpp");
static const u8 sOptionMenuArrow_Down[]     = INCBIN_U8("graphics/ui_menus/options_menu/arrow_down.4bpp");
static const u8 sOptionMenuArrow_Left[]     = INCBIN_U8("graphics/ui_menus/options_menu/arrow_left.4bpp");
static const u8 sOptionMenuArrow_Right[]     = INCBIN_U8("graphics/ui_menus/options_menu/arrow_right.4bpp");

static const u8 sOptionMenuSelector[]       = INCBIN_U8("graphics/ui_menus/options_menu/selector.4bpp");

//Text
static const u8 sText_Title_Settings_Hub[]  = _("Settings Hub");
static const u8 sText_Options_Text[]        = _("Option Description");


static const u8 sText_Discard_Text[]        = _("Are you sure you want to leave without\nsaving the changes?");

static const u8 sText_Help_Bar_Discard[]        = _("{A_BUTTON} Yes {B_BUTTON} Cancel {START_BUTTON} Save");
static const u8 sText_Help_Bar_Settings_Hub[]   = _("{DPAD_LEFTRIGHT} Preset {A_BUTTON} Explore {B_BUTTON} Discard {START_BUTTON} Save and Quit");
static const u8 sText_Help_Bar_Settings_Page[]  = _("{DPAD_LEFTRIGHT} Change {B_BUTTON} Discard {START_BUTTON} Save {L_BUTTON}{R_BUTTON} Next Page");
// Preset

static const struct OptionData Hub_Options[NUM_OF_PRESET_OPTIONS] = {
	[GAME_SETTINGS] =
	{
		.title = _("Game Settings"),
		.options = {
			_("Default"),
			_("Speedrun"),
			_("Custom"),
		},
		.optionDescription = {
			_("Default Description"),
			_("Speedrun Description"),
			_("Custom Description"),
		},
		.numOptions = GAME_PRESET_COUNT,
	},
	[BATTLE_SETTINGS] =
	{
		.title = _("Battle Settings"),
		.options = {
			_("Default"),
			_("Challenge"),
			_("Speedrun"),
			_("Nuzlocke"),
			_("Kaizo"),
			_("Custom"),
		},
		.optionDescription = {
			_("Default Description"),
			_("Challenge Description"),
			_("Speedrun Description"),
			_("Nuzlocke Description"),
			_("Kaizo Description"),
			_("Custom Description"),
		},
		.numOptions = BATTLE_PRESET_COUNT,
	},
	[VISUAL_SETTINGS] =
	{
		.title = _("Visual Settings"),
		.options = {
			_("Default"),
			_("Speedrun"),
			_("Custom"),
		},
		.optionDescription = {
			_("Default Description"),
			_("Speedrun Description"),
			_("Custom Description"),
		},
		.numOptions = VISUAL_PRESET_COUNT,
	},
	[MUSIC_SETTINGS] =
	{
		.title = _("Music Settings"),
		.options = {
			_("PSF"),
			_("LGPE"),
			_("HGSS"),
			_("ORAS"),
			_("BDSP"),
			_("BW2"),
			_("XY"),
			_("USUM"),
			_("SWSH"),
			_("SV"),
			_("Custom"),
		},
		.optionDescription = {
			_("PSF Description"),
			_("LGPE Description"),
			_("HGSS Description"),
			_("ORAS Description"),
			_("BDSP Description"),
			_("BW2 Description"),
			_("XY Description"),
			_("USUM Description"),
			_("SWSH Description"),
			_("SV Description"),
			_("Custom Description"),
		},
		.numOptions = MUSIC_PRESET_COUNT,
	},
	[RANDOM_SETTINGS] =
	{
		.title = _("Random Settings"),
		.options = {
			_("Default"),
			_("Sane"),
			_("Crazy"),
			_("Total Chaos"),
			_("Custom"),
		},
		.optionDescription = {
			_("Default Description"),
			_("Sane Description"),
			_("Crazy Description"),
			_("Total Chaos Description"),
			_("Custom Description"),
		},
		.numOptions = RANDOM_PRESET_COUNT,
	},
};

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
            [GAME_OPTIONS_ITEM_SORT]         = 2,
            [GAME_OPTIONS_CUTSCENE]          = GAME_OPTION_CUTSCENE_PLAY,
        },
        [GAME_PRESET_SPEEDRUN] = {
            [GAME_OPTIONS_PRESET]            = GAME_PRESET_SPEEDRUN,
            [GAME_OPTIONS_SAVE_BOOT]         = GAME_OPTION_SAVE_BOOT_CONTINUE,
            [GAME_OPTIONS_BUTTON_MODE]       = OPTIONS_BUTTON_MODE_LR,
            [GAME_OPTIONS_SAVE_BEHAVIOR]     = GAME_OPTION_AUTOSAVE_OFF,
            [GAME_OPTIONS_RUN]               = GAME_OPTION_RUN_ALWAYS,
            [GAME_OPTIONS_PUZZLES]           = GAME_OPTION_PUZZLES_ON,
            [GAME_OPTIONS_ITEM_SORT]         = 4,
            [GAME_OPTIONS_CUTSCENE]          = GAME_OPTION_CUTSCENE_SKIP,
        }
    },
    [BATTLE_SETTINGS] =
    {
        [BATTLE_PRESET_DEFAULT]  = {
            [BATTLE_OPTIONS_PRESET]                 = BATTLE_PRESET_DEFAULT,
            [BATTLE_OPTIONS_EXPERIENCE]             = BATTLE_OPTION_EXPERIENCE_ALL,
            [BATTLE_OPTIONS_POINTS_MESSAGES]        = BATTLE_OPTION_POINTS_MESSAGES_ON,
            [BATTLE_OPTIONS_POINTS_SUMMARY]         = BATTLE_OPTION_POINTS_SUMMARY_BATTLE,
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
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
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
            [BATTLE_OPTIONS_POINTS_SUMMARY]         = BATTLE_OPTION_POINTS_SUMMARY_BATTLE,
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
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
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
            [BATTLE_OPTIONS_POINTS_SUMMARY]         = BATTLE_OPTION_POINTS_SUMMARY_OFF,
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
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
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
            [BATTLE_OPTIONS_POINTS_SUMMARY]         = BATTLE_OPTION_POINTS_SUMMARY_OFF,
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
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
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
            [BATTLE_OPTIONS_POINTS_SUMMARY]         = BATTLE_OPTION_POINTS_SUMMARY_OFF,
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
            [BATTLE_OPTIONS_BASE_STAT_EQUALIZER]    = 0,
            [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE]     = 0,
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
            [VISUAL_OPTIONS_TEXT_SPEED]      = VISUAL_OPTION_TEXTSPEED_FAST,
            [VISUAL_OPTIONS_FONT_SWITCHER]   = VISUAL_OPTION_FONT_SWITCHER_EMERALD,
            [VISUAL_OPTIONS_COLOR]           = VISUAL_OPTION_COLOR_PLATINUM,
            [VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_INDIVIDUAL_VALUES,
        },
        [VISUAL_PRESET_SPEEDRUN] = {
            [VISUAL_OPTIONS_PRESET]          = VISUAL_PRESET_SPEEDRUN,
            [VISUAL_OPTIONS_UNITS]           = VISUAL_OPTION_UNITS_IMPERIAL_PERIOD,
            [VISUAL_OPTIONS_TEXT_SPEED]      = VISUAL_OPTION_TEXTSPEED_INSTANT,
            [VISUAL_OPTIONS_FONT_SWITCHER]   = VISUAL_OPTION_FONT_SWITCHER_EMERALD,
            [VISUAL_OPTIONS_COLOR]           = VISUAL_OPTION_COLOR_PLATINUM,
            [VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_INDIVIDUAL_VALUES,
        }
    },
    [MUSIC_SETTINGS] =
    {
        [MUSIC_PRESET_DEFAULT]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_LGPE]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_LGPE,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_HGSS]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_HGSS,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_ORAS]  = {
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_ORAS,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_ORAS,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_ORAS,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_ORAS,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_ORAS,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_ORAS,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_ORAS,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_BDSP]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_BDSP,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_BW2]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_BW2,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_XY]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_XY,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_USUM]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_USUM,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_SWSH]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_SWSH,
            [MUSIC_OPTIONS_MUTE_MUSIC]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_SOUNDFX]      = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_CRIES]        = MUSIC_OPTIONS_UNMUTED,
            [MUSIC_OPTIONS_MUTE_FANFARES]     = MUSIC_OPTIONS_UNMUTED,
        },
        [MUSIC_PRESET_SV]  = {
            [MUSIC_OPTIONS_PRESET]           = MUSIC_PRESET_SV,
            [MUSIC_OPTIONS_SPEAKER]          = OPTIONS_SOUND_STEREO,
            [MUSIC_OPTIONS_SURF]             = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_BIKE]             = MUSIC_PRESET_DEFAULT,
            [MUSIC_OPTIONS_WILD]             = MUSIC_PRESET_SV,
            [MUSIC_OPTIONS_TRAINER]          = MUSIC_PRESET_SV,
            [MUSIC_OPTIONS_GYM]              = MUSIC_PRESET_SV,
            [MUSIC_OPTIONS_TOURNAMENT]       = MUSIC_PRESET_SV,
            [MUSIC_OPTIONS_CHAMPION]         = MUSIC_PRESET_SV,
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
	u8 i;

	if(AreYouOnCustomPresetData()){
		switch(currentScreenId){
			case GAME_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_GAME_SETTINGS; i++){
					Temporal_Options_Game_Settings[i] = gSaveBlock2Ptr->optionsGame[i];
				}
				break;
			case BATTLE_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_BATTLE_SETTINGS; i++){
					Temporal_Options_Battle_Settings[i] = gSaveBlock2Ptr->optionsBattle[i];
				}
				break;
			case VISUAL_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_VISUAL_SETTINGS; i++){
					Temporal_Options_Visual_Settings[i] = gSaveBlock2Ptr->optionsVisual[i];
				}
				break;
			case MUSIC_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_MUSIC_SETTINGS; i++){
					Temporal_Options_Music_Settings[i] = gSaveBlock2Ptr->optionsMusic[i];
				}
				break;
			case RANDOM_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_RANDOM_SETTINGS; i++){
					Temporal_Options_Random_Settings[i] = gSaveBlock2Ptr->optionsRandom[i];
				}
				break;
		}
	}
	else{
		switch(currentScreenId){
			case GAME_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_GAME_SETTINGS; i++){
					Temporal_Options_Game_Settings[i] = Preset_Options[GAME_SETTINGS][Temporal_Options_Game_Settings[0]][i];
				}
				break;
			case BATTLE_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_BATTLE_SETTINGS; i++){
					Temporal_Options_Battle_Settings[i] = Preset_Options[BATTLE_SETTINGS][Temporal_Options_Battle_Settings[0]][i];
				}
				break;
			case VISUAL_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_VISUAL_SETTINGS; i++){
					Temporal_Options_Visual_Settings[i] = Preset_Options[VISUAL_SETTINGS][Temporal_Options_Visual_Settings[0]][i];
				}
				break;
			case MUSIC_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_MUSIC_SETTINGS; i++){
					Temporal_Options_Music_Settings[i] = Preset_Options[MUSIC_SETTINGS][Temporal_Options_Music_Settings[0]][i];
				}
				break;
			case RANDOM_SETTINGS:
				for(i = 1 ;i < NUM_OPTIONS_RANDOM_SETTINGS; i++){
					Temporal_Options_Random_Settings[i] = Preset_Options[RANDOM_SETTINGS][Temporal_Options_Random_Settings[0]][i];
				}
				break;
		}
	}
}

bool8 AreYouOnCustomPresetData()
{
	switch(currentScreenId){
		case GAME_SETTINGS:
			return (Temporal_Options_Game_Settings[0] == GAME_PRESET_CUSTOM);
			break;
		case BATTLE_SETTINGS:
			return (Temporal_Options_Battle_Settings[0] == BATTLE_PRESET_CUSTOM);
			break;
		case VISUAL_SETTINGS:
			return (Temporal_Options_Visual_Settings[0] == VISUAL_PRESET_CUSTOM);
			break;
		case MUSIC_SETTINGS:
			return (Temporal_Options_Music_Settings[0] == MUSIC_PRESET_CUSTOM);
			break;
		default:
		case RANDOM_SETTINGS:
			return (Temporal_Options_Random_Settings[0] == RANDOM_PRESET_CUSTOM);
			break;
	}
}

void ChangeCurrentScreenPresetDataToCustom()
{
	switch(currentScreenId){
		case GAME_SETTINGS:
			Temporal_Options_Game_Settings[0] = GAME_PRESET_CUSTOM;
			break;
		case BATTLE_SETTINGS:
			Temporal_Options_Battle_Settings[0] = BATTLE_PRESET_CUSTOM;
			break;
		case VISUAL_SETTINGS:
			Temporal_Options_Visual_Settings[0] = VISUAL_PRESET_CUSTOM;
			break;
		case MUSIC_SETTINGS:
			Temporal_Options_Music_Settings[0] = MUSIC_PRESET_CUSTOM;
			break;
		case RANDOM_SETTINGS:
			Temporal_Options_Random_Settings[0] = RANDOM_PRESET_CUSTOM;
			break;
	}
}

void UNUSED ChangePresetDataToCustom()
{
	gSaveBlock2Ptr->optionsGame[0] = GAME_PRESET_CUSTOM;
	gSaveBlock2Ptr->optionsBattle[0] = BATTLE_PRESET_CUSTOM;
	gSaveBlock2Ptr->optionsVisual[0] = VISUAL_PRESET_CUSTOM;
	gSaveBlock2Ptr->optionsMusic[0] = MUSIC_PRESET_CUSTOM;
	gSaveBlock2Ptr->optionsRandom[0] = RANDOM_PRESET_CUSTOM;
}

// For Game Settings asdf
static const struct OptionData GameSettings_Settings_Options[NUM_OPTIONS_GAME_SETTINGS] =
{
    [GAME_OPTIONS_PRESET] =
    {
        .title = _("Game Settings"),
        .options = {
            _("Default"),
            _("Speedrun"),
            _("Custom"),
            },
        .optionDescription = {
            _("Default Description"),
            _("Speedrun Description"),
            _("Custom Description"),
            },
        .numOptions = GAME_PRESET_COUNT,
    },
    [GAME_OPTIONS_SAVE_BOOT] =
    {
        .title = _("Save Boot"),
        .options = {
            _("Traditional"),
            _("Continue"),
            },
        .optionDescription = {
            _("After pressing {START_BUTTON} on the title screen, the game will proceed to the Main Menu."),
            _("After pressing {START_BUTTON} on the title screen, the game will directly proceed to {PLAYER}'s adventure."),
            },
        .numOptions = GAME_OPTION_SAVE_BOOT_COUNT,
    },
    [GAME_OPTIONS_BUTTON_MODE] =
    {
        .title = _("Button Mode"),
        .options = {
            _("{L_BUTTON}{R_BUTTON}"),
            _("{L_BUTTON} {EMOJI_EQUALS} {A_BUTTON}"),
            },
        .optionDescription = {
            _("{L_BUTTON} and {R_BUTTON} are used for navigation within menus."),
            _("Pressing {L_BUTTON} is treated like {A_BUTTON}. {R_BUTTON} is used for navigation within menus. When {L_BUTTON} is held, it is treated like a turbo {A_BUTTON}."),
            },
        .numOptions = OPTIONS_BUTTON_MODE_L_MODE_COUNT,
    },
    [GAME_OPTIONS_SAVE_BEHAVIOR] =
    {
        .title = _("Save Behavior"),
        .options = {
            _("Manual"),
            _("Automatic"),
            },
        .optionDescription = {
            _("Players will need to manually save their progress."),
            _("Progress will automatically save after ten wild battles since the last save, after every cutscene, and after every heal at the Pokémon Center."),
            },
        .numOptions = GAME_OPTION_AUTOSAVE_COUNT,
    },
    [GAME_OPTIONS_RUN] =
    {
        .title = _("Run"),
        .options = {
            _("Always"),
            _("Toogle"),
            _("Manual"),
            },
        .optionDescription = {
            _("Always Description"),
            _("Toogle Description"),
            _("Manual Description"),
            },
        .numOptions = 3,
    },
    [GAME_OPTIONS_PUZZLES] =
    {
        .title = _("Puzzles"),
        .options = {
            _("Disabled"),
            _("Normal"),
            },
        .optionDescription = {
            _("Puzzles outside of Pokémon battles are disabled."),
            _("Puzzles function as normal."),
            },
        .numOptions = 2,
    },
    [GAME_OPTIONS_ITEM_SORT] =
    {
        .title = _("Item Sort"),
        .options = {
            _("Off"),
            _("Name"),
            _("Type"),
            _("Amount"),
            _("Recency"),
            },
        .optionDescription = {
            _("Off"),
            _("Name"),
            _("Type"),
            _("Amount"),
            _("Recency"),
            },
        .numOptions = 5,
    },
    [GAME_OPTIONS_CUTSCENE] =
    {
        .title = _("Cutscenes"),
        .options = {
            _("Play"),
            //_("Ask"),
            //_("Hold"),
            _("Skip"),
            },
        .optionDescription = {
            //_("Story related scenes without gameplay will play as normal."),
            _("Story related scenes without gameplay will play as normal. The player can hold {START_BUTTON} to automatically skip the cutscene."),
            //_("Before every story related scene,the player is asked if they would like to play or skip the cutscene."),
            //_("During every story related scene,the player can hold {START_BUTTON} to automaticlaly skip the cutscene."),
            _("Every story related scene without gameplay is automatically skipped."),
            },
        .numOptions = 2,
    },
};

// For Battle Settings

static const struct OptionData BattleSettings_Settings_Options[NUM_OPTIONS_BATTLE_SETTINGS] =
{
    [BATTLE_OPTIONS_PRESET] =
    {
        .title = _("Battle Settings"),
        .options = {
            _("Default"),
            _("Challenge"),
            _("Speedrun"),
            _("Nuzlocke"),
            _("Kaizo"),
            _("Custom"),
        },
        .optionDescription = {
            _("Default Description"),
            _("Challenge Description"),
            _("Speedrun Description"),
            _("Nuzlocke Description"),
            _("Kaizo Description"),
            _("Custom Description"),
        },
        .numOptions = 6,
    },
    [BATTLE_OPTIONS_EXPERIENCE] =
    {
        .title = _("Experience"),
        .options = {
            _("All"),
            _("Party"),
            _("Active"),
        },
        .optionDescription = {
            _("Exp. Points and Effort Values earned in battle are given to all the Pokemon in the player's party and the player's PC storage boxes."),
            _("Exp. Points and Effort Values earned in battle are given to all the Pokemon in the player's party."),
            _("Exp. Points and Effort Values earned in battle are given to the Pokemon that participated in battle."),
            _("Party"),
            _("Active"),
        },
        .numOptions = 3,
    },
    [BATTLE_OPTIONS_POINTS_MESSAGES] =
    {
        .title = _("Points Message"),
        .options = {
            _("On"),
            _("Off"),
        },
        .optionDescription = {
            _("When a Pokémon gains Experience or Effort Values, a message will be displayed."),
            _("When a Pokémon gains Experience of Effort Values a message will NOT be displayed."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_POINTS_SUMMARY] =
    {
        .title = _("Points Summary"),
        .options = {
            _("Faint"),
            _("Battle"),
            _("Off"),
        },
        .optionDescription = {
            _("When a that is not on the field Pokémon gains Experience or Effort Values, a message will be displayed after an opponent faints."),
            _("When a that is not on the field Pokémon gains Experience or Effort Values, a message will be displayed after the player wins the battle."),
            _("When a that is not on the field Pokémon gains Experience or Effort Values, a message will be NOT be displayed."),
        },
        .numOptions = BATTLE_OPTION_POINTS_SUMMARY_COUNT,
    },
    [BATTLE_OPTIONS_EXP_MULTIPLIER] =
    {
        .title = _("Exp Multiplier"),
        .options = {
            _("0"),
            _("Normal"),
            _("1.5"),
            _("2"),
        },
        .optionDescription = {
            _("Exp. Points earned in battle are multiplied by 0."),
            _("Exp. Points earned in battle are multiplied by 1."),
            _("Exp. Points earned in battle are multiplied by 1.5."),
            _("Exp. Points earned in battle are multiplied by 2."),
        },
        .numOptions = 4,
    },
    [BATTLE_OPTIONS_EFFORT_VALUES] =
    {
        .title = _("Effort Values"),
        .options = {
            _("Disabled"),
            _("Enabled"),
        },
        .optionDescription = {
            _("When a Pokémon's stats are calculated, their Effort Values do not impact the calculation."),
            _("When a Pokémon's stats are calculated, their Effort Values impact the calculation normally."),
        },
        .numOptions = BATTLE_OPTION_EFFORT_VALUES_COUNT,
    },
    [BATTLE_OPTIONS_INDIVIDUAL_VALUES] =
    {
        .title = _("Individual Values"),
        .options = {
            _("Disabled"),
            _("Enabled"),
        },
        .optionDescription = {
            _("When a Pokémon's stats are calculated, their Individual Values are assumed to be 31 / Perfect."),
            _("When a Pokémon's stats are calculated, their Individual Values are not altered in any way."),
        },
        .numOptions = BATTLE_OPTION_INDIVIDUAL_VALUES_COUNT,
    },
    [BATTLE_OPTIONS_PLAYER_LEVEL] =
    {
        .title = _("Player Level"),
        .options = {
            _("Level Cap"),
            _("No Cap"),
        },
        .optionDescription = {
            _("As the player progresses, their Pokémon will never grow past a certain level. This level grows throughout the game."),
            _("Pokémon have no restrictions on their ability to grow."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_TRAINER_SCALING] =
    {
        .title = _("Trainer Scaling"),
        .options = {
            _("Party"),
            _("Level"),
            _("Off"),
        },
        .optionDescription = {
            _("Enemy Trainer Pokémon species and levels change based on the size of the player's party and the highest leveled Pokémon in their party."),
            _("Enemy Trainer Pokémon levels change based on the size of the player's party and the highest leveled Pokémon in their party."),
            _("Enemy Trainer Pokémon do not change."),
        },
        .numOptions = BATTLE_OPTION_TRAINER_SCALING_COUNT,
    },
    [BATTLE_OPTIONS_WILD_SCALING] =
    {
        .title = _("Wild Scaling"),
        .options = {
            _("On"),
            _("Off"),
        },
        .optionDescription = {
            _("Lorem"),
            _("Lorem"),
        },
        .numOptions = BATTLE_OPTION_WILD_SCALING_COUNT,
    },
    [BATTLE_OPTIONS_SWITCH_STYLE] =
    {
        .title = _("Switch Style"),
        .options = {
            _("Switch"),
            _("Set"),
        },
        .optionDescription = {
            _("The player is allowed to switch their Pokémon whenver the opponent sends out their next Pokémon."),
            _("The player is not allowed to switch their Pokémon whenever the opponent sends out their next Pokémon."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_TAKE_WILD_ITEMS] =
    {
        .title = _("Take Wild Items"),
        .options = {
            _("Never"),
            _("Ask"),
            _("Always"),
        },
        .optionDescription = {
            _("When Wild Pokémon faint while holding an item nothing happens."),
            _("When Wild Pokémon faint while holding an item the player is asked if they want to take it."),
            _("When Wild Pokémon faint while holding an item the player will add the item to their Bag."),
        },
        .numOptions = 3,
    },
    [BATTLE_OPTIONS_LAST_USED_BALL] =
    {
        .title = _("Last Used Ball"),
        .options = {
            _("Last Ball"),
            _("Best Ball"),
            _("After 1st"),
            _("Off"),
        },
        .optionDescription = {
            _("In a wild battle, pressing {R_BUTTON} from the main battle menu will throw a Poké Ball. This ball is the last one thrown by the palyer."),
            _("In a wild battle, pressing {R_BUTTON} from the main battle menu will throw a Poké Ball. This ball is the ball with the best chance of success."),
            _("In a wild battle, pressing {R_BUTTON} from the main battle menu will throw a Poké Ball. This ball is the last one thrown by the player during this battle."),
            _("In a wild battle, pressing {R_BUTTON} from the main battle menu will NOT throw a Poké Ball."),
        },
        .numOptions = BATTLE_OPTION_BALL_COUNT,
    },
    [BATTLE_OPTIONS_QUICK_RUN] =
    {
        .title = _("Quick Run"),
        .options = {
            _("{B_BUTTON} {RIGHT_ARROW} {A_BUTTON}"),
            _("{L_BUTTON}"),
            _("Off"),
        },
        .optionDescription = {
            _("In a battle, pressing {B_BUTTON} {RIGHT_ARROW} {A_BUTTON} from the main battle menu will attempt to run from battle."),
            _("In a battle, pressing {L_BUTTON} from the main battle menu will attempt to run from battle."),
            _("In a battle, there is no button to quickly flee."),
        },
        .numOptions = BATTLE_OPTION_QUICK_RUN_COUNT,
    },
    [BATTLE_OPTIONS_MID_BATTLE_EVOLUTION] =
    {
        .title = _("Mid Battle Evo"),
        .options = {
            _("On"),
            _("Off"),
        },
        .optionDescription = {
            _("If a Pokémon meets the threshold for evolution during battle, it will evolve during the battle."),
            _("If a Pokémon meets the threshold for evolution during battle, it will evolve after the player wins the battle."),
        },
        .numOptions = BATTLE_OPTION_MID_BATTLE_EVOLUTION_COUNT,
    },
    [BATTLE_OPTIONS_BATTLE_DIFFICULTY] =
    {
        .title = _("Battle Difficulty"),
        .options = {
            _("Cinematic"),
            _("Standard"),
            _("Challenge"),
        },
        .optionDescription = {
            _("Battles use weaker Pokemon and strategies. This is the difficulty of a normal Pokemon title. Designed for those that don't want a challenge."),
            _("Battles use strong Pokemon and strategies. More difficult than a normal Pokemon title. Designed for players of all skill levels."),
            _("Battles use extreme Pokemon and strategies. Designed only for battling experts."),
        },
        .numOptions = BATTLE_OPTION_DIFFICULTY_COUNT,
    },
    [BATTLE_OPTIONS_FAINTED_MON] =
    {
        .title = _("Fainted Mon"),
        .options = {
            _("Allowed"),
            _("Box"),
            _("Release"),
        },
        .optionDescription = {
            _("Pokémon in the player's party faint normally."),
            _("Pokémon in the player's party are sent to the box when they faint, and cannot be withdrawn."),
            _("Pokémon in the player's party are released when they faint."),
        },
        .numOptions = 3,
    },
    [BATTLE_OPTIONS_FIRST_POKEMON_CATCH] =
    {
        .title = _("First Pokemon Catch"),
        .options = {
            _("Default"),
            _("First Only"),
            _("Duplicate"),
        },
        .optionDescription = {
            _("Players can catch Pokémon normally."),
            _("Players can catch only catch the first Pokémon encoutered on a route. Shiny Pokémon can always be captured."),
            _("Players can catch only catch the first  new Pokémon encoutered on a route. Shiny Pokémon can always be captured."),
        },
        .numOptions = 3,
    },
    [BATTLE_OPTIONS_NICKNAME] =
    {
        .title = _("Nickname"),
        .options = {
            _("Ask"),
            _("Forced"),
            _("None"),
        },
        .optionDescription = {
            _("Ask"),
            _("Forced"),
            _("None"),
        },
        .numOptions = 3,
    },
    [BATTLE_OPTIONS_WHITEOUT] =
    {
        .title = _("Whiteout"),
        .options = {
            _("Respawn"),
            _("Death"),
        },
        .optionDescription = {
            _("When 'Fainted Mon' is turned on & the player whites out, a Pokémon is withdrawn from PC. If there are no Pokémon, the game loads the last save."),
            _("When 'Fainted Mon' is turned on & the player whites out, the save file is permanently deleted!"),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_ITEM_HEALING] =
    {
        .title = _("Item Healing"),
        .options = {
            _("Allowed"),
            _("Disabled"),
        },
        .optionDescription = {
            _("Players can use items to heal Hit Points and Power Points."),
            _("Players can not use items to heal Hit Points and Power Points."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_CENTER_HEALING] =
    {
        .title = _("Center Healing"),
        .options = {
            _("Allowed"),
            _("Disabled"),
        },
        .optionDescription = {
            _("Pokémon Centers and rest stops will heal the player's party."),
            _("Pokémon Centers and rest stops will not heal the player's party."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_MOVE_HEALING] =
    {
        .title = _("Move Healing"),
        .options = {
            _("Allowed"),
            _("Disabled"),
        },
        .optionDescription = {
            _("Players can use moves to heal Hit Points and Power Points."),
            _("Players can not use moves to heal Hit Points and Power Points."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_BAG_ITEMS] =
    {
        .title = _("Bag Items"),
        .options = {
            _("Allowed"),
            _("No Boss"),
            _("No Trainer"),
            _("4 Items"),
            _("No Items"),
        },
        .optionDescription = {
            _("The player can use items during battle."),
            _("The player cannot use items during Gym and Important battles."),
            _("The player cannot use items during Trainer battles."),
            _("The player can use up to 4 items during a single battle."),
            _("The player cannot use items during battle."),
        },
        .numOptions = 5,
    },
    [BATTLE_OPTIONS_OPPONENTS_ITEMS] =
    {
        .title = _("Opponent Items"),
        .options = {
            _("Allowed"),
            _("Disabled"),
        },
        .optionDescription = {
            _("Opposing Trainers can use up to 4 items during battle."),
            _("Opposing Trainers can not use items during battle."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_BASE_STAT_EQUALIZER] =
    {
        .title = _("Base Stat Equalizer"),
        .options = {
            _("Disabled"),
            _("100"),
            _("255"),
            _("500"),
        },
        .optionDescription = {
            _("Disabled"),
            _("100"),
            _("255"),
            _("500"),
        },
        .numOptions = 4,
    },
    [BATTLE_OPTIONS_ONE_TYPE_CHALLENGE] =
    {
        .title = _("One Type Challenge"),
        .options = {
            _("Normal"),
            _("Fighting"),
            _("Flying"),
            _("Poison"),
            _("Ground"),
            _("Rock"),
            _("Bug"),
            _("Ghost"),
            _("Steel"),
            _("Fire"),
            _("Water"),
            _("Grass"),
            _("Electric"),
            _("Psychic"),
            _("Ice"),
            _("Dragon"),
            _("Dark"),
            _("Fairy"),
        },
        .optionDescription = {
            _("Normal"),
            _("Fighting"),
            _("Flying"),
            _("Poison"),
            _("Ground"),
            _("Rock"),
            _("Bug"),
            _("Ghost"),
            _("Steel"),
            _("Fire"),
            _("Water"),
            _("Grass"),
            _("Electric"),
            _("Psychic"),
            _("Ice"),
            _("Dragon"),
            _("Dark"),
            _("Fairy"),
        },
        .numOptions = NUMBER_OF_MON_TYPES + 1,
    },
    [BATTLE_OPTIONS_TYPE_ICONS] =
    {
        .title = _("Type Icons"),
        .options = {
            _("Show"),
            _("Hide"),
        },
        .optionDescription = {
            _("Show"),
            _("Hide"),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_ANIMATIONS] =
    {
        .title = _("Animations"),
        .options = {
            _("On"),
            _("Off"),
        },
        .optionDescription = {
            _("Graphical elements such as move animations,  status afflications and weather are played."),
            _("Graphical elements such as move animations,  status afflications and weather are not played."),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_INTRO] =
    {
        .title = _("Intro"),
        .options = {
            _("Normal"),
            _("Skip"),
        },
        .optionDescription = {
            _("Normal"),
            _("Skip"),
        },
        .numOptions = 2,
    },
    [BATTLE_OPTIONS_HP_SPEED] =
    {
        .title = _("HP Speed"),
        .options = {
            _("Default"),
            _("Fast"),
            _("Instant"),
        },
        .optionDescription = {
            _("The speed at which the HP bar will change  is normal."),
            _("The speed at which the HP bar will change  is fast."),
            _("The speed at which the HP bar will change  is instaneous."),
        },
        .numOptions = BATTLE_OPTION_BAR_SPEED_COUNT,
    },
    [BATTLE_OPTIONS_EXP_SPEED] =
    {
        .title = _("EXP Speed"),
        .options = {
            _("Default"),
            _("Fast"),
            _("Instant"),
        },
        .optionDescription = {
            _("The speed at which the HP bar will change  is normal."),
            _("The speed at which the HP bar will change  is fast."),
            _("The speed at which the HP bar will change  is instaneous."),
        },
        .numOptions = BATTLE_OPTION_BAR_SPEED_COUNT,
    },
};

// For Visual Settings

static const struct OptionData VisualSettings_Settings_Options[NUM_OPTIONS_VISUAL_SETTINGS] =
{
    [VISUAL_OPTIONS_PRESET] =
    {
        .title = _("Visual Settings"),
        .options = {
            _("Default"),
            _("Speedrun"),
            _("Custom"),
            },
        .optionDescription = {
            _("Default Description"),
            _("Speedrun Description"),
            _("Custom Description"),
            },
        .numOptions = 3,
    },
    [VISUAL_OPTIONS_UNITS] =
    {
        .title = _("Units"),
        .options = {
            _("Imperial ."),
            _("Metric ."),
            _("Imperial ,"),
            _("Metric ,"),
            },
        .optionDescription = {
            _("The Pokémon Cranidos weighs 64.4 lbs."),
            _("The Pokémon Cranidos weighs 31.5 kg."),
            _("The Pokémon Cranidos weighs 64,4 lbs."),
            _("The Pokémon Cranidos weighs 31,5 kg."),
            },
        .numOptions = VISUAL_OPTION_UNITS_COUNT,
    },
    [VISUAL_OPTIONS_TEXT_SPEED] =
    {
        .title = _("Text Speed"),
        .options = {
            _("Slow"),
            _("Medium"),
            _("Fast"),
            _("Instant"),
            },
        .optionDescription = {
            _("Slow"),
            _("Medium"),
            _("Fast"),
            _("Instant"),
            },
        .numOptions = 4,
    },
    [VISUAL_OPTIONS_FONT_SWITCHER] =
    {
        .title = _("Font Switcher"),
        .options = {
            _("Emerald"),
            _("Fire Red"),
            },
        .optionDescription = {
            _("All interfaces will use the font from Emerald."),
            _("All interfaces will use the font from Fire Red."),
            },
        .numOptions = 2,
    },
    [VISUAL_OPTIONS_COLOR] =
    {
        .title = _("Color"),
        .options = {
            _("Red"),
            _("Green"),
            _("Blue"),
            _("Yellow"),
            _("Black"),
            _("White"),
            _("Platinum"),
            _("Scarlet"),
            _("Violet"),
            _("Custom"),
            },
        .optionDescription = {
            _("Game elements will use Red as an accent color."),
            _("Game elements will use Green as an accent color."),
            _("Game elements will use Blue as an accent color."),
            _("Game elements will use Yellow as an accent color."),
            _("Game elements will use Black as an accent color."),
            _("Game elements will use White as an accent color."),
            _("Game elements will use Platinum as an accent color."),
            _("Game elements will use Scarlet as an accent color."),
            _("Game elements will use Violet as an accent color."),
            _("Game elements will use a custom accent color."),
            },
        .numOptions = 10,
    },
    [VISUAL_OPTIONS_COLOR_VARIATION] =
    {
        .title = _("Pokémon Variation"),
        .options = {
            _("None"),
            _("Persona"),
            _("Stats"),
            _("Nickname"),
        },
        .optionDescription = {
            _("Your Pokémon's color will not be influenced by any other factors."),
            _("Your Pokémon's color will be influenced by the Pokémon's hidden personality value."),
            _("Your Pokémon's color will be influenced by the Pokémon's Individual Values."),
            _("Your Pokémon's color will be influenced by the Pokémon's nickname and the Pokémon's Original Trainer's name."),
        },
        .numOptions = VISUAL_OPTION_COLOR_VARIATION_COUNT,
    },
};

// For Music Settings

static const struct OptionData MusicSettings_Settings_Options[NUM_OPTIONS_MUSIC_SETTINGS] =
{
    [MUSIC_OPTIONS_PRESET] =
    {
        .title = _("Music Settings"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
            _("Custom"),
        },
        .optionDescription =
        {
            _("PSF Description"),
            _("LGPE Description"),
            _("HGSS Description"),
            _("ORAS Description"),
            _("BDSP Description"),
            _("BW2 Description"),
            _("XY Description"),
            _("USUM Description"),
            _("SWSH Description"),
            _("SV Description"),
            _("Custom Description"),
        },
        .numOptions = MUSIC_PRESET_COUNT,
    },
    [MUSIC_OPTIONS_SPEAKER] =
    {
        .title = _("Speaker"),
        .options =
        {
            _("Mono"),
            _("Stereo"),
        },
        .optionDescription =
        {
            _("Mono"),
            _("Stereo"),
        },
        .numOptions = 2,
    },
    [MUSIC_OPTIONS_SURF] =
    {
        .title = _("Surf"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .optionDescription =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .numOptions = MUSIC_OPTIONS_COUNT,
    },
    [MUSIC_OPTIONS_BIKE] =
    {
        .title = _("Bike"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .optionDescription =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .numOptions = MUSIC_OPTIONS_COUNT,
    },
    [MUSIC_OPTIONS_WILD] =
    {
        .title = _("Wild Battle"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .optionDescription =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .numOptions = MUSIC_OPTIONS_COUNT,
    },
    [MUSIC_OPTIONS_TRAINER] =
    {
        .title = _("Trainer Battle"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .optionDescription =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .numOptions = MUSIC_OPTIONS_COUNT,
    },
    [MUSIC_OPTIONS_GYM] =
    {
        .title = _("Gym Battle"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .optionDescription =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .numOptions = MUSIC_OPTIONS_COUNT,
    },
    [MUSIC_OPTIONS_TOURNAMENT] =
    {
        .title = _("Tournament Battle"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .optionDescription =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .numOptions = MUSIC_OPTIONS_COUNT,
    },
    [MUSIC_OPTIONS_CHAMPION] =
    {
        .title = _("Champion Battle"),
        .options =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .optionDescription =
        {
            _("PSF"),
            _("LGPE"),
            _("HGSS"),
            _("ORAS"),
            _("BDSP"),
            _("BW2"),
            _("XY"),
            _("USUM"),
            _("SWSH"),
            _("SV"),
        },
        .numOptions = MUSIC_OPTIONS_COUNT,
    },
    [MUSIC_OPTIONS_MUTE_MUSIC] =
    {
        .title = _("Mute Music"),
        .options =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .optionDescription =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
    },
    [MUSIC_OPTIONS_MUTE_SOUNDFX] =
    {
        .title = _("Mute Sound Effects"),
        .options =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .optionDescription =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
    },
    [MUSIC_OPTIONS_MUTE_CRIES] =
    {
        .title = _("Mute Cries"),
        .options =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .optionDescription =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
    },
    [MUSIC_OPTIONS_MUTE_FANFARES] =
    {
        .title = _("Mute Fanfares"),
        .options =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .optionDescription =
        {
            _("Unmuted"),
            _("Muted"),
        },
        .numOptions = MUSIC_OPTIONS_MUTE_COUNT,
    },
};

// For Random Settings

static const struct OptionData RandomSettings_Settings_Options[NUM_OPTIONS_RANDOM_SETTINGS] =
{
	[RANDOM_OPTIONS_PRESET] =
	{
		.title = _("Random Settings"),
		.options = {
			_("Default"),
			_("Sane"),
			_("Crazy"),
			_("Total Chaos"),
			_("Custom"),
		},
		.optionDescription = {
			_("Default Description"),
			_("Sane Description"),
			_("Crazy Description"),
			_("Total Chaos Description"),
			_("Custom Description"),
		},
		.numOptions = 5,
	},
	[RANDOM_OPTIONS_STARTER] =
	{
		.title = _("Starter"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_WILD_BATTLE] =
	{
		.title = _("Wild Battle"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_TRAINER_BATTLE] =
	{
		.title = _("Trainer Battle"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_EVOLUTION] =
	{
		.title = _("Evolution"),
		.options = {
			_("Default"),
			_("Random"),
			_("Legends"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Legends"),
			_("Chaos"),
		},
		.numOptions = 4,
	},
	[RANDOM_OPTIONS_EVOLUTION_METHOD] =
	{
		.title = _("Evolution Method"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_TYPE_EFFECTIVENESS] =
	{
		.title = _("Type Effectiveness"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_BASE_STATS] =
	{
		.title = _("Base Stats"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_TYPES] =
	{
		.title = _("Types"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_ABILITIES] =
	{
		.title = _("Abilities"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_LEVEL_UP_MOVES] =
	{
		.title = _("Level Up Moves"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_TMS] =
	{
		.title = _("TMs"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_MOVE_TUTORS] =
	{
		.title = _("Move Tutors"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_LEARNSETS] =
	{
		.title = _("Learnsets"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_ITEMS] =
	{
		.title = _("Items"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_STATIC_ENCOUNTERS] =
	{
		.title = _("Static Encounters"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	},
	[RANDOM_OPTIONS_TRAINERS] =
	{
		.title = _("Trainers"),
		.options = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.optionDescription = {
			_("Default"),
			_("Random"),
			_("Chaos"),
		},
		.numOptions = 3,
	}
};

static void PrintToWindow(u8 windowId, u8 colorIdx)
{
	u8 i;
	u8 x = 1;
	u8 y = 1;

	FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

	// Selector Sprite --------------------------------------------------------------------------------------------------------------------
	x = 0;
	if(!areYouNotOnSettingsHub)
		y = 2 + (currentScreenId * 2);
	else
		y = 2 + (GetCursorPosition() * 2);

	BlitBitmapToWindow(windowId, sOptionMenuSelector, (x*8) + 5, (y*8), 104, 24);

	// Settings Icons --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	if(!areYouNotOnSettingsHub){
		x = 1;
		y = 2;

		for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
			switch(i){
				case GAME_SETTINGS:
					BlitBitmapToWindow(windowId, sOptionMenuIcon_Game_Settings, (x*8) + 2, (y*8) + 5, 16, 16);
					break;
				case BATTLE_SETTINGS:
					BlitBitmapToWindow(windowId, sOptionMenuIcon_Battle_Settings, (x*8) + 2, (y*8) + 5, 16, 16);
					break;
				case VISUAL_SETTINGS:
					BlitBitmapToWindow(windowId, sOptionMenuIcon_Visual_Settings, (x*8) + 2, (y*8) + 5, 16, 16);
					break;
				case MUSIC_SETTINGS:
					BlitBitmapToWindow(windowId, sOptionMenuIcon_Music_Settings, (x*8) + 2, (y*8) + 5, 16, 16);
					break;
				default:
					BlitBitmapToWindow(windowId, sOptionMenuIcon_Random_Settings, (x*8) + 2, (y*8) + 5, 16, 16);
					break;
			}

			y = y + 2;
		}
	}
	// Current Setting Icon --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you have a selected settings
	if(areYouNotOnSettingsHub){
		x = 0;
		y = 0;

		switch(currentScreenId){
			case GAME_SETTINGS:
				BlitBitmapToWindow(windowId, sOptionMenuIcon_Game_Settings, (x*8), (y*8), 16, 16);
				break;
			case BATTLE_SETTINGS:
				BlitBitmapToWindow(windowId, sOptionMenuIcon_Battle_Settings, (x*8), (y*8), 16, 16);
				break;
			case VISUAL_SETTINGS:
				BlitBitmapToWindow(windowId, sOptionMenuIcon_Visual_Settings, (x*8), (y*8) + 1, 16, 16);
				break;
			case MUSIC_SETTINGS:
				BlitBitmapToWindow(windowId, sOptionMenuIcon_Music_Settings, (x*8), (y*8), 16, 16);
				break;
			default:
				BlitBitmapToWindow(windowId, sOptionMenuIcon_Random_Settings, (x*8), (y*8) + 1, 16, 16);
				break;
		}
	}
	// Up Arrow --------------------------------------------------------------------------------------------------------------------
	x = 7;
	y = 1;

	if((!areYouNotOnSettingsHub && currentScreenId != 0) || (areYouNotOnSettingsHub && currentFirstOption != 0))
		BlitBitmapToWindow(windowId, sOptionMenuArrow_Up, (x*8), (y*8) + 7, 16, 16);

	// Down Arrow --------------------------------------------------------------------------------------------------------------------
	x = 7;
	y = 11;

	if((!areYouNotOnSettingsHub && currentScreenId != (NUM_OF_SCREENS - 1)) ||
			(areYouNotOnSettingsHub && (currentFirstOption + NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN) <= (GetCurrentScreenOptionNumber() - 1)))
		BlitBitmapToWindow(windowId, sOptionMenuArrow_Down, (x*8), (y*8) + 7, 16, 16);

	// Left Arrow --------------------------------------------------------------------------------------------------------------------
	x = 19;
	if(!areYouNotOnSettingsHub)
		y = 2 + (currentScreenId * 2);
	else
		y = 2 + (GetCursorPosition() * 2);

	BlitBitmapToWindow(windowId, sOptionMenuArrow_Left, (x*8) + 6, (y*8) + 7, 16, 16);

	// Right Arrow --------------------------------------------------------------------------------------------------------------------
	x = 27;
	if(!areYouNotOnSettingsHub)
		y = 2 + (currentScreenId * 2);
	else
		y = 2 + (GetCursorPosition() * 2);

	BlitBitmapToWindow(windowId, sOptionMenuArrow_Right, (x*8) + 6, (y*8) + 7, 16, 16);

	// Settings Hub Text --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	if(!areYouNotOnSettingsHub){
		x = 0;
		y = 0;

		AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_Title_Settings_Hub);
	}

	// Current Settings Title --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you have a selected settings
	if(areYouNotOnSettingsHub){
		x = 2;
		y = 0;

		AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF,  Hub_Options[currentScreenId].title);
	}

	// Settings Names --------------------------------------------------------------------------------------------------------------------
	if(!areYouNotOnSettingsHub){
		x = 3;
		y = 2;
		for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
			AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, Hub_Options[i].title);
			y = y + 2;
		}
	}
	else{
		x = 1;
		y = 2;
		switch(currentScreenId){
			case GAME_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, GameSettings_Settings_Options[GetCurrentSlotOption(i)].title);
					y = y + 2;
				}
				break;
			case BATTLE_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, BattleSettings_Settings_Options[GetCurrentSlotOption(i)].title);
					y = y + 2;
				}
				break;
			case VISUAL_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, VisualSettings_Settings_Options[GetCurrentSlotOption(i)].title);
					y = y + 2;
				}
				break;
			case MUSIC_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, MusicSettings_Settings_Options[GetCurrentSlotOption(i)].title);
					y = y + 2;
				}
				break;
			default:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, RandomSettings_Settings_Options[GetCurrentSlotOption(i)].title);
					y = y + 2;
				}
				break;
		}
	}

	// Current Settings --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	if(!areYouNotOnSettingsHub){
		x = 21;
		y = 2;

		for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){

			switch(i){
				case GAME_SETTINGS:
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, GameSettings_Settings_Options[0].options[Temporal_Options_Game_Settings[0]]);
					break;
				case BATTLE_SETTINGS:
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, BattleSettings_Settings_Options[0].options[Temporal_Options_Battle_Settings[0]]);
					break;
				case VISUAL_SETTINGS:
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, VisualSettings_Settings_Options[0].options[Temporal_Options_Visual_Settings[0]]);
					break;
				case MUSIC_SETTINGS:
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, MusicSettings_Settings_Options[0].options[Temporal_Options_Music_Settings[0]]);
					break;
				case RANDOM_SETTINGS:
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, RandomSettings_Settings_Options[0].options[Temporal_Options_Random_Settings[0]]);
					break;
			}
			y = y + 2;
		}
	}
	else{
		x = 21;
		y = 2;

		switch(currentScreenId){
			case GAME_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, GameSettings_Settings_Options[GetCurrentSlotOption(i)].options[Temporal_Options_Game_Settings[GetCurrentSlotOption(i)]]);
					y = y + 2;
				}
				break;
			case BATTLE_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, BattleSettings_Settings_Options[GetCurrentSlotOption(i)].options[Temporal_Options_Battle_Settings[GetCurrentSlotOption(i)]]);
					y = y + 2;
				}
				break;
			case VISUAL_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, VisualSettings_Settings_Options[GetCurrentSlotOption(i)].options[Temporal_Options_Visual_Settings[GetCurrentSlotOption(i)]]);
					y = y + 2;
				}
				break;
			case MUSIC_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, MusicSettings_Settings_Options[GetCurrentSlotOption(i)].options[Temporal_Options_Music_Settings[GetCurrentSlotOption(i)]]);
					y = y + 2;
				}
				break;
			case RANDOM_SETTINGS:
				for(i = 0; i < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN; i++){
					AddTextPrinterParameterized4(windowId, 8, (x*8) + 6, (y*8) + 4, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, RandomSettings_Settings_Options[GetCurrentSlotOption(i)].options[Temporal_Options_Random_Settings[GetCurrentSlotOption(i)]]);
					y = y + 2;
				}
				break;
		}

	}

	// Option Description --------------------------------------------------------------------------------------------------------------------
	// Only gets displayed you are on the Settings Hub
	x = 0;
	y = 14;
	if(ShouldShowDiscardDialogue){
		AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_Discard_Text);
	}
	else if(!areYouNotOnSettingsHub){
		switch(currentScreenId){
			case GAME_SETTINGS:
				AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, GameSettings_Settings_Options[0].optionDescription[Temporal_Options_Game_Settings[0]]);
				break;
			case BATTLE_SETTINGS:
				AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, BattleSettings_Settings_Options[0].optionDescription[Temporal_Options_Battle_Settings[0]]);
				break;
			case VISUAL_SETTINGS:
				AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, VisualSettings_Settings_Options[0].optionDescription[Temporal_Options_Visual_Settings[0]]);
				break;
			case MUSIC_SETTINGS:
				AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, MusicSettings_Settings_Options[0].optionDescription[Temporal_Options_Music_Settings[0]]);
				break;
			case RANDOM_SETTINGS:
				AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, RandomSettings_Settings_Options[0].optionDescription[Temporal_Options_Random_Settings[0]]);
				break;
		}
	}
    else
    {
        switch(currentScreenId)
        {
            case GAME_SETTINGS:
                StringCopy(gStringVar1,GameSettings_Settings_Options[currentOptionId].optionDescription[Temporal_Options_Game_Settings[currentOptionId]]);
                break;
            case BATTLE_SETTINGS:
                StringCopy(gStringVar1,BattleSettings_Settings_Options[currentOptionId].optionDescription[Temporal_Options_Battle_Settings[currentOptionId]]);
                break;
            case VISUAL_SETTINGS:
                StringCopy(gStringVar1,VisualSettings_Settings_Options[currentOptionId].optionDescription[Temporal_Options_Visual_Settings[currentOptionId]]);
                break;
            case MUSIC_SETTINGS:
                StringCopy(gStringVar1,MusicSettings_Settings_Options[currentOptionId].optionDescription[Temporal_Options_Music_Settings[currentOptionId]]);
                break;
            default:
                StringCopy(gStringVar1,RandomSettings_Settings_Options[currentOptionId].optionDescription[Temporal_Options_Random_Settings[currentOptionId]]);

                break;
        }
        u32 halfTile = (TILE_SIZE_1BPP / 2);
        u32 fontId = FONT_OPTION_DESC;
        u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
        u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
        BreakStringAutomatic(gStringVar1,OPTION_DESC_PIXEL_WIDTH,OPTION_DESC_LINES_COUNT,fontId);
        AddTextPrinterParameterized4(windowId, fontId, halfTile, 108, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar1);
    }

	// Help Bar --------------------------------------------------------------------------------------------------------------------
	x = 0;
	y = 18;
	if(ShouldShowDiscardDialogue){
		AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_Help_Bar_Discard);
	}
	else if(!areYouNotOnSettingsHub){
		AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_Help_Bar_Settings_Hub);
	}
	else{
		AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_Help_Bar_Settings_Page);
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
	switch(Temporal_Options_Visual_Settings[VISUAL_OPTIONS_COLOR]){
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
    if(JOY_NEW(DPAD_UP) && !ShouldShowDiscardDialogue)
    {
        if(!areYouNotOnSettingsHub){
            if(currentScreenId > 0){
                currentScreenId--;
            }
            else{
                currentScreenId = NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN - 1;
            }
        }
        else{
            PressedUpButton();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
    }

	if(JOY_NEW(DPAD_DOWN) && !ShouldShowDiscardDialogue)
	{
        if(!areYouNotOnSettingsHub){
            if(currentScreenId < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN-1){
                currentScreenId++;
            }
            else{
                currentScreenId = 0;
            }
        }
        else{
            PressedDownButton();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if(JOY_NEW(DPAD_LEFT) && !ShouldShowDiscardDialogue)
	{
        if(!areYouNotOnSettingsHub || currentOptionId == 0){
            //For Presets
            switch(currentScreenId){
                case GAME_SETTINGS:
                    if(Temporal_Options_Game_Settings[0] > 0)
                        Temporal_Options_Game_Settings[0]--;
                    else
                        Temporal_Options_Game_Settings[0] = GameSettings_Settings_Options[0].numOptions - 1;
                break;
                case BATTLE_SETTINGS:
                    if(Temporal_Options_Battle_Settings[0] > 0)
                        Temporal_Options_Battle_Settings[0]--;
                    else
                        Temporal_Options_Battle_Settings[0] = BattleSettings_Settings_Options[0].numOptions - 1;
                break;
                case VISUAL_SETTINGS:
                    if(Temporal_Options_Visual_Settings[0] > 0)
                        Temporal_Options_Visual_Settings[0]--;
                    else
                        Temporal_Options_Visual_Settings[0] = VisualSettings_Settings_Options[0].numOptions - 1;
                break;
                case MUSIC_SETTINGS:
                    if(Temporal_Options_Music_Settings[0] > 0)
                        Temporal_Options_Music_Settings[0]--;
                    else
                        Temporal_Options_Music_Settings[0] = MusicSettings_Settings_Options[0].numOptions - 1;
                PreviewBGM(currentOptionId, Temporal_Options_Music_Settings[currentOptionId]);
                break;
                case RANDOM_SETTINGS:
                    if(Temporal_Options_Random_Settings[0] > 0)
                        Temporal_Options_Random_Settings[0]--;
                    else
                        Temporal_Options_Random_Settings[0] = RandomSettings_Settings_Options[0].numOptions - 1;
                break;
            }

			HandlePresetData();
			if(currentScreenId == VISUAL_SETTINGS)
				RecolorWindow();
		}
		else{
			// For Other Options
			switch(currentScreenId){
				case GAME_SETTINGS:
					if(Temporal_Options_Game_Settings[currentOptionId] > 0){
						Temporal_Options_Game_Settings[currentOptionId]--;
					}
					else
						Temporal_Options_Game_Settings[currentOptionId] = GameSettings_Settings_Options[currentOptionId].numOptions - 1;
					break;
				case BATTLE_SETTINGS:
					if(Temporal_Options_Battle_Settings[currentOptionId] > 0)
						Temporal_Options_Battle_Settings[currentOptionId]--;
					else
						Temporal_Options_Battle_Settings[currentOptionId] = BattleSettings_Settings_Options[currentOptionId].numOptions - 1;
					break;
				case VISUAL_SETTINGS:
					if(Temporal_Options_Visual_Settings[currentOptionId] > 0)
						Temporal_Options_Visual_Settings[currentOptionId]--;
					else
						Temporal_Options_Visual_Settings[currentOptionId] = VisualSettings_Settings_Options[currentOptionId].numOptions - 1;

                    if(currentOptionId == VISUAL_OPTIONS_COLOR)
                        RecolorWindow();
                break;
                case MUSIC_SETTINGS:
                    if(Temporal_Options_Music_Settings[currentOptionId] > 0)
                        Temporal_Options_Music_Settings[currentOptionId]--;
                    else
                        Temporal_Options_Music_Settings[currentOptionId] = MusicSettings_Settings_Options[currentOptionId].numOptions - 1;
                    PreviewBGM(currentOptionId, Temporal_Options_Music_Settings[currentOptionId]);
                break;
                case RANDOM_SETTINGS:
                    if(Temporal_Options_Random_Settings[currentOptionId] > 0)
                        Temporal_Options_Random_Settings[currentOptionId]--;
                    else
                        Temporal_Options_Random_Settings[currentOptionId] = RandomSettings_Settings_Options[currentOptionId].numOptions - 1;
                break;
            }

            ChangeCurrentScreenPresetDataToCustom();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if(JOY_NEW(DPAD_RIGHT) && !ShouldShowDiscardDialogue)
	{
        if(!areYouNotOnSettingsHub || currentOptionId == 0){
            //For Presets
            switch(currentScreenId){
                case GAME_SETTINGS:
                    if(Temporal_Options_Game_Settings[0] < GameSettings_Settings_Options[0].numOptions - 1)
                        Temporal_Options_Game_Settings[0]++;
                    else
                        Temporal_Options_Game_Settings[0] = 0;
                break;
                case BATTLE_SETTINGS:
                    if(Temporal_Options_Battle_Settings[0] < BattleSettings_Settings_Options[0].numOptions - 1)
                        Temporal_Options_Battle_Settings[0]++;
                    else
                        Temporal_Options_Battle_Settings[0] = 0;
                break;
                case VISUAL_SETTINGS:
                    if(Temporal_Options_Visual_Settings[0] < VisualSettings_Settings_Options[0].numOptions - 1)
                        Temporal_Options_Visual_Settings[0]++;
                    else
                        Temporal_Options_Visual_Settings[0] = 0;
                break;
                case MUSIC_SETTINGS:
                    if(Temporal_Options_Music_Settings[0] < MusicSettings_Settings_Options[0].numOptions - 1)
                        Temporal_Options_Music_Settings[0]++;
                    else
                        Temporal_Options_Music_Settings[0] = 0;
                PreviewBGM(currentOptionId, Temporal_Options_Music_Settings[currentOptionId]);
                break;
                case RANDOM_SETTINGS:
                    if(Temporal_Options_Random_Settings[0] < RandomSettings_Settings_Options[0].numOptions - 1)
                        Temporal_Options_Random_Settings[0]++;
                    else
                        Temporal_Options_Random_Settings[0] = 0;
                break;
            }

			HandlePresetData();
			if(currentScreenId == VISUAL_SETTINGS)
				RecolorWindow();
		}
		else{
			//For other Options
			switch(currentScreenId){
				case GAME_SETTINGS:
					if(Temporal_Options_Game_Settings[currentOptionId] < GameSettings_Settings_Options[currentOptionId].numOptions - 1){
						Temporal_Options_Game_Settings[currentOptionId]++;
					}
					else
						Temporal_Options_Game_Settings[currentOptionId] = 0;
					break;
				case BATTLE_SETTINGS:
					if(Temporal_Options_Battle_Settings[currentOptionId] < BattleSettings_Settings_Options[currentOptionId].numOptions - 1){
						Temporal_Options_Battle_Settings[currentOptionId]++;
					}
					else
						Temporal_Options_Battle_Settings[currentOptionId] = 0;
					break;
				case VISUAL_SETTINGS:
					if(Temporal_Options_Visual_Settings[currentOptionId] < VisualSettings_Settings_Options[currentOptionId].numOptions - 1){
						Temporal_Options_Visual_Settings[currentOptionId]++;
					}
					else
						Temporal_Options_Visual_Settings[currentOptionId] = 0;

                    if(currentOptionId == VISUAL_OPTIONS_COLOR)
                            RecolorWindow();
                break;
                case MUSIC_SETTINGS:
                    if(Temporal_Options_Music_Settings[currentOptionId] < MusicSettings_Settings_Options[currentOptionId].numOptions - 1){
                        Temporal_Options_Music_Settings[currentOptionId]++;
                    }
                    else
                        Temporal_Options_Music_Settings[currentOptionId] = 0;

                    PreviewBGM(currentOptionId, Temporal_Options_Music_Settings[currentOptionId]);
                break;
                case RANDOM_SETTINGS:
                    if(Temporal_Options_Random_Settings[currentOptionId] < RandomSettings_Settings_Options[currentOptionId].numOptions - 1){
                        Temporal_Options_Random_Settings[currentOptionId]++;
                    }
                    else
                        Temporal_Options_Random_Settings[currentOptionId] = 0;
                break;
            }

            ChangeCurrentScreenPresetDataToCustom();
        }
        PlaySoundEffectBasedOnTemporalMute(SE_SELECT);
        PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if (JOY_NEW(A_BUTTON))
	{
		if(!areYouNotOnSettingsHub && !ShouldShowDiscardDialogue){
			areYouNotOnSettingsHub = !areYouNotOnSettingsHub;
			HandlePresetData();
			currentOptionId = 0;
			currentFirstOption = 0;

			if(currentScreenId == VISUAL_SETTINGS){
				RecolorWindow();
			}

            PrintToWindow(WINDOW_1, FONT_BLACK);
        }
        else if(areYouNotOnSettingsHub && ShouldShowDiscardDialogue){
            CopySaveBlockDataToTemporalData();
            ShouldShowDiscardDialogue = FALSE;
            areYouNotOnSettingsHub = !areYouNotOnSettingsHub;
            currentOptionId = 0;
            currentFirstOption = 0;
            PrintToWindow(WINDOW_1, FONT_BLACK);
        }
        else if(ShouldShowDiscardDialogue && !areYouNotOnSettingsHub){
            PlaySoundEffectBasedOnTemporalMute(SE_PC_OFF);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, OptionMenu_FadeWhiteIfMainMenu());
            gTasks[taskId].func = Task_MenuTurnOff;
        }
    }

    if (JOY_NEW(B_BUTTON))
    {
        if(HaveSettingsChanged())
            ShouldShowDiscardDialogue = !ShouldShowDiscardDialogue;
        else if (!areYouNotOnSettingsHub){
            PlaySoundEffectBasedOnTemporalMute(SE_PC_OFF);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, OptionMenu_FadeWhiteIfMainMenu());
            gTasks[taskId].func = Task_MenuTurnOff;
        }
        else{
            areYouNotOnSettingsHub = !areYouNotOnSettingsHub;
            currentOptionId = 0;
            currentFirstOption = 0;
        }

		PrintToWindow(WINDOW_1, FONT_BLACK);
	}

	if (JOY_NEW(START_BUTTON))
	{
		ShouldShowDiscardDialogue = FALSE;

        if(!areYouNotOnSettingsHub){
            CopyTemporalDataToSaveBlockData();
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, OptionMenu_FadeWhiteIfMainMenu());
            gTasks[taskId].func = Task_MenuTurnOff;
        }
        else{
            CopyTemporalDataToSaveBlockData();
            areYouNotOnSettingsHub = !areYouNotOnSettingsHub;
            currentOptionId = 0;
            currentFirstOption = 0;
            PrintToWindow(WINDOW_1, FONT_BLACK);
        }
    }

	if (JOY_NEW(L_BUTTON) && !ShouldShowDiscardDialogue)
	{
		if(areYouNotOnSettingsHub){
			if(currentScreenId > 0){
				currentScreenId--;
			}
			else{
				currentScreenId = NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN - 1;
			}

			currentOptionId = 0;
			currentFirstOption = 0;
			PrintToWindow(WINDOW_1, FONT_BLACK);
		}
	}

	if (JOY_NEW(R_BUTTON) && !ShouldShowDiscardDialogue)
	{
		if(areYouNotOnSettingsHub){
			if(currentScreenId < NUM_OF_POSSIBLE_OPTIONS_THAT_FIT_ON_SCREEN-1){
				currentScreenId++;
			}
			else{
				currentScreenId = 0;
			}

			currentOptionId = 0;
			currentFirstOption = 0;
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
		gSaveBlock2Ptr->optionsGame[i] = Preset_Options[GAME_SETTINGS][GAME_PRESET_DEFAULT][i];
	}

	for (i = 0; i < NUM_OPTIONS_BATTLE_SETTINGS; i++)
	{
		gSaveBlock2Ptr->optionsBattle[i] = Preset_Options[BATTLE_SETTINGS][BATTLE_PRESET_DEFAULT][i];
	}
	for (i = 0; i < NUM_OPTIONS_MUSIC_SETTINGS; i++)
	{
		gSaveBlock2Ptr->optionsMusic[i] = Preset_Options[MUSIC_SETTINGS][MUSIC_PRESET_DEFAULT][i];
	}

	for (i = 0; i < NUM_OPTIONS_RANDOM_SETTINGS; i++)
	{
		gSaveBlock2Ptr->optionsRandom[i] = Preset_Options[RANDOM_SETTINGS][RANDOM_PRESET_DEFAULT][i];
	}
	for (i = 0; i < NUM_OPTIONS_VISUAL_SETTINGS; i++)
	{
		gSaveBlock2Ptr->optionsVisual[i] = Preset_Options[VISUAL_SETTINGS][VISUAL_PRESET_DEFAULT][i];
	}
}

bool32 HaveSettingsChanged(void)
{
	u8 i, j;

	for(i = 0 ;i < NUM_OF_PRESET_OPTIONS; i++){
		switch(i){
			case GAME_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_GAME_SETTINGS; j++){
					if (gSaveBlock2Ptr->optionsGame[j] != Temporal_Options_Game_Settings[j])
						return TRUE;
				}
				break;
			case BATTLE_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_BATTLE_SETTINGS; j++){
					if (gSaveBlock2Ptr->optionsBattle[j] != Temporal_Options_Battle_Settings[j])
						return TRUE;
				}
				break;
			case VISUAL_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_VISUAL_SETTINGS; j++){
					if (gSaveBlock2Ptr->optionsVisual[j] != Temporal_Options_Visual_Settings[j])
						return TRUE;
				}
				break;
			case MUSIC_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_MUSIC_SETTINGS; j++){
					if (gSaveBlock2Ptr->optionsMusic[j] != Temporal_Options_Music_Settings[j])
						return TRUE;
				}
				break;
			case RANDOM_SETTINGS:
				for(j = 0 ;j < NUM_OPTIONS_RANDOM_SETTINGS; j++){
					if (gSaveBlock2Ptr->optionsRandom[j] != Temporal_Options_Random_Settings[j])
						return TRUE;
				}
				break;
		}
	}
	return FALSE;
}

void PlaySoundEffectBasedOnTemporalMute(u16 songNum)
{
    if (!Temporal_Options_Music_Settings[MUSIC_OPTIONS_MUTE_SOUNDFX])
        PlaySE(songNum);
}

static void InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Menu_InitBgs())
        Menu_LoadGraphics();
    else
        Menu_FadeAndBail();
}
