#ifndef GUARD_MAP_PREVIEW_SCREEN_CONSTANTS_H
#define GUARD_MAP_PREVIEW_SCREEN_CONSTANTS_H

enum MapPreviewScreenId
{
    MPS_CUCONU_TOWN,
    MPS_ROUTE6,
    MPS_GLAVEZ_HILL,
    MPS_ROUTE8,
    MPS_MERMEREZA_CITY,
    MPS_ROUTE10,
    MPS_CAPHE_CITY,
    MPS_ROUTE9,
    MPS_TORA_TOWN,
    MPS_ROUTE12,
    MPS_ANBEH_BEND,
    MPS_POPIDORA_PIER,
    MPS_ROUTE4,
    MPS_HODOU_CITY,
    MPS_FERRYBUILDING,
    MPS_PERLACIA_CITY,
    MPS_SHARPRISESPIRE,
    MPS_ROUTE2,
    MPS_CURENO_PORT,
    MPS_ROUTE1,
    MPS_ROUTE_A,
    MPS_HALAI_ISLAND,
    MPS_NAVAL_BASE,
    MPS_ROUTE_B,
    MPS_OROLAND,
    MPS_OROLAND_COLISEUM,
    MPS_ROUTE98,
    MPS_CHASILLA,
    MPS_ROUTE99,
    MPS_WISHAAST_LAKE,
    MPS_ARANTRAZ,
    MPS_ROUTE_D,
    MPS_ROUTE11,
    MPS_FORT_YOBU,
    MPS_PETAROSA_BOROUGH,
    MPS_ROUTE13,
    MPS_CRESALTA_VISTA,
    MPS_ROUTE22,
    MPS_HALERBA_CITY,
    MPS_HALERBAWILDS,
    MPS_TIRABUDIN_PLACE,
    MPS_ROUTE7,
    MPS_PINTILLONHOUSE,
    MPS_ROUTE16,
    MPS_ROUTE14,
    MPS_IRISINA_TOWN,
    MPS_ROUTE5,
    MPS_PIOCA_BRIDGE,
    MPS_ROBINWILLTUNNEL,
    MPS_ESPULEE_OUTSKIRTS,
    MPS_ROUTE100,
    MPS_LEAVERRA_FOREST,
    MPS_ROUTE_E,
    MPS_ROUTE_C,
    MPS_SHARPRISESTADIUM,
    MPS_NONGYU_BRIDGE,
    MPS_ZENZU_ISLAND,
    MPS_ROUTE3,
    MPS_TORGEOT_CLIMB,
    MPS_SECRET_PATH,
    MPS_PARC,
    MPS_ROUTE18,
    MPS_QIU_VILLAGE,
    MPS_ROUTE20,
    MPS_WAJABI_LAKE,
    MPS_COUNT
};

enum PreviewImageId
{
    IMG_VIRIDIAN_FOREST,
    IMG_MT_MOON,
    IMG_DIGLETTS_CAVE,
    IMG_ROCK_TUNNEL,
    IMG_POKEMON_TOWER,
    IMG_SAFARI_ZONE,
    IMG_SEAFOAM_ISLANDS,
    IMG_POKEMON_MANSION,
    IMG_ROCKET_HIDEOUT,
    IMG_SILPH_CO,
    IMG_VICTORY_ROAD,
    IMG_CERULEAN_CAVE,
    IMG_POWER_PLANT,
    IMG_MT_EMBER,
    IMG_ROCKET_WAREHOUSE,
    IMG_MONEAN_CHAMBER,
    IMG_DOTTED_HOLE,
    IMG_BERRY_FOREST,
    IMG_ICEFALL_CAVE,
    IMG_LOST_CAVE,
    IMG_ALTERING_CAVE,
    IMG_COUNT
};

// Map Preview Configs
#define MPS_DURATION_LONG       120 // This is the number of frames the map preview will last when the player enters the map for the first time.

#define MPS_DURATION_SHORT      40  // This is the number of frames the map preview will last if the player has visited the map before.

#define MPS_DURATION_NO_FLAG    40  // This is the number of frames the map preview will last if the map's flagId is MPS_FLAG_NULL.

#define MPS_DURATION_ALWAYS     0   // If this number is not 0, MPS_DURATION_ALWAYS will override all other duration values.
                                    // For example, if you set MPS_DURATION_ALWAYS to 100, the map preview will always
                                    // have a duration of 100 frames every time, regardless of the flag state.

#define MPS_DURATION_SCRIPT     40 // This is the number of frames the map preview will last when it is called
                                    // with the mappreview scripting macro.
                                    // It is unaffected by MPS_DURATION_ALWAYS.

#define MPS_BASIC_FADE_SPEED    1   // This sets the speed that the map preview fades out when MPS_TYPE_BASIC is used.
                                    // Numbers less than 1 will have a shorter fade time (negative numbers can be used).
                                    // Numbers greater than 1 will have a longer fade time.


// Constants
#define MPS_TYPE_BASIC      0
#define MPS_TYPE_FADE_IN    1
#define MPS_TYPE_CAVE       2
#define MPS_TYPE_ANY        3

#define MPS_FLAG_NULL       0

#endif //GUARD_MAP_PREVIEW_SCREEN_CONSTANTS_H
