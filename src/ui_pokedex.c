#include "global.h"
#include "battle_main.h"
#include "battle_util.h"
#include "bg.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "dma3.h"
#include "event_data.h"
#include "field_weather.h"
#include "frontier_pass.h"
#include "gpu_regs.h"
#include "gba/macro.h"
#include "graphics.h"
#include "international_string_util.h"
#include "line_break.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "pokedex.h"
#include "pokemon_icon.h"
#include "qol_field_moves.h"
#include "random.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "trainer_pokemon_sprites.h"
#include "tv.h"
#include "ui_pokedex.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "data/ui_pokedex_type_sprites.h"
#include "data/ui_pokedex_sprite_coordinates.h"
#include "constants/ui_adventure_guide.h"
#include "ui_adventure_guide.h"

static void Pokedex_InitializeAndSaveCallback(MainCallback);
static bool32 AllocateStructs(void);
static void SpeciesGrid_InitWindows(void);
static void ClearAllWindows(void);
static void Pokedex_VBlankCB(void);
static void Pokedex_MainCB(void);
static bool32 Pokedex_InitializeBackgrounds(bool32);
static bool32 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(bool32);
static void SetScheduleBgs(u32);
static void LoadGraphics(void);
static const u32* GetRelevantTiles(u32);
static const u32* GetRelevantTilemap(u32);
static void LoadPokedexPalettes(void);
static void PlaySoundStartFadeQuitApp(u8);
static void Task_WaitFadeAndExitGracefully(u8);
static void FreeResources(void);
static void FreeStructs(void);

static void SpeciesGrid_ChangeSortAndReload(void);
static u32 SpeciesGrid_IncrementSort(void);
static void SpeciesGrid_Reload(void);
static void SpeciesGrid_SetSort(u32);
static const u8 *const SpeciesGrid_GetSortName(void);
static void SpeciesGrid_RestoreSavedSort(void);
static void SpeciesGrid_SetSavedSort(enum PokedexSortOrders sort);
static enum PokedexSortOrders SpeciesGrid_GetSavedSort(void);

static void SpeciesGrid_SetSpeciesCurrentMonList(u32, u32);
static u32 SpeciesGrid_GetSpeciesCurrentMonList(u32);
static void SpeciesGrid_ResetFilteredList(u16*);
static void SpeciesGrid_SortList(void);
static void SpeciesGrid_PopulateList(void);
static void SpeciesGrid_RemoveUltraBeastAndLegendary(u16*);
static void SpeciesGrid_PopulateListAfterSort(u16*);
static void SpeciesGrid_RemoveSpeciesAfterFilter(u16*);
static void SpeciesGrid_PopulateListAfterFilter(u16*);

static void SpeciesGrid_PrintPageName(void);

static void SpeciesGrid_HandleInput(u8);
static void SpeciesGrid_ChangeColumn(bool32);
static void SpeciesGrid_ChangeRow(bool32);
static void SpeciesGrid_MoveMonCursor(void);
static u32 SpeciesGrid_GetCurrentMonCursorCoordinateX(void);
static u32 SpeciesGrid_GetCurrentMonCursorCoordinateY(void);
static void SpeciesGrid_SetCurrentCursorCoordinateXPlayCursorSound(u32);
static void SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(u32);
static void SpeciesGrid_SetCurrentCursorCoordinateY(u32);
static void SpeciesGrid_SetCurrentCursorCoordinateX(u32);
static void SpeciesGrid_SanitizePosition(s32);
static void SpeciesGrid_SanitizeMonCursorXCoordinate(s32);
static void SpeciesGrid_SanitizeMonCursorYCoordinate(s32);
static u32 SpeciesGrid_GetSizeForRow(u32);
static void SpeciesGrid_FixCursorXCoordinate(void);
static bool32 SpeciesGrid_IsMonCursorOnFirstRow(u32);
static bool32 SpeciesGrid_IsMonCursorOnFirstColumn(u32);
static u32 SpeciesGrid_ConvertMonCursorToHorizontalPosition(void);
static u32 SpeciesGrid_ConvertMonCursorToVerticalPosition(void);
static void SpeciesGrid_ResetCurrentPositionInMonList(void);
static u32 SpeciesGrid_GetCurrentPositionInMonList(void);
static void SpeciesGrid_SetCurrentPositionInMonList(s32);
static u32 SpeciesGrid_GetNumberCaughtMonsInList(void);
static void SpeciesGrid_IncreaseNumberCaughtMonsInList(u32);
static void SpeciesGrid_ResetNumberCaughtMonsInList(void);
static u32 SpeciesGrid_GetNumberMonsInList(void);
static u32 SpeciesGrid_CalculateCaughtDenominator(void);
static void SpeciesGrid_SetNumberMonsInList(u32);
static void SpeciesGrid_ResetCurrentMonList(void);
static void SpeciesGrid_SetCurrentSpeciesFromCursorPosition(void);
static void SpeciesGrid_ResetCurrentMonCursorCoordinates(void);
static void SpeciesGrid_PrintMonCursor(void);
static void SpeciesGrid_LoadMonCursorSprite(void);

static void SpeciesGrid_SanitizeCurrentRowNumber(s32);
static void SpeciesGrid_ResetCurrentRowNumber(void);
static u32 SpeciesGrid_GetNumberRows(void);
static u32 SpeciesGrid_GetCurrentRowNumber(void);
static void SpeciesGrid_SetCurrentRowNumber(u32);
static u32 SpeciesGrid_CalculateNumberRows(void);
static void SpeciesGrid_SetNumberRows(u32);
static void SpeciesGrid_CalculateAndSetNumberRows(void);

static void SpriteCallback_Scrollbar(struct Sprite* sprite);
static u32 CalculateScrollbarYPosition(void);
static u32 SpeciesGrid_CalculateScrollbarYPosition(void);
static bool32 ShouldScrollbarBeInvisible(void);
static void SpeciesGrid_LoadScrollbarSprite(void);
static void SpeciesGrid_ResetInterfaceSpriteIds(void);
static void SpeciesGrid_SaveInterfaceSpriteId(u32, u32);

static void SpeciesGrid_SetCurrentSpecies(u32);
static void SpeciesData_ShowSelectedMon(void);
static void SpeciesData_UpdateShownData(void);

static void SpeciesData_SetHeaderSpriteVisibility(bool32);
static void SpeciesData_PrintManageHeaderSprite(u32 species);

static void SpeciesData_PrintSpeciesName(u32);
static void SpeciesData_PrintSpeciesNumAndDesc(u32 shownSpecies, u32* padding);
static void SpeciesData_PrintCaughtFormName(void);
static void SpeciesData_PrintCaught(enum PokedexPageWindows windowId, u32 fontId, u32 x, u32 y, u32 letterSpacing, u32 lineSpacing);
static void SpeciesData_PrintFormName(u32 species, u32* padding);
static void SpeciesData_PrintHeader(u32);

static u32 SpeciesData_CreateMonSprite(u32);

static void SpeciesData_CreateTypeSprite(void);
static u32 SpeciesData_GetMonType(u32, u32);
static void SpeciesData_SetTypeSpriteVisibility(u32, bool32);
static void SpeciesData_SetTypeSpritePositionAndPalette(u32, u32, u32, u32);
static void SpeciesData_SetTypeSpriteAttributes(u32);
static void SpeciesData_SaveTypeSpriteId(u32, u32);

static void SpeciesData_SaveCaptureIndicatorSpriteId(u32);
static u32 SpeciesData_GetCaptureIndicatorSpriteId(void);

static void SpeciesGrid_PrintGrid(void);
static void SpeciesGrid_PrintMonNumber(u32, u32, u32);
static void SpeciesGrid_SetMonIconPriority(enum ParentsDisplayRows row, enum ParentsDisplayRows column, enum PokedexPages page);
static void SpeciesGrid_SaveMonIconSpriteId(enum ParentsDisplayRows row, u32 column, u32 spriteId);
static u32 SpeciesGrid_GetOnScreenSpeciesId(enum SpeciesListRows row, enum SpeciesListColumns column);
static void SpeciesGrid_SaveOnScreenSpeciesId(u32, u32, u32);
static void SpeciesGrid_UpdateOnScreenSpeciesId(void);
static void SpeciesGrid_RemoveMonIcon(enum ParentsDisplayRows rowIndex, enum SpeciesListColumns columnIndex);

static void SpeciesGrid_PrintCaptureIndicator(enum SpeciesListRows rowIndex, enum SpeciesListColumns columnIndex, u32 species);
static void SpeciesGrid_LoadCaptureIndicatorSprite(void);
static u32 SpeciesGrid_GetCaptureIndicatorSpriteId(u32 row, u32 column);
static void SpeciesGrid_SaveCaptureIndicatorSpriteId(u32 row, u32 column, u32 spriteId);
static void SpeciesGrid_RemoveCaptureIndicator(enum ParentsDisplayRows rowIndex, enum SpeciesListColumns columnIndex);

static void SpeciesMenu_InitalizeMenu(u32);
static void SpeciesMenu_PopulateMenuItems(void);
static u32 SpeciesMenu_ReturnMenuXPosition(void);
static u32 SpeciesMenu_ReturnMenuYPosition(void);
static u32 SpeciesMenu_GetMenuWidth(const u8*);
static u32 SpeciesMenu_GetMenuHeight(void);
static void SpeciesMenu_SetRelationships(u32);
static bool32 SpeciesMenu_GetRelationships(u32);
static u32 SpeciesMenu_GetNumberRemovedMenuItems(void);
static u32 SpeciesMenu_GetNumberItems(u32);
static bool32 SpeciesMenu_ShouldSkipSubpage(u32, u32);
static u32 SpeciesMenu_GetItemId(u32);
static void SpeciesMenu_CreateMenu(void);
static void SpeciesMenu_PrintText(u32, u32);
static void SpeciesMenu_WindowFunc_DrawStandardFrame(u8, u8, u8, u8, u8, u8);
static void SpeciesMenu_DrawWindowFrame(u32);
static void SpeciesMenu_PrintCursorAndText(u32, u32);
static void SpeciesMenu_OpenMenu(u8);
static void SpeciesMenu_RemoveMenu(u8);

static void Task_SpeciesMenu_HandleInput(u8);
static void SpeciesMenu_ChangeMenuPosition(s32);
static void SpeciesMenu_PrintCursor(u32);
static u32 SpeciesMenu_CalculateCursorYPosition(void);
static bool32 SpeciesFilter_ShouldShowUltraBeastLegendary(u32);
static void SpeciesMenu_SetMenuPosition(u32);
static bool32 SpeciesFilter_GetActiveFilters(bool32[]);
static void PokedexPage_PrintPageName(enum PokedexPages pageId);
static void SpeciesFilter_PrintPageName(void);
static void PokedexPage_StripSpaces(u8 *text);
u8* GenericHelpBarText(void);
static u32 SpeciesFilter_CalculateScrollbarYPosition(void);
static bool32 SpeciesFilter_EditPage_ShouldScrollbarBeVisible(void);
static void DebugSpeciesGrid_ApplyFiltersAndReload(void);
static void SpeciesGrid_SetCursorPositionFromSavedSpecies(void);
static u32 SpeciesGrid_GetSavedSpecies(void);
static u32 SpeciesGrid_SanitizeSavedSpecies(void);
static void SpeciesGrid_SetSavedSpecies(u32 species);

struct FiltersSet *sFilterSet = NULL;
struct FiltersSet *sFilterSetTemp = NULL;
struct SpeciesListMenu *sSpeciesListMenu = NULL;
EWRAM_DATA struct PokedexState *sPokedexState = NULL;
EWRAM_DATA struct PokedexGridStaticResources *sPokedexGridResources = {0};
EWRAM_DATA struct PokedexLists *sPokedexLists = NULL;

static EWRAM_DATA u8 *sBgTilemapBuffer[BG_POKEDEX_COUNT] = {NULL};
bool8 firstOpen;

static const struct BgTemplate sPokedexBgTemplates[] =
{
    {
        .bg = BG0_POKEDEX_TEXT_CONTENT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .charBaseIndex = 1,
        .mapBaseIndex = 25,
        .priority = 2,
    },
    {
        .bg = BG3_POKEDEX_BACKGROUND,
        .charBaseIndex = 3,
        .mapBaseIndex = 27,
        .priority = 3
    },
};

static const struct WindowTemplate sPokedexWindowTemplates[] =
{
    [POKEDEX_PAGE_WINDOW_HEADER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [POKEDEX_PAGE_WINDOW_MON_DATA] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 10,
        .height = 8,
        .paletteNum = 15,
        .baseBlock = 1 + (30*2),
    },
    [POKEDEX_PAGE_WINDOW_GETSEEN_DATA] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 16,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1 + (30*2) + (10*8),
    },
    [POKEDEX_PAGE_WINDOW_GRID] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 11,
        .tilemapTop = 5,
        .width = 16,
        .height = 13,
        .paletteNum = 15,
        .baseBlock = 1 + (30*2) + (10*8) + (10*2),
    },
    [POKEDEX_PAGE_WINDOW_HELP_BAR] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = (18),
        .width = (30),
        .height = (2),
        .paletteNum = 15,
        .baseBlock = 1 + (30*2) + (10*8) + (10*2) + (13*16),
    },
    DUMMY_WIN_TEMPLATE,
};

extern const u16 gResidoPokedexOrder_Numerical[];
extern const u16 gResidoPokedexOrder_Alphabetical[];
extern const u16 gResidoPokedexOrder_Height[];
extern const u16 gResidoPokedexOrder_Weight[];
extern const u8 maxOptionLUT[];
extern const u8 nullOptionLUT[];

static const u8 sSpeciesListMenuFrameGfx[] = INCBIN_U8("graphics/pokedex/ui/species_list/menu_frame.4bpp");

static const u16 sTypePalettes[] = INCBIN_U16("graphics/types/types.gbapal");
static const u16 pokedexPalettesText[] = INCBIN_U16("graphics/pokedex/ui/palettes/text.gbapal");

