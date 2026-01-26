#include "global.h"
#include "battle_main.h"
#include "battle_util.h"
#include "bg.h"
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
#include "text_window.h"
#include "trainer_pokemon_sprites.h"
#include "tv.h"
#include "ui_pokedex.h"
#include "window.h"
#include "constants/abilities.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "data/ui_pokedex_type_sprites.h"
#include "data/ui_pokedex_evolution.h"

static void SpeciesFilter_ResetEntireOption(enum PokedexFilterList);
static void SpeciesFilter_ResetFilterSingleOption(enum PokedexFilterList, u32);
static void DebugPrintActiveFilters(void);
bool32 SpeciesFilter_IsSpeciesFromAlola(u32);
static bool32 SpeciesFilter_DoesSpeciesLearnFilteredMove(u32, u32);
static bool32 SpeciesFilter_IsSpeciesStatWithinTier_Stat(u32, u32);
static bool32 SpeciesFilter_CheckHPTier(u32,u32);
static bool32 SpeciesFilter_CheckATKTier(u32,u32);
static bool32 SpeciesFilter_CheckDEFTier(u32,u32);
static bool32 SpeciesFilter_CheckSPEEDTier(u32,u32);
static bool32 SpeciesFilter_CheckSPATKTier(u32,u32);
static bool32 SpeciesFilter_CheckSPDEFTier(u32,u32);
static bool32 SpeciesFilter_IsSpeciesInFilteredEggGroup(u32, u32);
static bool32 SpeciesFilter_DoesSpeciesHaveFilteredType(u32, u32);
static void SpeciesFilter_SwitchToFromEditPage(u8);
static void Task_PrepareScreen_GridToFilter(u8);
static void Task_PrepareScreen_EditToFilter(u8 taskId);

static void SpeciesFilter_HandleInput(u8 taskId);
static void SpeciesFilter_ResetFilters(void);
static void SpeciesFilter_SetCurrentPositionInFilterList(s32);
static u32 SpeciesFilter_GetCursorPosition(void);
static void SpeciesFilter_SetCursorPosition(u32);
static void SpeciesFilter_ChangeListPosition(s32);
static void SpeciesFilter_ChangeCursorPosition();
static enum PokedexFilterList SpeciesFilter_GetIdToPrint(void);
static void SpeciesFilter_PrintCursor(enum FilterPageWindows windowId, enum PokedexFilterList filterId);
static void SpeciesFilter_BufferPropertiesToString(u32, enum PokedexFilterList);
static void SpeciesFilter_TrimPropertiesString(u32);
static void SpeciesFilter_SwitchToEditPage(u8 taskId);

static void Task_SpeciesFilter_GoToEditPage(u8);
static void SpeciesFilter_SetUp(u8);
static void LoadFilterTypeSpritesAndPalettes(void);
static void SpeciesFilter_SetUpTypeFilterPage(enum PokedexFilterList);
static void SpeciesFilter_SetUpStatFilterPage(enum PokedexFilterList);
static void SpeciesFilter_SetUpEggFilterPage(enum PokedexFilterList);
static void SpeciesFilter_SetUpColorFilterPage(enum PokedexFilterList);
static void SpeciesFilter_SetUpMoveFilterPage(enum PokedexFilterList);
static void SpeciesFilter_InitMoveWindows(void);
static void SpeciesFilter_EditPage_SetAlphabetPosition(enum PokedexFilterAlphabet position);
static enum PokedexFilterAlphabet SpeciesFilter_EditPage_GetAlphabetPosition(void);
const u8* SpeciesFilter_EditPage_GetLetter(enum PokedexFilterAlphabet position);
static void SpeciesFilter_PrintAlphabetMenuAndHeader(void);
static void SpeciesFilter_EditPage_PrintAlphabetCursor(void);
static void SpeciesFilter_PrintAlphabet(void);
static void SpeciesFilter_EditPage_ChangeLetter(s32 delta);
static void SpeciesFilter_EditPage_GoToOptionInput(u8 taskId);
static void SpeciesFilter_EditPage_PrintListFromLetter(void);
static void SpeciesFilter_EditPage_PrintDescription(void);
void SpeciesFilter_EditPage_PrintMoveAbilityCursor(enum FilterPageWindows_Move windowId, u32 fontId, u32 letterSpacing, u32 maxHeight);
static void SpeciesFilter_EditPage_PrintMoveAbilityHelpBar(u32 windowId);
static void SpeciesFilter_EditPage_SetMode(enum FilterEditPageModes modeId);
static void Task_SpeciesFilter_HandleAlphabetInput(u8);
static void SpeciesFilter_SetUpAbilityFilterPage(enum PokedexFilterList);
static void SpeciesFilter_SetUpEvolutionFilterPage(enum PokedexFilterList);
static void SpeciesFilter_SetUpAlolaFilterPage(enum PokedexFilterList);
static void Task_SpeciesFilter_HandleTypeInput(u8);
static void Task_SpeciesFilter_HandleMoveInput(u8);

static void SpeciesFilter_InitTypeWindows(void);
static void SpeciesFilter_ClearWindowPrintTextAndSprites(enum PokedexFilterList currentFilter, bool32 firstRun);
static void SpeciesFilter_EditPage_PrintSprites(enum PokedexFilterList, u32 typeId, u32 windowId, u32 x, u32 y, bool32 isTypeFilter, u32 *slotId);
static void SpeciesFilter_EditPage_PrintCursor(u32 fontId, enum PokedexFilterList);
static void SpeciesFilter_EditPage_SaveTypeSpriteId(u32, u32);
static void SpeciesFilter_EditPage_SetTypeSpritePositionAndPalette(u32, u32, u32);
static void SpeciesFilter_EditPage_SetCheckVisibility(enum PokedexFilterList);
static void SpeciesFilter_EditPage_SetIndividualOptionCheckVisibility(u32, bool32);
static void SpeciesFilter_EditPage_ForceAllChecksInvisible(void);
static u32 SpeciesFilter_EditPage_GetTypeSpriteId(u32);
static void SpeciesFilter_TypePrintTypeIcons(u32, u32, u32, u32);
static void SpeciesFilter_PrintText(enum PokedexFilterList currentFilter, u32 fontId, u32 typeId, u32 windowId, u32 x, u32 y);
static void SpeciesFilter_TypePrintCheckSprites(enum PokedexFilterList currentFilter, u32 slotId, u32 windowId, u32 x, u32 y);
static u32 SpeciesFilter_EditPage_GetCheckSpriteId(u32);
static void SpeciesFilter_EditPage_SaveCheckSpriteId(u32, u32);
static u32 SpeciesFilter_EditPage_GetNumberRows(void);
static u32 SpeciesFilter_EditPage_GetNumberEntities(void);
static u32 SpeciesFilter_EditPage_CalculateNumberRows(void);
static void SpeciesFilter_EditPage_SetNumberRows(u32);
static u32 SpeciesFilter_EditPage_GetCurrentRowNumber(void);
static void SpeciesFilter_EditPage_SetCurrentRowNumber(u32 row);
static void SpeciesFilter_EditPage_ResetCurrentRowNumber(void);
static void SpeciesFilter_EditPage_SanitizeCursorXCoordinate(u32 delta);
static void SpeciesFilter_EditPage_SanitizeCursorYCoordinate(s32 delta);
static void SpeciesFilter_EditPage_SantizeCurrentRowNumber(s32 delta);
static u32 SpeciesFilter_EditPage_GetSizeForRow(u32);
static void SpeciesFilter_EditPage_FixCursorXCoorindate(void);
static void SpeciesFilter_EditPage_UpdateEntitiesOnScreen(void);
static void SpeciesFilter_EditPage_PrintInformation(void);
static const u8 *const SpeciesFilter_EditPage_GetStringForEntity(enum PokedexFilterList currentFilter, u32 optionIndex);
static void SpeciesFilter_EditPage_PrintMoveAbilityManageCursor(enum FilterPageWindows_Move windowId, u32 fontId, u32 letterSpacing, u32 maxHeight);
static void SpeciesFilter_EditPage_PopulateSelectedWindow(void);
static void SpeciesFilter_EditPage_ChangeColumn(s32 delta);
static void SpeciesFilter_EditPage_ChangeRow(s32 delta);
static void SpeciesFilter_EditPage_SetListPosition(u32 position);
static u32 SpeciesFilter_EditPage_GetListPosition(void);
static u32 SpeciesFilter_EditPage_GetCursorCoordinate(u32 axis);
static void SpeciesFilter_EditPage_SetCursorCoordinate(u32 axis, u32 position);
static void SpeciesFilter_EditPage_CompressOptions(void);
static u32 SpeciesFilter_EditPage_GetEntityFromCurrentPosition(u32);
static u32 SpeciesFilter_EditPage_GetTypeFromCurrentPosition(u32);
static u32 SpeciesFilter_EditPage_GetAbilityFromCurrentPosition(u32);
static u32 SpeciesFilter_EditPage_GetMoveFromCurrentPosition(u32);
static void SpeciesFilter_EditPage_SetFilterOptionValue(enum PokedexFilterList currentFilter, u32 currentPosition, u32 currentValue);
static u32 SpeciesFilter_EditPage_GetCurrentFilterValue(enum PokedexFilterList currentFilter, u32 typeIndex);
static void SpeciesFilter_EditPage_SetListPositionFromCoordinates(void);
static bool32 SpeciesFilter_EditPage_ToggleSelectedOption(void);
static void SpeciesFilter_EditPage_GoToManageInput(u8 taskId);
static void SpeciesFilter_EditPage_GoToReplaceManageInput(u8 taskId);
static void Task_SpeciesFilter_HandleManageInput(u8 taskId);
static void SpeciesFilter_EditPageManage_PerformReplaceFromStorage(u8 taskId);
static void SpeciesFilter_EditPageManage_ChangeListPosition(s32 delta);
static void SpeciesFilter_EditPageManage_SetListPosition(u32 position);
static u32 SpeciesFilter_EditPageManage_GetListPosition(void);
static void SpeciesFilter_EditPageManage_SetListStorage(u32 value);
static u32 SpeciesFilter_EditPageManage_GetListStorage(void);
static void SpeciesFilter_EditPage_ResetManageStorage(void);
static void SpeciesFilter_EditPage_SetStorageFromCurrentPosition(void);

static bool32 SpeciesFilter_HasFilterSetChanged(void);
static void Task_PreapreScreenFilterToGrid(u8);
static void SpeciesFilter_InitWindows(void);
static void SpeciesFilter_PrintFilterProperties(void);
static void SpeciesFilter_EditPage_LoadCheckSprite(void);

static const struct WindowTemplate sSpeciesFilterWindowTemplates[] =
{
    [FILTER_PAGE_WINDOW_HEADER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [FILTER_PAGE_WINDOW_FILTER_NAME_0] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 61,
    },
    [FILTER_PAGE_WINDOW_FILTER_PROPERTIES_0] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 4,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 119,
    },
    [FILTER_PAGE_WINDOW_FILTER_NAME_1] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 6,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 177,
    },
    [FILTER_PAGE_WINDOW_FILTER_PROPERTIES_1] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 8,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 235,
    },
    [FILTER_PAGE_WINDOW_FILTER_NAME_2] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 10,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 293,
    },
    [FILTER_PAGE_WINDOW_FILTER_PROPERTIES_2] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 12,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 351,
    },
    [FILTER_PAGE_WINDOW_FILTER_NAME_3] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 14,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 409,
    },
    [FILTER_PAGE_WINDOW_FILTER_PROPERTIES_3] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 16,
        .width = 29,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 467,
    },
    [FILTER_PAGE_WINDOW_HELP_BAR] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 525,
    },
    DUMMY_WIN_TEMPLATE,
};


static const struct WindowTemplate sSpeciesFilterTypeWindowTemplates[] =
{
    [FILTER_PAGE_TYPE_WINDOW_HEADER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [FILTER_PAGE_TYPE_WINDOW_COLUMN_1] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 30,
        .height = 16,
        .paletteNum = 15,
        .baseBlock = 61,
    },
    [FILTER_PAGE_TYPE_WINDOW_HELP_BAR] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 61 + (30 * 16),
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sSpeciesFilterMoveWindowTemplates[] =
{
    [FILTER_PAGE_MOVE_WINDOW_HEADER] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 3,
        .baseBlock = 1,
        .paletteNum = 15,
    },
    [FILTER_PAGE_MOVE_WINDOW_LIST] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 3,
        .width = 20,
        .height = 11,
        .baseBlock = 91,
        .paletteNum = 15,
    },
    [FILTER_PAGE_MOVE_WINDOW_SELECTED_MOVES] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 20,
        .tilemapTop = 3,
        .width = 10,
        .height = 11,
        .baseBlock = 311,
        .paletteNum = 15,
    },
    [FILTER_PAGE_MOVE_WINDOW_DESC] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 14,
        .width = 30,
        .height = 4,
        .baseBlock = 421,
        .paletteNum = 15,
    },
    [FILTER_PAGE_MOVE_WINDOW_HELP_BAR] =
    {
        .bg = BG1_POKEDEX_STATS_CURSOR,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .baseBlock = 541,
        .paletteNum = 15,
    },
    DUMMY_WIN_TEMPLATE,
};

bool8 filtersHaveChanged;
static const u8 filterPageCursor[] = INCBIN_U8("graphics/pokedex/ui/species_list/filter_page_cursor_bmp.4bpp");
static const u8 typeEditPageCursor[] = INCBIN_U8("graphics/pokedex/ui/species_list/type_edit_cursor_bmp.4bpp");
static const u8 moveAbilityEditPageCursor[] = INCBIN_U8("graphics/pokedex/ui/species_list/moveability_edit_cursor_bmp.4bpp");
static const u8 alphabetCursor[] = INCBIN_U8("graphics/pokedex/ui/species_list/alphabet_cursor_bmp.4bpp");
static const u32 editPageFilterCheck[] = INCBIN_U32("graphics/pokedex/ui/filter/check.4bpp.smol");
static const u32 sTypes_Gfx13x13[] = INCBIN_U32("graphics/ui_menus/types/13x13/types.4bpp.smol");
static const u16 sTypePalettes[] = INCBIN_U16("graphics/types/types.gbapal");

static const struct CompressedSpriteSheet sSpriteSheet_Type13x13 =
{
    .data = sTypes_Gfx13x13,
    .size = NUMBER_OF_MON_TYPES * (16 * 16),
    .tag = TAG_TERA_TYPE
};

