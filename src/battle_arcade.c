#include "global.h"
#include "battle.h"
#include "battle_arcade.h"
#include "field_specials.h"
#include "hexorb.h"
#include "give_native_item.h"
#include "silicon_battle_frontier.h"
#include "battle_dome.h"
#include "battle_pike.h"
#include "battle_records.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_transition.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_poison.h"
#include "field_weather.h"
#include "frontier_util.h"
#include "gba/defines.h"
#include "gba/macro.h"
#include "gba/types.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon_icon.h"
#include "random.h"
#include "scanline_effect.h"
#include "script.h"
#include "silicon_frontier_accessors.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "tv.h"
#include "window.h"
#include "constants/battle_frontier.h"
#include "constants/field_specials.h"
#include "constants/frontier_util.h"
#include "constants/hold_effects.h"
#include "constants/item.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/weather.h"

struct GameResult
{
    enum ArcadeImpactTypes impact;
    enum ArcadeEvents event:5;
};

struct GameBoardState
{
    MainCallback savedCallback;
    u8 loadState;
    enum ArcadeBoardModes gameMode;
    u16 timer;
    u8 cursorPosition;
    u8 spriteId[ARCADE_SPRITEID_COUNT];
    u8 cursorPaletteNum[2];
};

void BattleArcade_ResetCursorPositionOnSaveblock(void);
static void SetCursorPosition(u32 value);
static void SaveCursorPositionToSaveblock(void);
static u32 GetCursorPosition(void);
void BattleArcade_ResetCursorSpeed(void);
static void ClearCursorRandomMode(void);
void BattleArcade_GenerateItemsToBeGiven(void);
static u32 GenerateItemOrBerry(enum ArcadeEvents type);
static const enum Item (*GetCategoryGroups(u32 type))[ARCADE_ITEM_GROUP_SIZE];
static u32 GetCategorySize(u32 type);
static u32 GetGroupIdFromStreak(void);
static bool32 IsMonFainted(struct Pokemon *mon);
static bool32 DoesMonHaveStatus(struct Pokemon *mon);
u32 GetPerformancePoints(void);
void SetPerformancePoints(u32 points);
void BattleArcade_ResetPerformancePoints(void);
void CalculateAndSetPerformancePoints(void);
static u32 CalculatePerformancePoints(void);
void ArcadeBattleCleanup(void);
static void ResetWeatherPostBattle(void);
static void ReturnPartyToOwner(void);
static void ResetLevelsToOriginal(void);
void StartArcadeGameBoardFromOverworld(void);
void Task_OpenGameBoard(u8 taskId);
void GameBoard_Init(MainCallback callback);
static void GameBoard_SetupCB(void);
static bool8 GameBoard_InitBgs(void);
static bool32 BattleArcade_AllocTilemapBuffers(void);
static void GameBoard_HandleAndShowBgs(void);
static void SetScheduleShowBgs(u32 backgroundId);
static void GameBoard_FadeAndBail(void);
static void Task_GameBoardWaitFadeAndBail(u8 taskId);
static bool32 AreTilesOrTilemapEmpty(u32 backgroundId);
static void GameBoard_LoadSprites(void);
static bool8 GameBoard_LoadGraphics(void);
static void GameBoard_InitWindows(void);
static void GenerateGameBoard(void);
static void PrintEnemyParty(void);
static void PrintPlayerParty(void);
static void PrintPartyIcons(u32 side);
static u32 GetHorizontalPositionFromSide(u32 side);
static struct Pokemon *LoadSideParty(enum ArcadeImpactTypes impact);
static void PrintHelpBar(void);
static const u8 *GetHelpBarText(void);
static u32 GetGameBoardMode(void);
static void Task_GameBoardWaitFadeIn(u8 taskId);
static void Task_GameBoardMainInput(u8 taskId);
static void VBlankCB(void);
static void MainCB(void);
static void StartCountdown(void);
static void SetTimerForCountdown(void);
static void SetTimer(u32 value);
static void CalculatePanelPosition(u32 space, u32* x, u32* y);
static void Task_GameBoard_Countdown(u8 taskId);
static void PopulateEventSprites(void);
static u8 CreateEventSprite(u32 x, u32 y, u32 space);
static void StartGame(void);
static void SetTimerForGame(void);
static void InitCursorPositionFromSaveblock(void);
static void CreateGameBoardCursor(void);
static void SpriteCB_Cursor(struct Sprite *sprite);
static void ChangeCursorColor(struct Sprite *sprite);
static u32 ReturnNextCursorPalette(u32 paletteNum);
static void ChangeCursorSpritePosition(struct Sprite *sprite);
static void Task_GameBoard_Game(u8 taskId);
static u32 GetGameBoardTimer(void);
static void IncrementGameBoardMode(void);
static bool32 ShouldCursorMove(u32 timer);
u32 ReturnCursorWait(u32 speed);
static void ChangeCursorPosition(void);
static bool32 IsCursorInRandomMode(void);
static bool32 IsGameBoardTimerEmpty(void);
static void DecrementGameBoardTimer(void);
static void HandleFinishMode();
static void SetTimerForFinish(void);
static void SelectGameBoardSpace(enum ArcadeImpactTypes *impact, enum ArcadeEvents *event);
static void HandleGameBoardResult(enum ArcadeImpactTypes impact, enum ArcadeEvents event);
static void BufferImpactedName(u8 *dest, enum ArcadeImpactTypes impact);
static u32 GetImpactedTrainerId(enum ArcadeImpactTypes impact);
static void SetGameBoardToChosenEvent(enum ArcadeImpactTypes impact, enum ArcadeEvents event);
static void StoreEventToVar(enum ArcadeEvents event);
static void StoreImpactedSideToVar(enum ArcadeImpactTypes impact);
static void DestroyEventSprites(void);
static void Task_GameBoard_CleanUp(u8 taskId);
static void Task_GameBoardWaitFadeAndExitGracefully(u8 taskId);
static void GameBoard_FreeResources(void);
static u32 GenerateImpact(void);
static u32 ConvertPerformanceToImpactBracket(void);
static u32 GenerateEvent(enum ArcadeImpactTypes impact);
static bool32 IsEventValidDuringBattleOrStreak(enum ArcadeEvents event);
static bool32 IsEventValidDuringCurrentBattle(enum ArcadeEvents event);
static bool32 IsEventValidDuringCurrentStreak(enum ArcadeEvents event);
static u32 GetChallengeNumIndex(void);
static u32 GetChallengeNum(void);
static bool32 DoGameBoardResult(enum ArcadeEvents event, enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoLowerHP(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoPoison(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoParalyze(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoBurn(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoSleep(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoFreeze(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoStatusAilment(enum ArcadeImpactTypes impact, u32 status);
static void InitalizePartyIndex(u32 *newIndex);
static bool32 IsStatusSleepOrFreeze(u32 status);
static void ShufflePartyIndex(u32 *newIndex);
static bool32 BattleArcade_DoGiveBerry(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGiveItem(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGive(enum ArcadeImpactTypes impact, enum Item item);
static void BufferGiveString(enum Item item);
static bool32 BattleArcade_DoLevelUp(enum ArcadeImpactTypes impact);
static u32 CalculateAndSaveNewLevel(u32 origLevel);
static bool32 HaveMonsBeenSwapped(void);
static bool32 BattleArcade_DoSun(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoRain(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoSand(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoSnow(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoFog(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoWeather(u32 weather);
static bool32 BattleArcade_DoTrickRoom(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoSwap(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoSpeedUp(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoSpeedDown(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_ChangeSpeed(u32 mode);
static u32 GetCursorSpeed(void);
static void SetCursorSpeed(u32 speed);
static bool32 BattleArcade_DoRandom(enum ArcadeImpactTypes impact);
static void SetCursorRandomMode(void);
static bool32 BattleArcade_DoGiveBPSmall(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGiveBPBig(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoNoBattle(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoNoEvent(enum ArcadeImpactTypes impact);

static struct GameBoardState *sGameBoardState = NULL;
static u8 *sBgTilemapBuffer[BG_BOARD_COUNT] = {NULL};
static struct GameResult sGameBoard[ARCADE_GAME_BOARD_SPACES] = {{0}};

#define DEFINE_ARCADE_EVENT_ANIM(event) \
static const union AnimCmd sAnim_Panel_##event[] = \
{ \
    ANIMCMD_FRAME(ARCADE_PANEL_COUNTDOWN_3_FRAME, ARCADE_BOARD_COUNTDOWN_TIMER / 3), \
    ANIMCMD_FRAME(ARCADE_PANEL_COUNTDOWN_2_FRAME, ARCADE_BOARD_COUNTDOWN_TIMER / 3), \
    ANIMCMD_FRAME(ARCADE_PANEL_COUNTDOWN_1_FRAME, ARCADE_BOARD_COUNTDOWN_TIMER / 3), \
    ANIMCMD_FRAME(event * 16, 0), \
    ANIMCMD_END \
};

DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_LOWER_HP)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_POISON)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_PARALYZE)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_BURN)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SLEEP)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_FREEZE)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_GIVE_BERRY)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_GIVE_ITEM)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_LEVEL_UP)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SUN)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_RAIN)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SAND)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SNOW)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_FOG)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_TRICK_ROOM)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SWAP)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SPEED_UP)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SPEED_DOWN)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_RANDOM)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_GIVE_BP_SMALL)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_NO_BATTLE)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_GIVE_BP_BIG)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_NO_EVENT)

