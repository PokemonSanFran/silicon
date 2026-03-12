#ifndef GUARD_FLYENCOUNTER_H
#define GUARD_FLYENCOUNTER_H

#include "constants/fly_encounter.h"
#include "battle_util.h"

void TryFlyWildEncounter(u8 taskId, void *callback2, void *fieldCallback);
bool8 IfSkyBattleAndOverworldTerrain(enum FieldEffectCases caseId, enum StartingStatus status);

#endif // GUARD_FLYENCOUNTER_H