extern const u16 residoAbilitiesAZ[POKEDEX_FILTER_ALPHABET_COUNT][MAX_ABILITIES_PER_LETTER];
extern const u16 residoMovesAZ[POKEDEX_FILTER_ALPHABET_COUNT][MAX_MOVES_PER_LETTER];
extern const u8 maxOptionLUT[];
extern const u8 nullOptionLUT[];

static void SpeciesFilter_ResetEntireOption(enum PokedexFilterList filterIndex)
{
    for (u32 subFilterIndex = 0; subFilterIndex < maxOptionLUT[filterIndex]; subFilterIndex++)
        SpeciesFilter_ResetFilterSingleOption(filterIndex, subFilterIndex);
}

static void SpeciesFilter_ResetFilterSingleOption(enum PokedexFilterList currentFilter, u32 currentPosition)
{
    SpeciesFilter_EditPage_SetFilterOptionValue(currentFilter, currentPosition, nullOptionLUT[currentFilter]);
}

void SpeciesFilter_ResetToDefault(void)
{
    enum PokedexFilterList filterIndex;
    for (filterIndex = 0; filterIndex < FILTER_LIST_COUNT; filterIndex++)
        SpeciesFilter_ResetEntireOption(filterIndex);
}

void Debug_SpeciesFilterApply(void)
{
    return;
    sFilterSet->filterColor[0] = BODY_COLOR_BLACK;
    sFilterSet->filterColor[1] = BODY_COLOR_RED;
    sFilterSet->filterEggGroups[0].group[0] = EGG_GROUP_AMORPHOUS;
    sFilterSet->filterEvolution[0] = MON_CAN_EVOLVE;
    sFilterSet->filterMoves[0].moves[0] = MOVE_DRAGON_RUSH;
    sFilterSet->filterMoves[1].moves[0] = MOVE_DRAGON_RAGE;
    sFilterSet->filterBaseStats[STAT_ATK].tier[0] = STAT_TIER_S;
    sFilterSet->filterBaseStats[STAT_ATK].tier[1]= STAT_TIER_B;
    sFilterSet->filterBaseStats[STAT_SPATK].tier[0]= STAT_TIER_B;
    sFilterSet->filterTypes[0].types[0] = TYPE_GRASS;
    sFilterSet->filterTypes[0].types[1] = TYPE_BUG;
    sFilterSet->filterTypes[0].types[2] = TYPE_FIRE;
    sFilterSet->filterTypes[0].types[3] = TYPE_NORMAL;
    sFilterSet->filterTypes[0].types[4] = TYPE_WATER;
    sFilterSet->filterTypes[0].types[5] = TYPE_FLYING;
    sFilterSet->filterTypes[0].types[6] = TYPE_POISON;
    sFilterSet->filterTypes[0].types[7] = TYPE_FAIRY;
    sFilterSet->filterTypes[1].types[0] = TYPE_FAIRY;
    sFilterSet->filterAbility[1] = ABILITY_MOLD_BREAKER;
    sFilterSet->filterAbility[0] = ABILITY_COMPOUND_EYES; //4 rows
}

bool32 SpeciesFilter_DoesSpeciesHaveAbility(u32 species)
{
    u32 filterIndex, abilityIndex, filterAbility;

    if (sFilterSet->filterAbility[0] == nullOptionLUT[FILTER_LIST_ABILITY])
        return TRUE;

    for (filterIndex = 0; filterIndex < ABILITIES_COUNT; filterIndex++)
    {
        filterAbility = sFilterSet->filterAbility[filterIndex];

        if (filterAbility == nullOptionLUT[FILTER_LIST_ABILITY])
            return FALSE;

        for (abilityIndex = 0; abilityIndex < NUM_ABILITY_SLOTS; abilityIndex++)
            if (gSpeciesInfo[species].abilities[abilityIndex] == filterAbility)
                return TRUE;
    }

    return FALSE;
}

bool32 SpeciesFilter_DoesSpeciesMatchColor(u32 species)
{
    u32 filterIndex;

    if (sFilterSet->filterColor[0] == nullOptionLUT[FILTER_LIST_COLOR])
        return TRUE;

    for (filterIndex = 0; filterIndex < BODY_COLOR_COUNT; filterIndex++)
    {
        if (sFilterSet->filterColor[filterIndex] == nullOptionLUT[FILTER_LIST_COLOR])
            return FALSE;

        if (gSpeciesInfo[species].bodyColor == sFilterSet->filterColor[filterIndex])
            return TRUE;
    }
    return FALSE;
}

bool32 SpeciesFilter_IsSpeciesFromAlola(u32 species)
{
    u32 filterIndex;

    if (sFilterSet->filterAlola[0] == nullOptionLUT[FILTER_LIST_ALOLA])
        return TRUE;

    for (filterIndex = 0; filterIndex < ALOLA_COUNT; filterIndex++)
    {
        if (sFilterSet->filterAlola[filterIndex] == nullOptionLUT[FILTER_LIST_COLOR])
            return FALSE;

        if (IsSpeciesFromAlola(species) == sFilterSet->filterAlola[filterIndex])
            return TRUE;
    }
    return FALSE;
}

bool32 SpeciesFilter_DoesSpeciesLearnMoves(u32 species)
{
    u32 filterIndex = 0;

    for (filterIndex = 0; filterIndex < MAX_MON_MOVES; filterIndex++)
        if (!SpeciesFilter_DoesSpeciesLearnFilteredMove(filterIndex, species))
            return FALSE;

    return TRUE;
}

static bool32 SpeciesFilter_DoesSpeciesLearnFilteredMove(u32 filterIndex, u32 species)
{
    u32 moveIndex, activeMove;

    if (sFilterSet->filterMoves[filterIndex].moves[0] == MOVE_NONE)
        return TRUE;

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        activeMove = sFilterSet->filterMoves[filterIndex].moves[moveIndex];

        if (activeMove == MOVE_NONE)
            return FALSE;

        if (CanMonEverLearnMove(species,activeMove))
            return TRUE;
    }

    return FALSE;
}

bool8 SpeciesFilter_CheckEvolutionStatus(u32 species, enum PokedexEvolutionCheckMode mode)
{
    u32 natDexId = ConvertSpeciesIdToResidoDex(species);
    enum PokedexEvolution check = residoEvolution[natDexId];

    if (mode == CHECK_CAN_EVOLVE)
        return ((check == MON_CAN_EVOLVE) || (check == MON_HAS_EVOLVED_STILL_CAN));
    else if (mode == CHECK_HAS_EVOLVED)
        return ((check == MON_FULLY_EVOLVED) || (check == MON_HAS_EVOLVED_STILL_CAN));

    return FALSE;
}

bool32 SpeciesFilter_IsSpeciesAtEvolutionLevel(u32 species)
{
    u32 filterIndex, filter;

    if (sFilterSet->filterEvolution[0] == EVOLUTION_STAGE_COUNT)
        return TRUE;

    bool32 canEvolve = SpeciesFilter_CheckEvolutionStatus(species, CHECK_CAN_EVOLVE);
    bool32 hasEvolved = SpeciesFilter_CheckEvolutionStatus(species, CHECK_HAS_EVOLVED);

    for (filterIndex = 0; filterIndex < EVOLUTION_STAGE_COUNT ; filterIndex++)
    {
        filter = sFilterSet->filterEvolution[filterIndex];

        if (filter == EVOLUTION_STAGE_COUNT)
            return FALSE;

        switch (filter)
        {
            case MON_CAN_EVOLVE:
                if (canEvolve)
                    return TRUE;
                break;
            case MON_HAS_EVOLVED_STILL_CAN:
                if (canEvolve && hasEvolved)
                    return TRUE;
                break;
            case MON_FULLY_EVOLVED:
                if (!canEvolve && hasEvolved)
                    return TRUE;
                break;
            case NO_EVOLUTION:
                if (!canEvolve && !hasEvolved)
                    return TRUE;
                break;
            default:
            case EVOLUTION_STAGE_COUNT:
                return FALSE;
                break;
        }
    }
    return FALSE;
}

u32 SpeciesFilter_GetStatForMon(u32 stat, u32 species)
{
    switch (stat)
    {
        default:
        case STAT_HP: return gSpeciesInfo[species].baseHP;
        case STAT_ATK: return gSpeciesInfo[species].baseAttack;
        case STAT_DEF: return gSpeciesInfo[species].baseDefense;
        case STAT_SPEED: return gSpeciesInfo[species].baseSpeed;
        case STAT_SPATK: return gSpeciesInfo[species].baseSpAttack;
        case STAT_SPDEF: return gSpeciesInfo[species].baseSpDefense;
    }
}

bool32 SpeciesFilter_IsSpeciesStatWithinTier(u32 species)
{
    u32 statIndex = 0;

    for (statIndex = 0; statIndex < NUM_STATS; statIndex++)
        if (!SpeciesFilter_IsSpeciesStatWithinTier_Stat(statIndex,species))
            return FALSE;

    return TRUE;
}

static const bool32 (* const statCheckFunctions[])(u32, u32) =
{
    [STAT_HP]    = SpeciesFilter_CheckHPTier,
    [STAT_ATK]   = SpeciesFilter_CheckATKTier,
    [STAT_DEF]   = SpeciesFilter_CheckDEFTier,
    [STAT_SPEED] = SpeciesFilter_CheckSPEEDTier,
    [STAT_SPATK] = SpeciesFilter_CheckSPATKTier,
    [STAT_SPDEF] = SpeciesFilter_CheckSPDEFTier,
};

