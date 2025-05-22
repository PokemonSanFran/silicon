#ifndef GUARD_REVEAL_H
#define GUARD_REVEAL_H

#include "constants/reveal.h"
void RevealCharacter(enum RevealIds revealId, bool32 overworldState);

struct RevealCharacterStruct
{
    u16 trainerId;
    u16 buzzrId;
    const u8 *const quote;
    const u8 *const bio;
    const u16 accentColor;
};

struct RevealPrintConfig
{
    u8 fontId;
    u8 x;
    u8 y;
    u8 colorIndex;
    u8 frameThreshold;
};


#endif // GUARD_REVEAL_H
