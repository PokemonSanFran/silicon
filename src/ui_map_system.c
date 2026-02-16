#include "global.h"
#include "ui_map_system.h"
#include "tv.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "glass.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "quest_logic.h"
#include "math.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/map_types.h"
#include "constants/ui_map_system.h"
#include "trig.h"
#include "secret_base.h"
#include "region_map.h"
#include "money.h"
#include "field_effect.h"
#include "constants/heal_locations.h"
#include "quest_logic.h"
#include "heal_location.h"
#include "map_preview_screen.h"

/*

    PKMNSNFRN Map System UI

*/

//==========DEFINES==========//
#define MAP_WIDTH 28
#define MAP_HEIGHT 16
#define MAPCURSOR_X_MIN 1
#define MAPCURSOR_Y_MIN 2
#define MAPCURSOR_X_MAX (MAPCURSOR_X_MIN + MAP_WIDTH - 1)
#define MAPCURSOR_Y_MAX (MAPCURSOR_Y_MIN + MAP_HEIGHT - 1)
#define FLYDESTICON_RED_OUTLINE 6

#define CURSOR_SMALL_CURSOR_STATE 0
#define CURSOR_TOOLTIP_LOC_STATE 1

#define WARP_FAILED_PAUSE_END 0
#define WARP_FAILED_PAUSE_START 32
#define WARP_UBER 0
#define WARP_TAXI 1

#define L2_WINDOW_RIGHT_SIDE_SHOWING    (62 * 8)
#define L2_WINDOW_LEFT_SIDE_SHOWING     (18 * 8)
#define L2_WINDOW_HIDDEN                (32 * 8)

#define GRAY_CITY_MAX_COUNT                 20

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

//==========STRUCTS==========//
struct SFRegionMap // Second Struct Mirroring the Region Map, Can Be Combined with MapSystem_Resources at some point but not required
{
    MainCallback savedCallback;     // determines callback to run when we exit.
    u8 gfxLoadState;

    u16 mapSecId;
    u8 mapSecTypeHasVisited;
    u8 mapSecName[20];
    u8 (*inputCallback)(void);
    struct Sprite *cursorSprite;
    struct Sprite *cursorSpriteLOC;
    struct Sprite *playerIconSprite;
    u16 cursorPosX;
    u16 cursorPosY;
    u16 playerIconSpritePosX;
    u16 playerIconSpritePosY;
    u8 initStep;
    s8 cursorMovementFrameCounter;
    s8 cursorDeltaX;
    s8 cursorDeltaY;
    bool8 blinkPlayerIcon;
    bool8 playerIsInCave;
    bool8 inL2State;
    u8 warpCounter;
    u8 activeCursorState;
    u8 cursorAnimState;
    u16 l2_selection;
    u8 l2_selectorSpriteIds[2];
    u8 l2_scroll_amount;
    u8 l2_arrowsTaskId;
    u16 l2_selectionPlusScroll; // used because List Arrow Sprites take a pointer and l2_selection + l2_scroll_amount can't be passed
    u8 grayPOISpriteIds[GRAY_CITY_MAX_COUNT];
    u8 trolleyPOISpriteIds[GRAY_CITY_MAX_COUNT];
    u8 waypointSpriteId;
    u8 waypointSpriteInL2Id;
    u16 currentTrolley;
};

enum CursorState {
    CURSOR_UP,
    CURSOR_DOWN,
    CURSOR_RIGHT,
    CURSOR_LEFT,
};

struct GrayPOI // Struct To Store Gray POI MapSec/Location/Shape for Loading Dynamically
{
    u16 mapSecForPOI;
    u16 xTile;
    u16 yTile;
    u16 shapeOfPOI;
};

//==========EWRAM==========//
static EWRAM_DATA struct SFRegionMap *sRegionMap = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static EWRAM_DATA u16 sOWWaypointArrow_SpriteId = {0};
static EWRAM_DATA u16 sCurrentMapMode = {0};


//==========FUNCTION=DEFINES==========//
static void MapSystem_RunSetup(void);
static bool8 MapSystem_DoGfxSetup(void);
static bool8 MapSystem_InitBgs(void);
static void MapSystem_FadeAndBail(void);
static bool8 RegionMap_LoadGraphics(void);
static bool8 GetMenuL2State(void);
static void MapSystem_InitWindows(void);
void InitSFRegionMapData();
static void PrintHeaderTitleToWindow();
static void PrintMapFooter(bool32 confirmMode);
static const u8 *GetHelpBarText(bool32 confirmMode);
static void PrintTrolleyHeaderToWindow();
static void Task_MapSystemWaitFadeIn(u8 taskId);
static void Task_MapSystem_DefaultMode_Main(u8 taskId);
static void Task_MapSystem_TrolleyMode_Main(u8 taskId);

static void SpriteCB_CursorMapFull(struct Sprite *sprite);
static void SpriteCB_CursorMapFullLOC(struct Sprite *sprite);
void CreateSFRegionMapCursor(u16 tileTag, u16 paletteTag);
static void FreeRegionMapSprites(void);
static void UpdateCursorPositionOnAnimChange();
static void ResetCursorPositionBeforeAnimChange();

static void InitMapBasedOnPlayerLocation(void);
static u8 *GetSFMapName(u8 *dest, u16 regionMapId, u16 padLength);
static u8 GetMapsecTypeHasVisited(u16 mapSecId);
static u16 GetMapSecIdAt(u16 x, u16 y);
static u8 MoveRegionMapCursor_Full(void);
static u8 ProcessRegionMapInput_Full(void);
static u8 ProcessRegionMapInput_L2_State(void);
u8 DoInputCallback(void);

static void SFTrySetPlayerIconBlink(void);
static void SpriteCB_PlayerIcon(struct Sprite *sprite);
static void SFCreateRegionMapPlayerIcon(u16 tileTag, u16 paletteTag);
static void DestroyGrayPOISprites(void);
static void CreateGrayPOISprites(void);
static void DestroyWaypointSprite(void);
static void CreateWaypointSprite(void);
static void LoadWaypointGraphicsOnMapLoad(void);
static void CreateTrolleyPOISprites(void);
static void DestroyTrolleyPOISprites(void);

static void HideL2Selector(void);
static void ShowL2Selector(u8 side);
static void CreateL2SelectorSprites(void);
static void DestroyL2CursorSprites(void);
static void SpriteCB_HandleL2Selector(struct Sprite *sprite);
static const u8 *GetCurrentL2Name();
static u16 GetCurrentL2HealLocation();
static u8 CheckIfL2ExistsAtIndex(u8 index);
static u32 GetCurrentL2ListPosition(void);
static void ScrollL2Down(void);
static void CreateL2WaypointSprite(void);
static void DestroyJustL2WaypointSprite(void);

static u8 HandleWarpFailedNoCash(void);
static u8 HandleAttemptWarpInput(void);
u32 GetWarpPriceAtMapSecByMapType(u16 mapSecId);
static u8 HandleWarpConfirmInput(void);
static u8 HandleWarpTaxiCutscene(void);
static u8 HandleWarpCloseMenu(void);

static u8 CheckIfVisitedHoverLocation(void);
static u8 CheckIfHoverLocationUnlocked(void);
static u8 CheckIfHoverLocationHasL2(void);
static void HideL2WindowBg(void);
static void ShowL2WindowBG(void);
static u8 CheckIfHoverLocationIsMapSecNone(void);
static void HandleAttemptToPlaceWaypoint(void);
void CreateOWWaypointArrowSprite(void);
void DestroyOWWaypointArrowSprite(void);
static void SpriteCB_HandleOWWaypointArrow(struct Sprite *sprite);
static void Task_DelayPrintOverworldWaypoint(u8 taskId);
void ShowOWWaypointArrow(void);
void HideOWWaypointArrow(void);
void SetWaypointData(u16 waypointType, u16 healLocation);
static void L2WaypointSpriteCallback(struct Sprite *sprite);
static bool8 IsCurrentIndexLastInL2List(u32 index);

static void PrintWarpPriceOnTooltip(u32 bgColor, u32 startTile);

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[] =
{
    {
        .bg = 0, // Text Background
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0
    },
    {
        .bg = 1, // L2 Window Bg
        .charBaseIndex = 3, // These are overridden in the LoadGfx Function Because GameFreak look for BG_CHAR_ADDR - Might Change in the Future To Follow A More Typical UI Approach
        .mapBaseIndex = 25, // These are overridden in the LoadGfx Function Because GameFreak
        .screenSize = 3,
        .paletteMode = 0,
        .priority = 1
    },
    {
        .bg = 2, // Roads and Black Bars
        .charBaseIndex = 1, // These are overridden in the LoadGfx Function Because GameFreak
        .mapBaseIndex = 30, // These are overridden in the LoadGfx Function Because GameFreak
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2
    },
    {
        .bg = 3, // Region Map Bg
        .charBaseIndex = 2, // These are overridden in the LoadGfx Function Because GameFreak
        .mapBaseIndex = 29, // These are overridden in the LoadGfx Function Because GameFreak
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2
    },
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [WINDOW_HEADER_TEXT] = // Top Bar Text Window
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 0,   // position from left (per 8 pixels)
        .tilemapTop = 0,    // position from top (per 8 pixels)
        .width = 30,        // width (per 8 pixels)
        .height = 2,        // height (per 8 pixels)
        .paletteNum = 15,   // palette index to use for text
        .baseBlock = 1,     // tile start in VRAM
    },
    [WINDOW_FOOTER_TEXT] = // Bottom Bar Text Window
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 0,   // position from left (per 8 pixels)
        .tilemapTop = 18,    // position from top (per 8 pixels)
        .width = 30,        // width (per 8 pixels)
        .height = 2,        // height (per 8 pixels)
        .paletteNum = 15,   // palette index to use for text
        .baseBlock = 1 + (30 * 2),     // tile start in VRAM
    },
    [WINDOW_L2_RIGHT_SIDE_TEXT] = // L2 Right Side Window
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 19,   // position from left (per 8 pixels)
        .tilemapTop = 4,    // position from top (per 8 pixels)
        .width = 13,        // width (per 8 pixels)
        .height = 14,        // height (per 8 pixels)
        .paletteNum = 15,   // palette index to use for text
        .baseBlock = 1 + (30 * 2) + (30 * 2),     // tile start in VRAM
    },
    [WINDOW_L2_LEFT_SIDE_TEXT] = // L2 Left Side Window
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 0,   // position from left (per 8 pixels)
        .tilemapTop = 4,    // position from top (per 8 pixels)
        .width = 13,        // width (per 8 pixels)
        .height = 14,        // height (per 8 pixels)
        .paletteNum = 15,   // palette index to use for text
        .baseBlock = 1 + (30 * 2) + (30 * 2) + (13 * 14),     // tile start in VRAM
    },
    DUMMY_WIN_TEMPLATE,
};

// Fake Window Template For Printing to the Tooltip Sprite
static const struct WindowTemplate sTooltipWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 8,
    .height = 2,
    .paletteNum = 0,
    .baseBlock = 1 + 120
};

static const u8 sMenuWindowFontColors[][3] =
{
    [FONT_MAP_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [FONT_MAP_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_DARK_GRAY},
    [FONT_MAP_RED]   = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_RED,        TEXT_COLOR_LIGHT_GRAY},
    [FONT_MAP_BLUE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_BLUE,       TEXT_COLOR_LIGHT_GRAY},
};


//
//  Graphics Pointers for RegionMap Geography, Roads, L2 Window, Sprites, Palettes, Etc
//
static const u32 sRegionGeographyTiles[] = INCBIN_U32("graphics/ui_menus/map_system/geography_tiles.4bpp.smol");
static const u32 sRegionGeographyTilemap[] = INCBIN_U32("graphics/ui_menus/map_system/geography_tilemap.bin.smolTM");
static const u16 sRegionGeographyPalette[] = INCBIN_U16("graphics/ui_menus/map_system/geography.gbapal");

static const u32 sRegionTrolleyBackgroundTiles[] = INCBIN_U32("graphics/ui_menus/map_system/trolley_tiles.4bpp.smol");
static const u32 sRegionTrolleyBackgroundTilemap[] = INCBIN_U32("graphics/ui_menus/map_system/trolley_tiles.bin.smolTM");
static const u16 sRegionTrolleyBackgroundPalette[] = INCBIN_U16("graphics/ui_menus/map_system/trolley_tiles.gbapal");

static const u32 sRouteTiles[] = INCBIN_U32("graphics/ui_menus/map_system/route_tiles.4bpp.smol");
static const u32 sRouteTilemap[] = INCBIN_U32("graphics/ui_menus/map_system/route_tiles.bin.smolTM");
static const u16 sRoutePalette[] = INCBIN_U16("graphics/ui_menus/map_system/route_tiles.gbapal");

static const u32 sTrolleyRailTiles[] = INCBIN_U32("graphics/ui_menus/map_system/rail_tiles.4bpp.smol");
static const u32 sTrolleyRailTilemap[] = INCBIN_U32("graphics/ui_menus/map_system/rail_tiles.bin.smolTM");
static const u16 sTrolleyRailPalette[] = INCBIN_U16("graphics/ui_menus/map_system/rail_tiles.gbapal");

static const u32 sL2WindowTiles[] = INCBIN_U32("graphics/ui_menus/map_system/l2_window_tiles.4bpp.smol");
static const u32 sL2WindowTilemap[] = INCBIN_U32("graphics/ui_menus/map_system/l2_window_tilemap.bin.smolTM");
static const u16 sL2WindowPalette[] = INCBIN_U16("graphics/ui_menus/map_system/l2_window_tiles.gbapal");

static const u16 sRegionMapCursorPal[] = INCBIN_U16("graphics/ui_menus/map_system/cursor_small.gbapal");
static const u32 sRegionMapCursorSmallGfx[] = INCBIN_U32("graphics/ui_menus/map_system/cursor_small.4bpp");

static const u16 sRegionMapCursorTooltipPal[] = INCBIN_U16("graphics/ui_menus/map_system/L2_cursor_test.gbapal");
static const u32 sRegionMapCursorTooltipGfx[] = INCBIN_U32("graphics/ui_menus/map_system/L2_cursor_test.4bpp");
static const u32 sRegionMapCursorTooltipTaxiGfx[] = INCBIN_U32("graphics/ui_menus/map_system/L2_cursor_taxi.4bpp");
static const u32 sRegionMapCursorTooltipFlyGfx[] = INCBIN_U32("graphics/ui_menus/map_system/Fly_icon.4bpp");
static const u32 sRegionMapCursorTooltipError1Gfx[] = INCBIN_U32("graphics/ui_menus/map_system/L2_cursor_error_1.4bpp");
static const u32 sRegionMapCursorTooltipError2Gfx[] = INCBIN_U32("graphics/ui_menus/map_system/L2_cursor_error_2.4bpp");

static const u8 sA_ButtonGfx[]         = INCBIN_U8("graphics/ui_menus/map_system/a_button.4bpp");
static const u8 sB_ButtonGfx[]         = INCBIN_U8("graphics/ui_menus/map_system/b_button.4bpp");
static const u8 sSelect_ButtonGfx[]         = INCBIN_U8("graphics/ui_menus/map_system/select_button.4bpp");
static const u8 sStart_ButtonGfx[]         = INCBIN_U8("graphics/ui_menus/map_system/start_button.4bpp");

static const u16 sRegionMapPlayerIcon_BrendanPal[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.gbapal");
static const u8 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U8("graphics/pokenav/region_map/brendan_icon.4bpp");

static const u32 sGrayPOI_Gfx[] = INCBIN_U32("graphics/ui_menus/map_system/gray_poi_sprites.4bpp");
static const u16 sGrayPOI_Pal[] = INCBIN_U16("graphics/ui_menus/map_system/gray_poi_sprites.gbapal");

static const u32 sTrolleyPOI_Gfx[] = INCBIN_U32("graphics/ui_menus/map_system/trolley_location_icon.4bpp");
static const u16 sTrolleyPOI_Pal[] = INCBIN_U16("graphics/ui_menus/map_system/trolley_location_icon.gbapal");

static const u32 sWayPoint_Gfx[] = INCBIN_U32("graphics/ui_menus/map_system/waypoint_icon.4bpp");
static const u16 sWayPoint_Pal[] = INCBIN_U16("graphics/ui_menus/map_system/waypoint_icon.gbapal");

static const u32 sOwWaypointArrow_Gfx[] = INCBIN_U32("graphics/ui_menus/map_system/ow_waypoint_arrow.4bpp");
static const u16 sOwWaypointArrow_Pal[] = INCBIN_U16("graphics/ui_menus/map_system/ow_waypoint_arrow.gbapal");

static const u32 sL2Selector_Gfx[] = INCBIN_U32("graphics/ui_menus/map_system/Selector.4bpp");
static const u16 sL2Selector_Pal[] = INCBIN_U16("graphics/ui_menus/map_system/Selector.gbapal");

//
//  Sprite Data for Cursors and Player Icon
//
static const struct OamData sRegionMapCursorOam =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .priority = 1
};

