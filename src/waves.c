#include "global.h"
#include "bg.h"
#include "window.h"
#include "scanline_effect.h"
#include "quest_logic.h"
#include "dma3.h"
#include "overworld.h"
#include "event_data.h"
#include "sound.h"
#include "ui_main_menu.h"
#include "international_string_util.h"
#include "field_weather.h"
#include "options_visual.h"
#include "malloc.h"
#include "random.h"
#include "waves.h"
#include "palette.h"
#include "task.h"
#include "string_util.h"
#include "ui_adventure_guide.h"
#include "constants/ui_adventure_guide.h"
#include "menu.h"
#include "menu_helpers.h"
#include "ui_start_menu.h"
#include "constants/quests.h"
#include "constants/rgb.h"
#include "constants/waves.h"
#include "constants/songs.h"
#include "data/waves.h"
#include "event_object_movement.h"

static void Debug_LoadUpGoals(void);
static const u8 *const Waves_GetTitle(enum GoalEnum goal);
static const u8 *const Waves_GetDesc(enum GoalEnum goal);
static const u32* Waves_GetThumbnail(enum GoalEnum goal);
const u16* Waves_GetPalette(enum GoalEnum goalId);
const u32 Waves_GetGoal(enum GoalEnum goalId);
const enum SubQuestDefines Waves_GetRelatedSubQuest(enum GoalEnum goalId);
const enum QuestIdList Waves_GetRelatedQuest(enum GoalEnum goalId);
u8 Waves_GetPercentRaised(enum GoalEnum goalId, enum GoalAttributes attribute);
u8 Waves_GetPlayerPercent(enum GoalEnum goalId);
u8 Waves_GetPassivePercent(enum GoalEnum goalId);
u8 Waves_CalculateAmountRaised(enum GoalEnum goalId);
u8 Waves_CalculateAmountRemaining(enum GoalEnum goalId, enum GoalAttributes attributes);
static void Waves_AllPassiveIncrease(void);
static void Waves_PassiveIncrease(enum GoalEnum goalId);
static void Waves_VBlankCB(void);
static void Waves_MainCB(void);
static bool32 Waves_InitializeBackgrounds(void);
static bool32 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(void);
static void SetScheduleBgs(enum WavesBackgrounds backgroundId);
static bool8 AreTilesOrTilemapEmpty(enum WavesBackgrounds backgroundId);
static bool8 ShouldSkipBg(enum WavesBackgrounds backgroundId);
static void LoadGraphics(void);
static void LoadWavesPalettes(void);
static void PlaySoundStartFadeQuitApp(u8 taskId);
static void Task_WaitFadeAndExitGracefully(u8 taskId);
void Waves_FadescreenAndExitGracefully(void);
static void Waves_FreeResources(void);
static void Waves_FreeStructs(void);
static void Waves_FreeBackgrounds(void);
static void SaveCallbackToWaves(MainCallback callback);
static void Waves_InitializeAndSaveCallback(MainCallback callback);
void Waves_SetupCallback(void);
static void Waves_InitWindows(void);
static void Task_HandleInput(u8 taskId);
static void DetailPage_HandleInput(u8 taskId);
static void Donate_HandleInput(u8 taskId);
static void Confirm_HandleInput(u8 taskId);
static void Waves_OpenGoal(u8 taskId);
static void Waves_ChangeColumn(s32 direction);
static void Waves_ChangeRow(s32 direction);
static void FreeSpritePalettesResetSpriteData(void);
static bool32 AllocateStructs(void);
static void Waves_ReturnFromAdventureGuide(void);
static void ClearAllWindows(void);
static void Waves_InitializeBackgroundsAndLoadBackgroundGraphics(void);
static void Waves_PrintMenuHeader(enum WavesWindowsGrid windowId);
static void Waves_PrintHeaderText(enum WavesWindowsGrid windowId);
static void Waves_PrintAllCards(void);
static u32 ConvertGoalIdToWindowId(enum GoalEnum goalId);
static void Waves_PrintCard(enum GoalEnum goalId);
static void Waves_PrintCardHeader(enum GoalEnum goalId);
static enum GoalEnum GetGoalFromCurrentPosition(void);
static void Waves_PrintCardText(enum GoalEnum goalId);
static void Waves_PrintCardThumbnail(enum GoalEnum goalId);
static void SpriteCB_MoveGoalCursor(struct Sprite *sprite);
static void Waves_PrintCursor(void);
static void Waves_PrintCardMeter(enum GoalEnum goalId);
static void SetCursorPosition(enum WavesCursorPosition position);
static enum WavesCursorPosition GetCursorPosition(void);
static void ResetCursorPosition(void);
static void SetDonatePosition(u32 position);
static u32 GetDonatePosition(void);
static void ResetDonatePosition(void);
static void SetConfirmPosition(bool32 position);
static u32 GetConfirmPosition(void);
static void ResetConfirmPosition(void);
static enum WavesMode Waves_GetMode(void);
static void Waves_SetMode(enum WavesMode mode);

