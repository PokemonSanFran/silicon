#ifndef GUARD_UI_POKEDEX_H
#define GUARD_UI_POKEDEX_H

#include "gba/types.h"
#include "list_menu.h"
#include "main.h"
#include "constants/ui_pokedex.h"
#include "constants/characters.h"
#include "constants/abilities.h"

struct BaseStats
{
    u8 tier[STAT_TIER_COUNT];
};

struct EggGroups
{
    u8 group[EGG_GROUP_COUNT];
};

struct Types
{
    u8 types[NUMBER_OF_MON_TYPES];
};

struct Moves
{
    u16 moves[MAX_MON_MOVES];
};

struct FiltersSet
{
    u8 filterEvolution[EVOLUTION_STAGE_COUNT];
    struct BaseStats filterBaseStats[NUM_STATS];
    u8 filterColor[BODY_COLOR_COUNT];
    struct EggGroups filterEggGroups[EGG_GROUPS_PER_MON];
    struct Types filterTypes[TYPES_PER_MON];
    u16 filterAbility[MAX_MON_MOVES];
    struct Moves filterMoves[MAX_MON_MOVES];
    u8 filterAlola[ALOLA_COUNT];
};

struct SpeciesMenu
{
    const u8 *text;
    u8 textId;
};

struct SpeciesListMenu
{
    struct WindowTemplate menuWindow;
    u16 speciesListMenuWindowId;
    u8 menuItemsCount;
    u8 calcWidth;
    struct SpeciesMenu menuItems[SPECIES_MENU_COUNT];
    bool8 speciesRelationships[MON_RELATIONSHIP_COUNT];
    u8 menuPosition;
};

struct PokedexState
{
    MainCallback savedCallback;
    u8 sortOrder;
    u8 currentPage;
    u16 currentRow;
    u16 currentSpecies;
    u16 speciesListPosition;
    u8 cursorCoordinates[2];
    u8 filterListPosition;
    u8 filterCursorCoordinate;
    u8 editPageAlphabetPosition;
    u16 editPageListPosition;
    u8 editPageCursorCoordinates[2];
    u8 filterEditPageMode;
    u8 filterManagePosition;
    u16 filterManageStorage;
    u16 futureMonSpeciesId;
    bool8 firstPageLoad;
    bool8 shouldPlayCry;
};

struct PokedexGridStaticResources
{
    u8 interfaceSpriteIds[POKEDEX_SPRITE_COUNT];
    u8 speciesGridMonSpriteIds[POKEDEX_PARENT_ROW_COUNT][NUM_SPECIES_LIST_COLUMNS];
    u8 speciesGridCaptureSpriteIds[POKEDEX_PARENT_ROW_COUNT][NUM_SPECIES_LIST_COLUMNS];
    u8 editPageTypeIcons[NUMBER_OF_MON_TYPES];
    u8 editPageCheckIcons[NUMBER_OF_MON_TYPES];
};

struct PokedexLists
{
    u16 numMonsInList;
    u16 numCaughtMonsInList;
    u16 onScreenMons[NUM_SPECIES_LIST_ROWS][NUM_SPECIES_LIST_COLUMNS];
    u16 currentMonList[RESIDO_DEX_COUNT];
    u16 totalNumRows;
};

struct PokemonFormTable
{
    u16 originalSpecies;
    u16 targetSpecies;
    const u8* description;
    s16 param1;
    s16 param2;
    s16 param3;
    u16 method;
    u8 cosmeticFormConstant;
};

extern struct FiltersSet *sFilterSet;
extern struct FiltersSet *sFilterSetTemp;
extern struct SpeciesListMenu *sSpeciesListMenu;
extern EWRAM_DATA struct PokedexState *sPokedexState;
extern EWRAM_DATA struct PokedexGridStaticResources *sPokedexGridResources;
extern EWRAM_DATA struct PokedexLists *sPokedexLists;
extern void (* const pageInputTaskLUT[])(u8 taskId);
extern const u8 sPokedexWindowFontColors[][3];
extern const u8 *const sFilterListTexts[];

extern const struct PokemonFormTable pokemonFormTable[POKEDEX_FORM_COUNT][NUMBER_OF_MON_TYPES];

static const u16 pokedexPalettesDefault[] = INCBIN_U16("graphics/pokedex/ui/palettes/default.gbapal");

static const struct SpritePalette sPokedexInterfaceSpritePalette =
{
    .data = pokedexPalettesDefault,
    .tag = PAL_POKEDEX_UI_SPRITES,
};

