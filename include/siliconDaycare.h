#ifndef GUARD_SILICON_DAYCARE_H
#define GUARD_SILICON_DAYCARE_H

u32 AddMonToPartyOrBox(struct Pokemon pokemon);
void UpdateSiliconDaycareStepCounter(void);
void BufferUnhatchedMonEgg(void);
void ClearSiliconDaycareData(void);
void ApplyEffortValuePerk(struct Pokemon *temp, struct Pokemon *egg);
bool32 NoMoreRoomDaycareEggs(void);
u32 GetEmptyEggIndex(void);
void DebugPrintEggsAtDaycare(void);
void DebugPrintIvs(void);
bool32 NoEggsAtDaycare(void);
void MarkMonForEffortValuePerk(struct Pokemon *egg);
void SaveOriginalEggIvs(struct DayCare *daycare, u32 eggIndex);
bool32 DoesPlayerHaveSpaceForWelcomeKit(void);
void Script_IsPlayerPartyAndPokemonStorageFull(void);
void BufferEggPrices(void);
void BufferStatPrices(void);
void Script_GetDaycareCompatibilityScoreFromSave(void);
void Script_CalculateAndBufferEggPickupCost(void);
void Script_CountChangedIndividualValues(void);
void RemoveEggFromDaycare_Silicon(void);
void Script_CountNumberOfEggs(void);
void ResetUnhatchedMonEgg(void);
void EditEggContents(void);
void ViewEggContents(void);
void GiveEggFromDaycare_Silicon(void);
void Script_GetDaycareCostCode(void);
void BufferMonNicknameOrEggName(void);
void ShowEggNotification(void);
#endif // GUARD_SILICON_DAYCARE_H
