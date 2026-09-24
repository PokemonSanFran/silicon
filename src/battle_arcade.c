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
#include "constants/battle_arcade.h"
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
    u8 impact:2;
    u8 event:5;
};

struct GameBoardState
{
    MainCallback savedCallback;
    u8 loadState;
    u8 gameMode;
    u8 monIconSpriteId[2][MAX_FRONTIER_PARTY_SIZE];
    u16 timer;
    u8 cursorPosition;
    u8 eventIconSpriteId[ARCADE_GAME_BOARD_SPACES];
    u8 countdownPanelSpriteId[ARCADE_GAME_BOARD_SPACES];
    u8 cursorPaletteNum[2];
};

// Arcade Challenge Functions
static void SetCursorPosition(u32);
static void SaveCursorPositionToSaveblock(void);
static u32 GetCursorPosition(void);
static void ClearCursorRandomMode(void);
static u32 GenerateItemOrBerry(enum ArcadeEvents type);
static u32 GetCategorySize(u32);
static u32 GetGroupIdFromStreak(void);
static const enum Item (*GetCategoryGroups(u32))[ARCADE_ITEM_GROUP_SIZE];
static void ReturnPartyToOwner(void);
static bool32 HaveMonsBeenSwapped(void);
static void ResetLevelsToOriginal(void);
void ConvertFacilityFromArcadeToPike(u32*);
u32 GetArcadePrintCount(void);
void ShowArcadeRecordsFromOverworld(void);
void DoArcadeTrainerBattle(void);
static u32 GetPerformancePoints(void);
void CalculateAndSetPerformancePoints(void);
void ResetPerformancePoints(void);
void SetPerformancePoints(u32);
static u32 CalculatePerformancePoints(void);

// Arcade Game Board Front End
static void Task_OpenGameBoard(u8);
static void GameBoard_Init(MainCallback);
static void GameBoard_SetupCB(void);
static bool8 GameBoard_InitBgs(void);
static bool32 BattleArcade_AllocTilemapBuffers(void);
static void GameBoard_HandleAndShowBgs(void);
static void SetScheduleShowBgs(u32);
static void GameBoard_FadeAndBail(void);
static void Task_GameBoardWaitFadeAndBail(u8);
static bool8 GameBoard_LoadGraphics(void);
static void GameBoard_InitWindows(void);
static void LoadEventPalettes(void);
static void GenerateGameBoard(void);
static void PrintEnemyParty(void);
static void PrintPlayerParty(void);
static void PrintPartyIcons(u32);
static u32 GetHorizontalPositionFromSide(u32);
static struct Pokemon* LoadSideParty(u32);
static void PrintHelpBar(void);
static const u8* GetHelpBarText(void);
static u32 GetGameBoardMode(void);
static void Task_GameBoardWaitFadeIn(u8);
static void Task_GameBoardMainInput(u8);
static void VBlankCB(void);
static void MainCB(void);
static void StartCountdown(void);
static void SetTimerForCountdown(void);
static void SetTimer(u32);
static void PopulateCountdownSprites(void);
static void CalculatePanelPosition(u32, u32*, u32*);
static u32 CreateCountdownPanel(u32, u32);
static void Task_GameBoard_Countdown(u8);
static void PopulateEventSprites(void);
static void LoadTileSpriteSheets(void);
static const u32* GetEventGfx(u32);
static u8 CreateEventSprite(u32, u32, u32);
static const u16 GetTileTag(u32);
static void StartGame(void);
static void SetTimerForGame(void);
static void InitCursorPositionFromSaveblock(void);
static void CreateGameBoardCursor(void);
static void SpriteCB_Cursor(struct Sprite*);
static void ChangeCursorColor(struct Sprite*);
static u32 ReturnNextCursorPalette(u32);
static void ChangeCursorSpritePosition(struct Sprite*);
static void DestroyCountdownPanels(void);
static void Task_GameBoard_Game(u8);
static u32 GetGameBoardTimer(void);
static void IncrementGameBoardMode(void);
static bool32 ShouldCursorMove(u32);
static u32 ReturnCursorWait(u32);
static void ChangeCursorPosition(void);
static bool32 IsCursorInRandomMode(void);
static bool32 IsGameBoardTimerEmpty(void);
static void DecrementGameBoardTimer(void);
static void HandleFinishMode(void);
static void SetTimerForFinish(void);
static void SelectGameBoardSpace(u32*, u32*);
static void HandleGameBoardResult(u32, u32);
static void BufferImpactedName(u8*, u32);
static u32 GetImpactedTrainerId(u32);
static void SetGameBoardToChosenEvent(u32, u32);
static void StoreEventToVar(u32);
static void StoreImpactedSideToVar(u32);
static void DestroyEventSprites(void);
static void Task_GameBoard_CleanUp(u8);
static void Task_GameBoardWaitFadeAndExitGracefully(u8);
static void GameBoard_FreeResources(void);