const struct ArcadeEventInfo arcadeEventInfo[ARCADE_EVENT_COUNT] =
{
    [ARCADE_EVENT_LOWER_HP] =
    {
        .name = COMPOUND_STRING("Lower HP"),
        .eventFunc = BattleArcade_DoLowerHP,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_LOWER_HP,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_POISON] =
    {
        .name = COMPOUND_STRING("Poison"),
        .eventFunc = BattleArcade_DoPoison,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_POISON,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_PARALYZE] =
    {
        .name = COMPOUND_STRING("Paralyze"),
        .eventFunc = BattleArcade_DoParalyze,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_PARALYZE,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_BURN] =
    {
        .name = COMPOUND_STRING("Burn"),
        .eventFunc = BattleArcade_DoBurn,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_BURN,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_SLEEP] =
    {
        .name = COMPOUND_STRING("Sleep"),
        .eventFunc = BattleArcade_DoSleep,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_SLEEP,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_FREEZE] =
    {
        .name = COMPOUND_STRING("Freeze"),
        .eventFunc = BattleArcade_DoFreeze,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_FREEZE,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = FALSE,
            [1] = FALSE,
            [2] = FALSE,
            [3] = FALSE,
            [4] = FALSE,
            [5] = FALSE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_GIVE_BERRY] =
    {
        .name = COMPOUND_STRING("Give Berry"),
        .eventFunc = BattleArcade_DoGiveBerry,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_BERRY,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_GIVE_ITEM] =
    {
        .name = COMPOUND_STRING("Give Item"),
        .eventFunc = BattleArcade_DoGiveItem,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_ITEM,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_LEVEL_UP] =
    {
        .name = COMPOUND_STRING("Level Up"),
        .eventFunc = BattleArcade_DoLevelUp,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_LEVEL_UP,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_SUN] =
    {
        .name = COMPOUND_STRING("Sun"),
        .eventFunc = BattleArcade_DoSun,
        .type = ARCADE_IMPACT_ALL,
        .animTable =sAnim_Panel_ARCADE_EVENT_SUN ,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_RAIN] =
    {
        .name = COMPOUND_STRING("Rain"),
        .eventFunc = BattleArcade_DoRain,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_RAIN,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_SAND] =
    {
        .name = COMPOUND_STRING("Sand"),
        .eventFunc = BattleArcade_DoSand,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SAND,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_SNOW] =
    {
        .name = COMPOUND_STRING("Snow"),
        .eventFunc = BattleArcade_DoSnow,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SNOW,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_FOG] =
    {
        .name = COMPOUND_STRING("Fog"),
        .eventFunc = BattleArcade_DoFog,
        .type = ARCADE_IMPACT_ALL,
        .animTable =sAnim_Panel_ARCADE_EVENT_FOG ,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_TRICK_ROOM] =
    {
        .name = COMPOUND_STRING("Trick Room"),
        .eventFunc = BattleArcade_DoTrickRoom,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_TRICK_ROOM,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
    [ARCADE_EVENT_SWAP] =
    {
        .name = COMPOUND_STRING("Swap"),
        .eventFunc = BattleArcade_DoSwap,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SWAP,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = FALSE,
        },
    },
    [ARCADE_EVENT_SPEED_UP] =
    {
        .name = COMPOUND_STRING("Speed Up"),
        .eventFunc = BattleArcade_DoSpeedUp,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SPEED_UP,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = FALSE,
            [5] = FALSE,
            [6] = FALSE,
            [7] = FALSE,
            [8] = FALSE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = FALSE,
        },
    },
    [ARCADE_EVENT_SPEED_DOWN] =
    {
        .name = COMPOUND_STRING("Speed Down"),
        .eventFunc = BattleArcade_DoSpeedDown,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SPEED_DOWN,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = FALSE,
        },
    },
    [ARCADE_EVENT_RANDOM] =
    {
        .name = COMPOUND_STRING("Random"),
        .eventFunc = BattleArcade_DoRandom,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_RANDOM,
        .streakEligibility =
        {
            [0] = FALSE,
            [1] = FALSE,
            [2] = FALSE,
            [3] = FALSE,
            [4] = FALSE,
            [5] = FALSE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = FALSE,
        },
    },
    [ARCADE_EVENT_GIVE_BP_SMALL] =
    {
        .name = COMPOUND_STRING("BP Small"),
        .eventFunc = BattleArcade_DoGiveBPSmall,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_BP_SMALL,
        .streakEligibility =
        {
            [0] = FALSE,
            [1] = FALSE,
            [2] = FALSE,
            [3] = FALSE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = FALSE,
            [2] = TRUE,
            [3] = FALSE,
            [4] = TRUE,
            [5] = FALSE,
            [6] = TRUE,
            [7] = FALSE,
            [8] = FALSE,
            [9] = FALSE,
        },
    },
    [ARCADE_EVENT_NO_BATTLE] =
    {
        .name = COMPOUND_STRING("No Battle"),
        .eventFunc = BattleArcade_DoNoBattle,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_NO_BATTLE,
        .streakEligibility =
        {
            [0] = FALSE,
            [1] = FALSE,
            [2] = FALSE,
            [3] = FALSE,
            [4] = FALSE,
            [5] = FALSE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = FALSE,
            [2] = TRUE,
            [3] = FALSE,
            [4] = TRUE,
            [5] = FALSE,
            [6] = TRUE,
            [7] = FALSE,
            [8] = TRUE,
            [9] = FALSE,
        },
    },
    [ARCADE_EVENT_GIVE_BP_BIG] =
    {
        .name = COMPOUND_STRING("Give BP Big"),
        .eventFunc = BattleArcade_DoGiveBPBig,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_BP_BIG,
        .streakEligibility =
        {
            [0] = FALSE,
            [1] = FALSE,
            [2] = FALSE,
            [3] = FALSE,
            [4] = FALSE,
            [5] = FALSE,
            [6] = FALSE,
            [7] = FALSE,
            [8] = FALSE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = FALSE,
            [2] = TRUE,
            [3] = FALSE,
            [4] = TRUE,
            [5] = FALSE,
            [6] = TRUE,
            [7] = FALSE,
            [8] = TRUE,
            [9] = FALSE,
        },
    },
    [ARCADE_EVENT_NO_EVENT] =
    {
        .name = COMPOUND_STRING("No Event"),
        .eventFunc = BattleArcade_DoNoEvent,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_NO_EVENT,
        .streakEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
        .battleEligibility =
        {
            [0] = TRUE,
            [1] = TRUE,
            [2] = TRUE,
            [3] = TRUE,
            [4] = TRUE,
            [5] = TRUE,
            [6] = TRUE,
            [7] = TRUE,
            [8] = TRUE,
            [9] = TRUE,
        },
    },
};

