#ifndef GUARD_BATTLE_ARCADE_H
#define GUARD_BATTLE_ARCADE_H

#include "sprite.h"
#include "constants/battle_arcade.h"

void BattleArcade_ResetCursorPositionOnSaveblock(void);
void BattleArcade_ResetCursorSpeed(void);
void BattleArcade_ResetPerformancePoints(void);
void BattleArcade_GenerateItemsToBeGiven(void);
u32 BattleArcade_CalculateBonus(enum SiliconFrontierFacility facility);

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
    bool8 streakEligibility[ARCADE_STREAK_NUM_COUNT];
    bool8 battleEligibility[SILICON_FRONTIER_STREAK_LENGTH_BOSS];
};

#endif //GUARD_BATTLE_ARCADE_H
