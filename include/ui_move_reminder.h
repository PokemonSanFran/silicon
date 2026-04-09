#ifndef GUARD_UI_MOVE_REMINDER_H
#define GUARD_UI_MOVE_REMINDER_H

enum MoveReminderModes
{
    MREMINDER_MODE_DEFAULT,

    NUM_MREMINDER_MODES
};

void MoveReminder_Init(enum MoveReminderModes, MainCallback, void *, bool32);

#endif // GUARD_UI_MOVE_REMINDER_H