static const u32 sArcadePerformanceTable[IMPACT_PERFORMANCE_TABLE_SIZE][3] =
{
    [0] = { 8, 6 },
    [1] = { 6, 4 },
    [2] = { 4, 2 },
    [3] = { 0, 0 },
    [4] = { 0, 0 },
};

static const u8 sArcadeTurnPointTable[IMPACT_PERFORMANCE_TABLE_SIZE][2] =
{
    { 3, 10 },
    { 5,  6 },
    { 7,  4 },
    { 9,  2 },
    { 10, 0 },
};

void BattleArcade_ResetCursorPositionOnSaveblock(void)
{
    SetCursorPosition(0);
    SaveCursorPositionToSaveblock();
}

static void SetCursorPosition(u32 value)
{
    sGameBoardState->cursorPosition = value;
}

static void SaveCursorPositionToSaveblock(void)
{
    gSaveBlock2Ptr->frontier.arcadeCursorData.position = GetCursorPosition();
}

static u32 GetCursorPosition(void)
{
    return sGameBoardState->cursorPosition;
}

void BattleArcade_ResetCursorSpeed(void)
{
    gSaveBlock2Ptr->frontier.arcadeCursorData.speed = ARCADE_SPEED_DEFAULT;
}

static void ClearCursorRandomMode(void)
{
    gSaveBlock2Ptr->frontier.arcadeCursorData.isRandom = FALSE;
}

void BattleArcade_GenerateItemsToBeGiven(void)
{
    VarSet(VAR_ARCADE_BERRY,GenerateItemOrBerry(ARCADE_EVENT_GIVE_BERRY));
    VarSet(VAR_ARCADE_ITEM,GenerateItemOrBerry(ARCADE_EVENT_GIVE_ITEM));
}

static u32 GenerateItemOrBerry(enum ArcadeEvents type)
{
    u32 heldItem = ITEM_NONE;
    u32 maxGroupSize = GetCategorySize(type);
    u32 groupId = GetGroupIdFromStreak();
    const enum Item (*itemGroups)[ARCADE_ITEM_GROUP_SIZE] = GetCategoryGroups(type);

    do
    {
        heldItem = itemGroups[groupId][Random() % maxGroupSize];
    } while (heldItem == ITEM_NONE);

    return heldItem;
}

static u32 GetCategorySize(u32 type)
{
    return (type == ARCADE_EVENT_GIVE_ITEM) ? ARCADE_ITEM_GROUP_SIZE : ARCADE_ITEM_GROUP_SIZE;
}

static u32 GetGroupIdFromStreak(void)
{
    u32 challengeIndex = GetChallengeNumIndex();

    u8 groupToStreaks[] =
    {
        ARCADE_ITEM_GROUP_1,
        ARCADE_ITEM_GROUP_1,
        ARCADE_ITEM_GROUP_1,
        ARCADE_ITEM_GROUP_2,
        ARCADE_ITEM_GROUP_2,
        ARCADE_ITEM_GROUP_2,
        ARCADE_ITEM_GROUP_2,
        ARCADE_ITEM_GROUP_3,
        ARCADE_ITEM_GROUP_3,
        ARCADE_ITEM_GROUP_3,
    };

    return groupToStreaks[challengeIndex];
}

static const enum Item (*GetCategoryGroups(u32 type))[ARCADE_ITEM_GROUP_SIZE]
{
    static const enum Item gameBerries[ARCADE_ITEM_GROUP_COUNT][ARCADE_ITEM_GROUP_SIZE] =
    {
        [ARCADE_ITEM_GROUP_1] =
        {
            ITEM_CHERI_BERRY,
            ITEM_CHESTO_BERRY,
            ITEM_PECHA_BERRY,
            ITEM_RAWST_BERRY,
            ITEM_ASPEAR_BERRY,
            ITEM_PERSIM_BERRY,
            ITEM_SITRUS_BERRY,
            ITEM_LUM_BERRY,
        },
        [ARCADE_ITEM_GROUP_2] =
        {
            ITEM_PERSIM_BERRY,
            ITEM_SITRUS_BERRY,
            ITEM_LUM_BERRY,
        },
        [ARCADE_ITEM_GROUP_3] =
        {
            ITEM_PERSIM_BERRY,
            ITEM_SITRUS_BERRY,
            ITEM_LUM_BERRY,
            ITEM_LIECHI_BERRY,
            ITEM_GANLON_BERRY,
            ITEM_SALAC_BERRY,
            ITEM_PETAYA_BERRY,
            ITEM_APICOT_BERRY,
            ITEM_LANSAT_BERRY,
            ITEM_STARF_BERRY,
        },
    };

    static const enum Item gameItems[ARCADE_ITEM_GROUP_COUNT][ARCADE_ITEM_GROUP_SIZE] =
    {
        [ARCADE_ITEM_GROUP_1] =
        {
            ITEM_KINGS_ROCK,
            ITEM_QUICK_CLAW,
            ITEM_BRIGHT_POWDER,
            ITEM_FOCUS_BAND,
            ITEM_LEFTOVERS,
        },
        [ARCADE_ITEM_GROUP_2] =
        {
            ITEM_WHITE_HERB,
            ITEM_SHELL_BELL,
            ITEM_SCOPE_LENS,
        },
        [ARCADE_ITEM_GROUP_3] =
        {
            ITEM_FOCUS_BAND,
            ITEM_LEFTOVERS,
            ITEM_SCOPE_LENS,
            ITEM_CHOICE_BAND
        },
    };

    return (type == ARCADE_EVENT_GIVE_ITEM) ? gameItems : gameBerries;
}

static bool32 IsMonFainted(struct Pokemon *mon)
{
    return (GetMonData(mon,MON_DATA_HP) <= 0);
}

static bool32 DoesMonHaveStatus(struct Pokemon *mon)
{
    return (GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS)) != AILMENT_NONE);
}

u32 GetPerformancePoints(void)
{
    return VarGet(VAR_ARCADE_PERFORMANCE_POINTS);
}

void SetPerformancePoints(u32 points)
{
    VarSet(VAR_ARCADE_PERFORMANCE_POINTS,points);
}

void BattleArcade_ResetPerformancePoints(void)
{
    SetPerformancePoints(0);
}

void CalculateAndSetPerformancePoints(void)
{
    SetPerformancePoints(CalculatePerformancePoints());
}

static u32 CalculatePerformancePoints(void)
{
    u32 faintedCount = 0;
    u32 statusCount = 0;
    u32 points = 0;

    u32 maxSize = SiliconFroniter_GetPartySizeFromCurrentChallenge();

    for (u32 partyIndex = 0; partyIndex < maxSize; partyIndex++)
    {
        struct Pokemon *playerMon = &gParties[B_TRAINER_PLAYER][partyIndex];

        enum Species species = GetMonData(playerMon, MON_DATA_SPECIES_OR_EGG);
        if (species == SPECIES_NONE || species == SPECIES_EGG)
            continue;

        if (IsMonFainted(playerMon))
            faintedCount++;

        if (DoesMonHaveStatus(playerMon))
            statusCount++;
    }

    for (u32 partyIndex = 0; partyIndex < maxSize; partyIndex++)
    {
        if (SiliconFroniter_IsCurrentChallengeTypeMulti() == FALSE)
            break;

        struct Pokemon *playerMon = &gParties[B_TRAINER_PARTNER][partyIndex];

        enum Species species = GetMonData(playerMon, MON_DATA_SPECIES_OR_EGG);
        if (species == SPECIES_NONE || species == SPECIES_EGG)
            continue;

        if (IsMonFainted(playerMon))
            faintedCount++;

        if (DoesMonHaveStatus(playerMon))
            statusCount++;
    }

    points += sArcadePerformanceTable[statusCount][0];
    points += sArcadePerformanceTable[faintedCount][1];

    u32 turn = gBattleResults.battleTurnCounter;
    for (u32 tableIndex = 0; tableIndex < IMPACT_PERFORMANCE_TABLE_SIZE; tableIndex++)
    {
        if (turn < sArcadeTurnPointTable[tableIndex][0])
        {
            points += sArcadeTurnPointTable[tableIndex][1];
            break;
        }
    }
    return points;
}

