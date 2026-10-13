static const struct BgTemplate sPartyMenu_BackgroundTemplates[] =
{
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
    DUMMY_WIN_TEMPLATE
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
};

// see pal 1 in tiles.png
static const u8 sPartyMenu_TextColors[NUM_PARTY_TEXT_COLORS][3] =
{
    // from pal 1 of tiles.png
    [COLORID_PARTY_WHITE]   = {0, 5,  4},
    [COLORID_PARTY_BLUE]    = {0, 5,  1},
    [COLORID_PARTY_GREEN]   = {0, 5, 12},
    [COLORID_PARTY_YELLOW]  = {0, 5, 13},
    [COLORID_PARTY_RED]     = {0, 5, 14},
    [COLORID_PARTY_GREY]    = {0, 5, 15},
};

// {frame, empty, fill} per HP_BAR_* level
static const u8 sPartyMenu_HpBarColors[][3] =
{
    [HP_BAR_EMPTY]  = {4, 15, 14},
    [HP_BAR_RED]    = {4, 15, 14},  // red
    [HP_BAR_YELLOW] = {4, 15, 13},  // yellow
    [HP_BAR_GREEN]  = {4, 15, 12},  // green
    [HP_BAR_FULL]   = {4, 15, 12},  // green
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
