#ifndef GUARD_SILICON_STARTER_H
#define GUARD_SILICON_STARTER_H

#include "constants/global.h"
#include "constants/pokemon.h"
#include "constants/moves.h"
#include "constants/siliconStarter.h"

struct StarterMonTemplate
{
    u16 species;
    u8 level;
    u16 item;
    u16 ball;
    u8 nature;
    u8 abilityNum;
    u8 gender;
    u8 evs[NUM_STATS];
    u8 ivs[NUM_STATS];
    u16 moves[MAX_MON_MOVES];
    u8 friendship;
    u8 nextExpPercent;
};

void GiveSiliconStarter(enum SiliconStarters slot);
void Script_ShowSiliconStarter(void);
u32 GetStarterFromSlot(enum SiliconStarters starterSlot);
u32 GetSlotFromStarter(u32 species);
void MoveStarterToParty(void);
void GenerateDummyPartyMembers(void);
void AddStartersToBox(void);
bool32 ShouldMonBeShiny(u32 personality, u32 trainerId);
u8 GetLowestLevelStarter(void);

#endif // GUARD_SILICON_STARTER_H
