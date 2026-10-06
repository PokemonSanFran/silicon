#include "global.h"
#include "battle.h"
#include "battle_arcade.h"
#include "item_icon.h"
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
#include "field_specials.h"
#include "field_weather.h"
#include "frontier_pass.h"
#include "frontier_util.h"
#include "gba/defines.h"
#include "gba/macro.h"
#include "gba/types.h"
#include "give_native_item.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "hexorb.h"
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
#include "script_pokemon_util.h"
#include "silicon_battle_frontier.h"
#include "silicon_frontier_accessors.h"
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
    enum ArcadeImpactTypes impact:3;
    enum ArcadeEvents event:6;
};

struct GameBoardState
{
    MainCallback savedCallback;
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
static bool32 IsItemValidDuringStreak(enum Item item);
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
static void GameBoard_LoadGraphics(void);
static void GameBoard_InitWindows(void);
static void GenerateGameBoard(void);
static void PrintEnemyParty(void);
static void PrintPlayerParty(void);
static void PrintPartyIcons(u32 side);
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
static void AddItemSprite(u32 x, u32 y, u32 space);
static void SpriteCB_Item(struct Sprite *sprite);
static void StartGame(void);
static void SetTimerForGame(void);
static void InitCursorPositionFromSaveblock(void);
static void CreateGameBoardShadows(void);
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
static bool32 IsStatusSleepOrFreeze(u32 status);
static bool32 BattleArcade_DoGiveBerry(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGiveItem(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGive(enum ArcadeImpactTypes impact, enum Item item);
static void BufferGiveString(enum Item item);
static bool32 BattleArcade_DoLevelUp(enum ArcadeImpactTypes impact);
static u32 CalculateAndSaveNewLevel(u32 origLevel);
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
static bool32 BattleArcade_DoInverse(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGravity(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoMistyTerrain(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoElectricTerrain(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGrassyTerrain(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoPsychicTerrain(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoRainbow(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoSwamp(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoFire(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGiveHeldItem(enum ArcadeImpactTypes impact);
static u32 GetCursorSpeed(void);
static void SetCursorSpeed(u32 speed);
static bool32 BattleArcade_DoRandom(enum ArcadeImpactTypes impact);
static void SetCursorRandomMode(void);
static bool32 BattleArcade_DoGiveBPSmall(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoGiveBPBig(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoNoBattle(enum ArcadeImpactTypes impact);
static bool32 BattleArcade_DoNoEvent(enum ArcadeImpactTypes impact);
void BattleArcade_HandleHeldItems(void);
void BattleArcade_RemoveHeldItems(void);
void BattleArcade_RestoreEventHeldItem(void);

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
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_INVERSE)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_GRAVITY)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_MISTY)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_ELECTRIC)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_GRASSY)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_PSYCHIC)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_RAINBOW)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_SWAMP)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_FIRE)
DEFINE_ARCADE_EVENT_ANIM(ARCADE_EVENT_GIVE_HELD_ITEM)

const bool8 arcadeEventBattleEligibility[ARCADE_EVENT_COUNT][SILICON_FRONTIER_STREAK_LENGTH_BOSS] =
{
    [ARCADE_EVENT_LOWER_HP]       = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_POISON]         = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_PARALYZE]       = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_BURN]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SLEEP]          = {0,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_FREEZE]         = {0,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GIVE_BERRY]     = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GIVE_ITEM]      = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_LEVEL_UP]       = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SUN]            = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_RAIN]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SAND]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SNOW]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_FOG]            = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_TRICK_ROOM]     = {0,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SWAP]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
    [ARCADE_EVENT_SPEED_UP]       = {1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
    [ARCADE_EVENT_SPEED_DOWN]     = {1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
    [ARCADE_EVENT_RANDOM]         = {1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
    [ARCADE_EVENT_GIVE_BP_SMALL]  = {1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
    [ARCADE_EVENT_NO_BATTLE]      = {1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
    [ARCADE_EVENT_GIVE_BP_BIG]    = {1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
    [ARCADE_EVENT_NO_EVENT]       = {0,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_INVERSE]        = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GRAVITY]        = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_MISTY]          = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_ELECTRIC]       = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GRASSY]         = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_PSYCHIC]        = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_RAINBOW]        = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SWAMP]          = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_FIRE]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GIVE_HELD_ITEM] = {0,  0,  1,  1,  1,  1,  1,  1,  1,  1},
};

