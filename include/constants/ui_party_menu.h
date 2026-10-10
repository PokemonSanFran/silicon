#ifndef GUARD_CONSTANTS_UI_PARTY_MENU_H
#define GUARD_CONSTANTS_UI_PARTY_MENU_H

// pal 0 comes from the BG3 wallpaper
#define PARTY_PAL_SLOT_FIRST   1
#define PARTY_PAL_SLOT_SLOTS   1

// ================================================================
// Party slot defines
// ================================================================
#define PARTY_SLOT_COLUMNS      2
#define PARTY_SLOT_LEFT         1
#define PARTY_SLOT_WIDTH        14
#define PARTY_SLOT_MAIN_HEIGHT  5
#define PARTY_SLOT_MID_HEIGHT   6

// slot_mid content sits lower than slot_main
#define PARTY_SLOT_MID_CONTENT_Y    4

// FONT_OUTLINED maxLetterHeight
#define PARTY_SLOT_TEXT_HEIGHT      15
#define PARTY_SLOT_LEVEL_SPACING    0
#define PARTY_HP_BAR_FRAME_SIZE     1

// lifted slot offset, in tiles
#define PARTY_HELD_OFFSET_X     1
#define PARTY_HELD_OFFSET_Y     1

// sPartyMenu_SlotLayout
#define PARTY_SLOT_NICKNAME_X   32
#define PARTY_SLOT_NICKNAME_Y   0
#define PARTY_SLOT_NICKNAME_W   66
#define PARTY_SLOT_NICKNAME_H   PARTY_SLOT_TEXT_HEIGHT

#define PARTY_SLOT_GENDER_X     100
#define PARTY_SLOT_GENDER_Y     0
#define PARTY_SLOT_GENDER_W     8
#define PARTY_SLOT_GENDER_H     PARTY_SLOT_TEXT_HEIGHT

#define PARTY_SLOT_LEVEL_X      4
#define PARTY_SLOT_LEVEL_Y      25
#define PARTY_SLOT_LEVEL_W      24
#define PARTY_SLOT_LEVEL_H      PARTY_SLOT_TEXT_HEIGHT

#define PARTY_SLOT_HP_VALUE_X   50
#define PARTY_SLOT_HP_VALUE_Y   13
#define PARTY_SLOT_HP_VALUE_W   52
#define PARTY_SLOT_HP_VALUE_H   PARTY_SLOT_TEXT_HEIGHT

#define PARTY_SLOT_HP_BAR_X     33
#define PARTY_SLOT_HP_BAR_Y     17
#define PARTY_SLOT_HP_BAR_W     72
#define PARTY_SLOT_HP_BAR_H     9

// ================================================================
// Sprite defines
// ================================================================
#define PARTY_SPRITE_PRIORITY_MAIN      2
#define PARTY_SPRITE_PRIORITY_LIFTED    1

// priority 2
#define PARTY_OBJ_SUBPRIORITY_CURSOR    0
#define PARTY_OBJ_SUBPRIORITY_MON_ICON  PARTY_OBJ_SUBPRIORITY_CURSOR + 1

// mon icons
#define PARTY_MON_ICON_X          23
#define PARTY_MON_ICON_Y          27
#define PARTY_MON_ICON_X_SPACING  112
#define PARTY_MON_ICON_Y_SPACING  44

// party cursor
#define PARTY_CURSOR_Y_OFFSET   2

#define PARTY_CURSOR_HALF_SIZE      16
#define PARTY_CURSOR_CORNER_SIZE    8
#define PARTY_CURSOR_NUM_FRAMES     3
#define PARTY_CURSOR_FRAME_DURATION 10

enum PartyMenuBackgrounds
{
    PARTY_BG_HELD = 1,
    PARTY_BG_SLOTS,
    PARTY_BG_WALLPAPER,
};

enum PartyMenuSlotRows
{
    PARTY_SLOT_ROW_TOP,
    PARTY_SLOT_ROW_MID,
    PARTY_SLOT_ROW_BOTTOM,
    NUM_PARTY_SLOT_ROWS
};

enum PartySlotTextColors
{
    COLORID_PARTY_DEFAULT,
    COLORID_PARTY_MALE,
    COLORID_PARTY_FEMALE,
    COLORID_PARTY_LEVEL,
    NUM_PARTY_TEXT_COLORS
};

enum PartyMenuCursorCorners
{
    PARTY_CURSOR_CORNER_TOP_LEFT,
    PARTY_CURSOR_CORNER_TOP_RIGHT,
    PARTY_CURSOR_CORNER_BOTTOM_LEFT,
    PARTY_CURSOR_CORNER_BOTTOM_RIGHT,
    NUM_PARTY_CURSOR_CORNERS
};

enum PartyMenuTags
{
    PARTY_TAG_CURSOR = 42000,
};

enum PartyMenuSetupSteps
{
    PARTY_SETUP_RESET = 0,
    PARTY_SETUP_BG,
    PARTY_SETUP_GFX,
    PARTY_SETUP_WINDOWS,
    PARTY_SETUP_SLOTS,
    PARTY_SETUP_SPRITES,
    PARTY_SETUP_FADE,
    PARTY_SETUP_FINISH
};

#endif // GUARD_CONSTANTS_UI_PARTY_MENU_H
