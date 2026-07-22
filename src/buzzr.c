#include "global.h"
#include "random.h"
#include "tv.h"
#include "bg.h"
#include "item.h"
#include "text_window.h"
#include "string_util.h"
#include "line_break.h"
#include "window.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "malloc.h"
#include "move.h"
#include "scanline_effect.h"
#include "constants/rgb.h"
#include "constants/quest_ow.h"
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
#include "data/buzzr/zaps.h"
#include "international_string_util.h"
#include "gba/isagbprint.h"
#include "event_data.h"
#include "trig.h"
#include "quests.h"
#include "script_menu.h"
#include "field_weather.h"
#include "quest_logic.h"
#include "region_map.h"

static void ResetQuestFanfareFlag(void);
static void ResetPictureMode(void);
static void ResetNumTimelineZapsToZero(void);
static void InitalizeValuesOnStartUp(void);
static u32 GetArrowPosition(struct Sprite *sprite);
static void AnimateArrowSprite(struct Sprite *sprite, u32 arrowPos);
static void AnimateCursor(struct Sprite *sprite);
static void HandleArrowVisibility(struct Sprite *sprite, u32 arrowPos);
static void SpriteCallback_Arrow(struct Sprite *sprite);
static u8 GetArrowSpriteShape(u32 spriteConst);
static u8 GetArrowSpriteSize(u32 spriteConst);
static void CreateArrowSprite(u32 SpriteTag,const u32 *gfx,u32 x, u32 y, u32 spriteConst, void (*callback)(struct Sprite *));
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
static u32 GetNumTimelineZaps(void);
static u32 CalculateLastPosition(void);
static bool32 IsCurrentPositionBottom(void);
static bool8 UpdatePosition(bool32 moveDown);
static enum BuzzrZapIds GetZapIdFromPosition(u32 position);
static void DebugPrintTimeline(u32 time);
static void Task_BuzzrWaitFadeIn(u8 taskId);
static void Task_MainInput(u8 taskId);
static void HandleInput(u8 taskId, u32 currentZapId);
static void HandlePictureModeInput(u8 taskId, u32 currentZapId);
static void HandleOverworldPictureModeInput(u8 taskId, u32 currentZapId);
static void ChangePictureModeAndReloadScreen(void);
static void Task_ChangePictureModeAndReloadScreen(u8 taskId);
static void ChangeFilterAndReloadTimeline(u8 direction);
static void ToggleSortAndReloadTimeline(void);
static void ReloadTimeline(void);
static void FadeAndBail(void);
static void PlayQuestFanfare(void);
static void Task_WaitFadeAndExitGracefully(u8 taskId);
static void PlaySoundStartFadeQuitApp(u8 taskId);
static void Buzzr_FreeResources(void);
static void BufferToVram_Windows(void);
static bool8 LoadGraphics(void);
static void Buzzr_InitWindows(void);
static enum BuzzrUserIds GetUserId(enum BuzzrZapIds zapId);
static bool8 ShouldZapContentFail(enum BuzzrZapIds zapId);
static bool8 IsZapCorruptable(enum BuzzrZapIds zapId);
static void Buzzr_ExpandStrings(enum BuzzrZapIds zapId);
static void *GetCriteria(enum BuzzrZapIds zapId);
static u16 GetQuest(enum BuzzrZapIds zapId);
static bool32 IsPrivate(enum BuzzrZapIds zapId);
static const u8* GetDislikes(enum BuzzrZapIds zapId);
static const u8* GetLikes(enum BuzzrZapIds zapId);
static bool32 IsSortOrderOldestFirst(void);
static bool32 IsTimelinePictureMode(void);
static void HandleMenuHeader(void);
static void HandleTimeline(void);
static bool32 CheckIfPrintWillOverflow(u32 verticalOffset);
static u32 CalculateZapContentHeight(enum BuzzrZapIds zapId);
static u32 CalculateZapHeaderHeight(void);
static u32 CalculateZapTotalHeight(enum BuzzrZapIds zapId);
static void ResetVerticalOffset(void);
static void SetVerticalOffset(u32 offset);
static u32 GetVerticalOffset(void);
static u32 CalculateVerticalOffset(u32 numZap, u32 previousZap);
static void PrintSortModeHeader(u8 windowId);
static void PrintZap(u32 numZap, enum BuzzrZapIds selectedZap, u32 verticalOffset, u32 typeZap);
static void HandleZapBackground(u32 numZap, u16 selectedZap, u32 verticalOffset);
static void HandleZapHeader(enum BuzzrZapIds zapId, u32 verticalOffset, u32 typeZap);
static u32 UpdateHorizontalHeaderPosition(u8 *zapUsername, u32 fontId);
static void PrintZap_OverworldHeader(enum BuzzrZapIds zapId);
static void PrintZap_TimelineHeader(enum BuzzrZapIds zapId, u32 verticalOffset);
static void PrintUsername(u32 windowId, u32 x, u32 y, const u8 *username, u32 fontId);
static void PrintPrivateZapRecipient(u32 windowId,u32 x,u32 y,u32 fontId);
static void PrintZapHeader(enum BuzzrZapIds zapId, u32 windowId, u32 verticalOffset);
static const u8 GetFontColor(void);
static void HandleZapMetrics(u16 selectedZap, u32 verticalOffset);
static void PrintMetricIcons(u32 windowId, u32 x, u32 y);
static void HandleZapContent(enum BuzzrZapIds zapId, u32 verticalOffset, u32 typeZap);
static void PrintZap_TimelineContent(enum BuzzrZapIds zapId, u32 verticalOffset);
static void PrintZap_OverworldContent(enum BuzzrZapIds zapId);
static void PrintZapContent(u32 windowId, enum BuzzrZapIds zapId, const u8 *fontColor, u32 y);
static void HandleZapIcons(enum BuzzrZapIds zapId, u32 verticalOffset, u32 typeZap);
static void PrintZap_OverworldIcons(enum BuzzrZapIds zapId);
static void PrintZap_TimelineIcons(enum BuzzrZapIds zapId, u32 verticalOffset);
static u32 CalculateIndicatorIconHeight(enum BuzzrZapIds zapId, u32 verticalOffset);
static bool32 CheckZapPrintUnreadIcon(u32 windowId, u32 zapId, u32 x, u32 y, u32 typeZap);
static void CheckZapPrintPictureIcon(u32 windowId,enum BuzzrZapIds zapId,u32 x, u32 y);
static void PrintZapIcons(u32 zapId, u32 windowId, u32 x, u32 y, u32 typeZap);
static void PrintMenuHeaderAndTimeline(void);
static void PrintMenuHeader(void);
static const u8 *GetHelpBarText(void);
static void PrintHelpBar(void);
static const u32 *GetRelevantTiles(void);
static const u16 *GetRelevantTilemap(void);
static const u16 *GetRelevantPalette(void);
static void LoadBackground(void);
static void ChangeBackground(void);
static void ToggleSort(void);
static void TogglePicture(void);
static u32 ChangeFilter(u32 action);
static void ClearTimeline(void);
static bool32 DoesZapMatchFilter(u32 zapId);
static void SetNumTimelineZaps(u32 num);
static enum BuzzrZapIds GetZapIdFromSaveblockPosition(u32 index);
static bool32 IfZapIdInSaveBlockIsZero(u32 index);
static void LoadTimelineOrderFromSaveBlock(void);
static void FilterTimeline(void);
static void ReverseTimelineOrder(u32 numTimelineZaps, u32 index);
static void SortTimeline(void);
static void AddZapToTimeline(u32 index, u32 zapId);
static void AddNewZapsToTimeline(void);
static bool32 CheckIfZapCanBeAdded(u32 zapIndex);
static void AddZapToBitmap(u32 zapId);
static bool32 IsZapInTimeline(u32 zapId);
static bool32 IsZapCriteriaMet(enum BuzzrZapIds zapId);
static u32 GetFilter(void);
static void ReadFilterAndModeFromSaveBlock(void);
static void WriteTimelineOrderToSaveBlock(void);
static u32 WriteFilterToSaveBlock(u32 filter);
static bool32 WriteSortToSaveBlock(bool32 oldestTop);
static void SetZapFromOverworld(enum BuzzrZapIds zapId);
static void ClearZapFromOverworld(void);
static u32 GetZapFromOverworld(void);
static bool32 Buzzr_IsCalledFromOverworld(void);
static void Buzzr_SetSpriteId(enum BuzzrSpriteIDs spriteType, u32 spriteId);
static u32 Buzzr_GetSpriteId(enum BuzzrSpriteIDs spriteType);
static void Buzzr_PrintHeaderIcons(void);
static void Task_Buzzr_StartQuestAnimation(u8 taskId);
static enum QuestIdList Buzzr_ReturnUnstartedQuestFromZap(u32 zapId);
static void Buzzr_TryStartQuestFromZap(u32 zapId, u8 taskId);
static void CreateQuestSprite(void);
static void SpriteCallback_QuestImage(struct Sprite *sprite);

struct BuzzrState
{
    MainCallback savedCallback;
    u8 loadState;
    u32 filter;
    bool32 oldestTop;
    bool32 viewPic;
    u16 position;
    u8 verticalOffset;
    u8 spriteIds[NUM_BUZZR_SPRITES];
};