// Arcade Game Board Back End Init
static u32 GenerateImpact(void);
static u32 ConvertPerformanceToImpactBracket(void);
static u32 GenerateEvent(u32);
static u32 GenerateRandomBetweenBounds(u32);
static s32 GetPanelUpperBound(u32);
static s32 GetPanelLowerBound(u32);
static bool32 IsEventValidDuringBattleOrStreak(u32, u32);
static bool32 IsEventBanned(u32);
static bool32 IsEventValidDuringCurrentBattle(u32);
static bool32 IsEventValidDuringCurrentStreak(u32);
static u32 GetChallengeNumIndex(void);
static u32 GetChallengeNum(void);

// Arcade Game Board Back End Resolve
static bool32 DoGameBoardResult(u32, u32);
static bool32 BattleArcade_DoLowerHP(u32);
static bool32 BattleArcade_DoPoison(u32);
static bool32 BattleArcade_DoParalyze(u32);
static bool32 BattleArcade_DoBurn(u32);
static bool32 BattleArcade_DoSleep(u32);
static bool32 BattleArcade_DoFreeze(u32);
static bool32 BattleArcade_DoStatusAilment(u32, u32);
static void InitalizePartyIndex(u32*);
static bool32 IsStatusSleepOrFreeze(u32);
static void ShufflePartyIndex(u32*);
static bool32 BattleArcade_DoGiveBerry(u32);
static bool32 BattleArcade_DoGiveItem(u32);
static bool32 BattleArcade_DoGive(u32, u32);
static void BufferGiveString(u32);
static bool32 BattleArcade_DoLevelUp(u32);
static u32 CalculateAndSaveNewLevel(u32);
static bool32 BattleArcade_DoSun(void);
static bool32 BattleArcade_DoRain(void);
static bool32 BattleArcade_DoSand(void);
static bool32 BattleArcade_DoHail(void);
static bool32 BattleArcade_DoFog(void);
static bool32 BattleArcade_DoWeather(u32);
static bool32 BattleArcade_DoTrickRoom(void);
static bool32 BattleArcade_DoSwap(void);
static bool32 BattleArcade_DoSpeedUp(void);
static bool32 BattleArcade_DoSpeedDown(void);
static bool32 BattleArcade_ChangeSpeed(u32);
static u32 GetCursorSpeed(void);
static void SetCursorSpeed(u32);
static bool32 BattleArcade_DoRandom(void);
static void SetCursorRandomMode(void);
static bool32 BattleArcade_DoGiveBPSmall(void);
static bool32 BattleArcade_DoGiveBPBig(void);
static bool32 BattleArcade_DoNoBattle(void);
static bool32 BattleArcade_DoNoEvent(void);
static void ResetWeatherPostBattle(void);