static const union AnimCmd sRegionMapCursorAnim1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(4, 20),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sRegionMapCursorAnim2[] =
{
    ANIMCMD_FRAME( 0, 10),
    ANIMCMD_FRAME(16, 10),
    ANIMCMD_FRAME(32, 10),
    ANIMCMD_FRAME(16, 10),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sRegionMapCursorAnimTable[] =
{
    sRegionMapCursorAnim1,
    sRegionMapCursorAnim2
};

static const struct SpritePalette sRegionMapCursorSpritePalette =
{
    .data = sRegionMapCursorPal,
    .tag = TAG_CURSOR
};

static const struct SpriteTemplate sRegionMapCursorSpriteTemplate =
{
    .tileTag = TAG_CURSOR,
    .paletteTag = TAG_CURSOR,
    .oam = &sRegionMapCursorOam,
    .anims = sRegionMapCursorAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CursorMapFull
};

static const struct OamData sRegionMapCursorTooltipOam =
{
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1
};

static const union AnimCmd sRegionMapCursorTooltipAnim1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sRegionMapCursorTooltipAnim2[] =
{
    ANIMCMD_FRAME(64, 1),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sRegionMapCursorTooltipAnim3[] =
{
    ANIMCMD_FRAME(128, 1),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sRegionMapCursorTooltipAnim4[] =
{
    ANIMCMD_FRAME(192, 1),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sRegionMapCursorTooltipAnimTable[] =
{
    sRegionMapCursorTooltipAnim1,
    sRegionMapCursorTooltipAnim2,
    sRegionMapCursorTooltipAnim3,
    sRegionMapCursorTooltipAnim4
};

static const struct SpritePalette sRegionMapCursorTooltipSpritePalette =
{
    .data = sRegionMapCursorTooltipPal,
    .tag = TAG_CURSOR_TOOLTIP_LOC_STATE
};

static const struct SpriteTemplate sRegionMapCursorTooltipSpriteTemplate =
{
    .tileTag = TAG_CURSOR_TOOLTIP_LOC_STATE,
    .paletteTag = TAG_CURSOR_TOOLTIP_LOC_STATE,
    .oam = &sRegionMapCursorTooltipOam,
    .anims = sRegionMapCursorTooltipAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CursorMapFullLOC,
};

static const struct OamData sRegionMapPlayerIconOam =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .priority = 2
};

static const union AnimCmd sRegionMapPlayerIconAnim1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END
};

static const union AnimCmd *const sRegionMapPlayerIconAnimTable[] =
{
    sRegionMapPlayerIconAnim1
};


#define TAG_L2_CURSOR 20101
#define TAG_L1_CURSOR 20106

static const struct SpriteSheet sSpriteSheet_RegionMapCursorTooltipGfx =
{
    .size = 64 * 64 * 4 / 2,
    .data = sRegionMapCursorTooltipGfx,
    .tag = TAG_CURSOR_TOOLTIP_LOC_STATE,
};

static const struct SpriteSheet sSpriteSheet_RegionMapCursorTooltipGfxError1 =
{
    .size = 64 * 64 * 4 / 2,
    .data = sRegionMapCursorTooltipError1Gfx,
    .tag = TAG_CURSOR_TOOLTIP_LOC_STATE,
};

static const struct SpriteSheet sSpriteSheet_RegionMapCursorTooltipGfxError2 =
{
    .size = 64 * 64 * 4 / 2,
    .data = sRegionMapCursorTooltipError2Gfx,
    .tag = TAG_CURSOR_TOOLTIP_LOC_STATE,
};

static const struct SpriteSheet sSpriteSheet_RegionMapCursorTooltipTaxiGfx =
{
    .size = 64 * 64 * 4 / 2,
    .data = sRegionMapCursorTooltipTaxiGfx,
    .tag = TAG_CURSOR_TOOLTIP_LOC_STATE,
};

static const struct SpriteSheet sSpriteSheet_RegionMapCursorTooltipFlyGfx =
{
    .size = 64 * 64 * 4 / 2,
    .data = sRegionMapCursorTooltipFlyGfx,
    .tag = TAG_CURSOR_TOOLTIP_LOC_STATE,
};

static const struct SpriteSheet sSpriteSheet_RegionMapCursorSmallGfx = {sRegionMapCursorSmallGfx, 16 * 16 * 2 / 2, TAG_CURSOR};


//
//  Sprite Data for Pokeball Hand Sprite
//
#define TAG_GRAY_POI 20001
static const struct OamData sOamData_GrayPOI =
{
    .size = SPRITE_SIZE(32x32),
    .shape = SPRITE_SHAPE(32x32),
    .priority = 2,
};

static const struct SpriteSheet sSpriteSheet_GrayPOI =
{
    .data = sGrayPOI_Gfx,
    .size = 32*32*6/2,
    .tag = TAG_GRAY_POI,
};

static const struct SpritePalette sSpritePal_GrayPOI =
{
    .data = sGrayPOI_Pal,
    .tag = TAG_GRAY_POI
};

static const union AnimCmd sSpriteAnim_SmallSquare[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_LargeRect[] =
{
    ANIMCMD_FRAME(16, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_SmallRectWithCircle[] =
{
    ANIMCMD_FRAME(32, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_LargeSquareWithCircle[] =
{
    ANIMCMD_FRAME(48, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_SmallVerticalRect[] =
{
    ANIMCMD_FRAME(64, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_LargeSquareNoCircle[] =
{
    ANIMCMD_FRAME(80, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sSpriteAnimTable_GrayPOI[] =
{
    sSpriteAnim_SmallSquare,
    sSpriteAnim_LargeRect,
    sSpriteAnim_SmallRectWithCircle,
    sSpriteAnim_LargeSquareWithCircle,
    sSpriteAnim_SmallVerticalRect,
    sSpriteAnim_LargeSquareNoCircle,
};

static const struct SpriteTemplate sSpriteTemplate_GrayPOIMap =
{
    .tileTag = TAG_GRAY_POI,
    .paletteTag = TAG_GRAY_POI,
    .oam = &sOamData_GrayPOI,
    .anims = sSpriteAnimTable_GrayPOI,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};


//
//  Sprite Data for Pokeball Hand Sprite
//
#define TAG_TROLLEY_POI 20001
static const struct OamData sOamData_TrolleyPOI =
{
    .size = SPRITE_SIZE(8x8),
    .shape = SPRITE_SHAPE(8x8),
    .priority = 2,
};

static const struct SpriteSheet sSpriteSheet_TrolleyPOI =
{
    .data = sTrolleyPOI_Gfx,
    .size = 8*8*2/2,
    .tag = TAG_TROLLEY_POI,
};

static const struct SpritePalette sSpritePal_TrolleyPOI =
{
    .data = sTrolleyPOI_Pal,
    .tag = TAG_TROLLEY_POI
};

static const union AnimCmd sSpriteAnim_Found[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_NotFound[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sSpriteAnimTable_TrolleyPOI[] =
{
    sSpriteAnim_Found,
    sSpriteAnim_NotFound,
};

static const struct SpriteTemplate sSpriteTemplate_TrolleyPOIMap =
{
    .tileTag = TAG_TROLLEY_POI,
    .paletteTag = TAG_TROLLEY_POI,
    .oam = &sOamData_TrolleyPOI,
    .anims = sSpriteAnimTable_TrolleyPOI,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

//
//  Sprite Data for Waypoint Icon
//
#define TAG_WAY_POINT 20004
static const struct OamData sOamData_WayPoint =
{
    .size = SPRITE_SIZE(16x16),
    .shape = SPRITE_SHAPE(16x16),
    .priority = 2,
};

static const struct SpriteSheet sSpriteSheet_WayPoint =
{
    .data = sWayPoint_Gfx,
    .size = 16*16*3/2,
    .tag = TAG_WAY_POINT,
};

static const struct SpritePalette sSpritePal_WayPoint =
{
    .data = sWayPoint_Pal,
    .tag = TAG_WAY_POINT
};

static const union AnimCmd sSpriteAnim_WaypointStatic[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_WaypointBlink[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(4, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_WaypointStatic2[] =
{
    ANIMCMD_FRAME(8, 30),
    ANIMCMD_JUMP(0),
};


static const union AnimCmd *const sSpriteAnimTable_WayPoint[] =
{
    sSpriteAnim_WaypointStatic,
    sSpriteAnim_WaypointBlink,
    sSpriteAnim_WaypointStatic2,
};

static const struct SpriteTemplate sSpriteTemplate_WayPointMap =
{
    .tileTag = TAG_WAY_POINT,
    .paletteTag = TAG_WAY_POINT,
    .oam = &sOamData_WayPoint,
    .anims = sSpriteAnimTable_WayPoint,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSpriteTemplate_WayPointMapL2 =
{
    .tileTag = TAG_WAY_POINT,
    .paletteTag = TAG_WAY_POINT,
    .oam = &sOamData_WayPoint,
    .anims = sSpriteAnimTable_WayPoint,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = L2WaypointSpriteCallback
};




//
//  Sprite Data for sL2Selector_Gfx
//
#define L2_SELECTOR_Y_START_POS 65
#define L2_Y_DIFFERENCE 16
#define MAX_L2_SHOWN 5

#define TAG_L2_SELECTOR 40010
static const struct OamData sOamData_L2Selector =
{
    .size = SPRITE_SIZE(64x32),
    .shape = SPRITE_SHAPE(64x32),
    .priority = 1,
};

static const struct SpriteSheet sSpriteSheet_L2Selector =
{
    .data = sL2Selector_Gfx,
    .size = 64*32*2/2,
    .tag = TAG_L2_SELECTOR,
};

static const struct SpritePalette sSpritePal_L2Selector =
{
    .data = sL2Selector_Pal,
    .tag = TAG_L2_SELECTOR
};

static const union AnimCmd sSpriteAnim_L2Selector1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_L2Selector2[] =
{
    ANIMCMD_FRAME(32, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sSpriteAnimTable_L2Selector[] =
{
    sSpriteAnim_L2Selector1,
    sSpriteAnim_L2Selector2,
};

static const struct SpriteTemplate sSpriteTemplate_L2SelectorMap =
{
    .tileTag = TAG_L2_SELECTOR,
    .paletteTag = TAG_L2_SELECTOR,
    .oam = &sOamData_L2Selector,
    .anims = sSpriteAnimTable_L2Selector,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_HandleL2Selector,
};



//
//  Sprite Data for Overworld Waypoint Arrow
//
#define TAG_OW_WAYPOINT_ARROW 40009
static const struct OamData sOamData_OwWaypointArrow =
{
    .size = SPRITE_SIZE(32x32),
    .shape = SPRITE_SHAPE(32x32),
    .priority = 0,
};

static const struct SpriteSheet sSpriteSheet_OwWaypointArrow =
{
    .data = sOwWaypointArrow_Gfx,
    .size = 32*32*14/2,
    .tag = TAG_OW_WAYPOINT_ARROW,
};

static const struct SpritePalette sSpritePal_OwWaypointArrow =
{
    .data = sOwWaypointArrow_Pal,
    .tag = TAG_OW_WAYPOINT_ARROW
};

static const union AnimCmd sSpriteAnim_OWArrowNorth[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowNorthEast[] =
{
    ANIMCMD_FRAME(16, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowEast[] =
{
    ANIMCMD_FRAME(32, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowSouthEast[] =
{
    ANIMCMD_FRAME(48, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowSouth[] =
{
    ANIMCMD_FRAME(64, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowSouthWest[] =
{
    ANIMCMD_FRAME(80, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowWest[] =
{
    ANIMCMD_FRAME(96, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowNorthWest[] =
{
    ANIMCMD_FRAME(112, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSpriteAnim_OWArrowFoundLocation[] =
{
    ANIMCMD_FRAME(128, 60),
    ANIMCMD_FRAME(144, 60),
    ANIMCMD_FRAME(160, 60),
    ANIMCMD_END,
};

static const union AnimCmd sSpriteAnim_OWArrowNoSignal[] =
{
    ANIMCMD_FRAME(176, 60),
    ANIMCMD_FRAME(192, 60),
    ANIMCMD_FRAME(208, 60),
    ANIMCMD_END,
};

#define OWARROW_NO_SIGNAL_ANIM 9
static const union AnimCmd *const sSpriteAnimTable_OwWaypointArrow[] =
{
    sSpriteAnim_OWArrowFoundLocation,
    sSpriteAnim_OWArrowSouth, // Anims correspond to DIR_SOUTH etc
    sSpriteAnim_OWArrowNorth,
    sSpriteAnim_OWArrowWest,
    sSpriteAnim_OWArrowEast,
    sSpriteAnim_OWArrowSouthWest,
    sSpriteAnim_OWArrowSouthEast,
    sSpriteAnim_OWArrowNorthWest,
    sSpriteAnim_OWArrowNorthEast,
    sSpriteAnim_OWArrowNoSignal,
};

static const struct SpriteTemplate sSpriteTemplate_OwWaypointArrowMap =
{
    .tileTag = TAG_OW_WAYPOINT_ARROW,
    .paletteTag = TAG_OW_WAYPOINT_ARROW,
    .oam = &sOamData_OwWaypointArrow,
    .anims = sSpriteAnimTable_OwWaypointArrow,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_HandleOWWaypointArrow
};

//
//  Region Mapsec Tilemap - Holds the position of each mapsec relative to the actual physical regionmap layout.
//

#include "data/region_map/resido_region_map_layout.h"

static u16 GetMapSecIdAt(u16 x, u16 y) // Function to Return the MapSec at a given Position
{
    if (y < MAPCURSOR_Y_MIN || y > MAPCURSOR_Y_MAX || x < MAPCURSOR_X_MIN || x > MAPCURSOR_X_MAX)
    {
        return MAPSEC_NONE;
    }
    y -= MAPCURSOR_Y_MIN;
    x -= MAPCURSOR_X_MIN;
    return sRegionMap_MapSectionLayout[y][x]; // Table Defined At the Top of the File
}

//
//  Heal Locations by MapSec - These are just heal location constants mapped to each MapSec for warping
//

static const u16 sMapHealLocations[MAPSEC_NONE] =
{
    [MAPSEC_HALAI_ISLAND]=HEAL_LOCATION_HALAI_ISLAND,
    [MAPSEC_ARANTRAZ]=HEAL_LOCATION_ARANTRAZ,
    [MAPSEC_CHASILLA]=HEAL_LOCATION_CHASILLA,
    [MAPSEC_GLAVEZ_HILL]=HEAL_LOCATION_GLAVEZ_HILL,
    [MAPSEC_IRISINA_TOWN]=HEAL_LOCATION_IRISINA_TOWN,
    [MAPSEC_HODOU_CITY]=HEAL_LOCATION_HODOU_CITY,
    [MAPSEC_CURENO_PORT]=HEAL_LOCATION_CURENO_PORT,
    [MAPSEC_POPIDORA_PIER]=HEAL_LOCATION_POPIDORA_PIER,
    [MAPSEC_FORT_YOBU]=HEAL_LOCATION_FORT_YOBU,
    [MAPSEC_PIOCA_BRIDGE]=HEAL_LOCATION_PIOCA_BRIDGE,
    [MAPSEC_ROBINWILLTUNNEL]=HEAL_LOCATION_ROBINWILLTUNNEL,
    [MAPSEC_HALERBA_CITY]=HEAL_LOCATION_HALERBA_CITY,
    [MAPSEC_TIRABUDIN_PLACE]=HEAL_LOCATION_TIRABUDIN_PLACE,
    [MAPSEC_TORA_TOWN]=HEAL_LOCATION_TORA_TOWN,
    [MAPSEC_WAJABI_LAKE]=HEAL_LOCATION_WAJABI_LAKE,
    [MAPSEC_WISHAAST_LAKE]=HEAL_LOCATION_WISHAAST_LAKE,
    [MAPSEC_ANBEH_BEND]=HEAL_LOCATION_ANBEH_BEND,
    [MAPSEC_ESPULEE_OUTSKIRTS]=HEAL_LOCATION_ESPULEE_OUTSKIRTS,
    [MAPSEC_MERMEREZA_CITY]=HEAL_LOCATION_MERMEREZA_CITY,
    [MAPSEC_LEAVERRA_FOREST]=HEAL_LOCATION_LEAVERRA_FOREST_INNER,
    [MAPSEC_OROLAND]=HEAL_LOCATION_OROLAND,
    [MAPSEC_OROLAND_COLISEUM]=HEAL_LOCATION_OROLAND_COLISEUM_OUTSIDE,
    [MAPSEC_CRESALTA_VISTA]=HEAL_LOCATION_CRESALTA_VISTA,
    [MAPSEC_PINTILLONHOUSE]=HEAL_LOCATION_PINTILLONHOUSE,
    [MAPSEC_PALACEFINEARTS]=HEAL_LOCATION_PALACEFINEARTS,
    [MAPSEC_PETAROSA_BOROUGH]=HEAL_LOCATION_PETAROSA_BOROUGH,
    [MAPSEC_ROUTE11]=HEAL_LOCATION_ROUTE11,
    [MAPSEC_ROUTE8]=HEAL_LOCATION_ROUTE8,
    [MAPSEC_PSFROUTE7E17FDD1]=HEAL_LOCATION_PSFROUTE7E17FDD1,
    [MAPSEC_ROUTE14]=HEAL_LOCATION_ROUTE14,
    [MAPSEC_ROUTE5]=HEAL_LOCATION_ROUTE5,
    [MAPSEC_ROUTE_D]=HEAL_LOCATION_ROUTE_D,
    [MAPSEC_ROUTE6]=HEAL_LOCATION_ROUTE6,
    [MAPSEC_ROUTE3]=HEAL_LOCATION_ROUTE3,
    [MAPSEC_PSFROUTE9F45DA86]=HEAL_LOCATION_PSFROUTE9F45DA86,
    [MAPSEC_ROUTE16]=HEAL_LOCATION_ROUTE16,
    [MAPSEC_ROUTE_C]=HEAL_LOCATION_ROUTE_C,
    [MAPSEC_ROUTE1]=HEAL_LOCATION_ROUTE1,
    [MAPSEC_ROUTE2]=HEAL_LOCATION_ROUTE2,
    [MAPSEC_NONGYU_BRIDGE]=HEAL_LOCATION_NONGYU_BRIDGE,
    [MAPSEC_ROUTE20]=HEAL_LOCATION_ROUTE20,
    [MAPSEC_ROUTE9]=HEAL_LOCATION_ROUTE9,
    [MAPSEC_ROUTE7]=HEAL_LOCATION_ROUTE7,
    [MAPSEC_ROUTE13]=HEAL_LOCATION_ROUTE13,
    [MAPSEC_ROUTE22]=HEAL_LOCATION_ROUTE22,
    [MAPSEC_ROUTE_A]=HEAL_LOCATION_ROUTE_A,
    [MAPSEC_ROUTE100]=HEAL_LOCATION_ROUTE100,
    [MAPSEC_ROUTE98]=HEAL_LOCATION_ROUTE98,
    [MAPSEC_ROUTE99]=HEAL_LOCATION_ROUTE99,
    [MAPSEC_ROUTE18]=HEAL_LOCATION_ROUTE18,
    [MAPSEC_ROUTE12]=HEAL_LOCATION_ROUTE12,
    [MAPSEC_ROUTE_B]=HEAL_LOCATION_ROUTE_B,
    [MAPSEC_ROUTE_E]=HEAL_LOCATION_ROUTE_E,
    [MAPSEC_ROUTE4]=HEAL_LOCATION_ROUTE4,
    [MAPSEC_ROUTE10]=HEAL_LOCATION_ROUTE10,
    [MAPSEC_PERLACIA_CITY]=HEAL_LOCATION_PERLACIA_CITY,
    [MAPSEC_CUCONU_TOWN]=HEAL_LOCATION_CUCONU_TOWN,
    [MAPSEC_QIU_VILLAGE]=HEAL_LOCATION_QIU_VILLAGE,
    [MAPSEC_CAPHE_CITY]=HEAL_LOCATION_CAPHE_CITY,
    [MAPSEC_ZENZU_ISLAND]=HEAL_LOCATION_ZENZU_ISLAND,
    [MAPSEC_TORGEOT_CLIMB]=HEAL_LOCATION_TORGEOT_CLIMB,
    [MAPSEC_SHARPRISESTADIUM]=HEAL_LOCATION_ROUTE2,
    [MAPSEC_FERRYBUILDING]=HEAL_LOCATION_FERRYBUILDING,
    [MAPSEC_NAVAL_BASE]=HEAL_LOCATION_NAVAL_BASE,
    [MAPSEC_SHARPRISESPIRE]=HEAL_LOCATION_SHARPRISESPIRE,
};


// L2 Data
//   name	            x	y	map
//   Glavez Heights	    6	12	MAP_GLAVEZ_HILL
//   Pokemon Center	    17	4	MAP_GLAVEZ_HILL
//   Taxi Union	        6	3	MAP_GLAVEZ_HILL
//   Pokemon Center	    25	30	MAP_PERLACIA_CITY
//   Stadium	        31	39	MAP_PERLACIA_CITY
//   Startup	        4	36	MAP_PERLACIA_CITY
//   Perlacia Museum	27	23	MAP_PERLACIA_CITY
//   Boomers	        12	19	MAP_PERLACIA_CITY
//   Newspaper	        6	19	MAP_PERLACIA_CITY
//   Sanitation	        1	19	MAP_PERLACIA_CITY
//   Sharprise Spire	6	10	MAP_PERLACIA_CITY


#define MAX_L2_COUNT 12

struct L2LocationData {
    const u8 *name;
    u32 healLocation;
};

static const struct L2LocationData L2_Info[MAPSEC_NONE][MAX_L2_COUNT] =
{
    [MAPSEC_GLAVEZ_HILL] =
    {
        {
            .name = COMPOUND_STRING("Pokemon Center"),
            .healLocation = HEAL_LOCATION_GLAVEZ_HILL,
        },
        {
            .name = COMPOUND_STRING("Glavez Hill"),
            .healLocation = HEAL_LOCATION_GLAVEZ_HEIGHTS,
        },
        {
            .name = COMPOUND_STRING("Taxi Union"),
            .healLocation = HEAL_LOCATION_GLAVEZ_HILL_TAXI_UNION,
        },
    },

    [MAPSEC_PERLACIA_CITY] =
    {
        {
            .name = COMPOUND_STRING("Pokemon Center"),
            .healLocation = HEAL_LOCATION_PERLACIA_CITY,
        },
        {
            .name = COMPOUND_STRING("Stadium"),
            .healLocation = HEAL_LOCATION_PERLACIA_CITY_STADIUM,
        },
        {
            .name = COMPOUND_STRING("Startup"),
            .healLocation = HEAL_LOCATION_PERLACIA_CITY_STARTUP,
        },
        {
            .name = COMPOUND_STRING("Perlacia Museum"),
            .healLocation = HEAL_LOCATION_PERLACIA_CITY_MUSEUM,
        },
        {
            .name = COMPOUND_STRING("Boomers"),
            .healLocation = HEAL_LOCATION_PERLACIA_CITY_BOOMERS,
        },
        {
            .name = COMPOUND_STRING("Newspaper"),
            .healLocation = HEAL_LOCATION_PERLACIA_CITY_NEWSPAPER,
        },
        {
            .name = COMPOUND_STRING("Sanitation"),
            .healLocation = HEAL_LOCATION_PERLACIA_CITY_SANITATION,
        },
        {
            .name = COMPOUND_STRING("Sharprise Spire"),
            .healLocation = HEAL_LOCATION_SHARPRISESPIRE,
        },
    },
};


// Trolley Data

enum TrolleyLocations {
    TROLLEY_CURENO_PORT, // PINK
    TROLLEY_IRISINA_TOWN, // CENTER
    TROLLEY_QIU_VILLAGE, // RED
    TROLLEY_TIRABUDIN_PLACE, // DARK GREEN
    TROLLEY_PAINTED_LADIES, // LIGHT GREEN
    TROLLEY_CAPHE_CITY, // ORANGE
    TROLLEY_ESPULEE_OUTSKIRTS, // YELLOW
    TROLLEY_TRANSPYRAMID, // BLUE
    TROLLEY_TREASURE_ISLAND, // BLUE
    TROLLEY_OROLAND, // BLUE
    TROLLEY_COUNT,
};

struct NextTrolley {
    u16 moveLeftStop;
    u16 moveRightStop;
    u16 moveUpStop;
    u16 moveDownStop;
};
struct TrolleyStop {
    u16 trolleyMapSec;
    s16 trolleyCursorX; // in units based on tile width
    s16 trolleyCursorY; // in units based on tile height
    s16 trolleyLocationIconX; // in units based on pixel width
    s16 trolleyLocationIconY; // in units based on pixel height
    struct NextTrolley nextTrolleyOptions;
};

static const struct TrolleyStop SFTrolleyStops[TROLLEY_COUNT] =
{
    [TROLLEY_CURENO_PORT] = {
        .trolleyMapSec = MAPSEC_CURENO_PORT,
        .trolleyCursorX = 16,
        .trolleyCursorY = 14,
        .trolleyLocationIconX = (14 * 8) + 1,
        .trolleyLocationIconY = (15 * 8),
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_QIU_VILLAGE,
                                .moveRightStop = TROLLEY_TRANSPYRAMID,
                                .moveUpStop    = TROLLEY_IRISINA_TOWN,
                                .moveDownStop  = TROLLEY_ESPULEE_OUTSKIRTS,
                            },
    },

    [TROLLEY_IRISINA_TOWN] = {
        .trolleyMapSec = MAPSEC_IRISINA_TOWN,
        .trolleyCursorX = 7,
        .trolleyCursorY = 13,
        .trolleyLocationIconX = (8 * 8) + 2,
        .trolleyLocationIconY = (13 * 8),
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_TIRABUDIN_PLACE,
                                .moveRightStop = TROLLEY_PAINTED_LADIES,
                                .moveUpStop    = TROLLEY_ESPULEE_OUTSKIRTS,
                                .moveDownStop  = TROLLEY_CURENO_PORT,
                            },
    },

    [TROLLEY_QIU_VILLAGE] = {
        .trolleyMapSec = MAPSEC_QIU_VILLAGE,
        .trolleyCursorX = 0,
        .trolleyCursorY = 12,
        .trolleyLocationIconX = (0 * 8) - 4,
        .trolleyLocationIconY = (11 * 8),
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_OROLAND,
                                .moveRightStop = TROLLEY_TIRABUDIN_PLACE,
                                .moveUpStop    = TROLLEY_ESPULEE_OUTSKIRTS,
                                .moveDownStop  = TROLLEY_CURENO_PORT,
                            },
    },

    [TROLLEY_TIRABUDIN_PLACE] = {
        .trolleyMapSec = MAPSEC_TIRABUDIN_PLACE,
        .trolleyCursorX = 6,
        .trolleyCursorY = 8,
        .trolleyLocationIconX = (4 * 8) + 2,
        .trolleyLocationIconY = (7 * 8),
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_QIU_VILLAGE,
                                .moveRightStop = TROLLEY_ESPULEE_OUTSKIRTS,
                                .moveUpStop    = TROLLEY_ESPULEE_OUTSKIRTS,
                                .moveDownStop  = TROLLEY_IRISINA_TOWN,
                            },
    },

    [TROLLEY_PAINTED_LADIES] = {
        .trolleyMapSec = MAPSEC_PINTILLONHOUSE,
        .trolleyCursorX = 9,
        .trolleyCursorY = 8,
        .trolleyLocationIconX = (12 * 8) + 1,
        .trolleyLocationIconY = (9 * 8) - 1,
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_ESPULEE_OUTSKIRTS,
                                .moveRightStop = TROLLEY_CAPHE_CITY,
                                .moveUpStop    = TROLLEY_ESPULEE_OUTSKIRTS,
                                .moveDownStop  = TROLLEY_IRISINA_TOWN,
                            },
    },

    [TROLLEY_CAPHE_CITY] = {
        .trolleyMapSec = MAPSEC_CAPHE_CITY,
        .trolleyCursorX = 13,
        .trolleyCursorY = 8,
        .trolleyLocationIconX = (16 * 8) + 1,
        .trolleyLocationIconY = (9 * 8) - 1,
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_PAINTED_LADIES,
                                .moveRightStop = TROLLEY_TRANSPYRAMID,
                                .moveUpStop    = TROLLEY_ESPULEE_OUTSKIRTS,
                                .moveDownStop  = TROLLEY_IRISINA_TOWN,
                            },
    },

    [TROLLEY_ESPULEE_OUTSKIRTS] = {
        .trolleyMapSec = MAPSEC_ESPULEE_OUTSKIRTS,
        .trolleyCursorX = 6,
        .trolleyCursorY = 0,
        .trolleyLocationIconX = (4 * 8),
        .trolleyLocationIconY = (1 * 8) - 1,
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_TIRABUDIN_PLACE,
                                .moveRightStop = TROLLEY_PAINTED_LADIES,
                                .moveUpStop    = TROLLEY_CURENO_PORT,
                                .moveDownStop  = TROLLEY_IRISINA_TOWN,
                            },
    },

    [TROLLEY_TRANSPYRAMID] = {
        .trolleyMapSec = MAPSEC_TRANSPYRAMID,
        .trolleyCursorX = 17,
        .trolleyCursorY = 4,
        .trolleyLocationIconX = (15 * 8),
        .trolleyLocationIconY = (4 * 8) - 2,
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_CAPHE_CITY,
                                .moveRightStop = TROLLEY_TREASURE_ISLAND,
                                .moveUpStop    = TROLLEY_CURENO_PORT,
                                .moveDownStop  = TROLLEY_IRISINA_TOWN,
                            },
    },

    [TROLLEY_TREASURE_ISLAND] = {
        .trolleyMapSec = MAPSEC_ZENZU_ISLAND,
        .trolleyCursorX = 19,
        .trolleyCursorY = 4,
        .trolleyLocationIconX = (17 * 8),
        .trolleyLocationIconY = (3 * 8) + 1,
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_TRANSPYRAMID,
                                .moveRightStop = TROLLEY_OROLAND,
                                .moveUpStop    = TROLLEY_CURENO_PORT,
                                .moveDownStop  = TROLLEY_TRANSPYRAMID,
                            },
    },

    [TROLLEY_OROLAND] = {
        .trolleyMapSec = MAPSEC_OROLAND,
        .trolleyCursorX = 23,
        .trolleyCursorY = 5,
        .trolleyLocationIconX = (25 * 8) + 1,
        .trolleyLocationIconY = (6 * 8),
        .nextTrolleyOptions = {
                                .moveLeftStop  = TROLLEY_TREASURE_ISLAND,
                                .moveRightStop = TROLLEY_QIU_VILLAGE,
                                .moveUpStop    = TROLLEY_CURENO_PORT,
                                .moveDownStop  = TROLLEY_TREASURE_ISLAND,
                            },
    },

};

u16 GetTrolleyIdByMapSec(u16 mapSecId)
{
    for(u8 i = 0; i < TROLLEY_COUNT; i++)
    {
        if (SFTrolleyStops[i].trolleyMapSec == mapSecId)
            return i;
    }
    return 0;
}


//==========FUNCTIONS==========//
// Main Callback and VBlank Callback
static void MapSystem_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void MapSystem_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// UI Loading Functions

void Script_OpenTrolley(void) 
{     
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);     
    CreateTask(Task_OpenTrolleyMapSystemFromStation,0);
}

void Task_OpenTrolleyMapSystemFromStation(u8 taskId)
{
    //s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        sCurrentMapMode = MAP_MODE_TROLLEY;
        CleanupOverworldWindowsAndTilemaps();
        MapSystem_Init(CB2_ReturnToFieldContinueScript);
        DestroyTask(taskId);
    }
}

void Task_OpenFlyMapSystemFromPartyMenu(u8 taskId)
{
    //s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        sCurrentMapMode = MAP_MODE_FLY;
        CleanupOverworldWindowsAndTilemaps();
        MapSystem_Init(CB2_StartMenu_ReturnToUI);
        DestroyTask(taskId);
    }
}

void CB2_OpenFlyMapSystem(MainCallback callback)
{
    if (!gPaletteFade.active)
    {
        sCurrentMapMode = MAP_MODE_FLY;
        CleanupOverworldWindowsAndTilemaps();
        MapSystem_Init(callback);
    }
}

void CB2_OpenFlyMapSystemReturnToPartyMenu(void)
{
    CB2_OpenFlyMapSystem(CB2_ReturnToPartyMenuFromFlyMap);
}

#include "qol_field_moves.h"

void CB2_OpenFlyMapSystemReturnToBag(void)
{
    CB2_OpenFlyMapSystem(ReturnToFieldOrBagFromFlyTool);
}

void CB2_OpenFlyMapSystemReturnToField(void)
{
    CB2_OpenFlyMapSystem(ReturnToFieldOrBagFromFlyTool);
}

void Script_OpenTaxi(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_OpenTaxiMapSystemFromScript,0);
}

void Task_OpenTaxiMapSystemFromScript(u8 taskId)
{
    //s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        sCurrentMapMode = MAP_MODE_TAXI;
        CleanupOverworldWindowsAndTilemaps();
        MapSystem_Init(CB2_ReturnToFieldContinueScript);
        DestroyTask(taskId);
    }
}

void CB2_MapSystemFromStartMenu(void)
{
    sCurrentMapMode = MAP_MODE_DEFAULT;
    MapSystem_Init(CB2_StartMenu_ReturnToUI);
}

// This is our main initialization function if you want to call the menu from elsewhere
void MapSystem_Init(MainCallback callback)
{
    if ((sRegionMap = AllocZeroed(sizeof(struct SFRegionMap))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sRegionMap->savedCallback = callback;

    InitSFRegionMapData();

    SetMainCallback2(MapSystem_RunSetup);
}

static void MapSystem_RunSetup(void)
{
    gMain.state = 0;
    while (1)
    {
        if (MapSystem_DoGfxSetup() == TRUE)
            break;
    }
}

static void Task_MapSystemWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        switch(sCurrentMapMode)
        {
            case MAP_MODE_TROLLEY:
                gTasks[taskId].func = Task_MapSystem_TrolleyMode_Main;
                break;
            default:
                gTasks[taskId].func = Task_MapSystem_DefaultMode_Main;
                break;
        }
    }
}

// Menu Turn Off Functions
static void MapSystem_FreeResources(void)
{
    FreeRegionMapSprites();
    FreeAllWindowBuffers();
    try_free(sRegionMap);
    try_free(sBg1TilemapBuffer);
}

static void Task_MapSystemWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        MapSystem_FreeResources();
        SetMainCallback2(sRegionMap->savedCallback);
        DestroyTask(taskId);
    }
}

static void MapSystem_FadeAndBail(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_MapSystemWaitFadeAndBail, 0);
    SetVBlankCallback(MapSystem_VBlankCB);
    SetMainCallback2(MapSystem_MainCB);
}

static void Task_MapSystemTurnOff(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        MapSystem_FreeResources();
        SetMainCallback2(sRegionMap->savedCallback);
        DestroyTask(taskId);
    }
}


//  Main Function for Setting all Graphics / VRAM / GPU related stuff, driving the loading of all
//          tilesets, tilemaps, spritesheets, etc and initializing the data for the region map
static bool8 MapSystem_DoGfxSetup(void)
{
    //u8 taskId;
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000)
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        SetGpuReg(REG_OFFSET_BG1HOFS, L2_WINDOW_HIDDEN);
        SetGpuReg(REG_OFFSET_BG1VOFS, 0);
        SetGpuReg(REG_OFFSET_BG2VOFS, 0);
        SetGpuReg(REG_OFFSET_BG2HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3VOFS, 0);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        DmaFill16(3, 0, VRAM, VRAM_SIZE);
        DmaFill32(3, 0, OAM, OAM_SIZE);
        DmaFill16(3, 0, PLTT, PLTT_SIZE);
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        FreeAllWindowBuffers();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        HideBg(0);
        HideBg(1);
        HideBg(2);
        HideBg(3);
        SetBgMode(0);
        if (MapSystem_InitBgs())
        {
            sRegionMap->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            MapSystem_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        MapSystem_InitWindows();
        gMain.state++;
        break;
    case 4:
        if (RegionMap_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 5:
        InitMapBasedOnPlayerLocation();

        if(sCurrentMapMode == MAP_MODE_TROLLEY)
        {
            u16 currentTrolley = GetTrolleyIdByMapSec(sRegionMap->mapSecId);
            sRegionMap->cursorPosX = SFTrolleyStops[currentTrolley].trolleyCursorX;
            sRegionMap->cursorPosY = SFTrolleyStops[currentTrolley].trolleyCursorY;
        }
        sRegionMap->playerIconSpritePosX = sRegionMap->cursorPosX;
        sRegionMap->playerIconSpritePosY = sRegionMap->cursorPosY;
        sRegionMap->mapSecTypeHasVisited = GetMapsecTypeHasVisited(sRegionMap->mapSecId);
        GetSFMapName(sRegionMap->mapSecName, sRegionMap->mapSecId, MAP_NAME_LENGTH);
        SFCreateRegionMapPlayerIcon(TAG_PLAYER_ICON, TAG_PLAYER_ICON);
        TrySetPlayerIconBlink();

        CreateL2SelectorSprites();

        sRegionMap->mapSecTypeHasVisited = GetMapsecTypeHasVisited(sRegionMap->mapSecId);
        if (sRegionMap->mapSecTypeHasVisited != LOCATION_NONE)
            sRegionMap->activeCursorState = CURSOR_TOOLTIP_LOC_STATE;
        else
            sRegionMap->activeCursorState = CURSOR_SMALL_CURSOR_STATE;
        if(sCurrentMapMode == MAP_MODE_TROLLEY)
            sRegionMap->activeCursorState = CURSOR_SMALL_CURSOR_STATE;

        CreateSFRegionMapCursor(TAG_CURSOR, TAG_CURSOR);
        if(sCurrentMapMode != MAP_MODE_TROLLEY)
            PrintHeaderTitleToWindow();
        else
            PrintTrolleyHeaderToWindow();
        gMain.state++;
        break;
    case 6:
        if(sCurrentMapMode != MAP_MODE_TROLLEY)
        {
            CreateGrayPOISprites();
            LoadWaypointGraphicsOnMapLoad();
        }
        else
        {
            CreateTrolleyPOISprites();
        }
        CreateTask(Task_MapSystemWaitFadeIn, 0);
        BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        SetGpuReg(REG_OFFSET_BG1HOFS, L2_WINDOW_HIDDEN);
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        SetVBlankCallback(MapSystem_VBlankCB);
        SetMainCallback2(MapSystem_MainCB);
        return TRUE;
    }
    return FALSE;
}

static bool8 MapSystem_InitBgs(void)
{
    ResetAllBgsCoordinates();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, NELEMS(sMenuBgTemplates));
    return TRUE;
}

static void MapSystem_InitWindows(void)
{

    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(WINDOW_HEADER_TEXT, 0);
    PutWindowTilemap(WINDOW_HEADER_TEXT);
    CopyWindowToVram(WINDOW_HEADER_TEXT, 3);

    FillWindowPixelBuffer(WINDOW_FOOTER_TEXT, 0);
    PutWindowTilemap(WINDOW_FOOTER_TEXT);
    CopyWindowToVram(WINDOW_FOOTER_TEXT, 3);

    FillWindowPixelBuffer(WINDOW_L2_RIGHT_SIDE_TEXT, 0);
    PutWindowTilemap(WINDOW_L2_RIGHT_SIDE_TEXT);
    CopyWindowToVram(WINDOW_L2_RIGHT_SIDE_TEXT, 3);

    FillWindowPixelBuffer(WINDOW_L2_LEFT_SIDE_TEXT, 0);
    PutWindowTilemap(WINDOW_L2_LEFT_SIDE_TEXT);
    CopyWindowToVram(WINDOW_L2_LEFT_SIDE_TEXT, 3);

    LoadUserWindowBorderGfx(WINDOW_HEADER_TEXT, 720, 14 * 16);
}


static bool8 RegionMap_LoadGraphics(void) // This function is the one that actually loads the tiles and tilemaps for the backgrounds as well as more regionmap data loading for some reason (based on vanilla)
{
    switch (sRegionMap->gfxLoadState)
    {
    case 0:
        switch (sCurrentMapMode)
        {
            case MAP_MODE_TROLLEY:
                LoadPalette(sRegionTrolleyBackgroundPalette, 32, 32);
                DecompressDataWithHeaderVram(sRegionTrolleyBackgroundTiles, (void *)(BG_CHAR_ADDR(2)));
                DecompressDataWithHeaderVram(sRegionTrolleyBackgroundTilemap, (u16 *)(BG_SCREEN_ADDR(29)));
                break;
            default:
                DecompressDataWithHeaderVram(sRegionGeographyTiles, (void*)(BG_CHAR_ADDR(2)));
                DecompressDataWithHeaderVram(sRegionGeographyTilemap, (u16 *)(BG_SCREEN_ADDR(29)));
                LoadPalette(sRegionGeographyPalette, 32, 32);
                break;
        }
        sRegionMap->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible())
            break;
        switch (sCurrentMapMode)
        {
            case MAP_MODE_TROLLEY:
                DecompressDataWithHeaderVram(sTrolleyRailTiles, (void *)(BG_CHAR_ADDR(1)));
                DecompressDataWithHeaderVram(sTrolleyRailTilemap, (u16 *)(BG_SCREEN_ADDR(30)));
                LoadPalette(sTrolleyRailPalette, 0, 32);
                break;
            default:
                DecompressDataWithHeaderVram(sRouteTiles, (void *)(BG_CHAR_ADDR(1)));
                DecompressDataWithHeaderVram(sRouteTilemap, (u16 *)(BG_SCREEN_ADDR(30)));
                LoadPalette(sRoutePalette, 0, 32);
                break;
        }
        sRegionMap->gfxLoadState++;
        break;
    case 2:
        if (FreeTempTileDataBuffersIfPossible())
            break;
        switch (sCurrentMapMode)
        {
            case MAP_MODE_TROLLEY:

                break;
            default:
                DecompressDataWithHeaderVram(sL2WindowTiles, (void *)(BG_CHAR_ADDR(3)));
                DecompressDataWithHeaderVram(sL2WindowTilemap, (u16 *)(BG_SCREEN_ADDR(25)));
                LoadPalette(sL2WindowPalette, 48, 32);
                break;
        }
        sRegionMap->gfxLoadState++;
        break;
    case 3:
        SetBgAttribute(1, BG_ATTR_WRAPAROUND, 1);
        SetBgAttribute(3, BG_ATTR_WRAPAROUND, 1);
        sRegionMap->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static bool8 GetMenuL2State(void)
{
    return sRegionMap->inL2State;
}

void InitSFRegionMapData()
{
    sRegionMap->inL2State = FALSE;
    sRegionMap->inputCallback = ProcessRegionMapInput_Full;
    sRegionMap->cursorSprite = NULL;
    sRegionMap->cursorSpriteLOC = NULL;
    sRegionMap->l2_selectorSpriteIds[0] = SPRITE_NONE;
    sRegionMap->l2_selectorSpriteIds[1] = SPRITE_NONE;
    sRegionMap->playerIconSprite = NULL;
    sRegionMap->cursorMovementFrameCounter = 0;
    sRegionMap->blinkPlayerIcon = FALSE;
    sRegionMap->gfxLoadState = 0;
    sRegionMap->waypointSpriteId = SPRITE_NONE;
    sRegionMap->waypointSpriteInL2Id = SPRITE_NONE;
    sRegionMap->l2_selection = 0;

    for(u8 i = 0; i < GRAY_POI_COUNT; i++)
    {
        sRegionMap->grayPOISpriteIds[i] = SPRITE_NONE;
        sRegionMap->trolleyPOISpriteIds[i] = SPRITE_NONE;
    }

    sOWWaypointArrow_SpriteId = SPRITE_NONE;
    return;
}


//
//  Begin Sprite Functions for Cursor
//
static void SpriteCB_CursorMapFull(struct Sprite *sprite)
{
    if (sRegionMap->cursorMovementFrameCounter != 0)
    {
        sprite->x += 2 * sRegionMap->cursorDeltaX;
        sprite->y += 2 * sRegionMap->cursorDeltaY;
        sRegionMap->cursorMovementFrameCounter--;
    }
}

static void SpriteCB_CursorMapFullLOC(struct Sprite *sprite)
{
    if (sRegionMap->cursorMovementFrameCounter != 0)
    {
        sprite->x += 2 * sRegionMap->cursorDeltaX;
        sprite->y += 2 * sRegionMap->cursorDeltaY;
    }
}

static void SpriteCB_CursorMap_TrolleyMode(struct Sprite *sprite)
{
    sprite->x = 8 * sRegionMap->cursorPosX + 4 + 8;
    sprite->y = 8 * sRegionMap->cursorPosY + 4 + 16;
    if (sRegionMap->currentTrolley == TROLLEY_IRISINA_TOWN)
    {
        sprite->x += 4;
        sprite->y -= 4;
    }
}

static void SpriteCB_CursorMap_TrolleyModeLOC(struct Sprite *sprite)
{
    sprite->x = 8 * sRegionMap->cursorPosX + 4 + 8;
    sprite->y = 8 * sRegionMap->cursorPosY + 4 + 8;
    if (sRegionMap->currentTrolley == TROLLEY_IRISINA_TOWN)
    {
        sprite->x += 4;
        sprite->y -= 4;
    }
}

static void PrintWarpPriceOnTooltip_AllFrames(void)
{
    switch (sCurrentMapMode)
    {
        case MAP_MODE_DEFAULT:
        case MAP_MODE_TAXI:
            PrintWarpPriceOnTooltip(2, (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP) + (0 * 0x800) + (26 * TILE_SIZE_4BPP));
            PrintWarpPriceOnTooltip(2, (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP) + (1 * 0x800) + (26 * TILE_SIZE_4BPP));
            PrintWarpPriceOnTooltip(2, (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP) + (2 * 0x800) + (26 * TILE_SIZE_4BPP));
            PrintWarpPriceOnTooltip(2, (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP) + (3 * 0x800) + (26 * TILE_SIZE_4BPP));
            break;
        case MAP_MODE_FLY:
            break;
    }
}

void CreateSFRegionMapCursor(u16 tileTag, u16 paletteTag) // Loads spritesheets and creates sprites for the two Cursor types
{
    u8 spriteId;
    u8 spriteIdLOC;
    struct SpriteTemplate template;
    struct SpritePalette palette;

    palette = sRegionMapCursorSpritePalette;
    template = sRegionMapCursorSpriteTemplate;
    template.tileTag = tileTag;
    palette.tag = paletteTag;
    template.paletteTag = paletteTag;

    if (sCurrentMapMode == MAP_MODE_TROLLEY)
        template.callback = SpriteCB_CursorMap_TrolleyMode;
    else
        template.callback = SpriteCB_CursorMapFull;

    LoadSpriteSheet(&sSpriteSheet_RegionMapCursorSmallGfx);
    LoadSpritePalette(&palette);
    spriteId = CreateSpriteAtEnd(&template, 0x38, 0x48, 0);

    tileTag = TAG_CURSOR_TOOLTIP_LOC_STATE;
    paletteTag = TAG_CURSOR_TOOLTIP_LOC_STATE;
    palette = sRegionMapCursorTooltipSpritePalette;
    template = sRegionMapCursorTooltipSpriteTemplate;
    template.tileTag = tileTag;
    palette.tag = paletteTag;
    template.paletteTag = paletteTag;

    if (sCurrentMapMode == MAP_MODE_TROLLEY)
        template.callback = SpriteCB_CursorMap_TrolleyModeLOC;
    else
        template.callback = SpriteCB_CursorMapFullLOC;

    switch (sCurrentMapMode)
    {
        case MAP_MODE_TROLLEY:
            LoadSpriteSheet(&sSpriteSheet_RegionMapCursorTooltipGfx);
            break;
        case MAP_MODE_TAXI:
            LoadSpriteSheet(&sSpriteSheet_RegionMapCursorTooltipTaxiGfx);
            break;
        case MAP_MODE_FLY:
            LoadSpriteSheet(&sSpriteSheet_RegionMapCursorTooltipFlyGfx);
            break;
        default:
            LoadSpriteSheet(&sSpriteSheet_RegionMapCursorTooltipGfx);
            break;
    }

    LoadSpritePalette(&palette);
    spriteIdLOC = CreateSprite(&template, 0x38, 0x48, 0);


    if ((spriteId != MAX_SPRITES) && (spriteIdLOC != MAX_SPRITES))
    {
        sRegionMap->cursorSprite = &gSprites[spriteId];
        sRegionMap->cursorSpriteLOC = &gSprites[spriteIdLOC];

        sRegionMap->cursorSpriteLOC->oam.size = SPRITE_SIZE(64x64);
        sRegionMap->cursorSpriteLOC->x = 8 * sRegionMap->cursorPosX + 4;
        sRegionMap->cursorSpriteLOC->y = 8 * sRegionMap->cursorPosY + 4;

        sRegionMap->cursorSprite->oam.size = SPRITE_SIZE(16x16);
        sRegionMap->cursorSprite->x = 8 * sRegionMap->cursorPosX + 4;
        sRegionMap->cursorSprite->y = 8 * sRegionMap->cursorPosY + 4;
        //StartSpriteAnim(sRegionMap->cursorSprite, 0);

        sRegionMap->cursorSpriteLOC->y += 42;


        if((sRegionMap->cursorPosY * 8 + 4) < 40)
        {
            StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_UP);
            sRegionMap->cursorAnimState = CURSOR_UP;
            UpdateCursorPositionOnAnimChange();
        }
        else if((sRegionMap->cursorPosX * 8 + 4) >= 208)
        {
            StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_RIGHT);
            sRegionMap->cursorAnimState = CURSOR_RIGHT;
            UpdateCursorPositionOnAnimChange();
        }
        else if((sRegionMap->cursorPosX * 8 + 4) < 24)
        {
            StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_LEFT);
            sRegionMap->cursorAnimState = CURSOR_LEFT;
            UpdateCursorPositionOnAnimChange();
        }
        else if((sRegionMap->cursorPosY * 8 + 4) >= 80)
        {
            StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_DOWN);
            sRegionMap->cursorAnimState = CURSOR_DOWN;
            UpdateCursorPositionOnAnimChange();
        }
        else if((sRegionMap->cursorPosY * 8 + 4) < 80)
        {
            StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_UP);
            sRegionMap->cursorAnimState = CURSOR_UP;
            UpdateCursorPositionOnAnimChange();
        }

        if (sRegionMap->activeCursorState == CURSOR_TOOLTIP_LOC_STATE)
        {
            sRegionMap->cursorSpriteLOC->invisible = FALSE;
            sRegionMap->cursorSprite->invisible = TRUE;
        }
        else
        {
            sRegionMap->cursorSpriteLOC->invisible = TRUE;
            sRegionMap->cursorSprite->invisible = FALSE;
        }

        sRegionMap->cursorSprite->data[1] = 2;
        sRegionMap->cursorSprite->data[2] = (IndexOfSpritePaletteTag(TAG_CURSOR) << 4) + 0x101;
        sRegionMap->cursorSprite->data[3] = TRUE;

        sRegionMap->cursorSpriteLOC->data[1] = 2;
        sRegionMap->cursorSpriteLOC->data[2] = (IndexOfSpritePaletteTag(TAG_CURSOR_TOOLTIP_LOC_STATE) << 4) + 0x101;
        sRegionMap->cursorSpriteLOC->data[3] = TRUE;

        PrintWarpPriceOnTooltip_AllFrames();
    }
    return;
}

static void ResetCursorPositionBeforeAnimChange()
{
    switch(sRegionMap->cursorAnimState)
    {
        case CURSOR_DOWN:
            sRegionMap->cursorSpriteLOC->y += 52;
            break;
        case CURSOR_UP:
            sRegionMap->cursorSpriteLOC->y += 26;
            break;
        case CURSOR_RIGHT:
            sRegionMap->cursorSpriteLOC->y += 44;
            sRegionMap->cursorSpriteLOC->x += 22;
            break;
        case CURSOR_LEFT:
            sRegionMap->cursorSpriteLOC->y += 44;
            sRegionMap->cursorSpriteLOC->x -= 22;
            break;
    }
}

static void UpdateCursorPositionOnAnimChange()
{
    switch(sRegionMap->cursorAnimState)
    {
        case CURSOR_DOWN:
            sRegionMap->cursorSpriteLOC->y -= 52;
            break;
        case CURSOR_UP:
            sRegionMap->cursorSpriteLOC->y -= 26;
            break;
        case CURSOR_RIGHT:
            sRegionMap->cursorSpriteLOC->y -= 44;
            sRegionMap->cursorSpriteLOC->x -= 22;
            break;
        case CURSOR_LEFT:
            sRegionMap->cursorSpriteLOC->y -= 44;
            sRegionMap->cursorSpriteLOC->x += 22;
            break;
    }
}

static void UpdateRegionMapCursor(void) // Main Function That Updates the Position of the Cursor If Its Over A Known Location and If its Pointing Up or Down
{
    if ((sRegionMap->mapSecTypeHasVisited != LOCATION_NONE) && (CheckIfVisitedHoverLocation() != FALSE))
    {
        if(sRegionMap->activeCursorState == CURSOR_SMALL_CURSOR_STATE)
        {
            sRegionMap->activeCursorState = CURSOR_TOOLTIP_LOC_STATE;
            sRegionMap->cursorSprite->invisible = TRUE;
            sRegionMap->cursorSpriteLOC->invisible = FALSE;
        }

        if((sRegionMap->cursorPosY * 8 + 4) < 40)
        {
            if(sRegionMap->cursorAnimState != CURSOR_UP)
            {
                StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_UP);
                ResetCursorPositionBeforeAnimChange();
                sRegionMap->cursorAnimState = CURSOR_UP;
                UpdateCursorPositionOnAnimChange();
            }
        }
        else if((sRegionMap->cursorPosX * 8 + 4) >= 208)
        {
            if(sRegionMap->cursorAnimState != CURSOR_RIGHT)
            {
                StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_RIGHT);
                ResetCursorPositionBeforeAnimChange();
                sRegionMap->cursorAnimState = CURSOR_RIGHT;
                UpdateCursorPositionOnAnimChange();
            }
        }
        else if((sRegionMap->cursorPosX * 8 + 4) < 24)
        {
            if(sRegionMap->cursorAnimState != CURSOR_LEFT)
            {
                StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_LEFT);
                ResetCursorPositionBeforeAnimChange();
                sRegionMap->cursorAnimState = CURSOR_LEFT;
                UpdateCursorPositionOnAnimChange();
            }
        }
        else if((sRegionMap->cursorPosY * 8 + 4) >= 80)
        {
            if(sRegionMap->cursorAnimState != CURSOR_DOWN)
            {
                StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_DOWN);
                ResetCursorPositionBeforeAnimChange();
                sRegionMap->cursorAnimState = CURSOR_DOWN;
                UpdateCursorPositionOnAnimChange();
            }
        }
        else if((sRegionMap->cursorPosY * 8 + 4) < 80)
        {
            if(sRegionMap->cursorAnimState != CURSOR_UP)
            {
                StartSpriteAnim(sRegionMap->cursorSpriteLOC, CURSOR_UP);
                ResetCursorPositionBeforeAnimChange();
                sRegionMap->cursorAnimState = CURSOR_UP;
                UpdateCursorPositionOnAnimChange();
            }
        }

        PrintWarpPriceOnTooltip_AllFrames();

    }
    else
    {
        if(sRegionMap->activeCursorState == CURSOR_TOOLTIP_LOC_STATE)
        {
            sRegionMap->activeCursorState = CURSOR_SMALL_CURSOR_STATE;
            sRegionMap->cursorSprite->invisible = FALSE;
            sRegionMap->cursorSpriteLOC->invisible = TRUE;
        }

    }
}


//
//  Create Player RegionMap Icon and Callback
//
static void SFCreateRegionMapPlayerIcon(u16 tileTag, u16 paletteTag)
{
    u8 spriteId;
    struct SpriteSheet sheet = {sRegionMapPlayerIcon_BrendanGfx, 0x80, tileTag};
    struct SpritePalette palette = {sRegionMapPlayerIcon_BrendanPal, paletteTag};
    struct SpriteTemplate template = {tileTag, paletteTag, &sRegionMapPlayerIconOam, sRegionMapPlayerIconAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy};

    LoadSpriteSheet(&sheet);
    LoadSpritePalette(&palette);
    spriteId = CreateSprite(&template, 0, 0, 0xFF);
    sRegionMap->playerIconSprite = &gSprites[spriteId];
    if(sCurrentMapMode == MAP_MODE_TROLLEY)
    {
        sRegionMap->playerIconSprite->x = sRegionMap->playerIconSpritePosX * 8 + 4 + 8;
        sRegionMap->playerIconSprite->y = sRegionMap->playerIconSpritePosY * 8 + 4 + 16;
    }
    else
    {
        sRegionMap->playerIconSprite->x = sRegionMap->playerIconSpritePosX * 8 + 4;
        sRegionMap->playerIconSprite->y = sRegionMap->playerIconSpritePosY * 8 + 4;
    }
    sRegionMap->playerIconSprite->callback = SpriteCB_PlayerIcon;
}

#define sTimer   data[7]
static void SpriteCB_PlayerIcon(struct Sprite *sprite)
{
    if (sRegionMap->blinkPlayerIcon)
    {
        if (++sprite->sTimer > 32)
        {
            sprite->sTimer = 0;
            sprite->invisible = sprite->invisible ? FALSE : TRUE;
        }
    }
    else
    {
        sprite->invisible = FALSE;
    }
}

static void SFTrySetPlayerIconBlink(void)
{
    if (sRegionMap->playerIsInCave)
        sRegionMap->blinkPlayerIcon = TRUE;
}
#undef sTimer


//
//  Create Waypoint Sprite Function
//
static void LoadWaypointGraphicsOnMapLoad(void)
{
    LoadSpriteSheet(&sSpriteSheet_WayPoint);
    LoadSpritePalette(&sSpritePal_WayPoint);
    if(gSaveBlock3Ptr->waypoint.currentState != WAYPOINT_NONE)
    {
        CreateWaypointSprite();
    }

}

static void CreateWaypointSprite(void)
{
    u16 x, y;

    x = 8 * gSaveBlock3Ptr->waypoint.xTile + 4;
    y = 8 * gSaveBlock3Ptr->waypoint.yTile + 4;

    if (sRegionMap->waypointSpriteId == SPRITE_NONE)
    {
       sRegionMap->waypointSpriteId = CreateSpriteAtEnd(&sSpriteTemplate_WayPointMap, x, y, 0);
    }
    else
    {
        gSprites[sRegionMap->waypointSpriteId].x = x;
        gSprites[sRegionMap->waypointSpriteId].y = y;
    }
    gSprites[sRegionMap->waypointSpriteId].invisible = FALSE;
    StartSpriteAnim(&gSprites[sRegionMap->waypointSpriteId], 1);
    return;
}

static void CreateL2WaypointSprite(void)
{
    u16 x = 64, y = L2_SELECTOR_Y_START_POS + (L2_Y_DIFFERENCE * (gSaveBlock3Ptr->waypoint.l2_id - sRegionMap->l2_scroll_amount)) - 9;

    if((sRegionMap->cursorPosX * 8 + 4) < 120) // RIGHT SIDE
    {
        x = 240 - 8;
    }
    else // LEFT SIDE
    {
        x = 64 + 32 - 10;
    }

    if (sRegionMap->waypointSpriteInL2Id == SPRITE_NONE)
    {
       sRegionMap->waypointSpriteInL2Id = CreateSpriteAtEnd(&sSpriteTemplate_WayPointMapL2, x, y, 0);
    }
    else
    {
        gSprites[sRegionMap->waypointSpriteInL2Id].x = x;
        gSprites[sRegionMap->waypointSpriteInL2Id].y = y;
    }

    gSprites[sRegionMap->waypointSpriteInL2Id].oam.priority = 0;
    gSprites[sRegionMap->waypointSpriteInL2Id].invisible = FALSE;
    StartSpriteAnim(&gSprites[sRegionMap->waypointSpriteInL2Id], 2);
    return;
}

static void L2WaypointSpriteCallback(struct Sprite *sprite)
{
    if (gSaveBlock3Ptr->waypoint.l2_id == 0xFF)
        return;

    if (gSaveBlock3Ptr->waypoint.l2_id < sRegionMap->l2_scroll_amount)
    {
        sprite->invisible = TRUE;
        return;
    }

    if (gSaveBlock3Ptr->waypoint.l2_id > sRegionMap->l2_scroll_amount + (MAX_L2_SHOWN - 1))
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->y = L2_SELECTOR_Y_START_POS + (L2_Y_DIFFERENCE * (gSaveBlock3Ptr->waypoint.l2_id - sRegionMap->l2_scroll_amount)) - 7;
    sprite->invisible = FALSE;
}

static void DestroyWaypointSprite(void)
{
    if (sRegionMap->waypointSpriteId != SPRITE_NONE)
        DestroySprite(&gSprites[sRegionMap->waypointSpriteId]);
    sRegionMap->waypointSpriteId = SPRITE_NONE;

    if (sRegionMap->waypointSpriteInL2Id != SPRITE_NONE)
        DestroySprite(&gSprites[sRegionMap->waypointSpriteInL2Id]);
    sRegionMap->waypointSpriteInL2Id = SPRITE_NONE;
}

static void DestroyJustL2WaypointSprite(void)
{
    if (sRegionMap->waypointSpriteInL2Id != SPRITE_NONE)
        DestroySprite(&gSprites[sRegionMap->waypointSpriteInL2Id]);
    sRegionMap->waypointSpriteInL2Id = SPRITE_NONE;
}

static u8 CheckIfOverCurrentWaypoint(void)
{
    if(!GetMenuL2State())
    {
        if((gSaveBlock3Ptr->waypoint.xTile == sRegionMap->cursorPosX) && (gSaveBlock3Ptr->waypoint.yTile == sRegionMap->cursorPosY))
            return TRUE;
    }
    else // L2 State
    {
        if (gSaveBlock3Ptr->waypoint.l2_id == sRegionMap->l2_selectionPlusScroll && gSaveBlock3Ptr->waypoint.mapSecId == sRegionMap->mapSecId)
            return TRUE;
    }
    return FALSE;
}

void SetWaypointData(u16 waypointType, u16 healLocation)
{
    gSaveBlock3Ptr->waypoint.xTile = (s16) sRegionMap->cursorPosX;
    gSaveBlock3Ptr->waypoint.yTile = (s16) sRegionMap->cursorPosY;
    gSaveBlock3Ptr->waypoint.currentState = waypointType;
    gSaveBlock3Ptr->waypoint.healLocation = healLocation;
    gSaveBlock3Ptr->waypoint.currentDirection = DIR_NONE;
    gSaveBlock3Ptr->waypoint.mapSecId = sRegionMap->mapSecId;
    if (waypointType == WAYPOINT_L2)
        gSaveBlock3Ptr->waypoint.l2_id = sRegionMap->l2_selectionPlusScroll;
    // DebugPrintf("Direction to Waypoint: %d", CalculateWaypointDirection());
}

void ClearWaypointDataSave(void)
{
    gSaveBlock3Ptr->waypoint.xTile = 0;
    gSaveBlock3Ptr->waypoint.yTile = 0;
    gSaveBlock3Ptr->waypoint.currentState = WAYPOINT_NONE;
    gSaveBlock3Ptr->waypoint.currentDirection = DIR_NONE;
    gSaveBlock3Ptr->waypoint.healLocation = HEAL_LOCATION_NONE;
    gSaveBlock3Ptr->waypoint.mapSecId = MAPSEC_NONE;
    gSaveBlock3Ptr->waypoint.l2_id = 0xFF;
}

void ClearWaypointData(void)
{
    ClearWaypointDataSave();
    if(sRegionMap->waypointSpriteId != SPRITE_NONE || sRegionMap->waypointSpriteInL2Id != SPRITE_NONE)
        DestroyWaypointSprite();
}

u8 CalculateWaypointDirection(void) // Simple Calculation Based on x / y position of the waypoint and the player in the region map
{
    s16 playerXTile, playerYTile;
    u16 isIndoorOrCave = FALSE;
    u8 direction = DIR_NONE;
    CalculatePlayerPositionInRegionMap(&playerXTile, &playerYTile, &isIndoorOrCave);

    if(isIndoorOrCave == TRUE)
        return OWARROW_NO_SIGNAL_ANIM;

    if (gSaveBlock3Ptr->waypoint.currentState == WAYPOINT_L1) // Check Current Map For L1 Waypoint
    {
        if (gSaveBlock3Ptr->waypoint.healLocation == sMapHealLocations[gMapHeader.regionMapSectionId])
        {
            direction = DIR_NONE;
            return direction;
        }
    }

    if (gSaveBlock3Ptr->waypoint.currentState == WAYPOINT_L2) // Check Current Map For L2 Waypoint
    {
        if (gSaveBlock3Ptr->waypoint.healLocation == L2_Info[gMapHeader.regionMapSectionId][gSaveBlock3Ptr->waypoint.l2_id].healLocation)
        {
            const struct HealLocation *healLocation = GetHealLocation(gSaveBlock3Ptr->waypoint.healLocation);
            if (healLocation)
            {
                if((healLocation->mapNum == gSaveBlock1Ptr->location.mapNum) && (healLocation->mapGroup == gSaveBlock1Ptr->location.mapGroup))
                {
                    if (healLocation->x < gSaveBlock1Ptr->pos.x)
                    {
                        if((healLocation->y - gSaveBlock1Ptr->pos.y) > 1)
                        {
                            direction = DIR_SOUTHWEST;
                        }
                        else if((healLocation->y - gSaveBlock1Ptr->pos.y) < -1)
                        {
                            direction = DIR_NORTHWEST;
                        }
                        else
                        {
                            direction = DIR_WEST;
                        }
                    }
                    else if(healLocation->x > gSaveBlock1Ptr->pos.x) // Facing West
                    {
                        if((healLocation->y - gSaveBlock1Ptr->pos.y) > 1)
                        {
                            direction = DIR_SOUTHEAST;
                        }
                        else if((healLocation->y - gSaveBlock1Ptr->pos.y) < -1)
                        {
                            direction = DIR_NORTHEAST;
                        }
                        else
                        {
                            direction = DIR_EAST;
                        }
                    }
                    else if(healLocation->x == gSaveBlock1Ptr->pos.x) // Straight Up or Down
                    {
                        if((healLocation->y - gSaveBlock1Ptr->pos.y) > 0)
                        {
                            direction = DIR_SOUTH;
                        }
                        else if((healLocation->y - gSaveBlock1Ptr->pos.y) < 0)
                        {
                            direction = DIR_NORTH;
                        }
                        else
                        {
                            direction = DIR_NONE;
                            return direction;
                        }
                    }
                    else
                    {
                        direction = DIR_NONE;
                        return direction;
                    }
                    return direction;
                }
            }
        }
    }

    if(gSaveBlock3Ptr->waypoint.xTile < playerXTile) // Facing East
    {
        if((gSaveBlock3Ptr->waypoint.yTile - playerYTile) > 1)
        {
            direction = DIR_SOUTHWEST;
        }
        else if((gSaveBlock3Ptr->waypoint.yTile - playerYTile) < -1)
        {
            direction = DIR_NORTHWEST;
        }
        else
        {
            direction = DIR_WEST;
        }
    }

    if(gSaveBlock3Ptr->waypoint.xTile > playerXTile) // Facing West
    {
        if((gSaveBlock3Ptr->waypoint.yTile - playerYTile) > 1)
        {
            direction = DIR_SOUTHEAST;
        }
        else if((gSaveBlock3Ptr->waypoint.yTile - playerYTile) < -1)
        {
            direction = DIR_NORTHEAST;
        }
        else
        {
            direction = DIR_EAST;
        }
    }

    if(gSaveBlock3Ptr->waypoint.xTile == playerXTile) // Straight Up or Down
    {
        if((gSaveBlock3Ptr->waypoint.yTile - playerYTile) > 0)
        {
            direction = DIR_SOUTH;
        }
        if((gSaveBlock3Ptr->waypoint.yTile - playerYTile) < 0)
        {
            direction = DIR_NORTH;
        }
    }

    return direction;
}

static void HandleAttemptToPlaceWaypoint(void)
{
    if(CheckIfOverCurrentWaypoint())
    {
        ClearWaypointData();
        return;
    }

    if(!CheckIfHoverLocationIsMapSecNone())
    {
        if(!GetMenuL2State())
        {
            SetWaypointData(WAYPOINT_L1, sMapHealLocations[sRegionMap->mapSecId]);
            CreateWaypointSprite();
        }
        else    // L2 State
        {
            SetWaypointData(WAYPOINT_L2, GetCurrentL2HealLocation());
            CreateWaypointSprite();
            if(gSaveBlock3Ptr->waypoint.currentState == WAYPOINT_L2)
                CreateL2WaypointSprite();
        }
        return;
    }
}

//
//  Overworld Waypoint Arrow Functions
//
void CreateOWWaypointArrowSprite(void)
{
    u16 x, y;
    x = 208;
    y = 32;

    if(sOWWaypointArrow_SpriteId == SPRITE_NONE)
        sOWWaypointArrow_SpriteId = CreateSpriteAtEnd(&sSpriteTemplate_OwWaypointArrowMap, x, y, 0);
    gSprites[sOWWaypointArrow_SpriteId].invisible = FALSE;
    gSprites[sOWWaypointArrow_SpriteId].data[4] = gSaveBlock3Ptr->waypoint.currentDirection;
    StartSpriteAnim(&gSprites[sOWWaypointArrow_SpriteId], gSaveBlock3Ptr->waypoint.currentDirection);
    return;
}

#define UPDATE_WAYPOINT_INTERVAL 16 // how many frames in between updates
#define WAYPOINT_FOUND_DURATION ((60 * 3) + UPDATE_WAYPOINT_INTERVAL)
static void SpriteCB_HandleOWWaypointArrow(struct Sprite *sprite)
{
    if(sprite->data[4] == OWARROW_NO_SIGNAL_ANIM)
        return;

    if(sprite->data[0] == UPDATE_WAYPOINT_INTERVAL)
    {
        gSaveBlock3Ptr->waypoint.currentDirection = CalculateWaypointDirection();
        StartSpriteAnim(sprite, gSaveBlock3Ptr->waypoint.currentDirection);
        sprite->data[0] = 0;
        if(gSaveBlock3Ptr->waypoint.currentDirection == DIR_NONE)
        {
            sprite->data[0] = UPDATE_WAYPOINT_INTERVAL + 1; // Jump to If Below Until Animation over
            ClearWaypointDataSave();
        }
    }
    else if(sprite->data[0] > WAYPOINT_FOUND_DURATION)  // After found animatin finished remove the sprite
    {
        DestroyOWWaypointArrowSprite();
        return;
    }
    sprite->data[0]++;
    return;
};

void ShowOWWaypointArrow(void)
{
    if(gSaveBlock3Ptr->waypoint.currentState != WAYPOINT_NONE && sOWWaypointArrow_SpriteId != SPRITE_NONE)
        gSprites[sOWWaypointArrow_SpriteId].invisible = FALSE;
}

void HideOWWaypointArrow(void)
{
    if(gSaveBlock3Ptr->waypoint.currentState != WAYPOINT_NONE && sOWWaypointArrow_SpriteId != SPRITE_NONE)
        gSprites[sOWWaypointArrow_SpriteId].invisible = TRUE;
}

void ToggleOWWaypointArrow(void)
{
    if(gSaveBlock3Ptr->waypoint.currentState != WAYPOINT_NONE && sOWWaypointArrow_SpriteId != SPRITE_NONE)
        gSprites[sOWWaypointArrow_SpriteId].invisible = !(gSprites[sOWWaypointArrow_SpriteId].invisible);
}

void DestroyOWWaypointArrowSprite(void)
{
    DestroySprite(&gSprites[sOWWaypointArrow_SpriteId]);
    sOWWaypointArrow_SpriteId = SPRITE_NONE;
}

void CreateOverworldWaypointArrow(void)
{
    if(FuncIsActiveTask(Task_DelayPrintOverworldWaypoint))
        return;

    if(gSaveBlock3Ptr->waypoint.currentState != WAYPOINT_NONE)
    {
        CreateTask(Task_DelayPrintOverworldWaypoint, 15);
    }
}

static void Task_DelayPrintOverworldWaypoint(u8 taskId)
{
    //if (FindTaskIdByFunc(Task_RunMapPreview_Script) != TASK_NONE)
   if (ForestMapPreviewScreenIsRunning()) 
        return;

    if (!gPaletteFade.active)
    {
        LoadSpriteSheet(&sSpriteSheet_OwWaypointArrow);
        LoadSpritePalette(&sSpritePal_OwWaypointArrow);
        sOWWaypointArrow_SpriteId = SPRITE_NONE;
        gSaveBlock3Ptr->waypoint.currentDirection = CalculateWaypointDirection();
        CreateOWWaypointArrowSprite();
        DestroyTask(taskId);
    }
}

//
//  Create The Gray POI Sprites If Not Traveled Flag
//
static const struct GrayPOI sMapGrayPOILocations[GRAY_POI_COUNT] = // Stores All Positions for the gray city sprites and the mapsec to check for visited flag associated with them
{
    [GRAY_POI_LEAVERRA_FOREST]   = {MAPSEC_LEAVERRA_FOREST, 2, 0, POI_SMALL_SQUARE}, // Small Squares
    [GRAY_POI_ESPULEE_OUTSKIRTS] = {MAPSEC_ESPULEE_OUTSKIRTS, 7, 0, POI_SMALL_SQUARE},
    [GRAY_POI_CHASILLA]          = {MAPSEC_CHASILLA, 25, 0, POI_SMALL_SQUARE},
    [GRAY_POI_PETAROSA_BOROUGH]  = {MAPSEC_PETAROSA_BOROUGH, 7, 4, POI_SMALL_SQUARE},
    [GRAY_POI_CRESALTA_VISTA]    = {MAPSEC_CRESALTA_VISTA, 1, 5, POI_SMALL_SQUARE},
    [GRAY_POI_TORA_TOWN]         = {MAPSEC_TORA_TOWN, 12, 6, POI_SMALL_SQUARE},
    [GRAY_POI_HODOU_CITY]        = {MAPSEC_HODOU_CITY, 16, 6, POI_SMALL_SQUARE},
    [GRAY_POI_TIRABUDIN_PLACE]   = {MAPSEC_TIRABUDIN_PLACE, 7, 8, POI_SMALL_SQUARE},
    [GRAY_POI_QIU_VILLAGE]       = {MAPSEC_QIU_VILLAGE, 1, 12, POI_SMALL_SQUARE},
    [GRAY_POI_CURENO_PORT]       = {MAPSEC_CURENO_PORT, 18, 14, POI_SMALL_SQUARE},
    [GRAY_POI_CUCUNO_TOWN]       = {MAPSEC_CUCONU_TOWN, 14, 15, POI_SMALL_SQUARE},
    [GRAY_POI_HALERBA_CITY]      = {MAPSEC_HALERBA_CITY, 3, 8, POI_LARGE_RECT}, // Small Squares
    [GRAY_POI_HALAI_ISLAND]      = {MAPSEC_HALAI_ISLAND, 24, 10, POI_SMALL_RECT_CIRCLE}, // Small Rect With Circle
    [GRAY_POI_OROLAND]           = {MAPSEC_OROLAND, 24, 6, POI_LARGE_SQUARE}, // Large Squares
    [GRAY_POI_IRISINA_TOWN]      = {MAPSEC_IRISINA_TOWN, 9, 12, POI_LARGE_SQUARE},
    [GRAY_POI_CAPHE_CITY]        = {MAPSEC_CAPHE_CITY, 14, 7, POI_SMALL_VERT_RECT}, // Small Vertical Rect
    [GRAY_POI_MERMEREZA_CITY]    = {MAPSEC_MERMEREZA_CITY, 14, 11, POI_SMALL_VERT_RECT},
    [GRAY_POI_PERLACIA_CITY]     = {MAPSEC_PERLACIA_CITY, 17, 10, POI_LARGE_SQUARE_CIRCLE}, // Large Square with Circle
};

static void CreateGrayPOISprites(void)
{
    u16 i = 0;
    u16 x, y;

    LoadSpriteSheet(&sSpriteSheet_GrayPOI);
    LoadSpritePalette(&sSpritePal_GrayPOI);

    for(i=0; i < GRAY_POI_COUNT; i++)
    {
        if(GetMapsecTypeHasVisited(sMapGrayPOILocations[i].mapSecForPOI) == LOCATION_VISITED)
            continue;

        x = (sMapGrayPOILocations[i].xTile * 8) + 8;
        y = (sMapGrayPOILocations[i].yTile * 8) + 16;

        if(sMapGrayPOILocations[i].shapeOfPOI == POI_LARGE_RECT)
            x += 4; // Shift Over 4 Pixels For Large Rect, Offset for Some Reason

        if (sRegionMap->grayPOISpriteIds[i] == SPRITE_NONE)
            sRegionMap->grayPOISpriteIds[i] = CreateSpriteAtEnd(&sSpriteTemplate_GrayPOIMap, x, y, 0);
        gSprites[sRegionMap->grayPOISpriteIds[i]].invisible = FALSE;
        StartSpriteAnim(&gSprites[sRegionMap->grayPOISpriteIds[i]], sMapGrayPOILocations[i].shapeOfPOI);
    }
    return;
}

// Delete Sprites Functions
static void DestroyGrayPOISprites(void)
{
    u8 i = 0;
    for(i = 0; i < GRAY_POI_COUNT; i++)
    {
        if(sRegionMap->grayPOISpriteIds[i] != SPRITE_NONE)
            DestroySprite(&gSprites[sRegionMap->grayPOISpriteIds[i]]);
        sRegionMap->grayPOISpriteIds[i] = SPRITE_NONE;
    }
}

static void FreeRegionMapSprites(void)
{
    DestroyWaypointSprite();
    DestroyGrayPOISprites();
    DestroyTrolleyPOISprites();
    DestroyL2CursorSprites();

    if (sRegionMap->cursorSprite != NULL)
    {
        DestroySprite(sRegionMap->cursorSprite);
    }
    if (sRegionMap->cursorSpriteLOC != NULL)
    {
        DestroySprite(sRegionMap->cursorSpriteLOC);
    }
    if (sRegionMap->playerIconSprite != NULL)
    {
        DestroySprite(sRegionMap->playerIconSprite);
    }
}

static void CreateTrolleyPOISprites(void)
{
    u16 i = 0;
    u16 x, y;

    LoadSpriteSheet(&sSpriteSheet_TrolleyPOI);
    LoadSpritePalette(&sSpritePal_TrolleyPOI);

    for(i=0; i < TROLLEY_COUNT; i++)
    {
        if(i == TROLLEY_IRISINA_TOWN)
            continue;

        x = (SFTrolleyStops[i].trolleyLocationIconX) + 8;
        y = (SFTrolleyStops[i].trolleyLocationIconY) + 16;

        if (sRegionMap->trolleyPOISpriteIds[i] == SPRITE_NONE)
            sRegionMap->trolleyPOISpriteIds[i] = CreateSpriteAtEnd(&sSpriteTemplate_TrolleyPOIMap, x, y, 0);

        gSprites[sRegionMap->trolleyPOISpriteIds[i]].invisible = FALSE;
        if(GetMapsecTypeHasVisited(SFTrolleyStops[i].trolleyMapSec) == LOCATION_VISITED)
            StartSpriteAnim(&gSprites[sRegionMap->trolleyPOISpriteIds[i]], 0);
        else
            StartSpriteAnim(&gSprites[sRegionMap->trolleyPOISpriteIds[i]], 1);
    }
    return;
}

// Delete Sprites Functions
static void DestroyTrolleyPOISprites(void)
{
    u8 i = 0;
    for(i = 0; i < GRAY_POI_COUNT; i++)
    {
        if(sRegionMap->trolleyPOISpriteIds[i] != SPRITE_NONE)
            DestroySprite(&gSprites[sRegionMap->trolleyPOISpriteIds[i]]);
        sRegionMap->trolleyPOISpriteIds[i] = SPRITE_NONE;
    }
}

//
//  Begin Header / Footer Text Printing Functions
//
static const u8 sText_HelpBar_NotL2IsDefault[] =_("{A_BUTTON} Go {B_BUTTON} Return {SELECT_BUTTON} Marker {START_BUTTON} Landmarks");
static const u8 sText_HelpBar_NotL2NotDefault[] =_("{A_BUTTON} Go {B_BUTTON} Return");
static const u8 sText_HelpBar_IsL2IsDefault[] =_("{A_BUTTON} Go {B_BUTTON} Return {SELECT_BUTTON} Marker");
static const u8 sText_HelpBar_IsL2NotDefault[] =_("{A_BUTTON} Go {B_BUTTON} Return");

static const u8 sText_Money_Bar[]         = _("Money: ¥{STR_VAR_1}");
static const u8 sText_Money_BarSmall[]         = _("¥{STR_VAR_1}");
static const u8 sText_Money_BarSmall2[]         = _("¥{CLEAR 1}{STR_VAR_1}");
static const u8 sText_NotEnoughMoney[]         = _("Not Enough ¥");
static const u8 sText_WarpConfirm[]         = _("Do you want to go to ");
static const u8 sText_QuestionMark[]         = _("?");
static const u8* sText_Return = COMPOUND_STRING("Return");
static const u8 sText_MoneySign[]         = _("¥");
static const u8 sText_TaxiLockedStateHeader[]         = _("You cannot take the taxi here yet.");
static const u8 sText_TaxiBlankStateHeader[]         = _("Select a taxi destination.");
static const u8 sText_TaxiHasLocationStateHeader[]         = _("Take taxi to {STR_VAR_1}?");
static const u8 sText_FlyLockedStateHeader[]         = _("You cannot Fly here yet.");
static const u8 sText_FlyBlankStateHeader[]         = _("Select a destination to Fly to.");
static const u8 sText_FlyHasLocationStateHeader[]         = _("Fly to {STR_VAR_1}?");

static void PrintHeaderTitleToWindow()
{
    // Clear Windows
    FillWindowPixelBuffer(WINDOW_HEADER_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WINDOW_FOOTER_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch (sCurrentMapMode)
    {
        case MAP_MODE_DEFAULT:
            {
                if(CheckIfHoverLocationIsMapSecNone())
                {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, COMPOUND_STRING("Select an Arriba destination."));
                }
                else if(CheckIfHoverLocationUnlocked())
                {
                    ConvertIntToDecimalStringN(gStringVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_RIGHT_ALIGN, CountDigits(MAX_MONEY));
                    StringExpandPlaceholders(gStringVar4, sText_Money_Bar);
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, (20*8)+4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);

                    StringCopy(gStringVar1, gRegionMapEntries[sRegionMap->mapSecId].name);
                    StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Take Arriba to {STR_VAR_1}?"));
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);
                }
                else
            {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, COMPOUND_STRING("You cannot take Arriba here yet."));
                }
                break;
            }
        case MAP_MODE_TROLLEY:
            {
                if(CheckIfHoverLocationIsMapSecNone())
                {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, COMPOUND_STRING("Select an G.R.U.N.T. destination."));
                }
                else if(CheckIfHoverLocationUnlocked())
                {
                    ConvertIntToDecimalStringN(gStringVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_RIGHT_ALIGN,CountDigits(MAX_MONEY));
                    StringExpandPlaceholders(gStringVar4, sText_Money_Bar);
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, (20*8)+4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);

                    StringCopy(gStringVar1, gRegionMapEntries[sRegionMap->mapSecId].name);
                    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Take G.R.U.N.T. to {STR_VAR_1}?"));
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);
                }
                else
            {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, COMPOUND_STRING("You cannot take G.R.U.N.T. here yet."));
                }
                break;
            }
        case MAP_MODE_TAXI:
            {
                if(CheckIfHoverLocationIsMapSecNone())
                {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, sText_TaxiBlankStateHeader);
                }
                else if(CheckIfHoverLocationUnlocked())
                {
                    ConvertIntToDecimalStringN(gStringVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_RIGHT_ALIGN, CountDigits(MAX_MONEY));
                    StringExpandPlaceholders(gStringVar4, sText_Money_Bar);
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, (20*8)+4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);

                    StringCopy(gStringVar1, gRegionMapEntries[sRegionMap->mapSecId].name);
                    StringExpandPlaceholders(gStringVar4, sText_TaxiHasLocationStateHeader);
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);
                }
                else
            {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, sText_TaxiLockedStateHeader);
                }
                break;
            }
        case MAP_MODE_FLY:
            {
                if(CheckIfHoverLocationIsMapSecNone())
                {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, sText_FlyBlankStateHeader);
                }
                else if(CheckIfHoverLocationUnlocked())
                {
                    StringCopy(gStringVar1, gRegionMapEntries[sRegionMap->mapSecId].name);
                    StringExpandPlaceholders(gStringVar4, sText_FlyHasLocationStateHeader);
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);
                }
                else
            {
                    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, sText_FlyLockedStateHeader);
                }
                break;
            }
    }

    // Footer Printing
    PrintMapFooter(FALSE);

    // Load Windows
    PutWindowTilemap(WINDOW_HEADER_TEXT);
    CopyWindowToVram(WINDOW_HEADER_TEXT, 3);
    PutWindowTilemap(WINDOW_FOOTER_TEXT);
    CopyWindowToVram(WINDOW_FOOTER_TEXT, 3);
    return;
}

