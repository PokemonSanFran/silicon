#include "global.h"
#include "battle_main.h"
#include "battle_util.h"
#include "bg.h"
#include "event_data.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "dma3.h"
#include "field_weather.h"
#include "gba/macro.h"
#include "graphics.h"
#include "international_string_util.h"
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
#include "trig.h"
#include "text_window.h"
#include "trainer_pokemon_sprites.h"
#include "tv.h"
#include "ui_pokedex.h"
#include "rtc.h"
#include "window.h"
#include "constants/abilities.h"
#include "constants/weather.h"
#include "constants/battle.h"
#include "constants/form_change_types.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "item.h"
#include "ui_main_menu.h"
#include "region_map.h"
#include "line_break.h"
#include "item_menu.h"
#include "battle_message.h"
#include "constants/battle_string_ids.h"
#include "data/ui_pokedex_type_sprites.h"
#include "data/ui_pokedex_sprite_coordinates.h"

const struct PokemonFormTable pokemonFormTable[POKEDEX_FORM_COUNT][NUMBER_OF_MON_TYPES] =
{
    // NUMBER_OF_MON_TYPES is how many Silvally types there are which is generally how big this table will ever get because we don't have Alcremie.
#include "data/pokemon/silicon_form_table.h"
};

struct PokedexSpeciesMovesOrParentsList
{
    u16 speciesMoveId;
    u8 method : 3;
};

struct PokedexStatsPageData
{
    u8 monListPosition;
    u8 monCursorCoordinate : 3;
    u16 futureMon;
};

struct PokedexEvolutionPageData
{
    s16 familyList[MAX_NUM_FORMS_EVOLUTIONS][POKEDEX_EVOLUTION_ATTRIBUTE_COUNT];
    u16 monList[MAX_NUM_FORMS_EVOLUTIONS];
    u16 numMons;
    u8 monListPosition;
    u8 monCursorCoordinate : 3;
    u8 monListSpriteId[NUM_EVOLUTIONS_LIST_ROWS];
    bool8 abilityModeOn;
};

struct PokedexMovesPageData
{
    struct PokedexSpeciesMovesOrParentsList moveList[UI_MOVES_COUNT_TOTAL];
    u16 numMoves : 9;
    u16 moveListPosition : 9;
    u8 moveCursorCoordinate : 3;
    u8 parentCursor[AXIS_COUNT];
    u8 rowNumber;
    u8 parentDisplayListPosition;
    u16 targetMove;
    u8 numParents;
    u8 parentNumRows;
    struct PokedexSpeciesMovesOrParentsList parentList[MAX_NUM_PARENTS];
    bool8 pageStatsAbilityDetails;
};

struct PokedexLocationPageData
{
    bool8 weaknessesLegendShown;
};

static struct PokedexMovesPageData *sPokedexMovesPageData = NULL;
static struct PokedexEvolutionPageData *sPokedexEvolutionPageData = NULL;
static struct PokedexLocationPageData *sPokedexLocationPageData = NULL;
extern const u8 residoMovesAZ[POKEDEX_FILTER_ALPHABET_COUNT][MAX_MOVES_PER_LETTER];

