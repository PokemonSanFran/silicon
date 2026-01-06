#ifndef GUARD_UI_MON_SUMMARY_H
#define GUARD_UI_MON_SUMMARY_H

// needs to be put here for future uses
enum __attribute__((packed)) MonSummaryModes
{
    SUMMARY_MODE_DEFAULT,
    SUMMARY_MODE_BOX,
    SUMMARY_MODE_BATTLE,
    SUMMARY_MODE_IV_TRAIN,

    NUM_SUMMARY_MODES
};

struct MonSummaryConfigs
{
    enum MonSummaryModes mode;
    void *mons;
    u8 currIdx, totalIdx;
    // useful for specific modes requiring value
    union {
        u32 moveId; // move reminder
        u32 value;
    } arg;
};

void MonSummary_Init(const struct MonSummaryConfigs *, MainCallback);
void MonSummary_OpenDefault(void);

#endif // GUARD_UI_MON_SUMMARY_H
