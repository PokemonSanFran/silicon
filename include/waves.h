#ifndef GUARD_WAVES_H
#define GUARD_WAVES_H

#include "constants/quests.h"

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

#endif // GUARD_WAVES_H
