#ifndef GUARD_UI_ADVENTURE_GUIDE_H
#define GUARD_UI_ADVENTURE_GUIDE_H

#include "main.h"

void Task_OpenAdventureGuideFromStartMenu(u8 taskId);
void Adventure_Guide_Init(MainCallback callback);
bool8 shouldSkipGuide(u8 guideNum);
void Task_OpenAdventureGuideFromMenu(u8 taskId);
void OpenAdventureGuideFromScript(void);
void Script_shouldSkipGuide(void);

struct AdventureGuideData
{
    const u8 *title;
    const u8 *description[MAX_GUIDE_PAGES];
    bool8 isAdvancedGuide;
};

#endif // GUARD_UI_ADVENTURE_GUIDE_H
