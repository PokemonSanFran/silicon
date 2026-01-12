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
static enum PlayerGender GetSpeakerGender(void);
static u32 CalculateNameplateOffset(u32 nameplateWidth);
static u32 CalculateNameplateTileWidth(u32 nameplateWidth);
static u32 CalculateNameplateWidth(u32 nameWidth, u32 titleWidth);
static void ClearNameplateVariables(void);
static u32 CreateNameplateWindow(void);
static void CreateSpeakerIconSprite(u32 nameplateWidth, enum NameplateSpeaker speaker);
static void DestroyExistingWindow(void);
static void DrawBottomNameplateTiles(u32, u32, u32, u32);
static void DrawTopMessageBoxTiles(u32, u32, u32, u32);
static void DrawSecondRowNameplateTiles(u32, u32, u32, u32);
static void DrawThirdRowNameplateTiles(u32, u32, u32, u32);
static void DrawTopNameplateTiles(u32, u32, u32, u32);
static u32 GetSpeakerNameWidth(u32 speaker);
static u32 GetSpeakerTitleWidth(u32 speaker);
static void PlaceNameplateOnTilemap(u32 windowId);
static void PrintSpeakerName(u32 windowId, enum NameplateSpeaker speaker);
static void PrintSpeakerTitle(u32 windowId, enum NameplateSpeaker speaker);

//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;
static EWRAM_DATA u8 sPortaitSpriteID = 0;
static EWRAM_DATA u8 sPortaitPaletteID = 0;
static u8* nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_COUNT] = {NULL};

static const u16 gMessageBox_Pal[] = INCBIN_U16("graphics/ui_menus/msgbox/message_box.gbapal");
static const u16 gNameplateMale[] = INCBIN_U16("graphics/ui_menus/msgbox/nameplateMale.gbapal");
static const u16 gNameplateFemale[] = INCBIN_U16("graphics/ui_menus/msgbox/nameplateFemale.gbapal");
static const u16 gNameplateNonbinary[] = INCBIN_U16("graphics/ui_menus/msgbox/nameplateNonbinary.gbapal");
static const u16 gNameplateSign[] = INCBIN_U16("graphics/ui_menus/msgbox/nameplateSign.gbapal");
static const u8 sMsgbox_Phone_On[] = INCBIN_U8("graphics/ui_menus/msgbox/phone/phone_on.4bpp");
static const u8 emoteGfx[] = INCBIN_U8("graphics/ui_menus/msgbox/emotes/emote.4bpp");
static const u8 tailGfx[] = INCBIN_U8("graphics/ui_menus/msgbox/tails/tail.4bpp");