static const u32* const meterPassiveLeftLUT[] =
    {
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar1.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar2.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar3.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar4.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar5.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar6.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/leftGoalBar7.4bpp.smol"),
    };

static const u32* const meterPassiveCenterLUT[] =
    {
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar1.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar2.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar3.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar4.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar5.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar6.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar7.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/centerGoalBar8.4bpp.smol"),
    };

static const u32* const meterPassiveRightLUT[] =
    {
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar1.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar2.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar3.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar4.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar5.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar6.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/passive/rightGoalBar7.4bpp.smol"),
    };

static const u32* const meterPlayerLeftLUT[] =
    {
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar1.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar2.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar3.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar4.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar5.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar6.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/leftGoalBar7.4bpp.smol"),
    };

static const u32* const meterPlayerCenterLUT[] =
    {
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar1.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar2.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar3.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar4.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar5.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar6.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar7.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/centerGoalBar8.4bpp.smol"),
    };

static const u32* const meterPlayerRightLUT[] =
    {
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar0.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar1.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar2.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar3.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar4.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar5.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar6.4bpp.smol"),
        (const u32[])INCBIN_U32("graphics/ui_menus/waves/assets/player/rightGoalBar7.4bpp.smol"),
    };

static const u16 wavesPalettesDefault[] = INCBIN_U16("graphics/accept/palettes/default.gbapal");
static const u16 wavesPalettesBlack[] = INCBIN_U16("graphics/accept/palettes/black.gbapal");
static const u16 wavesPalettesBlue[] = INCBIN_U16("graphics/accept/palettes/blue.gbapal");
static const u16 wavesPalettesGreen[] = INCBIN_U16("graphics/accept/palettes/green.gbapal");
static const u16 wavesPalettesPlatinum[] = INCBIN_U16("graphics/accept/palettes/platinum.gbapal");
static const u16 wavesPalettesRed[] = INCBIN_U16("graphics/accept/palettes/red.gbapal");
static const u16 wavesPalettesScarlet[] = INCBIN_U16("graphics/accept/palettes/scarlet.gbapal");
static const u16 wavesPalettesViolet[] = INCBIN_U16("graphics/accept/palettes/violet.gbapal");
static const u16 wavesPalettesWhite[] = INCBIN_U16("graphics/accept/palettes/white.gbapal");
static const u16 wavesPalettesYellow[] = INCBIN_U16("graphics/accept/palettes/yellow.gbapal");
static const u16 wavesPalettesText[] = INCBIN_U16("graphics/ui_menus/waves/palettes/text.gbapal");

