#ifndef GUARD_QUESTS_H
#define GUARD_QUESTS_H

#include "constants/quests.h"

#define QUEST_NAME_WIDTH 155
#define QUEST_LOCATION_WIDTH (DISPLAY_WIDTH - (20 + QUEST_NAME_WIDTH))

enum QuestHelpBarStates
{
    QUEST_HELP_BAR_NOT_PINNED_NOT_SUBQUEST,
    QUEST_HELP_BAR_NOT_PINNED_IS_SUBQUEST,
    QUEST_HELP_BAR_IS_PINNED_NOT_SUBQUEST,
    QUEST_HELP_BAR_IS_PINNED_IS_SUBQUEST,
    QUEST_HELP_BAR_SUBQUEST_MODE,
    QUEST_HELP_BAR_COUNT,
};

enum QuestWindows
{
    QUEST_WINDOW_HEADER,
    QUEST_WINDOW_QUEST_LIST,
    QUEST_WINDOW_DESC,
    QUEST_WINDOW_FOOTER,
    QUEST_WINDOW_CURSOR,
    QUEST_WINDOW_CARVE,
    QUEST_WINDOW_COUNT,
};

enum QuestBgs
{
    BG0_QUEST_BG_TEXT,
    BG1_QUEST_BG_INDICATORS,
    BG2_QUEST_BG_LIST,
    BG3_QUEST_BG_BACKGROUND,
    BG_QUEST_COUNT,
};

enum QuestFilter
{
    QUEST_FILTER_DEFAULT,
    QUEST_FILTER_INACTIVE,
    QUEST_FILTER_ACTIVE,
    QUEST_FILTER_REWARD,
    QUEST_FILTER_DONE,
    QUEST_FILTER_COUNT,
};

enum QuestSort
{
    QUEST_SORT_DEFAULT,
    QUEST_SORT_NAME,
    QUEST_SORT_LOCATION,
    QUEST_SORT_COUNT,
};

enum QuestSubquestState
{
    QUEST_SUBQUEST_MODE_OFF,
    QUEST_SUBQUEST_MODE_ON,
    QUEST_SUBQUEST_MODE_COUNT,
};

enum QuestMenuRows
{
    QUEST_MENU_UX_ROW_0,
    QUEST_MENU_UX_ROW_1,
    QUEST_MENU_UX_ROW_2,
    QUEST_MENU_UX_ROW_3,
    QUEST_MENU_UX_ROW_4,
    QUEST_MENU_UX_ROW_COUNT,
};

#define QUEST_MENU_ROW_LAST (QUEST_MENU_UX_ROW_COUNT - 1)

enum QuestActions
{
    QUEST_ACTION_INCREMENT,
    QUEST_ACTION_DECREMENT,
    QUEST_ACTION_ALPHA,
    QUEST_ACTION_SUB,
};

enum QuestSpriteTypes
{
    QUEST_SPRITE_TYPE_EMPTY,
    QUEST_SPRITE_TYPE_OBJECT,
    QUEST_SPRITE_TYPE_ITEM,
    QUEST_SPRITE_TYPE_PKMN,
    QUEST_SPRITE_TYPE_CANCEL,
    QUEST_SPRITE_TYPE_COUNT,
};

struct QuestListProperties
{
    enum QuestFilter filter : 3;
    enum QuestSort sort : 2;
    enum QuestSubquestState subquestState : 2;
};

struct QuestListPosition
{
	u16 scroll;
	u16 row;
    u16 screenCursorPosition;
};

#define MAX_QUEST_STATES 20
typedef void (*QuestStateFunc)(u8 state);

struct QuestState
{
	const u8 *name;
    const QuestStateFunc setupFunc;
    const s8 mapGroup;
    const s8 mapNum;
    const s8 warpId;
    const s8 x;
    const s8 y;
};

void DummyStateFunc(void);

#define DUMMY_QUEST_STATE                                                                                                     \
{                                                                                                                             \
    .name = COMPOUND_STRING("DUMMY"), .setupFunc = DummyStateFunc, .mapGroup = 0, .mapNum = 0, .warpId = 0, .x = 0, .y = 0    \
}

struct SubQuest
{
    const u8 id;
	const u8 *name;
	const u8 *desc;
	const u8 *map;
	const u16 sprite;
    const u8 spritetype;
    const u8 *type;
};

struct SideQuest
{
	const u8 *name;
	const u8 *desc;
    const u8 *rewardDesc;
	const u8 *donedesc;
	const u8 *map;
	const u16 sprite;
    const u8 spritetype;
	const struct SubQuest *subquests;
	const u8 numSubquests;
    const struct QuestState states[MAX_QUEST_STATES];
    const bool8 skipQuestWhenCounting;
};

extern const struct SideQuest sSideQuests[QUEST_COUNT];

