#ifndef GUARD_NAMING_SCREEN_H
#define GUARD_NAMING_SCREEN_H

#include "main.h"

enum {
    NAMING_SCREEN_PLAYER,
    NAMING_SCREEN_BOX,
    NAMING_SCREEN_CAUGHT_MON,
    NAMING_SCREEN_NICKNAME,
    NAMING_SCREEN_WALDA,
    NAMING_SCREEN_CODE,
    // Start playerCustom
    NAMING_SCREEN_SUBJECT_PRONOUN,
    NAMING_SCREEN_OBJECT_PRONOUN,
    NAMING_SCREEN_POSSESIVE_PRONOUN,
    // End playerCustom
};

extern void BattleMainCB2(void);

void DoNamingScreen(u8 templateNum, u8 *destBuffer, u16 monSpecies, u16 monGender, u32 monPersonality, MainCallback returnCallback);
void AssignDefaultPlayerName(void); // bootSequence
void SetEOSForPlayerName(const u8*); // bootSequence
#endif // GUARD_NAMING_SCREEN_H
