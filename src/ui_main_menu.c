#include "global.h"
#include "trainer_pokemon_sprites.h"
#include "bg.h"
#include "constants/rgb.h"
#include "constants/battle_frontier.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_effect.h"
#include "field_specials.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "link.h"
#include "main.h"
#include "main_menu.h"
#include "menu.h"
#include "money.h"
#include "list_menu.h"
#include "mystery_event_menu.h"
#include "naming_screen.h"
#include "option_menu.h"
#include "ui_options_menu.h"
#include "overworld.h"
#include "palette.h"
#include "pokeball.h"
#include "pokedex.h"
#include "pokemon.h"
#include "random.h"
#include "rtc.h"
#include "save.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "tv.h"
#include "text_window.h"
#include "title_screen.h"
#include "window.h"
#include "mystery_gift_menu.h"
#include "malloc.h"
#include "menu_helpers.h"
#include "ui_main_menu.h"
#include "dma3.h"
#include "pokemon_icon.h"
#include "region_map.h"
#include "ui_options_menu.h"
#include "options_battle.h"
#include "options_visual.h"
#include "quests.h"
#include "field_specials.h"
#include "field_player_avatar.h"
#include "event_object_movement.h"
#include "clear_save_data_menu.h"
#include "accept.h"
#include "quest_logic.h"
#include "ui_pokedex.h"

extern const u8 gText_ClearingData[];
extern const u8 gText_Pokedex[];

void Task_OpenMainMenuFromTitleScreen(u8);
static void CB2_InitUiEraseMainMenuFromTitleScreen(void);
static void MainMenu_InitializeAndSaveCallback(MainCallback callback, enum MainMenuModes mode);
static bool32 AllocateStructs(void);
static void MainMenu_SetupCallback(void);
static void MainMenu_InitializeBackgroundsAndLoadBackgroundGraphics(void);
static void MainMenu_InitWindows(bool32);
static void MainMenu_VBlankCB(void);
static void MainMenu_MainCB(void);
static bool32 MainMenu_InitializeBackgrounds(bool32);
static bool32 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(bool32);
static void SetBackgroundTransparency(void);
static void SetScheduleBgs(enum MainMenuBackgrounds);
static void LoadGraphics(void);
static void LoadMainMenuPalettes(void);
static void Task_WaitFadeAndExitGracefully(u8);
static void FadescreenAndExitGracefully(void);
static void FreeResources(void);
static void FreeStructs(void);
static void ToggleStatsBackground(void);
static void MainMenu_SetUp(u8);
static void PrintBodyContent(void);
static void BufferOptionsText(u8* dest, enum MainMenuModes mode, enum MainMenuContinueMenuOptions optionIndex);
static void PrintMainMenuOptions(void);
static bool8 ShouldSkipBP(enum MainMenuModes mode, u32 optionIndex, bool32 isBg);
static void PrintMainMenuTextHeader(void);
static void PrintMainMenuImageHeader();
static void PrintPlayerName(enum MainMenuWindows);
static void PrintPlaytime(enum MainMenuWindows);
static void PrintTimeOfDaySprite(void);
static void ResetSpriteIds(void);
static void PrintMainMenuContinueInfo();
static void PrintDifficulty(enum MainMenuWindows);
u32 BufferGameModeTitleGetWidth(u8*);
static bool32 AreSettingsNuzlocke(void);
static bool32 AreSettingsHardcore(void);
static void BufferDifficultyStars(void);
u32 CalculateDifficultyStars(void);
static void BufferStatName(enum MainMenuCompletionStats);
static void CalculateAllStatPercent(void);
static void CalculateStatPercent(enum MainMenuCompletionStats);
static void BufferStatPercent(enum MainMenuCompletionStats);
static void RecordCompletionStat(u32, u32);
static u32 GetCompletionStat(u32);
static u32 CalculateStoryCompletion(void);
static u32 CalculateTrainerCompletion(void);
static u32 CalculatePokedexCompletion(void);
static u32 CalculateQuestsCompletion(void);
static u32 CalculateGymCompletion(void);
static u32 CalculateOverallCompletion(void);
static void PrintMainMenuContinueStats();
static void PrintMainMenuContinueOptionsBackground(void);
static void PrintMainMenuTrainerCardsBackground(void);
static void PrintMainMenuContinueHelpBar();
static void PrintPlayerIcon(void);
static void PrintGymLeaders(void);
static u32 GetPlayerIconSpriteId(void);
static void SetPlayerIconSpriteId(u32);
static void PrintPlayerParty(void);
static void PrintSpeciesIcon(u32, u32, u32);
static void SpriteCB_MoveWhenCursorIsContinue(struct Sprite*);
static void Task_MainMenuInput(u8);
static void UpdatePlayerAnimation(void);
static void IncrementPosition(void);
static void DecrementPosition(void);
static void SetCursorPosition(u32);
static void MainMenu_SetMode(enum MainMenuModes mode);
static enum MainMenuModes MainMenu_GetMode(void);
static enum MainMenuContinueMenuOptions GetCursorPosition(void);
static void SetEraseMode(void);
static bool8 IsMainMenuInEraseMode(void);
static void ReturnToPrevious(u8);
static void Task_ReturnToPreviousScreen(u8);
static void SelectMenuItem(u8);
static void SelectMenuItem_EraseMenu(u8);
static void ToggleCursorVisibility(void);
static void ContinueGame(u8);
static void Task_ContinueGame(u8);
static void Task_OpenOptionsFromMainMenu(u8);
static void OpenOptionsFromMainMenu(u8);
static void SwitchMode(u8);
static void PrintMenuCursor(void);
static u32 CalculateVerticalMenuCursorPosition(enum MainMenuContinueMenuOptions);
static u32 CalculateHorizontalMenuCursorPosition(void);
static void LoadMenuCursorSprite(void);
static void SpriteCallback_MenuCursor(struct Sprite*);
static u32 GetMenuCursorSpriteId(void);
static void SaveMenuCursorSpriteId(u32);
static void PrintMainMenuEraseOptionsBackground(void);
static void PrintMainMenuOptionsBackground(void);
static void PrintMainMenuOptionsBackgroundParameterized(u32,u32,u32,u32,const u8**,const u8**);
static void PrintMainMenuEraseBackground(void);
static void PrintMainMenuEraseMessage(void);
static void PrintProgressErasingMessage(void);
static void PrintCompletionIcon(void);
static u32 GetMenuCompletionSpriteId(void);
static void SaveMenuCompletionSpriteId(u32);
static void SpriteCallback_CompletionSprite(struct Sprite*);
static void LoadCompletionIconSprite(void);


struct MainMenuState
{
    MainCallback savedCallback;
    enum MainMenuModes mode;
    u8 gameCompletionStats[MAINMENU_COMPLETION_STAT_COUNT];
};

struct MainMenuSprites
{
    u8 playerSpriteId;
    u8 menuCursorSpriteId;
    u8 menuCompletionSpriteId;
};

struct MainMenuLists
{
    u8 cursorPosition;
};

static const u16 mainMenuPalettesBlack[] = INCBIN_U16("graphics/ui_menus/glass/palettes/black.gbapal");
static const u16 mainMenuPalettesBlue[] = INCBIN_U16("graphics/ui_menus/glass/palettes/blue.gbapal");
static const u16 mainMenuPalettesDefault[] = INCBIN_U16("graphics/ui_menus/glass/palettes/default.gbapal");
static const u16 mainMenuPalettesGreen[] = INCBIN_U16("graphics/ui_menus/glass/palettes/green.gbapal");
static const u16 mainMenuPalettesPlatinum[] = INCBIN_U16("graphics/ui_menus/glass/palettes/platinum.gbapal");
static const u16 mainMenuPalettesRed[] = INCBIN_U16("graphics/ui_menus/glass/palettes/red.gbapal");
static const u16 mainMenuPalettesScarlet[] = INCBIN_U16("graphics/ui_menus/glass/palettes/scarlet.gbapal");
static const u16 mainMenuPalettesViolet[] = INCBIN_U16("graphics/ui_menus/glass/palettes/violet.gbapal");
static const u16 mainMenuPalettesWhite[] = INCBIN_U16("graphics/ui_menus/glass/palettes/white.gbapal");
static const u16 mainMenuPalettesYellow[] = INCBIN_U16("graphics/ui_menus/glass/palettes/yellow.gbapal");
//static const u16 mainMenuPalettesText[] = INCBIN_U16("graphics/ui_menus/glass/palettes/text.gbapal");
static const u16 mainMenuPalettesText[] = INCBIN_U16("graphics/ui_menus/start_menu/text.gbapal");

