#ifndef GUARD_SILICON_BATTLE_FRONTIER_H
#define GUARD_SILICON_BATTLE_FRONTIER_H

#include "constants/silicon_battle_frontier.h"

struct SiliconFrontierStreaks
{
    u16 currentStreak;
    u16 longestStreak;
    enum SiliconFrontierPartner longestStreakPartner;
};

#endif // GUARD_SILICON_BATTLE_FRONTIER_H
