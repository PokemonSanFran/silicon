#ifndef GUARD_UI_MON_SUMMARY_H
#define GUARD_UI_MON_SUMMARY_H

#include "pokemon_summary_screen.h"

extern const u8 gMonSummary_MoveBarGfx[];
extern const u8 gMonSummary_MoveTypeGfx[];
extern const struct SpritePalette gMonSummary_TypeSpritePalettes[];
extern const struct SpriteTemplate gMonSummary_MoveBarSpriteTemplate;
extern const struct SubspriteTable gMonSummary_128x16SubspriteTable[];
extern const struct SpriteTemplate gMonSummary_SlotCursorSpriteTemplate;
extern const struct SpriteTemplate gMonSummary_CursorArrowsSpriteTemplate;

void MonSummary_Init(enum PokemonSummaryScreenMode, void *, u8, u8, bool32, MainCallback);
u32 MonSummary_CreateHPBarSprite(u32, u32, s32, s32);
void MonSummary_InjectHpBar(struct Sprite *, s32, s32);

#endif // GUARD_UI_MON_SUMMARY_H
