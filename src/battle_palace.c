#include "global.h"
#include "event_data.h"
#include "battle_setup.h"
#include "overworld.h"
#include "random.h"
#include "battle_tower.h"
#include "frontier_util.h"
#include "item.h"
#include "string_util.h"
#include "constants/items.h"
#include "constants/battle_frontier.h"
#include "constants/battle_palace.h"
#include "constants/frontier_util.h"
#include "constants/trainers.h"

// This file's functions.
static void InitPalaceChallenge(void);
static void GetPalaceData(void);
static void SetPalaceData(void);
static void GetPalaceCommentId(void);
static void SetPalaceOpponent(void);
static void BufferOpponentIntroSpeech(void);
static void IncrementPalaceStreak(void);
static void SavePalaceChallenge(void);
static void SetRandomPalacePrize(void);
static void GivePalacePrize(void);

// Const rom data.
static void (*const sBattlePalaceFunctions[])(void) =
{
    [BATTLE_PALACE_FUNC_INIT]               = InitPalaceChallenge,
    [BATTLE_PALACE_FUNC_GET_DATA]           = GetPalaceData,
    [BATTLE_PALACE_FUNC_SET_DATA]           = SetPalaceData,
    [BATTLE_PALACE_FUNC_GET_COMMENT_ID]     = GetPalaceCommentId,
    [BATTLE_PALACE_FUNC_SET_OPPONENT]       = SetPalaceOpponent,
    [BATTLE_PALACE_FUNC_GET_OPPONENT_INTRO] = BufferOpponentIntroSpeech,
    [BATTLE_PALACE_FUNC_INCREMENT_STREAK]   = IncrementPalaceStreak,
    [BATTLE_PALACE_FUNC_SAVE]               = SavePalaceChallenge,
    [BATTLE_PALACE_FUNC_SET_PRIZE]          = SetRandomPalacePrize,
    [BATTLE_PALACE_FUNC_GIVE_PRIZE]         = GivePalacePrize,
};

static const u16 sBattlePalaceEarlyPrizes[] =
{
    ITEM_HP_UP,
    ITEM_PROTEIN,
    ITEM_IRON,
    ITEM_CALCIUM,
    ITEM_CARBOS,
    ITEM_ZINC
};

static const u16 sBattlePalaceLatePrizes[] =
{
    ITEM_BRIGHT_POWDER,
    ITEM_WHITE_HERB,
    ITEM_QUICK_CLAW,
    ITEM_LEFTOVERS,
    ITEM_MENTAL_HERB,
    ITEM_KINGS_ROCK,
    ITEM_FOCUS_BAND,
    ITEM_SCOPE_LENS,
    ITEM_CHOICE_BAND
};

static const u32 sWinStreakFlags[][2] =
{
    {STREAK_PALACE_SINGLES_50, STREAK_PALACE_SINGLES_OPEN},
    {STREAK_PALACE_DOUBLES_50, STREAK_PALACE_DOUBLES_OPEN},
};

static const u32 sWinStreakMasks[][2] =
{
    {~(STREAK_PALACE_SINGLES_50), ~(STREAK_PALACE_SINGLES_OPEN)},
    {~(STREAK_PALACE_DOUBLES_50), ~(STREAK_PALACE_DOUBLES_OPEN)},
};

// code
void CallBattlePalaceFunction(void)
{
    sBattlePalaceFunctions[gSpecialVar_0x8004]();
}

static void InitPalaceChallenge(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
#endif // siliconFrontier
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
#endif // siliconFrontier
    gSaveBlock2Ptr->frontier.disableRecordBattle = FALSE;
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    if (!(gSaveBlock2Ptr->frontier.winStreakActiveFlags & sWinStreakFlags[battleMode][lvlMode]))
        gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] = 0;
#endif // siliconFrontier

    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
    TRAINER_BATTLE_PARAM.opponentA = 0;
}

static void GetPalaceData(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    switch (gSpecialVar_0x8005)
    {
    case PALACE_DATA_PRIZE:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.palacePrize;
        break;
    case PALACE_DATA_WIN_STREAK:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode];
        break;
    case PALACE_DATA_WIN_STREAK_ACTIVE:
        gSpecialVar_Result = ((gSaveBlock2Ptr->frontier.winStreakActiveFlags & sWinStreakFlags[battleMode][lvlMode]) != 0);
        break;
    }
#endif // siliconFrontier
}

static void SetPalaceData(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    switch (gSpecialVar_0x8005)
    {
    case PALACE_DATA_PRIZE:
        gSaveBlock2Ptr->frontier.palacePrize = gSpecialVar_0x8006;
        break;
    case PALACE_DATA_WIN_STREAK:
        gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] = gSpecialVar_0x8006;
        break;
    case PALACE_DATA_WIN_STREAK_ACTIVE:
        if (gSpecialVar_0x8006)
            gSaveBlock2Ptr->frontier.winStreakActiveFlags |= sWinStreakFlags[battleMode][lvlMode];
        else
            gSaveBlock2Ptr->frontier.winStreakActiveFlags &= sWinStreakMasks[battleMode][lvlMode];
        break;
    }
#endif // siliconFrontier
}

static void GetPalaceCommentId(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;

    if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] < 50)
        gSpecialVar_Result = Random() % 3;
    else if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] < 99)
        gSpecialVar_Result = 3;
    else
        gSpecialVar_Result = 4;
#endif // siliconFrontier
}

static void SetPalaceOpponent(void)
{
    TRAINER_BATTLE_PARAM.opponentA = 5 *(Random() % 255) / 64u;
    SetBattleFacilityTrainerGfxId(TRAINER_BATTLE_PARAM.opponentA, 0);
}

static void BufferOpponentIntroSpeech(void)
{
    if (TRAINER_BATTLE_PARAM.opponentA < FRONTIER_TRAINERS_COUNT)
        FrontierSpeechToString(gFacilityTrainers[TRAINER_BATTLE_PARAM.opponentA].speechBefore);
}

static void IncrementPalaceStreak(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u8 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] < MAX_STREAK)
    {
        gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode]++;

        // Whatever GF planned to do here, they messed up big time.
        if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][(lvlMode > gSaveBlock2Ptr->frontier.palaceRecordWinStreaks[battleMode][lvlMode]) ? 1 : 0])
            gSaveBlock2Ptr->frontier.palaceRecordWinStreaks[battleMode][lvlMode] = gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode];
    }
#endif // siliconFrontier
}

static void SavePalaceChallenge(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
#endif // siliconFrontier
}

static void SetRandomPalacePrize(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;

    if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] > 41)
        gSaveBlock2Ptr->frontier.palacePrize = sBattlePalaceLatePrizes[Random() % ARRAY_COUNT(sBattlePalaceLatePrizes)];
    else
        gSaveBlock2Ptr->frontier.palacePrize = sBattlePalaceEarlyPrizes[Random() % ARRAY_COUNT(sBattlePalaceEarlyPrizes)];
#endif // siliconFrontier
}

static void GivePalacePrize(void)
{
#if FREE_EMERALD_BATTLE_FRONTIER == FALSE
    if (AddBagItem(gSaveBlock2Ptr->frontier.palacePrize, 1) == TRUE)
    {
        CopyItemName(gSaveBlock2Ptr->frontier.palacePrize, gStringVar1);
        gSaveBlock2Ptr->frontier.palacePrize = 0;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
#endif // siliconFrontier
}