enum QuestCases
{
	FLAG_GET_UNLOCKED,      // check if quest is unlocked
	FLAG_GET_INACTIVE, //check if quest is unlocked but has no other state
	FLAG_GET_ACTIVE,        // check if quest is active
	FLAG_GET_REWARD,     // check if quest is ready for reward
	FLAG_GET_COMPLETED,     // check if quest is completed
	FLAG_GET_FAVORITE,     // check if quest is favorited
	FLAG_SET_UNLOCKED,      // mark quest as unlocked
	FLAG_SET_INACTIVE, //mark quest as inactive
	FLAG_SET_ACTIVE,        // mark quest as active
	FLAG_SET_REWARD,     // mark quest ready for reward
	FLAG_SET_COMPLETED,     // mark completed quest
	FLAG_SET_FAVORITE,     // mark quest as a favorite
	FLAG_REMOVE_INACTIVE, //remove inactive flag from quest
	FLAG_REMOVE_ACTIVE, //remove active flag from quest
	FLAG_REMOVE_REWARD, //remove reward flag from quest
	FLAG_REMOVE_FAVORITE, //remove favorite flag from quest
    FLAG_REMOVE_COMPLETED, //remove completed flag from quest
};

enum QuestIndicatorTypes
{
    QUEST_INDICATOR_SUBQUEST,
    QUEST_INDICATOR_FAVORITE,
    QUEST_INDICATOR_PROGRESS,
    QUEST_INDICATOR_COUNT,
};

enum QuestMenuColor
{
    QUEST_FONT_COLOR_HEADER,
    QUEST_FONT_COLOR_QUEST_LIST,
    QUEST_FONT_COLOR_DESC,
    QUEST_FONT_COLOR_COUNT,
};


enum QuestMenuSpriteId
{
    QUEST_SPRITE_OLD,
    QUEST_SPRITE_NEW,
    QUEST_SPRITE_COUNT,
};

#define QUEST_PALETTE_WHITE 7
#define QUEST_PALETTE_BLACK 6

#define QUEST_ARROW_PAL_TAG 110
#define QUEST_ARROW_SPRITE_TAG QUEST_ARROW_PAL_TAG

#define QUEST_SPRITE_TAG 1000

#define QUEST_SPRITE_OLD_PAL_TAG (QUEST_SPRITE_TAG * QUEST_SPRITE_OLD)
#define QUEST_SPRITE_OLD_SPRITE_TAG QUEST_SPRITE_OLD_PAL_TAG

#define QUEST_SPRITE_NEW_PAL_TAG (QUEST_SPRITE_TAG * QUEST_SPRITE_NEW)
#define QUEST_SPRITE_NEW_SPRITE_TAG QUEST_SPRITE_NEW_PAL_TAG


#define QUEST_PALETTE_MENU_ID 0
#define QUEST_PALETTE_LIST_ID 1
#define QUEST_PALETTE_LIST_SLOT BG_PLTT_ID(QUEST_PALETTE_LIST_ID)
#define QUEST_PALETTE_MENU_SLOT BG_PLTT_ID(QUEST_PALETTE_MENU_ID)

#define PLAYER_QUEST_NAME_LENGTH (PLAYER_NAME_LENGTH + 13)

#define QUEST_SPRITE_TOP_TILES 4
#define QUEST_SPRITE_MIDDLE_TILE_START 12

#define QUEST_NONE QUEST_COUNT

#define PAL_QUEST_UI_SPRITES 123

// functions
void QuestMenu_Init(MainCallback callback);
u8 QuestMenu_GetSetSubquestState(u8 quest, u8 caseId, u8 childQuest);
u8 QuestMenu_GetSetQuestState(u8 quest, u8 caseId);
void Task_QuestMenu_OpenFromStartMenu(u8);
void CB2_QuestMenuFromStartMenu(void);
void QuestMenu_CopyQuestName(u8 *dst, u8 questId);
void QuestMenu_CopySubquestName(u8 *dst, u8 parentId, u8 childId);
void QuestMenu_ResetMenuSaveData(void);
void GenerateQuestFlavorText(s32 questId);
void QuestMenu_UpdateQuestDesc(s32 questId);
void QuestMenu_ScriptSetActive(u32 questId);
void QuestMenu_ScriptSetReward(u32 questId);
void QuestMenu_ScriptSetComplete(u32 questId);

bool8 IsQuestCompletedState(s32 questId);

void QuestMenu_SetupQuest(u8 questID);
void QuestMenu_JumpToQuest(u8 questID);
void QuestMenu_SetupSubQuest(u8 questID, u8 subQuestID);
void QuestMenu_JumpToSubQuest(u8 questID, u8 subQuestID);
u32 QuestMenu_GetSubQuestCount(u8 questID);
bool32 QuestMenu_HasSubQuests(u8 questID);
// debug
void QuestMenu_SetupQuestState(u8 questId, u8 state);
void QuestMenu_JumpToQuestState(u8 questId, u8 state);
void QuestMenu_CopyQuestStateName(u8 *dst, u8 questId, u8 state);
u32 GetMaxQuestState(u16 questId);
u32 CountCompletedQuests(void);
enum QuestCases ReturnQuestState(enum QuestIdList questId);
const u8 *GetQuestName(s32 questId);
const u8 *GetQuestDesc(s32 questId);
bool8 IsQuestInactiveState(s32 questId);
u32 CountInactiveQuests(void);
bool8 IsQuestRewardState(s32 questId);
bool8 IsQuestInactiveState(s32 questId);
bool8 IsQuestActiveState(s32 questId);
bool8 IsQuestCompletedState(s32 questId);

#endif // GUARD_QUESTS_H
