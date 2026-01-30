//PSF TODO If a player recives a 2nd quest via startquest and the player has still never opened the questlog and done the tutorial, force the tutorial
#include "global.h"
#include "strings.h"
#include "quest_strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_use.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "text_window.h"
#include "quests.h"
#include "data/quests.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/event_objects.h"
#include "event_object_movement.h"
#include "pokemon_icon.h"
#include "quest_flavor_lookup.h"
#include "field_weather.h"
#include "field_screen_effect.h"
#include "tv.h"
#include "dma3.h"
#include "options_visual.h"
#include "trig.h"

struct QuestSpriteInfo
{
    u8 spriteId;
    u16 tileTag;
    s8 quest;
};

struct QuestMenuResources
{
    MainCallback savedCallback;
    u8 moveModeOrigPos;
    u8 maxShowed;
    u8 nItems;
    u8 parentQuest;
    bool8 restoreCursor;
    u8 questName[PLAYER_QUEST_NAME_LENGTH];
    struct QuestSpriteInfo questSpriteInfo[QUEST_MENU_UX_ROW_COUNT];
    u8 questsOnScreen;
    struct QuestListProperties filterSort;
    struct ListMenuItem questList[QUEST_COUNT+1];
    bool8 shouldUpdate;
};

struct QuestMenuStaticResources
{
    MainCallback savedCallback;
    struct QuestListPosition questListPosition;
    struct QuestListPosition storedListPosition;
};

// RAM
static struct QuestMenuResources *sStateDataPtr = NULL;
EWRAM_DATA static struct QuestMenuStaticResources sListMenuState = {0};
static u8 *sBgTilemapBuffer[BG_QUEST_COUNT] = {NULL};

// This File's Functions
void QuestMenu_Init(MainCallback callback);
static void MainCB(void);
static void VBlankCB(void);

static void Quest_SetupCB(void);
static void LoadGraphics(void);
static void LoadQuestPalettes(void);
static void QuestMenu_InitWindows(void);
static void InitBgsAndLoadBackgroundGraphics(void);
static bool32 Quest_InitBgs(void);
static void ClearWindowCopyToVram(enum QuestWindows windowId);
static void InitItems(void);
static void FreeSpritePalettesResetSpriteData(void);
static void SetScheduleBgs(enum QuestBgs backgroundId);
static void SetBackgroundTransparency(void);
static void HandleAndShowBgs(void);
static bool32 AllocZeroedTilemapBuffers(void);

static u8 GetCursorPosition(void);
static void SetCursorPosition(void);
static void SetScrollPosition(void);
static bool8 IfScrollIsOutOfBounds(void);
static bool8 IfRowIsOutOfBounds(void);
static void SaveScrollAndRow(s16 *data);
static void SetCurrentQuestFilter(enum QuestFilter filter);

static void ClearModeOnStartup(void);
static void WriteModeToSaveBlock(void);
static void SetListPositionScroll(u32);
static void SetListPositionRow(u32);
static u32 GetListPositionScroll(void);
static u32 GetListPositionRow(void);
static void WriteListPositionToSaveBlock(void);
static void LoadListPositionFromSaveBlock(void);
static void SetCursorPositionOnScreen(u32 position);
static void LoadCursorScreenPositionFromSaveblock(void);
static void ManageMode(u32 action);
static void IncrementSort(void);
static void ToggleSubsavedQuestMode(void);
static void IncrementFilter(void);
static void DecrementFilter(void);
static bool32 IsNotFilteredMode(void);
static bool32 IsAlphaMode(void);
static bool32 IsLocationMode(void);
static void GetSavedQuestMode(void);
static void LoadSavedQuestMode(void);

static void BuildMenuTemplate(void);
static u8 GetModeAndGenerateList(void);
static u8 CountNumberListRows(void);
static u8 *DefineQuestOrder(void);
static u8 GenerateSubquestList(void);
static void FillRowsWithEmptyData(void);
static u8 GenerateList(void);
static void AssignCancelNameAndId(u8 numRow);

static u32 CountUnlockedQuests(void);
static u32 CountActiveQuests(void);
static u32 CountRewardQuests(void);
static u32 CountFavoriteQuests(void);
u32 CountQuestsToSkip(void);
bool32 ShouldSkipCountingQuests(enum QuestIdList questId);

static void PopulateQuestName(u8 countQuest);
static void PopulateListRowNameAndId(u8 row, u8 countQuest);
static bool8 DoesQuestHaveChildrenAndNotInactive(s32 itemId);

static void MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);
static void PlayCursorSound(bool8 firstRun);
static enum QuestHelpBarStates GenerateHelpBar(s32 questId);
static void GenerateQuestLocation(s32 questId);
static void PrintQuestLocation(s32 questId);
static u32 GetCursorPositionOnScreen(void);
static void PrintCursor(void);
void CopyCursorTiles(u32 windowId, const void* tile1, const void* tile2, const void* tile4, const void* tile5, const void* tile6, u32 cursor);
static void UpdateQuestDoneDesc(s32 questId);
static void QuestMenu_UpdateQuestRewardDesc(s32 questId);
const u8 *GetSubquestName(s32 questId);
static const u8 *GetQuestDesc(s32 questId);
static const u8 *GetQuestRewardDesc(s32 questId);
static const u8 *GetQuestDoneDesc(s32 questId);
static void PrintQuestDescription(s32 questId);
static void GenerateAndPrintDesc(s32 questId);
static void GenerateQuestDescription(s32 questId);

static bool8 IsQuestUnlocked(s32 questId);
static bool8 IsSubquestCompletedState(s32 questId);

static void GenerateStateAndPrint(u8 windowId, u32 itemId, u8 y);
static void HighlightFavoriteRow(void);
static enum QuestCases GetBitmapForQuest(enum QuestIdList questId);
static void PrintQuestIndicator(enum QuestIndicatorTypes indicator,u8 windowId, u32 questId, u8 y);
static void PrintAllQuestSprites(void);
static void RemoveAllQuestSprites(void);
static bool32 HaveQuestsUpdatedOnScreen(void);
static void ResetQuestSpritesTags(void);
static u32 GetQuestSpriteId(enum QuestMenuRows row);
static u32 GetQuestSpriteTags(enum QuestMenuRows row);
static void SetQuestSpriteId(enum QuestMenuRows row, u32 spriteId);
static void SetQuestSpriteTags(enum QuestMenuRows row, u32 tag);
static u32 GetQuestSpriteAssignedQuest(enum QuestMenuRows row);
static void SetQuestSpriteAssignedQuest(enum QuestMenuRows row, u32 quest);
static void SpriteCallback_QuestSprite(struct Sprite *sprite);
static void UpdateAllQuestsOnScreen(void);
static void InitalizeQuestsOnScreen(void);
static void UpdateQuestOnScreen(enum QuestMenuRows row);

static u32 GetQuestSpriteEntityId(s32 questId);
static u32 GetQuestSpriteType(s32 questId);
static void PrintQuestSprite(s32 questId, enum QuestMenuRows row);
static void CropQuestIcons(u32 spriteId);

static void GenerateAndPrintHeader(s32 questId);
static u32 GetDenominatorQuests(void);
static u32 GetNumeratorQuests(void);
static void GenerateFilterAmountName(void);
static void PrintFilterAmountName(void);
static void PrintIndicatorTilesBitmaps(void);

static void Task_NavigateQuestMenu(u8 taskId);
static void AddCarveTiles(void);
static void Task_UpdateQuestsOnScreen(u8 taskId);
static void ManageFavorites(u8 index);
static void CheckFavoriteAndRemove(u8 quest);
static void Task_QuestMenuCleanUp(u8 taskId);
static void ResetCursorToTop(s16 *data);
static void EnterSubsavedQuestModeAndCleanUp(u8 taskId, s16 *data, s32 input);
static void IncrementFilterAndCleanUp(u8 taskId);
static void IncrementSortAndCleanUp(u8 taskId);
static void DecrementFilterAndCleanUp(u8 taskId);
static void ToggleFavoriteAndCleanUp(u8 taskId, u8 selectedQuestId);
static bool8 CheckSelectedIsCancel(u8 selectedQuestId);
static void ReturnFromSubquestAndCleanUp(u8 taskId);

static void SetGpuRegBaseForFade(void);
static void InitFadeVariables(u8 taskId, u8 blendWeight, u8 frameDelay,
        u8 frameTimerBase, u8 delta);
static void PrepareFadeOut(u8 taskId);
static bool8 HandleFadeOut(u8 taskId);
static void PrepareFadeIn(u8 taskId);
static bool8 HandleFadeIn(u8 taskId);
static void Task_FadeOut(u8 taskId);
static void Task_FadeIn(u8 taskId);

static void Task_QuestMenuWaitFadeAndBail(u8 taskId);
static void FadeAndBail(void);
static void FreeResources(void);
static void FreeBackgrounds(void);
static void FreeQuestStructs(void);
static void TurnOffQuestMenu(u8 taskId);
static void Task_QuestMenuTurnOff(u8 taskId);

static void CreateQuestArrowSpritePair(void);
static void CreateUpQuestArrowSprite(void);
static void CreateDownQuestArrowSprite(void);
static void CreateQuestArrowSprite(u32,const u32*, u32, u32, void (*callback)(struct Sprite*));
static void SpriteCB_MenuArrow(struct Sprite*);
static void AnimateQuestArrowSprite(struct Sprite*);
static void HandleMenuArrowSpriteVisibility(struct Sprite *sprite);
static bool32 IsCursorOrPositionAtTop(u32);
static bool32 IsCursorOrPositionAtBottom(u32);

static const u32 questArrowsBottom[] = INCBIN_U32("graphics/ui_menus/glass/location/arrows/bottom.4bpp.smol");
static const u32 questArrowsTop[] = INCBIN_U32("graphics/ui_menus/glass/location/arrows/top.4bpp.smol");
static const u16 questPalettesDefault[] = INCBIN_U16("graphics/ui_menus/glass/palettes/default.gbapal");