static bool32 SpeciesFilter_IsSpeciesStatWithinTier_Stat(u32 statIndex, u32 species)
{
    u32 tierIndex, tier, stat;

    if(sFilterSet->filterBaseStats[statIndex].tier[0] == (nullOptionLUT[statIndex + FILTER_LIST_HP]))
        return TRUE;

    stat = SpeciesFilter_GetStatForMon(statIndex,species);

    for (tierIndex = 0; tierIndex < NUM_STATS; tierIndex++)
    {
        tier = sFilterSet->filterBaseStats[statIndex].tier[tierIndex];

        if(tier == (nullOptionLUT[statIndex + FILTER_LIST_HP]))
            return FALSE;

        if (statIndex < ARRAY_COUNT(statCheckFunctions) && statCheckFunctions[statIndex] != NULL)
        {
            if (statCheckFunctions[statIndex](stat, tier))
                return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    return FALSE;
}

enum StatTierList SpeciesFilter_GetRankForStat(u32 statIndex, u32 value)
{
    if (statIndex >= NUM_STATS || statCheckFunctions[statIndex] == NULL)
        return STAT_TIER_D;

    for (u32 tierIndex = 0; tierIndex < NUM_STATS; tierIndex++)
        if (statCheckFunctions[statIndex](value, tierIndex))
            return tierIndex;

    return STAT_TIER_D;
}

bool32 SpeciesFilter_CheckHPTier(u32 stat, u32 tier)
{
    switch (tier)
    {
        case STAT_TIER_D:
            return (stat < POKEDEX_FILTER_HP_D_CEIL);
        case STAT_TIER_C:
            return (stat > POKEDEX_FILTER_HP_D_FLOOR && stat < POKEDEX_FILTER_HP_C_CEIL);
        case STAT_TIER_B:
            return (stat > POKEDEX_FILTER_HP_C_FLOOR && stat < POKEDEX_FILTER_HP_B_CEIL);
        case STAT_TIER_A:
            return (stat > POKEDEX_FILTER_HP_B_FLOOR && stat < POKEDEX_FILTER_HP_A_CEIL);
        case STAT_TIER_S:
            return (stat > POKEDEX_FILTER_HP_A_FLOOR);
        default:
            return FALSE;
    }
}

bool32 SpeciesFilter_CheckATKTier(u32 stat, u32 tier)
{
    switch (tier)
    {
        case STAT_TIER_D:
            return (stat < POKEDEX_FILTER_ATK_D_CEIL);
        case STAT_TIER_C:
            return (stat > POKEDEX_FILTER_ATK_D_FLOOR && stat < POKEDEX_FILTER_ATK_C_CEIL);
        case STAT_TIER_B:
            return (stat > POKEDEX_FILTER_ATK_C_FLOOR && stat < POKEDEX_FILTER_ATK_B_CEIL);
        case STAT_TIER_A:
            return (stat > POKEDEX_FILTER_ATK_B_FLOOR && stat < POKEDEX_FILTER_ATK_A_CEIL);
        case STAT_TIER_S:
            return (stat > POKEDEX_FILTER_ATK_A_FLOOR);
        default:
            return FALSE;
    }
}

bool32 SpeciesFilter_CheckDEFTier(u32 stat, u32 tier)
{
    switch (tier)
    {
        case STAT_TIER_D:
            return (stat < POKEDEX_FILTER_DEF_D_CEIL);
        case STAT_TIER_C:
            return (stat > POKEDEX_FILTER_DEF_D_FLOOR && stat < POKEDEX_FILTER_DEF_C_CEIL);
        case STAT_TIER_B:
            return (stat > POKEDEX_FILTER_DEF_C_FLOOR && stat < POKEDEX_FILTER_DEF_B_CEIL);
        case STAT_TIER_A:
            return (stat > POKEDEX_FILTER_DEF_B_FLOOR && stat < POKEDEX_FILTER_DEF_A_CEIL);
        case STAT_TIER_S:
            return (stat > POKEDEX_FILTER_DEF_A_FLOOR);
        default:
            return FALSE;
    }
}

bool32 SpeciesFilter_CheckSPEEDTier(u32 stat, u32 tier)
{
    switch (tier)
    {
        case STAT_TIER_D:
            return (stat < POKEDEX_FILTER_SPEED_D_CEIL);
        case STAT_TIER_C:
            return (stat > POKEDEX_FILTER_SPEED_D_FLOOR && stat < POKEDEX_FILTER_SPEED_C_CEIL);
        case STAT_TIER_B:
            return (stat > POKEDEX_FILTER_SPEED_C_FLOOR && stat < POKEDEX_FILTER_SPEED_B_CEIL);
        case STAT_TIER_A:
            return (stat > POKEDEX_FILTER_SPEED_B_FLOOR && stat < POKEDEX_FILTER_SPEED_A_CEIL);
        case STAT_TIER_S:
            return (stat > POKEDEX_FILTER_SPEED_A_FLOOR);
        default:
            return FALSE;
    }
}

bool32 SpeciesFilter_CheckSPATKTier(u32 stat, u32 tier)
{
    switch (tier)
    {
        case STAT_TIER_D:
            return (stat < POKEDEX_FILTER_SPATK_D_CEIL);
        case STAT_TIER_C:
            return (stat > POKEDEX_FILTER_SPATK_D_FLOOR && stat < POKEDEX_FILTER_SPATK_C_CEIL);
        case STAT_TIER_B:
            return (stat > POKEDEX_FILTER_SPATK_C_FLOOR && stat < POKEDEX_FILTER_SPATK_B_CEIL);
        case STAT_TIER_A:
            return (stat > POKEDEX_FILTER_SPATK_B_FLOOR && stat < POKEDEX_FILTER_SPATK_A_CEIL);
        case STAT_TIER_S:
            return (stat > POKEDEX_FILTER_SPATK_A_FLOOR);
        default:
            return FALSE;
    }
}

bool32 SpeciesFilter_CheckSPDEFTier(u32 stat, u32 tier)
{
    switch (tier)
    {
        case STAT_TIER_D:
            return (stat < POKEDEX_FILTER_SPDEF_D_CEIL);
        case STAT_TIER_C:
            return (stat > POKEDEX_FILTER_SPDEF_D_FLOOR && stat < POKEDEX_FILTER_SPDEF_C_CEIL);
        case STAT_TIER_B:
            return (stat > POKEDEX_FILTER_SPDEF_C_FLOOR && stat < POKEDEX_FILTER_SPDEF_B_CEIL);
        case STAT_TIER_A:
            return (stat > POKEDEX_FILTER_SPDEF_B_FLOOR && stat < POKEDEX_FILTER_SPDEF_A_CEIL);
        case STAT_TIER_S:
            return (stat > POKEDEX_FILTER_SPDEF_A_FLOOR);
        default:
            return FALSE;
    }
}

bool32 SpeciesFilter_IsSpeciesInEggGroups(u32 species)
{
    u32 eggGroupIndex = 0;

    for (eggGroupIndex = 0; eggGroupIndex < EGG_GROUPS_PER_MON; eggGroupIndex++)
        if (!SpeciesFilter_IsSpeciesInFilteredEggGroup(eggGroupIndex, species))
            return FALSE;

    return TRUE;
}

static bool32 SpeciesFilter_IsSpeciesInFilteredEggGroup(u32 eggGroupIndex, u32 species)
{
    u32 groupIndex, activeGroup;
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();

    if (sFilterSet->filterEggGroups[eggGroupIndex].group[0] == nullOptionLUT[currentFilter])
        return TRUE;

    for (groupIndex = 0; groupIndex < (maxOptionLUT[currentFilter]); groupIndex++)
    {
        activeGroup = sFilterSet->filterEggGroups[eggGroupIndex].group[groupIndex];

        if (activeGroup == nullOptionLUT[currentFilter])
            return FALSE;

        if (activeGroup == gSpeciesInfo[species].eggGroups[0] || activeGroup == gSpeciesInfo[species].eggGroups[1])
            return TRUE;
    }

    return FALSE;
}

bool32 SpeciesFilter_CheckSpeciesTypesAgainstFilters(u32 species)
{
    u32 filterTypeIndex = 0;

    for (filterTypeIndex = 0; filterTypeIndex < TYPES_PER_MON; filterTypeIndex++)
        if (SpeciesFilter_DoesSpeciesHaveFilteredType(filterTypeIndex, species) == FALSE)
            return FALSE;

    return TRUE;
}

static bool32 SpeciesFilter_DoesSpeciesHaveFilteredType(u32 filterTypeIndex, u32 species)
{
    u32 groupIndex, activeGroup;

    if (sFilterSet->filterTypes[filterTypeIndex].types[0] == TYPE_NONE)
        return TRUE;

    for (groupIndex = 0; groupIndex < NUMBER_OF_MON_TYPES; groupIndex++)
    {
        activeGroup = sFilterSet->filterTypes[filterTypeIndex].types[groupIndex];

        if (activeGroup == TYPE_NONE)
            return FALSE;

        if (gSpeciesInfo[species].types[0] == activeGroup || gSpeciesInfo[species].types[1] == activeGroup)
            return TRUE;
    }

    return FALSE;
}

void SpeciesFilter_SwitchToFromGrid(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_PrepareScreen_GridToFilter;
}

u32 SpeciesGrid_GetScrollbarSpriteId(void)
{
    return sPokedexGridResources->interfaceSpriteIds[POKEDEX_SPRITETAG_SPECIES_LIST_SCROLLBAR];
}

void SpeciesFilter_CopyFilterSetIntoTemp(void)
{
    if (sFilterSet == NULL || sFilterSetTemp == NULL)
        return;

    memcpy(sFilterSetTemp, sFilterSet, sizeof(struct FiltersSet));
}


static void Task_PrepareScreen_GridToFilter(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SpeciesGrid_CleanUp(taskId);

    FreeBackgrounds();
    FreeAllWindowBuffers();
    SetCurrentPage(POKEDEX_PAGE_FILTER);
    InitializeBackgroundsAndLoadBackgroundGraphics();
    BeginNormalPaletteFade(PALETTES_ALL,0,16,0,RGB_BLACK);
    SpeciesFilter_SetUp(taskId);
}


static void SpeciesFilter_SwitchToFromEditPage(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_PrepareScreen_EditToFilter;
}

static void Task_PrepareScreen_EditToFilter(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    FreeBackgrounds();
    FreeAllWindowBuffers();
    FreeSpritePalettesResetSpriteData();
    SetCurrentPage(POKEDEX_PAGE_FILTER);
    InitializeBackgroundsAndLoadBackgroundGraphics();
    BeginNormalPaletteFade(PALETTES_ALL,0,16,0,RGB_BLACK);
    SpeciesFilter_SetUp(taskId);
}

void Task_SpeciesFilter_Input(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SpeciesFilter_HandleInput(taskId);
}

static void Task_PreapreScreenFilterToGrid(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    FreeBackgrounds();
    FreeAllWindowBuffers();
    DestroyTask(taskId);
    SetMainCallback2(Pokedex_SetupCallback);
}

void SpeciesGrid_SwitchTo(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_PreapreScreenFilterToGrid;
}

static void SpeciesFilter_HandleInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT))
        SpeciesFilter_ChangeListPosition(-1);
    else if (JOY_NEW(DPAD_RIGHT))
        SpeciesFilter_ChangeListPosition(1);
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        SpeciesFilter_ChangeListPosition(-1);
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        SpeciesFilter_ChangeListPosition(1);
    else if (JOY_NEW(B_BUTTON))
        SpeciesGrid_SwitchTo(taskId);
    else if (JOY_NEW(A_BUTTON))
        SpeciesFilter_SwitchToEditPage(taskId);
    else if (JOY_NEW(START_BUTTON))
        SpeciesFilter_ResetFilters();
    else if (JOY_NEW(SELECT_BUTTON))
        SpeciesGrid_SwitchTo(taskId);
}

static void SpeciesFilter_ResetFilters(void)
{
    SpeciesFilter_ResetToDefault();
    SpeciesFilter_PrintFilterHeaders();
    SpeciesFilter_PrintFilterProperties();
}

u32 SpeciesFilter_GetCurrentPositionInFilterList(void)
{
    return sPokedexState->filterListPosition;
}

static void SpeciesFilter_SetCurrentPositionInFilterList(s32 position)
{
    sPokedexState->filterListPosition = position;
}

static u32 SpeciesFilter_GetCursorPosition(void)
{
    return sPokedexState->filterCursorCoordinate;
}

static void SpeciesFilter_SetCursorPosition(u32 position)
{
    sPokedexState->filterCursorCoordinate = position;
}

static void SpeciesFilter_ChangeListPosition(s32 delta)
{
    s32 newPosition = SpeciesFilter_GetCurrentPositionInFilterList() + delta;

    if (newPosition < 0)
        newPosition = FILTER_LIST_COUNT;
    else if (newPosition > FILTER_LIST_COUNT)
        newPosition = FILTER_LIST_TYPE1;

    SpeciesFilter_SetCurrentPositionInFilterList(newPosition);
    SpeciesFilter_ChangeCursorPosition();
    SpeciesFilter_PrintFilterHeaders();
    SpeciesFilter_PrintFilterProperties();
}

static void SpeciesFilter_ChangeCursorPosition(void)
{
    u32 filterList = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 cursor;

    if (filterList > (FILTER_LIST_COUNT - 1))
        cursor = FILTER_LIST_ROW_3;
    else if (filterList < FILTER_LIST_SCREEN_BUFFER)
        cursor = filterList;
    else
        cursor = FILTER_LIST_SCREEN_BUFFER;

    SpeciesFilter_SetCursorPosition(cursor);
}

static enum PokedexFilterList SpeciesFilter_GetIdToPrint(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 cursorPosition = SpeciesFilter_GetCursorPosition();

    return (currentFilter - cursorPosition);
}

const u8 *const sFilterListTexts[] =
{
    [FILTER_LIST_TYPE1] = COMPOUND_STRING("Type 1"),
    [FILTER_LIST_TYPE2] = COMPOUND_STRING("Type 2"),
    [FILTER_LIST_HP] = COMPOUND_STRING("Base HP"),
    [FILTER_LIST_ATK] = COMPOUND_STRING("Base Atk"),
    [FILTER_LIST_DEF] = COMPOUND_STRING("Base Def"),
    [FILTER_LIST_SPATK] = COMPOUND_STRING("Base SpAtk"),
    [FILTER_LIST_SPDEF] = COMPOUND_STRING("Base SpDef"),
    [FILTER_LIST_SPEED] = COMPOUND_STRING("Base Speed"),
    [FILTER_LIST_EGG1] = COMPOUND_STRING("Egg Group 1"),
    [FILTER_LIST_EGG2] = COMPOUND_STRING("Egg Group 2"),
    [FILTER_LIST_COLOR] = COMPOUND_STRING("Body Color"),
    [FILTER_LIST_MOVE1] = COMPOUND_STRING("Move 1"),
    [FILTER_LIST_MOVE2] = COMPOUND_STRING("Move 2"),
    [FILTER_LIST_MOVE3] = COMPOUND_STRING("Move 3"),
    [FILTER_LIST_MOVE4] = COMPOUND_STRING("Move 4"),
    [FILTER_LIST_ABILITY] = COMPOUND_STRING("Ability"),
    [FILTER_LIST_EVOLUTION] = COMPOUND_STRING("Evolution"),
    [FILTER_LIST_ALOLA] = COMPOUND_STRING("Is From Alola"),
    [FILTER_LIST_COUNT] = COMPOUND_STRING("Return"),
};


void SpeciesFilter_PrintFilterHeaders(void)
{
    u32 windowId;
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    enum PokedexFilterList filterId = SpeciesFilter_GetIdToPrint();

    for (windowId = FILTER_PAGE_WINDOW_FILTER_NAME_0; windowId < FILTER_PAGE_WINDOW_HELP_BAR; windowId++)
    {
        FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

        SpeciesFilter_PrintCursor(windowId, filterId);

        AddTextPrinterParameterized4(windowId, fontId, 4, 1, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, sFilterListTexts[filterId++]);

        CopyWindowToVram(windowId, COPYWIN_GFX);
        windowId++;
    }
}

static void SpeciesFilter_PrintFilterProperties(void)
{
    u32 windowId;
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    enum PokedexFilterList filterId = SpeciesFilter_GetIdToPrint();

    for (windowId = FILTER_PAGE_WINDOW_FILTER_PROPERTIES_0; windowId < FILTER_PAGE_WINDOW_HELP_BAR; windowId++)
    {
        FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

        SpeciesFilter_BufferPropertiesToString(fontId, filterId++);
        SpeciesFilter_TrimPropertiesString(fontId);

        AddTextPrinterParameterized4(windowId, fontId, 3, 1, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar2);

        CopyWindowToVram(windowId, COPYWIN_GFX);
        windowId++;
    }
}

static void SpeciesFilter_PrintCursor(enum FilterPageWindows windowId, enum PokedexFilterList filterId)
{
    u32 y = 1;
    u32 x = 0;
    u32 width = FILTER_LIST_PROPERTIES_WIDTH;
    u32 height = 14;
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    u32 fontLetterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);

    if (((windowId / FILTER_PAGE_WINDOW_FILTER_PROPERTIES_0)) != SpeciesFilter_GetCursorPosition())
        return;

    width = GetStringWidth(fontId,sFilterListTexts[filterId],fontLetterSpacing) + 7;

    BlitBitmapToWindow(windowId, filterPageCursor, x, y , width, height);
}

static void SpeciesFilter_BufferPropertiesToString(u32 fontId, enum PokedexFilterList currentFilter)
{
    u32 option, filterIndex;
    u32 nullOption = nullOptionLUT[currentFilter];
    u32 maxOption = maxOptionLUT[currentFilter];

    Debug_SpeciesFilterApply(); //Debug
    StringCopy(gStringVar2, COMPOUND_STRING(""));

    if (SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter,0) == nullOption)
        return;

    if (currentFilter == FILTER_LIST_COUNT)
        return;

    for (filterIndex = 0; filterIndex < maxOption; filterIndex++)
    {
        option = (SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter,filterIndex));

        if (option == nullOption)
            break;

        if (filterIndex == 0)
        {
            StringCopy(gStringVar2, SpeciesFilter_EditPage_GetStringForEntity(currentFilter, option));
        }
        else
        {
            StringAppend(gStringVar2, COMPOUND_STRING(" OR "));
            StringAppend(gStringVar2, SpeciesFilter_EditPage_GetStringForEntity(currentFilter, option));
        }
    }
}

static void SpeciesFilter_TrimPropertiesString(u32 fontId)
{
    u32 width = GetStringWidth(fontId,gStringVar2,GetFontAttribute(fontId,FONTATTR_LETTER_SPACING));
    u32 length;

    if (width <= FILTER_LIST_PROPERTIES_WIDTH)
        return;

    length = StringLength(gStringVar2);

    while (width > FILTER_LIST_PROPERTIES_WIDTH && length > 0)
    {
        length--;
        gStringVar2[length] = EOS;
        width = GetStringWidth(fontId,gStringVar2,GetFontAttribute(fontId,FONTATTR_LETTER_SPACING));
    }

    StringAppend(gStringVar2,COMPOUND_STRING("..."));
}

static void SpeciesFilter_SwitchToEditPage(u8 taskId)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    if (currentFilter == FILTER_LIST_COUNT)
    {
        SpeciesGrid_SwitchTo(taskId);
        return;
    }

    SpeciesFilter_EditPage_ResetCurrentRowNumber();
    SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_X,0);
    SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,0);
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    gTasks[taskId].func = Task_SpeciesFilter_GoToEditPage;
    FreeAllWindowBuffers();
    //ShowBg(BG2_POKEDEX_LIST_BG);
}

