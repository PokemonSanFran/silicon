#include "global.h"
#include "bg.h"
#include "window.h"
#include "sprite.h"
#include "menu.h"
#include "field_specials.h"
#include "script.h"
#include "event_data.h"
#include "field_specials.h"
#include "currency_box.h"

void ScrFunc_showbpbox(struct ScriptContext *ctx)
{
    u32 x = VarGet(ScriptReadHalfword(ctx));
    u32 y = VarGet(ScriptReadHalfword(ctx));

    Script_RequestEffects(SCREFF_V1 | SCREFF_HARDWARE);

    union CurrencyBoxValues bpBox = CurrencyBox_Create(
        CURRENCY_BOX_BP,
        &(const struct WindowTemplate)
        {
            .bg = 0,
            .tilemapLeft = x,
            .tilemapTop = y,
            .width = CURRENCY_BOX_WIDTH,
            .height = CURRENCY_BOX_HEIGHT,
            .paletteNum = DLG_WINDOW_PALETTE_NUM,
            .baseBlock = BP_BOX_BASE_BLOCK
        });
    ctx->data[1] = bpBox.asU32;
}

void ScrFunc_updatebpbox(struct ScriptContext *ctx)
{
    Script_RequestEffects(SCREFF_V1 | SCREFF_HARDWARE);

    union CurrencyBoxValues bpBox = { .asU32 = ctx->data[1] };
    CurrencyBox_Update(bpBox);
}

void ScrFunc_hidebpbox(struct ScriptContext *ctx)
{
    Script_RequestEffects(SCREFF_V1 | SCREFF_HARDWARE);

    union CurrencyBoxValues bpBox = { .asU32 = ctx->data[1] };
    CurrencyBox_Destroy(bpBox);
    ctx->data[1] = 0;
}

void ScrFunc_removebp(struct ScriptContext *ctx)
{
    u32 amount = VarGet(ScriptReadHalfword(ctx));
    s32 pointsToBeSet = gSaveBlock2Ptr->frontier.battlePoints - amount;
    if (pointsToBeSet < 0)
        pointsToBeSet = 0;

    gSaveBlock2Ptr->frontier.battlePoints = pointsToBeSet;
}

void ScrFunc_preparecurrencychange(struct ScriptContext *ctx)
{
    enum CurrencyBoxTypes type = ScriptReadByte(ctx);
    u32 amount = ScriptReadWord(ctx);
    bool32 subtract = ScriptReadByte(ctx);

    // silently fail instead of wraps w/ max amount
    // so that its more "accurate"
    if (amount > MAX_u16)
    {
        amount = 0;
        subtract = FALSE;
    }

    VarSet(VAR_TEMP_F, amount);

    union CurrencyBoxValues *values = (union CurrencyBoxValues *)ctx->data;
    values[3 - type].subtract = subtract;
}

void ScrFunc_preparevariablecurrencychange(struct ScriptContext *ctx)
{
    enum CurrencyBoxTypes type = ScriptReadByte(ctx);
    u32 amount = VarGet(ScriptReadWord(ctx));
    bool32 subtract = ScriptReadByte(ctx);

    // silently fail instead of wraps w/ max amount
    // so that its more "accurate"
    if (amount > MAX_u16)
    {
        amount = 0;
        subtract = FALSE;
    }

    VarSet(VAR_TEMP_F, amount);

    union CurrencyBoxValues *values = (union CurrencyBoxValues *)ctx->data;
    values[3 - type].subtract = subtract;
}
