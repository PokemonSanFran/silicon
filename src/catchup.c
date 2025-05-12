#include "global.h"
#include "catchup.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"

u32 GetMonLevel(u32);
bool32 ShouldGainCatchUpStepExperience(u32, u32);
u32 ConvertGrowthRateToConstant(u32);
u32 GetHighestLevelMonInParty(void);
u32 CalculateExperienceToAdd(u32);
void DoCatchUpStepExperience(u32);
void DoCatchUpEffortValues(u32);
void DoCatchUpMehanics(u32);

void CatchUpStepExperience(void)
{
    u32 highestLevel = GetHighestLevelMonInParty();
    u32 partyIndex = 0;
    u16 *stepsPointer = GetVarPointer(VAR_CATCHUP_EXPERIENCE_STEP_COUNTER);

    (*stepsPointer)++;
    (*stepsPointer) %= NUM_STEPS_CATCHUP_CYCLE;

    if (*stepsPointer)
        return;

    for (partyIndex = 0; partyIndex < PARTY_SIZE; partyIndex++)
    {
        if (ShouldGainCatchUpStepExperience(highestLevel,partyIndex))
            DoCatchUpMehanics(partyIndex);
    }
}

u32 GetMonLevel(u32 partyIndex)
{
    if (!GetMonData(&gPlayerParty[partyIndex], MON_DATA_HP))
        return 0;

    if (GetMonData(&gPlayerParty[partyIndex], MON_DATA_IS_EGG))
        return 0;

    return GetMonData(&gPlayerParty[partyIndex], MON_DATA_LEVEL);
}

bool32 ShouldGainCatchUpStepExperience(u32 highestLevel, u32 partyIndex)
{
    u32 monLevel = GetMonLevel(partyIndex);

    if (!monLevel)
        return FALSE;

    if (monLevel == MAX_LEVEL)
        return FALSE;

    if (monLevel >= highestLevel)
        return FALSE;

    return TRUE;
}

u32 GetRequriedExperience(u32 partyIndex)
{
    u32 level = GetMonData(&gPlayerParty[partyIndex], MON_DATA_LEVEL);
    u32 species;
    //u32 exp = GetMonData(&gPlayerParty[partyIndex], MON_DATA_EXP);

    if (level >= MAX_LEVEL)
        return 0;
    species = GetMonData(&gPlayerParty[partyIndex], MON_DATA_SPECIES);

    return gExperienceTables[gSpeciesInfo[species].growthRate][level + 1] - gExperienceTables[gSpeciesInfo[species].growthRate][level];
    //return gExperienceTables[gSpeciesInfo[species].growthRate][level + 1] - exp; //used to return the experience remaining now it just returns total EXP needed for this level
}

u32 ConvertGrowthRateToConstant(u32 partyIndex)
{
    u32 species = GetMonData(&gPlayerParty[partyIndex], MON_DATA_SPECIES);
    u32 growthRate = gSpeciesInfo[species].growthRate;
    u32 maxEXP = gExperienceTables[growthRate][MAX_LEVEL];

    return (maxEXP / (maxEXP / IDEAL_NUM_CATCHUP_CYCLES));

/*
 * original values from spec
    switch (growthRate)
    {
        case GROWTH_ERRATIC: return 21;
        case GROWTH_FAST: return 47;
        case GROWTH_MEDIUM_FAST: return 63;
        case GROWTH_MEDIUM_SLOW: return 67;
        case GROWTH_SLOW: return 75;
        case GROWTH_FLUCTUATING: return 88;
    }

    return 21;
    */
}

u32 GetHighestLevelMonInParty(void)
{
    u32 highestLevel = 0;
    u32 currentLevel,partyIndex;

    for (partyIndex = 0; partyIndex < PARTY_SIZE; partyIndex++)
    {
        currentLevel = GetMonData(&gPlayerParty[partyIndex], MON_DATA_LEVEL);
        if (currentLevel > highestLevel)
            highestLevel = currentLevel;
    }
    return highestLevel;
}

u32 CalculateExperienceToAdd(u32 partyIndex)
{
    u32 experience = GetRequriedExperience(partyIndex);
    u32 growthRateDivisor = ConvertGrowthRateToConstant(partyIndex);

    return (experience / growthRateDivisor);
}

void DoCatchUpStepExperience(u32 partyIndex)
{
    u32 originalExp = GetMonData(&gPlayerParty[partyIndex], MON_DATA_EXP);
    u32 newExp = originalExp + CalculateExperienceToAdd(partyIndex);

    SetMonData(&gPlayerParty[partyIndex], MON_DATA_EXP, &newExp);
    CalculateMonStats(&gPlayerParty[partyIndex]);
}

bool32 ShouldGainCatchUpEffortValues(u32 partyIndex)
{
    u32 currentTotal = GetMonEVCount(&gPlayerParty[partyIndex]);

    return (currentTotal < MAX_TOTAL_EVS);
}

void DoCatchUpMehanics(u32 partyIndex)
{
    DoCatchUpStepExperience(partyIndex);

    if (ShouldGainCatchUpEffortValues(partyIndex))
        DoCatchUpEffortValues(partyIndex);
}

void DoCatchUpEffortValues(u32 partyIndex)
{
    u32 statIndex, stat, effortValue;

    //PSF TODO replace this for loop with just giving the mon an unallocated EV

    for (statIndex = 0; statIndex < NUM_STATS; statIndex++)
    {
        stat = MON_DATA_HP_EV + statIndex;

        effortValue = GetMonData(&gPlayerParty[partyIndex], stat);

        if (effortValue >= MAX_PER_STAT_EVS)
            continue;

        effortValue++;

        SetMonData(&gPlayerParty[partyIndex], stat, &effortValue);
        CalculateMonStats(&gPlayerParty[partyIndex]);
        break;
    }
}
