#include "global.h"
#include "random.h"
#include "bg.h"
#include "text_window.h"
#include "line_break.h"
#include "window.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "malloc.h"
#include "scanline_effect.h"
#include "constants/rgb.h"
#include "decompress.h"
#include "constants/songs.h"
#include "sound.h"
#include "string_util.h"
#include "script.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "buzzr.h"
#include "buzzr_criteria.h"
#include "data/buzzr/users.h"
#include "data/buzzr/picture.h"
#include "data/buzzr/tweets.h"
#include "international_string_util.h"
#include "gba/isagbprint.h"
#include "event_data.h"
#include "trig.h"
#include "quests.h"
#include "constants/quests.h"
#include "script_menu.h"
#include "field_weather.h"

static void ResetQuestFanfareFlag(void);
static void ResetPictureMode(void);
static void ResetNumTimelineTweetsToZero(void);
static void InitalizeValuesOnStartUp(void);
static u32 GetArrowPosition(struct Sprite *sprite);
static void AnimateArrowSprite(struct Sprite *sprite, u32 arrowPos);
static void AnimateCursor(struct Sprite *sprite);
static void HandleArrowVisibility(struct Sprite *sprite, u32 arrowPos);
static void SpriteCallback_Arrow(struct Sprite *sprite);
static u8 GetArrowSpriteShape(u32 spriteConst);
static u8 GetArrowSpriteSize(u32 spriteConst);
static void CreateArrowSprite(u8 SpriteTag,const u32 *gfx,u32 x, u32 y, u32 spriteConst, void (*callback)(struct Sprite *));
static u32 CalculateCursorHeight(void);
static void CreateCursorSprite(void);
static void CreateUpArrowSprite(void);
static void CreateDownArrowSprite(void);
static void CreateTimeline(void);
static void ResetLoadStateToZero(void);
static bool32 AllocateStructs(void);
static void Buzzr_Init(MainCallback callback);
static void Buzzr_SetupCB(void);
static bool32 AllocZeroTilemapBuffers(void);
static void HandleAndShowBgs(void);
static bool8 Buzzr_InitBgs(void);
static void Buzzr_MainCB(void);
static void Buzzr_VBlankCB(void);
static void ResetPositionToZero(void);
static u32 GetCurrentPosition(void);
static void SetCurrentPosition(u32 position);
static bool32 IsCurrentPositionTop(void);
static u32 GetNumTimelineTweets(void);
static u32 CalculateLastPosition(void);
static bool32 IsCurrentPositionBottom(void);
static void UpdatePosition(bool32 moveDown);
static bool32 GetTweetIdFromPosition(u32 position);
static void DebugPrintTimeline(u32 time);
static void Task_BuzzrWaitFadeIn(u8 taskId);
static void Task_MainInput(u8 taskId);
static void HandleInput(u8 taskId, u32 currentTweetId);
static void HandlePictureModeInput(u8 taskId, u32 currentTweetId);
static void HandleOverworldPictureModeInput(u8 taskId, u32 currentTweetId);
static void ChangePictureModeAndReloadScreen(void);
static void Task_ChangePictureModeAndReloadScreen(u8 taskId);
static void ChangeFilterAndReloadTimeline(u8 direction);
static void ToggleSortAndReloadTimeline(void);
static void ReloadTimeline(void);
static void FadeAndBail(void);
static u32 GetQuestTweetId(u32 tweetId);
static void HandleQuestActivation(void);
static void PlayQuestFanfare(void);
static void ActivateQuest(u32 quest);
static void Task_WaitFadeAndExitGracefully(u8 taskId);
static void PlaySoundStartFadeQuitApp(u8 taskId);
static void Buzzr_FreeResources(void);
static void BufferToVram_Windows(void);
static bool8 LoadGraphics(void);
static void Buzzr_InitWindows(void);
static u16 GetUserId(u16 tweetId);
static const u8 *GetContent(u16 tweetId);
static void *GetCriteria(u16 tweetId);
static u16 GetQuest(u16 tweetId);
static bool32 IsPrivate(u16 tweetId);
static u16 GetDislikes(u16 tweetId);
static u16 GetLikes(u16 tweetId);
static bool32 IsSortOrderOldestFirst(void);
static bool32 IsTimelinePictureMode(void);
static void HandleMenuHeader(void);
static void HandleTimeline(void);
static bool32 CheckIfPrintWillOverflow(u32 verticalOffset);
static const u32 GetNumContentLines(u16 tweetId);
static u32 CalculateTweetContentHeight(u16 tweetId);
static u32 CalculateTweetHeaderHeight(void);
static u32 CalculateTweetTotalHeight(u16 tweetId);
static void ResetVerticalOffset(void);
static void SetVerticalOffset(u32 offset);
static u32 GetVerticalOffset(void);
static u32 CalculateVerticalOffset(u32 numTweet, u32 previousTweet);
static void PrintSortModeHeader(u8 windowId);
static void PrintTweet(u32 numTweet, u16 selectedTweet, u32 verticalOffset, u32 typeTweet);
static void HandleTweetBackground(u32 numTweet, u16 selectedTweet, u32 verticalOffset);
static void HandleTweetHeader(u16 tweetId, u32 verticalOffset, u32 typeTweet);
static u32 UpdateHorizontalHeaderPosition(u8 *tweetUsername, u32 fontId);
static void PrintTweet_OverworldHeader(u16 tweetId);
static void PrintTweet_TimelineHeader(u16 tweetId, u32 verticalOffset);
static void PrintUsername(u32 windowId, u32 x, u32 y, const u8 *username, u32 fontId);
static void PrintPrivateTweetRecipient(u32 windowId,u32 x,u32 y,u32 fontId);
static void PrintTweetHeader(u16 tweetId, u32 windowId, u32 verticalOffset);
static const u8 GetFontColor(void);
static void HandleTweetMetrics(u16 selectedTweet, u32 verticalOffset);
static void PrintMetricIcons(u32 windowId, u32 x, u32 y);
static void HandleTweetContent(u16 tweetId, u32 verticalOffset, u32 typeTweet);
static void PrintTweet_TimelineContent(u16 tweetId, u32 verticalOffset);
static void PrintTweet_OverworldContent(u16 tweetId);
static void PrintTweetContent(u32 windowId, u16 tweetId, const u8 *fontColor, u32 y);
static void HandleTweetIcons(u16 tweetId, u32 verticalOffset, u32 typeTweet);
static void PrintTweet_OverworldIcons(u16 tweetId);
static void PrintTweet_TimelineIcons(u16 tweetId, u32 verticalOffset);
static u32 CalculateIndicatorIconHeight(u16 tweetId, u32 verticalOffset);
static bool32 CheckTweetPrintUnreadIcon(u32 windowId, u32 tweetId, u32 x, u32 y, u32 typeTweet);
static void CheckTweetPrintPictureIcon(u32 windowId,u16 tweetId,u32 x, u32 y);
static void PrintTweetIcons(u32 tweetId, u32 windowId, u32 x, u32 y, u32 typeTweet);
static void PrintMenuHeaderAndTimeline(void);
static void PrintMenuHeader(void);
static const u8 *GetHelpBarText(void);
static void PrintHelpBar(void);
static const u32 *GetRelevantTiles(void);
static const u32 *GetRelevantTilemap(void);
static const u16 *GetRelevantPalette(void);
static void AllocTilemapBuffers(void);
static void LoadBackground(void);
static void ChangeBackground(void);
static void ToggleSort(void);
static void TogglePicture(void);
static u32 ChangeFilter(u32 action);
static void ClearTimeline(void);
static bool32 DoesTweetMatchFilter(u32 tweetId);
static void SetNumTimelineTweets(u32 num);
static u32 GetTweetIdFromSaveblockPosition(u32 index);
static bool32 IfTweetIdInSaveBlockIsZero(u32 index);
static void LoadTimelineOrderFromSaveBlock(void);
static void FilterTimeline(void);
static void ReverseTimelineOrder(u32 numTimelineTweets, u32 index);
static void SortTimeline(void);
static bool32 HasQuestAndQuestNotActive(u32 tweetId);
static void StoreQuestTweets(u32 index, u32 tweetId);
static void AddTweetToTimeline(u32 index, u32 tweetId);
static void AddNewTweetsToTimeline(void);
static bool32 CheckIfTweetCanBeAdded(u32 tweetIndex);
static void AddTweetToBitmap(u32 tweetId);
static bool32 IsTweetInTimeline(u32 tweetId);
static bool32 IsTweetCriteriaMet(u16 tweetId);
static u32 GetFilter(void);
static void ReadFilterAndModeFromSaveBlock(void);
static void WriteTimelineOrderToSaveBlock(void);
static u32 WriteFilterToSaveBlock(u32 filter);
static bool32 WriteSortToSaveBlock(bool32 oldestTop);
static void SetTweetFromOverworld(u16 tweetId);
static void ClearTweetFromOverworld(void);
static u32 GetTweetFromOverworld(void);
static bool32 Buzzr_IsCalledFromOverworld(void);

