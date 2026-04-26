#ifndef GUARD_UI_DEXNAV_H
#define GUARD_UI_DEXNAV_H

#include "dexnav_accessors.h"
#include "move.h"
#include "item.h"
#include "dexnav.h"
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
void CreateDexnavWildMon(u32 species, u32 potential, u32 level, u32 abilityNum, enum Item item, enum Move *moves);
bool8 Dexnav_CalculateShinyRolls(u32 streak);
u32 Dexnav_CalculateLevel(u32 species, enum EncounterType environment);
void Dexnav_GenerateMoveset(u32 species, u32 insight, u32 level, enum Move *moves);
enum Item Dexnav_CalculateItem(u32 species, u32 insight);
u8 Dexnav_CalculateAbilityNum(u32 species, u32 insight);
u8 Dexnav_CalculatePotential(u32 insight);
void Dexnav_IncrementSpeciesSearchLevel(u32 origSpecies);
void Dexnav_StartFieldEffect(void);
  
#endif // GUARD_UI_DEXNAV_H
