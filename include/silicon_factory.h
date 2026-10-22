#ifndef GUARD_SILICON_FACTORY_H
#define GUARD_SILICON_FACTORY_H

void SiliconFrontier_SaveNextMonIdsToTemp(u32 slot, u32 monId);
void SiliconFrontier_CopyTempVarsToLast(void);
void SiliconFrontier_ResetNextMonsTemp(void);

#endif //GUARD_SILICON_FACTORY_H