static const u32 wavesInterfaceTiles[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_inferface.4bpp.smol");
static const u32 wavesInterfaceTilemap[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_inferface.bin.smolTM");

static const u32 siliconBgTiles[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/bg.4bpp.smol");
static const u32 siliconBgTilemap[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/bg.bin.smolTM");

struct WavesState *sWavesState = NULL;
static u8 *sBgTilemapBuffer[BG_WAVES_COUNT] = {NULL};
static bool8 firstOpen;

const u8 sWavesWindowFontColors[][3] =
{
    [WAVES_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [WAVES_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
};


static const struct BgTemplate sWavesBgTemplates[BG_WAVES_COUNT] =
    {
        [BG0_WAVES_TEXT] =
        {
            .bg = BG0_WAVES_TEXT,
            .charBaseIndex = 0,
            .mapBaseIndex = 31,
            .priority = 0,
        },
        [BG1_WAVES_INTERFACE] =
        {
            .bg = BG1_WAVES_INTERFACE,
            .charBaseIndex = 2,
            .mapBaseIndex = 25,
            .priority = 1,
        },
        [BG2_WAVES_WALLPAPER] =
        {
            .bg = BG2_WAVES_WALLPAPER,
            .charBaseIndex = 3,
            .mapBaseIndex = 27,
            .priority = 2,
        },
    };

static const struct WindowTemplate sWavesGridWindows[] =
    {
        [WIN_WAVES_CARD_HEADER] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 0,
            .tilemapTop = 0,
            .width = 30,
            .height = 2,
            .paletteNum = WAVES_PALETTE_TEXT_ID,
            .baseBlock = 1,
        },
        [WIN_WAVES_CARD_1] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 2,
            .tilemapTop = 3,
            .width = 8,
            .height = 7,
            .paletteNum = WAVES_PALETTE_TEXT_ID,
            .baseBlock = 1 + (30 * 2),
        },
        [WIN_WAVES_CARD_2] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 11,
            .tilemapTop = 3,
            .width = 8,
            .height = 7,
            .paletteNum = WAVES_PALETTE_TEXT_ID,
            .baseBlock = 1 + (30 * 2) + (8 * 7),
        },
        [WIN_WAVES_CARD_3] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 20,
            .tilemapTop = 3,
            .width = 8,
            .height = 7,
            .paletteNum = WAVES_PALETTE_TEXT_ID,
            .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7),
        },
        [WIN_WAVES_CARD_4] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 2,
            .tilemapTop = 12,
            .width = 8,
            .height = 7,
            .paletteNum = WAVES_PALETTE_TEXT_ID,
            .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7),
        },
        [WIN_WAVES_CARD_5] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 11,
            .tilemapTop = 12,
            .width = 8,
            .height = 7,
            .paletteNum = WAVES_PALETTE_TEXT_ID,
            .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
        },
        [WIN_WAVES_CARD_6] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 20,
            .tilemapTop = 12,
            .width = 8,
            .height = 7,
            .paletteNum = WAVES_PALETTE_TEXT_ID,
            .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
        },
        [WIN_WAVES_GOAL_FOOTER] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 0,
            .tilemapTop = 18,
            .width = 30,
            .height = 2,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
        },
        DUMMY_WIN_TEMPLATE
    };

static const struct WindowTemplate sWavesGoalWindows[] =
    {
        [WIN_WAVES_GOAL_HEADER] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 0,
            .tilemapTop = 0,
            .width = 30,
            .height = 2,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1,
        },
        [WIN_WAVES_GOAL_TITLE] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 1,
            .tilemapTop = 3,
            .width = 12,
            .height = 2,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2),
        },
        [WIN_WAVES_GOAL_DESC] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 0,
            .tilemapTop = 13,
            .width = 30,
            .height = 5,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2) + (12 * 2),
        },
        [WIN_WAVES_GOAL_PLAYER] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 15,
            .tilemapTop = 5,
            .width = 13,
            .height = 1,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5),
        },
        [WIN_WAVES_GOAL_PASSIVE] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 15,
            .tilemapTop = 7,
            .width = 13,
            .height = 1,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1),
        },
        [WIN_WAVES_GOAL_TOTAL] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 15,
            .tilemapTop = 7,
            .width = 13,
            .height = 1,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1),
        },
        [WIN_WAVES_GOAL_RAISED] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 14,
            .tilemapTop = 3,
            .width = 15,
            .height = 10,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1) + (15 * 7),
        },
        [WIN_WAVES_GOAL_FOOTER] =
        {
            .bg = BG0_WAVES_TEXT,
            .tilemapLeft = 0,
            .tilemapTop = 18,
            .width = 30,
            .height = 2,
            .paletteNum = WAVES_PALETTE_INTERFACE_ID,
            .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1) + (15 * 7) + (15 * 10)
        },
        DUMMY_WIN_TEMPLATE
    };

static const u8 *const Waves_GetTitle(enum GoalEnum goal)
{
    return sWavesInformation[goal].title;
}

static const u8 *const Waves_GetDesc(enum GoalEnum goal)
{
    return sWavesInformation[goal].desc;
}

static const u32* Waves_GetThumbnail(enum GoalEnum goal)
{
    return sWavesInformation[goal].thumbnail;
}

const u16* Waves_GetPalette(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].palette;
}

const u32 Waves_GetGoal(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].goal;
}

const enum SubQuestDefines Waves_GetRelatedSubQuest(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].relatedSubQuest;
}

const enum QuestIdList Waves_GetRelatedQuest(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].relatedQuest;
}

u8 Waves_GetPercentRaised(enum GoalEnum goalId, enum GoalAttributes attribute)
{
    return gSaveBlock3Ptr->wavesFunds[attribute];
}

