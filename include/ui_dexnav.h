#ifndef GUARD_UI_DEXNAV_H
#define GUARD_UI_DEXNAV_H

#include "dexnav_accessors.h"
#include "constants/ui_dexnav.h"
#include "constants/wild_encounter.h"

struct DexnavSavedData
{
    enum DexnavHabitats habitat;
    u8 cursorPosition;
    u16 species;
    MainCallback savedCallback;
    //void* savedCallback;
};

struct DexnavState
{
    void* savedCallback;
    u8 position;
    enum DexnavMode mode;
    enum DexnavHabitats habitat;
    u8 spriteId[DEXNAV_SPRITEIDS_COUNT];
    u8 numHabitatMons[DEXNAV_HABITAT_COUNT];
    u16 dexnavSpecies[DEXNAV_HABITAT_COUNT][DEXNAV_MAX_SHOWN_MONS];
    bool8 fishingMons[DEXNAV_MAX_SHOWN_MONS];
    struct DexnavSavedData savedData;
};

struct DexnavSpriteSheet
{
  const struct SpriteSheet spriteSheet;
  const struct SpritePalette palette;
};

void CB2_DexnavFromStartMenu(void);
void Dexnav_FadescreenAndExitGracefully(void);
void Dexnav_SetupCallback(void);
void Dexnav_ReturnFromPokedex(struct DexnavSavedData savedData);
void Dexnav_DrawOverworldSearchIcon(void);
void Dexnav_FreeOverworldSpriteResources(void);


#endif // GUARD_UI_DEXNAV_H
