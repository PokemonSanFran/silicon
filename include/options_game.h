#ifndef GUARD_OPTIONS_VISUAL_H
#define GUARD_OPTIONS_VISUAL_H

// Game Settings: Save Boot
bool32 CheckSaveBootAndFileStatus(void);
// Game Settings: Run Behavior
bool32 PlayerNotOnBikeShouldWalk(u16);
// Game Settings: Puzzles
u32 GetPuzzleValue(void);

// Game Settings: Cutscenes
u32 GetCutsceneOptionValue(void);
void HoldButtonToSkipCutscene(u16);
void SkipCutscene(u32);

// Game Settings: Save Behavior
void Script_IsAutosaveTurnedOn(void);
bool8 ShouldAutoSaveOnReturnToField(void);
void Task_ReturnToFieldAutosave(u8 taskId);
void FieldCB_ReturnToFieldPostWildBattleCheckMusic(void);

#endif // GUARD_OPTIONS_VISUAL_H
