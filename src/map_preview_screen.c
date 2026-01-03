#include "global.h"
#include "string_util.h"
#include "malloc.h"
#include "gpu_regs.h"
#include "region_map.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "fldeff.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "script.h"
#include "overworld.h"
#include "event_data.h"
#include "map_preview_screen.h"
#include "constants/region_map_sections.h"
#include "constants/rgb.h"
#include "constants/map_preview_screen.h"

static EWRAM_DATA bool8 sAllocedBg0TilemapBuffer = FALSE;

static u8 GetMapPreviewScreenIdx(u8 mapsec);
static bool8 MapHasPreviewScreen(u8 mapsec, u8 type);
static bool32 MapHasPreviewScreen_HandleQLState2(u8 mapsec, u8 type);
static void MapPreview_InitBgs(void);
static void MapPreview_LoadGfx(u8 mapsec);
static void MapPreview_Unload(s32 windowIdA, s32 windowIdB);
static bool32 MapPreview_IsGfxLoadFinished(void);
static void MapPreview_StartForestTransition(u8 mapsec);
static u16 MapPreview_CreateMapNameWindow(u8 mapsec);
static u32 MapPreview_CreateHelpBar(void);
static void Task_RunMapPreviewScreenForest(u8 taskId);
static const struct MapPreviewScreen * GetDungeonMapPreviewScreenInfo(u8 mapsec);
static u16 MapPreview_GetDuration(u8 mapsec);
static void VblankCB_MapPreviewScript(void);
static void CB2_MapPreviewScript(void);
static void Task_RunMapPreview_Script(u8 taskId);
static void SetUnsetFlag(u32 flagId);
static void Task_MapPreviewScreen_0(u8 taskId);

static const u8 sViridianForestMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/viridian_forest/tiles.gbapal");
static const u8 sViridianForestMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/viridian_forest/tiles.4bpp.smol");
static const u8 sViridianForestMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/viridian_forest/tilemap.bin.smolTM");
static const u8 sRockTunnelMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tiles.gbapal");
static const u8 sRockTunnelMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tiles.4bpp.smol");
static const u8 sRockTunnelMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tilemap.bin.smolTM");
static const u8 sRocketHideoutMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tiles.gbapal");
static const u8 sRocketHideoutMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tiles.4bpp.smol");
static const u8 sRocketHideoutMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tilemap.bin.smolTM");
static const u8 sPowerPlantMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/power_plant/tiles.gbapal");
static const u8 sPowerPlantMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/power_plant/tiles.4bpp.smol");
static const u8 sPowerPlantMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/power_plant/tilemap.bin.smolTM");
static const u8 sPokemonMansionMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tiles.gbapal");
static const u8 sPokemonMansionMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tiles.4bpp.smol");
static const u8 sPokemonMansionMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tilemap.bin.smolTM");
static const u8 sPokemonTowerMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tiles.gbapal");
static const u8 sPokemonTowerMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tiles.4bpp.smol");
static const u8 sPokemonTowerMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tilemap.bin.smolTM");
static const u8 sSilphCoMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/silph_co/tiles.gbapal");
static const u8 sSilphCoMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/silph_co/tiles.4bpp.smol");
static const u8 sSilphCoMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/silph_co/tilemap.bin.smolTM");
static const u8 sMtMoonMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/mt_moon/tiles.gbapal");
static const u8 sMtMoonMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/mt_moon/tiles.4bpp.smol");
static const u8 sMtMoonMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/mt_moon/tilemap.bin.smolTM");
static const u8 sSeafoamIslandsMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tiles.gbapal");
static const u8 sSeafoamIslandsMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tiles.4bpp.smol");
static const u8 sSeafoamIslandsMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tilemap.bin.smolTM");
static const u8 sRocketWarehouseMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tiles.gbapal");
static const u8 sRocketWarehouseMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tiles.4bpp.smol");
static const u8 sRocketWarehouseMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tilemap.bin.smolTM");
static const u8 sVictoryRoadMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/victory_road/tiles.gbapal");
static const u8 sVictoryRoadMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/victory_road/tiles.4bpp.smol");
static const u8 sVictoryRoadMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/victory_road/tilemap.bin.smolTM");
static const u8 sMtEmberMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/mt_ember/tiles.gbapal");
static const u8 sMtEmberMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/mt_ember/tiles.4bpp.smol");
static const u8 sMtEmberMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/mt_ember/tilemap.bin.smolTM");
static const u8 sSafariZoneMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/safari_zone/tiles.gbapal");
static const u8 sSafariZoneMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/safari_zone/tiles.4bpp.smol");
static const u8 sSafariZoneMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/safari_zone/tilemap.bin.smolTM");
static const u8 sMoneanChamberMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/monean_chamber/tiles.gbapal");
static const u8 sMoneanChamberMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/monean_chamber/tiles.4bpp.smol");
static const u8 sMoneanChamberMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/monean_chamber/tilemap.bin.smolTM");
static const u8 sDottedHoleMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/dotted_hole/tiles.gbapal");
static const u8 sDottedHoleMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/dotted_hole/tiles.4bpp.smol");
static const u8 sDottedHoleMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/dotted_hole/tilemap.bin.smolTM");
static const u8 sCeruleanCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tiles.gbapal");
static const u8 sCeruleanCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tiles.4bpp.smol");
static const u8 sCeruleanCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tilemap.bin.smolTM");
static const u8 sDiglettsCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/digletts_cave/tiles.gbapal");
static const u8 sDiglettsCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/digletts_cave/tiles.4bpp.smol");
static const u8 sDiglettsCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/digletts_cave/tilemap.bin.smolTM");
static const u8 sLostCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/lost_cave/tiles.gbapal");
static const u8 sLostCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/lost_cave/tiles.4bpp.smol");
static const u8 sLostCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/lost_cave/tilemap.bin.smolTM");
static const u8 sBerryForestMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/berry_forest/tiles.gbapal");
static const u8 sBerryForestMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/berry_forest/tiles.4bpp.smol");
static const u8 sBerryForestMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/berry_forest/tilemap.bin.smolTM");
static const u8 sIcefallCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/icefall_cave/tiles.gbapal");
static const u8 sIcefallCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/icefall_cave/tiles.4bpp.smol");
static const u8 sIcefallCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/icefall_cave/tilemap.bin.smolTM");
static const u8 sAlteringCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/altering_cave/tiles.gbapal");
static const u8 sAlteringCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/altering_cave/tiles.4bpp.smol");
static const u8 sAlteringCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/altering_cave/tilemap.bin.smolTM");

