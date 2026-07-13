#include "global.h"
#include "international_string_util.h"
#include "blit.h"
#include "bg.h"
#include "decompress.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "malloc.h"
#include "event_data.h"
#include "string_util.h"
#include "constants/nameplate.h"
#include "map_name_popup.h"
#include "data/speaker_data.h"
#include "quest_logic.h"

static bool32 AllocateNameplateStrings(void);
static void FreeNameplateStrings(void);
static void AddNameplateEmote(u32 windowId, u32 nameplateWidth, enum NameplateEmotes emote);
static void AddNameplatePhone(u32 windowId, u32 nameplateWidth, enum NameplatePhone onPhone);
static void AddNameplateTail(u32 windowId, u32 nameplateWidth, enum NameplateTail tail);
static void BufferSpeakerName(u32 speaker);
static void BufferSpeakerTitle(u32 speaker);
static enum Gender GetSpeakerGender(void);
static u32 CalculateNameplateOffset(u32 nameplateWidth);
static u32 CalculateNameplateTileWidth(u32 nameplateWidth);
static u32 CalculateNameplateWidth(u32 nameWidth, u32 titleWidth);
static void ClearNameplateVariables(void);
static u32 CreateNameplateWindow(void);
static void CreateSpeakerIconSprite(u32 nameplateWidth, enum NameplateSpeaker speaker);
static void DestroyExistingWindow(void);
static void DrawBottomNameplateTiles(u32, u32, u32, u32);
static void DrawSecondRowNameplateTiles(u32, u32, u32, u32);
static void DrawThirdRowNameplateTiles(u32, u32, u32, u32);
static void DrawTopNameplateTiles(u32, u32, u32, u32);
static u32 GetSpeakerNameWidth(u32 speaker, u32 phone);
static u32 GetSpeakerTitleWidth(u32 speaker);
static void PlaceNameplateOnTilemap(u32 windowId);
static void PrintSpeakerName(u32 windowId, enum NameplateSpeaker speaker);
static void PrintSpeakerTitle(u32 windowId, enum NameplateSpeaker speaker);
static const u32* GetSpeakerIcon(enum NameplateSpeaker speaker);
static const u16* GetSpeakerPal(enum NameplateSpeaker speaker);

const u8* GetSpeakerName(enum NameplateSpeaker speaker)
{
    return sSpeakerData[speaker].name;
}

const u8* GetSpeakerTitle(enum NameplateSpeaker speaker)
{
    return sSpeakerData[speaker].title;
}

static enum Gender GetSpeakerGender(void)
{
    return sSpeakerData[VarGet(VAR_MSGBOX_SPEAKER)].gender;
}

static const u32* GetSpeakerIcon(enum NameplateSpeaker speaker)
{
    return sSpeakerData[speaker].speakerIcon;
}

static const u16* GetSpeakerPal(enum NameplateSpeaker speaker)
{
    return sSpeakerData[speaker].speakerPal;
}

//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;
static EWRAM_DATA u8 sPortaitSpriteID = 0;
static u8* nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_COUNT] = {NULL};

static const u16 gMessageBox_Pal[] = INCGFX_U16("graphics/ui_menus/msgbox/message_box.pal", ".gbapal");
static const u16 gNameplateMale[] = INCGFX_U16("graphics/ui_menus/msgbox/nameplateMale.pal", ".gbapal");
static const u16 gNameplateFemale[] = INCGFX_U16("graphics/ui_menus/msgbox/nameplateFemale.pal", ".gbapal");
static const u16 gNameplateNonbinary[] = INCGFX_U16("graphics/ui_menus/msgbox/nameplateNonbinary.pal", ".gbapal");
static const u16 gNameplateSign[] = INCGFX_U16("graphics/ui_menus/msgbox/nameplateSign.pal", ".gbapal");
static const u8 sMsgbox_Phone_On[] = INCGFX_U8("graphics/ui_menus/msgbox/phone/phone_on.png", ".4bpp");
static const u8 emoteGfx[] = INCGFX_U8("graphics/ui_menus/msgbox/emotes/emote.png", ".4bpp");
static const u8 tailGfx[] = INCGFX_U8("graphics/ui_menus/msgbox/tails/tail.png", ".4bpp");

