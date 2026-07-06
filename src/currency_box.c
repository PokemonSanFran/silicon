#include "global.h"
#include "bg.h"
#include "window.h"
#include "sprite.h"
#include "text.h"
#include "string_util.h"
#include "international_string_util.h"
#include "malloc.h"
#include "menu.h"
#include "strings.h"
#include "money.h"
#include "coins.h"
// start siliconBpBox
#include "metaprogram.h"
#include "text_window.h"
#include "event_data.h"
// end siliconBpBox
#include "currency_box.h"
#include "constants/coins.h"
#include "constants/battle_frontier.h" // siliconBpBox

// start siliconBpBox
/*
static const u16 sCurrencyBox_LabelGfx[] = INCGFX_U16("graphics/shop/money.png", ".4bpp");
static const u16 sCurrencyBox_LabelPal[] = INCGFX_U16("graphics/shop/money.png", ".gbapal");
*/
static const u16 sCurrencyBox_LabelGfx[] = INCGFX_U16("graphics/misc/silicon_money_labels.png", ".4bpp");
static const u16 sCurrencyBox_LabelPal[] = INCGFX_U16("graphics/misc/silicon_money_labels.png", ".gbapal");
// end siliconBpBox

static const struct SpritePalette sCurrencyBox_LabelSpritePalette =
{
    .data = sCurrencyBox_LabelPal,
    .tag = TAG_CURRENCY_BOX
};

static const struct OamData sCurrencyBox_LabelOamData =
{
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16)
};

static const struct SpriteFrameImage sCurrencyBox_LabelPicTable =
{
    .data = sCurrencyBox_LabelGfx,
    .relativeFrames = TRUE,
    .size = TILE_OFFSET_4BPP(8)
};

static const union AnimCmd *const sCurrencyBox_LabelTypeAnims[] =
{
    #define FOREACH_CURRENCY_BOX_TYPE_ANIM_IDX(F) \
        F(CURRENCY_BOX_MONEY), \
        F(CURRENCY_BOX_COINS), \
        F(CURRENCY_BOX_BP)
    #define CURRENCY_BOX_ANIM(type) (const union AnimCmd[]){ ANIMCMD_FRAME(type, 1), ANIMCMD_END }
    FOREACH_CURRENCY_BOX_TYPE_ANIM_IDX(CURRENCY_BOX_ANIM),
    #undef CURRENCY_BOX_ANIM
    #undef FOREACH_CURRENCY_BOX_TYPE_ANIM_IDX
};

static const struct SpriteTemplate sCurrencyBox_LabelSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_CURRENCY_BOX,
    .oam = &sCurrencyBox_LabelOamData,
    .images = &sCurrencyBox_LabelPicTable,
    .anims = sCurrencyBox_LabelTypeAnims,
};

// start siliconBpBox
//static void CurrencyBox_PrintByType(enum CurrencyBoxTypes type, u32 windowId);
//static void CurrencyBox_PrintFromValue(u32 windowId, u32 y, u32 amount, u32 maxDigits, const u8 *symbol);
static void CurrencyBox_PrintByType(union CurrencyBoxValues values);
static void CurrencyBox_PrintFromValue(u32 windowId, u32 y, u32 amount, u32 maxDigits, const u8 *symbol, bool32 subtractChange);
// end siliconBpBox
static u32 CurrencyBox_GetAmount(enum CurrencyBoxTypes type);
static u32 CurrencyBox_GetMaxDigits(enum CurrencyBoxTypes type);
static const u8 *CurrencyBox_GetTypeSymbol(enum CurrencyBoxTypes type);
// start siliconBpBox
static void CurrencyBox_DrawWindow(u32 windowId);
static void CurrencyBox_ClearWindow(u32 windowId);
// end siliconBpBox

union CurrencyBoxValues CurrencyBox_Create(enum CurrencyBoxTypes type, const struct WindowTemplate *template)
{
    u32 windowId = AddWindow(template);
    assertf(windowId != WINDOW_NONE, "Unable to add a window for CurrencyBox!")
    {
        union CurrencyBoxValues values = { .asU32 = 0 };
        return values;
    }

    return CurrencyBox_Init(type, windowId, STD_WINDOW_BASE_TILE_NUM, STD_WINDOW_PALETTE_NUM);
}

union CurrencyBoxValues CurrencyBox_Init(enum CurrencyBoxTypes type, u32 windowId, u32 tileNum, u32 palNum)
{
    // start siliconBpBox
    //union CurrencyBoxValues values;
    union CurrencyBoxValues values = {0};
    values.type = type;
    // end siliconBpBox

    values.windowId = windowId;
    // start siliconBpBox
    //DrawStdFrameWithCustomTileAndPalette(values.windowId, FALSE, tileNum, palNum);
    // end siliconBpBox
    CurrencyBox_PrintByType(values);
    CopyWindowToVram(values.windowId, COPYWIN_FULL);

