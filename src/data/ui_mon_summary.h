static const struct BgTemplate sSummarySetup_BgTemplates[NUM_SUMMARY_BACKGROUNDS] =
{
    {
        .bg = SUMMARY_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = SUMMARY_BG_PAGE_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 25,
        .priority = 0
    },
    {
        .bg = SUMMARY_BG_PAGE_1,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .screenSize = 1,
        .priority = 2
    },
    {
        .bg = SUMMARY_BG_PAGE_2,
        .charBaseIndex = 2,
        .mapBaseIndex = 26,
        .screenSize = 1,
        .priority = 2
    },
};

static const struct WindowTemplate sSummarySetup_MainWindows[NUM_SUMMARY_MAIN_WINDOWS + 1] =
{
    [SUMMARY_MAIN_WIN_HEADER] =
    {
        .bg = SUMMARY_BG_TEXT,
        .tilemapLeft = 23,
        .tilemapTop = 0,
        .width = 4,
        .height = 4,
    },

    [SUMMARY_MAIN_WIN_HELP_BAR] =
    {
        .bg = SUMMARY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = DISPLAY_TILE_WIDTH,
        .height = 2,
    },

    [SUMMARY_MAIN_WIN_PAGE_TEXT] =
    {
        .bg = SUMMARY_BG_PAGE_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = DISPLAY_TILE_WIDTH,
        .height = DISPLAY_TILE_HEIGHT,
    },

    [SUMMARY_MAIN_WIN_TEXT_BOX] =
    {
        .bg = SUMMARY_BG_TEXT,
        .tilemapLeft = 1,
        .tilemapTop = 11,
        .width = DISPLAY_TILE_WIDTH - 2,
        .height = 6,
        .paletteNum = SUMMARY_TEXT_BOX_PALETTE
    },

    DUMMY_WIN_TEMPLATE
};

static const struct MonSummarySprite sSummarySetup_MainSprites[] =
{
    {
        .id = SUMMARY_MAIN_SPRITE_SHINY_SYMBOL,
        .oam = &(const struct OamData){
            .shape = SPRITE_SHAPE(16x16), .size = SPRITE_SIZE(16x16),
            .priority = 0
        },
        .tileTag = TAG_SUMMARY_SHINY_SYMBOL,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/shiny_symbol.4bpp.smol"),
        .anims = gDummySpriteAnimTable,
        .callback = SpriteCB_SummarySprite_ShinySymbol
    },
    {
        .id = SUMMARY_MAIN_SPRITE_HP_BAR,
        .oam = &(const struct OamData){
            .shape = SPRITE_SHAPE(64x32), .size = SPRITE_SIZE(64x32),
            .priority = 0
        },
        .tileTag = TAG_SUMMARY_HP_BAR,
        .gfx = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/hp_bar.4bpp"),
        .size = (64 * 32) / 2,
        .anims = gDummySpriteAnimTable,
        .callback = SpriteCB_SummarySprite_HpBar
    },
    {
        .id = SUMMARY_MAIN_SPRITE_EXP_BAR,
        .subsprites = (const struct SubspriteTable[]){
            {
                .subspriteCount = 2,
                .subsprites = (const struct Subsprite[]){
                    {
                        .x = 0, .y = 0,
                        .shape = SPRITE_SHAPE(32x8), .size = SPRITE_SIZE(32x8),
                        .tileOffset = 0
                    },
                    {
                        .x = 32, .y = 0,
                        .shape = SPRITE_SHAPE(32x8), .size = SPRITE_SIZE(32x8),
                        .tileOffset = 4
                    },
                },
            },
            { 0 },
        },
        .oam = &(const struct OamData){
            .shape = SPRITE_SHAPE(8x8), .size = SPRITE_SIZE(8x8),
            .priority = 0
        },
        .tileTag = TAG_SUMMARY_EXP_BAR,
        .gfx = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/exp_bar.4bpp"),
        .size = (64 * 8) / 2,
        .anims = gDummySpriteAnimTable,
        .callback = SpriteCB_SummarySprite_ExpBar
    },
    {
        .id = SUMMARY_MAIN_SPRITE_FRIENDSHIP_BAR,
        .subsprites = (const struct SubspriteTable[]){
            {
                .subspriteCount = 2,
                .subsprites = (const struct Subsprite[]){
                    {
                        .x = 0, .y = 0,
                        .shape = SPRITE_SHAPE(32x8), .size = SPRITE_SIZE(32x8),
                        .tileOffset = 0
                    },
                    {
                        .x = 32, .y = 0,
                        .shape = SPRITE_SHAPE(8x8), .size = SPRITE_SIZE(8x8),
                        .tileOffset = 4
                    },
                },
            },
            { 0 },
        },
        .oam = &(const struct OamData){
            .shape = SPRITE_SHAPE(8x8), .size = SPRITE_SIZE(64x32),
            .priority = 0
        },
        .tileTag = TAG_SUMMARY_FRIENDSHIP_BAR,
        .gfx = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/friendship_bar.4bpp"),
        .size = (48 * 8) / 2,
        .anims = gDummySpriteAnimTable,
        .callback = SpriteCB_SummarySprite_FriendshipBar
    },
};

