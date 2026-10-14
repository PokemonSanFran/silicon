static const struct BgTemplate sPartyMenu_BackgroundTemplates[] =
{
    {
        .bg = PARTY_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 0,
        .priority = 0
    },
    {
        .bg = PARTY_BG_HELD,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .priority = 1
    },
    {
        .bg = PARTY_BG_SLOTS,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .priority = 2
    },
    {
        .bg = PARTY_BG_WALLPAPER,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .priority = 3
    },
};

static const struct WindowTemplate sPartyMenu_WindowTemplates[] =
{
    [PARTY_WIN_HEADER] =
    {
        .bg = PARTY_BG_TEXT,
        .tilemapLeft = PARTY_HELPER_LEFT,
        .tilemapTop = PARTY_HEADER_TOP,
        .width = PARTY_HELPER_WIDTH,
        .height = PARTY_HELPER_HEIGHT,
        .paletteNum = PARTY_BG_PAL_HELPER,
        .baseBlock = PARTY_TEXT_TILE_HEADER,
    },
    [PARTY_WIN_FOOTER] =
    {
        .bg = PARTY_BG_TEXT,
        .tilemapLeft = PARTY_HELPER_LEFT,
        .tilemapTop = PARTY_FOOTER_TOP,
        .width = PARTY_HELPER_WIDTH,
        .height = PARTY_HELPER_HEIGHT,
        .paletteNum = PARTY_BG_PAL_HELPER,
        .baseBlock = PARTY_TEXT_TILE_FOOTER,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sPartyMenu_WinTemplate_MsgBox =
{
    .bg = PARTY_BG_TEXT,
    .tilemapLeft = PARTY_MSGBOX_LEFT,
    .tilemapTop = PARTY_MSGBOX_TOP,
    .width = PARTY_MSGBOX_WIDTH,
    .height = PARTY_MSGBOX_HEIGHT,
    .paletteNum = PARTY_BG_PAL_DIALOG,
    .baseBlock = PARTY_TEXT_TILE_MSGBOX,
};

static const u32 sPartyMenu_Gfx_MenuFrame[] = INCGFX_U32("graphics/ui_menus/party_menu/menu_frame.png", ".4bpp");
static const u8 sPartyMenu_Gfx_ListCursor[] = INCBIN_U8("graphics/ui_menus/inventory/listMenuCursor.4bpp");

struct
{
    const u8 *text;
    TaskFunc func;
} static const sCursorOptions[MENU_FIELD_MOVES] =
{
    [MENU_SUMMARY]         = {COMPOUND_STRING("Summary"),           CursorCb_Summary},
    [MENU_SWITCH]          = {COMPOUND_STRING("Switch"),            CursorCb_Switch},
    [MENU_CANCEL1]         = {COMPOUND_STRING("Cancel"),            CursorCb_Cancel1},
    [MENU_ITEM]            = {COMPOUND_STRING("Item"),              CursorCb_Item},
    [MENU_GIVE]            = {COMPOUND_STRING("Give"),              CursorCb_Give},
    [MENU_TAKE_ITEM]       = {COMPOUND_STRING("Take"),              CursorCb_TakeItem},
    [MENU_MOVE_ITEM]       = {COMPOUND_STRING("Move"),              CursorCb_MoveItem},
    [MENU_MAIL]            = {COMPOUND_STRING("Mail"),              CursorCb_Stub},
    [MENU_TAKE_MAIL]       = {COMPOUND_STRING("Take"),              CursorCb_Stub},
    [MENU_READ]            = {COMPOUND_STRING("Read"),              CursorCb_Stub},
    [MENU_CANCEL2]         = {COMPOUND_STRING("Cancel"),            CursorCb_Cancel2},
    [MENU_SHIFT]           = {COMPOUND_STRING("Shift"),             CursorCb_SendMon},
    [MENU_SEND_OUT]        = {COMPOUND_STRING("Send out"),          CursorCb_SendMon},
    [MENU_ENTER]           = {COMPOUND_STRING("Enter"),             CursorCb_Stub},
    [MENU_NO_ENTRY]        = {COMPOUND_STRING("No entry"),          CursorCb_Stub},
    [MENU_STORE]           = {COMPOUND_STRING("Store"),             CursorCb_Stub},
    [MENU_REGISTER]        = {COMPOUND_STRING("Register"),          CursorCb_Stub},
    [MENU_TRADE1]          = {COMPOUND_STRING("Trade"),             CursorCb_Stub},
    [MENU_TRADE2]          = {COMPOUND_STRING("Trade"),             CursorCb_Stub},
    [MENU_TOSS]            = {COMPOUND_STRING("Toss"),              CursorCb_Stub},
    [MENU_CATALOG_BULB]    = {COMPOUND_STRING("Light bulb"),        CursorCb_Stub},
    [MENU_CATALOG_OVEN]    = {COMPOUND_STRING("Microwave oven"),    CursorCb_Stub},
    [MENU_CATALOG_WASHING] = {COMPOUND_STRING("Washing machine"),   CursorCb_Stub},
    [MENU_CATALOG_FRIDGE]  = {COMPOUND_STRING("Refrigerator"),      CursorCb_Stub},
    [MENU_CATALOG_FAN]     = {COMPOUND_STRING("Electric fan"),      CursorCb_Stub},
    [MENU_CATALOG_MOWER]   = {COMPOUND_STRING("Lawn mower"),        CursorCb_Stub},
    [MENU_CHANGE_FORM]     = {COMPOUND_STRING("Change form"),       CursorCb_Stub},
    [MENU_CHANGE_ABILITY]  = {COMPOUND_STRING("Change Ability"),    CursorCb_Stub},
    [MENU_INFLICT_SLEEP]   = {COMPOUND_STRING("SLP"),               CursorCb_Stub},
    [MENU_INFLICT_POISON]  = {COMPOUND_STRING("PSN"),               CursorCb_Stub},
    [MENU_INFLICT_BURN]    = {COMPOUND_STRING("BRN"),               CursorCb_Stub},
#if B_USE_FROSTBITE == TRUE
    [MENU_INFLICT_FREEZE_FROSTBITE] = {COMPOUND_STRING("FSB"), CursorCb_Stub},
#else
    [MENU_INFLICT_FREEZE_FROSTBITE] = {COMPOUND_STRING("FRZ"), CursorCb_Stub},
#endif
    [MENU_INFLICT_PARALYSIS] = {COMPOUND_STRING("PAR"), CursorCb_Stub},
};

static const u8 sPartyMenuAction_SummarySwitchCancel[] = {MENU_SUMMARY, MENU_SWITCH, MENU_CANCEL1};
static const u8 sPartyMenuAction_ShiftSummaryCancel[] = {MENU_SHIFT, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_SendOutSummaryCancel[] = {MENU_SEND_OUT, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_SummaryCancel[] = {MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_EnterSummaryCancel[] = {MENU_ENTER, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_NoEntrySummaryCancel[] = {MENU_NO_ENTRY, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_StoreSummaryCancel[] = {MENU_STORE, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_GiveTakeItemCancel[] = {MENU_GIVE, MENU_TAKE_ITEM, MENU_MOVE_ITEM, MENU_CANCEL2};
static const u8 sPartyMenuAction_ReadTakeMailCancel[] = {MENU_READ, MENU_TAKE_MAIL, MENU_CANCEL2};
static const u8 sPartyMenuAction_RegisterSummaryCancel[] = {MENU_REGISTER, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_TradeSummaryCancel1[] = {MENU_TRADE1, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_TradeSummaryCancel2[] = {MENU_TRADE2, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_TakeItemTossCancel[] = {MENU_TAKE_ITEM, MENU_TOSS, MENU_CANCEL1};
static const u8 sPartyMenuAction_RotomCatalog[] = {MENU_CATALOG_BULB, MENU_CATALOG_OVEN, MENU_CATALOG_WASHING, MENU_CATALOG_FRIDGE, MENU_CATALOG_FAN, MENU_CATALOG_MOWER, MENU_CANCEL1};
static const u8 sPartyMenuAction_ZygardeCube[] = {MENU_CHANGE_FORM, MENU_CHANGE_ABILITY, MENU_CANCEL1};
static const u8 sPartyMenuAction_Hexorb[] = {MENU_INFLICT_SLEEP, MENU_INFLICT_POISON, MENU_INFLICT_BURN, MENU_INFLICT_FREEZE_FROSTBITE, MENU_INFLICT_PARALYSIS, MENU_CANCEL1};

static const u8 *const sPartyMenuActions[] =
{
    [ACTIONS_NONE]          = NULL,
    [ACTIONS_SWITCH]        = sPartyMenuAction_SummarySwitchCancel,
    [ACTIONS_SHIFT]         = sPartyMenuAction_ShiftSummaryCancel,
    [ACTIONS_SEND_OUT]      = sPartyMenuAction_SendOutSummaryCancel,
    [ACTIONS_ENTER]         = sPartyMenuAction_EnterSummaryCancel,
    [ACTIONS_NO_ENTRY]      = sPartyMenuAction_NoEntrySummaryCancel,
    [ACTIONS_STORE]         = sPartyMenuAction_StoreSummaryCancel,
    [ACTIONS_SUMMARY_ONLY]  = sPartyMenuAction_SummaryCancel,
    [ACTIONS_ITEM]          = sPartyMenuAction_GiveTakeItemCancel,
    [ACTIONS_MAIL]          = sPartyMenuAction_ReadTakeMailCancel,
    [ACTIONS_REGISTER]      = sPartyMenuAction_RegisterSummaryCancel,
    [ACTIONS_TRADE]         = sPartyMenuAction_TradeSummaryCancel1,
    [ACTIONS_SPIN_TRADE]    = sPartyMenuAction_TradeSummaryCancel2,
    [ACTIONS_TAKEITEM_TOSS] = sPartyMenuAction_TakeItemTossCancel,
    [ACTIONS_ROTOM_CATALOG] = sPartyMenuAction_RotomCatalog,
    [ACTIONS_ZYGARDE_CUBE]  = sPartyMenuAction_ZygardeCube,
    [ACTIONS_HEXORB]        = sPartyMenuAction_Hexorb,
};

static const u8 sPartyMenuActionCounts[] =
{
    [ACTIONS_NONE]          = 0,
    [ACTIONS_SWITCH]        = ARRAY_COUNT(sPartyMenuAction_SummarySwitchCancel),
    [ACTIONS_SHIFT]         = ARRAY_COUNT(sPartyMenuAction_ShiftSummaryCancel),
    [ACTIONS_SEND_OUT]      = ARRAY_COUNT(sPartyMenuAction_SendOutSummaryCancel),
    [ACTIONS_ENTER]         = ARRAY_COUNT(sPartyMenuAction_EnterSummaryCancel),
    [ACTIONS_NO_ENTRY]      = ARRAY_COUNT(sPartyMenuAction_NoEntrySummaryCancel),
    [ACTIONS_STORE]         = ARRAY_COUNT(sPartyMenuAction_StoreSummaryCancel),
    [ACTIONS_SUMMARY_ONLY]  = ARRAY_COUNT(sPartyMenuAction_SummaryCancel),
    [ACTIONS_ITEM]          = ARRAY_COUNT(sPartyMenuAction_GiveTakeItemCancel),
    [ACTIONS_MAIL]          = ARRAY_COUNT(sPartyMenuAction_ReadTakeMailCancel),
    [ACTIONS_REGISTER]      = ARRAY_COUNT(sPartyMenuAction_RegisterSummaryCancel),
    [ACTIONS_TRADE]         = ARRAY_COUNT(sPartyMenuAction_TradeSummaryCancel1),
    [ACTIONS_SPIN_TRADE]    = ARRAY_COUNT(sPartyMenuAction_TradeSummaryCancel2),
    [ACTIONS_TAKEITEM_TOSS] = ARRAY_COUNT(sPartyMenuAction_TakeItemTossCancel),
    [ACTIONS_ROTOM_CATALOG] = ARRAY_COUNT(sPartyMenuAction_RotomCatalog),
    [ACTIONS_ZYGARDE_CUBE]  = ARRAY_COUNT(sPartyMenuAction_ZygardeCube),
    [ACTIONS_HEXORB]        = ARRAY_COUNT(sPartyMenuAction_Hexorb),
};

static const struct WindowTemplate sPartyMenu_WinTemplate_YesNo =
{
    .bg = PARTY_BG_TEXT,
    .tilemapLeft = DISPLAY_TILE_WIDTH - PARTY_YESNO_WIDTH,
    .tilemapTop = PARTY_YESNO_TOP,
    .width = PARTY_YESNO_WIDTH,
    .height = PARTY_YESNO_HEIGHT,
    .paletteNum = PARTY_BG_PAL_WALLPAPER,
    .baseBlock = PARTY_TEXT_TILE_YESNO,
};

static const u8 *const sPartyMenu_Descriptions[] =
{
    [PARTYBOX_DESC_NO_USE]     = COMPOUND_STRING("No use"),
    [PARTYBOX_DESC_ABLE_3]     = COMPOUND_STRING("Able!"),
    [PARTYBOX_DESC_FIRST]      = COMPOUND_STRING("First"),
    [PARTYBOX_DESC_SECOND]     = COMPOUND_STRING("Second"),
    [PARTYBOX_DESC_THIRD]      = COMPOUND_STRING("Third"),
    [PARTYBOX_DESC_FOURTH]     = COMPOUND_STRING("Fourth"),
    [PARTYBOX_DESC_ABLE]       = COMPOUND_STRING("Able"),
    [PARTYBOX_DESC_NOT_ABLE]   = COMPOUND_STRING("Not able"),
    [PARTYBOX_DESC_ABLE_2]     = COMPOUND_STRING("Able"),
    [PARTYBOX_DESC_NOT_ABLE_2] = COMPOUND_STRING("Not able!"),
    [PARTYBOX_DESC_LEARNED]    = COMPOUND_STRING("Learned"),
    [PARTYBOX_DESC_HAVE]       = COMPOUND_STRING("Have"),
    [PARTYBOX_DESC_DONT_HAVE]  = COMPOUND_STRING("Don't have"),
};

static const u8 *const sPartyMenu_HeaderMessages[] =
{
    [PARTY_MSG_CHOOSE_MON]             = COMPOUND_STRING("Choose a Pokémon."),
    [PARTY_MSG_CHOOSE_MON_OR_CANCEL]   = COMPOUND_STRING("Choose a Pokémon or cancel."),
    [PARTY_MSG_CHOOSE_MON_AND_CONFIRM] = COMPOUND_STRING("Choose a Pokémon and confirm."),
    [PARTY_MSG_MOVE_TO_WHERE]          = gText_MoveToWhere,
    [PARTY_MSG_TEACH_WHICH_MON]        = COMPOUND_STRING("Teach which Pokémon?"),
    [PARTY_MSG_USE_ON_WHICH_MON]       = COMPOUND_STRING("Use on which Pokémon?"),
    [PARTY_MSG_GIVE_TO_WHICH_MON]      = COMPOUND_STRING("Give to which Pokémon"),
    [PARTY_MSG_CHOOSE_MON_2]           = COMPOUND_STRING("Choose a Pokémon."),
    [PARTY_MSG_DO_WHAT_WITH_MON]       = gText_DoWhatWithPokemon,
    [PARTY_MSG_RESTORE_WHICH_MOVE]     = gText_RestoreWhichMove,
    [PARTY_MSG_BOOST_PP_WHICH_MOVE]    = gText_BoostPP,
    [PARTY_MSG_DO_WHAT_WITH_ITEM]      = gText_DoWhatWithItem,
    [PARTY_MSG_DO_WHAT_WITH_MAIL]      = gText_DoWhatWithMail,
    [PARTY_MSG_WHICH_APPLIANCE]        = gText_WhichAppliance,
    [PARTY_MSG_CHOOSE_SECOND_FUSION]   = gText_NextFusionMon,
    [PARTY_MSG_WHICH_STATUS]           = COMPOUND_STRING("Inflict which status?"),
    [PARTY_MSG_NO_POKEMON]             = COMPOUND_STRING("You have no Pokémon."),
    [PARTY_MSG_CHOOSE_MON_FOR_BOX]     = COMPOUND_STRING("Send which Pokémon to the PC?"),
    [PARTY_MSG_MOVE_ITEM_WHERE]        = gText_MoveItemWhere,
};

static const u8 *const sPartyMenu_MsgBoxMessages[] =
{
    [PARTY_MSG_NOTHING_TO_CUT]         = gText_NothingToCut,
    [PARTY_MSG_CANT_SURF_HERE]         = gText_CantSurfHere,
    [PARTY_MSG_ALREADY_SURFING]        = gText_AlreadySurfing,
    [PARTY_MSG_CURRENT_TOO_FAST]       = gText_CurrentIsTooFast,
    [PARTY_MSG_ENJOY_CYCLING]          = gText_EnjoyCycling,
    [PARTY_MSG_ALREADY_IN_USE]         = gText_InUseAlready_PM,
    [PARTY_MSG_CANT_USE_HERE]          = gText_CantUseHere,
    [PARTY_MSG_NO_MON_FOR_BATTLE]      = gText_NoPokemonForBattle,
    [PARTY_MSG_NOT_ENOUGH_HP]          = gText_NotEnoughHp,
    [PARTY_MSG_X_MONS_ARE_NEEDED]      = gText_PokemonAreNeeded,
    [PARTY_MSG_MONS_CANT_BE_SAME]      = gText_PokemonCantBeSame,
    [PARTY_MSG_NO_SAME_HOLD_ITEMS]     = gText_NoIdenticalHoldItems,
    [PARTY_MSG_UNUSED]                 = gText_EmptyString2,
    [PARTY_MSG_ALREADY_HOLDING_ONE]    = gText_AlreadyHoldingOne,
};

// silicon color theme pals
static const u32 sPartyMenu_Gfx_Wallpaper[]         = INCGFX_U32("graphics/ui_menus/start_menu/tiles.png", ".4bpp.smol");
static const u16 sPartyMenu_Tilemap_Wallpaper[]     = INCBIN_U16("graphics/ui_menus/start_menu/wallpaper.bin");
static const u16 sMenuPalette_Red[]                 = INCGFX_U16("graphics/ui_menus/options_menu/palettes/red.pal", ".gbapal");
static const u16 sMenuPalette_Green[]               = INCGFX_U16("graphics/ui_menus/options_menu/palettes/green.pal", ".gbapal");
static const u16 sMenuPalette_Blue[]                = INCGFX_U16("graphics/ui_menus/options_menu/palettes/blue.pal", ".gbapal");
static const u16 sMenuPalette_Yellow[]              = INCGFX_U16("graphics/ui_menus/options_menu/palettes/yellow.pal", ".gbapal");
static const u16 sMenuPalette_Black[]               = INCGFX_U16("graphics/ui_menus/options_menu/palettes/black.pal", ".gbapal");
static const u16 sMenuPalette_White[]               = INCGFX_U16("graphics/ui_menus/options_menu/palettes/white.pal", ".gbapal");
static const u16 sMenuPalette_Platinum[]            = INCGFX_U16("graphics/ui_menus/options_menu/palettes/platinum.pal", ".gbapal");
static const u16 sMenuPalette_Scarlet[]             = INCGFX_U16("graphics/ui_menus/options_menu/palettes/scarlet.pal", ".gbapal");
static const u16 sMenuPalette_Violet[]              = INCGFX_U16("graphics/ui_menus/options_menu/palettes/violet.pal", ".gbapal");
static const u16 sMenuPalette[]                     = INCGFX_U16("graphics/ui_menus/options_menu/palette_custom.pal", ".gbapal");

// party BG tiles
static const u8 sPartyMenu_Gfx_Slot[]               = INCGFX_U8("graphics/ui_menus/party_menu/tiles.png", ".4bpp");
static const u8 sPartyMenu_Tilemap_SlotMain[]       = INCBIN_U8("graphics/ui_menus/party_menu/slot_main.bin");
static const u8 sPartyMenu_Tilemap_SlotMainEmpty[]  = INCBIN_U8("graphics/ui_menus/party_menu/slot_main_empty.bin");
static const u8 sPartyMenu_Tilemap_SlotMid[]        = INCBIN_U8("graphics/ui_menus/party_menu/slot_mid.bin");
static const u8 sPartyMenu_Tilemap_SlotMidEmpty[]   = INCBIN_U8("graphics/ui_menus/party_menu/slot_mid_empty.bin");
static const u16 sPartyMenu_Pal_Slot[]              = INCGFX_U16("graphics/ui_menus/party_menu/tiles.png", ".gbapal");

static const u16 sPartyMenu_Pal_HelperText[]        = INCGFX_U16("graphics/ui_menus/start_menu/text.pal", ".gbapal");

// party sprites
static const u16 sPartyMenu_Pal_Ui[]                = INCGFX_U16("graphics/ui_menus/party_menu/cursor.png", ".gbapal");
static const u32 sPartyMenu_Gfx_Cursor[]            = INCGFX_U32("graphics/ui_menus/party_menu/cursor.png", ".4bpp.smol");
static const u32 sPartyMenu_Gfx_HeldItem[]          = INCGFX_U32("graphics/ui_menus/party_menu/held_item.png", ".4bpp.smol");
static const u32 sPartyMenu_Gfx_Status[]            = INCGFX_U32("graphics/ui_menus/party_menu/status_icons.png", ".4bpp.smol");
static const u16 sPartyMenu_Pal_Status[]            = INCGFX_U16("graphics/ui_menus/party_menu/status_icons.png", ".gbapal");

static const struct {
    const u8 *tilemap;
    const u8 *emptyTilemap;
    u8 top;
    u8 height;
    u8 contentY;
} sPartyMenu_SlotRows[NUM_PARTY_SLOT_ROWS] =
{
    [PARTY_SLOT_ROW_TOP] =
    {
        .tilemap = sPartyMenu_Tilemap_SlotMain,
        .emptyTilemap = sPartyMenu_Tilemap_SlotMainEmpty,
        .top = 2,
        .height = PARTY_SLOT_MAIN_HEIGHT,
    },
    [PARTY_SLOT_ROW_MID] =
    {
        .tilemap = sPartyMenu_Tilemap_SlotMid,
        .emptyTilemap = sPartyMenu_Tilemap_SlotMidEmpty,
        .top = 7,
        .height = PARTY_SLOT_MID_HEIGHT,
        .contentY = PARTY_SLOT_MID_CONTENT_Y,
    },
    [PARTY_SLOT_ROW_BOTTOM] =
    {
        .tilemap = sPartyMenu_Tilemap_SlotMain,
        .emptyTilemap = sPartyMenu_Tilemap_SlotMainEmpty,
        .top = 13,
        .height = PARTY_SLOT_MAIN_HEIGHT,
    },
};

// relative to the slot window, before the row's contentY
static const struct
{
    struct PartySlotRect nickname;
    struct PartySlotRect gender;
    struct PartySlotRect level;
    struct PartySlotRect hp;
    struct PartySlotRect hpBar;
    struct PartySlotRect item;
    struct PartySlotRect description;
} sPartyMenu_SlotLayout =
{
    // {x, y, width, height}
    .nickname = {
        PARTY_SLOT_NICKNAME_X,
        PARTY_SLOT_NICKNAME_Y,
        PARTY_SLOT_NICKNAME_W,
        PARTY_SLOT_NICKNAME_H
    },
    .gender = {
        PARTY_SLOT_GENDER_X,
        PARTY_SLOT_GENDER_Y,
        PARTY_SLOT_GENDER_W,
        PARTY_SLOT_GENDER_H
    },
    .level = {
        PARTY_SLOT_LEVEL_X,
        PARTY_SLOT_LEVEL_Y,
        PARTY_SLOT_LEVEL_W,
        PARTY_SLOT_LEVEL_H
    },
    .hp = {
        PARTY_SLOT_HP_VALUE_X,
        PARTY_SLOT_HP_VALUE_Y,
        PARTY_SLOT_HP_VALUE_W,
        PARTY_SLOT_HP_VALUE_H
    },
    .hpBar = {
        PARTY_SLOT_HP_BAR_X,
        PARTY_SLOT_HP_BAR_Y,
        PARTY_SLOT_HP_BAR_W,
        PARTY_SLOT_HP_BAR_H
    },
    .item = {
        PARTY_SLOT_ITEM_X,
        PARTY_SLOT_ITEM_Y,
        PARTY_SLOT_ITEM_W,
        PARTY_SLOT_ITEM_H
    },
    .description = {
        PARTY_SLOT_DESC_X,
        PARTY_SLOT_DESC_Y,
        PARTY_SLOT_DESC_W,
        PARTY_SLOT_DESC_H
    },
};

// see pal 1 in tiles.png
static const u8 sPartyMenu_TextColors[NUM_PARTY_TEXT_COLORS][3] =
{
    // from pal 1 of tiles.png
    [COLORID_PARTY_BLUE]            = {0, 5, 10},
    [COLORID_PARTY_GREEN]           = {0, 5, 11},
    [COLORID_PARTY_YELLOW]          = {0, 5, 12},
    [COLORID_PARTY_RED]             = {0, 5, 13},
    [COLORID_PARTY_GREY]            = {0, 5, 14},
    [COLORID_PARTY_WHITE]           = {0, 5, 15},
    // from text.pal
    [COLORID_PARTY_HELPER]          = {0, 1,  0},
    // from the wallpaper pal
    [COLORID_PARTY_MENU_BLACK]      = {0, 3,  1},
    [COLORID_PARTY_MENU_HIGHLIGHT]  = {0, 3,  5},
};

// {frame, empty, fill} per HP_BAR_* level
static const u8 sPartyMenu_HpBarColors[][3] =
{
    [HP_BAR_EMPTY]  = {4, 14, 13},
    [HP_BAR_RED]    = {4, 14, 13},  // red
    [HP_BAR_YELLOW] = {4, 14, 12},  // yellow
    [HP_BAR_GREEN]  = {4, 14, 11},  // green
    [HP_BAR_FULL]   = {4, 14, 11},  // green
};

static const struct CompressedSpriteSheet sPartyMenu_SpriteSheet_Cursor =
{
    .data = sPartyMenu_Gfx_Cursor,
    .size = TILE_OFFSET_4BPP(NUM_PARTY_CURSOR_CORNERS * PARTY_CURSOR_NUM_FRAMES),
    .tag = PARTY_GFXTAG_CURSOR,
};

static const struct SpritePalette sPartyMenu_SpritePalette_Ui =
{
    .data = sPartyMenu_Pal_Ui,
    .tag = PARTY_PALTAG_UI,
};

static const struct OamData sPartyMenu_Oam_Cursor =
{
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
    .priority = PARTY_SPRITE_PRIORITY_MAIN,
};

static const union AnimCmd sPartyMenu_Anim_Cursor[] =
{
    ANIMCMD_FRAME(0, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_FRAME(1, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_FRAME(2, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_FRAME(1, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_JUMP(0)
};

static const struct Subsprite sPartyMenu_Subsprites_Cursor[NUM_PARTY_CURSOR_CORNERS] =
{
    [PARTY_CURSOR_CORNER_TOP_LEFT] =
    {
        .x = -PARTY_CURSOR_HALF_SIZE,
        .y = -PARTY_CURSOR_HALF_SIZE,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = PARTY_CURSOR_CORNER_TOP_LEFT * PARTY_CURSOR_NUM_FRAMES,
    },
    [PARTY_CURSOR_CORNER_TOP_RIGHT] =
    {
        .x = PARTY_CURSOR_HALF_SIZE - PARTY_CURSOR_CORNER_SIZE,
        .y = -PARTY_CURSOR_HALF_SIZE,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = PARTY_CURSOR_CORNER_TOP_RIGHT * PARTY_CURSOR_NUM_FRAMES,
    },
    [PARTY_CURSOR_CORNER_BOTTOM_LEFT] =
    {
        .x = -PARTY_CURSOR_HALF_SIZE,
        .y = PARTY_CURSOR_HALF_SIZE - PARTY_CURSOR_CORNER_SIZE,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = PARTY_CURSOR_CORNER_BOTTOM_LEFT * PARTY_CURSOR_NUM_FRAMES,
    },
    [PARTY_CURSOR_CORNER_BOTTOM_RIGHT] =
    {
        .x = PARTY_CURSOR_HALF_SIZE - PARTY_CURSOR_CORNER_SIZE,
        .y = PARTY_CURSOR_HALF_SIZE - PARTY_CURSOR_CORNER_SIZE,
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .tileOffset = PARTY_CURSOR_CORNER_BOTTOM_RIGHT * PARTY_CURSOR_NUM_FRAMES,
    },
};

static const struct SubspriteTable sPartyMenu_SubspriteTable_Cursor[] =
{
    { ARRAY_COUNT(sPartyMenu_Subsprites_Cursor), sPartyMenu_Subsprites_Cursor },
};

static const union AnimCmd *const sPartyMenu_Anims_Cursor[] =
{
    sPartyMenu_Anim_Cursor,
};

static const struct SpriteTemplate sPartyMenu_SpriteTemplate_Cursor =
{
    .tileTag = PARTY_GFXTAG_CURSOR,
    .paletteTag = PARTY_PALTAG_UI,
    .oam = &sPartyMenu_Oam_Cursor,
    .anims = sPartyMenu_Anims_Cursor,
};

static const struct CompressedSpriteSheet sPartyMenu_SpriteSheet_HeldItem =
{
    .data = sPartyMenu_Gfx_HeldItem,
    .size = TILE_SIZE_4BPP,
    .tag = PARTY_GFXTAG_HELD_ITEM,
};

static const struct OamData sPartyMenu_Oam_HeldItem =
{
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
    .priority = PARTY_SPRITE_PRIORITY_MAIN,
};

static const struct SpriteTemplate sPartyMenu_SpriteTemplate_HeldItem =
{
    .tileTag = PARTY_GFXTAG_HELD_ITEM,
    .paletteTag = PARTY_PALTAG_UI,
    .oam = &sPartyMenu_Oam_HeldItem,
};

static const struct CompressedSpriteSheet sPartyMenu_SpriteSheet_Status =
{
    .data = sPartyMenu_Gfx_Status,
    .size = TILE_OFFSET_4BPP(PARTY_STATUS_ICON_COUNT * PARTY_STATUS_ICON_TILES),
    .tag = PARTY_GFXTAG_STATUS,
};

static const struct SpritePalette sPartyMenu_SpritePalette_Status =
{
    .data = sPartyMenu_Pal_Status,
    .tag = PARTY_PALTAG_STATUS,
};

static const struct OamData sPartyMenu_Oam_Status =
{
    .objMode = ST_OAM_OBJ_BLEND,
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .priority = PARTY_SPRITE_PRIORITY_MAIN,
};

static const union AnimCmd sPartyMenu_Anim_StatusPoison[] =
{
    ANIMCMD_FRAME(0 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd sPartyMenu_Anim_StatusParalysis[] =
{
    ANIMCMD_FRAME(1 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd sPartyMenu_Anim_StatusSleep[] =
{
    ANIMCMD_FRAME(2 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd sPartyMenu_Anim_StatusFreeze[] =
{
    ANIMCMD_FRAME(3 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd sPartyMenu_Anim_StatusBurn[] =
{
    ANIMCMD_FRAME(4 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd sPartyMenu_Anim_StatusPokerus[] =
{
    ANIMCMD_FRAME(5 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd sPartyMenu_Anim_StatusFaint[] =
{
    ANIMCMD_FRAME(6 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd sPartyMenu_Anim_StatusFrostbite[] =
{
    ANIMCMD_FRAME(7 * PARTY_STATUS_ICON_TILES, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sPartyMenu_Anims_Status[] =
{
    sPartyMenu_Anim_StatusPoison,
    sPartyMenu_Anim_StatusParalysis,
    sPartyMenu_Anim_StatusSleep,
    sPartyMenu_Anim_StatusFreeze,
    sPartyMenu_Anim_StatusBurn,
    sPartyMenu_Anim_StatusPokerus,
    sPartyMenu_Anim_StatusFaint,
    sPartyMenu_Anim_StatusFrostbite,
};

static const struct SpriteTemplate sPartyMenu_SpriteTemplate_Status =
{
    .tileTag = PARTY_GFXTAG_STATUS,
    .paletteTag = PARTY_PALTAG_STATUS,
    .oam = &sPartyMenu_Oam_Status,
    .anims = sPartyMenu_Anims_Status,
};

static const u16 *const sPartyMenu_Pals_Wallpaper[VISUAL_OPTION_COLOR_COUNT] =
{
    [VISUAL_OPTION_COLOR_RED]      = sMenuPalette_Red,
    [VISUAL_OPTION_COLOR_GREEN]    = sMenuPalette_Green,
    [VISUAL_OPTION_COLOR_BLUE]     = sMenuPalette_Blue,
    [VISUAL_OPTION_COLOR_YELLOW]   = sMenuPalette_Yellow,
    [VISUAL_OPTION_COLOR_BLACK]    = sMenuPalette_Black,
    [VISUAL_OPTION_COLOR_WHITE]    = sMenuPalette_White,
    [VISUAL_OPTION_COLOR_PLATINUM] = sMenuPalette_Platinum,
    [VISUAL_OPTION_COLOR_SCARLET]  = sMenuPalette_Scarlet,
    [VISUAL_OPTION_COLOR_VIOLET]   = sMenuPalette_Violet,
    [VISUAL_OPTION_COLOR_CUSTOM]   = sMenuPalette,
};

// vanilla assets used by trade, dexnav and battle_debug
// mont note: candidates for consodlidation
static const u32 sHeldItemGfx[] = INCGFX_U32("graphics/party_menu/hold_icons.png", ".4bpp");
const u16 gHeldItemPalette[] = INCGFX_U16("graphics/party_menu/hold_icons.png", ".gbapal");

static const struct OamData sOamData_HeldItem =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(8x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(8x8),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sSpriteAnim_HeldItem[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HeldMail[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_HeldItem[] =
{
    sSpriteAnim_HeldItem,
    sSpriteAnim_HeldMail,
};

const struct SpriteSheet gSpriteSheet_HeldItem =
{
    .data = sHeldItemGfx, .size = sizeof(sHeldItemGfx), .tag = TAG_HELD_ITEM
};

static const struct SpritePalette sSpritePalette_HeldItem =
{
    .data = gHeldItemPalette, .tag = TAG_HELD_ITEM
};

static const struct SpriteTemplate sSpriteTemplate_HeldItem =
{
    .tileTag = TAG_HELD_ITEM,
    .paletteTag = TAG_HELD_ITEM,
    .oam = &sOamData_HeldItem,
    .anims = sSpriteAnimTable_HeldItem,
};

static const struct OamData sOamData_StatusCondition =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x8),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0
};

static const union AnimCmd sSpriteAnim_StatusPoison[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusParalyzed[] =
{
    ANIMCMD_FRAME(4, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusSleep[] =
{
    ANIMCMD_FRAME(8, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusFrozen[] =
{
    ANIMCMD_FRAME(12, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusBurn[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusPokerus[] =
{
    ANIMCMD_FRAME(20, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusFaint[] =
{
    ANIMCMD_FRAME(24, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusFrostbite[] =
{
    ANIMCMD_FRAME(28, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteTemplate_StatusCondition[] =
{
    sSpriteAnim_StatusPoison,
    sSpriteAnim_StatusParalyzed,
    sSpriteAnim_StatusSleep,
    sSpriteAnim_StatusFrozen,
    sSpriteAnim_StatusBurn,
    sSpriteAnim_StatusPokerus,
    sSpriteAnim_StatusFaint,
    sSpriteAnim_StatusFrostbite
};

static const struct CompressedSpriteSheet sSpriteSheet_StatusIcons =
{
    gStatusGfx_Icons, 0x400, TAG_STATUS_ICONS
};

static const struct SpritePalette sSpritePalette_StatusIcons =
{
    gStatusPal_Icons, TAG_STATUS_ICONS
};

const struct SpriteTemplate gSpriteTemplate_StatusIcons =
{
    .tileTag = TAG_STATUS_ICONS,
    .paletteTag = TAG_STATUS_ICONS,
    .oam = &sOamData_StatusCondition,
    .anims = sSpriteTemplate_StatusCondition,
};