// If you set flagId to MPS_FLAG_NULL, it will not set a flag when visiting the map for the first time
// and the duration will default to MPS_DURATION_NO_FLAG.
static const struct MapPreviewScreen sMapPreviewScreenData[MPS_COUNT] =
{
    [MPS_CUCONU_TOWN] =
    {
        .mapsec = MAPSEC_CUCONU_TOWN,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_CUCONU_TOWN,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE6] =
    {
        .mapsec = MAPSEC_ROUTE6,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE6,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_GLAVEZ_HILL] =
    {
        .mapsec = MAPSEC_GLAVEZ_HILL,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_GLAVEZ_HILL,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE8] =
    {
        .mapsec = MAPSEC_ROUTE8,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE8,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_MERMEREZA_CITY] =
    {
        .mapsec = MAPSEC_MERMEREZA_CITY,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_MERMEREZA_CITY,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE10] =
    {
        .mapsec = MAPSEC_ROUTE10,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE10,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_CAPHE_CITY] =
    {
        .mapsec = MAPSEC_CAPHE_CITY,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_CAPHE_CITY,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE9] =
    {
        .mapsec = MAPSEC_ROUTE9,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE9,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_TORA_TOWN] =
    {
        .mapsec = MAPSEC_TORA_TOWN,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_TORA_TOWN,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE12] =
    {
        .mapsec = MAPSEC_ROUTE12,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE12,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_ANBEH_BEND] =
    {
        .mapsec = MAPSEC_ANBEH_BEND,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ANBEH_BEND,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_POPIDORA_PIER] =
    {
        .mapsec = MAPSEC_POPIDORA_PIER,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_POPIDORA_PIER,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE4] =
    {
        .mapsec = MAPSEC_ROUTE4,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE4,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_HODOU_CITY] =
    {
        .mapsec = MAPSEC_HODOU_CITY,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_HODOU_CITY,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_FERRYBUILDING] =
    {
        .mapsec = MAPSEC_FERRYBUILDING,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_FERRYBUILDING,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_PERLACIA_CITY] =
    {
        .mapsec = MAPSEC_PERLACIA_CITY,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_PERLACIA_CITY,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_SHARPRISESPIRE] =
    {
        .mapsec = MAPSEC_SHARPRISESPIRE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_SHARPRISESPIRE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE2] =
    {
        .mapsec = MAPSEC_ROUTE2,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE2,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_CURENO_PORT] =
    {
        .mapsec = MAPSEC_CURENO_PORT,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_CURENO_PORT,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE1] =
    {
        .mapsec = MAPSEC_ROUTE1,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE1,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    /*
    [MPS_ROUTE_A] =
    {
        .mapsec = MAPSEC_ROUTE_A,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE_A,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_HALAI_ISLAND] =
    {
        .mapsec = MAPSEC_HALAI_ISLAND,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_HALAI_ISLAND,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_NAVAL_BASE] =
    {
        .mapsec = MAPSEC_NAVAL_BASE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_NAVAL_BASE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE_B] =
    {
        .mapsec = MAPSEC_ROUTE_B,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE_B,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_OROLAND] =
    {
        .mapsec = MAPSEC_OROLAND,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_OROLAND,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_OROLAND_COLISEUM] =
    {
        .mapsec = MAPSEC_OROLAND_COLISEUM,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_OROLAND_COLISEUM,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_ROUTE98] =
    {
        .mapsec = MAPSEC_ROUTE98,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE98,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_CHASILLA] =
    {
        .mapsec = MAPSEC_CHASILLA,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_CHASILLA,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE99] =
    {
        .mapsec = MAPSEC_ROUTE99,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE99,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_WISHAAST_LAKE] =
    {
        .mapsec = MAPSEC_WISHAAST_LAKE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_WISHAAST_LAKE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_ARANTRAZ] =
    {
        .mapsec = MAPSEC_ARANTRAZ,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ARANTRAZ,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE_D] =
    {
        .mapsec = MAPSEC_ROUTE_D,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE_D,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    /*
    [MPS_ROUTE11] =
    {
        .mapsec = MAPSEC_ROUTE11,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE11,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_FORT_YOBU] =
    {
        .mapsec = MAPSEC_FORT_YOBU,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_FORT_YOBU,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_PETAROSA_BOROUGH] =
    {
        .mapsec = MAPSEC_PETAROSA_BOROUGH,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_PETAROSA_BOROUGH,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE13] =
    {
        .mapsec = MAPSEC_ROUTE13,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE13,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_CRESALTA_VISTA] =
    {
        .mapsec = MAPSEC_CRESALTA_VISTA,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_CRESALTA_VISTA,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE22] =
    {
        .mapsec = MAPSEC_ROUTE22,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE22,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_HALERBA_CITY] =
    {
        .mapsec = MAPSEC_HALERBA_CITY,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_HALERBA_CITY,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_HALERBAWILDS] =
    {
        .mapsec = MAPSEC_HALERBAWILDS,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_HALERBAWILDS,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_TIRABUDIN_PLACE] =
    {
        .mapsec = MAPSEC_TIRABUDIN_PLACE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_TIRABUDIN_PLACE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE7] =
    {
        .mapsec = MAPSEC_ROUTE7,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE7,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_PINTILLONHOUSE] =
    {
        .mapsec = MAPSEC_PINTILLONHOUSE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_PINTILLONHOUSE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE16] =
    {
        .mapsec = MAPSEC_ROUTE16,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE16,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    /*
    [MPS_ROUTE14] =
    {
        .mapsec = MAPSEC_ROUTE14,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE14,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_IRISINA_TOWN] =
    {
        .mapsec = MAPSEC_IRISINA_TOWN,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_IRISINA_TOWN,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE5] =
    {
        .mapsec = MAPSEC_ROUTE5,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE5,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_PIOCA_BRIDGE] =
    {
        .mapsec = MAPSEC_PIOCA_BRIDGE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_PIOCA_BRIDGE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_ROBINWILLTUNNEL] =
    {
        .mapsec = MAPSEC_ROBINWILLTUNNEL,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROBINWILLTUNNEL,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_ESPULEE_OUTSKIRTS] =
    {
        .mapsec = MAPSEC_ESPULEE_OUTSKIRTS,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ESPULEE_OUTSKIRTS,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE100] =
    {
        .mapsec = MAPSEC_ROUTE100,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE100,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_LEAVERRA_FOREST] =
    {
        .mapsec = MAPSEC_LEAVERRA_FOREST,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_LEAVERRA_FOREST,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE_E] =
    {
        .mapsec = MAPSEC_ROUTE_E,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE_E,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    /*
    [MPS_ROUTE_C] =
    {
        .mapsec = MAPSEC_ROUTE_C,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE_C,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_SHARPRISESTADIUM] =
    {
        .mapsec = MAPSEC_SHARPRISESTADIUM,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_SHARPRISESTADIUM,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_NONGYU_BRIDGE] =
    {
        .mapsec = MAPSEC_NONGYU_BRIDGE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_NONGYU_BRIDGE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_ZENZU_ISLAND] =
    {
        .mapsec = MAPSEC_ZENZU_ISLAND,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ZENZU_ISLAND,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE3] =
    {
        .mapsec = MAPSEC_ROUTE3,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE3,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_TORGEOT_CLIMB] =
    {
        .mapsec = MAPSEC_TORGEOT_CLIMB,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_TORGEOT_CLIMB_BASE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_SECRET_PATH] =
    {
        .mapsec = MAPSEC_SECRET_PATH,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_SECRET_PATH,
        .image = IMG_VIRIDIAN_FOREST,
    },
    [MPS_PARC] =
    {
        .mapsec = MAPSEC_PARC,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_PARC,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE18] =
    {
        .mapsec = MAPSEC_ROUTE18,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE18,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_QIU_VILLAGE] =
    {
        .mapsec = MAPSEC_QIU_VILLAGE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_QIU_VILLAGE,
        .image = IMG_VIRIDIAN_FOREST,
    },
    /*
    [MPS_ROUTE20] =
    {
        .mapsec = MAPSEC_ROUTE20,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_ROUTE20,
        .image = IMG_VIRIDIAN_FOREST,
    },
    */
    [MPS_WAJABI_LAKE] =
    {
        .mapsec = MAPSEC_WAJABI_LAKE,
        .type = MPS_TYPE_FADE_IN,
        .flagId = FLAG_VISITED_WAJABI_LAKE,
        .image = IMG_VIRIDIAN_FOREST,
    },
};

static const struct ImageData sMapPreviewImageData[IMG_COUNT] = {
    [IMG_VIRIDIAN_FOREST] = {
        .tilesptr = sViridianForestMapPreviewTiles,
        .tilemapptr = sViridianForestMapPreviewTilemap,
        .palptr = sViridianForestMapPreviewPalette
    },
    [IMG_MT_MOON] = {
        .tilesptr = sMtMoonMapPreviewTiles,
        .tilemapptr = sMtMoonMapPreviewTilemap,
        .palptr = sMtMoonMapPreviewPalette
    },
    [IMG_DIGLETTS_CAVE] = {
        .tilesptr = sDiglettsCaveMapPreviewTiles,
        .tilemapptr = sDiglettsCaveMapPreviewTilemap,
        .palptr = sDiglettsCaveMapPreviewPalette
    },
    [IMG_ROCK_TUNNEL] = {
        .tilesptr = sRockTunnelMapPreviewTiles,
        .tilemapptr = sRockTunnelMapPreviewTilemap,
        .palptr = sRockTunnelMapPreviewPalette
    },
    [IMG_POKEMON_TOWER] = {
        .tilesptr = sPokemonTowerMapPreviewTiles,
        .tilemapptr = sPokemonTowerMapPreviewTilemap,
        .palptr = sPokemonTowerMapPreviewPalette
    },
    [IMG_SAFARI_ZONE] = {
        .tilesptr = sSafariZoneMapPreviewTiles,
        .tilemapptr = sSafariZoneMapPreviewTilemap,
        .palptr = sSafariZoneMapPreviewPalette
    },
    [IMG_SEAFOAM_ISLANDS] = {
        .tilesptr = sSeafoamIslandsMapPreviewTiles,
        .tilemapptr = sSeafoamIslandsMapPreviewTilemap,
        .palptr = sSeafoamIslandsMapPreviewPalette
    },
    [IMG_POKEMON_MANSION] = {
        .tilesptr = sPokemonMansionMapPreviewTiles,
        .tilemapptr = sPokemonMansionMapPreviewTilemap,
        .palptr = sPokemonMansionMapPreviewPalette
    },
    [IMG_ROCKET_HIDEOUT] = {
        .tilesptr = sRocketHideoutMapPreviewTiles,
        .tilemapptr = sRocketHideoutMapPreviewTilemap,
        .palptr = sRocketHideoutMapPreviewPalette
    },
    [IMG_SILPH_CO] = {
        .tilesptr = sSilphCoMapPreviewTiles,
        .tilemapptr = sSilphCoMapPreviewTilemap,
        .palptr = sSilphCoMapPreviewPalette
    },
    [IMG_VICTORY_ROAD] = {
        .tilesptr = sVictoryRoadMapPreviewTiles,
        .tilemapptr = sVictoryRoadMapPreviewTilemap,
        .palptr = sVictoryRoadMapPreviewPalette
    },
    [IMG_CERULEAN_CAVE] = {
        .tilesptr = sCeruleanCaveMapPreviewTiles,
        .tilemapptr = sCeruleanCaveMapPreviewTilemap,
        .palptr = sCeruleanCaveMapPreviewPalette
    },
    [IMG_POWER_PLANT] = {
        .tilesptr = sPowerPlantMapPreviewTiles,
        .tilemapptr = sPowerPlantMapPreviewTilemap,
        .palptr = sPowerPlantMapPreviewPalette
    },
    [IMG_MT_EMBER] = {
        .tilesptr = sMtEmberMapPreviewTiles,
        .tilemapptr = sMtEmberMapPreviewTilemap,
        .palptr = sMtEmberMapPreviewPalette
    },
    [IMG_ROCKET_WAREHOUSE] = {
        .tilesptr = sRocketWarehouseMapPreviewTiles,
        .tilemapptr = sRocketWarehouseMapPreviewTilemap,
        .palptr = sRocketWarehouseMapPreviewPalette
    },
    [IMG_MONEAN_CHAMBER] = {
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    },
    [IMG_DOTTED_HOLE] = {
        .tilesptr = sDottedHoleMapPreviewTiles,
        .tilemapptr = sDottedHoleMapPreviewTilemap,
        .palptr = sDottedHoleMapPreviewPalette
    },
    [IMG_BERRY_FOREST] = {
        .tilesptr = sBerryForestMapPreviewTiles,
        .tilemapptr = sBerryForestMapPreviewTilemap,
        .palptr = sBerryForestMapPreviewPalette
    },
    [IMG_ICEFALL_CAVE] = {
        .tilesptr = sIcefallCaveMapPreviewTiles,
        .tilemapptr = sIcefallCaveMapPreviewTilemap,
        .palptr = sIcefallCaveMapPreviewPalette
    },
    [IMG_LOST_CAVE] = {
        .tilesptr = sLostCaveMapPreviewTiles,
        .tilemapptr = sLostCaveMapPreviewTilemap,
        .palptr = sLostCaveMapPreviewPalette
    },
    [IMG_ALTERING_CAVE] = {
        .tilesptr = sAlteringCaveMapPreviewTiles,
        .tilemapptr = sAlteringCaveMapPreviewTilemap,
        .palptr = sAlteringCaveMapPreviewPalette
    }
};

static const struct WindowTemplate sMapNameWindow = {
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 13,
    .height = 2,
    .paletteNum = 14,
    .baseBlock = 0x1C2
};

static const struct WindowTemplate sMapNameWindowLarge = {
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 22,
    .height = 2,
    .paletteNum = 14,
    .baseBlock = 0x1C2
};

static const struct WindowTemplate sHelpBarWindow =
{
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 18,
    .width = 30,
    .height = 2,
    .paletteNum = 14,
    .baseBlock = 0x1C2 + (22 * 2),
};


static const struct BgTemplate sMapPreviewBgTemplate[1] = {
    {
        .mapBaseIndex = 31
    }
};

static u8 GetMapPreviewScreenIdx(u8 mapsec)
{
    s32 i;

    for (i = 0; i < MPS_COUNT; i++)
    {
        if (sMapPreviewScreenData[i].mapsec == mapsec)
        {
            return i;
        }
    }
    return MPS_COUNT;
}

static bool8 MapHasPreviewScreen(u8 mapsec, u8 type)
{
    u8 idx;

    idx = GetMapPreviewScreenIdx(mapsec);

    if (FlagGet(FLAG_HIDE_MAP_NAME_POPUP))
        return FALSE;

    if (idx != MPS_COUNT)
    {
        if (type == MPS_TYPE_ANY)
        {
            return TRUE;
        }
        else
        {
            return sMapPreviewScreenData[idx].type == type ? TRUE : FALSE;
        }
    }
    else
    {
        return FALSE;
    }
}

static bool32 MapHasPreviewScreen_HandleQLState2(u8 mapsec, u8 type)
{
    return MapHasPreviewScreen(mapsec, type);
}

static void MapPreview_InitBgs(void)
{
    InitBgsFromTemplates(0, sMapPreviewBgTemplate, NELEMS(sMapPreviewBgTemplate));
    ShowBg(0);
}

static void MapPreview_LoadGfx(u8 mapsec)
{
    u8 idx;

    idx = GetMapPreviewScreenIdx(mapsec);
    if (idx != MPS_COUNT)
    {
       ResetTempTileDataBuffers();
       if (MapHasPreviewScreen_HandleQLState2(gMapHeader.regionMapSectionId, MPS_TYPE_FADE_IN) == TRUE)
            LoadPalette(sMapPreviewImageData[sMapPreviewScreenData[idx].image].palptr, BG_PLTT_ID(13), 3 * PLTT_SIZE_4BPP);
        else
            LoadPalette(sMapPreviewImageData[sMapPreviewScreenData[idx].image].palptr, BG_PLTT_ID(0), 16 * PLTT_SIZE_4BPP);

       DecompressAndCopyTileDataToVram(0, sMapPreviewImageData[sMapPreviewScreenData[idx].image].tilesptr, 0, 0, 0);
       if (GetBgTilemapBuffer(0) == NULL)
       {
           SetBgTilemapBuffer(0, Alloc(BG_SCREEN_SIZE));
           sAllocedBg0TilemapBuffer = TRUE;
       }
       else
       {
           sAllocedBg0TilemapBuffer = FALSE;
       }
       CopyToBgTilemapBuffer(0, sMapPreviewImageData[sMapPreviewScreenData[idx].image].tilemapptr, 0, 0x000);
       CopyBgTilemapBufferToVram(0);
    }
}

static void MapPreview_Unload(s32 windowIdA, s32 windowIdB)
{
    RemoveWindow(windowIdA);
    RemoveWindow(windowIdB);
    if (sAllocedBg0TilemapBuffer)
    {
        Free(GetBgTilemapBuffer(0));
    }
}

static bool32 MapPreview_IsGfxLoadFinished(void)
{
    return FreeTempTileDataBuffersIfPossible();
}

static void MapPreview_StartForestTransition(u8 mapsec)
{
    u8 taskId;

    taskId = CreateTask(Task_RunMapPreviewScreenForest, 0);
    gTasks[taskId].data[2] = GetBgAttribute(0, BG_ATTR_PRIORITY);
    gTasks[taskId].data[4] = GetGpuReg(REG_OFFSET_BLDCNT);
    gTasks[taskId].data[5] = GetGpuReg(REG_OFFSET_BLDALPHA);
    gTasks[taskId].data[3] = GetGpuReg(REG_OFFSET_DISPCNT);
    gTasks[taskId].data[6] = GetGpuReg(REG_OFFSET_WININ);
    gTasks[taskId].data[7] = GetGpuReg(REG_OFFSET_WINOUT);
    gTasks[taskId].data[10] = MapPreview_GetDuration(mapsec);
    gTasks[taskId].data[8] = 16;
    gTasks[taskId].data[9] = 0;
    SetBgAttribute(0, BG_ATTR_PRIORITY, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(16, 0));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR | WININ_WIN1_CLR);
    SetGpuRegBits(REG_OFFSET_WINOUT, WINOUT_WIN01_CLR);
    gTasks[taskId].data[11] = MapPreview_CreateMapNameWindow(mapsec);
    gTasks[taskId].data[12] = MapPreview_CreateHelpBar();
    LockPlayerFieldControls();
}

