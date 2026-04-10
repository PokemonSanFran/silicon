#ifndef GUARD_HIDDENGROTTO_H
#define GUARD_HIDDENGROTTO_H

#include "constants/hidden_grotto.h"

void HiddenGrotto_SetAllSecretFlags(void);
void TrySetHiddenGrottoSecrets(void);
void ResetSavedGrottoMon(void);

struct HiddenGrottoData
{
  u16 routeMap;
  u16 grottoMap;
  u16 flag;
  u16 wildCardItem;
  u16 species[GROTTO_POKEMON_COUNT];
  u8 level[2];
};

#endif // GUARD_HIDDENGROTTO_H