static void (* const searchFilterPageSetupFunctions[])(enum PokedexFilterList currentFilter) =
{
    [FILTER_LIST_TYPE1] = SpeciesFilter_SetUpTypeFilterPage,
    [FILTER_LIST_TYPE2] = SpeciesFilter_SetUpTypeFilterPage,
    [FILTER_LIST_HP] = SpeciesFilter_SetUpStatFilterPage,
    [FILTER_LIST_ATK] = SpeciesFilter_SetUpStatFilterPage,
    [FILTER_LIST_DEF] = SpeciesFilter_SetUpStatFilterPage,
    [FILTER_LIST_SPATK] = SpeciesFilter_SetUpStatFilterPage,
    [FILTER_LIST_SPDEF] = SpeciesFilter_SetUpStatFilterPage,
    [FILTER_LIST_SPEED] = SpeciesFilter_SetUpStatFilterPage,
    [FILTER_LIST_EGG1] = SpeciesFilter_SetUpEggFilterPage,
    [FILTER_LIST_EGG2] = SpeciesFilter_SetUpEggFilterPage,
    [FILTER_LIST_COLOR] = SpeciesFilter_SetUpColorFilterPage,
    [FILTER_LIST_MOVE1] = SpeciesFilter_SetUpMoveFilterPage,
    [FILTER_LIST_MOVE2] = SpeciesFilter_SetUpMoveFilterPage,
    [FILTER_LIST_MOVE3] = SpeciesFilter_SetUpMoveFilterPage,
    [FILTER_LIST_MOVE4] = SpeciesFilter_SetUpMoveFilterPage,
    [FILTER_LIST_ABILITY] = SpeciesFilter_SetUpAbilityFilterPage,
    [FILTER_LIST_EVOLUTION] = SpeciesFilter_SetUpEvolutionFilterPage,
    [FILTER_LIST_ALOLA] = SpeciesFilter_SetUpAlolaFilterPage,
};

static void (* const searchFilterPageTasks[])(u8 taskid) =
{
    [FILTER_LIST_TYPE1] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_TYPE2] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_HP] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_ATK] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_DEF] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_SPATK] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_SPDEF] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_SPEED] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_EGG1] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_EGG2] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_COLOR] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_MOVE1] = Task_SpeciesFilter_HandleAlphabetInput,
    [FILTER_LIST_MOVE2] = Task_SpeciesFilter_HandleAlphabetInput,
    [FILTER_LIST_MOVE3] = Task_SpeciesFilter_HandleAlphabetInput,
    [FILTER_LIST_MOVE4] = Task_SpeciesFilter_HandleAlphabetInput,
    [FILTER_LIST_ABILITY] = Task_SpeciesFilter_HandleAlphabetInput,
    [FILTER_LIST_EVOLUTION] = Task_SpeciesFilter_HandleTypeInput,
    [FILTER_LIST_ALOLA] = Task_SpeciesFilter_HandleTypeInput,
};

static const u8 editPageGridMax[FILTER_LIST_COUNT][2] =
{
    [FILTER_LIST_TYPE1] = {POKEDEX_EDIT_TYPE_MAX_COLUMN, POKEDEX_EDIT_TYPE_MAX_ROW},
    [FILTER_LIST_TYPE2] = {POKEDEX_EDIT_TYPE_MAX_COLUMN, POKEDEX_EDIT_TYPE_MAX_ROW},
    [FILTER_LIST_MOVE1] = {POKEDEX_EDIT_MOVE_MAX_COLUMN, POKEDEX_EDIT_MOVE_MAX_ROW},
    [FILTER_LIST_MOVE2] = {POKEDEX_EDIT_MOVE_MAX_COLUMN, POKEDEX_EDIT_MOVE_MAX_ROW},
    [FILTER_LIST_MOVE3] = {POKEDEX_EDIT_MOVE_MAX_COLUMN, POKEDEX_EDIT_MOVE_MAX_ROW},
    [FILTER_LIST_MOVE4] = {POKEDEX_EDIT_MOVE_MAX_COLUMN, POKEDEX_EDIT_MOVE_MAX_ROW},
    [FILTER_LIST_ABILITY] = {POKEDEX_EDIT_MOVE_MAX_COLUMN, POKEDEX_EDIT_MOVE_MAX_ROW},
    [FILTER_LIST_EGG1] = {POKEDEX_EDIT_EGG_MAX_COLUMN, POKEDEX_EDIT_EGG_MAX_ROW},
    [FILTER_LIST_EGG2] = {POKEDEX_EDIT_EGG_MAX_COLUMN, POKEDEX_EDIT_EGG_MAX_ROW},
    [FILTER_LIST_HP] = {POKEDEX_EDIT_STAT_MAX_COLUMN, POKEDEX_EDIT_STAT_MAX_ROW},
    [FILTER_LIST_ATK] = {POKEDEX_EDIT_STAT_MAX_COLUMN, POKEDEX_EDIT_STAT_MAX_ROW},
    [FILTER_LIST_DEF] = {POKEDEX_EDIT_STAT_MAX_COLUMN, POKEDEX_EDIT_STAT_MAX_ROW},
    [FILTER_LIST_SPATK] = {POKEDEX_EDIT_STAT_MAX_COLUMN, POKEDEX_EDIT_STAT_MAX_ROW},
    [FILTER_LIST_SPDEF] = {POKEDEX_EDIT_STAT_MAX_COLUMN, POKEDEX_EDIT_STAT_MAX_ROW},
    [FILTER_LIST_SPEED] = {POKEDEX_EDIT_STAT_MAX_COLUMN, POKEDEX_EDIT_STAT_MAX_ROW},
    [FILTER_LIST_COLOR] = {POKEDEX_EDIT_COLOR_MAX_COLUMN, POKEDEX_EDIT_COLOR_MAX_ROW},
    [FILTER_LIST_EVOLUTION] = {POKEDEX_EDIT_EVOLUTION_MAX_COLUMN, POKEDEX_EDIT_EVOLUTION_MAX_ROW},
    [FILTER_LIST_ALOLA] = {POKEDEX_EDIT_EVOLUTION_MAX_COLUMN, POKEDEX_EDIT_EVOLUTION_MAX_ROW},
};


static void Task_SpeciesFilter_GoToEditPage(u8 taskId)
{
    enum PokedexFilterList currentFilter;

    if (gPaletteFade.active)
        return;

    currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();

    FreeAllWindowBuffers();
    searchFilterPageSetupFunctions[currentFilter](currentFilter);
    gTasks[taskId].func = searchFilterPageTasks[currentFilter];
}

static void SpeciesFilter_SetUpTypeFilterPage(enum PokedexFilterList currentFilter)
{
    currentFilter -= FILTER_LIST_TYPE1;
    SpeciesFilter_InitTypeWindows();
    u32 numRows = SpeciesFilter_EditPage_CalculateNumberRows();
    SpeciesFilter_EditPage_SetNumberRows(numRows);
    SpeciesFilter_ClearWindowPrintTextAndSprites(currentFilter,TRUE);
    PrintMenuHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    PrintHelpBar(FILTER_PAGE_TYPE_WINDOW_HELP_BAR);
}

static void SpeciesFilter_InitTypeWindows(void)
{
    u32 windowId;
    InitWindows(sSpeciesFilterTypeWindowTemplates);
    DeactivateAllTextPrinters();

    for(windowId = 0; windowId < ARRAY_COUNT(sSpeciesFilterTypeWindowTemplates); windowId++)
        ClearWindowCopyToVram(windowId);
}

static const u8 editPageSpacingValues[FILTER_LIST_COUNT][EDIT_PAGE_SPACING_COUNT] =
{
    [FILTER_LIST_TYPE1] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 8,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 80,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 20,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 6,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 60,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 60,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 40,
    },
    [FILTER_LIST_TYPE2] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 8,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 80,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 20,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 6,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 60,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 60,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 40,
    },
    [FILTER_LIST_EGG1] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 8,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 80,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 27,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 6,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 60,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 60,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 53,
    },
    [FILTER_LIST_EGG2] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 8,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 80,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 27,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 6,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 60,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 60,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 53,
    },
    [FILTER_LIST_HP] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 83,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
    [FILTER_LIST_ATK] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 83,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
    [FILTER_LIST_DEF] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 83,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
    [FILTER_LIST_SPATK] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 83,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
    [FILTER_LIST_SPDEF] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 83,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
    [FILTER_LIST_SPEED] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 83,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
    [FILTER_LIST_COLOR] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 8,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 120,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 27,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 6,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 60,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 60,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 40,
    },
    [FILTER_LIST_EVOLUTION] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 160,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
    [FILTER_LIST_ALOLA] =
    {
        [EDIT_PAGE_SPACING_HORIZONTAL_PADDING] = 3,
        [EDIT_PAGE_SPACING_HORIZONTAL_MARGIN] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_PADDING] = 0,
        [EDIT_PAGE_SPACING_VERTICAL_MARGIN] = 25,
        [EDIT_PAGE_SPACING_CHECK_PADDING] = 6,
        [EDIT_PAGE_SPACING_CURSOR_PADDING] = 3,
        [EDIT_PAGE_SPACING_CHECK_MARGIN] = 160,
        [EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH] = 218,
        [EDIT_PAGE_SPACING_CURSOR_WIDTH] = 218,
    },
};

void SpeciesFilter_PrintTextAndSprites(u32 windowId, enum PokedexFilterList currentFilter, bool32 firstRun, u32 fontId)
{
    u32 x = editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_HORIZONTAL_PADDING];
    u32 y = 0;
    u32 slotId = 0;
    u32 typesInRow = 0;
    u32 maxColumnsInRow = editPageGridMax[currentFilter][AXIS_X] + 1;
    u32 maxEntities = maxOptionLUT[currentFilter];
    bool32 isTypeFilter = (currentFilter == FILTER_LIST_TYPE1 || currentFilter == FILTER_LIST_TYPE2);

    if (isTypeFilter)
        maxEntities--;

    for (u32 typeId = 1; typeId < maxEntities; typeId++)
    {
        if (isTypeFilter && typeId == TYPE_MYSTERY)
            continue;

        SpeciesFilter_PrintText(currentFilter, fontId, typeId, windowId, x, y);

        if (firstRun)
           SpeciesFilter_EditPage_PrintSprites(currentFilter,typeId, windowId, x, y, isTypeFilter, &slotId);

        typesInRow++;
        x += editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_HORIZONTAL_MARGIN];

        if (typesInRow % maxColumnsInRow == 0)
            SpeciesFilter_EditPage_ResetValuesAtRowEnd(&typesInRow, &x, &y, currentFilter,FALSE);
    }
}

static void SpeciesFilter_ClearWindowPrintTextAndSprites(enum PokedexFilterList currentFilter, bool32 firstRun)
{
    enum FilterPageWindows_Type windowId = FILTER_PAGE_TYPE_WINDOW_COLUMN_1;
    u32 fontId = FONT_POKEDEX_TYPE_FILTER;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    SpeciesFilter_EditPage_PrintCursor(fontId, currentFilter);
    SpeciesFilter_PrintTextAndSprites(windowId, currentFilter,firstRun,fontId);

    SpeciesFilter_EditPage_SetCheckVisibility(currentFilter);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

void SpeciesFilter_EditPage_ResetValuesAtRowEnd(u32 *typesInRow, u32 *x, u32 *y, enum PokedexFilterList currentFilter, bool32 weaknessLabel)
{
    *typesInRow = 0;
    *y += editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_VERTICAL_MARGIN];
    *x = (weaknessLabel) ? POKEDEX_WEAKNESS_LABEL_X_STARING : editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_HORIZONTAL_PADDING];
}

static void SpeciesFilter_EditPage_PrintSprites(enum PokedexFilterList currentFilter, u32 typeId, u32 windowId, u32 x, u32 y, bool32 isTypeFilter, u32 *slotId)
{
    if (isTypeFilter)
        SpeciesFilter_TypePrintTypeIcons(typeId, windowId, x, y);

    SpeciesFilter_TypePrintCheckSprites(currentFilter,(*slotId)++, windowId, x, y);
}

static void SpeciesFilter_EditPage_PrintCursor(u32 fontId, enum PokedexFilterList currentFilter)
{
    u32 x = (SpeciesFilter_EditPage_GetCursorCoordinate(0) * editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_HORIZONTAL_MARGIN]) + editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_CURSOR_PADDING];
    u32 y = SpeciesFilter_EditPage_GetCursorCoordinate(1) * editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_VERTICAL_MARGIN];

    u32 height = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT) - 1;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);

    u32 windowId = FILTER_PAGE_TYPE_WINDOW_COLUMN_1;
    u32 currentListPosition = SpeciesFilter_EditPage_GetListPosition();
    u32 typeId = SpeciesFilter_EditPage_GetEntityFromCurrentPosition(currentListPosition);

    const u8* name = SpeciesFilter_EditPage_GetStringForEntity(currentFilter, typeId);
    u32 width = GetStringWidth(fontId, name, letterSpacing) + 3;

    BlitBitmapToWindow(windowId, typeEditPageCursor, x, y, width, height);
}

static void SpeciesFilter_PrintText(enum PokedexFilterList currentFilter, u32 fontId, u32 typeId, u32 windowId, u32 x, u32 y)
{
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u8 *end;

    end = StringCopy(gStringVar2,SpeciesFilter_EditPage_GetStringForEntity(currentFilter,typeId));

    PrependFontIdToFit(gStringVar2, end, fontId, editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_MAX_COLUMN_WIDTH]);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,gStringVar2);

}

static void SpeciesFilter_TypePrintTypeIcons(u32 typeId, u32 windowId, u32 x, u32 y)
{
    x += 46;
    y += (GetWindowAttribute(windowId,WINDOW_TILEMAP_TOP) * 8 * 2) - 8;

    SpeciesFilter_EditPage_SaveTypeSpriteId(typeId, CreateSprite(&sSpriteTemplate_Type13x13, 0, 0, 2));
    SpeciesFilter_EditPage_SetTypeSpritePositionAndPalette(typeId,x,y);
}

static void SpeciesFilter_TypePrintCheckSprites(enum PokedexFilterList currentFilter, u32 slotId, u32 windowId, u32 x, u32 y)
{
    u32 spriteId;
    x += editPageSpacingValues[currentFilter][EDIT_PAGE_SPACING_CHECK_MARGIN];
    y += (GetWindowAttribute(windowId,WINDOW_TILEMAP_TOP) * 8 * 2) - 11;

    spriteId = SpeciesGrid_CreateInterfaceSprite(x,y,POKEDEX_GFXTAG_EDITPAGE_CHECK,SpriteCallbackDummy);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].invisible = TRUE;
    SpeciesFilter_EditPage_SaveCheckSpriteId(slotId, spriteId);
}