static const struct WindowTemplate sPokedexPageMovesWindowTemplates[] =
{
    [PAGE_MOVES_WINDOW_HEADER]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  1,
    },
    [PAGE_MOVES_WINDOW_LEARN_METHOD]=
    {
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 15,
        .height =  6,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  61,
    },
    [PAGE_MOVES_WINDOW_MOVES_DATA]=
    {
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 8,
        .width = 12,
        .height =  5,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  151,
    },
    [PAGE_MOVES_WINDOW_MOVES_LIST]=
    {
        .bg = 1,
        .tilemapLeft = 16,
        .tilemapTop =  2,
        .width = 11,
        .height =  10,
        .paletteNum =  POKEDEX_PALETTE_TEXT,
        .baseBlock =  211,
    },
    [PAGE_MOVES_WINDOW_MOVES_DESC]=
    {
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width =  30,
        .height =  5,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  321,
    },
    [PAGE_MOVES_WINDOW_FOOTER]=
    {
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width =  30,
        .height =  2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  471,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sPokedexPageStatsWindowTemplates[] =
{
    [PAGE_STATS_WINDOW_HEADER]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  1,
    },
    [PAGE_STATS_WINDOW_SPECIES_DATA]=
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 28,
        .height =  12,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  61,
    },
    [PAGE_STATS_WINDOW_ABILITIES_LIST]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 18,
        .tilemapTop = 2,
        .width = 12,
        .height = 10,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  397,
    },
    [PAGE_STATS_WINDOW_ABILITIES_DESC]=
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .tilemapLeft = 0,
        .tilemapTop =  11,
        .width = 30,
        .height =  8,
        .paletteNum =  POKEDEX_PALETTE_TEXT,
        .baseBlock =  517,
    },
    [PAGE_STATS_WINDOW_FOOTER]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width =  30,
        .height =  2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  757,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sPokedexPageEvolutionWindowTemplates[] =
{
    [PAGE_EVOLUTION_WINDOW_HEADER]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  1,
    },
    [PAGE_EVOLUTION_WINDOW_SPECIES_DATA]=
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 17,
        .height =  12,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  61,
    },
    [PAGE_EVOLUTION_WINDOW_MON_LIST]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 20,
        .tilemapTop = 2,
        .width = 10,
        .height = 10,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  265,
    },
    [PAGE_EVOLUTION_WINDOW_METHOD_DESC]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop =  12,
        .width = 30,
        .height =  6,
        .paletteNum =  POKEDEX_PALETTE_TEXT,
        .baseBlock =  365,
    },
    [PAGE_EVOLUTION_WINDOW_FOOTER]=
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width =  30,
        .height =  2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock =  545,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sPokedexPageInformationWindowTemplates[] =
{
    [PAGE_INFORMATION_WINDOW_HEADER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 1,
    },
    [PAGE_INFORMATION_WINDOW_DATA] =
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .tilemapLeft = 0,
        .tilemapTop = 1,
        .width = 12,
        .height = 12,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 61,
    },
    [PAGE_INFORMATION_WINDOW_SPRITES] =
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .tilemapLeft = 12,
        .tilemapTop = 1,
        .width = 18,
        .height = 12,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 205,
    },
    [PAGE_INFORMATION_WINDOW_FLAVOR] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 30,
        .height = 5,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 421,
    },
    [PAGE_INFORMATION_WINDOW_FOOTER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 571,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sPokedexPageWeaknessesWindowTemplates[] =
{
    [PAGE_WEAKNESSES_WINDOW_HEADER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 1,
    },
    [PAGE_WEAKNESSES_WINDOW_TYPES] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 30,
        .height = 16,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 61,
    },
    [PAGE_WEAKNESSES_WINDOW_FOOTER] =
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 541,
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sPokedexPageLocationWindowTemplates[] =
{
    [PAGE_LOCATION_WINDOW_HEADER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 1,
    },
    [PAGE_LOCATION_WINDOW_FOOTER] =
    {
        .bg = BG2_POKEDEX_LIST_BG,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = POKEDEX_PALETTE_TEXT,
        .baseBlock = 61,
    },
    DUMMY_WIN_TEMPLATE,
};

static void Task_PrepareScreen_GridToPage(u8 taskId);
static void Page_SetUp(u8 taskId);
static void Task_PageMoves_LoadParent(u8 taskId);
static bool32 AllocatePageStructs(enum PokedexPages page);
static void PageMoves_InitWindows(void);
static void PageEvolution_InitWindows(void);
static void PageMoves_HandleInput(u8 taskId);
static void PageEvolution_HandleInput(u8 taskId);
static bool32 PageMoves_IsSelctedMoveEggMove(u32 currentPosition);
static bool32 IsMoveInSilicon(u32 moveId);
static void PageMoves_PopulateMovesList(void);
static void PageMoves_PrintCursor(enum PokedexPageMovesWindows windowId);
static void PageMoves_PrintMovesList(void);
static void PageMoves_PrintMoveInfo(void);
static void PageMoves_PrintMoveDesc(void);
static void PageMoves_PrintMove(void);
static u32 PageMoves_GetIdToPrint(void);
static const u8 *GetFormOrSpeciesName(u32 species);
static void PageEvolutions_PrintEvolution(enum PokedexPages page);
static void PageEvolution_PrintPageSprites(void);
static void PageMoves_BufferMoveNameToString(const u8* string, u8* dest, u32 fontId, u32 windowId);
static void PageStats_BufferAbilityDescColumn(const u8* string, u8* dest, u32 fontId, u32 maxWidth);
static u32 PageMoves_GetNumMoves(void);
static void PageMoves_SetNumMoves(u32);
static void Debug_PrintMovesList(void);
static void Debug_PrintMonList(u32);
static u32 PageMoves_GetTargetMove(void);
static void PageMoves_SetTargetMove(u32 moveId);
static void PageMoves_SnapToLoadedCursorAndPosition(void);
static u32 PageMoves_GetCurrentPositionInMoveList(void);
static u32 PageMoves_GetMoveIdFromPosition(u32 position);
static void PageMoves_SetCurrentPositionInMoveList(s32 position);
static void PageMoves_SetCursorPosition(u32 position);
static void PageMoves_ResetCursorPosition(void);
static void PageMoves_ResetCurrentPositionInMoveList(void);
static u32 PageMoves_GetNumParents(void);
static void PageMoves_SetNumParents(u32);
static void PageMoves_ChangeListPosition(s32 delta);
static u32 PageEvolutions_MovePositionToTarget(void);
static void PageMoves_ChangeCursorPosition(void);
static void PageMoves_CreatePage(void);
static void PageEvolution_CreatePage(void);
static void PageMoves_SwitchToSpeciesGrid(u8 taskId);
static void Task_PreapreScreenPageToGrid(u8 taskId);
static void FreePageStructs(void);

static void PageMoves_CreateCategorySprite(void);
u32 PageMoves_GetMoveCategorySpriteId(void);
static void PageMoves_SaveCategorySpriteId(u32 spriteId);
void PageMoves_ResetCategorySpriteId(void);
static void PageMoves_SetCategorySpriteVisibility(bool32 invisible);
static void PageMoves_PrintMoveCategorySprite(u32 moveId);
static void PageMoves_SetCategorySpritePositionAndPalette(u32 categoryId, u32 x, u32 y);
static void PageMoves_SetCategorySpriteAttributes(u32 moveId);
void LoadCategorySpritesAndPalettes(void);
static void PageMoves_TypePrintTypeIcons(enum PokedexPageMovesWindows windowId, enum MoveListRow rowId, u32 moveId, u32 y);
static u32 PageMoves_EditPage_GetTypeSpriteId(u32 typeId);
static void PageMoves_EditPage_SaveTypeSpriteId(u32 typeId, u32 spriteId);
static void PageMoves_EditPage_SetTypeSpritePositionAndPalette(u32 typeId, u32 x, u32 y, enum MoveListRow rowId);
static void LoadMoveTypeSpritesAndPalettes(void);
static void PageMoves_RemoveTypeSprites(void);
static void PageMoves_ResetTypeSpriteId(enum MoveListRow rowId);
static void PageMoves_SetMoveMethod(u32 currentPosition, enum MoveLearnMethods method);
static enum MoveLearnMethods PageMoves_GetMoveMethod(u32 currentPosition);
static void PageMoves_SetMoveId(u32, u32);
void PageMoves_PrintLevelMethod(u32 species, u32 currentPosition, u32, u32, u32, enum PokedexPageMovesWindows windowId);
void PageMoves_PrintEggMethod(u32 species, u32 currentPosition, u32, u32, u32, enum PokedexPageMovesWindows windowId);
void PageMoves_PrintMachineMethod(u32 species, u32 currentPosition, u32, u32, u32, enum PokedexPageMovesWindows windowId);
static void PageMoves_PrintMoveTypeName(void);
static u32 PageMoves_GetContrastColor(u32 moveType);
static void PrintMoveLearnMethods(void);
void PageMoves_GenerateParentsArray(void);
static void ParentDisplay_ReloadMons(void);
static void PageMoves_SeeParents(u8 taskId);
static void Task_ParentDisplay_HandleInput(u8 taskId);

static u32 ParentDisplay_GetWindowId(void);
static void ParentDisplay_SetWindowId(u32 window);
static void ParentDisplay_RemoveMenu(void);
static void ParentDisplay_DestroyArrows(void);
static void ParentDisplay_InitalizeMenu(void);
static void ParentDisplay_CreateMenu(void);
static void ParentDisplay_PrintAllParents(void);
static void ParentDisplay_PrintMethodIcons(void);
static void ParentDisplay_DrawWindowFrame(u32 windowId);
static void ParentDisplay_WindowFunc_DrawStandardFrame(u8 bg, u8 tilemapLeft, u8 tilemapTop, u8 width, u8 height, u8 paletteNum);
static u32 PageMoves_CalculateStartingResultIndex(void);
static void ParentDisplay_PrintParents(void);
static void UpdateMonIconSpriteToCrop(enum ParentsDisplayRows rowIndex, enum ParentsDisplayColumns columnIndex);
static void ParentDisplay_PrintSpeciesName(enum ParentsDisplayRows rowIndex, enum ParentsDisplayColumns columnIndex, u32 species);
static void PageMoves_SetParentSpecies(u32 currentPosition, u32 species);
static u32 PageMoves_GetParentSpecies(u32 currentPosition);
static void PageMoves_SetParentMoveMethod(u32 currentPosition, enum MoveLearnMethods method);
static enum MoveLearnMethods PageMoves_GetParentMoveMethod(u32 currentPosition);
static void ParentDisplay_CreateArrowSprites(u32 windowId);
static void ParentDisplay_SaveArrowSpriteId(enum PokedexMovesArrowGfxTags arrowId, u32 spriteId);
u32 ParentDisplay_GetArrowSpriteId(enum PokedexMovesArrowGfxTags arrowId);
static void HandleArrowVisibility(struct Sprite *sprite, u32 arrowPos);
static void AnimateArrowSprite(struct Sprite *sprite, u32 arrowPos);
static void SpriteCallback_Arrow(struct Sprite *sprite);
static u32 ParentDisplay_GetCursorCoordinate(u32 axis);
static void ParentDisplay_SetCursorCoordinate(u32 axis, u32 position);
static u32 ParentDisplay_GetListPosition(void);
static void ParentDisplay_SetListPosition(u32 position);
static void ParentDisplay_ResetListCursor(void);
static void ParentDisplay_ChangeColumn(s32 delta);
static void ParentDisplay_ResetCoordinates(void);
static u32 ParentDisplay_GetNumberRows(void);
static void ParentDisplay_SetNumberRows(u32 rows);
static u32 ParentDisplay_CalculateNumberRows(void);
static u32 ParentDisplay_GetCurrentRowNumber(void);
static void ParentDisplay_SetCurrentRowNumber(u32 row);
static void ParentDisplay_ResetCurrentRowNumber(void);
static void ParentDisplay_SanitizeCursorXCoordinate(u32 delta);
static void ParentDisplay_SanitizeCursorYCoordinate(s32 delta);
static void ParentDisplay_SantizeCurrentRowNumber(s32 delta);
static u32 ParentDisplay_GetSizeForRow(u32 currentRow);
static void ParentDisplay_FixCursorXCoorindate(void);
static void DebugParentPrintCoorindates(void);
static void ParentDisplay_SetListPositionFromCoordinates(void);
static void ParentDisplay_ChangeRow(s32 delta);
static u32 ParentDisplay_GetFutureSpeciesId(void);
static void PageMoves_LoadParent(u8 taskId);
static void ParentDisplay_PrintMonCursor(void);
static void ParentDisplay_LoadMonCursorSprite(void);
static void SpriteCallback_ParentDisplayCursor(struct Sprite* sprite);

static void PageEvolutionForms_PopulateList(enum PokedexPages page);
static void PageEvolution_PopulateEvolutionsList(void);
static void PageForms_ResetFormList(void);
static u32 PageForm_GetMonForFormList(void);
static void PageForm_PopulateFormList(void);
static void PageEvolutions_ChangeListPosition(s32 delta);
static void DebugEvolutionPrintCoorindates(void);
static void PageEvolution_ChangeCursorPosition(void);
static void PageEvolution_PrintEvolutionList();
static void PageEvolutionForms_PrintDetails(enum PokedexPages page);
static bool32 PageEvolution_GenerateEvolutionDetails(u8* string, u32 spotlightMon, u32 evoIndex);
static void PageEvolution_PrintEvolutionDetails(void);
static void PageForms_PrintFormDetails(void);
static void PageForms_PrintOriginalAndTargetSpecies(enum PokedexPageEvolutionWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 windowWidth, u32 currentPosition);
static void BufferWeatherName(u32 weather, u8* string);
static void PageForms_PrintTransformationCriteria(enum PokedexPageEvolutionWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 windowWidth, u32 currentPosition);
static void PageEvolution_SpeciesData_PrintSpeciesNum(u32 species, u32 windowId);
static void PageEvolution_SpeciesData_PrintStats(u32 species, u32 windowId);
static void PageEvolution_SpeciesData_ShowSelectedMon(void);
static u32 PageEvolutions_GetIdToPrint(void);
static void PageEvolutions_PrintCursor(enum PokedexPageEvolutionWindows windowId);

u32 PageForms_GetNumberSpeciesForms(const u16 *formTable);
u32 PageForms_GetNumberFormChanges(const struct FormChange *formChanges);
static u32 PageEvolution_GetMonToDisplay(void);
static u32 PageEvolution_GetOriginalSpecies(u32 monIndex);
static void PageEvolution_SetMonList(u32 monIndex, u32 species);
static void PageEvolution_SetOriginalSpecies(u32 familyIndex, u32 originalSpecies);
static u32 PageEvolution_GetOriginalSpecies(u32 familyIndex);
static void PageEvolution_SetMethod(u32 familyIndex, s32 method);
static s32 PageEvolution_GetMethod(u32 familyIndex);
static void PageEvolution_SetTargetSpecies(u32 familyIndex, s32 targetSpecies);
static s32 PageEvolution_GetTargetSpecies(u32 familyIndex);
static void PageEvolution_SetArg1(u32 familyIndex, s32 arg1);
static s32 PageEvolution_GetArg1(u32 familyIndex);
static void PageEvolution_SetArg2(u32 familyIndex, s32 arg2);
static s32 PageEvolution_GetArg2(u32 familyIndex);
static void PageEvolution_SetArg3(u32 familyIndex, s32 arg3);
static s32 PageEvolution_GetArg3(u32 familyIndex);
static void PageEvolution_SetNumMons(u32 numMons);
static u32 PageEvolution_GetNumMons(void);
static void PageEvolution_SetMonListPosition(u32 monListPosition);
static u32 PageEvolution_GetMonListPosition(void);
static u32 PageEvolution_GetMonList(u32 monIndex);
static void PageEvolution_SetMonCursorCoordinate(u32 monCursorCoordinate);
static u8 PageEvolution_GetMonCursorCoordinate(void);
static u32 ParentDisplay_GetFutureSpeciesId(void);
static void PageStats_CreatePage(void);
void Task_PageStats_Input(u8 taskId);
static void PageStats_HandleInput(u8 taskId);
static void PageStats_PrintAbilitiesAndDesc(void);
static void PageStats_HandleAbilityInput(u8 taskId);
static void PageStats_HandleStatsInput(u8 taskId);
static void PageStats_InitWindows(void);
static void PageStats_SpeciesData_ShowSelectedMon(void);
static void PageStats_SpeciesData_PrintYield(u32 windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 species);
static void PageStats_SpeciesData_PrintGender(u32 windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 species);
u32 SpeciesStats_GetYieldForMon(u32 stat, u32 species);
static void PageStats_PrintAbilities(u32 species);
static void PageStats_PrintStatsDesc(void);
static void PageStats_PrintAbilityDesc(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintNonAbilityDesc(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintItems(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintExpYield(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintFriendship(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintEggGroups(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintGrowthRate(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintCatchRate(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_PrintEggCycles(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageStats_ToggleAbilityMode(void);
static void PageStats_SetAbilityMode(bool32 value);
static bool32 PageStats_GetAbilityMode(void);
static void PageStats_ChangeListPosition(s32 delta);
static void PageStats_PrintCursor(enum PokedexPageStatsWindows windowId);
static void PageInformation_CreatePage(void);
static void PageInformation_InitWindows(void);
static void PageInformation_HandleInput(u8 taskId);
static void PageInformation_PrintSpeciesData(u32 species);
static void PageInformation_PrintHeight(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageInformation_PrintWeight(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageInformation_PrintTypes(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageInformation_PrintFootprintTitle(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageInformation_DrawFootprintSprite(u32 species);
static void PageInformation_Footprint(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageInformation_PrintFormOrCategoryName(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageInformation_PrintDescAndSprites(u32 species);
static void PageInformation_PrintSpriteTitles(enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight);
static void PageInformation_PrintMonSprites(u32 species);
static void PageInformation_PrintSpeciesFlavor(u32 species);
static void PageStats_ChangeStatHighlightBasedOnValue(u32 statIndex, u32 value);
static void PageWeaknesses_InitWindows(void);
static void PageWeaknesses_CreatePage(void);
static void PageWeaknesses_HandleInput(u8 taskId);
static void PageWeaknesses_ToggleLegendStatus(u8 taskId);
static void PageWeaknesses_PrintWeaknessValues(u32 windowId, u32 fontId);
static void PageWeaknesses_PrintBackground(enum PokedexPageWeaknessesWindows windowId, u32 x, u32 y, u32 effectiveness, u32 width);
static void PageWeaknesses_CreateLegend(void);
static void PageWeaknesses_PrintLegendText(void);
static void PageWeaknesses_DrawWindowFrame(u32 windowId);
static void PageLocation_CreatePage(void);
static void PageLocation_InitWindows(void);
static void PageLocation_HandleInput(u8 taskId);

static void Page_SwitchToNextPage(u8 taskId);
static void Page_SwitchToLastPage(u8 taskId);
static void Task_PrepareScreenPageToPage(u8 taskId);
static enum PokedexPages CalculateTargetPage(s32 delta);
static void ClearPageData(void);
void SetAndSetUpCurrentPage(u8 taskId);

static const u16 pokedexPalettesFootprint[] = INCBIN_U16("graphics/pokedex/ui/palettes/footprint.gbapal");
static const u32 speciesListMonCursor[] = INCBIN_U32("graphics/pokedex/ui/species_list/mon.4bpp.smol");
static const u32 PageMoves_UpArrow_Gfx[] = INCBIN_U32("graphics/pokedex/ui/page/upArrow.4bpp.smol");
static const u32 PageMoves_DownArrow_Gfx[] = INCBIN_U32("graphics/pokedex/ui/page/downArrow.4bpp.smol");
static const u8 moveListCursor[] = INCBIN_U8("graphics/pokedex/ui/page/moveList_cursor_bmp.4bpp");
static const u8 evoListCursor[] = INCBIN_U8("graphics/pokedex/ui/page/evoList_cursor_bmp.4bpp");
static const u8 abilityListCursor[] = INCBIN_U8("graphics/pokedex/ui/page/abilityList_cursor_bmp.4bpp");
static const u32 sCategory_Gfx[] = INCBIN_U32("graphics/ui_menus/category/categories.4bpp.smol");
static const u16 sCategory_Palettes[] = INCBIN_U16("graphics/ui_menus/category/categories.gbapal");
static const u32 sTypes_Gfx15x14[] = INCBIN_U32("graphics/ui_menus/types/15x14/types.4bpp.smol");
static const u16 sTypePalettes[] = INCBIN_U16("graphics/types/types.gbapal");

static const u8 NEbackground[] = INCBIN_U8("graphics/pokedex/ui/page/ne_background_bmp.4bpp");
static const u8 SEbackground[] = INCBIN_U8("graphics/pokedex/ui/page/se_background_bmp.4bpp");

static const u8 learnIconMachine[] = INCBIN_U8("graphics/pokedex/ui/page/learnIconMachine.4bpp");
static const u8 learnIconLevel[] = INCBIN_U8("graphics/pokedex/ui/page/learnIconLevel.4bpp");
static const u8 learnIconEgg[] = INCBIN_U8("graphics/pokedex/ui/page/learnIconEgg.4bpp");

static const u8 speciesItemIcon[] = INCBIN_U8("graphics/pokedex/ui/page/statsItem_bmp.4bpp");

static const struct SpritePalette sPokedexInterfaceSpriteFootprintPalette =
{
    .data = pokedexPalettesFootprint,
    .tag = PAL_POKEDEX_UI_FOOTPRINT_SPRITES,
};

static const struct CompressedSpriteSheet sSpriteSheet_Type15x14 =
{
    .data = sTypes_Gfx15x14,
    .size = NUMBER_OF_MON_TYPES * (16 * 16),
    .tag = TAG_TERA_TYPE
};

void Page_SwitchFromGrid(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_WHITE);
    gTasks[taskId].func = Task_PrepareScreen_GridToPage;
}

static void Task_PrepareScreen_GridToPage(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SpeciesGrid_CleanUp(taskId);

    FreeSpritePalettesResetSpriteData();
    SpeciesData_ResetTypeSpriteId();

    FreeAllSpritePalettes();
    FreeBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();

    SetAndSetUpCurrentPage(taskId);
}

void SetAndSetUpCurrentPage(u8 taskId)
{
    enum PokedexPages pageId = gTasks[taskId].tTargetPageId;
    SetCurrentPage(pageId);
    InitializeBackgroundsAndLoadBackgroundGraphics();
    BeginNormalPaletteFade(PALETTES_ALL,0,16,0,RGB_WHITE);
    // PSF TODO
    // When loading assets on the pages, the following issues are visible during the palette fade
    // Use of FillPalette in Stats / Moves / Evo / Info (with colors appearing on the edges)
    Page_SetUp(taskId);
}

void (* const pageSetUpFuncLUT[])(void) =
{
    [POKEDEX_PAGE_INFORMATION] = PageInformation_CreatePage,
    [POKEDEX_PAGE_STATS] = PageStats_CreatePage,
    [POKEDEX_PAGE_EVOLUTION] = PageEvolution_CreatePage,
    [POKEDEX_PAGE_FORMS] = PageEvolution_CreatePage,
    [POKEDEX_PAGE_LOCATION] = PageLocation_CreatePage,
    [POKEDEX_PAGE_MOVES] = PageMoves_CreatePage,
    [POKEDEX_PAGE_WEAKNESSES] = PageWeaknesses_CreatePage,
};

void (* const pageInitWindows[])(void) =
{
    [POKEDEX_PAGE_INFORMATION] = PageInformation_InitWindows,
    [POKEDEX_PAGE_STATS] = PageStats_InitWindows,
    [POKEDEX_PAGE_EVOLUTION] = PageEvolution_InitWindows,
    [POKEDEX_PAGE_FORMS] = PageEvolution_InitWindows,
    [POKEDEX_PAGE_LOCATION] = PageLocation_InitWindows,
    [POKEDEX_PAGE_MOVES] = PageMoves_InitWindows,
    [POKEDEX_PAGE_WEAKNESSES] = PageWeaknesses_InitWindows,
};

static void Page_SetUp(u8 taskId)
{
    enum PokedexPages page = GetCurrentPage();

    if (AllocatePageStructs(page))
        Pokedex_FadescreenAndExitGracefully();

    pageInitWindows[page]();
    DestroyTask(taskId);
    pageSetUpFuncLUT[page]();
    CreateTask(pageInputTaskLUT[page],0);
    SpeciesGrid_PrintScrollbar();
    PrintMenuHeader();
}

void PageEvolution_BuildHeaderStringPlayCry(enum PokedexPages pageId)
{
    u32 species = PageEvolution_GetMonToDisplay();
    PokedexPage_PlaySpeciesCry(species,FALSE);
    StringCopy(gStringVar1,gSpeciesInfo[species].speciesName);
    PokedexPage_ConvertUpperToLowerCase(gStringVar1);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/{STR_VAR_1}/evolution"));
}

void PageForms_BuildHeaderStringPlayCry(enum PokedexPages pageId)
{
    u32 species = PageEvolution_GetMonToDisplay();
    PokedexPage_PlaySpeciesCry(species,FALSE);
    StringCopy(gStringVar1,gSpeciesInfo[species].speciesName);
    PokedexPage_ConvertUpperToLowerCase(gStringVar1);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/{STR_VAR_1}/forms"));
}

void PageMoves_BuildHeaderStringPlayCry(enum PokedexPages pageId)
{
    u32 species = PageMoves_GetMonToDisplay();
    PokedexPage_PlaySpeciesCry(species,FALSE);

    StringCopy(gStringVar1,gSpeciesInfo[species].speciesName);
    PokedexPage_ConvertUpperToLowerCase(gStringVar1);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/{STR_VAR_1}/moves"));

    if (ParentDisplay_GetWindowId() == WINDOW_NONE)
        return;

    StringAppend(gStringVar3,COMPOUND_STRING("/parents"));
}

static void PageMoves_SnapToLoadedCursorAndPosition(void)
{
    u32 moveId = PageMoves_GetTargetMove();
    u32 numMoves = PageMoves_GetNumMoves();

    if (moveId == MOVE_NONE)
    {
        PageMoves_ResetCurrentPositionInMoveList();
        PageMoves_ResetCursorPosition();
        return;
    }

    for (u32 q = 0; q < numMoves; q++)
    {
        if (PageMoves_GetMoveIdFromPosition(q) == moveId)
        {
            PageMoves_SetCurrentPositionInMoveList(q);
            PageMoves_ChangeCursorPosition();
        }
    }
}

static void PageMoves_LoadParent(u8 taskId)
{
    ParentDisplay_RemoveMenu();
    PageMoves_SetTargetMove(PageMoves_GetMoveIdFromPosition(PageMoves_GetCurrentPositionInMoveList()));
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_WHITE);
    gTasks[taskId].func = Task_PageMoves_LoadParent;
}

static void Task_PageMoves_LoadParent(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    HideBg(BG3_POKEDEX_BACKGROUND);
    pageSetUpFuncLUT[POKEDEX_PAGE_MOVES]();
    PrintMenuHeader();
    PrintHelpBar(PAGE_MOVES_WINDOW_FOOTER);
    ShowBg(BG3_POKEDEX_BACKGROUND);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_WHITE);
    gTasks[taskId].func = pageInputTaskLUT[POKEDEX_PAGE_MOVES];

}

static bool32 AllocatePageStructs(enum PokedexPages page)
{
    if (page == POKEDEX_PAGE_MOVES)
    {
        sPokedexMovesPageData = AllocZeroed(sizeof(struct PokedexMovesPageData));

        return (sPokedexMovesPageData == NULL);
    }
    else if (page == POKEDEX_PAGE_LOCATION)
    {
        sPokedexLocationPageData = AllocZeroed(sizeof(struct PokedexLocationPageData));

        return (sPokedexLocationPageData == NULL);
    }
    else if (page == POKEDEX_PAGE_WEAKNESSES)
    {
        return FALSE;
    }
    else if (page == POKEDEX_PAGE_EVOLUTION || page == POKEDEX_PAGE_FORMS || page == POKEDEX_PAGE_STATS)
    {
        sPokedexEvolutionPageData = AllocZeroed(sizeof(struct PokedexEvolutionPageData));

        return (sPokedexEvolutionPageData == NULL);
    }
    else if (page == POKEDEX_PAGE_INFORMATION)
    {
        return FALSE;
    }

    return TRUE;
}

static void PageEvolution_InitWindows(void)
{
    InitWindows(sPokedexPageEvolutionWindowTemplates);
    DeactivateAllTextPrinters();

    for(enum PokedexPageEvolutionWindows windowId = 0; windowId < PAGE_EVOLUTION_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void PageMoves_InitWindows(void)
{
    InitWindows(sPokedexPageMovesWindowTemplates);
    DeactivateAllTextPrinters();

    for(enum PokedexPageMovesWindows windowId = 0; windowId < PAGE_MOVES_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

void Task_PageMoves_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (!SpeciesGrid_GetFirstPageLoad())
        PageMoves_SetCategorySpriteVisibility(FALSE);

    SpeciesGrid_SetFirstPageLoad(FALSE);

    PageMoves_HandleInput(taskId);
}

void Task_PageEvolution_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    PageEvolution_HandleInput(taskId);
}

static void PageEvolution_HandleInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT))
        PageEvolutions_ChangeListPosition(-5);
    else if (JOY_NEW(DPAD_RIGHT))
        PageEvolutions_ChangeListPosition(1);
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        PageEvolutions_ChangeListPosition(-1);
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        PageEvolutions_ChangeListPosition(1);
    else if (JOY_NEW(B_BUTTON))
        PageMoves_SwitchToSpeciesGrid(taskId);
    else if (JOY_NEW(A_BUTTON))
    {
        gTasks[taskId].tPageDelta = 0;
        gTasks[taskId].tTargetPageId = POKEDEX_PAGE_STATS;
        ParentDisplay_SetFutureSpeciesId(PageEvolution_GetMonList(PageEvolution_GetMonListPosition()));
        FreePageStructs();
        Page_SwitchFromGrid(taskId);
        return;
    }
    else if (JOY_NEW(R_BUTTON))
        Page_SwitchToNextPage(taskId);
    else if (JOY_NEW(L_BUTTON))
        Page_SwitchToLastPage(taskId);
}

static void PageMoves_HandleInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT))
        PageMoves_ChangeListPosition(-5);
    else if (JOY_NEW(DPAD_RIGHT))
        PageMoves_ChangeListPosition(1);
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        PageMoves_ChangeListPosition(-1);
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        PageMoves_ChangeListPosition(1);
    else if (JOY_NEW(B_BUTTON))
        PageMoves_SwitchToSpeciesGrid(taskId);
    else if (JOY_NEW(A_BUTTON))
        PageMoves_SeeParents(taskId);
    else if (JOY_NEW(R_BUTTON))
        Page_SwitchToNextPage(taskId);
    else if (JOY_NEW(L_BUTTON))
        Page_SwitchToLastPage(taskId);
}

static void Page_SwitchToNextPage(u8 taskId)
{
    gTasks[taskId].tPageDelta = 1;
    gTasks[taskId].func = Task_PrepareScreenPageToPage;
}

static void Page_SwitchToLastPage(u8 taskId)
{
    gTasks[taskId].tPageDelta = -1;
    gTasks[taskId].func = Task_PrepareScreenPageToPage;
}

static void Task_PrepareScreenPageToPage(u8 taskId)
{
    if (gPaletteFade.active)
        return;
    if (ParentDisplay_GetFutureSpeciesId() == SPECIES_NONE)
    {
        u32 species = SpeciesGrid_GetCurrentSpecies();
        species = SpeciesData_CheckLastSeenForm(species);
        ParentDisplay_SetFutureSpeciesId(species);
    }

    gTasks[taskId].tTargetPageId = CalculateTargetPage(gTasks[taskId].tPageDelta);

    FreePageStructs();
    Page_SwitchFromGrid(taskId);
}

static enum PokedexPages CalculateTargetPage(s32 delta)
{
    enum PokedexPages current = GetCurrentPage();
    enum PokedexPages new = current + delta;
    u32 species = ParentDisplay_GetFutureSpeciesId();

    if (delta == -1)
    {
        if (new == POKEDEX_PAGE_FORMS)
            if (!SpeciesMenu_IsSpeciesRelatedForm(species))
                new--;

        if (new == POKEDEX_PAGE_EVOLUTION)
            if (!SpeciesMenu_IsSpeciesRelatedEvolution(species))
                new--;
    }
    else
    {
        if (new == POKEDEX_PAGE_EVOLUTION)
            if (!SpeciesMenu_IsSpeciesRelatedEvolution(species))
                new++;

        if (new == POKEDEX_PAGE_FORMS)
            if (!SpeciesMenu_IsSpeciesRelatedForm(species))
                new++;
    }

    if (new > POKEDEX_PAGE_WEAKNESSES)
        new = POKEDEX_PAGE_INFORMATION;

    if (new < POKEDEX_PAGE_INFORMATION)
        new = POKEDEX_PAGE_WEAKNESSES;

    return new;
}

static void PageMoves_SwitchToSpeciesGrid(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_PreapreScreenPageToGrid;
}

static void ClearPageData(void)
{
    SpeciesGrid_RemoveMonCursorSprite();
    SpeciesGrid_RemoveScrollbarSpriteId();
    SpeciesData_RemoveMonSprite();
    SpeciesData_RemoveTypeSprites();
    SpeciesData_RemoveHeaderSprite();
    SpeciesData_RemoveCaptureIndicator();
    SpeciesGrid_RemoveMonIcons();
    SpeciesGrid_RemoveCaptureIndicators();

    FreePageStructs();
    FreeBackgrounds();
    FreeAllWindowBuffers();
    FreeSpritePalettesResetSpriteData();
}

static void Task_PreapreScreenPageToGrid(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    ClearPageData();
    ParentDisplay_SetFutureSpeciesId(SPECIES_NONE);
    SetMainCallback2(Pokedex_SetupCallback);
}

static void FreePageStructs(void)
{
    enum PokedexPages page = GetCurrentPage();

    if (page == POKEDEX_PAGE_MOVES)
    {
        if (sPokedexMovesPageData != NULL)
            Free(sPokedexMovesPageData);
    }
    else if (page == POKEDEX_PAGE_EVOLUTION || page == POKEDEX_PAGE_FORMS || page == POKEDEX_PAGE_STATS)
    {
        if (sPokedexEvolutionPageData != NULL)
            Free(sPokedexEvolutionPageData);
    }
    else if (page == POKEDEX_PAGE_LOCATION)
    {
        if (sPokedexLocationPageData != NULL)
            Free(sPokedexLocationPageData);
    }
}

u8* GetMovePageHelpText(void)
{
    u8* end;
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();

    if (ParentDisplay_GetWindowId() != WINDOW_NONE)
    {
        end = StringCopy(gStringVar3, COMPOUND_STRING("{DPAD_NONE} Explore Parents {A_BUTTON} Load Parent Page {B_BUTTON} Return"));
    }
    else if (PageMoves_IsSelctedMoveEggMove(currentPosition))
    {
        end = StringCopy(gStringVar3, COMPOUND_STRING("{DPAD_UPDOWN} Explore {A_BUTTON} See Parents {R_BUTTON} Next Page {B_BUTTON} Return"));
    }
    else
    {
        end = StringCopy(gStringVar3, COMPOUND_STRING("{DPAD_UPDOWN} Explore {R_BUTTON} Next Page {B_BUTTON} Return"));
    }

    return end;
}

static bool32 PageMoves_IsSelctedMoveEggMove(u32 currentPosition)
{
    enum MoveLearnMethods methodId = PageMoves_GetMoveMethod(currentPosition);

    return (methodId == METHOD_EGG ||
            methodId == METHOD_LEVEL_EGG ||
            methodId == METHOD_EGG_MACHINE ||
            methodId == METHOD_ALL);
}

static bool32 IsMoveAlreadyAdded(u16 moveId, u32 overallIndex)
{
    for (u32 moveListIndex = 0; moveListIndex < overallIndex; moveListIndex++)
    {
        if (PageMoves_GetMoveIdFromPosition(moveListIndex) == moveId)
            return TRUE;
    }
    return FALSE;
}

static void AddMoveToList(u16 moveId, enum MoveLearnMethods method, u32 *overallIndex)
{
    PageMoves_SetMoveId(*overallIndex,moveId);
    PageMoves_SetMoveMethod(*overallIndex,method);
    (*overallIndex)++;
}

static void UpdateMoveMethodIfExists(u16 moveId, enum MoveLearnMethods newMethod, u32 overallIndex)
{
    for (u32 moveListIndex = 0; moveListIndex < overallIndex; moveListIndex++)
    {
        if (PageMoves_GetMoveIdFromPosition(moveListIndex) != moveId)
            continue;

        switch (PageMoves_GetMoveMethod(moveListIndex))
        {
            case METHOD_LEVEL:
                if (newMethod == METHOD_EGG)
                    PageMoves_SetMoveMethod(moveListIndex,METHOD_LEVEL_EGG);
                else if (newMethod == METHOD_MACHINE)
                    PageMoves_SetMoveMethod(moveListIndex,METHOD_MACHINE_LEVEL);
                break;
            case METHOD_EGG:
                if (newMethod == METHOD_MACHINE)
                    PageMoves_SetMoveMethod(moveListIndex,METHOD_EGG_MACHINE);
                break;
            case METHOD_MACHINE:
                if (newMethod == METHOD_EGG)
                    PageMoves_SetMoveMethod(moveListIndex,METHOD_EGG_MACHINE);
                break;
            default:
                break;
        }
        break;
    }
}

static bool32 IsMoveInSilicon(u32 moveId)
{
    for (u32 moveIndex = 0; moveIndex < MAX_MOVES_PER_LETTER; moveIndex++)
    {
        u32 listMoveId = residoMovesAZ[POKEDEX_FILTER_ALPHABET_ALL][moveIndex];

        if (moveId != listMoveId)
            continue;

        return TRUE;
    }
    return FALSE;
}

static void ProcessLevelUpMoves(const struct LevelUpMove *learnset, u32 *overallIndex)
{
    for (u32 moveIndex = 0; moveIndex < MAX_LEVEL_UP_MOVES; moveIndex++)
    {
        if (learnset[moveIndex].move == MOVE_NONE || learnset[moveIndex].move == MOVE_UNAVAILABLE)
            break;

        if (!IsMoveInSilicon(learnset[moveIndex].move))
            continue;

        if (!IsMoveAlreadyAdded(learnset[moveIndex].move, *overallIndex))
            AddMoveToList(learnset[moveIndex].move, METHOD_LEVEL, overallIndex);
    }
}

static void ProcessEggMoves(const u16 *eggMoveLearnset, u32 *overallIndex)
{
    for (u32 moveIndex = 0; moveIndex < EGG_MOVES_ARRAY_COUNT; moveIndex++)
    {
        if (eggMoveLearnset[moveIndex] == MOVE_NONE || eggMoveLearnset[moveIndex] == MOVE_UNAVAILABLE)
            break;

        if (!IsMoveInSilicon(eggMoveLearnset[moveIndex]))
            continue;

        if (!IsMoveAlreadyAdded(eggMoveLearnset[moveIndex], *overallIndex))
            AddMoveToList(eggMoveLearnset[moveIndex], METHOD_EGG, overallIndex);
        else
            UpdateMoveMethodIfExists(eggMoveLearnset[moveIndex], METHOD_EGG, *overallIndex);
    }
}

static void ProcessMachineMoves(const u16 *teachableLearnset, u32 *overallIndex)
{
    for (u32 moveIndex = 0; moveIndex < NUM_TECHNICAL_MACHINES; moveIndex++)
    {
        if (teachableLearnset[moveIndex] == MOVE_NONE || teachableLearnset[moveIndex] == MOVE_UNAVAILABLE)
            break;

        if (!IsMoveInSilicon(teachableLearnset[moveIndex]))
            continue;

        if (!IsMoveAlreadyAdded(teachableLearnset[moveIndex], *overallIndex))
            AddMoveToList(teachableLearnset[moveIndex], METHOD_MACHINE, overallIndex);
        else
            UpdateMoveMethodIfExists(teachableLearnset[moveIndex], METHOD_MACHINE, *overallIndex);
    }
}

u32 PageMoves_GetMonToDisplay(void)
{
    u32 species = ParentDisplay_GetFutureSpeciesId();

    if (species == SPECIES_NONE)
    {
        species = SpeciesGrid_GetCurrentSpecies();
    }
    species = SpeciesData_CheckLastSeenForm(species);
    return species;
}

static void PageMoves_PopulateMovesList(void)
{
    u32 overallIndex = 0;
    u32 species = PageMoves_GetMonToDisplay();
    u32 eggSpecies = GetEggSpecies(species);

    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);
    const u16 *eggMoveLearnset = GetSpeciesEggMoves(eggSpecies);
    const u16 *teachableLearnset = GetSpeciesTeachableLearnset(species);

    ProcessLevelUpMoves(learnset, &overallIndex);
    ProcessEggMoves(eggMoveLearnset, &overallIndex);
    ProcessMachineMoves(teachableLearnset, &overallIndex);

    PageMoves_SetNumMoves(overallIndex);
    Debug_PrintMovesList();
}

static void PageMoves_PrintMovesList(void)
{
    enum PokedexPageMovesWindows windowId = PAGE_MOVES_WINDOW_MOVES_LIST;
    u32 fontId = FONT_MOVES_LIST;
    u32 startingId = PageMoves_GetIdToPrint();
    u32 listId = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 lineHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    u32 x = 8, y = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    PageMoves_PrintCursor(windowId);
    PageMoves_RemoveTypeSprites();

    for (listId = 0; listId < NUM_MOVES_LIST_ROWS; listId++)
    {
        u32 moveId = PageMoves_GetMoveIdFromPosition(startingId + listId);

        if (moveId == MOVE_NONE)
            continue;

        PageMoves_BufferMoveNameToString(GetMoveName(moveId),gStringVar1,fontId, windowId);
        PageMoves_TypePrintTypeIcons(windowId,listId,moveId,y);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
        y += lineHeight;
    }

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageMoves_BufferMoveNameToString(const u8* string, u8* dest, u32 fontId, u32 windowId)
{
    u32 windowWidth = GetWindowAttribute(windowId, WINDOW_WIDTH) * TILE_SIZE_1BPP;
    PageStats_BufferAbilityDescColumn(string,dest,fontId,windowWidth);
}

static void PageStats_BufferAbilityDescColumn(const u8* string, u8* dest, u32 fontId, u32 maxWidth)
{
    u8 *end = StringCopy(dest,string);
    PrependFontIdToFit(dest, end, fontId, maxWidth);
}

static void PageMoves_SetNumMoves(u32 numMoves)
{
    sPokedexMovesPageData->numMoves = numMoves;
}

static u32 PageMoves_GetNumMoves(void)
{
    return sPokedexMovesPageData->numMoves;
}

static void Debug_PrintMonInFormsList(void)
{
    return;
    for (u32 a = 0; a < MAX_NUM_FORMS_EVOLUTIONS; a++)
    {
        DebugPrintf("Entry %02d: %d -> %d | Method: %d | Params: %d, %d, %d",
                a,
                PageEvolution_GetOriginalSpecies(a),
                PageEvolution_GetTargetSpecies(a),
                //GetSpeciesName(PageEvolution_GetOriginalSpecies(a)),
                //GetSpeciesName(PageEvolution_GetTargetSpecies(a)),
                PageEvolution_GetMethod(a),
                PageEvolution_GetArg1(a),
                PageEvolution_GetArg2(a),
                PageEvolution_GetArg3(a));
    }
}

static void Debug_PrintMovesList(void)
{
    return;
    u32 numMoves = PageMoves_GetNumMoves();
    u32 moveData;

    for (u32 i = 0; i < numMoves; i++)
    {
        moveData = PageMoves_GetMoveMethod(i);

        switch(moveData)
        {
            case METHOD_LEVEL_EGG:
                StringCopy(gStringVar1,COMPOUND_STRING("Egg Level"));
                break;
            case METHOD_EGG_MACHINE:
                StringCopy(gStringVar1,COMPOUND_STRING("Egg Machine"));
                break;
            case METHOD_MACHINE_LEVEL:
                StringCopy(gStringVar1,COMPOUND_STRING("Machine Level"));
                break;
            case METHOD_ALL:
                StringCopy(gStringVar1,COMPOUND_STRING("All Methods"));
                break;
            case METHOD_EGG:
                StringCopy(gStringVar1,COMPOUND_STRING("Egg Move"));
                break;
            case METHOD_LEVEL:
                StringCopy(gStringVar1,COMPOUND_STRING("Level Up:"));
                break;
            case METHOD_MACHINE:
                StringCopy(gStringVar1,COMPOUND_STRING("Item:"));
                break;
        }
    }
}

static void PageMoves_SetTargetMove(u32 moveId)
{
    sPokedexMovesPageData->targetMove = moveId;
}

static u32 PageMoves_GetTargetMove(void)
{
    return sPokedexMovesPageData->targetMove;
}

static u32 PageMoves_GetMoveIdFromPosition(u32 position)
{
    return sPokedexMovesPageData->moveList[position].speciesMoveId;
}

static u32 PageMoves_GetCurrentPositionInMoveList(void)
{
    return sPokedexMovesPageData->moveListPosition;
}

static void PageMoves_SetCurrentPositionInMoveList(s32 position)
{
    sPokedexMovesPageData->moveListPosition = position;
}

static u32 PageMoves_GetNumParents(void)
{
    return sPokedexMovesPageData->numParents;
}

static void PageMoves_SetNumParents(u32 numParents)
{
    sPokedexMovesPageData->numParents = numParents;
}

static void PageMoves_ResetCurrentPositionInMoveList(void)
{
    PageMoves_SetCurrentPositionInMoveList(0);
}

static void PageMoves_ResetCursorPosition(void)
{
    PageMoves_SetCursorPosition(0);
}

static u32 PageMoves_GetCursorPosition(void)
{
    return sPokedexMovesPageData->moveCursorCoordinate;
}

static void PageMoves_SetCursorPosition(u32 position)
{
    sPokedexMovesPageData->moveCursorCoordinate = position;
}

static void PageMoves_ChangeListPosition(s32 delta)
{
    s32 oldPosition = PageMoves_GetCurrentPositionInMoveList();
    s32 newPosition = oldPosition + delta;
    u32 numMoves = PageMoves_GetNumMoves();
    u32 maxListPosition = numMoves - 1;

    if (newPosition < 0)
        newPosition = maxListPosition;
    else if (newPosition > maxListPosition)
        newPosition = 0;

    if (newPosition == oldPosition)
        return;

    PlaySE(SE_SELECT);
    PageMoves_SetCurrentPositionInMoveList(newPosition);
    PageMoves_ChangeCursorPosition();
    PageMoves_PrintMove();
    PrintMoveLearnMethods();
    PrintHelpBar(PAGE_MOVES_WINDOW_FOOTER);
}

static void PageMoves_ChangeCursorPosition(void)
{
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();
    u32 numMoves = PageMoves_GetNumMoves();
    u32 maxListPosition = numMoves - 1;
    u32 pen = maxListPosition - 1;
    u32 cursor = 0;

    if (currentPosition == 0)
        cursor = currentPosition;
    else if (currentPosition == 1)
        cursor = currentPosition;
    else if (currentPosition == pen)
        cursor = MOVE_LIST_ROW_3;
    else if (currentPosition == maxListPosition)
        cursor = MOVE_LIST_ROW_4;
    else
        cursor = MOVES_LIST_SCREEN_BUFFER;

    PageMoves_SetCursorPosition(cursor);
}

static u32 PageMoves_GetIdToPrint(void)
{
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();
    u32 cursorPosition = PageMoves_GetCursorPosition();
    return (currentPosition - cursorPosition);
}

static void PageEvolution_CreatePage(void)
{
    enum PokedexPages page = GetCurrentPage();

    SpeciesData_ResetTypeSpriteId();
    SpeciesData_LoadCaptureIndicatorSprite();
    LoadTypeSpritesAndPalettes();
    SpeciesData_LoadHeaderSprite();
    PageEvolutionForms_PopulateList(page);
    PageEvolutions_ChangeListPosition(PageEvolutions_MovePositionToTarget());
    PageEvolution_PrintPageSprites();
    PageEvolutions_PrintEvolution(page);
    PrintHelpBar(PAGE_EVOLUTION_WINDOW_FOOTER);
}

static void PageEvolutionForms_PopulateList(enum PokedexPages page)
{
    PageForms_ResetFormList();

    if (page == POKEDEX_PAGE_EVOLUTION)
        PageEvolution_PopulateEvolutionsList();
    else
        PageForm_PopulateFormList();
}

static void PageMoves_CreatePage(void)
{
    LoadCategorySpritesAndPalettes();
    LoadMoveTypeSpritesAndPalettes();
    LoadMonIconPalettes();
    ParentDisplay_SetWindowId(WINDOW_NONE);
    PageMoves_PopulateMovesList();
    PageMoves_SnapToLoadedCursorAndPosition();
    PageMoves_PrintMove();
    SpeciesGrid_SetFirstPageLoad(TRUE);
    PrintMoveLearnMethods();
    PrintHelpBar(PAGE_MOVES_WINDOW_FOOTER);
}

static void PageMoves_PrintMove(void)
{
    PageMoves_PrintMovesList();
    PageMoves_PrintMoveInfo();
    PageMoves_PrintMoveDesc();
}

static const u8* const moveDataPrefix[] =
{
    [POKEDEX_PAGE_MOVE_DATA_PP] = COMPOUND_STRING("PP:"),
    [POKEDEX_PAGE_MOVE_DATA_POWER] = COMPOUND_STRING("PWR:"),
    [POKEDEX_PAGE_MOVE_DATA_CATEGORY] = COMPOUND_STRING(""),
    [POKEDEX_PAGE_MOVE_DATA_ACC] = COMPOUND_STRING("ACC:"),
};

static const u8* const speciesFormNames[] =
{
    [SPECIES_CHERRIM_SUNSHINE] =        COMPOUND_STRING("Sunshine Form"),
    [SPECIES_CHERRIM_OVERCAST] =        COMPOUND_STRING("Overcast Form"),
    [SPECIES_ROTOM] =               COMPOUND_STRING("Light Bulb"),
    [SPECIES_ROTOM_FAN] =               COMPOUND_STRING("Fan"),
    [SPECIES_ROTOM_HEAT] =              COMPOUND_STRING("Heat"),
    [SPECIES_ROTOM_MOW] =               COMPOUND_STRING("Mow"),
    [SPECIES_ROTOM_FROST] =             COMPOUND_STRING("Frost"),
    [SPECIES_ROTOM_WASH] =              COMPOUND_STRING("Wash"),
    [SPECIES_VIVILLON_ICY_SNOW] =       COMPOUND_STRING("Icy_Snow"),
    [SPECIES_VIVILLON_POLAR] =          COMPOUND_STRING("Polar"),
    [SPECIES_VIVILLON_TUNDRA] =         COMPOUND_STRING("Tundra"),
    [SPECIES_VIVILLON_CONTINENTAL] =    COMPOUND_STRING("Continental"),
    [SPECIES_VIVILLON_GARDEN] =         COMPOUND_STRING("Garden"),
    [SPECIES_VIVILLON_ELEGANT] =        COMPOUND_STRING("Elegant"),
    [SPECIES_VIVILLON_MEADOW] =         COMPOUND_STRING("Meadow"),
    [SPECIES_VIVILLON_MODERN] =         COMPOUND_STRING("Modern"),
    [SPECIES_VIVILLON_MARINE] =         COMPOUND_STRING("Marine"),
    [SPECIES_VIVILLON_ARCHIPELAGO] =    COMPOUND_STRING("Archipelago"),
    [SPECIES_VIVILLON_HIGH_PLAINS] =    COMPOUND_STRING("High Plains"),
    [SPECIES_VIVILLON_SANDSTORM] =      COMPOUND_STRING("Sandstorm"),
    [SPECIES_VIVILLON_RIVER] =          COMPOUND_STRING("River"),
    [SPECIES_VIVILLON_MONSOON] =        COMPOUND_STRING("Monsoon"),
    [SPECIES_VIVILLON_SAVANNA] =        COMPOUND_STRING("Savanna"),
    [SPECIES_VIVILLON_SUN] =            COMPOUND_STRING("Sun"),
    [SPECIES_VIVILLON_OCEAN] =          COMPOUND_STRING("Ocean"),
    [SPECIES_VIVILLON_JUNGLE] =         COMPOUND_STRING("Jungle"),
    [SPECIES_VIVILLON_FANCY] =          COMPOUND_STRING("Fancy"),
    [SPECIES_VIVILLON_POKEBALL] =       COMPOUND_STRING("Pokéball"),
    [SPECIES_FLABEBE_RED] =             COMPOUND_STRING("Red Flower"),
    [SPECIES_FLABEBE_YELLOW] =          COMPOUND_STRING("Yellow Flower"),
    [SPECIES_FLABEBE_ORANGE] =          COMPOUND_STRING("Orange Flower"),
    [SPECIES_FLABEBE_BLUE] =            COMPOUND_STRING("Blue Flower"),
    [SPECIES_FLABEBE_WHITE] =           COMPOUND_STRING("White Flower"),
    [SPECIES_FLOETTE_RED] =             COMPOUND_STRING("Red Flower"),
    [SPECIES_FLOETTE_YELLOW] =          COMPOUND_STRING("Yellow Flower"),
    [SPECIES_FLOETTE_ORANGE] =          COMPOUND_STRING("Orange Flower"),
    [SPECIES_FLOETTE_BLUE] =            COMPOUND_STRING("Blue Flower"),
    [SPECIES_FLOETTE_WHITE] =           COMPOUND_STRING("White Flower"),
    [SPECIES_FLORGES_RED] =             COMPOUND_STRING("Red Flower"),
    [SPECIES_FLORGES_YELLOW] =          COMPOUND_STRING("Yellow Flower"),
    [SPECIES_FLORGES_ORANGE] =          COMPOUND_STRING("Orange Flower"),
    [SPECIES_FLORGES_BLUE] =            COMPOUND_STRING("Blue Flower"),
    [SPECIES_FLORGES_WHITE] =           COMPOUND_STRING("White Flower"),
    [SPECIES_AEGISLASH_SHIELD] =        COMPOUND_STRING("Shield Forme"),
    [SPECIES_AEGISLASH_BLADE] =         COMPOUND_STRING("Blade Forme"),
    [SPECIES_ORICORIO_BAILE] =          COMPOUND_STRING("Baile Style"),
    [SPECIES_ORICORIO_POM_POM] =        COMPOUND_STRING("Pom-Pom Style"),
    [SPECIES_ORICORIO_PAU] =            COMPOUND_STRING("Pa'u Style"),
    [SPECIES_ORICORIO_SENSU] =          COMPOUND_STRING("Sensu Style"),
    [SPECIES_WISHIWASHI_SOLO] =         COMPOUND_STRING("Solo Form"),
    [SPECIES_WISHIWASHI_SCHOOL] =       COMPOUND_STRING("School Form"),
    [SPECIES_MINIOR_METEOR] =           COMPOUND_STRING("Meteor Form"),
    [SPECIES_EGG] =         COMPOUND_STRING("Core Form"),
    [SPECIES_MINIOR_CORE_RED] =         COMPOUND_STRING("Red Core"),
    [SPECIES_MINIOR_CORE_ORANGE] =      COMPOUND_STRING("Orange Core"),
    [SPECIES_MINIOR_CORE_YELLOW] =      COMPOUND_STRING("Yellow Core"),
    [SPECIES_MINIOR_CORE_GREEN] =       COMPOUND_STRING("Green Core"),
    [SPECIES_MINIOR_CORE_BLUE] =        COMPOUND_STRING("Blue Core"),
    [SPECIES_MINIOR_CORE_INDIGO] =      COMPOUND_STRING("Indigo Core"),
    [SPECIES_MINIOR_CORE_VIOLET] =      COMPOUND_STRING("Violet Core"),
    [SPECIES_CRAMORANT_GULPING] =       COMPOUND_STRING("Gulping Form"),
    [SPECIES_CRAMORANT_GORGING] =       COMPOUND_STRING("Gorging Form"),
    [SPECIES_SINISTEA_PHONY] =          COMPOUND_STRING("Phony Form"),
    [SPECIES_SINISTEA_ANTIQUE] =        COMPOUND_STRING("Antique Form"),
    [SPECIES_POLTEAGEIST_PHONY] =       COMPOUND_STRING("Phony Form"),
    [SPECIES_POLTEAGEIST_ANTIQUE] =     COMPOUND_STRING("Antique Form"),
    [SPECIES_EISCUE_NOICE] =            COMPOUND_STRING("Noice Face"),
    [SPECIES_EISCUE_ICE] =              COMPOUND_STRING("Ice Face"),
    [SPECIES_URSHIFU_RAPID_STRIKE] =    COMPOUND_STRING("Rapid Strike"),
    [SPECIES_URSHIFU_SINGLE_STRIKE] =   COMPOUND_STRING("Single Strike"),
    [SPECIES_URSALUNA_BLOODMOON] =      COMPOUND_STRING("Bloodmoon"),
    [SPECIES_MAUSHOLD_THREE] =          COMPOUND_STRING("Family of Three"),
    [SPECIES_MAUSHOLD_FOUR] =           COMPOUND_STRING("Family of Four"),
    [SPECIES_SQUAWKABILLY_GREEN] =      COMPOUND_STRING("Green Plumage"),
    [SPECIES_SQUAWKABILLY_BLUE] =       COMPOUND_STRING("Blue Plumage"),
    [SPECIES_SQUAWKABILLY_YELLOW] =     COMPOUND_STRING("Yellow Plumage"),
    [SPECIES_SQUAWKABILLY_WHITE] =      COMPOUND_STRING("White Plumage"),
    [SPECIES_PALAFIN_HERO] =            COMPOUND_STRING("Hero Form"),
    [SPECIES_PALAFIN_ZERO] =            COMPOUND_STRING("Zero Form"),
    [SPECIES_TATSUGIRI_CURLY] =         COMPOUND_STRING("Curly Form"),
    [SPECIES_TATSUGIRI_DROOPY] =        COMPOUND_STRING("Droopy Form"),
    [SPECIES_TATSUGIRI_STRETCHY] =      COMPOUND_STRING("Stretchy Form"),
    [SPECIES_GIMMIGHOUL_CHEST] =        COMPOUND_STRING("Chest Form"),
    [SPECIES_GIMMIGHOUL_ROAMING] =      COMPOUND_STRING("Roaming Form"),
    [SPECIES_SILVALLY_NORMAL] =         COMPOUND_STRING("Normal"),
    [SPECIES_SILVALLY_FIGHTING] =       COMPOUND_STRING("Fighting"),
    [SPECIES_SILVALLY_FLYING] =         COMPOUND_STRING("Flying"),
    [SPECIES_SILVALLY_POISON] =         COMPOUND_STRING("Poison"),
    [SPECIES_SILVALLY_GROUND] =         COMPOUND_STRING("Ground"),
    [SPECIES_SILVALLY_ROCK] =           COMPOUND_STRING("Rock"),
    [SPECIES_SILVALLY_BUG] =            COMPOUND_STRING("Bug"),
    [SPECIES_SILVALLY_GHOST] =          COMPOUND_STRING("Ghost"),
    [SPECIES_SILVALLY_STEEL] =          COMPOUND_STRING("Steel"),
    [SPECIES_SILVALLY_FIRE] =           COMPOUND_STRING("Fire"),
    [SPECIES_SILVALLY_WATER] =          COMPOUND_STRING("Water"),
    [SPECIES_SILVALLY_GRASS] =          COMPOUND_STRING("Grass"),
    [SPECIES_SILVALLY_ELECTRIC] =       COMPOUND_STRING("Electric"),
    [SPECIES_SILVALLY_PSYCHIC] =        COMPOUND_STRING("Psychic"),
    [SPECIES_SILVALLY_ICE] =            COMPOUND_STRING("Ice"),
    [SPECIES_SILVALLY_DRAGON] =         COMPOUND_STRING("Dragon"),
    [SPECIES_SILVALLY_DARK] =           COMPOUND_STRING("Dark"),
    [SPECIES_SILVALLY_FAIRY] =          COMPOUND_STRING("Fairy"),
};

static const u8 moveDataCoordinates[][2] =
{
    [AXIS_X] = {3, 54},
    [AXIS_Y] = {11, 22},
};

enum UDDirections
{
    DATA_UP,
    DATA_DOWN,
};

enum LRDirections
{
    DATA_LEFT,
    DATA_RIGHT,
};

static void PageMoves_PrintMoveInfo(void)
{
    enum PokedexPageMovesWindows windowId = PAGE_MOVES_WINDOW_MOVES_DATA;
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();
    u32 moveId = PageMoves_GetMoveIdFromPosition(currentPosition);

    u32 fontId = FONT_MOVES_DATA;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 0, y = 0, numDigits = 0, value = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PageMoves_PrintMoveTypeName();

    for (u32 listId = 0; listId < POKEDEX_PAGE_MOVE_DATA_COUNT; listId++)
    {
        switch (listId)
        {
            case POKEDEX_PAGE_MOVE_DATA_PP:
                x = moveDataCoordinates[AXIS_X][DATA_LEFT];
                y = moveDataCoordinates[AXIS_Y][DATA_UP];
                value = GetMovePP(moveId);
                numDigits = CountDigits(value);
                StringCopy(gStringVar1, moveDataPrefix[listId]);
                ConvertIntToDecimalStringN(gStringVar2,value,STR_CONV_MODE_LEFT_ALIGN,numDigits);
                StringAppend(gStringVar1,gStringVar2);
                break;
            case POKEDEX_PAGE_MOVE_DATA_POWER:
                x = moveDataCoordinates[AXIS_X][DATA_RIGHT];
                y = moveDataCoordinates[AXIS_Y][DATA_UP];
                value = GetMovePower(moveId);
                if (!value)
                {
                    StringCopy(gStringVar1,COMPOUND_STRING(""));
                    break;
                }
                numDigits = CountDigits(value);
                StringCopy(gStringVar1, moveDataPrefix[listId]);
                ConvertIntToDecimalStringN(gStringVar2, value ,STR_CONV_MODE_LEFT_ALIGN,numDigits);
                StringAppend(gStringVar1,gStringVar2);
                break;
            case POKEDEX_PAGE_MOVE_DATA_ACC:
                x = moveDataCoordinates[AXIS_X][DATA_RIGHT];
                y = moveDataCoordinates[AXIS_Y][DATA_DOWN];
                value = GetMoveAccuracy(moveId);
                numDigits = CountDigits(value);
                StringCopy(gStringVar1, moveDataPrefix[listId]);
                if (!value)
                    StringCopy(gStringVar2,COMPOUND_STRING("-"));
                else
                    ConvertIntToDecimalStringN(gStringVar2,value,STR_CONV_MODE_LEFT_ALIGN,numDigits);
                StringAppend(gStringVar1,gStringVar2);
                break;
            default:
            case POKEDEX_PAGE_MOVE_DATA_CATEGORY:
                u8* end;
                x = moveDataCoordinates[AXIS_X][DATA_LEFT];
                y = moveDataCoordinates[AXIS_Y][DATA_DOWN];
                end = StringCopy(gStringVar1,GetMoveCategoryName(moveId));
                PrependFontIdToFit(gStringVar1,end,fontId,33);
                break;
        }
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
    }
    PageMoves_PrintMoveCategorySprite(moveId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageMoves_PrintMoveDesc(void)
{
    enum PokedexPageMovesWindows windowId = PAGE_MOVES_WINDOW_MOVES_DESC;
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();
    u32 moveId = PageMoves_GetMoveIdFromPosition(currentPosition);

    u32 fontId = FONT_MOVES_DESC;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 4, y = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    StringCopy(gStringVar1,GetMoveDesc(moveId));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageMoves_PrintMoveTypeName(void)
{
    enum PokedexPageMovesWindows windowId = PAGE_MOVES_WINDOW_MOVES_DATA;
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();
    u32 moveId = PageMoves_GetMoveIdFromPosition(currentPosition);
    u32 moveType = GetMoveType(moveId);

    u32 x = 2;
    u32 y = 0;
    u32 fontId = FONT_MOVES_TYPE_NAME;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 colorConst = PageMoves_GetContrastColor(moveType);

    FillPalette(gTypesInfo[moveType].siliconRGBValue,POKEDEX_TYPE_WINDOW_COLOR_ADDRESS, 2);

    StringCopy(gStringVar1,gTypesInfo[moveType].name);
    StringAppend(gStringVar1,COMPOUND_STRING("-type"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[colorConst], TEXT_SKIP_DRAW, gStringVar1);
}

static u32 PageMoves_GetContrastColor(u32 moveType)
{
    if (moveType == TYPE_NORMAL
            || moveType == TYPE_FIGHTING
            || moveType == TYPE_FLYING
            || moveType == TYPE_POISON
            || moveType == TYPE_GROUND
            || moveType == TYPE_ROCK
            || moveType == TYPE_BUG
            || moveType == TYPE_STEEL
            || moveType == TYPE_MYSTERY
            || moveType == TYPE_FIRE
            || moveType == TYPE_WATER
            || moveType == TYPE_GRASS
            || moveType == TYPE_ELECTRIC
            || moveType == TYPE_PSYCHIC
            || moveType == TYPE_ICE
            || moveType == TYPE_FAIRY
            || moveType == TYPE_STELLAR
       )
    {
        return POKEDEX_FONT_COLOR_BLACK;
    }
    return POKEDEX_FONT_COLOR_WHITE;
}

u32 PageMoves_CalculateScrollbarYPosition(void)
{
    u32 currentRowNumber = PageMoves_GetCurrentPositionInMoveList();
    u32 totalRowNumber = PageMoves_GetNumMoves();

    if (currentRowNumber == 0)
        return (MIN_MOVES_PAGE_SCROLLBAR_Y);
    else if (currentRowNumber == totalRowNumber)
        return (MIN_MOVES_PAGE_SCROLLBAR_Y + MOVEABLE_AREA_MOVES_PAGE_SCROLLBAR);
    else
        return MIN_MOVES_PAGE_SCROLLBAR_Y + ((currentRowNumber * 100 / totalRowNumber) * MOVEABLE_AREA_MOVES_PAGE_SCROLLBAR / 100);

    return MIN_MOVES_PAGE_SCROLLBAR_Y;
}

static void PageMoves_PrintCursor(enum PokedexPageMovesWindows windowId)
{
    u32 y = 2 + (PageMoves_GetCursorPosition() * MOVE_LIST_CURSOR_PADDING);
    u32 x = 5;
    u32 width = MOVE_LIST_CURSOR_WIDTH;
    u32 height = MOVE_LIST_CURSOR_HEIGHT;

    BlitBitmapToWindow(windowId, moveListCursor, x, y , width, height);
}

static const struct OamData sOamData_Category =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sSpriteAnim_CategoryPhysical[] =
{
    ANIMCMD_FRAME(DAMAGE_CATEGORY_PHYSICAL * 4, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_CategorySpecial[] =
{
    ANIMCMD_FRAME(DAMAGE_CATEGORY_SPECIAL * 4, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_CategoryStatus[] =
{
    ANIMCMD_FRAME(DAMAGE_CATEGORY_STATUS * 4, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_Category[DAMAGE_CATEGORY_COUNT] =
{
    [DAMAGE_CATEGORY_PHYSICAL] = sSpriteAnim_CategoryPhysical,
    [DAMAGE_CATEGORY_SPECIAL] = sSpriteAnim_CategorySpecial,
    [DAMAGE_CATEGORY_STATUS] = sSpriteAnim_CategoryStatus,
};

static const struct SpriteTemplate sSpriteTemplate_Category =
{
    .tileTag = TAG_CATEGORY,
    .paletteTag = TAG_CATEGORY,
    .oam = &sOamData_Type,
    .anims = sSpriteAnimTable_Category,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static void PageMoves_CreateCategorySprite(void)
{
    u32 oldSpriteId = PageMoves_GetMoveCategorySpriteId();

    if (oldSpriteId != MAX_SPRITES)
        return;

    PageMoves_SaveCategorySpriteId(CreateSprite(&sSpriteTemplate_Category, 0, 0, 2));

    PageMoves_SetCategorySpriteVisibility(TRUE);
}

u32 PageMoves_GetMoveCategorySpriteId(void)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_PAGE_MOVES_CATEGORY];
}

static void PageMoves_SaveCategorySpriteId(u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_PAGE_MOVES_CATEGORY] = spriteId;
}

void PageMoves_ResetCategorySpriteId(void)
{
    PageMoves_SaveCategorySpriteId(MAX_SPRITES);
}

static void PageMoves_SetCategorySpriteVisibility(bool32 invisible)
{
    gSprites[PageMoves_GetMoveCategorySpriteId()].invisible = invisible;
}

static void PageMoves_PrintMoveCategorySprite(u32 moveId)
{
    PageMoves_CreateCategorySprite();
    PageMoves_SetCategorySpriteAttributes(moveId);
}

static void PageMoves_SetCategorySpritePositionAndPalette(u32 categoryId, u32 x, u32 y)
{
    u32 spriteId = PageMoves_GetMoveCategorySpriteId();
    struct Sprite *sprite = &gSprites[spriteId];

    StartSpriteAnim(sprite, categoryId);
    sprite->x = x;
    sprite->y = y;
    sprite->oam.paletteNum = PAL_SLOT_MON_SPRITE;

    if (!SpeciesGrid_GetFirstPageLoad())
        PageMoves_SetCategorySpriteVisibility(FALSE);
}

static void PageMoves_SetCategorySpriteAttributes(u32 moveId)
{
    u32 x = 44;
    u32 y = 97;
    u32 category = GetMoveCategory(moveId);

    PageMoves_SetCategorySpritePositionAndPalette(category, x, y);
}

static const struct CompressedSpriteSheet sSpriteSheet_Category =
{
    .data = sCategory_Gfx,
    .size = DAMAGE_CATEGORY_COUNT * (16 * 16),
    .tag = TAG_CATEGORY,
};

void LoadCategorySpritesAndPalettes(void)
{
    LoadPalette(sCategory_Palettes, OBJ_PLTT_ID(PAL_SLOT_MON_SPRITE), PLTT_SIZE_4BPP);
    LoadCompressedSpriteSheet(&sSpriteSheet_Category);
}

static void PageMoves_TypePrintTypeIcons(enum PokedexPageMovesWindows windowId, enum MoveListRow rowId, u32 moveId, u32 y)
{
    u32 x = 225;
    u32 buffer = TILE_SIZE_1BPP * (GetWindowAttribute(windowId,WINDOW_TILEMAP_TOP));
    u32 typeId = GetMoveType(moveId);
    y = 10 + buffer + (15 * rowId);

    PageMoves_EditPage_SaveTypeSpriteId(rowId, CreateSprite(&sSpriteTemplate_Type13x13, 0, 0, 2));
    PageMoves_EditPage_SetTypeSpritePositionAndPalette(typeId,x,y, rowId);
}

static u32 PageMoves_EditPage_GetTypeSpriteId(u32 typeId)
{
    return sPokedexGridResources->editPageTypeIcons[typeId];
}

static void PageMoves_EditPage_SaveTypeSpriteId(u32 typeId, u32 spriteId)
{
    sPokedexGridResources->editPageTypeIcons[typeId] = spriteId;
}

static void PageMoves_EditPage_SetTypeSpritePositionAndPalette(u32 typeId, u32 x, u32 y, enum MoveListRow rowId)
{
    u32 spriteId = PageMoves_EditPage_GetTypeSpriteId(rowId);
    struct Sprite *sprite = &gSprites[spriteId];

    StartSpriteAnim(sprite, typeId);
    sprite->x = x;
    sprite->y = y;
    sprite->oam.paletteNum = gTypesInfo[typeId].palette;
}

static void LoadMoveTypeSpritesAndPalettes(void)
{
    LoadPalette(sTypePalettes, OBJ_PLTT_ID(PAL_SLOT_MON_TYPE), 3 * PLTT_SIZE_4BPP);
    LoadCompressedSpriteSheet(&sSpriteSheet_Type15x14);
}

static void PageMoves_RemoveTypeSprites(void)
{
    for (enum MoveListRow rowId = 0; rowId < NUM_MOVES_LIST_ROWS; rowId++)
    {
        u32 spriteId = PageMoves_EditPage_GetTypeSpriteId(rowId);

        if (spriteId == MAX_SPRITES)
            return;

        DestroySprite(&gSprites[spriteId]);
        PageMoves_ResetTypeSpriteId(rowId);
    }
}

static void PageMoves_ResetTypeSpriteId(enum MoveListRow rowId)
{
    PageMoves_EditPage_SaveTypeSpriteId(rowId, MAX_SPRITES);
}

const u8 *const sMethodTexts[] =
{
    [METHOD_LEVEL] = COMPOUND_STRING("Learned at {LV} {STR_VAR_1}"),
    [METHOD_EGG] = COMPOUND_STRING("Egg Move: {A_BUTTON} See Parents"),
    [METHOD_MACHINE] = COMPOUND_STRING("Learned from {STR_VAR_1}"),
};

static enum MoveLearnMethods PageMoves_GetMoveMethod(u32 currentPosition)
{
    return sPokedexMovesPageData->moveList[currentPosition].method;
}

static void PageMoves_SetMoveMethod(u32 currentPosition, enum MoveLearnMethods method)
{
    sPokedexMovesPageData->moveList[currentPosition].method = method;
}

static void PageMoves_SetMoveId(u32 currentPosition, u32 moveId)
{
    sPokedexMovesPageData->moveList[currentPosition].speciesMoveId= moveId;
}

static void PrintMoveLearnMethods(void)
{
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();
    enum MoveLearnMethods methodId = PageMoves_GetMoveMethod(currentPosition);
    enum PokedexPageMovesWindows windowId = PAGE_MOVES_WINDOW_LEARN_METHOD;
    u32 species = PageMoves_GetMonToDisplay();
    u32 fontId = FONT_MOVES_LEARN_METHOD;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch(methodId)
    {
        default:
        case METHOD_LEVEL:
            PageMoves_PrintLevelMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);
            break;
        case METHOD_EGG:
            PageMoves_PrintEggMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);            break;
        case METHOD_MACHINE:
            PageMoves_PrintMachineMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);            break;
        case METHOD_EGG_MACHINE:
            PageMoves_PrintEggMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);
            PageMoves_PrintMachineMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);
            break;
        case METHOD_MACHINE_LEVEL:
            PageMoves_PrintLevelMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);
            PageMoves_PrintMachineMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);
            break;
        case METHOD_LEVEL_EGG:
            PageMoves_PrintLevelMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);
            PageMoves_PrintEggMethod(species, currentPosition, fontId, letterSpacing, lineSpacing, windowId);
            break;
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

void PageMoves_PrintLevelMethod(u32 species, u32 currentPosition, u32 fontId, u32 letterSpacing, u32 lineSpacing, enum PokedexPageMovesWindows windowId)
{
    u32 moveId = PageMoves_GetMoveIdFromPosition(currentPosition);
    u32 moveIndex;
    u32 x = 2;
    u32 y = 0;
    u8 *end;

    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);

    BlitBitmapToWindow(windowId,learnIconLevel,x,y,TILE_SIZE_1BPP,TILE_SIZE_1BPP);

    x+=POKEDEX_PAGE_MOVES_LEARN_ICON_RIGHT_PADDING;

    for (moveIndex = 0; moveIndex < MAX_LEVEL_UP_MOVES; moveIndex++)
    {
        if (learnset[moveIndex].move != moveId)
            continue;

        ConvertIntToDecimalStringN(gStringVar1,learnset[moveIndex].level,STR_CONV_MODE_LEFT_ALIGN,CountDigits(MAX_LEVEL));
        break;
    }

    end = StringExpandPlaceholders(gStringVar3, sMethodTexts[METHOD_LEVEL]);
    PrependFontIdToFit(gStringVar3, end, fontId, (GetWindowAttribute(windowId, WINDOW_WIDTH)-x));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar3);

}

void PageMoves_PrintEggMethod(u32 species, u32 currentPosition, u32 fontId, u32 letterSpacing, u32 lineSpacing, enum PokedexPageMovesWindows windowId)
{
    u32 x = 2;
    enum MoveLearnMethods methodId = METHOD_EGG;
    u32 y = methodId * GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    u8 *end;

    BlitBitmapToWindow(windowId,learnIconEgg,x,y,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
    x+=POKEDEX_PAGE_MOVES_LEARN_ICON_RIGHT_PADDING;

    end = StringCopy(gStringVar3,sMethodTexts[methodId]);
    PrependFontIdToFit(gStringVar3, end, fontId, (GetWindowAttribute(windowId, WINDOW_WIDTH)-x));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar3);
}
void PageMoves_PrintMachineMethod(u32 species, u32 currentPosition, u32 fontId, u32 letterSpacing, u32 lineSpacing, enum PokedexPageMovesWindows windowId)
{
    u32 x = 2;
    enum MoveLearnMethods methodId = METHOD_MACHINE;
    u32 y = methodId * GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    u8 *end;

    BlitBitmapToWindow(windowId,learnIconMachine,x,y,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
    x+=POKEDEX_PAGE_MOVES_LEARN_ICON_RIGHT_PADDING;

    CopyItemName(ITEM_NONE,gStringVar1); // PSF TODO Gen 3 TMs need to be removed from learnsets because some moves like Pidgeot Steel Wing are showing up but don't have a matching TM

    for (u32 machineIndex = 0; machineIndex < NUM_TECHNICAL_MACHINES; machineIndex++)
    {
        u32 machineId = ITEM_TM01 + machineIndex;

        if (PageMoves_GetMoveIdFromPosition(currentPosition) != GetItemSecondaryId(machineId))
            continue;

        CopyItemName(machineId,gStringVar1);
        break;
    }
    end = StringExpandPlaceholders(gStringVar3, sMethodTexts[methodId]);
    PrependFontIdToFit(gStringVar3, end, fontId, (GetWindowAttribute(windowId, WINDOW_WIDTH)-x));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar3);
}

static bool32 SharesEggGroup(u32 mon1, u32 mon2)
{
    for (u32 i = 0; i < EGG_GROUPS_PER_MON; i++)
    {
        if (gSpeciesInfo[mon1].eggGroups[i] == gSpeciesInfo[mon2].eggGroups[0] ||
                gSpeciesInfo[mon1].eggGroups[i] == gSpeciesInfo[mon2].eggGroups[1])
        {
            return TRUE;
        }
    }
    return FALSE;
}

static bool32 IsValidParent(u32 parentMon, u32 targetSpecies, u32 moveId, u32 resultIndex)
{
    if (parentMon == SPECIES_NONE)
        return FALSE;

    if ((GET_BASE_SPECIES_ID(parentMon)) != parentMon)
        return FALSE;

    if (!SharesEggGroup(parentMon, targetSpecies))
        return FALSE;

    if (SpeciesFilter_CheckEvolutionStatus(parentMon, CHECK_CAN_EVOLVE))
        return FALSE;

    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(parentMon);

    for (u32 learnsetIndex = 0; learnsetIndex < MAX_LEVEL_UP_MOVES && learnset[learnsetIndex].move != LEVEL_UP_MOVE_END; learnsetIndex++)
        if (learnset[learnsetIndex].move == moveId)
        {
            PageMoves_SetParentMoveMethod(resultIndex,METHOD_LEVEL);
            break;
        }

    if (CanLearnTeachableMove(parentMon,moveId))
    {
        if (PageMoves_GetParentMoveMethod(resultIndex) == METHOD_LEVEL)
            PageMoves_SetParentMoveMethod(resultIndex,METHOD_MACHINE_LEVEL);
        else
            PageMoves_SetParentMoveMethod(resultIndex,METHOD_MACHINE);
    }

    if (SpeciesCanLearnEggMove(parentMon,moveId))
    {
        if (PageMoves_GetParentMoveMethod(resultIndex) == METHOD_LEVEL)
            PageMoves_SetParentMoveMethod(resultIndex,METHOD_LEVEL_EGG);
        else if (PageMoves_GetParentMoveMethod(resultIndex) == METHOD_MACHINE)
            PageMoves_SetParentMoveMethod(resultIndex,METHOD_EGG_MACHINE);
        else if (PageMoves_GetParentMoveMethod(resultIndex) == METHOD_MACHINE_LEVEL)
            PageMoves_SetParentMoveMethod(resultIndex,METHOD_ALL);
        else
            PageMoves_SetParentMoveMethod(resultIndex,METHOD_EGG);
    }

    return (PageMoves_GetParentMoveMethod(resultIndex) != METHOD_COUNT);
}

static void PageMoves_SeeParents(u8 taskId)
{
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();

    if (!PageMoves_IsSelctedMoveEggMove(currentPosition))
        return;

    ParentDisplay_InitalizeMenu();
    ParentDisplay_CreateMenu();
    PlaySE(SE_EGG_HATCH);
    gTasks[taskId].func = Task_ParentDisplay_HandleInput;
}

static void Task_ParentDisplay_HandleInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT))
    {
        ParentDisplay_ChangeColumn(-1);
        return;
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        ParentDisplay_ChangeColumn(1);
        return;
    }
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
    {
        ParentDisplay_ChangeRow(-1);
        return;
    }
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
    {
        ParentDisplay_ChangeRow(1);
        return;
    }
    if (JOY_NEW(L_BUTTON))
    {
        ParentDisplay_ChangeRow(2);
        return;
    }
    else if (JOY_NEW(R_BUTTON))
    {
        ParentDisplay_ChangeRow(-2);
        return;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        u32 future = PageMoves_GetParentSpecies(ParentDisplay_GetListPosition());

        SpeciesGrid_SetShouldPlayCry(TRUE);
        ParentDisplay_SetFutureSpeciesId(future);
        PageMoves_LoadParent(taskId);
        return;
    }
    else if (JOY_NEW(JOY_EXCL_DPAD))
    {
        ParentDisplay_RemoveMenu();
        PrintMenuHeader();
        PrintHelpBar(PAGE_MOVES_WINDOW_FOOTER);
        PlaySE(SE_BALL);
        gTasks[taskId].func = Task_PageMoves_Input;
    }
}

static void ParentDisplay_SetWindowId(u32 window)
{
    sSpeciesListMenu->speciesListMenuWindowId = window;
}

static u32 ParentDisplay_GetWindowId(void)
{
    return sSpeciesListMenu->speciesListMenuWindowId;
}

static void ParentDisplay_RemoveMenu(void)
{
    u32 windowId = ParentDisplay_GetWindowId();
    ClearStdWindowAndFrameToTransparent(windowId, TRUE);
    RemoveWindow(windowId);
    ParentDisplay_SetWindowId(WINDOW_NONE);

    ParentDisplay_DestroyArrows();
    SpeciesGrid_RemoveMonIcons();
}

static void ParentDisplay_DestroyArrows(void)
{
    u32 spriteId;

    for (enum PokedexMovesArrowGfxTags arrowId = POKEDEX_PARENT_ARROW_UP_GFXTAG; arrowId < POKEDEX_PARENT_ARROW_COUNT_GFXTAG; arrowId++)
    {
        spriteId = ParentDisplay_GetArrowSpriteId(arrowId + POKEDEX_PARENT_ARROW_SPRITE_START);
        DestroySpriteAndFreeResources(&gSprites[spriteId]);
    }
}

static u32 ParentDisplay_CalcWindowHeight(u32 numParents)
{
    if (numParents > (POKEDEX_PARENT_COLUMN_COUNT * 2))
        return 13;
    else if (numParents > POKEDEX_PARENT_COLUMN_COUNT)
        return 9;
    else
        return 5;
}

static u32 ParentDisplay_CalcWindowWidth(u32 numParents)
{
    if (numParents == 1)
        return 8;
    else
        return 16;
}

static void ParentDisplay_InitalizeMenu(void)
{
    sSpeciesListMenu->menuWindow.bg = BG0_POKEDEX_TEXT_CONTENT;
    sSpeciesListMenu->menuWindow.paletteNum = 0;
    sSpeciesListMenu->menuWindow.baseBlock = 1;
}

static void ParentDisplay_CreateMenu(void)
{
    PageMoves_GenerateParentsArray();
    u32 numParents = PageMoves_GetNumParents();
    ParentDisplay_SetNumberRows(ParentDisplay_CalculateNumberRows());
    ParentDisplay_ResetCoordinates();

    sSpeciesListMenu->menuWindow.width = ParentDisplay_CalcWindowWidth(numParents);
    sSpeciesListMenu->menuWindow.height = ParentDisplay_CalcWindowHeight(numParents);
    sSpeciesListMenu->menuWindow.tilemapLeft = 1;
    sSpeciesListMenu->menuWindow.tilemapTop = 2;

    u32 windowId = AddWindow(&sSpeciesListMenu->menuWindow);
    ParentDisplay_SetWindowId(windowId);
    ParentDisplay_PrintParents();
    ClearWindowTilemap(windowId);
    ParentDisplay_DrawWindowFrame(windowId);
    ParentDisplay_PrintAllParents();
    ParentDisplay_PrintMethodIcons();

    ParentDisplay_CreateArrowSprites(windowId);
    ParentDisplay_PrintMonCursor();
    PrintMenuHeader();
    PrintHelpBar(PAGE_MOVES_WINDOW_FOOTER);

    CopyWindowToVram(windowId,COPYWIN_GFX);
    ScheduleBgCopyTilemapToVram(BG0_POKEDEX_TEXT_CONTENT); //without this box doesn't appear at all
    DebugParentPrintCoorindates();
}

static void ParentDisplay_PrintAllParents(void)
{
    u32 rowIndex,columnIndex;

    u32 listIndex = PageMoves_CalculateStartingResultIndex();

    for (rowIndex = 0; rowIndex < POKEDEX_PARENT_ROW_COUNT; rowIndex++)
        for (columnIndex = 0; columnIndex < POKEDEX_PARENT_COLUMN_COUNT; columnIndex++)
            ParentDisplay_PrintSpeciesName(rowIndex,columnIndex,PageMoves_GetParentSpecies(listIndex++));
}

static void ParentDisplay_PrintMethodIcons(void)
{
    u32 windowId = ParentDisplay_GetWindowId();
    u32 rowIndex,columnIndex;
    u32 x = 0;
    u32 y = 0;
    u32 listIndex = PageMoves_CalculateStartingResultIndex();

    for (rowIndex = 0; rowIndex < POKEDEX_PARENT_ROW_COUNT; rowIndex++)
    {
        for (columnIndex = 0; columnIndex < POKEDEX_PARENT_COLUMN_COUNT; columnIndex++)
        {
            x = 48 + (columnIndex * 64);
            y = 8 + (rowIndex * 32);

            switch(PageMoves_GetParentMoveMethod(listIndex++))
            {
                case METHOD_LEVEL:
                    BlitBitmapToWindow(windowId,learnIconLevel,x,y,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    break;
                case METHOD_EGG:
                    BlitBitmapToWindow(windowId,learnIconEgg,x,y+8,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    break;
                case METHOD_MACHINE:
                    BlitBitmapToWindow(windowId,learnIconMachine,x,y+16,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    break;
                case METHOD_LEVEL_EGG:
                    BlitBitmapToWindow(windowId,learnIconLevel,x,y,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    BlitBitmapToWindow(windowId,learnIconEgg,x,y+8,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    break;
                case METHOD_EGG_MACHINE:
                    BlitBitmapToWindow(windowId,learnIconEgg,x,y+8,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    BlitBitmapToWindow(windowId,learnIconMachine,x,y+16,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    break;
                case METHOD_MACHINE_LEVEL:
                    BlitBitmapToWindow(windowId,learnIconMachine,x,y+16,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    BlitBitmapToWindow(windowId,learnIconLevel,x,y,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    break;
                case METHOD_ALL:
                    BlitBitmapToWindow(windowId,learnIconLevel,x,y,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    BlitBitmapToWindow(windowId,learnIconEgg,x,y+8,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    BlitBitmapToWindow(windowId,learnIconMachine,x,y+16,TILE_SIZE_1BPP,TILE_SIZE_1BPP);
                    break;
                case METHOD_COUNT:
                    return;
                    break;
            }
        }
    }
}

static void ParentDisplay_WindowFunc_DrawStandardFrame(u8 bg, u8 tilemapLeft, u8 tilemapTop, u8 width, u8 height, u8 paletteNum)
{
    const u16 frameBaseTile = POKEDEX_SPECIES_LIST_FRAME_BASE_TILE;

    const u16 topLeftCornerTile = frameBaseTile + 0;
    const u16 topEdgeTile = frameBaseTile + 1;
    const u16 topRightCornerTile = frameBaseTile + 2;
    const u16 leftEdgeTile = frameBaseTile + 3;
    const u16 rightEdgeTile = frameBaseTile + 5;
    const u16 bottomLeftCornerTile = frameBaseTile + 6;
    const u16 bottomEdgeTile = frameBaseTile + 7;
    const u16 bottomRightCornerTile = frameBaseTile + 8;

    FillBgTilemapBufferRect(bg, topLeftCornerTile, tilemapLeft - 1, tilemapTop - 1, 1, 1, paletteNum);
    FillBgTilemapBufferRect(bg, topEdgeTile, tilemapLeft, tilemapTop - 1, width, 1, paletteNum);
    FillBgTilemapBufferRect(bg, topRightCornerTile, tilemapLeft + width, tilemapTop - 1, 1, 1, paletteNum);

    for (int i = tilemapTop; i < tilemapTop + height; i++)
    {
        FillBgTilemapBufferRect(bg, leftEdgeTile, tilemapLeft - 1, i, 1, 1, paletteNum);
        FillBgTilemapBufferRect(bg, rightEdgeTile, tilemapLeft + width, i, 1, 1, paletteNum);
    }

    FillBgTilemapBufferRect(bg, bottomLeftCornerTile, tilemapLeft - 1, tilemapTop + height, 1, 1, paletteNum);
    FillBgTilemapBufferRect(bg, bottomEdgeTile, tilemapLeft, tilemapTop + height, width, 1, paletteNum);
    FillBgTilemapBufferRect(bg, bottomRightCornerTile, tilemapLeft + width, tilemapTop + height, 1, 1, paletteNum);
}

static void ParentDisplay_DrawWindowFrame(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(3));
    CallWindowFunction(windowId,ParentDisplay_WindowFunc_DrawStandardFrame);
    PutWindowTilemap(windowId);
}

static u32 PageMoves_CalculateStartingResultIndex(void)
{
    u32 position = ParentDisplay_GetListPosition();
    u32 x = ParentDisplay_GetCursorCoordinate(AXIS_X);
    u32 y = ParentDisplay_GetCursorCoordinate(AXIS_Y);
    while (x)
    {
        position--;
        x--;
    }

    while (y)
    {
        position-= POKEDEX_PARENT_COLUMN_COUNT;
        y--;
    }

    return position;
}

static void ParentDisplay_PrintParents(void)
{
    u32 rowIndex,columnIndex,species;
    u32 listIndex = PageMoves_CalculateStartingResultIndex();

    for (rowIndex = 0; rowIndex < POKEDEX_PARENT_ROW_COUNT; rowIndex++)
        for (columnIndex = 0; columnIndex < POKEDEX_PARENT_COLUMN_COUNT; columnIndex++)
        {
            species = PageMoves_GetParentSpecies(listIndex++);

            if (species == SPECIES_NONE)
                continue;

            SpeciesGrid_PrintMonIcon(rowIndex,columnIndex,species);
            EnableProcessSpriteCopyRequests();
            ProcessSpriteCopyRequests();
            UpdateMonIconSpriteToCrop(rowIndex, columnIndex);
        }
}

static void ParentDisplay_ResetParents(void)
{
    u32 size = ARRAY_COUNT(sPokedexMovesPageData->parentList);

    for (u32 i = 0; i < size; i++)
    {
        PageMoves_SetParentMoveMethod(i,METHOD_COUNT);
        PageMoves_SetParentSpecies(i,SPECIES_NONE);
    }
};

static enum MoveLearnMethods PageMoves_GetParentMoveMethod(u32 currentPosition)
{
    return sPokedexMovesPageData->parentList[currentPosition].method;
}

static void PageMoves_SetParentMoveMethod(u32 currentPosition, enum MoveLearnMethods method)
{
    sPokedexMovesPageData->parentList[currentPosition].method = method;
}

static u32 PageMoves_GetParentSpecies(u32 currentPosition)
{
    return sPokedexMovesPageData->parentList[currentPosition].speciesMoveId;
}

static void PageMoves_SetParentSpecies(u32 currentPosition, u32 species)
{
    sPokedexMovesPageData->parentList[currentPosition].speciesMoveId = species;
}

static void ParentDisplay_PrintSpeciesName(enum ParentsDisplayRows rowIndex, enum ParentsDisplayColumns columnIndex, u32 species)
{
    if (species == SPECIES_NONE)
        return;

    u32 windowId = ParentDisplay_GetWindowId();
    u32 x = (8 + (64 * columnIndex));
    u32 y = (20 + (32 * rowIndex));

    //DebugPrintf("x %d | y %d | marginX %d | marginY %d | baseX %d | paddingX %d | baseY %d | paddingY %d",x,y,marginX,marginY,baseX,paddingX,baseY,paddingY);

    u32 fontId = FONT_MOVES_PARENTS;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 windowWidth = TILE_SIZE_1BPP * GetWindowAttribute(windowId, WINDOW_WIDTH);
    u8 *end;
    u8 colors[] = {0,1,0};

    end = StringCopy(gStringVar3,GetSpeciesName(species));
    PrependFontIdToFit(gStringVar3, end, fontId, windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, colors, TEXT_SKIP_DRAW, gStringVar3);
}

static void UpdateMonIconSpriteToCrop(enum ParentsDisplayRows rowIndex, enum ParentsDisplayColumns columnIndex)
{
    u32 spriteId = SpeciesGrid_GetMonIconSpriteId(rowIndex, columnIndex);
    CpuFill32(0,(void *)(OBJ_VRAM0 + gSprites[spriteId].oam.tileNum * TILE_SIZE_4BPP),(4 * TILE_SIZE_4BPP));
    CpuFill32(0,(void *)(OBJ_VRAM0 + (gSprites[spriteId].oam.tileNum + 12) * TILE_SIZE_4BPP),(4 * TILE_SIZE_4BPP));
}

/*
   static u32 PageMoves_GetMoveIdFromPosition(u32 position)
   {
   return sPokedexMovesPageData->moveList[position].moveId;
   }
   */

void PageMoves_GenerateParentsArray(void)
{
    u32 currentPosition = PageMoves_GetCurrentPositionInMoveList();
    u32 moveId = PageMoves_GetMoveIdFromPosition(currentPosition);

    u32 species = PageMoves_GetMonToDisplay();

    u32 sort = SpeciesGrid_GetSort();
    const u16 *sortOrder = SpeciesGrid_GetSortOrder(sort);
    u32 resultIndex = 0;
    ParentDisplay_ResetParents();

    for (u32 monIndex = 0; monIndex < RESIDO_DEX_COUNT; monIndex++)
    {
        u32 currentMon = sortOrder[monIndex];

        if (!IsValidParent(currentMon, species, moveId,resultIndex))
            continue;

        PageMoves_SetParentSpecies(resultIndex,currentMon);
        resultIndex++;
    }

    PageMoves_SetNumParents(resultIndex);
}

static void ParentDisplay_ReloadMons(void)
{
    u32 windowId = ParentDisplay_GetWindowId();
    FillWindowPixelBuffer(windowId, PIXEL_FILL(3));
    SpeciesGrid_RemoveMonIcons();
    ParentDisplay_PrintMethodIcons();
    ParentDisplay_PrintParents();
    ParentDisplay_PrintAllParents();
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static const u32* const arrowSpriteTable[] =
{
    [POKEDEX_PARENT_ARROW_DOWN_GFXTAG] = PageMoves_DownArrow_Gfx,
    [POKEDEX_PARENT_ARROW_UP_GFXTAG] = PageMoves_UpArrow_Gfx,
};

static void ParentDisplay_CreateArrowSprites(u32 windowId)
{
    u32 height = GetWindowAttribute(windowId,WINDOW_HEIGHT) * TILE_SIZE_1BPP;
    u32 width = GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_SIZE_1BPP;
    u32 upMargin = GetWindowAttribute(windowId,WINDOW_TILEMAP_TOP) * TILE_SIZE_1BPP;
    u32 leftMargin = GetWindowAttribute(windowId,WINDOW_TILEMAP_LEFT) * TILE_SIZE_1BPP;
    u32 x = (width / 2) + leftMargin;
    u32 spriteId, SpriteTag;
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.callback = SpriteCallback_Arrow;

    for (enum PokedexMovesArrowGfxTags spriteIndex = POKEDEX_PARENT_ARROW_UP_GFXTAG; spriteIndex < POKEDEX_PARENT_ARROW_COUNT_GFXTAG; spriteIndex++)
    {
        SpriteTag = spriteIndex + POKEDEX_PARENT_ARROW_GFXTAG;

        u32 y = (height * spriteIndex) + upMargin - (TILE_SIZE_1BPP);

        struct CompressedSpriteSheet sSpriteSheet_PokedexParentArrow = {arrowSpriteTable[spriteIndex], 256, SpriteTag};
        TempSpriteTemplate.tileTag = SpriteTag;

        LoadCompressedSpriteSheet(&sSpriteSheet_PokedexParentArrow);
        spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);
        gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
        gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
        gSprites[spriteId].oam.priority = 0;
        gSprites[spriteId].data[1] = spriteIndex;
        ParentDisplay_SaveArrowSpriteId(POKEDEX_PARENT_ARROW_SPRITE_START + spriteIndex,spriteId);
    }
}

u32 ParentDisplay_GetArrowSpriteId(enum PokedexMovesArrowGfxTags arrowId)
{
    return sPokedexGridResources->interfaceSpriteIds[arrowId];
}

static void ParentDisplay_SaveArrowSpriteId(enum PokedexMovesArrowGfxTags arrowId, u32 spriteId)
{
    sPokedexGridResources->interfaceSpriteIds[arrowId] = spriteId;
}

static void SpriteCallback_Arrow(struct Sprite *sprite)
{
    u32 arrowPos = sprite->data[1];
    AnimateArrowSprite(sprite,arrowPos);
    HandleArrowVisibility(sprite,arrowPos);
}

static void AnimateArrowSprite(struct Sprite *sprite, u32 arrowPos)
{
    u32 offset = (arrowPos == POKEDEX_PARENT_ARROW_DOWN_GFXTAG) ? 128 : 0;
    u8 val = sprite->data[0] + offset;

    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += TILE_SIZE_1BPP;
}

static void HandleArrowVisibility(struct Sprite *sprite, u32 arrowPos)
{
    u32 currentRow = ParentDisplay_GetCurrentRowNumber();
    u32 maxRow = ParentDisplay_CalculateNumberRows();
    bool32 isUp = (arrowPos == POKEDEX_PARENT_ARROW_UP_GFXTAG);
    bool32 isDown = (arrowPos == POKEDEX_PARENT_ARROW_DOWN_GFXTAG);
    u32 numParents = PageMoves_GetNumParents();

    if (numParents <= MAX_MONS_PER_PARENT_PAGE)
    {
        sprite->invisible = TRUE;
        return;
    }

    if(isUp && (currentRow == 0))
    {
        sprite->invisible = TRUE;
        return;
    }

    if(isDown && (currentRow == (maxRow-1)))
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->invisible = FALSE;
}

static u32 ParentDisplay_GetCursorCoordinate(u32 axis)
{
    return sPokedexMovesPageData->parentCursor[axis];
}

static void ParentDisplay_SetCursorCoordinate(u32 axis, u32 position)
{
    sPokedexMovesPageData->parentCursor[axis] = position;
}

static u32 ParentDisplay_GetListPosition(void)
{
    return sPokedexMovesPageData->parentDisplayListPosition;
}

static void ParentDisplay_SetListPosition(u32 position)
{
    sPokedexMovesPageData->parentDisplayListPosition = position;
}

static void ParentDisplay_SetListPositionFromCoordinates(void)
{
    u32 x = ParentDisplay_GetCursorCoordinate(AXIS_X);
    u32 y = ParentDisplay_GetCurrentRowNumber();
    u32 numMons = PageMoves_GetNumParents();

    u32 maxRow = POKEDEX_PARENT_COLUMN_1 + 1;
    u32 newCoordinate = (maxRow * y) + x;

    if (newCoordinate > numMons)
        newCoordinate = 0;

    ParentDisplay_SetListPosition(newCoordinate);
}

static void ParentDisplay_ResetListCursor(void)
{
    for (u32 axis = 0; axis < AXIS_COUNT; axis++)
        ParentDisplay_SetCursorCoordinate(axis,0);

    ParentDisplay_SetListPosition(0);
}

static void ParentDisplay_ChangeRow(s32 delta)
{
    PlaySE(SE_RG_BAG_CURSOR);
    ParentDisplay_SanitizeCursorYCoordinate(delta);
    ParentDisplay_SantizeCurrentRowNumber(delta);
    ParentDisplay_FixCursorXCoorindate();
    ParentDisplay_SetListPositionFromCoordinates();
    ParentDisplay_ReloadMons();
    ParentDisplay_SetFutureSpeciesId(PageMoves_GetParentSpecies(ParentDisplay_GetListPosition()));
    DebugParentPrintCoorindates();
}

static void ParentDisplay_ChangeColumn(s32 delta)
{
    PlaySE(SE_RG_BAG_CURSOR);
    ParentDisplay_SanitizeCursorXCoordinate(delta);
    ParentDisplay_SetListPositionFromCoordinates();
    ParentDisplay_SetFutureSpeciesId(PageMoves_GetParentSpecies(ParentDisplay_GetListPosition()));
    DebugParentPrintCoorindates();
}

static void ParentDisplay_ResetCoordinates(void)
{
    ParentDisplay_ResetCurrentRowNumber();
    ParentDisplay_ResetListCursor();
}

static u32 ParentDisplay_GetNumberRows(void)
{
    return sPokedexMovesPageData->parentNumRows;
}

static void ParentDisplay_SetNumberRows(u32 rows)
{
    sPokedexMovesPageData->parentNumRows = rows;
}

static u32 ParentDisplay_CalculateNumberRows(void)
{
    u32 totalEntity = PageMoves_GetNumParents();
    u32 xMax = POKEDEX_PARENT_COLUMN_1;
    u32 rows = (totalEntity / (xMax + 1));

    if (!totalEntity)
        return 0;

    if ((totalEntity % (xMax + 1)) == 0)
        return rows;

    return rows + 1;
}

static u32 ParentDisplay_GetCurrentRowNumber(void)
{
    return sPokedexMovesPageData->rowNumber;
}

static void ParentDisplay_SetCurrentRowNumber(u32 row)
{
    sPokedexMovesPageData->rowNumber = row;
}

static void ParentDisplay_ResetCurrentRowNumber(void)
{
    ParentDisplay_SetCurrentRowNumber(0);
}

static void ParentDisplay_SanitizeCursorXCoordinate(u32 delta)
{
    u32 x = ParentDisplay_GetCursorCoordinate(AXIS_X);
    u32 currentRow = ParentDisplay_GetCurrentRowNumber();
    u32 rowSize = ParentDisplay_GetSizeForRow(currentRow);
    bool32 cursorMovingRight = SpeciesGrid_IsMonCursorMovingRightOrDown(delta);
    u32 maxX = POKEDEX_PARENT_COLUMN_1;
    u32 tempMaxX = min(maxX,rowSize-1);
    bool32 isLastColumn = (x == tempMaxX);
    bool32 isFirstColumn = (x == 0);

    if (cursorMovingRight && isLastColumn)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_X,0);
    }
    else if (!cursorMovingRight && isFirstColumn)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_X,tempMaxX);
    }
    else
    {
        ParentDisplay_SetCursorCoordinate(AXIS_X,x + delta);
    }
}

static void ParentDisplay_SanitizeCursorYCoordinate(s32 delta)
{
    u32 y = ParentDisplay_GetCursorCoordinate(AXIS_Y);
    u32 maxX = POKEDEX_PARENT_COLUMN_1;
    u32 maxY = POKEDEX_PARENT_ROW_2;
    bool32 cursorMovingDown = SpeciesGrid_IsMonCursorMovingRightOrDown(delta);
    u32 lastRow = ParentDisplay_GetNumberRows() - 1;
    u32 currentRow = ParentDisplay_GetCurrentRowNumber();
    bool32 isLastRow = (currentRow == lastRow);
    bool32 isFirstRow = (currentRow == 0);
    u32 totalEntity = PageMoves_GetNumParents();
    u32 futureRow = currentRow + delta;
    u32 tempMaxY = min(maxY,lastRow);
    bool32 oneScreen = (((maxX + 1) * (tempMaxY + 1)) >= totalEntity);

    if (!oneScreen && (y == 1) && (futureRow != 0) && !cursorMovingDown)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,1);
    }
    else if (cursorMovingDown && isLastRow)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,0);
    }
    else if (!oneScreen && (y == (tempMaxY - 1)) && (futureRow != lastRow) && cursorMovingDown)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,tempMaxY - 1);
    }
    else if (!cursorMovingDown && isFirstRow && isLastRow)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,0);
    }
    else if (!cursorMovingDown && isFirstRow)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,tempMaxY);
    }
    else if ((currentRow + delta) > lastRow)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,0);
    }
    else if (y + delta > tempMaxY)
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,0);
    }
    else
    {
        ParentDisplay_SetCursorCoordinate(AXIS_Y,y+delta);
    }
}

