#include "global.h"
#include "test/battle.h"
#include "silicon_test_exp.h"
#include "gba/isagbprint.h"

#define SiliconExpTest(data) _SiliconExpTest(data, player)

void _SiliconExpTest(const struct SiliconExpTestData *data, struct BattlePokemon *player)
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
        PLAYER(species) { Level(data->startLevel); Speed(100); Moves(MOVE_CELEBRATE, MOVE_EXP_TEST_SETUP, MOVE_EXP_TEST_FINISH); }
        PLAYER(species) { Level(data->startLevel); Speed(100); Moves(MOVE_CELEBRATE, MOVE_EXP_TEST_SETUP, MOVE_EXP_TEST_FINISH); }
        PLAYER(species) { Level(data->startLevel); Speed(100); Moves(MOVE_CELEBRATE, MOVE_EXP_TEST_SETUP, MOVE_EXP_TEST_FINISH); }
        PLAYER(species) { Level(data->startLevel); Speed(100); Moves(MOVE_CELEBRATE, MOVE_EXP_TEST_SETUP, MOVE_EXP_TEST_FINISH); }
        PLAYER(species) { Level(data->startLevel); Speed(100); Moves(MOVE_CELEBRATE, MOVE_EXP_TEST_SETUP, MOVE_EXP_TEST_FINISH); }
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
        EXPECT_GT(finalExp, ExpTest_GetTargetExp(species, data->targetLevel));
        for (u32 i = 0; i < PARTY_SIZE; i++)
            DebugPrintf("mon %d %d",i,GetMonData(&gPlayerParty[i],MON_DATA_EXP));
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

    SiliconExpTest(&sTestData);
}
