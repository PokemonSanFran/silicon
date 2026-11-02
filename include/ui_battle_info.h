#ifndef GUARD_BATTLE_INFO_H
#define GUARD_BATTLE_INFO_H

#include "main.h"

void BattleInfo_Init(u32, MainCallback);
void BattleInfo_ResetSavedState(void);
enum BattleTrainer BattleInfo_GetBattleTrainer(void);
const u8 *BattleInfo_GetBattleTrainerName(void);

#endif // GUARD_BATTLE_INFO_H
