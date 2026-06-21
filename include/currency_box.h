#ifndef GUARD_CURRENCY_BOX_H
#define GUARD_CURRENCY_BOX_H

// start siliconBpBox
#define CURRENCY_BOX_PADDING     2
//#define CURRENCY_BOX_WIDTH       10
//#define CURRENCY_BOX_HEIGHT      2
#define CURRENCY_BOX_WIDTH       (10 + CURRENCY_BOX_PADDING)
#define CURRENCY_BOX_HEIGHT      (2 + CURRENCY_BOX_PADDING)
// end siliconBpBox
#define MONEY_BOX_BASE_BLOCK     0x8
#define COINS_BOX_BASE_BLOCK     0x141
#define BP_BOX_BASE_BLOCK        MONEY_BOX_BASE_BLOCK // siliconBpBox
#define TAG_CURRENCY_BOX         0x2722

enum CurrencyBoxTypes
{
    CURRENCY_BOX_MONEY,
    CURRENCY_BOX_COINS,
    CURRENCY_BOX_BP,

    NUM_CURRENCY_BOXES
};

union CurrencyBoxValues
{
    PACKED struct {
        enum CurrencyBoxTypes type:3;
        u32 windowId:8;
        u32 spriteId:8;
        u32 active:1;
        u32 subtract:1;
        u32 pad:11;
    };
    u32 asU32;
};

struct WindowTemplate;

union CurrencyBoxValues CurrencyBox_Create(enum CurrencyBoxTypes type, const struct WindowTemplate *template);
union CurrencyBoxValues CurrencyBox_Init(enum CurrencyBoxTypes type, u32 windowId, u32 tileNum, u32 palNum);
void CurrencyBox_Update(union CurrencyBoxValues values);
void CurrencyBox_Destroy(union CurrencyBoxValues values);
u32 CurrencyBox_CreateLabelSprite(enum CurrencyBoxTypes type, s32 x, s32 y);
void CurrencyBox_DestroyLabelSprite(u32 spriteId);
void CurrencyBox_PrintMoneyAmount(u32 windowId, u32 y, u32 amount);

#endif // GUARD_CURRENCY_BOX_H