static u32 SpeciesFilter_EditPage_GetTypeSpriteId(u32 typeId)
{
    return sPokedexGridResources->editPageTypeIcons[typeId];
}

static void SpeciesFilter_EditPage_SaveTypeSpriteId(u32 typeId, u32 spriteId)
{
    sPokedexGridResources->editPageTypeIcons[typeId] = spriteId;
}

static u32 SpeciesFilter_EditPage_GetCheckSpriteId(u32 slotId)
{
    return sPokedexGridResources->editPageCheckIcons[slotId];
}

static void SpeciesFilter_EditPage_SaveCheckSpriteId(u32 slotId, u32 spriteId)
{
    sPokedexGridResources->editPageCheckIcons[slotId] = spriteId;
}

static void SpeciesFilter_EditPage_SetTypeSpritePositionAndPalette(u32 typeId, u32 x, u32 y)
{
    u32 spriteId = SpeciesFilter_EditPage_GetTypeSpriteId(typeId);
    struct Sprite *sprite = &gSprites[spriteId];

    StartSpriteAnim(sprite, typeId);
    sprite->x = x;
    sprite->y = y;
    sprite->oam.paletteNum = gTypesInfo[typeId].palette;
}

static void SpeciesFilter_EditPage_SetCheckVisibility(enum PokedexFilterList currentFilter)
{
    u32 slotId, optionId, entity, value;
    bool32 isInvisible;

    for (slotId = 0; slotId < maxOptionLUT[currentFilter]; slotId++)
    {
        isInvisible = TRUE;
        entity = SpeciesFilter_EditPage_GetEntityFromCurrentPosition(slotId);
        for (optionId = 0; optionId < maxOptionLUT[currentFilter]; optionId++)
        {
            value = SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter, optionId);

            if (value == entity)
            {
                isInvisible = FALSE;
                continue;
            }
        }
        SpeciesFilter_EditPage_SetIndividualOptionCheckVisibility(slotId, isInvisible);
    }
}

static void SpeciesFilter_EditPage_ForceAllChecksInvisible(void)
{
    for (u32 spriteIndex = 0; spriteIndex < ARRAY_COUNT(sPokedexGridResources->editPageCheckIcons); spriteIndex++)
        SpeciesFilter_EditPage_SetIndividualOptionCheckVisibility(spriteIndex, TRUE);
}

static void SpeciesFilter_EditPage_SetIndividualOptionCheckVisibility(u32 currentPosition, bool32 isInvisible)
{
    u32 spriteId = SpeciesFilter_EditPage_GetCheckSpriteId(currentPosition);
    gSprites[spriteId].invisible = isInvisible;
}

static void Task_SpeciesFilter_HandleTypeInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();

    if (JOY_NEW(DPAD_LEFT))
    {
        SpeciesFilter_EditPage_ChangeColumn(-1);
        return;
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        SpeciesFilter_EditPage_ChangeColumn(1);
        return;
    }
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
    {
        SpeciesFilter_EditPage_ChangeRow(-1);
        return;
    }
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
    {
        SpeciesFilter_EditPage_ChangeRow(1);
        return;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        SpeciesFilter_EditPage_CompressOptions();
        SpeciesFilter_SwitchToFromEditPage(taskId);
        return;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        SpeciesFilter_EditPage_ToggleSelectedOption();
        return;
    }
    else if (JOY_NEW(START_BUTTON))
    {
        SpeciesFilter_ResetEntireOption(currentFilter);
        SpeciesFilter_EditPage_ForceAllChecksInvisible();
        return;
    }
}

static void DebugPrintCoorindates(void)
{
    return;
    u32 x = SpeciesFilter_EditPage_GetCursorCoordinate(0);
    u32 y = SpeciesFilter_EditPage_GetCursorCoordinate(1);
    u32 listPosition = SpeciesFilter_EditPage_GetListPosition();
    u32 currentRowNumber = SpeciesFilter_EditPage_GetCurrentRowNumber();
    u32 currentRowSize = SpeciesFilter_EditPage_GetSizeForRow(currentRowNumber);
    u32 totalRows = SpeciesFilter_EditPage_GetNumberRows();
    u32 numMons = SpeciesFilter_EditPage_GetNumberEntities();

    DebugPrintf("x %d | y %d | listPosition %d | rowcurrentRow %d | currentRowSize %d | totalRows %d | nnumItems %d",
            x,
            y,
            listPosition,
            currentRowNumber,
            currentRowSize,
            totalRows,
            numMons
            );
}

static void SpeciesFilter_EditPage_ChangeColumn(s32 delta)
{
    SpeciesFilter_EditPage_SanitizeCursorXCoordinate(delta);
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    SpeciesFilter_EditPage_PrintInformation();
    DebugPrintCoorindates();
}

static u32 SpeciesFilter_EditPage_GetNumberRows(void)
{
    return sPokedexLists->totalNumRows;
}

static u32 SpeciesFilter_EditPage_GetNumberEntities(void)
{
    u32 numEntity = 0;
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    enum PokedexFilterAlphabet letterId = SpeciesFilter_EditPage_GetAlphabetPosition();

    switch (currentFilter)
    {
        default:
            return 0;
        case FILTER_LIST_TYPE1:
        case FILTER_LIST_TYPE2:
            return NUMBER_OF_MON_TYPES - 3;
        case FILTER_LIST_MOVE1:
        case FILTER_LIST_MOVE2:
        case FILTER_LIST_MOVE3:
        case FILTER_LIST_MOVE4:
            for (u32 moveIndex = 0; moveIndex < MAX_MOVES_PER_LETTER; moveIndex++)
                if (residoMovesAZ[letterId][moveIndex] != MOVE_NONE)
                    numEntity++;

            return numEntity;
        case FILTER_LIST_HP:
        case FILTER_LIST_ATK:
        case FILTER_LIST_DEF:
        case FILTER_LIST_SPATK:
        case FILTER_LIST_SPDEF:
        case FILTER_LIST_SPEED:
            return STAT_TIER_COUNT - 1;
        case FILTER_LIST_EGG1:
        case FILTER_LIST_EGG2:
            return EGG_GROUP_COUNT - 1;
        case FILTER_LIST_COLOR:
            return BODY_COLOR_COUNT - 1;
        case FILTER_LIST_ABILITY:
            for (u32 abilityIndex = 0; abilityIndex < MAX_ABILITIES_PER_LETTER; abilityIndex++)
                if (residoAbilitiesAZ[letterId][abilityIndex] != ABILITY_NONE)
                    numEntity++;

            return numEntity;
        case FILTER_LIST_EVOLUTION:
            return EVOLUTION_STAGE_COUNT - 1;
        case FILTER_LIST_ALOLA:
            return ALOLA_COUNT;
    }
}

static u32 SpeciesFilter_EditPage_CalculateNumberRows(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 totalEntity = SpeciesFilter_EditPage_GetNumberEntities();
    u32 xMax = editPageGridMax[currentFilter][AXIS_X];
    u32 rows = (totalEntity / (xMax + 1));

    if (!totalEntity)
        return 0;

    if ((totalEntity % (xMax + 1)) == 0)
        return rows;

    return rows + 1;
}

static void SpeciesFilter_EditPage_SetNumberRows(u32 rows)
{
    sPokedexLists->totalNumRows = rows;
}

static u32 SpeciesFilter_EditPage_GetCurrentRowNumber(void)
{
    return sPokedexState->currentRow;
}

static void SpeciesFilter_EditPage_SetCurrentRowNumber(u32 row)
{
    sPokedexState->currentRow = row;
}

static void SpeciesFilter_EditPage_ResetCurrentRowNumber(void)
{
    SpeciesFilter_EditPage_SetCurrentRowNumber(0);
}

static void SpeciesFilter_EditPage_SanitizeCursorXCoordinate(u32 delta)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 x = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_X);
    u32 currentRow = SpeciesFilter_EditPage_GetCurrentRowNumber();
    u32 rowSize = SpeciesFilter_EditPage_GetSizeForRow(currentRow);
    bool32 cursorMovingRight = SpeciesGrid_IsMonCursorMovingRightOrDown(delta);
    u32 maxX = editPageGridMax[currentFilter][AXIS_X];
    u32 tempMaxX = min(maxX,rowSize-1);
    bool32 isLastColumn = (x == tempMaxX);
    bool32 isFirstColumn = (x == 0);

    if (cursorMovingRight && isLastColumn)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_X,0);
    }
    else if (!cursorMovingRight && isFirstColumn)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_X,tempMaxX);
    }
    else
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_X,x + delta);
    }
}

static void SpeciesFilter_EditPage_SanitizeCursorYCoordinate(s32 delta)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 y = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_Y);
    u32 maxY = editPageGridMax[currentFilter][AXIS_Y];
    u32 maxX = editPageGridMax[currentFilter][AXIS_X];
    bool32 cursorMovingDown = SpeciesGrid_IsMonCursorMovingRightOrDown(delta);
    u32 lastRow = SpeciesFilter_EditPage_GetNumberRows() - 1;
    u32 currentRow = SpeciesFilter_EditPage_GetCurrentRowNumber();
    bool32 isLastRow = (currentRow == lastRow);
    bool32 isFirstRow = (currentRow == 0);
    u32 totalEntity = SpeciesFilter_EditPage_GetNumberEntities();
    u32 futureRow = currentRow + delta;
    u32 tempMaxY = min(maxY,lastRow);
    bool32 oneScreen = (((maxX + 1) * (tempMaxY + 1)) >= totalEntity);

    if (!oneScreen && (y == 1) && (futureRow != 0) && !cursorMovingDown)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,1);
    }
    else if (cursorMovingDown && isLastRow)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,0);
    }
    else if (!oneScreen && (y == (tempMaxY - 1)) && (futureRow != lastRow) && cursorMovingDown)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,tempMaxY - 1);
    }
    else if (!cursorMovingDown && isFirstRow && isLastRow)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,0);
    }
    else if (!cursorMovingDown && isFirstRow)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,tempMaxY);
    }
    else if ((currentRow + delta) > lastRow)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,0);
    }
    else if (y + delta > tempMaxY)
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,0);
    }
    else
    {
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,y+delta);
    }
}

static void SpeciesFilter_EditPage_SantizeCurrentRowNumber(s32 delta)
{
    u32 lastRow = SpeciesFilter_EditPage_GetNumberRows() - 1;
    u32 currentRow = SpeciesFilter_EditPage_GetCurrentRowNumber();

    if ((currentRow + delta) > lastRow && SpeciesGrid_IsMonCursorMovingRightOrDown(delta))
    {
        SpeciesFilter_EditPage_ResetCurrentRowNumber();
    }
    else if((currentRow  == 0) && !SpeciesGrid_IsMonCursorMovingRightOrDown(delta))
    {
        SpeciesFilter_EditPage_SetCurrentRowNumber(lastRow);
    }
    else
    {
        SpeciesFilter_EditPage_SetCurrentRowNumber(currentRow + delta);
    }
}

static u32 SpeciesFilter_EditPage_GetSizeForRow(u32 currentRow)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 xMax = editPageGridMax[currentFilter][AXIS_X];
    u32 lastRow = SpeciesFilter_EditPage_GetNumberRows() - 1;
    u32 numMons = SpeciesFilter_EditPage_GetNumberEntities();
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

static void SpeciesFilter_EditPage_FixCursorXCoorindate(void)
{
    u32 currentRowNumber = SpeciesFilter_EditPage_GetCurrentRowNumber();
    u32 maxRowPosition = SpeciesFilter_EditPage_GetSizeForRow(currentRowNumber) - 1;
    u32 x = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_X);

    while (x > maxRowPosition)
        SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_X,--x);
}

static void SpeciesFilter_EditPage_UpdateEntitiesOnScreen(void)
{
    u32 x = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_X);
    u32 y = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_Y);
    u32 position = SpeciesFilter_EditPage_GetListPosition();
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 xMax = editPageGridMax[currentFilter][AXIS_X];

    while (x)
    {
        position--;
        x--;
    }
    while (y)
    {
        position -= xMax;
        y--;
    }
}

static void SpeciesFilter_EditPage_PrintInformation(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();

    switch (currentFilter)
    {
        case FILTER_LIST_MOVE1:
        case FILTER_LIST_MOVE2:
        case FILTER_LIST_MOVE3:
        case FILTER_LIST_MOVE4:
        case FILTER_LIST_ABILITY:
            SpeciesFilter_EditPage_PrintMoveAbilityHelpBar(FILTER_PAGE_MOVE_WINDOW_HELP_BAR);
            SpeciesFilter_EditPage_PrintListFromLetter();
            SpeciesFilter_EditPage_PrintDescription();
            SpeciesFilter_EditPage_PopulateSelectedWindow();
            break;
        case FILTER_LIST_TYPE1:
        case FILTER_LIST_TYPE2:
        case FILTER_LIST_HP:
        case FILTER_LIST_ATK:
        case FILTER_LIST_DEF:
        case FILTER_LIST_SPATK:
        case FILTER_LIST_SPDEF:
        case FILTER_LIST_SPEED:
        case FILTER_LIST_EGG1:
        case FILTER_LIST_EGG2:
        case FILTER_LIST_COLOR:
        case FILTER_LIST_EVOLUTION:
        case FILTER_LIST_ALOLA:
            SpeciesFilter_ClearWindowPrintTextAndSprites(currentFilter,FALSE);
            break;
        default:
            break;
    }
}

static void SpeciesFilter_EditPage_PrintMoveAbilityManageCursor(enum FilterPageWindows_Move windowId, u32 fontId, u32 letterSpacing, u32 maxHeight)
{
    if (SpeciesFilter_EditPage_GetMode() != FILTER_MODE_MANAGEFILTER)
        return;

    u32 width = 80;
    u32 height = maxHeight;
    u32 y = maxHeight + (maxHeight * SpeciesFilter_EditPageManage_GetListPosition());
    u32 x = 0;

    BlitBitmapToWindow(windowId, moveAbilityEditPageCursor, x, y , width, height);
}