static u16 MapPreview_CreateMapNameWindow(u8 mapsec)
{
    u16 windowId;
    u32 xctr;
    #ifdef BUGFIX
    // Fixes access violations indicated below.
    u8 color[3];
    #else
    u8 color[0];
    #endif

    GetMapName(gStringVar4, mapsec, 0);
    if (GetStringWidth(FONT_NORMAL, gStringVar4, 0) > 104)
    {
        windowId = AddWindow(&sMapNameWindowLarge);
        xctr = 177 - GetStringWidth(FONT_NORMAL, gStringVar4, 0);
    }
    else
    {
        xctr = 104 - GetStringWidth(FONT_NORMAL, gStringVar4, 0);
        windowId = AddWindow(&sMapNameWindow);
    }
    FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    PutWindowTilemap(windowId);
    color[0] = TEXT_COLOR_WHITE; // Access violation
    color[1] = TEXT_COLOR_RED; // Access violation
    color[2] = TEXT_COLOR_LIGHT_GRAY; // Access violation
    AddTextPrinterParameterized4(windowId, FONT_NORMAL, xctr / 2, 2, 0, 0, color/* Access violation */, -1, gStringVar4);
    return windowId;
}

static u32 MapPreview_CreateHelpBar(void)
{
    u8 color[3];
    u32 windowId = AddWindow(&sHelpBarWindow);
    u32 fontId = FONT_SMALL_NARROW;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 left = 4;
    u32 top = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(4));
    PutWindowTilemap(windowId);
    color[0] = TEXT_COLOR_TRANSPARENT;
    color[1] = TEXT_COLOR_WHITE;
    color[2] = TEXT_COLOR_TRANSPARENT;

    StringCopy(gStringVar4, COMPOUND_STRING("{START_BUTTON} Skip Map Preview"));
    AddTextPrinterParameterized4(windowId, fontId, left, top, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
    return windowId;
}