static void Waves_SetPercentRaised(enum GoalEnum goalId, enum GoalAttributes attribute, u32 amount)
{
    gSaveBlock3Ptr->wavesFunds[attribute] = amount;
}

void Waves_SetPlayerPercent(enum GoalEnum goalId, u32 amount)
{
    Waves_SetPercentRaised(goalId, GOAL_PLAYER_PERCENT, amount);
}

void Waves_SetPassivePercent(enum GoalEnum goalId, u32 amount)
{
    Waves_SetPercentRaised(goalId, GOAL_PASSIVE_PERCENT, amount);
}

static void Waves_IncreasePlayerPercent(enum GoalEnum goalId, u32 amount)
{
    u32 existing = Waves_GetPlayerPercent(goalId);
    Waves_SetPlayerPercent(goalId,(existing+amount));
}

static void Waves_IncreasePassivePercent(enum GoalEnum goalId, u32 amount)
{
    u32 existing = Waves_GetPassivePercent(goalId);
    Waves_SetPassivePercent(goalId,(existing+amount));
}

u8 Waves_GetPlayerPercent(enum GoalEnum goalId)
{
    return Waves_GetPercentRaised(goalId, GOAL_PLAYER_PERCENT);
}

u8 Waves_GetPassivePercent(enum GoalEnum goalId)
{
    return Waves_GetPercentRaised(goalId, GOAL_PASSIVE_PERCENT);
}

void Waves_DoDailyPassiveIncrease(u32 daysSince)
{
    if (!QuestMenu_GetSetQuestState(QUEST_MUTUALAIDFUND, FLAG_GET_ACTIVE))
        return;

    if (QuestMenu_GetSetQuestState(QUEST_MUTUALAIDFUND, FLAG_GET_REWARD))
        return;

    if (QuestMenu_GetSetQuestState(QUEST_MUTUALAIDFUND, FLAG_GET_COMPLETED))
        return;

    while (--daysSince != 0xFFFF)
        Waves_AllPassiveIncrease();
}

static void Waves_AllPassiveIncrease(void)
{
    for (enum GoalEnum goalId = 0; goalId < GOAL_COUNT; goalId++)
        Waves_PassiveIncrease(goalId);
}

static void Waves_PassiveIncrease(enum GoalEnum goalId)
{
    u32 maxPassive = (HasPlayerJoinedTheTide()) ? WAVES_PASSIVE_INCREASE_TRUE : WAVES_PASSIVE_INCREASE;
    u32 percent[GOAL_PERCENT_COUNT] =
    {
        Waves_GetPlayerPercent(goalId),
        Waves_GetPassivePercent(goalId)
    };
    u32 amount = (Random() % maxPassive) + percent[GOAL_PASSIVE_PERCENT];

    if (amount > percent[GOAL_PLAYER_PERCENT])
        return;

    Waves_IncreasePassivePercent(goalId,amount);
}

u8 Waves_CalculatePercentRaised(enum GoalEnum goalId)
{
    return (Waves_GetPlayerPercent(goalId) + Waves_GetPassivePercent(goalId));
}

u8 Waves_CalculateAmountRaised(enum GoalEnum goalId)
{
    return (Waves_GetGoal(goalId) / Waves_CalculatePercentRaised(goalId));
}

u8 Waves_CalculateAmountRemaining(enum GoalEnum goalId, enum GoalAttributes attributes)
{
    return (Waves_GetGoal(goalId) - Waves_CalculateAmountRaised(goalId));
};

