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

void MonSummary_Init(enum MonSummaryModes, void *, u8, u8, MainCallback);
void MonSummary_OpenDefault(void);

#endif // GUARD_UI_MON_SUMMARY_H