static const u32 sMessageBoxLeftTop[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/messageBoxLeftTop.png", ".4bpp.smol");
static const u32 sMessageBoxCenterTop[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/messageBoxCenterTop.png", ".4bpp.smol");
static const u32 sMessageBoxRightTop[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/messageBoxRightTop.png", ".4bpp.smol");
static const u32 sNameplateCenterBottom[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom.png", ".4bpp.smol");
static const u32 sNameplateCenterBottom1[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom1.png", ".4bpp.smol");
static const u32 sNameplateCenterBottom2[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom2.png", ".4bpp.smol");
static const u32 sNameplateCenterBottom3[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom3.png", ".4bpp.smol");
static const u32 sNameplateCenterSecondRow[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterSecondRow.png", ".4bpp.smol");
static const u32 sNameplateCenterSecondRow0[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterSecondRow0.png", ".4bpp.smol");
static const u32 sNameplateCenterThirdRow[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterThirdRow.png", ".4bpp.smol");
static const u32 sNameplateCenterThirdRow0[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterThirdRow0.png", ".4bpp.smol");
static const u32 sNameplateCenterTop0[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterTop.png", ".4bpp.smol");
static const u32 sNameplateCenterTop1[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterTop1.png", ".4bpp.smol");
static const u32 sNameplateCenterTop2[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterTop2.png", ".4bpp.smol");
static const u32 sNameplateLeftBottom[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftBottom.png", ".4bpp.smol");
static const u32 sNameplateLeftCenter[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftCenter.png", ".4bpp.smol");
static const u32 sNameplateLeftSecondRow[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftSecondRow.png", ".4bpp.smol");
static const u32 sNameplateLeftThirdRow[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftThirdRow.png", ".4bpp.smol");
static const u32 sNameplateLeftTop[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftTop.png", ".4bpp.smol");
static const u32 sNameplateRightBottom[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom.png", ".4bpp.smol");
static const u32 sNameplateRightBottom0[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom0.png", ".4bpp.smol");
static const u32 sNameplateRightBottom1[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom1.png", ".4bpp.smol");
static const u32 sNameplateRightBottom2[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom2.png", ".4bpp.smol");
static const u32 sNameplateRightBottom3[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom3.png", ".4bpp.smol");
static const u32 sNameplateRightBottom4[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom4.png", ".4bpp.smol");
static const u32 sNameplateRightBottom5[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom5.png", ".4bpp.smol");
static const u32 sNameplateRightBottom6[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom6.png", ".4bpp.smol");
static const u32 sNameplateRightBottom7[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom7.png", ".4bpp.smol");
static const u32 sNameplateRightBottom8[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom8.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow0[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow0.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow1[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow1.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow2[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow2.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow3[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow3.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow4[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow4.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow5[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow5.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow6[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow6.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow7[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow7.png", ".4bpp.smol");
static const u32 sNameplateRightSecondRow8[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow8.png", ".4bpp.smol");
static const u32 sEmptyTile[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/emptyTile.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow0[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow0.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow1[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow1.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow2[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow2.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow3[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow3.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow4[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow4.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow5[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow5.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow6[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow6.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow7[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow7.png", ".4bpp.smol");
static const u32 sNameplateRightThirdRow8[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow8.png", ".4bpp.smol");
static const u32 sNameplateRightTop0[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop0.png", ".4bpp.smol");
static const u32 sNameplateRightTop1[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop1.png", ".4bpp.smol");
static const u32 sNameplateRightTop2[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop2.png", ".4bpp.smol");
static const u32 sNameplateRightTop3[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop3.png", ".4bpp.smol");
static const u32 sNameplateRightTop4[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop4.png", ".4bpp.smol");
static const u32 sNameplateRightTop5[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop5.png", ".4bpp.smol");
static const u32 sNameplateRightTop6[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop6.png", ".4bpp.smol");
static const u32 sNameplateRightTop7[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop7.png", ".4bpp.smol");
static const u32 sNameplateRightTop8[] = INCGFX_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop8.png", ".4bpp.smol");

static const u16* const genderNameplatePaletteLUT[] =
{
    gNameplateMale,
    gNameplateFemale,
    gMessageBox_Pal,
    gNameplateNonbinary,
    gNameplateSign,
    gMessageBox_Pal,
};

static const u32* const nameplateCenterBottomLUT[] =
{
    sNameplateRightBottom8,
    sNameplateCenterBottom1,
    sNameplateCenterBottom2,
    sNameplateCenterBottom3,
    sNameplateCenterBottom,
    sNameplateCenterBottom,
    sNameplateCenterBottom,
    sNameplateCenterBottom,
    sNameplateCenterBottom,
};

static const u32* const nameplateCenterSecondRowLUT[] =
{
    sNameplateCenterSecondRow0,
    sNameplateCenterSecondRow,
    sNameplateCenterSecondRow,
    sNameplateCenterSecondRow,
    sNameplateCenterSecondRow,
    sNameplateCenterSecondRow,
    sNameplateCenterSecondRow,
    sNameplateCenterSecondRow,
};

static const u32* const nameplateCenterThirdRowLUT[] =
{
    sNameplateCenterThirdRow0,
    sNameplateCenterThirdRow,
    sNameplateCenterThirdRow,
    sNameplateCenterThirdRow,
    sNameplateCenterThirdRow,
    sNameplateCenterThirdRow,
    sNameplateCenterThirdRow,
    sNameplateCenterThirdRow,
};

static const u32* const nameplateCenterTopLUT[] =
{
    sNameplateRightTop8,
    sNameplateCenterTop1,
    sNameplateCenterTop2,
    sNameplateCenterTop0,
    sNameplateCenterTop0,
    sNameplateCenterTop0,
    sNameplateCenterTop0,
    sNameplateCenterTop0,
    sNameplateCenterTop0,
};

static const u32* const nameplateRightBottomLUT[] =
{
    sMessageBoxCenterTop,
    sNameplateRightBottom1,
    sNameplateRightBottom2,
    sNameplateRightBottom3,
    sNameplateRightBottom4,
    sNameplateRightBottom5,
    sNameplateRightBottom6,
    sNameplateRightBottom7,
    sNameplateRightBottom8,
};

static const u32* const nameplateRightSecondRowLUT[] =
{
    sNameplateRightSecondRow0,
    sNameplateRightSecondRow1,
    sNameplateRightSecondRow2,
    sNameplateRightSecondRow3,
    sNameplateRightSecondRow4,
    sNameplateRightSecondRow5,
    sNameplateRightSecondRow6,
    sNameplateRightSecondRow7,
    sNameplateRightSecondRow8,
};

static const u32* const nameplateRightThirdRowLUT[] =
{
    sNameplateRightThirdRow0,
    sNameplateRightThirdRow1,
    sNameplateRightThirdRow2,
    sNameplateRightThirdRow3,
    sNameplateRightThirdRow4,
    sNameplateRightThirdRow5,
    sNameplateRightThirdRow6,
    sNameplateRightThirdRow7,
    sNameplateRightThirdRow8,
};

static const u32* const nameplateRightTopLUT[] =
{
    sEmptyTile,
    sNameplateRightTop1,
    sNameplateRightTop2,
    sNameplateRightTop3,
    sNameplateRightTop4,
    sNameplateRightTop5,
    sNameplateRightTop6,
    sNameplateRightTop7,
    sNameplateRightTop8,
};


static const u8 sMenuWindowFontColors[][3] =
{
    [FONT_BLACK]    = {TEXT_COLOR_TRANSPARENT,  13,   TEXT_COLOR_TRANSPARENT},
    [FONT_WHITE]    = {TEXT_COLOR_TRANSPARENT,  10,   TEXT_COLOR_TRANSPARENT},
};

static enum NameplateSpeaker LoadDynamicSpeaker(void)
{
    enum NameplateSpeaker speaker = VarGet(VAR_MSGBOX_SPEAKER);

    if (speaker != SPEAKER_UNHOUSED)
        return speaker;

    switch (GetCurrentMap())
    {
        case MAP_ROUTE11: return SPEAKER_DAGMAR;
        case MAP_ROUTE5: return SPEAKER_GURL;
        default: return SPEAKER_DEFAULT;
    }
}

static bool32 AllocateNameplateStrings(void)
{
    for (u32 stringIndex = 0; stringIndex < NAMEPLATE_SPEAKER_ATTRIBUTE_COUNT; stringIndex++)
    {
        nameplateString[stringIndex] = Alloc(SPEAKER_NAME_LENGTH);

        if (nameplateString[stringIndex] == NULL)
            return TRUE;
    }
    return FALSE;
}

static void FreeNameplateStrings(void)
{
    for (u32 stringIndex = 0; stringIndex < NAMEPLATE_SPEAKER_ATTRIBUTE_COUNT; stringIndex++)
        Free(nameplateString[stringIndex]);
}

void DrawNameplate(void)
{
    //RandomizeNameplate();

    enum NameplateSpeaker speaker = LoadDynamicSpeaker();
    enum NameplateEmotes emote = VarGet(VAR_MSGBOX_EMOTE);
    enum NameplateTail tail = VarGet(VAR_MSGBOX_TAIL);
    enum NameplatePhone onPhone = VarGet(VAR_MSGBOX_PHONE);

    if (AllocateNameplateStrings())
        return;

    DestroyExistingWindow();
    u32 windowId = CreateNameplateWindow();

    u32 nameWidth = GetSpeakerNameWidth(speaker,onPhone);
    u32 titleWidth = GetSpeakerTitleWidth(speaker);
    u32 nameplateWidth = CalculateNameplateWidth(nameWidth, titleWidth);
    u32 offset = CalculateNameplateOffset(nameplateWidth);
    u32 nameplateTileWidth = CalculateNameplateTileWidth(nameplateWidth);

    if (speaker != SPEAKER_DEFAULT)
    {
        DrawBottomNameplateTiles(windowId, nameplateWidth, offset, nameplateTileWidth);
        DrawTopNameplateTiles(windowId, nameplateWidth, offset, nameplateTileWidth);
        DrawSecondRowNameplateTiles(windowId, nameplateWidth, offset, nameplateTileWidth);
        DrawThirdRowNameplateTiles(windowId, nameplateWidth, offset, nameplateTileWidth);

        AddNameplateTail(windowId, nameplateWidth, tail);
        AddNameplatePhone(windowId, nameplateWidth, onPhone);
        CreateSpeakerIconSprite(nameplateWidth, speaker);
        AddNameplateEmote(windowId, nameplateWidth, emote);

        PrintSpeakerTitle(windowId, speaker);
        PrintSpeakerName(windowId, speaker);
        FreeNameplateStrings();
    }
    else
    {
        DrawTopMessageBoxTiles(windowId, MSGBOX_TOP_FIRST_TILE_OFFSET, MSGBOX_MIDDLE_TILE_OFFSET, MSGBOX_LAST_TILE_OFFSET);
    }

    PlaceNameplateOnTilemap(windowId);
    ClearNameplateVariables();
}

/*
#include "random.h"
void RandomizeNameplate(void)
{
    VarSet(VAR_MSGBOX_EMOTE,EMOTE_ANGRY);
    VarSet(VAR_MSGBOX_EMOTE,Random() % EMOTE_COUNT);

    VarSet(VAR_MSGBOX_TAIL,TAIL_TALK);
    VarSet(VAR_MSGBOX_TAIL,Random() % TAIL_COUNT);

    VarSet(VAR_MSGBOX_PHONE,PHONE_ON);
    VarSet(VAR_MSGBOX_PHONE,Random() % PHONE_COUNT);

    VarSet(VAR_MSGBOX_SPEAKER,0);
    VarSet(VAR_MSGBOX_SPEAKER,Random() % NUM_SPEAKERS);
}
*/

static void DestroyExistingWindow(void)
{
    if (!sMugshotWindow)
        return;

    DestroySpeakerIconSprite();

    if (!sMugshotWindow)
        return;

    RemoveWindow(sMugshotWindow);
    HideMapNamePopUpWindow();
}

void LoadNameplatePalette(enum Gender gender)
{
    LoadPalette(genderNameplatePaletteLUT[gender],BG_PLTT_ID(MUGSHOT_PALETTE_NUM),PLTT_SIZE_4BPP);
}

u32 CreateNameplateWindow(void)
{
    enum Gender gender = GetSpeakerGender();
    struct WindowTemplate nameplateTemplate;

    SetWindowTemplateFields(&nameplateTemplate, 0, WINDOW_TILELEFT, WINDOW_TILETOP,DISPLAY_TILE_WIDTH, MSGBOX_TILE_HEIGHT, MUGSHOT_PALETTE_NUM, NAMEPLATE_WINDOW_TEMPLATE);
    sMugshotWindow = AddWindow(&nameplateTemplate);
    u32 windowId = sMugshotWindow;
    LoadNameplatePalette(gender);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    return windowId;
}

static void BufferSpeakerTitle(u32 speaker)
{
    StringExpandPlaceholders(nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_TITLE],GetSpeakerTitle(speaker));
}

static void BufferSpeakerName(u32 speaker)
{
    StringExpandPlaceholders(nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_NAME],GetSpeakerName(speaker));
}

u32 GetSpeakerNameWidth(u32 speaker, u32 phone)
{
    u32 phoneMargin = (phone) ? PHONE_MARGIN : 0;
    u32 letterSpacing = GetFontAttribute(FONT_SPEAKER_NAME, FONTATTR_LETTER_SPACING);
    u32 defaultLength = (GetStringWidth(FONT_SPEAKER_NAME, COMPOUND_STRING("???"), letterSpacing));

    BufferSpeakerName(speaker);

    if (speaker == SPEAKER_DEFAULT || speaker >= NUM_SPEAKERS)
        return (defaultLength + phoneMargin);

    if (sSpeakerData[speaker].name[0] == '\0')
        return (defaultLength + phoneMargin);

    return (phoneMargin + GetStringWidth(FONT_SPEAKER_NAME, nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_NAME], letterSpacing));
}

u32 GetSpeakerTitleWidth(u32 speaker)
{
    u32 letterSpacing = GetFontAttribute(FONT_SPEAKER_NAME, FONTATTR_LETTER_SPACING);
    u32 defaultLength = (GetStringWidth(FONT_SPEAKER_NAME, COMPOUND_STRING("???"), letterSpacing));

    BufferSpeakerTitle(speaker);

    if (speaker == SPEAKER_DEFAULT || speaker >= NUM_SPEAKERS)
        return defaultLength;

    if (sSpeakerData[speaker].title[0] == '\0')
        return defaultLength;

    return GetStringWidth(FONT_SPEAKER_TITLE, nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_TITLE], letterSpacing);
}

static u32 CalculateNameplateTileWidth(u32 nameplateWidth)
{
    return (nameplateWidth - TILE_WIDTH) / TILE_WIDTH;
}

static u32 CalculateNameplateWidth(u32 nameWidth, u32 titleWidth)
{
    u32 width = 0;

    if (titleWidth > nameWidth)
        width = (30 + titleWidth);
    else
        width = (35 + nameWidth);

    return max(width,MIN_TITLE_LENGTH);
}

void DrawTopMessageBoxTiles(u32 windowId, u32 firstTileOffset, u32 middleTileOffset, u32 lastTileOffset)
{
    u32 index;

    CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxLeftTop, 0, firstTileOffset);

    for (index = 0; index < MSGBOX_TILE_WIDTH; index++)
        CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxCenterTop, 0, middleTileOffset + index);

    CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxRightTop, 0, lastTileOffset);
}

static void DrawBottomNameplateTiles(u32 windowId, u32 stringWidth, u32 offset, u32 nameplateTileWidth)
{
    u32 index, lastIndex;

    CopyToWindowPixelBuffer(windowId, (const void*)sNameplateLeftBottom, 0, MSGBOX_TOP_FIRST_TILE_OFFSET);

    for (index = 0; index < (nameplateTileWidth - 1); index++)
    {
        CopyToWindowPixelBuffer(windowId, (const void*)nameplateCenterBottomLUT[4], 0, MSGBOX_MIDDLE_TILE_OFFSET + index);
    }

    CopyToWindowPixelBuffer(windowId, (const void*)nameplateCenterBottomLUT[offset], 0, MSGBOX_MIDDLE_TILE_OFFSET + index++);
    CopyToWindowPixelBuffer(windowId, (const void*)nameplateRightBottomLUT[offset], 0, MSGBOX_MIDDLE_TILE_OFFSET + index++);

    lastIndex = index;

    for (index = 0; index < (MSGBOX_TILE_WIDTH - lastIndex); index++)
        CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxCenterTop, 0, (MSGBOX_MIDDLE_TILE_OFFSET + lastIndex + index));

    CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxRightTop, 0, MSGBOX_LAST_TILE_OFFSET);
}

static u32 CalculateNameplateOffset(u32 nameplateWidth)
{
    return ((nameplateWidth - TILE_WIDTH) % TILE_WIDTH);
}

static void DrawTopNameplateTiles(u32 windowId, u32 nameplateWidth, u32 offset, u32 nameplateTileWidth)
{
    u32 index;

    CopyToWindowPixelBuffer(windowId, (const void*)sNameplateLeftTop, 0, NAMEPLATE_TOP_FIRST_TILE_OFFSET);

    for (index = 0; index < (nameplateTileWidth - 1); index++)
        CopyToWindowPixelBuffer(windowId, (const void*)nameplateCenterTopLUT[4], 0, NAMEPLATE_TOP_MIDDLE_TILE_OFFSET+ index);

    CopyToWindowPixelBuffer(windowId, (const void*)nameplateCenterTopLUT[offset], 0, NAMEPLATE_TOP_MIDDLE_TILE_OFFSET + index++);

    CopyToWindowPixelBuffer(windowId, (const void*)nameplateRightTopLUT[offset], 0, NAMEPLATE_TOP_MIDDLE_TILE_OFFSET+ index);
}

static void DrawSecondRowNameplateTiles(u32 windowId, u32 nameplateWidth, u32 offset, u32 nameplateTileWidth)
{
    u32 index;

    CopyToWindowPixelBuffer(windowId, (const void*)sNameplateLeftSecondRow, 0, NAMEPLATE_TOP_SECOND_ROW_TILE_OFFSET);

    for (index = 0; index < nameplateTileWidth - 1; index++)
        CopyToWindowPixelBuffer(windowId, (const void*)nameplateCenterSecondRowLUT[4], 0, NAMEPLATE_MIDDLE_SECOND_ROW_TILE_OFFSET+ index);

    CopyToWindowPixelBuffer(windowId, (const void*)nameplateCenterSecondRowLUT[offset], 0, NAMEPLATE_MIDDLE_SECOND_ROW_TILE_OFFSET+ index++);

    CopyToWindowPixelBuffer(windowId, (const void*)nameplateRightSecondRowLUT[offset], 0, NAMEPLATE_MIDDLE_SECOND_ROW_TILE_OFFSET + index);
}

static void DrawThirdRowNameplateTiles(u32 windowId, u32 nameplateWidth, u32 offset, u32 nameplateTileWidth)
{
    u32 index;

    CopyToWindowPixelBuffer(windowId, sNameplateLeftThirdRow, 0, NAMEPLATE_TOP_THIRD_ROW_TILE_OFFSET);

    for (index = 0; index < nameplateTileWidth - 1; index++)
        CopyToWindowPixelBuffer(windowId, nameplateCenterThirdRowLUT[4], 0, NAMEPLATE_MIDDLE_THIRD_ROW_TILE_OFFSET+ index);

    CopyToWindowPixelBuffer(windowId, nameplateCenterThirdRowLUT[offset], 0, NAMEPLATE_MIDDLE_THIRD_ROW_TILE_OFFSET+ index++);

    CopyToWindowPixelBuffer(windowId, nameplateRightThirdRowLUT[offset], 0, NAMEPLATE_MIDDLE_THIRD_ROW_TILE_OFFSET+ index);
}

static void CreateSpeakerIconSprite(u32 nameplateWidth, enum NameplateSpeaker speaker)
{
    DestroySpeakerIconSprite();

    u32 spriteTag = GFXTAG_SPEAKER_ICON;
    struct SpriteSheet sSpriteSheet_Speaker;
    sSpriteSheet_Speaker.data = GetSpeakerIcon(speaker);
    sSpriteSheet_Speaker.size = 2048;
    sSpriteSheet_Speaker.tag = spriteTag;
    LoadSpriteSheet(&sSpriteSheet_Speaker);

    u32 palTag = PALTAG_SPEAKER_ICON | BLEND_IMMUNE_FLAG;
    struct SpritePalette sSpritePalette_Speaker;
    sSpritePalette_Speaker.data = GetSpeakerPal(speaker);
    sSpritePalette_Speaker.tag = palTag;
    LoadSpritePalette(&sSpritePalette_Speaker);

    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag    = spriteTag;
    TempSpriteTemplate.paletteTag = palTag;
    u32 x = nameplateWidth - SPEAKER_ICON_RIGHT_PADDING;
    u32 y = SPEAKER_ICON_Y;
    u32 spriteId = CreateSprite(&TempSpriteTemplate, x, y, 0);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);

    sPortaitSpriteID = spriteId;
    VarSet(VAR_MSGBOX_SPEAKER, SPEAKER_DEFAULT);
}

void DestroySpeakerIconSprite(void)
{
    if (!sPortaitSpriteID)
        return;

    DestroySpriteAndFreeResources(&gSprites[sPortaitSpriteID]);
    FreeSpriteTilesByTag(GFXTAG_SPEAKER_ICON);
    FreeSpritePaletteByTag(PALTAG_SPEAKER_ICON);
    sPortaitSpriteID = 0;
}

static void AddNameplateTail(u32 windowId, u32 nameplateWidth, enum NameplateTail tail)
{
    if (tail <= TAIL_DEFAULT || tail >= TAIL_COUNT)
        return;

    u32 tailX = (tail == TAIL_TALK) ? (nameplateWidth - TAILS_TALK_RIGHT_PADDING) : (nameplateWidth - TAILS_RIGHT_PADDING);

    BlitBitmapToWindow(windowId, (tailGfx + (TAILS_SIZE * tail)), tailX, TAILS_Y, TAILS_WIDTH, TAILS_HEIGHT);
}

static void AddNameplatePhone(u32 windowId, u32 nameplateWidth, enum NameplatePhone onPhone)
{
    if (onPhone != PHONE_ON)
        return;

    u32 x = nameplateWidth - PHONE_LEFT_MARGIN;

    BlitBitmapToWindow(windowId, sMsgbox_Phone_On, x, PHONE_Y, PHONE_WIDTH, PHONE_WIDTH);
}

static void AddNameplateEmote(u32 windowId, u32 nameplateWidth, enum NameplateEmotes emote)
{
    if (emote == EMOTE_DEFAULT || emote >= EMOTE_COUNT)
        return;

    u32 emoteX = nameplateWidth - EMOTES_LEFT_MARGIN;

    BlitBitmapToWindow(windowId, (emoteGfx + (EMOTES_SIZE * emote)), emoteX, EMOTES_Y, EMOTES_WIDTH, EMOTES_HEIGHT);
}


static void PrintSpeakerTitle(u32 windowId, enum NameplateSpeaker speaker)
{
    if (sSpeakerData[speaker].title[0] == '\0')
        return;

    AddTextPrinterParameterized4(windowId, FONT_SPEAKER_TITLE, SPEAKER_NAME_X, SPEAKER_TITLE_Y, 0, 0, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_TITLE]);
}

static void PrintSpeakerName(u32 windowId, enum NameplateSpeaker speaker)
{
    if (sSpeakerData[speaker].name[0] == '\0')
        return;

    AddTextPrinterParameterized4(windowId, FONT_SPEAKER_NAME, SPEAKER_NAME_X, SPEAKER_NAME_Y, 0, 0, sMenuWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_NAME]);
}


static void PlaceNameplateOnTilemap(u32 windowId)
{
    PutWindowRectTilemap(windowId, 0, 0, DISPLAY_TILE_WIDTH, MSGBOX_TILE_HEIGHT);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void ClearNameplateVariables(void)
{
    VarSet(VAR_MSGBOX_EMOTE,0);
    VarSet(VAR_MSGBOX_TAIL,0);
    VarSet(VAR_MSGBOX_PHONE,0);
    VarSet(VAR_MSGBOX_SPEAKER,0);
}

void ClearMessageBoxAddOns(void)
{
    DestroySpeakerIconSprite();

    if (!sMugshotWindow)
        return;

    ClearStdWindowAndFrameToTransparent(sMugshotWindow, 0);
    CopyWindowToVram(sMugshotWindow, 3);
    RemoveWindow(sMugshotWindow);
    sMugshotWindow = 0;
}

void ForceClearMessageBoxData(void)
{
    sPortaitSpriteID = 0;
    sMugshotWindow = 0;
    ClearNameplateVariables();
}

