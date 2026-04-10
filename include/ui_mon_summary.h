#ifndef GUARD_UI_MON_SUMMARY_H
#define GUARD_UI_MON_SUMMARY_H

// needs to be put here for future uses
enum __attribute__((packed)) MonSummaryModes
{
    UI_SUMMARY_MODE_DEFAULT,
    UI_SUMMARY_MODE_LOCK_EDIT, // player cannot edit EVs nor moves
    UI_SUMMARY_MODE_EDIT_IVS,

    // only used for moveReminder
    UI_SUMMARY_MODE_MOVE_MENU,
    UI_SUMMARY_MODE_MOVES_PAGE,

    NUM_UI_SUMMARY_MODES
};

extern const u8 gMonSummary_MoveBarGfx[];
extern const u8 gMonSummary_MoveTypeGfx[];
extern const struct SpritePalette gMonSummary_TypeSpritePalettes[];
extern const struct SpriteTemplate gMonSummary_MoveBarSpriteTemplate;
extern const struct SubspriteTable gMonSummary_128x16SubspriteTable[];
extern const struct SpriteTemplate gMonSummary_SlotCursorSpriteTemplate;
extern const struct SpriteTemplate gMonSummary_CursorArrowsSpriteTemplate;

void MonSummary_Init(enum MonSummaryModes, void *, u8, u8, bool32, MainCallback);

#endif // GUARD_UI_MON_SUMMARY_H