static const u32 pokedexSpeciesListTiles[] = INCBIN_U32("graphics/pokedex/ui/species_list_screen.4bpp.smol");
static const u32 pokedexSpeciesListTilemap[] = INCBIN_U32("graphics/pokedex/ui/species_list_screen.bin.smolTM");
static const u32 pokedexFilterListTiles[] = INCBIN_U32("graphics/pokedex/ui/filter/filter_list_screen.4bpp.smol");
static const u32 pokedexFilterListTilemap[] = INCBIN_U32("graphics/pokedex/ui/filter/filter_list_screen.bin.smolTM");
static const u32 pokedexPageMovesTiles[] = INCBIN_U32("graphics/pokedex/ui/page/movesBgModifiedTiles.4bpp.smol");
static const u32 pokedexPageMovesTilemap[] = INCBIN_U32("graphics/pokedex/ui/page/movesBgModifiedTiles.bin.smolTM");
static const u32 pokedexPageEvolutionTiles[] = INCBIN_U32("graphics/pokedex/ui/page/evoBgModifiedTiles.4bpp.smol");
static const u32 pokedexPageEvolutionTilemap[] = INCBIN_U32("graphics/pokedex/ui/page/evoBgModifiedTiles.bin.smolTM");
static const u32 pokedexPageStatsTiles[] = INCBIN_U32("graphics/pokedex/ui/page/statsBgModifiedTiles.4bpp.smol");
static const u32 pokedexPageStatsTilemap[] = INCBIN_U32("graphics/pokedex/ui/page/statsBgModifiedTiles.bin.smolTM");
static const u32 pokedexPageInformationTiles[] = INCBIN_U32("graphics/pokedex/ui/page/informationBgModifiedTiles.4bpp.smol");
static const u32 pokedexPageInformationTilemap[] = INCBIN_U32("graphics/pokedex/ui/page/informationBgModifiedTiles.bin.smolTM");
static const u32 speciesListMonCursor[] = INCBIN_U32("graphics/pokedex/ui/species_list/mon.4bpp.smol");
static const u32 speciesListScrollbar[] = INCBIN_U32("graphics/pokedex/ui/species_list/scrollbar.4bpp.smol");
static const u32 pageScrollbar[] = INCBIN_U32("graphics/pokedex/ui/page/scrollbar.4bpp.smol");
static const u32 speciesListCaptureIndicator[] = INCBIN_U32("graphics/pokedex/ui/species_list/folder.4bpp.smol");
static const u32 speciesListUncaughtIndicator[] = INCBIN_U32("graphics/pokedex/ui/species_list/emptyfolder.4bpp.smol");
static const u32 speciesListCaptureIndicator_Alola[] = INCBIN_U32("graphics/pokedex/ui/species_list/folder_alola.4bpp.smol");
static const u32 speciesListUncaughtIndicator_Alola[] = INCBIN_U32("graphics/pokedex/ui/species_list/emptyfolder_alola.4bpp.smol");
static const u32 speciesListFileIcon[] = INCBIN_U32("graphics/pokedex/ui/species_list/file.4bpp.smol");
static const u8 speciesListMenuCursor[] = INCBIN_U8("graphics/pokedex/ui/species_list/menu_cursor_bmp.4bpp");
static const u32 sTypes_Gfx[] = INCBIN_U32("graphics/ui_menus/types/13x11/types.4bpp.smol");

static const struct CompressedSpriteSheet sSpriteSheet_Type13x11 =
{
    .data = sTypes_Gfx,
    .size = NUMBER_OF_MON_TYPES * (16 * 16),
    .tag = TAG_TERA_TYPE
};

static const u8 *const sHelpBarTexts[] =
{
    [POKEDEX_PAGE_SPECIES_LIST] = COMPOUND_STRING("{A_BUTTON} Explore {B_BUTTON} Close {SELECT_BUTTON} Filter {START_BUTTON} Sort"),
    [POKEDEX_PAGE_INFORMATION] = COMPOUND_STRING("{A_BUTTON} Play Cry {R_BUTTON} Next Page {B_BUTTON} Return"),
    [POKEDEX_PAGE_STATS] = COMPOUND_STRING("{R_BUTTON} Next Page {B_BUTTON} Return"),
    [POKEDEX_PAGE_EVOLUTION] = COMPOUND_STRING("{A_BUTTON} Details {R_BUTTON} Next Page {B_BUTTON} Return"),
    [POKEDEX_PAGE_FORMS] = COMPOUND_STRING("{A_BUTTON} Details {R_BUTTON} Next Page {B_BUTTON} Return"),
    //[POKEDEX_PAGE_LOCATION] = COMPOUND_STRING("{A_BUTTON} Details {R_BUTTON} Next Page {B_BUTTON} Return"),
    [POKEDEX_PAGE_LOCATION] = COMPOUND_STRING("This page isn't done."),
    [POKEDEX_PAGE_MOVES] = COMPOUND_STRING("{R_BUTTON} Next Page {B_BUTTON} Return"),
    [POKEDEX_PAGE_WEAKNESSES] = COMPOUND_STRING("{A_BUTTON} Toggle Legend {R_BUTTON} Next Page {B_BUTTON} Return"),
    [POKEDEX_PAGE_FILTER] = COMPOUND_STRING("{A_BUTTON} Edit {B_BUTTON} Apply {START_BUTTON} Erase All"),
};

static const u8 *const sSpeciesMenuTexts[] =
{
    [POKEDEX_PAGE_INFORMATION]  = COMPOUND_STRING("Information"),
    [POKEDEX_PAGE_STATS]        = COMPOUND_STRING("Stats"),
    [POKEDEX_PAGE_EVOLUTION]    = COMPOUND_STRING("Evolution"),
    [POKEDEX_PAGE_FORMS]        = COMPOUND_STRING("Forms"),
    [POKEDEX_PAGE_LOCATION]     = COMPOUND_STRING("Location"),
    [POKEDEX_PAGE_MOVES]        = COMPOUND_STRING("Moves"),
    [POKEDEX_PAGE_WEAKNESSES]   = COMPOUND_STRING("Weaknesses"),
};

static const u8 *const sortOrderNames[] =
{
    [ORDER_NUMERICAL]    = gText_Blank,
    [ORDER_ALPHABETICAL] = COMPOUND_STRING("&sort=alpha"),
    [ORDER_HEAVIEST]     = COMPOUND_STRING("&sort=heavy"),
    [ORDER_LIGHTEST]     = COMPOUND_STRING("&sort=light"),
    [ORDER_TALLEST]      = COMPOUND_STRING("&sort=tall"),
    [ORDER_SMALLEST]     = COMPOUND_STRING("&sort=short"),
};

const u8 sPokedexWindowFontColors[][3] =
{
    [POKEDEX_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [POKEDEX_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
    [POKEDEX_FONT_COLOR_MENU] = {0,1,0},
};

void SaveCallbackToPokedex(MainCallback callback)
{
    sPokedexState->savedCallback = callback;
}

void CB2_PokedexFromStartMenu(void)
{
    Pokedex_InitializeAndSaveCallback(CB2_StartMenu_ReturnToUI);
}

static void Pokedex_ReturnFromAdventureGuide(void)
{
    Pokedex_InitializeAndSaveCallback(gMain.savedCallback);
}

static void Pokedex_InitializeAndSaveCallback(MainCallback callback)
{
    u32 targetGuide = GUIDE_POKEDEX;

    if (!shouldSkipGuide(targetGuide))
    {
        VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN,targetGuide);
        gMain.savedCallback = callback;
        Adventure_Guide_Init(Pokedex_ReturnFromAdventureGuide);
        return;
    }

    if (AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }
    firstOpen = TRUE;
    SaveCallbackToPokedex(CB2_StartMenu_ReturnToUI);
    SetMainCallback2(Pokedex_SetupCallback);
}

static bool32 AllocateStructs(void)
{
    sPokedexLists = AllocZeroed(sizeof(struct PokedexLists));
    sPokedexState = AllocZeroed(sizeof(struct PokedexState));
    sPokedexGridResources = AllocZeroed(sizeof(struct PokedexGridStaticResources));
    sSpeciesListMenu = AllocZeroed(sizeof(struct SpeciesListMenu));
    sFilterSet = AllocZeroed(sizeof(struct FiltersSet));
    sFilterSetTemp = AllocZeroed(sizeof(struct FiltersSet));

    return (sPokedexState == NULL
            && sPokedexLists == NULL
            && sPokedexGridResources == NULL
            && sSpeciesListMenu == NULL
            && sFilterSet == NULL
            && sFilterSetTemp == NULL
            );
}

void Pokedex_SetupCallback(void)
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
            ResetGpuRegsAndBgs();
            ResetPaletteFade();
            ResetTasks();
            FreeSpritePalettesResetSpriteData();
            gMain.state++;
            break;
        case 2:
            SetPageAndInputTask(POKEDEX_PAGE_SPECIES_LIST);
            InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            SpeciesGrid_InitWindows();
            gMain.state++;
            break;
        case 4:
            SpeciesGrid_RemoveMonIcons();
            SpeciesData_ResetTypeSpriteId();
            SpeciesGrid_RemoveCaptureIndicators();
            SpeciesGrid_ResetCurrentMonList();
            SpeciesGrid_RestoreSavedSort();
            SpeciesGrid_PopulateList();

            if (SpeciesFilter_GetFilterChangeFlag() || firstOpen)
                SpeciesGrid_ResetCurrentRowNumber();

            gMain.state++;
            break;
        case 5:
            SpeciesGrid_CalculateAndSetNumberRows();
            if (SpeciesFilter_GetFilterChangeFlag())
            {
                SpeciesGrid_ResetCurrentPositionInMonList();
                SpeciesGrid_ResetCurrentMonCursorCoordinates();
            }

            if (firstOpen)
                SpeciesGrid_SetCursorPositionFromSavedSpecies();
            gMain.state++;
            break;
        case 6:
            ClearAllWindows();
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            SpeciesGrid_ResetInterfaceSpriteIds();
            SpeciesGrid_PrintMonCursor();
            SpeciesGrid_PrintScrollbar();
            PrintMenuHeader();
            PrintHelpBar(POKEDEX_PAGE_WINDOW_HELP_BAR);
            LoadTypeSpritesAndPalettes();
            SpeciesData_LoadCaptureIndicatorSprite();
            SpeciesData_UpdateShownData();
            SpeciesData_PrintCaughtFormName();
            LoadMonIconPalettes();
            SpeciesGrid_UpdateOnScreenSpeciesId();
            SpeciesGrid_LoadCaptureIndicatorSprite();
            SpeciesGrid_PrintGrid();
            SpeciesGrid_SetCurrentSpeciesFromCursorPosition();
            if (firstOpen)
            {
                PlaySE(SE_PC_LOGIN);
                IncrementGameStat(GAME_STAT_CHECKED_POKEDEX);
            }
            gMain.state++;
            break;
        case 7:
            firstOpen = FALSE;
            SetVBlankCallback(Pokedex_VBlankCB);
            SetMainCallback2(Pokedex_MainCB);
            break;
    }
}

void FreeSpritePalettesResetSpriteData(void)
{
    ResetSpriteData();
    FreeSpriteTileRanges();
    FreeAllSpritePalettes();
    ClearDma3Requests();
}

void InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Pokedex_InitializeBackgrounds(TRUE))
        LoadGraphics();
    else
        Pokedex_FadescreenAndExitGracefully();
}

static void SpeciesGrid_InitWindows(void)
{
    InitWindows(sPokedexWindowTemplates);
    DeactivateAllTextPrinters();
}