void ArcadeBattleCleanup(void)
{
    ResetWeatherPostBattle();
    ReturnPartyToOwner();
    ResetLevelsToOriginal();
    SiliconFrontier_ResetSketchedMoves();
    CalculateAndSetPerformancePoints();
}

static void ResetWeatherPostBattle(void)
{
    BattleArcade_DoWeather((gMapHeader.weather));
}

static void ReturnPartyToOwner(void)
{
    if (!HaveMonsBeenSwapped())
        return;

    BattleArcade_DoSwap(0);
}

static void ResetLevelsToOriginal(void)
{
    LevelAllPokemonToX(B_TRAINER_PLAYER,SILICON_FRONTIER_LEVEL);
    LevelAllPokemonToX(B_TRAINER_PARTNER,SILICON_FRONTIER_LEVEL);
}

void StartArcadeGameBoardFromOverworld(void)
{
    CreateTask(Task_OpenGameBoard, 0);
}

// Arcade Game Board Front End

static const struct BgTemplate sGameBoardBgTemplates[] =
{
    {
        .bg = BG_BOARD_HELP_BAR,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = BG_BOARD_EVENTS,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 1
    },
    {
        .bg = BG_BOARD_BACKGROUND,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
    {
        .bg = BG_BOARD_BACKBOARD,
        .charBaseIndex = 1,
        .mapBaseIndex = 28,
        .priority = 3
    },
};

static const struct WindowTemplate sGameBoardWinTemplates[] =
{
    [WIN_BOARD_HELP_BAR] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const u8 sGameBoardWindowFontColors[3] =
{
    0,  1,  0,
};

static const u32 sBackgroundTiles[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/background.png", ".4bpp.smol");
static const u32 sBackgroundTilemap[] = INCBIN_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/background.bin.smolTM");

static const u32 sLogobackgroundTiles[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/logobackground.png", ".4bpp.smol");
static const u32 sLogobackgroundTilemap[] = INCBIN_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/logobackground.bin.smolTM");

const u16 sGameBoardPalette_Pal[] = INCBIN_U16("graphics/battle_frontier/battle_arcade/game/palettes/background.gbapal");
const u16 sGameBoardText_Pal[] = INCBIN_U16("graphics/battle_frontier/battle_arcade/game/palettes/text.gbapal");

void Task_OpenGameBoard(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    CleanupOverworldWindowsAndTilemaps();
    GameBoard_Init(CB2_ReturnToFieldContinueScript);
    DestroyTask(taskId);
}

void GameBoard_Init(MainCallback callback)
{
    sGameBoardState = AllocZeroed(sizeof(struct GameBoardState));

    if (sGameBoardState == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sGameBoardState->loadState = 0;
    sGameBoardState->savedCallback = callback;

    SetMainCallback2(GameBoard_SetupCB);
}

static void GameBoard_SetupCB(void)
{
    switch (gMain.state)
    {
        case 0:
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            FreeAllSpritePalettes();
            ResetPaletteFade();
            ResetSpriteData();
            ResetTasks();
            gMain.state++;
            break;
        case 2:
            if (GameBoard_InitBgs())
            {
                sGameBoardState->loadState = 0;
                gMain.state++;
            }
            else
            {
                GameBoard_FadeAndBail();
                return;
            }
            break;
        case 3:
            if (GameBoard_LoadGraphics() == TRUE)
                gMain.state++;
            break;
        case 4:
            GameBoard_InitWindows();
            gMain.state++;
            break;
        case 5:
            FreeMonIconPalettes();
            LoadMonIconPalettes();
            GenerateGameBoard();
            PrintEnemyParty();
            PrintPlayerParty();
            PrintHelpBar();
            CreateTask(Task_GameBoardWaitFadeIn, 0);
            gMain.state++;
            break;
        case 6:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            gMain.state++;
            break;
        case 7:
            SetVBlankCallback(VBlankCB);
            SetMainCallback2(MainCB);
            break;
    }
}

static bool8 GameBoard_InitBgs(void)
{
    ResetAllBgsCoordinates();

    if (!BattleArcade_AllocTilemapBuffers())
        return FALSE;
    GameBoard_HandleAndShowBgs();

    return TRUE;
}

static bool32 BattleArcade_AllocTilemapBuffers(void)
{
    u32 backgroundId;

    for (backgroundId = 0; backgroundId < BG_BOARD_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(ARCADE_TILEMAP_BUFFER_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;
    }
    return TRUE;
}

static void GameBoard_HandleAndShowBgs(void)
{
    u32 backgroundId;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sGameBoardBgTemplates, NELEMS(sGameBoardBgTemplates));

    for (backgroundId = 0; backgroundId < BG_BOARD_COUNT; backgroundId++)
        SetScheduleShowBgs(backgroundId);
}

static void SetScheduleShowBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
    ShowBg(backgroundId);
}

static void GameBoard_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_GameBoardWaitFadeAndBail, 0);

    SetVBlankCallback(VBlankCB);
    SetMainCallback2(MainCB);
}

static void Task_GameBoardWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sGameBoardState->savedCallback);
        GameBoard_FreeResources();
        DestroyTask(taskId);
    }
}

static const u32* const sArcadeTilesLUT[] =
{
    [BG_BOARD_HELP_BAR] = NULL,
    [BG_BOARD_EVENTS] = NULL,
    [BG_BOARD_BACKGROUND] = sLogobackgroundTiles,
    [BG_BOARD_BACKBOARD] = sBackgroundTiles,
};

static const u32* const sArcadeTilemapLUT[] =
{
    [BG_BOARD_HELP_BAR] = NULL,
    [BG_BOARD_EVENTS] = NULL,
    [BG_BOARD_BACKGROUND] = sLogobackgroundTilemap,
    [BG_BOARD_BACKBOARD] = sBackgroundTilemap,
};

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sArcadeTilesLUT[backgroundId] == NULL || sArcadeTilemapLUT[backgroundId] == NULL);
}

static const struct ArcadeSpriteSheet sArcadeSpriteSheets[] =
{
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/panels/events.4bpp"),
            .size = TILE_OFFSET_4BPP(416),
            .tag = ARCADE_SPRITETAG_PANELS,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/panels/events.gbapal"),
            .tag = ARCADE_PALTAG_PANELS,
        },
    },
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/cursor.4bpp"),
            .size = TILE_OFFSET_4BPP(16),
            .tag = ARCADE_SPRITETAG_CURSOR,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/cursor.gbapal"),
            .tag = ARCADE_PALTAG_CURSOR,
        },
    },
    {
        {
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/palettes/event_player.gbapal"),
            .tag = ARCADE_PALTAG_PLAYER,
        },
    },
    {
        {
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/palettes/event_opponent.gbapal"),
            .tag = ARCADE_PALTAG_OPPONENT,
        },
    },
    /*
    {
        .palette =
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/shadow.gbapal"),
            .tag = ARCADE_PALTAG_SHADOW,
        },
    },
    {
        .palette =
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/shadow.gbapal"),
            .tag = ARCADE_PALTAG_SHADOW,
        },
    },
    */
};

static void GameBoard_LoadSprites(void)
{
    for (enum ArcadeSpriteIds spriteId = 0; spriteId < ARRAY_COUNT(sArcadeSpriteSheets); spriteId++)
    {
        if (sArcadeSpriteSheets[spriteId].spriteSheet.tag != 0)
        {
            LoadSpriteSheet(&sArcadeSpriteSheets[spriteId].spriteSheet);
        }

        if (sArcadeSpriteSheets[spriteId].palette.tag != 0)
        {
            u32 palId = LoadSpritePalette(&sArcadeSpriteSheets[spriteId].palette);

            if (sArcadeSpriteSheets[spriteId].palette.tag == ARCADE_PALTAG_PLAYER)
                sGameBoardState->cursorPaletteNum[0] = palId;
            else if (sArcadeSpriteSheets[spriteId].palette.tag == ARCADE_PALTAG_OPPONENT)
                sGameBoardState->cursorPaletteNum[1] = palId;
        }
    }
}

