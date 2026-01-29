#ifndef GUARD_WONDER_TRADE_H
#define GUARD_WONDER_TRADE_H

void CreateWonderTradePokemon(void);
void ShowTradedMonReturnToStartMenu(void);
void ShowTradedMonReturnToField(void);
void CB2_SurpriseTradeFromStartMenu(void);
void Task_SurpriseTrade(u8 taskId);
void CB2_ContinueSurpriseTrade(void);
void SurpriseTrade_Continue(MainCallback callback);
void CB2_StartSurpriseTrade(void);

struct SurpriseTradeTrainer
{
    const u8 *otName;
    u32 otId;
    u8 otGender;
};

#define SURPRISE_TRADE_EGG_MOVE_SLOT 3
#define SURPRISE_TRADE_TEACHABLE_MOVE_SLOT 2
#define SURPRISE_TRADE_TRAINERS 400

#endif //GUARD_WONDER_TRADE_H