struct BuzzrState
{
    MainCallback savedCallback;
    u8 loadState;
    u32 filter;
    bool32 oldestTop;
    bool32 viewPic;
    u16 position;
    u8 verticalOffset;
};

struct BuzzrLists
{
    u32 Timeline[TWEET_COUNT];
    u32 numTimelineTweets;
    u32 QuestTweets[TWEET_COUNT];
    u32 TweetBitmap[NUM_TWEET_BITS];
};

static EWRAM_DATA struct BuzzrState *sBuzzrState = NULL;
static EWRAM_DATA struct BuzzrLists *sBuzzrLists = NULL;

static EWRAM_DATA u8 *sBg0TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;
static const u32 TILEMAP_BUFFER_SIZE = (1024 * 2);

EWRAM_DATA u8 gTweetOverworldWindowId = 0;
EWRAM_DATA u16 overworldTweet = TWEET_NONE;

static const u8 sText_HelpBarReturn[] =_("{B_BUTTON} Return");
static const u8 sText_HelpBarDefault[] =_("{DPAD_LEFTRIGHT} Filter {A_BUTTON} Expand {B_BUTTON} Close {START_BUTTON} Sort");
static const u8 sText_OldestFirst[] =_("Oldest First");
static const u8 sText_UsernamePrefix[] =_("+");

static const struct BgTemplate sBuzzrBgTemplates[] =
{
    {
        .bg = BG0_TEXT_CONTENT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = BG1_BACKGROUND_TWEETS,
        //.charBaseIndex = 0,
        //.mapBaseIndex = 29,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 1,
    },
    {
        .bg = BG2_BACKGROUND_UI,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    }
};

