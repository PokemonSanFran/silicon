#include "global.h"
#include "field_effect.h"
#include "event_object_movement.h"
#include "vs_seeker.h"
#include "battle_setup.h"
#include "rematch.h"
#include "event_data.h"
#include "field_effect_helpers.h"
#include "constants/field_effects.h"
#include "constants/trainer_types.h"
#include "constants/vars.h"

static bool32 ObjectEventAlreadyHasRematch(bool32);
static bool32 IsTemplateRematchTrainer(u32, u32);
static bool32 IsTemplateTypeRegular(u32);
static bool32 HasTrainerBeenRecentlyBeatenOrUndefeated(u32);
static bool32 IsTrainerLastOneBattled(u32);
static void SpawnRematchIconForObject(struct ObjectEvent*, u32);
static void ResetLastBattledTrainer(void);
static bool32 UpdateTrainerRematchStateForMap(u16, u16);
static bool32 DoesTableIdHaveRematch(u32);
static u32 GetRematchGameProgessVariable(void);
static void SetRematchIconOnObject(struct ObjectEvent*);

void HandleRematchIconForSingleObjectEvent(struct ObjectEvent *objectEvent, u32 objectEventId)
{
    u32 localId = objectEvent->localId;
    u32 mapNum = objectEvent->mapNum;
    u32 mapGroup = objectEvent->mapGroup;
    u32 trainerId;

    const struct ObjectEventTemplate *obj = GetObjectEventTemplateByLocalIdAndMap(localId, mapNum, mapGroup);

    if (obj == NULL)
        return;

    if (ObjectEventAlreadyHasRematch(objectEvent->hasRematchIcon))
        return;

    trainerId = GetTrainerFlagFromScript(obj->script);
    if (!IsTemplateRematchTrainer(obj->trainerType, trainerId))
        return;

    if (HasTrainerBeenRecentlyBeatenOrUndefeated(trainerId))
        return;

    SpawnRematchIconForObject(objectEvent,objectEventId);
}

static bool32 ObjectEventAlreadyHasRematch(bool32 hasRematchIcon)
{
    if (!FieldEffectActiveListContains(FLDEFF_WANT_REMATCH))
        return FALSE;

    return (hasRematchIcon);
}

static bool32 IsTemplateRematchTrainer(u32 trainerType, u32 trainerId)
{
    if (
        !IsTemplateTypeRegular(trainerType) ||
        !HasTrainerBeenFought(trainerId) ||
        !IsTrainerReadyForRematch_(gRematchTable,trainerId)
       )
        return FALSE;

    return TRUE;
}

static bool32 IsTemplateTypeRegular(u32 trainerType)
{
    return (
        trainerType == TRAINER_TYPE_NORMAL ||
        trainerType == TRAINER_TYPE_BURIED
       );
}

static bool32 HasTrainerBeenRecentlyBeatenOrUndefeated(u32 trainerId)
{
    if (IsTrainerLastOneBattled(trainerId))
        return TRUE;

    if (!HasTrainerBeenFought(trainerId))
        return TRUE;

    return FALSE;
}

static bool32 IsTrainerLastOneBattled(u32 trainerId)
{
    u32 trainerIndex, currentTrainer, tableId = FirstBattleTrainerIdToRematchTableId(gRematchTable, trainerId);

    for (trainerIndex = 0; trainerIndex < REMATCHES_COUNT; trainerIndex++)
    {
        currentTrainer = gRematchTable[tableId].trainerIds[trainerIndex];
        if (gTrainerBattleParameter.params.opponentA == currentTrainer)
            return TRUE;

        if (gTrainerBattleParameter.params.opponentB == currentTrainer)
            return TRUE;
    }
    return FALSE;
}

static void SpawnRematchIconForObject(struct ObjectEvent *objectEvent, u32 objectEventId)
{
    SetRematchIconOnObject(objectEvent);
    StartFieldEffectForObjectEvent(FLDEFF_WANT_REMATCH,objectEvent);
}

void UpdateTrainerRematchState(u16 mapGroup, u16 mapNum)
{
    ResetLastBattledTrainer();
    UpdateTrainerRematchStateForMap(mapGroup, mapNum);
}

static void ResetLastBattledTrainer(void)
{
    gTrainerBattleParameter.params.opponentA = TRAINER_NONE;
    gTrainerBattleParameter.params.opponentB = TRAINER_NONE;
}

static bool32 UpdateTrainerRematchStateForMap(u16 mapGroup, u16 mapNum)
{
    s32 tableId;
    u32 trainerId;

    for (tableId = 0; tableId <= REMATCH_SPECIAL_TRAINER_START; tableId++)
    {
        trainerId = gRematchTable[tableId].trainerIds[0];

        if (!DoesCurrentMapMatchRematchTrainerMap(tableId,gRematchTable,mapGroup,mapNum) || IsRematchForbidden(tableId))
            continue;

        if (DoesTableIdHaveRematch(tableId))
            continue;
        else if (HasTrainerBeenRecentlyBeatenOrUndefeated(trainerId))
            ClearTrainerWantRematchState(gRematchTable, trainerId);
        else
            SetRematchIdForTrainer(gRematchTable, tableId);
    }
    return TRUE;
}

static bool32 DoesTableIdHaveRematch(u32 tableId)
{
    return (gSaveBlock1Ptr->trainerRematches[tableId]);
}

u16 GetPSFRematchTrainerId(u16 trainerId)
{
    u32 tableId = FirstBattleTrainerIdToRematchTableId(gRematchTable, trainerId);
    u32 rematchTrainerIdx = GetRematchGameProgessVariable();

    while (!HasTrainerBeenFought(gRematchTable[tableId].trainerIds[rematchTrainerIdx-1]))
    {
        if (!rematchTrainerIdx)
            break;

        rematchTrainerIdx--;
    }

    return gRematchTable[tableId].trainerIds[rematchTrainerIdx];
}

static u32 GetRematchGameProgessVariable(void)
{
    u32 storylineState = VarGet(VAR_STORYLINE_STATE);
    s32 rematchIndex;

    const u32 gameProgressMarkers[REMATCHES_COUNT] =
    {
        STORY_WEST_RESIDO_ONLY,
        STORY_COMPLETE_ARANTRAZ,
        STORY_COMPLETED_NAVAL_BASE,
        STORY_RESTORATION_1_COMPLETE,
        STORY_1ST_TAKEDOWN,
    };

    for (rematchIndex = REMATCHES_COUNT; rematchIndex > -1; rematchIndex--)
        if (storylineState >= gameProgressMarkers[rematchIndex])
            break;
        else
            continue;

    return rematchIndex;
}

void ResetRematchIconOnObject(struct ObjectEvent *objectEvent)
{
    objectEvent->hasRematchIcon = FALSE;
}

static void SetRematchIconOnObject(struct ObjectEvent *objectEvent)
{
    objectEvent->hasRematchIcon = TRUE;
}
