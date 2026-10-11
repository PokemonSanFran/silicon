#ifndef GUARD_UI_MUGSHOT
#define GUARD_UI_MUGSHOT

#include "main.h"
#include "constants/nameplate.h"

struct SpeakerData
{
    const u8 *name;
    const u8 *title;
    const u8 gender;
    const enum SpeakerIcons speakerIcon;
};

struct SpeakerIconData
{
    const void *speakerIcon;
    const void *speakerPal;
};

void DrawNameplate(void);
void ClearMessageBoxAddOns();
void DestroySpeakerIconSprite(void);
void ForceClearMessageBoxData(void);
void RandomizeNameplate(void);
void DrawTopMessageBoxTiles(u32, u32, u32, u32);
void LoadNameplatePalette(enum Gender gender);
const u8* GetSpeakerName(enum NameplateSpeaker speaker);
const u8* GetSpeakerTitle(enum NameplateSpeaker speaker);

#endif // GUARD_UI_MUGSHOT
