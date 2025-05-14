#ifndef GUARD_REVEAL_H
#define GUARD_REVEAL_H

#include "constants/reveal.h"
void RevealCharacter(enum RevealIds revealId, bool32 overworldState);

struct RevealCharacterStruct
{
    u32 trainerId;
    u32 buzzrId;
    const u8 *const quote;
    const u8 *const bio;
    const u32 accentColor;
};

struct RevealPrintConfig {
    u32 fontId;
    u32 x;
    u32 y;
    u32 colorIndex;
    u32 frameThreshold;
};


#endif // GUARD_REVEAL_H