bool32 ForestMapPreviewScreenIsRunning(void)
{
    if (FuncIsActiveTask(Task_RunMapPreviewScreenForest) == TRUE)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static void Task_RunMapPreviewScreenForest(u8 taskId)
{
    s16 * data;

    data = gTasks[taskId].data;
    switch (data[0])
    {
    case 0:
        if (!MapPreview_IsGfxLoadFinished() && !IsDma3ManagerBusyWithBgCopy())
        {
            CopyWindowToVram(data[11], COPYWIN_FULL);
            CopyWindowToVram(data[12], COPYWIN_FULL);
            data[0]++;
        }
        break;
    case 1:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            FadeInFromBlack();
            data[0]++;
        }
        break;
    case 2:
        if (IsWeatherNotFadingIn())
        {
            Overworld_PlaySpecialMapMusic();
            data[0]++;
        }
        break;
    case 3:
        data[1]++;
        if (data[1] > data[10] || JOY_HELD(JOY_EXCL_DPAD))
        {
            data[1] = 0;
            data[0]++;
        }
        break;
    case 4:
        switch (data[1])
        {
        case 0:
            data[9]++;
            if (data[9] > 16)
            {
                data[9] = 16;
            }
            break;
        case 1:
            data[8]--;
            if (data[8] < 0)
            {
                data[8] = 0;
            }
            break;
        }
        data[1] = (data[1] + 1) % 3;
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(data[8], data[9]));
        if (data[8] == 0 && data[9] == 16)
        {
            FillBgTilemapBufferRect_Palette0(0, 0, 0, 0, 32, 32);
            CopyBgTilemapBufferToVram(0);
            data[0]++;
        }
        break;
    case 5:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            MapPreview_Unload(data[11], data[12]);
            SetBgAttribute(0, BG_ATTR_PRIORITY, data[2]);
            SetGpuReg(REG_OFFSET_DISPCNT, data[3]);
            SetGpuReg(REG_OFFSET_BLDCNT, data[4]);
            SetGpuReg(REG_OFFSET_BLDALPHA, data[5]);
            SetGpuReg(REG_OFFSET_WININ, data[6]);
            SetGpuReg(REG_OFFSET_WINOUT, data[7]);
            DestroyTask(taskId);
        }
        break;
    }
}