static bool8 GameBoard_LoadGraphics(void)
{
    switch (sGameBoardState->loadState)
    {
        case 0:
            ResetTempTileDataBuffers();

            for (u32 backgroundId = BG_BOARD_BACKGROUND; backgroundId < BG_BOARD_COUNT; backgroundId++)
            {
                if (AreTilesOrTilemapEmpty(backgroundId))
                    continue;

                DecompressAndLoadBgGfxUsingHeap(backgroundId, sArcadeTilesLUT[backgroundId], 0, 0, 0);
                CopyToBgTilemapBuffer(backgroundId, sArcadeTilemapLUT[backgroundId],0,0);
            }
            sGameBoardState->loadState++;
            break;
        case 1:
            GameBoard_LoadSprites();
            sGameBoardState->loadState++;
            break;
        case 2:
            LoadPalette(sGameBoardPalette_Pal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
            LoadPalette(sGameBoardText_Pal, BG_PLTT_ID(1), PLTT_SIZE_4BPP);
            sGameBoardState->loadState++;
        default:
            sGameBoardState->loadState = 0;
            return TRUE;
    }
    return FALSE;
}

static void GameBoard_InitWindows(void)
{
    u32 windowId;
    InitWindows(sGameBoardWinTemplates);

    DeactivateAllTextPrinters();

    ScheduleBgCopyTilemapToVram(0);

    for (windowId = 0; windowId < WIN_BOARD_COUNT; windowId++)
    {
        FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

static void GenerateGameBoard(void)
{
    for (u32 space = 0; space < ARCADE_GAME_BOARD_SPACES; space++)
    {
        sGameBoard[space].impact = GenerateImpact();
        sGameBoard[space].event = GenerateEvent(sGameBoard[space].impact);
    }
}

static void PrintEnemyParty(void)
{
    PrintPartyIcons(ARCADE_IMPACT_OPPONENT);
}

static void PrintPlayerParty(void)
{
    PrintPartyIcons(ARCADE_IMPACT_PLAYER);
}

static void PrintPartyIcons(u32 side)
{
    u32 x = GetHorizontalPositionFromSide(side);
    u32 y = 33;
    struct Pokemon *party = LoadSideParty(side);
    u32 structSpriteId = (side == ARCADE_IMPACT_OPPONENT) ? ARCADE_SPRITEID_OPPONENT_SIDE_MON_0 : ARCADE_SPRITEID_PLAYER_SIDE_MON_0;

    for (u32 i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
            break;

        u32 spriteId = CreateMonIcon(GetMonData(&party[i], MON_DATA_SPECIES),SpriteCallbackDummy, x, y, 4, GetMonData(&party[i],MON_DATA_PERSONALITY));
        sGameBoardState->spriteId[structSpriteId] = spriteId;
        gSprites[spriteId].oam.priority = 0;

        y += 30;
        structSpriteId++;
    }
}

static u32 GetHorizontalPositionFromSide(u32 side)
{
    return (side == ARCADE_IMPACT_OPPONENT) ? 215 : 22;
}

static struct Pokemon *LoadSideParty(enum ArcadeImpactTypes impact)
{
    if (impact == ARCADE_IMPACT_PLAYER)
        return gParties[B_TRAINER_PLAYER];
    else
        return gParties[B_TRAINER_OPPONENT_A];
}

static void PrintHelpBar(void)
{
    u32 windowId = WIN_BOARD_HELP_BAR;
    u32 fontId = FONT_NARROW;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AddTextPrinterParameterized4(windowId, fontId, 4, 1, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGameBoardWindowFontColors, TEXT_SKIP_DRAW, GetHelpBarText());

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static const u8 *GetHelpBarText(void)
{
    static const u8 sText_HelpBarStart[] =_("{A_BUTTON} Start Game");
    static const u8 sText_HelpBarFinish[] =_("{A_BUTTON} Select Event");

    switch (GetGameBoardMode())
    {
        case ARCADE_BOARD_MODE_WAIT:
            return sText_HelpBarStart;
        case ARCADE_BOARD_MODE_GAME_START:
            return sText_HelpBarFinish;
        default:
            return COMPOUND_STRING("");
    }
}

static u32 GetGameBoardMode(void)
{
    return sGameBoardState->gameMode;
}

static void Task_GameBoardWaitFadeIn(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    gTasks[taskId].func = Task_GameBoardMainInput;
}

static void Task_GameBoardMainInput(u8 taskId)
{
    if (!JOY_NEW(A_BUTTON))
        return;

    switch (GetGameBoardMode())
    {
        case ARCADE_BOARD_MODE_WAIT:
            StartCountdown();
            break;
        case ARCADE_BOARD_MODE_GAME_START:
            PlaySE(SE_SELECT);
            HandleFinishMode();
            break;
        default:
            return;
    }
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void StartCountdown(void)
{
    HideBg(BG_BOARD_BACKGROUND);
    IncrementGameBoardMode();
    PlaySE(SE_NOTE_C);
    SetTimerForCountdown();
    PrintHelpBar();
    PopulateEventSprites();
    CreateTask(Task_GameBoard_Countdown, 0);
}

static void SetTimerForCountdown(void)
{
    SetTimer(ARCADE_BOARD_COUNTDOWN_TIMER);
}

static void SetTimer(u32 value)
{
    sGameBoardState->timer = value;
}

static void CalculatePanelPosition(u32 space, u32* x, u32* y)
{
    u32 rowIndex = space / ARCADE_GAME_BOARD_COLUMNS;
    u32 columnIndex = space % ARCADE_GAME_BOARD_COLUMNS;
    *x = 65 + columnIndex * 32;
    *y = 17 + rowIndex * 32;
}

static void Task_GameBoard_Countdown(u8 taskId)
{
    DecrementGameBoardTimer();

    switch(GetGameBoardTimer())
    {
        case ARCADE_COUNTDOWN_SHOW_FRAMES_2:
        case ARCADE_COUNTDOWN_SHOW_FRAMES_1:
            PlaySE(SE_NOTE_D);
            IncrementGameBoardMode();
            break;
        case 0:
            PlaySE(SE_NOTE_E);
            IncrementGameBoardMode();
            PrintHelpBar();
            StartGame();
            DestroyTask(taskId);
            break;
        default:
            break;
    }
}

static void PopulateEventSprites(void)
{
    u32 x, y;

    for (enum ArcadeSpriteIds space = ARCADE_SPRITEID_EVENT_0; space < (ARCADE_SPRITEID_EVENT_15 + 1); space++)
    {
        CalculatePanelPosition(space,&x,&y);
        sGameBoardState->spriteId[space] = CreateEventSprite(x, y, space);

        if ((GetGameBoardMode() != ARCADE_BOARD_MODE_GAME_FINISH) && (GetGameBoardMode() != ARCADE_BOARD_MODE_CLEANUP))
            continue;

        u32 spriteId = sGameBoardState->spriteId[space];
        SeekSpriteAnim(&gSprites[spriteId],3);
    }
}

static u8 CreateEventSprite(u32 x, u32 y, u32 space)
{
    u16 TileTag = ARCADE_SPRITETAG_PANELS;
    enum ArcadeEvents event = sGameBoard[space].event;
    enum ArcadeImpactTypes impact = (sGameBoard[space].impact == ARCADE_IMPACT_PLAYER) ? ARCADE_IMPACT_PLAYER : ARCADE_IMPACT_OPPONENT;

    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag = TileTag;
    TempSpriteTemplate.paletteTag = ARCADE_PALTAG_OPPONENT + impact;
    TempSpriteTemplate.callback = SpriteCallbackDummy;
    TempSpriteTemplate.anims = &arcadeEventInfo[event].animTable;

    u32 spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
    gSprites[spriteId].oam.priority = 0;

    return spriteId;
}

static void StartGame(void)
{
    SetTimerForGame();
    InitCursorPositionFromSaveblock();
    CreateGameBoardCursor();
    CreateTask(Task_GameBoard_Game, 0);
}

static void SetTimerForGame(void)
{
    SetTimer(ARCADE_BOARD_GAME_TIMER);
}

static void InitCursorPositionFromSaveblock(void)
{
    sGameBoardState->cursorPosition = gSaveBlock2Ptr->frontier.arcadeCursorData.position;
}

static void CreateGameBoardCursor(void)
{
    u16 TileTag = ARCADE_SPRITETAG_CURSOR;
    u32 spriteId;

    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = TileTag;
    TempSpriteTemplate.paletteTag = ARCADE_PALTAG_CURSOR;
    TempSpriteTemplate.callback = SpriteCB_Cursor;

    spriteId = CreateSprite(&TempSpriteTemplate,45,7, 0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
    gSprites[spriteId].oam.priority = 1;
}

static void SpriteCB_Cursor(struct Sprite *sprite)
{
    ChangeCursorColor(sprite);
    ChangeCursorSpritePosition(sprite);
}

static void ChangeCursorColor(struct Sprite *sprite)
{
    if (GetGameBoardTimer() % ARCADE_CURSOR_COLOR_CHANGE_FRAMES != 0)
        return;

    sprite->oam.paletteNum = ReturnNextCursorPalette(sprite->oam.paletteNum);
}

static u32 ReturnNextCursorPalette(u32 paletteNum)
{
    if (paletteNum == sGameBoardState->cursorPaletteNum[1])
        return sGameBoardState->cursorPaletteNum[0];
    else
        return sGameBoardState->cursorPaletteNum[1];
}

static void ChangeCursorSpritePosition(struct Sprite *sprite)
{
    u32 x, y;
    CalculatePanelPosition(GetCursorPosition(),&x,&y);
    sprite->x2 = x - 50;
    sprite->y2 = y - 10;
}

static void Task_GameBoard_Game(u8 taskId)
{
    u32 timer = GetGameBoardTimer();

    if (GetGameBoardMode() > ARCADE_BOARD_MODE_GAME_START)
        HandleFinishMode();
    else if (IsGameBoardTimerEmpty())
        IncrementGameBoardMode();
    else if (ShouldCursorMove(timer))
        ChangeCursorPosition();

    DecrementGameBoardTimer();
}

static u32 GetGameBoardTimer(void)
{
    return sGameBoardState->timer;
}

static void IncrementGameBoardMode(void)
{
    sGameBoardState->gameMode++;
}

static bool32 ShouldCursorMove(u32 timer)
{
    u32 cursorWaitValue = ReturnCursorWait(GetCursorSpeed());

    if (cursorWaitValue == 0)
        return TRUE;

    return (timer % cursorWaitValue == 0);
}

u32 ReturnCursorWait(u32 speed)
{
    static const u32 cursorWaitTable[ARCADE_SPEED_COUNT] =
    {
        [ARCADE_SPEED_LEVEL_0] = ARCADE_CURSOR_WAIT_LEVEL_0,
        [ARCADE_SPEED_LEVEL_1] = ARCADE_CURSOR_WAIT_LEVEL_1,
        [ARCADE_SPEED_LEVEL_2] = ARCADE_CURSOR_WAIT_LEVEL_2,
        [ARCADE_SPEED_LEVEL_3] = ARCADE_CURSOR_WAIT_LEVEL_3,
        [ARCADE_SPEED_DEFAULT] = ARCADE_CURSOR_WAIT_LEVEL_4,
        [ARCADE_SPEED_LEVEL_5] = ARCADE_CURSOR_WAIT_LEVEL_5,
        [ARCADE_SPEED_LEVEL_6] = ARCADE_CURSOR_WAIT_LEVEL_6,
        [ARCADE_SPEED_LEVEL_7] = ARCADE_CURSOR_WAIT_LEVEL_7,
    };

    return cursorWaitTable[speed];
}

static void ChangeCursorPosition(void)
{
    u32 newPosition = GetCursorPosition() + 1;

    if (IsCursorInRandomMode())
    {
        SetCursorPosition(RandomUniform(RNG_RANDOM_SILICON_FRONTIER_ARCADE_SPACE,0,(ARCADE_GAME_BOARD_SPACES - 1)));
    }
    else
    {
        if (newPosition >= ARCADE_GAME_BOARD_SPACES)
            SetCursorPosition(0);
        else
            SetCursorPosition(newPosition);
    }
    PlaySE(SE_CONTEST_HEART);
}

static bool32 IsCursorInRandomMode(void)
{
    return (gSaveBlock2Ptr->frontier.arcadeCursorData.isRandom == TRUE);
}

static bool32 IsGameBoardTimerEmpty(void)
{
    return (GetGameBoardTimer() == 0);
}

static void DecrementGameBoardTimer(void)
{
    sGameBoardState->timer--;
}

static void HandleFinishMode()
{
    enum ArcadeImpactTypes impact = 0;
    enum ArcadeEvents event = 0;

    PlaySE(SE_RG_HELP_OPEN);
    IncrementGameBoardMode();
    DestroyTask(FindTaskIdByFunc(Task_GameBoard_Game));
    PrintHelpBar();
    SelectGameBoardSpace(&impact,&event);
    ClearCursorRandomMode();
    HandleGameBoardResult(impact,event);
    SaveCursorPositionToSaveblock();
    DestroyEventSprites();
    PopulateEventSprites();
    SetTimerForFinish();
    CreateTask(Task_GameBoard_CleanUp,0);
}

static void SetTimerForFinish(void)
{
    SetTimer(ARCADE_BOARD_FINISH_TIMER);
}

static void SelectGameBoardSpace(enum ArcadeImpactTypes *impact, enum ArcadeEvents *event)
{
    u32 space = GetCursorPosition();

    *impact = sGameBoard[space].impact;
    *event = sGameBoard[space].event;
}

static void HandleGameBoardResult(enum ArcadeImpactTypes impact, enum ArcadeEvents event)
{
    VarSet(LOCAL_VAR_GAME_BOARD_SUCCESS,DoGameBoardResult(event,impact));
    BufferImpactedName(gStringVar1,impact);

    SetGameBoardToChosenEvent(impact,event);
    StoreEventToVar(event);
    StoreImpactedSideToVar(impact);
}

static void BufferImpactedName(u8 *dest, enum ArcadeImpactTypes impact)
{
    if (impact == ARCADE_IMPACT_PLAYER)
        StringCopy_PlayerName(dest, gSaveBlock2Ptr->playerName);
    else
        GetFrontierTrainerName(dest, GetImpactedTrainerId(impact));
}

static u32 GetImpactedTrainerId(enum ArcadeImpactTypes impact)
{
    return (impact == ARCADE_IMPACT_PLAYER) ? TRAINER_PLAYER : TRAINER_BATTLE_PARAM.opponentA;
}

static void SetGameBoardToChosenEvent(enum ArcadeImpactTypes impact, enum ArcadeEvents event)
{
    u32 i;
    for (i = 0; i < ARCADE_GAME_BOARD_SPACES; i++)
    {
        sGameBoard[i].impact = impact;
        sGameBoard[i].event = event;
    }
}

static void StoreEventToVar(enum ArcadeEvents event)
{
    VarSet(LOCAL_VAR_GAME_BOARD_EVENT,event);
}

static void StoreImpactedSideToVar(enum ArcadeImpactTypes impact)
{
    VarSet(LOCAL_VAR_GAME_BOARD_IMPACT,impact);
}

static void DestroyEventSprites(void)
{
    u32 space;

    for (space = 0; space < ARCADE_GAME_BOARD_SPACES; space++)
    {
        DestroySpriteAndFreeResources(&gSprites[sGameBoardState->spriteId[space]]);
        sGameBoardState->spriteId[space] = 0;
    }
}

static void Task_GameBoard_CleanUp(u8 taskId)
{
    DecrementGameBoardTimer();

    if (!IsGameBoardTimerEmpty())
        return;

    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);

    gTasks[taskId].func = Task_GameBoardWaitFadeAndExitGracefully;
}

static void Task_GameBoardWaitFadeAndExitGracefully(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sGameBoardState->savedCallback);
        GameBoard_FreeResources();
        DestroyTask(taskId);
    }
}

static void GameBoard_FreeResources(void)
{
    u32 backgroundId;

    if (sGameBoardState != NULL)
    {
        Free(sGameBoardState);
    }

    for (backgroundId = 0; backgroundId < BG_BOARD_COUNT; backgroundId++)
    {
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
    }

    FreeAllWindowBuffers();
    ResetSpriteData();
}

static u32 GenerateImpact(void)
{
    u16 ImpactTable[ARCADE_PERFORMANCE_BRACKET_COUNT][ARCADE_IMPACT_COUNT] =
    {
        [ARCADE_PERFORMANCE_BRACKET_0_4] =
        {
            [ARCADE_IMPACT_OPPONENT] = 10,
            [ARCADE_IMPACT_PLAYER]   = 75,
            [ARCADE_IMPACT_ALL]      = 10,
            [ARCADE_IMPACT_SPECIAL]  = 5,
        },
        [ARCADE_PERFORMANCE_BRACKET_5_10] =
        {
            [ARCADE_IMPACT_OPPONENT] = 25,
            [ARCADE_IMPACT_PLAYER]   = 40,
            [ARCADE_IMPACT_ALL]      = 30,
            [ARCADE_IMPACT_SPECIAL]  = 5,
        },
        [ARCADE_PERFORMANCE_BRACKET_11_15] =
        {
            [ARCADE_IMPACT_OPPONENT] = 30,
            [ARCADE_IMPACT_PLAYER]   = 30,
            [ARCADE_IMPACT_ALL]      = 35,
            [ARCADE_IMPACT_SPECIAL]  = 5,
        },
        [ARCADE_PERFORMANCE_BRACKET_16_20] =
        {
            [ARCADE_IMPACT_OPPONENT] = 35,
            [ARCADE_IMPACT_PLAYER]   = 20,
            [ARCADE_IMPACT_ALL]      = 30,
            [ARCADE_IMPACT_SPECIAL]  = 15,
        },
        [ARCADE_PERFORMANCE_BRACKET_21_PLUS] =
        {
            [ARCADE_IMPACT_OPPONENT] = 15,
            [ARCADE_IMPACT_PLAYER]   = 15,
            [ARCADE_IMPACT_ALL]      = 40,
            [ARCADE_IMPACT_SPECIAL]  = 30,
        },
    };

    enum ArcadeImpactTypes impactBracket = ConvertPerformanceToImpactBracket();

    u32 sum = 0;
    for (u32 index = 0; index < ARCADE_IMPACT_COUNT; index++)
        sum += ImpactTable[impactBracket][index];

    return RandomWeightedArray(RNG_NONE,sum,ARCADE_IMPACT_COUNT,ImpactTable[impactBracket]);
}

static u32 ConvertPerformanceToImpactBracket(void)
{
    u32 performancePoints = GetPerformancePoints();

    return performancePoints <= 4 ? ARCADE_PERFORMANCE_BRACKET_0_4 :
        performancePoints <= 10 ? ARCADE_PERFORMANCE_BRACKET_5_10 :
        performancePoints <= 15 ? ARCADE_PERFORMANCE_BRACKET_11_15 :
        performancePoints <= 20 ? ARCADE_PERFORMANCE_BRACKET_16_20 :
        ARCADE_PERFORMANCE_BRACKET_21_PLUS;
}

static u32 GenerateEvent(enum ArcadeImpactTypes impact)
{
    u16 eventTable[ARCADE_EVENT_COUNT];
    u32 sum = 0;

    for (enum ArcadeEvents event = 0; event < ARCADE_EVENT_COUNT; event++)
    {
        eventTable[event] = FALSE;

        if ((impact == ARCADE_IMPACT_SPECIAL) || (impact == ARCADE_IMPACT_ALL))
        {
            if ((arcadeEventInfo[event].type) != impact)
                continue;
        }

        if (impact == ARCADE_IMPACT_OPPONENT || impact == ARCADE_IMPACT_PLAYER)
        {
            if (arcadeEventInfo[event].type != ARCADE_IMPACT_EITHER_SIDE)
                continue;
        }

        bool32 valid = IsEventValidDuringBattleOrStreak(event);

        sum += valid;
        eventTable[event] = valid;
    }

    return RandomWeightedArray(RNG_NONE,sum,ARCADE_EVENT_COUNT,eventTable);
}

static bool32 IsEventValidDuringBattleOrStreak(enum ArcadeEvents event)
{
    if (IsEventValidDuringCurrentStreak(event) == FALSE)
        return FALSE;

    if (IsEventValidDuringCurrentBattle(event) == FALSE)
        return FALSE;

    return TRUE;
}

static bool32 IsEventValidDuringCurrentBattle(enum ArcadeEvents event)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();
    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);

    return (arcadeEventInfo[event].battleEligibility[currentStreak % SILICON_FRONTIER_STREAK_LENGTH_BOSS]);
}

static bool32 IsEventValidDuringCurrentStreak(enum ArcadeEvents event)
{
    return arcadeEventInfo[event].streakEligibility[GetChallengeNumIndex()];
}

static u32 GetChallengeNumIndex(void)
{
    u32 challengeNum = GetChallengeNum();

    if (challengeNum >= ARCADE_STREAK_NUM_MAX)
        return (ARCADE_STREAK_NUM_MAX - 1);
    else
        return challengeNum;
}

static u32 GetChallengeNum(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);

    return (currentStreak / SILICON_FRONTIER_STREAK_LENGTH_BOSS);
}