static void ParentDisplay_SantizeCurrentRowNumber(s32 delta)
{
    u32 lastRow = ParentDisplay_GetNumberRows() - 1;
    u32 currentRow = ParentDisplay_GetCurrentRowNumber();

    if ((currentRow + delta) > lastRow && SpeciesGrid_IsMonCursorMovingRightOrDown(delta))
    {
        ParentDisplay_ResetCurrentRowNumber();
    }
    else if((currentRow  == 0) && !SpeciesGrid_IsMonCursorMovingRightOrDown(delta))
    {
        ParentDisplay_SetCurrentRowNumber(lastRow);
    }
    else
    {
        ParentDisplay_SetCurrentRowNumber(currentRow + delta);
    }
}

static u32 ParentDisplay_GetSizeForRow(u32 currentRow)
{
    u32 xMax = POKEDEX_PARENT_COLUMN_1;
    u32 lastRow = ParentDisplay_GetNumberRows() - 1;
    u32 numMons = PageMoves_GetNumParents();
    u32 divisor = (numMons % (xMax + 1));
    bool32 isLastRow = (currentRow == lastRow);

    if (divisor && isLastRow)
    {
        return divisor;
    }
    else
    {
        return xMax + 1;
    }
}

static void ParentDisplay_FixCursorXCoorindate(void)
{
    u32 currentRowNumber = ParentDisplay_GetCurrentRowNumber();
    u32 maxRowPosition = ParentDisplay_GetSizeForRow(currentRowNumber) - 1;
    u32 x = ParentDisplay_GetCursorCoordinate(AXIS_X);

    while (x > maxRowPosition)
        ParentDisplay_SetCursorCoordinate(AXIS_X,--x);
}