static const u32 statsBgTiles[] = INCBIN_U32("graphics/ui_menus/main_menu/statsbackground.4bpp.smol");
static const u32 statsBgTilemap[] = INCBIN_U32("graphics/ui_menus/main_menu/statsbackground.bin.smolTM");

static const u32 mainMenuLocationBgTiles[] = INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.4bpp.smol");
static const u32 mainMenuLocationBgTilemap[] = INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.bin.smolTM");

static const u32 mainMenuContinueMenuBgTiles[] = INCBIN_U32("graphics/ui_menus/main_menu/menu/bg.4bpp.smol");
static const u32 mainMenuContinueMenuBgTilemap[] = INCBIN_U32("graphics/ui_menus/main_menu/menu/bg.bin.smolTM");

static const u8 mainMenuContinueOptionBg[] = INCBIN_U8("graphics/ui_menus/main_menu/menu/non-selector.4bpp");
static const u8 mainMenuContinueSelectedBg[] = INCBIN_U8("graphics/ui_menus/main_menu/menu/selector.4bpp");
static const u8 mainMenuEraseOptionBg[] = INCBIN_U8("graphics/ui_menus/main_menu/menu/eraseNon-selector.4bpp");
static const u8 mainMenuEraseSelectedBg[] = INCBIN_U8("graphics/ui_menus/main_menu/menu/eraseSelector.4bpp");
static const u8 mainMenuTrainerCardBg[] = INCBIN_U8("graphics/ui_menus/main_menu/menu/trainercardBg.4bpp");
static const u8 eraseBgBitmap[] = INCBIN_U8("graphics/ui_menus/main_menu/eraseBg.4bpp");
static const u8 morningBitmap[] = INCBIN_U8("graphics/ui_menus/main_menu/sun.4bpp");
static const u8 dayBitmap[] = INCBIN_U8("graphics/ui_menus/main_menu/sun.4bpp");
static const u8 eveningBitmap[] = INCBIN_U8("graphics/ui_menus/main_menu/night.4bpp");
static const u8 nightBitmap[] = INCBIN_U8("graphics/ui_menus/main_menu/night.4bpp");
static const u32 mainMenuContinueCursor[] = INCBIN_U32("graphics/ui_menus/main_menu/cursor.4bpp.smol");

static const u32 sharpriseSprite[] = INCBIN_U32("graphics/ui_menus/main_menu/sharprise.4bpp.smol");
static const u32 tideSprite[] = INCBIN_U32("graphics/ui_menus/main_menu/thetide.4bpp.smol");

static const u8 sMainMenuWindowFontColors[][3] =
{
    [MAINMENU_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [MAINMENU_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
    [MAINMENU_FONT_COLOR_WHITE_MENU]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_DARK_GRAY},
    [MAINMENU_FONT_COLOR_WHITE_HEADER]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
};

static const struct SpritePalette sMainMenuInterfaceSpritePalette =
{
    .data = mainMenuPalettesDefault,
    .tag = PAL_MAINMENU_UI_SPRITES,
};

static EWRAM_DATA struct MainMenuState *sMainMenuState = NULL;
static EWRAM_DATA struct MainMenuLists *sMainMenuLists= NULL;
static EWRAM_DATA struct MainMenuSprites *sMainMenuSprites = NULL;
static EWRAM_DATA u8 *sBgTilemapBuffer[BG_MAINMENU_COUNT] = {NULL};

static const struct BgTemplate sMainMenuBgTemplates[] =
{
    {
        .bg = BG0_MAINMENU_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = BG1_MAINMENU_STATS,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    {
        .bg = BG2_MAINMENU_SHADOW,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
    {
        .bg = BG3_MAINMENU_GENERAL,
        .charBaseIndex = 3,
        .mapBaseIndex = 27,
        .priority = 3
    },
};

static const struct WindowTemplate sMainMenuWindowContinueTemplates[] =
{
    [MAINMENU_WINDOW_HEADER]
    {
        .bg = BG0_MAINMENU_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum =   15,
        .baseBlock = 1,
    },
    [MAINMENU_WINDOW_INFO_BAR]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   2   ,
        .width =    30  ,
        .height =   2   ,
        .paletteNum = 15,
        .baseBlock =    61  ,
    },
    [MAINMENU_WINDOW_STATS]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   7   ,
        .width =    10  ,
        .height =   11  ,
        .paletteNum = 15,
        .baseBlock =    121 ,
    },
    [MAINMENU_WINDOW_OPTIONS]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  14  ,
        .tilemapTop =   7   ,
        .width =    16  ,
        .height =   11  ,
        .paletteNum = 15,
        .baseBlock =    231 ,
    },
    [MAINMENU_WINDOW_HELP_BAR]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   18  ,
        .width =    30  ,
        .height =   2   ,
        .paletteNum = 15,
        .baseBlock =    407 ,
    },
    [MAINMENU_WINDOW_BACKGROUND_OPTIONS]
    {
        .bg =   BG2_MAINMENU_SHADOW   ,
        .tilemapLeft =  14  ,
        .tilemapTop =   7   ,
        .width =    16  ,
        .height =   11  ,
        .paletteNum =   PAL_SLOT_MAINMENU_UI  ,
        .baseBlock =    51,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sMainMenuWindowEraseTemplates[] =
{
    [MAINMENU_WINDOW_HEADER]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   0   ,
        .width =    30  ,
        .height =   2   ,
        .paletteNum =   PAL_SLOT_MAINMENU_UI  ,
        .baseBlock =    1   ,
    },
    [MAINMENU_WINDOW_INFO_BAR]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   2   ,
        .width =    30  ,
        .height =   2   ,
        .paletteNum = 15,
        .baseBlock =    61  ,
    },
    [MAINMENU_WINDOW_ERASE]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   7   ,
        .width =    30  ,
        .height =   4   ,
        .paletteNum = 15,
        .baseBlock =    121 ,
    },
    [MAINMENU_WINDOW_OPTIONS]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  24  ,
        .tilemapTop =   12  ,
        .width =    6   ,
        .height =   6   ,
        .paletteNum = 15,
        .baseBlock =    241 ,
    },
    [MAINMENU_WINDOW_HELP_BAR]
    {
        .bg = BG0_MAINMENU_TEXT   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   18  ,
        .width =    30  ,
        .height =   2   ,
        .paletteNum = 15,
        .baseBlock =    277 ,
    },
    [MAINMENU_WINDOW_BACKGROUND_OPTIONS]
    {
        .bg =   BG2_MAINMENU_SHADOW   ,
        .tilemapLeft =  14  ,
        .tilemapTop =   7   ,
        .width =    16  ,
        .height =   11  ,
        .paletteNum =   PAL_SLOT_MAINMENU_UI  ,
        .baseBlock =    61,
    },
    [MAINMENU_WINDOW_ERASE_BACKGROUND]
    {
        .bg =   BG2_MAINMENU_SHADOW   ,
        .tilemapLeft =  0   ,
        .tilemapTop =   7   ,
        .width =    30  ,
        .height =   4   ,
        .paletteNum =   PAL_SLOT_MAINMENU_UI  ,
        .baseBlock =    237 ,
    },
    DUMMY_WIN_TEMPLATE
};

static const u32* const sMainMenuTilesLUT[] =
{
    [BG3_MAINMENU_GENERAL] = mainMenuLocationBgTiles,
    [BG2_MAINMENU_SHADOW]  = mainMenuContinueMenuBgTiles,
    [BG1_MAINMENU_STATS]   = statsBgTiles,
    [BG0_MAINMENU_TEXT]    = NULL,
};

static const u32* const sMainMenuTilemapLUT[] =
{
    [BG3_MAINMENU_GENERAL] = mainMenuLocationBgTilemap,
    [BG2_MAINMENU_SHADOW]  = mainMenuContinueMenuBgTilemap,
    [BG1_MAINMENU_STATS]   = statsBgTilemap,
    [BG0_MAINMENU_TEXT]    = NULL,
};