// Arcade Game Board Back End Resolution
static bool32 DoGameBoardResult(enum ArcadeEvents event, enum ArcadeImpactTypes impact)
{
    if (arcadeEventInfo[event].eventFunc == NULL)
        return TRUE;

    return arcadeEventInfo[event].eventFunc(impact);
}

static bool32 BattleArcade_DoLowerHP(enum ArcadeImpactTypes impact)
{
    struct Pokemon *party = LoadSideParty(impact);

    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
            break;

        u32 maxHP = GetMonData(&party[i], MON_DATA_MAX_HP);
        u32 reducedHP = maxHP - (maxHP * 200 / 1000);
        SetMonData(&party[i], MON_DATA_HP, &reducedHP);
    }
    return TRUE;
}

static bool32 BattleArcade_DoPoison(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_TOXIC_POISON);
}
static bool32 BattleArcade_DoParalyze(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_PARALYSIS);
}
static bool32 BattleArcade_DoBurn(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_BURN);
}
static bool32 BattleArcade_DoSleep(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_SLEEP);
}
static bool32 BattleArcade_DoFreeze(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_FREEZE);
}

static bool32 BattleArcade_DoStatusAilment(enum ArcadeImpactTypes impact, u32 status)
{
    struct Pokemon *party = LoadSideParty(impact);
    enum ArcadeImpactTypes impactedCount = 0;
    u32 newIndex[MAX_FRONTIER_PARTY_SIZE];

    InitalizePartyIndex(newIndex);

    if (IsStatusSleepOrFreeze(status))
        ShufflePartyIndex(newIndex);

    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &party[newIndex[i]];

        if (!GetMonData(mon,MON_DATA_SANITY_HAS_SPECIES))
            continue;

        if (DoesAbilityPreventStatus(mon, status))
            continue;

        if (Hexorb_DoesTypeBlockStatus(GetMonData(mon,MON_DATA_SPECIES), 0, status))
            continue;

        if (Hexorb_DoesTypeBlockStatus(GetMonData(mon,MON_DATA_SPECIES), 1, status))
            continue;

        SetMonData(mon, MON_DATA_STATUS, &status);
        impactedCount++;

        if (!IsStatusSleepOrFreeze(status))
            continue;

        return TRUE;
    }
    return (impactedCount > 0);
}