static struct GameBoardState *sGameBoardState = NULL;
static u8 *sBgTilemapBuffer[BG_BOARD_COUNT] = {NULL};
static struct GameResult *sGameBoard[ARCADE_GAME_BOARD_SPACES] = {NULL};

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
    u32 challengeNum = GetChallengeNum();

    return challengeNum <= ARCADE_CHALLENGE_ITEM_GROUP_1_CHALLENGE_THRESHOLD ? ARCADE_BERRY_GROUP_1:
        challengeNum <= ARCADE_CHALLENGE_ITEM_GROUP_2_CHALLENGE_THRESHOLD ? ARCADE_BERRY_GROUP_2:
        ARCADE_BERRY_GROUP_3;
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
        [ARCADE_ITEM_GROUP_4] =
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
        [ARCADE_ITEM_GROUP_5] =
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
        [ARCADE_ITEM_GROUP_4] =
        {
            ITEM_FOCUS_BAND,
            ITEM_LEFTOVERS,
            ITEM_SCOPE_LENS,
            ITEM_CHOICE_BAND
        },
        [ARCADE_ITEM_GROUP_5] =
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

    BattleArcade_DoSwap();
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
        .priority = 1
    },
    {
        .bg = BG_BOARD_EVENTS,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    },
    {
        .bg = BG_BOARD_BACKGROUND,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 0
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
        .paletteNum = 15,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const u8 sGameBoardWindowFontColors[][3] =
{
    [TEXT_COLOR_WHITE]  =
    {
        TEXT_COLOR_TRANSPARENT,
        TEXT_COLOR_WHITE,
        TEXT_COLOR_DARK_GRAY
    },
};

static const u32 sBackgroundTiles[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/background.png", ".4bpp.smol");
static const u32 sBackgroundTilemap[] = INCBIN_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/background.bin.smolTM");

static const u32 sLogobackgroundTiles[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/logobackground.png", ".4bpp.smol");
static const u32 sLogobackgroundTilemap[] = INCBIN_U32("graphics/battle_frontier/battle_arcade/game/backgrounds/logobackground.bin.smolTM");

static const u32 sCountdownTile1[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/countdown/1.png",".4bpp.smol");
static const u32 sCountdownTile2[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/countdown/2.png",".4bpp.smol");
static const u32 sCountdownTile3[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/countdown/3.png",".4bpp.smol");

static const u32 sEventBurn[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/burn.png", ".4bpp.smol");
static const u32 sEventFog[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/fog.png", ".4bpp.smol");
static const u32 sEventFreeze[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/freeze.png", ".4bpp.smol");
static const u32 sEventGiveBerry[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/give_berry.png", ".4bpp.smol");
static const u32 sEventGiveBpBig[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/give_bp_big.png", ".4bpp.smol");
static const u32 sEventGiveBpSmall[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/give_bp_small.png", ".4bpp.smol");
static const u32 sEventGiveItem[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/give_item.png", ".4bpp.smol");
static const u32 sEventHail[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/hail.png", ".4bpp.smol");
static const u32 sEventLevelUp[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/level_up.png", ".4bpp.smol");
static const u32 sEventLowerHp[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/lower_hp.png", ".4bpp.smol");
static const u32 sEventNoBattle[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/no_battle.png", ".4bpp.smol");
static const u32 sEventParalyze[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/paralyze.png", ".4bpp.smol");
static const u32 sEventPoison[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/poison.png", ".4bpp.smol");
static const u32 sEventRain[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/rain.png", ".4bpp.smol");
static const u32 sEventRandom[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/random.png", ".4bpp.smol");
static const u32 sEventSand[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/sand.png", ".4bpp.smol");
static const u32 sEventSleep[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/sleep.png", ".4bpp.smol");
static const u32 sEventSpeedDown[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/speed_down.png", ".4bpp.smol");
static const u32 sEventSpeedUp[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/speed_up.png", ".4bpp.smol");
static const u32 sEventSun[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/sun.png", ".4bpp.smol");
static const u32 sEventSwap[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/swap.png", ".4bpp.smol");
static const u32 sEventTrickRoom[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/trick_room.png", ".4bpp.smol");
static const u32 sEventNoEvent[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/panels/event/no_event.png", ".4bpp.smol");

static const u32 sGameCursor[] = INCGFX_U32("graphics/battle_frontier/battle_arcade/game/cursor.png", ".4bpp.smol");

static const u16 sArcadeEventPlayer_Pal[] = INCGFX_U16("graphics/battle_frontier/battle_arcade/game/palettes/event_player.pal", ".gbapal");
static const u16 sArcadeEventOpponent_Pal[] = INCGFX_U16("graphics/battle_frontier/battle_arcade/game/palettes/event_opponent.pal", ".gbapal");
static const u16 sGameBoardPalette_Pal[] = INCGFX_U16("graphics/battle_frontier/battle_arcade/game/palettes/background.pal", ".gbapal");

static const struct SpritePalette sArcadePalettes[] =
{
    {sArcadeEventOpponent_Pal, ARCADE_PALTAG_OPPONENT},
    {sArcadeEventPlayer_Pal,   ARCADE_PALTAG_PLAYER},
};

static const union AnimCmd sCountdownPanelAnim[] =
{
    ANIMCMD_FRAME(0, ARCADE_BOARD_COUNTDOWN_TIMER / 3),
    ANIMCMD_FRAME(1, ARCADE_BOARD_COUNTDOWN_TIMER / 3),
    ANIMCMD_FRAME(2, ARCADE_BOARD_COUNTDOWN_TIMER / 3),
    ANIMCMD_FRAME(2, 10),
    ANIMCMD_END
};

static const union AnimCmd *const sCountdownAnims[] =
{
    [ARCADE_COUNTDOWN_ANIM] = sCountdownPanelAnim
};

static const struct SpriteFrameImage sCountdownPanelPicTable[] =
{
    obj_frame_tiles(sCountdownTile3),
    obj_frame_tiles(sCountdownTile2),
    obj_frame_tiles(sCountdownTile1),
};

static const struct OamData CountdownPanelOam =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct SpriteTemplate sCountdownPanelSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = ARCADE_PALTAG_OPPONENT,
    .oam = &CountdownPanelOam,
    .anims = sCountdownAnims,
    .images = sCountdownPanelPicTable,
    .callback = SpriteCallbackDummy,
};

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
    [BG_BOARD_BACKGROUND] = sBackgroundTiles,
    [BG_BOARD_BACKBOARD] = sLogobackgroundTiles,
};

static const u32* const sArcadeTilemapLUT[] =
{
    [BG_BOARD_HELP_BAR] = NULL,
    [BG_BOARD_EVENTS] = NULL,
    [BG_BOARD_BACKGROUND] = sBackgroundTilemap,
    [BG_BOARD_BACKBOARD] = sLogobackgroundTilemap,
};

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sArcadeTilesLUT[backgroundId] == NULL || sArcadeTilemapLUT[backgroundId] == NULL);
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
            sGameBoardState->loadState++;
            break;
        case 2:
            LoadPalette(sGameBoardPalette_Pal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
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

static void LoadEventPalettes(void)
{
    u32 i = 0;

    for (i = 0; i < sizeof(sArcadePalettes); i++)
        sGameBoardState->cursorPaletteNum[i] = LoadSpritePalette(&sArcadePalettes[i]);
}

static void GenerateGameBoard(void)
{
    for (u32 event = 0; event < ARCADE_EVENT_COUNT; event++)
    {
        sGameBoard[event] = AllocZeroed(sizeof(struct GameResult));

        if (sGameBoard[event] == NULL)
        {
            SetMainCallback2(sGameBoardState->savedCallback);
            GameBoard_FreeResources();
            return;
        }
    }

    for (u32 space = 0; space < ARCADE_GAME_BOARD_SPACES; space++)
    {
        sGameBoard[space]->impact = GenerateImpact();
        sGameBoard[space]->event = GenerateEvent(sGameBoard[space]->impact);

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
    u32 i;
    struct Pokemon *party = LoadSideParty(side);

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        if (!GetMonData(&party[i], MON_DATA_SANITY_HAS_SPECIES))
            break;

        sGameBoardState->monIconSpriteId[side][i] = CreateMonIcon(GetMonData(&party[i], MON_DATA_SPECIES),SpriteCallbackDummy, x, y, 4, GetMonData(&party[i],MON_DATA_PERSONALITY));
        gSprites[sGameBoardState->monIconSpriteId[side][i]].oam.priority = 0;
        y += 30;
    }
}

static u32 GetHorizontalPositionFromSide(u32 side)
{
    return (side == ARCADE_IMPACT_OPPONENT) ? 215 : 22;
}

static struct Pokemon *LoadSideParty(u32 impact)
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
    AddTextPrinterParameterized4(windowId, fontId, 4, 1, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGameBoardWindowFontColors[TEXT_COLOR_WHITE], TEXT_SKIP_DRAW, GetHelpBarText());

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

    PlaySE(SE_SELECT);
    switch (GetGameBoardMode())
    {
        case ARCADE_BOARD_MODE_WAIT:
            StartCountdown();
            break;
        case ARCADE_BOARD_MODE_GAME_START:
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
    SetTimerForCountdown();
    PopulateCountdownSprites();
    PrintHelpBar();
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

static void PopulateCountdownSprites(void)
{
    u32 space, x, y;

    LoadEventPalettes();
    for (space = 0; space < (ARCADE_GAME_BOARD_ROWS * ARCADE_GAME_BOARD_COLUMNS); space++)
    {
        CalculatePanelPosition(space,&x,&y);
        sGameBoardState->countdownPanelSpriteId[space] = CreateCountdownPanel(x+12,y+12);
    }
}

static void CalculatePanelPosition(u32 space, u32* x, u32* y)
{
    u32 rowIndex = space / ARCADE_GAME_BOARD_COLUMNS;
    u32 columnIndex = space % ARCADE_GAME_BOARD_COLUMNS;
    *x = 65 + columnIndex * 32;
    *y = 17 + rowIndex * 32;
}

static u32 CreateCountdownPanel(u32 x, u32 y)
{
    return CreateSprite(&sCountdownPanelSpriteTemplate, x, y, 0);
}

static void Task_GameBoard_Countdown(u8 taskId)
{
    DecrementGameBoardTimer();

    switch(GetGameBoardTimer())
    {
        case ARCADE_COUNTDOWN_SHOW_FRAMES_2:
        case ARCADE_COUNTDOWN_SHOW_FRAMES_1:
            IncrementGameBoardMode();
            break;
        case 0:
            IncrementGameBoardMode();
            PopulateEventSprites();
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
    u32 space, x, y;

    LoadTileSpriteSheets();
    LoadEventPalettes();

    for (space = 0; space < (ARCADE_GAME_BOARD_ROWS * ARCADE_GAME_BOARD_COLUMNS); space++)
    {
        CalculatePanelPosition(space,&x,&y);
        sGameBoardState->eventIconSpriteId[space] = CreateEventSprite(x, y, space);
    }
}

static void LoadTileSpriteSheets(void)
{
    u32 i;
    for (i = 0; i < ARCADE_GAME_BOARD_SPACES; i++)
    {
        u16 TileTag = GetTileTag(i);
        const u32 *gfx = GetEventGfx(sGameBoard[i]->event);
        struct CompressedSpriteSheet sSpriteSheet_EventSpace = {gfx, 0x0200, TileTag};
        LoadCompressedSpriteSheet(&sSpriteSheet_EventSpace);
    }
}

static const u32* GetEventGfx(u32 event)
{
    switch (event)
    {
        case ARCADE_EVENT_LOWER_HP: return sEventLowerHp;
        case ARCADE_EVENT_POISON: return sEventPoison;
        case ARCADE_EVENT_PARALYZE: return sEventParalyze;
        case ARCADE_EVENT_BURN: return sEventBurn;
        case ARCADE_EVENT_SLEEP: return sEventSleep;
        case ARCADE_EVENT_FREEZE: return sEventFreeze;
        case ARCADE_EVENT_GIVE_BERRY: return sEventGiveBerry;
        case ARCADE_EVENT_GIVE_ITEM: return sEventGiveItem;
        case ARCADE_EVENT_LEVEL_UP: return sEventLevelUp;
        case ARCADE_EVENT_SUN: return sEventSun;
        case ARCADE_EVENT_RAIN: return sEventRain;
        case ARCADE_EVENT_SAND: return sEventSand;
        case ARCADE_EVENT_HAIL: return sEventHail;
        case ARCADE_EVENT_FOG: return sEventFog;
        case ARCADE_EVENT_TRICK_ROOM: return sEventTrickRoom;
        case ARCADE_EVENT_SWAP: return sEventSwap;
        case ARCADE_EVENT_SPEED_UP: return sEventSpeedUp;
        case ARCADE_EVENT_SPEED_DOWN: return sEventSpeedDown;
        case ARCADE_EVENT_RANDOM: return sEventRandom;
        case ARCADE_EVENT_GIVE_BP_SMALL: return sEventGiveBpSmall;
        case ARCADE_EVENT_NO_BATTLE: return sEventNoBattle;
        case ARCADE_EVENT_GIVE_BP_BIG: return sEventGiveBpBig;
        default:
        case ARCADE_EVENT_NO_EVENT: return sEventNoEvent;
    }
}

static u8 CreateEventSprite(u32 x, u32 y, u32 space)
{
    u32 spriteId;
    u16 TileTag = GetTileTag(space);
    u32 impact = (sGameBoard[space]->impact == ARCADE_IMPACT_PLAYER) ? ARCADE_IMPACT_PLAYER : ARCADE_IMPACT_OPPONENT;

    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag = TileTag;
    TempSpriteTemplate.paletteTag = ARCADE_PALTAG_EVENT + impact;
    TempSpriteTemplate.callback = SpriteCallbackDummy;

    spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
    gSprites[spriteId].oam.priority = 0;

    return spriteId;
}

static const u16 GetTileTag(u32 space)
{
    return (sGameBoard[space]->event) + ARCADE_GFXTAG_EVENT;
}

static void StartGame(void)
{
    SetTimerForGame();
    InitCursorPositionFromSaveblock();
    CreateGameBoardCursor();
    DestroyCountdownPanels();
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
    u16 TileTag = ARCADE_GFXTAG_CURSOR;
    u32 spriteId;

    struct CompressedSpriteSheet sSpriteSheet_Cursor = {sGameCursor, 0x0800, TileTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    LoadCompressedSpriteSheet(&sSpriteSheet_Cursor);

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

static void DestroyCountdownPanels(void)
{
    u32 space;

    for (space = 0; space < ARCADE_GAME_BOARD_SPACES; space++)
    {
        DestroySpriteAndFreeResources(&gSprites[sGameBoardState->countdownPanelSpriteId[space]]);
        sGameBoardState->countdownPanelSpriteId[space] = 0;
    }
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
        SetCursorPosition(Random() % ARCADE_GAME_BOARD_SPACES);
    else
    {
        if (newPosition >= ARCADE_GAME_BOARD_SPACES)
            SetCursorPosition(0);
        else
            SetCursorPosition(newPosition);
    }

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
    u32 impact = 0, event = 0;

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

static void SelectGameBoardSpace(u32 *impact, u32 *event)
{
    u32 space = GetCursorPosition();

    *impact = sGameBoard[space]->impact;
    *event = sGameBoard[space]->event;
}

static void HandleGameBoardResult(u32 impact, u32 event)
{
    LOCAL_VAR_GAME_BOARD_SUCCESS = DoGameBoardResult(event, impact);
    BufferImpactedName(gStringVar1,impact);

    SetGameBoardToChosenEvent(impact,event);
    StoreEventToVar(event);
    StoreImpactedSideToVar(impact);
}

static void BufferImpactedName(u8 *dest, u32 impact)
{
    if (impact == ARCADE_IMPACT_PLAYER)
        StringCopy_PlayerName(dest, gSaveBlock2Ptr->playerName);
    else
        GetFrontierTrainerName(dest, GetImpactedTrainerId(impact));
}

static u32 GetImpactedTrainerId(u32 impact)
{
    return (impact == ARCADE_IMPACT_PLAYER) ? TRAINER_PLAYER : TRAINER_BATTLE_PARAM.opponentA;
}

static void SetGameBoardToChosenEvent(u32 impact, u32 event)
{
    u32 i;
    for (i = 0; i < ARCADE_GAME_BOARD_SPACES; i++)
    {
        sGameBoard[i]->impact = impact;
        sGameBoard[i]->event = event;
    }
}

static void StoreEventToVar(u32 event)
{
    LOCAL_VAR_GAME_BOARD_EVENT = event;
}

static void StoreImpactedSideToVar(u32 impact)
{
    LOCAL_VAR_GAME_BOARD_IMPACT = impact;
}

static void DestroyEventSprites(void)
{
    u32 space;

    for (space = 0; space < ARCADE_GAME_BOARD_SPACES; space++)
    {
        DestroySpriteAndFreeResources(&gSprites[sGameBoardState->eventIconSpriteId[space]]);
        sGameBoardState->eventIconSpriteId[space] = 0;
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
    static const u32 ImpactTable[][ARCADE_IMPACT_COUNT] =
    {
        //Opponent, Player, All, Special
        [ARCADE_PERFORMANCE_BRACKET_0_4]     = {10, 75, 10, 5},
        [ARCADE_PERFORMANCE_BRACKET_5_10]    = {25, 40, 30, 5},
        [ARCADE_PERFORMANCE_BRACKET_11_15]   = {30, 30, 35, 5},
        [ARCADE_PERFORMANCE_BRACKET_16_20]   = {35, 20, 30, 15},
        [ARCADE_PERFORMANCE_BRACKET_21_PLUS] = {15, 15, 40, 30},
    };

    u32 impactThreshold = 0, impactIndex = 0;
    u32 randImpact = Random() % 100;
    u32 impactBracket = ConvertPerformanceToImpactBracket();

    for (impactIndex = 0; impactIndex < ARCADE_IMPACT_COUNT; impactIndex++)
    {
        impactThreshold += ImpactTable[impactBracket][impactIndex];
        if (randImpact < impactThreshold)
            return impactIndex;
    }
    return ARCADE_IMPACT_PLAYER;
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

static u32 GenerateEvent(u32 impact)
{
    u32 event = GenerateRandomBetweenBounds(impact);

    do
    {
        event = GenerateRandomBetweenBounds(impact);
    } while (!IsEventValidDuringBattleOrStreak(event,impact));

    return event;
}

static u32 GenerateRandomBetweenBounds(u32 impact)
{
    u32 upper = GetPanelUpperBound(impact);
    u32 lower = GetPanelLowerBound(impact);

    return (lower + Random() % (upper - lower + 1));
}

static s32 GetPanelUpperBound(u32 impact)
{
    //Not Inclusive
    switch (impact)
    {
        case ARCADE_IMPACT_PLAYER:
        case ARCADE_IMPACT_OPPONENT:
            return ARCADE_EVENT_WEATHER_START;
        case ARCADE_IMPACT_ALL:
            return ARCADE_EVENT_SPECIAL_START;
        default:
        case ARCADE_IMPACT_SPECIAL:
            return ARCADE_EVENT_COUNT;
    }
}

static s32 GetPanelLowerBound(u32 impact)
{
    //Inclusive
    switch (impact)
    {
        case ARCADE_IMPACT_PLAYER:
        case ARCADE_IMPACT_OPPONENT:
            return ARCADE_EVENT_INDIVIDUAL_START;
        case ARCADE_IMPACT_ALL:
            return ARCADE_EVENT_WEATHER_START;
        default:
        case ARCADE_IMPACT_SPECIAL:
            return ARCADE_EVENT_SPECIAL_START;
    }
}

static bool32 IsEventValidDuringBattleOrStreak(u32 event, u32 impact)
{
    if (IsEventBanned(event))
        return FALSE;
    if (!IsEventValidDuringCurrentStreak(event))
        return FALSE;
    if (!IsEventValidDuringCurrentBattle(event))
        return FALSE;

    return TRUE;
}

static bool32 IsEventBanned(u32 event)
{
#ifndef RHH_EXPANSION
    if ((event == ARCADE_EVENT_TRICK_ROOM) || (event == ARCADE_EVENT_FOG))
        return TRUE;
#endif
    return FALSE;
}

static bool32 IsEventValidDuringCurrentBattle(u32 event)
{
    static const u32 SpecialPanelTable[ARCADE_EVENT_COUNT][SILICON_FRONTIER_STREAK_LENGTH_BOSS] =
    {
        //Battle 1  2  3  4  5  6  7  8  9  10
        [ARCADE_EVENT_SWAP]          = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
        [ARCADE_EVENT_SPEED_UP]      = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
        [ARCADE_EVENT_SPEED_DOWN]    = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
        [ARCADE_EVENT_RANDOM]        = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
        [ARCADE_EVENT_GIVE_BP_SMALL] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 0},
        [ARCADE_EVENT_NO_BATTLE]     = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        [ARCADE_EVENT_GIVE_BP_BIG]   = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        [ARCADE_EVENT_NO_EVENT]      = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    if (event < ARCADE_EVENT_SPECIAL_START)
        return TRUE;

    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();
    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);

    if (!SpecialPanelTable[event][1+(currentStreak % SILICON_FRONTIER_STREAK_LENGTH_BOSS)])
        return FALSE;

    return TRUE;
}

static bool32 IsEventValidDuringCurrentStreak(u32 event)
{
    static const u32 PanelStreakTable[ARCADE_EVENT_COUNT][ARCADE_STREAK_NUM_COUNT] =
    {                           //Streak 1  2  3  4  5  6  7  8  9  10
        [ARCADE_EVENT_LOWER_HP]      =  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        [ARCADE_EVENT_POISON]        =  {1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_PARALYZE]      =  {1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_BURN]          =  {1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_SLEEP]         =  {0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
        [ARCADE_EVENT_FREEZE]        =  {0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
        [ARCADE_EVENT_GIVE_BERRY]    =  {1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_GIVE_ITEM]     =  {0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
        [ARCADE_EVENT_LEVEL_UP]      =  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        [ARCADE_EVENT_SUN]           =  {0, 1, 1, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_RAIN]          =  {0, 1, 1, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_SAND]          =  {0, 1, 1, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_HAIL]          =  {0, 1, 1, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_FOG]           =  {0, 0, 0, 0, 1, 1, 0, 0, 1, 1},
        [ARCADE_EVENT_TRICK_ROOM]    =  {0, 0, 0, 0, 1, 1, 0, 0, 1, 1},
        [ARCADE_EVENT_SWAP]          =  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        [ARCADE_EVENT_SPEED_UP]      =  {1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_SPEED_DOWN]    =  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        [ARCADE_EVENT_RANDOM]        =  {0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
        [ARCADE_EVENT_GIVE_BP_SMALL] =  {0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
        [ARCADE_EVENT_NO_BATTLE]     =  {0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
        [ARCADE_EVENT_GIVE_BP_BIG]   =  {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        [ARCADE_EVENT_NO_EVENT]      =  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    if (event < ARCADE_EVENT_SPECIAL_START)
        return TRUE;

    if (!PanelStreakTable[event][GetChallengeNumIndex()])
        return FALSE;

    return TRUE;
}

static u32 GetChallengeNumIndex(void)
{
    u32 challengeNum = GetChallengeNum();

    if (challengeNum > ARCADE_STREAK_NUM_MAX)
        return ARCADE_STREAK_NUM_MAX;
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
static bool32 DoGameBoardResult(u32 event, u32 impact)
{
    switch (event)
    {
        case ARCADE_EVENT_LOWER_HP: return BattleArcade_DoLowerHP(impact);
        case ARCADE_EVENT_POISON: return BattleArcade_DoPoison(impact);
        case ARCADE_EVENT_PARALYZE: return BattleArcade_DoParalyze(impact);
        case ARCADE_EVENT_BURN: return BattleArcade_DoBurn(impact);
        case ARCADE_EVENT_SLEEP: return BattleArcade_DoSleep(impact);
        case ARCADE_EVENT_FREEZE: return BattleArcade_DoFreeze(impact);
        case ARCADE_EVENT_GIVE_BERRY: return BattleArcade_DoGiveBerry(impact);
        case ARCADE_EVENT_GIVE_ITEM: return BattleArcade_DoGiveItem(impact);
        case ARCADE_EVENT_LEVEL_UP: return BattleArcade_DoLevelUp(impact);
        case ARCADE_EVENT_SUN: return BattleArcade_DoSun();
        case ARCADE_EVENT_RAIN: return BattleArcade_DoRain();
        case ARCADE_EVENT_SAND: return BattleArcade_DoSand();
        case ARCADE_EVENT_HAIL: return BattleArcade_DoHail();
        case ARCADE_EVENT_FOG: return BattleArcade_DoFog();
        case ARCADE_EVENT_TRICK_ROOM: return BattleArcade_DoTrickRoom();
        case ARCADE_EVENT_SWAP: return BattleArcade_DoSwap();
        case ARCADE_EVENT_SPEED_UP: return BattleArcade_DoSpeedUp();
        case ARCADE_EVENT_SPEED_DOWN: return BattleArcade_DoSpeedDown();
        case ARCADE_EVENT_RANDOM: return BattleArcade_DoRandom();
        case ARCADE_EVENT_GIVE_BP_SMALL: return BattleArcade_DoGiveBPSmall();
        case ARCADE_EVENT_GIVE_BP_BIG: return BattleArcade_DoGiveBPBig();
        case ARCADE_EVENT_NO_BATTLE: return BattleArcade_DoNoBattle();
        default:
        case ARCADE_EVENT_NO_EVENT: return BattleArcade_DoNoEvent();
    }
    return TRUE;
}

static bool32 BattleArcade_DoLowerHP(u32 impact)
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

static bool32 BattleArcade_DoPoison(u32 impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_TOXIC_POISON);
}
static bool32 BattleArcade_DoParalyze(u32 impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_PARALYSIS);
}
static bool32 BattleArcade_DoBurn(u32 impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_BURN);
}
static bool32 BattleArcade_DoSleep(u32 impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_SLEEP);
}
static bool32 BattleArcade_DoFreeze(u32 impact)
{
    return BattleArcade_DoStatusAilment(impact, STATUS1_FREEZE);
}

static bool32 BattleArcade_DoStatusAilment(u32 impact, u32 status)
{
    struct Pokemon *party = LoadSideParty(impact);
    u32 impactedCount = 0;
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

static bool32 BattleArcade_DoGiveBerry(u32 impact)
{
    u32 item = VarGet(VAR_ARCADE_BERRY);
    return BattleArcade_DoGive(impact, item);
}

static bool32 BattleArcade_DoGiveItem(u32 impact)
{
    u32 item = VarGet(VAR_ARCADE_ITEM);
    return BattleArcade_DoGive(impact, item);
}

static bool32 BattleArcade_DoGive(u32 impact, u32 item)
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

static void BufferGiveString(u32 item)
{
    CopyItemName(item,gStringVar3);
}

static bool32 BattleArcade_DoLevelUp(u32 impact)
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

static bool32 BattleArcade_DoSun(void)
{
    return BattleArcade_DoWeather(WEATHER_DROUGHT);
}
static bool32 BattleArcade_DoRain(void)
{
    return BattleArcade_DoWeather(WEATHER_DOWNPOUR);
}
static bool32 BattleArcade_DoSand(void)
{
    return BattleArcade_DoWeather(WEATHER_SANDSTORM);
}
static bool32 BattleArcade_DoHail(void)
{
    return BattleArcade_DoWeather(WEATHER_SNOW);
}
static bool32 BattleArcade_DoFog(void)
{
    return BattleArcade_DoWeather(WEATHER_FOG_HORIZONTAL);
}

static bool32 BattleArcade_DoWeather(u32 weather)
{
    SetSavedWeather(weather);
    DoCurrentWeather();
    return TRUE;
}

static bool32 BattleArcade_DoTrickRoom(void)
{
    SetStartingStatus(STARTING_STATUS_TRICK_ROOM_TEMPORARY);
    return TRUE;
}

static bool32 BattleArcade_DoSwap(void)
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

static bool32 BattleArcade_DoSpeedUp(void)
{
    BattleArcade_ChangeSpeed(ARCADE_EVENT_SPEED_UP);
    return TRUE;
}

static bool32 BattleArcade_DoSpeedDown(void)
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

static bool32 BattleArcade_DoRandom(void)
{
    SetCursorRandomMode();
    return TRUE;
}

static void SetCursorRandomMode(void)
{
    gSaveBlock2Ptr->frontier.arcadeCursorData.isRandom = TRUE;
}

static bool32 BattleArcade_DoGiveBPSmall(void)
{
    GiveFrontierBattlePoints(ARCADE_BP_SMALL);
    return TRUE;
}

static bool32 BattleArcade_DoGiveBPBig(void)
{
    GiveFrontierBattlePoints(ARCADE_BP_BIG);
    return TRUE;
}

static bool32 BattleArcade_DoNoBattle(void)
{
    return TRUE;
}

static bool32 BattleArcade_DoNoEvent(void)
{
    return TRUE;
}
