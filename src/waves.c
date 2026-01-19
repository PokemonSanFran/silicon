#include "global.h"
#include "bg.h"
#include "window.h"
#include "scanline_effect.h"
#include "quest_logic.h"
#include "dma3.h"
#include "overworld.h"
#include "event_data.h"
#include "frontier_pass.h"
#include "line_break.h"
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
static void NotEnough_HandleInput(u8 taskId);
static void Waves_OpenGoal(u8 taskId);
static void Waves_GoToPage(enum WavesMode mode);
static void Waves_SetUpPageContent(void);
static void Waves_ChangeColumn(s32 direction);
static void Waves_ChangeRow(s32 direction);
static void FreeSpritePalettesResetSpriteData(void);
static bool32 AllocateStructs(void);
static void Waves_ReturnFromAdventureGuide(void);
static void ClearAllWindows(void);
static void Waves_InitializeBackgroundsAndLoadBackgroundGraphics(void);
static void Waves_ChooseBackgroundBasedOnMode(void);
static void Waves_PrintMenuHeader(u32 windowId, enum GoalEnum goalId);
static void Waves_DisplayMenuFooter(u32 windowId);
static void Waves_PrintHeaderText(u32 windowId, enum GoalEnum goalId);
static void Waves_PrintFooterText(u32 windowId);
static void Waves_PrintAllCards(void);
static void Waves_PrintLandingPage(void);
static u32 ConvertGoalIdToWindowId(enum GoalEnum goalId);
static void Waves_PrintCard(enum GoalEnum goalId);
static void Waves_PrintCardHeader(enum GoalEnum goalId);
static enum GoalEnum GetGoalFromCurrentPosition(void);
static void Waves_PrintCardText(enum GoalEnum goalId);
static void Waves_PrintAllCardThumbnails(void);
static void Waves_PrintCardThumbnail(enum GoalEnum goalId);
static void SpriteCB_MoveGoalCursor(struct Sprite *sprite);
static void SpriteCB_HideThumbnails(struct Sprite *sprite);
static void Waves_PrintCursor(void);
static void Waves_PrintCardMeter(enum GoalEnum goalId);
static void SetCursorPosition(enum WavesCursorPosition position);
static enum WavesCursorPosition GetCursorPosition(void);
static void ResetCursorPosition(void);
static void SetDonatePosition(u32 position);
static u32 GetDonatePosition(void);
static void ResetDonatePosition(void);
static enum WavesMode Waves_GetMode(void);
static void Waves_SetMode(enum WavesMode mode);
static void Waves_DisplayGoalDesc(enum WavesWindowsGoal windowId, enum GoalEnum goalId);
static void Waves_DisplayGoalPage(enum GoalEnum goalId);
static void Waves_DisplayGoalProgress(enum WavesWindowsGoal windowId, enum GoalEnum goalId);
static void Waves_PrintGoalDescText(enum WavesWindowsGoal windowId, enum GoalEnum goalId);
static void Waves_PrintGoalPassiveText(enum WavesWindowsGoal windowId, enum GoalEnum goalId);
static void Waves_PrintGoalPlayerText(enum WavesWindowsGoal windowId, enum GoalEnum goalId);
static void Waves_PrintGoalRaisedText(enum WavesWindowsGoal windowId, enum GoalEnum goalId);
static void Waves_PrintGoalTotalText(enum WavesWindowsGoal windowId, enum GoalEnum goalId);
static void Waves_MakeGoalSpritesInvisible(void);
static void Waves_SaveSpriteId(enum WavesMode mode, enum GoalEnum goal, u32 id);
static u32 Waves_GetSpriteId(enum WavesMode mode, enum GoalEnum goal);
static void Waves_ResetAllSpriteIds(void);

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