static void DebugParentPrintCoorindates(void)
{
    return;
    u32 x = ParentDisplay_GetCursorCoordinate(AXIS_X);
    u32 y = ParentDisplay_GetCursorCoordinate(AXIS_Y);
    u32 listPosition = ParentDisplay_GetListPosition();
    u32 currentRowNumber = ParentDisplay_GetCurrentRowNumber();
    u32 currentRowSize = ParentDisplay_GetSizeForRow(currentRowNumber);
    u32 totalRows = ParentDisplay_GetNumberRows();
    u32 numMons = PageMoves_GetNumParents();
    u32 mon = ParentDisplay_GetFutureSpeciesId();
    u32 cursorMon = PageMoves_GetParentSpecies(ParentDisplay_GetListPosition());

    DebugPrintf("x %d | y %d | listPosition %d | rowcurrentRow %d | currentRowSize %d | totalRows %d | nnumItems %d | futureSpeciesId %d | cursorMon %d",
            x,
            y,
            listPosition,
            currentRowNumber,
            currentRowSize,
            totalRows,
            numMons,
            mon,
            cursorMon
            );
}

static u32 ParentDisplay_GetFutureSpeciesId(void)
{
    return sPokedexState->futureMonSpeciesId;
}

void ParentDisplay_SetFutureSpeciesId(u32 species)
{
    sPokedexState->futureMonSpeciesId = species;
}

