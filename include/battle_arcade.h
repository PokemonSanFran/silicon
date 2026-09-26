#ifndef GUARD_BATTLE_ARCADE_H
#define GUARD_BATTLE_ARCADE_H

#include "sprite.h"

void BattleArcade_ResetCursorPositionOnSaveblock(void);
void BattleArcade_ResetCursorSpeed(void);
void BattleArcade_ResetPerformancePoints(void);
void BattleArcade_GenerateItemsToBeGiven(void);

struct ArcadeSpriteSheet
{
  const struct SpriteSheet spriteSheet;
  const struct SpritePalette palette;
};
#endif //GUARD_BATTLE_ARCADE_H
