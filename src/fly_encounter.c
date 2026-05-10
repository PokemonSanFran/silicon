#include "global.h"
#include "event_data.h"
#include "fly_encounter.h"
#include "quest_logic.h"
#include "string_util.h"
#include "battle_message.h"
#include "line_break.h"
#include "pokemon.h"
#include "task.h"
#include "text.h"
#include "field_specials.h"
#include "script.h"
#include "quest_logic.h"
#include "random.h"
#include "field_message_box.h"
#include "overworld.h"
#include "battle_setup.h"
#include "wild_encounter.h"
#include "constants/item.h"
#include "battle_util.h"

const struct WildPokemonInfo *GetHeaderFlyMonsInfo(void)
{
    u32 headerId = GetCurrentMapWildMonHeaderId();

    if (headerId == HEADER_NONE)
        return NULL;

    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_FLY_MONS);
    return gWildMonHeaders[headerId].encounterTypes[timeOfDay].flyMonsInfo;
}

static bool8 DoesDestinationHaveFlyMons(void)
{
    return (GetHeaderFlyMonsInfo() != NULL);
}

enum FlyEncounterTypes GetFlyEncounterType(void)
{
    u32 repelLureVar = VarGet(VAR_REPEL_STEP_COUNT);
    u16 steps = REPEL_LURE_STEPS(repelLureVar);
    bool32 isLure = IS_LAST_USED_LURE(repelLureVar);

    if (Quest_FlightPatterns_GetFlightPath())
        return Quest_FlightPatterns_GetEncounterType(steps,isLure);

    enum FlyEncounterTypes encounterType = FLY_ENCOUNTER_NONE;
    gSpecialVar_Result = encounterType;

    if (!DoesDestinationHaveFlyMons())
        return encounterType;

    if (steps && !isLure)
        return encounterType;

    if ((Random() % 100) < FLY_ENCOUNTER_RATE)
        encounterType = FLY_ENCOUNTER_ATTACK;

    if (steps && isLure)
        encounterType = FLY_ENCOUNTER_ATTACK;

    if (TryGenerateWildMon(GetHeaderFlyMonsInfo(), 5, WILD_CHECK_REPEL | WILD_CHECK_KEEN_EYE) == FALSE)
        encounterType = FLY_ENCOUNTER_NONE;

    if (encounterType != FLY_ENCOUNTER_NONE)
    {
        TrySkyBattle();
        if (!gSpecialVar_Result)
            encounterType = FLY_ENCOUNTER_NONE;
    }

    gSpecialVar_Result = encounterType;
    return encounterType;
}

void FlyWildEncounter(enum FlyEncounterTypes encounterType)
{
    if (encounterType == FLY_ENCOUNTER_QUEST_APPROACH || encounterType == FLY_ENCOUNTER_QUEST_APPROACH_BOSS)
    {
        gSpecialVar_Result = FALSE;
        return;
    }

    if (encounterType == FLY_ENCOUNTER_QUEST_ATTACK)
    {
        CreateWildMon(SPECIES_QUEST_FLIGHT_PATTERNS, LEVEL_QUEST_FLIGHT_PATTERNS);
        BattleSetup_StartWildBattle();
        gSpecialVar_Result = TRUE;
    }
    else if (encounterType == FLY_ENCOUNTER_QUEST_BOSS)
    {
        CreateWildMon(SPECIES_QUEST_FLIGHT_PATTERNS_BOSS, LEVEL_QUEST_FLIGHT_PATTERNS_BOSS);
        BattleSetup_StartWildBattle();
        gSpecialVar_Result = TRUE;
    }
    else if (!DoesDestinationHaveFlyMons())
    {
        gSpecialVar_Result = FALSE;
    }
    else if (GetMonData(&gEnemyParty[0],MON_DATA_SPECIES) != SPECIES_NONE)
    {
        BattleSetup_StartWildBattle();
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
        return;
    }
}

static void *sFlyEncounterCallback2 = NULL;
static void *sFlyEncounterFieldCallback = NULL;

static void Task_FlyEncounterMessage(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->data[0])
    {
        case 0:
            ShowFieldMessage(gStringVar4);
            task->data[0]++;
            break;
        case 1:
            if (IsTextPrinterActiveOnWindow(0) || (!JOY_NEW(A_BUTTON)))
                return;

            HideFieldMessageBox();
            task->data[0]++;
            break;
        case 2:
            {
                void (*callback2)(void) = (void (*)(void))sFlyEncounterCallback2;
                void (*fieldCb)(void) = (void (*)(void))sFlyEncounterFieldCallback;

                DestroyTask(taskId);
                sFlyEncounterCallback2 = NULL;
                sFlyEncounterFieldCallback = NULL;
                FlyWildEncounter(task->data[1]);
                if (gSpecialVar_Result == FALSE)
                {
                    SetMainCallback2(callback2);
                    gFieldCallback = fieldCb;
                    return;
                }
            }
            break;
    }
}

void TryFlyWildEncounter(u8 taskId, void* callback2, void* fieldCallback)
{
    enum FlyEncounterTypes encounterType = GetFlyEncounterType();

    switch(encounterType)
    {
        default:
        case FLY_ENCOUNTER_NONE:
            SetMainCallback2(callback2);
            gFieldCallback = fieldCallback;
            DestroyTask(taskId);
            return;
            break;
        case FLY_ENCOUNTER_ATTACK:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("After taking flight, a wild Pokémon attacked!"));
            break;
        case FLY_ENCOUNTER_QUEST_APPROACH:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_QUEST_FLIGHT_PATTERNS));
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("After taking flight, a wild {STR_VAR_1} narrowly missed crashing into you!"));
            break;
        case FLY_ENCOUNTER_QUEST_APPROACH_BOSS:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_QUEST_FLIGHT_PATTERNS_BOSS));
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("After taking flight, a wild {STR_VAR_1} narrowly missed crashing into you!"));
            break;
        case FLY_ENCOUNTER_QUEST_ATTACK:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_QUEST_FLIGHT_PATTERNS));
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("After taking flight, a wild {STR_VAR_1} turned around and stared at you...{PAUSE_UNTIL_PRESS} and then it attacked!"));
            break;
        case FLY_ENCOUNTER_QUEST_BOSS:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("After taking flight, a huge shadow quickly flew above you...{PAUSE_UNTIL_PRESS} It doubled back and attacked!"));
            break;
    }
    BreakStringAutomatic(gStringVar4, BATTLE_MSG_MAX_WIDTH, 3, FONT_NORMAL, SHOW_SCROLL_PROMPT);
    sFlyEncounterCallback2 = callback2;
    sFlyEncounterFieldCallback = fieldCallback;
    gTasks[taskId].func = Task_FlyEncounterMessage;
    gTasks[taskId].data[0] = 0;
    gTasks[taskId].data[1] = encounterType;
}

bool8 IfSkyBattleAndOverworldTerrain(enum FieldEffectCases caseId, struct StartingStatuses startingStatus)
{
    if (!FlagGet(B_FLAG_SKY_BATTLE))
        return FALSE;

    if ((caseId != FIELD_EFFECT_OVERWORLD_TERRAIN) && (caseId != FIELD_EFFECT_TRAINER_STATUSES))
        return FALSE;

    if (startingStatus.electricTerrain == TRUE)
        return TRUE;

    if (startingStatus.mistyTerrain == TRUE)
        return TRUE;

    if  (startingStatus.grassyTerrain == TRUE)
        return TRUE;

    if (startingStatus.psychicTerrain == TRUE)
        return TRUE;

    return FALSE;
}