static const UNUSED struct MapPreviewScreen * GetDungeonMapPreviewScreenInfo(u8 mapsec)
{
    u8 idx;

    idx = GetMapPreviewScreenIdx(mapsec);
    if (idx == MPS_COUNT)
    {
        return NULL;
    }
    else
    {
        return &sMapPreviewScreenData[idx];
    }
}

static u16 MapPreview_GetDuration(u8 mapsec)
{
    u8 idx;
    u16 flagId;

    idx = GetMapPreviewScreenIdx(mapsec);

    if (idx == MPS_COUNT)
    {
        return 0;
    }

    flagId = sMapPreviewScreenData[idx].flagId;

    if (flagId == MPS_FLAG_NULL) {
        if (MPS_DURATION_ALWAYS != 0) {
            return MPS_DURATION_ALWAYS;
        }
        else
        {
            return MPS_DURATION_NO_FLAG;
        }
    }
    else if (MPS_DURATION_ALWAYS != 0) {
        SetUnsetFlag(flagId);
        return MPS_DURATION_ALWAYS;
    }
    else {
        if (!FlagGet(flagId))
        {
            FlagSet(flagId);
            return MPS_DURATION_LONG;
        }
        else
        {
            return MPS_DURATION_SHORT;
        }
    }
}

static void VblankCB_MapPreviewScript(void)
{
    TransferPlttBuffer();
}