const bool8 arcadeEventStreakEligibility[ARCADE_EVENT_COUNT][SILICON_FRONTIER_STREAK_LENGTH_BOSS] =
{
    [ARCADE_EVENT_LOWER_HP]       = {1,  1,  1,  1,  0,  0,  0,  0,  0,  0},
    [ARCADE_EVENT_POISON]         = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_PARALYZE]       = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_BURN]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SLEEP]          = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_FREEZE]         = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GIVE_BERRY]     = {1,  1,  1,  1,  0,  0,  0,  0,  0,  0},
    [ARCADE_EVENT_GIVE_ITEM]      = {1,  1,  1,  1,  0,  0,  0,  0,  0,  0},
    [ARCADE_EVENT_LEVEL_UP]       = {1,  1,  1,  1,  0,  0,  0,  0,  0,  0},
    [ARCADE_EVENT_SUN]            = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_RAIN]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SAND]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SNOW]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_FOG]            = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_TRICK_ROOM]     = {0,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SWAP]           = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SPEED_UP]       = {0,  0,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SPEED_DOWN]     = {1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_RANDOM]         = {0,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GIVE_BP_SMALL]  = {0,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_NO_BATTLE]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GIVE_BP_BIG]    = {0,  0,  0,  0,  0,  0,  1,  1,  1,  1},
    [ARCADE_EVENT_NO_EVENT]       = {1,  1,  1,  0,  0,  0,  0,  0,  0,  0},
    [ARCADE_EVENT_INVERSE]        = {0,  0,  0,  0,  0,  0,  1,  1,  1,  1},
    [ARCADE_EVENT_GRAVITY]        = {0,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_MISTY]          = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_ELECTRIC]       = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GRASSY]         = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_PSYCHIC]        = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_RAINBOW]        = {0,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_SWAMP]          = {0,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_FIRE]           = {0,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ARCADE_EVENT_GIVE_HELD_ITEM] = {0,  0,  0,  0,  0,  1,  1,  1,  1,  1},
};

const bool8 arcadeItemStreakEligibility[ITEMS_COUNT][SILICON_FRONTIER_STREAK_LENGTH_BOSS] =
{
    // best items
    [ITEM_LIFE_ORB]          = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_LEFTOVERS]         = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_HEAVY_DUTY_BOOTS]  = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_FOCUS_SASH]        = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_CHOICE_SCARF]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_CHOICE_SPECS]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_ROCKY_HELMET]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_ASSAULT_VEST]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_CHOICE_BAND]       = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_AIR_BALLOON]       = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_LIGHT_CLAY]        = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_EXPERT_BELT]       = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_WEAKNESS_POLICY]   = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_EJECT_BUTTON]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_WHITE_HERB]        = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_COVERT_CLOAK]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    // second best items
    [ITEM_LOADED_DICE]       = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_WIDE_LENS]         = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_RED_CARD]          = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SCOPE_LENS]        = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_THROAT_SPRAY]      = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_MENTAL_HERB]       = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_FLAME_ORB]         = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_QUICK_CLAW]        = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_POWER_HERB]        = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_MIRROR_HERB]       = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_METRONOME]         = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_TOXIC_ORB]         = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_PUNCHING_GLOVE]    = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_IRON_BALL]         = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_EJECT_PACK]        = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_BRIGHT_POWDER]     = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_PROTECTIVE_PADS]   = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_BLACK_SLUDGE]      = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_WISE_GLASSES]      = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_CLEAR_AMULET]      = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    // weather and terrain items
    [ITEM_TERRAIN_EXTENDER]  = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SMOOTH_ROCK]       = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_DAMP_ROCK]         = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_HEAT_ROCK]         = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_ICY_ROCK]          = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_MISTY_SEED]        = {0,  1,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_GRASSY_SEED]       = {0,  1,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_PSYCHIC_SEED]      = {0,  1,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_ELECTRIC_SEED]     = {0,  1,  0,  1,  1,  1,  1,  1,  1,  1},
    // type boosting items
    [ITEM_TWISTED_SPOON]     = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_MYSTIC_WATER]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_BLACK_GLASSES]     = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_NEVER_MELT_ICE]    = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_METAL_COAT]        = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_POISON_BARB]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_MAGNET]            = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SOFT_SAND]         = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_CHARCOAL]          = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_FAIRY_FEATHER]     = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_HARD_STONE]        = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SPELL_TAG]         = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SILK_SCARF]        = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_MIRACLE_SEED]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_BLACK_BELT]        = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_STICKY_BARB]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SILVER_POWDER]     = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SHARP_BEAK]        = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_DRAGON_FANG]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    // type resist items
    [ITEM_BABIRI_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_CHARTI_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_CHILAN_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_CHOPLE_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_COBA_BERRY]        = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_COLBUR_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_HABAN_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_KASIB_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_KEBIA_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_OCCA_BERRY]        = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_PASSHO_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_PAYAPA_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_RINDO_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_ROSELI_BERRY]      = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SHUCA_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_TANGA_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_WACAN_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_YACHE_BERRY]       = {1,  0,  0,  0,  1,  1,  1,  1,  1,  1},
    //figwam berries items
    [ITEM_FIGY_BERRY]        = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_WIKI_BERRY]        = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_MAGO_BERRY]        = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_IAPAPA_BERRY]      = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_AGUAV_BERRY]       = {0,  1,  0,  0,  1,  1,  1,  1,  1,  1},
    //other berries
    [ITEM_CUSTAP_BERRY]      = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_SITRUS_BERRY]      = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_CHESTO_BERRY]      = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_LUM_BERRY]         = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_KEE_BERRY]         = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    [ITEM_LEPPA_BERRY]       = {0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
    //pinch berries
    [ITEM_LIECHI_BERRY]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_GANLON_BERRY]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_SALAC_BERRY]       = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_PETAYA_BERRY]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
    [ITEM_APICOT_BERRY]      = {0,  0,  0,  1,  1,  1,  1,  1,  1,  1},
};

