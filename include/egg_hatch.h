#ifndef GUARD_EGG_HATCH_H
#define GUARD_EGG_HATCH_H

void ScriptHatchMon(void);
void EggHatch(void);
u16 CountPartyAliveNonEggMons(void);
void CreateHatchedMon(struct Pokemon *egg, struct Pokemon *temp); // siliconDaycare
void AddHatchedMonToParty(u8 id); // siliconDaycare

#endif // GUARD_EGG_HATCH_H
