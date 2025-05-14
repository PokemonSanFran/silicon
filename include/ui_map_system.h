#ifndef GUARD_UI_TEST_MENU_H
#define GUARD_UI_TEST_MENU_H

#include "main.h"
#include "bg.h"

// Exported type declarations


void Task_OpenMapSystemFromStartMenu(u8 taskId);
void MapSystem_Init(MainCallback callback);

struct SFRegionMap {
    /*0x000*/ u16 mapSecId;
    /*0x002*/ u8 mapSecType;
    /*0x003*/ u8 posWithinMapSec;
    /*0x004*/ u8 mapSecName[20];
    /*0x018*/ u8 (*inputCallback)(void);
    /*0x01c*/ struct Sprite *cursorSprite;
              struct Sprite *cursorSpriteLOC;
    /*0x020*/ struct Sprite *playerIconSprite;
    /*0x024*/ s32 bg2x;
    /*0x028*/ s32 bg2y;
    /*0x02c*/ u32 bg2pa;
    /*0x034*/ u32 bg2pc;
    /*0x030*/ u32 bg2pb;
    /*0x038*/ u32 bg2pd;
    /*0x03c*/ s32 unk_03c;
    /*0x040*/ s32 unk_040;
    /*0x044*/ s32 unk_044;
    /*0x048*/ s32 unk_048;
    /*0x04c*/ s32 unk_04c;
    /*0x050*/ s32 unk_050;
    /*0x054*/ u16 cursorPosX;
    /*0x056*/ u16 cursorPosY;
    /*0x058*/ u16 cursorTileTag;
    /*0x05a*/ u16 cursorPaletteTag;
              u16 cursorLOCTileTag;
    /*0x05a*/ u16 cursorLOCPaletteTag;
    /*0x05c*/ s16 scrollX;
    /*0x05e*/ s16 scrollY;
    /*0x060*/ s16 unk_060;
    /*0x062*/ s16 unk_062;
    /*0x064*/ u16 zoomedCursorPosX;
    /*0x066*/ u16 zoomedCursorPosY;
    /*0x068*/ s16 zoomedCursorDeltaY;
    /*0x06a*/ s16 zoomedCursorDeltaX;
    /*0x06c*/ u16 zoomedCursorMovementFrameCounter;
    /*0x06e*/ u16 unk_06e;
    /*0x070*/ u16 playerIconTileTag;
    /*0x072*/ u16 playerIconPaletteTag;
    /*0x074*/ u16 playerIconSpritePosX;
    /*0x076*/ u16 playerIconSpritePosY;
    /*0x078*/ bool8 zoomed;
    /*0x079*/ u8 initStep;
    /*0x07a*/ s8 cursorMovementFrameCounter;
    /*0x07b*/ s8 cursorDeltaX;
    /*0x07c*/ s8 cursorDeltaY;
    /*0x07d*/ bool8 needUpdateVideoRegs;
    /*0x07e*/ bool8 blinkPlayerIcon;
    /*0x07f*/ bool8 playerIsInCave;
    /*0x080*/ u8 bgNum;
    /*0x081*/ u8 charBaseIdx;
    /*0x082*/ u8 mapBaseIdx;
    /*0x083*/ bool8 bgManaged;
    /*0x084*/ u8 filler_084[253];
              u8 warp_counter;
              u8 active_cursor;
              u8 cursor_flipped;
    /*0x184*/ u8 cursorSmallImage[0x100];
    /*0x284*/ u8 cursorLargeImage[4096];
}; // size = 0x884


struct SFRegionMapLocation
{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u8 *name;
};



#endif // GUARD_UI_TEST_MENU_H