const struct ArcadeEventInfo arcadeEventInfo[ARCADE_EVENT_COUNT] =
{
    [ARCADE_EVENT_LOWER_HP] =
    {
        .name = COMPOUND_STRING("Lower HP"),
        .eventFunc = BattleArcade_DoLowerHP,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_LOWER_HP,
    },
    [ARCADE_EVENT_POISON] =
    {
        .name = COMPOUND_STRING("Poison"),
        .eventFunc = BattleArcade_DoPoison,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_POISON,
    },
    [ARCADE_EVENT_PARALYZE] =
    {
        .name = COMPOUND_STRING("Paralyze"),
        .eventFunc = BattleArcade_DoParalyze,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_PARALYZE,
    },
    [ARCADE_EVENT_BURN] =
    {
        .name = COMPOUND_STRING("Burn"),
        .eventFunc = BattleArcade_DoBurn,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_BURN,
    },
    [ARCADE_EVENT_SLEEP] =
    {
        .name = COMPOUND_STRING("Sleep"),
        .eventFunc = BattleArcade_DoSleep,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_SLEEP,
    },
    [ARCADE_EVENT_FREEZE] =
    {
        .name = COMPOUND_STRING("Freeze"),
        .eventFunc = BattleArcade_DoFreeze,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_FREEZE,
    },
    [ARCADE_EVENT_GIVE_BERRY] =
    {
        .name = COMPOUND_STRING("Give Berry"),
        .eventFunc = BattleArcade_DoGiveBerry,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_BERRY,
    },
    [ARCADE_EVENT_GIVE_ITEM] =
    {
        .name = COMPOUND_STRING("Give Item"),
        .eventFunc = BattleArcade_DoGiveItem,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_ITEM,
    },
    [ARCADE_EVENT_LEVEL_UP] =
    {
        .name = COMPOUND_STRING("Level Up"),
        .eventFunc = BattleArcade_DoLevelUp,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_LEVEL_UP,
    },
    [ARCADE_EVENT_SUN] =
    {
        .name = COMPOUND_STRING("Sun"),
        .eventFunc = BattleArcade_DoSun,
        .type = ARCADE_IMPACT_ALL,
        .animTable =sAnim_Panel_ARCADE_EVENT_SUN ,
    },
    [ARCADE_EVENT_RAIN] =
    {
        .name = COMPOUND_STRING("Rain"),
        .eventFunc = BattleArcade_DoRain,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_RAIN,
    },
    [ARCADE_EVENT_SAND] =
    {
        .name = COMPOUND_STRING("Sand"),
        .eventFunc = BattleArcade_DoSand,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SAND,
    },
    [ARCADE_EVENT_SNOW] =
    {
        .name = COMPOUND_STRING("Snow"),
        .eventFunc = BattleArcade_DoSnow,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SNOW,
    },
    [ARCADE_EVENT_FOG] =
    {
        .name = COMPOUND_STRING("Fog"),
        .eventFunc = BattleArcade_DoFog,
        .type = ARCADE_IMPACT_ALL,
        .animTable =sAnim_Panel_ARCADE_EVENT_FOG ,
    },
    [ARCADE_EVENT_TRICK_ROOM] =
    {
        .name = COMPOUND_STRING("Trick Room"),
        .eventFunc = BattleArcade_DoTrickRoom,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_TRICK_ROOM,
    },
    [ARCADE_EVENT_SWAP] =
    {
        .name = COMPOUND_STRING("Swap"),
        .eventFunc = BattleArcade_DoSwap,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SWAP,
    },
    [ARCADE_EVENT_SPEED_UP] =
    {
        .name = COMPOUND_STRING("Speed Up"),
        .eventFunc = BattleArcade_DoSpeedUp,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SPEED_UP,
    },
    [ARCADE_EVENT_SPEED_DOWN] =
    {
        .name = COMPOUND_STRING("Speed Down"),
        .eventFunc = BattleArcade_DoSpeedDown,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_SPEED_DOWN,
    },
    [ARCADE_EVENT_RANDOM] =
    {
        .name = COMPOUND_STRING("Random"),
        .eventFunc = BattleArcade_DoRandom,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_RANDOM,
    },
    [ARCADE_EVENT_GIVE_BP_SMALL] =
    {
        .name = COMPOUND_STRING("BP Small"),
        .eventFunc = BattleArcade_DoGiveBPSmall,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_BP_SMALL,
    },
    [ARCADE_EVENT_NO_BATTLE] =
    {
        .name = COMPOUND_STRING("No Battle"),
        .eventFunc = BattleArcade_DoNoBattle,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_NO_BATTLE,
    },
    [ARCADE_EVENT_GIVE_BP_BIG] =
    {
        .name = COMPOUND_STRING("Give BP Big"),
        .eventFunc = BattleArcade_DoGiveBPBig,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_BP_BIG,
    },
    [ARCADE_EVENT_NO_EVENT] =
    {
        .name = COMPOUND_STRING("No Event"),
        .eventFunc = BattleArcade_DoNoEvent,
        .type = ARCADE_IMPACT_SPECIAL,
        .animTable = sAnim_Panel_ARCADE_EVENT_NO_EVENT,
    },
    [ARCADE_EVENT_INVERSE] =
    {
        .name = COMPOUND_STRING("Inverse"),
        .eventFunc = BattleArcade_DoInverse,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_INVERSE,
    },
    [ARCADE_EVENT_GRAVITY] =
    {
        .name = COMPOUND_STRING("Gravity"),
        .eventFunc = BattleArcade_DoGravity,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_GRAVITY,
    },
    [ARCADE_EVENT_MISTY] =
    {
        .name = COMPOUND_STRING("Misty"),
        .eventFunc = BattleArcade_DoMistyTerrain,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_MISTY,
    },
    [ARCADE_EVENT_ELECTRIC] =
    {
        .name = COMPOUND_STRING("Electric"),
        .eventFunc = BattleArcade_DoElectricTerrain,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_ELECTRIC,
    },
    [ARCADE_EVENT_GRASSY] =
    {
        .name = COMPOUND_STRING("Grassy"),
        .eventFunc = BattleArcade_DoGrassyTerrain,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_GRASSY,
    },
    [ARCADE_EVENT_PSYCHIC] =
    {
        .name = COMPOUND_STRING("Psychic"),
        .eventFunc = BattleArcade_DoPsychicTerrain,
        .type = ARCADE_IMPACT_ALL,
        .animTable = sAnim_Panel_ARCADE_EVENT_PSYCHIC,
    },
    [ARCADE_EVENT_RAINBOW] =
    {
        .name = COMPOUND_STRING("Rainbow"),
        .eventFunc = BattleArcade_DoRainbow,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_RAINBOW,
    },
    [ARCADE_EVENT_SWAMP] =
    {
        .name = COMPOUND_STRING("Swamp"),
        .eventFunc = BattleArcade_DoSwamp,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_SWAMP,
    },
    [ARCADE_EVENT_FIRE] =
    {
        .name = COMPOUND_STRING("Fire"),
        .eventFunc = BattleArcade_DoFire,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_FIRE,
    },
    [ARCADE_EVENT_GIVE_HELD_ITEM] =
    {
        .name = COMPOUND_STRING("Give Held Item"),
        .eventFunc = BattleArcade_DoGiveHeldItem,
        .type = ARCADE_IMPACT_EITHER_SIDE,
        .animTable = sAnim_Panel_ARCADE_EVENT_GIVE_HELD_ITEM,
    },
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

static u32 GenerateItemOrBerry(enum ArcadeEvents event)
{
    u16 itemTable[ITEMS_COUNT];
    u32 sum = 0;

    for (enum Item item = 0; item < ITEMS_COUNT; item++)
    {
        itemTable[item] = FALSE;

        if (IsItemValidDuringStreak(item) == FALSE)
            continue;

        enum Pocket pocket = GetItemPocket(item);

        if ((event == ARCADE_EVENT_GIVE_BERRY) && (pocket != POCKET_BERRIES))
            continue;

        if ((event == ARCADE_EVENT_GIVE_ITEM) && (pocket == POCKET_BERRIES))
            continue;

        sum++;
        itemTable[item] = TRUE;
    }

    return RandomWeightedArray(RNG_NONE,sum,ITEMS_COUNT,itemTable);
}

static bool32 IsItemValidDuringStreak(enum Item item)
{
    return arcadeItemStreakEligibility[item][GetChallengeNumIndex()];
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
    SiliconFrontier_ResetArcadeData();
}

static void ResetWeatherPostBattle(void)
{
    FlagClear(B_FLAG_INVERSE_BATTLE);
    BattleArcade_DoWeather((gMapHeader.weather));
}

static void ReturnPartyToOwner(void)
{
    ZeroPlayerPartyMons();
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    for (u32 i = 0; i < size; i++)
    {
        struct Pokemon *frontierMon = &gSaveBlock1Ptr->playerParty[i];
        struct Pokemon *playerMon = &gParties[B_TRAINER_PLAYER][i];

        CopyMon(playerMon,frontierMon,sizeof(struct Pokemon));
    }
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

    sGameBoardState->savedCallback = callback;
    SetMainCallback2(GameBoard_SetupCB);
}

static void GameBoard_SetupCB(void)
{
    switch (gMain.state)
    {
        case 0:
            ResetGpuRegsAndBgs();
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            ResetPaletteFade();
            ResetTasks();
            FreeAllSpritePalettes();
            ResetSpriteData();
            gMain.state++;
            break;
        case 2:
            if (GameBoard_InitBgs())
            {
                GameBoard_LoadGraphics();
                gMain.state++;
            }
            else
            {
                GameBoard_FadeAndBail();
                return;
            }
            break;
        case 3:
            GameBoard_InitWindows();
            GenerateGameBoard();
            PrintEnemyParty();
            PrintPlayerParty();
            CreateGameBoardShadows();
            PrintHelpBar();
            gMain.state++;
            break;
        case 4:
            CreateTask(Task_GameBoardWaitFadeIn, 0);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
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
            .size = TILE_OFFSET_4BPP(ARCADE_PANEL_COUNT * 16),
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
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/shadow.4bpp"),
            .size = TILE_OFFSET_4BPP(16),
            .tag = ARCADE_SPRITETAG_SHADOW,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/battle_frontier/battle_arcade/game/shadow.gbapal"),
            .tag = ARCADE_PALTAG_SHADOW,
        },
    },
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
    LoadMonIconPalettes();
    CpuFill32(RGB_BLACK, gPlttBufferFaded, PLTT_SIZE);
}