static const struct WindowTemplate sBuzzrWindowTemplates[] =
{
    [BUZZR_WINDOW_HELP_BAR] =
    {
        .bg = BG0_TEXT_CONTENT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [BUZZR_WINDOW_HEADER] =
    {
        .bg = BG0_TEXT_CONTENT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 18,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2),
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sBuzzr_OverworldWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 1,
    .width = 30,
    .height = 18,
    .paletteNum = 0,
    .baseBlock = 1
};

static const u32 sZapBackgrounds[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/zap_backgrounds.4bpp");
static const u32 sLogomarkAllTilemap[] = INCBIN_U32("graphics/ui_menus/buzzr/logomarkAll.bin.smolTM");

static const u32 sLogomarkAllTiles[] = INCBIN_U32("graphics/ui_menus/buzzr/logomarkAll.4bpp.smol");
static const u32 sLogomarkPlayerTiles[] = INCBIN_U32("graphics/ui_menus/buzzr/logomarkPlayer.4bpp.smol");
static const u32 sLogomarkPrivateTiles[] = INCBIN_U32("graphics/ui_menus/buzzr/logomarkPrivate.4bpp.smol");
static const u32 sLogomarkQuestTiles[] = INCBIN_U32("graphics/ui_menus/buzzr/logomarkQuest.4bpp.smol");
static const u32 sLogomarkUnreadTiles[] = INCBIN_U32("graphics/ui_menus/buzzr/logomarkUnread.4bpp.smol");
static const u32 sLogomarkVerifiedTiles[] = INCBIN_U32("graphics/ui_menus/buzzr/logomarkVerified.4bpp.smol");

static const u16 sLogomarkAllPalette[] = INCBIN_U16("graphics/ui_menus/buzzr/logomarkAll.gbapal");

static const u8 sVerified_Gfx[] = INCBIN_U8("graphics/ui_menus/buzzr/verified.4bpp");
static const u8 sPrivate_Gfx[] = INCBIN_U8("graphics/ui_menus/buzzr/private.4bpp");
static const u8 sMetrics_Gfx[] = INCBIN_U8("graphics/ui_menus/buzzr/metrics_long.4bpp");
static const u8 sUnread_Gfx[] = INCBIN_U8("graphics/ui_menus/buzzr/unread.4bpp");
static const u8 sPicture_Gfx[] = INCBIN_U8("graphics/ui_menus/buzzr/picture.4bpp");

const u32 sTweetBgTilemap3[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/0.bin.smolTM");
const u32 sTweetBgTilemap4[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/1.bin.smolTM");
const u32 sTweetBgTilemap5[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/2.bin.smolTM");
const u32 sTweetBgTilemap6[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/3.bin.smolTM");
const u32 sTweetBgTilemap7[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/4.bin.smolTM");
const u32 sTweetBgTilemap8[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/5.bin.smolTM");

const u16 sTweetBgPalette[] = INCBIN_U16("graphics/ui_menus/buzzr/backgrounds/0.gbapal");

const u32 sTweetBgTiles[] = INCBIN_U32("graphics/ui_menus/buzzr/backgrounds/0.4bpp.smol");

static const u32 BuzzrUpArrow_Gfx[]        = INCBIN_U32("graphics/ui_menus/buzzr/up_arrow.4bpp.smol");
static const u32 BuzzrDownArrow_Gfx[]      = INCBIN_U32("graphics/ui_menus/buzzr/down_arrow.4bpp.smol");
static const u32 BuzzrCursor_Gfx[]      = INCBIN_U32("graphics/ui_menus/buzzr/cursor.4bpp.smol");

enum FontColors
{
    FONT_BLACK,
    FONT_WHITE,
};

static const u8 BuzzrWindowFontColors[][3] =
{
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
};

const struct TweetBackground sTweetBgs[TWEET_BG_COUNT] =
{
    [TWEET_BG_3_LINE] =
    {
        .tilemap = sTweetBgTilemap3,
    },
    [TWEET_BG_4_LINE] =
    {
        .tilemap = sTweetBgTilemap4,
    },
    [TWEET_BG_5_LINE] =
    {
        .tilemap = sTweetBgTilemap5,
    },
    [TWEET_BG_6_LINE] =
    {
        .tilemap = sTweetBgTilemap6,
    },
    [TWEET_BG_7_LINE] =
    {
        .tilemap = sTweetBgTilemap7,
    },
    [TWEET_BG_8_LINE] =
    {
        .tilemap = sTweetBgTilemap8,
    },
};

void CB2_BuzzrFromStartMenu(void)
{
    Buzzr_Init(CB2_StartMenu_ReturnToUI);
}

static void ResetQuestFanfareFlag(void)
{
    FlagClear(FLAG_QUEST_FANFARE);
}

static void ResetPictureMode(void)
{
    sBuzzrState->viewPic = FALSE;
}

static void ResetNumTimelineTweetsToZero(void)
{
    sBuzzrLists->numTimelineTweets = 0;
}

static void InitalizeValuesOnStartUp(void)
{
    ResetNumTimelineTweetsToZero();
    ResetPositionToZero();
    ResetLoadStateToZero();
    CreateTimeline();
    ResetQuestFanfareFlag();
}

static u32 GetArrowPosition(struct Sprite *sprite)
{
    if (sprite->x < UP_DOWN_ARROW_X)
        return BUZZR_SPRITE_CURSOR;

    return (sprite->y < (DISPLAY_HEIGHT / 2)) ? BUZZR_SPRITE_UP_ARROW : BUZZR_SPRITE_DOWN_ARROW;
}

static void AnimateArrowSprite(struct Sprite *sprite, u32 arrowPos)
{
    u32 offset = (arrowPos == BUZZR_SPRITE_UP_ARROW) ? 128 : 0;
    u8 val = sprite->data[0] + offset;

    if (arrowPos == BUZZR_SPRITE_CURSOR)
        AnimateCursor(sprite);
    else
    {
        sprite->y2 = gSineTable[val] / 128;
        sprite->data[0] += 8;
    }
}

static void AnimateCursor(struct Sprite *sprite)
{
    u32 frameCount = sprite->data[0];
    sprite->data[0]++;

    sprite->y = CalculateCursorHeight();

    switch(frameCount % MILLISECOND_400)
    {
        case 0:
            sprite->x2--;
            break;
        case (MILLISECOND_400 / 2):
            sprite->x2++;
            break;
    }
}

static void HandleArrowVisibility(struct Sprite *sprite, u32 arrowPos)
{
    bool32 isTop = (arrowPos == BUZZR_SPRITE_UP_ARROW);
    bool32 isBottom = (arrowPos == BUZZR_SPRITE_DOWN_ARROW);

    if(IsTimelinePictureMode())
    {
        sprite->invisible = TRUE;
        return;
    }

    if (IsCurrentPositionTop() && IsCurrentPositionBottom())
    {
        sprite->invisible = TRUE;
        return;
    }

    if(isTop && IsCurrentPositionTop())
    {
        sprite->invisible = TRUE;
        return;
    }

    if(isBottom && IsCurrentPositionBottom())
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->invisible = FALSE;
}

static void SpriteCallback_Arrow(struct Sprite *sprite)
{
    u32 arrowPos = GetArrowPosition(sprite);
    AnimateArrowSprite(sprite,arrowPos);
    HandleArrowVisibility(sprite,arrowPos);
}

static u8 GetArrowSpriteShape(u32 spriteConst)
{
    if (spriteConst == BUZZR_SPRITE_CURSOR)
        return SPRITE_SHAPE(16x32);
    else
        return SPRITE_SHAPE(16x16);
}

static u8 GetArrowSpriteSize(u32 spriteConst)
{
    if (spriteConst == BUZZR_SPRITE_CURSOR)
        return SPRITE_SIZE(16x32);
    else
        return SPRITE_SIZE(16x16);
}


static void CreateArrowSprite(u8 SpriteTag,const u32 *gfx,u32 x, u32 y, u32 spriteConst, void (*callback)(struct Sprite *))
{
    u32 spriteId;
    const struct SpritePalette sBuzzrInterfaceSpritePalette[] =
    {
        {sLogomarkAllPalette, PAL_UI_SPRITES},
    };


    struct CompressedSpriteSheet sSpriteSheet_PrestoArrow = {gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = callback;

    LoadCompressedSpriteSheet(&sSpriteSheet_PrestoArrow);
    LoadSpritePalette(&sBuzzrInterfaceSpritePalette[0]);
    spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);

    gSprites[spriteId].oam.shape = GetArrowSpriteShape(spriteConst);
    gSprites[spriteId].oam.size = GetArrowSpriteSize(spriteConst);
    gSprites[spriteId].oam.priority = 0;
}

static u32 CalculateCursorHeight(void)
{
    return TWEET_HEADER_TOP_PADDING + TWEET_CURSOR_MARGIN_TOP;
}

static void CreateCursorSprite(void)
{
    CreateArrowSprite(BUZZR_GFXTAG_CURSOR,BuzzrCursor_Gfx,CURSOR_X,CalculateCursorHeight(),BUZZR_SPRITE_CURSOR, SpriteCallback_Arrow);
}

static void CreateUpArrowSprite(void)
{
    CreateArrowSprite(BUZZR_GFXTAG_UP_ARROW,BuzzrUpArrow_Gfx,UP_DOWN_ARROW_X,BUZZR_UP_ARROW_Y,BUZZR_SPRITE_UP_ARROW, SpriteCallback_Arrow);
}

static void CreateDownArrowSprite(void)
{
    CreateArrowSprite(BUZZR_GFXTAG_DOWN_ARROW,BuzzrDownArrow_Gfx,UP_DOWN_ARROW_X,BUZZR_DOWN_ARROW_Y,BUZZR_SPRITE_DOWN_ARROW, SpriteCallback_Arrow);
}

static void CreateTimeline(void)
{
    LoadTimelineOrderFromSaveBlock();
    AddNewTweetsToTimeline();
    WriteTimelineOrderToSaveBlock();
    ReadFilterAndModeFromSaveBlock();
    ClearTimeline();
    FilterTimeline();
    SortTimeline();

}

static void ResetLoadStateToZero(void)
{
    sBuzzrState->loadState = 0;
}

static bool32 AllocateStructs(void)
{
    sBuzzrState = AllocZeroed(sizeof(struct BuzzrState));
    sBuzzrLists = AllocZeroed(sizeof(struct BuzzrLists));

    return (
            sBuzzrState == NULL
            && sBuzzrLists == NULL
           );
}

static void Buzzr_Init(MainCallback callback)
{
    if (AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }
    sBuzzrState->savedCallback = callback;
    SetMainCallback2(Buzzr_SetupCB);
}

static void Buzzr_SetupCB(void)
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
            gMain.state++;
            break;
        case 3:
            gMain.state++;
            break;
        case 4:
            if (Buzzr_InitBgs())
            {
                InitalizeValuesOnStartUp();
                gMain.state++;
            }
            else
            {
                FadeAndBail();
                return;
            }
            break;
        case 5:
            Buzzr_InitWindows();
            gMain.state++;
            break;
        case 6:
            if (LoadGraphics() == TRUE)
            {
                gMain.state++;
            }
            break;
        case 7:
            gMain.state++;
            if (Buzzr_IsCalledFromOverworld())
            {
                LoadPictureFromOverworld();
                gMain.state++;
            }
            break;
        case 8:
            PrintHelpBar();
            PrintMenuHeaderAndTimeline();
            CreateUpArrowSprite();
            CreateCursorSprite();
            CreateDownArrowSprite();
            gMain.state++;
            break;
        case 9:
            BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
            CreateTask(Task_BuzzrWaitFadeIn, 0);
            gMain.state++;
            break;
        case 10:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            gMain.state++;
            break;
        case 11:
            SetVBlankCallback(Buzzr_VBlankCB);
            SetMainCallback2(Buzzr_MainCB);
            break;
    }
}

static bool32 AllocZeroTilemapBuffers(void)
{
    sBg2TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg2TilemapBuffer == NULL)
        return FALSE;

    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;

    sBg0TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg0TilemapBuffer == NULL)
        return FALSE;

    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBuzzrBgTemplates, NELEMS(sBuzzrBgTemplates));

    SetBgTilemapBuffer(BG0_TEXT_CONTENT,sBg0TilemapBuffer);
    ScheduleBgCopyTilemapToVram(BG0_TEXT_CONTENT);

    SetBgTilemapBuffer(BG1_BACKGROUND_TWEETS, sBg1TilemapBuffer);

    SetBgTilemapBuffer(BG2_BACKGROUND_UI, sBg2TilemapBuffer);
    ScheduleBgCopyTilemapToVram(BG2_BACKGROUND_UI);

    ShowBg(BG0_TEXT_CONTENT);
    if(IsTimelinePictureMode())
        HideBg(BG1_BACKGROUND_TWEETS);
    ShowBg(BG2_BACKGROUND_UI);
}

static bool8 Buzzr_InitBgs(void)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroTilemapBuffers())
        return FALSE;
    HandleAndShowBgs();
    return TRUE;
}

static void Buzzr_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Buzzr_VBlankCB(void)
{
    LoadOam();
    TransferPlttBuffer();
}

static void ResetPositionToZero(void)
{
    sBuzzrState->position = 0;
}

static u32 GetCurrentPosition(void)
{
    return sBuzzrState->position;
}

static void SetCurrentPosition(u32 position)
{
    sBuzzrState->position = position;
}

static bool32 IsCurrentPositionTop(void)
{
    return (sBuzzrState->position == 0);
}

static u32 GetNumTimelineTweets(void)
{
    return sBuzzrLists->numTimelineTweets;
}

static u32 CalculateLastPosition(void)
{
    u32 numTimelineTweets = GetNumTimelineTweets();
    return ((numTimelineTweets == 0) ? 0 : numTimelineTweets - 1);
}

static bool32 IsCurrentPositionBottom(void)
{
    u32 lastPosition = CalculateLastPosition();

    return (sBuzzrState->position == lastPosition);
}

static void UpdatePosition(bool32 moveDown)
{
    u32 currentPosition = GetCurrentPosition();
    u32 lastPosition = CalculateLastPosition();

    if (moveDown)
    {
        if (currentPosition == lastPosition)
            PlaySE(SE_BOO);
        else
            SetCurrentPosition(++currentPosition);

        return;
    }
    else
    {
        if (currentPosition == BUZZR_TIMELINE_TOP)
            PlaySE(SE_BOO);
        else
            SetCurrentPosition(--currentPosition);
    }
}

static bool32 GetTweetIdFromPosition(u32 position)
{
    return sBuzzrLists->Timeline[position];
}

static void UNUSED DebugPrintTimeline(u32 time)
{
    u32 i;

    if (time == 1)
        DebugPrintf("START LOAD HERE");

    for (i = 0; i < TWEET_COUNT; i++)
        DebugPrintf("this is time %d, slot %d is tweet %d",time, i,GetTweetIdFromPosition(i));

    DebugPrintf("----------------------");
}

void LoadPictureFromOverworld(void)
{
    TogglePicture();
    ChangeBackground();

    PrintMenuHeader();
    PrintHelpBar();
}

static void Task_BuzzrWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_MainInput;
    }
}