static void ParentDisplay_LoadMonCursorSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_PokedexSpeciesListCursor=
    {
        speciesListMonCursor,
        (32*16),
        POKEDEX_GFXTAG_SPECIES_LIST_CURSOR,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexSpeciesListCursor);
    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
}

static void ParentDisplay_PrintMonCursor(void)
{
    u32 spriteId;

    u32 x = monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_BASE][AXIS_X] + (monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_PADDING][AXIS_X] * ParentDisplay_GetCursorCoordinate(AXIS_X));

    u32 y = monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_BASE][AXIS_Y] + (monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_PADDING][AXIS_Y] * ParentDisplay_GetCursorCoordinate(AXIS_Y));

    u16 TileTag = POKEDEX_GFXTAG_SPECIES_LIST_CURSOR;
    ParentDisplay_LoadMonCursorSprite();
    spriteId = SpeciesGrid_CreateInterfaceSprite(x,y,TileTag, SpriteCallback_ParentDisplayCursor);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x16);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].subpriority = 1;
    SpeciesGrid_SaveMonCursorSpriteId(spriteId);
}

static void SpriteCallback_ParentDisplayCursor(struct Sprite* sprite)
{
    if (ParentDisplay_GetWindowId() == WINDOW_NONE)
    {
        sprite->invisible = TRUE;
        return;
    }
    else
    {
        sprite->invisible = FALSE;
    }

    sprite->x = monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_BASE][AXIS_X] + (monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_PADDING][AXIS_X] * ParentDisplay_GetCursorCoordinate(AXIS_X));

    sprite->y = monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_BASE][AXIS_Y] + (monIconCoordinates[POKEDEX_PAGE_MOVES][POKEDEX_MON_ICON_PADDING][AXIS_Y] * ParentDisplay_GetCursorCoordinate(AXIS_Y));
}

static void PageEvolution_SetMonList(u32 monIndex, u32 species)
{
    sPokedexEvolutionPageData->monList[monIndex] = species;
}

static u32 PageEvolution_GetMonList(u32 monIndex)
{
    return sPokedexEvolutionPageData->monList[monIndex];
}

static void PageEvolution_SetOriginalSpecies(u32 familyIndex, u32 originalSpecies)
{
    sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ORIGINAL_SPECIES] = originalSpecies;
}

static u32 PageEvolution_GetOriginalSpecies(u32 familyIndex)
{
    return sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ORIGINAL_SPECIES];
}

static void PageEvolution_SetMethod(u32 familyIndex, s32 method)
{
    sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_METHOD] = method;
}

static s32 PageEvolution_GetMethod(u32 familyIndex)
{
    return sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_METHOD];
}

static void PageEvolution_SetTargetSpecies(u32 familyIndex, s32 targetSpecies)
{
    sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_TARGET_SPECIES] = targetSpecies;
}

static s32 PageEvolution_GetTargetSpecies(u32 familyIndex)
{
    return sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_TARGET_SPECIES];
}

static void PageEvolution_SetArg1(u32 familyIndex, s32 param1)
{
    sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ARG1] = param1;
}

static s32 PageEvolution_GetArg1(u32 familyIndex)
{
    return sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ARG1];
}

static void PageEvolution_SetArg2(u32 familyIndex, s32 param2)
{
    sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ARG2] = param2;
}

static s32 PageEvolution_GetArg2(u32 familyIndex)
{
    return sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ARG2];
}

static void PageEvolution_SetArg3(u32 familyIndex, s32 param3)
{
    sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ARG3] = param3;
}

static s32 PageEvolution_GetArg3(u32 familyIndex)
{
    return sPokedexEvolutionPageData->familyList[familyIndex][POKEDEX_EVOLUTION_ATTRIBUTE_ARG3];
}

static void PageEvolution_SetNumMons(u32 numMons)
{
    sPokedexEvolutionPageData->numMons = numMons;
}

static u32 PageEvolution_GetNumMons(void)
{
    return sPokedexEvolutionPageData->numMons;
}

static void PageEvolution_SetMonListPosition(u32 monListPosition)
{
    sPokedexEvolutionPageData->monListPosition = monListPosition;
}

static u32 PageEvolution_GetMonListPosition(void)
{
    return sPokedexEvolutionPageData->monListPosition;
}

static void PageEvolution_SetMonCursorCoordinate(u32 monCursorCoordinate)
{
    sPokedexEvolutionPageData->monCursorCoordinate = monCursorCoordinate;
}

static u8 PageEvolution_GetMonCursorCoordinate(void)
{
    return sPokedexEvolutionPageData->monCursorCoordinate;
}

static u32 PageEvolution_GetMonToDisplay(void)
{
    u32 species = ParentDisplay_GetFutureSpeciesId();

    if (species == SPECIES_NONE)
        species = SpeciesGrid_GetCurrentSpecies();

    if (species == SPECIES_URSHIFU_RAPID_STRIKE)
        return SPECIES_URSHIFU_RAPID_STRIKE;

    if (species == SPECIES_URSHIFU_RAPID_STRIKE_STYLE_MEGA)
        return SPECIES_URSHIFU_RAPID_STRIKE;

    return GET_BASE_SPECIES_ID(species);
}

u32 PageForms_GetNumberSpeciesForms(const u16 *formTable)
{
    u32 count = 0;
    while (*formTable != FORM_SPECIES_END)
    {
        count++;
        formTable++;
    }
    return count;
}

u32 PageForms_GetNumberFormChanges(const struct FormChange *formChanges)
{
    u32 count = 0;

    if (formChanges != NULL)
    {
        for (; formChanges->method != FORM_CHANGE_TERMINATOR; formChanges++)
        {
            count++;
        }
    }
    return count;
}

static void PageForms_ResetFormList(void)
{
    PageEvolution_SetNumMons(0);
    for (u32 formIndex = 0; formIndex < MAX_NUM_FORMS_EVOLUTIONS; formIndex++)
    {
        PageEvolution_SetOriginalSpecies(formIndex, 0);
        PageEvolution_SetTargetSpecies(formIndex, 0);
        PageEvolution_SetArg1(formIndex, 0);
        PageEvolution_SetArg2(formIndex, 0);
        PageEvolution_SetArg3(formIndex, 0);
    }
}

bool32 PageForms_IsSpeciesMega(u16 species)
{
    return (gSpeciesInfo[species].isMegaEvolution);
}

enum PokedexFormId ConvertSpeciesToFormTableEnum(u32 species)
{
    switch (species)
    {
        default:
            return POKEDEX_FORM_NONE;
        case SPECIES_PIDGEOT:
            return POKEDEX_FORM_PIDGEOT;
        case SPECIES_ALAKAZAM:
            return POKEDEX_FORM_ALAKAZAM;
        case SPECIES_SLOWBRO:
            return POKEDEX_FORM_SLOWBRO;
        case SPECIES_KINGLER:
            return POKEDEX_FORM_KINGLER;
        case SPECIES_GYARADOS:
            return POKEDEX_FORM_GYARADOS;
        case SPECIES_LAPRAS:
            return POKEDEX_FORM_LAPRAS;
        case SPECIES_AERODACTYL:
            return POKEDEX_FORM_AERODACTYL;
        case SPECIES_AMPHAROS:
            return POKEDEX_FORM_AMPHAROS;
        case SPECIES_SCIZOR:
            return POKEDEX_FORM_SCIZOR;
        case SPECIES_TYRANITAR:
            return POKEDEX_FORM_TYRANITAR;
        case SPECIES_SWAMPERT:
            return POKEDEX_FORM_SWAMPERT;
        case SPECIES_GARDEVOIR:
            return POKEDEX_FORM_GARDEVOIR;
        case SPECIES_AGGRON:
            return POKEDEX_FORM_AGGRON;
        case SPECIES_MEDICHAM:
            return POKEDEX_FORM_MEDICHAM;
        case SPECIES_SHARPEDO:
            return POKEDEX_FORM_SHARPEDO;
        case SPECIES_CAMERUPT:
            return POKEDEX_FORM_CAMERUPT;
        case SPECIES_LOPUNNY:
            return POKEDEX_FORM_LOPUNNY;
        case SPECIES_GALLADE:
            return POKEDEX_FORM_GALLADE;
        case SPECIES_ROTOM:
            return POKEDEX_FORM_ROTOM;
        case SPECIES_GARBODOR:
            return POKEDEX_FORM_GARBODOR;
        case SPECIES_VIVILLON:
            return POKEDEX_FORM_VIVILLON;
        case SPECIES_FLABEBE:
            return POKEDEX_FORM_FLABEBE;
        case SPECIES_FLOETTE:
            return POKEDEX_FORM_FLOETTE;
        case SPECIES_FLORGES:
            return POKEDEX_FORM_FLORGES;
        case SPECIES_AEGISLASH:
            return POKEDEX_FORM_AEGISLASH;
        case SPECIES_ORICORIO:
            return POKEDEX_FORM_ORICORIO;
        case SPECIES_SILVALLY:
            return POKEDEX_FORM_SILVALLY;
        case SPECIES_MINIOR:
            return POKEDEX_FORM_MINIOR;
        case SPECIES_CORVIKNIGHT:
            return POKEDEX_FORM_CORVIKNIGHT;
        case SPECIES_ORBEETLE:
            return POKEDEX_FORM_ORBEETLE;
        case SPECIES_DREDNAW:
            return POKEDEX_FORM_DREDNAW;
        case SPECIES_SANDACONDA:
            return POKEDEX_FORM_SANDACONDA;
        case SPECIES_CRAMORANT:
            return POKEDEX_FORM_CRAMORANT;
        case SPECIES_CENTISKORCH:
            return POKEDEX_FORM_CENTISKORCH;
        case SPECIES_SINISTEA:
            return POKEDEX_FORM_SINISTEA;
        case SPECIES_POLTEAGEIST:
            return POKEDEX_FORM_POLTEAGEIST;
        case SPECIES_HATTERENE:
            return POKEDEX_FORM_HATTERENE;
        case SPECIES_COPPERAJAH:
            return POKEDEX_FORM_COPPERAJAH;
        case SPECIES_DURALUDON:
            return POKEDEX_FORM_DURALUDON;
        case SPECIES_URSHIFU_SINGLE_STRIKE:
            return POKEDEX_FORM_URSHIFU_SINGLE_STRIKE;
        case SPECIES_URSHIFU_RAPID_STRIKE:
            return POKEDEX_FORM_URSHIFU_RAPID_STRIKE;
        case SPECIES_URSALUNA:
            return POKEDEX_FORM_URSALUNA;
        case SPECIES_MIMIKYU:
            return POKEDEX_FORM_MIMIKYU;
        case SPECIES_MAUSHOLD:
            return POKEDEX_FORM_MAUSHOLD;
        case SPECIES_SQUAWKABILLY:
            return POKEDEX_FORM_SQUAWKABILLY;
        case SPECIES_PALAFIN:
            return POKEDEX_FORM_PALAFIN;
        case SPECIES_TATSUGIRI:
            return POKEDEX_FORM_TATSUGIRI;
        case SPECIES_GIMMIGHOUL:
            return POKEDEX_FORM_GIMMIGHOUL;
    }
}

static u32 PageForms_CountFormsForMons(u32 species)
{
    species = ConvertSpeciesToFormTableEnum(species);
    const struct PokemonFormTable *forms = pokemonFormTable[species];

    u32 count = 0;

    while (count < MAX_NUM_FORMS_EVOLUTIONS && forms[count].originalSpecies != SPECIES_NONE)
        count++;

    return count;
}

static u32 PageForm_GetMonForFormList(void)
{
    u32 originalSpecies = PageEvolution_GetMonToDisplay();

    if (originalSpecies == SPECIES_URSHIFU_RAPID_STRIKE)
        return SPECIES_URSHIFU_RAPID_STRIKE;

    return GET_BASE_SPECIES_ID(originalSpecies);
}

