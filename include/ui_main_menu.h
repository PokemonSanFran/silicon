#ifndef GUARD_MAINMENU_H
#define GUARD_MAINMENU_H
#include "gba/types.h"
#include "list_menu.h"
#include "constants/event_objects.h"
#include "constants/ui_main_menu.h"
#include "main.h"

void CB2_InitUiMainMenuFromTitleScreen(void);
void Task_OpenMainMenuFromTitleScreen(u8 taskId);
u32 ReturnTransformationIfConditionMet(struct Pokemon *mon);
void CB2_GoToEraseMainMenu(void);
void CB2_GoToUIMainMenu(void);
void CropMonIcon(u32);
void UpdateCroppedMonIcon(struct Sprite *);
void CB2_InitUiMainMenuFromStartMenu(void);

#endif // GUARD_MAINMENU_H
