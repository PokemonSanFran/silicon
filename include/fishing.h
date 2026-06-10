#ifndef GUARD_FISHING_H
#define GUARD_FISHING_H

void StartFishing(u8 rod);
void UpdateChainFishingStreak(void);
u32 CalculateChainFishingShinyRolls(void);
bool32 ShouldUseFishingEnvironmentInBattle();
void ResetChainFishingStreak(void); // fishingUpdate
bool8 Quest_TeachATrainerToFish_ArePerfectCastComponentsSet(void); // siliconQuests

#endif // GUARD_FISHING_H