static const u8 *const sEggGroupTexts[] =
{
    [EGG_GROUP_NONE] = COMPOUND_STRING("egg group none"),
    [EGG_GROUP_COUNT] = COMPOUND_STRING("egg group count"),
    [EGG_GROUP_MONSTER] = COMPOUND_STRING("Monster"),
    [EGG_GROUP_WATER_1] = COMPOUND_STRING("Water 1"),
    [EGG_GROUP_BUG] = COMPOUND_STRING("Bug"),
    [EGG_GROUP_FLYING] = COMPOUND_STRING("Flying"),
    [EGG_GROUP_FIELD] = COMPOUND_STRING("Field"),
    [EGG_GROUP_FAIRY] = COMPOUND_STRING("Fairy"),
    [EGG_GROUP_GRASS] = COMPOUND_STRING("Grass"),
    [EGG_GROUP_HUMAN_LIKE] = COMPOUND_STRING("Human-Like"),
    [EGG_GROUP_WATER_3] = COMPOUND_STRING("Water 3"),
    [EGG_GROUP_MINERAL] = COMPOUND_STRING("Mineral"),
    [EGG_GROUP_AMORPHOUS] = COMPOUND_STRING("Amorphous"),
    [EGG_GROUP_WATER_2] = COMPOUND_STRING("Water 2"),
    [EGG_GROUP_DITTO] = COMPOUND_STRING("Ditto"),
    [EGG_GROUP_DRAGON] = COMPOUND_STRING("Dragon"),
    [EGG_GROUP_NO_EGGS_DISCOVERED] = COMPOUND_STRING("No Eggs"),
};

static const u8 sText_MegaEvolution[] =_("Mega Evolution");

