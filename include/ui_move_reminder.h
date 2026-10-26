#ifndef GUARD_UI_MOVE_REMINDER_H
#define GUARD_UI_MOVE_REMINDER_H

enum MoveReminderModes
{
    MREMINDER_MODE_DEFAULT,
    MREMINDER_MODE_SELECT_MOVE,

    NUM_MREMINDER_MODES
};

void MoveReminder_Init(enum MoveReminderModes, MainCallback, void *, bool32);
void MoveReminder_InitSelectMove(MainCallback, struct Pokemon *, enum Move);

#endif // GUARD_UI_MOVE_REMINDER_H
