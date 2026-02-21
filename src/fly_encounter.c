#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "fly_encounter.h"
#include "field_specials.h"
#include "quest_logic.h"
#include "random.h"
#include "constants/item.h"
#include "battle_setup.h"
#include "wild_encounter.h"

enum FlyEncounterTypes GetFlyEncounterType(void)
{
    u32 repelLureVar = VarGet(VAR_REPEL_STEP_COUNT);
    u16 steps = REPEL_LURE_STEPS(repelLureVar);
    bool32 isLure = IS_LAST_USED_LURE(repelLureVar);

    if (Quest_FlightPatterns_IsOnFlightPath())
        return Quest_FlightPatterns_GetEncounterType();

    u32 encounterType = FLY_ENCOUNTER_NONE;

    if ((Random() % 100) < FLY_ENCOUNTER_RATE)
        encounterType = FLY_ENCOUNTER_ATTACK;

    if (steps)
        encounterType = (isLure) ? FLY_ENCOUNTER_ATTACK : FLY_ENCOUNTER_NONE;

    TrySkyBattle();
    if (!gSpecialVar_Result)
        encounterType = FLY_ENCOUNTER_NONE;

    gSpecialVar_Result = encounterType;
    return encounterType;
}

void FlyWildEncounter(void)
{
    u32 headerId = GetCurrentMapWildMonHeaderId();
    if (headerId == HEADER_NONE)
    {
        gSpecialVar_Result = FALSE;
        return;
    }

    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_FLY_MONS);
    const struct WildPokemonInfo *wildPokemonInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].flyMonsInfo;

    if (wildPokemonInfo == NULL)
    {
        gSpecialVar_Result = FALSE;
    }
    else if (TryGenerateWildMon(wildPokemonInfo, 5, WILD_CHECK_REPEL | WILD_CHECK_KEEN_EYE) == TRUE)
    {
        BattleSetup_StartWildBattle();
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}