struct BuzzrLists
{
    u32 Timeline[ZAP_COUNT];
    u32 numTimelineZaps;
    u32 ZapBitmap[NUM_ZAP_BITS];
};

static struct BuzzrState *sBuzzrState = NULL;
static struct BuzzrLists *sBuzzrLists = NULL;
static u8 *sBgTilemapBuffer[BG_BUZZR_COUNT] = {NULL};

EWRAM_DATA u8 gZapOverworldWindowId = 0;
EWRAM_DATA u16 overworldZap = ZAP_NONE;

static const u8 sText_OldestFirst[] =_("Oldest First");
static const u8 sText_UsernamePrefix[] =_("@");

static const struct BgTemplate sBuzzrBgTemplates[] =
{
    {
        .bg = BG0_TEXT_CONTENT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = BG1_BACKGROUND_ZAPS,
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
    .paletteNum = QUEST_OVERWORLD_PALETTE_INTERFACE_ID,
    .baseBlock = 1
};

static const u32 sZapBackgrounds[] = INCGFX_U32("graphics/ui_menus/buzzr/backgrounds/zap_backgrounds.png", ".4bpp");

static const u32 sLogomarkAllTiles[] = INCGFX_U32("graphics/ui_menus/buzzr/buzzr_background.png", ".4bpp.smol");
static const u16 sLogomarkAllTilemap[] = INCBIN_U16("graphics/ui_menus/buzzr/buzzr_background.bin.smolTM");

static const u16 sLogomarkAllPalette[] = INCGFX_U16("graphics/ui_menus/buzzr/buzzr.pal", ".gbapal");

static const u8 sVerified_Gfx[] = INCGFX_U8("graphics/ui_menus/buzzr/verified.png", ".4bpp");
static const u8 sPrivate_Gfx[] = INCGFX_U8("graphics/ui_menus/buzzr/private.png", ".4bpp");
static const u8 sMetrics_Gfx[] = INCGFX_U8("graphics/ui_menus/buzzr/metrics_long.png", ".4bpp");
static const u8 sUnread_Gfx[] = INCGFX_U8("graphics/ui_menus/buzzr/unread.png", ".4bpp");
static const u8 sPicture_Gfx[] = INCGFX_U8("graphics/ui_menus/buzzr/picture.png", ".4bpp");

static const u32 BuzzrUpArrow_Gfx[]        = INCGFX_U32("graphics/ui_menus/buzzr/up_arrow.png", ".4bpp.smol");
static const u32 BuzzrDownArrow_Gfx[]      = INCGFX_U32("graphics/ui_menus/buzzr/down_arrow.png", ".4bpp.smol");
static const u32 BuzzrCursor_Gfx[]      = INCGFX_U32("graphics/ui_menus/buzzr/cursor.png", ".4bpp.smol");

static const struct {
    const struct SpriteSheet sheets[NUM_BUZZR_SPRITE_TAGS];
    const struct SpritePalette palette;
} sBuzzr_SpriteGraphics =
{
    {
        {
            (const u16[])INCGFX_U16("graphics/ui_menus/buzzr/icons.png", ".4bpp"),
            TILE_OFFSET_4BPP(32), BUZZR_SPRITE_HEADER_TAG,
        },
    },
    { sLogomarkAllPalette, BUZZR_PALTAG_SPRITES}
};
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

static void ResetNumTimelineZapsToZero(void)
{
    sBuzzrLists->numTimelineZaps = 0;
}

static void InitalizeValuesOnStartUp(void)
{
    ResetNumTimelineZapsToZero();
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


static void CreateArrowSprite(u32 SpriteTag,const u32 *gfx,u32 x, u32 y, u32 spriteConst, void (*callback)(struct Sprite *))
{
    u32 spriteId;
    const struct SpritePalette sBuzzrInterfaceSpritePalette[] =
    {
        {sLogomarkAllPalette, BUZZR_PALTAG_SPRITES},
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
    return ZAP_HEADER_TOP_PADDING + ZAP_CURSOR_MARGIN_TOP;
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
    AddNewZapsToTimeline();
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
            CreateQuestSprite();
            gMain.state++;
            break;
        case 9:
            BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
            CreateTask(Task_BuzzrWaitFadeIn, 0);
            gMain.state++;
            break;
        case 10:
            Buzzr_PrintHeaderIcons();
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
    for (u32 backgroundId = 0; backgroundId < BG_BUZZR_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBuzzrBgTemplates, NELEMS(sBuzzrBgTemplates));

    for (u32 backgroundId = 0; backgroundId < BG_BUZZR_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
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

static u32 GetNumTimelineZaps(void)
{
    return sBuzzrLists->numTimelineZaps;
}

static u32 CalculateLastPosition(void)
{
    u32 numTimelineZaps = GetNumTimelineZaps();
    return ((numTimelineZaps == 0) ? 0 : numTimelineZaps - 1);
}

static bool32 IsCurrentPositionBottom(void)
{
    u32 lastPosition = CalculateLastPosition();

    return (sBuzzrState->position == lastPosition);
}

static bool8 UpdatePosition(bool32 moveDown)
{
    u32 currentPosition = GetCurrentPosition();
    u32 lastPosition = CalculateLastPosition();

    if (moveDown)
    {
        if (currentPosition == lastPosition)
        {
            PlaySE(SE_BOO);
            return FALSE;
        }
        SetCurrentPosition(++currentPosition);
    }
    else
    {
        if (currentPosition == BUZZR_TIMELINE_TOP)
        {
            PlaySE(SE_BOO);
            return FALSE;
        }
        SetCurrentPosition(--currentPosition);
    }
    return TRUE;
}

static enum BuzzrZapIds GetZapIdFromPosition(u32 position)
{
    if ((position < 0) || (position >= ZAP_COUNT))
        position = 0;

    return sBuzzrLists->Timeline[position];
}

static void UNUSED DebugPrintTimeline(u32 time)
{
    u32 i;

    if (time == 1)
        DebugPrintf("START LOAD HERE");

    for (i = 0; i < ZAP_COUNT; i++)
        DebugPrintf("this is time %d, slot %d is zap %d",time, i,GetZapIdFromPosition(i));

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
    if (gPaletteFade.active)
        return;

    enum BuzzrZapIds currentZapId = GetZapIdFromPosition(GetCurrentPosition());
    Buzzr_TryStartQuestFromZap(currentZapId,taskId);
}

static void Task_MainInput(u8 taskId)
{
    ResetQuestFanfareFlag();

    enum BuzzrZapIds currentZapId = GetZapIdFromPosition(GetCurrentPosition());

    if (!Buzzr_IsZapRead(currentZapId))
    {
        Buzzr_MarkZapAsRead(currentZapId);
        Buzzr_TryStartQuestFromZap(currentZapId,taskId);
    }

    if(!IsTimelinePictureMode())
        HandleInput(taskId, currentZapId);
    else if(Buzzr_IsCalledFromOverworld())
        HandleOverworldPictureModeInput(taskId, currentZapId);
    else if(IsTimelinePictureMode())
        HandlePictureModeInput(taskId, currentZapId);
}

static void HandleInput(u8 taskId, u32 currentZapId)
{
    if (JOY_NEW(DPAD_LEFT | L_BUTTON))
        ChangeFilterAndReloadTimeline(FILTER_LEFT);

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON))
        ChangeFilterAndReloadTimeline(FILTER_RIGHT);

    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
    {
        if (UpdatePosition(FALSE))
            PrintMenuHeaderAndTimeline();
    }

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
    {
        if (UpdatePosition(TRUE))
            PrintMenuHeaderAndTimeline();
    }

    if (JOY_NEW(B_BUTTON))
        PlaySoundStartFadeQuitApp(taskId);

    if (JOY_NEW(A_BUTTON))
        if (GetPictureTiles(currentZapId))
            ChangePictureModeAndReloadScreen();

    if (JOY_NEW(START_BUTTON))
        ToggleSortAndReloadTimeline();
}

static void HandlePictureModeInput(u8 taskId, u32 currentZapId)
{
    if (JOY_NEW(B_BUTTON))
        ChangePictureModeAndReloadScreen();

    if (JOY_NEW(A_BUTTON))
        ChangePictureModeAndReloadScreen();
}

static void HandleOverworldPictureModeInput(u8 taskId, u32 currentZapId)
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

static void PlayQuestFanfare(void)
{
    PlayFanfare(MUS_LEVEL_UP);
    FadeInBGM(4);
    FlagSet(FLAG_QUEST_FANFARE);
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(sBuzzrState->savedCallback);
    ClearZapFromOverworld();
    ResetPictureMode();
    Buzzr_FreeResources();
    DestroyTask(taskId);
}

static void PlaySoundStartFadeQuitApp(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    PlaySE(SE_PC_OFF);
    gTasks[taskId].func = Task_WaitFadeAndExitGracefully;
}

static void Buzzr_FreeResources(void)
{
    TRY_FREE_AND_SET_NULL(sBuzzrState);
    TRY_FREE_AND_SET_NULL(sBuzzrLists);

    for (u32 backgroundId = BG1_BACKGROUND_ZAPS; backgroundId < BG_BUZZR_COUNT; backgroundId++)
        TRY_FREE_AND_SET_NULL(sBgTilemapBuffer[backgroundId]);

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
    const u16 *sTilemap = GetRelevantTilemap();
    const u16 *sPalette = GetRelevantPalette();

    switch (sBuzzrState->loadState)
    {
        case 0:
            FreeTempTileDataBuffersIfPossible();
            ResetTempTileDataBuffers();
            DecompressAndLoadBgGfxUsingHeap(BG2_BACKGROUND_UI, sTiles, 0, 0, 0);
            sBuzzrState->loadState++;
            break;
        case 1:
            CopyToBgTilemapBuffer(BG2_BACKGROUND_UI,sTilemap,0,0);
            sBuzzrState->loadState++;
            break;
        case 2:
            LoadPalette(sPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
            LoadSpriteSheets(sBuzzr_SpriteGraphics.sheets);
            LoadSpritePalette(&sBuzzr_SpriteGraphics.palette);
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

static enum BuzzrUserIds GetUserId(enum BuzzrZapIds zapId)
{
    return gZaps[zapId].userId;
}

static bool8 IsZapCorruptable(enum BuzzrZapIds zapId)
{
    return gZaps[zapId].shouldCorrupt;
}

static bool8 ShouldZapContentFail(enum BuzzrZapIds zapId)
{
    if (FlagGet(FLAG_TIMELINE_TRUE) == FALSE)
        return FALSE;

    return IsZapCorruptable(zapId);
}

const u8 *GetContent(enum BuzzrZapIds zapId)
{
    Buzzr_ExpandStrings(zapId);

    if (ShouldZapContentFail(zapId))
        StringCopy(gStringVar4,COMPOUND_STRING("This content is no longer available."));
    else
        StringExpandPlaceholders(gStringVar4,gZaps[zapId].content);

    return gStringVar4;
}

const u32* GetPictureTiles(enum BuzzrZapIds zapId)
{
    if (zapId >= sizeof(gZaps) / sizeof(gZaps[0]))
        return NULL;

    return gZaps[zapId].tiles;
}

static void *GetCriteria(enum BuzzrZapIds zapId)
{
    return gZaps[zapId].criteria;
}

static u16 GetQuest(enum BuzzrZapIds zapId)
{
    return gZaps[zapId].quest;
}

static bool32 IsPrivate(enum BuzzrZapIds zapId)
{
    return gZaps[zapId].isPrivate;
}

static const u8* GetDislikes(enum BuzzrZapIds zapId)
{
    return gZaps[zapId].dislikeCount;
}

static const u8* GetLikes(enum BuzzrZapIds zapId)
{
    return gZaps[zapId].likeCount;
}

bool32 Buzzr_IsZapRead(enum BuzzrZapIds zapId)
{
    return gSaveBlock2Ptr->buzzr.IsRead[zapId];
}

const u8 *GetUsername(enum BuzzrUserIds userId)
{
    StringCopy(gStringVar3,sText_UsernamePrefix);
    StringExpandPlaceholders(gStringVar2,gBuzzrUsers[userId].username);
    StringAppend(gStringVar3,gStringVar2);
    return gStringVar3;
}

bool32 IsVerified(enum BuzzrUserIds userId)
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
    enum BuzzrZapIds selectedZap = GetZapIdFromPosition(GetCurrentPosition());

    if ((IsSortOrderOldestFirst()) && (!IsTimelinePictureMode()))
        PrintSortModeHeader(BUZZR_WINDOW_HEADER);
    else if (Buzzr_IsCalledFromOverworld())
        PrintZapHeader(GetZapFromOverworld(),windowId, 0);
    else if (IsTimelinePictureMode())
        PrintZapHeader(selectedZap, windowId, 0);
}

static void HandleTimeline(void)
{
    u32 currentPosition = GetCurrentPosition();
    u32 verticalOffset;
    s32 positionIndex = currentPosition - 1;
    enum BuzzrZapIds previousZap, zapIndex;

    ResetVerticalOffset();

    for (u32 numZap = 0; numZap < MAX_NUM_ZAPS_SHOWN; numZap++)
    {
        previousZap = GetZapIdFromPosition(positionIndex);
        SetVerticalOffset(CalculateVerticalOffset(numZap,previousZap));
        verticalOffset = GetVerticalOffset();

        if (CheckIfPrintWillOverflow(verticalOffset))
            break;

        zapIndex = GetZapIdFromPosition(currentPosition + numZap);

        PrintZap(numZap, zapIndex,verticalOffset,MODE_TIMELINE);
        positionIndex++;
    }
}

static bool32 CheckIfPrintWillOverflow(u32 verticalOffset)
{
    return (verticalOffset > TIMELINE_PRINT_HEIGHT);
}

const u32 GetNumContentLines(enum BuzzrZapIds zapId)
{
    const u8 *str = GetContent(zapId);
    StripLineBreaks(gStringVar4);
    u32 windowWidth = ZAP_WINDOW_WIDTH;
    BreakStringNaive(gStringVar4, windowWidth, 99, FONT_BUZZR_ZAP, HIDE_SCROLL_PROMPT);

    u32 count = 1;
    while (*str != EOS)
    {
        if (*str == CHAR_NEWLINE)
            count++;

        str++;
    }

    count = max(count,ZAP_MIN_NUM_LINES);
    return count;
}

static u8 CalculateZapContentTiles(u32 zapId)
{
    u32 lines = GetNumContentLines(zapId) * 2;

    if (lines == 10 || lines == 12 || lines == 14)
        lines--;

    if (lines == 4)
        lines++;

    return lines;
}

static u32 CalculateZapContentHeight(enum BuzzrZapIds zapId)
{
    u32 lines = CalculateZapContentTiles(zapId);
    return (TILE_TO_PIXELS(lines));
}

static u32 CalculateZapHeaderHeight(void)
{
    return (GetFontAttribute(FONT_BUZZR_METRICS,FONTATTR_MAX_LETTER_HEIGHT));
}

static u32 CalculateZapTotalHeight(enum BuzzrZapIds zapId)
{
    return (CalculateZapContentHeight(zapId) + TILE_SIZE_1BPP);
}

static void ResetVerticalOffset(void)
{
    sBuzzrState->verticalOffset = 0;
}

static void SetVerticalOffset(u32 offset)
{
    if (offset > MAX_u8)
        offset = MAX_u8;

    sBuzzrState->verticalOffset = offset;
}

static u32 GetVerticalOffset(void)
{
    return sBuzzrState->verticalOffset;
}

static u32 CalculateVerticalOffset(u32 numZap, u32 previousZap)
{
    u32 offset = GetVerticalOffset();
    if (numZap == 0)
        return offset + ZAP_HEADER_TOP_PADDING;
    else
        return offset + (ZAP_MARGIN_BOTTOM + (CalculateZapTotalHeight(previousZap)));
}

static void PrintSortModeHeader(u8 windowId)
{
    u32 fontId = FONT_BUZZR_BAR;

    AddTextPrinterParameterized4(windowId, fontId,SORT_MODE_TEXT_X_POSITION, 0, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), BuzzrWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW,sText_OldestFirst);
}

static void PrintZap(u32 numZap, enum BuzzrZapIds selectedZap, u32 verticalOffset, u32 typeZap)
{
    if (selectedZap == ZAP_NONE)
        return;

    HandleZapBackground(numZap, selectedZap,verticalOffset);
    HandleZapHeader(selectedZap,verticalOffset, typeZap);
    HandleZapContent(selectedZap,verticalOffset,typeZap);
    HandleZapIcons(selectedZap,verticalOffset, typeZap);
}

static void HandleZapBackground(u32 numZap, u16 selectedZap, u32 verticalOffset)
{
    u32 currentTileIndex = DISPLAY_TILE_WIDTH * (PIXELS_TO_TILES(verticalOffset));

    if (currentTileIndex >= ZAP_LAST_TILE_OFFSET)
        return;

    const u8 *baseGfx = (const u8 *)sZapBackgrounds;

    u32 isTopZap = (numZap == 0);
    const u8 *topZapGfx = (isTopZap) ? baseGfx : (baseGfx + (3 * ZAP_BYTES_PER_ROW));

    CopyToWindowPixelBuffer(BUZZR_WINDOW_HEADER, topZapGfx, ZAP_BYTES_PER_ROW, currentTileIndex);
    currentTileIndex += DISPLAY_TILE_WIDTH;

    const u8 *middleZapGfx = baseGfx + (1 * ZAP_BYTES_PER_ROW);
    u32 midLines = CalculateZapContentTiles(selectedZap);

    for (u32 i = 0; i < midLines; i++)
    {
        if (currentTileIndex >= ZAP_LAST_TILE_OFFSET)
            return;

        CopyToWindowPixelBuffer(BUZZR_WINDOW_HEADER, middleZapGfx, ZAP_BYTES_PER_ROW, currentTileIndex);
        currentTileIndex += DISPLAY_TILE_WIDTH;
    }

    if (currentTileIndex >= ZAP_LAST_TILE_OFFSET)
        return;

    const u8 *bottomZapGfx = (currentTileIndex < (ZAP_LAST_TILE_OFFSET - DISPLAY_TILE_WIDTH)) ? (baseGfx + (2 * ZAP_BYTES_PER_ROW)) : (baseGfx + (4 * ZAP_BYTES_PER_ROW));
    CopyToWindowPixelBuffer(BUZZR_WINDOW_HEADER, bottomZapGfx, ZAP_BYTES_PER_ROW, currentTileIndex);

}

static void HandleZapHeader(enum BuzzrZapIds zapId, u32 verticalOffset, u32 typeZap)
{
    if (Buzzr_IsCalledFromOverworld())
        PrintZap_OverworldHeader(zapId);
    else
        PrintZap_TimelineHeader(zapId, verticalOffset);
}

static u32 UpdateHorizontalHeaderPosition(u8 *zapUsername, u32 fontId)
{
    return (GetStringWidth(fontId,zapUsername,GetFontAttribute(fontId,FONTATTR_LETTER_SPACING)) + ICON_SPACING);
}

static void PrintZap_OverworldHeader(enum BuzzrZapIds zapId)
{
    u32 windowId = gZapOverworldWindowId;
    u32 verticalOffset = TILE_TO_PIXELS(GetWindowAttribute(windowId,WINDOW_TILEMAP_TOP));
    PrintZapHeader(zapId, windowId, verticalOffset);
}

static void PrintZap_TimelineHeader(enum BuzzrZapIds zapId, u32 verticalOffset)
{
    u32 windowId = BUZZR_WINDOW_HEADER;
    PrintZapHeader(zapId, windowId, verticalOffset);
}

static void PrintUsername(u32 windowId, u32 x, u32 y, const u8 *username, u32 fontId)
{
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    fontId = GetFontIdToFit(username,fontId,letterSpacing,ZAP_USERNAME_WIDTH);

    AddTextPrinterParameterized4(windowId, fontId,x, y, letterSpacing, lineSpacing, BuzzrWindowFontColors[GetFontColor()], TEXT_SKIP_DRAW,username);
}

static void PrintPrivateZapRecipient(u32 windowId,u32 x,u32 y,u32 fontId)
{
    PrintHeaderIcons(windowId,sPrivate_Gfx,x,y);
    x += VERIFIED_ICON_WIDTH;
    PrintUsername(windowId,x,y,GetUsername(BUZZR_USER_PLAYER),fontId);
}

static void PrintZapHeader(enum BuzzrZapIds zapId, u32 windowId, u32 verticalOffset)
{
    u32 x = ZAP_HEADER_LEFT_PADDING;
    u32 y = (verticalOffset / 8) * 8;

    if (verticalOffset > 16)
        y += 2;

    u32 fontId = FONT_BUZZR_USER;

    u8 *zapUsername = Alloc(USER_MAX_LENGTH*2);
    enum BuzzrUserIds userId = GetUserId(zapId);

    StringCopy(zapUsername,GetUsername(userId));
    PrintUsername(windowId,x,y,zapUsername,fontId);
    x += UpdateHorizontalHeaderPosition(zapUsername,fontId);
    Free(zapUsername);


    if (IsVerified(userId))
    {
        PrintHeaderIcons(windowId,sVerified_Gfx,x,y);
        x += VERIFIED_ICON_WIDTH;
    }

    if (IsTimelinePictureMode())
        return;

    if (IsPrivate(zapId))
        PrintPrivateZapRecipient(windowId,x,y,fontId);
    else
        HandleZapMetrics(zapId, y);
}

static const u8 GetFontColor(void)
{
    if (IsTimelinePictureMode())
        return FONT_WHITE;

    return FONT_BLACK;
}

static void HandleZapMetrics(u16 selectedZap, u32 verticalOffset)
{
    u32 windowId = BUZZR_WINDOW_HEADER, x = 167, fontId = FONT_BUZZR_METRICS, letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 y = verticalOffset;

    PrintMetricIcons(windowId,x,y);

    if (ShouldZapContentFail(selectedZap))
        StringCopy(gStringVar2,COMPOUND_STRING("-"));
    else
        StringCopy(gStringVar2,GetLikes(selectedZap));

    fontId = GetFontIdToFit(gStringVar2,FONT_BUZZR_METRICS,letterSpacing,ZAP_METRIC_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, 179, y, GetFontAttribute(fontId,FONTATTR_LETTER_SPACING), GetFontAttribute(fontId,FONTATTR_LINE_SPACING), BuzzrWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar2);

    if (ShouldZapContentFail(selectedZap))
        StringCopy(gStringVar2,COMPOUND_STRING("-"));
    else
        StringCopy(gStringVar2,GetDislikes(selectedZap));

    fontId = GetFontIdToFit(gStringVar2,FONT_BUZZR_METRICS,letterSpacing,ZAP_METRIC_WIDTH);
    AddTextPrinterParameterized4(windowId, fontId, 213, y, GetFontAttribute(fontId,FONTATTR_LETTER_SPACING), GetFontAttribute(fontId,FONTATTR_LINE_SPACING), BuzzrWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar2);
}

static void PrintMetricIcons(u32 windowId, u32 x, u32 y)
{
    BlitBitmapToWindow(windowId,sMetrics_Gfx,x,y,44,16);
}

static void HandleZapContent(enum BuzzrZapIds zapId, u32 verticalOffset, u32 typeZap)
{
    if (Buzzr_IsCalledFromOverworld())
        PrintZap_OverworldContent(zapId);
    else
        PrintZap_TimelineContent(zapId, verticalOffset);
}

static void PrintZap_TimelineContent(enum BuzzrZapIds zapId, u32 verticalOffset)
{
    u32 windowId = BUZZR_WINDOW_HEADER;
    u32 y = verticalOffset + CalculateZapHeaderHeight();
    const u8 *fontColor = BuzzrWindowFontColors[FONT_BLACK];

    PrintZapContent(windowId, zapId, fontColor, y);
}

static void PrintZap_OverworldContent(enum BuzzrZapIds zapId)
{
    u32 windowId = gZapOverworldWindowId;
    u32 verticalOffset = TILE_TO_PIXELS(GetWindowAttribute(windowId,WINDOW_TILEMAP_TOP));
    u32 y = CalculateZapHeaderHeight() + verticalOffset;
    const u8 *fontColor = BuzzrWindowFontColors[FONT_BLACK];

    PrintZapContent(windowId, zapId, fontColor, y);
}

static void PrintZapContent(u32 windowId, enum BuzzrZapIds zapId, const u8 *fontColor, u32 y)
{
    u32 x = 12;
    u32 windowWidth = ZAP_WINDOW_WIDTH;
    u32 fontId = FONT_BUZZR_ZAP;

    GetContent(zapId);
    StripLineBreaks(gStringVar4);
    BreakStringNaive(gStringVar4, windowWidth, ZAP_MAX_NUM_LINES, fontId, HIDE_SCROLL_PROMPT);

    AddTextPrinterParameterized4(windowId, FONT_BUZZR_ZAP, x, y, GetFontAttribute(fontId,FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), fontColor, TEXT_SKIP_DRAW,gStringVar4);
}

static void HandleZapIcons(enum BuzzrZapIds zapId, u32 verticalOffset, u32 typeZap)
{
    if (Buzzr_IsCalledFromOverworld())
        PrintZap_OverworldIcons(zapId);
    else
        PrintZap_TimelineIcons(zapId, verticalOffset);
}

static void PrintZap_OverworldIcons(enum BuzzrZapIds zapId)
{
    u32 y = CalculateIndicatorIconHeight(zapId, 0);

    PrintZapIcons(zapId, gZapOverworldWindowId,ZAP_INDICATOR_X_POSITION,y, MODE_OVERWORLD);
}

static void PrintZap_TimelineIcons(enum BuzzrZapIds zapId, u32 verticalOffset)
{
    u32 y = CalculateIndicatorIconHeight(zapId, verticalOffset);
    PrintZapIcons(zapId, BUZZR_WINDOW_HEADER,ZAP_INDICATOR_X_POSITION,y, MODE_TIMELINE);
}

static u32 CalculateIndicatorIconHeight(enum BuzzrZapIds zapId, u32 verticalOffset)
{
    verticalOffset = (verticalOffset / 8) * 8;
    u32 height = CalculateZapContentHeight(zapId);
    return (verticalOffset + height - 2);
}

static bool32 CheckZapPrintUnreadIcon(u32 windowId, u32 zapId, u32 x, u32 y, u32 typeZap)
{
    if (Buzzr_IsCalledFromOverworld())
        return FALSE;

    if (Buzzr_IsZapRead(zapId))
        return FALSE;

    PrintHeaderIcons(windowId, sUnread_Gfx, x, y);
    return TRUE;
}

static void CheckZapPrintPictureIcon(u32 windowId,enum BuzzrZapIds zapId,u32 x, u32 y)
{
    if (GetPictureTiles(zapId))
        PrintHeaderIcons(windowId, sPicture_Gfx, x, y);
}

static void PrintZapIcons(u32 zapId, u32 windowId, u32 x, u32 y, u32 typeZap)
{
    if (CheckZapPrintUnreadIcon(windowId, zapId, x, y, typeZap))
        x = x - (ICON_SPACING + ZAP_ICON_WIDTH);

    CheckZapPrintPictureIcon(windowId, zapId, x, y);
}

static void PrintMenuHeaderAndTimeline(void)
{
    FillWindowPixelBuffer(BUZZR_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    HandleMenuHeader();
    HandleTimeline();
    PrintHelpBar();

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
    enum BuzzrZapIds currentZapId = GetZapIdFromPosition(GetCurrentPosition());
    bool32 hasPic = (GetPictureTiles(currentZapId) != NULL);
    bool32 isPictureMode = IsTimelinePictureMode();
    bool32 numZaps = (GetNumTimelineZaps() > 1);

    StringCopy(gStringVar4,COMPOUND_STRING(""));

    if (!isPictureMode)
        StringAppend(gStringVar4,COMPOUND_STRING("{DPAD_LEFTRIGHT} Filter "));

    if (!isPictureMode && hasPic)
        StringAppend(gStringVar4,COMPOUND_STRING("{A_BUTTON} Expand "));

    StringAppend(gStringVar4,COMPOUND_STRING("{B_BUTTON} Return "));

    if (!isPictureMode && numZaps)
        StringAppend(gStringVar4,COMPOUND_STRING("{START_BUTTON} Sort "));

    return gStringVar4;
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
    enum BuzzrZapIds zapId = GetZapIdFromPosition(GetCurrentPosition());
    if (Buzzr_IsCalledFromOverworld())
        zapId = overworldZap;

    if(IsTimelinePictureMode())
        return GetPictureTiles(zapId);
    else
        return sLogomarkAllTiles;
}

static const u16 *GetRelevantTilemap(void)
{
    enum BuzzrZapIds zapId = GetZapIdFromPosition(GetCurrentPosition());
    if (Buzzr_IsCalledFromOverworld())
        zapId = overworldZap;

    if(IsTimelinePictureMode())
        return gZaps[zapId].tilemap;
    else
        return sLogomarkAllTilemap;
}

static const u16 *GetRelevantPalette(void)
{
    enum BuzzrZapIds zapId = GetZapIdFromPosition(GetCurrentPosition());
    if (Buzzr_IsCalledFromOverworld())
        zapId = overworldZap;

    if(IsTimelinePictureMode())
        return gZaps[zapId].pal;
    else
        return sLogomarkAllPalette;
}

static void LoadBackground(void)
{
    const u32 *sTiles = GetRelevantTiles();
    const u16 *sTilemap = GetRelevantTilemap();
    const u16 *sPalette = GetRelevantPalette();

    DecompressAndLoadBgGfxUsingHeap(BG1_BACKGROUND_ZAPS, sTiles, 0, 0, 0);
    DecompressDataWithHeaderWram((void*)sTilemap,sBgTilemapBuffer[BG1_BACKGROUND_ZAPS]);
    LoadPalette(sPalette, BG_PLTT_ID(QUEST_OVERWORLD_PALETTE_INTERFACE_ID), PLTT_SIZE_4BPP);
}

static void ChangeBackground(void)
{
    ResetAllBgsCoordinates();
    //AllocZeroTilemapBuffers();
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
    for(j = 0; j < ZAP_COUNT; j++)
        AddZapToTimeline(j, ZAP_NONE);
}

static bool32 DoesZapMatchFilter(u32 zapId)
{
    enum BuzzrUserIds userId = GetUserId(zapId);

    switch (GetFilter())
    {
        case TIMELINE_FILTER_ALL:     return (zapId != ZAP_NONE);
        case TIMELINE_FILTER_UNREAD:  return (!Buzzr_IsZapRead(zapId));
        case TIMELINE_FILTER_QUEST:   return (GetQuest(zapId) != 0);
        case TIMELINE_FILTER_PLAYER:  return (userId == BUZZR_USER_PLAYER);
        case TIMELINE_FILTER_VERIFIED:return (IsVerified(userId));
        case TIMELINE_FILTER_PRIVATE: return (IsPrivate(zapId));
    }
    return FALSE;
}

static void SetNumTimelineZaps(u32 num)
{
    sBuzzrLists->numTimelineZaps = num;
}

static enum BuzzrZapIds GetZapIdFromSaveblockPosition(u32 index)
{
    return gSaveBlock2Ptr->buzzr.Order[index];
}

static bool32 IfZapIdInSaveBlockIsZero(u32 index)
{
    return (GetZapIdFromSaveblockPosition(index) == ZAP_NONE);
}

static void LoadTimelineOrderFromSaveBlock(void)
{
    u32 i = 0, numZaps = 0;

    for (i = 0; i < ZAP_COUNT; i++)
    {
        AddZapToTimeline(i,GetZapIdFromSaveblockPosition(i));

        if(!IfZapIdInSaveBlockIsZero(i))
            numZaps++;
    }

    SetNumTimelineZaps(numZaps);
}

static void FilterTimeline(void)
{
    u32 timelineIndex = 0;
    for (u32 orderIndex = 0; orderIndex < ZAP_COUNT; orderIndex++)
    {
        enum BuzzrZapIds selectedZap = GetZapIdFromSaveblockPosition(orderIndex);

        if (selectedZap == ZAP_NONE)
            break;

        if ((DoesZapMatchFilter(selectedZap)))
            AddZapToTimeline(timelineIndex++,selectedZap);
    }

    SetNumTimelineZaps(timelineIndex);
}

static void ReverseTimelineOrder(u32 numTimelineZaps, u32 index)
{
    u32 tempIndex = (numTimelineZaps - index - 1);
    enum BuzzrZapIds temp = GetZapIdFromPosition(index);

    AddZapToTimeline(index,GetZapIdFromPosition(tempIndex));
    AddZapToTimeline(tempIndex,temp);
}

static void SortTimeline(void)
{
    u32 i;
    u32 numTimelineZaps = GetNumTimelineZaps();

    if (IsSortOrderOldestFirst())
        return;

    for (i = 0; i < numTimelineZaps / 2; i++)
        ReverseTimelineOrder(numTimelineZaps,i);
}

static void AddZapToTimeline(u32 index, u32 zapId)
{
    AddZapToBitmap(zapId);
    sBuzzrLists->Timeline[index] = zapId;
}

static void AddNewZapsToTimeline(void)
{
    u32 numNewZaps = 0;
    u32 newZapsArray[ZAP_COUNT];

    for (u32 zapIndex = (ZAP_NONE + 1); zapIndex < ZAP_COUNT; zapIndex++)
    {
        if (gZaps[zapIndex].content == NULL)
            continue;

        if (!CheckIfZapCanBeAdded(zapIndex))
            continue;

        newZapsArray[numNewZaps++] = zapIndex;
    }

    for (u32 zapIndex = 0; zapIndex < numNewZaps; zapIndex++)
        AddZapToTimeline((GetNumTimelineZaps() + zapIndex),newZapsArray[zapIndex]);
}

static bool32 CheckIfZapCanBeAdded(u32 zapIndex)
{
    if (IsZapInTimeline(zapIndex))
        return FALSE;

    return (IsZapCriteriaMet(zapIndex) || Buzzr_IsZapRead(zapIndex));
}

static void AddZapToBitmap(u32 zapId)
{
    s32 index = zapId / 32;
    s32 bit = zapId % 32;
    sBuzzrLists->ZapBitmap[index] |= (1u << bit);
}

static bool32 IsZapInTimeline(u32 zapId)
{
    s32 index = zapId / 32;
    s32 bit = zapId % 32;
    return (sBuzzrLists->ZapBitmap[index] & (1u << bit)) != 0;
}

static bool32 IsZapCriteriaMet(enum BuzzrZapIds zapId)
{
    void (*zapFunction)(void) = GetCriteria(zapId);

    if (zapFunction == NULL)
        return FALSE;
    else
        zapFunction();

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
    for(u32 j = 0; j < ZAP_COUNT; j++)
        gSaveBlock2Ptr->buzzr.Order[j] = GetZapIdFromPosition(j);
}

void Buzzr_MarkZapAsRead(enum BuzzrZapIds zapId)
{
    gSaveBlock2Ptr->buzzr.IsRead[zapId] = TRUE;
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
    for (i = 0; i < ZAP_COUNT ; i++)
    {
        gSaveBlock2Ptr->buzzr.IsRead[i] = FALSE;
        gSaveBlock2Ptr->buzzr.Order[i] = 0;
    }
}

void Buzzr_ShowZapOverworld(enum BuzzrZapIds zapId)
{
    if (zapId == ZAP_NONE)
        return;

    SetZapFromOverworld(zapId);
    gZapOverworldWindowId = AddWindow(&sBuzzr_OverworldWindowTemplate);

    LoadPalette(sLogomarkAllPalette, QUEST_OVERWORLD_PALETTE_INTERFACE_SLOT, PLTT_SIZE_4BPP);

    PrintZap(0, zapId, 0, MODE_OVERWORLD);

    PutWindowTilemap(gZapOverworldWindowId);
    CopyWindowToVram(gZapOverworldWindowId, COPYWIN_FULL);
}

void Buzzr_HideZapOverworld(void)
{
    ClearToTransparentAndRemoveWindow(gZapOverworldWindowId);
    ClearZapFromOverworld();
    gZapOverworldWindowId = WINDOW_NONE;
}

static void SetZapFromOverworld(enum BuzzrZapIds zapId)
{
    overworldZap = zapId;
}

static void ClearZapFromOverworld(void)
{
    overworldZap = ZAP_NONE;
}

static u32 GetZapFromOverworld(void)
{
    return overworldZap;
}

void Buzzr_ShowPicOverworld(enum BuzzrZapIds zapId)
{
    SetZapFromOverworld(zapId);
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
    return (overworldZap != ZAP_NONE);
}

static void Buzzr_SetSpriteId(enum BuzzrSpriteIDs spriteType, u32 spriteId)
{
    sBuzzrState->spriteIds[spriteType] = spriteId;
}

static u32 Buzzr_GetSpriteId(enum BuzzrSpriteIDs spriteType)
{
    return sBuzzrState->spriteIds[spriteType];
}

static const struct OamData sBuzzrHeader_OamData =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
};

static const struct SpriteTemplate sBuzzrHeaderSpriteTemplate =
{
    .tileTag = BUZZR_SPRITE_HEADER_TAG,
    .paletteTag = BUZZR_PALTAG_SPRITES,
    .oam = &sBuzzrHeader_OamData,
    .anims = (const union AnimCmd *const[])
    {
        [BUZZR_SPRITE_FILTER_ALL] = (const union AnimCmd[]){ ANIMCMD_FRAME(BUZZR_HEADER_FRAME(ALL), 1), ANIMCMD_END },
        [BUZZR_SPRITE_FILTER_UNREAD] = (const union AnimCmd[]){ ANIMCMD_FRAME(BUZZR_HEADER_FRAME(UNREAD), 1), ANIMCMD_END },
        [BUZZR_SPRITE_FILTER_QUEST] = (const union AnimCmd[]){ ANIMCMD_FRAME(BUZZR_HEADER_FRAME(QUEST), 1), ANIMCMD_END },
        [BUZZR_SPRITE_FILTER_PLAYER] = (const union AnimCmd[]){ ANIMCMD_FRAME(BUZZR_HEADER_FRAME(PLAYER), 1), ANIMCMD_END },
        [BUZZR_SPRITE_FILTER_VERIFIED] = (const union AnimCmd[]){ ANIMCMD_FRAME(BUZZR_HEADER_FRAME(VERIFIED), 1), ANIMCMD_END },
        [BUZZR_SPRITE_FILTER_PRIVATE] = (const union AnimCmd[]){ ANIMCMD_FRAME(BUZZR_HEADER_FRAME(PRIVATE), 1), ANIMCMD_END },
        [BUZZR_SPRITE_FILTER_CURSOR] = (const union AnimCmd[]){ ANIMCMD_FRAME(BUZZR_HEADER_FRAME(CURSOR), 1), ANIMCMD_END },
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static u32 Buzzr_CalculateHeaderIconXPosition(u32 index)
{
    return (155 + (index * 15));
}

static void SpriteCallback_FilterCursor(struct Sprite *sprite)
{
    u32 filter = GetFilter();
    sprite->x = Buzzr_CalculateHeaderIconXPosition(filter);
    sprite->invisible = IsTimelinePictureMode();
}

static void SpriteCallback_HeaderIconCallback(struct Sprite *sprite)
{
    sprite->invisible = IsTimelinePictureMode();
}

static void Buzzr_PrintHeaderIcons(void)
{
    const struct SpriteTemplate *template = &sBuzzrHeaderSpriteTemplate;
    u32 x = Buzzr_CalculateHeaderIconXPosition(GetFilter());
    u32 y = 7;
    u32 spriteId = CreateSprite(template, x, y, 1);
    struct Sprite *sprite = &gSprites[spriteId];
    StartSpriteAnim(sprite, BUZZR_SPRITE_FILTER_CURSOR);
    Buzzr_SetSpriteId(BUZZR_SPRITE_FILTER_CURSOR,spriteId);
    gSprites[spriteId].callback = SpriteCallback_FilterCursor;

    for (u32 spriteIndex = 0; spriteIndex < BUZZR_SPRITE_FILTER_CURSOR ; spriteIndex++)
    {
        spriteId = CreateSprite(template, Buzzr_CalculateHeaderIconXPosition(spriteIndex), y, 1);
        Buzzr_SetSpriteId(spriteIndex,spriteId);
        sprite = &gSprites[spriteId];
        StartSpriteAnim(sprite, spriteIndex);
        gSprites[spriteId].callback = SpriteCallback_HeaderIconCallback;
    }
}

static void Buzzr_TryStartQuestFromZap(u32 zapId, u8 taskId)
{
    enum QuestIdList quest = Buzzr_ReturnUnstartedQuestFromZap(zapId);

    if (quest == QUEST_NONE)
    {
        gTasks[taskId].func = Task_MainInput;
        return;
    }

    QuestMenu_GetSetQuestState(quest,FLAG_SET_UNLOCKED);
    QuestMenu_GetSetQuestState(quest,FLAG_SET_ACTIVE);

    gTasks[taskId].func = Task_Buzzr_StartQuestAnimation;
}

static enum QuestIdList Buzzr_ReturnUnstartedQuestFromZap(u32 zapId)
{
    enum QuestIdList questId = GetQuest(zapId);

    if (questId == 0)
        return QUEST_NONE;

    if (IsQuestRewardState(questId))
        return QUEST_NONE;

    if (IsQuestCompletedState(questId))
        return QUEST_NONE;

    if (IsQuestActiveState(questId))
        return QUEST_NONE;

    return questId;
}

static void Task_Buzzr_StartQuestAnimation(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    u32 spriteId = Buzzr_GetSpriteId(BUZZR_SPRITE_QUEST);
    struct Sprite *sprite = &gSprites[spriteId];

    if (JOY_NEW(JOY_EXCL_DPAD))
    {
        sprite->x = BUZZR_QUEST_SPRITE_INITAL_POSITION;
        sprite->invisible = TRUE;
        gTasks[taskId].func = Task_MainInput;
        return;
    }

    switch (data[0])
    {
        case BUZZR_QUEST_SPRITE_STATE_SLIDE_IN:
            if (!FlagGet(FLAG_QUEST_FANFARE))
                PlayQuestFanfare();
            sprite->invisible = FALSE;
            sprite->x += BUZZR_QUEST_SPRITE_MOVEMENT_SPEED;

            if (sprite->x < 0)
                return;

            sprite->x = 0;
            data[0] = BUZZR_QUEST_SPRITE_STATE_WAIT;
            data[1] = 0;
            break;
        case BUZZR_QUEST_SPRITE_STATE_WAIT:
            if (++data[1] < BUZZR_QUESTS_SPRITE_TIMER)
                return;

            data[0] = BUZZR_QUEST_SPRITE_STATE_SLIDE_OUT;
            break;
        case BUZZR_QUEST_SPRITE_STATE_SLIDE_OUT:
            sprite->x -= BUZZR_QUEST_SPRITE_MOVEMENT_SPEED;

            if (sprite->x > BUZZR_QUEST_SPRITE_INITAL_POSITION)
                return;

            sprite->x = BUZZR_QUEST_SPRITE_INITAL_POSITION;
            sprite->invisible = TRUE;
            gTasks[taskId].func = Task_MainInput;
            break;
    }
}

static void CreateQuestSprite(void)
{
    u32 SpriteTag = BUZZR_SPRITE_QUEST_TAG;
    s32 x = BUZZR_QUEST_SPRITE_INITAL_POSITION, y = CalculateCursorHeight();

    struct SpriteSheet sSpriteSheet_Quest =
    {
        (const u16[])INCGFX_U16("graphics/ui_menus/buzzr/quest.png", ".4bpp"),
        TILE_OFFSET_4BPP(32), SpriteTag,
    };
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_QuestImage;

    LoadSpriteSheet(&sSpriteSheet_Quest);
    u32 spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);
    Buzzr_SetSpriteId(BUZZR_SPRITE_QUEST,spriteId);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(64x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(64x32);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].invisible = TRUE;
}

static void SpriteCallback_QuestImage(struct Sprite *sprite)
{
    sprite->y = CalculateCursorHeight();
}

static void Buzzr_ExpandStrings(enum BuzzrZapIds zapId)
{
    switch (zapId)
    {
        default:
            return;
        case ZAP_STORY_SUMMON:
        case ZAP_SUMMON_RESPONSE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_PIOCA_BRIDGE),MAP_NUM(MAP_PIOCA_BRIDGE))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_NPC_FRESHWATER:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(QUEST_FRESHWATER_EVOLUTION_MAP),MAP_NUM(QUEST_FRESHWATER_EVOLUTION_MAP))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_NPC_SMOOTHIE_COMPLETE:
            StringCopy(gStringVar1,GetItemName(ITEM_FRESH_START_MOCHI));
            break;
        case ZAP_QUEST_NPC_SMOOTHIE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CHASILLA_ICE_CREAM_SHOP),MAP_NUM(MAP_CHASILLA_ICE_CREAM_SHOP))->regionMapSectionId,0);
            StringCopy(gStringVar3,GetItemName(QUEST_SMOOTHIE_CRAFTING_PRODUCT));
            Quest_SmoothieCrafting_BufferRecipe();
            break;
        case ZAP_QUEST_NPC_DEOXYS:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_DEOXYS));
            break;
        case ZAP_GYM_CHASILLA_BADGE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CHASILLA),MAP_NUM(MAP_CHASILLA))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_NPC_RABIES_COMPLETE:
        case ZAP_QUEST_NPC_RABIES:
            StringCopy(gStringVar1,GetSpeciesName(QUEST_RABIES_OUTBREAK_SPECIES));
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(QUEST_RABIES_OUTBREAK_MAP),MAP_NUM(QUEST_RABIES_OUTBREAK_MAP))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_NPC_TUNNELS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HODOUTUNNELS),MAP_NUM(MAP_QUEST_HODOUTUNNELS))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_NPC_PSYOP:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_SINISTEA_PHONY));
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_PSYOP),MAP_NUM(MAP_QUEST_PSYOP))->regionMapSectionId,0);
            StringCopy(gStringVar3,GetItemName(ITEM_QUEST_PSYOP_TARGET_BALL));
            break;
        case ZAP_QUEST_NPC_PSYOP_ACTIVE_A:
        case ZAP_QUEST_NPC_PSYOP_ACTIVE_B:
            StringCopy(gStringVar2,GetAbilityName(ABILITY_HUSTLE));
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_SINISTEA_PHONY));
            break;
        case ZAP_QUEST_NPC_PSYOP_ACTIVE_C:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_DEINO));
            StringCopy(gStringVar2,GetAbilityName(ABILITY_HUSTLE));
            break;
        case ZAP_QUEST_NPC_PSYOP_COMPLETE:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_SINISTEA_PHONY));
            CopyItemNameHandlePlural(ITEM_IRON,gStringVar2,2);
            CopyItemNameHandlePlural(ITEM_ZINC,gStringVar3,3);
            break;
        case ZAP_QUEST_NPC_STONE:
            ConvertIntToDecimalStringN(gStringVar1,NUM_QUEST_BETWEENASTONEANDAHARDPLACE_TROLLEY_RIDES,STR_CONV_MODE_LEFT_ALIGN,2);
            break;
        case ZAP_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_2:
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_REVAVROOM));
            break;
        case ZAP_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_4:
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_BETWEENASTONEANDAHARDPLACE),MAP_NUM(MAP_QUEST_BETWEENASTONEANDAHARDPLACE))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_RESTAURANTEXPANSION1_2:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_RESTAURANTEXPANSION1_FLOWERS),MAP_NUM(MAP_QUEST_RESTAURANTEXPANSION1_FLOWERS))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_DIGGINGUPADAORASDIRT_2:
        case ZAP_QUEST_DIGGINGUPADAORASDIRT_3:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CURENO_PORT),MAP_NUM(MAP_CURENO_PORT))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_RETURNDOLL:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_RETURNDOLL_TARGET),MAP_NUM(MAP_QUEST_RETURNDOLL_TARGET))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_RESTOREESPULEEGYM_ACTIVE:
        case ZAP_QUEST_RESTOREESPULEEGYM_COMPLETE_BAIYA:
        case ZAP_QUEST_RESTOREESPULEEGYM_COMPLETE_IMELDA:
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_RESTOREESPULEEGYM_ORIGIN),MAP_NUM(MAP_QUEST_RESTOREESPULEEGYM_ORIGIN))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_RESTOREZENZUISLAND_COMPLETE_DOYLE:
        case ZAP_QUEST_RESTOREZENZUISLAND_COMPLETE_BAIYA:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_RESTOREZENZUGYM_ORIGIN),MAP_NUM(MAP_QUEST_RESTOREZENZUGYM_ORIGIN))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_RESTOREHODOUCITY_ASSIGNED_RESTORATION:
        case ZAP_QUEST_RESTOREHODOUCITY_FOUND_LEADER:
        case ZAP_QUEST_RESTOREHODOUCITY_COMPLETE_RANDOM:
        case ZAP_QUEST_RESTOREHODOUCITY_COMPLETE_JOHNNY:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_RESTOREHODOUGYM_ORIGIN),MAP_NUM(MAP_QUEST_RESTOREHODOUGYM_ORIGIN))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_IMPROVBATTLING_ACTIVE:
        case ZAP_QUEST_IMPROVBATTLING_COMPLETE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_IMPROVBATTLING),MAP_NUM(MAP_QUEST_IMPROVBATTLING))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_HANG20_WARNING:
        case ZAP_QUEST_HANG20_ROCKY_COASTS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HANG20),MAP_NUM(MAP_QUEST_HANG20))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_CULTURAL_PURITY_AD:
        case ZAP_QUEST_CULTURAL_PURITY_AD2:
        case ZAP_QUEST_CULTURAL_PURITY_AD3:
        case ZAP_QUEST_CULTURAL_PURITY_READYA:
        case ZAP_QUEST_CULTURAL_PURITY_READYB:
        case ZAP_QUEST_CULTURAL_PURITY_READYC:
        case ZAP_QUEST_CULTURAL_PURITY_READYD:
        case ZAP_QUEST_CULTURAL_PURITY_READYD_CHAMPION:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_QUEST_CULTURAL_PURITY_MASCOT));
        case ZAP_QUEST_HYBRID_CULTURE_LISTICLE_1:
        case ZAP_QUEST_HYBRID_CULTURE_SHINZO_1:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_1),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_1))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_HYBRID_CULTURE_SHINZO_2:
        case ZAP_QUEST_HYBRID_CULTURE_LISTICLE_2:
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_QUEST_HYBRID_CULTURE));
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_2),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_2))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_HYBRID_CULTURE_SHINZO_3:
        case ZAP_QUEST_HYBRID_CULTURE_LISTICLE_3:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_3),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_3))->regionMapSectionId,0);
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_QUEST_HYBRID_CULTURE));
            break;
        case ZAP_QUEST_HYBRID_CULTURE_SHINZO_4:
        case ZAP_QUEST_HYBRID_CULTURE_LISTICLE_4:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_4),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_4))->regionMapSectionId,0);
            break;
        case ZAP_QUEST_HYBRID_CULTURE_SHINZO_5:
        case ZAP_QUEST_HYBRID_CULTURE_LISTICLE_5:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_5),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_5))->regionMapSectionId,0);
            break;
        case ZAP_STORY_STRIKE_BEGIN_1:
        case ZAP_STORY_STRIKE_BEGIN_2:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_SHARPRISE_STADIUM_CONSTRUCTION),MAP_NUM(MAP_SHARPRISE_STADIUM_CONSTRUCTION))->regionMapSectionId,0);
            break;
        case ZAP_STORY_WAREHOUSE_RAVE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CURENO_PORT),MAP_NUM(MAP_CURENO_PORT))->regionMapSectionId,0);
            break;
        case ZAP_ADAORA_MIDRIFF:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_TORA_TOWN),MAP_NUM(MAP_TORA_TOWN))->regionMapSectionId,0);
            break;
        case ZAP_ADAORA_ZODIAC:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_CRUSTLE));
            break;
        case ZAP_NEEDLES_REVIEW:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_MERMEREZA_CITY),MAP_NUM(MAP_MERMEREZA_CITY))->regionMapSectionId,0);
            break;
        case ZAP_BAIYA_RUDE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_ROUTE7),MAP_NUM(MAP_ROUTE7))->regionMapSectionId,0);
            break;
        case ZAP_BAIYA_MAINCHARACTER:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_PINTILLON_HOUSE_EXTERIOR),MAP_NUM(MAP_PINTILLON_HOUSE_EXTERIOR))->regionMapSectionId,0);
            break;
        case ZAP_MEGACROSS_DEFENSE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_SHARPRISE_STADIUM_ARENA),MAP_NUM(MAP_SHARPRISE_STADIUM_ARENA))->regionMapSectionId,0);
            break;
        case ZAP_BD_MULTITASK:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_IRISINA_TOWN),MAP_NUM(MAP_IRISINA_TOWN))->regionMapSectionId,0);
            break;
        case ZAP_CAPHE_MORRIS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CAPHE_CITY),MAP_NUM(MAP_CAPHE_CITY))->regionMapSectionId,0);
            break;
        case ZAP_YOBU_PIOCA:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_FORT_YOBU),MAP_NUM(MAP_FORT_YOBU))->regionMapSectionId,0);
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_PIOCA_BRIDGE),MAP_NUM(MAP_PIOCA_BRIDGE))->regionMapSectionId,0);
            break;
        case ZAP_IRISINA_QUEER:
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_IRISINA_TOWN),MAP_NUM(MAP_IRISINA_TOWN))->regionMapSectionId,0);
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CAPHE_CITY),MAP_NUM(MAP_CAPHE_CITY))->regionMapSectionId,0);
            break;
        case ZAP_TIRABUDIN_ZINES:
        case ZAP_TIRABUDIN_ZINES2:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_TIRABUDIN_PLACE),MAP_NUM(MAP_TIRABUDIN_PLACE))->regionMapSectionId,0);
            break;
        case ZAP_TORA_MOCHI:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_TORA_TOWN),MAP_NUM(MAP_TORA_TOWN))->regionMapSectionId,0);
            break;
        case ZAP_NEW_TRAINERS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CUCONU_TOWN),MAP_NUM(MAP_CUCONU_TOWN))->regionMapSectionId,0);
            break;
        case ZAP_BAIYA_CHEWING:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_MERMEREZA_CITY),MAP_NUM(MAP_MERMEREZA_CITY))->regionMapSectionId,0);
            break;
        case ZAP_CAPHE_QUEUE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CAPHE_CITY),MAP_NUM(MAP_CAPHE_CITY))->regionMapSectionId,0);
            break;
        case ZAP_CHARLOTTE_PRODIGY:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_SHARPRISE_SPIRE_TOP),MAP_NUM(MAP_SHARPRISE_SPIRE_TOP))->regionMapSectionId,0);
            break;
        case ZAP_POPIDORA_FREAKS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_POPIDORA_PIER),MAP_NUM(MAP_POPIDORA_PIER))->regionMapSectionId,0);
            break;
        case ZAP_CURENO_TIDE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CURENO_PORT),MAP_NUM(MAP_CURENO_PORT))->regionMapSectionId,0);
            break;
        case ZAP_GOLD_BREEDING:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CHASILLA),MAP_NUM(MAP_CHASILLA))->regionMapSectionId,0);
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_SLOWPOKE));
            break;
        case ZAP_EARTHQUAKE_PANIC:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_POLITOED));
            break;
        case ZAP_LONG_BATTLE:
            StringCopy(gStringVar1,GetMoveName(MOVE_HYPNOSIS));
            break;
        case ZAP_KEIYING_YOBU:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_FORT_YOBU),MAP_NUM(MAP_FORT_YOBU))->regionMapSectionId,0);
            break;
        case ZAP_TALA_FIRED:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_HOUNDOOM));
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_TIRABUDIN_PLACE),MAP_NUM(MAP_TIRABUDIN_PLACE))->regionMapSectionId,0);
            break;
        case ZAP_BAIYA_TALA:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_TIRABUDIN_PLACE),MAP_NUM(MAP_TIRABUDIN_PLACE))->regionMapSectionId,0);
            break;
        case ZAP_RAID_PSA:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_NAVAL_BASE),MAP_NUM(MAP_NAVAL_BASE))->regionMapSectionId,0);
            break;
        case ZAP_CHAMPIONSHIP_START:
            StringCopy(gStringVar1,GetMoveName(MOVE_SHOCK_WAVE));
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_CHANDELURE));
            break;
        case ZAP_SHARPRISE_FAN:
            StringCopy(gStringVar1,GetMoveName(MOVE_SALT_CURE));
            break;
        case ZAP_PLAYER_BAIYA:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_ZENZU_ISLAND),MAP_NUM(MAP_ZENZU_ISLAND))->regionMapSectionId,0);
            break;
        case ZAP_HODOU_JOHNNY:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_HODOU_CITY),MAP_NUM(MAP_HODOU_CITY))->regionMapSectionId,0);
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_CLEFABLE));
            break;
        case ZAP_ZENZU_MOVING:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_ZENZU_ISLAND),MAP_NUM(MAP_ZENZU_ISLAND))->regionMapSectionId,0);
            break;
        case ZAP_ESPULEE_SHELL:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_ESPULEE_OUTSKIRTS),MAP_NUM(MAP_ESPULEE_OUTSKIRTS))->regionMapSectionId,0);
            break;
        case ZAP_ARANTRAZ_UNSETTLING:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_ARANTRAZ),MAP_NUM(MAP_ARANTRAZ))->regionMapSectionId,0);
            break;
        case ZAP_HODOU_FIGHT:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_HODOU_CITY),MAP_NUM(MAP_HODOU_CITY))->regionMapSectionId,0);
            break;
        case ZAP_PLAYER_RANCID:
        case ZAP_SHARPRISE_FAR:
            StringCopy(gStringVar1,GetItemName(ITEM_POKE_BALL));
            break;
        case ZAP_TORGEOT_CHILLS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_TORGEOT_CLIMB),MAP_NUM(MAP_TORGEOT_CLIMB))->regionMapSectionId,0);
            break;
        case ZAP_IRISINA_BALL:
            StringCopy(gStringVar1,GetItemName(ITEM_POKE_BALL));
            CopyItemNameHandlePlural(ITEM_DUSK_BALL,gStringVar2,3);
            break;
        case ZAP_HALAI_NIGHTMARE:
        case ZAP_HALAI_RECONSTRUCTION:
        case ZAP_HALAI_AID:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_HALAI_ISLAND),MAP_NUM(MAP_HALAI_ISLAND))->regionMapSectionId,0);
            break;
        case ZAP_FIRST_PROTEST:
        case ZAP_HUGE_TURNOUT:
        case ZAP_CHAMP_STORMED:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_SHARPRISE_SPIRE_TOP),MAP_NUM(MAP_SHARPRISE_SPIRE_TOP))->regionMapSectionId,0);
            break;
        case ZAP_INKAY_HYPNOSIS:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_INKAY));
            StringCopy(gStringVar2,GetMoveName(MOVE_HYPNOSIS));
            break;
        case ZAP_ALT_GIRL:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_IRISINA_TOWN),MAP_NUM(MAP_IRISINA_TOWN))->regionMapSectionId,0);
            break;
        case ZAP_CURENO_ANKLE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CURENO_PORT),MAP_NUM(MAP_CURENO_PORT))->regionMapSectionId,0);
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_MURKROW));
            break;
        case ZAP_KALOS_TOURIST:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_GLAVEZ_HILL),MAP_NUM(MAP_GLAVEZ_HILL))->regionMapSectionId,0);
            break;
        case ZAP_BITE_MEGA:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CAPHE_CITY),MAP_NUM(MAP_CAPHE_CITY))->regionMapSectionId,0);
            break;
        case ZAP_BAD_EARTHQUAKE:
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_TYRANITAR));
            break;
        case ZAP_CHASILLA_EARTHQUAKE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CHASILLA),MAP_NUM(MAP_CHASILLA))->regionMapSectionId,0);
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_HALAI_ISLAND),MAP_NUM(MAP_HALAI_ISLAND))->regionMapSectionId,0);
            break;
        case ZAP_PIOCA_FIREWORKS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_PIOCA_BRIDGE),MAP_NUM(MAP_PIOCA_BRIDGE))->regionMapSectionId,0);
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_MAGMORTAR));
            break;
        case ZAP_MIME_WALLS:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_LANJING_TUNNEL),MAP_NUM(MAP_LANJING_TUNNEL))->regionMapSectionId,0);
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_MIME_JR));
            break;
        case ZAP_CAPHE_ESPULEE:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CAPHE_CITY),MAP_NUM(MAP_CAPHE_CITY))->regionMapSectionId,0);
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_ESPULEE_OUTSKIRTS),MAP_NUM(MAP_ESPULEE_OUTSKIRTS))->regionMapSectionId,0);
            break;
        case ZAP_VICTORY_TACO:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_MERMEREZA_CITY),MAP_NUM(MAP_MERMEREZA_CITY))->regionMapSectionId,0);
            break;
        case ZAP_SHEER_COLD:
            StringCopy(gStringVar1,GetMoveName(MOVE_SHEER_COLD));
            break;
        case ZAP_BURN_HEAL:
            CopyItemNameHandlePlural(ITEM_BURN_HEAL,gStringVar1,3);
            break;
        case ZAP_PRESTO_CREEPY:
            CopyItemNameHandlePlural(ITEM_HYPER_POTION,gStringVar1,1);
            GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CRESALTA_VISTA),MAP_NUM(MAP_CRESALTA_VISTA))->regionMapSectionId,0);
            break;
        case ZAP_POMEG_SPICY:
            CopyItemNameHandlePlural(ITEM_LIECHI_BERRY,gStringVar1,1);
            break;
        case ZAP_DRILBUR_EVOLVE:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_DRILBUR));
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_EXCADRILL));
            break;
        case ZAP_PINTILLION_SPEWPA:
            GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_PINTILLON_HOUSE_EXTERIOR),MAP_NUM(MAP_PINTILLON_HOUSE_EXTERIOR))->regionMapSectionId,0);
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_SPEWPA));
            break;
        case ZAP_BATON_PASS:
            StringCopy(gStringVar1,GetMoveName(MOVE_BATON_PASS));
            break;
        case ZAP_CLUTCH_PRIORITY:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_LINOONE));
            StringCopy(gStringVar2,GetMoveName(MOVE_EXTREME_SPEED));
            StringCopy(gStringVar3,GetMoveName(MOVE_FAKE_OUT));
            break;
        case ZAP_DUSK_STONE:
            StringCopy(gStringVar1,GetSpeciesName(SPECIES_DOUBLADE));
            StringCopy(gStringVar2,GetSpeciesName(SPECIES_AEGISLASH));
            StringCopy(gStringVar3,GetItemName(ITEM_DUSK_STONE));
            break;
    }
}
