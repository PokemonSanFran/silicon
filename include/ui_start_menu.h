#ifndef GUARD_UI_START_MENU_H
#define GUARD_UI_START_MENU_H

#include "sprite.h"

enum StartMenuModes
{
    START_MODE_NORMAL = 0,     // triggers in the overworld with START
    START_MODE_ERROR,          // triggers only within NORMAL mode when encountering a problem
    START_MODE_MOVE,           // triggers only in NORMAL mode with SELECT
    START_MODE_SAVE_NORMAL,    // triggers only in NORMAL mode with START
    START_MODE_SAVE_SCRIPT,    // triggers in a script
    START_MODE_SAVE_FORCE,     // triggers in a script, also force saving with no prompt
    NUM_START_MODES
};

enum StartMenuApps
{
    START_APP_NONE,

    // first row
    START_APP_PARTY,
    START_APP_BAG,
    START_APP_ARRIBA,
    START_APP_TODOS,
    START_APP_DEXNAV,
    START_APP_POKEDEX,
    START_APP_BUZZR,
    START_APP_OPTIONS,

    // second row
    START_APP_TRAINER_CARD,
    START_APP_PRESTO,
    START_APP_WAVES_OF_CHANGE,
    START_APP_CUSTOMIZE,
    START_APP_SAVE,
    START_APP_SURPRISE_TRADE,
    START_APP_GOOGLE_GLASS,
    START_APP_ADVENTURES_GUIDE,

    NUM_START_APPS, // also used for the icon's bg sprite
    TOTAL_START_APPS = (NUM_START_APPS - 1) // true size
};

void StartMenu_Init(enum StartMenuModes);
void Task_StartMenu_Init(u8);
bool32 StartMenu_OpenNormalMode(void);
void CB2_StartMenu_ReturnToUI(void);
void StartMenu_HoldPreviousSave(void);
void StartMenu_ResetAppData(void);
void MonStatus_InjectStatusGraphics(struct Sprite *, u32, u32);

#endif // GUARD_UI_START_MENU_H
