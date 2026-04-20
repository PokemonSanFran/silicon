#ifndef GUARD_UI_DEXNAV_H
#define GUARD_UI_DEXNAV_H

#include "constants/ui_dexnav.h"
#include "constants/wild_encounter.h"

void CB2_DexnavFromStartMenu(void);
void Dexnav_FadescreenAndExitGracefully(void);
void Dexnav_SetupCallback(void);

struct DexnavState
{
    void* savedCallback;
    u8 position;
    enum DexnavMode mode;
    enum DexnavHabitats habitat;
    u8 spriteId[DEXNAV_SPRITEIDS_COUNT];
    u8 cursorSpriteId;
    u8 numHabitatMons[DEXNAV_HABITAT_COUNT];
    u16 dexnavSpecies[DEXNAV_HABITAT_COUNT][DEXNAV_MAX_SHOWN_MONS];
    bool8 fishingMons[DEXNAV_MAX_SHOWN_MONS];
};

struct DexnavSpriteSheet
{
  const struct SpriteSheet spriteSheet;
  const struct SpritePalette palette;
};

#endif // GUARD_UI_DEXNAV_H
