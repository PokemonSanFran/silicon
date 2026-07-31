#ifndef GUARD_SILICON_BATTLE_FRONTIER_H
#define GUARD_SILICON_BATTLE_FRONTIER_H

#include "constants/silicon_battle_frontier.h"
#include "constants/trainers.h"

struct SiliconFrontierStreaks
{
    u16 currentStreak;
    u16 longestStreak;
    enum SiliconFrontierPartner longestStreakPartner;
    //struct Pokemon longestSteakMons[MAX_FRONTIER_PARTY_SIZE];
};

struct SiliconFrontierTrainers
{
    u16 unlockFlag;
    u8 trainerClass;
    const u8 *trainerName;
    const u8 *introText;
    const u8 *playerWinText;
    const u8 *playerLossText;
    const u16 monSet[SILICON_FRONTIER_MON_SET_SIZE];
};

struct SiliconFrontierData
{
    u16 silverBadge;
    enum SiliconFrontierTrainerIds silverBoss;
    u16 goldBadge;
    enum SiliconFrontierTrainerIds goldBoss;
    const u8 *name;
    mapsec_s16_t mapsec;
};

#endif // GUARD_SILICON_BATTLE_FRONTIER_H
