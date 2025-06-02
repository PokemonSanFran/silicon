#include "global.h"
#include "battle.h"
#include "event_object_movement.h"
#include "region_map.h"
#include "event_data.h"
#include "fieldmap.h"
#include "item.h"
#include "malloc.h"
#include "mazegen.h"
#include "quests.h"
#include "string_util.h"
#include "quest_logic.h"
#include "hidden_grotto.h"
#include "overworld.h"
#include "random.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "constants/sound.h"
#include "field_control_avatar.h"
#include "battle_main.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "money.h"
#include "quest_logic.h"

#define BASE_FARE 2000

void Taxi_BufferDestinationMapName(void){
    GetMapNameGeneric(gStringVar1, gMapHeader.regionMapSectionId);
}

bool8 Taxi_CalculateFeeAndCharge(void){
    //PSF TODO implement distance based formula
    //struct here should be sometihng like
    //CAPHE_CITY, x coordinate, y coordinate
    //https://chat.openai.com/share/1c0c9adf-8b6a-41ec-9071-653ddb1e0a69
    u32 taxiFare = BASE_FARE;
    u32 destination = VarGet(gSpecialVar_Result);
    //u32 currentMap = GetCurrentMap();

    switch (destination){
        case 0:
            SetWarpDestinationToMapWarp(MAP_GROUP(MAP_CAPHE_CITY),MAP_NUM(MAP_CAPHE_CITY),0);
            taxiFare += 3000;
            break;
        case 1:
            SetWarpDestinationToMapWarp(MAP_GROUP(MAP_CHASILLA),MAP_NUM(MAP_CHASILLA),7);
            taxiFare = 6000;
            break;
        case 2:
            SetWarpDestinationToMapWarp(MAP_GROUP(MAP_CRESALTA_VISTA),MAP_NUM(MAP_CRESALTA_VISTA),7);
            taxiFare = 9000;
            break;
    }

    VarSet(VAR_TAXI_DESTINATION,destination);
    Taxi_BufferDestinationMapName();
    ConvertIntToDecimalStringN(gStringVar2, taxiFare, STR_CONV_MODE_LEFT_ALIGN, 6);
    //PSF TODO figure out how to make this show the destination maps' name

    return IsEnoughMoney(&gSaveBlock1Ptr->money,taxiFare);
}