static void PrintMapFooter(bool32 confirmMode)
{
    u32 fontId = FONT_MAP_HELP_BAR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    StringCopy(gStringVar3,GetHelpBarText(confirmMode));
    AddTextPrinterParameterized4(WINDOW_FOOTER_TEXT, fontId, 4, 1, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_MAP_WHITE], TEXT_SKIP_DRAW, gStringVar3);
}

static const u8 *GetHelpBarText(bool32 confirmMode)
{
    bool32 l2State = GetMenuL2State();
    bool32 defaultMapMode = (sCurrentMapMode == MAP_MODE_DEFAULT);

    if (confirmMode)
        return sText_HelpBar_NotL2NotDefault;

    if (!l2State && defaultMapMode)
        return sText_HelpBar_NotL2IsDefault;
    else if (!l2State && !defaultMapMode)
        return sText_HelpBar_NotL2NotDefault;
    else if (l2State && !defaultMapMode)
        return sText_HelpBar_IsL2NotDefault;
    else
        return sText_HelpBar_IsL2IsDefault;
}


static void PrintHeaderWarpConfirmToWindow(void)
{
    // Clear Windows
    FillWindowPixelBuffer(WINDOW_HEADER_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WINDOW_FOOTER_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Header Printing
    ConvertIntToDecimalStringN(gStringVar1, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_RIGHT_ALIGN,CountDigits(MAX_MONEY));
    StringExpandPlaceholders(gStringVar4, sText_Money_BarSmall);
    StringCopy(gStringVar1, sText_WarpConfirm);

    if(!GetMenuL2State())
        StringAppend(gStringVar1, gRegionMapEntries[sRegionMap->mapSecId].name);
    else
        StringAppend(gStringVar1, GetCurrentL2Name());


    StringAppend(gStringVar1, sText_QuestionMark);

    if (sCurrentMapMode == MAP_MODE_FLY)
        return;

    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar1);
    AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, (24*8)+3, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar4);

    // Footer Printing
    PrintMapFooter(TRUE);

    // Load Windows
    PutWindowTilemap(WINDOW_HEADER_TEXT);
    CopyWindowToVram(WINDOW_HEADER_TEXT, 3);
    PutWindowTilemap(WINDOW_FOOTER_TEXT);
    CopyWindowToVram(WINDOW_FOOTER_TEXT, 3);
}

