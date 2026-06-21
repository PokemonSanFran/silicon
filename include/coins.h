#ifndef GUARD_COINS_H
#define GUARD_COINS_H

u16 GetCoins(void);
void SetCoins(u16 coinAmount);
bool8 AddCoins(u16 toAdd);
bool8 RemoveCoins(u16 toSub);

#endif // GUARD_COINS_H
