#ifndef GUARD_WONDER_TRADE_H
#define GUARD_WONDER_TRADE_H

void CreateWonderTradePokemon(void);
void ShowTradedMonReturnToStartMenu(void);
void ShowTradedMonReturnToField(void);
void CB2_SurpriseTradeFromStartMenu(void);

struct SurpriseTradeTrainer
{
    const u8 *otName;
    u32 otId;
    u8 otGender;
};

#define SURPRISE_TRADE_EGG_MOVE_SLOT 3
#define SURPRISE_TRADE_TEACHABLE_MOVE_SLOT 2
#define SURPRISE_TRADE_TRAINERS 400
#define RESIDO_DEX_COUNT 400 // PSF TODO replace with the actual constant from pokedex

#endif //GUARD_WONDER_TRADE_H
