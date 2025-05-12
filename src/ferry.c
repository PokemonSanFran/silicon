#include "global.h"
#include "event_object_movement.h"
#include "region_map.h"
#include "event_data.h"
#include "string_util.h"
#include "malloc.h"
#include "quests.h"
#include "quest_logic.h"
#include "overworld.h"
#include "strings.h"
#include "random.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "field_control_avatar.h"
#include "quest_logic.h"
#include "constants/heal_locations.h"
#include "script_menu.h"
#include "field_screen_effect.h"
#include "constants/ferry.h"

static const u8 *GetPortName(u32);
static u32 GetCurrentFerry(void);
static void PopulateFerryMenuRow(u32);
void ConstructFerryMenu(void);
void WarpPlayerToFerry(void);

static const u32 ferryLocations[][3]=
{
    {
        FERRY_PORT_FERRYBUILDING,
        FERRY_HALAI_ISLAND_AVAILABLE,
        //MAP_GROUP(HALAI_ISLAND),MAP_NUM(HALAI_ISLAND),
        FERRY_PORT_HALAI_ISLAND,
    },
    {
        FERRY_PORT_HALAI_ISLAND,
        FERRY_HALAI_ISLAND_AVAILABLE,
        //MAP_GROUP(FERRYBUILDING),MAP_NUM(FERRYBUILDING),
        FERRY_PORT_FERRYBUILDING,
    },
    {
        FERRY_PORT_HALAI_ISLAND,
        FERRY_ARANTRAZ_AVAILABLE,
        //MAP_GROUP(ARANTRAZ),MAP_NUM(ARANTRAZ),
        FERRY_PORT_ARANTRAZ,
    },
    {
        FERRY_PORT_ARANTRAZ,
        FERRY_ARANTRAZ_AVAILABLE,
        //MAP_GROUP(HALAI_ISLAND),MAP_NUM(HALAI_ISLAND),
        FERRY_PORT_HALAI_ISLAND,
    },
    {
        FERRY_PORT_ARANTRAZ,
        FERRY_ARANTRAZ_AVAILABLE,
        //MAP_GROUP(POPIDORA_PIER),MAP_NUM(POPIDORA_PIER),
        FERRY_PORT_POPIDORA_PIER,
    },
    {
        FERRY_PORT_POPIDORA_PIER,
        FERRY_ARANTRAZ_AVAILABLE,
        //MAP_GROUP(ARANTRAZ),MAP_NUM(ARANTRAZ),
        FERRY_PORT_ARANTRAZ,
    },
    {
        FERRY_PORT_CHASILLA,
        FERRY_ESPULEE_OUTSKIRTS_AVAILABLE,
        //MAP_GROUP(ESPULEE_OUTSKIRTS),MAP_NUM(ESPULEE_OUTSKIRTS),
        FERRY_PORT_ESPULEE_OUTSKIRTS,
    },
    {
        FERRY_PORT_ESPULEE_OUTSKIRTS,
        FERRY_ESPULEE_OUTSKIRTS_AVAILABLE,
        //MAP_GROUP(CHASILLA),MAP_NUM(CHASILLA),
        FERRY_PORT_CHASILLA,
    },
};

const u8 *GetPortName(u32 portId)
{
    switch(portId)
    {
        case FERRY_PORT_FERRYBUILDING: return gText_Ferrybuilding;
        case FERRY_PORT_HALAI_ISLAND: return gText_HalaiIsland;
        case FERRY_PORT_ARANTRAZ: return gText_Arantraz;
        case FERRY_PORT_POPIDORA_PIER: return gText_PopidoraPier;
        case FERRY_PORT_CHASILLA: return gText_Chasilla;
        default:
        case FERRY_PORT_ESPULEE_OUTSKIRTS:
            return gText_EspuleeOutskirts;
    }
}

u32 GetCurrentFerry(void)
{
    switch(GetCurrentMap())
    {
        case MAP_FERRYBUILDING: return FERRY_PORT_FERRYBUILDING;
        case MAP_HALAI_ISLAND: return FERRY_PORT_HALAI_ISLAND;
        case MAP_ARANTRAZ: return FERRY_PORT_ARANTRAZ;
        case MAP_POPIDORA_PIER: return FERRY_PORT_POPIDORA_PIER;
        case MAP_CHASILLA: return FERRY_PORT_CHASILLA;
        default:
        case MAP_ESPULEE_OUTSKIRTS:
            return FERRY_PORT_ESPULEE_OUTSKIRTS;
    }
}

void PopulateFerryMenuRow(u32 portIndex)
{
    u32 ferryDestination = ferryLocations[portIndex][FERRY_DESTINATION];
    bool32 isCancel = portIndex == MULTI_B_PRESSED;

    u8 *nameBuffer = Alloc(100);
    const u8 *name = (isCancel) ? gText_Cancel2 : GetPortName(ferryDestination);
    struct ListMenuItem item;

    StringExpandPlaceholders(nameBuffer, name);
    item.name = nameBuffer;
    item.id = (isCancel) ? MULTI_B_PRESSED : ferryDestination;

    MultichoiceDynamic_PushElement(item);
}

void ConstructFerryMenu(void)
{
    u32 portIndex, listSize = 0;
    u32 numPorts = ARRAY_COUNT(ferryLocations);

    for (portIndex = 0; portIndex < numPorts; portIndex++)
    {
        if (GetCurrentFerry() != ferryLocations[portIndex][FERRY_PORT_ID])
            continue;

        if (VarGet(VAR_FERRY_STATE) < ferryLocations[portIndex][FERRY_STATE])
            continue;

        PopulateFerryMenuRow(portIndex);
        listSize++;
    }
    PopulateFerryMenuRow(MULTI_B_PRESSED);
    gSpecialVar_Result = listSize;
}

void WarpPlayerToFerry(void)
{
    SetWarpDestinationToHealLocation(gSpecialVar_Result);
    DoWarp();
    ResetInitialPlayerAvatarState();
}
