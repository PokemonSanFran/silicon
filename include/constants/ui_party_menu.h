#ifndef GUARD_CONSTANTS_UI_PARTY_MENU_H
#define GUARD_CONSTANTS_UI_PARTY_MENU_H

// pal 0 comes from the BG3 wallpaper
#define PARTY_BG_PAL_SLOT_MAIN      1
#define PARTY_BG_PAL_SLOT_MARKED    2
#define PARTY_BG_PAL_HELPER         3

// when a slot is marked (e.g., moving item) we highlight the slot
// by swapping in a different palette (see pal2 in tiles.png)
#define PARTY_SLOT_MARKED_PAL_START 1
#define PARTY_SLOT_MARKED_PAL_END   3

#define PARTY_BG_PAL_FRAME          13
#define PARTY_BG_PAL_DIALOG         14
#define PARTY_BG_PAL_MENU_TEXT      15

// ================================================================
// Text layer
// ================================================================
#define PARTY_TEXT_FRAME_TILES      9
#define PARTY_HELPER_WIDTH          28
#define PARTY_HELPER_HEIGHT         2
#define PARTY_HELPER_LEFT           1
#define PARTY_HEADER_TOP            0
#define PARTY_FOOTER_TOP            18
#define PARTY_HELPER_TEXT_Y         1

#define PARTY_MSGBOX_LEFT           1
#define PARTY_MSGBOX_TOP            15
#define PARTY_MSGBOX_WIDTH          28
#define PARTY_MSGBOX_HEIGHT         4

#define PARTY_YESNO_LEFT            21
#define PARTY_YESNO_TOP             9
#define PARTY_YESNO_WIDTH           5
#define PARTY_YESNO_HEIGHT          4

#define PARTY_TEXT_TILE_FRAME       1
#define PARTY_TEXT_TILE_HEADER      (PARTY_TEXT_TILE_FRAME + PARTY_TEXT_FRAME_TILES)
#define PARTY_TEXT_TILE_FOOTER      (PARTY_TEXT_TILE_HEADER + PARTY_HELPER_WIDTH * PARTY_HELPER_HEIGHT)
#define PARTY_TEXT_TILE_MSGBOX      (PARTY_TEXT_TILE_FOOTER + PARTY_HELPER_WIDTH * PARTY_HELPER_HEIGHT)
#define PARTY_TEXT_TILE_YESNO       (PARTY_TEXT_TILE_MSGBOX + PARTY_MSGBOX_WIDTH * PARTY_MSGBOX_HEIGHT)

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

#define PARTY_SLOT_LEVEL_X      5
#define PARTY_SLOT_LEVEL_Y      24
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

#define PARTY_SLOT_ITEM_X       32
#define PARTY_SLOT_ITEM_Y       24
#define PARTY_SLOT_ITEM_W       76
#define PARTY_SLOT_ITEM_H       PARTY_SLOT_TEXT_HEIGHT

#define PARTY_SLOT_DESC_X       PARTY_SLOT_HP_BAR_X
#define PARTY_SLOT_DESC_Y       PARTY_SLOT_HP_VALUE_Y
#define PARTY_SLOT_DESC_W       PARTY_SLOT_HP_BAR_W
#define PARTY_SLOT_DESC_H       PARTY_SLOT_TEXT_HEIGHT
#define PARTY_SLOT_DESC_NONE    0xFF

// ================================================================
// Sprite defines
// ================================================================
#define PARTY_SPRITE_PRIORITY_MAIN      2
#define PARTY_SPRITE_PRIORITY_LIFTED    1

// priority 2
#define PARTY_SPRITE_SUBPRIORITY_CURSOR     0
#define PARTY_SPRITE_SUBPRIORITY_HELD_ITEM  PARTY_SPRITE_SUBPRIORITY_CURSOR + 1
#define PARTY_SPRITE_SUBPRIORITY_STATUS     PARTY_SPRITE_SUBPRIORITY_HELD_ITEM + 1
#define PARTY_SPRITE_SUBPRIORITY_MON_ICON   PARTY_SPRITE_SUBPRIORITY_STATUS + 1

// mon icons
#define PARTY_MON_ICON_X            24
#define PARTY_MON_ICON_Y            26
#define PARTY_MON_ICON_X_SPACING    112
#define PARTY_MON_ICON_Y_SPACING    44

// held item
#define PARTY_HELD_ITEM_X_OFFSET    11
#define PARTY_HELD_ITEM_Y_OFFSET    11

// status icon
#define PARTY_STATUS_ICON_X_OFFSET  1
#define PARTY_STATUS_ICON_Y_OFFSET  22
#define PARTY_STATUS_ICON_TILES     8
#define PARTY_STATUS_ICON_COUNT     8

// status icon fade, levels: 0 = opaque, PARTY_STATUS_FADE_LEVELS = transparent
#define PARTY_STATUS_FADE_LEVELS        16
#define PARTY_STATUS_FADE_FRAMES        48
#define PARTY_STATUS_FADE_SHOW_FRAMES   120
#define PARTY_STATUS_FADE_HIDE_FRAMES   120

// party cursor
#define PARTY_CURSOR_Y_OFFSET       2

#define PARTY_CURSOR_HALF_SIZE      16
#define PARTY_CURSOR_CORNER_SIZE    8
#define PARTY_CURSOR_NUM_FRAMES     3
#define PARTY_CURSOR_FRAME_DURATION 10

enum PartyMenuBackgrounds
{
    PARTY_BG_TEXT,
    PARTY_BG_HELD,
    PARTY_BG_SLOTS,
    PARTY_BG_WALLPAPER,
};

enum PartyMenuWindows
{
    PARTY_WIN_HEADER,
    PARTY_WIN_FOOTER,
    NUM_PARTY_FIXED_WINDOWS
};

enum PartyMenuDynamicWindows
{
    PARTY_DYN_WIN_LIST,
    PARTY_DYN_WIN_MSG,
    NUM_PARTY_DYN_WINDOWS
};

enum PartyMenuSlotRows
{
    PARTY_SLOT_ROW_TOP,
    PARTY_SLOT_ROW_MID,
    PARTY_SLOT_ROW_BOTTOM,
    NUM_PARTY_SLOT_ROWS
};

enum PartyTextColors
{
    COLORID_PARTY_WHITE,
    COLORID_PARTY_BLUE,
    COLORID_PARTY_GREEN,
    COLORID_PARTY_YELLOW,
    COLORID_PARTY_RED,
    COLORID_PARTY_GREY,
    COLORID_PARTY_HELPER,
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

enum PartyStatusFadePhases
{
    PARTY_STATUS_FADE_SHOW,
    PARTY_STATUS_FADE_OUT,
    PARTY_STATUS_FADE_HIDE,
    PARTY_STATUS_FADE_IN,
};

enum PartyMenuTags
{
    PARTY_GFXTAG_CURSOR = 42000,
    PARTY_GFXTAG_HELD_ITEM,
    PARTY_GFXTAG_STATUS,
    PARTY_PALTAG_UI,
    PARTY_PALTAG_STATUS,
};

// tags for assets used by trade, dexnav and battle_debug
// mont note: candidate for consolidation vs. custom version in current
#define TAG_STATUS_ICONS 1202
#define TAG_HELD_ITEM    55120

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
