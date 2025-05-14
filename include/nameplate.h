#ifndef GUARD_UI_MUGSHOT
#define GUARD_UI_MUGSHOT

#include "main.h"
#include "constants/nameplate.h"

struct SpeakerData
{
    const u8 name[SPEAKER_NAME_LENGTH];
    const u8 title[SPEAKER_NAME_LENGTH];
    const u8 gender;
    const u32 *speakerIcon;
    const u32 *speakerPal;
};

void DrawNameplate(void);
void ClearMessageBoxAddOns();
void DestroySpeakerIconSprite(void);
void ForceClearMessageBoxData(void);
void RandomizeNameplate(void);

#endif // GUARD_UI_MUGSHOT
