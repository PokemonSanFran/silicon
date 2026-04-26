#include "global.h"
#include "dexnav.h"
#include "ui_dexnav.h"
#include "dexnav_accessors.h"

extern struct DexNavSearch *sDexNavSearchDataPtr;

static bool8 Dexnav_HasState(void)
{
    return (sDexNavSearchDataPtr != NULL);
}

bool8 Dexnav_IsSearchActive(void)
{
    return Dexnav_HasState();
}

u16 Dexnav_GetOverworldSpecies(void)
{
	return sDexNavSearchDataPtr->species;
}

void Dexnav_SetOverworldSpecies(u16 species)
{
	sDexNavSearchDataPtr->species = species;
}

u16 Dexnav_GetOverworldHeldItem(void)
{
	return sDexNavSearchDataPtr->heldItem;
}

void Dexnav_SetOverworldHeldItem(u16 heldItem)
{
	sDexNavSearchDataPtr->heldItem = heldItem;
}

u8 Dexnav_GetOverworldAbilityNum(void)
{
	return sDexNavSearchDataPtr->abilityNum;
}

void Dexnav_SetOverworldAbilityNum(u8 abilityNum)
{
	sDexNavSearchDataPtr->abilityNum = abilityNum;
}

u8 Dexnav_GetOverworldPotential(void)
{
	return sDexNavSearchDataPtr->potential;
}

void Dexnav_SetOverworldPotential(u8 potential)
{
	sDexNavSearchDataPtr->potential = potential;
}

u8 Dexnav_GetOverworldSearchLevel(void)
{
	return sDexNavSearchDataPtr->searchLevel;
}

void Dexnav_SetOverworldSearchLevel(u8 searchLevel)
{
	sDexNavSearchDataPtr->searchLevel = searchLevel;
}

u8 Dexnav_GetOverworldMonLevel(void)
{
	return sDexNavSearchDataPtr->monLevel;
}

void Dexnav_SetOverworldMonLevel(u8 monLevel)
{
	sDexNavSearchDataPtr->monLevel = monLevel;
}

u8 Dexnav_GetOverworldProximity(void)
{
	return sDexNavSearchDataPtr->proximity;
}

void Dexnav_SetOverworldProximity(u8 proximity)
{
	sDexNavSearchDataPtr->proximity = proximity;
}

u8 Dexnav_GetOverworldEnvironment(void)
{
	return sDexNavSearchDataPtr->environment;
}

void Dexnav_SetOverworldEnvironment(u8 environment)
{
	sDexNavSearchDataPtr->environment = environment;
}

s16 Dexnav_GetOverworldTileX(void)
{
	return sDexNavSearchDataPtr->tileX;
}

void Dexnav_SetOverworldTileX(s16 tileX)
{
	sDexNavSearchDataPtr->tileX = tileX;
}

s16 Dexnav_GetOverworldTileY(void)
{
	return sDexNavSearchDataPtr->tileY;
}

void Dexnav_SetOverworldTileY(s16 tileY)
{
	sDexNavSearchDataPtr->tileY = tileY;
}

u8 Dexnav_GetOverworldFldEffSpriteId(void)
{
	return sDexNavSearchDataPtr->fldEffSpriteId;
}

void Dexnav_SetOverworldFldEffSpriteId(u8 fldEffSpriteId)
{
	sDexNavSearchDataPtr->fldEffSpriteId = fldEffSpriteId;
}

u8 Dexnav_GetOverworldFldEffId(void)
{
	return sDexNavSearchDataPtr->fldEffId;
}

void Dexnav_SetOverworldFldEffId(u8 fldEffId)
{
	sDexNavSearchDataPtr->fldEffId = fldEffId;
}

u8 Dexnav_GetOverworldMovementCount(void)
{
	return sDexNavSearchDataPtr->movementCount;
}

void Dexnav_SetOverworldMovementCount(u8 movementCount)
{
	sDexNavSearchDataPtr->movementCount = movementCount;
}

u8 Dexnav_GetOverworldIconSpriteId(void)
{
	return sDexNavSearchDataPtr->iconSpriteId;
}

void Dexnav_SetOverworldIconSpriteId(u8 iconSpriteId)
{
	sDexNavSearchDataPtr->iconSpriteId = iconSpriteId;
}

u8 Dexnav_GetOverworldExclamationSpriteId(void)
{
	return sDexNavSearchDataPtr->exclamationSpriteId;
}

void Dexnav_SetOverworldExclamationSpriteId(u8 exclamationSpriteId)
{
	sDexNavSearchDataPtr->exclamationSpriteId = exclamationSpriteId;
}

u32 Dexnav_GetOverworldStartingTime(void)
{
	return sDexNavSearchDataPtr->startingTime;
}

void Dexnav_SetOverworldStartingTime(u32 startingTime)
{
	sDexNavSearchDataPtr->startingTime = startingTime;
}

u16 Dexnav_GetMove(u8 index)
{
    return sDexNavSearchDataPtr->moves[index];
}

void Dexnav_SetMove(u8 index, u16 value)
{
    sDexNavSearchDataPtr->moves[index] = value;
}

u16 *Dexnav_GetPalBuffer(void)
{
    return sDexNavSearchDataPtr->palBuffer;
}

void Dexnav_ClearAbilityFlag(void)
{
    sDexNavSearchDataPtr->abilityFlag = FALSE;
}

void Dexnav_SetAbilityFlag(void)
{
    sDexNavSearchDataPtr->abilityFlag = TRUE;
}

void Dexnav_ClearItemFlag(void)
{
    sDexNavSearchDataPtr->itemFlag = FALSE;
}

void Dexnav_SetItemFlag(void)
{
    sDexNavSearchDataPtr->itemFlag = TRUE;
}

void Dexnav_ClearMoveFlag(void)
{
    sDexNavSearchDataPtr->moveFlag = FALSE;
}

void Dexnav_SetMoveFlag(void)
{
    sDexNavSearchDataPtr->moveFlag = TRUE;
}

void Dexnav_ClearLevelFlag(void)
{
    sDexNavSearchDataPtr->levelFlag = FALSE;
}

void Dexnav_SetLevelFlag(void)
{
    sDexNavSearchDataPtr->levelFlag = TRUE;
}

void Dexnav_ClearStatFlag(void)
{
    sDexNavSearchDataPtr->statFlag = FALSE;
}

void Dexnav_SetStatFlag(void)
{
    sDexNavSearchDataPtr->statFlag = TRUE;
}