#define taskStep        data[0]
#define frameCounter    data[1]
#define MPWindowId      data[2]
#define HWindowId       data[3]

void Script_MapPreview(void)
{
    SetVBlankCallback(NULL);
    gMain.savedCallback = CB2_ReturnToFieldContinueScript;
    MapPreview_LoadGfx(gMapHeader.regionMapSectionId);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
    SetVBlankCallback(VblankCB_MapPreviewScript);
    SetMainCallback2(CB2_MapPreviewScript);
    CreateTask(Task_RunMapPreview_Script, 0);
}

static void CB2_MapPreviewScript(void)
{
    RunTasks();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Task_RunMapPreview_Script(u8 taskId)
{
    s16 * data;
    u32 idx = GetMapPreviewScreenIdx(gMapHeader.regionMapSectionId);
    u32 flagId = sMapPreviewScreenData[idx].flagId;

    data = gTasks[taskId].data;
    switch (taskStep)
    {
    case 0:
        if (!MapPreview_IsGfxLoadFinished() && !IsDma3ManagerBusyWithBgCopy())
        {
            SetUnsetFlag(flagId);
            MPWindowId = MapPreview_CreateMapNameWindow(gMapHeader.regionMapSectionId);
            HWindowId = MapPreview_CreateHelpBar();
            CopyWindowToVram(MPWindowId, COPYWIN_FULL);
            CopyWindowToVram(HWindowId, COPYWIN_FULL);
            taskStep++;
        }
        break;
    case 1:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            FadeInFromBlack();
            taskStep++;
        }
        break;
    case 2:
        frameCounter++;
        if (frameCounter > MPS_DURATION_SCRIPT || JOY_HELD(JOY_EXCL_DPAD))
        {
            BeginNormalPaletteFade(PALETTES_ALL, MPS_BASIC_FADE_SPEED, 0, 16, RGB_BLACK);
            frameCounter = 0;
            taskStep++;
        }
        break;
    case 3:
        if (!UpdatePaletteFade())
        {
            MapPreview_Unload(MPWindowId, HWindowId);
            DestroyTask(taskId);
            SetMainCallback2(gMain.savedCallback);
        }
        break;
    }
}