static const u16 sSummarySprite_HpBarColors[] = INCBIN_U16("graphics/ui_menus/mon_summary/hp_bar_states.gbapal");

static const struct Subsprite sSummarySprite_128x16Subsprites[] =
{
    {
        .x = 0, .y = 0,
        .shape = SPRITE_SHAPE(32x16), .size = SPRITE_SIZE(32x16),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 32, .y = 0,
        .shape = SPRITE_SHAPE(32x16), .size = SPRITE_SIZE(32x16),
        .tileOffset = 8,
        .priority = 1
    },
    {
        .x = 64, .y = 0,
        .shape = SPRITE_SHAPE(32x16), .size = SPRITE_SIZE(32x16),
        .tileOffset = 16,
        .priority = 1
    },
    {
        .x = 96, .y = 0,
        .shape = SPRITE_SHAPE(32x16), .size = SPRITE_SIZE(32x16),
        .tileOffset = 24,
        .priority = 1
    },
};

static const struct SubspriteTable sSummarySprite_128x16SubspriteTable[] =
{
    {
        .subspriteCount = ARRAY_COUNT(sSummarySprite_128x16Subsprites),
        .subsprites = sSummarySprite_128x16Subsprites
    },
    { 0, NULL }
};

// SpriteFrameImage does not work well with gDummySpriteAnimTable
static const union AnimCmd *const sSummarySprite_FrameImageAnimTemplate[] =
{
    (const union AnimCmd[]){
        ANIMCMD_FRAME(0, 1),
        ANIMCMD_END
    },
};

static const TaskFunc sSummaryMode_InputFuncs[NUM_SUMMARY_MODES] =
{
    [SUMMARY_MODE_DEFAULT] = Task_SummaryMode_DefaultInput,
};