static void ClearAllWindows(void)
{
    for(u32 windowId = 0; windowId < POKEDEX_PAGE_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

void (* const pageInputTaskLUT[])(u8 taskId) =
{
    [POKEDEX_PAGE_SPECIES_LIST] = Task_SpeciesGrid_Input,
    [POKEDEX_PAGE_INFORMATION] = Task_PageInformation_Input,
    [POKEDEX_PAGE_STATS] = Task_PageStats_Input,
    [POKEDEX_PAGE_EVOLUTION] = Task_PageEvolution_Input,
    [POKEDEX_PAGE_FORMS] = Task_PageEvolution_Input,
    [POKEDEX_PAGE_LOCATION] = Task_PageLocation_Input,
    [POKEDEX_PAGE_MOVES] = Task_PageMoves_Input,
    [POKEDEX_PAGE_WEAKNESSES] = Task_PageWeaknesses_Input,
    [POKEDEX_PAGE_FILTER] = Task_SpeciesFilter_Input,
};

void SetPageAndInputTask(enum PokedexPages page)
{
    SetCurrentPage(page);
    CreateTask(pageInputTaskLUT[page],0);
}

static void Pokedex_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Pokedex_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool32 Pokedex_InitializeBackgrounds(bool32 isFirst)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs(TRUE);

    return TRUE;
}
static bool32 AllocZeroedTilemapBuffers(void)
{
    u32 backgroundId;

    for (backgroundId = 0; backgroundId < BG_POKEDEX_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(bool32 isFirst)
{
    u32 backgroundId;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sPokedexBgTemplates, NELEMS(sPokedexBgTemplates));

    for (backgroundId = 0; backgroundId < BG_POKEDEX_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static bool8 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (GetRelevantTiles(backgroundId) == NULL || GetRelevantTilemap(backgroundId) == NULL);
}

static void LoadGraphics(void)
{
    u32 backgroundId;
    ResetTempTileDataBuffers();
    for (backgroundId = BG0_POKEDEX_TEXT_CONTENT; backgroundId < BG_POKEDEX_COUNT; backgroundId++)
    {
        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, GetRelevantTiles(backgroundId), 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, GetRelevantTilemap(backgroundId),0,0);
    }
    LoadPokedexPalettes();
}

static const u32* GetRelevantTiles(u32 backgroundId)
{
    u32 currentPage = GetCurrentPage();

    if (currentPage == POKEDEX_PAGE_MOVES)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexPageMovesTiles;

    if (currentPage == POKEDEX_PAGE_FILTER)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexFilterListTiles;

    if (currentPage == POKEDEX_PAGE_WEAKNESSES)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexFilterListTiles;

    if (currentPage == POKEDEX_PAGE_EVOLUTION || currentPage == POKEDEX_PAGE_FORMS)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexPageEvolutionTiles;

    if (currentPage == POKEDEX_PAGE_STATS)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexPageStatsTiles;

    if (currentPage == POKEDEX_PAGE_INFORMATION)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexPageInformationTiles;

    if (backgroundId == BG3_POKEDEX_BACKGROUND)
        return pokedexSpeciesListTiles;
    else
        return NULL;
}

static const u32* GetRelevantTilemap(u32 backgroundId)
{
    u32 currentPage = GetCurrentPage();

    if (currentPage == POKEDEX_PAGE_INFORMATION)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexPageInformationTilemap;

    if (currentPage == POKEDEX_PAGE_WEAKNESSES)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexFilterListTilemap;

    if (currentPage == POKEDEX_PAGE_STATS)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexPageStatsTilemap;

    if (currentPage == POKEDEX_PAGE_MOVES)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
           return pokedexPageMovesTilemap;

    if (currentPage == POKEDEX_PAGE_FILTER)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexFilterListTilemap;

    if (currentPage == POKEDEX_PAGE_EVOLUTION || currentPage == POKEDEX_PAGE_FORMS)
        if (backgroundId == BG3_POKEDEX_BACKGROUND)
            return pokedexPageEvolutionTilemap;

    if (backgroundId == BG3_POKEDEX_BACKGROUND)
        return pokedexSpeciesListTilemap;
    else
        return NULL;
}

static void LoadPokedexPalettes(void)
{
    LoadPalette(pokedexPalettesDefault, PAL_SLOT_POKEDEX_UI, PLTT_SIZE_4BPP);
    LoadPalette(pokedexPalettesText, PAL_SLOT_POKEDEX_TEXT, PLTT_SIZE_4BPP);
}

void ClearWindowCopyToVram(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void PlaySoundStartFadeQuitApp(u8 taskId)
{
    PlaySE(SE_PC_OFF);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_WaitFadeAndExitGracefully;
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(sPokedexState->savedCallback);
    SpeciesGrid_SetSavedSpecies(SpeciesGrid_GetCurrentSpecies());
    SpeciesGrid_SetSavedSort(SpeciesGrid_GetSort());
    FreeResources();
    DestroyTask(taskId);
}

void Pokedex_FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Pokedex_VBlankCB);
    SetMainCallback2(Pokedex_MainCB);
}

static void FreeResources(void)
{
    SpeciesGrid_RemoveMonCursorSprite();
    SpeciesGrid_RemoveScrollbarSpriteId();
    SpeciesData_RemoveMonSprite();
    SpeciesData_RemoveTypeSprites();
    SpeciesData_RemoveHeaderSprite();
    SpeciesData_RemoveCaptureIndicator();
    SpeciesGrid_RemoveMonIcons();
    SpeciesGrid_RemoveCaptureIndicators();

    FreeSpritePalettesResetSpriteData();

    SpeciesFilter_ResetToDefault();
    FreeStructs();
    FreeBackgrounds();
    FreeAllWindowBuffers();
}

static void FreeStructs(void)
{
    if (sPokedexState != NULL)
        Free(sPokedexState);

    if (sPokedexLists != NULL)
        Free(sPokedexLists);
}

void FreeBackgrounds(void)
{
    u32 backgroundId;

    for (backgroundId = 0; backgroundId < BG_POKEDEX_COUNT; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

static void SpeciesGrid_ChangeSortAndReload(void)
{
    PlaySE(SE_SELECT);
    SpeciesFilter_SetFilterChangeFlag(TRUE);
    SpeciesGrid_SetSort(SpeciesGrid_IncrementSort());
    SpeciesGrid_SortList();
    SpeciesGrid_Reload();
    DebugSpeciesGrid_ApplyFiltersAndReload();
}

static u32 SpeciesGrid_IncrementSort(void)
{
    enum PokedexSortOrders sort = SpeciesGrid_GetSort() + 1;

    if (sort > ORDER_SMALLEST)
        sort = ORDER_NUMERICAL;

    return sort;
}

static void SpeciesGrid_Reload(void)
{
    SpeciesGrid_ResetCurrentPositionInMonList();
    SpeciesGrid_ResetCurrentMonCursorCoordinates();
    SpeciesGrid_ResetCurrentRowNumber();

    SpeciesGrid_UpdateOnScreenSpeciesId();
    SpeciesGrid_PrintGrid();
    SpeciesData_UpdateShownData();
    PrintMenuHeader();
}

const u16* SpeciesGrid_GetSortOrder(enum PokedexSortOrders sort)
{
    switch (sort)
    {
        default:
        case ORDER_NUMERICAL: return gResidoPokedexOrder_Numerical;
        case ORDER_ALPHABETICAL: return gResidoPokedexOrder_Alphabetical;
        case ORDER_HEAVIEST:
        case ORDER_LIGHTEST: return gResidoPokedexOrder_Weight;
        case ORDER_TALLEST:
        case ORDER_SMALLEST: return gResidoPokedexOrder_Height;
    }
}

enum PokedexSortOrders SpeciesGrid_GetSort(void)
{
    return sPokedexState->sortOrder;
}

static void SpeciesGrid_SetSort(u32 sort)
{
    sPokedexState->sortOrder = sort;
}

static const u8 *const SpeciesGrid_GetSortName(void)
{
    return sortOrderNames[SpeciesGrid_GetSort()];
}

static enum PokedexSortOrders SpeciesGrid_GetSavedSort(void)
{
    return gSaveBlock2Ptr->pokedex.order;
}

static void SpeciesGrid_SetSavedSort(enum PokedexSortOrders sort)
{
    gSaveBlock2Ptr->pokedex.order = sort;
}

static void SpeciesGrid_RestoreSavedSort(void)
{
    SpeciesGrid_SetSort(SpeciesGrid_GetSavedSort());
}

static void SpeciesGrid_SetSpeciesCurrentMonList(u32 listIndex, u32 species)
{
    sPokedexLists->currentMonList[listIndex] = species;
}

static u32 SpeciesGrid_GetSpeciesCurrentMonList(u32 listIndex)
{
    return sPokedexLists->currentMonList[listIndex];
}

static void SpeciesGrid_ResetFilteredList(u16 *filteredList)
{
    u32 listIndex;

    for (listIndex = 0; listIndex < RESIDO_DEX_COUNT ; listIndex++)
        filteredList[listIndex] = SPECIES_NONE;
}

static void SpeciesGrid_SortList(void)
{
    u16 filteredList[RESIDO_DEX_COUNT];
    u32 sort = SpeciesGrid_GetSort();
    const u16 *sortOrder = SpeciesGrid_GetSortOrder(sort);
    bool32 reverseSort = (sort == ORDER_HEAVIEST || sort == ORDER_TALLEST);
    u32 speciesIndex = reverseSort ? RESIDO_DEX_COUNT - 1 : 0;
    u32 currentMon, sortIndex, monIndex;

    SpeciesGrid_ResetFilteredList(filteredList);

    for (sortIndex = 0; sortIndex < RESIDO_DEX_COUNT; sortIndex++)
    {
        currentMon = sortOrder[sortIndex];

        for (monIndex = 0; monIndex < RESIDO_DEX_COUNT; monIndex++)
        {
            if (currentMon != SpeciesGrid_GetSpeciesCurrentMonList(monIndex))
                continue;

            filteredList[speciesIndex] = currentMon;
            speciesIndex += reverseSort ? -1 : 1;
            break;
        }
    }

    SpeciesGrid_PopulateListAfterFilter(filteredList);
}

static void SpeciesGrid_PopulateList(void)
{
    u16 filteredList[RESIDO_DEX_COUNT];
    SpeciesFilter_DetectAndFlagFilterSetChanges();

    if (!SpeciesFilter_GetFilterChangeFlag() && !firstOpen)
        return;

    SpeciesGrid_ResetFilteredList(filteredList);
    SpeciesGrid_PopulateListAfterSort(filteredList);
    SpeciesGrid_RemoveUltraBeastAndLegendary(filteredList);
    SpeciesGrid_RemoveSpeciesAfterFilter(filteredList);
    SpeciesGrid_PopulateListAfterFilter(filteredList);
}

static bool32 SpeciesFilter_ShouldShowUltraBeastLegendary(u32 species)
{
    if ((gSpeciesInfo[species].isUltraBeast == FALSE) && (gSpeciesInfo[species].isLegendary == FALSE))
        return TRUE;

    return (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_SEEN));
}

static void SpeciesGrid_RemoveUltraBeastAndLegendary(u16* filteredList)
{
    u32 speciesIndex, species;

    for (speciesIndex = 0; speciesIndex < RESIDO_DEX_COUNT; speciesIndex++)
    {
        species = filteredList[speciesIndex];

        if (species == SPECIES_NONE)
            continue;

        if (SpeciesFilter_ShouldShowUltraBeastLegendary(species))
            continue;

        filteredList[speciesIndex] = SPECIES_NONE;
    }
}

static void SpeciesGrid_PopulateListAfterSort(u16 *filteredList)
{
    u32 listIndex;
    u32 sort = SpeciesGrid_GetSort();
    const u16 *sortOrder = SpeciesGrid_GetSortOrder(sort);
    bool32 reverseSort = (sort == ORDER_HEAVIEST || sort == ORDER_TALLEST);
    u32 speciesIndex = reverseSort ? RESIDO_DEX_COUNT - 1 : 0;
    u32 rawSpecies;

    for (listIndex = 0; listIndex < RESIDO_DEX_COUNT; listIndex++)
    {
        rawSpecies = (sortOrder[speciesIndex]);
        filteredList[listIndex] = rawSpecies;
        speciesIndex += reverseSort ? -1 : 1;
    }
}

static bool32 SpeciesFilter_GetActiveFilters(bool32 activeFilters[])
{
    u32 filterIndex, subFilterIndex;

    for (filterIndex = 0; filterIndex < POKEDEX_FILTER_COUNT; filterIndex++)
        activeFilters[filterIndex] = FALSE;

    if (sFilterSet->filterColor[0] != nullOptionLUT[FILTER_LIST_COLOR])
        activeFilters[POKEDEX_FILTER_COLOR] = TRUE;

    if (sFilterSet->filterAbility[0] != nullOptionLUT[FILTER_LIST_ABILITY])
        activeFilters[POKEDEX_FILTER_ABILITY] = TRUE;

    for (subFilterIndex = 0; subFilterIndex < MAX_MON_MOVES; subFilterIndex++)
        if (sFilterSet-> filterMoves[subFilterIndex].moves[0] != nullOptionLUT[FILTER_LIST_HP])
            activeFilters[POKEDEX_FILTER_MOVES] = TRUE;

    if (sFilterSet->filterEvolution[0] != nullOptionLUT[FILTER_LIST_EVOLUTION])
        activeFilters[POKEDEX_FILTER_EVOLUTION] = TRUE;

    for (subFilterIndex = 0; subFilterIndex < NUM_STATS; subFilterIndex++)
        if (sFilterSet-> filterBaseStats[subFilterIndex].tier[0] != nullOptionLUT[FILTER_LIST_HP])
            activeFilters[POKEDEX_FILTER_STATS] = TRUE;

    for (subFilterIndex = 0; subFilterIndex < EGG_GROUPS_PER_MON ; subFilterIndex++)
        if (sFilterSet-> filterEggGroups[subFilterIndex].group[0] != nullOptionLUT[FILTER_LIST_EGG1])
            activeFilters[POKEDEX_FILTER_EGG] = TRUE;

    for (subFilterIndex= 0; subFilterIndex < TYPES_PER_MON; subFilterIndex++)
        if (sFilterSet->filterTypes[subFilterIndex].types[0] != nullOptionLUT[FILTER_LIST_TYPE1])
            activeFilters[POKEDEX_FILTER_TYPES] = TRUE;

    if (sFilterSet->filterAlola[0] != nullOptionLUT[FILTER_LIST_ALOLA])
            activeFilters[POKEDEX_FILTER_ALOLA] = TRUE;

    for (filterIndex = 0; filterIndex < POKEDEX_FILTER_COUNT; filterIndex++)
        if (activeFilters[filterIndex])
            return TRUE;

    return FALSE;
}

static bool32 (* const sFilterFunctions[])(u32 species) =
{
    [POKEDEX_FILTER_EVOLUTION] = SpeciesFilter_IsSpeciesAtEvolutionLevel,
    [POKEDEX_FILTER_STATS] = SpeciesFilter_IsSpeciesStatWithinTier,
    [POKEDEX_FILTER_COLOR] = SpeciesFilter_DoesSpeciesMatchColor,
    [POKEDEX_FILTER_EGG] = SpeciesFilter_IsSpeciesInEggGroups,
    [POKEDEX_FILTER_TYPES] = SpeciesFilter_CheckSpeciesTypesAgainstFilters,
    [POKEDEX_FILTER_ABILITY] = SpeciesFilter_DoesSpeciesHaveAbility,
    [POKEDEX_FILTER_MOVES] = SpeciesFilter_DoesSpeciesLearnMoves,
    [POKEDEX_FILTER_ALOLA] = SpeciesFilter_IsSpeciesFromAlola,
    [POKEDEX_FILTER_COUNT] = NULL,
};

static void SpeciesGrid_RemoveSpeciesAfterFilter(u16* filteredList)
{
    u32 filterIndex;
    u32 speciesIndex;
    u32 species;
    bool32 activeFilters[POKEDEX_FILTER_COUNT];

    if (!SpeciesFilter_GetActiveFilters(activeFilters))
        return;

    for (filterIndex = 0; filterIndex < POKEDEX_FILTER_COUNT; filterIndex++)
    {
        if (sFilterFunctions[filterIndex] == NULL)
            continue;

        if (activeFilters[filterIndex] == FALSE)
            continue;

        for (speciesIndex = 0; speciesIndex < RESIDO_DEX_COUNT; speciesIndex++)
        {
            species = filteredList[speciesIndex];

            if (species == SPECIES_NONE)
                continue;

            if (sFilterFunctions[filterIndex](species))
                continue;

            filteredList[speciesIndex] = SPECIES_NONE;
        }
    }
}

static void SpeciesGrid_PopulateListAfterFilter(u16* filteredList)
{
    u32 listIndex = 0;
    u32 speciesIndex = 0;

    SpeciesGrid_ResetNumberCaughtMonsInList();

    for (speciesIndex = 0; speciesIndex < RESIDO_DEX_COUNT; speciesIndex++)
    {
        if (filteredList[speciesIndex] == SPECIES_NONE)
            continue;

        SpeciesGrid_SetSpeciesCurrentMonList(listIndex++, filteredList[speciesIndex]);
        SpeciesGrid_IncreaseNumberCaughtMonsInList(filteredList[speciesIndex]);
    }

    for (speciesIndex = listIndex; speciesIndex < RESIDO_DEX_COUNT; speciesIndex++)
        SpeciesGrid_SetSpeciesCurrentMonList(speciesIndex,SPECIES_NONE);

    SpeciesGrid_SetNumberMonsInList(listIndex);
}

static void DebugSpeciesGrid_ApplyFiltersAndReload(void)
{
    return;
    Debug_SpeciesFilterApply();

    PlaySE(SE_SELECT);
    SpeciesGrid_PopulateList();
    SpeciesGrid_CalculateAndSetNumberRows();
    SpeciesGrid_Reload();
}

void SetCurrentPage(u32 page)
{
    sPokedexState->currentPage = page;
}

u32 GetCurrentPage(void)
{
    return sPokedexState->currentPage;
}

void PrintMenuHeader(void)
{
    enum PokedexPageWindows windowId = POKEDEX_PAGE_WINDOW_HEADER;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PrintPageName();
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

void PrintPageName(void)
{
    enum PokedexPages pageId = GetCurrentPage();
    switch(pageId)
    {
        case POKEDEX_PAGE_SPECIES_LIST:
            SpeciesGrid_PrintPageName();
            break;
        case POKEDEX_PAGE_FILTER:
            SpeciesFilter_PrintPageName();
            break;
        default:
            PokedexPage_PrintPageName(pageId);
            break;
    }
}

static void SpeciesFilter_PrintPageName(void)
{
    u32 fontId = FONT_POKEDEX_HEADER_BAR;
    u32 x = 3;
    u32 y = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/filter"));

    if (FindTaskIdByFunc(Task_SpeciesFilter_Input) == TASK_NONE)
    {
        StringAppend(gStringVar3,COMPOUND_STRING("/edit/"));
        StringAppend(gStringVar3,sFilterListTexts[SpeciesFilter_GetCurrentPositionInFilterList()]);
    }

    PokedexPage_ConvertUpperToLowerCase(gStringVar3);
    PokedexPage_StripSpaces(gStringVar3);

    AddTextPrinterParameterized4(POKEDEX_PAGE_WINDOW_HEADER, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar3);
}

static void (* const pageHeaderStringFunctions[])(enum PokedexPages pageId) =
{
    [POKEDEX_PAGE_MOVES] = PageMoves_BuildHeaderStringPlayCry,
    [POKEDEX_PAGE_EVOLUTION] = PageEvolution_BuildHeaderStringPlayCry,
    [POKEDEX_PAGE_FORMS] = PageForms_BuildHeaderStringPlayCry,
    [POKEDEX_PAGE_STATS] = PageStats_BuildHeaderStringPlayCry,
    [POKEDEX_PAGE_INFORMATION] = PageInformation_BuildHeaderStringPlayCry,
    [POKEDEX_PAGE_WEAKNESSES] = PageWeaknesses_BuildHeaderStringPlayCry,
    [POKEDEX_PAGE_LOCATION] = PageLocation_BuildHeaderStringPlayCry,
};

static void PokedexPage_PrintPageName(enum PokedexPages pageId)
{
    u32 fontId = FONT_POKEDEX_HEADER_BAR;
    u32 x = 3;
    u32 y = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    pageHeaderStringFunctions[pageId](pageId);

    AddTextPrinterParameterized4(POKEDEX_PAGE_WINDOW_HEADER, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar3);
}

static void PokedexPage_StripSpaces(u8 *text)
{
    u32 stringIndex;

    for (stringIndex = 0; stringIndex < 256; stringIndex++)
    {
        if (text[stringIndex] != CHAR_SPACE)
            continue;

        text[stringIndex] = CHAR_HYPHEN;
    }
}

void PokedexPage_ConvertUpperToLowerCase(u8 *text)
{
    u32 stringIndex;

    for (stringIndex = 0; stringIndex < 256; stringIndex++)
    {
        if (text[stringIndex] < CHAR_A)
            continue;

        if (text[stringIndex] > CHAR_Z)
            continue;

        text[stringIndex] += UPPER_LOWER_GAP;
    }
}

u8* GenericHelpBarText(void)
{
    return StringCopy(gStringVar3,sHelpBarTexts[GetCurrentPage()]);
}

void PrintHelpBar(u32 windowId)
{
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    u32 x = 4;
    u32 y = 1;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 windowWidth = TILE_SIZE_1BPP * GetWindowAttribute(windowId, WINDOW_WIDTH);
    u8 *end;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch (GetCurrentPage())
    {
        case POKEDEX_PAGE_MOVES:
            end = GetMovePageHelpText();
            break;
        case POKEDEX_PAGE_STATS:
            end = GetStatsPageHelpText();
            break;
        default:
            end = GenericHelpBarText();
            break;
    }
    PrependFontIdToFit(gStringVar3, end, fontId, windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar3);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void SpeciesGrid_PrintPageName(void)
{
    u32 fontId = FONT_POKEDEX_HEADER_BAR;
    u32 x = 3;
    u32 y = 0;
    u32 percentage = GetPokedexPercentage();
    u32 numDigits = (!percentage) ? 1 : CountDigits(percentage);

    ConvertIntToDecimalStringN(gStringVar1,percentage,STR_CONV_MODE_LEFT_ALIGN,numDigits);
    StringCopy(gStringVar2, SpeciesGrid_GetSortName());
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("rsd.dex/pct={STR_VAR_1}{STR_VAR_2}"));
    AddTextPrinterParameterized4(POKEDEX_PAGE_WINDOW_HEADER, fontId, x, y, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING),
                                GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

u32 GetPokedexPercentage(void)
{
    return ((GetNationalPokedexCount(FLAG_GET_CAUGHT) * 10) / RESIDO_DEX_COUNT);
}

void LoadTypeSpritesAndPalettes(void)
{
    LoadPalette(sTypePalettes, OBJ_PLTT_ID(PAL_SLOT_MON_TYPE), 3 * PLTT_SIZE_4BPP);
    LoadCompressedSpriteSheet(&sSpriteSheet_Type13x11);
}

void Task_SpeciesGrid_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SpeciesGrid_HandleInput(taskId);
}

static void SpeciesGrid_HandleInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT))
        SpeciesGrid_ChangeColumn(FALSE);
    else if (JOY_NEW(DPAD_RIGHT))
        SpeciesGrid_ChangeColumn(TRUE);
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        SpeciesGrid_ChangeRow(FALSE);
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        SpeciesGrid_ChangeRow(TRUE);
    else if (JOY_NEW(B_BUTTON))
        PlaySoundStartFadeQuitApp(taskId);
    else if (JOY_NEW(A_BUTTON))
        SpeciesMenu_OpenMenu(taskId);
    else if (JOY_NEW(START_BUTTON))
        SpeciesGrid_ChangeSortAndReload();
    else if (JOY_NEW(SELECT_BUTTON))
        SpeciesFilter_SwitchToFromGrid(taskId);
}

