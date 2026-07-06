#ifndef GUARD_FLYENCOUNTER_H
#define GUARD_FLYENCOUNTER_H

#include "constants/fly_encounter.h"
#include "battle_util.h"
#include "data.h"

void TryFlyWildEncounter(u8 taskId, void *callback2, void *fieldCallback);
bool8 IfSkyBattleAndOverworldTerrain(enum FieldEffectCases caseId, struct StartingStatuses startingStatus);

#endif // GUARD_FLYENCOUNTER_H

