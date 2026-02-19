#ifndef GUARD_MAP_SYSTEM_MENU_H
#define GUARD_MAP_SYSTEM_MENU_H

#include "main.h"
#include "bg.h"
#include "constants/ui_map_system.h"

// Exported type declarations
void Task_OpenDefaultMapSystemFromStartMenu(u8 taskId);
void Task_OpenTrolleyMapSystemFromStation(u8 taskId);
void Task_OpenTaxiMapSystemFromScript(u8 taskId);
void CB2_OpenFlyMapSystem(MainCallback callback, enum MapModes mode);
void CB2_OpenFlyMapSystemReturnToPartyMenu(void);
void CB2_OpenFlyMapSystemReturnToBag(void);
void CB2_OpenFlyMapSystemReturnToField(void);
void MapSystem_Init(MainCallback callback);
void CalculatePlayerPositionInRegionMap(s16 *x_tile, s16 *y_tile, u16 *isIndoorOrCave);
u8 CalculateWaypointDirection(void);
void CreateOverworldWaypointArrow(void);
void ClearWaypointDataSave(void);
void CB2_MapSystemFromStartMenu(void);
enum MapModes GetCurrentMapMode(void);
bool8 IsCurrentMapMode_FlyToolFromBag(u32 mapMode);
bool8 IsCurrentMapMode_FlyToolFromField(u32 mapMode);

#endif // GUARD_MAP_SYSTEM_MENU_H
