#ifndef GUARD_ITEM_USABILITY_H
#define GUARD_ITEM_USABILITY_H

#include "global.h"
#include "item.h"

u8 ItemEligibility_Usable(struct Pokemon *mon, u16 itemId);
u8 ItemEligibility_AbilityCapsule(struct Pokemon *mon, u16 itemId);
u8 ItemEligibility_AbilityPatch(struct Pokemon *mon, u16 itemId);
u8 ItemEligibility_RareCandy(struct Pokemon *mon, u16 itemId);
u8 ItemEligibility_PPUp(struct Pokemon *mon, u16 itemId);
u8 ItemEligibility_Elixir(struct Pokemon *mon, u16 itemId);

#endif // GUARD_ITEM_USABILITY_H
