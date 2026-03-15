#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

#include "pokeball.h" // siliconMerge
#include "pokemon.h" // siliconMerge
u32 ScriptGiveMon(u16 species, u8 level, enum Item item);
u8 ScriptGiveEgg(u16 species);
void CreateScriptedWildMon(u16 species, u8 level, enum Item item);
void CreateScriptedDoubleWildMon(u16 species, u8 level, enum Item item, u16 species2, u8 level2, enum Item item2);
void ScriptSetMonMoveSlot(u8 monIndex, enum Move move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void FaintPlayerParty(void);
void LevelUpAllPokemonTo100(void); // siliconMerge
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);
u32 ScriptGiveMonParameterized(u8 side, u8 slot, u16 species, u8 level, enum Item item, enum PokeBall ball, u8 nature, u8 abilityNum, u8 gender, u16 *evs, u16 *ivs, enum Move *moves, enum ShinyMode shinyMode, bool8 gmaxFactor, enum Type teraType, u8 dmaxLevel); // siliconMerge

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