static void SpeciesGrid_ChangeColumn(bool32 movingRight)
{
    s32 delta = (movingRight) ? 1 : -1;

    SpeciesGrid_SanitizeMonCursorXCoordinate(delta);
    SpeciesGrid_SanitizePosition(1);
    SpeciesData_UpdateShownData();
}

static void SpeciesGrid_ChangeRow(bool32 movingDown)
{
    s32 delta = (movingDown) ? 1 : -1;

    SpeciesGrid_SanitizeMonCursorYCoordinate(1 * delta);
    SpeciesGrid_SanitizeCurrentRowNumber(1 * delta);
    SpeciesGrid_FixCursorXCoordinate();
    SpeciesGrid_SanitizePosition(4 * delta);
    SpeciesGrid_UpdateOnScreenSpeciesId();
    SpeciesGrid_PrintGrid();
    SpeciesData_UpdateShownData();
}

static void SpeciesGrid_MoveMonCursor(void)
{
    u32 spriteId = SpeciesGrid_GetMonCursorSpriteId();
    gSprites[spriteId].y = SpeciesGrid_ConvertMonCursorToVerticalPosition();
    gSprites[spriteId].x = SpeciesGrid_ConvertMonCursorToHorizontalPosition();
}

static u32 SpeciesGrid_GetCurrentMonCursorCoordinateX(void)
{
    return sPokedexState->cursorCoordinates[0];
}

static u32 SpeciesGrid_GetCurrentMonCursorCoordinateY(void)
{
    return sPokedexState->cursorCoordinates[1];
}

static void SpeciesGrid_SetCurrentCursorCoordinateXPlayCursorSound(u32 row)
{
    PlaySE(SE_RG_BAG_CURSOR);
    SpeciesGrid_SetCurrentCursorCoordinateX(row);
}

static void SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(u32 row)
{
    PlaySE(SE_RG_BAG_CURSOR);
    SpeciesGrid_SetCurrentCursorCoordinateY(row);
}

static void SpeciesGrid_SetCurrentCursorCoordinateY(u32 coordinate)
{
    sPokedexState->cursorCoordinates[AXIS_Y] = coordinate;
}

static void SpeciesGrid_SetCurrentCursorCoordinateX(u32 coordinate)
{
    sPokedexState->cursorCoordinates[AXIS_X] = coordinate;
}

static void SpeciesGrid_SanitizePosition(s32 delta)
{
    u32 currentRowNumber = SpeciesGrid_GetCurrentRowNumber();
    u32 x = SpeciesGrid_GetCurrentMonCursorCoordinateX();

    SpeciesGrid_SetCurrentPositionInMonList((currentRowNumber * NUM_SPECIES_LIST_COLUMNS) + x);
}

static void SpeciesGrid_SanitizeMonCursorXCoordinate(s32 delta)
{
    u32 column = SpeciesGrid_GetCurrentMonCursorCoordinateX();
    u32 row = SpeciesGrid_GetCurrentRowNumber();
    u32 rowSize = SpeciesGrid_GetSizeForRow(row);
    bool32 cursorMovingRight = SpeciesGrid_IsMonCursorMovingRightOrDown(delta);
    bool32 isLastColumn = (column == rowSize);

    if (cursorMovingRight && isLastColumn)
    {
        SpeciesGrid_SetCurrentCursorCoordinateXPlayCursorSound(SPECIES_LIST_COLUMN_0);
    }
    else if (!cursorMovingRight && SpeciesGrid_IsMonCursorOnFirstColumn(column))
    {
        SpeciesGrid_SetCurrentCursorCoordinateXPlayCursorSound(rowSize);
    }
    else
    {
        SpeciesGrid_SetCurrentCursorCoordinateXPlayCursorSound(delta + column);
    }
    SpeciesGrid_MoveMonCursor();
}

static void SpeciesGrid_SanitizeMonCursorYCoordinate(s32 delta)
{
    u32 y = SpeciesGrid_GetCurrentMonCursorCoordinateY();
    bool32 cursorMovingDown = SpeciesGrid_IsMonCursorMovingRightOrDown(delta);
    u32 numRows = SpeciesGrid_GetNumberRows();
    u32 currentRow = SpeciesGrid_GetCurrentRowNumber();
    bool32 isLastRow = (currentRow == numRows);
    u32 futureRow = currentRow + delta;

    if ((y == SPECIES_LIST_ROW_1) && (futureRow != 0) && !cursorMovingDown)
       SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(SPECIES_LIST_ROW_1);
    else if (cursorMovingDown && isLastRow)
       SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(SPECIES_LIST_ROW_0);
    else if ((y == SPECIES_LIST_ROW_1) && ((futureRow) != numRows) && cursorMovingDown)
       SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(SPECIES_LIST_ROW_1);
    else if (!cursorMovingDown && SpeciesGrid_IsMonCursorOnFirstRow(y) && isLastRow)
        SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(SPECIES_LIST_ROW_0);
    else if (!cursorMovingDown && SpeciesGrid_IsMonCursorOnFirstRow(y))
    {
        if (numRows < 2)
            SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(SPECIES_LIST_ROW_1);
        else
            SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(SPECIES_LIST_ROW_2);
    }
    else
        SpeciesGrid_SetCurrentCursorCoordinateYPlayCursorSound(y + delta);

    SpeciesGrid_MoveMonCursor();
}

static u32 SpeciesGrid_GetSizeForRow(u32 currentRow)
{
    u32 numMons = SpeciesGrid_GetNumberMonsInList();
    u32 totalRowNumber = SpeciesGrid_GetNumberRows();
    u32 divisor = (numMons % NUM_SPECIES_LIST_COLUMNS);
    bool32 isLastRow = (currentRow == totalRowNumber);

    if (divisor && isLastRow)
        return (divisor - 1);
    else
        return SPECIES_LIST_COLUMN_3;
}

static void SpeciesGrid_FixCursorXCoordinate(void)
{
    u32 rowSize = SpeciesGrid_GetSizeForRow(SpeciesGrid_GetCurrentRowNumber());
    u32 x = SpeciesGrid_GetCurrentMonCursorCoordinateX();

    while (x > rowSize)
        SpeciesGrid_SetCurrentCursorCoordinateX(--x);

    SpeciesGrid_MoveMonCursor();
}

static bool32 SpeciesGrid_IsMonCursorOnFirstRow(u32 row)
{
    return (row == SPECIES_LIST_ROW_0);
}

static bool32 SpeciesGrid_IsMonCursorOnFirstColumn(u32 column)
{
    return (column == SPECIES_LIST_COLUMN_0);
}

bool32 SpeciesGrid_IsMonCursorMovingRightOrDown(s32 delta)
{
    return (delta == 1);
}

static u32 SpeciesGrid_ConvertMonCursorToHorizontalPosition(void)
{
    return ((92) + (SpeciesGrid_GetCurrentMonCursorCoordinateX() * 37));
}

static u32 SpeciesGrid_ConvertMonCursorToVerticalPosition(void)
{
    return ((18) + (SpeciesGrid_GetCurrentMonCursorCoordinateY() * 43));
}

static void SpeciesGrid_ResetCurrentPositionInMonList(void)
{
    SpeciesGrid_SetCurrentPositionInMonList(0);
}

static u32 SpeciesGrid_GetCurrentPositionInMonList(void)
{
    return sPokedexState->speciesListPosition;
}

static void SpeciesGrid_SetCurrentPositionInMonList(s32 position)
{
    sPokedexState->speciesListPosition = position;
}

static u32 SpeciesGrid_GetNumberCaughtMonsInList(void)
{
    return sPokedexLists->numCaughtMonsInList;
}

static void SpeciesGrid_IncreaseNumberCaughtMonsInList(u32 species)
{
    if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_CAUGHT))
        sPokedexLists->numCaughtMonsInList++;
}

static void SpeciesGrid_ResetNumberCaughtMonsInList(void)
{
    sPokedexLists->numCaughtMonsInList = 0;
}

static u32 SpeciesGrid_GetNumberMonsInList(void)
{
    return sPokedexLists->numMonsInList;
}

static u32 SpeciesGrid_CalculateCaughtDenominator(void)
{
    bool32 seenFlags[RESIDO_DEX_COUNT] = {FALSE};
    u32 seenCount = 0;

    for (u32 speciesIndex = 0; speciesIndex < RESIDO_DEX_COUNT; speciesIndex++)
    {
        u32 species = sPokedexLists->currentMonList[speciesIndex];

        if (species == SPECIES_NONE)
            continue;

        enum ResidoDexNumbers residoDexNum = ConvertSpeciesIdToResidoDex(species);
        if (residoDexNum == RESIDO_DEX_NONE)
            continue;

        if (seenFlags[residoDexNum])
            continue;

        seenFlags[residoDexNum] = TRUE;
        seenCount++;
    }
     return seenCount;
}

static void SpeciesGrid_SetNumberMonsInList(u32 numSpecies)
{
    sPokedexLists->numMonsInList = numSpecies;
}

static void SpeciesGrid_ResetCurrentMonList(void)
{
    u32 listIndex = 0;

    if (!SpeciesFilter_GetFilterChangeFlag() && !firstOpen)
        return;

    for (listIndex = 0; listIndex < RESIDO_DEX_COUNT ; listIndex++)
        SpeciesGrid_SetSpeciesCurrentMonList(listIndex, SPECIES_NONE);
}