static void InitalizePartyIndex(u32 *newIndex)
{
    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        newIndex[i] = i;
}

static bool32 IsStatusSleepOrFreeze(u32 status)
{
    return ((status == STATUS1_FREEZE) || (status == STATUS1_SLEEP));
}

static void ShufflePartyIndex(u32 *newIndex)
{
    u32 temp;

    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        SWAP(newIndex[i], newIndex[Random() % (i +1)], temp);
}

static bool32 BattleArcade_DoGiveBerry(enum ArcadeImpactTypes impact)
{
    enum Item item = VarGet(VAR_ARCADE_BERRY);
    return BattleArcade_DoGive(impact, item);
}

static bool32 BattleArcade_DoGiveItem(enum ArcadeImpactTypes impact)
{
    enum Item item = VarGet(VAR_ARCADE_ITEM);
    return BattleArcade_DoGive(impact, item);
}

static bool32 BattleArcade_DoGive(enum ArcadeImpactTypes impact, enum Item item)
{
    struct Pokemon *party = LoadSideParty(impact);

    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        if (GetMonData(&party[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
            break;

        SetMonData(&party[i], MON_DATA_HELD_ITEM, &item);
    }

    BufferGiveString(item);
    return TRUE;
}

static void BufferGiveString(enum Item item)
{
    CopyItemName(item,gStringVar3);
}

static bool32 BattleArcade_DoLevelUp(enum ArcadeImpactTypes impact)
{
    struct Pokemon *party = LoadSideParty(impact);

    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
            break;

        u32 newLevel = CalculateAndSaveNewLevel(GetMonData(&party[i], MON_DATA_LEVEL));
        SetMonData(&party[i], MON_DATA_LEVEL, &newLevel);
    }
    return TRUE;
}

static u32 CalculateAndSaveNewLevel(u32 origLevel)
{
    u32 newLevel = (origLevel + ARCADE_EVENT_LEVEL_INCREASE);
    return (newLevel >= MAX_LEVEL) ? MAX_LEVEL : newLevel;
}

static bool32 HaveMonsBeenSwapped(void)
{
    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        u32 monId = gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1;
        if (monId >= PARTY_SIZE)
            continue;

        struct Pokemon *frontierMon = &gSaveBlock1Ptr->playerParty[monId];
        struct Pokemon *playerMon = &gParties[B_TRAINER_PLAYER][i];

        u32 playerMonPersonality = GetMonData(playerMon, MON_DATA_PERSONALITY,NULL);
        u32 frontierMonPersonality = GetMonData(frontierMon, MON_DATA_PERSONALITY,NULL);

        if (playerMonPersonality == frontierMonPersonality)
            continue;

        return TRUE;
    }
    return FALSE;
}