static void Waves_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Waves_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool32 Waves_InitializeBackgrounds(void)
{
    ResetAllBgsCoordinates();

    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs();

    return TRUE;
}
static bool32 AllocZeroedTilemapBuffers(void)
{
    enum WavesBackgrounds backgroundId;

    for (backgroundId = 0; backgroundId < BG_WAVES_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sWavesBgTemplates, NELEMS(sWavesBgTemplates));

    for (enum WavesBackgrounds backgroundId = 0; backgroundId < BG_WAVES_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
}

static void SetScheduleBgs(enum WavesBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static const u32* const sWavesTilesLUT[] =
    {
        [BG0_WAVES_TEXT] = NULL,
        [BG1_WAVES_INTERFACE] = wavesInterfaceTiles,
        [BG2_WAVES_WALLPAPER] = siliconBgTiles,
    };

static const u32* const sWavesTilemapLUT[] =
    {
        [BG0_WAVES_TEXT] = NULL,
        [BG1_WAVES_INTERFACE] = wavesInterfaceTilemap,
        [BG2_WAVES_WALLPAPER] = siliconBgTilemap,
    };

static const u16* const sWavesPalettesLUT[] =
    {
        [VISUAL_OPTION_COLOR_RED] = wavesPalettesRed,
        [VISUAL_OPTION_COLOR_GREEN] = wavesPalettesGreen,
        [VISUAL_OPTION_COLOR_BLUE] = wavesPalettesBlue,
        [VISUAL_OPTION_COLOR_YELLOW] = wavesPalettesYellow,
        [VISUAL_OPTION_COLOR_BLACK] = wavesPalettesBlack,
        [VISUAL_OPTION_COLOR_WHITE] = wavesPalettesWhite,
        [VISUAL_OPTION_COLOR_PLATINUM] = wavesPalettesPlatinum,
        [VISUAL_OPTION_COLOR_SCARLET] = wavesPalettesScarlet,
        [VISUAL_OPTION_COLOR_VIOLET] = wavesPalettesViolet,
        [VISUAL_OPTION_COLOR_CUSTOM] = wavesPalettesDefault,
        [VISUAL_OPTION_COLOR_COUNT] = wavesPalettesDefault,
    };

static bool8 AreTilesOrTilemapEmpty(enum WavesBackgrounds backgroundId)
{
    return (sWavesTilesLUT[backgroundId] == NULL || sWavesTilesLUT[backgroundId] == NULL);
}

static bool8 UNUSED ShouldSkipBg(enum WavesBackgrounds backgroundId)
{
    if (backgroundId == BG1_WAVES_INTERFACE)
        return TRUE;

    if (backgroundId == BG0_WAVES_TEXT)
        return FALSE;

    return FALSE;
}

static void LoadGraphics(void)
{
    u32 backgroundId;
    ResetTempTileDataBuffers();
    for (backgroundId = BG0_WAVES_TEXT; backgroundId < BG_WAVES_COUNT; backgroundId++)
    {
        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sWavesTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sWavesTilemapLUT[backgroundId],0,0);
    }
    LoadWavesPalettes();
}

static void LoadWavesPalettes(void)
{
    LoadPalette(sWavesPalettesLUT[GetVisualColor()], WAVES_PALETTE_INTERFACE_SLOT, PLTT_SIZE_4BPP);

    LoadPalette(wavesPalettesText, WAVES_PALETTE_TEXT_SLOT, PLTT_SIZE_4BPP);
}

static void ClearWindowCopyToVram(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void PlaySoundStartFadeQuitApp(u8 taskId)
{
    PlaySE(SE_PC_OFF);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_WaitFadeAndExitGracefully;
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(sWavesState->savedCallback);
    Waves_FreeResources();
    DestroyTask(taskId);
}

void Waves_FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Waves_VBlankCB);
    SetMainCallback2(Waves_MainCB);
}

static void Waves_FreeResources(void)
{
    FreeSpritePalettesResetSpriteData();
    Waves_FreeStructs();
    Waves_FreeBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void Waves_FreeStructs(void)
{
    if (sWavesState != NULL)
        Free(sWavesState);
}

static void Waves_FreeBackgrounds(void)
{
    enum WavesBackgrounds backgroundId;

    for (backgroundId = 0; backgroundId < BG_WAVES_COUNT; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

void CB2_WavesFromStartMenu(void)
{
    Waves_InitializeAndSaveCallback(CB2_StartMenu_ReturnToUI);
}

static void Waves_InitializeAndSaveCallback(MainCallback callback)
{
    enum AdventureGuideList targetGuide = GUIDE_WAVES_OF_CHANGE;

    if (!shouldSkipGuide(targetGuide))
    {
        VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN,targetGuide);
        gMain.savedCallback = callback;
        Adventure_Guide_Init(Waves_ReturnFromAdventureGuide);
        return;
    }

    if (AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }
    SaveCallbackToWaves(callback);
    SetMainCallback2(Waves_SetupCallback);
}

static void SaveCallbackToWaves(MainCallback callback)
{
    sWavesState->savedCallback = callback;
}


void Waves_SetupCallback(void)
{
    switch (gMain.state)
    {
        case 0:
            Debug_LoadUpGoals();
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            ResetPaletteFade();
            ResetTasks();
            FreeSpritePalettesResetSpriteData();
            gMain.state++;
            break;
        case 2:
            CreateTask(Task_HandleInput,0);
            Waves_InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            Waves_InitWindows();
            gMain.state++;
            break;
        case 4:
            gMain.state++;
            break;
        case 5:
            gMain.state++;
            break;
        case 6:
            ClearAllWindows();
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            Waves_PrintMenuHeader(WIN_WAVES_CARD_HEADER);
            Waves_PrintAllCards();
            Waves_PrintCursor();
            //Waves_PrintHelpBar(WIN_WAVES_CARD_FOOTER);
            if (firstOpen)
                PlaySE(SE_PC_LOGIN);
            gMain.state++;
            break;
        case 7:
            firstOpen = FALSE;
            SetVBlankCallback(Waves_VBlankCB);
            SetMainCallback2(Waves_MainCB);
            break;
    }
}

static void Waves_InitWindows(void)
{
    InitWindows(sWavesGridWindows);
    DeactivateAllTextPrinters();
}

static void LandingPage_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON) || JOY_REPEAT(B_BUTTON) || JOY_HELD(B_BUTTON))
    {
        PlaySoundStartFadeQuitApp(taskId);
    }

    if (JOY_NEW(A_BUTTON) || JOY_REPEAT(A_BUTTON) )
    {
        Waves_OpenGoal(taskId);
        return;
    }

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN) )
    {
        Waves_ChangeRow(1);
        return;
    }

    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP) )
    {
        Waves_ChangeRow(-1);
        return;
    }

    if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT) )
    {
        Waves_ChangeColumn(-1);
        return;
    }

    if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT) )
    {
        Waves_ChangeColumn(1);
        return;
    }
}