static const struct MonSummaryPageInfo sSummaryPage_Info[NUM_SUMMARY_PAGES] =
{
    [SUMMARY_PAGE_INFOS] =
    {
        .name = COMPOUND_STRING("Info"),
        .helpBar = (const u8 *const[NUM_SUMMARY_INFOS_SUB_MODES]){
            [SUMMARY_INFOS_SUB_MODE_NONE]           = COMPOUND_STRING("{A_BUTTON} Details {B_BUTTON} Exit"),
            [SUMMARY_INFOS_SUB_MODE_DESC_SWITCH]    = COMPOUND_STRING("{DPAD_NONE} Cycle {B_BUTTON} Cancel"),
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/infos.bin.smolTM"),
        .mainSpriteCoords =
        {
            [SUMMARY_MAIN_SPRITE_SHINY_SYMBOL]   = { SUMMARY_INFOS_HEADER_SHINY_X,          SUMMARY_INFOS_HEADER_SHINY_Y },
            [SUMMARY_MAIN_SPRITE_HP_BAR]         = { SUMMARY_INFOS_HEADER_HP_BAR_X,         SUMMARY_INFOS_HEADER_HP_BAR_Y },
            [SUMMARY_MAIN_SPRITE_EXP_BAR]        = { SUMMARY_INFOS_HEADER_EXP_BAR_X,        SUMMARY_INFOS_HEADER_EXP_BAR_Y },
            [SUMMARY_MAIN_SPRITE_FRIENDSHIP_BAR] = { SUMMARY_INFOS_HEADER_FRIENDSHIP_BAR_X, SUMMARY_INFOS_HEADER_FRIENDSHIP_BAR_Y },
        },
        .input = Task_SummaryInput_InfosInput,
        .handleFrontEnd = InfosPage_HandleFrontEnd,
        .handleUpdateText = InfosPage_HandleUpdateText,
    },
    [SUMMARY_PAGE_STATS] =
    {
        .name = COMPOUND_STRING("Stats"),
        .helpBar = (const u8 *const[NUM_SUMMARY_STATS_SUB_MODES]){
            [SUMMARY_STATS_SUB_MODE_NONE]           = COMPOUND_STRING("{A_BUTTON} Edit {B_BUTTON} Exit"),
            [SUMMARY_STATS_SUB_MODE_SELECT_ROW]     = COMPOUND_STRING("{DPAD_UPDOWN} Navigate {A_BUTTON} Select {B_BUTTON} Cancel"),
            [SUMMARY_STATS_SUB_MODE_ADJUST_VALUE]   = COMPOUND_STRING("{DPAD_UPDOWN} +1/-1 {DPAD_LEFTRIGHT} +10/-10 {L_BUTTON} Min {R_BUTTON} Max {B_BUTTON} Cancel"),
            [SUMMARY_STATS_SUB_MODE_ERROR]          = COMPOUND_STRING("Press any buttons to continue."),
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/stats.bin.smolTM"),
        .mainSpriteCoords =
        {
            [SUMMARY_MAIN_SPRITE_SHINY_SYMBOL]   = { SUMMARY_STATS_HEADER_SHINY_X,          SUMMARY_STATS_HEADER_SHINY_Y },
            [SUMMARY_MAIN_SPRITE_HP_BAR]         = { SUMMARY_STATS_HEADER_HP_BAR_X,         SUMMARY_STATS_HEADER_HP_BAR_Y },
            [SUMMARY_MAIN_SPRITE_EXP_BAR]        = { SUMMARY_STATS_HEADER_EXP_BAR_X,        SUMMARY_STATS_HEADER_EXP_BAR_Y },
            [SUMMARY_MAIN_SPRITE_FRIENDSHIP_BAR] = { SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_X, SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_Y },
        },
        .input = Task_SummaryInput_StatsInput,
        .handleFrontEnd = StatsPage_HandleFrontEnd,
        .handleUpdateText = StatsPage_HandleUpdateText,
    },
    [SUMMARY_PAGE_MOVES] =
    {
        .name = COMPOUND_STRING("Moves"),
        .helpBar = (const u8 *const[]){
            [0] = COMPOUND_STRING("{A_BUTTON} Options {B_BUTTON} Exit"),
            [1] = COMPOUND_STRING("{A_BUTTON} Select {B_BUTTON} Cancel"),
            [2] = COMPOUND_STRING("{DPAD_UPDOWN} Move {A_BUTTON} Confirm {B_BUTTON} Cancel"),
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/moves.bin.smolTM"),
        .mainSpriteCoords =
        {
            [SUMMARY_MAIN_SPRITE_SHINY_SYMBOL]   = { SUMMARY_MOVES_HEADER_SHINY_X,          SUMMARY_MOVES_HEADER_SHINY_Y },
            [SUMMARY_MAIN_SPRITE_HP_BAR]         = { SUMMARY_MOVES_HEADER_HP_BAR_X,         SUMMARY_MOVES_HEADER_HP_BAR_Y },
        },
        .input = Task_SummaryInput_MovesInput,
        .handleFrontEnd = MovesPage_HandleFrontEnd,
        .handleUpdateText = MovesPage_HandleUpdateText,
    },
};

static const struct OamData sSummaryPage_MonIconOam =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

static const u32 sMonSummary_MainTiles[] = INCBIN_U32("graphics/ui_menus/mon_summary/pages/tiles.4bpp.smol");
static const u32 sMonSummary_MainTilemap[] = INCBIN_U32("graphics/ui_menus/mon_summary/pages/blank.bin");
static const u16 sMonSummary_MainPalette[] = INCBIN_U16("graphics/ui_menus/mon_summary/pages/tiles.gbapal");

static const u8 sSummaryPrint_PageTabsBlit[] = INCBIN_U8("graphics/ui_menus/mon_summary/page_tabs.4bpp");
static const u8 sSummaryPrint_StatusSymbolsBlit[] = INCBIN_U8("graphics/ui_menus/mon_summary/status_symbols.4bpp");
static const u8 sSummaryPrint_MonMarkingsBlit[] = INCBIN_U8("graphics/ui_menus/mon_summary/mon_markings.4bpp");
static const u8 sSummaryPrint_FontColors[NUM_SUMMARY_FNTCLRS][3] =
{
    [SUMMARY_FNTCLR_INTERFACE] = { 0, 2, 1 },
    [SUMMARY_FNTCLR_MALE]      = { 0, 2, 15 }, // SUMMARY_FNTCLR_NEG_STAT
    [SUMMARY_FNTCLR_FEMALE]    = { 0, 2, 12 }, // SUMMARY_FNTCLR_POS_STAT
    [SUMMARY_FNTCLR_HELP_BAR]  = { 0, 1, 0 },
    [SUMMARY_FNTCLR_TEXT_BOX]  = { 1, 2, 3 },
};

static const u8 *const sInfosPageGeneral_BerryFlavorNames[FLAVOR_COUNT] =
{
    [FLAVOR_SPICY]  = COMPOUND_STRING("Spicy"),
    [FLAVOR_DRY]    = COMPOUND_STRING("Dry"),
    [FLAVOR_SWEET]  = COMPOUND_STRING("Sweet"),
    [FLAVOR_BITTER] = COMPOUND_STRING("Bitter"),
    [FLAVOR_SOUR]   = COMPOUND_STRING("Sour"),
};

static const struct SpriteTemplate sInfosPageMisc_CursorSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .priority = 1
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_END
        },
        (const union AnimCmd[]){
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_END
        },
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/infos/cursor.4bpp"),
        .relativeFrames = TRUE,
        .size = (128 * 16) / 2,
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_InfosPageMisc_Cursor
};

static const struct SpriteTemplate sInfosPageMisc_ScrollIndicatorSpriteTemplate =
{
    .tileTag = TAG_SUMMARY_CURSOR_2,
    .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(16x16), .size = SPRITE_SIZE(16x16),
        .priority = 1
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(4, 30),
            ANIMCMD_JUMP(0)
        },
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/infos/scroll_indicator.4bpp.smol"),
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_InfosPageMisc_ScrollIndicator
};