static const u16 wavesPalettesDefault[] = INCBIN_U16("graphics/ui_menus/waves/palettes/default.gbapal");
static const u16 wavesPalettesBlack[] = INCBIN_U16("graphics/ui_menus/waves/palettes/black.gbapal");
static const u16 wavesPalettesBlue[] = INCBIN_U16("graphics/ui_menus/waves/palettes/blue.gbapal");
static const u16 wavesPalettesGreen[] = INCBIN_U16("graphics/ui_menus/waves/palettes/green.gbapal");
static const u16 wavesPalettesPlatinum[] = INCBIN_U16("graphics/ui_menus/waves/palettes/platinum.gbapal");
static const u16 wavesPalettesRed[] = INCBIN_U16("graphics/ui_menus/waves/palettes/red.gbapal");
static const u16 wavesPalettesScarlet[] = INCBIN_U16("graphics/ui_menus/waves/palettes/scarlet.gbapal");
static const u16 wavesPalettesViolet[] = INCBIN_U16("graphics/ui_menus/waves/palettes/violet.gbapal");
static const u16 wavesPalettesWhite[] = INCBIN_U16("graphics/ui_menus/waves/palettes/white.gbapal");
static const u16 wavesPalettesYellow[] = INCBIN_U16("graphics/ui_menus/waves/palettes/yellow.gbapal");
static const u16 wavesPalettesText[] = INCBIN_U16("graphics/ui_menus/waves/palettes/text.gbapal");

static const u32 wavesInterfaceTiles[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_inferface.4bpp.smol");
static const u32 wavesInterfaceTilemap[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_inferface.bin.smolTM");

static const u32 wavesBgTiles[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/bg.4bpp.smol");
static const u32 siliconBgTilemap[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/bg.bin.smolTM");

static const u32 wavesGoalTiles[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_goal.4bpp.smol");
static const u32 wavesGoalTilemap[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_goal.bin.smolTM");

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
    [BG1_WAVES_LANDING] =
    {
        .bg = BG1_WAVES_LANDING,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 1,
    },
    [BG2_WAVES_DETAIL] =
    {
        .bg = BG2_WAVES_DETAIL,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .priority = 1,
    },
    [BG3_WAVES_WALLPAPER] =
    {
        .bg = BG3_WAVES_WALLPAPER,
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
    },
    [WIN_WAVES_CARD_1] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_CARD_2] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 11,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_CARD_3] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 20,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_CARD_4] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 11,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_CARD_5] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 11,
        .tilemapTop = 11,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_CARD_6] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 20,
        .tilemapTop = 11,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_CARD_FOOTER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
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
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_GOAL_DESC] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 30,
        .height = 5,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_GOAL_RAISED] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 14,
        .tilemapTop = 2,
        .width = 15,
        .height = 3,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
    },
    [WIN_WAVES_GOAL_PLAYER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 14,
        .tilemapTop = 5,
        .width = 15,
        .height = 2,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_GOAL_PASSIVE] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 14,
        .tilemapTop = 7,
        .width = 15,
        .height = 2,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_GOAL_TOTAL] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 14,
        .tilemapTop = 9,
        .width = 15,
        .height = 2,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_WAVES_GOAL_FOOTER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
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
    [BG1_WAVES_LANDING] = wavesInterfaceTiles,
    [BG2_WAVES_DETAIL] = wavesGoalTiles,
    [BG3_WAVES_WALLPAPER] = wavesBgTiles,
};

static const u32* const sWavesTilemapLUT[] =
{
    [BG0_WAVES_TEXT] = NULL,
    [BG1_WAVES_LANDING] = wavesInterfaceTilemap,
    [BG2_WAVES_DETAIL] = wavesGoalTilemap,
    [BG3_WAVES_WALLPAPER] = siliconBgTilemap,
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
    if (backgroundId == BG1_WAVES_LANDING)
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
            ResetGpuRegsAndBgs();
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
            Waves_ResetAllSpriteIds();
            gMain.state++;
            break;
        case 2:
            CreateTask(Task_HandleInput,0);
            Waves_InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            Waves_PrintCursor();
            gMain.state++;
            break;
        case 4:
            Waves_SetMode(WAVES_MODE_LANDING_PAGE);
            Waves_PrintAllCardThumbnails();
            Waves_SetUpPageContent();
            gMain.state++;
            break;
        case 5:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            if (firstOpen)
                PlaySE(SE_PC_LOGIN);
            firstOpen = FALSE;
            SetVBlankCallback(Waves_VBlankCB);
            SetMainCallback2(Waves_MainCB);
            break;
    }
}

