#ifndef GUARD_UI_TEST_MENU_H
#define GUARD_UI_TEST_MENU_H

#include "main.h"
#include "bg.h"

// Exported type declarations
void Task_OpenDefaultMapSystemFromStartMenu(u8 taskId);
void Task_OpenTrolleyMapSystemFromStation(u8 taskId);
void Task_OpenTaxiMapSystemFromScript(u8 taskId);
void Task_OpenFlyMapSystemFromPartyMenu(u8 taskId);
void CB2_OpenFlyMapSystem(MainCallback callback);
void CB2_OpenFlyMapSystemReturnToPartyMenu(void);
void CB2_OpenFlyMapSystemReturnToBag(void);
void CB2_OpenFlyMapSystemReturnToField(void);
void MapSystem_Init(MainCallback callback);
void CalculatePlayerPositionInRegionMap(s16 *x_tile, s16 *y_tile, u16 *isIndoorOrCave);
u8 CalculateWaypointDirection(void);
void ClearWaypointData(void);
void SetWaypointData(void);
void CreateOverworldWaypointArrow(void);
void CB2_MapSystemFromStartMenu(void);

#endif // GUARD_UI_TEST_MENU_H
