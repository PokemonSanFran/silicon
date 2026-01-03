#include "global.h"
#include "test/battle.h"
#include "silicon_test_exp.h"
#include "siliconStarter.h"
#include "gba/isagbprint.h"

#define SiliconExpTest(data, benchPercent) _SiliconExpTest(data, player, benchPercent)
#define SILICON_MINIMUM_BENCH_LEVEL_PERCENT 75

void _SiliconExpTest(const struct SiliconExpTestData *data, struct BattlePokemon *player, u32 benchPercent)
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;

    u32 startLevel = max(GetLowestLevelStarter(),data->startLevel);
    u32 numTrainers = ExpTest_CountTrainers(data);
    gSiliconExpTestState.data = data;
    gSiliconExpTestState.isExpTest = TRUE;
    u32 species = ExpTest_GetSlowestMonForBracket(startLevel, data->targetLevel);
    for (u32 i = 0; i < numTrainers; i++) {
        PARAMETRIZE { }
    }

    GIVEN {
        PLAYER(species) { Level(startLevel); Speed(100); Moves(MOVE_CELEBRATE, MOVE_EXP_TEST_SETUP, MOVE_EXP_TEST_FINISH); }
        PLAYER(species) { Level(startLevel); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_EXP_TEST); Speed(1); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_EXP_TEST); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_EXP_TEST_SETUP); }
        for (u32 i = 0; i < PARTY_SIZE; i++) {
            TURN { }
        }
        TURN { MOVE(player, MOVE_EXP_TEST_FINISH); }
    } FINALLY {
        gSiliconExpTestState.isExpTest = FALSE;
        u32 finalExp = gSiliconExpTestState.expTestExp;
        u32 targetFrontExp = ExpTest_GetTargetExp(species, data->targetLevel);
        u32 finalExpBack = gSiliconExpTestState.backExp;
        u32 targetBackExp = ExpTest_GetTargetExp(species, startLevel) + benchPercent * (ExpTest_GetTargetExp(species, data->targetLevel) - ExpTest_GetTargetExp(species, startLevel)) / 100;

        if (finalExp < targetFrontExp)
        {
            u32 missingExp = targetFrontExp - finalExp;
            u32 expToGet = targetFrontExp - ExpTest_GetTargetExp(species, startLevel);
            u32 fracProgress = 100 * (finalExp - ExpTest_GetTargetExp(species, startLevel)) / expToGet;
            Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__, ":L%s:%d: Active Pokemon need %d more exp (0.%d to goal)", gTestRunnerState.test->filename, __LINE__, missingExp, fracProgress);
        }

        if (finalExpBack < targetBackExp)
        {
            u32 missingExp = targetBackExp - finalExpBack;
            u32 expToGet = targetBackExp - ExpTest_GetTargetExp(species, startLevel);
            u32 fracProgress = 100 * (finalExpBack - ExpTest_GetTargetExp(species, startLevel)) / expToGet;
            Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__, ":L%s:%d: Benched Pokemon need %d more exp (0.%d to goal of 0.%d of level %d to %d)", gTestRunnerState.test->filename, __LINE__, missingExp, fracProgress, benchPercent, startLevel, data->targetLevel);
        }
    }
}

//  Test parameters defined here

static const struct SiliconExpTestData sBelenTrainers =
{
    .startLevel = MIN_LEVEL,
    .targetLevel = LEVEL_CAP_VALUE_0,
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
        TRAINER_032E8AC9,
        TRAINER_0389363C,
        TRAINER_040CEA33,
        TRAINER_NONE
    },
};

static const struct SiliconExpTestData sKai_NewassholeappearsTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_0,
    .targetLevel = LEVEL_CAP_VALUE_1,
    .trainerIds =
    {
        TRAINER_0465BF77,
        TRAINER_0467DF00,
        TRAINER_04687C53,
        TRAINER_048D5D99,
        TRAINER_04E334E9,
        TRAINER_04A59E40,
        TRAINER_05BDEABF,
        TRAINER_06400A0C,
        TRAINER_070F6125,
        TRAINER_NONE
    },
};

static const struct SiliconExpTestData sShinzo_GymTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_1,
    .targetLevel = LEVEL_CAP_VALUE_2,
    .trainerIds =
    {
        TRAINER_031A849F,
        TRAINER_041FD20E,
        TRAINER_045FDD44,
        TRAINER_068B06CE,
        TRAINER_06BE2D1B,
        TRAINER_06C68007,
        TRAINER_06D2BD08,
        TRAINER_07D063A5,
        TRAINER_09AEC824,
        TRAINER_09B7B6C8,
        TRAINER_0A542D33,
        TRAINER_NONE
    },
};
/*
static const struct SiliconExpTestData sCharlotte_OldassholeappearsTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_2,
    .targetLevel = LEVEL_CAP_VALUE_3,
    .trainerIds =
    {
        TRAINER_NONE
    },
};*/

