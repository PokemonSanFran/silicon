#ifndef GUARD_COLOR_VARIATION_H
#define GUARD_COLOR_VARIATION_H

#include "constants/color_variation.h"

u8 LoadUniqueSpritePalette(const struct SpritePalette *palette, struct BoxPokemon *boxMon);
u32 LoadUniqueSpritePaletteWithTag(const u16* pal, u16 tag, struct BoxPokemon *boxMon);
void UniquePalette(u16 palOffset, struct BoxPokemon *boxMon);
void SetPaletteBufferSlotUnfadedToFaded(u32 paletteSlot);

#endif // GUARD_COLOR_VARIATION_H