static const u8 sText_CanRideTheTrolley[]          = _("Take trolley to {STR_VAR_1}?");
static const u8 sText_CantRideTrolleyYet[]         = _("You cannot take the trolley here yet.");
static void PrintTrolleyHeaderToWindow()
{
    GetSFMapName(gStringVar1, SFTrolleyStops[sRegionMap->currentTrolley].trolleyMapSec, 0);
    StringExpandPlaceholders(gStringVar2, sText_CanRideTheTrolley);

    // Clear Windows
    FillWindowPixelBuffer(WINDOW_HEADER_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WINDOW_FOOTER_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Header Printing
    u16 hasVisited = GetMapsecTypeHasVisited(SFTrolleyStops[sRegionMap->currentTrolley].trolleyMapSec);
    if(hasVisited == LOCATION_VISITED)
        AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, gStringVar2);
    else
        AddTextPrinterParameterized4(WINDOW_HEADER_TEXT, 7, 4, 0, 0, 0, sMenuWindowFontColors[FONT_MAP_WHITE], 0xFF, sText_CantRideTrolleyYet);

    // Footer Printing
    PrintMapFooter(TRUE);

    // Load Windows
    PutWindowTilemap(WINDOW_HEADER_TEXT);
    CopyWindowToVram(WINDOW_HEADER_TEXT, 3);
    PutWindowTilemap(WINDOW_FOOTER_TEXT);
    CopyWindowToVram(WINDOW_FOOTER_TEXT, 3);
    return;
}



