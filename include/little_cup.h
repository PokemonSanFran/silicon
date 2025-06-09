#ifndef GUARD_LITTLECUP_H
#define GUARD_LITTLECUP_H
void PreparePartyForLittleCupBattle(void);
bool8 CheckPlayerLittleCupEligibility(void);
bool32 IsCurrentBattleLittleCup(void);
bool32 WasPreviousBattleLittleCup(void);
void SetTemporaryLittleCupVar(void);
void ResetTemporaryLittleCupVar(void);
#endif // GUARD_LITTLECUP_H
