#include "global.h"
#include "event_object_movement.h"
#include "event_data.h"
#include "fieldmap.h"
#include "field_screen_effect.h"
#include "item.h"
#include "malloc.h"
#include "mazegen.h"
#include "quests.h"
#include "quest_logic.h"
#include "string_util.h"
#include "story_jump.h"
#include "constants/songs.h"
#include "sound.h"
#include "field_effect.h"

#include "overworld.h"
#include "random.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "field_control_avatar.h"
#include "event_scripts.h"
#include "map_name_popup.h"
#include "hidden_grotto.h"

void HiddenGrotto_WarpPlayerToGrotto(u32 grottoMapGroup, u32 grottpMapNum);

static const u8* const discoveredGrottoTextArray[] =
{
    gText_LookIveFound,\
    gText_WowHiddenPath,\
    gText_OhWhatsThis,\
    gText_AmazingHiddenTrail,\
    gText_HmmConcealedPath,\
    gText_MysteriousRoute,\
    gText_OhMyConcealedGrotto,\
    gText_IntriguingSecretPassage,\
    gText_WhoaHiddenEntrance,\
    gText_HiddenTrailEmerges,\
    gText_OhWhatDoWeHave,\
    gText_ConcealedPathwayAppears,\
    gText_MyCuriosityPiqued,\
    gText_LookClandestinePassage,\
    gText_OhSecretRoute,\
    gText_HmmObscuredPath,\
    gText_ConcealedEntranceDiscovered,\
    gText_WhatsThisCovertPathway,\
    gText_IntriguingHiddenTrail,\
    gText_HiddenGrottoMaterializes
};
const u32 routeGrottoArray[NUM_GROTTO_ROUTES][2]=
{
    {MAP_ROUTE11,MAP_ROUTE11_GROTTO},
    {MAP_NONGYU_BRIDGE,MAP_NONGYU_BRIDGE_GROTTO},
    {MAP_ROUTE10,MAP_ROUTE10_GROTTO},
    {MAP_ROUTE12,MAP_ROUTE12_GROTTO},
    {MAP_ROUTE6,MAP_ROUTE6_GROTTO},
    {MAP_ROUTE2,MAP_ROUTE2_GROTTO},
    {MAP_ROUTE_C,MAP_ROUTE_C_GROTTO},
    {MAP_ROUTE13,MAP_ROUTE13_GROTTO},
    {MAP_ROUTE9,MAP_ROUTE9_GROTTO},
    {MAP_ROUTE5,MAP_ROUTE5_GROTTO},
    {MAP_ROUTE1,MAP_ROUTE1_GROTTO},
    {MAP_ROUTE18,MAP_ROUTE18_GROTTO},
    {MAP_ROUTE99,MAP_ROUTE99_GROTTO},
    {MAP_ROUTE8,MAP_ROUTE8_GROTTO},
    {MAP_ROUTE20,MAP_ROUTE20_GROTTO},
    {MAP_ROUTE98,MAP_ROUTE98_GROTTO},
    {MAP_ROUTE_E,MAP_ROUTE_E_GROTTO},
    {MAP_ROUTE_B,MAP_ROUTE_B_GROTTO},
    {MAP_ROUTE3,MAP_ROUTE3_GROTTO},
    {MAP_ROUTE100,MAP_ROUTE100_GROTTO},
    {MAP_ROUTE7,MAP_ROUTE7_GROTTO},
    {MAP_ROUTE22,MAP_ROUTE22_GROTTO},
    {MAP_ROUTE_D,MAP_ROUTE_D_GROTTO},
    {MAP_ROUTE_A,MAP_ROUTE_A_GROTTO},
    {MAP_ROUTE4,MAP_ROUTE4_GROTTO},
    {MAP_ROUTE14,MAP_ROUTE14_GROTTO},
};

void HiddenGrotto_LoadDiscoveredGrottoText(void)
{
    u32 randomDialogIndex = Random() % (ARRAY_COUNT(discoveredGrottoTextArray));
    StringCopy(gStringVar1,discoveredGrottoTextArray[randomDialogIndex]);
}

void HiddenGrotto_LoadGrottoAndWarpPlayer(void)
{
    u32 grottoMapGroup = gSaveBlock1Ptr->location.mapGroup;
    u32 grottoMapNum = gSaveBlock1Ptr->location.mapNum;

    for (u32 i = 0; i < ARRAY_COUNT(routeGrottoArray); i++)
    {
        if (routeGrottoArray[i][0] != (grottoMapNum | (grottoMapGroup << 8)))
            continue;

        grottoMapGroup = ((routeGrottoArray[i][1]) >> 8);
        grottoMapNum = ((routeGrottoArray[i][1]) & 0xFF);
    }
    HiddenGrotto_WarpPlayerToGrotto(grottoMapGroup,grottoMapNum);
}

void HiddenGrotto_WarpPlayerToGrotto(u32 grottoMapGroup, u32 grottoMapNum)
{
    SetWarpDestinationToMapWarp(grottoMapGroup,grottoMapNum,0);
	DoWarp();
	ResetInitialPlayerAvatarState();
    PlaySE(SE_EXIT);
}