static const u8 *const sStatTierTexts[NUM_STATS][STAT_TIER_COUNT] =
{
    [STAT_HP][STAT_TIER_D]          = COMPOUND_STRING("41 or less"),
    [STAT_HP][STAT_TIER_C]          = COMPOUND_STRING("42 to 58"),
    [STAT_HP][STAT_TIER_B]          = COMPOUND_STRING("59 to 77"),
    [STAT_HP][STAT_TIER_A]          = COMPOUND_STRING("78 to 97"),
    [STAT_HP][STAT_TIER_S]          = COMPOUND_STRING("98 or more"),
    [STAT_ATK][STAT_TIER_NONE]      = COMPOUND_STRING(""),
    [STAT_ATK][STAT_TIER_D]         = COMPOUND_STRING("41 or less"),
    [STAT_ATK][STAT_TIER_C]         = COMPOUND_STRING("42 to 60"),
    [STAT_ATK][STAT_TIER_B]         = COMPOUND_STRING("61 to 90"),
    [STAT_ATK][STAT_TIER_A]         = COMPOUND_STRING("91 to 115"),
    [STAT_ATK][STAT_TIER_S]         = COMPOUND_STRING("116 or more"),
    [STAT_DEF][STAT_TIER_NONE]      = COMPOUND_STRING(""),
    [STAT_DEF][STAT_TIER_D]         = COMPOUND_STRING("41 or less"),
    [STAT_DEF][STAT_TIER_C]         = COMPOUND_STRING("42 to 57"),
    [STAT_DEF][STAT_TIER_B]         = COMPOUND_STRING("58 to 85"),
    [STAT_DEF][STAT_TIER_A]         = COMPOUND_STRING("86 to 103"),
    [STAT_DEF][STAT_TIER_S]         = COMPOUND_STRING("104 or more"),
    [STAT_SPEED][STAT_TIER_NONE]    = COMPOUND_STRING(""),
    [STAT_SPEED][STAT_TIER_D]       = COMPOUND_STRING("35 or less"),
    [STAT_SPEED][STAT_TIER_C]       = COMPOUND_STRING("36 to 48"),
    [STAT_SPEED][STAT_TIER_B]       = COMPOUND_STRING("49 to 76"),
    [STAT_SPEED][STAT_TIER_A]       = COMPOUND_STRING("77 to 98"),
    [STAT_SPEED][STAT_TIER_S]       = COMPOUND_STRING("98 or more"),
    [STAT_SPATK][STAT_TIER_NONE]    = COMPOUND_STRING(""),
    [STAT_SPATK][STAT_TIER_D]       = COMPOUND_STRING("40 or less"),
    [STAT_SPATK][STAT_TIER_C]       = COMPOUND_STRING("41 to 53"),
    [STAT_SPATK][STAT_TIER_B]       = COMPOUND_STRING("54 to 81"),
    [STAT_SPATK][STAT_TIER_A]       = COMPOUND_STRING("82 to 105"),
    [STAT_SPATK][STAT_TIER_S]       = COMPOUND_STRING("106 or more"),
    [STAT_SPDEF][STAT_TIER_NONE]    = COMPOUND_STRING(""),
    [STAT_SPDEF][STAT_TIER_D]       = COMPOUND_STRING("40 or less"),
    [STAT_SPDEF][STAT_TIER_C]       = COMPOUND_STRING("41 to 51"),
    [STAT_SPDEF][STAT_TIER_B]       = COMPOUND_STRING("52 to 75"),
    [STAT_SPDEF][STAT_TIER_A]       = COMPOUND_STRING("76 to 95"),
    [STAT_SPDEF][STAT_TIER_S]       = COMPOUND_STRING("96 or more"),
};

static const u8 *const sEvolutionStageTexts[] =
{
    [EVOLUTION_NULL] = COMPOUND_STRING("evolution null"),
    [MON_CAN_EVOLVE] = COMPOUND_STRING("can Evolve"),
    [MON_HAS_EVOLVED_STILL_CAN] = COMPOUND_STRING("has Evolved and can Evolve"),
    [MON_FULLY_EVOLVED] = COMPOUND_STRING("has Evolved and can't Evolve"),
    [NO_EVOLUTION] = COMPOUND_STRING("hasn't Evolved and can't Evolve"),
};

static const u8 *const sAlolaTexts[] =
{
    [ALOLA_NONE] = COMPOUND_STRING("Alola null"),
    [ALOLA_NO] = COMPOUND_STRING("is not from Alola"),
    [ALOLA_YES] = COMPOUND_STRING("is from Alola"),
};

static const u8 *const sDexColorTexts[] =
{
    [BODY_COLOR_NONE] = COMPOUND_STRING("no color"),
    [BODY_COLOR_RED] = gText_DexSearchColorRed,
    [BODY_COLOR_BLUE] = gText_DexSearchColorBlue,
    [BODY_COLOR_YELLOW] = gText_DexSearchColorYellow,
    [BODY_COLOR_GREEN] = gText_DexSearchColorGreen,
    [BODY_COLOR_BLACK] = gText_DexSearchColorBlack,
    [BODY_COLOR_BROWN] = gText_DexSearchColorBrown,
    [BODY_COLOR_PURPLE] = gText_DexSearchColorPurple,
    [BODY_COLOR_GRAY] = gText_DexSearchColorGray,
    [BODY_COLOR_WHITE] = gText_DexSearchColorWhite,
    [BODY_COLOR_PINK] = gText_DexSearchColorPink,
};

static const u8 *const SpeciesFilter_EditPage_GetStringForEntity(enum PokedexFilterList currentFilter, u32 optionIndex)
{
    switch(currentFilter)
    {
        default:
            return gText_Blank;
        case FILTER_LIST_TYPE1:
        case FILTER_LIST_TYPE2:
            return gTypesInfo[optionIndex].name;
        case FILTER_LIST_HP:
        case FILTER_LIST_ATK:
        case FILTER_LIST_DEF:
        case FILTER_LIST_SPATK:
        case FILTER_LIST_SPDEF:
        case FILTER_LIST_SPEED:
            return sStatTierTexts[currentFilter - FILTER_LIST_HP][optionIndex];
            break;
        case FILTER_LIST_EGG1:
        case FILTER_LIST_EGG2:
            return sEggGroupTexts[optionIndex];
        case FILTER_LIST_COLOR:
            return sDexColorTexts[optionIndex];
        case FILTER_LIST_ABILITY:
            return GetAbilityName(optionIndex);
        case FILTER_LIST_EVOLUTION:
            return sEvolutionStageTexts[optionIndex];
        case FILTER_LIST_ALOLA:
            return sAlolaTexts[optionIndex];
        case FILTER_LIST_MOVE1:
        case FILTER_LIST_MOVE2:
        case FILTER_LIST_MOVE3:
        case FILTER_LIST_MOVE4:
            return GetMoveName(optionIndex);
    }
}

static void SpeciesFilter_EditPage_PopulateSelectedWindow(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    enum FilterPageWindows_Move windowId = FILTER_PAGE_MOVE_WINDOW_SELECTED_MOVES;
    u32 fontId = FONT_POKEDEX_FILTER_MOVE_LIST;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 maxHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    const u8* color = sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK];

    u32 x = 0;
    u32 y = 0;
    u32 moveId;
    u8 *end;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    SpeciesFilter_EditPage_PrintMoveAbilityManageCursor(windowId, fontId, letterSpacing, maxHeight);

    for (u32 moveIndex = 0;moveIndex < maxOptionLUT[currentFilter]; moveIndex++)
    {
        moveId = SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter,moveIndex);

        y += maxHeight;

        end = StringCopy(gStringVar2, SpeciesFilter_EditPage_GetStringForEntity(currentFilter,moveId));

        PrependFontIdToFit(gStringVar2, end, fontId, 72);

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW,gStringVar2);
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void SpeciesFilter_EditPage_ChangeRow(s32 delta)
{
    SpeciesFilter_EditPage_SanitizeCursorYCoordinate(delta);
    SpeciesFilter_EditPage_SantizeCurrentRowNumber(delta);
    SpeciesFilter_EditPage_FixCursorXCoorindate();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    SpeciesFilter_EditPage_UpdateEntitiesOnScreen();
    SpeciesFilter_EditPage_PrintInformation();
    DebugPrintCoorindates();
}

static void SpeciesFilter_EditPage_SetListPositionFromCoordinates(void)
{
    u32 x = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_X);
    u32 y = SpeciesFilter_EditPage_GetCurrentRowNumber();
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 numMons = SpeciesFilter_EditPage_GetNumberEntities();

    u32 maxRow = editPageGridMax[currentFilter][AXIS_X] + 1;
    u32 newCoordinate = (maxRow * y) + x;

    if (newCoordinate > numMons)
        newCoordinate = 0;

    SpeciesFilter_EditPage_SetListPosition(newCoordinate);
}

static void SpeciesFilter_EditPage_SetListPosition(u32 position)
{

    sPokedexState->editPageListPosition = position;
}

static u32 SpeciesFilter_EditPage_GetListPosition(void)
{
    return sPokedexState->editPageListPosition;
}

static u32 SpeciesFilter_EditPage_GetCursorCoordinate(u32 axis)
{
    return sPokedexState->editPageCursorCoordinates[axis];
}

static void SpeciesFilter_EditPage_SetCursorCoordinate(u32 axis, u32 position)
{
    sPokedexState->editPageCursorCoordinates[axis] = position;
}

static bool32 SpeciesFilter_EditPage_IsListCompressed(enum PokedexFilterList currentFilter)
{
    u32 totalSize = maxOptionLUT[currentFilter];
    u32 nullValue = nullOptionLUT[currentFilter];
    u32 nullCount = 0, value = 0, currentNullCount = 0;
    s32 optionIndex;

    for (optionIndex = 0; optionIndex < totalSize; optionIndex++)
    {
        value = SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter, optionIndex);

        if (value == nullValue)
            nullCount++;
    }

    for (optionIndex = totalSize - 1; optionIndex > -1; optionIndex--)
    {
        value = SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter, optionIndex);

        if (value == nullValue)
            currentNullCount++;
        else
            break;
    }

    return (nullCount == currentNullCount);
}

static void SpeciesFilter_EditPage_CompressOptions(void)
{
    u32 optionIndex, leftItem, temp;
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();

    while (SpeciesFilter_EditPage_IsListCompressed(currentFilter) == FALSE)
    {
        for (optionIndex = maxOptionLUT[currentFilter] - 1; optionIndex > 0; optionIndex--)
        {
            leftItem = SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter,optionIndex - 1);

            if (leftItem == nullOptionLUT[currentFilter])
            {
                switch(currentFilter)
                {
                    case FILTER_LIST_TYPE1:
                    case FILTER_LIST_TYPE2:
                        SWAP(
                                sFilterSet->filterTypes[currentFilter].types[optionIndex - 1],
                                sFilterSet->filterTypes[currentFilter].types[optionIndex],
                                temp
                            );
                        break;
                    default:
                    case FILTER_LIST_HP:
                    case FILTER_LIST_ATK:
                    case FILTER_LIST_DEF:
                    case FILTER_LIST_SPATK:
                    case FILTER_LIST_SPDEF:
                    case FILTER_LIST_SPEED:
                        SWAP(
                                sFilterSet->filterBaseStats[currentFilter - FILTER_LIST_HP].tier[optionIndex - 1],
                                sFilterSet->filterBaseStats[currentFilter - FILTER_LIST_HP].tier[optionIndex],
                                temp
                            );
                        break;
                    case FILTER_LIST_EGG1:
                    case FILTER_LIST_EGG2:
                        SWAP(
                                sFilterSet->filterEggGroups[currentFilter - FILTER_LIST_EGG1].group[optionIndex - 1],
                                sFilterSet->filterEggGroups[currentFilter - FILTER_LIST_EGG1].group[optionIndex],
                                temp
                            );
                        break;
                    case FILTER_LIST_COLOR:
                        SWAP(
                                sFilterSet->filterColor[optionIndex - 1],
                                sFilterSet->filterColor[optionIndex],
                                temp
                            );
                        break;
                    case FILTER_LIST_ABILITY:
                        SWAP(
                                sFilterSet->filterAbility[optionIndex - 1],
                                sFilterSet->filterAbility[optionIndex],
                                temp
                            );
                        break;
                    case FILTER_LIST_EVOLUTION:
                        SWAP(
                                sFilterSet->filterEvolution[optionIndex - 1],
                                sFilterSet->filterEvolution[optionIndex],
                                temp
                            );
                        break;
                    case FILTER_LIST_MOVE1:
                    case FILTER_LIST_MOVE2:
                    case FILTER_LIST_MOVE3:
                    case FILTER_LIST_MOVE4:
                        SWAP(
                                sFilterSet->filterMoves[currentFilter - FILTER_LIST_MOVE1].moves[optionIndex - 1],
                                sFilterSet->filterMoves[currentFilter - FILTER_LIST_MOVE1].moves[optionIndex],
                                temp
                            );
                        break;
                    case FILTER_LIST_ALOLA:
                        SWAP(
                                sFilterSet->filterAlola[optionIndex - 1],
                                sFilterSet->filterAlola[optionIndex],
                                temp
                            );
                        break;
                }
            }
        }
    }
}

static u32 SpeciesFilter_EditPage_GetEntityFromCurrentPosition(u32 currentListPosition)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();

    switch(currentFilter)
    {
        case FILTER_LIST_TYPE1:
        case FILTER_LIST_TYPE2:
            return SpeciesFilter_EditPage_GetTypeFromCurrentPosition(currentListPosition);
        case FILTER_LIST_ABILITY:
            return SpeciesFilter_EditPage_GetAbilityFromCurrentPosition(currentListPosition);
        case FILTER_LIST_MOVE1:
        case FILTER_LIST_MOVE2:
        case FILTER_LIST_MOVE3:
        case FILTER_LIST_MOVE4:
            return SpeciesFilter_EditPage_GetMoveFromCurrentPosition(currentListPosition);
        default:
        case FILTER_LIST_HP:
        case FILTER_LIST_ATK:
        case FILTER_LIST_DEF:
        case FILTER_LIST_SPATK:
        case FILTER_LIST_SPDEF:
        case FILTER_LIST_SPEED:
        case FILTER_LIST_COLOR:
        case FILTER_LIST_EVOLUTION:
        case FILTER_LIST_ALOLA:
        case FILTER_LIST_EGG1:
        case FILTER_LIST_EGG2:
            return currentListPosition + 1;
    }
}

static u32 SpeciesFilter_EditPage_GetMoveFromCurrentPosition(u32 currentListPosition)
{
    enum PokedexFilterAlphabet letterId = SpeciesFilter_EditPage_GetAlphabetPosition();
    return residoMovesAZ[letterId][currentListPosition];
}

