#ifndef GUARD_SILICON_BATTLE_FRONTIER_H
#define GUARD_SILICON_BATTLE_FRONTIER_H

#include "constants/silicon_battle_frontier.h"

struct SiliconFrontierStreaks
{
    u16 currentStreak;
    u16 longestStreak;
    enum SiliconFrontierPartner longestStreakPartner;
    //struct Pokemon longestSteakMons[MAX_FRONTIER_PARTY_SIZE];
};

#endif // GUARD_SILICON_BATTLE_FRONTIER_H
