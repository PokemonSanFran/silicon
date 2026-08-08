#ifndef GUARD_SILICON_BATTLE_FRONTIER_H
#define GUARD_SILICON_BATTLE_FRONTIER_H

#include "constants/silicon_battle_frontier.h"
#include "constants/trainers.h"
#include "constants/nameplate.h"
u16 SiliconFrontier_GetTrainerClass(enum SiliconFrontierTrainerIds trainerId);
const u8* SiliconFrontier_GetTrainerName(enum SiliconFrontierTrainerIds trainerId);
const u8* SiliconFrontier_GetBattleText(enum SiliconFrontierSpeechStrings stringId, enum SiliconFrontierTrainerIds trainerId);

bool32 SiliconFrontier_ShouldSpeciesBeBlockedFromFrontier(enum Species species);
u32 SiliconFroniter_CountCaughtBlockedSpecies(void);

struct SiliconFrontierStreaks
{
    u16 currentStreak;
    u16 longestStreak;
};

struct SiliconFrontierTrainers
{
    u16 unlockFlag;
    u8 trainerClass;
    u16 objectGfxId;
    const u8 *trainerName;
    const u8* text[SILICON_FRONTIER_TEXT_PLAYER_COUNT];
    const u16 monSet[SILICON_FRONTIER_MON_SET_SIZE];
    enum NameplateSpeaker speaker;
    enum NameplateTail tail;
    enum NameplateEmotes emote;
};

struct SiliconFrontierData
{
    u8 milestone[SILICON_FRONTIER_BOSS_PHASE_COUNT];
    u16 badge[SILICON_FRONTIER_BOSS_PHASE_COUNT];
    const u8 *badgeName[SILICON_FRONTIER_BOSS_PHASE_COUNT];
    enum SiliconFrontierTrainerIds boss[SILICON_FRONTIER_BOSS_PHASE_COUNT];
    const u8 *originalName;
    const u8 *name;
    mapsec_s16_t mapsec;
};

#endif // GUARD_SILICON_BATTLE_FRONTIER_H