static const u16* const sMainMenuPalettesLUT[] =
{
    [VISUAL_OPTION_COLOR_RED] = mainMenuPalettesRed,
    [VISUAL_OPTION_COLOR_GREEN] = mainMenuPalettesGreen,
    [VISUAL_OPTION_COLOR_BLUE] = mainMenuPalettesBlue,
    [VISUAL_OPTION_COLOR_YELLOW] = mainMenuPalettesYellow,
    [VISUAL_OPTION_COLOR_BLACK] = mainMenuPalettesBlack,
    [VISUAL_OPTION_COLOR_WHITE] = mainMenuPalettesWhite,
    [VISUAL_OPTION_COLOR_PLATINUM] = mainMenuPalettesPlatinum,
    [VISUAL_OPTION_COLOR_SCARLET] = mainMenuPalettesScarlet,
    [VISUAL_OPTION_COLOR_VIOLET] = mainMenuPalettesViolet,
    [VISUAL_OPTION_COLOR_CUSTOM] = mainMenuPalettesDefault,
    [VISUAL_OPTION_COLOR_COUNT] = mainMenuPalettesDefault,
};

static const u8* const sMainMenuOptionNameLUT[] =
{
    [MAINMENU_CONTINUE] = COMPOUND_STRING("Continue Adventure"),
    [MAINMENU_NEWGAME] = COMPOUND_STRING("New Game"),
    [MAINMENU_ERASE] = COMPOUND_STRING("Erase All Data"),
    [MAINMENU_OPTIONS] = COMPOUND_STRING("Options"),
    [MAINMENU_MENU_COUNT] = gText_Blank,
};

static const u8* const sTrainerCardsLUT[] =
{
    //[TRAINERCARD_MONEY] = COMPOUND_STRING("Money:   ¥{STR_VAR_1}"),
    //[TRAINERCARD_BP]    = COMPOUND_STRING("Battle Points:   {STR_VAR_2}"),
    [TRAINERCARD_MONEY_TITLE] = COMPOUND_STRING("Money:"),
    [TRAINERCARD_BP_TITLE]    = COMPOUND_STRING("Battle Points:"),
    [TRAINERCARD_MONEY_VALUE] = COMPOUND_STRING("¥{STR_VAR_1}"),
    [TRAINERCARD_BP_VALUE]    = COMPOUND_STRING("{STR_VAR_2}"),
};

static const u8* const sMainMenuTimeLUT[] =
{
    [TIME_MORNING]   = morningBitmap,
    [TIME_DAY]       = dayBitmap,
    [TIME_EVENING]   = eveningBitmap,
    [TIME_NIGHT]     = nightBitmap,
};

static const u8* const sMainMenuDifficultyNameLUT[] =
{
    [BATTLE_OPTION_DIFFICULTY_EASY] = COMPOUND_STRING(" Cinematic"),
    [BATTLE_OPTION_DIFFICULTY_NORMAL]  = gText_Blank,
    [BATTLE_OPTION_DIFFICULTY_HARD]   = COMPOUND_STRING(" Challenge"),
    [BATTLE_OPTION_DIFFICULTY_COUNT]    = gText_Blank,
};


static const u8* const sMainMenuCompletionStatNameLUT[] =
{
    [MAINMENU_COMPLETION_STORY] = COMPOUND_STRING("Story"),
    [MAINMENU_COMPLETION_TRAINER] = gEasyChatGroupName_Trainer,
    [MAINMENU_COMPLETION_POKEDEX] = gText_Pokedex,
    [MAINMENU_COMPLETION_QUESTS] = COMPOUND_STRING("Quests"),
    [MAINMENU_COMPLETION_GYMS] = COMPOUND_STRING("Gyms"),
    [MAINMENU_COMPLETION_OVERALL] = COMPOUND_STRING("Completion"),
    [MAINMENU_COMPLETION_STAT_COUNT] = gText_Blank,
};

static u32 (* const completionFuncs[])(void) =
{
    [MAINMENU_COMPLETION_STORY] = CalculateStoryCompletion,
    [MAINMENU_COMPLETION_TRAINER] = CalculateTrainerCompletion,
    [MAINMENU_COMPLETION_POKEDEX] = CalculatePokedexCompletion,
    [MAINMENU_COMPLETION_QUESTS] = CalculateQuestsCompletion,
    [MAINMENU_COMPLETION_GYMS] = CalculateGymCompletion,
    [MAINMENU_COMPLETION_OVERALL] = CalculateOverallCompletion,
    [MAINMENU_COMPLETION_STAT_COUNT] = NULL,
};

static void (* const continueFuncsLUT[])(u8 taskId) =
{
    [MAINMENU_CONTINUE] = ContinueGame,
    [MAINMENU_NEWGAME] = StartNewGameWithDevIntro,
    [MAINMENU_ERASE] = SwitchMode,
    [MAINMENU_OPTIONS] = OpenOptionsFromMainMenu,
    [MAINMENU_MENU_COUNT] = NULL,
};

static void (* const eraseFuncsLUT[])(u8 taskId) =
{
    [MAINMENU_ERASE_NO] = ReturnToPrevious,
    [MAINMENU_ERASE_YES] = SelectMenuItem_EraseMenu,
    [MAINMENU_ERASE_COUNT] = NULL,
};

static const u8 sMainMenuOptionWidth[] =
{
    [MAINMENU_MODE_ERASE] = MAINMENU_OPTIONS_ERASE_BACKGROUND_LEFT_MARGIN,
    [MAINMENU_MODE_CONTINUE] = MAINMENU_OPTIONS_BACKGROUND_LEFT_MARGIN,
    [MAINMENU_MODE_TRAINER_CARD] = MAINMENU_OPTIONS_TRAINER_CARD_LEFT_MARGIN,
};


void CB2_GoToEraseMainMenu(void)
{
    if (!UpdatePaletteFade())
        SetMainCallback2(CB2_InitUiEraseMainMenuFromTitleScreen);
}

void CB2_GoToUIMainMenu(void)
{
    if (!UpdatePaletteFade())
        SetMainCallback2(CB2_InitUiMainMenuFromTitleScreen);
}


static void CB2_InitUiEraseMainMenuFromTitleScreen(void)
{
    MainMenu_InitializeAndSaveCallback(CB2_InitTitleScreen,MAINMENU_MODE_ERASE);
}

void CB2_InitUiMainMenuFromTitleScreen(void)
{
    MainMenu_InitializeAndSaveCallback(CB2_InitTitleScreen,MAINMENU_MODE_CONTINUE);
}

void CB2_InitUiMainMenuFromStartMenu(void)
{
    MainMenu_InitializeAndSaveCallback(CB2_StartMenu_ReturnToUI,MAINMENU_MODE_TRAINER_CARD);
}

void SaveCallbackToMainMenu(MainCallback callback)
{
    sMainMenuState->savedCallback = callback;
}

void Task_OpenMainMenuFromTitleScreen(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    CB2_InitUiMainMenuFromTitleScreen();
    DestroyTask(taskId);
}

static void MainMenu_InitializeAndSaveCallback(MainCallback callback, enum MainMenuModes mode)
{
    if (AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }

    MainMenu_SetMode(mode);
    SaveCallbackToMainMenu(callback);
    SetMainCallback2(MainMenu_SetupCallback);
}

static bool32 AllocateStructs(void)
{
    sMainMenuLists = AllocZeroed(sizeof(struct MainMenuLists));
    sMainMenuState = AllocZeroed(sizeof(struct MainMenuState));
    sMainMenuSprites = AllocZeroed(sizeof(struct MainMenuSprites));

    return (sMainMenuState == NULL
            && sMainMenuLists == NULL
            && sMainMenuSprites == NULL
           );
}