// 11x9
static const struct SpriteTemplate sStatsPageHeader_TypeSpriteTemplate =
{
    .tileTag = TAG_SUMMARY_TYPES,
    .paletteTag = TAG_NONE,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
    },
    .anims = (const union AnimCmd *const[]){
        #define TYPE_ANIM(type) [TYPE_ ##type] = (const union AnimCmd[]){ ANIMCMD_FRAME(4 * TYPE_ ##type, 1), ANIMCMD_END }
        TYPE_ANIM(NONE),
        TYPE_ANIM(NORMAL),
        TYPE_ANIM(FIGHTING),
        TYPE_ANIM(FLYING),
        TYPE_ANIM(POISON),
        TYPE_ANIM(GROUND),
        TYPE_ANIM(ROCK),
        TYPE_ANIM(BUG),
        TYPE_ANIM(GHOST),
        TYPE_ANIM(STEEL),
        TYPE_ANIM(MYSTERY),
        TYPE_ANIM(FIRE),
        TYPE_ANIM(WATER),
        TYPE_ANIM(GRASS),
        TYPE_ANIM(ELECTRIC),
        TYPE_ANIM(PSYCHIC),
        TYPE_ANIM(ICE),
        TYPE_ANIM(DRAGON),
        TYPE_ANIM(DARK),
        TYPE_ANIM(FAIRY),
        TYPE_ANIM(STELLAR),
        #undef TYPE_ANIM
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct CompressedSpriteSheet sStatsPageHeader_TypeSpriteSheet =
{
    .data = (const u32[])INCBIN_U32("graphics/ui_menus/types/11x9/types.4bpp.smol"),
    .size = TILE_OFFSET_4BPP(4 * NUMBER_OF_MON_TYPES),
    .tag = TAG_SUMMARY_TYPES,
};

static const struct SpritePalette sStatsPageHeader_TypeSpritePalettes[] =
{
    {
        .data = (const u16[])INCBIN_U16("graphics/ui_menus/types/11x9/1.gbapal"),
        .tag = TAG_SUMMARY_TYPE_1
    },
    {
        .data = (const u16[])INCBIN_U16("graphics/ui_menus/types/11x9/2.gbapal"),
        .tag = TAG_SUMMARY_TYPE_2
    },
    { NULL },
};

static const u8 *const sStatsPageGeneral_StatsNames[NUM_STATS] =
{
    [STAT_HP]    = COMPOUND_STRING("HP"),
    [STAT_ATK]   = COMPOUND_STRING("ATK"),
    [STAT_DEF]   = COMPOUND_STRING("DEF"),
    [STAT_SPATK] = COMPOUND_STRING("SPATK"),
    [STAT_SPDEF] = COMPOUND_STRING("SPDEF"),
    [STAT_SPEED] = COMPOUND_STRING("SPD"),
};

static const struct SpriteTemplate sStatsPageMisc_StatCursorSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(8x8),
        .size = SPRITE_SIZE(8x8),
        .priority = 0
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0),
            ANIMCMD_END
        },
        (const union AnimCmd[]){
            ANIMCMD_FRAME(1),
            ANIMCMD_END
        },
        (const union AnimCmd[]){
            ANIMCMD_FRAME(2),
            ANIMCMD_END
        },
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/stats/stat_cursor.4bpp"),
        .relativeFrames = TRUE,
        .size = (128 * 16) / 2,
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_StatsPageMisc_StatCursor
};

