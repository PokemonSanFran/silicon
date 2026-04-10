#include "battle.h" // hpexpspeed

// Battle Settings: Experience
bool32 IsExperienceOptionNotActive(void);
bool32 IsExperienceOptionAll(void);
u64 ApplyExpMultipliers(struct Pokemon,s32);
u32 GetMonItemHoldEffect(u16);
void ApplyPointsBoxMons(u32, u16);
void PrintExpShareMessage(void);
bool32 IsMonInvalid(struct Pokemon tempMon);

// Battle Settings: Multiplier
u32 GetExperienceExpMultiplerValue(void);

// Battle Settings: Individual Values
bool32 AreIndividualValuesDisabled(void);

// Battle Settings: Effort Values
bool32 AreEffortValuesEnabled(void);
bool32 IsFieldForEffortValues(u32);
u32 GetAdjustedEffortValues(void);

// Battle Settings: Whiteout
void SetUpFieldCallbackOnWhiteOut(void);

// Battle Settings: Fainted Mon
u32 GetFaintedMonOptionValue(void);
void SetFaintedMonBit(struct Pokemon *mon);
u32 IsFaintedMon(struct Pokemon *mon);
u32 IsFaintedBoxMon(struct BoxPokemon *boxMon);
void PerformPlayerFaintedMonOperations(struct Pokemon *mon);

// Battle Settings: Difficulty
enum optionBattleDifficulty GetBattleDifficulty(void);

// Battle Settings: Bag Items
u32 GetBagItemsOption(void);
bool32 CanUseBagItems(u16 itemId);
void TryToIncreaseBattleItemUseCount(u16 itemId);

// Battle Settings: Level
u32 GetLevelOption(void);
u32 GetCurrentPSFLevelCap(void);

// Battle Settings: Opponents Items
u32 CanAIUseItems(void);

// Battle Settings: Center Healing
u32 CanHealPlayer(void);

// Battle Settings: Take Wild Items
u32 GetTakeWildItemsOption(void);

// Battle Settings: Move Healing
u32 IsPlayerAllowedToUseHealingMoves(u8 battlerId, u16 moveId);

// Battle Settings: First Pokémon Catch
u32 GetFirstPokemonCatchOption(void);
bool32 IsPlayerAllowedToCatchBattler(u8 battlerId);
void TryToSetFirstPokemonCatchFlag();

// Battle Settings: Item Healing
bool32 IsPlayerAllowedToUseHealingItems(u16 itemId, bool8 checkFieldUse, bool8 checkBattleUse, bool8 checkHeldEffect);

// Battle Settings: Nickname
u32 GetNicknameOption(void);
bool32 IsMonNicknamed(struct Pokemon *mon);
bool32 IsChosenMonNicknamed(void);

// Battle Settings: Trainer Scaling
u32 HandleScaledLevel(u32, u32);
u32 HandleScaledSpecies(u32);

// Battle Settings: Points Message
bool32 IsPointsMessagesOptionOn(void);
void PrintMonRecievedEffortValues(u32 wasSentOut,u8* expMonId);
u32 PrintMonRecievedExperience(u8* expMonId, bool32 printBoosted);
u32 PrintMonRecievedEffortAndExperience(u8* expMonId, bool32 printBoosted);

// Battle Settings: Points Summary
bool32 IsPointsSummaryOff(void);
bool32 IsPointsSummaryOn(void);
bool32 IsPointsSummaryFaint(void);
bool32 IsPointsSummaryBattle(void);

// Battle Settings: Mid Battle Evolution
bool32 IsMidBattleEvolutionOn(void);

// Battle Settings: Last Used Ball
bool32 IsLastUsedBallOn(void);
bool32 IsLastUsedBallOptionAlways(void);
bool32 IsLastUsedBallOptionBest(void);
bool32 IsLastUsedBallOptionAfter(void);
bool32 IsLastUsedBallOptionAfterAndLastBallIsNone(void);
bool32 ShouldCalculateBallToDisplay(void);
u32 GetBallToDisplay(void);
void HandleLastUsedBallOnSaveblock(void);

// Battle Settings: Quick Run
bool32 IsQuickRunSetToBA(void);
void AttemptFleeWithL(u32, u32);

// Battle Settings: HP & EXP Speed
bool32 IsBarOptionInstant(u8);
u32 GetHPFraction(u8);
u32 GetEXPScale(void);
s32 SetInstantBarMove(struct BattleBarInfo *bar);

// Battle Settings: Battle Intro
enum optionBattleIntro GetBattleIntroSkip(void);
