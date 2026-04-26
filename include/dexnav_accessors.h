#ifndef GUARD_DEXNAV_ACCESSORS_H
#define GUARD_DEXNAV_ACCESSORS_H

bool8 Dexnav_IsSearchActive(void);
u16 Dexnav_GetOverworldSpecies(void);
void Dexnav_SetOverworldSpecies(u16 species);
u16 Dexnav_GetOverworldHeldItem(void);
void Dexnav_SetOverworldHeldItem(u16 heldItem);
u8 Dexnav_GetOverworldAbilityNum(void);
void Dexnav_SetOverworldAbilityNum(u8 abilityNum);
u8 Dexnav_GetOverworldPotential(void);
void Dexnav_SetOverworldPotential(u8 potential);
u8 Dexnav_GetOverworldSearchLevel(void);
void Dexnav_SetOverworldSearchLevel(u8 searchLevel);
u8 Dexnav_GetOverworldMonLevel(void);
void Dexnav_SetOverworldMonLevel(u8 monLevel);
u8 Dexnav_GetOverworldProximity(void);
void Dexnav_SetOverworldProximity(u8 proximity);
u8 Dexnav_GetOverworldEnvironment(void);
void Dexnav_SetOverworldEnvironment(u8 environment);
s16 Dexnav_GetOverworldTileX(void);
void Dexnav_SetOverworldTileX(s16 tileX);
s16 Dexnav_GetOverworldTileY(void);
void Dexnav_SetOverworldTileY(s16 tileY);
u8 Dexnav_GetOverworldFldEffSpriteId(void);
void Dexnav_SetOverworldFldEffSpriteId(u8 fldEffSpriteId);
u8 Dexnav_GetOverworldFldEffId(void);
void Dexnav_SetOverworldFldEffId(u8 fldEffId);
u8 Dexnav_GetOverworldMovementCount(void);
void Dexnav_SetOverworldMovementCount(u8 movementCount);
u8 Dexnav_GetOverworldIconSpriteId(void);
void Dexnav_SetOverworldIconSpriteId(u8 iconSpriteId);
u8 Dexnav_GetOverworldExclamationSpriteId(void);
void Dexnav_SetOverworldExclamationSpriteId(u8 exclamationSpriteId);
u32 Dexnav_GetOverworldStartingTime(void);
void Dexnav_SetOverworldStartingTime(u32 startingTime);
u16 Dexnav_GetMove(u8 index);
void Dexnav_SetMove(u8 index, u16 value);
void Dexnav_ClearAbilityFlag(void);
void Dexnav_SetAbilityFlag(void);
void Dexnav_ClearItemFlag(void);
void Dexnav_SetItemFlag(void);
void Dexnav_ClearMoveFlag(void);
void Dexnav_SetMoveFlag(void);
void Dexnav_ClearLevelFlag(void);
void Dexnav_SetLevelFlag(void);
void Dexnav_ClearStatFlag(void);
void Dexnav_SetStatFlag(void);

u16 *Dexnav_GetPalBuffer(void);

#endif // GUARD_DEXNAV_ACCESSORS_H