static void SetUnsetFlag(u32 flagId)
{
    if (!FlagGet(flagId))
        FlagSet(flagId);
}

bool32 IsMapPreviewTypeCave(u32 mapSecId)
{
    return (MapHasPreviewScreen_HandleQLState2(mapSecId, MPS_TYPE_CAVE));
}

bool32 IsMapPreviewTypeBasic(u32 mapSecId)
{
    return (MapHasPreviewScreen_HandleQLState2(mapSecId, MPS_TYPE_CAVE));
}

bool32 IsMapPreviewTypeFadeIn(u8 mapsecId)
{
    return (MapHasPreviewScreen_HandleQLState2(mapsecId, MPS_TYPE_FADE_IN));
}

u32 GetFadeScreenModeFromMapPreviewType(void)
{
    if (IsMapPreviewTypeCave(GetDestinationWarpMapSectionId()))
        return FADE_TO_BLACK;
    else
        return FADE_TO_WHITE;
}

void RunMapPreviewScreen(u8 mapSecId)
{
    u8 taskId = CreateTask(Task_MapPreviewScreen_0, 0);
    gTasks[taskId].data[3] = mapSecId;
}

static void Task_MapPreviewScreen_0(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    switch (data[0])
    {
    case 0:
        SetWordTaskArg(taskId, 5, (uintptr_t)gMain.vblankCallback);
        SetVBlankCallback(NULL);
        MapPreview_InitBgs();
        MapPreview_LoadGfx(data[3]);
        BlendPalettes(PALETTES_ALL, 0x10, RGB_BLACK);
        data[0]++;
        break;
    case 1:
        if (!MapPreview_IsGfxLoadFinished())
        {
            data[4] = MapPreview_CreateMapNameWindow(data[3]);
            data[5] = MapPreview_CreateHelpBar();
            CopyWindowToVram(data[4], COPYWIN_FULL);
            data[0]++;
        }
        break;
    case 2:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            BeginNormalPaletteFade(PALETTES_ALL, -1, 16, 0, RGB_BLACK);
            SetVBlankCallback((IntrCallback)GetWordTaskArg(taskId, 5));
            data[0]++;
        }
        break;
    case 3:
        if (!UpdatePaletteFade())
        {
            data[2] = MapPreview_GetDuration(data[3]);
            data[0]++;
        }
        break;
    case 4:
        data[1]++;
        if (data[1] > data[2] || JOY_HELD(JOY_EXCL_DPAD))
        {
            if (MapHasPreviewScreen_HandleQLState2(gMapHeader.regionMapSectionId, MPS_TYPE_BASIC) == TRUE)
            {
                BeginNormalPaletteFade(PALETTES_ALL, MPS_BASIC_FADE_SPEED, 0, 16, RGB_BLACK);
            }
            else {
                BeginNormalPaletteFade(PALETTES_ALL, -2, 0, 16, RGB_WHITE);
            }
            data[0]++;
        }
        break;
    case 5:
        if (!UpdatePaletteFade())
        {
            int i;
            for (i = 0; i < 16; i++)
            {
                data[i] = 0;
            }
            MapPreview_Unload(data[4], data[5]);
            if (MapHasPreviewScreen_HandleQLState2(gMapHeader.regionMapSectionId, MPS_TYPE_BASIC) == TRUE)
            {
                SetMainCallback2(gMain.savedCallback);
            }
            else
           {
                gTasks[taskId].func = Task_EnterCaveTransition2;
            }
        }
        break;
    }
}

bool32 ShouldRunCaveMapPreviewScreen(void)
{
    if (GetLastUsedWarpMapSectionId() != gMapHeader.regionMapSectionId && (IsMapPreviewTypeCave(gMapHeader.regionMapSectionId)))
        return TRUE;

    return (IsMapPreviewTypeBasic(gMapHeader.regionMapSectionId));
}

bool32 ShouldRunFadeInMapPreviewScreen(void)
{
    if (GetLastUsedWarpMapSectionId() == gMapHeader.regionMapSectionId)
        return FALSE;

    return (IsMapPreviewTypeFadeIn(gMapHeader.regionMapSectionId));
}

void RunFadeInMapPreviewScreen(void)
{
    MapPreview_LoadGfx(gMapHeader.regionMapSectionId);
    MapPreview_StartForestTransition(gMapHeader.regionMapSectionId);
}

#undef taskStep
#undef frameCounter
#undef MPWindowId
#undef HWindowId