static void SpeciesGrid_SetCurrentSpeciesFromCursorPosition(void)
{
    u32 positionInList = SpeciesGrid_GetCurrentPositionInMonList();
    u32 species = SpeciesGrid_GetSpeciesCurrentMonList(positionInList);
    SpeciesGrid_SetCurrentSpecies(species);
}

static void SpeciesGrid_ResetCurrentMonCursorCoordinates(void)
{
    SpeciesGrid_SetCurrentCursorCoordinateY(0);
    SpeciesGrid_SetCurrentCursorCoordinateX(0);
    SpeciesGrid_MoveMonCursor();
}

static void SpeciesGrid_PrintMonCursor(void)
{
    u32 spriteId;
    u32 x = SpeciesGrid_ConvertMonCursorToHorizontalPosition();
    u32 y = SpeciesGrid_ConvertMonCursorToVerticalPosition();
    u16 TileTag = POKEDEX_GFXTAG_SPECIES_LIST_CURSOR;

    SpeciesGrid_LoadMonCursorSprite();
    spriteId = SpeciesGrid_CreateInterfaceSprite(x,y,TileTag, SpriteCallbackDummy);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 2;
    SpeciesGrid_SaveMonCursorSpriteId(spriteId);
}

static void SpeciesGrid_LoadMonCursorSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListCursor=
    {
        speciesListMonCursor,
        (32*32),
        POKEDEX_GFXTAG_SPECIES_LIST_CURSOR,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListCursor);
    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
}

void SpeciesGrid_SaveMonCursorSpriteId(u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_CURSOR] = spriteId;
}

u32 SpeciesGrid_GetMonCursorSpriteId(void)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_CURSOR];
}


static void SpeciesGrid_SanitizeCurrentRowNumber(s32 delta)
{
    u32 currentRow = SpeciesGrid_GetCurrentRowNumber();
    u32 lastRow = SpeciesGrid_GetNumberRows();

    if ((currentRow == lastRow) && SpeciesGrid_IsMonCursorMovingRightOrDown(delta))
    {
        SpeciesGrid_ResetCurrentRowNumber();
    }
    else if((currentRow  == 0) && !SpeciesGrid_IsMonCursorMovingRightOrDown(delta))
    {
        SpeciesGrid_SetCurrentRowNumber(lastRow);
    }
    else
    {
        SpeciesGrid_SetCurrentRowNumber(currentRow + delta);
    }
}

static u32 SpeciesGrid_GetNumberRows(void)
{
    return sPokedexLists->totalNumRows;
}

static u32 SpeciesGrid_GetCurrentRowNumber(void)
{
    return sPokedexState->currentRow;
}

static void SpeciesGrid_SetCurrentRowNumber(u32 row)
{
    sPokedexState->currentRow = row;
}

static void SpeciesGrid_ResetCurrentRowNumber(void)
{
    SpeciesGrid_SetCurrentRowNumber(0);
}

static u32 SpeciesGrid_CalculateNumberRows(void)
{
    u32 numMons = SpeciesGrid_GetNumberMonsInList();
    u32 rows = (numMons / NUM_SPECIES_LIST_COLUMNS);

    if (numMons % NUM_SPECIES_LIST_COLUMNS)
        return rows;
    else
        return rows - 1;
}

static void SpeciesGrid_SetNumberRows(u32 numRows)
{
    sPokedexLists->totalNumRows = numRows;
}

static void SpeciesGrid_CalculateAndSetNumberRows(void)
{
    u32 rows = SpeciesGrid_CalculateNumberRows();
    SpeciesGrid_SetNumberRows(rows);
}

void SpeciesGrid_PrintScrollbar(void)
{
    u32 spriteId;
    u32 y = CalculateScrollbarYPosition();
    u32 x = 240;
    u16 TileTag = POKEDEX_GFXTAG_SPECIES_LIST_SCROLLBAR;

    SpeciesGrid_LoadScrollbarSprite();
    spriteId = SpeciesGrid_CreateInterfaceSprite(x,y,TileTag, SpriteCallback_Scrollbar);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(8x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(8x32);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 2;
    SpeciesGrid_SaveScrollbarSpriteId(spriteId);

    if (ShouldScrollbarBeInvisible())
        gSprites[spriteId].invisible = TRUE;
}

static void SpriteCallback_Scrollbar(struct Sprite* sprite)
{
    if (ShouldScrollbarBeInvisible())
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->invisible = FALSE;
    sprite->y = CalculateScrollbarYPosition();
}

static u32 CalculateScrollbarYPosition(void)
{
    switch(GetCurrentPage())
    {
        default:
        case POKEDEX_PAGE_SPECIES_LIST:
            return SpeciesGrid_CalculateScrollbarYPosition();
        case POKEDEX_PAGE_FILTER:
            return SpeciesFilter_CalculateScrollbarYPosition();
        case POKEDEX_PAGE_MOVES:
            return PageMoves_CalculateScrollbarYPosition();
        case POKEDEX_PAGE_EVOLUTION:
        case POKEDEX_PAGE_FORMS:
            return PageEvolution_CalculateScrollbarYPosition();
    }
}

static u32 SpeciesGrid_CalculateScrollbarYPosition(void)
{
   u32 currentRowNumber = SpeciesGrid_GetCurrentRowNumber();
   u32 totalRowNumber = SpeciesGrid_GetNumberRows();

   if (currentRowNumber == 0)
       return (MIN_POKEDEX_SCROLLBAR_Y);
    else if (currentRowNumber == totalRowNumber)
       return (MIN_POKEDEX_SCROLLBAR_Y + MOVEABLE_AREA_POKEDEX_SCROLLBAR);
   else
       return MIN_POKEDEX_SCROLLBAR_Y + ((currentRowNumber * 100 / totalRowNumber) * MOVEABLE_AREA_POKEDEX_SCROLLBAR / 100);

   return MIN_POKEDEX_SCROLLBAR_Y;
}

static u32 SpeciesFilter_CalculateScrollbarYPosition(void)
{
    u32 currentRowNumber = 0, totalRowNumber = 0;
    SpeciesFilter_SetScrollbarYInputVariables(&currentRowNumber, &totalRowNumber);

    if (currentRowNumber == 0)
        return (MIN_POKEDEX_SCROLLBAR_Y);
    else if (currentRowNumber == totalRowNumber)
        return (MIN_POKEDEX_SCROLLBAR_Y + MOVEABLE_AREA_POKEDEX_SCROLLBAR);
    else
        return MIN_POKEDEX_SCROLLBAR_Y + ((currentRowNumber * 100 / totalRowNumber) * MOVEABLE_AREA_POKEDEX_SCROLLBAR / 100);

    return MIN_POKEDEX_SCROLLBAR_Y;
}

static bool32 SpeciesFilter_EditPage_ShouldScrollbarBeVisible(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();

    if (FindTaskIdByFunc(Task_SpeciesFilter_Input) != TASK_NONE)
        return TRUE;

    if (currentFilter < FILTER_LIST_MOVE1)
        return FALSE;

    if (currentFilter > FILTER_LIST_ABILITY)
        return FALSE;

    if (SpeciesFilter_EditPage_GetMode() == FILTER_MODE_MANAGEFILTER)
        return FALSE;

    if (SpeciesFilter_EditPage_GetMode() == FILTER_MODE_ALPHABET)
        return FALSE;

    return TRUE;
}

static bool32 ShouldScrollbarBeInvisible(void)
{
    switch(GetCurrentPage())
    {
        default:
        case POKEDEX_PAGE_STATS:
        case POKEDEX_PAGE_INFORMATION:
        case POKEDEX_PAGE_WEAKNESSES:
            return TRUE;
        case POKEDEX_PAGE_SPECIES_LIST:
            return (SpeciesGrid_GetNumberRows() < NUM_SPECIES_LIST_ROWS);
        case POKEDEX_PAGE_FILTER:
            return !SpeciesFilter_EditPage_ShouldScrollbarBeVisible();
        case POKEDEX_PAGE_MOVES:
        case POKEDEX_PAGE_EVOLUTION:
        case POKEDEX_PAGE_FORMS:
            return FALSE;
    }
}

static void SpeciesGrid_LoadScrollbarSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListScrollbar;

    const void* scrollbarSprite = (GetCurrentPage() != POKEDEX_PAGE_MOVES) ? speciesListScrollbar : pageScrollbar;

    sSpriteSheet_PokedexSpeciesListScrollbar = (struct CompressedSpriteSheet)
    {
        .data = scrollbarSprite,
        .size = 8 * 32,
        .tag = POKEDEX_GFXTAG_SPECIES_LIST_SCROLLBAR,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListScrollbar);
    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
}

void SpeciesGrid_SaveScrollbarSpriteId(u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_SCROLLBAR] = spriteId;
}

static void SpeciesGrid_ResetInterfaceSpriteIds(void)
{
    u32 spriteIndex;

    for (spriteIndex = 0; spriteIndex < POKEDEX_SPRITE_COUNT; spriteIndex++)
        SpeciesGrid_SaveInterfaceSpriteId(spriteIndex, MAX_SPRITES);
}

static void SpeciesGrid_SaveInterfaceSpriteId(u32 spriteIndex, u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[spriteIndex] = spriteId;
}

u32 SpeciesGrid_CreateInterfaceSprite(u32 x, u32 y, u16 TileTag, void (*callback)(struct Sprite*))
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag = TileTag;
    TempSpriteTemplate.paletteTag = PAL_POKEDEX_UI_SPRITES;
    TempSpriteTemplate.callback = callback;

    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
    return CreateSprite(&TempSpriteTemplate,x,y,0);
}

u32 SpeciesGrid_GetCurrentSpecies(void)
{
    return sPokedexState->currentSpecies;
}

static void SpeciesGrid_SetCurrentSpecies(u32 natDexId)
{
    sPokedexState->currentSpecies = natDexId;
}

static void SpeciesData_ShowSelectedMon(void)
{
    u32 shownSpecies = SpeciesGrid_GetCurrentSpecies();
    shownSpecies = SpeciesData_CheckLastSeenForm(shownSpecies);

    SpeciesData_PrintHeader(shownSpecies);
    SpeciesData_PrintMonSprite(shownSpecies);
    SpeciesData_PrintMonTypes(shownSpecies);
    SpeciesData_PrintCaptureIndicator(shownSpecies);
}

static void SpeciesData_UpdateShownData(void)
{
    SpeciesGrid_SetCurrentSpeciesFromCursorPosition();
    SpeciesData_ShowSelectedMon();
}

static void SpeciesData_SetHeaderSpriteVisibility(bool32 invisible)
{
    gSprites[SpeciesData_GetHeaderSpriteId()].invisible = invisible;
}

static void SpeciesData_PrintManageHeaderSprite(u32 species)
{
    if (species == SPECIES_NONE)
    {
        SpeciesData_SetHeaderSpriteVisibility(TRUE);
        return;
    }

    u32 spriteId = SpeciesData_GetHeaderSpriteId();

    if (spriteId != MAX_SPRITES)
    {
        SpeciesData_SetHeaderSpriteVisibility(FALSE);
        return;
    }

    SpeciesData_LoadHeaderSprite();
    spriteId = SpeciesData_PrintHeaderSprite(5,21);
    SpeciesData_SaveHeaderSpriteId(spriteId);
    SpeciesData_SetHeaderSpriteVisibility(FALSE);
}

u32 SpeciesData_PrintHeaderSprite(u32 x, u32 y)
{
    u16 TileTag = POKEDEX_GFXTAG_SPECIES_LIST_HEADER_ICON;
    u32 spriteId = SpeciesGrid_CreateInterfaceSprite(x,y,TileTag,SpriteCallbackDummy);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 2;
    return spriteId;
}

void SpeciesData_LoadHeaderSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListHeaderIcon =
    {
        speciesListFileIcon,
        (16*16),
        POKEDEX_GFXTAG_SPECIES_LIST_HEADER_ICON,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListHeaderIcon);
    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
}

void SpeciesData_SaveHeaderSpriteId(u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_HEADER_ICON] = spriteId;
}

u32 SpeciesData_GetHeaderSpriteId(void)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_HEADER_ICON];
}

static void SpeciesData_PrintSpeciesName(u32 shownSpecies)
{
    u32 windowId = POKEDEX_PAGE_WINDOW_MON_DATA;
    u32 fontId = FONT_POKEDEX_HEADER_BAR;
    u32 x = 15;
    u32 y = 0;

    if (shownSpecies == SPECIES_NONE)
        return;

    AddTextPrinterParameterized4(windowId, fontId, x, y, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gSpeciesInfo[shownSpecies].speciesName);
}

void BufferFormOrCategoryName(u8* dest, u32 species)
{
    if (PageForms_IsSpeciesMega(species))
        StringCopy(dest,sText_MegaEvolution);
    else if (GetFormName(species) == NULL)
        CopyMonCategoryText(species,dest);
    else
        StringCopy(dest,GetFormName(species));
}

static u32 CalculateStringHeight(u8* string)
{
    u32 count = 0;
    while (*string != EOS)
    {
        if (*string == CHAR_NEWLINE)
            count++;

        string++;
    }
    return count;
}

static void SpeciesData_PrintSpeciesNumAndDesc(u32 shownSpecies, u32* padding)
{
    u32 windowId = POKEDEX_PAGE_WINDOW_MON_DATA;
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 2;
    u32 y = 15;
    u32 natDexId = ConvertSpeciesIdToResidoDex(shownSpecies);
    u8 *end;

    if (shownSpecies == SPECIES_NONE)
        return;

    ConvertIntToDecimalStringN(gStringVar1,natDexId,STR_CONV_MODE_LEADING_ZEROS,CountDigits(RESIDO_DEX_COUNT));
    CopyMonCategoryText(shownSpecies,gStringVar2);

    end = StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("¥{STR_VAR_1} {STR_VAR_2}"));
    //PSF TODO replace yen with octhorpe

    BreakStringNaive(gStringVar3, POKEDEX_SPECIESLIST_DATA_WIDTH, 2, fontId, HIDE_SCROLL_PROMPT);
    PrependFontIdToFit(gStringVar3, end, fontId, GetWindowAttribute(windowId, WINDOW_WIDTH));
    *padding = CalculateStringHeight(gStringVar3);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing+2, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar3);
}

