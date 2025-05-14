#ifndef GUARD_CATCHUP_STEPS_H
#define GUARD_CATCHUP_STEPS_H

void CatchUpStepExperience(void);
u32 GetRequriedExperience(u32);

#define IDEAL_NUM_ERRATIC_LEVEL_UP 375 // How many steps should it take an Erratic Pokemon to Level Up?
#define NUM_STEPS_CATCHUP_CYCLE    25
#define IDEAL_NUM_CATCHUP_CYCLES   (IDEAL_NUM_ERRATIC_LEVEL_UP / NUM_STEPS_CATCHUP_CYCLE)

#endif // GUARD_CATCHUP_STEPS_H
