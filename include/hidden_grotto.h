#ifndef GUARD_HIDDENGROTTO_H
#define GUARD_HIDDENGROTTO_H

#include "constants/hidden_grotto.h"

extern const u8 gText_LookIveFound[];
extern const u8 gText_WowHiddenPath[];
extern const u8 gText_OhWhatsThis[];
extern const u8 gText_AmazingHiddenTrail[];
extern const u8 gText_HmmConcealedPath[];
extern const u8 gText_MysteriousRoute[];
extern const u8 gText_OhMyConcealedGrotto[];
extern const u8 gText_IntriguingSecretPassage[];
extern const u8 gText_WhoaHiddenEntrance[];
extern const u8 gText_HiddenTrailEmerges[];
extern const u8 gText_OhWhatDoWeHave[];
extern const u8 gText_ConcealedPathwayAppears[];
extern const u8 gText_MyCuriosityPiqued[];
extern const u8 gText_LookClandestinePassage[];
extern const u8 gText_OhSecretRoute[];
extern const u8 gText_HmmObscuredPath[];
extern const u8 gText_ConcealedEntranceDiscovered[];
extern const u8 gText_WhatsThisCovertPathway[];
extern const u8 gText_IntriguingHiddenTrail[];
extern const u8 gText_HiddenGrottoMaterializes[];

void HiddenGrotto_SetAllSecretFlags(void);
void TrySetHiddenGrottoSecrets(void);

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
