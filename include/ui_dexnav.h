#ifndef GUARD_UI_DEXNAV_H
#define GUARD_UI_DEXNAV_H

#include "constants/ui_dexnav.h"

void CB2_DexnavFromStartMenu(void);
void Dexnav_FadescreenAndExitGracefully(void);
void Dexnav_SetupCallback(void);

struct DexnavState
{
    void* savedCallback;
    u8 position;
    enum DexnavMode mode;
    u8 spriteId[DEXNAV_SPRITEIDS_COUNT];
    u8 cursorSpriteId;
};

#endif // GUARD_UI_DEXNAV_H