    // start siliconBpBox
    /*
    s32 x = GetWindowAttribute(windowId, WINDOW_TILEMAP_LEFT) * 8;
    s32 y = GetWindowAttribute(windowId, WINDOW_TILEMAP_TOP) * 8;
    */
    s32 x = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_TILEMAP_LEFT) + 1);
    s32 y = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_TILEMAP_TOP));
    // end siliconBpBox
    values.spriteId = CurrencyBox_CreateLabelSprite(type, x, y);

    //values.type = type; // siliconBpBox
    values.active = TRUE;

    return values;
}

void CurrencyBox_Update(union CurrencyBoxValues values)
{
    assertf(values.active, "CurrencyBox is no longer active.")
    {
        return;
    }

    CurrencyBox_PrintByType(values);
    CopyWindowToVram(values.windowId, COPYWIN_GFX);
}

void CurrencyBox_Destroy(union CurrencyBoxValues values)
{
    assertf(values.active, "CurrencyBox is no longer active.")
    {
        return;
    }

    // start siliconBpBox
    //ClearStdWindowAndFrameToTransparent(values.windowId, TRUE);
    CurrencyBox_ClearWindow(values.windowId);
    // end siliconBpBox
    RemoveWindow(values.windowId);
    CurrencyBox_DestroyLabelSprite(values.spriteId);
}

u32 CurrencyBox_CreateLabelSprite(enum CurrencyBoxTypes type, s32 x, s32 y)
{
    LoadSpritePalette(&sCurrencyBox_LabelSpritePalette);
    u32 spriteId = CreateSprite(&sCurrencyBox_LabelSpriteTemplate, x + 16, y + 8, 0);
    if (spriteId == SPRITE_NONE)
        return SPRITE_NONE;

    if (type < ARRAY_COUNT(sCurrencyBox_LabelTypeAnims))
    {
        StartSpriteAnim(&gSprites[spriteId], type);
    }
    else
    {
        errorf("CurrencyBoxType %d does not have a Label sprite anim!", type);
        StartSpriteAnim(&gSprites[spriteId], 0);
    }

    return spriteId;
}

void CurrencyBox_DestroyLabelSprite(u32 spriteId)
{
    DestroySprite(&gSprites[spriteId]);
    FreeSpritePaletteByTag(TAG_CURRENCY_BOX);
}