static void GameBoard_LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum GameBoard_BackgroundIds backgroundId = BG_BOARD_BACKGROUND; backgroundId < BG_BOARD_COUNT; backgroundId++)
    {
        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sArcadeTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sArcadeTilemapLUT[backgroundId],0,0);
    }

    LoadPalette(sGameBoardPalette_Pal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sGameBoardText_Pal, BG_PLTT_ID(1), PLTT_SIZE_4BPP);

    GameBoard_LoadSprites();
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
    enum BattleTrainer battler = (side == ARCADE_IMPACT_OPPONENT) ? B_TRAINER_OPPONENT_A : B_TRAINER_PLAYER;
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    u32 x = (side == ARCADE_IMPACT_OPPONENT) ? 215 : 22;
    u32 y =  (size != FRONTIER_PARTY_SIZE) ? 18 : 33;
    u32 structSpriteId = 0;

    for (;battler < MAX_BATTLE_TRAINERS; battler++)
    {
        struct Pokemon *party = gParties[battler];
        switch(battler)
        {
            default:
            case B_TRAINER_OPPONENT_A:
                structSpriteId = ARCADE_SPRITEID_OPPONENT_SIDE_MON_0;
                break;
            case B_TRAINER_OPPONENT_B:
                structSpriteId = ARCADE_SPRITEID_OPPONENT_SIDE_MON_2;
                break;
            case B_TRAINER_PLAYER:
                structSpriteId = ARCADE_SPRITEID_PLAYER_SIDE_MON_0;
                break;
            case B_TRAINER_PARTNER:
                structSpriteId = ARCADE_SPRITEID_PLAYER_SIDE_MON_2;
                break;
        }

        for (u32 i = 0; i < size; i++)
        {
            if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
                break;

            u32 spriteId = CreateMonIcon(GetMonData(&party[i], MON_DATA_SPECIES),SpriteCallbackDummy, x, y, 4, GetMonData(&party[i],MON_DATA_PERSONALITY));
            sGameBoardState->spriteId[structSpriteId++] = spriteId;
            gSprites[spriteId].oam.priority = 0;

            y += 30;
        }
        battler++;
    }

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
        AddItemSprite(x,y,space);

        if ((GetGameBoardMode() != ARCADE_BOARD_MODE_GAME_FINISH) && (GetGameBoardMode() != ARCADE_BOARD_MODE_CLEANUP))
            continue;

        u32 spriteId = sGameBoardState->spriteId[space];
        SeekSpriteAnim(&gSprites[spriteId],3);
    }
}