static void SpeciesData_PrintCaughtFormName(void)
{
    u32 fontId = FONT_POKEDEX_DEX_STATS;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 2;
    u32 y = 3;
    enum PokedexPageWindows windowId = POKEDEX_PAGE_WINDOW_GETSEEN_DATA;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    SpeciesData_PrintCaught(windowId, fontId, x, y, letterSpacing, lineSpacing);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void SpeciesData_PrintCaught(enum PokedexPageWindows windowId, u32 fontId, u32 x, u32 y, u32 letterSpacing, u32 lineSpacing)
{
    u32 numMon = SpeciesGrid_GetNumberCaughtMonsInList();
    u8 *dexString = Alloc(15);
    u32 denominator = SpeciesGrid_CalculateCaughtDenominator();
    ConvertIntToDecimalStringN(gStringVar1,numMon,STR_CONV_MODE_LEFT_ALIGN,CountDigits(numMon));
    ConvertIntToDecimalStringN(gStringVar2,denominator,STR_CONV_MODE_LEFT_ALIGN,CountDigits(denominator));

    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Caught {STR_VAR_1}/{STR_VAR_2}"));
    StringCopy(dexString, gStringVar4);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,dexString);
    Free(dexString);
}

static void SpeciesData_PrintFormName(u32 species, u32* padding)
{
    enum PokedexPageWindows windowId = POKEDEX_PAGE_WINDOW_MON_DATA;
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    u32 x = 2;
    u32 y = 24 + (*padding * 10);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    u8* end;
    u32 windowWidth = TILE_SIZE_1BPP * GetWindowAttribute(windowId, WINDOW_WIDTH);

    if (PageForms_IsSpeciesMega(species))
        end = StringCopy(gStringVar2,sText_MegaEvolution);
    else if (GetFormName(species) != NULL)
        end = StringCopy(gStringVar2,GetFormName(species));
    else
        end = StringCopy(gStringVar2,COMPOUND_STRING(""));

    PrependFontIdToFit(gStringVar2, end, fontId, windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar2);
}

static void SpeciesData_PrintHeader(u32 shownSpecies)
{
    u32 padding = 0;
    FillWindowPixelBuffer(POKEDEX_PAGE_WINDOW_MON_DATA, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    SpeciesData_PrintManageHeaderSprite(shownSpecies);
    SpeciesData_PrintSpeciesName(shownSpecies);
    SpeciesData_PrintSpeciesNumAndDesc(shownSpecies, &padding);
    SpeciesData_PrintFormName(shownSpecies, &padding);
    CopyWindowToVram(POKEDEX_PAGE_WINDOW_MON_DATA, COPYWIN_GFX);
}

u32 SpeciesData_ConvertSpeciesToCosmeticFormId(u32 species)
{
    u32 form = 0;
    u32 baseSpecies = ConvertSpeciesToFormTableEnum(GET_BASE_SPECIES_ID(species));

    const struct PokemonFormTable *forms = pokemonFormTable[baseSpecies];

    if (forms == NULL)
    {
        return POKEDEX_FORM_NONE;
    }

    for (u32 i = 0; i < MAX_NUM_FORMS_EVOLUTIONS; i++)
    {
        if (forms[i].targetSpecies == species)
            form = forms[i].cosmeticFormConstant;
    }

    if (form == 0)
    {
        return POKEDEX_FORM_NONE;
    }

    return form;
}

u32 SpeciesData_GetSavedLastForm(u32 formId)
{
    return gSaveBlock2Ptr->pokedex.pokedexPersonality[formId];
}

void SpeciesData_SetSavedLastForm(u32 species)
{
    u32 formId = SpeciesData_ConvertSpeciesToCosmeticFormId(species);

    if (formId == POKEDEX_FORM_NONE)
        return;

    gSaveBlock2Ptr->pokedex.pokedexPersonality[formId]= species;
}

u32 SpeciesData_CheckLastSeenForm(u32 species)
{
    u32 formId = SpeciesData_ConvertSpeciesToCosmeticFormId(species);

    if (formId == POKEDEX_FORM_NONE)
        return species;

    u32 saved = SpeciesData_GetSavedLastForm(formId);

    if (saved)
        return saved;
    else
        return species;
}

static u32 SpeciesData_CreateMonSprite(u32 species)
{
    enum PokedexPages page = GetCurrentPage();
    u32 x = monSpriteCoordinates[page][AXIS_X];
    u32 y = monSpriteCoordinates[page][AXIS_Y];

    bool32 isShiny = FALSE;
    u32 personality = 0;
    bool32 isFrontPic = TRUE;
    u32 spriteId = CreateMonPicSprite(species,isShiny,personality,isFrontPic,x, y, PAL_SLOT_MON_SPRITE, TAG_NONE);
    FreeSpriteOamMatrix(&gSprites[spriteId]);
    gSprites[spriteId].oam.priority = 2;

    return spriteId;
}

void SpeciesData_PrintMonSprite(u32 shownSpecies)
{
    u32 spriteId;
    SpeciesData_RemoveMonSprite();

    if (shownSpecies == SPECIES_NONE)
        return;

    spriteId = SpeciesData_CreateMonSprite(shownSpecies);
    SpeciesData_SaveMonSpriteId(spriteId);
}

u32 SpeciesData_GetMonSpriteId(void)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_MON];
}

u32 SpeciesData_GetShinyMonSpriteId(void)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_MON_SHINY];
}

void SpeciesData_SaveMonSpriteId(u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_MON] = spriteId;
}

void SpeciesData_SaveShinyMonSpriteId(u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_MON_SHINY] = spriteId;
}

void SpeciesData_RemoveMonSprite(void)
{
    u32 spriteId = SpeciesData_GetMonSpriteId();
    u32 shinySpriteId = SpeciesData_GetShinyMonSpriteId();

    if (spriteId != MAX_SPRITES)
    {
        FreeAndDestroyMonPicSprite(spriteId);
        SpeciesData_SaveMonSpriteId(MAX_SPRITES);
    }

    if (shinySpriteId != MAX_SPRITES)
    {
        FreeAndDestroyMonPicSprite(shinySpriteId);
        SpeciesData_SaveShinyMonSpriteId(MAX_SPRITES);
    }
}

static void SpeciesData_CreateTypeSprite(void)
{
    u32 typeIndex;
    u32 oldSpriteId;

    for (typeIndex = 0; typeIndex < 2; typeIndex++)
    {
        oldSpriteId = SpeciesData_GetMonTypeSpriteId(typeIndex);

        if (oldSpriteId != MAX_SPRITES)
            return;

        SpeciesData_SaveTypeSpriteId(typeIndex, CreateSprite(&sSpriteTemplate_Type13x11, 0, 0, 2));
        SpeciesData_SetTypeSpriteVisibility(typeIndex, TRUE);
    }
}

static u32 SpeciesData_GetMonType(u32 typeIndex, u32 species)
{
    return gSpeciesInfo[species].types[typeIndex];
}

void SpeciesData_PrintMonTypes(u32 shownSpecies)
{
    SpeciesData_CreateTypeSprite();
    SpeciesData_SetTypeSpriteAttributes(shownSpecies);
}

static void SpeciesData_SetTypeSpriteVisibility(u32 typeIndex, bool32 invisible)
{
    gSprites[SpeciesData_GetMonTypeSpriteId(typeIndex)].invisible = invisible;
}

static void SpeciesData_SetTypeSpritePositionAndPalette(u32 typeIndex, u32 typeId, u32 x, u32 y)
{
    u32 spriteId = SpeciesData_GetMonTypeSpriteId(typeIndex);
    struct Sprite *sprite = &gSprites[spriteId];

    StartSpriteAnim(sprite, typeId);
    sprite->x = x;
    sprite->y = y;
    sprite->oam.paletteNum = gTypesInfo[typeId].palette;
    SpeciesData_SetTypeSpriteVisibility(typeIndex, FALSE);
}

static void SpeciesData_SetTypeSpriteAttributes(u32 species)
{
    u32 typeIndex;
    enum PokedexPages page = GetCurrentPage();
    u32 types[2] = {TYPE_NONE,TYPE_NONE};
    u32 x = typeSpriteCoordinates[page][AXIS_X];
    u32 y = typeSpriteCoordinates[page][AXIS_Y];

    for (typeIndex = 0; typeIndex < 2; typeIndex++)
    {
        types[typeIndex] = SpeciesData_GetMonType(typeIndex,species);
        SpeciesData_SetTypeSpritePositionAndPalette(typeIndex,types[typeIndex], x, y);
        x += 16;

        if (species == SPECIES_NONE)
            SpeciesData_SetTypeSpriteVisibility(typeIndex, TRUE);
    }

    if (types[0] == types[1])
        SpeciesData_SetTypeSpriteVisibility(1, TRUE);
}

u32 SpeciesData_GetMonTypeSpriteId(u32 typeIndex)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_TYPE_1 + typeIndex];
}

static void SpeciesData_SaveTypeSpriteId(u32 typeIndex, u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_TYPE_1 + typeIndex] = spriteId;
}

void SpeciesData_ResetTypeSpriteId(void)
{
    u32 typeIndex;

    for (typeIndex = 0; typeIndex < 2; typeIndex++)
        SpeciesData_SaveTypeSpriteId(typeIndex, MAX_SPRITES);
}

void SpeciesData_PrintCaptureIndicator(u32 species)
{
    u32 spriteId;
    bool32 hasCaught = (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_CAUGHT));
    bool32 isAlola = (IsSpeciesFromAlola(species) && QuestMenu_GetSetQuestState(QUEST_ALOHAFROMALOLA, FLAG_GET_ACTIVE));

    u16 TileTag = 0;

    if (hasCaught && isAlola)
        TileTag = POKEDEX_GFXTAG_ALOLA_SPECIES_LIST_CAPTURE_INDICATOR;
    else if (hasCaught && !isAlola)
        TileTag = POKEDEX_GFXTAG_SPECIES_LIST_CAPTURE_INDICATOR;
    else if (!hasCaught && isAlola)
        TileTag = POKEDEX_GFXTAG_ALOLA_SPECIES_LIST_UNCAUGHT_INDICATOR;
    else if (!hasCaught && !isAlola)
        TileTag = POKEDEX_GFXTAG_SPECIES_LIST_UNCAUGHT_INDICATOR;

    u32 x = POKEDEX_CAPTURE_INDICATOR_X;
    u32 y = (GetCurrentPage() == POKEDEX_PAGE_SPECIES_LIST) ? POKEDEX_CAPTURE_INDICATOR_Y_SPECIES_DATA : POKEDEX_CAPTURE_INDICATOR_Y;

    SpeciesData_RemoveCaptureIndicator();

    species = SpeciesToNationalPokedexNum(species);

    spriteId = SpeciesGrid_CreateInterfaceSprite(x,y,TileTag,SpriteCallbackDummy);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 2;
    SpeciesData_SaveCaptureIndicatorSpriteId(spriteId);
}

void SpeciesData_RemoveCaptureIndicator(void)
{
    u32 spriteId = SpeciesData_GetCaptureIndicatorSpriteId();

    if (spriteId == MAX_SPRITES)
        return;

    DestroySpriteAndFreeResources(&gSprites[spriteId]);
    SpeciesData_SaveCaptureIndicatorSpriteId(MAX_SPRITES);
}

void SpeciesData_LoadCaptureIndicatorSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListCaptureIndicator =
    {
        speciesListCaptureIndicator,
        (16*16),
        POKEDEX_GFXTAG_SPECIES_LIST_CAPTURE_INDICATOR,
    };

    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListUncaughtIndicator =
    {
        speciesListUncaughtIndicator,
        (16*16),
        POKEDEX_GFXTAG_SPECIES_LIST_UNCAUGHT_INDICATOR,
    };

    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListCaptureIndicator_Alola =
    {
        speciesListCaptureIndicator_Alola,
        (16*16),
        POKEDEX_GFXTAG_ALOLA_SPECIES_LIST_CAPTURE_INDICATOR,
    };

    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListUncaughtIndicator_Alola =
    {
        speciesListUncaughtIndicator_Alola,
        (16*16),
        POKEDEX_GFXTAG_ALOLA_SPECIES_LIST_UNCAUGHT_INDICATOR,
    };


    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListUncaughtIndicator);
    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListCaptureIndicator);
    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListUncaughtIndicator_Alola);
    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListCaptureIndicator_Alola);
    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
}

static void SpeciesData_SaveCaptureIndicatorSpriteId(u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_CAPTURE_INDICATOR] = spriteId;
}

static u32 SpeciesData_GetCaptureIndicatorSpriteId(void)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_CAPTURE_INDICATOR];
}

static void SpeciesGrid_PrintGrid(void)
{
    u32 species;
    enum SpeciesListRows rowIndex;
    enum SpeciesListColumns columnIndex;
    u32 windowId = POKEDEX_PAGE_WINDOW_GRID;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    SpeciesGrid_RemoveMonIcons();
    SpeciesGrid_RemoveCaptureIndicators();

    for (rowIndex = 0; rowIndex < NUM_SPECIES_LIST_ROWS; rowIndex++)
        for (columnIndex = 0; columnIndex < NUM_SPECIES_LIST_COLUMNS; columnIndex++)
        {
            species = SpeciesGrid_GetOnScreenSpeciesId(rowIndex,columnIndex);
            if (species == SPECIES_NONE)
                break;

            SpeciesGrid_PrintMonNumber(rowIndex,columnIndex,species);
            SpeciesGrid_PrintMonIcon(rowIndex,columnIndex,species);

            SpeciesGrid_PrintCaptureIndicator(rowIndex,columnIndex,species);
        }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void SpeciesGrid_PrintMonNumber(u32 rowIndex, u32 columnIndex, u32 species)
{
    u32 windowId = POKEDEX_PAGE_WINDOW_GRID;
    u32 fontId = FONT_POKEDEX_SPECIES_GRID;
    u32 x = 1 + (37 * columnIndex);
    u32 y = 3 + (43 * rowIndex);
    u32 dexId = ConvertSpeciesIdToResidoDex(species);

    ConvertIntToDecimalStringN(gStringVar1,dexId,STR_CONV_MODE_LEADING_ZEROS,3);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), (GetFontAttribute(fontId, FONTATTR_LINE_SPACING)), sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar4);
}

u32 ConvertSpeciesIdToResidoDex(u32 speciesId)
{
    return gSpeciesInfo[speciesId].residoDexNum;
}

bool8 SpeciesIsResidoDex(u32 speciesId)
{
    for (enum ResidoDexNumbers speciesIndex = 0; speciesIndex < RESIDO_DEX_COUNT; speciesIndex++)
        if (speciesId == gResidoPokedexOrder_Numerical[speciesIndex])
            return TRUE;

    return FALSE;
}

