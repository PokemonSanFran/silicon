#include "global.h"
#include "battle.h"
#include "data.h"
#include "difficulty.h"
#include "silicon_test_exp.h"

EWRAM_DATA struct SiliconExpTestState gSiliconExpTestState;

u32 ExpTest_CountTrainers(const struct SiliconExpTestData *data)
{
    u32 count = 0;
    while (data->trainerIds[count] != TRAINER_NONE)
        count++;
    return count;
}

u32 ExpTest_GetNumMonsForTrainer(u32 trainerId)
{
    u32 numMons;
    enum DifficultyLevel currDifficulty = GetTrainerDifficultyLevel(trainerId);
    numMons = gTrainers[currDifficulty][trainerId].partySize;
    return numMons;
}

void ExpTest_SetBackMonToNext(void)
{
    enum DifficultyLevel currDifficulty = GetTrainerDifficultyLevel(gSiliconExpTestState.data->trainerIds[gSiliconExpTestState.trainerIndex]);
    const struct TrainerMon *trainerMon = &gTrainers[currDifficulty][gSiliconExpTestState.data->trainerIds[gSiliconExpTestState.trainerIndex]].party[gSiliconExpTestState.currentMon];

    u32 species;
    u32 level;
    if (gSiliconExpTestState.currentMon < gSiliconExpTestState.numMons)
    {
        species = trainerMon->species;
        level = trainerMon->lvl;
    }
    else
    {
        species = SPECIES_WYNAUT;
        level = MAX_LEVEL;
        u32 move = MOVE_CELEBRATE;
        SetMonData(&gEnemyParty[(1 + gSiliconExpTestState.currentMon) % 2], MON_DATA_MOVE1, &move);
    }

    SetMonData(&gEnemyParty[(1 + gSiliconExpTestState.currentMon) % 2], MON_DATA_NICKNAME, gSpeciesInfo[species].speciesName);

    SetMonData(&gEnemyParty[(1 + gSiliconExpTestState.currentMon) % 2], MON_DATA_SPECIES, &species);
    SetMonData(&gEnemyParty[(1 + gSiliconExpTestState.currentMon) % 2], MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[species].growthRate][level]);
    SetMonData(&gEnemyParty[(1 + gSiliconExpTestState.currentMon) % 2], MON_DATA_LEVEL, &level);
    gEnemyParty[(1 + gSiliconExpTestState.currentMon) % 2].level = level;
    gSiliconExpTestState.currentMon++;
}

u32 ExpTest_GetSlowestMonForBracket(u32 startLevel, u32 endLevel)
{
    u32 erraticExp = gExperienceTables[GROWTH_ERRATIC][endLevel] - gExperienceTables[GROWTH_ERRATIC][startLevel];
    u32 mediumSlowExp = gExperienceTables[GROWTH_MEDIUM_SLOW][endLevel] - gExperienceTables[GROWTH_MEDIUM_SLOW][startLevel];
    u32 slowExp = gExperienceTables[GROWTH_SLOW][endLevel] - gExperienceTables[GROWTH_SLOW][startLevel];
    u32 fluctuatingExp = gExperienceTables[GROWTH_FLUCTUATING][endLevel] - gExperienceTables[GROWTH_FLUCTUATING][startLevel];

    if (erraticExp >= mediumSlowExp && erraticExp >= slowExp && erraticExp >= fluctuatingExp)
        return SPECIES_TESTING_ERRATIC;

    if (mediumSlowExp >= erraticExp && mediumSlowExp >= slowExp && mediumSlowExp >= fluctuatingExp)
        return SPECIES_TESTING_MEDIUM_SLOW;

    if (slowExp >= erraticExp && slowExp >= mediumSlowExp && slowExp >= fluctuatingExp)
        return SPECIES_TESTING_SLOW;

    return SPECIES_TESTING_FLUCTUATING;
}

u32 ExpTest_GetTargetExp(u32 species, u32 targetLevel)
{
    return gExperienceTables[gSpeciesInfo[species].growthRate][targetLevel];
}