static void Waves_OpenGoal(u8 taskId)
{
    enum GoalEnum goalId = GetGoalFromCurrentPosition();

    if (goalId == GOAL_NONE)
    {
        PlaySoundStartFadeQuitApp(taskId);
        return;
    }

    Waves_SetGoal(WAVES_MODE_GOAL_DETAIL);
}

static void Waves_ChangeColumn(s32 direction)
{
    enum WavesCursorPosition originalCurrent = GetCursorPosition();
    u32 newPosition = originalCurrent + direction;

    if ((originalCurrent == WAVES_CURSOR_0) && (direction == -1))
        newPosition = WAVES_CURSOR_2;

    if ((originalCurrent == WAVES_CURSOR_3) && (direction == -1))
        newPosition = WAVES_CURSOR_5;

    if ((originalCurrent == WAVES_CURSOR_2) && (direction == 1))
        newPosition = WAVES_CURSOR_0;

    if ((originalCurrent == WAVES_CURSOR_5) && (direction == 1))
        newPosition = WAVES_CURSOR_3;

    SetCursorPosition(newPosition);
}

static void Waves_ChangeRow(s32 direction)
{
    direction *= (WAVES_CURSOR_COUNT / 2);
    enum WavesCursorPosition originalCurrent = GetCursorPosition();
    u32 newPosition = originalCurrent + direction;

    if ((originalCurrent == WAVES_CURSOR_0) && (direction == -3))
        newPosition = WAVES_CURSOR_3;

    if ((originalCurrent == WAVES_CURSOR_2) && (direction == -3))
        newPosition = WAVES_CURSOR_5;

    if ((originalCurrent == WAVES_CURSOR_3) && (direction == 3))
        newPosition = WAVES_CURSOR_0;

    if ((originalCurrent == WAVES_CURSOR_5) && (direction == 3))
        newPosition = WAVES_CURSOR_2;

    if ((originalCurrent == WAVES_CURSOR_1) && (direction == -3))
        newPosition = WAVES_CURSOR_4;

    if ((originalCurrent == WAVES_CURSOR_4) && (direction == 3))
        newPosition = WAVES_CURSOR_1;

    SetCursorPosition(newPosition);
}

static void FreeSpritePalettesResetSpriteData(void)
{
    ResetSpriteData();
    FreeSpriteTileRanges();
    FreeAllSpritePalettes();
    ClearDma3Requests();
}

static bool32 AllocateStructs(void)
{
    sWavesState = AllocZeroed(sizeof(struct WavesState));

    return (sWavesState == NULL
);
}

static void ClearAllWindows(void)
{
    for (enum WavesWindowsGrid windowId = 0; windowId < WIN_WAVES_CARD_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void Waves_ReturnFromAdventureGuide(void)
{
    Waves_InitializeAndSaveCallback(gMain.savedCallback);
}

static void Waves_InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Waves_InitializeBackgrounds())
        LoadGraphics();
    else
        Waves_FadescreenAndExitGracefully();
}

