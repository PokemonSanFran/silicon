#ifndef GUARD_REMATCH_H
#define GUARD_REMATCH_H

void HandleRematchIconForSingleObjectEvent(struct ObjectEvent*, u32);
void UpdateTrainerRematchState(u16, u16);
u16 GetPSFRematchTrainerId(u16);
void ResetRematchIconOnObject(struct ObjectEvent*);
u16 GetTrainerIdFromLastTalked(void);

#endif // GUARD_REMATCH_H
