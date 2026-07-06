#ifndef GUARD_STORYJUMP_H
#define GUARD_STORYJUMP_H

extern u8 ThereCanOnlyBeOne_Debug_Script[];

void JumpPlayerToStoryPoint(u32 chosenStoryPoint, bool32 jumpType);
void WarpPlayerAfterVarSet(void);
void ClearGymTrainer_Script(void);


void JumpPlayerTo_WarehouseRave(bool32);
void JumpPlayerTo_SpeechSpeechSpeech(bool32);
void JumpPlayerTo_YoungPadawan(bool32);
void JumpPlayerTo_LetsGrabLunch(bool32);
void JumpPlayerTo_HowDoWeGetHome(bool32);
void JumpPlayerTo_Epilogue(bool32);

#endif // GUARD_STORYJUMP_H
