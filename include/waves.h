#ifndef GUARD_WAVES_H
#define GUARD_WAVES_H

struct WavesFunds
{
    u8 playerPercent : 7;
    u8 passivePercent: 7;
};

struct WavesData
{
    const u8 *const title;
    const u8 *const desc;
    const u32 *thumbnail;
    const u16 *palette;
    u32 goal;
    enum SubQuestDefines relatedSubQuest;
    enum QuestIdList relatedQuest;
};

#endif // GUARD_WAVES_H