static void MainMenu_SetupCallback(void)
{
    switch (gMain.state)
    {
        case 0:
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            FreeSpritePalettesResetSpriteData();
            ResetPaletteFade();
            ResetTasks();
            gMain.state++;
            break;
        case 2:
            MainMenu_InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            gMain.state++;
            break;
        case 4:
            ResetSpriteIds();
            LoadSpritePalette(&sMainMenuInterfaceSpritePalette);
            gMain.state++;
            break;
        case 5:
            u32 color = (MainMenu_GetMode() == MAINMENU_MODE_TRAINER_CARD) ? RGB_BLACK : RGB_WHITEALPHA;
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, color);
            gMain.state++;
            break;
        case 6:
            CalculateAllStatPercent();
            MainMenu_SetUp(0);
            PrintMainMenuImageHeader();
            PrintGymLeaders();
            gMain.state++;
            break;
        case 7:
            SetVBlankCallback(MainMenu_VBlankCB);
            SetMainCallback2(MainMenu_MainCB);
            PrintMenuCursor();
            PrintCompletionIcon();
            break;
    }
}

static void MainMenu_InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (MainMenu_InitializeBackgrounds(TRUE))
        LoadGraphics();
    else
        FadescreenAndExitGracefully();
}

static void MainMenu_InitWindows(bool32 isEraseMode)
{
    enum MainMenuWindows windowId;

    if (isEraseMode)
        InitWindows(sMainMenuWindowEraseTemplates);
    else
        InitWindows(sMainMenuWindowContinueTemplates);

    DeactivateAllTextPrinters();

    for (windowId = 0; windowId < MAINMENU_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void MainMenu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void MainMenu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool32 MainMenu_InitializeBackgrounds(bool32 isFirst)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs(TRUE);

    return TRUE;
}

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sMainMenuTilesLUT[backgroundId] == NULL || sMainMenuTilemapLUT[backgroundId] == NULL);
}

static bool32 DebugShouldSkipBg(u32 bg)
{
    bool32 skipBg[BG_MAINMENU_COUNT] =
    {
        [BG0_MAINMENU_TEXT] = FALSE,
        [BG1_MAINMENU_STATS] = FALSE,
        [BG2_MAINMENU_SHADOW] = FALSE,
        [BG3_MAINMENU_GENERAL] = FALSE,
    };

    return skipBg[bg];
}

static bool32 AllocZeroedTilemapBuffers(void)
{
    enum MainMenuBackgrounds backgroundId;

    for (backgroundId = BG0_MAINMENU_TEXT; backgroundId < BG_MAINMENU_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(bool32 isFirst)
{
    enum MainMenuBackgrounds backgroundId;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMainMenuBgTemplates, NELEMS(sMainMenuBgTemplates));

    for (backgroundId = BG0_MAINMENU_TEXT; backgroundId < BG_MAINMENU_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }

    SetBackgroundTransparency();
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG1_ON |DISPCNT_BG2_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT1_BG2);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(12, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
}

static void SetScheduleBgs(enum MainMenuBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void LoadGraphics(void)
{
    enum MainMenuBackgrounds backgroundId;
    ResetTempTileDataBuffers();

    for (backgroundId = BG0_MAINMENU_TEXT; backgroundId < BG_MAINMENU_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId,sMainMenuTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId,sMainMenuTilemapLUT[backgroundId],0,0);
    }
    LoadMainMenuPalettes();
}

static void LoadMainMenuPalettes(void)
{
    LoadPalette(sMainMenuPalettesLUT[GetVisualColor()], PAL_SLOT_MAINMENU_UI, PLTT_SIZE_4BPP);
    LoadPalette(mainMenuPalettesText, PAL_SLOT_MAINMENU_TEXT, PLTT_SIZE_4BPP);
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(sMainMenuState->savedCallback);
    FreeResources();
    DestroyTask(taskId);
}

static void FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(MainMenu_VBlankCB);
    SetMainCallback2(MainMenu_MainCB);
}

static void FreeResources(void)
{
    FreeAllSpritePalettes();
    FreeStructs();
    FreeBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void FreeStructs(void)
{
    if (sMainMenuState != NULL)
        Free(sMainMenuState);

    if (sMainMenuLists != NULL)
        Free(sMainMenuLists);

    if (sMainMenuSprites != NULL)
        Free(sMainMenuSprites);
}

static void SwitchMode(u8 taskId)
{
    bool32 isErase = IsMainMenuInEraseMode();

    if (isErase)
        MainMenu_SetMode(MAINMENU_MODE_CONTINUE);
    else
        SetEraseMode();

    if (IsMainMenuInEraseMode())
        SetCursorPosition(MAINMENU_ERASE_NO);
    else
        SetCursorPosition(MAINMENU_ERASE);

    for (enum MainMenuWindows windowId = 0; windowId < MAINMENU_WINDOW_COUNT; windowId++)
    {
        ClearWindowCopyToVram(windowId);
        RemoveWindow(windowId);
    }

    FreeAllWindowBuffers();
    Free(sBgTilemapBuffer[BG0_MAINMENU_TEXT]);
    sBgTilemapBuffer[BG0_MAINMENU_TEXT] = AllocZeroed(BG_SCREEN_SIZE);
    memset(sBgTilemapBuffer[BG0_MAINMENU_TEXT],0,BG_SCREEN_SIZE);
    ScheduleBgCopyTilemapToVram(BG0_MAINMENU_TEXT);

    MainMenu_SetUp(taskId);
}

static void ToggleStatsBackground(void)
{
    if (IsMainMenuInEraseMode())
        HideBg(BG1_MAINMENU_STATS);
    else
        ShowBg(BG1_MAINMENU_STATS);
}

static void MainMenu_SetUp(u8 taskId)
{
    MainMenu_InitWindows(IsMainMenuInEraseMode());

    ToggleStatsBackground();
    PrintMainMenuTextHeader();
    PrintBodyContent();
    PrintMainMenuContinueHelpBar();
    PrintMainMenuOptions();
    PrintMainMenuOptionsBackground();

    gTasks[taskId].func = Task_MainMenuInput;
}

static void PrintBodyContent(void)
{
    if (IsMainMenuInEraseMode())
        PrintMainMenuEraseMessage();
    else
        PrintMainMenuContinueStats();
}

static const u8 sOptionCount[] =
{
    [MAINMENU_MODE_CONTINUE] = MAINMENU_MENU_COUNT,
    [MAINMENU_MODE_ERASE] =  MAINMENU_ERASE_COUNT,
    [MAINMENU_MODE_TRAINER_CARD] = TRAINERCARD_TOTAL_COUNT,
};

static const u8 sTextHorizontalPosition[] =
{
    [MAINMENU_MODE_CONTINUE] = 10,
    [MAINMENU_MODE_ERASE] =  5,
    [MAINMENU_MODE_TRAINER_CARD] = 40,
};

static u8 MainMenu_SetTextHorizontalPosition(enum MainMenuModes mode, enum MainMenuWindows windowId, u32 fontId, u32 optionIndex)
{
    if (mode != MAINMENU_MODE_TRAINER_CARD)
        return sTextHorizontalPosition[mode];

    if ((optionIndex % 2) == 0)
        return sTextHorizontalPosition[mode];

    u32 value = (optionIndex == TRAINERCARD_MONEY_VALUE) ? GetMoney(&gSaveBlock1Ptr->money) : GetFrontierBattlePoints();
    u32 numDigits = CountDigits(value);

    u8 bufferBPDigits[] = {0,76,72,68,64};
    u8 bufferMoneyDigits[] = {0,73,68,63,58,53,48,43,38};

    if (optionIndex == TRAINERCARD_MONEY_VALUE)
        return sTextHorizontalPosition[mode] + bufferMoneyDigits[numDigits];
    else
        return sTextHorizontalPosition[mode] + bufferBPDigits[numDigits];
}

static u8 MainMenu_SetTextVerticalPosition(u32 y, enum MainMenuModes mode, u32 optionIndex, u32 letterHeight)
{
    if (mode != MAINMENU_MODE_TRAINER_CARD)
        return (y += MAINMENU_OPTION_BOTTOM_PADDING + letterHeight);

    if ((optionIndex % 2) == 0)
        return y;

    return (y += MAINMENU_OPTION_BOTTOM_PADDING + letterHeight);
}

static bool8 ShouldSkipBP(enum MainMenuModes mode, u32 optionIndex, bool32 isBg)
{
    if (mode != MAINMENU_MODE_TRAINER_CARD)
        return FALSE;

    if (VarGet(VAR_STORYLINE_STATE) >= STORY_RESTORATION_1_COMPLETE)
        return FALSE;

    if (isBg == TRUE)
        return (optionIndex > 0);

    return (optionIndex > TRAINERCARD_MONEY_VALUE);
}

static void PrintMainMenuOptions(void)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_OPTIONS;
    u32 fontId = FONT_MAINMENU_OPTIONS;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterHeight = GetFontAttribute(fontId,FONTATTR_MAX_LETTER_HEIGHT);
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_WHITE_MENU];
    u32 y = 8;
    enum MainMenuModes mode = MainMenu_GetMode();
    //u32 x = sTextHorizontalPosition[mode];
    u32 optionCount = sOptionCount[mode];

    SetMoney(&gSaveBlock1Ptr->money,10);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    for (enum MainMenuContinueMenuOptions optionIndex = MAINMENU_CONTINUE; optionIndex < optionCount; optionIndex++)
    {
        if (ShouldSkipBP(mode,optionIndex,FALSE))
            break;

        BufferOptionsText(gStringVar4, mode, optionIndex);
        u32 x = MainMenu_SetTextHorizontalPosition(mode,windowId,fontId, optionIndex);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);

        y = MainMenu_SetTextVerticalPosition(y, mode, optionIndex, letterHeight);
    }

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void BufferOptionsText(u8* dest, enum MainMenuModes mode, enum MainMenuContinueMenuOptions optionIndex)
{
    switch (mode)
    {
        default:
        case MAINMENU_MODE_CONTINUE:
            StringCopy(dest,sMainMenuOptionNameLUT[optionIndex]);
            break;
        case MAINMENU_MODE_ERASE:
            const u8* text = (optionIndex == 0) ? gText_No : gText_Yes;
            StringCopy(dest,text);
            break;
        case MAINMENU_MODE_TRAINER_CARD:
            u32 money = GetMoney(&gSaveBlock1Ptr->money);
            u32 points = GetFrontierBattlePoints();
            ConvertIntToDecimalStringN(gStringVar1,money,STR_CONV_MODE_LEFT_ALIGN,CountDigits(money));
            ConvertIntToDecimalStringN(gStringVar2,points,STR_CONV_MODE_LEFT_ALIGN,CountDigits(points));
            StringExpandPlaceholders(dest, sTrainerCardsLUT[optionIndex]);
            break;
    }
}