static void Waves_PrintMenuHeader(enum WavesWindowsGrid windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintHeaderText(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Waves_PrintHeaderText(enum WavesWindowsGrid windowId)
{
    u32 fontId = FONT_WAVES_TITLE;
    u32 x = 4;
    u32 y = 0;
    StringCopy(gStringVar4,COMPOUND_STRING("Waves of Change"));
    AddTextPrinterParameterized4(windowId, fontId, x, y, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sWavesWindowFontColors[WAVES_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static void Waves_PrintAllCards(void)
{
    for (enum GoalEnum goalId = GOAL_LEGAL_DEFENSE; goalId < -1; goalId--)
    {
        Waves_PrintCard(goalId);
    }
}

static void Waves_PrintCard(enum GoalEnum goalId)
{
    enum WavesWindowsGrid windowId = ConvertGoalIdToWindowId(goalId);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    Waves_PrintCardHeader(goalId);
    Waves_PrintCardThumbnail(goalId);
    Waves_PrintCardMeter(goalId);

    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void Waves_PrintCardThumbnail(enum GoalEnum goalId)
{
    u32 x = WAVES_THUMBNAIL_X_POSITION + WAVES_THUMBNAIL_X_PADDING * (goalId % WAVES_COLUMN_COUNT);
    u32 y = WAVES_THUMBNAIL_Y_POSITION + WAVES_THUMBNAIL_Y_PADDING * (goalId / WAVES_COLUMN_COUNT);
    u32 spriteTag = (WAVES_SPRITE_TAG + goalId);

    struct SpriteSheet sSpriteSheet_Thumbnail =
    {
        Waves_GetThumbnail(goalId),
        2048,
        spriteTag,
    };

    const struct SpritePalette sWavesSpritePalette =
    {
        .data = Waves_GetPalette(goalId),
        .tag = WAVES_PAL_ICON_SPRITE_TAG,
    };

    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = spriteTag;
    TempSpriteTemplate.paletteTag = WAVES_PAL_ICON_SPRITE_TAG;

    LoadSpriteSheet(&sSpriteSheet_Thumbnail);
    LoadSpritePalette(&sWavesSpritePalette);
    u32 spriteId = CreateSprite(&TempSpriteTemplate, x, y, 0);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(64x64);
    gSprites[spriteId].oam.size = SPRITE_SIZE(64x64);
}

static void SpriteCB_MoveGoalCursor(struct Sprite *sprite)
{
    enum WavesCursorPosition position = GetCursorPosition();
    sprite->x2 = WAVES_THUMBNAIL_X_POSITION + WAVES_THUMBNAIL_X_PADDING * (position % WAVES_COLUMN_COUNT);
    sprite->y2 = WAVES_THUMBNAIL_Y_POSITION + WAVES_THUMBNAIL_Y_PADDING * (position / WAVES_COLUMN_COUNT);
}

static void Waves_PrintCursor(void)
{
    u32 spriteTag = (WAVES_SPRITE_TAG + WAVES_SPRITE_TAG_CURSOR);

    struct SpriteSheet sSpriteSheet_Cursor =
    {
        (const u16[])INCBIN_U16("graphics/ui_menus/waves/assets/cursor.4bpp"),
        (64 * 64 / 2),
        spriteTag,
    };

    const struct SpritePalette sWavesSpritePalette =
    {
        .data = (const u16[])INCBIN_U16("graphics/ui_menus/waves/palettes/sprite.gbapal"),
        .tag = WAVES_PAL_SPRITE_TAG,
    };

    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = spriteTag;
    TempSpriteTemplate.paletteTag = WAVES_PAL_SPRITE_TAG;
    TempSpriteTemplate.callback = SpriteCB_MoveGoalCursor,

        LoadSpriteSheet(&sSpriteSheet_Cursor);
    LoadSpritePalette(&sWavesSpritePalette);
    u32 spriteId = CreateSprite(&TempSpriteTemplate, 0, 0, 0);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(64x64);
    gSprites[spriteId].oam.size = SPRITE_SIZE(64x64);
}

static void Waves_PrintCardMeter(enum GoalEnum goalId)
{
    if (goalId == GOAL_NONE)
        return;

    enum WavesWindowsGrid windowId = ConvertGoalIdToWindowId(goalId);
    u32 amount = Waves_CalculatePercentRaised(goalId) * 10000;

    u32 factor = 0;
    u32 size = sizeof(meterPlayerLeftLUT[factor]);
    size = 0;
    u32 offset = WAVES_METER_TILE_OFFSET;

    while (factor < (ARRAY_COUNT(meterPlayerLeftLUT)-1) && amount >= WAVES_METER_FACTOR)
    {
        factor++;
        amount -= WAVES_METER_FACTOR;
    }
    CopyToWindowPixelBuffer(windowId,(const void*)meterPlayerLeftLUT[factor], size, offset++);

    for (u32 iteration = 0; iteration < WAVES_METER_CENTER_SECTIONS; iteration++)
    {
        factor = 0;
        while (factor < (ARRAY_COUNT(meterPlayerCenterLUT)-1) && amount >= WAVES_METER_FACTOR)
        {
            factor++;
            amount -= WAVES_METER_FACTOR;
        }
        CopyToWindowPixelBuffer(windowId,(const void*)meterPlayerCenterLUT[factor], size, (offset + iteration));
    }

    factor = 0;
    while (factor < (ARRAY_COUNT(meterPlayerRightLUT)-1) && amount >= WAVES_METER_FACTOR)
    {
        factor++;
        amount -= WAVES_METER_FACTOR;
    }
    CopyToWindowPixelBuffer(windowId, meterPlayerRightLUT[factor], size, offset + WAVES_METER_CENTER_SECTIONS);
}

static u32 ConvertGoalIdToWindowId(enum GoalEnum goalId)
{
    return (-1 * goalId) + 6;
}

static enum GoalEnum GetGoalFromCurrentPosition(void)
{
    enum WavesCursorPosition position = GetCursorPosition();
    return (-1 * position) + 5;
}

static void Waves_PrintCardHeader(enum GoalEnum goalId)
{
    Waves_PrintCardText(goalId);
}

static void Waves_PrintCardText(enum GoalEnum goalId)
{
    enum WavesWindowsGrid windowId = ConvertGoalIdToWindowId(goalId);
    u32 y = WAVES_HEADER_Y;
    u32 windowWidth = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_WIDTH));

    StringCopy(gStringVar3,Waves_GetTitle(goalId));
    u32 fontId = GetFontIdToFit(gStringVar3, WAVES_FONT_CARD_HEADER, 0, windowWidth);
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
    u32 x = GetStringCenterAlignXOffset(fontId, gStringVar3, windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sWavesWindowFontColors[WAVES_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar3);
}

static void Debug_LoadUpGoals(void)
{
    for (enum GoalEnum goalId = GOAL_LEGAL_DEFENSE; goalId < -1; goalId--)
    {
        u32 amount1 = Random() % 50;
        u32 amount2 = Random() % 50;
        Waves_SetPlayerPercent(goalId, amount1);
        Waves_SetPassivePercent(goalId, amount2);
    }
}

static void SetCursorPosition(enum WavesCursorPosition position)
{
    sWavesState->position = position;
}

static enum WavesCursorPosition GetCursorPosition(void)
{
    return sWavesState->position;
}

static void ResetCursorPosition(void)
{
    SetCursorPosition(0);
}

static void SetDonatePosition(u32 position)
{
    sWavesState->donatePosition = position;
}

static u32 GetDonatePosition(void)
{
    return sWavesState->donatePosition;
}

static void ResetDonatePosition(void)
{
    SetDonatePosition(0);
}

static void SetConfirmPosition(bool32 position)
{
    sWavesState->confirmPosition = position;
}

static u32 GetConfirmPosition(void)
{
    return sWavesState->confirmPosition;
}

static void ResetConfirmPosition(void)
{
    SetConfirmPosition(0);
}

static enum WavesMode Waves_GetMode(void)
{
    return sWavesState->mode;
}

static void Waves_SetMode(enum WavesMode mode)
{
    sWavesState->mode = mode;
}

static void Task_HandleInput(u8 taskId)
{
    switch (Waves_GetMode())
    {
        default:
            break;
        case WAVES_MODE_LANDING_PAGE:
            LandingPage_HandleInput(taskId);
            break;
        case WAVES_MODE_GOAL_DETAIL:
            DetailPage_HandleInput(taskId);
            break;
        case WAVES_MODE_GOAL_DONATE_AMOUNT:
            Donate_HandleInput(taskId);
            break;
        case WAVES_MODE_GOAL_CONFIRM_AMOUNT:
            Confirm_HandleInput(taskId);
            break;
    }
}

static void DetailPage_HandleInput(u8 taskId)
{
    return;
}
static void Donate_HandleInput(u8 taskId)
{
    return;
}
static void Confirm_HandleInput(u8 taskId)
{
    return;
}