static bool32 BattleArcade_DoSun(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoWeather(WEATHER_DROUGHT);
}
static bool32 BattleArcade_DoRain(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoWeather(WEATHER_DOWNPOUR);
}
static bool32 BattleArcade_DoSand(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoWeather(WEATHER_SANDSTORM);
}
static bool32 BattleArcade_DoSnow(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoWeather(WEATHER_SNOW);
}
static bool32 BattleArcade_DoFog(enum ArcadeImpactTypes impact)
{
    return BattleArcade_DoWeather(WEATHER_FOG_HORIZONTAL);
}

static bool32 BattleArcade_DoMistyTerrain(enum ArcadeImpactTypes impact)
{
    SetStartingStatus(STARTING_STATUS_MISTY_TERRAIN);
    return TRUE;
}

static bool32 BattleArcade_DoWeather(u32 weather)
{
    SetSavedWeather(weather);
    DoCurrentWeather();
    return TRUE;
}

static bool32 BattleArcade_DoTrickRoom(enum ArcadeImpactTypes impact)
{
    SetStartingStatus(STARTING_STATUS_TRICK_ROOM);
    return TRUE;
}

static bool32 BattleArcade_DoSwap(enum ArcadeImpactTypes impact)
{
    struct Pokemon tempParty[MAX_FRONTIER_PARTY_SIZE];

    for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        CopyMon(&tempParty[i],&gParties[B_TRAINER_PLAYER][i],sizeof(gParties[B_TRAINER_PLAYER][i]));
        CopyMon(&gParties[B_TRAINER_PLAYER][i],&gParties[B_TRAINER_OPPONENT_A][i],sizeof(gParties[B_TRAINER_OPPONENT_A][i]));
        CopyMon(&gParties[B_TRAINER_OPPONENT_A][i],&tempParty[i],sizeof(tempParty[i]));

        if (SiliconFroniter_IsCurrentChallengeTypeMulti() == FALSE)
            break;

        CopyMon(&tempParty[i],&gParties[B_TRAINER_PARTNER][i],sizeof(gParties[B_TRAINER_PARTNER][i]));
        CopyMon(&gParties[B_TRAINER_PARTNER][i],&gParties[B_TRAINER_OPPONENT_A][i],sizeof(gParties[B_TRAINER_OPPONENT_A][i]));
        CopyMon(&gParties[B_TRAINER_OPPONENT_A][i],&tempParty[i],sizeof(tempParty[i]));
    }
    return TRUE;
}

static bool32 BattleArcade_DoSpeedUp(enum ArcadeImpactTypes impact)
{
    BattleArcade_ChangeSpeed(ARCADE_EVENT_SPEED_UP);
    return TRUE;
}

static bool32 BattleArcade_DoSpeedDown(enum ArcadeImpactTypes impact)
{
    BattleArcade_ChangeSpeed(ARCADE_EVENT_SPEED_DOWN);
    return TRUE;
}

static bool32 BattleArcade_ChangeSpeed(u32 mode)
{
    u32 currentSpeed = GetCursorSpeed();
    u32 boundarySpeed = (mode == ARCADE_EVENT_SPEED_UP) ? ARCADE_SPEED_LEVEL_MAX : ARCADE_SPEED_LEVEL_MIN;

    if (currentSpeed == boundarySpeed)
    {
        currentSpeed = boundarySpeed;
    }
    else if (mode == ARCADE_EVENT_SPEED_UP)
    {
        currentSpeed++;
        if (currentSpeed > ARCADE_SPEED_LEVEL_MAX)
            currentSpeed = ARCADE_SPEED_LEVEL_MAX;
    }
    else
    {
        currentSpeed--;

        if (currentSpeed < ARCADE_SPEED_LEVEL_MIN)
            currentSpeed = ARCADE_SPEED_LEVEL_MIN;
    }

    SetCursorSpeed(currentSpeed);
    return TRUE;
}

static u32 GetCursorSpeed(void)
{
    return gSaveBlock2Ptr->frontier.arcadeCursorData.speed;
}

static void SetCursorSpeed(u32 speed)
{
    gSaveBlock2Ptr->frontier.arcadeCursorData.speed = speed;
}

static bool32 BattleArcade_DoRandom(enum ArcadeImpactTypes impact)
{
    SetCursorRandomMode();
    return TRUE;
}

static void SetCursorRandomMode(void)
{
    gSaveBlock2Ptr->frontier.arcadeCursorData.isRandom = TRUE;
}

static bool32 BattleArcade_DoGiveBPSmall(enum ArcadeImpactTypes impact)
{
    ConvertIntToDecimalStringN(gStringVar3,ARCADE_BP_SMALL,STR_CONV_MODE_LEFT_ALIGN,CountDigits(ARCADE_BP_SMALL));
    return TRUE;
}

static bool32 BattleArcade_DoGiveBPBig(enum ArcadeImpactTypes impact)
{
    ConvertIntToDecimalStringN(gStringVar3,ARCADE_BP_BIG,STR_CONV_MODE_LEFT_ALIGN,CountDigits(ARCADE_BP_BIG));
    return TRUE;
}

static bool32 BattleArcade_DoNoBattle(enum ArcadeImpactTypes impact)
{
    return TRUE;
}

static bool32 BattleArcade_DoNoEvent(enum ArcadeImpactTypes impact)
{
    return TRUE;
}

u32 BattleArcade_CalculateBonus(enum SiliconFrontierFacility facility)
{
    u32 bonus = 0;

    if (facility != SILICON_FACILITY_ARCADE)
        return bonus;

    if (VarGet(LOCAL_VAR_GAME_BOARD_EVENT) == ARCADE_EVENT_GIVE_BP_SMALL)
        bonus = ARCADE_BP_SMALL;

    if (VarGet(LOCAL_VAR_GAME_BOARD_EVENT) == ARCADE_EVENT_GIVE_BP_BIG)
        bonus = ARCADE_BP_BIG;

    VarSet(LOCAL_VAR_GAME_BOARD_EVENT,ARCADE_EVENT_COUNT);
    return bonus;
}

bool8 ShouldUseNormalFogForArcade(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    if (facility != SILICON_FACILITY_ARCADE)
        return FALSE;

    return (VarGet(LOCAL_VAR_GAME_BOARD_EVENT) == ARCADE_EVENT_FOG);
}

