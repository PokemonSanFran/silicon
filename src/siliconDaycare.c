#include "global.h"
#include "daycare.h"
#include "egg_hatch.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "field_weather.h"
#include "item.h"
#include "menu.h"
#include "options_battle.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokemon_storage_system.h"
#include "pokemon_summary_screen.h"
#include "quest_logic.h"
#include "quest_ow.h"
#include "script.h"
#include "siliconDaycare.h"
#include "string_util.h"
#include "tv.h"
#include "constants/siliconDaycare.h"

static void Debug_RandomizeBoxMonInidividualValues(struct BoxPokemon *mon);
static void Debug_RandomizeMonInidividualValues(struct Pokemon *mon);
static s16 CompactDaycareEggSlots(void);
static u32 GetFirstPopulatedEggIndex(void);
static s16 CompactDaycareEggSlots(void);
static void ClearEggFlagWhenNoPendingEggs(void);
static u32 GetEggCycleStepsBasedOnGeneration(void);
static void ApplySiliconSteps(struct DayCare *daycare, u32 eggIndex);
static u32 CalculateEggCost(void);
static u32 CalculateStatCost(void);
static u32 CalculateEggPickupCost(void);
static void LoadEggContents(u32 mode);
static u32 CountChangedIndividualValues(void);
static u32 CalculateStatChangeCost(void);
static void SetupEggMon(struct Pokemon *mon);

bool32 DoesPlayerHaveSpaceForWelcomeKit(void)
{
    u32 const breedingWelcomeKit[][2] =
    {
        {ITEM_EVERSTONE, 2},
        {ITEM_DESTINY_KNOT, 2},
        {ITEM_POWER_WEIGHT,2},
        {ITEM_POWER_BRACER,2},
        {ITEM_POWER_BELT,2},
        {ITEM_POWER_LENS,2},
        {ITEM_POWER_BAND,2},
        {ITEM_POWER_ANKLET,2},
    };

    u32 item, quantity;
    s32 itemIndex;
    bool32 result = TRUE;

    for (itemIndex = 0; itemIndex < ARRAY_COUNT(breedingWelcomeKit); itemIndex++)
    {
        item = breedingWelcomeKit[itemIndex][0];
        quantity = breedingWelcomeKit[itemIndex][1];

        if (!CheckBagHasSpace(item,quantity))
        {
            result = FALSE;
            break;
        }

        AddBagItem(item, quantity);
    }

    if (result == FALSE)
        itemIndex--;

    while (itemIndex > -1)
    {
        item = breedingWelcomeKit[itemIndex][0];
        quantity = breedingWelcomeKit[itemIndex][1];

        RemoveBagItem(item,quantity);
        itemIndex--;
    }

    gSpecialVar_Result = result;
    return result;
}

void Script_IsPlayerPartyAndPokemonStorageFull(void)
{
    gSpecialVar_Result = IsPlayerPartyAndPokemonStorageFull();
}