static const struct SiliconExpTestData sEmrys_GymTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_3,
    .targetLevel = LEVEL_CAP_VALUE_4,
    .trainerIds =
    {
        TRAINER_0AF40D0B,
        TRAINER_0B48C7D0,
        TRAINER_0C95C833,
        TRAINER_0AAB38A6,
        TRAINER_0C543C80,
        TRAINER_0A8B9F88,
        TRAINER_0A8FC005,
        TRAINER_0C0A9B2F,
        TRAINER_NONE
    },
};
/*
static const struct SiliconExpTestData sKai_AssholeshomeTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_4,
    .targetLevel = LEVEL_CAP_VALUE_5,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sKauna_GymTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_5,
    .targetLevel = LEVEL_CAP_VALUE_6,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sTalaTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_6,
    .targetLevel = LEVEL_CAP_VALUE_7,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sNeriene_GymTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_7,
    .targetLevel = LEVEL_CAP_VALUE_8,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sCharlotte_BeachbattleTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_8,
    .targetLevel = LEVEL_CAP_VALUE_9,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sDimu_GymTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_9,
    .targetLevel = LEVEL_CAP_VALUE_10,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sBd_GymTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_10,
    .targetLevel = LEVEL_CAP_VALUE_11,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sKai_Battle8Trainers =
{
    .startLevel = LEVEL_CAP_VALUE_11,
    .targetLevel = LEVEL_CAP_VALUE_12,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sAmi_GymTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_12,
    .targetLevel = LEVEL_CAP_VALUE_13,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sKai_WhyareyouhelpingthemTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_13,
    .targetLevel = LEVEL_CAP_VALUE_15,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sLeagueopponent1Trainers =
{
    .startLevel = LEVEL_CAP_VALUE_15,
    .targetLevel = LEVEL_CAP_VALUE_16,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sLeagueopponent2Trainers =
{
    .startLevel = LEVEL_CAP_VALUE_15,
    .targetLevel = LEVEL_CAP_VALUE_16,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sLeagueopponent3Trainers =
{
    .startLevel = LEVEL_CAP_VALUE_15,
    .targetLevel = LEVEL_CAP_VALUE_16,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sLeagueopponent4Trainers =
{
    .startLevel = LEVEL_CAP_VALUE_16
        .targetLevel = LEVEL_CAP_VALUE_17
        .trainerIds =
        {
            TRAINER_NONE
        },
};
static const struct SiliconExpTestData sKai_FinalsTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_16,
    .targetLevel = LEVEL_CAP_VALUE_17,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sKai_LetsgrablunchTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_17,
    .targetLevel = LEVEL_CAP_VALUE_18,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sImelda_RestorationTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_18,
    .targetLevel = LEVEL_CAP_VALUE_19,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sKai_LetsburnthismotherdownTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_19,
    .targetLevel = LEVEL_CAP_VALUE_20,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sAdaora_HowdisappointingTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_19,
    .targetLevel = LEVEL_CAP_VALUE_20,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sAlcmene_ManhuntTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_19,
    .targetLevel = LEVEL_CAP_VALUE_20,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sDianthaTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_20,
    .targetLevel = LEVEL_CAP_VALUE_21,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sKeiying_WarehouseriskTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_21,
    .targetLevel = LEVEL_CAP_VALUE_22,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sArriba_CeoTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_21,
    .targetLevel = LEVEL_CAP_VALUE_22,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sBuzzr_CeoTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_21,
    .targetLevel = LEVEL_CAP_VALUE_22,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sPresto_CeoTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_21,
    .targetLevel = LEVEL_CAP_VALUE_22,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sExcadrillTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_22,
    .targetLevel = LEVEL_CAP_VALUE_23,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sRamesh_IminTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_23,
    .targetLevel = LEVEL_CAP_VALUE_24,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sCharlotte_IminTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_24,
    .targetLevel = LEVEL_CAP_VALUE_25,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sAdelaide_YoucantstopmeTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_25,
    .targetLevel = LEVEL_CAP_VALUE_26,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
static const struct SiliconExpTestData sAdelaide_WecanstopyouactuallyTrainers =
{
    .startLevel = LEVEL_CAP_VALUE_25,
    .targetLevel = LEVEL_CAP_VALUE_26,
    .trainerIds =
    {
        TRAINER_NONE
    },
};
*/

//  Actual tests here

AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Belen")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sBelenTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kai Newassholeappears")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKai_NewassholeappearsTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}

AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Shinzo Gym")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sShinzo_GymTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
/*
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Charlotte Oldassholeappears")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sCharlotte_OldassholeappearsTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}*/

AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Emrys Gym")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sEmrys_GymTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
/*
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kai Assholeshome")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKai_AssholeshomeTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kauna Gym")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKauna_GymTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Tala")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sTalaTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Neriene Gym")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sNeriene_GymTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Charlotte Beachbattle")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sCharlotte_BeachbattleTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Dimu Gym")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sDimu_GymTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: BD Gym")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sBd_GymTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kai Battle8")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKai_Battle8Trainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Ami Gym")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sAmi_GymTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kai Whyareyouhelpingthem")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKai_WhyareyouhelpingthemTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Leagueopponent1")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sLeagueopponent1Trainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Leagueopponent2")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sLeagueopponent2Trainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Leagueopponent3")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sLeagueopponent3Trainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Leagueopponent4")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sLeagueopponent4Trainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kai Finals")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKai_FinalsTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kai Letsgrablunch")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKai_LetsgrablunchTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Imelda Restoration")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sImelda_RestorationTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Kai Letsburnthismotherdown")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKai_LetsburnthismotherdownTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Adaora Howdisappointing")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sAdaora_HowdisappointingTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Alcmene Manhunt")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sAlcmene_ManhuntTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Diantha")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sDianthaTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Keiying Warehouserisk")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sKeiying_WarehouseriskTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Arriba Ceo")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sArriba_CeoTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Buzzr Ceo")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sBuzzr_CeoTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Presto Ceo")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sPresto_CeoTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Excadrill")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sExcadrillTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Ramesh Imin")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sRamesh_IminTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Charlotte Imin")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sCharlotte_IminTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Adelaide Youcantstopme")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sAdelaide_YoucantstopmeTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
AI_SINGLE_BATTLE_TEST("Silicon Exp Test: Adelaide Wecanstopyouactually")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    SiliconExpTest(&sAdelaide_WecanstopyouactuallyTrainers, SILICON_MINIMUM_BENCH_LEVEL_PERCENT);
}
*/
