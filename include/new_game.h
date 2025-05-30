#ifndef GUARD_NEW_GAME_H
#define GUARD_NEW_GAME_H

extern bool8 gDifferentSaveFile;
// Shortcuts some randomness in berry_blender.c, and enables debug printing
// in contest.c.
extern bool8 gEnableContestDebugging;

void SetTrainerId(u32 trainerId, u8 *dst);
u32 GetTrainerId(u8 *trainerId);
void CopyTrainerId(u8 *dst, u8 *src);
void NewGameInitData(void);
void ResetMenuAndMonGlobals(void);
void Sav2_ClearSetDefault(void);
// Start bootSequence
void GivePlayerAllTechnicalMachines(void);
void GivePlayerHealingItems(void);
void SetInitalMoney(void);
void ResetBagAndParty(void);
// End bootSequence
void InitPlayerTrainerId(void); // siliconMerge

#endif // GUARD_NEW_GAME_H