static void PageForm_PopulateFormList(void)
{
    u32 originalSpecies = PageForm_GetMonForFormList();
    u32 species = ConvertSpeciesToFormTableEnum(originalSpecies);

    if (pokemonFormTable[species][0].originalSpecies == SPECIES_NONE)
        return;

    PageEvolution_SetNumMons(PageForms_CountFormsForMons(originalSpecies));

    for (u32 formIndex = 0; formIndex < PageEvolution_GetNumMons(); formIndex++)
    {
        PageEvolution_SetOriginalSpecies(formIndex,pokemonFormTable[species][formIndex].originalSpecies);
        PageEvolution_SetTargetSpecies(formIndex,pokemonFormTable[species][formIndex].targetSpecies);
        PageEvolution_SetMonList(formIndex,pokemonFormTable[species][formIndex].targetSpecies);
        PageEvolution_SetArg1(formIndex, pokemonFormTable[species][formIndex].param1);
        PageEvolution_SetArg2(formIndex, pokemonFormTable[species][formIndex].param2);
        PageEvolution_SetArg3(formIndex, pokemonFormTable[species][formIndex].param3);
        PageEvolution_SetMethod(formIndex, pokemonFormTable[species][formIndex].method);
    }

    Debug_PrintMonInFormsList();
}

static void PageEvolution_PopulateEvolutionsList(void)
{
    u32 species = GetEggSpecies(PageEvolution_GetMonToDisplay());
    u32 overallIndex = 0;
    bool32 newEvolutionAdded;
    u32 familyList[MAX_NUM_FORMS_EVOLUTIONS] = {SPECIES_NONE};
    bool32 familyDone[MAX_NUM_FORMS_EVOLUTIONS] = {FALSE};

    PageEvolution_SetTargetSpecies(overallIndex, species);
    PageEvolution_SetOriginalSpecies(overallIndex, SPECIES_EGG);

    overallIndex++;

    familyList[overallIndex] = species;

    do
    {
        newEvolutionAdded = FALSE;

        for (u32 i = 0; i < overallIndex + 1; i++)
        {
            if (familyDone[i] == TRUE)
                continue;

            const struct Evolution *evolutions = GetSpeciesEvolutions(familyList[i]);

            if (evolutions == NULL)
            {
                familyDone[i] = TRUE;
                continue;
            }

            for (u32 j = 0; evolutions[j].method != EVOLUTIONS_END; j++)
            {
                u32 targetSpecies = evolutions[j].targetSpecies;

                if (!SpeciesIsResidoDex(targetSpecies))
                    continue;

                PageEvolution_SetOriginalSpecies(overallIndex, familyList[i]);
                PageEvolution_SetTargetSpecies(overallIndex, targetSpecies);
                familyList[overallIndex + 1] = targetSpecies;
                familyDone[overallIndex + 1] = FALSE;
                newEvolutionAdded = TRUE;
                overallIndex++;
            }
            familyDone[i] = TRUE;
        }
    }
    while (newEvolutionAdded);
    u32 z = 0;
    u32 y = 0;

    for (u32 a = 0; a < overallIndex; a++)
    {
        u32 b = PageEvolution_GetTargetSpecies(a);
        bool32 exists = FALSE;

        for (u32 x = 0; x < overallIndex; x++)
        {
            exists = FALSE;
            u32 c = PageEvolution_GetMonList(x);

            if (b == c)
            {
                exists = TRUE;
                break;
            }
        }

        if (exists == FALSE)
        {
            PageEvolution_SetMonList(y, b);
            y++;
            z++;
        }
    }

    PageEvolution_SetNumMons(z);

    Debug_PrintMonInFormsList();
    Debug_PrintMonList(overallIndex);
}

static void Debug_PrintMonList(u32 overallIndex)
{
    return;
    for (u32 a = 0; a < overallIndex; a++)
        DebugPrintf("mon List %d is species %d | %S",a,PageEvolution_GetMonList(a),GetSpeciesName(PageEvolution_GetMonList(a)));
}

static void PageEvolutions_ChangeListPosition(s32 delta)
{
    u32 oldPosition = PageEvolution_GetMonListPosition();
    s32 newPosition = PageEvolution_GetMonListPosition() + delta;
    u32 numEvolutions = PageEvolution_GetNumMons();
    u32 maxListPosition = numEvolutions - 1;

    if (newPosition < 0)
        newPosition = maxListPosition;
    else if (newPosition > maxListPosition)
        newPosition = 0;

    if (newPosition == oldPosition)
        return;

    enum PokedexPages page = GetCurrentPage();
    PlaySE(SE_RG_BAG_CURSOR);
    PageEvolution_SetMonListPosition(newPosition);
    PageEvolution_ChangeCursorPosition();
    PageEvolutions_PrintEvolution(page);
    PrintHelpBar(PAGE_EVOLUTION_WINDOW_FOOTER);
    DebugEvolutionPrintCoorindates();
}

static void DebugEvolutionPrintCoorindates(void)
{
    return;
    u32 numMons = PageEvolution_GetNumMons();
    u32 monListPosition = PageEvolution_GetMonListPosition();
    u32 monCursorCoordinate = PageEvolution_GetMonCursorCoordinate();
    u32 futureMon = PageEvolution_GetMonToDisplay();
    u32 cursorMon = PageEvolution_GetMonList(monListPosition);
    u32 maxListPosition = numMons - 1;
    u32 pen = maxListPosition - 1;

    DebugPrintf("numMons %d |monListPosition %d |monCursorCoordinate %d |futureMon %S |futureMon %d |cursorMon %S |cursorMon %d |maxListPosition %d |pen %d |",numMons,monListPosition,monCursorCoordinate,GetSpeciesName(futureMon),futureMon,GetSpeciesName(cursorMon),cursorMon,maxListPosition,pen);
}

static void PageEvolution_ChangeCursorPosition(void)
{
    u32 currentPosition = PageEvolution_GetMonListPosition();
    u32 numEvolutions = PageEvolution_GetNumMons();
    u32 maxListPosition = numEvolutions - 1;
    u32 pen = maxListPosition - 1;
    u32 cursor = 0;
    u32 lastRow = min(EVOLUTION_LIST_ROW_4,maxListPosition);
    u32 penUltimateRow = min(EVOLUTION_LIST_ROW_3,pen);

    if (currentPosition == 0)
        cursor = currentPosition;
    else if (currentPosition == 1)
        cursor = currentPosition;
    else if (currentPosition == pen)
        cursor = penUltimateRow;
    else if (currentPosition == maxListPosition)
        cursor = lastRow;
    else
        cursor = MOVES_LIST_SCREEN_BUFFER;

    PageEvolution_SetMonCursorCoordinate(cursor);
}

static u32 PageEvolutions_GetIdToPrint(void)
{
    u32 currentPosition = PageEvolution_GetMonListPosition();
    u32 cursorPosition = PageEvolution_GetMonCursorCoordinate();
    return (currentPosition - cursorPosition);
}

static void PageEvolutions_PrintEvolution(enum PokedexPages page)
{
    PageEvolution_PrintEvolutionList();
    PageEvolutionForms_PrintDetails(page);
    PageEvolution_SpeciesData_ShowSelectedMon();
}

static void PageEvolution_PrintPageSprites(void)
{
    u32 numMons = min(PageEvolution_GetNumMons(),NUM_EVOLUTIONS_LIST_ROWS);
    u32 x = POKEDEX_STATS_EVOLUTION_PAGE_SPRITE_X_STARTING;
    u32 y = POKEDEX_STATS_EVOLUTION_PAGE_SPRITE_Y_STARTING;

    for (enum EvolutionListRow listIndex = 0; listIndex < numMons; listIndex++)
    {
        SpeciesData_PrintHeaderSprite(x, y);
        y += POKEDEX_STATS_EVOLUTION_PAGE_SPRITE_Y_PADDING;
    }
}

static void PageEvolutions_PrintCursor(enum PokedexPageEvolutionWindows windowId)
{
    u32 y = 1 + (PageEvolution_GetMonCursorCoordinate() * EVO_FORM_LIST_CURSOR_PADDING);
    u32 x = 0;
    u32 width = EVO_FORM_LIST_CURSOR_WIDTH;
    u32 height = EVO_FORM_LIST_CURSOR_HEIGHT;

    BlitBitmapToWindow(windowId, evoListCursor, x, y , width, height);
}

const u8 *GetFormName(u32 species)
{
    return speciesFormNames[species];
}

static const u8 *GetFormOrSpeciesName(u32 species)
{
    if (GetCurrentPage() != POKEDEX_PAGE_FORMS)
        return GetSpeciesName(species);

    if (PageForms_IsSpeciesMega(species))
        return sText_MegaEvolution;

    if (GetFormName(species) == NULL)
        return GetSpeciesName(species);

    return GetFormName(species);
}

static u32 ShouldUseMiniorException(u32 listId, u32 speciesId)
{
    if (speciesId != SPECIES_MINIOR_CORE)
        return speciesId;

    if (PageEvolution_GetMethod(listId) != FORM_CHANGE_BATTLE_HP_PERCENT)
        return speciesId;

    return SPECIES_EGG;
}

