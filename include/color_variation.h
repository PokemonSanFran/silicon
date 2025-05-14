#ifndef GUARD_COLOR_VARIATION_H
#define GUARD_COLOR_VARIATION_H

#include "constants/color_variation.h"

u8 LoadUniqueSpritePalette(const struct SpritePalette *palette, struct BoxPokemon *boxMon);
void LoadCompressedUniqueSpritePalette(const struct CompressedSpritePalette *src, struct BoxPokemon *boxMon);
void UniquePalette(u16 palOffset, struct BoxPokemon *boxMon);
void SetPaletteBufferSlotUnfadedToFaded(u32 paletteSlot);
u32 LoadCompressedUniqueSpritePaletteWithTag(const u32 *pal, u16 tag, struct BoxPokemon *boxMon);

#endif // GUARD_COLOR_VARIATION_H
