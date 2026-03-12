#ifndef GUARD_UI_MOVE_REMINDER_H
#define GUARD_UI_MOVE_REMINDER_H

enum MoveReminderModes
{
    MREMINDER_MODE_PARTY,
    MREMINDER_MODE_BOX,

    NUM_MREMINDER_MODES
};

void MoveReminder_Init(enum MoveReminderModes, MainCallback, void *, u32);

#endif // GUARD_UI_MOVE_REMINDER_H
