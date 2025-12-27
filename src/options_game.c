#include "global.h"
#include "fieldmap.h"
#include "follower_npc.h"
#include "event_data.h"
#include "bike.h"
#include "ui_options_menu.h"
#include "string_util.h"
#include "constants/story_jump.h"
#include "constants/options_game.h"
#include "options_game.h"
#include "script.h"
#include "story_jump.h"
#include "save.h"

// ***********************************************************************
// Game Settings: Save Boot
// ***********************************************************************

static u32 GetSaveBootOption(void)
{
    return gSaveBlock2Ptr->optionsGame[GAME_OPTIONS_SAVE_BOOT];
}

bool32 CheckSaveBootAndFileStatus()
{
    if (GetSaveBootOption() != GAME_OPTION_SAVE_BOOT_CONTINUE)
        return FALSE;

    if (gSaveFileStatus != SAVE_STATUS_OK)
        return FALSE;

    return TRUE;
}

// ***********************************************************************
// Game Settings: Save Behavior
// ***********************************************************************
extern const u8 DoAutoSaveFieldEffect[];

static bool32 IsAutosaveTurnedOn(void)
{
    return gSaveBlock2Ptr->optionsGame[GAME_OPTIONS_SAVE_BEHAVIOR];
}

void Script_IsAutosaveTurnedOn(void)
{
    gSpecialVar_Result = IsAutosaveTurnedOn();
}

void CountAndTryAutoSave(void)
{
    if(!IsAutosaveTurnedOn())
        return;

    u32 autoSaveCount = VarGet(VAR_AUTOSAVE);
    VarSet(VAR_AUTOSAVE,++autoSaveCount);

    if (autoSaveCount < AUTOSAVE_THRESHOLD)
        return;

    VarSet(VAR_AUTOSAVE,0);
    ScriptContext_SetupScript(DoAutoSaveFieldEffect);
}

// ***********************************************************************
// Game Settings: Run Settings
// ***********************************************************************

static bool32 CanPlayerRun(void)
{
    return (!(gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_UNDERWATER) && (!IsRunningDisallowed(gObjectEvents[gPlayerAvatar.objectEventId].currentMetatileBehavior)));
}

static u32 GetRunBehaviorOption(void)
{
    return gSaveBlock2Ptr->optionsGame[GAME_OPTIONS_RUN];
}

bool32 PlayerNotOnBikeShouldWalk(u16 heldKeys)
{
    u32 optionRunValue = GetRunBehaviorOption();
    bool32 isBButtonHeld = (heldKeys & B_BUTTON);

    return (
            ((isBButtonHeld) && (optionRunValue == GAME_OPTION_RUN_ALWAYS))
            || ((isBButtonHeld) && ((optionRunValue == GAME_OPTION_RUN_TOGGLE) && (FlagGet(FLAG_SYS_B_DASH))))
            || ((!isBButtonHeld) && (optionRunValue == GAME_OPTION_RUN_TOGGLE) && (!FlagGet(FLAG_SYS_B_DASH)))
            || ((!isBButtonHeld) && (optionRunValue == GAME_OPTION_RUN_MANUAL))
            || (!CanPlayerRun())
            || (FollowerNPCComingThroughDoor())
            || (I_ORAS_DOWSING_FLAG != 0 && (I_ORAS_DOWSING_FLAG == 0 || FlagGet(I_ORAS_DOWSING_FLAG)))
           );
}

// ***********************************************************************
// Game Settings: Puzzles
// ***********************************************************************

u32 GetPuzzleValue(void)
{
	return gSaveBlock2Ptr->optionsGame[GAME_OPTIONS_PUZZLES];
}

// ***********************************************************************
// Game Settings: Cutscenes
// ***********************************************************************

static bool32 IsCutscenePlaying(u32);
static void IncrementCutsceneFrameCounter(void);
static bool32 HasPlayerMetSkipCutsceneFrameCount(void);
static void ResetCutsceneFrameCounter(void);
static bool32 IsCutsceneFrameCounterEmpty(void);
static void ResetCutsceneVariable(void);

u32 GetCutsceneOptionValue(void)
{
    return gSaveBlock2Ptr->optionsGame[GAME_OPTIONS_CUTSCENE];
}

bool32 ShouldSkipCutscene(void)
{
    return ((GetCutsceneOptionValue()) == GAME_OPTION_CUTSCENE_SKIP);
}

static bool32 IsCutscenePlaying(u32 cutscene)
{
    return (cutscene != JUMPPLAYER_NONE);
}

static void IncrementCutsceneFrameCounter(void)
{
    gPlayerAvatar.skipCutsceneFrameCounter++;
}

static bool32 HasPlayerMetSkipCutsceneFrameCount(void)
{
    return (gPlayerAvatar.skipCutsceneFrameCounter >= SKIP_CUTSCENE_FRAME_COUNT);
}

static void ResetCutsceneFrameCounter(void)
{
    gPlayerAvatar.skipCutsceneFrameCounter = 0;
}

static bool32 UNUSED IsCutsceneFrameCounterEmpty(void)
{
    return (gPlayerAvatar.skipCutsceneFrameCounter == 0);
}

void HoldButtonToSkipCutscene(u16 heldKeys)
{
    /*
     * PSF TODO Current thinking is that the player can alwaays do this and therefore doesn't need to be enabled.
    if(GetCutsceneOptionValue() != GAME_OPTION_CUTSCENE_HOLD)
        return;
        */

    u32 cutscene = VarGet(VAR_CUTSCENE_SKIP);

    if (!IsCutscenePlaying(cutscene))
        return;

    if (!(heldKeys & SKIP_CUTSCENE_HELD_KEYS))
        return;

    IncrementCutsceneFrameCounter();

    if (!HasPlayerMetSkipCutsceneFrameCount())
        return;

    SkipCutscene(cutscene);
}

void ResetCutsceneVariable(void)
{
    VarSet(VAR_CUTSCENE_SKIP,JUMPPLAYER_NONE);
}

void ResetCutsceneStatus(void)
{
    ResetCutsceneFrameCounter();
    ResetCutsceneVariable();
}

void SkipCutscene(u32 cutscene)
{
    FlagSet(FLAG_HIDE_MAP_NAME_POPUP);
    JumpPlayerToStoryPoint(cutscene,JUMP_CUTSCENE_SKIP);
    WarpPlayerAfterVarSet();
    ResetCutsceneStatus();
    FlagClear(FLAG_HIDE_MAP_NAME_POPUP);
}