static u32 SpeciesFilter_EditPage_GetTypeFromCurrentPosition(u32 currentListPosition)
{
    u32 bonus = 0;

    if (currentListPosition >= TYPE_MYSTERY)
        bonus++;

    currentListPosition += ++bonus;

    if (currentListPosition > TYPE_FAIRY)
        currentListPosition = 0;

    if (currentListPosition == TYPE_MYSTERY)
        currentListPosition++;

    return currentListPosition;
}

static u32 SpeciesFilter_EditPage_GetAbilityFromCurrentPosition(u32 currentListPosition)
{
    enum PokedexFilterAlphabet letterId = SpeciesFilter_EditPage_GetAlphabetPosition();
    return residoAbilitiesAZ[letterId][currentListPosition];
}

static u32 SpeciesFilter_EditPage_GetCurrentFilterValue(enum PokedexFilterList currentFilter, u32 typeIndex)
{
    switch (currentFilter)
    {
        case FILTER_LIST_TYPE1:
        case FILTER_LIST_TYPE2:
            return sFilterSet->filterTypes[currentFilter].types[typeIndex];
        case FILTER_LIST_MOVE1:
        case FILTER_LIST_MOVE2:
        case FILTER_LIST_MOVE3:
        case FILTER_LIST_MOVE4:
            return sFilterSet->filterMoves[currentFilter - FILTER_LIST_MOVE1].moves[typeIndex];
        case FILTER_LIST_ABILITY:
            return sFilterSet->filterAbility[typeIndex];
        case FILTER_LIST_EVOLUTION:
            return sFilterSet->filterEvolution[typeIndex];
        case FILTER_LIST_ALOLA:
            return sFilterSet->filterAlola[typeIndex];
        case FILTER_LIST_HP:
        case FILTER_LIST_ATK:
        case FILTER_LIST_DEF:
        case FILTER_LIST_SPATK:
        case FILTER_LIST_SPDEF:
        case FILTER_LIST_SPEED:
            return sFilterSet->filterBaseStats[currentFilter - FILTER_LIST_HP].tier[typeIndex];
        case FILTER_LIST_EGG1:
        case FILTER_LIST_EGG2:
            return sFilterSet->filterEggGroups[currentFilter - FILTER_LIST_EGG1].group[typeIndex];
        case FILTER_LIST_COLOR:
            return sFilterSet->filterColor[typeIndex];
        default:
            return 0;
    }
}

static void SpeciesFilter_EditPage_SetFilterOptionValue(enum PokedexFilterList currentFilter, u32 currentPosition, u32 currentValue)
{
    switch (currentFilter)
    {
        default:
            return;
        case FILTER_LIST_TYPE1:
        case FILTER_LIST_TYPE2:
            sFilterSet->filterTypes[currentFilter].types[currentPosition] = currentValue;
            return;
        case FILTER_LIST_MOVE1:
        case FILTER_LIST_MOVE2:
        case FILTER_LIST_MOVE3:
        case FILTER_LIST_MOVE4:
            sFilterSet->filterMoves[currentFilter - FILTER_LIST_MOVE1].moves[currentPosition] = currentValue;
            return;
        case FILTER_LIST_ABILITY:
            sFilterSet->filterAbility[currentPosition] = currentValue;
            return;
        case FILTER_LIST_HP:
        case FILTER_LIST_ATK:
        case FILTER_LIST_DEF:
        case FILTER_LIST_SPATK:
        case FILTER_LIST_SPDEF:
        case FILTER_LIST_SPEED:
            sFilterSet->filterBaseStats[currentFilter - FILTER_LIST_HP].tier[currentPosition] = currentValue;
            return;
        case FILTER_LIST_EGG1:
        case FILTER_LIST_EGG2:
            sFilterSet->filterEggGroups[currentFilter - FILTER_LIST_EGG1].group[currentPosition] = currentValue;
            return;
        case FILTER_LIST_COLOR:
            sFilterSet->filterColor[currentPosition] = currentValue;
            return;
        case FILTER_LIST_EVOLUTION:
            sFilterSet->filterEvolution[currentPosition] = currentValue;
        case FILTER_LIST_ALOLA:
            sFilterSet->filterAlola[currentPosition] = currentValue;
            return;
    }
}

static bool32 SpeciesFilter_EditPage_ToggleSelectedOption(void)
{
    u32 currentPosition = SpeciesFilter_EditPage_GetListPosition();
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 typeIndex;
    u32 currentOption;
    bool32 firstUnset = FALSE;
    u32 unsetSpot = 0;

    for (typeIndex = 0; typeIndex < maxOptionLUT[currentFilter]; typeIndex++)
    {
        currentOption = SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter,typeIndex);

        if (currentOption == nullOptionLUT[currentFilter])
        {
            if (!firstUnset)
            {
                firstUnset = TRUE;
                unsetSpot = typeIndex;
            }
        }
        else if (currentOption == SpeciesFilter_EditPage_GetEntityFromCurrentPosition(currentPosition))
        {
            SpeciesFilter_ResetFilterSingleOption(currentFilter,typeIndex);
            SpeciesFilter_EditPage_SetIndividualOptionCheckVisibility(currentPosition,TRUE);
            DebugPrintActiveFilters();
            return TRUE;
        }
    }
    if (firstUnset)
    {
        currentOption = SpeciesFilter_EditPage_GetEntityFromCurrentPosition(currentPosition);
        SpeciesFilter_EditPage_SetFilterOptionValue(currentFilter, unsetSpot, currentOption);
    }
    SpeciesFilter_EditPage_SetIndividualOptionCheckVisibility(currentPosition,FALSE);
    DebugPrintActiveFilters();

    if (!firstUnset)
        return FALSE;

    return TRUE;
}

static void DebugPrintActiveFilters(void)
{
    return;
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    u32 currentOption = 0, typeIndex = 0;
    for (typeIndex = 0; typeIndex < maxOptionLUT[currentFilter]; typeIndex++)
    {
        currentOption = SpeciesFilter_EditPage_GetCurrentFilterValue(currentFilter,typeIndex);
        DebugPrintf("slot %d is entity %S (%d)",typeIndex,SpeciesFilter_EditPage_GetStringForEntity(currentFilter,currentOption),currentOption);
    }
}

static void SpeciesFilter_SetUpStatFilterPage(enum PokedexFilterList currentFilter)
{
    SpeciesFilter_InitTypeWindows();
    u32 numRows = SpeciesFilter_EditPage_CalculateNumberRows();
    SpeciesFilter_EditPage_SetNumberRows(numRows);
    SpeciesFilter_ClearWindowPrintTextAndSprites(currentFilter,TRUE);
    PrintMenuHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    PrintHelpBar(FILTER_PAGE_LIST_WINDOW_HELP_BAR);
}

static void SpeciesFilter_SetUpEggFilterPage(enum PokedexFilterList currentFilter)
{
    SpeciesFilter_InitTypeWindows();
    u32 numRows = SpeciesFilter_EditPage_CalculateNumberRows();
    SpeciesFilter_EditPage_SetNumberRows(numRows);
    SpeciesFilter_ClearWindowPrintTextAndSprites(currentFilter,TRUE);
    PrintMenuHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    PrintHelpBar(FILTER_PAGE_TYPE_WINDOW_HELP_BAR);
}

static void SpeciesFilter_SetUpColorFilterPage(enum PokedexFilterList currentFilter)
{
    SpeciesFilter_InitTypeWindows();
    u32 numRows = SpeciesFilter_EditPage_CalculateNumberRows();
    SpeciesFilter_EditPage_SetNumberRows(numRows);
    SpeciesFilter_ClearWindowPrintTextAndSprites(currentFilter,TRUE);
    PrintMenuHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    PrintHelpBar(FILTER_PAGE_LIST_WINDOW_HELP_BAR);
}

static void SpeciesFilter_SetUpMoveFilterPage(enum PokedexFilterList currentFilter)
{
    SpeciesFilter_EditPage_SetMode(FILTER_MODE_ALPHABET);
    SpeciesFilter_InitMoveWindows();
    SpeciesFilter_PrintAlphabetMenuAndHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    SpeciesFilter_EditPage_PopulateSelectedWindow();
    SpeciesFilter_EditPage_PrintListFromLetter();
    SpeciesFilter_EditPage_PrintMoveAbilityHelpBar(FILTER_PAGE_MOVE_WINDOW_HELP_BAR);
}

static void SpeciesFilter_InitMoveWindows(void)
{
    enum FilterPageWindows_Move windowId;
    InitWindows(sSpeciesFilterMoveWindowTemplates);
    DeactivateAllTextPrinters();

    for (windowId = 0; windowId < ARRAY_COUNT(sSpeciesFilterMoveWindowTemplates); windowId++)
        ClearWindowCopyToVram(windowId);
}

static void SpeciesFilter_PrintAlphabetMenuAndHeader(void)
{
    enum FilterPageWindows_Move windowId = FILTER_PAGE_MOVE_WINDOW_HEADER;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    SpeciesFilter_PrintAlphabet();
    PrintPageName();
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void SpeciesFilter_PrintAlphabet(void)
{
    enum FilterPageWindows_Move windowId = FILTER_PAGE_MOVE_WINDOW_HEADER;
    enum PokedexFilterAlphabet letterId;
    u32 x = 11;
    u32 y = 12;
    u32 fontId = FONT_POKEDEX_ALPHABET;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    SpeciesFilter_EditPage_PrintAlphabetCursor();

    for (letterId = 0; letterId < POKEDEX_FILTER_ALPHABET_COUNT; letterId++)
    {
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK], TEXT_SKIP_DRAW,SpeciesFilter_EditPage_GetLetter(letterId));
        x = 19 + ((letterId +1) * 8);
    }
}

static void SpeciesFilter_EditPage_SetAlphabetPosition(enum PokedexFilterAlphabet position)
{
    sPokedexState->editPageAlphabetPosition = position;
}

static enum PokedexFilterAlphabet SpeciesFilter_EditPage_GetAlphabetPosition(void)
{
    return sPokedexState->editPageAlphabetPosition;
}

const u8* SpeciesFilter_EditPage_GetLetter(enum PokedexFilterAlphabet position)
{
    if (position == 0)
    {
        StringCopy(gStringVar4,COMPOUND_STRING("All"));
    }
    else
    {
        gStringVar4[0] = (CHAR_SLASH + position);
        gStringVar4[1] = EOS;
    }
    return gStringVar4;
}

static void SpeciesFilter_EditPage_PrintAlphabetCursor(void)
{
    enum FilterPageWindows_Move windowId = FILTER_PAGE_MOVE_WINDOW_HEADER;
    enum PokedexFilterAlphabet position = SpeciesFilter_EditPage_GetAlphabetPosition();
    u32 x = 10;
    u32 y = 14;
    u32 fontId = FONT_POKEDEX_ALPHABET;
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 width = GetStringWidth(fontId,SpeciesFilter_EditPage_GetLetter(position),letterSpacing) + 1;
    u32 height = 19;

    if (position > 0)
        x = 18 + ((position + 0) * 8);

    BlitBitmapToWindow(windowId, alphabetCursor, x, y , width, height);
}

static void SpeciesFilter_SetUpAbilityFilterPage(enum PokedexFilterList currentFilter)
{
    SpeciesFilter_EditPage_SetMode(FILTER_MODE_ALPHABET);
    SpeciesFilter_InitMoveWindows();
    SpeciesFilter_PrintAlphabetMenuAndHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    SpeciesFilter_EditPage_PopulateSelectedWindow();
    SpeciesFilter_EditPage_PrintListFromLetter();
    SpeciesFilter_EditPage_PrintMoveAbilityHelpBar(FILTER_PAGE_MOVE_WINDOW_HELP_BAR);
}


static void SpeciesFilter_SetUpEvolutionFilterPage(enum PokedexFilterList currentFilter)
{
    SpeciesFilter_InitTypeWindows();
    u32 numRows = SpeciesFilter_EditPage_CalculateNumberRows();
    SpeciesFilter_EditPage_SetNumberRows(numRows);
    SpeciesFilter_ClearWindowPrintTextAndSprites(currentFilter,TRUE);
    PrintMenuHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    PrintHelpBar(FILTER_PAGE_LIST_WINDOW_HELP_BAR);
}

static void SpeciesFilter_SetUpAlolaFilterPage(enum PokedexFilterList currentFilter)
{
    SpeciesFilter_InitTypeWindows();
    u32 numRows = SpeciesFilter_EditPage_CalculateNumberRows();
    SpeciesFilter_EditPage_SetNumberRows(numRows);
    SpeciesFilter_ClearWindowPrintTextAndSprites(currentFilter,TRUE);
    PrintMenuHeader();
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    PrintHelpBar(FILTER_PAGE_LIST_WINDOW_HELP_BAR);
}

static void Task_SpeciesFilter_HandleAlphabetInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    else if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT))
    {
        SpeciesFilter_EditPage_ChangeLetter(-1);
        return;
    }
    else if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT))
    {
        SpeciesFilter_EditPage_ChangeLetter(1);
        return;
    }
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
    {
        SpeciesFilter_EditPage_ChangeLetter(-1);
        return;
    }
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
    {
        SpeciesFilter_EditPage_ChangeLetter(1);
        return;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        SpeciesFilter_SwitchToFromEditPage(taskId);
        return;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        SpeciesFilter_EditPage_GoToOptionInput(taskId);
        return;
    }
}

static void SpeciesFilter_EditPage_ChangeLetter(s32 delta)
{
    enum PokedexFilterAlphabet current = SpeciesFilter_EditPage_GetAlphabetPosition();
    s32 new = current + delta;

    if (new < POKEDEX_FILTER_ALPHABET_ALL)
        new = POKEDEX_FILTER_ALPHABET_Z;

    if (new >= POKEDEX_FILTER_ALPHABET_COUNT)
        new = POKEDEX_FILTER_ALPHABET_ALL;

    SpeciesFilter_EditPage_ResetCurrentRowNumber();
    SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_X,0);
    SpeciesFilter_EditPage_SetCursorCoordinate(AXIS_Y,0);
    SpeciesFilter_EditPage_SetListPositionFromCoordinates();
    SpeciesFilter_EditPage_SetAlphabetPosition(new);

    SpeciesFilter_PrintAlphabetMenuAndHeader();
    SpeciesFilter_EditPage_PrintListFromLetter();
}