//
//  L2 Window Functions
//
enum MapSide {
    RIGHT,
    LEFT
};

static const u8 sText_POI_Text[]      = _("Points of Interest");

static void PrintL2WindowText(u8 windowId)
{
    const u8 colorText[3] = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_WHITE};
    const u8 colorText2[3] = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT};
    const u8 *str = NULL;

    u16 x = 0;
    u16 y = 2;

    if(windowId == WINDOW_L2_LEFT_SIDE_TEXT)
        x += 4;

    // Clear Windows
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Header Printing
    AddTextPrinterParameterized4(windowId, FONT_NARROW, x, y, 0, 0, colorText, 0xFF, sText_POI_Text);

    // POIs List (Just Temp Strings, Should Be Proper List Menu)

    u32 shownCount = 0;

    for (int i = sRegionMap->l2_scroll_amount; i < MAX_L2_COUNT; i++)
    {
        if (shownCount >= MAX_L2_SHOWN)
            continue;

        if ((L2_Info[sRegionMap->mapSecId][i].healLocation == 0) && (i < (MAX_L2_COUNT - 1)))
            continue;

        y += L2_Y_DIFFERENCE;

        if (i < (MAX_L2_COUNT - 1))
            str = L2_Info[sRegionMap->mapSecId][i].name;
        else
            str = sText_Return;

        AddTextPrinterParameterized4(windowId, FONT_NARROW, x, y, 1, 0, colorText2, 0xFF, str);
        shownCount++;
    }

    sRegionMap->l2_selectionPlusScroll = GetCurrentL2ListPosition();

    // Load Windows
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, 3);
}

