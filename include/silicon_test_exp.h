#ifndef GUARD_SILICON_TEST_EXP
#define GUARD_SILICON_TEST_EXP

#include "global.h"

extern struct SiliconExpTestState gSiliconExpTestState;

struct SiliconExpTestData
{
    u8 startLevel;
    u8 targetLevel;
    u32 trainerIds[];
};

struct SiliconExpTestState
{
    u32 expTestExp:21;
    u32 isFinalTurn:1;
    u32 currentMon:3;
    u32 trainerIndex:7;
    u32 numMons:3;
    u32 backExp:21;
    u32 useBackMon:1;
    u32 isExpTest:1;
    u32 unused:7;
    const struct SiliconExpTestData *data;
};

u32 ExpTest_CountTrainers(const struct SiliconExpTestData *data);
u32 ExpTest_GetNumMonsForTrainer(u32 trainerId);
void ExpTest_SetBackMonToNext(void);
u32 ExpTest_GetSlowestMonForBracket(u32 startLevel, u32 endLevel);

u32 ExpTest_GetTargetExp(u32 species, u32 targetLevel);

#endif