static void PageEvolution_PrintEvolutionList(void)
{
    enum PokedexPageEvolutionWindows windowId = PAGE_EVOLUTION_WINDOW_MON_LIST;
    u32 fontId = FONT_EVOLUTION_LIST;
    u32 startingId = PageEvolutions_GetIdToPrint();
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 4, y = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PageEvolutions_PrintCursor(windowId);

    for (u32 listId = 0; listId < NUM_EVOLUTIONS_LIST_ROWS; listId++)
    {
        u32 speciesId = PageEvolution_GetMonList(startingId + listId);

        if (speciesId == SPECIES_NONE)
            continue;

        speciesId = ShouldUseMiniorException(startingId + listId,speciesId);

        PageStats_BufferAbilityDescColumn(GetFormOrSpeciesName(speciesId),gStringVar1,fontId, 69);

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

        y += (2 * TILE_SIZE_1BPP);
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static bool32 PageEvolution_GenerateEvolutionDetails(u8* string, u32 spotlightMon, u32 evoIndex)
{
    u32 param;
    bool32 success = FALSE;
    u32 originalSpecies = PageEvolution_GetOriginalSpecies(evoIndex);

    if (originalSpecies == SPECIES_NONE || originalSpecies >= SPECIES_EGG)
    {
        StringCopy(gStringVar1,GetSpeciesName(spotlightMon));
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("No Pokémon evolve into {STR_VAR_1}."));
        StringAppend(string,gStringVar4);
        return TRUE;
    }

    const struct Evolution *evolutions = GetSpeciesEvolutions(originalSpecies);

    for (u32 methodIndex = 0; evolutions[methodIndex].method != EVOLUTIONS_END ; methodIndex++)
    {
        if (evolutions[methodIndex].targetSpecies != spotlightMon)
            continue;

        success = TRUE;
        StringCopy(gStringVar1,GetSpeciesName(originalSpecies));

        switch(evolutions[methodIndex].method)
        {
            default:
            case EVO_NONE:
                StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("EVO_NONE "));
                StringAppend(string,gStringVar4);
                break;
            case EVO_LEVEL:
            case EVO_LEVEL_BATTLE_ONLY:
                param = evolutions[methodIndex].param;
                if (param)
                {
                    ConvertIntToDecimalStringN(gStringVar2, param, STR_CONV_MODE_LEFT_ALIGN, CountDigits(param));
                    StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} at {LV}{STR_VAR_2}"));
                }
                else
                {
                    StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} upon level up"));
                }
                StringAppend(string,gStringVar4);

                if (evolutions[methodIndex].method == EVO_LEVEL_BATTLE_ONLY)
                    StringAppend(string, COMPOUND_STRING(" during battle"));
                break;
            case EVO_TRADE:
                StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} when traded"));
                StringAppend(string,gStringVar4);
                break;
            case EVO_ITEM:
                StringCopy(gStringVar2,GetItemName(evolutions[methodIndex].param));
                StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} upon exposure to {STR_VAR_2}"));
                StringAppend(string,gStringVar4);
                break;
            case EVO_SPLIT_FROM_EVO:
                StringCopy(gStringVar2,GetSpeciesName(evolutions[methodIndex].param));
                StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} after it evolves into {STR_VAR_2}"));
                StringAppend(string,gStringVar4);
                break;
            case EVO_SCRIPT_TRIGGER:
                StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} under specific circumstances"));
                StringAppend(string,gStringVar4);
                break;
            case EVO_BATTLE_END:
                StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} after battle"));
                StringAppend(string,gStringVar4);
                break;
            case EVO_SPIN:
                StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Evolves from {STR_VAR_1} after the Trainer spins"));
                StringAppend(string,gStringVar4);
                break;
        }

        if (evolutions[methodIndex].params != NULL)
        {
            u32 stop = 0;
            u32 conditionIndex = 0;
            u32 arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
            u32 arg2 = evolutions[methodIndex].params[conditionIndex].arg2;
            u32 arg3 = evolutions[methodIndex].params[conditionIndex].arg3;

            for (conditionIndex = 0; evolutions[methodIndex].params[conditionIndex].condition != CONDITIONS_END; conditionIndex++)
                stop++;

            StringAppend(string,COMPOUND_STRING(" while "));

            for (u32 conditionIndex = 0; evolutions[methodIndex].params[conditionIndex].condition != CONDITIONS_END; conditionIndex++)
            {
                switch (evolutions[methodIndex].params[conditionIndex].condition)
                {
                    default:
                    case IF_GENDER:
                        if(evolutions[methodIndex].params[conditionIndex].arg1 == MON_FEMALE)
                            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("gender is female"));
                        else
                            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("gender is male"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_TIME:
                        switch(evolutions[methodIndex].params[conditionIndex].arg1)
                        {
                            case TIME_MORNING: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is morning"));
                                               break;
                            case TIME_DAY: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is day"));
                                           break;
                            case TIME_EVENING: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is evening"));
                                               break;
                            case TIME_NIGHT: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is night"));
                                             break;
                        }
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_NOT_TIME:
                        switch(evolutions[methodIndex].params[conditionIndex].arg1)
                        {
                            case TIME_MORNING: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is not morning"));
                                               break;
                            case TIME_DAY: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is not day"));
                                           break;
                            case TIME_EVENING: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is not evening"));
                                               break;
                            case TIME_NIGHT: StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("it is not night"));
                                             break;
                        }
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_MIN_FRIENDSHIP:
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("friendship > {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_ATK_GT_DEF:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("its Attack > Defense"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_ATK_EQ_DEF:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("its Attack = Defense"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_ATK_LT_DEF:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("its Attack < Defense"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_HOLD_ITEM:
                        StringCopy(gStringVar2,GetItemName(evolutions[methodIndex].params[conditionIndex].arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("holding {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_PID_UPPER_MODULO_10_GT:
                    case IF_PID_UPPER_MODULO_10_EQ:
                    case IF_PID_UPPER_MODULO_10_LT:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("having a random (50%) genetic trait"));
                        StringAppend(string,gStringVar4);
                    case IF_MIN_BEAUTY:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("if beauty > {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_MIN_COOLNESS:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("if coolness > {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_MIN_SMARTNESS:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("if smartness > {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_MIN_TOUGHNESS:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("if toughness > {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_MIN_CUTENESS:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("if cuteness > {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_SPECIES_IN_PARTY:
                        StringCopy(gStringVar2, GetSpeciesName(evolutions[methodIndex].params[conditionIndex].arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("{STR_VAR_2} is in the party"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_IN_MAP:
                    case IF_IN_MAPSEC:
                        GetMapNameGeneric(gStringVar2,evolutions[methodIndex].params[conditionIndex].arg1);
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("current location is {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_KNOWS_MOVE:
                        StringCopy(gStringVar2, GetMoveName(evolutions[methodIndex].params[conditionIndex].arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("knowing {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_TRADE_PARTNER_SPECIES:
                        StringCopy(gStringVar2, GetSpeciesName(evolutions[methodIndex].params[conditionIndex].arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("being traded for a {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_TYPE_IN_PARTY:
                        StringCopy(gStringVar2, gTypesInfo[(evolutions[methodIndex].params[conditionIndex].arg1)].name);
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("a {STR_VAR_2}-type is in the party"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_WEATHER:
                        BufferWeatherName(evolutions[methodIndex].params[conditionIndex].arg1, gStringVar1);
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("current weather is {STR_VAR_2}"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_KNOWS_MOVE_TYPE:
                        StringCopy(gStringVar2, gTypesInfo[(evolutions[methodIndex].params[conditionIndex].arg1)].name);
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("knowing {STR_VAR_2}-type move"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_NATURE:
                        StringCopy(gStringVar2, gNaturesInfo[(evolutions[methodIndex].params[conditionIndex].arg1)].name);
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("having a {STR_VAR_2} nature"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_AMPED_NATURE:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("having a Hardy, Brave, Adamant, Naughty, Docile, Impish, Lax, Hasty, Jolly, Naive, Rash, Sassy, or Quirky nature"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_LOW_KEY_NATURE:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("having a Lonely, Bold, Relaxed, Timid, Serious, Modest, Mild, Quiet, Bashful, Calm, Gentle, or Careful nature"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_RECOIL_DAMAGE_GE:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("sustaining more than {STR_VAR_2} recoil damage"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_CURRENT_DAMAGE_GE:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("sustaining more than {STR_VAR_2} damage"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_CRITICAL_HITS_GE:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("landing more than {STR_VAR_2} critical hits"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_USED_MOVE_X_TIMES:
                        arg1 = evolutions[methodIndex].params[conditionIndex].arg1;
                        arg2 = evolutions[methodIndex].params[conditionIndex].arg2;
                        StringCopy(gStringVar2,GetMoveName(arg1));
                        ConvertIntToDecimalStringN(gStringVar3, arg2, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg2));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("using {STR_VAR_2} {STR_VAR_3} times"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_DEFEAT_X_WITH_ITEMS:
                        StringCopy(gStringVar1,GetSpeciesName(arg1));
                        StringCopy(gStringVar2,GetItemName(arg2));
                        ConvertIntToDecimalStringN(gStringVar3, arg3, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg3));

                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("defeating {STR_VAR_1} that are holding {STR_VAR_2} {STR_VAR_3} times"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_PID_MODULO_100_EQ:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("having a random (1%) genetic trait"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_PID_MODULO_100_LT:
                    case IF_PID_MODULO_100_GT:
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("having a random (99%) genetic trait"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_MIN_OVERWORLD_STEPS:
                        ConvertIntToDecimalStringN(gStringVar2, arg1, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg1));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("following their Trainer for {STR_VAR_2} steps"));
                        StringAppend(string,gStringVar4);
                        break;
                    case IF_BAG_ITEM_COUNT:
                        CopyItemNameHandlePlural(arg1,gStringVar1,arg2);
                        ConvertIntToDecimalStringN(gStringVar2, arg2, STR_CONV_MODE_LEFT_ALIGN, CountDigits(arg2));
                        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("their Trainer has {STR_VAR_2} {STR_VAR_1}"));
                        StringAppend(string,gStringVar4);
                        break;
                }
                if (stop != (conditionIndex + 1))
                    StringAppend(string, COMPOUND_STRING(", and "));
            }
        }
        StringAppend(string, COMPOUND_STRING(". "));
    }
    return success;
}

static void PageEvolution_PrintEvolutionDetails(void)
{
    enum PokedexPageEvolutionWindows windowId = PAGE_EVOLUTION_WINDOW_METHOD_DESC;
    u32 currentPosition = PageEvolution_GetMonListPosition();
    u32 fontId = FONT_EVOLUTION_DESC;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 4, y = 0, screenLines = 4;
    u32 windowWidth = GetWindowAttribute(windowId, WINDOW_WIDTH) * TILE_SIZE_1BPP - 8;
    u32 spotlightMon = PageEvolution_GetMonList(currentPosition);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    u8 *string = Alloc(POKEDEX_PAGE_STRING_LENGTH);
    StringCopy(string,COMPOUND_STRING(""));

    for (u32 evoIndex = 0; evoIndex < MAX_NUM_FORMS_EVOLUTIONS; evoIndex++)
    {
        if (PageEvolution_GetTargetSpecies(evoIndex) != spotlightMon)
            continue;

        if (PageEvolution_GenerateEvolutionDetails(string,spotlightMon,evoIndex))
            break;
    }

    BreakStringNaive(string, windowWidth, screenLines, fontId, HIDE_SCROLL_PROMPT);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,string);
    Free(string);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageForms_PrintFormDetails(void)
{
    enum PokedexPageEvolutionWindows windowId = PAGE_EVOLUTION_WINDOW_METHOD_DESC;
    u32 currentPosition = PageEvolution_GetMonListPosition();
    u32 fontId = FONT_EVOLUTION_DESC;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 windowWidth = (GetWindowAttribute(windowId, WINDOW_WIDTH) * TILE_SIZE_1BPP) - TILE_SIZE_1BPP;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    PageForms_PrintOriginalAndTargetSpecies(windowId, fontId, letterSpacing, lineSpacing, windowWidth, currentPosition);
    PageForms_PrintTransformationCriteria(windowId, fontId, letterSpacing, lineSpacing, windowWidth, currentPosition);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageForms_PrintOriginalAndTargetSpecies(enum PokedexPageEvolutionWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 windowWidth, u32 currentPosition)
{
    u32 x = 4, y = 0;
    StringCopy(gStringVar2, GetFormOrSpeciesName(PageEvolution_GetOriginalSpecies(currentPosition)));
    StringCopy(gStringVar3, GetFormOrSpeciesName(PageEvolution_GetTargetSpecies(currentPosition)));

    if (PageEvolution_GetOriginalSpecies(currentPosition) == SPECIES_ANY || PageEvolution_GetMethod(currentPosition) == SPECIES_LOCKED)
        StringCopy(gStringVar2, GetSpeciesName(PageEvolution_GetTargetSpecies(currentPosition)));

    if (PageEvolution_GetMethod(currentPosition) == SPECIES_LOCKED)
        StringExpandPlaceholders(gStringVar1,COMPOUND_STRING("{STR_VAR_2} × {STR_VAR_3}"));
    else
        StringExpandPlaceholders(gStringVar1,COMPOUND_STRING("{STR_VAR_2} {RIGHT_ARROW} {STR_VAR_3}"));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar1);
}

const u8 *const sTerrainNames[BATTLE_ENVIRONMENT_COUNT] =
{
    [BATTLE_ENVIRONMENT_GRASS] = COMPOUND_STRING("Grass"),
    [BATTLE_ENVIRONMENT_LONG_GRASS] = COMPOUND_STRING("Long Grass"),
    [BATTLE_ENVIRONMENT_SAND] = COMPOUND_STRING("Sand"),
    [BATTLE_ENVIRONMENT_UNDERWATER] = COMPOUND_STRING("Underwater"),
    [BATTLE_ENVIRONMENT_WATER] = COMPOUND_STRING("Water"),
    [BATTLE_ENVIRONMENT_POND] = COMPOUND_STRING("Pond"),
    [BATTLE_ENVIRONMENT_MOUNTAIN] = COMPOUND_STRING("Mountain"),
    [BATTLE_ENVIRONMENT_CAVE] = COMPOUND_STRING("Cave"),
    [BATTLE_ENVIRONMENT_BUILDING] = COMPOUND_STRING("Building"),
    [BATTLE_ENVIRONMENT_PLAIN] = COMPOUND_STRING("Plain"),
    [BATTLE_ENVIRONMENT_SOARING] = COMPOUND_STRING("Soaring"),
    [BATTLE_ENVIRONMENT_SKY_PILLAR] = COMPOUND_STRING("Sky Pillar"),
    [BATTLE_ENVIRONMENT_BURIAL_GROUND] = COMPOUND_STRING("Burial Ground"),
    [BATTLE_ENVIRONMENT_PUDDLE] = COMPOUND_STRING("Puddle"),
    [BATTLE_ENVIRONMENT_MARSH] = COMPOUND_STRING("Marsh"),
    [BATTLE_ENVIRONMENT_SWAMP] = COMPOUND_STRING("Swamp"),
    [BATTLE_ENVIRONMENT_SNOW] = COMPOUND_STRING("Snow"),
    [BATTLE_ENVIRONMENT_ICE] = COMPOUND_STRING("Ice"),
    [BATTLE_ENVIRONMENT_VOLCANO] = COMPOUND_STRING("Volcano"),
    [BATTLE_ENVIRONMENT_DISTORTION_WORLD] = COMPOUND_STRING("Distortion World"),
    [BATTLE_ENVIRONMENT_SPACE] = COMPOUND_STRING("Space"),
    [BATTLE_ENVIRONMENT_ULTRA_SPACE] = COMPOUND_STRING("Ultra_Space"),
};

static void BufferWeatherName(u32 weather, u8* string)
{
    switch (weather)
    {
        case B_WEATHER_RAIN_DOWNPOUR: StringCopy(string,COMPOUND_STRING("downpour rainy"));
                                      break;
        case B_WEATHER_RAIN_PRIMAL: StringCopy(string,COMPOUND_STRING("primal rainy"));
                                    break;
        case B_WEATHER_RAIN_NORMAL:
        case B_WEATHER_RAIN: StringCopy(string,COMPOUND_STRING("rainy"));
                             break;
        case ~B_WEATHER_RAIN: StringCopy(string,COMPOUND_STRING("not rain"));
                              break;
                              break;
        case B_WEATHER_SANDSTORM: StringCopy(string,COMPOUND_STRING("sandstorm"));
                                  break;
        case ~B_WEATHER_SANDSTORM: StringCopy(string,COMPOUND_STRING("not sandstorm"));
                                   break;
        case B_WEATHER_SUN_PRIMAL: StringCopy(string,COMPOUND_STRING("primal sunny"));
                                   break;
        case B_WEATHER_SUN_NORMAL:
        case B_WEATHER_SUN: StringCopy(string,COMPOUND_STRING("sunny"));
                            break;
        default:
        case (~B_WEATHER_SUN): StringCopy(string,COMPOUND_STRING("not sunny"));
                               break;
        case B_WEATHER_HAIL: StringCopy(string,COMPOUND_STRING("hailing"));
                             break;
        case ~B_WEATHER_HAIL: StringCopy(string,COMPOUND_STRING("not hailing"));
                              break;
        case B_WEATHER_STRONG_WINDS: StringCopy(string,COMPOUND_STRING("extremely windy"));
                                     break;
        case ~B_WEATHER_STRONG_WINDS: StringCopy(string,COMPOUND_STRING("not windy"));
                                      break;
        case B_WEATHER_SNOW: StringCopy(string,COMPOUND_STRING("snowing"));
                             break;
        case ~B_WEATHER_SNOW: StringCopy(string,COMPOUND_STRING("not snowing"));
                              break;
        case B_WEATHER_FOG: StringCopy(string,COMPOUND_STRING("foggy"));
                            break;
        case ~B_WEATHER_FOG: StringCopy(string,COMPOUND_STRING("not foggy"));
                             break;
        case B_WEATHER_ANY: StringCopy(string,COMPOUND_STRING("any"));
                            break;
        case B_WEATHER_PRIMAL_ANY: StringCopy(string,COMPOUND_STRING("primal"));
                                   break;
        case ~B_WEATHER_ANY: StringCopy(string,COMPOUND_STRING("no"));
                             break;
    }
}

static void PageForms_GenerateTransformString(u32 method, u32 param1, u32 param2, u32 param3, u32 species, u32 listId)
{
    switch (method)
    {
        case FORM_CHANGE_ITEM_USE:
        case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM:
        case FORM_CHANGE_ITEM_USE_MULTICHOICE:
            CopyItemName(param1,gStringVar1);
            break;
        case FORM_CHANGE_BATTLE_WEATHER:
            BufferWeatherName(param1, gStringVar1);
            StringCopy(gStringVar2,GetAbilityName(param2));
            break;
        case FORM_CHANGE_BATTLE_BEFORE_MOVE:
            StringCopy(gStringVar1,GetMoveName(param1));
            break;
        case FORM_CHANGE_BATTLE_HP_PERCENT:
            StringCopy(gStringVar1,GetAbilityName(param1));
            if (param2 == HP_HIGHER_THAN)
                StringCopy(gStringVar2,COMPOUND_STRING("higher than"));
            else
                StringCopy(gStringVar2,COMPOUND_STRING("lower than or equal to"));
            ConvertIntToDecimalStringN(gStringVar3, param3, STR_CONV_MODE_LEFT_ALIGN, 3);
            break;
        case FORM_CHANGE_ITEM_HOLD:
            StringCopy(gStringVar2,GetAbilityName(param2));
            CopyItemName(param1,gStringVar1);
            break;
        default:
            break;
    }
}

static void PageForms_PrintTransformationCriteria(enum PokedexPageEvolutionWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 windowWidth, u32 currentPosition)
{
    u32 screenLines = POKEDEX_STATS_FORMS_DESC_SCREEN_LINES;

    s32 originalSpecies = (PageEvolution_GetOriginalSpecies(currentPosition));
    s32 param1 = PageEvolution_GetArg1(currentPosition);
    s32 param2 = PageEvolution_GetArg2(currentPosition);
    s32 param3 = PageEvolution_GetArg3(currentPosition);
    s32 method = PageEvolution_GetMethod(currentPosition);

    PageForms_GenerateTransformString(method,param1,param2,param3,originalSpecies,currentPosition);

    StringCopy(gStringVar4,COMPOUND_STRING(""));
    StringExpandPlaceholders(gStringVar4,pokemonFormTable[ConvertSpeciesToFormTableEnum(PageForm_GetMonForFormList())][currentPosition].description);

    BreakStringNaive(gStringVar4, windowWidth, screenLines, fontId,HIDE_SCROLL_PROMPT);

    u32 x = 4, y = GetFontAttribute(fontId,FONTATTR_MAX_LETTER_HEIGHT);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar4);
}

static void PageEvolutionForms_PrintDetails(enum PokedexPages page)
{
    if (page == POKEDEX_PAGE_EVOLUTION)
        PageEvolution_PrintEvolutionDetails();
    else
        PageForms_PrintFormDetails();
}

static void PageEvolution_SpeciesData_ShowSelectedMon(void)
{
    u32 species = PageEvolution_GetMonList(PageEvolution_GetMonListPosition());
    enum PokedexPageEvolutionWindows windowId = PAGE_EVOLUTION_WINDOW_SPECIES_DATA;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (GetCurrentPage() == POKEDEX_PAGE_FORMS)
        SpeciesData_SetSavedLastForm(species);
    else
        species = SpeciesData_CheckLastSeenForm(species);

    PageEvolution_SpeciesData_PrintSpeciesNum(species, windowId);
    PageEvolution_SpeciesData_PrintStats(species, windowId);
    SpeciesData_PrintCaptureIndicator(species);
    SpeciesData_PrintMonSprite(species);
    SpeciesData_PrintMonTypes(species);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageEvolution_SpeciesData_PrintSpeciesNum(u32 species, u32 windowId)
{
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    u32 x = POKEDEX_STATS_NUM_X_STARTING;
    u32 y = POKEDEX_STATS_CATEGORY_Y_STARTING;
    u32 natDexId = ConvertSpeciesIdToResidoDex(species);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    if (species == SPECIES_NONE)
        return;

    if (GetCurrentPage() == POKEDEX_PAGE_INFORMATION)
        y -= TILE_SIZE_1BPP;

    ConvertIntToDecimalStringN(gStringVar1,natDexId,STR_CONV_MODE_LEADING_ZEROS,4);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("¥{STR_VAR_1}"));
    //PSF TODO replace yen with octhorpe
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW,gStringVar3);
}

const u8 *const sStatNames[] =
{
    [STAT_HP] = COMPOUND_STRING("HP"),
    [STAT_ATK] = COMPOUND_STRING("ATK"),
    [STAT_DEF] = COMPOUND_STRING("DEF"),
    [STAT_SPEED] = COMPOUND_STRING("SPEED"),
    [STAT_SPATK] = COMPOUND_STRING("SPATK"),
    [STAT_SPDEF] = COMPOUND_STRING("SPDEF"),
};

static void PageEvolution_SpeciesData_PrintStats(u32 species, u32 windowId)
{
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    u32 x = POKEDEX_STATS_STATS_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_CATEGORY_Y_STARTING;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    if (species == SPECIES_NONE)
        return;

    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("Stats:"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW,gStringVar3);

    y += POKEDEX_STATS_YIELD_START_PADDING;

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,sStatNames[statIndex]);
        x+= POKEDEX_STATS_VALUE_X_PADDING;
        u32 stat = SpeciesFilter_GetStatForMon(statIndex,species);
        ConvertIntToDecimalStringN(gStringVar1,stat,STR_CONV_MODE_LEADING_ZEROS,CountDigits(UCHAR_MAX));
        PageStats_ChangeStatHighlightBasedOnValue(statIndex, stat);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
        x -= POKEDEX_STATS_VALUE_X_PADDING;
        y += POKEDEX_STATS_YIELD_Y_PADDING;
    }

    if (GetCurrentPage() != POKEDEX_PAGE_STATS)
        return;

    PageStats_SpeciesData_PrintYield(windowId,fontId,letterSpacing,lineSpacing,species);
    PageStats_SpeciesData_PrintGender(windowId,fontId,letterSpacing,lineSpacing,species);
}

static void PageStats_SpeciesData_PrintYield(u32 windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 species)
{
    u32 x = POKEDEX_STATS_YIELD_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_CATEGORY_Y_STARTING;
    u32 yield = 0;

    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("Yield:"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW,gStringVar3);

    x += POKEDEX_STATS_YIELD_X_PADDING;
    y += POKEDEX_STATS_YIELD_START_PADDING;

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        yield = SpeciesStats_GetYieldForMon(statIndex, species);

        if (yield == 0)
        {
            y += POKEDEX_STATS_YIELD_Y_PADDING;
            continue;
        }

        StringCopy(gStringVar1,COMPOUND_STRING("+"));
        ConvertIntToDecimalStringN(gStringVar2,yield,STR_CONV_MODE_LEADING_ZEROS,1);
        StringAppend(gStringVar1,gStringVar2);

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

        y += POKEDEX_STATS_YIELD_Y_PADDING;
    }
}

const u8* const genderRatioTable[]=
{
    [MON_MALE] = COMPOUND_STRING("100% ♂"),
    [MON_GENDERLESS] = COMPOUND_STRING("Genderless"),
    [MON_FEMALE] = COMPOUND_STRING("100% ♀"),
    [MON_12_5_FEMALE] = COMPOUND_STRING("87.5% ♂ - 12.5% ♀"),
    [PERCENT_FEMALE(25)] = COMPOUND_STRING("75% ♂ - 25% ♀"),
    [PERCENT_FEMALE(50)] = COMPOUND_STRING("50% ♂ - 50% ♀"),
    [PERCENT_FEMALE(75)] = COMPOUND_STRING("25% ♂ - 75% ♀"),
    [MON_87_5_FEMALE] = COMPOUND_STRING("12.5% ♂ - 87.5% ♀"),
};

static void PageStats_SpeciesData_PrintGender(u32 windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 species)
{
    u32 x = POKEDEX_STATS_GENDER_STRING_X_STARTING;
    u32 y = POKEDEX_STATS_CATEGORY_Y_STARTING;
    u8 ratio = gSpeciesInfo[species].genderRatio;

    StringCopy(gStringVar3,genderRatioTable[ratio]);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW,gStringVar3);
}

u32 PageEvolution_CalculateScrollbarYPosition(void)
{
    u32 currentRowNumber = PageEvolution_GetMonListPosition();
    u32 totalRowNumber = (PageEvolution_GetNumMons()) - 1;

    if (currentRowNumber == 0)
        return (MIN_EVOLUTION_PAGE_SCROLLBAR_Y);
    else if (currentRowNumber == totalRowNumber)
        return (MIN_EVOLUTION_PAGE_SCROLLBAR_Y+ MOVEABLE_AREA_EVOLUTION_PAGE_SCROLLBAR);
    else
        return MIN_EVOLUTION_PAGE_SCROLLBAR_Y + ((currentRowNumber * 100 / totalRowNumber) * MOVEABLE_AREA_EVOLUTION_PAGE_SCROLLBAR / 100);

    return MIN_EVOLUTION_PAGE_SCROLLBAR_Y;
}

static u32 PageEvolutions_MovePositionToTarget(void)
{
    u32 species = ParentDisplay_GetFutureSpeciesId();
    if (species == SPECIES_NONE)
        species = SpeciesGrid_GetCurrentSpecies();

    for (u32 formIndex = 0; formIndex < MAX_NUM_FORMS_EVOLUTIONS; formIndex++)
    {
        u32 targetSpecies = PageEvolution_GetTargetSpecies(formIndex);

        if (targetSpecies == species)
            return formIndex;

        if (targetSpecies == SPECIES_NONE)
            break;
    }
    return EVOLUTION_LIST_ROW_0;
}

static void PageStats_CreatePage(void)
{
    SpeciesData_ResetTypeSpriteId();
    SpeciesData_LoadCaptureIndicatorSprite();
    LoadTypeSpritesAndPalettes();
    SpeciesData_LoadHeaderSprite();
    PageStats_SpeciesData_ShowSelectedMon();
    PageStats_PrintAbilitiesAndDesc();
}

static void PageStats_PrintAbilitiesAndDesc(void)
{
    PageStats_PrintAbilities(PageMoves_GetMonToDisplay());
    PageStats_PrintStatsDesc();
    PrintHelpBar(PAGE_STATS_WINDOW_FOOTER);
}

void Task_PageStats_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    PageStats_HandleInput(taskId);
}

static void PageStats_HandleInput(u8 taskId)
{
    if (!PageStats_GetAbilityMode())
        PageStats_HandleStatsInput(taskId);
    else
        PageStats_HandleAbilityInput(taskId);
}

static void PageStats_HandleAbilityInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT) || JOY_NEW(L_BUTTON))
        PageStats_ChangeListPosition(-2);
    else if (JOY_NEW(DPAD_RIGHT) || JOY_NEW(R_BUTTON))
        PageStats_ChangeListPosition(2);
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        PageStats_ChangeListPosition(-1);
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        PageStats_ChangeListPosition(1);
    else if (JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
        PageStats_ToggleAbilityMode();
}

static void PageStats_HandleStatsInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
        PageMoves_SwitchToSpeciesGrid(taskId);
    else if (JOY_NEW(A_BUTTON))
        PageStats_ToggleAbilityMode();
    else if (JOY_NEW(R_BUTTON))
        Page_SwitchToNextPage(taskId);
    else if (JOY_NEW(L_BUTTON))
        Page_SwitchToLastPage(taskId);
}

static void PageStats_InitWindows(void)
{
    InitWindows(sPokedexPageStatsWindowTemplates);
    DeactivateAllTextPrinters();

    for(enum PokedexPageStatsWindows windowId = 0; windowId < PAGE_STATS_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

void PageStats_BuildHeaderStringPlayCry(enum PokedexPages pageId)
{
    u32 species = PageMoves_GetMonToDisplay();
    PokedexPage_PlaySpeciesCry(species,FALSE);
    StringCopy(gStringVar1,gSpeciesInfo[species].speciesName);
    PokedexPage_ConvertUpperToLowerCase(gStringVar1);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/{STR_VAR_1}/stats"));
}

void PageInformation_BuildHeaderStringPlayCry(enum PokedexPages pageId)
{
    u32 species = PageMoves_GetMonToDisplay();
    PokedexPage_PlaySpeciesCry(species,FALSE);

    StringCopy(gStringVar1,gSpeciesInfo[species].speciesName);
    PokedexPage_ConvertUpperToLowerCase(gStringVar1);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/{STR_VAR_1}/information"));
}

static void PageStats_SpeciesData_ShowSelectedMon(void)
{
    u32 species = PageMoves_GetMonToDisplay();
    enum PokedexPageStatsWindows windowId = PAGE_STATS_WINDOW_SPECIES_DATA;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    PageEvolution_SpeciesData_PrintSpeciesNum(species, windowId);
    PageEvolution_SpeciesData_PrintStats(species, windowId);
    SpeciesData_PrintCaptureIndicator(species);
    SpeciesData_PrintMonSprite(species);
    SpeciesData_PrintMonTypes(species);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

u32 SpeciesStats_GetYieldForMon(u32 stat, u32 species)
{
    switch (stat)
    {
        default:
        case STAT_HP: return gSpeciesInfo[species].evYield_HP;
        case STAT_ATK: return gSpeciesInfo[species].evYield_Attack;
        case STAT_DEF: return gSpeciesInfo[species].evYield_Defense;
        case STAT_SPEED: return gSpeciesInfo[species].evYield_Speed;
        case STAT_SPATK: return gSpeciesInfo[species].evYield_SpAttack;
        case STAT_SPDEF: return gSpeciesInfo[species].evYield_SpDefense;
    }
}

static void PageStats_PrintAbilities(u32 species)
{
    enum PokedexPageStatsWindows windowId = PAGE_STATS_WINDOW_ABILITIES_LIST;
    u32 fontId = FONT_EVOLUTION_LIST_HEADER;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 4, y = POKEDEX_STATS_ABILITY_TITLE_Y_STARTING;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    StringCopy(gStringVar1,COMPOUND_STRING("Abilities"));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

    y = POKEDEX_STATS_ABILITY_LIST_Y_STARTING;

    PageStats_PrintCursor(windowId);

    fontId = FONT_EVOLUTION_LIST;
    letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    u32 ability[NUM_ABILITY_SLOTS];
    u32 numAbility = NUM_ABILITY_SLOTS;

    for (u32 listId = 0; listId < NUM_ABILITY_SLOTS; listId++)
        ability[listId] = gSpeciesInfo[species].abilities[listId];

    for (u32 listId = 0; listId < NUM_ABILITY_SLOTS; listId++)
    {
        if (listId && (ability[listId] == ability[listId-1]))
        {
            ability[listId] = ABILITY_NONE;
            numAbility--;
        }

        if (listId == 2 && (ability[2] == ability[0]))
        {
            ability[listId] = ABILITY_NONE;
            numAbility--;
        }

        PageEvolution_SetMonList(listId, ability[listId]);

        PageMoves_BufferMoveNameToString(GetAbilityName(ability[listId]),gStringVar1,fontId, windowId);

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
        y += POKEDEX_STATS_ABILITY_LIST_Y_MARGIN;
    }
    PageEvolution_SetNumMons(NUM_ABILITY_SLOTS);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageStats_PrintStatsDesc(void)
{
    u32 species = ParentDisplay_GetFutureSpeciesId();
    enum PokedexPageStatsWindows windowId = PAGE_STATS_WINDOW_ABILITIES_DESC;
    u32 fontId = PageStats_GetAbilityMode() ? FONT_ABILITY_DESC : FONT_STATS_DESC;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 lineHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (PageStats_GetAbilityMode())
        PageStats_PrintAbilityDesc(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
    else
        PageStats_PrintNonAbilityDesc(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageStats_PrintAbilityDesc(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 currentPosition = PageEvolution_GetMonListPosition();
    u32 ability = PageEvolution_GetMonList(currentPosition);
    u32 x = 4, y = POKEDEX_STATS_ABILIT_DESC_Y_STARTING;
    if (ability == ABILITY_NONE && currentPosition == 1)
    {
        StringCopy(gStringVar2,GetSpeciesName(species));
        StringExpandPlaceholders(gStringVar1,COMPOUND_STRING("{STR_VAR_2} does not have a second Ability."));
    }
    else if (ability == ABILITY_NONE && currentPosition == 2)
    {
        StringCopy(gStringVar2,GetSpeciesName(species));
        StringExpandPlaceholders(gStringVar1,COMPOUND_STRING("{STR_VAR_2} does not have a Hidden Ability."));
    }
    else
    {
        StringCopy(gStringVar1,GetAbilityDesc(ability));
    }

    PageMoves_BufferMoveNameToString(gStringVar1, gStringVar1, fontId, windowId);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static void PageStats_PrintNonAbilityDesc(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    PageStats_PrintItems(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
    PageStats_PrintExpYield(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
    PageStats_PrintFriendship(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
    PageStats_PrintEggGroups(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
    PageStats_PrintGrowthRate(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
    PageStats_PrintCatchRate(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
    PageStats_PrintEggCycles(species,windowId,fontId,letterSpacing,lineSpacing,lineHeight);
}

static void PageStats_PrintItems(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_STATS_INFO_COLUMN_1_TITLE_X_STARTING, y = POKEDEX_STATS_INFO_COLUMN_1_TITLE_Y_STARTING, percent = 0;

    PageStats_BufferAbilityDescColumn(COMPOUND_STRING("Wild Held Items:"), gStringVar1, fontId, STATS_ABILITY_DESC_LEFT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

    u32 items[2];
    items[0] = gSpeciesInfo[species].itemCommon;
    items[1] = gSpeciesInfo[species].itemRare;
    y = POKEDEX_STATS_INFO_ITEM_NAME_Y_STARTING;

    for (u32 listId = 0; listId < ARRAY_COUNT(items); listId++)
    {
        StringCopy(gStringVar1,GetItemName(items[listId]));

        if (items[listId] == ITEM_NONE && !listId)
            continue;
        else if ((items[0] == items[1]) && !listId)
            percent = 100;
        else if ((items[0] == items[1]) && listId)
            StringCopy(gStringVar1,COMPOUND_STRING("None"));
        else if (items[listId] == ITEM_NONE && listId)
            continue;
        else if (listId)
            percent = 5;
        else
            percent = 50;

        if (percent)
        {
            BlitBitmapToWindow(windowId, speciesItemIcon, POKEDEX_STATS_ITEM_ICON_X_STARTING, y+POKEDEX_STATS_ITEM_ICON_Y_MARGIN , TILE_SIZE_1BPP, TILE_SIZE_1BPP);
            StringAppend(gStringVar1,COMPOUND_STRING(" "));
            ConvertIntToDecimalStringN(gStringVar2, percent, STR_CONV_MODE_LEFT_ALIGN, CountDigits(percent));
            StringAppend(gStringVar1,gStringVar2);
            StringAppend(gStringVar1,COMPOUND_STRING("%"));
        }

        PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_LEFT_COLUMN_WIDTH);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
        y = POKEDEX_STATS_INFO_ITEM_RARE_NAME_Y_STARTING;
        percent = 0;
    }
}

static void PageStats_PrintExpYield(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_STATS_INFO_COLUMN_1_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_INFO_EXP_YIELD;
    u32 yield = gSpeciesInfo[species].expYield;
    StringCopy(gStringVar1,COMPOUND_STRING("Exp Yield:"));
    ConvertIntToDecimalStringN(gStringVar2, yield, STR_CONV_MODE_LEFT_ALIGN, CountDigits(yield));
    StringAppend(gStringVar1,gStringVar2);

    PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_LEFT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static void PageStats_PrintFriendship(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_STATS_INFO_COLUMN_1_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_INFO_FRIENDSHIP_Y_STARTING;
    u32 friendship = gSpeciesInfo[species].friendship;
    StringCopy(gStringVar1,COMPOUND_STRING("Base Friendship:"));
    ConvertIntToDecimalStringN(gStringVar2, friendship, STR_CONV_MODE_LEFT_ALIGN, CountDigits(friendship));
    StringAppend(gStringVar1,gStringVar2);

    PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_LEFT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}
static void PageStats_PrintEggGroups(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_STATS_INFO_COLUMN_2_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_INFO_EGG_GROUP_TITLE_Y_STARTING;
    u32 eggGroups[EGG_GROUPS_PER_MON] = {EGG_GROUP_NONE};

    StringCopy(gStringVar1,COMPOUND_STRING("Egg Group:"));
    PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_RIGHT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

    y = POKEDEX_STATS_INFO_EGG_GROUPS_Y_STARTING;

    eggGroups[0] = gSpeciesInfo[species].eggGroups[0];
    eggGroups[1] = gSpeciesInfo[species].eggGroups[1];
    StringCopy(gStringVar1,sEggGroupTexts[eggGroups[0]]);

    if (eggGroups[1] && (eggGroups[0] != eggGroups[1]))
    {
        StringAppend(gStringVar1, COMPOUND_STRING(", "));
        StringAppend(gStringVar1,sEggGroupTexts[eggGroups[1]]);
    }

    PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_RIGHT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static const u8 *const sGrowthRateNames[] =
{
    [GROWTH_MEDIUM_FAST] = COMPOUND_STRING("Medium Fast"),
    [GROWTH_ERRATIC] = COMPOUND_STRING("Erratic"),
    [GROWTH_FLUCTUATING] = COMPOUND_STRING("Fluctuating"),
    [GROWTH_MEDIUM_SLOW] = COMPOUND_STRING("Medium Slow"),
    [GROWTH_FAST] = COMPOUND_STRING("Fast"),
    [GROWTH_SLOW] = COMPOUND_STRING("Slow"),
};

static void PageStats_PrintGrowthRate(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_STATS_INFO_COLUMN_2_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_INFO_GROWTH_RATE_Y_STARTING;
    u32 growth = gSpeciesInfo[species].growthRate;
    StringCopy(gStringVar1,COMPOUND_STRING("Leveling Rate:"));
    StringAppend(gStringVar1,sGrowthRateNames[growth]);

    PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_RIGHT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}
static void PageStats_PrintCatchRate(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_STATS_INFO_COLUMN_2_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_INFO_CATCH_RATE_Y_STARTING;
    u32 catchRate = gSpeciesInfo[species].catchRate;
    StringCopy(gStringVar1,COMPOUND_STRING("Catch Rate:"));
    ConvertIntToDecimalStringN(gStringVar2, catchRate, STR_CONV_MODE_LEFT_ALIGN, CountDigits(catchRate));
    StringAppend(gStringVar1,gStringVar2);

    PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_RIGHT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static void PageStats_PrintEggCycles(u32 species, enum PokedexPageStatsWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_STATS_INFO_COLUMN_2_TITLE_X_STARTING;
    u32 y = POKEDEX_STATS_INFO_EGG_CYCLES_Y_STARTING;
    u32 cycles = 128 * gSpeciesInfo[species].eggCycles;
    StringCopy(gStringVar1,COMPOUND_STRING("Steps to Hatch:"));
    ConvertIntToDecimalStringN(gStringVar2, cycles, STR_CONV_MODE_LEFT_ALIGN, CountDigits(cycles));
    StringAppend(gStringVar1,gStringVar2);

    PageStats_BufferAbilityDescColumn(gStringVar1, gStringVar1, fontId, STATS_ABILITY_DESC_RIGHT_COLUMN_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static bool32 PageStats_GetAbilityMode(void)
{
    return sPokedexEvolutionPageData->abilityModeOn;
}

static void PageStats_SetAbilityMode(bool32 value)
{
    sPokedexEvolutionPageData->abilityModeOn = value;
}

static void PageStats_ToggleAbilityMode(void)
{
    bool32 current = PageStats_GetAbilityMode();
    PageStats_SetAbilityMode(!current);
    PageStats_PrintAbilitiesAndDesc();
    PlaySE(SE_SELECT);
}

static void PageStats_ChangeListPosition(s32 delta)
{
    u32 oldPosition = PageEvolution_GetMonListPosition();
    s32 newPosition = PageEvolution_GetMonListPosition() + delta;
    u32 maxListPosition = NUM_ABILITY_SLOTS - 1;

    if (newPosition < 0)
        newPosition = maxListPosition;
    else if (newPosition > maxListPosition)
        newPosition = 0;

    if (newPosition == oldPosition)
        return;

    PlaySE(SE_SELECT);
    PageEvolution_SetMonListPosition(newPosition);
    PageEvolution_SetMonCursorCoordinate(newPosition);
    PageStats_PrintAbilitiesAndDesc();
    DebugEvolutionPrintCoorindates();
}

static void PageStats_PrintCursor(enum PokedexPageStatsWindows windowId)
{
    if (!PageStats_GetAbilityMode())
        return;

    u32 y = (PageEvolution_GetMonCursorCoordinate() * (2 * TILE_SIZE_1BPP)) + 26;
    u32 x = 2;
    u32 width = STAT_LIST_CURSOR_WIDTH;
    u32 height = STAT_LIST_CURSOR_HEIGHT;

    BlitBitmapToWindow(windowId, abilityListCursor, x, y , width, height);
}

u8* GetStatsPageHelpText(void)
{
    u8* end;

    if (PageStats_GetAbilityMode())
        end = StringCopy(gStringVar3, COMPOUND_STRING("{DPAD_NONE} Explore Abilities {R_BUTTON} Next Page {A_BUTTON} See Species Stats"));
    else
        end = StringCopy(gStringVar3, COMPOUND_STRING("{A_BUTTON} See Ability Description  {R_BUTTON} Next Page {B_BUTTON} Return"));

    return end;
}

static void PageInformation_CreatePage(void)
{
    u32 species = PageMoves_GetMonToDisplay();

    SpeciesData_ResetTypeSpriteId();
    SpeciesData_LoadCaptureIndicatorSprite();
    LoadTypeSpritesAndPalettes();
    SpeciesData_LoadHeaderSprite();
    SpeciesData_PrintCaptureIndicator(species);
    PageInformation_PrintSpeciesData(species);
    PageInformation_PrintDescAndSprites(species);
    PageInformation_PrintSpeciesFlavor(species);
    PrintHelpBar(PAGE_INFORMATION_WINDOW_FOOTER);
}

static void PageInformation_InitWindows(void)
{
    InitWindows(sPokedexPageInformationWindowTemplates);
    DeactivateAllTextPrinters();

    for(enum PokedexPageInformationWindows windowId = 0; windowId < PAGE_INFORMATION_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

void Task_PageInformation_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    PageInformation_HandleInput(taskId);
}

static void PageInformation_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
        PageMoves_SwitchToSpeciesGrid(taskId);
    else if (JOY_NEW(A_BUTTON))
        PokedexPage_PlaySpeciesCry(PageMoves_GetMonToDisplay(),TRUE);
    else if (JOY_NEW(R_BUTTON))
        Page_SwitchToNextPage(taskId);
    else if (JOY_NEW(L_BUTTON))
        Page_SwitchToLastPage(taskId);
}

static void PageInformation_PrintSpeciesData(u32 species)
{
    if (species == SPECIES_NONE)
        return;

    enum PokedexPageInformationWindows windowId = PAGE_INFORMATION_WINDOW_DATA;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    u32 fontId = FONT_STATS_DESC;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 lineHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);

    PageEvolution_SpeciesData_PrintSpeciesNum(species,(enum PokedexPageEvolutionWindows) windowId);
    PageInformation_Footprint(species, windowId, fontId, letterSpacing, lineSpacing, lineHeight);
    FlagSet(FLAG_SCRIPT_USE);
    PageInformation_PrintHeight(species, windowId, fontId, letterSpacing, lineSpacing, lineHeight);
    PageInformation_PrintWeight(species, windowId, fontId, letterSpacing, lineSpacing, lineHeight);
    FlagClear(FLAG_SCRIPT_USE);
    PageInformation_PrintTypes(species, windowId, fontId, letterSpacing, lineSpacing, lineHeight);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageInformation_Footprint(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    PageInformation_PrintFootprintTitle(species, windowId, fontId, letterSpacing, lineSpacing, lineHeight);
    PageInformation_DrawFootprintSprite(species);
}

static void PageInformation_PrintFootprintTitle(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_INFO_FOOTPRINT_TITLE_X_STARTING;
    u32 y = POKEDEX_INFO_FOOTPRINT_TITLE_Y_STARTING;

    StringCopy(gStringVar1,COMPOUND_STRING("Footprint:"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static void PageInformation_PrintHeight(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_INFO_MEASUREMENT_LABEL_X_STARTING;
    u32 y = POKEDEX_INFO_HEIGHT_Y_STARTING;
    u32 height = GetSpeciesHeight(species);
    u8* heightString = ConvertMonHeightToString(height);

    StringCopy(gStringVar1,COMPOUND_STRING("Height:"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

    x = POKEDEX_INFO_MEASUREMENT_VALUE_X_STARTING;

    PageMoves_BufferMoveNameToString(heightString, gStringVar1, fontId, PAGE_INFORMATION_WINDOW_DATA);
    Free(heightString);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static void PageInformation_PrintWeight(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_INFO_MEASUREMENT_LABEL_X_STARTING;
    u32 y = POKEDEX_INFO_WEIGHT_Y_STARTING;
    u32 weight = GetSpeciesWeight(species);
    u8* weightString = ConvertMonWeightToString(weight);

    StringCopy(gStringVar1,COMPOUND_STRING("Weight:"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

    x = POKEDEX_INFO_MEASUREMENT_VALUE_X_STARTING;

    PageMoves_BufferMoveNameToString(weightString, gStringVar1, fontId, PAGE_INFORMATION_WINDOW_DATA);
    Free(weightString);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
}

static void PageInformation_PrintTypes(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x;
    u32 y = POKEDEX_INFO_TYPE_NAME_Y_STARTING;
    u32 types[TYPES_PER_MON];
    enum PokedexPages pageId = GetCurrentPage();

    for (u32 typeIndex = 0; typeIndex < TYPES_PER_MON; typeIndex++)
    {
        x = POKEDEX_INFO_TYPE_TITLE_X_STARTING;
        types[typeIndex] = gSpeciesInfo[species].types[typeIndex];

        if (types[0] == types[1])
            types[1] = TYPE_NONE;

        if (types[typeIndex] == TYPE_NONE)
            continue;

        StringCopy(gStringVar1,COMPOUND_STRING("Type "));
        ConvertIntToDecimalStringN(gStringVar2, (typeIndex+1), STR_CONV_MODE_LEFT_ALIGN, CountDigits(typeIndex));
        StringAppend(gStringVar1,gStringVar2);
        StringAppend(gStringVar1,COMPOUND_STRING(":"));

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);

        u32 fontColor = PageMoves_GetContrastColor(types[typeIndex]);
        FillPalette(gTypesInfo[types[typeIndex]].siliconRGBValue,POKEDEX_INFO_TYPE_WINDOW_COLOR_ADDRESS+typeIndex, 2);

        PageMoves_EditPage_SaveTypeSpriteId(typeIndex, CreateSprite(&sSpriteTemplate_Type13x13,0,0,2));
        PageMoves_EditPage_SetTypeSpritePositionAndPalette(types[typeIndex],typeSpriteCoordinates[pageId][AXIS_X],y+typeSpriteCoordinates[pageId][AXIS_Y], typeIndex);

        x = POKEDEX_INFO_TYPE_NAME_X_STARTING;

        StringCopy(gStringVar1,gTypesInfo[types[typeIndex]].name);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[fontColor], TEXT_SKIP_DRAW,gStringVar1);

        y += POKEDEX_INFO_TYPE_2_TITLE_Y_MARGIN;
    }
}

static void PageInformation_DrawFootprintSprite(u32 species)
{
    u8 ALIGNED(4) footprint4bpp[TILE_SIZE_4BPP * NUM_FOOTPRINT_TILES];
    const u8 *footprintGfx = gSpeciesInfo[species].footprint;

    u32 tileIdx = 0;

    if (footprintGfx == NULL)
        return;

    for (u32 i = 0; i < TILE_SIZE_1BPP * NUM_FOOTPRINT_TILES; i++)
    {
        u32 footprint1bpp = footprintGfx[i];
        for (u32 j = 0; j < NUM_FOOTPRINT_TILES; j++)
        {
            u32 tile = 0;
            if (footprint1bpp & (1 << (2 * j)))
                tile |= FOOTPRINT_COLOR_IDX;
            if (footprint1bpp & (2 << (2 * j)))
                tile |= FOOTPRINT_COLOR_IDX << 4;
            footprint4bpp[tileIdx] = tile;
            tileIdx++;
        }
    }

    struct SpriteSheet sSpriteSheetFootprint = {footprint4bpp, 0x800, POKEDEX_SPRITETAG_FOOTPRINT};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = POKEDEX_SPRITETAG_FOOTPRINT;
    TempSpriteTemplate.paletteTag = PAL_POKEDEX_UI_FOOTPRINT_SPRITES;

    LoadSpriteSheet(&sSpriteSheetFootprint);
    LoadSpritePalette(&sPokedexInterfaceSpriteFootprintPalette);
    u32 spriteId = CreateSprite(&TempSpriteTemplate,60,31,0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
}

static void PageInformation_PrintFormOrCategoryName(u32 species, enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 y = POKEDEX_INFO_CATEGORYNAME_X;
    u32 windowWidth = GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_SIZE_1BPP;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    BufferFormOrCategoryName(gStringVar1,species);
    u32 x = GetStringCenterAlignXOffset(fontId, gStringVar1, windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE], TEXT_SKIP_DRAW,gStringVar1);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageInformation_PrintDescAndSprites(u32 species)
{
    if (species == SPECIES_NONE)
        return;

    enum PokedexPageInformationWindows windowId = PAGE_INFORMATION_WINDOW_SPRITES;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    u32 fontId = FONT_INFO_SPRITE_LABEL;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 lineHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);

    PageInformation_PrintFormOrCategoryName(species, windowId, fontId, letterSpacing, lineSpacing, lineHeight);
    PageInformation_PrintSpriteTitles(windowId, fontId, letterSpacing, lineSpacing, lineHeight);
    PageInformation_PrintMonSprites(species);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PageInformation_PrintSpriteTitles(enum PokedexPageInformationWindows windowId, u32 fontId, u32 letterSpacing, u32 lineSpacing, u32 lineHeight)
{
    u32 x = POKEDEX_INFO_MON_LABEL_X_STARTING;
    u32 y = POKEDEX_INFO_MON_LABEL_Y_STARTING;

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,COMPOUND_STRING("Normal:"));

    x += POKEDEX_INFO_MON_SPRITE_MARGIN;
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,COMPOUND_STRING("Shiny:"));
}

static void PageInformation_PrintMonSprites(u32 species)
{
    enum PokedexPages pageId = GetCurrentPage();
    bool32 isShiny = FALSE;
    u32 personality = 0;
    bool32 isFront = TRUE;
    u32 x = monSpriteCoordinates[pageId][AXIS_X];
    u32 y = monSpriteCoordinates[pageId][AXIS_Y];
    u32 slot = PAL_SLOT_MON_SPRITE;
    u32 tag = TAG_NONE;
    SpeciesData_RemoveMonSprite();

    u32 spriteId = CreateMonPicSprite(species,isShiny,personality,isFront,x,y,slot,tag);
    SpeciesData_SaveMonSpriteId(spriteId);

    x += POKEDEX_INFO_MON_SPRITE_MARGIN;
    isShiny = TRUE;
    slot++;

    spriteId = CreateMonPicSprite(species,isShiny,personality,isFront,x,y,slot,tag);
    SpeciesData_SaveShinyMonSpriteId(spriteId);
}

static void PageInformation_PrintSpeciesFlavor(u32 species)
{
    enum PokedexPageInformationWindows windowId = PAGE_INFORMATION_WINDOW_FLAVOR;
    u32 x = 4, y = 0;

    u32 fontId = FONT_SPECIES_FLAVOR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING) - 3;
    u32 windowWidth = GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_SIZE_1BPP;
    u32 screenLines = 4;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    StringCopy(gStringVar1,GetSpeciesPokedexDescription(species));

    BreakStringNaive(gStringVar1, windowWidth, screenLines, fontId,HIDE_SCROLL_PROMPT);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar1);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static const u16 statRankColors[] =
{
    [STAT_TIER_D] = RGB2GBA(211,13,13),
    [STAT_TIER_C] = RGB2GBA(184,86,0),
    [STAT_TIER_B] = RGB2GBA(245,196,0),
    [STAT_TIER_A] = RGB2GBA(104,149,14),
    [STAT_TIER_S] = RGB2GBA(21,122,56),
};

static void PageStats_ChangeStatHighlightBasedOnValue(u32 statIndex, u32 value)
{
    enum StatTierList rank = SpeciesFilter_GetRankForStat(statIndex,value);
    FillPalette(statRankColors[rank],POKEDEX_STAT_HIGHLIGHT_PALETTE_ADDRESS + statIndex, 2);
}

static void PageWeaknesses_InitWindows(void)
{
    InitWindows(sPokedexPageWeaknessesWindowTemplates);
    DeactivateAllTextPrinters();

    for(enum PokedexPageWeaknessesWindows windowId = 0; windowId < PAGE_WEAKNESSES_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void PageWeaknesses_CreatePage(void)
{
    u32 fontId = FONT_POKEDEX_TYPE_FILTER;
    u32 windowId = PAGE_WEAKNESSES_WINDOW_TYPES;
    SpeciesData_ResetTypeSpriteId();
    LoadTypeSpritesAndPalettes();
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    SpeciesFilter_PrintTextAndSprites(windowId,FILTER_LIST_TYPE1,TRUE,fontId);
    PageWeaknesses_PrintWeaknessValues(windowId,fontId);
    ParentDisplay_SetWindowId(WINDOW_NONE);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    PrintHelpBar(PAGE_WEAKNESSES_WINDOW_FOOTER);
}

static const u8* const typeEffectiveValue[] =
{
    [POKEDEX_WEAKNESS_0_PERCENT] = COMPOUND_STRING("0x"),
    [POKEDEX_WEAKNESS_25_PERCENT] = COMPOUND_STRING(".25x"),
    [POKEDEX_WEAKNESS_50_PERCENT] = COMPOUND_STRING(".5x"),
    [POKEDEX_WEAKNESS_100_PERCENT] = COMPOUND_STRING("1x"),
    [POKEDEX_WEAKNESS_200_PERCENT] = COMPOUND_STRING("2x"),
    [POKEDEX_WEAKNESS_400_PERCENT] = COMPOUND_STRING("4x"),
};

static void PageWeaknesses_PrintWeaknessValues(u32 windowId, u32 fontId)
{
    u32 species = ParentDisplay_GetFutureSpeciesId();
    u32 x = POKEDEX_WEAKNESS_LABEL_X_STARING;
    u32 y = 0;
    u32 typesInRow = 0;
    enum PokedexFilterList currentFilter = FILTER_LIST_TYPE1;
    u32 maxColumnsInRow = 3;
    u32 maxEntities =  NUMBER_OF_MON_TYPES - 1;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u8* end;
    uq4_12_t modifier;

    for (u32 typeId = 1; typeId < maxEntities; typeId++)
    {
        if (typeId == TYPE_MYSTERY)
            continue;

        modifier = UQ_4_12(1.0);

        for (u32 defType = 0; defType < TYPES_PER_MON; defType++)
            modifier = uq4_12_multiply(modifier, GetTypeModifier(typeId, gSpeciesInfo[species].types[defType]));

        end = StringCopy(gStringVar2,typeEffectiveValue[modifier]);
        PrependFontIdToFit(gStringVar2, end, fontId, POKEDEX_WEAKNESS_LABEL_MAX_WIDTH);

        u32 width = GetStringWidth(fontId,gStringVar2,letterSpacing) + 1;

        PageWeaknesses_PrintBackground(windowId, x, y, modifier, width);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar2);

        typesInRow++;
        x += POKEDEX_WEAKNESS_LABEL_X_MARGIN;

        if (typesInRow % maxColumnsInRow == 0)
            SpeciesFilter_EditPage_ResetValuesAtRowEnd(&typesInRow, &x, &y, currentFilter, TRUE);
    }
}

void Task_PageWeaknesses_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    PageWeaknesses_HandleInput(taskId);
}

static void PageWeaknesses_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
        PageMoves_SwitchToSpeciesGrid(taskId);
    else if (JOY_NEW(A_BUTTON))
        PageWeaknesses_ToggleLegendStatus(taskId);
    else if (JOY_NEW(R_BUTTON))
        Page_SwitchToNextPage(taskId);
    else if (JOY_NEW(L_BUTTON))
        Page_SwitchToLastPage(taskId);
}

static void PageWeaknesses_ToggleLegendStatus(u8 taskId)
{
    if (ParentDisplay_GetWindowId() == WINDOW_NONE)
        PageWeaknesses_CreateLegend();
    else
        ParentDisplay_RemoveMenu();
}

void PageWeaknesses_BuildHeaderStringPlayCry(enum PokedexPages pageId)
{
    u32 species = ParentDisplay_GetFutureSpeciesId();
    PokedexPage_PlaySpeciesCry(species,FALSE);

    StringCopy(gStringVar1,gSpeciesInfo[species].speciesName);
    PokedexPage_ConvertUpperToLowerCase(gStringVar1);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/{STR_VAR_1}/weaknesses"));
}

static void PageWeaknesses_PrintBackground(enum PokedexPageWeaknessesWindows windowId, u32 x, u32 y, u32 effectiveness, u32 width)
{
    u32 height = 12;

    switch (effectiveness)
    {
        default:
            return;
        case POKEDEX_WEAKNESS_0_PERCENT:
            BlitBitmapToWindow(windowId, NEbackground, x-1, y , width, height);
            return;
        case POKEDEX_WEAKNESS_25_PERCENT:
        case POKEDEX_WEAKNESS_50_PERCENT:
            BlitBitmapToWindow(windowId, moveListCursor, x-1, y , width, height);
            return;
        case POKEDEX_WEAKNESS_200_PERCENT:
        case POKEDEX_WEAKNESS_400_PERCENT:
            BlitBitmapToWindow(windowId, SEbackground, x-1, y , width, height);
            return;
    }
}

static void PageWeaknesses_CreateLegend(void)
{
    struct WindowTemplate legendWindow;
    legendWindow.tilemapLeft = 0;
    legendWindow.tilemapTop = 12;
    legendWindow.width = 30;
    legendWindow.height = 6;
    legendWindow.bg = BG0_POKEDEX_TEXT_CONTENT;
    legendWindow.paletteNum = POKEDEX_PALETTE_UI;
    legendWindow.baseBlock = 1;

    u32 windowId = AddWindow(&legendWindow);
    ParentDisplay_SetWindowId(windowId);
    ClearWindowTilemap(windowId);
    PageWeaknesses_DrawWindowFrame(windowId);
    PageWeaknesses_PrintLegendText();

    CopyWindowToVram(windowId,COPYWIN_GFX);

    ScheduleBgCopyTilemapToVram(BG0_POKEDEX_TEXT_CONTENT); //without this box doesn't appear at all
    ShowBg(BG0_POKEDEX_TEXT_CONTENT);
}

static void PageWeaknesses_PrintLegendText(void)
{
    u32 windowId = ParentDisplay_GetWindowId();
    u32 x = 4;
    u32 y = 0;
    u32 fontId = FONT_LEGEND;

    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    u8 colors[] =
    {
        POKEDEX_PALETTE_UI_TRANSPERANT,
        POKEDEX_PALETTE_UI_DARK_GREY,
        POKEDEX_PALETTE_UI_TRANSPERANT
    };

    u8 *string = Alloc(POKEDEX_PAGE_STRING_LENGTH);
    u8 *end;
    u32 windowWidth = TILE_SIZE_1BPP * GetWindowAttribute(windowId, WINDOW_WIDTH);

    StringCopy(gStringVar1,GetSpeciesName(PageMoves_GetMonToDisplay()));

    end = StringExpandPlaceholders(string,COMPOUND_STRING("Damage of this type dealt to {STR_VAR_1} is multiplied by this value."));
    PrependFontIdToFit(string, end, fontId, windowWidth);

    if (GetStringWidth(fontId,string,letterSpacing) > 235)
        x = 0;

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, colors, TEXT_SKIP_DRAW,string);

    y += 10;

    StringCopy(gStringVar2,gBattleStringsTable[STRINGID_SUPEREFFECTIVE]);
    StringCopy(gStringVar1,gBattleStringsTable[STRINGID_NOTVERYEFFECTIVE]);
    StringCopy(gStringVar3,gBattleStringsTable[STRINGID_ITDOESNTAFFECT]);

    end = StringExpandPlaceholders(string,COMPOUND_STRING("{STR_VAR_2}: 4x or 2x damage\n{STR_VAR_1}: .5x or .25x damage\n{STR_VAR_3}: 0x damage"));
    PrependFontIdToFit(string, end, fontId, windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, colors, TEXT_SKIP_DRAW,string);
    Free(string);
}

static void PageWeaknesses_DrawWindowFrame(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(POKEDEX_PALETTE_UI_WHITE));
    CallWindowFunction(windowId,ParentDisplay_WindowFunc_DrawStandardFrame);
    PutWindowTilemap(windowId);
}

static void PageLocation_CreatePage(void)
{
    PrintHelpBar(PAGE_LOCATION_WINDOW_FOOTER);
}

static void PageLocation_InitWindows(void)
{
    InitWindows(sPokedexPageLocationWindowTemplates);
    DeactivateAllTextPrinters();

    for(enum PokedexPageLocationWindows windowId = 0; windowId < PAGE_LOCATION_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void PageLocation_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
        PageMoves_SwitchToSpeciesGrid(taskId);
    else if (JOY_NEW(R_BUTTON))
        Page_SwitchToNextPage(taskId);
    else if (JOY_NEW(L_BUTTON))
        Page_SwitchToLastPage(taskId);
}

void PageLocation_BuildHeaderStringPlayCry(enum PokedexPages pageId)
{
    u32 species = ParentDisplay_GetFutureSpeciesId();
    PokedexPage_PlaySpeciesCry(species,FALSE);

    StringCopy(gStringVar1,gSpeciesInfo[species].speciesName);
    PokedexPage_ConvertUpperToLowerCase(gStringVar1);
    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("rsd.dex/{STR_VAR_1}/location"));
}

void Task_PageLocation_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    PageLocation_HandleInput(taskId);
}

void PokedexPage_PlaySpeciesCry(u32 species, bool32 shouldOverride)
{
    if (shouldOverride)
    {
        PlayCry_NormalNoDucking(species,0,CRY_VOLUME_RS,CRY_PRIORITY_NORMAL);
        return;
    }

    if (SpeciesGrid_GetShouldPlayCry())
    {
        PlayCry_NormalNoDucking(species,0,CRY_VOLUME_RS,CRY_PRIORITY_NORMAL);
        SpeciesGrid_SetShouldPlayCry(FALSE);
    }
}