static void ClearL2WindowText(void)
{
    FillWindowPixelBuffer(WINDOW_L2_RIGHT_SIDE_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(WINDOW_L2_RIGHT_SIDE_TEXT);
    CopyWindowToVram(WINDOW_L2_RIGHT_SIDE_TEXT, 3);

    FillWindowPixelBuffer(WINDOW_L2_LEFT_SIDE_TEXT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(WINDOW_L2_LEFT_SIDE_TEXT);
    CopyWindowToVram(WINDOW_L2_LEFT_SIDE_TEXT, 3);
}

static void ScrollL2Down(void)
{
    if (GetCurrentL2ListPosition() >= MAX_L2_COUNT - 1)
    {
        sRegionMap->l2_scroll_amount = 0;
        sRegionMap->l2_selection = 0;
    }
    else
    {
        sRegionMap->l2_scroll_amount += 1;
    }
}

static u8 CalculateL2CountForCurrentLocation(void)
{
    for (int i = 0; i < MAX_L2_COUNT; i++)
    {
        if (L2_Info[sRegionMap->mapSecId][i].healLocation == 0)
            return i + 1;
    }
    return MAX_L2_COUNT;
}

static bool8 IsCurrentIndexLastInL2List(u32 index)
{
    u32 count = CalculateL2CountForCurrentLocation() - 1;
    return (index == count);
}

static u32 GetCurrentL2ListPosition(void)
{
    return sRegionMap->l2_scroll_amount + sRegionMap->l2_selection;
}

static u8 CheckIfL2ExistsAtIndex(u8 index)
{
    if (IsCurrentIndexLastInL2List(index))
        return TRUE;

    return (L2_Info[sRegionMap->mapSecId][index].healLocation != 0);
}

static u16 GetCurrentL2HealLocation()
{
    u32 index = GetCurrentL2ListPosition();

    if (IsCurrentIndexLastInL2List(index))
        return HEAL_LOCATION_NONE;

    return L2_Info[sRegionMap->mapSecId][index].healLocation;
}

static const u8 *GetCurrentL2Name()
{
    return L2_Info[sRegionMap->mapSecId][GetCurrentL2ListPosition()].name;
}

static void HideL2WindowBg(void)
{
    HideBg(1);
    SetGpuReg(REG_OFFSET_BG1HOFS, L2_WINDOW_HIDDEN);
    ShowBg(1);
    HideL2Selector();
    sRegionMap->l2_scroll_amount = 0;
    sRegionMap->l2_selection = 0;
}

static void ShowL2WindowBG(void)
{
    HideBg(1);
    if((sRegionMap->cursorPosX * 8 + 4) < 120)
    {
        SetGpuReg(REG_OFFSET_BG1HOFS, L2_WINDOW_RIGHT_SIDE_SHOWING);
        PrintL2WindowText(WINDOW_L2_RIGHT_SIDE_TEXT);
        ShowL2Selector(RIGHT);
    }
    else
    {
        SetGpuReg(REG_OFFSET_BG1HOFS, L2_WINDOW_LEFT_SIDE_SHOWING);
        PrintL2WindowText(WINDOW_L2_LEFT_SIDE_TEXT);
        ShowL2Selector(LEFT);
    }
    ShowBg(1);
    PrintWarpPriceOnTooltip_AllFrames();
}

static void ReprintL2WindowText(void)
{
    sRegionMap->l2_selectionPlusScroll = GetCurrentL2ListPosition();
    if((sRegionMap->cursorPosX * 8 + 4) < 120)
    {
        PrintL2WindowText(WINDOW_L2_RIGHT_SIDE_TEXT);
    }
    else
    {
        PrintL2WindowText(WINDOW_L2_LEFT_SIDE_TEXT);
    }
}


//
//  L2 Selector Sprites
//



static void CreateL2SelectorSprites(void)
{
    u16 x, y;
    x = 160;
    y = 81;

    LoadSpriteSheet(&sSpriteSheet_L2Selector);
    LoadSpritePalette(&sSpritePal_L2Selector);

    if(sRegionMap->l2_selectorSpriteIds[0] == SPRITE_NONE)
        sRegionMap->l2_selectorSpriteIds[0] = CreateSpriteAtEnd(&sSpriteTemplate_L2SelectorMap, x, y, 0);

    gSprites[sRegionMap->l2_selectorSpriteIds[0]].invisible = TRUE;

    StartSpriteAnim(&gSprites[sRegionMap->l2_selectorSpriteIds[0]], 0);

    x += 64;

    if(sRegionMap->l2_selectorSpriteIds[1] == SPRITE_NONE)
        sRegionMap->l2_selectorSpriteIds[1] = CreateSpriteAtEnd(&sSpriteTemplate_L2SelectorMap, x, y, 0);

    gSprites[sRegionMap->l2_selectorSpriteIds[1]].invisible = TRUE;

    StartSpriteAnim(&gSprites[sRegionMap->l2_selectorSpriteIds[1]], 1);
    return;
}

static void DestroyL2CursorSprites(void)
{
    u8 i = 0;
    for(i = 0; i < 2; i++)
    {
        if(sRegionMap->l2_selectorSpriteIds[i] != SPRITE_NONE)
            DestroySprite(&gSprites[sRegionMap->l2_selectorSpriteIds[i]]);
        sRegionMap->l2_selectorSpriteIds[i] = SPRITE_NONE;
    }
}

static void ShowL2Selector(u8 side)
{
    u16 x, y;

    if(sRegionMap->l2_selectorSpriteIds[0] != SPRITE_NONE)
        gSprites[sRegionMap->l2_selectorSpriteIds[0]].invisible = FALSE;

    if(sRegionMap->l2_selectorSpriteIds[1] != SPRITE_NONE)
        gSprites[sRegionMap->l2_selectorSpriteIds[1]].invisible = FALSE;

    if (gSaveBlock3Ptr->waypoint.mapSecId == sRegionMap->mapSecId && gSaveBlock3Ptr->waypoint.currentState == WAYPOINT_L2)
    {
        CreateL2WaypointSprite();
    }

    if (side == RIGHT)
    {
        x = 160;
        y = L2_SELECTOR_Y_START_POS;

        gSprites[sRegionMap->l2_selectorSpriteIds[0]].x = x;
        gSprites[sRegionMap->l2_selectorSpriteIds[0]].y = y;

        sRegionMap->l2_arrowsTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_DOWN, x + 36, L2_SELECTOR_Y_START_POS - 32, L2_SELECTOR_Y_START_POS + (L2_Y_DIFFERENCE * MAX_L2_SHOWN + 1), CalculateL2CountForCurrentLocation() - 1, 0x30, 0x30, &(sRegionMap->l2_selectionPlusScroll));

        x += 64;

        gSprites[sRegionMap->l2_selectorSpriteIds[1]].x = x;
        gSprites[sRegionMap->l2_selectorSpriteIds[1]].y = y;

        StartSpriteAnim(&gSprites[sRegionMap->l2_selectorSpriteIds[0]], 0);
        StartSpriteAnim(&gSprites[sRegionMap->l2_selectorSpriteIds[1]], 1);

        gSprites[sRegionMap->l2_selectorSpriteIds[1]].hFlip = FALSE;
    }
    else
    {
        x = 16;
        y = L2_SELECTOR_Y_START_POS;

        gSprites[sRegionMap->l2_selectorSpriteIds[0]].x = x;
        gSprites[sRegionMap->l2_selectorSpriteIds[0]].y = y;

        sRegionMap->l2_arrowsTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_DOWN, x + 28, L2_SELECTOR_Y_START_POS - 32, L2_SELECTOR_Y_START_POS + (L2_Y_DIFFERENCE * MAX_L2_SHOWN + 1), CalculateL2CountForCurrentLocation() - 1, 0x30, 0x30, &(sRegionMap->l2_selectionPlusScroll));
        x += 64;

        gSprites[sRegionMap->l2_selectorSpriteIds[1]].x = x;
        gSprites[sRegionMap->l2_selectorSpriteIds[1]].y = y;

        StartSpriteAnim(&gSprites[sRegionMap->l2_selectorSpriteIds[0]], 1);
        StartSpriteAnim(&gSprites[sRegionMap->l2_selectorSpriteIds[1]], 0);

        gSprites[sRegionMap->l2_selectorSpriteIds[1]].hFlip = TRUE;
    }

}