void Task_OpenPokedexFromStartMenu(u8);
void CB2_PokedexFromStartMenu(void);
u32 ConvertSpeciesIdToResidoDex(u32 speciesId);
u32 GetPokedexPercentage(void);
bool32 SpeciesFilter_GetFilterChangeFlag(void);
void Task_SpeciesFilter_Input(u8);
void LoadTypeSpritesAndPalettes(void);
void ClearWindowCopyToVram(u32 windowId);
void SpeciesFilter_ResetToDefault(void);
void SpeciesFilter_SetFilterChangeFlag(bool32 result);
void SetPageAndInputTask(enum PokedexPages page);
void SpeciesFilter_DetectAndFlagFilterSetChanges(void);
void SpeciesGrid_PrintScrollbar(void);
void PrintMenuHeader(void);
void PrintHelpBar(u32);
u8* GetMovePageHelpText(void);
u8* GetStatsPageHelpText(void);
void Debug_SpeciesFilterApply(void);
bool32 SpeciesFilter_IsSpeciesAtEvolutionLevel(u32);
bool32 SpeciesFilter_IsSpeciesStatWithinTier(u32);
bool32 SpeciesFilter_DoesSpeciesMatchColor(u32);
bool32 SpeciesFilter_IsSpeciesInEggGroups(u32);
bool32 SpeciesFilter_CheckSpeciesTypesAgainstFilters(u32);
bool32 SpeciesFilter_DoesSpeciesHaveAbility(u32);
bool32 SpeciesFilter_DoesSpeciesLearnMoves(u32);
bool32 SpeciesFilter_IsSpeciesFromAlola(u32);
void FreeBackgrounds(void);
void Pokedex_SetupCallback(void);
void SpeciesFilter_SwitchToFromGrid(u8);
u32 SpeciesGrid_CreateInterfaceSprite(u32, u32, u16, void (*callback)(struct Sprite*));
void SetCurrentPage(u32);
u32 SpeciesFilter_GetCurrentPositionInFilterList(void);
enum FilterEditPageModes SpeciesFilter_EditPage_GetMode(void);
void SpeciesData_RemoveMonSprite(void);
u32 SpeciesGrid_GetMonCursorSpriteId(void);
void SpeciesGrid_SaveMonCursorSpriteId(u32);
void SpeciesGrid_SaveScrollbarSpriteId(u32);
u32 SpeciesData_GetMonTypeSpriteId(u32);
void SpeciesFilter_PrintFilterHeaders(void);
void SpeciesData_ResetTypeSpriteId(void);
u32 SpeciesData_GetHeaderSpriteId(void);
void SpeciesData_SaveHeaderSpriteId(u32);
void SpeciesData_RemoveCaptureIndicator(void);
void SpeciesGrid_RemoveMonIcons(void);
void SpeciesGrid_RemoveCaptureIndicators(void);
void FreeSpritePalettesResetSpriteData(void);
void InitializeBackgroundsAndLoadBackgroundGraphics(void);
bool32 SpeciesGrid_IsMonCursorMovingRightOrDown(s32);
void PrintPageName(void);
u32 SpeciesMenu_GetMenuPosition(void);
void SpeciesGrid_CleanUp(u8 taskId);
enum PokedexSortOrders SpeciesGrid_GetSort(void);
const u16* SpeciesGrid_GetSortOrder(enum PokedexSortOrders);
u32 SpeciesGrid_GetMonIconSpriteId(u32 row, u32 column);
u32 PageMoves_GetMonToDisplay(void);
void PageMoves_BuildHeaderStringPlayCry(enum PokedexPages pageId);
void PageEvolution_BuildHeaderStringPlayCry(enum PokedexPages pageId);
void PageForms_BuildHeaderStringPlayCry(enum PokedexPages pageId);
void PageStats_BuildHeaderStringPlayCry(enum PokedexPages pageId);
void PageInformation_BuildHeaderStringPlayCry(enum PokedexPages pageId);
void PageWeaknesses_BuildHeaderStringPlayCry(enum PokedexPages pageId);
void PokedexPage_ConvertUpperToLowerCase(u8 *text);
void Pokedex_FadescreenAndExitGracefully(void);
u32 SpeciesData_PrintHeaderSprite(u32 x, u32 y);
void SpeciesData_LoadHeaderSprite(void);
void SpeciesData_PrintCaptureIndicator(u32);
void SpeciesData_LoadCaptureIndicatorSprite(void);
u32 PageEvolution_CalculateScrollbarYPosition(void);
void Task_PageInformation_Input(u8 taskId);
void BufferFormOrCategoryName(u8* dest, u32 species);
bool32 SpeciesGrid_GetFirstPageLoad(void);
void SpeciesGrid_SetFirstPageLoad(bool32 value);
u32 SpeciesData_GetMonSpriteId(void);
u32 SpeciesData_GetShinyMonSpriteId(void);
void SpeciesData_SaveMonSpriteId(u32);
void SpeciesData_SaveShinyMonSpriteId(u32);
bool32 SpeciesMenu_IsSpeciesRelatedEvolution(u32);
bool32 SpeciesMenu_IsSpeciesRelatedForm(u32);
void Task_SpeciesGrid_Input(u8);
void Task_PageMoves_Input(u8 taskId);
void Task_PageEvolution_Input(u8 taskId);
void Task_PageStats_Input(u8 taskId);
u32 SpeciesGrid_GetCurrentSpecies(void);
void SpeciesGrid_RemoveMonCursorSprite(void);
void SpeciesGrid_CleanUp(u8);
void SpeciesData_RemoveTypeSprites(void);
void SpeciesData_RemoveHeaderSprite(void);
void SpeciesGrid_RemoveScrollbarSpriteId(void);
void SpeciesFilter_CopyFilterSetIntoTemp(void);
u32 SpeciesGrid_GetScrollbarSpriteId(void);
u32 GetCurrentPage(void);
void Page_SwitchFromGrid(u8 taskId);
void SpeciesGrid_SwitchTo(u8);
enum PokedexPages SpeciesMenu_ConvertMenuPositionToPageId(enum PokedexPages currentPosition);
void SpeciesFilter_SetScrollbarYInputVariables(u32* currentRowNumber, u32* totalRowNumber);
u32 PageMoves_CalculateScrollbarYPosition(void);
void SpeciesGrid_PrintMonIcon(u32,u32, u32);
u32 SpeciesFilter_GetStatForMon(u32, u32);
void SpeciesData_PrintMonSprite(u32 shownSpecies);
void SpeciesData_PrintMonTypes(u32);
const u8 *GetFormName(u32 species);
bool32 PageForms_IsSpeciesMega(u16 species);
enum PokedexFormId ConvertSpeciesToFormTableEnum(u32 species);
void Task_PageWeaknesses_Input(u8 taskId);
void SpeciesFilter_PrintTextAndSprites(u32 windowId, enum PokedexFilterList currentFilter, bool32 firstRun, u32 fontId);
void SpeciesFilter_EditPage_ResetValuesAtRowEnd(u32 *typesInRow, u32 *x, u32 *y, enum PokedexFilterList currentFilter, bool32 weaknessLabel);
enum StatTierList SpeciesFilter_GetRankForStat(u32 statIndex, u32 value);
void Task_PageLocation_Input(u8 taskId);
void PageLocation_BuildHeaderStringPlayCry(enum PokedexPages pageId);
void ParentDisplay_SetFutureSpeciesId(u32 species);
u32 SpeciesData_CheckLastSeenForm(u32 species);
void SpeciesData_SetSavedLastForm(u32 species);
u32 SpeciesData_GetSavedLastForm(u32 formId);
u32 SpeciesData_ConvertSpeciesToCosmeticFormId(u32 species);
void PokedexPage_PlaySpeciesCry(u32 species, bool32 shouldOverride);
bool32 SpeciesGrid_GetShouldPlayCry(void);
void SpeciesGrid_SetShouldPlayCry(bool32 value);
bool8 SpeciesIsResidoDex(u32 speciesId);
bool8 SpeciesFilter_CheckEvolutionStatus(u32 species, enum PokedexEvolutionCheckMode mode);

#endif // GUARD_UI_POKEDEX_H
