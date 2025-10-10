#ifndef GUARD_QUESTLOGIC_H
#define GUARD_QUESTLOGIC_H

bool32 HasPlayerJoinedTheTide(void);
u16 Quest_Generic_CountRemainingSubquests(u16);
bool32 KitchenvolunteeringFunc_IsMapLayoutIdForPantryMaze(int);
void Quest_Kitchenvolunteering_CreatePantryMaze(void);
u8 Quest_Kitchenvolunteering_CountRemainingItems(void);
void Quest_Rockcollector_RespawnStones(void);
u32 GetCurrentMap(void);
void Quest_Brucelee_UpdateType(u16 days);
void TryToUpdateArtisanBalls1SubQuestsState(u16);
void Quest_ArtisanBalls3_CheckBallSetReward(u32 battler);
void Quest_ArtisanBalls3_CheckFirstBattlerBallsAndSetReward(void);
void Quest_Generic_CompleteSubquests(u16 relevantQuest);
void Quest_Generic_MakeQuestRewardIfSubquestsComplete(u32 relevantQuest);
void YouRealizeTheyreEvilRight_SetFlagIfGemUsedAgainstKai(void);
u32 VSGarbodor_GetGemFromType(void);
void WowYoureStrong_GetBadgesAndSetTowerState(void);
bool32 GenerateAndStartWildFogBattle(u32 headerId, u32 area);
void IncrementFogVariable(void);
void SetFogVariableAfterLoss(void);
bool32 ShouldWildBattleBeFog(void); // fogBattle
u8* PrintUnknownLevel(u32 lvl, u32 battler, u8* text);

bool32 ShouldAskUnhoused(void);
const u8* ReturnBattleScriptCantUseItem(void);
void Quest_DrugHelmetTest_ForgetMoveByPhase(void);
void Quest_RPS_StopMoneyLoss(void);
void Quest_RPS_PayWager(void);
void Quest_RPS_CheckWager(void);
void Quest_RPS_TakeWager(void);
void Quest_CutePokemon_DailyEvent(u32);
void DebugQuest_CutePokemon(u8);
void DebugQuest_AngelDelivery(u8);
void DebugQuest_VSDeoxys(u8);
void DebugQuest_RPS(u8);
void DebugQuest_DrugHelmetTest(u8);
void DebugQuest_RestoreTirabudinGym(u8);
u32 exponent(u32 y, u32 x);
#endif //GUARD_QUESTLOGIC_H