u32 AddMonToPartyOrBox(struct Pokemon pokemon)
{
    if (GetMonData(&gPlayerParty[PARTY_SIZE - 1], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
    {
        CopyMon(&gPlayerParty[PARTY_SIZE - 1], &pokemon, sizeof(pokemon));
        return MON_GIVEN_TO_PARTY;
    }
    return CopyMonToPC(&pokemon);
}

u32 GetEmptyEggIndex(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;

    for (u32 eggIndex = 0; eggIndex < SILICON_DAYCARE_EGG_MAX; eggIndex++)
    {
        if (GetBoxMonData(&daycare->daycareEgg[eggIndex].egg,MON_DATA_IS_EGG) == FALSE)
            return eggIndex;
    }

    return SILICON_DAYCARE_EGG_NONE;
}

static u32 GetFirstPopulatedEggIndex(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;

    for (u32 eggIndex = 0; eggIndex < SILICON_DAYCARE_EGG_MAX; eggIndex++)
        if (GetBoxMonData(&daycare->daycareEgg[eggIndex].egg,MON_DATA_IS_EGG) == TRUE)
            return eggIndex;

    return SILICON_DAYCARE_EGG_MAX;
}

static s16 CompactDaycareEggSlots(void)
{
    s16 retVal = -1;
    u16 i, last;
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;

    for (i = 0, last = 0; i < SILICON_DAYCARE_EGG_MAX; i++)
    {
        bool32 isEgg = GetBoxMonData(&daycare->daycareEgg[i].egg,MON_DATA_IS_EGG);
        if (isEgg != FALSE)
        {
            if (i != last)
                daycare->daycareEgg[last] = daycare->daycareEgg[i];
            last++;
        }
        else if (retVal == -1)
        {
            retVal = i;
        }
    }
    for (; last < SILICON_DAYCARE_EGG_MAX; last++)
        memset(&daycare->daycareEgg[last],0,sizeof(struct DaycareEgg));

    return retVal;
}

void GiveEggFromDaycare_Silicon(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct Pokemon egg;
    u32 eggIndex = GetFirstPopulatedEggIndex();

    ApplySiliconSteps(daycare,eggIndex);

    if (AreIndividualValuesDisabled())
        ResetUnhatchedMonEgg();

    BoxMonToMon(&daycare->daycareEgg[eggIndex].egg, &egg);
    gSpecialVar_0x8009 = AddMonToPartyOrBox(egg);
    CompactPartySlots();
    CalculatePlayerPartyCount();
    RemoveEggFromDaycare_Silicon();
}

void RemoveEggFromDaycare_Silicon(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    memset(&daycare->daycareEgg[GetFirstPopulatedEggIndex()],0,sizeof(struct DaycareEgg));
    CompactDaycareEggSlots();
    ClearEggFlagWhenNoPendingEggs();
}

static void ClearEggFlagWhenNoPendingEggs(void)
{
    if (NoEggsAtDaycare())
        FlagClear(FLAG_PENDING_DAYCARE_EGG);
}

bool32 NoEggsAtDaycare(void)
{
    return (GetEmptyEggIndex() == 0);
}

bool32 NoMoreRoomDaycareEggs(void)
{
    return (GetEmptyEggIndex() == SILICON_DAYCARE_EGG_MAX);
}

void DebugPrintEggsAtDaycare(void)
{
    return;
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    for (u32 eggIndex = 0; eggIndex < SILICON_DAYCARE_EGG_MAX; eggIndex++)
    {
        u32 species = (GetBoxMonData(&daycare->daycareEgg[eggIndex].egg,MON_DATA_SPECIES));
        bool32 isEgg = (GetBoxMonData(&daycare->daycareEgg[eggIndex].egg,MON_DATA_IS_EGG));
        DebugPrintf("index %d is egg %d has mon %S",eggIndex,isEgg,GetSpeciesName(species));
    }
}

void DebugPrintIvs(void)
{
    return;
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;

    for (u32 eggIndex = 0; eggIndex < SILICON_DAYCARE_EGG_MAX; eggIndex++)
        for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
            DebugPrintf("egg %d | stat %d | value %d",eggIndex,statIndex,daycare->daycareEgg[eggIndex].originalIv[statIndex]);
}


void SaveOriginalEggIvs(struct DayCare *daycare, u32 eggIndex)
{
    u32 stat;
    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        stat = GetBoxMonData(&daycare->daycareEgg[eggIndex].egg,MON_DATA_HP_IV + statIndex);
        daycare->daycareEgg[eggIndex].originalIv[statIndex] = stat;
    }
}

void ClearSiliconDaycareData(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    memset(&daycare->mons, 0, sizeof(daycare->mons));
    memset(&daycare->daycareEgg, 0, sizeof(daycare->daycareEgg));
    daycare->offspringPersonality = 0;
    daycare->stepCounter = 0;
}

static const u32 perkEffortValueSpreads[NUM_STATS][NUM_STATS] =
{
    [STAT_HP] =
    {
        [STAT_HP] = 252,
        [STAT_ATK] = 0,
        [STAT_DEF] = 128,
        [STAT_SPEED] = 0,
        [STAT_SPATK] = 0,
        [STAT_SPDEF] = 128,
    },
    [STAT_ATK] =
    {
        [STAT_HP] = 4,
        [STAT_ATK] = 252,
        [STAT_DEF] = 0,
        [STAT_SPEED] = 252,
        [STAT_SPATK] = 0,
        [STAT_SPDEF] = 0,
    },
    [STAT_DEF] =
    {
        [STAT_HP] = 252,
        [STAT_ATK] = 0,
        [STAT_DEF] = 252,
        [STAT_SPEED] = 0,
        [STAT_SPATK] = 0,
        [STAT_SPDEF] = 4,
    },
    [STAT_SPEED] =
    {
        [STAT_HP] = 0,
        [STAT_ATK] = 128,
        [STAT_DEF] = 0,
        [STAT_SPEED] = 0,
        [STAT_SPATK] = 128,
        [STAT_SPDEF] = 252,
    },
    [STAT_SPATK] =
    {
        [STAT_HP] = 4,
        [STAT_ATK] = 0,
        [STAT_DEF] = 0,
        [STAT_SPEED] = 252,
        [STAT_SPATK] = 252,
        [STAT_SPDEF] = 0,
    },
    [STAT_SPDEF] =
    {
        [STAT_HP] = 252,
        [STAT_ATK] = 0,
        [STAT_DEF] = 4,
        [STAT_SPEED] = 0,
        [STAT_SPATK] = 0,
        [STAT_SPDEF] = 252,
    },
};

void MarkMonForEffortValuePerk(struct Pokemon *egg)
{
    bool32 getsPerk = (HasPlayerJoinedThe_Tide()) ? FALSE : TRUE;

    SetMonData(egg,MON_DATA_GETS_SILICON_BREEDING_PERKS,&getsPerk);
}

void ApplyEffortValuePerk(struct Pokemon *temp, struct Pokemon *egg)
{
    if (!GetMonData(temp,MON_DATA_GETS_SILICON_BREEDING_PERKS))
        return;

    u32 species = GetMonData(egg,MON_DATA_SPECIES);
    u32 highestValue = 0, setValue = 0, bestStat = 0;
    u32 baseStats[NUM_STATS];
    u32 statsArray[NUM_STATS];

    baseStats[STAT_HP] = gSpeciesInfo[species].baseHP;
    baseStats[STAT_ATK] = gSpeciesInfo[species].baseAttack;
    baseStats[STAT_DEF] = gSpeciesInfo[species].baseDefense;
    baseStats[STAT_SPEED] = gSpeciesInfo[species].baseSpeed;
    baseStats[STAT_SPATK] = gSpeciesInfo[species].baseSpAttack;
    baseStats[STAT_SPDEF] = gSpeciesInfo[species].baseSpDefense;

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
        statsArray[statIndex] = statIndex;

    Shuffle(statsArray,NUM_STATS,sizeof(statsArray[0]));

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        if (baseStats[statsArray[statIndex]] > highestValue)
        {
            highestValue = baseStats[statsArray[statIndex]];
            bestStat = statsArray[statIndex];
        }
    }

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        setValue = perkEffortValueSpreads[bestStat][statIndex];
        SetMonData(egg,MON_DATA_HP_EV + statIndex,&setValue);
    }
}