static void Waves_DisplayPageContent(void)
{
    bool32 isLandingPage = (Waves_GetMode() == WAVES_MODE_LANDING_PAGE);
    if (isLandingPage == TRUE)
        Waves_PrintLandingPage();
    else
        Waves_DisplayGoalPage(GetGoalFromCurrentPosition());
}

static void Waves_InitWindows(void)
{
    bool32 isLandingPage = (Waves_GetMode() == WAVES_MODE_LANDING_PAGE);
    const struct WindowTemplate *templates = isLandingPage ? sWavesGridWindows : sWavesGoalWindows;

    InitWindows(templates);

    u32 arrayCount = isLandingPage ? (ARRAY_COUNT(sWavesGridWindows) - 1) : (ARRAY_COUNT(sWavesGoalWindows) - 1);

    u32 baseBlock = 1;
    for (u32 windowId = 0; windowId < arrayCount; windowId++)
    {
        SetWindowAttribute(windowId, WINDOW_BASE_BLOCK, baseBlock);
        ClearWindowCopyToVram(windowId);
        baseBlock += (templates[windowId].width * templates[windowId].height);
    }
    DeactivateAllTextPrinters();
}

static void LandingPage_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON) || JOY_REPEAT(B_BUTTON) )
    {
        PlaySoundStartFadeQuitApp(taskId);
        return;
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
    Waves_GoToPage(WAVES_MODE_GOAL_DETAIL);
}

static void Waves_GoToPage(enum WavesMode mode)
{
    Waves_MakeGoalSpritesInvisible();
    Waves_SetMode(mode);
    FreeAllWindowBuffers();
    Waves_SetUpPageContent();
}