static const struct SpriteTemplate sStatsPageMisc_ArrowSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(16x8),
        .size = SPRITE_SIZE(16x8),
        .priority = 0
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_JUMP(0)
        },
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/stats/arrow.4bpp"),
        .relativeFrames = TRUE,
        .size = (16 * 8) / 2
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const u8 sStatsPageMisc_MonDataValuesOrders[][NUM_STATS] =
{
    [SUMMARY_TOTAL_EVS] =
    {
        MON_DATA_HP_EV,
        MON_DATA_ATK_EV,
        MON_DATA_DEF_EV,
        MON_DATA_SPATK_EV,
        MON_DATA_SPDEF_EV,
        MON_DATA_SPEED_EV,
    },
    [SUMMARY_TOTAL_IVS] =
    {
        MON_DATA_HP_IV,
        MON_DATA_ATK_IV,
        MON_DATA_DEF_IV,
        MON_DATA_SPATK_IV,
        MON_DATA_SPDEF_IV,
        MON_DATA_SPEED_IV,
    }
};

static const u8 sMovesPageGeneral_MoveBarGfx[] = INCBIN_U8("graphics/ui_menus/types/128x16/types.4bpp");
static const u8 sMovesPageGeneral_MoveTypeGfx[] = INCBIN_U8("graphics/ui_menus/mon_summary/move_type_icons.4bpp");

static const struct SpriteTemplate sMovesPageGeneral_MoveBarSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_NONE,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(8x8), .size = SPRITE_SIZE(8x8),
        .priority = 2,
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){ ANIMCMD_FRAME(0, 1), ANIMCMD_END },
        (const union AnimCmd[]){ ANIMCMD_FRAME(1, 1), ANIMCMD_END },
        (const union AnimCmd[]){ ANIMCMD_FRAME(2, 1), ANIMCMD_END },
        (const union AnimCmd[]){ ANIMCMD_FRAME(3, 1), ANIMCMD_END },
    },
    .images = &(const struct SpriteFrameImage){
        .data = sMovesPageGeneral_MoveBarGfx,
        .size = (128 * 16) / 2,
        .relativeFrames = TRUE
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const u16 *const sMovesPageMisc_MenuTilemaps[] =
{
    [SUMMARY_MOVES_SUB_MODE_NONE]    = (const u16[])INCBIN_U16("graphics/ui_menus/mon_summary/moves/menu_blank.bin"),
    [SUMMARY_MOVES_SUB_MODE_DETAILS] = (const u16[])INCBIN_U16("graphics/ui_menus/mon_summary/moves/menu_details.bin"),
    [SUMMARY_MOVES_SUB_MODE_OPTIONS] = (const u16[])INCBIN_U16("graphics/ui_menus/mon_summary/moves/menu_options.bin"),
    [SUMMARY_MOVES_SUB_MODE_REORDER] = (const u16[])INCBIN_U16("graphics/ui_menus/mon_summary/moves/menu_blank.bin"),
};

static const struct SpriteTemplate sMovesPageMisc_ArrowsSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(16x16), .size = SPRITE_SIZE(16x16),
        .priority = 1
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_JUMP(0)
        },
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/moves/arrows.4bpp"),
        .size = (16 * 16) / 2,
        .relativeFrames = TRUE,
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_MovesPageMisc_Arrows
};

static const struct SpriteTemplate sMovesPageMisc_SlotCursorSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(8x8), .size = SPRITE_SIZE(8x8),
        .priority = 2,
    },
    .anims = sSummarySprite_FrameImageAnimTemplate,
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCBIN_U8("graphics/ui_menus/mon_summary/moves/slot_cursor.4bpp"),
        .size = (128 * 16) / 2,
        .relativeFrames = TRUE
    },
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_MovesPageMisc_SlotCursor
};
