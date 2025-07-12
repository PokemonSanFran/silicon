#include "global.h"
#include "test/battle.h"
#include "silicon_test_exp.h"
#include "gba/isagbprint.h"

#define SiliconExpTest(data, benchPercent) _SiliconExpTest(data, player, benchPercent)

void _SiliconExpTest(const struct SiliconExpTestData *data, struct BattlePokemon *player, u32 benchPercent)
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;

    u32 numTrainers = ExpTest_CountTrainers(data);
    gSiliconExpTestState.data = data;
    u32 species = ExpTest_GetSlowestMonForBracket(data->startLevel, data->targetLevel);
    u32 numMons = 0;
    for (u32 i = 0; i < numTrainers; i++) {
        PARAMETRIZE { numMons = ExpTest_GetNumMonsForTrainer(data->trainerIds[i]); }
    }

    GIVEN {
        PLAYER(species) { Level(data->startLevel); Speed(100); Moves(MOVE_CELEBRATE, MOVE_EXP_TEST_SETUP, MOVE_EXP_TEST_FINISH); }
        PLAYER(species) { Level(data->startLevel); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_EXP_TEST); Speed(1); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_EXP_TEST); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_EXP_TEST_SETUP); }
        for (u32 i = 0; i < numMons; i++) {
            TURN { }
        }
        TURN { MOVE(player, MOVE_EXP_TEST_FINISH); }
    } FINALLY {
        u32 finalExp = gSiliconExpTestState.expTestExp;
        u32 targetFrontExp = ExpTest_GetTargetExp(species, data->targetLevel);
        u32 finalExpBack = gSiliconExpTestState.backExp;
        u32 targetBackExp = ExpTest_GetTargetExp(species, data->startLevel) + benchPercent * (ExpTest_GetTargetExp(species, data->targetLevel) - ExpTest_GetTargetExp(species, data->startLevel)) / 100;

        if (finalExp < targetFrontExp)
        {
            u32 missingExp = targetFrontExp - finalExp;
            u32 expToGet = targetFrontExp - ExpTest_GetTargetExp(species, data->startLevel);
            u32 fracProgress = 100 * (finalExp - ExpTest_GetTargetExp(species, data->startLevel)) / expToGet;
            Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__, ":L%s:%d: Active Pokemon need %d more exp (0.%d to goal)", gTestRunnerState.test->filename, __LINE__, missingExp, fracProgress);
        }

        if (finalExpBack < targetBackExp)
        {
            u32 missingExp = targetBackExp - finalExpBack;
            u32 expToGet = targetBackExp - ExpTest_GetTargetExp(species, data->startLevel);
            u32 fracProgress = 100 * (finalExpBack - ExpTest_GetTargetExp(species, data->startLevel)) / expToGet;
            Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__, ":L%s:%d: Benched Pokemon need %d more exp (0.%d to goal of 0.%d of level %d to %d)", gTestRunnerState.test->filename, __LINE__, missingExp, fracProgress, benchPercent, data->startLevel, data->targetLevel);
        }
    }
}

//  Test parameters defined here

static const struct SiliconExpTestData sTestData =
{
    .startLevel = 18,
    .targetLevel = 25,
    .trainerIds =
    {
        TRAINER_00317DFA,
        TRAINER_0049EFE8,
        TRAINER_023957DE,
        TRAINER_006E7EFD,
        TRAINER_007F06A5,
        TRAINER_01103D48,
        TRAINER_0272920D,
        TRAINER_022A53A0,
        TRAINER_012ED80D,
        TRAINER_01E6E96E,
        TRAINER_0092D526,
        TRAINER_00C593A8,
        TRAINER_01E7C79B,
        TRAINER_01C7AF3F,
        TRAINER_02EEB783,
        TRAINER_026E91A6,
        TRAINER_029E0EF0,
        TRAINER_00E46F7D,
        TRAINER_NONE
    },
};

//  Actual tests here

AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Belen")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sTestData, 75);
}