static void Waves_SetUpPageContent(void)
{
    Waves_ChooseBackgroundBasedOnMode();
    Waves_InitWindows();
    ClearAllWindows();
    UnsetBgTilemapBuffer(BG0_WAVES_TEXT);
    Waves_DisplayPageContent();
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
    bool32 isLandingPage = (Waves_GetMode() == WAVES_MODE_LANDING_PAGE);
    u32 arrayCount = isLandingPage ? ARRAY_COUNT(sWavesGridWindows) - 1 : ARRAY_COUNT(sWavesGoalWindows) - 1;

    for (enum WavesWindowsGrid windowId = 0; windowId < arrayCount; windowId++)
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

static void Waves_ChooseBackgroundBasedOnMode(void)
{
    enum WavesMode mode = Waves_GetMode();
    enum WavesBackgrounds showBg = 0, hideBg = 0;

    if (mode == WAVES_MODE_LANDING_PAGE)
    {
        showBg = BG1_WAVES_LANDING;
        hideBg = BG2_WAVES_DETAIL;
    }
    else
    {
        hideBg = BG1_WAVES_LANDING;
        showBg = BG2_WAVES_DETAIL;
    }

    ShowBg(showBg);
    HideBg(hideBg);
}

static void Waves_DisplayMenuFooter(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintFooterText(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Waves_PrintMenuHeader(u32 windowId, enum GoalEnum goalId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintHeaderText(windowId, goalId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Waves_PrintHeaderText(u32 windowId, enum GoalEnum goalId)
{
    u32 fontId = FONT_WAVES_TITLE;
    u32 x = 4;
    u32 y = 0;

    switch (Waves_GetMode())
    {
        default:
        case WAVES_MODE_LANDING_PAGE:
            StringCopy(gStringVar4,COMPOUND_STRING("Waves of Change"));
            break;
        case WAVES_MODE_GOAL_DETAIL:
        case WAVES_MODE_GOAL_DONATE_AMOUNT:
        case WAVES_MODE_GOAL_NOT_ENOUGH:
            StringCopy(gStringVar4,Waves_GetTitle(goalId));
            break;
    }
    AddTextPrinterParameterized4(windowId, fontId, x, y, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sWavesWindowFontColors[WAVES_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static void Waves_PrintFooterText(u32 windowId)
{
    u32 fontId = FONT_WAVES_TITLE;
    u32 x = 4;
    u32 y = 0;

    switch (Waves_GetMode())
    {
        default:
        case WAVES_MODE_LANDING_PAGE:
            StringCopy(gStringVar4,COMPOUND_STRING("{DPAD_NONE} Choose Goal {A_BUTTON} See Goal Info {B_BUTTON} Return"));
            break;
        case WAVES_MODE_GOAL_DETAIL:
            StringCopy(gStringVar4,COMPOUND_STRING("{A_BUTTON} Donate To Goal {B_BUTTON} Return"));
            break;
        case WAVES_MODE_GOAL_DONATE_AMOUNT:
            StringCopy(gStringVar4,COMPOUND_STRING("{A_BUTTON} NotEnough Donation {B_BUTTON} Return"));
            break;
        case WAVES_MODE_GOAL_NOT_ENOUGH:
            StringCopy(gStringVar4,COMPOUND_STRING("{B_BUTTON} Return"));
            break;
    }

    AddTextPrinterParameterized4(windowId, fontId, x, y, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sWavesWindowFontColors[WAVES_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static void Waves_PrintLandingPage(void)
{

    Waves_PrintMenuHeader(WIN_WAVES_CARD_HEADER,GOAL_COUNT);
    Waves_PrintAllCards();
    Waves_DisplayMenuFooter(WIN_WAVES_CARD_FOOTER);
}

static void Waves_PrintAllCards(void)
{
    for (enum GoalEnum goalId = GOAL_LEGAL_DEFENSE; goalId < -1; goalId--)
        Waves_PrintCard(goalId);
}

static void Waves_PrintCard(enum GoalEnum goalId)
{
    enum WavesWindowsGrid windowId = ConvertGoalIdToWindowId(goalId);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    Waves_PrintCardHeader(goalId);
    Waves_PrintCardMeter(goalId);

    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void Waves_PrintAllCardThumbnails(void)
{
    for (enum GoalEnum goalId = GOAL_LEGAL_DEFENSE; goalId < -1; goalId--)
        Waves_PrintCardThumbnail(goalId);
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
    TempSpriteTemplate.callback = SpriteCB_HideThumbnails,

        LoadSpriteSheet(&sSpriteSheet_Thumbnail);
    LoadSpritePalette(&sWavesSpritePalette);
    u32 spriteId = CreateSprite(&TempSpriteTemplate, x, y, 0);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(64x64);
    gSprites[spriteId].oam.size = SPRITE_SIZE(64x64);

    Waves_SaveSpriteId(Waves_GetMode(),goalId,spriteId);
}

static void SpriteCB_MoveGoalCursor(struct Sprite *sprite)
{
    enum WavesCursorPosition position = GetCursorPosition();
    sprite->x2 = WAVES_THUMBNAIL_X_POSITION + WAVES_THUMBNAIL_X_PADDING * (position % WAVES_COLUMN_COUNT);
    sprite->y2 = WAVES_THUMBNAIL_Y_POSITION + WAVES_THUMBNAIL_Y_PADDING * (position / WAVES_COLUMN_COUNT);

    sprite->invisible = (Waves_GetMode() != WAVES_MODE_LANDING_PAGE);
}

static void SpriteCB_HideThumbnails(struct Sprite *sprite)
{
    sprite->invisible = (Waves_GetMode() != WAVES_MODE_LANDING_PAGE);
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

    if (goalId < GOAL_SOCIAL_HOUSING)
        offset += TILE_WIDTH;

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

    if (goalId < GOAL_SOCIAL_HOUSING)
        y += TILE_WIDTH;

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
    if (gPaletteFade.active)
        return;

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
        case WAVES_MODE_GOAL_NOT_ENOUGH:
            NotEnough_HandleInput(taskId);
            break;
    }
}

static void DetailPage_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        Waves_GoToPage(WAVES_MODE_LANDING_PAGE);
        return;
    }
}
static void Donate_HandleInput(u8 taskId)
{
    return;
}
static void NotEnough_HandleInput(u8 taskId)
{
    return;
}

static void Waves_DisplayGoalPage(enum GoalEnum goalId)
{
    Waves_PrintMenuHeader(WIN_WAVES_GOAL_HEADER, goalId);
    Waves_DisplayGoalDesc(WIN_WAVES_GOAL_DESC,goalId);
    Waves_DisplayGoalProgress(WIN_WAVES_GOAL_RAISED,goalId);
    Waves_DisplayMenuFooter(WIN_WAVES_GOAL_FOOTER);
}

static void Waves_DisplayGoalProgress(enum WavesWindowsGoal windowId, enum GoalEnum goalId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintGoalRaisedText(windowId,goalId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    windowId++;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintGoalPlayerText(windowId,goalId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    windowId++;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintGoalPassiveText(windowId,goalId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    windowId++;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintGoalTotalText(windowId,goalId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    windowId++;
}

static void Waves_DisplayGoalDesc(enum WavesWindowsGoal windowId, enum GoalEnum goalId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintGoalDescText(windowId,goalId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Waves_PrintGoalDescText(enum WavesWindowsGoal windowId, enum GoalEnum goalId)
{
    u32 fontId = FONT_WAVES_DESC;
    u32 x = 4;
    u32 y = 0;
    u32 windowWidth = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_WIDTH));
    windowWidth -= TILE_WIDTH;
    u32 windowHeight = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_HEIGHT));
    u32 letterHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 screenLines = windowHeight / letterHeight;

    StringCopy(gStringVar4,Waves_GetDesc(goalId));
    BreakStringNaive(gStringVar4,windowWidth,screenLines,fontId,HIDE_SCROLL_PROMPT);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sWavesWindowFontColors[WAVES_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, gStringVar4);
}

static void Waves_PrintGoalRaisedText(enum WavesWindowsGoal windowId, enum GoalEnum goalId)
{
    return;
}

static void Waves_PrintGoalPlayerText(enum WavesWindowsGoal windowId, enum GoalEnum goalId)
{
    return;
}
static void Waves_PrintGoalPassiveText(enum WavesWindowsGoal windowId, enum GoalEnum goalId)

{
    return;
}

static void Waves_PrintGoalTotalText(enum WavesWindowsGoal windowId, enum GoalEnum goalId)
{
    return;
}

static void Waves_MakeGoalSpritesInvisible(void)
{
    enum WavesMode mode = Waves_GetMode();

    for (enum GoalEnum goal = 0; goal < GOAL_COUNT; goal++)
    {
        u32 spriteId = Waves_GetSpriteId(mode,goal);
        gSprites[spriteId].invisible = TRUE;
    }
}

static void Waves_SaveSpriteId(enum WavesMode mode, enum GoalEnum goal, u32 id)
{
    sWavesState->spriteId[mode][goal] = id;
}

static u32 Waves_GetSpriteId(enum WavesMode mode, enum GoalEnum goal)
{
    return sWavesState->spriteId[mode][goal];
}

static void Waves_ResetAllSpriteIds(void)
{
    for (enum WavesMode mode = 0; mode < WAVES_MODE_MAIN_COUNT; mode++)
        for (enum GoalEnum goal = 0; goal < GOAL_COUNT; goal++)
            Waves_SaveSpriteId(mode,goal,SPRITE_NONE);
}

