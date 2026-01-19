#ifndef GUARD_WAVES_H
#define GUARD_WAVES_H

#include "constants/quests.h"
#include "constants/waves.h"

struct WavesData
{
    const u8* const title;
    const u8* const desc;
    const u32* thumbnail;
    const u16* palette;
    const u32 goal;
    const enum SubQuestDefines relatedSubQuest;
    const enum QuestIdList relatedQuest;
};

struct WavesState
{
    void* savedCallback;
    enum WavesCursorPosition position;
    enum WavesMode mode;
    u8 donatePosition;
    u8 spriteId[WAVES_MODE_MAIN_COUNT][GOAL_COUNT];
    u8 cursorSpriteId;
};

void CB2_WavesFromStartMenu(void);
void Waves_DoDailyPassiveIncrease(u32);

#endif // GUARD_WAVES_H