void SpeciesGrid_PrintMonIcon(u32 rowIndex,u32 columnIndex, u32 species)
{
    u32 page = GetCurrentPage();

    u32 baseX = monIconCoordinates[page][POKEDEX_MON_ICON_BASE][AXIS_X];
    u32 paddingX = monIconCoordinates[page][POKEDEX_MON_ICON_PADDING][AXIS_X];
    u32 baseY = monIconCoordinates[page][POKEDEX_MON_ICON_BASE][AXIS_Y];
    u32 paddingY = monIconCoordinates[page][POKEDEX_MON_ICON_PADDING][AXIS_Y];

    u32 x = baseX + (paddingX * columnIndex);
    u32 y = baseY + (paddingY * rowIndex);

    u32 spriteId = MAX_SPRITES;

    species = SpeciesData_CheckLastSeenForm(species);

    spriteId = CreateMonIcon(species,SpriteCallbackDummy,x,y,0,0);
    SpeciesGrid_SaveMonIconSpriteId(rowIndex,columnIndex,spriteId);
    SpeciesGrid_SetMonIconPriority(rowIndex, columnIndex,page);
}

static void SpeciesGrid_SetMonIconPriority(enum ParentsDisplayRows row, enum ParentsDisplayRows column, enum PokedexPages page)
{
    u32 priority = 0;
    u32 spriteId = SpeciesGrid_GetMonIconSpriteId(row,column);

    switch(page)
    {
        default:
        case POKEDEX_PAGE_SPECIES_LIST:
            priority = 1;
            break;
        case POKEDEX_PAGE_MOVES:
            priority = 0;
            break;
    }
    gSprites[spriteId].oam.priority = priority;
}

u32 SpeciesGrid_GetMonIconSpriteId(u32 row, u32 column)
{
    return sPokedexGridResources->speciesGridMonSpriteIds[row][column];
}

static void SpeciesGrid_SaveMonIconSpriteId(enum ParentsDisplayRows row, u32 column, u32 spriteId)
{
    sPokedexGridResources->speciesGridMonSpriteIds[row][column] = spriteId;
}

static u32 SpeciesGrid_GetOnScreenSpeciesId(enum SpeciesListRows row, enum SpeciesListColumns column)
{
    return sPokedexLists->onScreenMons[row][column];
}

static void SpeciesGrid_SaveOnScreenSpeciesId(u32 row, u32 column, u32 spriteId)
{
    sPokedexLists->onScreenMons[row][column] = spriteId;
}

static void SpeciesGrid_UpdateOnScreenSpeciesId(void)
{
    u32 position = SpeciesGrid_GetCurrentPositionInMonList();
    u32 currentX = SpeciesGrid_GetCurrentMonCursorCoordinateX();
    u32 currentY = SpeciesGrid_GetCurrentMonCursorCoordinateY();
    u32 rowIndex, columnIndex;

    while (currentX)
    {
        position--;
        currentX--;
    }

    while (currentY)
    {
        position-= NUM_SPECIES_LIST_COLUMNS;
        currentY--;
    }

    for (rowIndex = 0; rowIndex < NUM_SPECIES_LIST_ROWS; rowIndex++)
        for (columnIndex = 0; columnIndex < NUM_SPECIES_LIST_COLUMNS; columnIndex++)
            SpeciesGrid_SaveOnScreenSpeciesId(rowIndex, columnIndex, (SpeciesGrid_GetSpeciesCurrentMonList(position++)));
}

static void SpeciesGrid_RemoveMonIcon(enum ParentsDisplayRows rowIndex, enum SpeciesListColumns columnIndex)
{
    u32 oldSpriteId = SpeciesGrid_GetMonIconSpriteId(rowIndex, columnIndex);

    if (oldSpriteId == MAX_SPRITES)
        return;

    SpeciesGrid_SaveMonIconSpriteId(rowIndex,columnIndex,MAX_SPRITES);
    FreeAndDestroyMonIconSprite(&gSprites[oldSpriteId]);
}

void SpeciesGrid_RemoveMonIcons(void)
{
    u32 rowIndex, columnIndex;

    for (rowIndex = 0; rowIndex < POKEDEX_PARENT_ROW_COUNT; rowIndex++)
        for (columnIndex = 0; columnIndex < NUM_SPECIES_LIST_COLUMNS; columnIndex++)
            SpeciesGrid_RemoveMonIcon(rowIndex,columnIndex);
}

static void SpeciesGrid_PrintCaptureIndicator(enum SpeciesListRows rowIndex, enum SpeciesListColumns columnIndex, u32 species)
{
    u32 spriteId = SpeciesGrid_GetCaptureIndicatorSpriteId(rowIndex, columnIndex);
    bool32 hasCaught = (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_CAUGHT));

    bool32 isAlola = (IsSpeciesFromAlola(species) && QuestMenu_GetSetQuestState(QUEST_ALOHAFROMALOLA, FLAG_GET_ACTIVE));

    u16 TileTag = 0;

    if (hasCaught && isAlola)
        TileTag = POKEDEX_GFXTAG_ALOLA_SPECIES_GRID_CAPTURE_INDICATOR;
    else if (hasCaught && !isAlola)
        TileTag = POKEDEX_GFXTAG_SPECIES_GRID_CAPTURE_INDICATOR;
    else if (!hasCaught && isAlola)
        TileTag = POKEDEX_GFXTAG_ALOLA_SPECIES_GRID_UNCAUGHT_INDICATOR;
    else if (!hasCaught && !isAlola)
        TileTag = POKEDEX_GFXTAG_SPECIES_GRID_UNCAUGHT_INDICATOR;
    u32 x = 111 + (37 * columnIndex);
    u32 y = 39 + (43 * rowIndex);

    spriteId = SpeciesGrid_CreateInterfaceSprite(x,y,TileTag,SpriteCallbackDummy);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 0;
    SpeciesGrid_SaveCaptureIndicatorSpriteId(rowIndex, columnIndex, spriteId);
}

static void SpeciesGrid_LoadCaptureIndicatorSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListCaptureIndicator =
    {
        speciesListCaptureIndicator,
        (16*16),
        POKEDEX_GFXTAG_SPECIES_GRID_CAPTURE_INDICATOR,
    };

    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListUncaughtIndicator =
    {
        speciesListUncaughtIndicator,
        (16*16),
        POKEDEX_GFXTAG_SPECIES_GRID_UNCAUGHT_INDICATOR,
    };

    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListCaptureIndicator_Alola =
    {
        speciesListCaptureIndicator_Alola,
        (16*16),
        POKEDEX_GFXTAG_ALOLA_SPECIES_GRID_CAPTURE_INDICATOR,
    };

    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListUncaughtIndicator_Alola =
    {
        speciesListUncaughtIndicator_Alola,
        (16*16),
        POKEDEX_GFXTAG_ALOLA_SPECIES_GRID_UNCAUGHT_INDICATOR,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListUncaughtIndicator_Alola);
    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListCaptureIndicator_Alola);
    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListUncaughtIndicator);
    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListCaptureIndicator);
    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
}

static u32 SpeciesGrid_GetCaptureIndicatorSpriteId(u32 row, u32 column)
{
    return sPokedexGridResources->speciesGridCaptureSpriteIds[row][column];
}

static void SpeciesGrid_SaveCaptureIndicatorSpriteId(u32 row, u32 column, u32 spriteId)
{
    sPokedexGridResources->speciesGridCaptureSpriteIds[row][column] = spriteId;
}

static void SpeciesGrid_RemoveCaptureIndicator(enum ParentsDisplayRows rowIndex, enum SpeciesListColumns columnIndex)
{
    u32 oldSpriteId = SpeciesGrid_GetCaptureIndicatorSpriteId(rowIndex, columnIndex);

    if (oldSpriteId == MAX_SPRITES)
        return;

    DestroySpriteAndFreeResources(&gSprites[oldSpriteId]);
    SpeciesGrid_SaveCaptureIndicatorSpriteId(rowIndex,columnIndex,MAX_SPRITES);
}

void SpeciesGrid_RemoveCaptureIndicators(void)
{
    u32 rowIndex, columnIndex;

    for (rowIndex = 0; rowIndex < POKEDEX_PARENT_ROW_COUNT; rowIndex++)
        for (columnIndex = 0; columnIndex < NUM_SPECIES_LIST_COLUMNS; columnIndex++)
            SpeciesGrid_RemoveCaptureIndicator(rowIndex,columnIndex);
}

static void SpeciesMenu_InitalizeMenu(u32 species)
{
    sSpeciesListMenu->menuItemsCount = SpeciesMenu_GetNumberItems(species);
    sSpeciesListMenu->menuWindow.bg = BG0_POKEDEX_TEXT_CONTENT;
    sSpeciesListMenu->menuWindow.paletteNum = 0;
    sSpeciesListMenu->menuWindow.baseBlock = 1;
    SpeciesMenu_PopulateMenuItems();
}

static void SpeciesMenu_PopulateMenuItems(void)
{
    u32 menuIndex = POKEDEX_PAGE_INFORMATION;
    u32 i;

    for (i = 0; i < sSpeciesListMenu->menuItemsCount; i++)
    {
        menuIndex = SpeciesMenu_GetItemId(menuIndex);

        sSpeciesListMenu->menuItems[i].text = sSpeciesMenuTexts[menuIndex];
        sSpeciesListMenu->menuItems[i].textId = menuIndex;

        sSpeciesListMenu->calcWidth = SpeciesMenu_GetMenuWidth(sSpeciesListMenu->menuItems[i].text);

        menuIndex++;
    }
}

static u32 SpeciesMenu_ReturnMenuXPosition(void)
{
    switch (SpeciesGrid_GetCurrentMonCursorCoordinateX())
    {
        default: return 0;
        case SPECIES_LIST_COLUMN_0: return 15;
        case SPECIES_LIST_COLUMN_1: return 19;
        case SPECIES_LIST_COLUMN_2: return 12;
        case SPECIES_LIST_COLUMN_3: return 16;
    }
}

static u32 SpeciesMenu_ReturnMenuYPosition(void)
{
    switch (SpeciesGrid_GetCurrentMonCursorCoordinateY())
    {
        default: return 0;
        case SPECIES_LIST_ROW_0: return 2;
        case SPECIES_LIST_ROW_1: return 7;
        case SPECIES_LIST_ROW_2: return 7;
    }
}

static u32 SpeciesMenu_GetMenuWidth(const u8* text)
{
    u32 oldWidth = sSpeciesListMenu->calcWidth;
    u32 newWidth = ((GetStringWidth(FONT_POKEDEX_MENU,text,GetFontAttribute(FONT_POKEDEX_MENU, FONTATTR_LETTER_SPACING)) / 8) + 2);

    return (oldWidth > newWidth) ? oldWidth : newWidth;
}

static u32 SpeciesMenu_GetMenuHeight(void)
{
    return sSpeciesListMenu->menuItemsCount + 1;
}

bool32 SpeciesMenu_IsSpeciesRelatedEvolution(u32 species)
{
    return (SpeciesFilter_CheckEvolutionStatus(species,CHECK_CAN_EVOLVE) || SpeciesFilter_CheckEvolutionStatus(species,CHECK_HAS_EVOLVED));
}

const u16 regionalFormTable[] =
{
    SPECIES_RATTATA,
    SPECIES_RATICATE,
    SPECIES_RAICHU,
    SPECIES_SANDSHREW,
    SPECIES_SANDSLASH,
    SPECIES_VULPIX,
    SPECIES_NINETALES,
    SPECIES_DIGLETT,
    SPECIES_DUGTRIO,
    SPECIES_MEOWTH,
    SPECIES_PERSIAN,
    SPECIES_GEODUDE,
    SPECIES_GRAVELER,
    SPECIES_GOLEM,
    SPECIES_GRIMER,
    SPECIES_MUK,
    SPECIES_EXEGGUTOR,
    SPECIES_MAROWAK,
    SPECIES_PIKACHU,
    SPECIES_PONYTA,
    SPECIES_RAPIDASH,
    SPECIES_SLOWPOKE,
    //SPECIES_SLOWBRO,
    SPECIES_FARFETCHD,
    SPECIES_WEEZING,
    SPECIES_MR_MIME,
    SPECIES_ARTICUNO,
    SPECIES_ZAPDOS,
    SPECIES_MOLTRES,
    SPECIES_SLOWKING,
    SPECIES_CORSOLA,
    SPECIES_ZIGZAGOON,
    SPECIES_LINOONE,
    SPECIES_DARUMAKA,
    SPECIES_DARMANITAN,
    SPECIES_YAMASK,
    SPECIES_STUNFISK,
    SPECIES_DARMANITAN_ZEN,
    SPECIES_GROWLITHE,
    SPECIES_ARCANINE,
    SPECIES_VOLTORB,
    SPECIES_ELECTRODE,
    SPECIES_TYPHLOSION,
    SPECIES_QWILFISH,
    SPECIES_SNEASEL,
    SPECIES_SAMUROTT,
    SPECIES_LILLIGANT,
    SPECIES_ZORUA,
    SPECIES_ZOROARK,
    SPECIES_BRAVIARY,
    SPECIES_SLIGGOO,
    SPECIES_GOODRA,
    SPECIES_AVALUGG,
    SPECIES_DECIDUEYE,
    SPECIES_TAUROS,
    SPECIES_WOOPER,
    SPECIES_GUMSHOOS,
    SPECIES_VIKAVOLT,
    SPECIES_LURANTIS,
    SPECIES_SALAZZLE,
    SPECIES_MIMIKYU,
    SPECIES_KOMMO_O,
    SPECIES_MAROWAK_ALOLA,
    SPECIES_RIBOMBEE,
    SPECIES_ARAQUANID,
    SPECIES_TOGEDEMARU,
    SPECIES_SCATTERBUG,
    SPECIES_SPEWPA,
};

bool32 SpeciesMenu_IsSpeciesRelatedForm(u32 species)
{
    for (u32 speciesIndex = 0; speciesIndex < ARRAY_COUNT(regionalFormTable); speciesIndex++)
    {
        if (species == regionalFormTable[speciesIndex])
            return FALSE;
    }
    return (GetSpeciesFormTable(species) != NULL);
}

static void SpeciesMenu_SetRelationships(u32 species)
{
    sSpeciesListMenu->speciesRelationships[MON_HAS_EVOLUTION] = SpeciesMenu_IsSpeciesRelatedEvolution(species);
    sSpeciesListMenu->speciesRelationships[MON_HAS_FORMS] = SpeciesMenu_IsSpeciesRelatedForm(species);
}

static bool32 SpeciesMenu_GetRelationships(u32 relationship)
{
    return (sSpeciesListMenu->speciesRelationships[relationship]);
}

static u32 SpeciesMenu_GetNumberRemovedMenuItems(void)
{
    u32 removedOptions = 0;
    u32 relationshipIndex;

    for (relationshipIndex = 0; relationshipIndex < MON_RELATIONSHIP_COUNT; relationshipIndex++)
        if (!SpeciesMenu_GetRelationships(relationshipIndex))
            removedOptions++;

    return removedOptions;
}

