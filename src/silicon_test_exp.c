#include "global.h"
#include "battle.h"
#include "data.h"
#include "difficulty.h"
#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/trainers.h"
#include "constants/battle_ai.h"
#include "silicon_test_exp.h"

EWRAM_DATA struct SiliconExpTestState gSiliconExpTestState;

const struct Trainer sSiliconTrainers[DIFFICULTY_COUNT][TRAINERS_COUNT] =
{
#include "data/trainers.h"
};

#if TESTING
enum DifficultyLevel GetTrainerTestDifficultyLevel(u16 trainerId)
{
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    if (difficulty == DIFFICULTY_NORMAL)
        return DIFFICULTY_NORMAL;

    if (sSiliconTrainers[difficulty][trainerId].party == NULL)
        return DIFFICULTY_NORMAL;

    return difficulty;
}

const struct Trainer *GetTrainerFromGame(u16 trainerId, u32 difficulty)
{
    return &sSiliconTrainers[difficulty][trainerId];
}
#endif

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
    u32 numMons = 0;
#if TESTING
    enum DifficultyLevel currDifficulty = GetTrainerTestDifficultyLevel(trainerId);
    numMons = sSiliconTrainers[currDifficulty][trainerId].partySize;
#endif
    return numMons;
}

void ExpTest_SetBackMonToNext(void)
{
#if TESTING
    enum DifficultyLevel currDifficulty = GetTrainerTestDifficultyLevel(gSiliconExpTestState.data->trainerIds[gSiliconExpTestState.trainerIndex]);
    const struct TrainerMon *trainerMon = &sSiliconTrainers[currDifficulty][gSiliconExpTestState.data->trainerIds[gSiliconExpTestState.trainerIndex]].party[gSiliconExpTestState.currentMon];


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
#endif
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

void ExpTest_ZeroData(void)
{
    gSiliconExpTestState.expTestExp = 0;
    gSiliconExpTestState.isFinalTurn = FALSE;
    gSiliconExpTestState.currentMon = 0;
    gSiliconExpTestState.trainerIndex = 0;
    gSiliconExpTestState.numMons = 0;
    gSiliconExpTestState.backExp = 0;
    gSiliconExpTestState.useBackMon = FALSE;
    gSiliconExpTestState.isExpTest = FALSE;
    gSiliconExpTestState.data = NULL;
}