static u8 CreateEventSprite_(u32 x, u32 y, enum ArcadeEvents event, u32 paltag)
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag = ARCADE_SPRITETAG_PANELS;
    TempSpriteTemplate.paletteTag = paltag;
    TempSpriteTemplate.callback = SpriteCallbackDummy;
    TempSpriteTemplate.anims = &arcadeEventInfo[event].animTable;

    u32 spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
    gSprites[spriteId].oam.priority = 1;

    return spriteId;
}

static u8 CreateEventSprite(u32 x, u32 y, u32 space)
{
    enum ArcadeEvents event = sGameBoard[space].event;
    enum ArcadeImpactTypes impact = (sGameBoard[space].impact == ARCADE_IMPACT_PLAYER) ? ARCADE_IMPACT_PLAYER : ARCADE_IMPACT_OPPONENT;
    u32 paltag = ARCADE_PALTAG_OPPONENT + impact;
    return CreateEventSprite_(x,y,event,paltag);
}

u32 Script_BattleArcade_LoadEventTilesAndCreateSprite(u32 x, u32 y, enum ArcadeEvents event)
{
    LoadSpriteSheet(&sArcadeSpriteSheets[0].spriteSheet);
    LoadSpritePalette(&sArcadeSpriteSheets[0].palette);

    return CreateEventSprite_(x,y,event,ARCADE_PALTAG_PANELS);
}


