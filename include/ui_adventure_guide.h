#ifndef GUARD_UI_ADVENTURE_GUIDE_H
#define GUARD_UI_ADVENTURE_GUIDE_H

#include "main.h"

void Task_OpenAdventureGuideFromStartMenu(u8 taskId);
void Adventure_Guide_Init(MainCallback callback);
bool8 shouldSkipGuide(u8 guideNum);
void Task_OpenAdventureGuideFromMenu(u8 taskId);

#endif // GUARD_UI_ADVENTURE_GUIDE_H
