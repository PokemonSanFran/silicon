#ifndef GUARD_EGG_HATCH_H
#define GUARD_EGG_HATCH_H

void ScriptHatchMon(void);
bool8 CheckDaycareMonReceivedMail(void);
void EggHatch(void);
u8 GetEggCyclesToSubtract(void);
u16 CountPartyAliveNonEggMons(void);
void CreateHatchedMon(struct Pokemon *egg, struct Pokemon *temp); // siliconDaycare

#endif // GUARD_EGG_HATCH_H