void UpdateSiliconDaycareStepCounter(void)
{
    if (HasPlayerJoinedThe_Tide())
        return;

    u32 species, steps;
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;

    for (u32 eggIndex = 0; eggIndex < SILICON_DAYCARE_EGG_MAX; eggIndex++)
    {
        species = (GetBoxMonData(&daycare->daycareEgg[eggIndex].egg,MON_DATA_SPECIES));

        if (species == SPECIES_NONE)
            break;

        steps = daycare->daycareEgg[eggIndex].steps;

        if (steps >= INT_MAX)
            return;

        steps++;
        daycare->daycareEgg[eggIndex].steps = steps;
    }
}

static u32 GetEggCycleStepsBasedOnGeneration(void)
{
    switch (P_EGG_CYCLE_LENGTH)
    {
        case GEN_1:
        case GEN_2:
        case GEN_3:
        case GEN_7: return UCHAR_MAX + 1;
        case GEN_4: return UCHAR_MAX;
        case GEN_5:
        case GEN_6: return UCHAR_MAX + 2;
        default: return (UCHAR_MAX / 2) + 1;
    }
}

static void ApplySiliconSteps(struct DayCare *daycare, u32 eggIndex)
{
    u32 steps = daycare->daycareEgg[eggIndex].steps;
    u32 requiredSteps = GetEggCycleStepsBasedOnGeneration();
    daycare->daycareEgg[eggIndex].steps = 0;

    if (steps < requiredSteps)
        return;

    u32 eggCycles = GetBoxMonData(&daycare->daycareEgg[eggIndex].egg, MON_DATA_FRIENDSHIP);

    while (steps >= requiredSteps && eggCycles != 0)
    {
        steps -= requiredSteps;
        eggCycles -= 1;
    }

    SetBoxMonData(&daycare->daycareEgg[eggIndex].egg, MON_DATA_FRIENDSHIP,&eggCycles);
}

static u32 CalculateEggCost(void)
{
    u32 multiplier = HasPlayerJoinedThe_Tide() ? SILICON_DAYCARE_NO_PERK_MULTIPLIER : 1;
    return SILICON_DAYCARE_PER_EGG_COST * multiplier;
}

static u32 CalculateStatCost(void)
{
    u32 multiplier = HasPlayerJoinedThe_Tide() ? SILICON_DAYCARE_NO_PERK_MULTIPLIER : 1;
    return SILICON_DAYCARE_PER_IV_COST * multiplier;
}