static u32 SpeciesMenu_GetNumberItems(u32 species)
{
    SpeciesMenu_SetRelationships(species);
    return (SPECIES_MENU_COUNT - SpeciesMenu_GetNumberRemovedMenuItems());
}

static bool32 SpeciesMenu_ShouldSkipSubpage(u32 menuIndex, u32 pageType)
{
    if (menuIndex != pageType)
        return FALSE;

    u32 relationship = (pageType == POKEDEX_PAGE_EVOLUTION) ? MON_HAS_EVOLUTION : MON_HAS_FORMS;
    return (!SpeciesMenu_GetRelationships(relationship));
}

static u32 SpeciesMenu_GetItemId(u32 menuIndex)
{
    while (SpeciesMenu_ShouldSkipSubpage(menuIndex, POKEDEX_PAGE_EVOLUTION) || SpeciesMenu_ShouldSkipSubpage(menuIndex, POKEDEX_PAGE_FORMS))
        menuIndex++;

    return menuIndex;
}

static void SpeciesMenu_CreateMenu(void)
{
    u32 windowId;

    sSpeciesListMenu->menuWindow.width = sSpeciesListMenu->calcWidth;
    sSpeciesListMenu->menuWindow.height = SpeciesMenu_GetMenuHeight();
    sSpeciesListMenu->menuWindow.tilemapLeft = SpeciesMenu_ReturnMenuXPosition();
    sSpeciesListMenu->menuWindow.tilemapTop = SpeciesMenu_ReturnMenuYPosition();

    SpeciesMenu_SetMenuPosition(0);
    windowId = AddWindow(&sSpeciesListMenu->menuWindow);
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sSpeciesListMenuFrameGfx, sizeof(sSpeciesListMenuFrameGfx), POKEDEX_SPECIES_LIST_FRAME_BASE_TILE);
    sSpeciesListMenu->speciesListMenuWindowId = windowId;
    //ClearWindowTilemap(windowId);
    SpeciesMenu_DrawWindowFrame(windowId);
    SpeciesMenu_PrintCursorAndText(windowId,sSpeciesListMenu->menuItemsCount);
    ScheduleBgCopyTilemapToVram(BG0_POKEDEX_TEXT_CONTENT);
}

static void SpeciesMenu_PrintText(u32 windowId, u32 menuItemsCount)
{
    u32 x = 2;
    u32 optionIndex, y;
    u32 fontId = FONT_POKEDEX_MENU;
    u32 height = GetFontAttribute(fontId,FONTATTR_MAX_LETTER_HEIGHT);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    for (optionIndex = 0; optionIndex < menuItemsCount; optionIndex++)
    {
        y = (optionIndex * height);

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_MENU], TEXT_SKIP_DRAW, sSpeciesListMenu->menuItems[optionIndex].text);

    }
    CopyWindowToVram(windowId,COPYWIN_GFX);
}

static void SpeciesMenu_WindowFunc_DrawStandardFrame(u8 bg, u8 tilemapLeft, u8 tilemapTop, u8 width, u8 height, u8 paletteNum)
{
    int i;

    FillBgTilemapBufferRect(bg,
                            POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 0,
                            tilemapLeft - 1,
                            tilemapTop - 1,
                            1,
                            1,
                            PAL_SLOT_POKEDEX_UI);
    FillBgTilemapBufferRect(bg,
                            POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 1,
                            tilemapLeft,
                            tilemapTop - 1,
                            width,
                            1,
                            PAL_SLOT_POKEDEX_UI);
    FillBgTilemapBufferRect(bg,
                            POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 2,
                            tilemapLeft + width,
                            tilemapTop - 1,
                            1,
                            1,
                            PAL_SLOT_POKEDEX_UI);

    for (i = tilemapTop; i < tilemapTop + height; i++)
    {
        FillBgTilemapBufferRect(bg,
                                POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 3,
                                tilemapLeft - 1,
                                i,
                                1,
                                1,
                                PAL_SLOT_POKEDEX_UI);
        FillBgTilemapBufferRect(bg,
                                POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 5,
                                tilemapLeft + width,
                                i,
                                1,
                                1,
                                PAL_SLOT_POKEDEX_UI);
    }

    FillBgTilemapBufferRect(bg,
                            POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 6,
                            tilemapLeft - 1,
                            tilemapTop + height,
                            1,
                            1,
                            PAL_SLOT_POKEDEX_UI);
    FillBgTilemapBufferRect(bg,
                            POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 7,
                            tilemapLeft,
                            tilemapTop + height,
                            width,
                            1,
                            PAL_SLOT_POKEDEX_UI);
    FillBgTilemapBufferRect(bg,
                            POKEDEX_SPECIES_LIST_FRAME_BASE_TILE + 8,
                            tilemapLeft + width,
                            tilemapTop + height,
                            1,
                            1,
                            PAL_SLOT_POKEDEX_UI);
}

static void SpeciesMenu_DrawWindowFrame(u32 windowId)
{
    CallWindowFunction(windowId,SpeciesMenu_WindowFunc_DrawStandardFrame);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(3));
    PutWindowTilemap(windowId);
}

static void SpeciesMenu_PrintCursorAndText(u32 windowId, u32 menuItemsCount)
{
    SpeciesMenu_PrintCursor(windowId);
    SpeciesMenu_PrintText(windowId,menuItemsCount);
}

static void SpeciesMenu_OpenMenu(u8 taskId)
{
    u32 species = SpeciesGrid_GetCurrentSpecies();

    if (species == SPECIES_NONE)
        return;

    SpeciesMenu_InitalizeMenu(species);
    SpeciesMenu_CreateMenu();
    PlaySE(SE_WIN_OPEN);
    DestroyTask(taskId);
    CreateTask(Task_SpeciesMenu_HandleInput,0);
}

static void SpeciesMenu_RemoveMenu(u8 taskId)
{
    u32 windowId = sSpeciesListMenu->speciesListMenuWindowId;
    ClearStdWindowAndFrameToTransparent(windowId, TRUE);
    RemoveWindow(windowId);
    PlaySE(SE_BALL);
    gTasks[taskId].func = Task_SpeciesGrid_Input;
}

static void Task_SpeciesMenu_HandleInput(u8 taskId)
{
    if (JOY_NEW(DPAD_UP))
        SpeciesMenu_ChangeMenuPosition(-1);
    else if (JOY_NEW(DPAD_DOWN))
        SpeciesMenu_ChangeMenuPosition(1);
    else if (JOY_NEW(A_BUTTON))
    {
        SpeciesGrid_SetShouldPlayCry(TRUE);
        u32 species = SpeciesGrid_GetCurrentSpecies();
        species = SpeciesData_CheckLastSeenForm(species);
        ParentDisplay_SetFutureSpeciesId(species);
        gTasks[taskId].tTargetPageId = SpeciesMenu_ConvertMenuPositionToPageId(SpeciesMenu_GetMenuPosition());
        Page_SwitchFromGrid(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
        SpeciesMenu_RemoveMenu(taskId);
}

u32 SpeciesMenu_GetMenuPosition(void)
{
    return sSpeciesListMenu->menuPosition;
}

static void SpeciesMenu_SetMenuPosition(u32 position)
{
    sSpeciesListMenu->menuPosition = position;
}

enum PokedexPages SpeciesMenu_ConvertMenuPositionToPageId(enum PokedexPages currentPosition)
{
    return sSpeciesListMenu->menuItems[currentPosition].textId;
}

static void SpeciesMenu_ChangeMenuPosition(s32 direction)
{
    u32 menuCount = sSpeciesListMenu->menuItemsCount;
    u32 oldPosition = SpeciesMenu_GetMenuPosition();
    s32 newPosition = oldPosition + direction;
    u32 windowId = sSpeciesListMenu->speciesListMenuWindowId;

    if (newPosition < 0)
        newPosition = menuCount - 1;

    if (newPosition >= menuCount)
        newPosition = 0;

    SpeciesMenu_SetMenuPosition(newPosition);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(3));
    SpeciesMenu_PrintCursorAndText(windowId,sSpeciesListMenu->menuItemsCount);
    PutWindowTilemap(windowId);
    PlaySE(SE_RG_BAG_CURSOR);
}

static void SpeciesMenu_PrintCursor(u32 windowId)
{
    u32 x = 1;
    u32 y = SpeciesMenu_CalculateCursorYPosition();

    BlitBitmapToWindow(windowId, speciesListMenuCursor, x, y , 64, 16);
}

static u32 SpeciesMenu_CalculateCursorYPosition(void)
{
    return (SpeciesMenu_GetMenuPosition() * (GetFontAttribute(FONT_POKEDEX_MENU,FONTATTR_MAX_LETTER_HEIGHT))+3);
}

void SpeciesGrid_CleanUp(u8 taskId)
{
    SpeciesGrid_RemoveMonCursorSprite();
    SpeciesGrid_RemoveScrollbarSpriteId();
    SpeciesData_RemoveMonSprite();
    SpeciesData_RemoveTypeSprites();
    SpeciesData_RemoveHeaderSprite();
    SpeciesData_RemoveCaptureIndicator();
    SpeciesGrid_RemoveMonIcons();
    SpeciesGrid_RemoveCaptureIndicators();

    FreeSpritePalettesResetSpriteData();
    SpeciesFilter_SetFilterChangeFlag(FALSE);
    SpeciesFilter_CopyFilterSetIntoTemp();
}

void SpeciesGrid_RemoveScrollbarSpriteId(void)
{
    u32 spriteId = SpeciesGrid_GetScrollbarSpriteId();

    if (spriteId == MAX_SPRITES)
        return;

    DestroySpriteAndFreeResources(&gSprites[spriteId]);
    SpeciesGrid_SaveScrollbarSpriteId(MAX_SPRITES);
}

void SpeciesData_RemoveTypeSprites(void)
{
    u32 typeIndex, spriteId;

    for (typeIndex = 0; typeIndex < TYPES_PER_MON; typeIndex++)
    {
        spriteId = SpeciesData_GetMonTypeSpriteId(typeIndex);

        if (spriteId == MAX_SPRITES)
            return;

    DestroySpriteAndFreeResources(&gSprites[spriteId]);
    }
    SpeciesData_ResetTypeSpriteId();
}

void SpeciesData_RemoveHeaderSprite(void)
{
    u32 spriteId = SpeciesData_GetHeaderSpriteId();

    if (spriteId == MAX_SPRITES)
        return;

    DestroySpriteAndFreeResources(&gSprites[spriteId]);
    SpeciesData_SaveHeaderSpriteId(MAX_SPRITES);
}



void SpeciesGrid_RemoveMonCursorSprite(void)
{
    u32 spriteId = SpeciesGrid_GetMonCursorSpriteId();
    if (spriteId == MAX_SPRITES)
        return;

    DestroySpriteAndFreeResources(&gSprites[spriteId]);
    SpeciesGrid_SaveMonCursorSpriteId(MAX_SPRITES);
}

void SpeciesGrid_SetFirstPageLoad(bool32 value)
{
    sPokedexState->firstPageLoad = value;
}

bool32 SpeciesGrid_GetFirstPageLoad(void)
{
    return sPokedexState->firstPageLoad;
}

void DebugSavedInfo(u32 species, u32 x, u32 y, u32 listIndex, bool32 isBefore)
{
    return;
    if (isBefore)
    {
        DebugPrintf("---------------");
        DebugPrintf("BEFORE");
    }
    else
    {
        DebugPrintf("AFTER");
    }

    DebugPrintf("%S (%d)",GetSpeciesName(species),species);
    DebugPrintf("column %d | row %d",x,y);
    DebugPrintf("list position %d",listIndex);
}

static u32 SpeciesGrid_GetSavedSpecies(void)
{
    return gSaveBlock2Ptr->pokedex.unknown3;
}

static u32 SpeciesGrid_SanitizeSavedSpecies(void)
{
    u32 species = SpeciesGrid_GetSavedSpecies();
    return (species == SPECIES_NONE) ? gResidoPokedexOrder_Numerical[1] : species;
}

static void SpeciesGrid_SetSavedSpecies(u32 species)
{
    DebugSavedInfo(species,SpeciesGrid_GetCurrentMonCursorCoordinateX(),SpeciesGrid_GetCurrentMonCursorCoordinateY(),SpeciesGrid_GetCurrentPositionInMonList(),TRUE);
    gSaveBlock2Ptr->pokedex.unknown3 = species;
}

static void SpeciesGrid_SetCursorPositionFromSavedSpecies(void)
{
    u32 x = 0, y = 0, numVisibleMons = 0;
    u32 species = SpeciesGrid_SanitizeSavedSpecies();
    u32 sort = SpeciesGrid_GetSort();
    const u16 *sortOrder = SpeciesGrid_GetSortOrder(sort);
    bool32 reverseSort = (sort == ORDER_HEAVIEST || sort == ORDER_TALLEST);
    u32 speciesList[RESIDO_DEX_COUNT];
    u32 residoMon = reverseSort ? RESIDO_DEX_COUNT - 1 : 0;

    for (u32 i = 0; i < RESIDO_DEX_COUNT; i++)
    {
        if (SpeciesFilter_ShouldShowUltraBeastLegendary(sortOrder[residoMon]))
            speciesList[numVisibleMons++] = sortOrder[residoMon];

        residoMon += reverseSort ? -1 : 1;
    }

    for (u32 listIndex = 0; listIndex < numVisibleMons; listIndex++)
    {
        if (speciesList[listIndex] != species)
            continue;

        // PSF TODO I have no idea why this is required, but removing it introduces an issue where the saved species is always one ahead of the actual species
        if (listIndex)
            listIndex--;

        y = listIndex / NUM_SPECIES_LIST_COLUMNS;
        x = listIndex % NUM_SPECIES_LIST_COLUMNS;

        DebugSavedInfo(species,x,y,listIndex,FALSE);
        break;
    }

    for (u32 i = 0; i < y; i++)
    {
        SpeciesGrid_SanitizeMonCursorYCoordinate(1);
        SpeciesGrid_SanitizeCurrentRowNumber(1);
        SpeciesGrid_FixCursorXCoordinate();
        SpeciesGrid_SanitizePosition(4);
    }

    for (u32 i = 0; i < x; i++)
    {
        SpeciesGrid_SanitizeMonCursorXCoordinate(1);
        SpeciesGrid_SanitizePosition(1);
    }
}

void SpeciesGrid_SetShouldPlayCry(bool32 value)
{
    sPokedexState->shouldPlayCry = value;
}

bool32 SpeciesGrid_GetShouldPlayCry(void)
{
    return sPokedexState->shouldPlayCry;
}

/*
 * TODO for pages
    POKEDEX_PAGE_LOCATION,
*/