static void Task_MainInput(u8 taskId)
{
    u32 currentTweetId = GetTweetIdFromPosition(GetCurrentPosition());

    if (!Buzzr_IsTweetRead(currentTweetId))
        Buzzr_MarkTweetAsRead(currentTweetId);

    if(!IsTimelinePictureMode())
        HandleInput(taskId, currentTweetId);
    else if(Buzzr_IsCalledFromOverworld())
        HandleOverworldPictureModeInput(taskId, currentTweetId);
    else if(IsTimelinePictureMode())
        HandlePictureModeInput(taskId, currentTweetId);
}

static void HandleInput(u8 taskId, u32 currentTweetId)
{
    if (JOY_NEW(DPAD_LEFT | L_BUTTON))
        ChangeFilterAndReloadTimeline(FILTER_LEFT);

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON))
        ChangeFilterAndReloadTimeline(FILTER_RIGHT);

    if (JOY_NEW(DPAD_UP) || JOY_HELD(DPAD_UP))
    {
        UpdatePosition(FALSE);
        PrintMenuHeaderAndTimeline();
    }

    if (JOY_NEW(DPAD_DOWN) || JOY_HELD(DPAD_DOWN))
    {
        UpdatePosition(TRUE);
        PrintMenuHeaderAndTimeline();
    }

    if (JOY_NEW(B_BUTTON))
        PlaySoundStartFadeQuitApp(taskId);

    if (JOY_NEW(A_BUTTON))
        if (GetPictureTiles(currentTweetId))
            ChangePictureModeAndReloadScreen();

    if (JOY_NEW(START_BUTTON))
        ToggleSortAndReloadTimeline();
}

static void HandlePictureModeInput(u8 taskId, u32 currentTweetId)
{
    if (JOY_NEW(B_BUTTON))
        ChangePictureModeAndReloadScreen();

    if (JOY_NEW(A_BUTTON))
        ChangePictureModeAndReloadScreen();
}

static void HandleOverworldPictureModeInput(u8 taskId, u32 currentTweetId)
{
    if (JOY_NEW(B_BUTTON))
        PlaySoundStartFadeQuitApp(taskId);

    if (JOY_NEW(A_BUTTON))
        PlaySoundStartFadeQuitApp(taskId);
}

static void ChangePictureModeAndReloadScreen(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_ChangePictureModeAndReloadScreen,0);
}

static void Task_ChangePictureModeAndReloadScreen(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    TogglePicture();
    ChangeBackground();
    BeginNormalPaletteFade(PALETTES_ALL,0,16,0,RGB_BLACK);

    if(IsTimelinePictureMode())
        PrintMenuHeader();
    else
        ReloadTimeline();

    PrintHelpBar();
    gTasks[taskId].func = Task_MainInput;
    DestroyTask(taskId);
}

static void ChangeFilterAndReloadTimeline(u8 direction)
{
    ChangeFilter(direction);
    ResetPositionToZero();
    ReloadTimeline();
    ChangeBackground();
}

static void ToggleSortAndReloadTimeline(void)
{
    ToggleSort();
    ResetPositionToZero();
    ReloadTimeline();
}

static void ReloadTimeline(void)
{
    PlaySE(SE_SELECT);
    ClearTimeline();
    FilterTimeline();
    SortTimeline();
    PrintMenuHeaderAndTimeline();
}

static void FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);

    SetVBlankCallback(Buzzr_VBlankCB);
    SetMainCallback2(Buzzr_MainCB);
}

static u32 GetQuestTweetId(u32 tweetId)
{
    return sBuzzrLists->QuestTweets[tweetId];
}

static void HandleQuestActivation(void)
{
    u32 tweetId, i;
    for (i = 0; i < TWEET_COUNT; i++)
    {
        tweetId = GetQuestTweetId(i);

        if (tweetId == TWEET_NONE)
            break;

        if (!Buzzr_IsTweetRead(tweetId))
            continue;

        ActivateQuest(GetQuest(tweetId));
    }
}

static void PlayQuestFanfare(void)
{
    PlayFanfare(MUS_LEVEL_UP);
    FadeInBGM(4);
    FlagSet(FLAG_QUEST_FANFARE);
}

static void ActivateQuest(u32 quest)
{
    QuestMenu_GetSetQuestState(quest,FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(quest,FLAG_SET_ACTIVE);
    QuestMenu_CopyQuestName(gStringVar1, quest);
    //StringCopy(gStringVar2,gText_QuestActive);

    if (!FlagGet(FLAG_QUEST_FANFARE))
        PlayQuestFanfare();

    //PSF TODO When the sliding quest overworld message gets implemented, implement it to play here as well. If only one quest is activated, it should be "QUESTNAME is now active", but if there are multiple, it needs to print "3 quests are now active"
    /*
       questmenu QUEST_MENU_SET_ACTIVE, \quest
       questmenu QUEST_MENU_BUFFER_QUEST_NAME \quest
       bufferstring 1 gText_QuestActive
       playfanfare MUS_LEVEL_UP
       msgbox gText_QuestAnnounce, MSGBOX_SIGN
       waitfanfare
       */
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sBuzzrState->savedCallback);
        Buzzr_FreeResources();
        ClearTweetFromOverworld();
        ResetPictureMode();
        DestroyTask(taskId);
    }
}

static void PlaySoundStartFadeQuitApp(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    HandleQuestActivation();
    PlaySE(SE_PC_OFF);
    gTasks[taskId].func = Task_WaitFadeAndExitGracefully;
}