static u32 CalculateEggPickupCost(void)
{
    u32 eggCost = CalculateEggCost();
    u32 total = (CalculateStatChangeCost()) + eggCost;
    return total;
}

static u32 CalculateStatChangeCost(void)
{
    u32 statCost = CalculateStatCost();
    u32 numChanged = CountChangedIndividualValues();
    return (statCost * numChanged);
}

void Script_CalculateAndBufferEggPickupCost(void)
{
    u32 total = CalculateEggPickupCost();
    gSpecialVar_0x8005 = total;
    ConvertIntToDecimalStringN(gStringVar1, total, STR_CONV_MODE_LEFT_ALIGN,CountDigits(total));
}

void Script_CalculateAndBufferStatEditCost(void)
{
    u32 total = CalculateStatChangeCost();
    gSpecialVar_0x8005 = total;
    ConvertIntToDecimalStringN(gStringVar1, total, STR_CONV_MODE_LEFT_ALIGN,CountDigits(total));
}

void Script_CountChangedIndividualValues(void)
{
    gSpecialVar_Result = CountChangedIndividualValues();
}

void Script_GetDaycareCostCode(void)
{
    bool32 isTide = HasPlayerJoinedThe_Tide();
    bool32 editedStats = (CountChangedIndividualValues() != 0);

    if (isTide && editedStats)
        gSpecialVar_Result = SILICON_DAYCARE_NO_DISCOUNT_YES_STATS;
    else if (isTide && !editedStats)
        gSpecialVar_Result = SILICON_DAYCARE_NO_DISCOUNT_NO_STATS;
    else if (!isTide && editedStats)
        gSpecialVar_Result = SILICON_DAYCARE_YES_DISCOUNT_YES_STATS;
    else
        gSpecialVar_Result = SILICON_DAYCARE_YES_DISCOUNT_NO_STATS;
}

void Script_GetGeneEditingCostCode(void)
{
    bool32 isTide = HasPlayerJoinedThe_Tide();

    if (isTide)
        gSpecialVar_Result = SILICON_DAYCARE_NO_DISCOUNT_YES_STATS;
    else
        gSpecialVar_Result = SILICON_DAYCARE_YES_DISCOUNT_YES_STATS;
}

void EditPokemonIndividualValues(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct Pokemon *mon = &daycare->viewMon;
    struct Pokemon *old = &gPlayerParty[gSpecialVar_0x8004];

    ZeroMonData(mon);
    CopyMon(mon,old,sizeof(struct Pokemon));

    if (GetMonData(mon,MON_DATA_IS_EGG) == TRUE)
        SetupEggMon(mon);

    ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, mon, 0, 0, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void CompareOldNewIndividualValues(void)
{
    u32 changedCount = 0;
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct Pokemon *mon = &daycare->viewMon;
    struct Pokemon *old = &gPlayerParty[gSpecialVar_0x8004];
    Debug_RandomizeMonInidividualValues(mon);
    // PSF TODO remove Debug_RandomizeMonInidividualValues once ShowPokemonSummaryScreen can actually edit IVs

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        if (GetMonData(old,MON_DATA_HP_IV + statIndex) == GetMonData(mon,MON_DATA_HP_IV + statIndex))
            continue;

        changedCount++;
    }

    u32 total = changedCount * CalculateStatCost();
    gSpecialVar_0x8005 = total;

    if (total == 0)
        return;

    ConvertIntToDecimalStringN(gStringVar2, total, STR_CONV_MODE_LEFT_ALIGN,CountDigits(total));
}

void FinalizeIndividualValueChanges(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct Pokemon *new = &daycare->viewMon;
    struct Pokemon *old = &gPlayerParty[gSpecialVar_0x8004];

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        u32 stat = GetMonData(new,MON_DATA_HP_IV + statIndex);
        SetMonData(old, MON_DATA_HP_IV + statIndex,&stat);
    }

    ZeroMonData(new);
}

void BufferStatPrices(void)
{
    u32 statCost = CalculateStatCost();
    ConvertIntToDecimalStringN(gStringVar1, statCost, STR_CONV_MODE_LEFT_ALIGN,CountDigits(statCost));
}

void BufferEggPrices(void)
{
    u32 eggCost = CalculateEggCost();
    ConvertIntToDecimalStringN(gStringVar1, eggCost, STR_CONV_MODE_LEFT_ALIGN, CountDigits(eggCost));
}

