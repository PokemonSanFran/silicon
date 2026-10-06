#ifndef GUARD_BATTLE_ARCADE_H
#define GUARD_BATTLE_ARCADE_H

#include "sprite.h"
#include "constants/battle_arcade.h"

void BattleArcade_ResetCursorPositionOnSaveblock(void);
void BattleArcade_ResetCursorSpeed(void);
void BattleArcade_ResetPerformancePoints(void);
void BattleArcade_GenerateItemsToBeGiven(void);
u32 BattleArcade_CalculateBonus(enum SiliconFrontierFacility facility);
bool8 ShouldUseNormalFogForArcade(void);
void BattleArcade_ResetGiveEvent(void);
u32 Script_BattleArcade_LoadEventTilesAndCreateSprite(u32 x, u32 y, enum ArcadeEvents event);

struct ArcadeSpriteSheet
{
  const struct SpriteSheet spriteSheet;
  const struct SpritePalette palette;
};

struct ArcadeEventInfo
{
    const u8 *const name;
    const bool32 (*eventFunc)(enum ArcadeImpactTypes);
    enum ArcadeImpactTypes type;
    const union AnimCmd * const animTable;
};

#endif //GUARD_BATTLE_ARCADE_H
