#ifndef GUARD_UI_MON_SUMMARY_H
#define GUARD_UI_MON_SUMMARY_H

// needs to be put here for future uses
enum __attribute__((packed)) MonSummaryModes
{
    UI_SUMMARY_MODE_DEFAULT,
    UI_SUMMARY_MODE_BOX,
    UI_SUMMARY_MODE_LOCK_EDIT, // player cannot edit EVs nor moves
    UI_SUMMARY_MODE_EDIT_IVS,

    NUM_UI_SUMMARY_MODES
};

void MonSummary_Init(enum MonSummaryModes, void *, u8, u8, MainCallback);
void MonSummary_OpenDefault(void);

#endif // GUARD_UI_MON_SUMMARY_H