static void PrintMainMenuTextHeader(void)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_HEADER;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PrintPlaytime(windowId);
    PrintPlayerName(windowId);
    PrintTimeOfDaySprite();
    CopyWindowToVram(windowId, COPYWIN_GFX);

    PrintMainMenuContinueInfo();
}

static void PrintMainMenuImageHeader(void)
{
    PrintPlayerIcon();
    LoadMonIconPalettes();
    PrintPlayerParty();
}

static void PrintPlayerName(enum MainMenuWindows windowId)
{
    u32 fontId = FONT_MAINMENU_HEADER;
    u32 x = 3;
    u32 y = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_WHITE_HEADER];
    u32 tid = (gSaveBlock2Ptr->playerTrainerId[1] << 8) | gSaveBlock2Ptr->playerTrainerId[0];
    u32 sid = (gSaveBlock2Ptr->playerTrainerId[3] << 8) | gSaveBlock2Ptr->playerTrainerId[2];

    ConvertIntToDecimalStringN(gStringVar2,tid,STR_CONV_MODE_LEADING_ZEROS,TRAINER_ID_LENGTH + 1);
    ConvertIntToDecimalStringN(gStringVar3,sid,STR_CONV_MODE_LEADING_ZEROS,TRAINER_ID_LENGTH + 1);
    StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("{PLAYER} ({STR_VAR_2}{STR_VAR_3})"));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
}

static const u8 sText_Playtime[] =_("Playtime:  ");

static void PrintPlaytime(enum MainMenuWindows windowId)
{
    u32 fontId = FONT_MAINMENU_HEADER;
    u32 y = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_WHITE_HEADER];
    u32 totalWidth, x;

    ConvertIntToDecimalStringN(gStringVar4, gSaveBlock2Ptr->playTimeHours, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringAppend(gStringVar4, COMPOUND_STRING(": "));
    ConvertIntToDecimalStringN(gStringVar1, gSaveBlock2Ptr->playTimeMinutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringAppend(gStringVar4, gStringVar1);

    totalWidth = GetStringWidth(fontId, sText_Playtime, letterSpacing) + GetStringWidth(fontId, gStringVar4, letterSpacing);

    x = MAINMENU_PLAYTIME_RIGHT_BUFFER - totalWidth;
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, sText_Playtime);
    AddTextPrinterParameterized4(windowId, fontId, x + GetStringWidth(fontId, sText_Playtime, letterSpacing), y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
}

static void PrintTimeOfDaySprite(void)
{
    BlitSymbol_Help(BlitSymbol_ConvertLocalTimeToHelp(), MAINMENU_WINDOW_HEADER, 224, 0);
}

static void ResetSpriteIds(void)
{
    SetPlayerIconSpriteId(SPRITE_NONE);
}

static void PrintMainMenuContinueInfo(void)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_INFO_BAR;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PrintDifficulty(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PrintDifficulty(enum MainMenuWindows windowId)
{
    u32 fontId = FONT_MAINMENU_HELP_BAR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_WHITE];
    u32 x = MAINMENU_DIFFICULTY_RIGHT_BUFFER - BufferGameModeTitleGetWidth(gStringVar4);
    u32 y = 0;

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
}

static bool32 AreSettingsNuzlocke(void)
{
    return (GetBagItemsOption() == BATTLE_OPTION_BAG_ITEMS_NO_ITEMS) &&
        (GetLevelOption() == BATTLE_OPTION_LEVEL_CAP);
}

static bool32 AreSettingsHardcore(void)
{
    return (GetBagItemsOption() == BATTLE_OPTION_BAG_ITEMS_NO_ITEMS) &&
        (GetLevelOption() == BATTLE_OPTION_LEVEL_CAP);
}

static void BufferDifficultyStars(void)
{
    StringCopy(gStringVar4, gText_Blank);
    for (u32 starIndex = 0; starIndex <= CalculateDifficultyStars(); starIndex++)
        StringAppend(gStringVar4, COMPOUND_STRING("{EMOJI_HEART}"));
}

u32 BufferGameModeTitleGetWidth(u8 *dest)
{
    u32 fontId = FONT_MAINMENU_HELP_BAR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    bool32 isNuzlocke = AreSettingsNuzlocke();
    bool32 isHardcore = AreSettingsHardcore();

    BufferDifficultyStars();
    StringAppend(gStringVar4, sMainMenuDifficultyNameLUT[GetBattleDifficulty()]);

    if (isNuzlocke && isHardcore)
        StringAppend(gStringVar4, COMPOUND_STRING(" Hardcore Nuzlocke"));
    else if (isHardcore)
        StringAppend(gStringVar4, COMPOUND_STRING(" Itemless"));
    else if (isNuzlocke)
        StringAppend(gStringVar4, COMPOUND_STRING(" Nuzlocke"));

    return GetStringWidth(fontId, gStringVar4, letterSpacing);
}

u32 CalculateDifficultyStars(void)
{
    //PSF TODO replace with real star calculation by adding up the percived difficulty of all options and putting it over total possible difficulty
    return (Random() % 5) + 1;
}

static void BufferMapName(void)
{
    u32 mapGroup = gSaveBlock1Ptr->location.mapGroup;
    u32 mapNum = gSaveBlock1Ptr->location.mapNum;
    u32 mapSec = Overworld_GetMapHeaderByGroupAndId(mapGroup,mapNum)->regionMapSectionId;

    GetMapName(gStringVar4, mapSec, 0);
}

static void PrintMainMenuContinueStats(void)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_STATS;
    u32 fontId = FONT_MAINMENU_HELP_BAR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT) + MAINMENU_STATS_STAT_BOTTOM_PADDING;
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_BLACK];
    u32 x = 4;
    u32 y = 5;
    enum MainMenuCompletionStats statIndex;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    BufferMapName();
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
    y += letterHeight;

    for (statIndex = MAINMENU_COMPLETION_STORY; statIndex < MAINMENU_COMPLETION_STAT_COUNT; statIndex++)
    {
        if (statIndex == MAINMENU_COMPLETION_OVERALL)
            y--;

        BufferStatName(statIndex);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);

        BufferStatPercent(statIndex);
        AddTextPrinterParameterized4(windowId, fontId, (x + MAINMENU_STATS_STAT_RIGHT_PADDING), y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);

        y += letterHeight;
    }

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void BufferStatName(enum MainMenuCompletionStats statIndex)
{
    StringCopy(gStringVar4,sMainMenuCompletionStatNameLUT[statIndex]);
}