void Script_GetDaycareCompatibilityScoreFromSave(void)
{
    gSpecialVar_Result = GetDaycareCompatibilityScoreFromSave();
}

void BufferUnhatchedMonEgg(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;

    u32 eggIndex = GetFirstPopulatedEggIndex();
    u32 species = GetBoxMonData(&daycare->daycareEgg[eggIndex].egg, MON_DATA_SPECIES);
    StringCopy(gStringVar1, GetSpeciesName(species));
}

void Script_CountNumberOfEggs(void)
{
    gSpecialVar_0x8004 = GetEmptyEggIndex();
}

void ViewEggContents(void)
{
    LoadEggContents(SUMMARY_MODE_LOCK_MOVES);
}

void EditEggContents(void)
{
    LoadEggContents(SUMMARY_MODE_LOCK_MOVES);
    Debug_RandomizeBoxMonInidividualValues(&gSaveBlock1Ptr->daycare.daycareEgg[GetFirstPopulatedEggIndex()].egg);
    //PSF TODO change this to edit IV mode and remove Debug_RandomizeBoxMonInidividualValues
}

static void LoadEggContents(u32 mode)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct Pokemon *mon = &daycare->viewMon;

    ZeroMonData(mon);
    BoxMonToMon(&daycare->daycareEgg[GetFirstPopulatedEggIndex()].egg, mon);
    SetupEggMon(mon);

    ShowPokemonSummaryScreen(mode, mon, 0, 0, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static u32 CountChangedIndividualValues(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    u32 eggIndex = GetFirstPopulatedEggIndex();
    struct BoxPokemon *mon = &daycare->daycareEgg[eggIndex].egg;

    if (AreIndividualValuesDisabled())
        return 0;

    u32 originalIV[NUM_STATS];
    u32 currentIV[NUM_STATS];
    u32 changedCount = 0;

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        currentIV[statIndex] = GetBoxMonData(mon,MON_DATA_HP_IV + statIndex);
        originalIV[statIndex] = daycare->daycareEgg[eggIndex].originalIv[statIndex];

        if (currentIV[statIndex] == originalIV[statIndex])
            continue;

        changedCount++;
    }
    return changedCount;
}

void ResetUnhatchedMonEgg(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    u32 eggIndex = GetFirstPopulatedEggIndex();
    struct BoxPokemon *mon = &daycare->daycareEgg[eggIndex].egg;
    u32 stat = 0;

    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
         stat = daycare->daycareEgg[eggIndex].originalIv[statIndex];
         SetBoxMonData(mon,MON_DATA_HP_IV + statIndex, &stat);
    }
}

static void Debug_RandomizeMonInidividualValues(struct Pokemon *mon)
{
    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        u32 stat = Random() % MAX_PER_STAT_IVS;
        SetMonData(mon,MON_DATA_HP_IV + statIndex,&stat);
    }
}

static void Debug_RandomizeBoxMonInidividualValues(struct BoxPokemon *mon)
{
    for (u32 statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        u32 stat = Random() % MAX_PER_STAT_IVS;
        SetBoxMonData(mon,MON_DATA_HP_IV + statIndex,&stat);
    }
}

static void SetupEggMon(struct Pokemon *mon)
{
    DebugPrintf("SetupEggMon");
    struct Pokemon *temp = &gEnemyParty[1];
    CreateHatchedMon(mon, temp);

    bool32 isEgg = 0x46;
    SetMonData(mon, MON_DATA_IS_EGG, &isEgg);

    u8 name[POKEMON_NAME_LENGTH + 1];
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    StringCopy(name, GetSpeciesName(species));
    SetMonData(mon, MON_DATA_NICKNAME, name);

    GetMonNickname(mon, gStringVar1);

    u16 metLevel = 0;
    SetMonData(mon, MON_DATA_MET_LEVEL, &metLevel);

    u8 metLocation = GetCurrentRegionMapSectionId();
    SetMonData(mon, MON_DATA_MET_LOCATION, &metLocation);

    MonRestorePP(mon);
    CalculateMonStats(mon);
}

void BufferMonNicknameOrEggName(void)
{
    if (GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_IS_EGG) != TRUE)
    {
        BufferMonNickname();
        return;
    }

    u32 species = (GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES));
    StringCopy(gStringVar3, GetSpeciesName(species));
    StringExpandPlaceholders(gStringVar1,COMPOUND_STRING("this {STR_VAR_3} Egg"));
}

void ShowEggNotification(void)
{
    if (GetMapNamePopUpWindowId() != WINDOW_NONE)
        return;

    QuestOverworld(0,0,TRUE);
}