static const u32 sCarveTile0[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve0.4bpp.smol");
static const u32 sCarveTile1[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve1.4bpp.smol");
static const u32 sCarveTile2[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve2.4bpp.smol");
static const u32 sCarveTile3[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve3.4bpp.smol");
static const u32 sCarveTile4[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve4.4bpp.smol");
static const u32 sCarveTile5[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve5.4bpp.smol");
static const u32 sCarveTile6[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve6.4bpp.smol");
static const u32 sCarveTile7[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve7.4bpp.smol");
static const u32 sCarveTile8[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve8.4bpp.smol");
static const u32 sCarveTile9[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve9.4bpp.smol");
static const u32 sCarveTile10[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve10.4bpp.smol");
static const u32 sCarveTile11[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve11.4bpp.smol");
static const u32 sCarveTile12[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve12.4bpp.smol");
static const u32 sCarveTile13[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve13.4bpp.smol");
static const u32 sCarveTile14[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve14.4bpp.smol");
static const u32 sCarveTile15[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve15.4bpp.smol");
static const u32 sCarveTile16[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve16.4bpp.smol");
static const u32 sCarveTile17[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve17.4bpp.smol");
static const u32 sCarveTile18[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve18.4bpp.smol");
static const u32 sCarveTile19[] = INCBIN_U32("graphics/quest_menu/carveTiles/carve19.4bpp.smol");

static const u32 sCarvePlainTile0[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain0.4bpp.smol");
static const u32 sCarvePlainTile1[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain1.4bpp.smol");
static const u32 sCarvePlainTile2[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain2.4bpp.smol");
static const u32 sCarvePlainTile3[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain3.4bpp.smol");
static const u32 sCarvePlainTile4[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain4.4bpp.smol");
static const u32 sCarvePlainTile5[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain5.4bpp.smol");
static const u32 sCarvePlainTile6[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain6.4bpp.smol");
static const u32 sCarvePlainTile7[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain7.4bpp.smol");
static const u32 sCarvePlainTile8[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain8.4bpp.smol");
static const u32 sCarvePlainTile9[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain9.4bpp.smol");
static const u32 sCarvePlainTile10[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain10.4bpp.smol");
static const u32 sCarvePlainTile11[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain11.4bpp.smol");
static const u32 sCarvePlainTile12[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain12.4bpp.smol");
static const u32 sCarvePlainTile13[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain13.4bpp.smol");
static const u32 sCarvePlainTile14[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain14.4bpp.smol");
static const u32 sCarvePlainTile15[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain15.4bpp.smol");
static const u32 sCarvePlainTile16[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain16.4bpp.smol");
static const u32 sCarvePlainTile17[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain17.4bpp.smol");
static const u32 sCarvePlainTile18[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain18.4bpp.smol");
static const u32 sCarvePlainTile19[] = INCBIN_U32("graphics/quest_menu/carveTiles/plain19.4bpp.smol");

static const u32 sCursorTile0[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile0.4bpp.smol");
static const u32 sCursorTile1[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile1.4bpp.smol");
static const u32 sCursorTile2[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile2.4bpp.smol");
static const u32 sCursorTile3[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile3.4bpp.smol");
static const u32 sCursorTile4[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile4.4bpp.smol");
static const u32 sCursorTile5[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile5.4bpp.smol");
static const u32 sCursorTile6[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile6.4bpp.smol");
static const u32 sCursorTile7[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile7.4bpp.smol");
static const u32 sCursorTile8[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile8.4bpp.smol");
static const u32 sCursorTile9[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile9.4bpp.smol");
static const u32 sCursorTile10[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile10.4bpp.smol");
static const u32 sCursorTile11[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile11.4bpp.smol");
static const u32 sCursorTile12[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile12.4bpp.smol");
static const u32 sCursorTile13[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile13.4bpp.smol");
static const u32 sCursorTile14[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile14.4bpp.smol");
static const u32 sCursorTile15[] = INCBIN_U32("graphics/quest_menu/cursorTiles/cursorTile15.4bpp.smol");

static const u8 favoriteIndicatorBitmap[]  = INCBIN_U8("graphics/quest_menu/favoriteIndicator.4bpp");
static const u8 subquestIndicatorBitmap[]  = INCBIN_U8("graphics/quest_menu/subquestIndicator.4bpp");
static const u8 progressRewardBitmap[]  = INCBIN_U8("graphics/quest_menu/progressReward.4bpp");
static const u8 progressActiveBitmap[]  = INCBIN_U8("graphics/quest_menu/progressActive.4bpp");
static const u8 progressCompleteBitmap[] = INCBIN_U8("graphics/ui_menus/glass/marks/regularCompleteHover.4bpp");
static const u8 locationBitmap[] = INCBIN_U8("graphics/quest_menu/location.4bpp");
static const u8 carveBitmap[] = INCBIN_U8("graphics/quest_menu/carveBitmap.4bpp");

// Tiles, palettes and tilemaps for the Quest Menu
static const u32 sQuestMenuTiles[] = INCBIN_U32("graphics/quest_menu/menu.4bpp.smol");
static const u32 sQuestMenuTilemap[] = INCBIN_U32("graphics/quest_menu/menu.bin.smolTM");

static const u32 sQuestListTiles[] = INCBIN_U32("graphics/quest_menu/list.4bpp.smol");
static const u32 sQuestListTilemap[] = INCBIN_U32("graphics/quest_menu/list.bin.smolTM");

static const u16 sQuestMenuListPal[] = INCBIN_U16("graphics/quest_menu/palettes/list.gbapal");
static const u16 sQuestMenuPalettesBlack[] = INCBIN_U16("graphics/quest_menu/palettes/black.gbapal");
static const u16 sQuestMenuPalettesBlue[] = INCBIN_U16("graphics/quest_menu/palettes/blue.gbapal");
static const u16 sQuestMenuPalettesDefault[] = INCBIN_U16("graphics/quest_menu/palettes/default.gbapal");
static const u16 sQuestMenuPalettesGreen[] = INCBIN_U16("graphics/quest_menu/palettes/green.gbapal");
static const u16 sQuestMenuPalettesPlatinum[] = INCBIN_U16("graphics/quest_menu/palettes/platinum.gbapal");
static const u16 sQuestMenuPalettesRed[] = INCBIN_U16("graphics/quest_menu/palettes/red.gbapal");
static const u16 sQuestMenuPalettesScarlet[] = INCBIN_U16("graphics/quest_menu/palettes/scarlet.gbapal");
static const u16 sQuestMenuPalettesViolet[] = INCBIN_U16("graphics/quest_menu/palettes/violet.gbapal");
static const u16 sQuestMenuPalettesWhite[] = INCBIN_U16("graphics/quest_menu/palettes/white.gbapal");
static const u16 sQuestMenuPalettesYellow[] = INCBIN_U16("graphics/quest_menu/palettes/yellow.gbapal");


static const u32 *const questTiles[BG_QUEST_COUNT] =
{
    [BG0_QUEST_BG_TEXT] = NULL,
    [BG1_QUEST_BG_INDICATORS] = NULL,
    [BG2_QUEST_BG_LIST] = sQuestListTiles,
    [BG3_QUEST_BG_BACKGROUND] = sQuestMenuTiles,
};

static const u32 *const questTilemap[BG_QUEST_COUNT] =
{
    [BG0_QUEST_BG_TEXT] = NULL,
    [BG1_QUEST_BG_INDICATORS] = NULL,
    [BG2_QUEST_BG_LIST] = sQuestListTilemap,
    [BG3_QUEST_BG_BACKGROUND] = sQuestMenuTilemap,
};

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (questTiles[backgroundId] == NULL || questTilemap[backgroundId] == NULL);
}

//Strings used for the Quest Menu
static const u8* const questHeaderStrings[QUEST_FILTER_COUNT][QUEST_SORT_COUNT] =
{
    [QUEST_FILTER_DEFAULT][QUEST_SORT_DEFAULT]     = COMPOUND_STRING(" Tasks"),
    [QUEST_FILTER_DEFAULT][QUEST_SORT_LOCATION]    = COMPOUND_STRING(" Tasks (Area)"),
    [QUEST_FILTER_DEFAULT][QUEST_SORT_NAME]        = COMPOUND_STRING(" Tasks (A-Z)"),
    [QUEST_FILTER_ACTIVE][QUEST_SORT_DEFAULT]      = COMPOUND_STRING(" Active"),
    [QUEST_FILTER_ACTIVE][QUEST_SORT_LOCATION]     = COMPOUND_STRING(" Active (Area)"),
    [QUEST_FILTER_ACTIVE][QUEST_SORT_NAME]         = COMPOUND_STRING(" Active (A-Z)"),
    [QUEST_FILTER_DONE][QUEST_SORT_DEFAULT]        = COMPOUND_STRING(" Completed"),
    [QUEST_FILTER_DONE][QUEST_SORT_LOCATION]       = COMPOUND_STRING(" Completed (Area)"),
    [QUEST_FILTER_DONE][QUEST_SORT_NAME]           = COMPOUND_STRING(" Completed (A-Z)"),
    [QUEST_FILTER_INACTIVE][QUEST_SORT_DEFAULT]    = COMPOUND_STRING(" Inactive"),
    [QUEST_FILTER_INACTIVE][QUEST_SORT_LOCATION]   = COMPOUND_STRING(" Inactive (Area)"),
    [QUEST_FILTER_INACTIVE][QUEST_SORT_NAME]       = COMPOUND_STRING(" Inactive (A-Z)"),
    [QUEST_FILTER_REWARD][QUEST_SORT_DEFAULT]      = COMPOUND_STRING(" Rewards"),
    [QUEST_FILTER_REWARD][QUEST_SORT_LOCATION]     = COMPOUND_STRING(" Rewards (Area)"),
    [QUEST_FILTER_REWARD][QUEST_SORT_NAME]         = COMPOUND_STRING(" Rewards (A-Z)"),
};

static const u8 sText_Adventure[] = _("{PLAYER}'s Adventure");
static const u8 sText_Unk[] = _("????????");
static const u8 sText_Back[] = _("Back");
static const u8 sText_Close[] = _("Close");

static const struct BgTemplate sQuestMenuBgTemplates[] =
{
    {
        .bg = BG0_QUEST_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = BG1_QUEST_BG_INDICATORS,
        .charBaseIndex = 1,
        .mapBaseIndex = 29,
        .priority = 1,
    },
    {
        .bg = BG2_QUEST_BG_LIST,
        .charBaseIndex = 1,
        .mapBaseIndex = 27,
        .priority = 2,
    },
    {
        .bg = BG3_QUEST_BG_BACKGROUND,
        .charBaseIndex = 3,
        .mapBaseIndex = 25,
        .priority = 2,
    },

};

static const struct WindowTemplate sQuestMenuHeaderWindowTemplates[] =
{
    [QUEST_WINDOW_HEADER] =
    {
        .bg = BG0_QUEST_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [QUEST_WINDOW_QUEST_LIST] =
    {
        .bg = BG0_QUEST_BG_TEXT,
        .tilemapLeft = 3,
        .tilemapTop = 2,
        .width = 27,
        .height = 11,
        .paletteNum = 0,
        .baseBlock = 61,
    },
    [QUEST_WINDOW_DESC] =
    {
        .bg = BG0_QUEST_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 30,
        .height = 5,
        .paletteNum = 0,
        .baseBlock = 358,
    },
    [QUEST_WINDOW_FOOTER] =
    {
        .bg = BG0_QUEST_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 571,
    },
    [QUEST_WINDOW_CURSOR] =
    {
        .bg = BG1_QUEST_BG_INDICATORS,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 30,
        .height = 11,
        .paletteNum = 0,
        .baseBlock = 631,
    },
    [QUEST_WINDOW_CARVE] =
    {
        .bg = BG2_QUEST_BG_LIST,
        .tilemapLeft = 26,
        .tilemapTop = 3,
        .width = 2,
        .height = 10,
        .paletteNum = QUEST_PALETTE_LIST_ID,
        .baseBlock = 961,
    },
    DUMMY_WIN_TEMPLATE
};

//Font color combinations for printed text
static const u8 sQuestMenuWindowFontColors[][3] =
{
    [QUEST_FONT_COLOR_QUEST_LIST] =
    {
        TEXT_COLOR_TRANSPARENT,
        QUEST_PALETTE_WHITE,
        TEXT_COLOR_TRANSPARENT,
    },
    [QUEST_FONT_COLOR_DESC] =
    {
        TEXT_COLOR_TRANSPARENT,
        QUEST_PALETTE_BLACK,
        TEXT_COLOR_TRANSPARENT,
    },
    [QUEST_FONT_COLOR_HEADER] =
    {
        TEXT_COLOR_TRANSPARENT,
        TEXT_COLOR_WHITE,
        TEXT_COLOR_TRANSPARENT,
    },
};

static const struct SpritePalette sQuestInterfaceSpritePalette =
{
    .data = questPalettesDefault,
    .tag = PAL_QUEST_UI_SPRITES,
};

static bool32 AllocateStructs(void)
{
    sStateDataPtr = AllocZeroed(sizeof(struct QuestMenuResources));

    return (
            sStateDataPtr == NULL
           );
}


void QuestMenu_Init(MainCallback callback)
{
    if (AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }

    sListMenuState.savedCallback = callback;
    SetListPositionScroll(0);
    SetListPositionRow(0);
    SetCursorPositionOnScreen(0);

    sStateDataPtr->moveModeOrigPos = 0xFF;
    sStateDataPtr->savedCallback = 0;

    SetMainCallback2(Quest_SetupCB);
}

static void MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Quest_SetupCB(void)
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
            ResetPaletteFade();
            FreeSpritePalettesResetSpriteData();
            ResetQuestSpritesTags();
            ResetTasks();
            gMain.state++;
            break;
        case 2:
            InitBgsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            QuestMenu_InitWindows();
            gMain.state++;
            break;
        case 4:
            ClearModeOnStartup();
            LoadSavedQuestMode();
            InitItems();
            gMain.state++;
            break;
        case 5:
            gMain.state++;
            break;
        case 6:
            BuildMenuTemplate();
            gMain.state++;
            break;
        case 7:
            LoadListPositionFromSaveBlock();
            LoadCursorScreenPositionFromSaveblock();
            SetCursorPosition();
            SetScrollPosition();
            InitalizeQuestsOnScreen();
            CreateTask(Task_UpdateQuestsOnScreen, 0);
            u8 taskId = CreateTask(Task_NavigateQuestMenu, 1);
            gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate,GetListPositionScroll(),GetListPositionRow());
            gMain.state++;
            break;
        case 8:
            PrintAllQuestSprites();
            CreateQuestArrowSpritePair();
            PrintIndicatorTilesBitmaps();
            gMain.state++;
            break;
        case 9:
            BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
            gMain.state++;
            break;
        case 10:
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
            gMain.state++;
            break;
        case 11:
            SetVBlankCallback(VBlankCB);
            SetMainCallback2(MainCB);
            break;
    }
}

static void FreeSpritePalettesResetSpriteData(void)
{
    ResetSpriteData();
    FreeSpriteTileRanges();
    FreeAllSpritePalettes();
    ClearDma3Requests();
}

static bool32 AllocZeroedTilemapBuffers(void)
{
    for (enum QuestBgs backgroundId = 0; backgroundId < BG_QUEST_COUNT; backgroundId++)
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
    InitBgsFromTemplates(0, sQuestMenuBgTemplates, NELEMS(sQuestMenuBgTemplates));

    for (enum QuestBgs backgroundId = 0; backgroundId < BG_QUEST_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetScheduleBgs(enum QuestBgs backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for(enum QuestBgs backgroundId = BG1_QUEST_BG_INDICATORS; backgroundId < BG_QUEST_COUNT; backgroundId++)
    {
        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, questTiles[backgroundId],0,0,0);
        CopyToBgTilemapBuffer(backgroundId, questTilemap[backgroundId],0,0);
    }
    LoadQuestPalettes();
}

static const u16* const sQuestMenuPalettesLUT[] =
{
    [VISUAL_OPTION_COLOR_RED] = sQuestMenuPalettesRed,
    [VISUAL_OPTION_COLOR_GREEN] = sQuestMenuPalettesGreen,
    [VISUAL_OPTION_COLOR_BLUE] = sQuestMenuPalettesBlue,
    [VISUAL_OPTION_COLOR_YELLOW] = sQuestMenuPalettesYellow,
    [VISUAL_OPTION_COLOR_BLACK] = sQuestMenuPalettesBlack,
    [VISUAL_OPTION_COLOR_WHITE] = sQuestMenuPalettesWhite,
    [VISUAL_OPTION_COLOR_PLATINUM] = sQuestMenuPalettesPlatinum,
    [VISUAL_OPTION_COLOR_SCARLET] = sQuestMenuPalettesScarlet,
    [VISUAL_OPTION_COLOR_VIOLET] = sQuestMenuPalettesViolet,
    [VISUAL_OPTION_COLOR_CUSTOM] = sQuestMenuPalettesDefault,
    [VISUAL_OPTION_COLOR_COUNT] = sQuestMenuPalettesDefault,
};

static void LoadQuestPalettes(void)
{
    LoadPalette(sQuestMenuListPal,QUEST_PALETTE_LIST_SLOT,PLTT_SIZE_4BPP);
    LoadPalette(sQuestMenuPalettesLUT[GetVisualColor()],QUEST_PALETTE_MENU_SLOT,PLTT_SIZE_4BPP);
}

static void QuestMenu_InitWindows(void)
{
    InitWindows(sQuestMenuHeaderWindowTemplates);
    DeactivateAllTextPrinters();

    for (enum QuestWindows windowId = 0; windowId < QUEST_WINDOW_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void ClearWindowCopyToVram(enum QuestWindows windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void InitBgsAndLoadBackgroundGraphics(void)
{
    if (Quest_InitBgs())
        LoadGraphics();
    else
        FadeAndBail();
}

static bool32 Quest_InitBgs(void)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs();

    return TRUE;
}

static void InitItems(void)
{
    sStateDataPtr->nItems = QUEST_COUNT;

    sStateDataPtr->maxShowed = sStateDataPtr->nItems + 1 <= 5 ?
        sStateDataPtr->nItems + 1 : 5;
}

static u8 GetCursorPosition(void)
{
    return (GetListPositionScroll() + GetListPositionRow());
}

static void SetCursorPosition(void)
{
    if (IfScrollIsOutOfBounds()) {
        SetListPositionScroll((sStateDataPtr->nItems + 1) - sStateDataPtr->maxShowed);
    }

    if (IfRowIsOutOfBounds()) {
        if (sStateDataPtr->nItems + 1 < 2) {
            SetListPositionRow(0);
        } else {
            SetListPositionRow(sStateDataPtr->nItems);
        }
    }
}

static void SetScrollPosition(void)
{
    u32 i;
    u32 row = GetListPositionRow();
    //u32 scroll = GetListPositionScroll();

    if (row <= QUEST_MENU_ROW_LAST)
        return;

    for (i = 0; i <= row - QUEST_MENU_ROW_LAST;sListMenuState.questListPosition.row--,sListMenuState.questListPosition.scroll++, i++)
        if (GetListPositionScroll() + sStateDataPtr->maxShowed == sStateDataPtr->nItems + 1)
            break;
}

bool8 IfScrollIsOutOfBounds(void)
{
    u32 scroll = GetListPositionScroll();
    return (scroll != 0 && (scroll + sStateDataPtr->maxShowed) > (sStateDataPtr->nItems + 1));
}

bool8 IfRowIsOutOfBounds(void)
{
    return ((GetListPositionScroll() + GetListPositionRow()) >= (sStateDataPtr->nItems + 1));
}

static void SaveScrollAndRow(s16 *data)
{
    ListMenuGetScrollAndRow(data[0], &sListMenuState.storedListPosition.scroll,
            &sListMenuState.storedListPosition.row);
}

static enum QuestSort GetCurrentQuestSort(void)
{
    return sStateDataPtr->filterSort.sort;
}

static enum QuestFilter GetCurrentQuestFilter(void)
{
    return sStateDataPtr->filterSort.filter;
}

static enum QuestSubquestState GetCurrentQuestSubquestState(void)
{
    return sStateDataPtr->filterSort.subquestState;
}

static void SetCurrentQuestSort(enum QuestSort sort)
{
    sStateDataPtr->filterSort.sort = sort;
}

static void SetCurrentQuestFilter(enum QuestFilter filter)
{
    sStateDataPtr->filterSort.filter = filter;
}


static void SetCurrentQuestSubquestState(enum QuestSubquestState state)
{
    sStateDataPtr->filterSort.subquestState = state;
}

void ClearModeOnStartup(void)
{
    SetCurrentQuestSort(QUEST_SORT_DEFAULT);
    SetCurrentQuestFilter(QUEST_FILTER_DEFAULT);
    SetCurrentQuestSubquestState(QUEST_SUBQUEST_MODE_OFF);
}

void WriteModeToSaveBlock(void)
{
    if (GetCurrentQuestSubquestState() == FALSE) {
        memcpy(&gSaveBlock3Ptr->savedQuestListProperties,&sStateDataPtr->filterSort,sizeof(struct QuestListProperties));
    }
}

static void SetListPositionScroll(u32 scroll)
{
    sListMenuState.questListPosition.scroll = scroll;
}

static u32 GetCursorPositionOnScreen(void)
{
    u32 listTaskId = FindTaskIdByFunc(Task_NavigateQuestMenu);
    u32 listId = gTasks[listTaskId].data[0];
    struct ListMenu *list = (void*) gTasks[listId].data;
    return list->selectedRow;
}

static void SetCursorPositionOnScreen(u32 position)
{
    u32 listTaskId = FindTaskIdByFunc(Task_NavigateQuestMenu);
    u32 listId = gTasks[listTaskId].data[0];
    struct ListMenu *list = (void*) gTasks[listId].data;
    list->selectedRow = position;
}

static void LoadCursorScreenPositionFromSaveblock(void)
{
    u32 position = gSaveBlock3Ptr->savedQuestPositions.screenCursorPosition;
    SetCursorPositionOnScreen(position);
}

static u32 GetListPositionScroll(void)
{
    return sListMenuState.questListPosition.scroll;
}

static void SetListPositionRow(u32 row)
{
    sListMenuState.questListPosition.row = row;
}

static u32 GetListPositionRow(void)
{
    return sListMenuState.questListPosition.row;
}

static void WriteListPositionToSaveBlock(void)
{
    memcpy(&gSaveBlock3Ptr->savedQuestPositions,&sListMenuState.questListPosition,sizeof(struct QuestListPosition));
}

static void LoadListPositionFromSaveBlock(void)
{
    memcpy(&sListMenuState.questListPosition,&gSaveBlock3Ptr->savedQuestPositions,sizeof(struct QuestListPosition));
}

static void ManageMode(u32 action)
{
    switch (action)
    {
        case QUEST_ACTION_SUB:
            ToggleSubsavedQuestMode();
            break;
        case QUEST_ACTION_ALPHA:
            IncrementSort();
            sStateDataPtr->restoreCursor = FALSE;
            break;
        default:
        case QUEST_ACTION_INCREMENT:
            IncrementFilter();
            sStateDataPtr->restoreCursor = FALSE;
            break;
        case QUEST_ACTION_DECREMENT:
            DecrementFilter();
            sStateDataPtr->restoreCursor = FALSE;
            break;
    }
    WriteModeToSaveBlock();
}

void ToggleSubsavedQuestMode(void)
{
    if (GetCurrentQuestSubquestState())
    {
        SetCurrentQuestSubquestState(QUEST_SUBQUEST_MODE_OFF);
        sStateDataPtr->restoreCursor = TRUE;
    }
    else
    {
        SetCurrentQuestSubquestState(QUEST_SUBQUEST_MODE_ON);
        sStateDataPtr->restoreCursor = FALSE;
        WriteListPositionToSaveBlock();
    }
}

void IncrementSort(void)
{
    enum QuestSort newSort = (GetCurrentQuestSort() + 1);

    if (newSort >= QUEST_SORT_COUNT)
        newSort = QUEST_SORT_DEFAULT;

    SetCurrentQuestSort(newSort);
}

void DecrementFilter(void)
{
    enum QuestFilter newFilter = (GetCurrentQuestFilter());

    if (newFilter == QUEST_FILTER_DEFAULT)
        newFilter = QUEST_FILTER_DONE;
    else
        newFilter--;

    SetCurrentQuestFilter(newFilter);
}

void IncrementFilter(void)
{
    enum QuestFilter newFilter = (GetCurrentQuestFilter() + 1);

    if (newFilter >= QUEST_FILTER_COUNT)
        newFilter = QUEST_FILTER_DEFAULT;

    SetCurrentQuestFilter(newFilter);
}

static bool32 IsNotFilteredMode(void)
{
    return (GetCurrentQuestFilter() == QUEST_FILTER_DEFAULT);
}

static bool32 IsAlphaMode(void)
{
    return (GetCurrentQuestSort() == QUEST_SORT_NAME);
}

static bool32 IsLocationMode(void)
{
    return (GetCurrentQuestSort() == QUEST_SORT_LOCATION);
}

static void GetSavedQuestMode(void)
{
    memcpy(&sStateDataPtr->filterSort,&gSaveBlock3Ptr->savedQuestListProperties,sizeof(struct QuestListProperties));
}

static void LoadSavedQuestMode(void)
{
    GetSavedQuestMode();
}

static void BuildMenuTemplate(void)
{
    u8 lastRow = GetModeAndGenerateList();

    AssignCancelNameAndId(lastRow);

    gMultiuseListMenuTemplate.items = sStateDataPtr->questList;
    gMultiuseListMenuTemplate.moveCursorFunc = MoveCursorFunc;
    gMultiuseListMenuTemplate.itemPrintFunc = GenerateStateAndPrint;
    gMultiuseListMenuTemplate.totalItems = CountNumberListRows();
    gMultiuseListMenuTemplate.maxShowed = sStateDataPtr->maxShowed;
    gMultiuseListMenuTemplate.windowId = QUEST_WINDOW_QUEST_LIST;

    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 7;
    gMultiuseListMenuTemplate.cursor_X = -1;

    gMultiuseListMenuTemplate.upText_Y = 2;

    gMultiuseListMenuTemplate.cursorPal = QUEST_PALETTE_WHITE;
    gMultiuseListMenuTemplate.fillValue = 0;
    gMultiuseListMenuTemplate.cursorShadowPal = 0;
    gMultiuseListMenuTemplate.lettersSpacing = 1;
    gMultiuseListMenuTemplate.itemVerticalPadding = 4;
    gMultiuseListMenuTemplate.scrollMultiple = LIST_MULTIPLE_SCROLL_L_R;
    gMultiuseListMenuTemplate.fontId = 2;
    gMultiuseListMenuTemplate.cursorKind = 0;
}


u8 GetModeAndGenerateList(void)
{
    if (GetCurrentQuestSubquestState()) {
        return GenerateSubquestList();
    } else {
        return GenerateList();
    }
}

static u8 CountNumberListRows()
{
    u32 questCount = 0;
    u32 lockedCount = QUEST_COUNT - CountUnlockedQuests();

    switch (GetCurrentQuestFilter())
    {
        case QUEST_FILTER_INACTIVE:
            questCount = CountInactiveQuests();
            break;
        case QUEST_FILTER_ACTIVE:
            questCount = CountActiveQuests();
            break;
        case QUEST_FILTER_REWARD:
            questCount = CountRewardQuests();
            break;
        case QUEST_FILTER_DONE:
            questCount = CountCompletedQuests();
            break;
        default:
        case QUEST_FILTER_DEFAULT:
            questCount = (QUEST_COUNT - lockedCount);
            break;
    }

    if (GetCurrentQuestSubquestState())
        questCount = sSideQuests[sStateDataPtr->parentQuest].numSubquests;

    return questCount + 1;
}

u8 *DefineQuestOrder()
{
    static u8 sortedList[QUEST_COUNT];
    u8 a, c, d;
    u8 placeholderVariable;

    for (a = 0; a < QUEST_COUNT; a++) {
        sortedList[a] = a;
    }

    if (IsAlphaMode()) {
        for (c = 0; c < QUEST_COUNT; c++) {
            for (d = c + 1; d < QUEST_COUNT; d++) {
                if (StringCompare(sSideQuests[sortedList[c]].name, sSideQuests[sortedList[d]].name) > 0)
                {
                    placeholderVariable = sortedList[c];
                    sortedList[c] = sortedList[d];
                    sortedList[d] = placeholderVariable;
                }
            }
        }
    }

    if (IsLocationMode()) {
        for (c = 0; c < QUEST_COUNT; c++) {
            for (d = c + 1; d < QUEST_COUNT; d++) {
                if (StringCompare(sSideQuests[sortedList[c]].map, sSideQuests[sortedList[d]].map) > 0)
                {
                    placeholderVariable = sortedList[c];
                    sortedList[c] = sortedList[d];
                    sortedList[d] = placeholderVariable;
                }
            }
        }
    }

    return sortedList;
}

u8 GenerateSubquestList()
{
    u8 parentQuest = sStateDataPtr->parentQuest;
    u8 lastRow = 0, numRow = 0, countQuest = 0;

    FillRowsWithEmptyData();

    for (numRow = 0; numRow < sSideQuests[parentQuest].numSubquests; numRow++) {
        PopulateListRowNameAndId(numRow, countQuest);

        countQuest++;
        lastRow = numRow + 1;
    }
    return lastRow;
}

static void FillRowsWithEmptyData(void)
{
    for (u32 row = 0; row < sStateDataPtr->nItems; row++)
    {
        sStateDataPtr->questList[row].name = COMPOUND_STRING("");
        sStateDataPtr->questList[row].id = QUEST_COUNT;
    }
}

u8 GenerateList(void)
{
    u32 mode = GetCurrentQuestFilter();
    u32 numFavorites = CountFavoriteQuests();
    u8 numRow = 0, offset = 0, newRow = 0, countQuest = 0,
       selectedQuestId = 0;
    u8 *sortedQuestList;

    sortedQuestList = DefineQuestOrder();

    FillRowsWithEmptyData();

    for (countQuest = 0; countQuest < sStateDataPtr->nItems; countQuest++)
    {
        selectedQuestId = *(sortedQuestList + countQuest);

        if (!IsNotFilteredMode() && !QuestMenu_GetSetQuestState(selectedQuestId, mode))
            continue;

        if (!QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_UNLOCKED))
            continue;

        if (QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_FAVORITE))
        {
            newRow = numRow;
            numRow++;
        }
        else
        {
            newRow = numFavorites + offset;
            offset++;
        }

        PopulateQuestName(selectedQuestId);
        PopulateListRowNameAndId(newRow, selectedQuestId);
    }
    return numRow + offset;
}

static void AssignCancelNameAndId(u8 numRow)
{
    if (GetCurrentQuestSubquestState()) {
        sStateDataPtr->questList[numRow].name = sText_Back;
    } else {
        sStateDataPtr->questList[numRow].name = sText_Close;
    }

    sStateDataPtr->questList[numRow].id = LIST_CANCEL;
}

u8 QuestMenu_GetSetSubquestState(u8 quest, u8 caseId, u8 childQuest)
{
    u8 uniqueId = sSideQuests[quest].subquests[childQuest].id;
    u8  index = uniqueId / 8; //8 bits per byte
    u8	bit = uniqueId % 8;
    u8	mask = 1 << bit;

    switch (caseId) {
        case FLAG_GET_COMPLETED:
            return gSaveBlock3Ptr->subQuests[index] & mask;
        case FLAG_SET_COMPLETED:
            gSaveBlock3Ptr->subQuests[index] |= mask;
            return 1;
    }

    return -1;
}

u8 QuestMenu_GetSetQuestState(u8 quest, u8 caseId)
{
    u8 index = quest * 5 / 8;
    u8 bit = quest * 5 % 8;
    u8 mask = 0, index2 = 0, bit2 = 0, index3 = 0, bit3 = 0, mask2 = 0,
       mask3 = 0;

    // 0 : locked
    // 1 : actived
    // 2 : rewarded
    // 3 : completed
    // 4 : favorited

    switch (caseId) {
        case FLAG_GET_UNLOCKED:
        case FLAG_SET_UNLOCKED:
            break;
        case FLAG_GET_INACTIVE:
        case FLAG_GET_ACTIVE:
        case FLAG_SET_ACTIVE:
        case FLAG_REMOVE_ACTIVE:
            bit += 1;
            break;
        case FLAG_GET_REWARD:
        case FLAG_SET_REWARD:
        case FLAG_REMOVE_REWARD:
            bit += 2;
            break;
        case FLAG_GET_COMPLETED:
        case FLAG_SET_COMPLETED:
        case FLAG_REMOVE_COMPLETED:
            bit += 3;
            break;
        case FLAG_GET_FAVORITE:
        case FLAG_SET_FAVORITE:
        case FLAG_REMOVE_FAVORITE:
            bit += 4;
            break;
    }
    if (bit >= 8) {
        index += 1;
        bit %= 8;
    }
    mask = 1 << bit;

    switch (caseId) {
        case FLAG_GET_UNLOCKED:
            return gSaveBlock3Ptr->questData[index] & mask;
        case FLAG_SET_UNLOCKED:
            gSaveBlock3Ptr->questData[index] |= mask;
            return 1;
        case FLAG_GET_INACTIVE:
            bit2 = bit + 1;
            bit3 = bit + 2;
            index2 = index;
            index3 = index;

            if (bit2 >= 8) {
                index2 += 1;
                bit2 %= 8;
            }
            if (bit3 >= 8) {
                index3 += 1;
                bit3 %= 8;
            }

            mask2 = 1 << bit2;
            mask3 = 1 << bit3;
            return !(gSaveBlock3Ptr->questData[index] & mask) && \
                !(gSaveBlock3Ptr->questData[index2] & mask2) && \
                !(gSaveBlock3Ptr->questData[index3] & mask3);
        case FLAG_GET_ACTIVE:
            return gSaveBlock3Ptr->questData[index] & mask;
        case FLAG_SET_ACTIVE:
            gSaveBlock3Ptr->questData[index] |= mask;
            return 1;
        case FLAG_REMOVE_ACTIVE:
            gSaveBlock3Ptr->questData[index] &= ~mask;
            return 1;
        case FLAG_GET_REWARD:
            return gSaveBlock3Ptr->questData[index] & mask;
        case FLAG_SET_REWARD:
            gSaveBlock3Ptr->questData[index] |= mask;
            return 1;
        case FLAG_REMOVE_REWARD:
            gSaveBlock3Ptr->questData[index] &= ~mask;
            return 1;
        case FLAG_GET_COMPLETED:
            return gSaveBlock3Ptr->questData[index] & mask;
        case FLAG_SET_COMPLETED:
            gSaveBlock3Ptr->questData[index] |= mask;
            CheckFavoriteAndRemove(quest);
            return 1;
        case FLAG_REMOVE_COMPLETED:
            gSaveBlock3Ptr->questData[index] &= ~mask;
            return 1;
        case FLAG_GET_FAVORITE:
            return gSaveBlock3Ptr->questData[index] & mask;
        case FLAG_SET_FAVORITE:
            gSaveBlock3Ptr->questData[index] |= mask;
            return 1;
        case FLAG_REMOVE_FAVORITE:
            gSaveBlock3Ptr->questData[index] &= ~mask;
            return 1;
    }
    return -1;  //failure
}

u32 CountUnlockedQuests(void)
{
    u32 q = 0, i = 0;

    for (i = 0; i < QUEST_COUNT; i++) {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_UNLOCKED)) {
            q++;
        }
    }
    return q;
}

u32 CountInactiveQuests(void)
{
    u32 q = 0, i = 0;

    for (i = 0; i < QUEST_COUNT; i++)
    {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_INACTIVE))
        {
            if (QuestMenu_GetSetQuestState(i, FLAG_GET_UNLOCKED))
            {
                q++;
            }
        }
    }
    return q;
}

u32 CountActiveQuests(void)
{
    u32 q = 0, i = 0;

    for (i = 0; i < QUEST_COUNT; i++) {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_ACTIVE)) {
            q++;
        }
    }
    return q;
}

u32 CountRewardQuests(void)
{
    u32 q = 0, i = 0;

    for (i = 0; i < QUEST_COUNT; i++) {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_REWARD)) {
            q++;
        }
    }
    return q;
}

u32 CountCompletedQuests(void)
{
    u32 q = 0;
    enum QuestIdList i = 0;

    u32 parentQuest = sStateDataPtr->parentQuest;

    if (GetCurrentQuestSubquestState()) {
        for (i = 0; i < sSideQuests[parentQuest].numSubquests; i++) {
            if (QuestMenu_GetSetSubquestState(parentQuest, FLAG_GET_COMPLETED, i)) {
                q++;
            }
        }
    } else {
        for (i = 0; i < QUEST_COUNT; i++) {
            if (QuestMenu_GetSetQuestState(i, FLAG_GET_COMPLETED))
            {
                q++;
            }
        }
    }

    return q;
}

u32 CountFavoriteQuests(void)
{
    u32 q = 0, i = 0, x = 0;
    u32 mode = GetCurrentQuestFilter();

    for (i = 0; i < QUEST_COUNT; i++)
    {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_FAVORITE))
        {
            if (QuestMenu_GetSetQuestState(i, mode))
            {
                x++;
            }
            q++;
        }
    }

    if (IsNotFilteredMode()) {
        return q;
    } else {
        return x;
    }

}

u32 CountQuestsToSkip(void)
{
    u32 count = 0;

    for (u32 questIndex = 0; questIndex < QUEST_COUNT; questIndex++)
        if (ShouldSkipCountingQuests(questIndex))
            count++;

    return count;
}

bool32 ShouldSkipCountingQuests(enum QuestIdList questId)
{
    return sSideQuests[questId].skipQuestWhenCounting;
}

void PopulateQuestName(u8 countQuest)
{
    if (QuestMenu_GetSetQuestState(countQuest, FLAG_GET_ACTIVE)) {
        StringExpandPlaceholders(gStringVar4, sSideQuests[countQuest].name);
        StringAppend(gStringVar1, gStringVar4);
    } else {
        StringAppend(gStringVar1, sText_Unk);
    }
}

void PopulateListRowNameAndId(u8 row, u8 countQuest)
{
    if (GetCurrentQuestSubquestState())
        sStateDataPtr->questList[row].name = GetSubquestName(countQuest);
    else
        sStateDataPtr->questList[row].name = GetQuestName(countQuest);

    sStateDataPtr->questList[row].id = countQuest;
}

static bool8 DoesQuestHaveChildrenAndNotInactive(s32 itemId)
{
    if (itemId == LIST_CANCEL)
        return FALSE;

    if (itemId == QUEST_NONE)
        return FALSE;

    if (sSideQuests[itemId].numSubquests != 0
            && QuestMenu_GetSetQuestState(itemId, FLAG_GET_UNLOCKED)
            && !QuestMenu_GetSetQuestState(itemId, FLAG_GET_INACTIVE)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

static const u8* const helpBarStrings[QUEST_HELP_BAR_COUNT] =
{
    [QUEST_HELP_BAR_NOT_PINNED_NOT_SUBQUEST]  = COMPOUND_STRING("{DPAD_LEFTRIGHT} Filter {B_BUTTON} Return {SELECT_BUTTON} Pin {START_BUTTON} Sort"),
    [QUEST_HELP_BAR_NOT_PINNED_IS_SUBQUEST]   = COMPOUND_STRING("{DPAD_LEFTRIGHT} Filter {B_BUTTON} Return {SELECT_BUTTON} Pin {START_BUTTON} Sort {A_BUTTON} Subtasks"),
    [QUEST_HELP_BAR_IS_PINNED_NOT_SUBQUEST]   = COMPOUND_STRING("{DPAD_LEFTRIGHT} Filter {B_BUTTON} Return {SELECT_BUTTON} Unpin {START_BUTTON} Sort"),
    [QUEST_HELP_BAR_IS_PINNED_IS_SUBQUEST]    = COMPOUND_STRING("{A_BUTTON} Subtasks {DPAD_LEFTRIGHT} Filter {B_BUTTON} Return {SELECT_BUTTON} Unpin {START_BUTTON} Sort"),
    [QUEST_HELP_BAR_SUBQUEST_MODE]            = COMPOUND_STRING("{B_BUTTON} Return"),
};

static enum QuestHelpBarStates GenerateHelpBar(s32 selectedQuestId)
{
    bool32 isFavorite = (QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_FAVORITE));
    bool32 isParent = DoesQuestHaveChildrenAndNotInactive(selectedQuestId);
    bool32 isSubquestMode = GetCurrentQuestSubquestState();

    if (isSubquestMode)
        return QUEST_HELP_BAR_SUBQUEST_MODE;
    else if (!isFavorite && !isParent)
        return QUEST_HELP_BAR_NOT_PINNED_NOT_SUBQUEST;
    else if (!isFavorite && isParent)
        return QUEST_HELP_BAR_NOT_PINNED_IS_SUBQUEST;
    else if (isFavorite && !isParent)
        return QUEST_HELP_BAR_IS_PINNED_NOT_SUBQUEST;
    else if (isFavorite && isParent)
        return QUEST_HELP_BAR_IS_PINNED_IS_SUBQUEST;
    else
        return QUEST_HELP_BAR_SUBQUEST_MODE;
}

static void GeneratePrintHelpBar(s32 questId)
{
    u8 *end;
    u32 fontId = FONT_SMALL_NARROW;
    u32 windowId = QUEST_WINDOW_FOOTER;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 4;
    u32 y = 0;
    u32 helpBarId = GenerateHelpBar(questId);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    end = StringExpandPlaceholders(gStringVar3,helpBarStrings[helpBarId]);
    PrependFontIdToFit(gStringVar3,end,fontId,DISPLAY_WIDTH - x);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sQuestMenuWindowFontColors[QUEST_FONT_COLOR_HEADER], TEXT_SKIP_DRAW, gStringVar3);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void MoveCursorFunc(s32 questId, bool8 onInit, struct ListMenu *list)
{
    PlayCursorSound(onInit);

    if (sStateDataPtr->moveModeOrigPos != 0xFF)
        return;

    GenerateAndPrintHeader(questId);
    GenerateAndPrintDesc(questId);
    GeneratePrintHelpBar(questId);
}

static void GenerateAndPrintDesc(s32 questId)
{
    GenerateQuestDescription(questId);
    PrintQuestDescription(questId);
}

static void PlayCursorSound(bool8 firstRun)
{
    if (firstRun == FALSE) {
        PlaySE(SE_RG_BAG_CURSOR);
    }
}

void GenerateQuestLocation(s32 questId)
{
    u8 *end;

    if (questId < QUEST_PLAYERSADVENTURE)
        return;

    if (!GetCurrentQuestSubquestState())
        end = StringCopy(gStringVar2, sSideQuests[questId].map);
    else
        end = StringCopy(gStringVar2,sSideQuests[sStateDataPtr->parentQuest].subquests[questId].map);

    PrependFontIdToFit(gStringVar2,end,0,QUEST_LOCATION_WIDTH);
}

static void PrintQuestLocation(s32 questId)
{
    if (questId < QUEST_PLAYERSADVENTURE)
        return;

    u32 fontId = 0;
    u32 windowId = QUEST_WINDOW_HEADER;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 stringWidth = GetStringWidth(fontId, gStringVar2, letterSpacing);
    u32 x = DISPLAY_WIDTH - stringWidth;
    u32 y = 1;

    AddTextPrinterParameterized4(QUEST_WINDOW_HEADER, fontId, x, y, letterSpacing, lineSpacing, sQuestMenuWindowFontColors[QUEST_FONT_COLOR_HEADER], TEXT_SKIP_DRAW, gStringVar2);
    BlitBitmapToWindow(windowId,locationBitmap,x-(TILE_SIZE_1BPP + 4),y+2,16,16);
}

void CopyCursorTiles(u32 windowId, const void* tile1, const void* tile2, const void* tile4, const void* tile5, const void* tile6, u32 cursor)
{
    u32 x;
    u32 start1 = cursor * 60;
    u32 end1 = 27 + (cursor * 60);
    u32 start2 = 30 + (cursor * 60);
    u32 end2 = 57 + (cursor * 60);
    u32 start3 = 60 + (cursor * 60);
    u32 end3 = 87 + (cursor * 60);

    if (cursor == QUEST_MENU_UX_ROW_4)
    {
        start1 += 30;
        end1+= 30;
        start2 += 30;
        end2 += 30;
        start3 += 30;
        end3 += 30;
    }

    for (x = start1; x < end1; x++)
        CopyToWindowPixelBuffer(windowId, tile1, 0, x);
    CopyToWindowPixelBuffer(windowId, tile2, 0, x++);


    for (x = start2; x < end2; x++)
        CopyToWindowPixelBuffer(windowId, sCursorTile0, 0, x);
    CopyToWindowPixelBuffer(windowId, tile4, 0, x++);

    if (tile5 == NULL)
        return;

    for (x = start3; x < end3; x++)
        CopyToWindowPixelBuffer(windowId, tile5, 0, x);
    CopyToWindowPixelBuffer(windowId, tile6, 0, x++);
}

static void PrintCursor(void)
{
    enum QuestWindows windowId = QUEST_WINDOW_CURSOR;
    u32 cursor = GetCursorPositionOnScreen();

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    switch (cursor)
    {
        default:
            CopyCursorTiles(windowId, sCursorTile0, sCursorTile1, sCursorTile1, NULL, NULL, cursor);
            break;
        case QUEST_MENU_UX_ROW_1:
            CopyCursorTiles(windowId, sCursorTile3, sCursorTile4, sCursorTile5, sCursorTile6, sCursorTile7, cursor);
            break;
        case QUEST_MENU_UX_ROW_2:
            CopyCursorTiles(windowId, sCursorTile2, sCursorTile8, sCursorTile5, sCursorTile9, sCursorTile11, cursor);
            break;
        case QUEST_MENU_UX_ROW_3:
            CopyCursorTiles(windowId, sCursorTile12, sCursorTile13, sCursorTile5, sCursorTile14, sCursorTile15, cursor);
            break;
    }

    u32 row = GetCursorPositionOnScreen();
    u32 scroll = GetListPositionScroll();
    u32 currentPosition = row + scroll;
    u32 quest = sStateDataPtr->questList[currentPosition].id;

    if (!GetCurrentQuestSubquestState())
        if (DoesQuestHaveChildrenAndNotInactive(quest))
            BlitBitmapToWindow(windowId,carveBitmap,208,8+(18*row),16,16);

    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static const u32* const carveTileLUT[] =
{
    sCarveTile0,
    sCarveTile1,
    sCarveTile2,
    sCarveTile3,
    sCarveTile4,
    sCarveTile5,
    sCarveTile6,
    sCarveTile7,
    sCarveTile8,
    sCarveTile9,
    sCarveTile10,
    sCarveTile11,
    sCarveTile12,
    sCarveTile13,
    sCarveTile14,
    sCarveTile15,
    sCarveTile16,
    sCarveTile17,
    sCarveTile18,
    sCarveTile19,
};

static const u32* const carvePlainTileLUT[] =
{
    sCarvePlainTile0,
    sCarvePlainTile1,
    sCarvePlainTile2,
    sCarvePlainTile3,
    sCarvePlainTile4,
    sCarvePlainTile5,
    sCarvePlainTile6,
    sCarvePlainTile7,
    sCarvePlainTile8,
    sCarvePlainTile9,
    sCarvePlainTile10,
    sCarvePlainTile11,
    sCarvePlainTile12,
    sCarvePlainTile13,
    sCarvePlainTile14,
    sCarvePlainTile15,
    sCarvePlainTile16,
    sCarvePlainTile17,
    sCarvePlainTile18,
    sCarvePlainTile19,
};

static void AddCarveTiles(void)
{
    u32 x = 0, tileIndex = 0;
    enum QuestWindows windowId = QUEST_WINDOW_CARVE;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    for (u32 index = 0; index < QUEST_MENU_UX_ROW_COUNT; index++)
    {
        s32 quest = GetQuestSpriteAssignedQuest(index);
        bool32 isParent = DoesQuestHaveChildrenAndNotInactive(quest);

        if (GetCurrentQuestSubquestState())
            isParent = FALSE;

        const u32* const *tileLUT = isParent ? carveTileLUT : carvePlainTileLUT;

        for (u32 i = 0; i < 4; i++)
            CopyToWindowPixelBuffer(windowId, tileLUT[tileIndex++], 0, x++);
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void GenerateQuestDescription(s32 questId)
{
    if (questId == LIST_CANCEL)
    {
        StringCopy(gStringVar1,gText_Blank);
    }
    else if (GetCurrentQuestSubquestState() == FALSE) {
        if (IsQuestInactiveState(questId) == TRUE) {
            StringCopy(gStringVar1, COMPOUND_STRING("Task unknown."));
        }
        if (IsQuestActiveState(questId) == TRUE) {
            QuestMenu_UpdateQuestDesc(questId);
        }
        if (IsQuestRewardState(questId) == TRUE) {
            QuestMenu_UpdateQuestRewardDesc(questId);
        }
        if (IsQuestCompletedState(questId) == TRUE) {
            UpdateQuestDoneDesc(questId);
        }
    } else {
        if (IsSubquestCompletedState(questId) == TRUE) {
            StringCopy(gStringVar1,
                    sSideQuests[sStateDataPtr->parentQuest].subquests[questId].desc);
        } else {
            StringCopy(gStringVar1, gText_Blank);
        }
    }

    StringExpandPlaceholders(gStringVar3, gStringVar1);
}
void QuestMenu_UpdateQuestDesc(s32 questId)
{
    StringExpandPlaceholders(gStringVar1, GetQuestDesc(questId));
}

void QuestMenu_UpdateQuestRewardDesc(s32 questId)
{
    StringExpandPlaceholders(gStringVar1, GetQuestRewardDesc(questId));
}

void UpdateQuestDoneDesc(s32 questId)
{
    StringExpandPlaceholders(gStringVar1, GetQuestDoneDesc(questId));
}

const u8 *GetSubquestName(s32 questId)
{
    u32 parentQuest = sStateDataPtr->parentQuest;

    if (!IsSubquestCompletedState(questId))
        return sText_Unk;
    else
        return sSideQuests[parentQuest].subquests[questId].name;
}

const u8 *GetQuestName(s32 questId)
{
    if (QuestMenu_GetSetQuestState(questId, FLAG_GET_INACTIVE))
        return sText_Unk;

    if (questId == QUEST_PLAYERSADVENTURE)
    {
        if (sStateDataPtr == NULL)
            return sText_Adventure;

        StringExpandPlaceholders(sStateDataPtr->questName, sSideQuests[QUEST_PLAYERSADVENTURE].name);
        return sStateDataPtr->questName;
    }

    return sSideQuests[questId].name;
}

const u8 *GetQuestMap(s32 questId)
{
    return sSideQuests[questId].map;
}

const u8 *GetQuestRewardDesc(s32 questId)
{
    if (sSideQuests[questId].rewardDesc == NULL)
        return gText_Blank;

    return sSideQuests[questId].rewardDesc;
}

const u8 *GetQuestDesc(s32 questId)
{
    switch (questId) {
        case QUEST_PLAYERSADVENTURE:
            return GetQuestDesc_PlayersAdventure();
            break;
        case QUEST_RABIESOUTBREAK:
            return GetQuestDesc_RabiesOutbreak();
            break;
        case QUEST_BETWEENASTONEANDAHARDPLACE:
            return GetQuestDesc_BetweenAStoneAndAHardPlace();
            break;
        default:
            return sSideQuests[questId].desc;
    }
}

const u8 *GetQuestDoneDesc(s32 questId)
{
    switch (questId) {
        case QUEST_PLAYERSADVENTURE:
            return GetQuestDoneDesc_PlayersAdventure();
        default:
            return sSideQuests[questId].donedesc;
    }
}

void PrintQuestDescription(s32 questId)
{
    u32 fontId = FONT_SMALL_NARROW;
    u32 windowId = QUEST_WINDOW_DESC;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 x = 4;
    u32 y = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sQuestMenuWindowFontColors[QUEST_FONT_COLOR_DESC], TEXT_SKIP_DRAW, gStringVar3);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

bool8 IsSubquestCompletedState(s32 questId)
{
    if (QuestMenu_GetSetSubquestState(sStateDataPtr->parentQuest,
                FLAG_GET_COMPLETED,
                questId)) {
        return TRUE;
    } else {
        return FALSE;
    }
}
bool8 IsQuestRewardState(s32 questId)
{
    if (QuestMenu_GetSetQuestState(questId, FLAG_GET_REWARD)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

bool8 IsQuestInactiveState(s32 questId)
{
    if (!QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

bool8 IsQuestActiveState(s32 questId)
{
    if (QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

bool8 IsQuestCompletedState(s32 questId)
{
    if (QuestMenu_GetSetQuestState(questId, FLAG_GET_COMPLETED)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

bool8 UNUSED IsQuestUnlocked(s32 questId)
{
    if (QuestMenu_GetSetQuestState(questId, FLAG_GET_UNLOCKED)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

enum QuestCases ReturnQuestState(enum QuestIdList questId)
{
    for (enum QuestCases state = FLAG_GET_INACTIVE; state < FLAG_GET_FAVORITE; state++)
        if (QuestMenu_GetSetQuestState(questId,state))
            return state;

    return FLAG_GET_UNLOCKED;
}

static void GenerateStateAndPrint(u8 windowId, u32 questId, u8 y)
{
    for (enum QuestIndicatorTypes indicator = 0; indicator < QUEST_INDICATOR_COUNT; indicator++)
        PrintQuestIndicator(indicator,windowId,questId,y);
}

static void PrintAllQuestSprites(void)
{
    for (enum QuestMenuRows rowIndex = 0; rowIndex < QUEST_MENU_UX_ROW_COUNT; rowIndex++)
    {
        s32 quest = GetQuestSpriteAssignedQuest(rowIndex);
        PrintQuestSprite(quest,rowIndex);
    }
}

static void RemoveAllQuestSprites(void)
{
    //PSF TODO the menu will run out of palettes after 20 scrolls and I have no idea why.
    for (enum QuestMenuRows rowIndex = 0; rowIndex < QUEST_MENU_UX_ROW_COUNT; rowIndex++)
    {
        struct Sprite *sprite = &gSprites[GetQuestSpriteId(rowIndex)];

        u32 quest = sprite->data[1];
        u32 tag = sprite->template->tileTag;
        u32 tileStart = sprite->sheetTileStart;

        DestroySprite(sprite);
        FieldEffectFreeTilesIfUnused(tileStart);

        if (quest == QUEST_NONE)
            FreeSpriteTilesByTag(tag);

        SetQuestSpriteId(rowIndex, SPRITE_NONE);
        SetQuestSpriteTags(rowIndex,TAG_NONE);
    }
}

static void ResetQuestSpritesTags(void)
{
    for (enum QuestMenuRows row = 0; row < QUEST_MENU_UX_ROW_COUNT; row++)
    {
        SetQuestSpriteId(row,SPRITE_NONE);
        SetQuestSpriteTags(row,TAG_NONE);
    }
}

static bool32 HaveQuestsUpdatedOnScreen(void)
{
    return sStateDataPtr->shouldUpdate;
}

static u32 GetQuestSpriteId(enum QuestMenuRows row)
{
    return sStateDataPtr->questSpriteInfo[row].spriteId;
}

static u32 UNUSED GetQuestSpriteTags(enum QuestMenuRows row)
{
    return sStateDataPtr->questSpriteInfo[row].tileTag;
}

static u32 GetQuestSpriteAssignedQuest(enum QuestMenuRows row)
{
    return sStateDataPtr->questSpriteInfo[row].quest;
}

static void SetQuestSpriteId(enum QuestMenuRows row, u32 spriteId)
{
    sStateDataPtr->questSpriteInfo[row].spriteId = spriteId;
}

static void SetQuestSpriteTags(enum QuestMenuRows row, u32 tag)
{
    sStateDataPtr->questSpriteInfo[row].tileTag = tag;
}

static void SetQuestSpriteAssignedQuest(enum QuestMenuRows row, u32 tag)
{
    sStateDataPtr->questSpriteInfo[row].quest = tag;
}

static void SpriteCallback_QuestSprite(struct Sprite *sprite)
{
   sprite->invisible = (sprite->data[1] == QUEST_NONE);
}

static void UpdateAllQuestsOnScreen(void)
{
    for (enum QuestMenuRows rowIndex = 0; rowIndex < QUEST_MENU_UX_ROW_COUNT; rowIndex++)
        UpdateQuestOnScreen(rowIndex);
}

static void InitalizeQuestsOnScreen(void)
{
    for (enum QuestMenuRows rowIndex = 0; rowIndex < QUEST_MENU_UX_ROW_COUNT; rowIndex++)
        SetQuestSpriteAssignedQuest(rowIndex,QUEST_NONE);
}

static void UpdateQuestOnScreen(enum QuestMenuRows targetRow)
{
    u32 scroll = GetListPositionScroll();
    u32 rowCount = min(gMultiuseListMenuTemplate.totalItems,QUEST_MENU_UX_ROW_COUNT);

    s32 quest = (targetRow >= rowCount) ? QUEST_NONE : sStateDataPtr->questList[scroll + targetRow].id;

    SetQuestSpriteAssignedQuest(targetRow,quest);
}

static void PrintQuestSprite(s32 questId, enum QuestMenuRows row)
{
    u32 entityId = GetQuestSpriteEntityId(questId);
    u32 type = GetQuestSpriteType(questId);
    u32 x = 16, spriteId = 0;
    u32 y = 24 + (18 * row);
    u32 tag = questId + 3;

    switch (type)
    {
        case QUEST_SPRITE_TYPE_PKMN:
            entityId += OBJ_EVENT_MON;
        default:
        case QUEST_SPRITE_TYPE_OBJECT:
            if (entityId == OBJ_EVENT_GFX_BRENDAN_NORMAL)
            {
                u32 bodyType = gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE];
                entityId = GetPlayerAvatarGraphicsIdByStateIdAndGender(PLAYER_AVATAR_STATE_NORMAL,bodyType);
            }
            spriteId = CreateObjectGraphicsSprite2(entityId, SpriteCallbackDummy, x, y, tag);
            break;
        case QUEST_SPRITE_TYPE_CANCEL:
        case QUEST_SPRITE_TYPE_ITEM:
            spriteId = AddItemIconSprite(tag,tag,entityId);
            if (spriteId != MAX_SPRITES)
            {
                gSprites[spriteId].x2 = x;
                gSprites[spriteId].y2 = y;
            }
            break;
    }

    //tag = GetSpritePaletteTagByPaletteNum(gSprites[spriteId].oam.paletteNum);
    SetQuestSpriteTags(row, tag);
    SetQuestSpriteId(row, spriteId);

    CropQuestIcons(spriteId);
    struct Sprite *sprite = &gSprites[spriteId];
    sprite->callback = SpriteCallback_QuestSprite;
    sprite->oam.priority = 0;
    sprite->data[0] = row;
    sprite->data[1] = questId;
}

static void CropQuestIcons(u32 spriteId)
{
    CpuFill32(0,(void *)(OBJ_VRAM0 + (gSprites[spriteId].oam.tileNum * TILE_SIZE_4BPP)),(QUEST_SPRITE_TOP_TILES * TILE_SIZE_4BPP));
    CpuFill32(0,(void *)(OBJ_VRAM0 + (gSprites[spriteId].oam.tileNum * TILE_SIZE_4BPP) + (QUEST_SPRITE_MIDDLE_TILE_START * TILE_SIZE_4BPP)),(QUEST_SPRITE_TOP_TILES * TILE_SIZE_4BPP));
}

static u32 GetQuestSpriteType(s32 questId)
{
    switch (questId)
    {
        case LIST_CANCEL:
            return QUEST_SPRITE_TYPE_CANCEL;
            break;
        case QUEST_NONE:
            return QUEST_SPRITE_TYPE_EMPTY;
            break;
        default:
            return sSideQuests[questId].spritetype;
            break;
    }
}

static u32 GetQuestSpriteEntityId(s32 questId)
{
    u32 parentQuest = sStateDataPtr->parentQuest;

    switch (questId)
    {
        case LIST_CANCEL:
            return ITEM_LIST_END;
            break;
        case QUEST_NONE:
            return OBJ_EVENT_GFX_UNKNOWN;
            break;
        default:
            if (GetCurrentQuestSubquestState())
                return sSideQuests[parentQuest].subquests[questId].sprite;
            else
                return sSideQuests[questId].sprite;
            break;
    }
}

static const u8* const progressIndicatorLUT[] =
{
    [QUEST_INDICATOR_SUBQUEST] = subquestIndicatorBitmap,
    [QUEST_INDICATOR_FAVORITE] = favoriteIndicatorBitmap,
    [FLAG_GET_ACTIVE] = progressActiveBitmap,
    [FLAG_GET_REWARD] = progressRewardBitmap,
    [FLAG_GET_COMPLETED] = progressCompleteBitmap,
};

static void HighlightFavoriteRow(void)
{
    for (u32 index = 0; index < QUEST_MENU_UX_ROW_COUNT; index++)
    {
        u32 color = RGB(32,32,32);
        s32 quest = GetQuestSpriteAssignedQuest(index);

        if (QuestMenu_GetSetQuestState(quest, FLAG_GET_FAVORITE))
            color = RGB_WHITE;

        if (GetCurrentQuestSubquestState())
            color = RGB(32,32,32);

        if (quest == QUEST_NONE)
            color = RGB(32,32,32);

        if (quest == LIST_CANCEL)
            color = RGB(32,32,32);

        FillPalette(color,QUEST_PALETTE_LIST_SLOT+(index+1),2);
    }
}

static enum QuestCases GetBitmapForQuest(enum QuestIdList questId)
{
    if (!GetCurrentQuestSubquestState())
        return ReturnQuestState(questId);

    if(!IsSubquestCompletedState(questId))
        return FLAG_GET_UNLOCKED;
    else
        return FLAG_GET_COMPLETED;
}

static void PrintQuestIndicator(enum QuestIndicatorTypes indicator,u8 windowId, u32 questId, u8 y)
{
    bool32 shouldPrint = FALSE;
    u32 bitmapIndex, x;

    if (questId == LIST_CANCEL)
        return;

    switch(indicator)
    {
        case QUEST_INDICATOR_SUBQUEST:
            shouldPrint = DoesQuestHaveChildrenAndNotInactive(questId);
            bitmapIndex = indicator;
            x = 179;
            y -= 2;

            if (GetCurrentQuestSubquestState())
                shouldPrint = FALSE;
            break;
        case QUEST_INDICATOR_FAVORITE:
            shouldPrint = QuestMenu_GetSetQuestState(questId, FLAG_GET_FAVORITE);
            bitmapIndex = indicator;
            x = 180;

            if (GetCurrentQuestSubquestState())
                shouldPrint = FALSE;
            break;
        default:
        case QUEST_INDICATOR_PROGRESS:
            shouldPrint = TRUE;
            x = 200;
            bitmapIndex = GetBitmapForQuest(questId);
            break;
    }

    if (!shouldPrint)
        return;

    if ((indicator == QUEST_INDICATOR_PROGRESS) && bitmapIndex < FLAG_GET_ACTIVE)
        return;

    BlitBitmapToWindow(windowId,progressIndicatorLUT[bitmapIndex],x,y,16,16);
}

static void GenerateAndPrintHeader(s32 questId)
{
    FillWindowPixelBuffer(QUEST_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    GenerateFilterAmountName();
    PrintFilterAmountName();
    GenerateQuestLocation(questId);
    PrintQuestLocation(questId);

    CopyWindowToVram(QUEST_WINDOW_HEADER, COPYWIN_GFX);
}

static u32 (* const completedQuestCount[])(void) =
{
    [QUEST_FILTER_DEFAULT] = CountUnlockedQuests,
    [QUEST_FILTER_INACTIVE] = CountInactiveQuests,
    [QUEST_FILTER_ACTIVE] = CountActiveQuests,
    [QUEST_FILTER_REWARD] = CountRewardQuests,
    [QUEST_FILTER_DONE] = CountCompletedQuests,
};

static u32 GetDenominatorQuests(void)
{
    if (GetCurrentQuestSubquestState())
        return sSideQuests[sStateDataPtr->parentQuest].numSubquests;
    else
        return CountUnlockedQuests();
}

static u32 GetNumeratorQuests(void)
{
    if (GetCurrentQuestSubquestState())
        return completedQuestCount[QUEST_FILTER_DONE]();
    else
        return completedQuestCount[GetCurrentQuestFilter()]();
}

static void GenerateFilterAmountName(void)
{
    u8* end;
    u32 digits = CountDigits(QUEST_COUNT);
    u32 parentQuest = sStateDataPtr->parentQuest;

    if (GetCurrentQuestSubquestState())
    {
        StringExpandPlaceholders(gStringVar1, sSideQuests[parentQuest].name);

        StringAppend(gStringVar1,COMPOUND_STRING(" ("));

        ConvertIntToDecimalStringN(gStringVar2, GetNumeratorQuests(), STR_CONV_MODE_LEFT_ALIGN,digits);

        StringAppend(gStringVar1,gStringVar2);

        StringAppend(gStringVar1,COMPOUND_STRING("/"));

        ConvertIntToDecimalStringN(gStringVar2, GetDenominatorQuests(), STR_CONV_MODE_LEFT_ALIGN,digits);

        StringAppend(gStringVar1,gStringVar2);

        StringAppend(gStringVar1,COMPOUND_STRING(")"));
    }
    else
    {
        if (GetCurrentQuestFilter() != QUEST_FILTER_DEFAULT)
        {
            ConvertIntToDecimalStringN(gStringVar1, GetNumeratorQuests(), STR_CONV_MODE_LEFT_ALIGN,digits);

            StringAppend(gStringVar1,COMPOUND_STRING("/"));
        }
        else
        {
            StringCopy(gStringVar1,gText_Blank);
        }

        ConvertIntToDecimalStringN(gStringVar2, GetDenominatorQuests(), STR_CONV_MODE_LEFT_ALIGN,digits);

        StringAppend(gStringVar1,gStringVar2);

        StringAppend(gStringVar1,questHeaderStrings[GetCurrentQuestFilter()][GetCurrentQuestSort()]);
    }

    end = StringCopy(gStringVar2,gStringVar1);
    PrependFontIdToFit(gStringVar2,end,0,QUEST_NAME_WIDTH);
}

static void PrintFilterAmountName(void)
{
    u32 fontId = FONT_SMALL;
    u32 x = 5;
    u32 y = 0;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    AddTextPrinterParameterized4(QUEST_WINDOW_HEADER, fontId, x, y, letterSpacing, lineSpacing, sQuestMenuWindowFontColors[0], TEXT_SKIP_DRAW, gStringVar2);
}

static void PrintIndicatorTilesBitmaps(void)
{
    PrintCursor();
    HighlightFavoriteRow();
    AddCarveTiles();
}

static void Task_UpdateQuestsOnScreen(u8 taskId)
{
    struct QuestSpriteInfo old[QUEST_MENU_UX_ROW_COUNT];
    struct QuestSpriteInfo new[QUEST_MENU_UX_ROW_COUNT];

    memcpy(old,sStateDataPtr->questSpriteInfo,sizeof(old));
    UpdateAllQuestsOnScreen();
    memcpy(new,sStateDataPtr->questSpriteInfo,sizeof(new));

    sStateDataPtr->shouldUpdate = (memcmp(old, new, sizeof(old)) != 0);

    if (!HaveQuestsUpdatedOnScreen())
        return;

    RemoveAllQuestSprites();
    PrintAllQuestSprites();
}

static void Task_NavigateQuestMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    s32 input = ListMenu_ProcessInput(data[0]);

    u8 selectedQuestId = sStateDataPtr->questList[GetCursorPosition()].id;

    AddCarveTiles();
    HighlightFavoriteRow();

    if (gPaletteFade.active)
        return;

    ListMenuGetScrollAndRow(data[0], &sListMenuState.questListPosition.scroll, &sListMenuState.questListPosition.row);

    switch (input)
    {
        case LIST_NOTHING_CHOSEN:
            if (JOY_NEW(DPAD_LEFT)) {
                DecrementFilterAndCleanUp(taskId);
            }
            if (JOY_NEW(DPAD_RIGHT)) {
                IncrementFilterAndCleanUp(taskId);
            }
            if (JOY_NEW(START_BUTTON)) {
                IncrementSortAndCleanUp(taskId);
            }
            if (JOY_NEW(SELECT_BUTTON)) {
                ToggleFavoriteAndCleanUp(taskId, selectedQuestId);
            }
            if (JOY_NEW(DPAD_UPDOWN) || JOY_HELD(DPAD_UPDOWN) || JOY_REPEAT(DPAD_UPDOWN))
            {
                PrintCursor();
            }
            break;
        case LIST_CANCEL:
            if (GetCurrentQuestSubquestState())
            {
                ReturnFromSubquestAndCleanUp(taskId);
            } else {
                TurnOffQuestMenu(taskId);
            }
            break;
        default:
            if (!GetCurrentQuestSubquestState())
            {
                EnterSubsavedQuestModeAndCleanUp(taskId, data, input);
            }
            break;
    }
}

void ManageFavorites(u8 selectedQuestId)
{
    if (QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_FAVORITE)) {
        QuestMenu_GetSetQuestState(selectedQuestId, FLAG_REMOVE_FAVORITE);
    } else {
        QuestMenu_GetSetQuestState(selectedQuestId, FLAG_SET_FAVORITE);
    }
}

void CheckFavoriteAndRemove(u8 quest)
{
    if (QuestMenu_GetSetQuestState(quest, FLAG_GET_FAVORITE)) {
        QuestMenu_GetSetQuestState(quest, FLAG_REMOVE_FAVORITE);
    }
}

static void Task_QuestMenuCleanUp(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    ShowBg(BG1_QUEST_BG_INDICATORS);

    DestroyListMenuTask(data[0], &sListMenuState.questListPosition.scroll, &sListMenuState.questListPosition.row);

    ClearWindowCopyToVram(QUEST_WINDOW_CURSOR);
    ClearStdWindowAndFrameToTransparent(QUEST_WINDOW_QUEST_LIST, FALSE);

    BuildMenuTemplate();

    if (sStateDataPtr->restoreCursor == TRUE)
        LoadListPositionFromSaveBlock();
    else
        ResetCursorToTop(data);

    data[0] = ListMenuInit(&gMultiuseListMenuTemplate,GetListPositionScroll(),GetListPositionRow());

    PrintIndicatorTilesBitmaps();
    ShowBg(BG0_QUEST_BG_TEXT);
}

static void ResetCursorToTop(s16 *data)
{
    SetListPositionRow(0);
    SetListPositionScroll(0);
    SetCursorPositionOnScreen(0);
}

void EnterSubsavedQuestModeAndCleanUp(u8 taskId, s16 *data,
        s32 input)
{
    if (DoesQuestHaveChildrenAndNotInactive(input))
    {
        PrepareFadeOut(taskId);
        PlaySE(SE_SELECT);
        sStateDataPtr->parentQuest = input;
        ManageMode(QUEST_ACTION_SUB);
        SaveScrollAndRow(data);
        gTasks[taskId].func = Task_FadeOut;
    }
}
void IncrementFilterAndCleanUp(u8 taskId)
{
    if (!GetCurrentQuestSubquestState()) {
        PlaySE(SE_SELECT);
        ManageMode(QUEST_ACTION_INCREMENT);
        Task_QuestMenuCleanUp(taskId);
    }
}

void DecrementFilterAndCleanUp(u8 taskId)
{
    if (!GetCurrentQuestSubquestState()) {
        PlaySE(SE_SELECT);
        ManageMode(QUEST_ACTION_DECREMENT);
        Task_QuestMenuCleanUp(taskId);
    }
}

void IncrementSortAndCleanUp(u8 taskId)
{
    if (!GetCurrentQuestSubquestState()) {
        PlaySE(SE_SELECT);
        ManageMode(QUEST_ACTION_ALPHA);
        Task_QuestMenuCleanUp(taskId);
    }
}

void ToggleFavoriteAndCleanUp(u8 taskId, u8 selectedQuestId)
{
    if (!GetCurrentQuestSubquestState()
            && !CheckSelectedIsCancel(selectedQuestId)) {
        PlaySE(SE_SELECT);
        ManageFavorites(selectedQuestId);
        sStateDataPtr->restoreCursor = FALSE;
        Task_QuestMenuCleanUp(taskId);
    }
}
bool8 CheckSelectedIsCancel(u8 selectedQuestId)
{
    if (selectedQuestId == (0xFF - 1)) {
        return TRUE;
    } else {
        return FALSE;
    }
}
void ReturnFromSubquestAndCleanUp(u8 taskId)
{
    PrepareFadeOut(taskId);
    PlaySE(SE_SELECT);
    ManageMode(QUEST_ACTION_SUB);
    gTasks[taskId].func = Task_FadeOut;
}

static void CreateQuestArrowSpritePair(void)
{
    CreateUpQuestArrowSprite();
    CreateDownQuestArrowSprite();
}

static void CreateUpQuestArrowSprite(void)
{
    CreateQuestArrowSprite(GLASS_GFXTAG_LOCATION_UP_ARROW,questArrowsTop,120,6, SpriteCB_MenuArrow);
}

static void CreateDownQuestArrowSprite(void)
{
    CreateQuestArrowSprite(GLASS_GFXTAG_LOCATION_DOWN_ARROW,questArrowsBottom,120,104,SpriteCB_MenuArrow);
}

static void CreateQuestArrowSprite(u32 SpriteTag,const u32 *gfx,u32 x, u32 y, void (*callback)(struct Sprite *))
{
    u32 spriteId;

    struct CompressedSpriteSheet sSpriteSheet_QuestArrow = {gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = callback;
    TempSpriteTemplate.paletteTag = PAL_GLASS_UI_SPRITES;

    LoadCompressedSpriteSheet(&sSpriteSheet_QuestArrow);
    LoadSpritePalette(&sQuestInterfaceSpritePalette);
    spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].data[1] = SpriteTag;
}

static void SpriteCB_MenuArrow(struct Sprite *sprite)
{
    AnimateQuestArrowSprite(sprite);
    HandleMenuArrowSpriteVisibility(sprite);
}

static void AnimateQuestArrowSprite(struct Sprite *sprite)
{
    u32 offset = (sprite->data[1] == GLASS_GFXTAG_LOCATION_UP_ARROW) ? 128 : 0;
    u8 val = sprite->data[0] + offset;

    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += TILE_SIZE_1BPP;
}

static void HandleMenuArrowSpriteVisibility(struct Sprite *sprite)
{
    u32 cursor = GetCursorPosition();
    bool32 cursorIsTop = IsCursorOrPositionAtTop(cursor);
    bool32 cursorIsBottom = IsCursorOrPositionAtBottom(cursor);
    bool32 arrowPosIsTop = (sprite->data[1] == GLASS_GFXTAG_LOCATION_UP_ARROW);

    sprite->invisible = (
            (cursorIsTop && arrowPosIsTop)
            || (cursorIsBottom && !arrowPosIsTop)
            );
}

static bool32 IsCursorOrPositionAtTop(u32 cursor)
{
    return (cursor == QUEST_MENU_UX_ROW_0);
}

static bool32 IsCursorOrPositionAtBottom(u32 position)
{
    u32 cursor = GetCursorPositionOnScreen();
    u32 last = (gMultiuseListMenuTemplate.totalItems - 1);

    if (cursor == QUEST_MENU_UX_ROW_4)
        return TRUE;

    return (position == last);
}

static void SetGpuRegBaseForFade()
{
    SetGpuReg(REG_OFFSET_BLDCNT,
            BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG2 | BLDCNT_TGT2_BG3 |
            BLDCNT_EFFECT_BLEND);
    SetGpuReg(REG_OFFSET_BLDY, 0);
}

#define MAX_FADE_INTENSITY 16
#define MIN_FADE_INTENSITY 0

void InitFadeVariables(u8 taskId, u8 blendWeight, u8 frameDelay,
        u8 frameTimerBase, u8 delta)
{
    gTasks[taskId].data[1] = blendWeight;
    gTasks[taskId].data[2] = frameDelay;
    gTasks[taskId].data[3] = gTasks[taskId].data[frameTimerBase];
    gTasks[taskId].data[4] = delta;
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT1_BG2);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
    ShowBg(BG2_QUEST_BG_LIST);
}

static void PrepareFadeOut(u8 taskId)
{
    SetGpuRegBaseForFade();
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY, 0));
    InitFadeVariables(taskId, MAX_FADE_INTENSITY, 0, 2, 2);
}

static bool8 HandleFadeOut(u8 taskId)
{
    if (gTasks[taskId].data[3]-- != 0) {
        return FALSE;
    }

    gTasks[taskId].data[3] = gTasks[taskId].data[2];
    gTasks[taskId].data[1] -= gTasks[taskId].data[4];
    gTasks[taskId].data[2] += gTasks[taskId].data[3];

    if (gTasks[taskId].data[1] <= 0) {
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, gTasks[taskId].data[1]));
        SetBackgroundTransparency();
        return TRUE;
    }

    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
                MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
    return FALSE;
}

static void PrepareFadeIn(u8 taskId)
{
    SetGpuRegBaseForFade();
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, MAX_FADE_INTENSITY));
    InitFadeVariables(taskId, MIN_FADE_INTENSITY, 0, 1, 2);
}

static bool8 HandleFadeIn(u8 taskId)
{
    gTasks[taskId].data[3] = gTasks[taskId].data[2];
    gTasks[taskId].data[1] += gTasks[taskId].data[4];

    HideBg(BG2_QUEST_BG_LIST);
    if (gTasks[taskId].data[1] >= MAX_FADE_INTENSITY) {
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY, MIN_FADE_INTENSITY));
        SetBackgroundTransparency();
        return TRUE;
    }

    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
                MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
    return FALSE;
}

static void Task_FadeOut(u8 taskId)
{
    if (HandleFadeOut(taskId)) {
        PrepareFadeIn(taskId);
        Task_QuestMenuCleanUp(taskId);
        gTasks[taskId].func = Task_FadeIn;
    }
}

static void Task_FadeIn(u8 taskId)
{
    if (HandleFadeIn(taskId)) {
        gTasks[taskId].func = Task_NavigateQuestMenu;
    }
}



static void Task_QuestMenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active) {
        SetMainCallback2(sListMenuState.savedCallback);
        FreeResources();
        DestroyTask(taskId);
    }
}

static void FadeAndBail(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_QuestMenuWaitFadeAndBail, 0);
    SetVBlankCallback(VBlankCB);
    SetMainCallback2(MainCB);
}


static void FreeResources(void)
{
    FreeQuestStructs();
    FreeBackgrounds();
    FreeAllWindowBuffers();
}

static void FreeQuestStructs(void)
{
    if(sStateDataPtr != NULL)
        Free(sStateDataPtr);
}

static void FreeBackgrounds(void)
{
    for (enum QuestBgs backgroundId = BG0_QUEST_BG_TEXT; backgroundId < BG_QUEST_COUNT; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

void TurnOffQuestMenu(u8 taskId)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_QuestMenuTurnOff;
}

static void Task_QuestMenuTurnOff(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (!gPaletteFade.active) {
        WriteListPositionToSaveBlock();
        DestroyListMenuTask(data[0], &sListMenuState.questListPosition.scroll, &sListMenuState.questListPosition.row);
        if (sStateDataPtr->savedCallback != NULL) {
            SetMainCallback2(sStateDataPtr->savedCallback);
        } else {
            SetMainCallback2(sListMenuState.savedCallback);
        }

        FreeResources();
        DestroyTask(taskId);
    }
}

void CB2_QuestMenuFromStartMenu(void)
{
    QuestMenu_Init(CB2_StartMenu_ReturnToUI);
}

void QuestMenu_CopyQuestName(u8 *dst, u8 questId)
{
    StringCopy(dst, sSideQuests[questId].name);
}

void QuestMenu_CopySubquestName(u8 *dst, u8 parentId, u8 childId)
{
    StringCopy(dst, sSideQuests[parentId].subquests[childId].name);
}

void QuestMenu_ResetMenuSaveData(void)
{
    memset(&gSaveBlock3Ptr->savedQuestListProperties, 0,sizeof(gSaveBlock3Ptr->savedQuestListProperties));
    memset(&gSaveBlock3Ptr->questData, 0,sizeof(gSaveBlock3Ptr->questData));
    memset(&gSaveBlock3Ptr->subQuests, 0,sizeof(gSaveBlock3Ptr->subQuests));
}

void QuestMenu_ScriptSetActive(u32 questId)
{
    QuestMenu_GetSetQuestState(questId, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(questId, FLAG_SET_ACTIVE);
}

void QuestMenu_ScriptSetComplete(u32 questId)
{
    QuestMenu_GetSetQuestState(questId, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(questId, FLAG_SET_COMPLETED);
    QuestMenu_GetSetQuestState(questId, FLAG_REMOVE_ACTIVE);
    QuestMenu_GetSetQuestState(questId, FLAG_REMOVE_REWARD);
}

void QuestMenu_ScriptSetReward(u32 questId)
{
    QuestMenu_GetSetQuestState(questId, FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(questId, FLAG_SET_REWARD);
    QuestMenu_GetSetQuestState(questId, FLAG_REMOVE_ACTIVE);
}

#define questDebug sSideQuests[questID].debugInfo
#define subQuestDebug sSideQuests[questID].subquests[subQuestID].debugInfo
// debug

void DummyStateFunc(void){}

#define questState sSideQuests[questId].states[state]

void QuestMenu_SetupQuestState(u8 questId, u8 state)
{
    if (questState.setupFunc == NULL)
        return;

    for (u32 stateIndex = 0; stateIndex <= state; stateIndex++)
        questState.setupFunc(stateIndex);
}

void QuestMenu_JumpToQuestState(u8 questId, u8 state)
{
    QuestMenu_SetupQuestState(questId, state);
    SetWarpDestination(questState.mapGroup, questState.mapNum, questState.warpId, questState.x, questState.y);
    DoWarp();
    ResetInitialPlayerAvatarState();
}

void QuestMenu_CopyQuestStateName(u8 *dst, u8 questId, u8 state)
{
    if (questState.name != NULL)
        StringCopy(dst, questState.name);
    else
        ConvertIntToDecimalStringN(dst, state, STR_CONV_MODE_LEADING_ZEROS, 2);
}

u32 GetMaxQuestState(u16 questId)
{
    for (u32 state = 0; state < MAX_QUEST_STATES; state++)
        if (questState.setupFunc == NULL)
            return state;

    return MAX_QUEST_STATES;
}

// PSF TODO sprites jump when switching between filters
// I assume this is because we are freeing the sprites too early
// when scrolling the menu and first menu WAS a parent and then no longer is, it takes a frame or so to make the arrow disappear

#undef questState