static void CalculateAllStatPercent(void)
{
    for (enum MainMenuCompletionStats statIndex = 0; statIndex < MAINMENU_COMPLETION_STAT_COUNT; statIndex++)
        CalculateStatPercent(statIndex);
}



static void CalculateStatPercent(enum MainMenuCompletionStats statIndex)
{
    RecordCompletionStat(statIndex, completionFuncs[statIndex]());
}

static void BufferStatPercent(enum MainMenuCompletionStats statIndex)
{
    ConvertIntToDecimalStringN(gStringVar4,GetCompletionStat(statIndex),STR_CONV_MODE_LEFT_ALIGN,3);
    StringAppend(gStringVar4,COMPOUND_STRING("%"));
}

static void RecordCompletionStat(u32 statIndex, u32 amount)
{
    sMainMenuState->gameCompletionStats[statIndex] = amount;
}

static u32 GetCompletionStat(u32 statIndex)
{
    return sMainMenuState->gameCompletionStats[statIndex];
}

static u32 CalculateStoryCompletion(void)
{
    u32 completed = VarGet(VAR_STORYLINE_STATE);
    return (10000 * completed) / (STORY_CLEAR * 100);
}

static u32 CalculateTrainerCompletion(void)
{
    u32 defeated = 0;
    u32 total = 0;
    u32 locationIndex;

    for (locationIndex = 0; locationIndex < MAPSEC_NONE; locationIndex++)
    {
        if (locationIndex >=MAPSEC_TRAINER_HILL)
            continue;

        defeated += Glass_OverworldReturnLocationStat(locationIndex, GLASS_LOCATION_DEFEATED);
        total += Glass_OverworldReturnLocationStat(locationIndex, GLASS_LOCATION_TOTAL);
    }

    return ((defeated * 10000) / (total * 100));
}

static u32 CalculatePokedexCompletion(void)
{
    return GetPokedexPercentage();
}

static u32 CalculateQuestsCompletion(void)
{
    return (10000 * CountCompletedQuests()) / (QUEST_COUNT * 100);
}

static u32 CalculateGymCompletion(void)
{
    u32 restoration = (VarGet(VAR_STORYLINE_STATE) > STORY_WON_FINALS) ? 4 : 0;
    u32 denominator = (8 + restoration);

    return ((GetNumberOfBadges() * 10000) / (denominator * 100));
}

static u32 CalculateOverallCompletion(void)
{
    u32 story = GetCompletionStat(MAINMENU_COMPLETION_STORY) * 505;
    u32 trainer = GetCompletionStat(MAINMENU_COMPLETION_TRAINER) * 30;
    u32 pokedex = GetCompletionStat(MAINMENU_COMPLETION_POKEDEX) * 105;
    u32 quests = GetCompletionStat(MAINMENU_COMPLETION_QUESTS) * 255;
    u32 gyms = GetCompletionStat(MAINMENU_COMPLETION_GYMS) * 105;
    return ((story + trainer + pokedex + quests + gyms) / 1000);
}

static void PrintMainMenuContinueHelpBar(void)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_HELP_BAR;
    u32 fontId = FONT_MAINMENU_HELP_BAR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_WHITE];
    u32 x = 4;
    u32 y = 1;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (MainMenu_GetMode() != MAINMENU_MODE_TRAINER_CARD)
        StringCopy(gStringVar1,COMPOUND_STRING("{A_BUTTON} Select Option {B_BUTTON} Return"));
    else
        StringCopy(gStringVar1,COMPOUND_STRING("{B_BUTTON} Return"));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar1);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PrintPlayerIcon(void)
{
    u8 bodyType = gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE];
    u32 graphicsId = GetPlayerAvatarGraphicsIdByStateIdAndGender(PLAYER_AVATAR_STATE_NORMAL,bodyType);
    u32 spriteId = CreateObjectGraphicsSprite(graphicsId, SpriteCallbackDummy, 15, 30, 0);
    gSprites[spriteId].oam.priority = 1;
    SetPlayerIconSpriteId(spriteId);
    UpdatePlayerAnimation();
}

static void PrintGymLeaders(void)
{
    if (MainMenu_GetMode() != MAINMENU_MODE_TRAINER_CARD)
        return;

    const u32 gymLeaders[] =
    {
        TRAINER_BELEN,
        TRAINER_SHINZO,
        TRAINER_EMRYS,
        TRAINER_KAUNA,
        TRAINER_NERIENE,
        TRAINER_DIMU,
        TRAINER_BD,
        TRAINER_AMIARGENTO,
        /*
        TRAINER_RAMESH_IMIN,
        TRAINER_DOYLE_ZENZU_ISLAND,
        TRAINER_KAI_NEWASSHOLEAPPEARS,
        TRAINER_IMELDA,
        */
    };

    const u16 badgeList[] =
    {
        FLAG_BADGE01_GET,
        FLAG_BADGE02_GET,
        FLAG_BADGE03_GET,
        FLAG_BADGE04_GET,
        FLAG_BADGE05_GET,
        FLAG_BADGE06_GET,
        FLAG_BADGE07_GET,
        FLAG_BADGE08_GET,
        /*
        TRAINER_RAMESH_IMIN,
        FLAG_SYS_RESTORED_TOWER_GOLD,
        FLAG_SYS_RESTORED_ARCADE_GOLD,
        FLAG_SYS_RESTORED_DOJO_GOLD,
        FLAG_SYS_RESTORED_FACTORY_GOLD,
        */
    };

    u32 x = 104;
    u32 y = 120;

    for (u32 gymIndex = 0; gymIndex < ARRAY_COUNT(gymLeaders); gymIndex++)
    {
        if (!FlagGet(badgeList[gymIndex]))
            continue;

        u32 vert = ((gymIndex % 2) == 0) ? 4 : 0;
        u32 spriteId = CreateObjectGraphicsSprite(GetOverworldSpriteFromTrainerId(gymLeaders[gymIndex]), SpriteCallbackDummy, x, (y+vert), 0);
        x += 18;
        gSprites[spriteId].oam.priority = 1;
    }
}

static void SetPlayerIconSpriteId(u32 spriteId)
{
    sMainMenuSprites->playerSpriteId = spriteId;
}

static u32 GetPlayerIconSpriteId(void)
{
    return sMainMenuSprites->playerSpriteId;
}

static void PrintPlayerParty(void)
{
    u32 partyIndex;
    u32 x = 48;
    u32 y = 48;

    for (partyIndex = 0; partyIndex < PARTY_SIZE; partyIndex++)
    {
        if(GetMonData(&gPlayerParty[partyIndex], MON_DATA_SPECIES) == SPECIES_NONE)
            break;

        PrintSpeciesIcon(partyIndex, x, y);
        x += 35;
    }
}

static void PrintSpeciesIcon(u32 slot, u32 x, u32 y)
{
    struct Pokemon *mon = &gPlayerParty[slot];
    u32 species = ReturnTransformationIfConditionMet(mon);
    u32 spriteId;

    spriteId = CreateMonIcon(species,SpriteCB_MoveWhenCursorIsContinue,x,y,0,GetMonData(mon,MON_DATA_PERSONALITY));

    gSprites[spriteId].invisible = FALSE;
    CropMonIcon(spriteId);
}

