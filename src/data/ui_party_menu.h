static const struct BgTemplate sPartyMenu_BackgroundTemplates[] =
{
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

// silicon color theme pals
static const u32 sPartyMenu_WallpaperTiles[]            = INCGFX_U32("graphics/ui_menus/start_menu/tiles.png", ".4bpp.smol");
static const u16 sPartyMenu_WallpaperTilemap[]          = INCBIN_U16("graphics/ui_menus/start_menu/wallpaper.bin");
static const u16 sPartyMenu_WallpaperPal_Red[]          = INCGFX_U16("graphics/ui_menus/options_menu/palettes/red.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Green[]        = INCGFX_U16("graphics/ui_menus/options_menu/palettes/green.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Blue[]         = INCGFX_U16("graphics/ui_menus/options_menu/palettes/blue.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Yellow[]       = INCGFX_U16("graphics/ui_menus/options_menu/palettes/yellow.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Black[]        = INCGFX_U16("graphics/ui_menus/options_menu/palettes/black.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_White[]        = INCGFX_U16("graphics/ui_menus/options_menu/palettes/white.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Platinum[]     = INCGFX_U16("graphics/ui_menus/options_menu/palettes/platinum.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Scarlet[]      = INCGFX_U16("graphics/ui_menus/options_menu/palettes/scarlet.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Violet[]       = INCGFX_U16("graphics/ui_menus/options_menu/palettes/violet.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Custom[]       = INCGFX_U16("graphics/ui_menus/options_menu/palette_custom.pal", ".gbapal");

// party BG tiles
static const u32 sPartyMenu_Tiles[]                     = INCGFX_U32("graphics/ui_menus/party_menu/tiles.png", ".4bpp.smol");
static const u16 sPartyMenu_Palette[]                   = INCGFX_U16("graphics/ui_menus/party_menu/tiles.png", ".gbapal");
static const u8 sPartyMenu_SlotMainTilemap[]            = INCBIN_U8("graphics/ui_menus/party_menu/slot_main.bin");
static const u8 sPartyMenu_SlotMainEmptyTilemap[]       = INCBIN_U8("graphics/ui_menus/party_menu/slot_main_empty.bin");
static const u8 sPartyMenu_SlotMidTilemap[]             = INCBIN_U8("graphics/ui_menus/party_menu/slot_mid.bin");
static const u8 sPartyMenu_SlotMidEmptyTilemap[]        = INCBIN_U8("graphics/ui_menus/party_menu/slot_mid_empty.bin");

// party sprites
static const u32 sPartyMenu_CursorTiles[]               = INCGFX_U32("graphics/ui_menus/party_menu/cursor.png", ".4bpp.smol");
static const u16 sPartyMenu_CursorPalette[]             = INCGFX_U16("graphics/ui_menus/party_menu/cursor.png", ".gbapal");

static const struct {
    const u8 *tilemap;
    const u8 *emptyTilemap;
    u8 top;
    u8 height;
} sPartyMenu_SlotRows[NUM_PARTY_SLOT_ROWS] =
{
    [PARTY_SLOT_ROW_TOP] =
    {
        .tilemap = sPartyMenu_SlotMainTilemap,
        .emptyTilemap = sPartyMenu_SlotMainEmptyTilemap,
        .top = 2,
        .height = PARTY_SLOT_MAIN_HEIGHT,
    },
    [PARTY_SLOT_ROW_MID] =
    {
        .tilemap = sPartyMenu_SlotMidTilemap,
        .emptyTilemap = sPartyMenu_SlotMidEmptyTilemap,
        .top = 7,
        .height = PARTY_SLOT_MID_HEIGHT,
    },
    [PARTY_SLOT_ROW_BOTTOM] =
    {
        .tilemap = sPartyMenu_SlotMainTilemap,
        .emptyTilemap = sPartyMenu_SlotMainEmptyTilemap,
        .top = 13,
        .height = PARTY_SLOT_MAIN_HEIGHT,
    },
};

static const struct CompressedSpriteSheet sPartyMenu_CursorSpriteSheet =
{
    .data = sPartyMenu_CursorTiles,
    .size = TILE_OFFSET_4BPP(NUM_PARTY_CURSOR_CORNERS * PARTY_CURSOR_NUM_FRAMES),
    .tag = PARTY_TAG_CURSOR,
};

static const struct SpritePalette sPartyMenu_CursorSpritePalette =
{
    .data = sPartyMenu_CursorPalette,
    .tag = PARTY_TAG_CURSOR,
};

static const struct OamData sPartyMenu_CursorOam =
{
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
    .priority = PARTY_OBJ_PRIORITY,
};

static const union AnimCmd sPartyMenu_CursorAnim[] =
{
    ANIMCMD_FRAME(0, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_FRAME(1, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_FRAME(2, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_FRAME(1, PARTY_CURSOR_FRAME_DURATION),
    ANIMCMD_JUMP(0)
};

static const struct Subsprite sPartyMenu_CursorSubsprites[NUM_PARTY_CURSOR_CORNERS] =
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

static const struct SubspriteTable sPartyMenu_CursorSubspriteTable[] =
{
    { ARRAY_COUNT(sPartyMenu_CursorSubsprites), sPartyMenu_CursorSubsprites },
};

static const union AnimCmd *const sPartyMenu_CursorAnims[] =
{
    sPartyMenu_CursorAnim,
};

static const struct SpriteTemplate sPartyMenu_CursorSpriteTemplate =
{
    .tileTag = PARTY_TAG_CURSOR,
    .paletteTag = PARTY_TAG_CURSOR,
    .oam = &sPartyMenu_CursorOam,
    .anims = sPartyMenu_CursorAnims,
};

static const u16 *const sPartyMenu_WallpaperPalettes[VISUAL_OPTION_COLOR_COUNT] =
{
    [VISUAL_OPTION_COLOR_RED]      = sPartyMenu_WallpaperPal_Red,
    [VISUAL_OPTION_COLOR_GREEN]    = sPartyMenu_WallpaperPal_Green,
    [VISUAL_OPTION_COLOR_BLUE]     = sPartyMenu_WallpaperPal_Blue,
    [VISUAL_OPTION_COLOR_YELLOW]   = sPartyMenu_WallpaperPal_Yellow,
    [VISUAL_OPTION_COLOR_BLACK]    = sPartyMenu_WallpaperPal_Black,
    [VISUAL_OPTION_COLOR_WHITE]    = sPartyMenu_WallpaperPal_White,
    [VISUAL_OPTION_COLOR_PLATINUM] = sPartyMenu_WallpaperPal_Platinum,
    [VISUAL_OPTION_COLOR_SCARLET]  = sPartyMenu_WallpaperPal_Scarlet,
    [VISUAL_OPTION_COLOR_VIOLET]   = sPartyMenu_WallpaperPal_Violet,
    [VISUAL_OPTION_COLOR_CUSTOM]   = sPartyMenu_WallpaperPal_Custom,
};