static void AddItemSprite(u32 x, u32 y, u32 space)
{
    enum ArcadeEvents event = sGameBoard[space].event;
    u32 item = 0, spriteTag = 0, palTag = 0;

    if (event == ARCADE_EVENT_GIVE_BERRY)
    {
        item = VarGet(VAR_ARCADE_BERRY);
        spriteTag = ARCADE_SPRITETAG_BERRY;
        palTag = ARCADE_PALTAG_BERRY;
    }
    else if (event == ARCADE_EVENT_GIVE_ITEM)
    {
        item = VarGet(VAR_ARCADE_ITEM);
        spriteTag = ARCADE_SPRITETAG_ITEM;
        palTag = ARCADE_PALTAG_ITEM;
    }
    else
    {
        return;
    }

    u32 iconSpriteId = AddItemIconSprite(spriteTag, palTag, item);
    gSprites[iconSpriteId].x2 = x+10;
    gSprites[iconSpriteId].y2 = y+10;
    gSprites[iconSpriteId].oam.priority = 0;
    gSprites[iconSpriteId].callback = SpriteCB_Item;
    sGameBoardState->spriteId[ARCADE_SPRITEID_ITEM_0+space] = iconSpriteId;
}

static void SpriteCB_Item(struct Sprite *sprite)
{
    enum ArcadeBoardModes mode = GetGameBoardMode();

    if (mode < ARCADE_BOARD_MODE_GAME_START)
        sprite->invisible = TRUE;
    else if (mode >= ARCADE_BOARD_MODE_GAME_FINISH)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
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

static const union AnimCmd sAnim_ShadowPlayer[] =
{
    ANIMCMD_FRAME(B_SIDE_PLAYER * 8, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_ShadowOpponent[] =
{
    ANIMCMD_FRAME(B_SIDE_OPPONENT * 8, 0),
    ANIMCMD_END
};

static const union AnimCmd * const sSpriteAnimTable_Shadow[NUM_BATTLE_SIDES] =
{
    [B_SIDE_PLAYER] = sAnim_ShadowPlayer,
    [B_SIDE_OPPONENT] = sAnim_ShadowOpponent,
};

static void CreateGameBoardShadows(void)
{
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    if (SiliconFroniter_IsCurrentChallengeTypeMulti())
        size = FRONTIER_DOUBLES_PARTY_SIZE;

    for (enum BattleSide side = 0; side < NUM_BATTLE_SIDES; side++)
    {
        u32 x = (side == B_SIDE_PLAYER) ? 16 : 209;
        u32 y = (size > FRONTIER_PARTY_SIZE) ? 32 : 47;

        for (u32 monIndex = 0; monIndex < size; monIndex++)
        {
            struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

            TempSpriteTemplate.tileTag = ARCADE_SPRITETAG_SHADOW;
            TempSpriteTemplate.paletteTag = ARCADE_PALTAG_SHADOW;
            TempSpriteTemplate.anims = sSpriteAnimTable_Shadow;

            u32 spriteId = CreateSprite(&TempSpriteTemplate,x,y,0);

            gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x8);
            gSprites[spriteId].oam.size = SPRITE_SIZE(32x8);
            gSprites[spriteId].oam.priority = 1;
            StartSpriteAnim(&gSprites[spriteId],side);
            y += 30;
        }
    }
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
    for (u32 space = 0; space < ARCADE_GAME_BOARD_SPACES; space++)
    {
        DestroySpriteAndFreeResources(&gSprites[sGameBoardState->spriteId[space]]);
        sGameBoardState->spriteId[space] = SPRITE_NONE;
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

        if (IsEventValidDuringBattleOrStreak(event) == FALSE)
            continue;

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

        sum++;
        eventTable[event] = TRUE;
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

    return arcadeEventBattleEligibility[event][currentStreak % SILICON_FRONTIER_STREAK_LENGTH_BOSS];
}

static bool32 IsEventValidDuringCurrentStreak(enum ArcadeEvents event)
{
    return arcadeEventStreakEligibility[event][GetChallengeNumIndex()];
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

static enum BattleSide ConvertBattleTrainerToBattleSide(enum BattleTrainer battleTrainer)
{
    switch(battleTrainer)
    {
        case B_TRAINER_PLAYER: return B_SIDE_PLAYER;
        case B_TRAINER_OPPONENT_A: return B_SIDE_OPPONENT;
        case B_TRAINER_PARTNER: return B_SIDE_PLAYER;
        case B_TRAINER_OPPONENT_B: return B_SIDE_OPPONENT;
        default: return NUM_BATTLE_SIDES;
    }
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
    for (enum BattleTrainer trainer = B_TRAINER_PLAYER; trainer < MAX_BATTLE_TRAINERS; trainer++)
    {
        if (ConvertBattleTrainerToBattleSide(trainer) != (enum BattleSide)impact)
            continue;

        struct Pokemon *party = GetTrainerParty(trainer);

        for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        {
            if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
                break;

            u32 maxHP = GetMonData(&party[i], MON_DATA_MAX_HP);
            u32 reducedHP = maxHP - (maxHP * 200 / 1000);
            SetMonData(&party[i], MON_DATA_HP, &reducedHP);
        }
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
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    u32 impactedCount = 0;

    for (enum BattleTrainer trainer = B_TRAINER_PLAYER; trainer < MAX_BATTLE_TRAINERS; trainer++)
    {
        if (ConvertBattleTrainerToBattleSide(trainer) != (enum BattleSide)impact)
            continue;

        struct Pokemon *party = GetTrainerParty(trainer);

        for (u32 i = 0; i < size; i++)
        {
            u32 index = (IsStatusSleepOrFreeze(status)) ? Random() % size : i;
            struct Pokemon *mon = &party[index];

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

            if (IsStatusSleepOrFreeze(status))
                break;
        }
    }
    return (impactedCount > 0);
}

static bool32 IsStatusSleepOrFreeze(u32 status)
{
    return ((status == STATUS1_FREEZE) || (status == STATUS1_SLEEP));
}

static bool32 BattleArcade_DoGiveBerry(enum ArcadeImpactTypes impact)
{
    VarSet(VAR_ARCADE_GIVE_EVENT,ARCADE_EVENT_GIVE_BERRY);
    enum Item item = VarGet(VAR_ARCADE_BERRY);
    return BattleArcade_DoGive(impact, item);
}

static bool32 BattleArcade_DoGiveItem(enum ArcadeImpactTypes impact)
{
    VarSet(VAR_ARCADE_GIVE_EVENT,ARCADE_EVENT_GIVE_ITEM);
    enum Item item = VarGet(VAR_ARCADE_ITEM);
    return BattleArcade_DoGive(impact, item);
}

static bool32 BattleArcade_DoGive(enum ArcadeImpactTypes impact, enum Item item)
{
    for (enum BattleTrainer trainer = B_TRAINER_PLAYER; trainer < MAX_BATTLE_TRAINERS; trainer++)
    {
        if (ConvertBattleTrainerToBattleSide(trainer) != (enum BattleSide)impact)
            continue;

        struct Pokemon *party = GetTrainerParty(trainer);

        for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        {
            if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
                break;

            SetMonData(&party[i], MON_DATA_HELD_ITEM, &item);
        }
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
    for (enum BattleTrainer trainer = B_TRAINER_PLAYER; trainer < MAX_BATTLE_TRAINERS; trainer++)
    {
        if (ConvertBattleTrainerToBattleSide(trainer) != (enum BattleSide)impact)
            continue;

        struct Pokemon *party = GetTrainerParty(trainer);

        for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        {
            if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
                break;

            u32 newLevel = CalculateAndSaveNewLevel(GetMonData(&party[i], MON_DATA_LEVEL));
            SetMonData(&party[i], MON_DATA_LEVEL, &newLevel);
        }
    }
    return TRUE;
}

static u32 CalculateAndSaveNewLevel(u32 origLevel)
{
    u32 newLevel = (origLevel + ARCADE_EVENT_LEVEL_INCREASE);
    return (newLevel >= MAX_LEVEL) ? MAX_LEVEL : newLevel;
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
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    struct Pokemon tempMon;

    for (enum BattleTrainer trainer = B_TRAINER_PLAYER; trainer < MAX_BATTLE_TRAINERS; trainer++)
    {
        if (ConvertBattleTrainerToBattleSide(trainer) != B_SIDE_PLAYER)
            continue;

        struct Pokemon *partyA = GetTrainerParty(trainer);
        struct Pokemon *partyB = GetTrainerParty(trainer+1);

        u32 i = Random() % size;

        CopyMon(&tempMon,&partyA[i],sizeof(partyA[i]));
        CopyMon(&partyA[i],&partyB[i],sizeof(partyB[i]));
        CopyMon(&partyB[i],&tempMon,sizeof(tempMon));
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

static bool32 BattleArcade_DoInverse(enum ArcadeImpactTypes impact)
{
    FlagSet(B_FLAG_INVERSE_BATTLE);
    return TRUE;
}

static bool32 BattleArcade_DoGravity(enum ArcadeImpactTypes impact)
{
    SetStartingStatus(STARTING_STATUS_TRICK_ROOM);
    return TRUE;
}

static bool32 BattleArcade_DoMistyTerrain(enum ArcadeImpactTypes impact)
{
    SetStartingStatus(STARTING_STATUS_MISTY_TERRAIN);
    return TRUE;
}

static bool32 BattleArcade_DoElectricTerrain(enum ArcadeImpactTypes impact)
{
    SetStartingStatus(STARTING_STATUS_ELECTRIC_TERRAIN);
    return TRUE;
}

static bool32 BattleArcade_DoGrassyTerrain(enum ArcadeImpactTypes impact)
{
    SetStartingStatus(STARTING_STATUS_GRASSY_TERRAIN);
    return TRUE;
}

static bool32 BattleArcade_DoPsychicTerrain(enum ArcadeImpactTypes impact)
{
    SetStartingStatus(STARTING_STATUS_PSYCHIC_TERRAIN);
    return TRUE;
}

static bool32 BattleArcade_DoRainbow(enum ArcadeImpactTypes impact)
{
    enum StartingStatus status = (impact == ARCADE_IMPACT_PLAYER) ? STARTING_STATUS_RAINBOW_PLAYER : STARTING_STATUS_RAINBOW_OPPONENT;
    SetStartingStatus(status);
    return TRUE;
}

static bool32 BattleArcade_DoSwamp(enum ArcadeImpactTypes impact)
{
    enum StartingStatus status = (impact == ARCADE_IMPACT_PLAYER) ? STARTING_STATUS_SWAMP_PLAYER : STARTING_STATUS_SWAMP_OPPONENT;
    SetStartingStatus(status);
    return TRUE;
}

static bool32 BattleArcade_DoFire(enum ArcadeImpactTypes impact)
{
    enum StartingStatus status = (impact == ARCADE_IMPACT_PLAYER) ? STARTING_STATUS_SEA_OF_FIRE_PLAYER : STARTING_STATUS_SEA_OF_FIRE_OPPONENT;
    SetStartingStatus(status);
    return TRUE;
}

static bool32 BattleArcade_DoGiveHeldItem(enum ArcadeImpactTypes impact)
{
    for (enum BattleTrainer trainer = B_TRAINER_PLAYER; trainer < MAX_BATTLE_TRAINERS; trainer++)
    {
        if (ConvertBattleTrainerToBattleSide(trainer) != (enum BattleSide)impact)
            continue;

        struct Pokemon *party = GetTrainerParty(trainer);

        for (u32 i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        {
            if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
                break;

            u32 maxHP = GetMonData(&party[i], MON_DATA_MAX_HP);
            u32 reducedHP = maxHP - (maxHP * 200 / 1000);
            SetMonData(&party[i], MON_DATA_HP, &reducedHP);
        }
    }
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

void Script_Buffer_GetCursorSpeed(void)
{
    VarSet(LOCAL_VAR_ROULETTE_DATA,GetCursorSpeed());

    switch (VarGet(LOCAL_VAR_ROULETTE_DATA))
    {
        case ARCADE_SPEED_LEVEL_0:
            StringCopy(gStringVar1,COMPOUND_STRING("-4"));
            break;
        case ARCADE_SPEED_LEVEL_1:
            StringCopy(gStringVar1,COMPOUND_STRING("-3"));
            break;
        case ARCADE_SPEED_LEVEL_2:
            StringCopy(gStringVar1,COMPOUND_STRING("-2"));
            break;
        case ARCADE_SPEED_LEVEL_3:
            StringCopy(gStringVar1,COMPOUND_STRING("-1"));
            break;
        default:
        case ARCADE_SPEED_LEVEL_4:
            StringCopy(gStringVar1,COMPOUND_STRING("0"));
            break;
        case ARCADE_SPEED_LEVEL_5:
            StringCopy(gStringVar1,COMPOUND_STRING("+1"));
            break;
        case ARCADE_SPEED_LEVEL_6:
            StringCopy(gStringVar1,COMPOUND_STRING("+2"));
            break;
        case ARCADE_SPEED_LEVEL_7:
            StringCopy(gStringVar1,COMPOUND_STRING("+3"));
            break;
    }
}

void Script_IsCursorRandom(void)
{
    VarSet(LOCAL_VAR_ROULETTE_DATA,IsCursorInRandomMode());
}

void Script_GetBerryItemArcade(void)
{
    CopyItemNameHandlePlural(VarGet(VAR_ARCADE_BERRY), gStringVar1, 3);
    CopyItemNameHandlePlural(VarGet(VAR_ARCADE_ITEM), gStringVar2, 3);
}

void BattleArcade_HandleHeldItems(void)
{
    if (SiliconFrontier_GetFacilityFromCurrentChallenge() != SILICON_FACILITY_ARCADE)
        return;

    BattleArcade_RemoveHeldItems();
    BattleArcade_RestoreEventHeldItem();
}

void BattleArcade_RemoveHeldItems(void)
{
    for (enum ArcadeImpactTypes impact = 0; impact < ARCADE_IMPACT_ALL; impact++)
    {
        if (VarGet(LOCAL_VAR_GAME_BOARD_EVENT) == ARCADE_EVENT_GIVE_HELD_ITEM)
            if (VarGet(LOCAL_VAR_GAME_BOARD_IMPACT) == impact)
                continue;

        BattleArcade_DoGive(impact,ITEM_NONE);
    }
}

void BattleArcade_RestoreEventHeldItem(void)
{
    if (VarGet(LOCAL_VAR_GAME_BOARD_EVENT) == ARCADE_EVENT_GIVE_HELD_ITEM)
        if (VarGet(LOCAL_VAR_GAME_BOARD_IMPACT) == ARCADE_IMPACT_PLAYER)
            return;

    enum ArcadeEvents event = VarGet(VAR_ARCADE_GIVE_EVENT);

    if (event == ARCADE_EVENT_GIVE_BERRY)
        BattleArcade_DoGive(ARCADE_IMPACT_PLAYER,VarGet(VAR_ARCADE_BERRY));
    else if (event == ARCADE_EVENT_GIVE_ITEM)
        BattleArcade_DoGive(ARCADE_IMPACT_PLAYER,VarGet(VAR_ARCADE_ITEM));
    else
        return;
}

void BattleArcade_ResetGiveEvent(void)
{
    VarSet(VAR_ARCADE_GIVE_EVENT,ARCADE_EVENT_COUNT);
}