void CurrencyBox_PrintMoneyAmount(u32 windowId, u32 y, u32 amount)
{
    enum CurrencyBoxTypes type = CURRENCY_BOX_MONEY;
    // start siliconBpBox
    //CurrencyBox_PrintFromValue(windowId, y, amount, CurrencyBox_GetMaxDigits(type), CurrencyBox_GetTypeSymbol(type));
    VarSet(VAR_TEMP_F, 0); // this function is NOT used for currencyboxes
    CurrencyBox_PrintFromValue(windowId, y, amount, CurrencyBox_GetMaxDigits(type), CurrencyBox_GetTypeSymbol(type), FALSE);
    // end siliconBpBox
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

// start siliconBox
//static void CurrencyBox_PrintByType(enum CurrencyBoxTypes type, u32 windowId)
static void CurrencyBox_PrintByType(union CurrencyBoxValues values)
// end siliconBox
{
    // start siliconBpBox
    //CurrencyBox_PrintFromValue(windowId, 0, CurrencyBox_GetAmount(type), CurrencyBox_GetMaxDigits(type), CurrencyBox_GetTypeSymbol(type));
    u32 windowId = values.windowId;
    CurrencyBox_DrawWindow(windowId);
    enum CurrencyBoxTypes type = values.type;
    CurrencyBox_PrintFromValue(windowId, 0, CurrencyBox_GetAmount(type), CurrencyBox_GetMaxDigits(type), CurrencyBox_GetTypeSymbol(type), values.subtract);
    // end siliconBpBox
}

// start siliconBpBox
//static void CurrencyBox_PrintFromValue(u32 windowId, u32 y, u32 amount, u32 maxDigits, const u8 *symbol)
static void CurrencyBox_PrintFromValue(u32 windowId, u32 y, u32 amount, u32 maxDigits, const u8 *symbol, bool32 subtractChange)
// end siliconBpBox
{
    // start siliconBpBox
    //FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    u32 width = (GetWindowAttribute(windowId, WINDOW_WIDTH) - CURRENCY_BOX_PADDING) * 8;
    u32 height = (GetWindowAttribute(windowId, WINDOW_HEIGHT) - CURRENCY_BOX_PADDING) * 8;
    FillWindowPixelRect(windowId, PIXEL_FILL(1), TILE_TO_PIXELS(1), TILE_TO_PIXELS(1), width, height);
    // end siliconBpBox

    // start siliconBpBox
    //u8 *strbuf = AllocZeroed(maxDigits + 1); // includes EOS
    u8 *strbuf = AllocZeroed(maxDigits + 2); // includes EOS and +/-
    // end siliconBpBox
    if (symbol != gText_EmptyString2)
    {
        u8 *txtPtr = StringCopy(strbuf, symbol);
        ConvertIntToDecimalStringN(txtPtr, amount, STR_CONV_MODE_RIGHT_ALIGN, maxDigits);
    }
    else
    {
        ConvertIntToDecimalStringN(strbuf, amount, STR_CONV_MODE_LEFT_ALIGN, maxDigits);
    }

    u32 fontId = FONT_NORMAL;
    // start siliconBpBox
    /*
    u32 x = GetStringRightAlignXOffset(fontId, strbuf, GetWindowAttribute(windowId, WINDOW_WIDTH) * 8);
    const union TextColor clr = { .foreground = 2, .shadow = 3 };
    */
    width += TILE_TO_PIXELS(1);
    u32 x = GetStringRightAlignXOffset(fontId, strbuf, width);
    y += TILE_TO_PIXELS(1);
    union TextColor clr = { .foreground = 2, .shadow = 3 };
    // end siliconBpBox

    AddTextPrinterParameterized6(windowId, fontId, x, y, 0, 0, clr, TEXT_SKIP_DRAW, strbuf);

    // start siliconBpBox
    u32 change = VarGet(VAR_TEMP_F);
    if (change)
    {
        u8 *txtPtr;

        if (subtractChange)
            txtPtr = StringCopy(strbuf, COMPOUND_STRING("-"));
        else
            txtPtr = StringCopy(strbuf, COMPOUND_STRING("{PLUS}"));

        ConvertIntToDecimalStringN(txtPtr, change, STR_CONV_MODE_LEFT_ALIGN, maxDigits);

        clr.foreground = 2;
        clr.shadow = 1;
        fontId = FONT_OUTLINED;
        x = GetStringRightAlignXOffset(fontId, strbuf, width);
        y += TILE_TO_PIXELS(1) + 2;

        AddTextPrinterParameterized6(windowId, fontId, x, y, 0, 0, clr, TEXT_SKIP_DRAW, strbuf);

        VarSet(VAR_TEMP_F, 0);
    }
    // end siliconBpBox

    Free(strbuf);
}

static u32 CurrencyBox_GetAmount(enum CurrencyBoxTypes type)
{
    switch (type)
    {
    case CURRENCY_BOX_MONEY:
        return GetMoney(&gSaveBlock1Ptr->money);
    case CURRENCY_BOX_COINS:
        return GetCoins();
    case CURRENCY_BOX_BP:
        return gSaveBlock2Ptr->frontier.battlePoints;
    default:
        errorf("CurrencyBoxType %d does not have a source!", type);
        return 0;
    }
}

static u32 CurrencyBox_GetMaxDigits(enum CurrencyBoxTypes type)
{
    switch (type)
    {
    case CURRENCY_BOX_MONEY:
        return MAX_MONEY_DIGITS;
    case CURRENCY_BOX_COINS:
        return MAX_COIN_DIGITS;
    case CURRENCY_BOX_BP:
        return MAX_DIGITS(MAX_BATTLE_FRONTIER_POINTS);
    default:
        errorf("CurrencyBoxType %d does not have the max digits!", type);
        return 1;
    }
}

static const u8 *CurrencyBox_GetTypeSymbol(enum CurrencyBoxTypes type)
{
    switch (type)
    {
    case CURRENCY_BOX_MONEY:
        return COMPOUND_STRING("¥");
    default:
        return gText_EmptyString2;
    }
}

// start siliconBpBox
static void CurrencyBox_DrawWindow(u32 windowId)
{
    u32 width = GetWindowAttribute(windowId, WINDOW_WIDTH);
    u32 height = GetWindowAttribute(windowId, WINDOW_HEIGHT);
    u32 tileNum = 0, i = 0;

    // top
    for (; i < width; i++)
    {
        if (i == 0)
            tileNum = 0;
        else if (i < (width - 1))
            tileNum = 1;
        else
            tileNum = 2;

        tileNum *= TILE_WIDTH;
        CopyToWindowPixelBuffer(windowId, &gSiliconStdFrame_Gfx[tileNum], TILE_SIZE_4BPP, i);
    }

    // middle
    for (; i < (width * (height - 1)); i++)
    {
        u32 mod = i % width;
        if (mod == 0)
            tileNum = 3;
        else if (mod < (width - 1))
            tileNum = 4;
        else
            tileNum = 5;

        tileNum *= TILE_WIDTH;
        CopyToWindowPixelBuffer(windowId, &gSiliconStdFrame_Gfx[tileNum], TILE_SIZE_4BPP, i);
    }

    // bottom
    for (; i < (width * height); i++)
    {
        u32 mod = i % width;
        if (mod == 0)
            tileNum = 6;
        else if (mod < (width - 1))
            tileNum = 7;
        else
            tileNum = 8;

        tileNum *= TILE_WIDTH;
        CopyToWindowPixelBuffer(windowId, &gSiliconStdFrame_Gfx[tileNum], TILE_SIZE_4BPP, i);
    }

    PutWindowTilemap(windowId);
}

static void CurrencyBox_ClearWindow(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
    ClearWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}
// end siliconBpBox