u32 ReturnTransformationIfConditionMet(struct Pokemon* mon)
{
    u32 species = GetMonData(mon, MON_DATA_SPECIES_OR_EGG);
    u32 item, requirement, form, move;

    if (species == SPECIES_EGG)
        return species;

    const struct FormChange *formChangeTable = GetSpeciesFormChanges(species);

    if (formChangeTable == NULL)
        return species;

    for (form = 0; formChangeTable[form].method != FORM_CHANGE_TERMINATOR; form++)
    {
        if (formChangeTable[form].method == FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM || formChangeTable[form].method == FORM_CHANGE_BATTLE_PRIMAL_REVERSION)
        {
            requirement = formChangeTable[form].param1;
            item = GetMonData(mon, MON_DATA_HELD_ITEM);
            if (requirement == item)
                return formChangeTable[form].targetSpecies;
        }

        if (formChangeTable[form].method == FORM_CHANGE_BEGIN_BATTLE)
            return formChangeTable[form].targetSpecies;

        if (formChangeTable[form].method == FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE)
        {
            requirement = formChangeTable[form].param1;

            for (move = 0; move < MAX_MON_MOVES; move++)
            {
                item = GetMonData(mon, MON_DATA_MOVE1 + move);
                if (requirement == item)
                    return formChangeTable[form].targetSpecies;
            }
        }
    }
    return species;
}

void CropMonIcon(u32 spriteId)
{
    gSprites[spriteId].oam.matrixNum  = AllocOamMatrix();
    gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
    gSprites[spriteId].oam.shape      = SPRITE_SHAPE(32x16);
    gSprites[spriteId].oam.size       = SPRITE_SIZE(32x16);

    RequestSpriteCopy(
            (u8 *)gSprites[spriteId].images + POKEMON_ICON_FRAME_SCROLL,
            (u8 *)(OBJ_VRAM0 + gSprites[spriteId].oam.tileNum * TILE_SIZE_4BPP),
            POKEMON_ICON_SPRITE_SIZE
            );
}

void UpdateCroppedMonIcon(struct Sprite *sprite)
{
    u32 pixelscroll;
    s16 frame;

    if (sprite->animDelayCounter != 0)
    {
        sprite->animDelayCounter--;
        return;
    }

    frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;
    if (frame == -1)
        return;

    if (frame == -2)
    {
        sprite->animCmdIndex = 0;
        return;
    }

    pixelscroll = POKEMON_ICON_FRAME_SCROLL + (frame * POKEMON_ICON_FRAME_COUNT * POKEMON_ICON_FRAME_SCROLL);
    RequestSpriteCopy(
            (u8 *)sprite->images + pixelscroll,
            (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
            POKEMON_ICON_SPRITE_SIZE
            );

    sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration;
    sprite->animCmdIndex++;
}

static void SpriteCB_MoveWhenCursorIsContinue(struct Sprite *sprite)
{
    if (IsMainMenuInEraseMode())
        return SpriteCallbackDummy(sprite);

    if (GetCursorPosition() != MAINMENU_CONTINUE)
        return SpriteCallbackDummy(sprite);

    UpdateCroppedMonIcon(sprite);
}

static void Task_MainMenuInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        DecrementPosition();
    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        IncrementPosition();
    if (JOY_NEW(DPAD_LEFT))
        DecrementPosition();
    if (JOY_NEW(DPAD_RIGHT))
        IncrementPosition();
    if (JOY_NEW(B_BUTTON))
        ReturnToPrevious(taskId);
    if (JOY_NEW(A_BUTTON))
        SelectMenuItem(taskId);
}

static void UpdatePlayerAnimation(void)
{
    enum MainMenuContinueMenuOptions cursor;
    u32 anim;

    if (IsMainMenuInEraseMode())
        return;

    cursor = GetCursorPosition();
    anim = (cursor == MAINMENU_CONTINUE) ? ANIM_STD_GO_SOUTH: ANIM_STD_FACE_SOUTH;

    StartSpriteAnim(&gSprites[GetPlayerIconSpriteId()], anim);
}

static void IncrementPosition(void)
{
    if (MainMenu_GetMode() == MAINMENU_MODE_TRAINER_CARD)
        return;

    u32 currentPosition = GetCursorPosition();

    if (IsMainMenuInEraseMode())
        SetCursorPosition(currentPosition ^ 1);
    else
        SetCursorPosition((currentPosition + 1) % MAINMENU_MENU_COUNT);

    UpdatePlayerAnimation();
    PrintMainMenuOptionsBackground();
}

static void DecrementPosition(void)
{
    if (MainMenu_GetMode() == MAINMENU_MODE_TRAINER_CARD)
        return;

    u32 currentPosition = GetCursorPosition();

    if (IsMainMenuInEraseMode())
        SetCursorPosition(currentPosition ^ 1);
    else
        SetCursorPosition((currentPosition + MAINMENU_MENU_COUNT - 1) % MAINMENU_MENU_COUNT);

    UpdatePlayerAnimation();
    PrintMainMenuOptionsBackground();
}

static void SetCursorPosition(u32 position)
{
    sMainMenuLists->cursorPosition = position;
}

static enum MainMenuContinueMenuOptions GetCursorPosition(void)
{
    return sMainMenuLists->cursorPosition;
}

static void MainMenu_SetMode(enum MainMenuModes mode)
{
    sMainMenuState->mode = mode;
}

static void SetEraseMode(void)
{
    MainMenu_SetMode(MAINMENU_MODE_ERASE);
}

static enum MainMenuModes MainMenu_GetMode(void)
{
    return sMainMenuState->mode;
}

static bool8 IsMainMenuInEraseMode(void)
{
    return (MainMenu_GetMode() == MAINMENU_MODE_ERASE);
}

static void MainMenu_ReturnToPrevious(u8 taskId)
{
    u32 color = (MainMenu_GetMode() == MAINMENU_MODE_TRAINER_CARD) ? RGB_BLACK : RGB_WHITEALPHA;
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, color);
    gTasks[taskId].func = Task_ReturnToPreviousScreen;
}

static void ReturnToPrevious(u8 taskId)
{
    PlaySE(SE_SELECT);

    switch (MainMenu_GetMode())
    {
        default:
        case MAINMENU_MODE_TRAINER_CARD:
        case MAINMENU_MODE_CONTINUE:
            MainMenu_ReturnToPrevious(taskId);
            return;
        case MAINMENU_MODE_ERASE:
            SwitchMode(taskId);
            return;
    }
}

static void Task_ReturnToPreviousScreen(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    FreeAllWindowBuffers();
    SetMainCallback2(sMainMenuState->savedCallback);
    DestroyTask(taskId);
}

static void SelectMenuItem(u8 taskId)
{
    PlaySE(SE_SELECT);

    u32 cursor = GetCursorPosition();

    switch (MainMenu_GetMode())
    {
        default:
        case MAINMENU_MODE_TRAINER_CARD:
            MainMenu_ReturnToPrevious(taskId);
            return;
        case MAINMENU_MODE_ERASE:
            eraseFuncsLUT[cursor](taskId);
            return;
        case MAINMENU_MODE_CONTINUE:
            continueFuncsLUT[cursor](taskId);
            return;
    }
}

static void UNUSED ToggleCursorVisibility(void)
{
    u32 cursorSpriteId = GetMenuCursorSpriteId();
    bool32 visibility = gSprites[cursorSpriteId].invisible;

    gSprites[cursorSpriteId].invisible = !(visibility);
}

static void SelectMenuItem_EraseMenu(u8 taskId)
{
    PrintProgressErasingMessage();
    gTasks[taskId].func = Task_ClearSaveData;
}

static void ContinueGame(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_ContinueGame;
}

static void Task_ContinueGame(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    FreeResources();
    SetMainCallback2(CB2_ContinueSavedGame);
    DestroyTask(taskId);
}