static void Buzzr_FreeResources(void)
{
    if (sBuzzrState != NULL)
    {
        Free(sBuzzrState);
    }
    if (sBuzzrLists != NULL)
    {
        Free(sBuzzrLists);
    }
    if (sBg2TilemapBuffer != NULL)
    {
        Free(sBg2TilemapBuffer);
    }
    if (sBg1TilemapBuffer != NULL)
    {
        Free(sBg1TilemapBuffer);
    }
    if (sBg0TilemapBuffer != NULL)
    {
        Free(sBg0TilemapBuffer);
    }

    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void BufferToVram_Windows(void)
{
    u32 windowIndex;
    for (windowIndex = 0; windowIndex < BUZZR_WINDOW_COUNT; windowIndex++)
    {
        FillWindowPixelBuffer(windowIndex, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
        PutWindowTilemap(windowIndex);
        CopyWindowToVram(windowIndex, COPYWIN_FULL);
    }
}

static bool8 LoadGraphics(void)
{
    const u32 *sTiles = GetRelevantTiles();
    const u32 *sTilemap = GetRelevantTilemap();
    const u16 *sPalette = GetRelevantPalette();

    switch (sBuzzrState->loadState)
    {
        case 0:
            ResetTempTileDataBuffers();
            DecompressAndCopyTileDataToVram(BG2_BACKGROUND_UI, sTiles, 0, 0, 0);
            sBuzzrState->loadState++;
            break;
        case 1:
            if (FreeTempTileDataBuffersIfPossible() != TRUE)
            {
                DecompressDataWithHeaderWram(sTilemap, sBg2TilemapBuffer);
                sBuzzrState->loadState++;
            }
            break;
        case 2:
            LoadPalette(sPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
            sBuzzrState->loadState++;
        default:
            ResetLoadStateToZero();
            return TRUE;
    }
    return FALSE;
}

static void Buzzr_InitWindows(void)
{
    InitWindows(sBuzzrWindowTemplates);
    DeactivateAllTextPrinters();
    BufferToVram_Windows();
}

static u16 GetUserId(u16 tweetId)
{
    return gTweets[tweetId].userId;
}

static const u8 *GetContent(u16 tweetId)
{
    StringExpandPlaceholders(gStringVar1,gTweets[tweetId].content);
    return gStringVar1;
}

const u32* GetPictureTiles(u16 tweetId)
{
    if (tweetId >= sizeof(gTweets) / sizeof(gTweets[0]))
        return NULL;

    return gTweets[tweetId].tilesptr;
}

static void UNUSED *GetCriteria(u16 tweetId)
{
    return gTweets[tweetId].criteria;
}

static u16 GetQuest(u16 tweetId)
{
    return gTweets[tweetId].quest;
}

static bool32 IsPrivate(u16 tweetId)
{
    return gTweets[tweetId].isPrivate;
}

static u16 GetDislikes(u16 tweetId)
{
    return gTweets[tweetId].dislikeCount;
}

static u16 GetLikes(u16 tweetId)
{
    return gTweets[tweetId].likeCount;
}

bool32 Buzzr_IsTweetRead(u16 tweetId)
{
    return gSaveBlock2Ptr->buzzr.IsRead[tweetId];
}

const u8 *GetUsername(u16 userId)
{
    StringCopy(gStringVar3,sText_UsernamePrefix);
    StringExpandPlaceholders(gStringVar2,gBuzzrUsers[userId].username);
    StringAppend(gStringVar3,gStringVar2);
    return gStringVar3;
}

bool32 IsVerified(u16 userId)
{
    return gBuzzrUsers[userId].isVerified;
}

void PrintHeaderIcons(u8 windowId, const u8 *iconId, u16 x, u16 y)
{
    BlitBitmapToWindow(windowId, iconId, x, y, 16, 16);
}

static bool32 IsSortOrderOldestFirst(void)
{
    return sBuzzrState->oldestTop;
}

static bool32 IsTimelinePictureMode(void)
{
    return (sBuzzrState->viewPic == TRUE);
}

static void HandleMenuHeader(void)
{
    u8 windowId = BUZZR_WINDOW_HEADER;
    u32 currentPosition = GetCurrentPosition();
    u32 selectedTweet = GetTweetIdFromPosition(currentPosition);

    if ((IsSortOrderOldestFirst()) && (!IsTimelinePictureMode()))
        PrintSortModeHeader(BUZZR_WINDOW_HEADER);
    else if (Buzzr_IsCalledFromOverworld())
        PrintTweetHeader(GetTweetFromOverworld(),windowId, 0);
    else if (IsTimelinePictureMode())
        PrintTweetHeader(selectedTweet, windowId, 0);
}

static void HandleTimeline(void)
{
    u32 currentPosition = GetCurrentPosition();
    s32 positionIndex = currentPosition - 1;
    u32 previousTweet, tweetIndex, verticalOffset;

    ResetVerticalOffset();

    for (u32 numTweet = 0; numTweet < MAX_NUM_TWEETS_SHOWN;numTweet++)
    {
        previousTweet = GetTweetIdFromPosition(positionIndex);
        SetVerticalOffset(CalculateVerticalOffset(numTweet,previousTweet));
        verticalOffset = GetVerticalOffset();

        if (CheckIfPrintWillOverflow(verticalOffset))
            break;

        tweetIndex = GetTweetIdFromPosition(currentPosition + numTweet);

        PrintTweet(numTweet, tweetIndex,verticalOffset,MODE_TIMELINE);
        positionIndex++;
    }
}

static bool32 CheckIfPrintWillOverflow(u32 verticalOffset)
{
    return (verticalOffset > TIMELINE_PRINT_HEIGHT);
}

static const u32 GetNumContentLines(u16 tweetId)
{
    const u8 *str = GetContent(tweetId);
    StripLineBreaks(gStringVar1);
    u32 windowWidth = TWEET_WINDOW_WIDTH;
    BreakStringNaive(gStringVar1, windowWidth, TWEET_MAX_NUM_LINES, FONT_BUZZR_TWEET, HIDE_SCROLL_PROMPT);

    u32 count = 1;
    while (*str != EOS)
    {
        if (*str == CHAR_NEWLINE)
            count++;

        str++;
    }

    return (count > TWEET_MIN_NUM_LINES) ? count : TWEET_MIN_NUM_LINES;
}

static u32 CalculateTweetContentHeight(u16 tweetId)
{
    return (GetNumContentLines(tweetId) * (GetFontAttribute(FONT_BUZZR_TWEET,FONTATTR_MAX_LETTER_HEIGHT)));
}

static u32 CalculateTweetHeaderHeight(void)
{
    return (GetFontAttribute(FONT_BUZZR_METRICS,FONTATTR_MAX_LETTER_HEIGHT));
}

static u32 CalculateTweetTotalHeight(u16 tweetId)
{
    return (CalculateTweetContentHeight(tweetId) + CalculateTweetHeaderHeight());
}

static void ResetVerticalOffset(void)
{
    sBuzzrState->verticalOffset = 0;
}

static void SetVerticalOffset(u32 offset)
{
    if (offset > UCHAR_MAX)
        offset = UCHAR_MAX;

    sBuzzrState->verticalOffset = offset;
}

static u32 GetVerticalOffset(void)
{
    return sBuzzrState->verticalOffset;
}

static u32 CalculateVerticalOffset(u32 numTweet, u32 previousTweet)
{
    u32 offset = GetVerticalOffset();

    if (numTweet == 0)
        return offset + TWEET_HEADER_TOP_PADDING;
    else
        return offset + (TWEET_MARGIN_BOTTOM + (CalculateTweetTotalHeight(previousTweet)));
}

static void PrintSortModeHeader(u8 windowId)
{
    u32 fontId = FONT_BUZZR_BAR;

    AddTextPrinterParameterized4(windowId, fontId,SORT_MODE_TEXT_X_POSITION, 0, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), BuzzrWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW,sText_OldestFirst);
}

static void PrintTweet(u32 numTweet, u16 selectedTweet, u32 verticalOffset, u32 typeTweet)
{
    if (selectedTweet == TWEET_NONE)
        return;

    HandleTweetBackground(numTweet, selectedTweet,verticalOffset);
    HandleTweetHeader(selectedTweet,verticalOffset, typeTweet);
    HandleTweetContent(selectedTweet,verticalOffset,typeTweet);
    HandleTweetIcons(selectedTweet,verticalOffset, typeTweet);
}

static void HandleTweetBackground(u32 numTweet, u16 selectedTweet, u32 verticalOffset)
{
    u32 currentTileIndex = DISPLAY_TILE_WIDTH * (PIXELS_TO_TILES(verticalOffset));

    if (currentTileIndex >= TWEET_LAST_TILE_OFFSET)
        return;

    const u8 *baseGfx = (const u8 *)sZapBackgrounds;

    u32 isTopTweet = (numTweet == 0);
    const u8 *topTweetGfx = (isTopTweet) ? baseGfx : (baseGfx + (3 * TWEET_BYTES_PER_ROW));

    CopyToWindowPixelBuffer(BUZZR_WINDOW_HEADER, topTweetGfx, TWEET_BYTES_PER_ROW, currentTileIndex);
    currentTileIndex += DISPLAY_TILE_WIDTH;

    const u8 *middleTweetGfx = baseGfx + (1 * TWEET_BYTES_PER_ROW);
    u32 midLines = GetNumContentLines(selectedTweet) * 2;

    for (u32 i = 0; i < midLines; i++)
    {
        if (currentTileIndex >= TWEET_LAST_TILE_OFFSET)
            return;

        CopyToWindowPixelBuffer(BUZZR_WINDOW_HEADER, middleTweetGfx, TWEET_BYTES_PER_ROW, currentTileIndex);
        currentTileIndex += DISPLAY_TILE_WIDTH;
    }

    if (currentTileIndex >= TWEET_LAST_TILE_OFFSET)
        return;

    const u8 *bottomTweetGfx = (currentTileIndex < (TWEET_LAST_TILE_OFFSET - DISPLAY_TILE_WIDTH)) ? (baseGfx + (2 * TWEET_BYTES_PER_ROW)) : (baseGfx + (4 * TWEET_BYTES_PER_ROW));
    CopyToWindowPixelBuffer(BUZZR_WINDOW_HEADER, bottomTweetGfx, TWEET_BYTES_PER_ROW, currentTileIndex);

}

static void HandleTweetHeader(u16 tweetId, u32 verticalOffset, u32 typeTweet)
{
    if (Buzzr_IsCalledFromOverworld())
        PrintTweet_OverworldHeader(tweetId);
    else
        PrintTweet_TimelineHeader(tweetId, verticalOffset);
}

static u32 UpdateHorizontalHeaderPosition(u8 *tweetUsername, u32 fontId)
{
    return (GetStringWidth(fontId,tweetUsername,GetFontAttribute(fontId,FONTATTR_LETTER_SPACING)) + ICON_SPACING);
}

static void PrintTweet_OverworldHeader(u16 tweetId)
{
    u32 windowId = gTweetOverworldWindowId;
    PrintTweetHeader(tweetId, windowId, 0);
}

static void PrintTweet_TimelineHeader(u16 tweetId, u32 verticalOffset)
{
    u32 windowId = BUZZR_WINDOW_HEADER;
    PrintTweetHeader(tweetId, windowId, verticalOffset);
}

static void PrintUsername(u32 windowId, u32 x, u32 y, const u8 *username, u32 fontId)
{
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);

    AddTextPrinterParameterized4(windowId, fontId,x, y, letterSpacing, lineSpacing, BuzzrWindowFontColors[GetFontColor()], TEXT_SKIP_DRAW,username);
}

static void PrintPrivateTweetRecipient(u32 windowId,u32 x,u32 y,u32 fontId)
{
    PrintHeaderIcons(windowId,sPrivate_Gfx,x,y);
    x += VERIFIED_ICON_WIDTH;
    PrintUsername(windowId,x,y,GetUsername(BUZZR_USER_PLAYER),fontId);
}

static void PrintTweetHeader(u16 tweetId, u32 windowId, u32 verticalOffset)
{
    u32 x = TWEET_HEADER_LEFT_PADDING;
    u32 y = verticalOffset;
    u32 fontId = FONT_BUZZR_USER;

    u8 *tweetUsername = Alloc(USER_MAX_LENGTH*2);
    u32 userId = GetUserId(tweetId);

    StringCopy(tweetUsername,GetUsername(userId));
    PrintUsername(windowId,x,y,tweetUsername,fontId);
    x += UpdateHorizontalHeaderPosition(tweetUsername,fontId);
    Free(tweetUsername);

    if (IsVerified(userId))
    {
        PrintHeaderIcons(windowId,sVerified_Gfx,x,y);
        x += VERIFIED_ICON_WIDTH;
    }

    if (IsTimelinePictureMode())
        return;

    if (IsPrivate(tweetId))
        PrintPrivateTweetRecipient(windowId,x,y,fontId);
    else
        HandleTweetMetrics(tweetId, y);
}

static const u8 GetFontColor(void)
{
    if (IsTimelinePictureMode())
        return FONT_WHITE;

    return FONT_BLACK;
}

static void HandleTweetMetrics(u16 selectedTweet, u32 verticalOffset)
{
    u32 windowId = BUZZR_WINDOW_HEADER, x = 174, dislikes = GetDislikes(selectedTweet), likes = GetLikes(selectedTweet), fontId = FONT_BUZZR_METRICS, letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 y = verticalOffset;

    PrintMetricIcons(windowId,x,y);

    ConvertIntToDecimalStringN(gStringVar2,likes,STR_CONV_MODE_LEFT_ALIGN,3);
    AddTextPrinterParameterized4(windowId, fontId ,187, y, letterSpacing, GetFontAttribute(fontId,FONTATTR_LINE_SPACING), BuzzrWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW,gStringVar2);

    ConvertIntToDecimalStringN(gStringVar2,dislikes,STR_CONV_MODE_LEFT_ALIGN,3);
    AddTextPrinterParameterized4(windowId, fontId ,214, y, letterSpacing, GetFontAttribute(fontId,FONTATTR_LINE_SPACING), BuzzrWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW,gStringVar2);
}

static void PrintMetricIcons(u32 windowId, u32 x, u32 y)
{
    BlitBitmapToWindow(windowId,sMetrics_Gfx,x,y,40,16);
}

static void HandleTweetContent(u16 tweetId, u32 verticalOffset, u32 typeTweet)
{
    if (Buzzr_IsCalledFromOverworld())
        PrintTweet_OverworldContent(tweetId);
    else
        PrintTweet_TimelineContent(tweetId, verticalOffset);
}

static void PrintTweet_TimelineContent(u16 tweetId, u32 verticalOffset)
{
    u32 windowId = BUZZR_WINDOW_HEADER;
    u32 y = verticalOffset + CalculateTweetHeaderHeight();
    const u8 *fontColor = BuzzrWindowFontColors[FONT_BLACK];

    PrintTweetContent(windowId, tweetId, fontColor, y);
}

static void PrintTweet_OverworldContent(u16 tweetId)
{
    u32 windowId = gTweetOverworldWindowId;
    u32 y = CalculateTweetHeaderHeight();
    const u8 *fontColor = BuzzrWindowFontColors[FONT_BLACK];

    PrintTweetContent(windowId, tweetId, fontColor, y);
}

static void PrintTweetContent(u32 windowId, u16 tweetId, const u8 *fontColor, u32 y)
{
    u32 x = 12;
    u32 windowWidth = TWEET_WINDOW_WIDTH;
    u32 fontId = FONT_BUZZR_TWEET;

    GetContent(tweetId);
    StripLineBreaks(gStringVar1);
    BreakStringNaive(gStringVar1, windowWidth, TWEET_MAX_NUM_LINES, fontId, HIDE_SCROLL_PROMPT);

    AddTextPrinterParameterized4(windowId, FONT_BUZZR_TWEET, x, y, GetFontAttribute(fontId,FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), fontColor, TEXT_SKIP_DRAW,gStringVar1);
}

static void HandleTweetIcons(u16 tweetId, u32 verticalOffset, u32 typeTweet)
{
    if (Buzzr_IsCalledFromOverworld())
        PrintTweet_OverworldIcons(tweetId);
    else
        PrintTweet_TimelineIcons(tweetId, verticalOffset);
}

static void PrintTweet_OverworldIcons(u16 tweetId)
{
    u32 y = CalculateIndicatorIconHeight(tweetId, 0);

    PrintTweetIcons(tweetId, gTweetOverworldWindowId,TWEET_INDICATOR_X_POSITION,y, MODE_OVERWORLD);
}

static void PrintTweet_TimelineIcons(u16 tweetId, u32 verticalOffset)
{
    u32 y = CalculateIndicatorIconHeight(tweetId, verticalOffset);
    PrintTweetIcons(tweetId, BUZZR_WINDOW_HEADER,TWEET_INDICATOR_X_POSITION,y, MODE_TIMELINE);
}

static u32 CalculateIndicatorIconHeight(u16 tweetId, u32 verticalOffset)
{
    return (verticalOffset + CalculateTweetTotalHeight(tweetId) - GetFontAttribute(FONT_BUZZR_TWEET,FONTATTR_MAX_LETTER_HEIGHT) + TWEET_INDICATOR_TOP_PADDING);
}

static bool32 CheckTweetPrintUnreadIcon(u32 windowId, u32 tweetId, u32 x, u32 y, u32 typeTweet)
{
    if (Buzzr_IsCalledFromOverworld())
        return FALSE;

    if (Buzzr_IsTweetRead(tweetId))
        return FALSE;

    PrintHeaderIcons(windowId, sUnread_Gfx, x, y);
    return TRUE;
}

static void CheckTweetPrintPictureIcon(u32 windowId,u16 tweetId,u32 x, u32 y)
{
    if (GetPictureTiles(tweetId))
        PrintHeaderIcons(windowId, sPicture_Gfx, x, y);
}

static void PrintTweetIcons(u32 tweetId, u32 windowId, u32 x, u32 y, u32 typeTweet)
{
    if (CheckTweetPrintUnreadIcon(windowId, tweetId, x, y, typeTweet))
        x = x - (ICON_SPACING + TWEET_ICON_WIDTH);

    CheckTweetPrintPictureIcon(windowId, tweetId, x, y);
}

static void PrintMenuHeaderAndTimeline(void)
{
    FillWindowPixelBuffer(BUZZR_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    HandleMenuHeader();
    HandleTimeline();

    CopyWindowToVram(BUZZR_WINDOW_HEADER, COPYWIN_GFX);
}

static void PrintMenuHeader(void)
{
    FillWindowPixelBuffer(BUZZR_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    HandleMenuHeader();

    CopyWindowToVram(BUZZR_WINDOW_HEADER, COPYWIN_GFX);
}

static const u8 *GetHelpBarText(void)
{
    return (IsTimelinePictureMode()) ? sText_HelpBarReturn : sText_HelpBarDefault;
}

static void PrintHelpBar(void)
{
    u32 windowId = BUZZR_WINDOW_HELP_BAR;
    u32 fontId = FONT_BUZZR_BAR;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AddTextPrinterParameterized4(windowId, fontId, BAR_LEFT_PADDING, BAR_TOP_PADDING, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), BuzzrWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, GetHelpBarText());

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static const u32 *GetRelevantTiles(void)
{
    u32 tweetId = GetTweetIdFromPosition(GetCurrentPosition());
    if (Buzzr_IsCalledFromOverworld())
        tweetId = overworldTweet;

    if(IsTimelinePictureMode())
        return GetPictureTiles(tweetId);
    else
    {
        switch (GetFilter())
        {
            case TIMELINE_FILTER_ALL:
                return sLogomarkAllTiles;
                break;
            case TIMELINE_FILTER_PLAYER:
                return sLogomarkPlayerTiles;
                break;
            case TIMELINE_FILTER_UNREAD:
                return sLogomarkUnreadTiles;
                break;
            case TIMELINE_FILTER_QUEST:
                return sLogomarkQuestTiles;
                break;
            case TIMELINE_FILTER_VERIFIED:
                return sLogomarkVerifiedTiles;
                break;
            default:
            case TIMELINE_FILTER_PRIVATE:
                return sLogomarkPrivateTiles;
                break;
        }
    }
}

static const u32 *GetRelevantTilemap(void)
{
    u32 tweetId = GetTweetIdFromPosition(GetCurrentPosition());
    if (Buzzr_IsCalledFromOverworld())
        tweetId = overworldTweet;

    if(IsTimelinePictureMode())
        return gTweets[tweetId].tilemapptr;
    else
        return sLogomarkAllTilemap;
}

static const u16 *GetRelevantPalette(void)
{
    u32 tweetId = GetTweetIdFromPosition(GetCurrentPosition());
    if (Buzzr_IsCalledFromOverworld())
        tweetId = overworldTweet;

    if(IsTimelinePictureMode())
        return gTweets[tweetId].palptr;
    else
        return sLogomarkAllPalette;
}

static void AllocTilemapBuffers(void)
{
    Free(sBg2TilemapBuffer);
    Free(sBg1TilemapBuffer);
    Free(sBg0TilemapBuffer);
    sBg2TilemapBuffer = Alloc(TILEMAP_BUFFER_SIZE);
    sBg1TilemapBuffer = Alloc(TILEMAP_BUFFER_SIZE);
    sBg0TilemapBuffer = Alloc(TILEMAP_BUFFER_SIZE);
}

static void LoadBackground(void)
{
    const u32 *sTiles = GetRelevantTiles();
    const u32 *sTilemap = GetRelevantTilemap();
    const u16 *sPalette = GetRelevantPalette();

    DecompressAndLoadBgGfxUsingHeap(BG2_BACKGROUND_UI, sTiles, 0, 0, 0);
    DecompressDataWithHeaderWram(sTilemap, sBg2TilemapBuffer);
    LoadPalette(sPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    ShowBg(BG2_BACKGROUND_UI);
}

static void ChangeBackground(void)
{
    ResetAllBgsCoordinates();
    AllocTilemapBuffers();
    HandleAndShowBgs();
    LoadBackground();
}

static void ToggleSort(void)
{
    sBuzzrState->oldestTop = !(sBuzzrState->oldestTop);
    WriteSortToSaveBlock(sBuzzrState->oldestTop);
}

static void TogglePicture(void)
{
    sBuzzrState->viewPic = !(sBuzzrState->viewPic);
}

static u32 ChangeFilter(u32 action)
{
    u32 filter = sBuzzrState->filter;

    if (action == FILTER_RIGHT)
        filter = (filter == (TIMELINE_FILTER_COUNT-1)) ? TIMELINE_FILTER_ALL : filter + 1;
    else
        filter = (filter == 0) ? (TIMELINE_FILTER_COUNT-1): filter - 1;

    sBuzzrState->filter = filter;
    return WriteFilterToSaveBlock(filter);
}

static void ClearTimeline(void)
{
    u32 j;
    for(j = 0; j < TWEET_COUNT; j++)
        AddTweetToTimeline(j, TWEET_NONE);
}

static bool32 DoesTweetMatchFilter(u32 tweetId)
{
    u32 userId = GetUserId(tweetId);

    switch (GetFilter())
    {
        case TIMELINE_FILTER_ALL:
            if (tweetId != TWEET_NONE)
                return TRUE;
            break;
        case TIMELINE_FILTER_UNREAD:
            if (!Buzzr_IsTweetRead(tweetId))
                return TRUE;
            break;
        case TIMELINE_FILTER_QUEST:
            if (GetQuest(tweetId))
                return TRUE;
            break;
        case TIMELINE_FILTER_PLAYER:
            if (userId == BUZZR_USER_PLAYER)
                return TRUE;
            break;
        case TIMELINE_FILTER_VERIFIED:
            if (IsVerified(userId))
                return TRUE;
            break;
        case TIMELINE_FILTER_PRIVATE:
            if (IsPrivate(tweetId))
                return TRUE;
            break;
    }
    return FALSE;
}

static void SetNumTimelineTweets(u32 num)
{
    sBuzzrLists->numTimelineTweets = num;
}

static u32 GetTweetIdFromSaveblockPosition(u32 index)
{
    return gSaveBlock2Ptr->buzzr.Order[index];
}

static bool32 IfTweetIdInSaveBlockIsZero(u32 index)
{
    return (GetTweetIdFromSaveblockPosition(index) == TWEET_NONE);
}

static void LoadTimelineOrderFromSaveBlock(void)
{
    u32 i = 0, numTweets = 0;

    for (i = 0; i < TWEET_COUNT; i++)
    {
        AddTweetToTimeline(i,GetTweetIdFromSaveblockPosition(i));

        if(!IfTweetIdInSaveBlockIsZero(i))
            numTweets++;
    }

    SetNumTimelineTweets(numTweets);
}

static void FilterTimeline(void)
{
    u32 selectedTweet, orderIndex, timelineIndex = 0;
    for (orderIndex = 0; orderIndex < TWEET_COUNT; orderIndex++)
    {
        selectedTweet = GetTweetIdFromSaveblockPosition(orderIndex);

        if (selectedTweet == TWEET_NONE)
            break;

        if ((DoesTweetMatchFilter(selectedTweet)))
            AddTweetToTimeline(timelineIndex++,selectedTweet);
    }

    SetNumTimelineTweets(timelineIndex);
}

static void ReverseTimelineOrder(u32 numTimelineTweets, u32 index)
{
    u32 tempIndex = (numTimelineTweets - index - 1);
    u32 temp = GetTweetIdFromPosition(index);

    AddTweetToTimeline(index,GetTweetIdFromPosition(tempIndex));
    AddTweetToTimeline(tempIndex,temp);
}

static void SortTimeline(void)
{
    u32 i;
    u32 numTimelineTweets = GetNumTimelineTweets();

    if (IsSortOrderOldestFirst())
        return;

    for (i = 0; i < numTimelineTweets / 2; i++)
        ReverseTimelineOrder(numTimelineTweets,i);
}

static bool32 HasQuestAndQuestNotActive(u32 tweetId)
{
    u32 questId = GetQuest(tweetId);

    if (questId == QUEST_PLAYERSADVENTURE)
        return FALSE;

    if (!QuestMenu_GetSetQuestState(questId,FLAG_GET_INACTIVE))
        return FALSE;

    return TRUE;
}

static void StoreQuestTweets(u32 index, u32 tweetId)
{
    sBuzzrLists->QuestTweets[index] = tweetId;
}

static void AddTweetToTimeline(u32 index, u32 tweetId)
{
    AddTweetToBitmap(tweetId);
    sBuzzrLists->Timeline[index] = tweetId;
}

static void AddNewTweetsToTimeline(void)
{
    u32 tweetIndex = 0, numNewTweets = 0, numQuestTweets = 0;
    u32 newTweetsArray[TWEET_COUNT];

    for (tweetIndex = 1; tweetIndex < TWEET_COUNT; tweetIndex++)
    {
        if (gTweets[tweetIndex].content == NULL)
            continue;

        if (HasQuestAndQuestNotActive(tweetIndex))
            StoreQuestTweets(numQuestTweets++,tweetIndex);

        if (!CheckIfTweetCanBeAdded(tweetIndex))
            continue;

        newTweetsArray[numNewTweets++] = tweetIndex;
    }

    for (tweetIndex = 0; tweetIndex < numNewTweets; tweetIndex++)
        AddTweetToTimeline((GetNumTimelineTweets() + tweetIndex),newTweetsArray[tweetIndex]);
}

static bool32 CheckIfTweetCanBeAdded(u32 tweetIndex)
{
    if (IsTweetInTimeline(tweetIndex))
        return FALSE;

    return (IsTweetCriteriaMet(tweetIndex) || Buzzr_IsTweetRead(tweetIndex));
}

static void AddTweetToBitmap(u32 tweetId)
{
    s32 index = tweetId / 32;
    s32 bit = tweetId % 32;
    sBuzzrLists->TweetBitmap[index] |= (1u << bit);
}

static bool32 IsTweetInTimeline(u32 tweetId)
{
    s32 index = tweetId / 32;
    s32 bit = tweetId % 32;
    return (sBuzzrLists->TweetBitmap[index] & (1u << bit)) != 0;
}

static bool32 IsTweetCriteriaMet(u16 tweetId)
{
    void (*tweetFunction)(void) = gTweets[tweetId].criteria;

    if (tweetFunction == NULL)
        return FALSE;
    else
        tweetFunction();

    return gSpecialVar_Result;
}

static u32 GetFilter(void)
{
    return sBuzzrState->filter;
}

static void ReadFilterAndModeFromSaveBlock(void)
{
    sBuzzrState->filter = gSaveBlock2Ptr->buzzr.Filter;
    sBuzzrState->oldestTop = gSaveBlock2Ptr->buzzr.Sort;
}

static void WriteTimelineOrderToSaveBlock(void)
{
    u32 j = 0;

    for(j = 0; j < TWEET_COUNT; j++)
        gSaveBlock2Ptr->buzzr.Order[j] = GetTweetIdFromPosition(j);
}

void Buzzr_MarkTweetAsRead(u16 tweetId)
{
    gSaveBlock2Ptr->buzzr.IsRead[tweetId] = TRUE;
}

static u32 WriteFilterToSaveBlock(u32 filter)
{
    gSaveBlock2Ptr->buzzr.Filter = filter;
    return filter;
}

static bool32 WriteSortToSaveBlock(bool32 oldestTop)
{
    gSaveBlock2Ptr->buzzr.Sort = oldestTop;
    return oldestTop;
}

void Buzzr_ResetSaveData(void)
{
    u32 i;
    gSaveBlock2Ptr->buzzr.Filter = 0;
    gSaveBlock2Ptr->buzzr.Sort = FALSE;
    for (i = 0; i < TWEET_COUNT ; i++)
    {
        gSaveBlock2Ptr->buzzr.IsRead[i] = FALSE;
        gSaveBlock2Ptr->buzzr.Order[i] = 0;
    }
}

void Buzzr_ShowTweetOverworld(u16 tweetId)
{
    if (tweetId == TWEET_NONE)
        return;

    gTweetOverworldWindowId = AddWindow(&sBuzzr_OverworldWindowTemplate);
    FillWindowPixelBuffer(gTweetOverworldWindowId, PIXEL_FILL(1));

    LoadPalette(sLogomarkAllPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    // this works, but stuff in the background breaks
    // PSF TODO revisit this after dynamic overworld palettes

    PrintTweet(0, tweetId, 0, MODE_OVERWORLD);

    PutWindowTilemap(gTweetOverworldWindowId);
    CopyWindowToVram(gTweetOverworldWindowId, COPYWIN_FULL);
}

void Buzzr_HideTweetOverworld(void)
{
    ClearToTransparentAndRemoveWindow(gTweetOverworldWindowId);
}

static void SetTweetFromOverworld(u16 tweetId)
{
    overworldTweet = tweetId;
}

static void ClearTweetFromOverworld(void)
{
    overworldTweet = TWEET_NONE;
}

static u32 GetTweetFromOverworld(void)
{
    return overworldTweet;
}

void Buzzr_ShowPicOverworld(u16 tweetId)
{
    SetTweetFromOverworld(tweetId);
    CreateTask(Task_OpenBuzzrFromScript,0);
}

void Task_OpenBuzzrFromScript(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        Buzzr_Init(CB2_ReturnToFieldContinueScript);
        DestroyTask(taskId);
    }
}
static bool32 Buzzr_IsCalledFromOverworld(void)
{
    return (overworldTweet != TWEET_NONE);
}
