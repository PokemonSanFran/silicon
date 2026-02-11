#ifndef GUARD_BUZZR_H
#define GUARD_BUZZR_H

#include "gba/types.h"
#include "main.h"

extern u8 gTweetOverworldWindowId;

void Task_OpenBuzzrFromStartMenu(u8 taskId);
void CB2_BuzzrFromStartMenu(void);
void LoadPictureFromOverworld(void);
const u32* GetPictureTiles(u16 tweetId);
bool32 Buzzr_IsTweetRead(u16 tweetId);
void Buzzr_MarkTweetAsRead(u16 tweetId);
void Buzzr_ResetSaveData(void);
void Buzzr_ShowTweetOverworld(u16 tweetId);
void Buzzr_HideTweetOverworld(void);
void Buzzr_ShowPicOverworld(u16 tweetId);
void Task_OpenBuzzrFromScript(u8 taskId);
const u8 *GetUsername(u16 userId);
bool32 IsVerified(u16 userId);
void PrintHeaderIcons(u8 windowId, const u8 *iconId, u16 x, u16 y);

struct Users // src/data/buzzr/users
{
    u8 username[USER_MAX_LENGTH];
    bool32 isVerified;
};

struct Tweet
{
    u16 userId;  // src/data/buzzr/users
    const u8 *content; // src/data/buzzr/content
    const u32 *tiles; // src/data/buzzr/picture
    const u16 *tilemap;
    const u16 *pal;
    void *criteria; // src/buzzr_criteria
    u16 quest; // include/constants/quests
    bool32 isPrivate;
    u16 dislikeCount;
    u16 likeCount;
};

struct TweetBackground
{
    const u32 *tileset;
    const u32 *tilemap;
};

extern const u8 gText_QuestActive[];
extern const u8 gText_QuestAnnounce[];

enum BackgroundModes
{
    BG_MODE_LOGOMARK_ALL,
    BG_MODE_LOGOMARK_UNREAD,
    BG_MODE_LOGOMARK_QUEST,
    BG_MODE_LOGOMARK_PLAYER,
    BG_MODE_LOGOMARK_VERIFIED,
    BG_MODE_LOGOMARK_PRIVATE,
    BG_MODE_COUNT,
};

enum TimelineFilters
{
    TIMELINE_FILTER_ALL,
    TIMELINE_FILTER_UNREAD,
    TIMELINE_FILTER_QUEST,
    TIMELINE_FILTER_PLAYER,
    TIMELINE_FILTER_VERIFIED,
    TIMELINE_FILTER_PRIVATE,
    TIMELINE_FILTER_COUNT
};

enum FilterActions
{
    FILTER_LEFT,
    FILTER_RIGHT,
};

enum BuzzrBackgroundTemplates
{
    BG0_TEXT_CONTENT,
    BG1_BACKGROUND_TWEETS,
    BG2_BACKGROUND_UI,
    BG_BUZZR_COUNT,
};

enum TweetBackgroundConstants
{
    TWEET_BG_0_LINE,
    TWEET_BG_1_LINE,
    TWEET_BG_2_LINE,
    TWEET_BG_3_LINE,
    TWEET_BG_4_LINE,
    TWEET_BG_5_LINE,
    TWEET_BG_6_LINE,
    TWEET_BG_7_LINE,
    TWEET_BG_8_LINE,
    TWEET_BG_COUNT,
};

enum BuzzrSpriteIDs
{
    BUZZR_SPRITE_FILTER_ALL,
    BUZZR_SPRITE_FILTER_UNREAD,
    BUZZR_SPRITE_FILTER_QUEST,
    BUZZR_SPRITE_FILTER_PLAYER,
    BUZZR_SPRITE_FILTER_VERIFIED,
    BUZZR_SPRITE_FILTER_PRIVATE,
    BUZZR_SPRITE_FILTER_CURSOR,
    BUZZR_SPRITE_FILTER_ICON_COUNT,
    BUZZR_SPRITE_UP_ARROW = BUZZR_SPRITE_FILTER_ICON_COUNT,
    BUZZR_SPRITE_DOWN_ARROW,
    BUZZR_SPRITE_CURSOR,
    BUZZR_SPRITE_QUEST,
    NUM_BUZZR_SPRITES,
};

enum
{
    BUZZR_GFXTAG_UP_ARROW = 0x6969,
    BUZZR_GFXTAG_DOWN_ARROW,
    BUZZR_GFXTAG_CURSOR,
    BUZZR_SPRITE_HEADER_TAG,
    BUZZR_SPRITE_HEADER_CURSOR_TAG,
    BUZZR_SPRITE_QUEST_TAG,
    PAL_UI_SPRITES,
    NUM_BUZZR_SPRITE_TAGS,
};

enum BuzzrWindowIds
{
    BUZZR_WINDOW_HELP_BAR,
    BUZZR_WINDOW_HEADER,
    BUZZR_WINDOW_TWEETS,
    BUZZR_WINDOW_DUMMY,
    BUZZR_WINDOW_COUNT
};

enum QuestSpriteStates
{
    BUZZR_QUEST_SPRITE_STATE_SLIDE_IN,
    BUZZR_QUEST_SPRITE_STATE_WAIT,
    BUZZR_QUEST_SPRITE_STATE_SLIDE_OUT,
    BUZZR_QUEST_SPRITE_STATE_COUNT,
};

#endif // GUARD_BUZZR_H