static void PrintMainMenuEraseBackground(void)
{
    FillWindowPixelBuffer(MAINMENU_WINDOW_ERASE_BACKGROUND, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    BlitBitmapToWindow(MAINMENU_WINDOW_ERASE_BACKGROUND, eraseBgBitmap, 0, 0, DISPLAY_WIDTH, 32);
    CopyWindowToVram(MAINMENU_WINDOW_ERASE_BACKGROUND, COPYWIN_GFX);
}

static void PrintMainMenuEraseMessage(void)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_ERASE;
    u32 fontId = FONT_MAINMENU_MESSAGE;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_WHITE_MENU];
    u32 y = 0;
    u32 stringWidth, spacing, index;

    PrintMainMenuEraseBackground();

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    for (index = 0; index < 2; index++)
    {
        if (!index)
            StringCopy(gStringVar4,COMPOUND_STRING("ARE YOU SURE THAT YOU WANT TO DELETE"));
        else
            StringCopy(gStringVar4,COMPOUND_STRING("ALL OF YOUR SAVE DATA?"));

        stringWidth = GetStringWidth(fontId,gStringVar4,letterSpacing);
        spacing = ((DISPLAY_WIDTH - stringWidth) / 2);
        AddTextPrinterParameterized4(windowId, fontId, spacing, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
        y += letterHeight;
    }

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PrintProgressErasingMessage(void)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_ERASE;
    u32 fontId = FONT_MAINMENU_MESSAGE;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sMainMenuWindowFontColors[MAINMENU_FONT_COLOR_WHITE];
    u32 x = 16;
    u32 y = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gText_ClearingData);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PrintMainMenuOptionsBackgroundParameterized(u32 optionCount,u32 yStart,u32 yOffset,u32 xOffset,const u8** selectedBg,const u8** optionBg)
{
    enum MainMenuWindows windowId = MAINMENU_WINDOW_BACKGROUND_OPTIONS;
    u32 currentOption = GetCursorPosition();
    u32 y;
    const u8* pixels;
    enum MainMenuModes mode = MainMenu_GetMode();
    u32 width = sMainMenuOptionWidth[mode];

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    for (u32 optionIndex = 0; optionIndex < optionCount; optionIndex++)
    {
        if (ShouldSkipBP(mode, optionIndex,TRUE))
            break;

        y = yStart + (yOffset * optionIndex);
        pixels = (optionIndex == currentOption) ? *selectedBg : *optionBg;

        BlitBitmapToWindow(windowId, pixels, xOffset, y, width, 24);
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PrintMainMenuOptionsBackground(void)
{
    switch (MainMenu_GetMode())
    {
        default:
        case MAINMENU_MODE_TRAINER_CARD:
            PrintMainMenuTrainerCardsBackground();
            break;
        case MAINMENU_MODE_ERASE:
            PrintMainMenuEraseOptionsBackground();
            break;
        case MAINMENU_MODE_CONTINUE:
            PrintMainMenuContinueOptionsBackground();
            break;
    }
}

static void PrintMainMenuContinueOptionsBackground(void)
{
    const u8* selectedBg = mainMenuContinueSelectedBg;
    const u8* optionBg = mainMenuContinueOptionBg;
    u32 optionCount = MAINMENU_MENU_COUNT;
    u32 yStart = 4;
    u32 yOffset = 20;
    u32 xOffset = 0;
    PrintMainMenuOptionsBackgroundParameterized(optionCount,yStart, yOffset, xOffset, &selectedBg, &optionBg);
}

static void PrintMainMenuEraseOptionsBackground(void)
{
    const u8* selectedBg = mainMenuEraseSelectedBg;
    const u8* optionBg = mainMenuEraseOptionBg;
    u32 optionCount = MAINMENU_ERASE_COUNT;
    u32 yStart = 44;
    u32 yOffset = 22;
    u32 xOffset = 72;
    PrintMainMenuOptionsBackgroundParameterized(optionCount,yStart, yOffset, xOffset, &selectedBg, &optionBg);
}

static void PrintMainMenuTrainerCardsBackground(void)
{
    const u8* selectedBg = mainMenuTrainerCardBg;
    const u8* optionBg = mainMenuTrainerCardBg;
    u32 optionCount = MAINMENU_MENU_COUNT;
    u32 yStart = 4;
    u32 yOffset = 20;
    u32 xOffset = 32;
    PrintMainMenuOptionsBackgroundParameterized(optionCount,yStart, yOffset, xOffset, &selectedBg, &optionBg);
}

static void OpenOptionsFromMainMenu(u8 taskId)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_OpenOptionsFromMainMenu;
}

void Task_OpenOptionsFromMainMenu(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(CB2_InitUIOptionMenuFromMainMenu);
    FreeResources();
    DestroyTask(taskId);
}

static u32 CreateMenuSprite(u32 x, u32 y, u16 TileTag, void (*callback)(struct Sprite*))
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag = TileTag;
    TempSpriteTemplate.paletteTag = PAL_MAINMENU_UI_SPRITES;
    TempSpriteTemplate.callback = callback;

    LoadSpritePalette(&sMainMenuInterfaceSpritePalette);
    return CreateSprite(&TempSpriteTemplate,x,y,0);
}

static void PrintMenuCursor(void)
{
    if (MainMenu_GetMode() == MAINMENU_MODE_TRAINER_CARD)
        return;

    // PSF TODO when the player does the Erase Save Data, the cursor appears on the screen for a frame and I don't know why
    u32 spriteId;
    u32 x = 57;
    u32 y = 34;
    u16 TileTag = MAINMENU_GFXTAG_MENUCURSOR;

    LoadMenuCursorSprite();
    spriteId = CreateMenuSprite(x,y,TileTag, SpriteCallback_MenuCursor);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(8x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(8x16);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].subpriority = 0;
    SaveMenuCursorSpriteId(spriteId);
}

static u32 CalculateVerticalMenuCursorPosition(enum MainMenuContinueMenuOptions cursorPosition)
{
    u32 bottomPadding = MAINMENU_OPTIONS_CURSOR_BOTTOM_PADDING * cursorPosition;

    if (IsMainMenuInEraseMode())
        return MAINMENU_OPTIONS_ERASE_CURSOR_Y_POSITION + bottomPadding;
    else
        return MAINMENU_OPTIONS_CURSOR_Y_POSITION + bottomPadding;
}

static u32 CalculateHorizontalMenuCursorPosition(void)
{
    if (IsMainMenuInEraseMode())
        return MAINMENU_OPTIONS_ERASE_CURSOR_X_POSITION;
    else
        return MAINMENU_OPTIONS_CURSOR_X_POSITION;
}

static void LoadMenuCursorSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_MainMenuCursor =
    {
        mainMenuContinueCursor,
        (8*16),
        MAINMENU_GFXTAG_MENUCURSOR,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_MainMenuCursor);
    LoadSpritePalette(&sMainMenuInterfaceSpritePalette);
}

static void SpriteCallback_MenuCursor(struct Sprite* sprite)
{
    sprite->y2 = CalculateVerticalMenuCursorPosition(GetCursorPosition());
    sprite->x2 = CalculateHorizontalMenuCursorPosition();
}

static void SaveMenuCursorSpriteId(u32 spriteId)
{
    sMainMenuSprites->menuCursorSpriteId = spriteId;
}

static u32 GetMenuCursorSpriteId(void)
{
    return sMainMenuSprites->menuCursorSpriteId;
}

static void LoadCompletionIconSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_CompletionSharprise =
    {
        sharpriseSprite,
        (16*16),
        MAINMENU_GFXTAG_COMPLETION,
    };

    struct CompressedSpriteSheet sSpriteSheet_CompletionTide =
    {
        tideSprite,
        (16*16),
        MAINMENU_GFXTAG_COMPLETION,
    };

    if (HasPlayerJoinedTheTide())
        LoadCompressedSpriteSheet(&sSpriteSheet_CompletionTide);
    else
        LoadCompressedSpriteSheet(&sSpriteSheet_CompletionSharprise);
    LoadSpritePalette(&sMainMenuInterfaceSpritePalette);
}

static void PrintCompletionIcon(void)
{
    u32 spriteId;
    u32 x = 91;
    u32 y = 67;
    u16 TileTag = MAINMENU_GFXTAG_COMPLETION;

    if ((!HasPlayerJoinedTheTide()) && (!FlagGet(FLAG_TIMELINE_FALSE)))
        return;

    LoadCompletionIconSprite();
    spriteId = CreateMenuSprite(x,y,TileTag, SpriteCallback_CompletionSprite);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].subpriority = 0;
    SaveMenuCompletionSpriteId(spriteId);
}

static void SaveMenuCompletionSpriteId(u32 spriteId)
{
    sMainMenuSprites->menuCompletionSpriteId = spriteId;
}

static u32 UNUSED GetMenuCompletionSpriteId(void)
{
    return sMainMenuSprites->menuCompletionSpriteId;
}

static void SpriteCallback_CompletionSprite(struct Sprite* sprite)
{
    if (IsMainMenuInEraseMode())
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}