static void SpeciesFilter_EditPage_GoToOptionInput(u8 taskId)
{
    u32 numRows = SpeciesFilter_EditPage_CalculateNumberRows();

    if (!numRows)
        return;

    SpeciesFilter_EditPage_SetNumberRows(numRows);
    SpeciesFilter_EditPage_SetMode(FILTER_MODE_OPTIONSELECT);
    gTasks[taskId].func = Task_SpeciesFilter_HandleMoveInput;
    SpeciesFilter_EditPage_PrintInformation();
}

static void SpeciesFilter_EditPage_ReturnToAlphaInput(u8 taskId)
{
    SpeciesFilter_EditPage_SetMode(FILTER_MODE_ALPHABET);
    gTasks[taskId].func = Task_SpeciesFilter_HandleAlphabetInput;
}

static void Task_SpeciesFilter_HandleMoveInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT))
    {
        SpeciesFilter_EditPage_ChangeColumn(-1);
        return;
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        SpeciesFilter_EditPage_ChangeColumn(1);
        return;
    }
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
    {
        SpeciesFilter_EditPage_ChangeRow(-1);
        return;
    }
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
    {
        SpeciesFilter_EditPage_ChangeRow(1);
        return;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        SpeciesFilter_EditPage_ReturnToAlphaInput(taskId);
        SpeciesFilter_EditPage_CompressOptions();
        SpeciesFilter_EditPage_PrintInformation();
        return;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        if  (!SpeciesFilter_EditPage_ToggleSelectedOption())
            SpeciesFilter_EditPage_GoToReplaceManageInput(taskId);
        else
            SpeciesFilter_EditPage_PopulateSelectedWindow();
        return;
    }
    else if (JOY_NEW(START_BUTTON))
    {
        enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
        SpeciesFilter_ResetEntireOption(currentFilter);
        SpeciesFilter_EditPage_PopulateSelectedWindow();

        return;
    }
    else if (JOY_NEW(SELECT_BUTTON))
    {
        SpeciesFilter_EditPage_GoToManageInput(taskId);
    }
}

static void SpeciesFilter_EditPage_PrintListFromLetter(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    enum FilterPageWindows_Move windowId = FILTER_PAGE_MOVE_WINDOW_LIST;
    u32 currentListPosition = SpeciesFilter_EditPage_GetListPosition();

    u32 fontId = FONT_POKEDEX_FILTER_MOVE_LIST;
    u32 x = 4;
    u32 y = 0;
    u32 cursorY = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_Y);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 maxHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    const u8* color = sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK];
    u32 moveId;
    u8 *end;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    SpeciesFilter_EditPage_PrintMoveAbilityCursor(windowId, fontId, letterSpacing, maxHeight);

    while (cursorY > 0)
    {
        cursorY--;
        currentListPosition-= editPageGridMax[currentFilter][AXIS_X] + 1;
    }

    while ((currentListPosition % 2) != 0)
        currentListPosition--;

    for (u32 moveIndex = 0;moveIndex < POKEDEX_EDIT_MOVE_LIST_MAX_MOVES; moveIndex++)
    {
        moveId = SpeciesFilter_EditPage_GetEntityFromCurrentPosition(currentListPosition++);

        if (moveId == nullOptionLUT[currentFilter])
            break;

        if ((moveIndex % 2) == 0 && moveIndex != 0)
            y += maxHeight;

        if ((moveIndex % 2) == 0)
            x = 4;
        else
            x = 82;

        end = StringCopy(gStringVar2, SpeciesFilter_EditPage_GetStringForEntity(currentFilter,moveId));

        PrependFontIdToFit(gStringVar2, end, fontId, 75);

        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW,gStringVar2);
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void SpeciesFilter_EditPage_PrintDescription(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    enum FilterPageWindows_Move windowId = FILTER_PAGE_MOVE_WINDOW_DESC;
    u32 currentListPosition = SpeciesFilter_EditPage_GetListPosition();
    u32 descWidth = GetWindowAttribute(FILTER_PAGE_MOVE_WINDOW_DESC,WINDOW_WIDTH) * TILE_WIDTH;

    u32 fontId = FONT_POKEDEX_FILTER_MOVE_DESC;
    u32 x = 4;
    u32 y = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8* color = sPokedexWindowFontColors[POKEDEX_FONT_COLOR_BLACK];
    u32 moveId;
    u8 *end;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    moveId = SpeciesFilter_EditPage_GetEntityFromCurrentPosition(currentListPosition);

    if (SpeciesFilter_EditPage_GetMode() == FILTER_MODE_OPTIONSELECT)
    {
        if (currentFilter == FILTER_LIST_ABILITY)
            end = StringCopy(gStringVar2, GetAbilityDesc(moveId));
        else
            end = StringCopy(gStringVar2, GetMoveDesc(moveId));
        PrependFontIdToFit(gStringVar2, end, fontId, descWidth);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW,gStringVar2);
    }

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

void SpeciesFilter_EditPage_PrintMoveAbilityCursor(enum FilterPageWindows_Move windowId, u32 fontId, u32 letterSpacing, u32 maxHeight)
{
    if (SpeciesFilter_EditPage_GetMode() != FILTER_MODE_OPTIONSELECT)
        return;

    u32 width = 80;
    u32 height = maxHeight;
    u32 y = SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_Y) * maxHeight;
    u32 x = 2;

    if (SpeciesFilter_EditPage_GetCursorCoordinate(AXIS_X) > 0)
        x = 80;

    BlitBitmapToWindow(windowId, moveAbilityEditPageCursor, x, y , width, height);
}

static void SpeciesFilter_EditPage_PrintMoveAbilityHelpBar(u32 windowId)
{
    u32 fontId = FONT_POKEDEX_HELP_BAR;
    u32 x = 4;
    u32 y = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8* color = sPokedexWindowFontColors[POKEDEX_FONT_COLOR_WHITE];
    enum FilterEditPageModes modeId = SpeciesFilter_EditPage_GetMode();
    u8 *end;
    u32 descWidth = (GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_WIDTH) - 4;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch(modeId)
    {
        default:
            end = StringCopy(gStringVar2,COMPOUND_STRING(""));
            break;
        case FILTER_MODE_ALPHABET:
            end = StringCopy(gStringVar2,COMPOUND_STRING("{DPAD_LEFTRIGHT} Explore Letters {A_BUTTON} Select Letter {B_BUTTON} Return"));
            break;
        case FILTER_MODE_OPTIONSELECT:
            end = StringCopy(gStringVar2,COMPOUND_STRING("{DPAD_NONE} Explore {A_BUTTON} Toggle {B_BUTTON} Return {SELECT_BUTTON} Manage {START_BUTTON} Clear"));
            break;
        case FILTER_MODE_MANAGEFILTER:
            end = StringCopy(gStringVar2,COMPOUND_STRING("{DPAD_UPDOWN} Explore Options {A_BUTTON} Remove Option {B_BUTTON} Return"));
            break;
    }

    PrependFontIdToFit(gStringVar2, end, fontId, descWidth);


    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW,gStringVar2);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

enum FilterEditPageModes SpeciesFilter_EditPage_GetMode(void)
{
    return sPokedexState->filterEditPageMode;
}

static void SpeciesFilter_EditPage_SetMode(enum FilterEditPageModes modeId)
{
    sPokedexState->filterEditPageMode = modeId;
}

static void SpeciesFilter_EditPage_GoToManageInput(u8 taskId)
{
    SpeciesFilter_EditPage_SetMode(FILTER_MODE_MANAGEFILTER);
    SpeciesFilter_EditPage_ResetManageStorage();
    SpeciesFilter_EditPage_PrintListFromLetter();
    SpeciesFilter_EditPage_PrintMoveAbilityHelpBar(FILTER_PAGE_MOVE_WINDOW_HELP_BAR);
    SpeciesFilter_EditPageManage_ChangeListPosition(NUM_FILTER_MANAGE_LIST_ROWS);
    gTasks[taskId].func = Task_SpeciesFilter_HandleManageInput;
}

static void SpeciesFilter_EditPage_GoToReplaceManageInput(u8 taskId)
{
    SpeciesFilter_EditPage_SetMode(FILTER_MODE_MANAGEFILTER);
    SpeciesFilter_EditPage_SetStorageFromCurrentPosition();
    SpeciesFilter_EditPageManage_ChangeListPosition(NUM_FILTER_MANAGE_LIST_ROWS);
    gTasks[taskId].func = Task_SpeciesFilter_HandleManageInput;
}

static void Task_SpeciesFilter_HandleManageInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    else if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT))
    {
        SpeciesFilter_EditPageManage_ChangeListPosition(-1);
        return;
    }
    else if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT))
    {
        SpeciesFilter_EditPageManage_ChangeListPosition(1);
        return;
    }
    else if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
    {
        SpeciesFilter_EditPageManage_ChangeListPosition(-1);
        return;
    }
    else if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
    {
        SpeciesFilter_EditPageManage_ChangeListPosition(1);
        return;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        SpeciesFilter_EditPage_CompressOptions();
        SpeciesFilter_EditPage_GoToOptionInput(taskId);
        return;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        SpeciesFilter_EditPageManage_PerformReplaceFromStorage(taskId);
        return;
    }
}

static void SpeciesFilter_EditPageManage_PerformReplaceFromStorage(u8 taskId)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    enum FilterManageListRows currentListPosition = SpeciesFilter_EditPageManage_GetListPosition();
    u32 stored = SpeciesFilter_EditPageManage_GetListStorage();
    u32 empty = nullOptionLUT[currentFilter];

    SpeciesFilter_EditPage_SetFilterOptionValue(currentFilter,currentListPosition, stored);
    SpeciesFilter_EditPageManage_SetListStorage(empty);

    if (stored != empty)
        SpeciesFilter_EditPage_GoToOptionInput(taskId);
    else
        SpeciesFilter_EditPage_PrintInformation();
}

static void SpeciesFilter_EditPageManage_ChangeListPosition(s32 delta)
{
    enum FilterManageListRows currentListPosition = SpeciesFilter_EditPageManage_GetListPosition();
    s32 new = currentListPosition + delta;

    if (new < FILTER_MANAGE_LIST_ROW_0)
        new = (NUM_FILTER_MANAGE_LIST_ROWS - 1);

    if (new >= NUM_FILTER_MANAGE_LIST_ROWS)
        new = FILTER_MANAGE_LIST_ROW_0;

    SpeciesFilter_EditPageManage_SetListPosition(new);
    SpeciesFilter_EditPage_PopulateSelectedWindow();
}

static void SpeciesFilter_EditPageManage_SetListPosition(u32 position)
{

    sPokedexState->filterManagePosition = position;
}

static u32 SpeciesFilter_EditPageManage_GetListPosition(void)
{
    return sPokedexState->filterManagePosition;
}

static void SpeciesFilter_EditPageManage_SetListStorage(u32 value)
{

    sPokedexState->filterManageStorage = value;
}

static u32 SpeciesFilter_EditPageManage_GetListStorage(void)
{
    return sPokedexState->filterManageStorage;
}

static void SpeciesFilter_EditPage_ResetManageStorage(void)
{
    enum PokedexFilterList currentFilter = SpeciesFilter_GetCurrentPositionInFilterList();
    SpeciesFilter_EditPageManage_SetListStorage(nullOptionLUT[currentFilter]);
}

static void SpeciesFilter_EditPage_SetStorageFromCurrentPosition(void)
{
    u32 position = SpeciesFilter_EditPage_GetListPosition();
    u32 currentEntity = SpeciesFilter_EditPage_GetEntityFromCurrentPosition(position);
    SpeciesFilter_EditPageManage_SetListStorage(currentEntity);
}

static bool32 SpeciesFilter_HasFilterSetChanged(void)
{
    if (SpeciesFilter_GetFilterChangeFlag())
        return TRUE;

    if (sFilterSet == NULL || sFilterSetTemp == NULL)
        return FALSE;

    return memcmp(sFilterSet, sFilterSetTemp, sizeof(struct FiltersSet)) != 0;
}

void SpeciesFilter_DetectAndFlagFilterSetChanges(void)
{
    SpeciesFilter_SetFilterChangeFlag(SpeciesFilter_HasFilterSetChanged());
}

void SpeciesFilter_SetFilterChangeFlag(bool32 result)
{
    filtersHaveChanged = result;
}

bool32 SpeciesFilter_GetFilterChangeFlag(void)
{
    return filtersHaveChanged;
}

static void SpeciesFilter_InitWindows(void)
{
    enum FilterPageWindows windowId;

    InitWindows(sSpeciesFilterWindowTemplates);
    DeactivateAllTextPrinters();

    for(windowId = 0; windowId < FILTER_PAGE_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);

}

static void SpeciesFilter_EditPage_LoadCheckSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_PokedexEditPageCheck =
    {
        editPageFilterCheck,
        (16*16),
        POKEDEX_GFXTAG_EDITPAGE_CHECK,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_PokedexEditPageCheck);
    LoadSpritePalette(&sPokedexInterfaceSpritePalette);
}

static void SpeciesFilter_SetUp(u8 taskId)
{
    HideBg(BG2_POKEDEX_LIST_BG); //PSF TODO why does this bg get filled with garbage after SpeciesFilter_PrintFilterProperties

    LoadFilterTypeSpritesAndPalettes();
    SpeciesFilter_EditPage_LoadCheckSprite();
    SpeciesFilter_InitWindows();
    DestroyTask(taskId);
    SetPageAndInputTask(POKEDEX_PAGE_FILTER);
    SpeciesGrid_PrintScrollbar();
    PrintMenuHeader();
    SpeciesFilter_PrintFilterHeaders();
    SpeciesFilter_PrintFilterProperties();
    PrintHelpBar(FILTER_PAGE_WINDOW_HELP_BAR);
}

static void LoadFilterTypeSpritesAndPalettes(void)
{
    LoadPalette(sTypePalettes, OBJ_PLTT_ID(PAL_SLOT_MON_TYPE), 3 * PLTT_SIZE_4BPP);
    LoadCompressedSpriteSheet(&sSpriteSheet_Type13x13);
}

void SpeciesFilter_SetScrollbarYInputVariables(u32* currentRowNumber, u32* totalRowNumber)
{
    bool32 isMoveInput = (FindTaskIdByFunc(Task_SpeciesFilter_HandleMoveInput) != TASK_NONE);

    *currentRowNumber = (isMoveInput) ? SpeciesFilter_EditPage_GetCurrentRowNumber() : SpeciesFilter_GetCurrentPositionInFilterList();
    *totalRowNumber = (isMoveInput) ? SpeciesFilter_EditPage_GetNumberRows()-1 : FILTER_LIST_COUNT;
}