static const u32 sMessageBoxLeftTop[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/messageBoxLeftTop.4bpp.smol");
static const u32 sMessageBoxCenterTop[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/messageBoxCenterTop.4bpp.smol");
static const u32 sMessageBoxRightTop[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/messageBoxRightTop.4bpp.smol");
static const u32 sNameplateCenterBottom[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom.4bpp.smol");
static const u32 sNameplateCenterBottom1[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom1.4bpp.smol");
static const u32 sNameplateCenterBottom2[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom2.4bpp.smol");
static const u32 sNameplateCenterBottom3[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterBottom3.4bpp.smol");
static const u32 sNameplateCenterSecondRow[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterSecondRow.4bpp.smol");
static const u32 sNameplateCenterSecondRow0[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterSecondRow0.4bpp.smol");
static const u32 sNameplateCenterThirdRow[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterThirdRow.4bpp.smol");
static const u32 sNameplateCenterThirdRow0[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterThirdRow0.4bpp.smol");
static const u32 sNameplateCenterTop0[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterTop.4bpp.smol");
static const u32 sNameplateCenterTop1[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterTop1.4bpp.smol");
static const u32 sNameplateCenterTop2[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateCenterTop2.4bpp.smol");
static const u32 sNameplateLeftBottom[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftBottom.4bpp.smol");
static const u32 sNameplateLeftCenter[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftCenter.4bpp.smol");
static const u32 sNameplateLeftSecondRow[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftSecondRow.4bpp.smol");
static const u32 sNameplateLeftThirdRow[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftThirdRow.4bpp.smol");
static const u32 sNameplateLeftTop[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateLeftTop.4bpp.smol");
static const u32 sNameplateRightBottom[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom.4bpp.smol");
static const u32 sNameplateRightBottom0[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom0.4bpp.smol");
static const u32 sNameplateRightBottom1[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom1.4bpp.smol");
static const u32 sNameplateRightBottom2[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom2.4bpp.smol");
static const u32 sNameplateRightBottom3[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom3.4bpp.smol");
static const u32 sNameplateRightBottom4[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom4.4bpp.smol");
static const u32 sNameplateRightBottom5[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom5.4bpp.smol");
static const u32 sNameplateRightBottom6[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom6.4bpp.smol");
static const u32 sNameplateRightBottom7[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom7.4bpp.smol");
static const u32 sNameplateRightBottom8[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightBottom8.4bpp.smol");
static const u32 sNameplateRightSecondRow0[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow0.4bpp.smol");
static const u32 sNameplateRightSecondRow1[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow1.4bpp.smol");
static const u32 sNameplateRightSecondRow2[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow2.4bpp.smol");
static const u32 sNameplateRightSecondRow3[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow3.4bpp.smol");
static const u32 sNameplateRightSecondRow4[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow4.4bpp.smol");
static const u32 sNameplateRightSecondRow5[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow5.4bpp.smol");
static const u32 sNameplateRightSecondRow6[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow6.4bpp.smol");
static const u32 sNameplateRightSecondRow7[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow7.4bpp.smol");
static const u32 sNameplateRightSecondRow8[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightSecondRow8.4bpp.smol");
static const u32 sEmptyTile[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/emptyTile.4bpp.smol");
static const u32 sNameplateRightThirdRow0[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow0.4bpp.smol");
static const u32 sNameplateRightThirdRow1[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow1.4bpp.smol");
static const u32 sNameplateRightThirdRow2[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow2.4bpp.smol");
static const u32 sNameplateRightThirdRow3[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow3.4bpp.smol");
static const u32 sNameplateRightThirdRow4[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow4.4bpp.smol");
static const u32 sNameplateRightThirdRow5[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow5.4bpp.smol");
static const u32 sNameplateRightThirdRow6[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow6.4bpp.smol");
static const u32 sNameplateRightThirdRow7[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow7.4bpp.smol");
static const u32 sNameplateRightThirdRow8[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightThirdRow8.4bpp.smol");
static const u32 sNameplateRightTop0[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop0.4bpp.smol");
static const u32 sNameplateRightTop1[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop1.4bpp.smol");
static const u32 sNameplateRightTop2[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop2.4bpp.smol");
static const u32 sNameplateRightTop3[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop3.4bpp.smol");
static const u32 sNameplateRightTop4[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop4.4bpp.smol");
static const u32 sNameplateRightTop5[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop5.4bpp.smol");
static const u32 sNameplateRightTop6[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop6.4bpp.smol");
static const u32 sNameplateRightTop7[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop7.4bpp.smol");
static const u32 sNameplateRightTop8[] = INCBIN_U32("graphics/ui_menus/msgbox/nameplate/nameplateRightTop8.4bpp.smol");

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
    RandomizeNameplate();

    enum NameplateSpeaker speaker = LoadDynamicSpeaker();
    enum NameplateEmotes emote = VarGet(VAR_MSGBOX_EMOTE);
    enum NameplateTail tail = VarGet(VAR_MSGBOX_TAIL);
    enum NameplatePhone onPhone = VarGet(VAR_MSGBOX_PHONE);

    if (AllocateNameplateStrings())
        return;

    DestroyExistingWindow();
    u32 windowId = CreateNameplateWindow();

    u32 nameWidth = GetSpeakerNameWidth(speaker);
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
        DrawTopMessageBoxTiles(windowId, nameplateWidth, offset, nameplateTileWidth);
    }

    PlaceNameplateOnTilemap(windowId);
    ClearNameplateVariables();
}

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

u32 CreateNameplateWindow(void)
{
    enum PlayerGender gender = GetSpeakerGender();
    struct WindowTemplate nameplateTemplate;

    SetWindowTemplateFields(&nameplateTemplate, 0, WINDOW_TILELEFT, WINDOW_TILETOP,DISPLAY_TILE_WIDTH, MSGBOX_TILE_HEIGHT, MUGSHOT_PALETTE_NUM, NAMEPLATE_WINDOW_TEMPLATE);
    sMugshotWindow = AddWindow(&nameplateTemplate);
    u32 windowId = sMugshotWindow;
    LoadPalette(genderNameplatePaletteLUT[gender],BG_PLTT_ID(MUGSHOT_PALETTE_NUM),PLTT_SIZE_4BPP);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    return windowId;
}

static void BufferSpeakerTitle(u32 speaker)
{
    StringExpandPlaceholders(nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_TITLE],sSpeakerData[speaker].title);
}

static void BufferSpeakerName(u32 speaker)
{
    StringExpandPlaceholders(nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_NAME],sSpeakerData[speaker].name);
}

u32 GetSpeakerNameWidth(u32 speaker)
{
    u32 letterSpacing = GetFontAttribute(FONT_SPEAKER_NAME, FONTATTR_LETTER_SPACING);
    u32 defaultLength = (GetStringWidth(FONT_SPEAKER_NAME, COMPOUND_STRING("???"), letterSpacing));
    BufferSpeakerName(speaker);

    if (speaker == SPEAKER_DEFAULT || speaker >= NUM_SPEAKERS)
        return defaultLength;

    if (sSpeakerData[speaker].name[0] == '\0')
        return defaultLength;

    return GetStringWidth(FONT_SPEAKER_NAME, nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_NAME], letterSpacing);
}

static enum PlayerGender GetSpeakerGender(void)
{
    return sSpeakerData[VarGet(VAR_MSGBOX_SPEAKER)].gender;
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

    return GetStringWidth(FONT_SPEAKER_NAME, nameplateString[NAMEPLATE_SPEAKER_ATTRIBUTE_TITLE], letterSpacing);
}

static u32 CalculateNameplateTileWidth(u32 nameplateWidth)
{
    return (nameplateWidth - TILE_WIDTH) / TILE_WIDTH;
}

static u32 CalculateNameplateWidth(u32 nameWidth, u32 titleWidth)
{
    u32 shorter = (nameWidth < titleWidth) ? nameWidth : titleWidth;
    u32 longer = (nameWidth > titleWidth) ? nameWidth : titleWidth;
    u32 defaultLength = (GetStringWidth(FONT_SPEAKER_NAME, COMPOUND_STRING("???"), GetFontAttribute(FONT_SPEAKER_NAME, FONTATTR_LETTER_SPACING)));

    if (shorter == defaultLength)
        shorter = longer;

    u32 shortMax = shorter + SPEAKER_ICON_SHORTER_LEFT_PADDING;
    u32 longMax = longer + SPEAKER_ICON_LONGER_LEFT_PADDING;

    if (longMax > shortMax)
        return longMax;
    else
        return shortMax;
}

static void DrawTopMessageBoxTiles(u32 windowId, u32 stringWidth, u32 offset, u32 nameplateTileWidth)
{
    u32 index;

    CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxLeftTop, 0, MSGBOX_TOP_FIRST_TILE_OFFSET);

    for (index = 0; index < MSGBOX_TILE_WIDTH; index++)
        CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxCenterTop, 0, MSGBOX_MIDDLE_TILE_OFFSET + index);

    CopyToWindowPixelBuffer(windowId, (const void*)sMessageBoxRightTop, 0, MSGBOX_LAST_TILE_OFFSET);
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
    u32 palnum, paltag;
    u32 spriteId = MAX_SPRITES;
    u32 SpriteTag = GFXTAG_SPEAKER_ICON;
    struct SpriteSheet sSpriteSheet_Speaker_Icon;
    struct SpritePalette spritePalette;
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    DestroySpeakerIconSprite();

    TempSpriteTemplate.tileTag = SpriteTag;
    palnum = AllocSpritePalette(SPEAKER_ICON_PAL_NUM);
    paltag = GetSpritePaletteTagByPaletteNum(palnum);
    sPortaitPaletteID = paltag;
    FreeSpritePaletteByTag(paltag);

    sSpriteSheet_Speaker_Icon.data = sSpeakerData[speaker].speakerIcon;
    sSpriteSheet_Speaker_Icon.size = 2048;
    sSpriteSheet_Speaker_Icon.tag = SpriteTag;
    LoadSpriteSheet(&sSpriteSheet_Speaker_Icon);

    spritePalette.data = sSpeakerData[speaker].speakerPal;
    spritePalette.tag = paltag;
    LoadSpritePalette(&spritePalette);

    spriteId = CreateSprite(&TempSpriteTemplate, 0, 0, 0);

    if (spriteId != MAX_SPRITES)
    {
        gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
        gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);

        gSprites[spriteId].x = nameplateWidth - SPEAKER_ICON_RIGHT_PADDING;
        gSprites[spriteId].y = SPEAKER_ICON_Y;
        gSprites[spriteId].oam.priority = 0;

        gSprites[spriteId].oam.paletteNum = palnum;
        gSprites[spriteId].oam.objMode = ST_OAM_OBJ_NORMAL;
    }

    sPortaitSpriteID = spriteId;
    VarSet(VAR_MSGBOX_SPEAKER, SPEAKER_DEFAULT);
}

void DestroySpeakerIconSprite(void)
{
    if (!sPortaitSpriteID)
        return;

    DestroySpriteAndFreeResources(&gSprites[sPortaitSpriteID]);
    FreeSpriteTilesByTag(GFXTAG_SPEAKER_ICON);
    FreeSpritePaletteByTag(sPortaitPaletteID);
    sPortaitSpriteID = 0;
    VarSet(sPortaitPaletteID, 0);
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
    sPortaitPaletteID = 0;
    sMugshotWindow = 0;
    ClearNameplateVariables();
}

