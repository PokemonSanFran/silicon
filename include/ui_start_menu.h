#ifndef GUARD_UI_MENU_H
#define GUARD_UI_MENU_H

#include "main.h"

#define NUM_TOTAL_APPS 10
#define NO_SLOTS -1

enum AppsIds
{
    APP_POKEMON,
    APP_BAG,
    APP_MAP,
    APP_QUEST,
    APP_DEXNAV,
    APP_POKEDEX,
    APP_BUZZR,
    APP_OPTIONS,
    APP_PROFILE,
    APP_PRESTO,
    APP_NONE,
};

void Task_OpenMenuFromStartMenu(u8 taskId);
void Task_OpenMenuFromOverworld(u8 taskId);
void StartMenu_Menu_Init(MainCallback callback, bool8 calledFromOverworld);
void StartMenu_Menu_FreeResources(void);
bool32 ShowUIStartMenu(void);
void ShowStartMenuSaveScreen(void);
#endif // GUARD_UI_MENU_H