static void HideL2Selector(void)
{
    if(sRegionMap->l2_selectorSpriteIds[0] != SPRITE_NONE)
        gSprites[sRegionMap->l2_selectorSpriteIds[0]].invisible = TRUE;

    if(sRegionMap->l2_selectorSpriteIds[1] != SPRITE_NONE)
        gSprites[sRegionMap->l2_selectorSpriteIds[1]].invisible = TRUE;

    DestroyJustL2WaypointSprite();
    RemoveScrollIndicatorArrowPair(sRegionMap->l2_arrowsTaskId);
}

static void SpriteCB_HandleL2Selector(struct Sprite *sprite)
{
    sprite->y = L2_SELECTOR_Y_START_POS + (L2_Y_DIFFERENCE * sRegionMap->l2_selection);
}

static u8 ProcessRegionMapInput_L2_State(void) // In L2 State Just Pass Along A/B/Start button presses to Main
{
    u8 input;

    input = MAP_INPUT_NONE;
    if (JOY_NEW(START_BUTTON))
    {
        input = MAP_INPUT_START_BUTTON;
        return input;
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        input = MAP_INPUT_SELECT_BUTTON;
        return input;
    }

    if(JOY_NEW(A_BUTTON))
    {
        u32 index = GetCurrentL2ListPosition();
        return (IsCurrentIndexLastInL2List(index)) ? MAP_INPUT_START_BUTTON : MAP_INPUT_A_BUTTON;
    }

    if (JOY_NEW(B_BUTTON))
    {
        input = MAP_INPUT_START_BUTTON;
        return input;
    }

    if (JOY_NEW(DPAD_UP))
    {
        if (sRegionMap->l2_selection == 0)
        {
            if (sRegionMap->l2_scroll_amount > 0)
            {
                sRegionMap->l2_scroll_amount -= 1;
            }
            else
            {
                if (CalculateL2CountForCurrentLocation() > MAX_L2_SHOWN)
                {
                    sRegionMap->l2_scroll_amount = CalculateL2CountForCurrentLocation() - MAX_L2_SHOWN;
                    sRegionMap->l2_selection = MAX_L2_SHOWN - 1;
                }
                else
                {
                    sRegionMap->l2_scroll_amount = 0;
                    sRegionMap->l2_selection = CalculateL2CountForCurrentLocation() - 1;
                }
            }
        }
        else
        {
            sRegionMap->l2_selection -= 1;
        }
        PrintWarpPriceOnTooltip_AllFrames();
        ReprintL2WindowText();
        return input;
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        if(!CheckIfL2ExistsAtIndex(GetCurrentL2ListPosition() + 1))
        {
            sRegionMap->l2_scroll_amount = 0;
            sRegionMap->l2_selection = 0;
        }
        else if (sRegionMap->l2_selection == MAX_L2_SHOWN - 1)
        {
            ScrollL2Down();
        }
        else
        {
            sRegionMap->l2_selection += 1;
        }

        PrintWarpPriceOnTooltip_AllFrames();
        ReprintL2WindowText();
        return input;
    }

    return input;
}


//
//  Tooltip Text Printing on Sprite Functions
//
static u8 *AddTextPrinterAndCreateWindowOnTooltip(const u8 *str, u32 x, u32 y, u32 bgColor, u32 *windowId)
{
    u16 winId;
    u8 color[3];
    struct WindowTemplate winTemplate = sTooltipWindowTemplate;

    winId = AddWindow(&winTemplate);
    FillWindowPixelBuffer(winId, PIXEL_FILL(bgColor));

    color[0] = bgColor;
    color[1] = 1;
    color[2] = 5;

    AddTextPrinterParameterized4(winId, FONT_SMALL_NARROW, x, y, 0, 0, color, TEXT_SKIP_DRAW, str);

    *windowId = winId;
    return (u8 *)(GetWindowAttribute(winId, WINDOW_TILE_DATA));
}

static void WarpPriceTextIntoTooltipObject(void *dest, u8 *windowTileData, u32 windowWidth)
{
    CpuCopy32(windowTileData + 256, dest, windowWidth * TILE_SIZE_4BPP);
}

static void PrintWarpPriceOnTooltip(u32 bgColor, u32 startTile) // 0xbc0 for one part of the tooltip
{
    u8 *windowTileData;
    u32 windowId;

    void *objVram = (void *)(OBJ_VRAM0);
    u32 price = GetWarpPriceAtMapSecByMapType(sRegionMap->mapSecId);
    ConvertIntToDecimalStringN(gStringVar1, price, STR_CONV_MODE_LEFT_ALIGN, CountDigits(price));
    StringExpandPlaceholders(gStringVar4, sText_Money_BarSmall2);

    windowTileData = AddTextPrinterAndCreateWindowOnTooltip(gStringVar4, 2, 5, bgColor, &windowId);
    WarpPriceTextIntoTooltipObject(objVram + startTile, windowTileData, 4);
    RemoveWindow(windowId);
}

static u16 fareTable[MAP_MODE_COUNT][FARE_TYPE_COUNT] =
{
    [MAP_MODE_ARRIBA] = {FARE_BASE_ARRIBA, FARE_DISTANCE_ARRIBA},
    [MAP_MODE_TAXI] = {FARE_BASE_TAXI, FARE_DISTANCE_TAXI},
    [MAP_MODE_TROLLEY] = {FARE_BASE_TROLLEY, FARE_DISTANCE_TROLLEY},
    [MAP_MODE_FLY] = {FARE_BASE_FLY, FARE_DISTANCE_FLY},
};

static u32 CalculateDistance(u32 nextLocation)
{
    const struct RegionMapLocation *curr = &gRegionMapEntries[gMapHeader.regionMapSectionId];
    const struct RegionMapLocation *next = &gRegionMapEntries[nextLocation];

    s32 dx = curr->x - next->x;
    s32 dy = curr->y - next->y;
    return (Sqrt(((dx * dx) + (dy * dy))));
}

u32 GetWarpPriceAtMapSecByMapType(u16 mapSecId)
{
    u32 distance = CalculateDistance(mapSecId);
    enum MapModes type = sCurrentMapMode;
    u32 index = GetCurrentL2ListPosition();

    if (!distance)
    {
        if (!GetMenuL2State())
            return 0;

        if (!index)
            return 0;

        if (IsCurrentIndexLastInL2List(index))
            return 0;
    }

    u32 fare = (fareTable[type][FARE_BASE] + (distance * (fareTable[type][FARE_DISTANCE])));

    if (type != MAP_MODE_ARRIBA)
        return fare;

    bool32 hasArribaDiscount = (VarGet(VAR_ANBEH_BEND_STATE) >= DEFEATED_CHARLOTTE_LOMBARD);
    bool32 hasPlayerJoined = HasPlayerJoinedTheTide();

    if (hasPlayerJoined || !hasArribaDiscount)
        return fare;

    return (fare * FARE_DISCOUNT_ARRIBA_NUMERATOR / FARE_DISCOUNT_ARRIBA_DENOMINATOR);
}

//
//  Main Control Flow For UI - Input Handling Tasks and Related Functions
//
static void Task_MapSystem_TrolleyMode_Warp(u8 taskId)
{
    switch(sRegionMap->warpCounter)
    {
        case 0:
            SetWarpDestinationToHealLocation(sMapHealLocations[sRegionMap->mapSecId]);
            sRegionMap->warpCounter = 1;
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            break;
        case 1:
            if (!gPaletteFade.active)
            {
                IncrementGameStat(GAME_STAT_TROLLEY_RIDES);
                MapSystem_FreeResources();
                ReturnToFieldFromRegionMapWarpSelect();
                sRegionMap->warpCounter = 2;
            }
            break;
    }
}

static void Task_MapSystem_TrolleyMode_Main(u8 taskId)
{
    if(JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        u16 hasVisited = GetMapsecTypeHasVisited(SFTrolleyStops[sRegionMap->currentTrolley].trolleyMapSec);
        if(hasVisited != LOCATION_VISITED)
            return;

        sRegionMap->warpCounter = 0;
        sRegionMap->mapSecId = SFTrolleyStops[sRegionMap->currentTrolley].trolleyMapSec;
        RemoveMoney(&gSaveBlock1Ptr->money, GetWarpPriceAtMapSecByMapType(sRegionMap->mapSecId));
        gTasks[taskId].func = Task_MapSystem_TrolleyMode_Warp;

        return;
    }
    if(JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MapSystemTurnOff;
        return;
    }
    if(JOY_NEW(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        u16 nextTrolley = SFTrolleyStops[sRegionMap->currentTrolley].nextTrolleyOptions.moveUpStop;
        sRegionMap->cursorPosX = SFTrolleyStops[nextTrolley].trolleyCursorX;
        sRegionMap->cursorPosY = SFTrolleyStops[nextTrolley].trolleyCursorY;
        sRegionMap->currentTrolley = nextTrolley;
        PrintTrolleyHeaderToWindow();
    }
    if(JOY_NEW(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        u16 nextTrolley = SFTrolleyStops[sRegionMap->currentTrolley].nextTrolleyOptions.moveDownStop;
        sRegionMap->cursorPosX = SFTrolleyStops[nextTrolley].trolleyCursorX;
        sRegionMap->cursorPosY = SFTrolleyStops[nextTrolley].trolleyCursorY;
        sRegionMap->currentTrolley = nextTrolley;
        PrintTrolleyHeaderToWindow();
    }
    if(JOY_NEW(DPAD_LEFT))
    {
        PlaySE(SE_SELECT);
        u16 nextTrolley = SFTrolleyStops[sRegionMap->currentTrolley].nextTrolleyOptions.moveLeftStop;
        sRegionMap->cursorPosX = SFTrolleyStops[nextTrolley].trolleyCursorX;
        sRegionMap->cursorPosY = SFTrolleyStops[nextTrolley].trolleyCursorY;
        sRegionMap->currentTrolley = nextTrolley;
        PrintTrolleyHeaderToWindow();
    }
    if(JOY_NEW(DPAD_RIGHT))
    {
        PlaySE(SE_SELECT);
        u16 nextTrolley = SFTrolleyStops[sRegionMap->currentTrolley].nextTrolleyOptions.moveRightStop;
        sRegionMap->cursorPosX = SFTrolleyStops[nextTrolley].trolleyCursorX;
        sRegionMap->cursorPosY = SFTrolleyStops[nextTrolley].trolleyCursorY;
        sRegionMap->currentTrolley = nextTrolley;
        PrintTrolleyHeaderToWindow();
    }
}


static void Task_MapSystem_DefaultMode_Main(u8 taskId)
{
    switch (sRegionMap->inputCallback()) // Modified From Vanilla's Setup the Main Task swaps out input callbacks and runs them instead of doing stuff itself,
    {                                     // Then it does stuff based on the output of those input functions. The system exists to deny input when the cursor is moving
        case MAP_INPUT_NONE:
        case MAP_INPUT_MOVE_START:
        case MAP_INPUT_MOVE_CONT:
            break;
        case MAP_INPUT_MOVE_END:    // After Cursor finished moving update everything related to moving the cursor
            UpdateRegionMapCursor();
            PrintHeaderTitleToWindow();
            break;
        case MAP_INPUT_START_BUTTON: // If Start Button Check to Enter / Exit L2 State
            if ((!GetMenuL2State()) && CheckIfHoverLocationUnlocked() && CheckIfHoverLocationHasL2())
            {
                ShowL2WindowBG();
                sRegionMap->inputCallback = ProcessRegionMapInput_L2_State;
                sRegionMap->inL2State = TRUE;
            }
            else if(GetMenuL2State())
            {
                ClearL2WindowText();
                HideL2WindowBg();
                sRegionMap->inputCallback = ProcessRegionMapInput_Full;
                sRegionMap->inL2State = FALSE;
            }
            PrintWarpPriceOnTooltip_AllFrames();
            PrintHeaderTitleToWindow();
            break;
        case MAP_INPUT_A_BUTTON: // Try to Warp if the A Input is Passed Along
            sRegionMap->inputCallback = HandleAttemptWarpInput;
            break;
        case MAP_INPUT_B_BUTTON: // Turn off if B is Pressed
            PlaySE(SE_SELECT);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_MapSystemTurnOff;
            break;
        case MAP_INPUT_SELECT_BUTTON:
            HandleAttemptToPlaceWaypoint();
            break;
    }
}

// Begin Processing Input Tasks
static u8 ProcessRegionMapInput_Full(void) // Handles starting a movement for the map cursor or passing along an A/B/START button press
{
    u8 input;

    input = MAP_INPUT_NONE;
    sRegionMap->cursorDeltaX = 0;
    sRegionMap->cursorDeltaY = 0;

    if (JOY_HELD(DPAD_UP) && sRegionMap->cursorPosY > MAPCURSOR_Y_MIN)
    {
        sRegionMap->cursorDeltaY = -1;
        input = MAP_INPUT_MOVE_START;
    }
    else if (JOY_HELD(DPAD_DOWN) && sRegionMap->cursorPosY < MAPCURSOR_Y_MAX)
    {
        sRegionMap->cursorDeltaY = +1;
        input = MAP_INPUT_MOVE_START;
    }
    else if (JOY_HELD(DPAD_LEFT) && sRegionMap->cursorPosX > MAPCURSOR_X_MIN)
    {
        sRegionMap->cursorDeltaX = -1;
        input = MAP_INPUT_MOVE_START;
    }
    else if (JOY_HELD(DPAD_RIGHT) && sRegionMap->cursorPosX < MAPCURSOR_X_MAX)
    {
        sRegionMap->cursorDeltaX = +1;
        input = MAP_INPUT_MOVE_START;
    }

    if (input == MAP_INPUT_MOVE_START)
    {
        sRegionMap->cursorMovementFrameCounter = 4;
        sRegionMap->inputCallback = MoveRegionMapCursor_Full;
        return input;
    }

    switch (sCurrentMapMode)
    {
        case MAP_MODE_DEFAULT:
            if (JOY_NEW(START_BUTTON))
            {
                input = MAP_INPUT_START_BUTTON;
                return input;
            }
            if(JOY_NEW(SELECT_BUTTON))
            {
                input = MAP_INPUT_SELECT_BUTTON;
                return input;
            }
            break;
    }

    if (JOY_NEW(A_BUTTON))
    {
        input = MAP_INPUT_A_BUTTON;
        return input;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        input = MAP_INPUT_B_BUTTON;
        return input;
    }

    return input;
}

static u8 MoveRegionMapCursor_Full(void) // When a cursor movement is began this takes over input handling and ignores all input until its done
{                                           //  where it resets the data for the location under the cursor
    u16 mapSecId;

    if (sRegionMap->cursorMovementFrameCounter != 0)
        return MAP_INPUT_MOVE_CONT;

    if (sRegionMap->cursorDeltaX > 0)
    {
        sRegionMap->cursorPosX++;
    }
    if (sRegionMap->cursorDeltaX < 0)
    {
        sRegionMap->cursorPosX--;
    }
    if (sRegionMap->cursorDeltaY > 0)
    {
        sRegionMap->cursorPosY++;
    }
    if (sRegionMap->cursorDeltaY < 0)
    {
        sRegionMap->cursorPosY--;
    }

    mapSecId = GetMapSecIdAt(sRegionMap->cursorPosX, sRegionMap->cursorPosY);
    sRegionMap->mapSecTypeHasVisited = GetMapsecTypeHasVisited(mapSecId);
    if (mapSecId != sRegionMap->mapSecId)
    {
        sRegionMap->mapSecId = mapSecId;
        GetSFMapName(sRegionMap->mapSecName, sRegionMap->mapSecId, MAP_NAME_LENGTH);
    }

    sRegionMap->inputCallback = ProcessRegionMapInput_Full;
    return MAP_INPUT_MOVE_END;
}


#define PASSES_QUEST_EXCEPTION (questException == NO_EXCEPTION)
#define QUEST_EXCEPTION_NO_PAY (questException == EXCEPTION_1)

// Handle Warp Started Input and Control Functions - These Don't Pass on Input to Main and Just Handle it Themselves
static u8 HandleAttemptWarpInput(void)
{
    u16 mapSecId;
    mapSecId = GetMapSecIdAt(sRegionMap->cursorPosX, sRegionMap->cursorPosY);
    sRegionMap->mapSecTypeHasVisited = GetMapsecTypeHasVisited(mapSecId);

    if(sRegionMap->mapSecTypeHasVisited == LOCATION_VISITED)
    {
        u32 warpPrice = GetWarpPriceAtMapSecByMapType(mapSecId);
        VarSet(VAR_0x8005, warpPrice);

        u32 questException = NO_EXCEPTION;
        switch(sCurrentMapMode)
        {
            case MAP_MODE_DEFAULT:
               questException = Quest_Persuasivepassenger_CheckQuestAndChooseDriver();
               break;
        }

        //DebugPrintf("Quest Exception: %d", questException);

        if ((warpPrice == 0) && PASSES_QUEST_EXCEPTION)
        {
            PlaySE(SE_SELECT);
            sRegionMap->warpCounter = 0;
            sRegionMap->inputCallback = HandleWarpConfirmInput;
        }
        else if ((warpPrice > GetMoney(&gSaveBlock1Ptr->money)) && (sCurrentMapMode == MAP_MODE_TAXI))
        {
            PlaySE(SE_SELECT);
            sRegionMap->warpCounter = 0;
            FlagClear(FLAG_TEMP_1);
            sRegionMap->inputCallback = HandleWarpTaxiCutscene;
        }
        else if((warpPrice > GetMoney(&gSaveBlock1Ptr->money)) && !QUEST_EXCEPTION_NO_PAY)
        {
            sRegionMap->inputCallback = HandleWarpFailedNoCash;
            sRegionMap->warpCounter = WARP_FAILED_PAUSE_START;
        }
        else
        {
            sRegionMap->warpCounter = 0;
            sRegionMap->inputCallback =  HandleWarpConfirmInput;
        }
    }
    else
    {
        if(GetMenuL2State())
            sRegionMap->inputCallback = ProcessRegionMapInput_L2_State;
        else
            sRegionMap->inputCallback = ProcessRegionMapInput_Full;
    }

    return MAP_INPUT_NONE;
}

static u8 HandleWarpConfirmInput(void)
{
    switch(sRegionMap->warpCounter)
    {
        case 0:
            PlaySE(SE_SELECT);
            PrintHeaderWarpConfirmToWindow();
            sRegionMap->warpCounter = 1;
            break;
        case 1: // Handle Input
            if (JOY_NEW(A_BUTTON))
            {
                u32 questException = NO_EXCEPTION;
                switch(sCurrentMapMode)
                {
                    case MAP_MODE_DEFAULT:
                        questException = Quest_Persuasivepassenger_CheckQuestAndChooseDriver();
                        break;
                }

                sRegionMap->warpCounter = 0;
                PlaySE(SE_SELECT);
                if (!QUEST_EXCEPTION_NO_PAY)
                    RemoveMoney(&gSaveBlock1Ptr->money, GetWarpPriceAtMapSecByMapType(sRegionMap->mapSecId));
                sRegionMap->inputCallback = HandleWarpCloseMenu;
            }
            if (JOY_NEW(B_BUTTON))
            {
                PlaySE(SE_SELECT);
                GetSFMapName(sRegionMap->mapSecName, sRegionMap->mapSecId, MAP_NAME_LENGTH);
                PrintHeaderTitleToWindow();
                if(GetMenuL2State())
                    sRegionMap->inputCallback = ProcessRegionMapInput_L2_State;
                else
                    sRegionMap->inputCallback = ProcessRegionMapInput_Full;
            }
            break;
    }
    return MAP_INPUT_NONE;
}

static u8 HandleWarpTaxiCutscene(void)
{
    switch(sRegionMap->warpCounter)
    {
        case 0:
            VarSet(VAR_TAXI_DESTINATION,sRegionMap->mapSecId);
            sRegionMap->warpCounter = 1;
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            break;
        case 1:
            if (!gPaletteFade.active)
            {
                MapSystem_FreeResources();
                ReturnToFieldFromRegionMapCheapTaxi();
                sRegionMap->warpCounter = 2;
            }
            break;
    }
    return MAP_INPUT_NONE;
}

void WarpTaxiAfterCutscene(void)
{
    u32 healLocation = VarGet(VAR_TAXI_DESTINATION);

    if (healLocation == HEAL_LOCATION_NONE)
        return;

    if (!FlagGet(FLAG_TEMP_1))
        return;

    SetWarpDestinationToHealLocation(sMapHealLocations[healLocation]);

    VarSet(VAR_TAXI_DESTINATION,HEAL_LOCATION_NONE);
    WarpIntoMap();
    SetMainCallback2(CB2_LoadMap);
}

void WarpUberAfterQuestException(void)
{
    SetWarpDestinationToHealLocation(VarGet(VAR_UBER_QUEST_EXCEPTION_DESTINATION)); // Saves Heal Location ID Directly
    WarpIntoMap();
    SetMainCallback2(CB2_LoadMap);
}

static u8 HandleWarpCloseMenu(void)
{
    switch(sRegionMap->warpCounter)
    {
        case 0:
            u8 healLocation = sMapHealLocations[sRegionMap->mapSecId];

            if(GetMenuL2State())
            {
                healLocation = GetCurrentL2HealLocation();
            }

            u32 questException = NO_EXCEPTION;
            switch(sCurrentMapMode)
            {
                case MAP_MODE_DEFAULT:
                    questException = Quest_Persuasivepassenger_CheckQuestAndChooseDriver();
                    break;
            }

            switch(questException)
            {
                case EXCEPTION_1:
                    SetWarpDestination(MAP_GROUP(MAP_ARRIBA_CAR_INTERIOR), MAP_NUM(MAP_ARRIBA_CAR_INTERIOR), WARP_ID_NONE, 20, 15);
                    VarSet(VAR_UBER_QUEST_EXCEPTION_DESTINATION, healLocation);
                    break;
                case EXCEPTION_2:
                    SetWarpDestination(MAP_GROUP(MAP_ARRIBA_CAR_INTERIOR), MAP_NUM(MAP_ARRIBA_CAR_INTERIOR), WARP_ID_NONE, 10, 3);
                    VarSet(VAR_UBER_QUEST_EXCEPTION_DESTINATION, healLocation);
                    break;
                case EXCEPTION_3:
                    SetWarpDestination(MAP_GROUP(MAP_ARRIBA_CAR_INTERIOR), MAP_NUM(MAP_ARRIBA_CAR_INTERIOR), WARP_ID_NONE, 1, 3);
                    VarSet(VAR_UBER_QUEST_EXCEPTION_DESTINATION, healLocation);
                    break;
                default:
                    SetWarpDestinationToHealLocation(healLocation);
                    break;
            }

            sRegionMap->warpCounter = 1;
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            break;
        case 1:
            if (!gPaletteFade.active)
            {
                MapSystem_FreeResources();
                ReturnToFieldFromRegionMapWarpSelect();
                sRegionMap->warpCounter = 2;
            }
            break;
    }
    return MAP_INPUT_NONE;
}

static void SwapFailedCursorGraphics()
{
    CpuCopy32(sRegionMapCursorTooltipError2Gfx, (void *)(OBJ_VRAM0) + (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP), 64 * 4 * TILE_SIZE_4BPP);
    //PrintWarpPriceOnTooltip_AllFrames(); Uncomment To Have Price Printed on Error Message
}

static void SwapBackCursorGraphics()
{
    switch (sCurrentMapMode)
    {
        case MAP_MODE_TROLLEY:
            CpuCopy32(sRegionMapCursorTooltipGfx, (void *)(OBJ_VRAM0) + (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP), 64 * 4 * TILE_SIZE_4BPP);
            break;
        case MAP_MODE_TAXI:
            CpuCopy32(sRegionMapCursorTooltipTaxiGfx, (void *)(OBJ_VRAM0) + (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP), 64 * 4 * TILE_SIZE_4BPP);
            break;
        case MAP_MODE_FLY:
            CpuCopy32(sRegionMapCursorTooltipFlyGfx, (void *)(OBJ_VRAM0) + (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP), 64 * 4 * TILE_SIZE_4BPP);
            break;
        default:
            CpuCopy32(sRegionMapCursorTooltipGfx, (void *)(OBJ_VRAM0) + (sRegionMap->cursorSpriteLOC->sheetTileStart * TILE_SIZE_4BPP), 64 * 4 * TILE_SIZE_4BPP);
            break;
    }

    PrintWarpPriceOnTooltip_AllFrames();
}


static u8 HandleWarpFailedNoCash(void)
{
    switch(sRegionMap->warpCounter)
    {
        case WARP_FAILED_PAUSE_START:
            PlaySE(SE_BOO);
            StringCopy(sRegionMap->mapSecName, sText_NotEnoughMoney);
            PrintHeaderTitleToWindow();
            SwapFailedCursorGraphics();
            sRegionMap->warpCounter--;
            break;
        case WARP_FAILED_PAUSE_END:
            SwapBackCursorGraphics();
            if(GetMenuL2State())
                sRegionMap->inputCallback = ProcessRegionMapInput_L2_State;
            else
                sRegionMap->inputCallback = ProcessRegionMapInput_Full;
            GetSFMapName(sRegionMap->mapSecName, sRegionMap->mapSecId, MAP_NAME_LENGTH);
            PrintHeaderTitleToWindow();
            return MAP_INPUT_NONE;
        default:
            sRegionMap->warpCounter--;
            break;
    }

    switch (sRegionMap->warpCounter % 8)
    {
        case 0:
            sRegionMap->cursorSpriteLOC->x += 2;
            break;
        case 7:
            sRegionMap->cursorSpriteLOC->x -= 2;
            break;
    }

    return MAP_INPUT_NONE;

}


//
//  Get MapSec Information Functions - Visited State, Name, L2 State
//
static u8 GetMapsecTypeHasVisited(u16 mapSecId) // Hardcoded Fly Flag locations
{
    if (mapSecId == MAPSEC_NONE || mapSecId == MAPSEC_COUNT)
        return MAPSECTYPE_NONE;

    return IsLocationVisited(mapSecId) ? MAPSECTYPE_CITY_CANFLY : MAPSECTYPE_CITY_CANTFLY;
}

static u8 CheckIfVisitedHoverLocation(void)
{
    return (GetMapsecTypeHasVisited(sRegionMap->mapSecId) == LOCATION_VISITED);
}

static u8 CheckIfHoverLocationUnlocked(void)
{
    if (sRegionMap->mapSecTypeHasVisited == LOCATION_NONE || sRegionMap->mapSecTypeHasVisited == LOCATION_NOT_VISITED)
        return FALSE;
    if(sRegionMap->activeCursorState == CURSOR_SMALL_CURSOR_STATE)
        return FALSE;

    return TRUE;
}

static u8 CheckIfHoverLocationHasL2(void)
{
    if (sRegionMap->mapSecId == MAPSEC_NONE)
        return FALSE;

    if (L2_Info[sRegionMap->mapSecId][0].healLocation == 0)
        return FALSE;

    return TRUE;
}

static u8 CheckIfHoverLocationIsMapSecNone(void)
{
    if(GetMapSecIdAt(sRegionMap->cursorPosX, sRegionMap->cursorPosY) == MAPSEC_NONE)
        return TRUE;
    return FALSE;
}

static u8 *GetSFMapName(u8 *dest, u16 regionMapId, u16 padLength)
{
    u8 *str;
    u16 i;

    if (regionMapId == MAPSEC_SECRET_BASE)
    {
        str = GetSecretBaseMapName(dest);
    }
    else if (regionMapId < MAPSEC_NONE)
    {
        str = StringCopy(dest, gRegionMapEntries[regionMapId].name);
    }
    else
    {
        if (padLength == 0)
        {
            padLength = 18;
        }
        return StringFill(dest, CHAR_SPACE, padLength);
    }
    if (padLength != 0)
    {
        for (i = str - dest; i < padLength; i++)
        {
            *str++ = CHAR_SPACE;
        }
        *str = EOS;
    }
    return str;
}


//
//  InitCurrentLocation - Determines Where the cursorPos for the Region Map Starts, Ripped From Vanilla
//
static void InitMapBasedOnPlayerLocation(void)
{
    const struct MapHeader *mapHeader;
    u16 mapWidth;
    u16 mapHeight;
    u16 x;
    u16 y;
    u16 dimensionScale;
    //u16 xOnMap;
    struct WarpData *warp;

    switch (GetMapTypeByGroupAndId(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum))
    {
    default:
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
    case MAP_TYPE_ROUTE:
    case MAP_TYPE_UNDERWATER:
    case MAP_TYPE_OCEAN_ROUTE:
        sRegionMap->mapSecId = gMapHeader.regionMapSectionId;
        sRegionMap->playerIsInCave = FALSE;
        mapWidth = gMapHeader.mapLayout->width;
        mapHeight = gMapHeader.mapLayout->height;
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y;
        if (sRegionMap->mapSecId == MAPSEC_UNDERWATER_SEAFLOOR_CAVERN || sRegionMap->mapSecId == MAPSEC_UNDERWATER_MARINE_CAVE)
            sRegionMap->playerIsInCave = TRUE;
        break;
    case MAP_TYPE_UNDERGROUND:
    case MAP_TYPE_UNKNOWN:
        if (gMapHeader.allowEscaping)
        {
            mapHeader = Overworld_GetMapHeaderByGroupAndId(gSaveBlock1Ptr->escapeWarp.mapGroup, gSaveBlock1Ptr->escapeWarp.mapNum);
            sRegionMap->mapSecId = mapHeader->regionMapSectionId;
            sRegionMap->playerIsInCave = TRUE;
            mapWidth = mapHeader->mapLayout->width;
            mapHeight = mapHeader->mapLayout->height;
            x = gSaveBlock1Ptr->escapeWarp.x;
            y = gSaveBlock1Ptr->escapeWarp.y;
        }
        else
        {
            sRegionMap->mapSecId = gMapHeader.regionMapSectionId;
            sRegionMap->playerIsInCave = TRUE;
            mapWidth = 1;
            mapHeight = 1;
            x = 1;
            y = 1;
        }
        break;
    case MAP_TYPE_SECRET_BASE:
        mapHeader = Overworld_GetMapHeaderByGroupAndId((u16)gSaveBlock1Ptr->dynamicWarp.mapGroup, (u16)gSaveBlock1Ptr->dynamicWarp.mapNum);
        sRegionMap->mapSecId = mapHeader->regionMapSectionId;
        sRegionMap->playerIsInCave = TRUE;
        mapWidth = mapHeader->mapLayout->width;
        mapHeight = mapHeader->mapLayout->height;
        x = gSaveBlock1Ptr->dynamicWarp.x;
        y = gSaveBlock1Ptr->dynamicWarp.y;
        break;
    case MAP_TYPE_INDOOR:
        sRegionMap->mapSecId = gMapHeader.regionMapSectionId;
        if (sRegionMap->mapSecId != MAPSEC_DYNAMIC)
        {
            warp = &gSaveBlock1Ptr->escapeWarp;
            mapHeader = Overworld_GetMapHeaderByGroupAndId(warp->mapGroup, warp->mapNum);
        }
        else
        {
            warp = &gSaveBlock1Ptr->dynamicWarp;
            mapHeader = Overworld_GetMapHeaderByGroupAndId(warp->mapGroup, warp->mapNum);
            sRegionMap->mapSecId = mapHeader->regionMapSectionId;
        }

        mapWidth = mapHeader->mapLayout->width;
        mapHeight = mapHeader->mapLayout->height;
        x = warp->x;
        y = warp->y;
        break;
    }

    //xOnMap = x;
    SFTrySetPlayerIconBlink();

    dimensionScale = mapWidth / gRegionMapEntries[sRegionMap->mapSecId].width;
    if (dimensionScale == 0)
    {
        dimensionScale = 1;
    }
    x /= dimensionScale;
    if (x >= gRegionMapEntries[sRegionMap->mapSecId].width)
    {
        x = gRegionMapEntries[sRegionMap->mapSecId].width - 1;
    }

    dimensionScale = mapHeight / gRegionMapEntries[sRegionMap->mapSecId].height;
    if (dimensionScale == 0)
    {
        dimensionScale = 1;
    }
    y /= dimensionScale;
    if (y >= gRegionMapEntries[sRegionMap->mapSecId].height)
    {
        y = gRegionMapEntries[sRegionMap->mapSecId].height - 1;
    }

    switch (sRegionMap->mapSecId)
    {
    default:
        break; // For Overrides Where the Position of the Player Should be offset to the normal location
    }
    sRegionMap->cursorPosX = gRegionMapEntries[sRegionMap->mapSecId].x + x + MAPCURSOR_X_MIN;
    sRegionMap->cursorPosY = gRegionMapEntries[sRegionMap->mapSecId].y + y + MAPCURSOR_Y_MIN;
}

void CalculatePlayerPositionInRegionMap(s16 *x_tile, s16 *y_tile, u16 *isIndoorOrCave) // copied from above, meant to determine player position for use in Waypoint Navigation
{
    const struct MapHeader *mapHeader;
    u16 mapWidth;
    u16 mapHeight;
    u16 x;
    u16 y;
    u16 dimensionScale;
    //u16 xOnMap;
    struct WarpData *warp;
    u16 mapSecId;

    switch (GetMapTypeByGroupAndId(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum))
    {
        default:
        case MAP_TYPE_TOWN:
        case MAP_TYPE_CITY:
        case MAP_TYPE_ROUTE:
        case MAP_TYPE_UNDERWATER:
        case MAP_TYPE_OCEAN_ROUTE:
            mapSecId = gMapHeader.regionMapSectionId;
            mapWidth = gMapHeader.mapLayout->width;
            mapHeight = gMapHeader.mapLayout->height;
            x = gSaveBlock1Ptr->pos.x;
            y = gSaveBlock1Ptr->pos.y;
            break;
        case MAP_TYPE_UNDERGROUND:
        case MAP_TYPE_UNKNOWN:
            *isIndoorOrCave = TRUE;
            if (gMapHeader.allowEscaping)
            {
                mapHeader = Overworld_GetMapHeaderByGroupAndId(gSaveBlock1Ptr->escapeWarp.mapGroup, gSaveBlock1Ptr->escapeWarp.mapNum);
                mapSecId = mapHeader->regionMapSectionId;
                mapWidth = mapHeader->mapLayout->width;
                mapHeight = mapHeader->mapLayout->height;
                x = gSaveBlock1Ptr->escapeWarp.x;
                y = gSaveBlock1Ptr->escapeWarp.y;
            }
            else
            {
                mapSecId = gMapHeader.regionMapSectionId;
                mapWidth = 1;
                mapHeight = 1;
                x = 1;
                y = 1;
            }
            break;
        case MAP_TYPE_SECRET_BASE:
            *isIndoorOrCave = TRUE;
            mapHeader = Overworld_GetMapHeaderByGroupAndId((u16)gSaveBlock1Ptr->dynamicWarp.mapGroup, (u16)gSaveBlock1Ptr->dynamicWarp.mapNum);
            mapSecId = mapHeader->regionMapSectionId;
            mapWidth = mapHeader->mapLayout->width;
            mapHeight = mapHeader->mapLayout->height;
            x = gSaveBlock1Ptr->dynamicWarp.x;
            y = gSaveBlock1Ptr->dynamicWarp.y;
            break;
        case MAP_TYPE_INDOOR:
            *isIndoorOrCave = TRUE;
            mapSecId = gMapHeader.regionMapSectionId;
            if (mapSecId != MAPSEC_DYNAMIC)
            {
                warp = &gSaveBlock1Ptr->escapeWarp;
                mapHeader = Overworld_GetMapHeaderByGroupAndId(warp->mapGroup, warp->mapNum);
            }
            else
            {
                warp = &gSaveBlock1Ptr->dynamicWarp;
                mapHeader = Overworld_GetMapHeaderByGroupAndId(warp->mapGroup, warp->mapNum);
                mapSecId = mapHeader->regionMapSectionId;
            }

            mapWidth = mapHeader->mapLayout->width;
            mapHeight = mapHeader->mapLayout->height;
            x = warp->x;
            y = warp->y;
            break;
    }

    dimensionScale = mapWidth / gRegionMapEntries[mapSecId].width;
    if (dimensionScale == 0)
    {
        dimensionScale = 1;
    }
    x /= dimensionScale;
    if (x >= gRegionMapEntries[mapSecId].width)
    {
        x = gRegionMapEntries[mapSecId].width - 1;
    }

    dimensionScale = mapHeight / gRegionMapEntries[mapSecId].height;
    if (dimensionScale == 0)
    {
        dimensionScale = 1;
    }
    y /= dimensionScale;
    if (y >= gRegionMapEntries[mapSecId].height)
    {
        y = gRegionMapEntries[mapSecId].height - 1;
    }

    switch (mapSecId)
    {
    default:
        break; // For Overrides Where the Position of the Player Should be offset to the normal location
    }
    *x_tile = (s16) (gRegionMapEntries[mapSecId].x + x + MAPCURSOR_X_MIN);
    *y_tile = (s16) (gRegionMapEntries[mapSecId].y + y + MAPCURSOR_Y_MIN);
}

void Taxi_BufferDestinationMapName(void)
{
    GetMapNameGeneric(gStringVar1, VarGet(VAR_TAXI_DESTINATION));
}

void BufferTaxiBaseFare(void)
{
    ConvertIntToDecimalStringN(gStringVar1,FARE_BASE_TAXI,STR_CONV_MODE_LEFT_ALIGN,CountDigits(FARE_BASE_TAXI));
}

void BufferTrolleyBaseFare(void)
{
    ConvertIntToDecimalStringN(gStringVar1,FARE_BASE_TROLLEY,STR_CONV_MODE_LEFT_ALIGN,CountDigits(FARE_BASE_TROLLEY));
}
    
