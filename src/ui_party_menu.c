#include "global.h"
#include "battle.h"
#include "battle_gfx_sfx_util.h"
#include "battle_interface.h"
#include "battle_message.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "battle_pyramid_bag.h"
#include "bg.h"
#include "caps.h"
#include "contest.h"
#include "decompress.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "evolution_scene.h"
#include "field_control_avatar.h"
#include "field_effect.h"
#include "field_move.h"
#include "field_player_avatar.h"
#include "field_puzzles.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "fldeff.h"
#include "follower_npc.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "hexorb.h"
#include "international_string_util.h"
#include "dynamic_placeholder_text_util.h"
#include "item.h"
#include "item_menu.h"
#include "item_use.h"
#include "link.h"
#include "mail.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "menu_specialized.h"
#include "metatile_behavior.h"
#include "move_relearner.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "player_pc.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "pokemon_summary_screen.h"
#include "pokerus.h"
#include "pokevial.h"
#include "qol_field_moves.h"
#include "quest_logic.h"
#include "region_map.h"
#include "reshow_battle_screen.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "trade.h"
#include "trig.h"
#include "window.h"
#include "options_battle.h"
#include "options_visual.h"
#include "ui_battle_info.h"
#include "ui_inventory.h"
#include "ui_map_system.h"
#include "ui_options_menu.h"
#include "ui_start_menu.h"
#include "constants/battle_frontier.h"
#include "constants/field_effects.h"
#include "constants/party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/ui_party_menu.h"
#include "constants/union_room.h"

#if UI_PARTY_MENU

struct PartySlotRect
{
    u8 x, y, width, height;
};

struct FieldMoveBlock
{
    bool8 (*isActive)(void);
    u32 fieldMoves;
    const u8 *message;
    void (*bufferStrings)(void);
};

struct PartyMenuData
{
    TaskFunc task;
    MainCallback exitCallback;
    s16 data[16];
    u8 messageId;
    bool8 chooseHalf;
    u8 partyCount;
    u8 cursorSpriteId;
    u8 monIconSpriteIds[PARTY_SIZE];
    u8 heldItemSpriteIds[PARTY_SIZE];
    u8 statusSpriteIds[PARTY_SIZE];
    u8 statStageSpriteIds[PARTY_STAT_STAGE_NUM];
    u16 statusFadeTimer;
    u8 statusFadePhase;
    u8 statusFadeLevel;
    u8 statusFadeAppliedLevel;
    bool8 statusFadePinned;
    u8 slotWindowIds[PARTY_SIZE];
    u8 heldWindowId;
    u8 windowId[NUM_PARTY_DYN_WINDOWS];
    const u8 *actions;
    u8 fieldMoveRows[PARTY_FIELD_MOVES_ROWS];
    u8 numActions;
    u8 actionCursor;
    u8 listScroll;
    u8 scrollArrowSpriteIds[PARTY_SCROLL_ARROW_COUNT];
    u8 yesNoCursor;
    u8 spinnerSpriteId;
    s16 itemCount;
    u16 maxItemCount;
    u16 textTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
    u16 slotsTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
    u16 heldTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
};

EWRAM_DATA struct PartyMenu gPartyMenu = {0};
EWRAM_DATA bool8 gPartyMenuUseExitCallback = 0;
EWRAM_DATA u8 gSelectedMonPartyId = 0;
EWRAM_DATA MainCallback gPostMenuFieldCallback = NULL;
EWRAM_DATA u8 gSelectedOrderFromParty[MAX_FRONTIER_PARTY_SIZE] = {0};
EWRAM_DATA u8 gBattlePartyCurrentOrder[PARTY_SIZE / 2] = {0}; // bits 0-3 are the current pos of Slot 1, 4-7 are Slot 2, and so on
COMMON_DATA void (*gItemUseCB)(u8, TaskFunc) = NULL;

static EWRAM_DATA struct PartyMenuData *sPartyMenuDataPtr = NULL;
static EWRAM_DATA enum Item sPartyMenuItemId = 0;
static EWRAM_DATA u8 sInitialLevel = 0;
static EWRAM_DATA u8 sFinalLevel = 0;

static void InitPartyMenu(enum PartyMenuType, enum PartyMenuLayout, u8, bool8, u8, TaskFunc, MainCallback);
static void CB2_PartyMenu_Setup(void);
static void CB2_PartyMenu_Idle(void);
static void VBlankCB_PartyMenu_Idle(void);
static void PartySetup_Bgs(void);
static void PartySetup_Graphics(void);
static void PartySetup_Windows(void);
static void PartySetup_Slots(void);
static void PartySetup_Sprites(void);
static void Task_PartyMenu_HandleHeldInput(u8);
static void PartySlot_Draw(u32);
static void PartySlot_DrawEmpty(u32);
static void PartySlot_Render(u32, u32, u32, bool32);
static void PartySlot_DrawFrame(u32, u32, bool32);
static void PartySlot_DrawMonInfo(u32, u32, u32);
static void PartySlot_DrawGender(u32, struct Pokemon *, const u8 *, u32);
static void PartySlot_DrawLevel(u32, struct Pokemon *, u32);
static void PartySlot_DrawHp(u32, struct Pokemon *, u32);
static void PartySlot_DrawBar(u32, const u8 *, u32, u32, u32);
static void PartySlot_DrawItem(u32, struct Pokemon *, u32);
static enum Stat PartySlot_GetEvItemStat(void);
static enum Stat PartySlot_GetXItemStat(void);
static u32 PartySlot_GetActiveBattler(u32);
static void PartySlot_DrawStatName(u32, enum Stat, u32);
static bool32 PartySlot_IsDireHit(void);
static void PartySlot_DrawDireHit(u32, u32);
static bool32 PartySlot_IsEvResetItem(void);
static void PartySlot_DrawEvItemStat(u32, u32, struct Pokemon *, enum Stat, u32);
static void PartySlot_DrawEvItemDelta(u32, struct Pokemon *, enum Stat, u32);
static u32 PartySlot_GetEvItemDelta(struct Pokemon *, enum Stat, u32);
static u32 PartySlot_GetEvItemMaxCount(struct Pokemon *);
static bool32 PartySlot_IsExpItem(void);
static bool32 PartySlot_IsMint(void);
static void PartySlot_DrawNature(u32, u32, struct Pokemon *, u32);
static void PartySlot_DrawNatureRow(u32, u32, u32, bool32, u32);
static u8 *PartySlot_StringNatureStat(u8 *, u32, bool32);
static bool32 PartySlot_IsAbilityItem(void);
static void PartySlot_DrawAbility(u32, u32, struct Pokemon *, u32);
static bool32 PartySlot_IsPPItem(void);
static void PartySlot_DrawPP(u32, struct Pokemon *, u32);
static enum FormChanges PartySlot_GetFormChangeMethod(void);
static enum Item PartySlot_GetFormChangeItem(void);
static const u8 *PartySlot_GetFormName(enum Species);
static bool32 PartySlot_ShowsFormChange(struct Pokemon *);
static bool32 PartyMon_HasFormChangeItem(enum Species, enum FormChanges, enum Item);
static bool32 PartySlot_IsRotomCatalog(void);
static void PartySlot_DrawFormChange(u32, u32, struct Pokemon *, u32);
static enum Species PartyMon_GetFormChangeTarget(struct Pokemon *);
static u32 PartySlot_GetExpItemCeiling(void);
static u32 PartySlot_GetExpItemGain(struct Pokemon *, u32);
static u32 PartySlot_GetExpItemMaxCount(struct Pokemon *);
static void PartySlot_DrawExpItem(u32, u32, struct Pokemon *, u32);
static bool32 PartySpinner_TryOpen(u8, u32, s32);
static void ItemUse_ApplyEvItem(u8, u32);
static void PartySpinner_Close(void);
static void Task_HandleItemSpinnerInput(u8);
static void PartySlot_DrawEvReset(u32, u32);
static void PartySlot_PrintNumber(u32, const struct PartySlotRect *, u32, enum PartyTextColors, u32);
static void PartySlot_DrawDescription(u32, u32, enum PartyTextColors, u32);
static u32 PartySlot_GetDescription(u32, enum PartyTextColors *);
static u32 PartySlot_GetTeachMoveDescription(struct Pokemon *, enum Move, enum PartyTextColors *);
static void PartySlot_FillRect(u32, u32, u32, u32, u32, u32);
static void PartySlot_Print(u32, u32, u32, u32, enum PartyTextColors, const u8 *);
static s8 *PartyCursor_GetSlotPtr(void);
static bool32 PartyCursor_HandleDirectionalInput(void);
static bool32 PartyMenu_CanSwitch(void);
static bool32 PartyMenu_IsDefaultScreen(void);
static void PartyCursor_SnapToSlot(void);
static void PartyHeld_Lift(void);
static void PartyHeld_SnapToSlot(void);
static void PartyHeld_Place(bool32);
static void PartySetup_MonIcons(void);
static void PartyMonIcon_Create(u32);
static void PartyMonIcon_UpdateAnim(u32);
static enum PartyMonIconAnims PartyMon_GetIconAnim(struct Pokemon *, bool32);
static u32 PartyMonIcon_GetBouncingSlot(void);
static void SpriteCB_PartyMonIcon(struct Sprite *);
static void PartySetup_HeldItems(void);
static void UpdatePartyMonHeldItemSprite(u32);
static void PartySetup_StatusIcons(void);
static void SetPartyMonAilmentGfx(u32);
static void PartyStatusIcons_UpdateFade(void);
static void PartySetup_StatStages(void);
static void PartyStatStages_Update(void);
static void PartyMonSprites_SetLifted(u32, bool32);
static void PartyMonSprites_MoveToSlot(u32, u32);
static s16 PartyMonIcon_GetX(u32);
static s16 PartyMonIcon_GetY(u32);
static void PrintMessage(const u8 *);
static void Task_PrintAndWaitForText(u8);
static void PartyView_ExpandHeader(u32);
static void PartyView_PrintHeader(const u8 *);
static void PartyView_ClearHeader(void);
static void PartyView_ClearFooter(void);
static enum PartyMenuFooters PartyView_GetChooseMonFooter(void);
static enum PartyMenuFooters PartyView_GetFooter(u32);
static void PartyView_DrawFooter(enum PartyMenuFooters);
static void PartyMenuRemoveWindow(u8 *);
static void HandleChooseMonSelection(u8, s8 *);
static bool8 IsSelectedMonNotEgg(u8 *);
bool8 DoesSelectedMonKnowHM(u8 *);
static void HandleChooseMonCancel(u8, s8 *);
static bool8 DisplayCancelChooseMonYesNo(u8);
static void Task_CancelChooseMonYesNo(u8);
static void Task_HandleCancelChooseMonYesNoInput(u8);
static void CancelParticipationPrompt(u8);
static void Task_CancelParticipationYesNo(u8);
static void Task_HandleCancelParticipationYesNoInput(u8);
static void FinishTwoMonAction(u8);
static void Task_ReturnToChooseMonAfterText(u8);
static void PartyItem_ReturnOrCloseAfterText(u8);
static void PartyItem_DisplayNoEffect(u8);
static void Task_WaitForLinkAndReturnToChooseMon(u8);
static void Task_ReturnToChooseMonAfterConfirm(u8);
static void PartyMenuDisplayYesNoMenu(void);
static void PartyYesNo_Draw(u32);
static s8 PartyMenuProcessYesNoInput(void);
static void Task_ClosePartyMenu(u8);
static void Task_ClosePartyMenuAfterText(u8);
static void CB2_SetUpExitToBattleScreen(void);
static void Task_ClosePartyMenuAndSetCB2(u8);
static void PartyMenu_Free(void);
static void BufferMonSelection(void);
static void Task_PartyMenuWaitForFade(u8);
static void Task_ChooseContestMon(u8);
static void CB2_ChooseContestMon(void);
static void CB2_ReopenPartyMenuFromPC(void);
static void Task_ChoosePartyMon(u8);
static void Task_ChooseMonForMoveRelearner(u8);
static void CB2_ChooseMonForMoveRelearner(void);
static void Task_BattlePyramidChooseMonHeldItems(u8);
static u8 GetPartyLayoutFromBattleType(void);
static void Task_HideFollowerNPCForTeleport(u8);
static void Task_FieldMoveWaitForFade(u8);
static enum Species GetFieldMoveMonSpecies(void);
static void FieldCallback_Surf(void);
static void FieldCallback_Waterfall(void);
static void FieldCallback_Dive(void);
static void FieldCallback_RockClimb(void);
static void BufferBattlePartyOrder(u8 *, u8);
static void BufferBattlePartyOrderBySide(u8 *, u8, enum BattlerId);
static u8 GetPartyIdFromBattleSlot(u8);
static void SetPartyIdAtBattleSlot(u8, u8);
static void UpdatePartyToBattleOrder(void);
static void UpdatePartyToFieldOrder(void);
static u8 CombinedToIndividualPartyId(u8);
static u8 IndividualToCombinedPartyId(u8, enum BattlerId);
static void LoadBattlePartyCurrentOrderForLayout(void);
static void GetMultiPartyForSummaryScreen(void);
static void RestoreMultiPartyFromSummaryScreen(void);
static void GetPartyAndSlotFromPartyMenuId(s8, struct Pokemon **, s8 *);
static struct Pokemon *GetPartyMonFromPartyMenuId(s8);
static void CreateHeldItemSpriteForTrade(u8, bool8);
static void SpriteCB_HeldItem(struct Sprite *);
static void CB2_ReturnToBagMenu(void);
static void Task_SetSacredAshCB(u8);
static void Task_UsePokevialFromField(u8);
static void Task_ValidateChosenHalfParty(u8);
static void Task_TryCreateSelectionWindow(u8);
static bool8 CreateSelectionWindow(u8);
static void SetPartyMonSelectionActions(struct Pokemon *, u8, u8);
static void SetPartyMonFieldSelectionActions(struct Pokemon *, u8);
static u8 GetPartyMenuActionsType(struct Pokemon *);
static u8 GetPartyMenuActionsTypeInBattle(struct Pokemon *);
static u8 GetPartySlotEntryStatus(s8);
static bool8 GetBattleEntryEligibility(struct Pokemon *);
static u8 CheckBattleEntriesAndGetMessage(void);
static bool8 HasPartySlotAlreadyBeenSelected(u8);
static void Task_ContinueChoosingHalfParty(u8);
static u8 GetMaxBattleEntries(void);
static u8 GetMinBattleEntries(void);
static u8 GetBattleEntryLevelCap(void);
static u8 DisplaySelectionWindow(u8);
static void PartyActions_Draw(u32);
static bool32 PartyActions_IsHexorbBlocked(u32);
static void PartyMoves_Draw(u32);
static bool32 PartyMoves_IsPPBoostItem(void);
static u32 PartyMoves_GetPPBoost(struct Pokemon *, u32);
static u32 PartyMoves_GetPPRestore(struct Pokemon *, u32);
static s32 PartyList_ProcessInput(void (*)(u32));
static void ShowMoveSelectWindow(u8);
static void Task_HandleWhichMoveInput(u8);
static void SetSelectedMoveForItem(u8);
static void ReturnToUseOnWhichMon(u8);
static void TryUseItemOnMove(u8);
static void PartyList_Clear(u32, u32);
static void PartyList_DrawFrame(u8, u8, u8, u8, u8, u8);
static void PartyList_ClearFrame(u8, u8, u8, u8, u8, u8);
static void PartyList_PrintRow(u32, u32, u32, enum PartyTextColors, const u8 *);
static void PartyList_CreateScrollArrows(void);
static void SpriteCB_PartyScrollArrow(struct Sprite *);
static void PartyList_DestroyScrollArrows(void);
static void Task_HandleSelectionMenuInput(u8);
static void CursorCb_Summary(u8);
static void CB2_ShowPokemonSummaryScreen(void);
static void CursorCb_Switch(u8);
static void CursorCb_Cancel1(u8);
static void CursorCb_SendMon(u8);
static void CursorCb_Enter(u8);
static void CursorCb_NoEntry(u8);
static void CursorCb_Store(u8);
static u32 TrySwitchInPokemon(void);
static void SwapPartyPokemon(struct Pokemon *, struct Pokemon *);
static void DisplayFieldMoveExitAreaMessage(u8);
static void Task_FieldMoveExitAreaYesNo(u8);
static void Task_HandleFieldMoveExitAreaYesNoInput(u8);
static void Task_CancelAfterAorBPress(u8);
static void DisplayCantUseFlashMessage(void);
static void DisplayCantUseSurfMessage(void);
static void Task_PartyMenuModifyHP(u8);
static void ResetHPTaskData(u8, u8, u32);
static bool32 IsHPRecoveryItem(enum Item);
static void GetMedicineItemEffectMessage(enum Item, u32);
static bool32 NotUsingHPEVItemOnShedinja(struct Pokemon *, enum Item);
static bool32 IsItemFlute(enum Item);
static void Task_DisplayHPRestoredMessage(u8);
static void UseSacredAsh(u8);
static void Task_SacredAshLoop(u8);
static void Task_SacredAshDisplayHPRestored(u8);
static bool8 IsMonNotFullyHealed(void);
static void HealMonFromSlotId(void);
static void PokevialStartVariablesAndRun(u8, TaskFunc);
static void UsePokevial(u8);
static void Task_PokevialLoop(u8);
static void ItemUse_ApplyExpItem(u8, u32);
static void UpdateMonDisplayInfoAfterRareCandy(u8, struct Pokemon *);
static void BufferMonStatsToTaskData(struct Pokemon *, s16 *);
static void Task_DisplayLevelUpStatsPg1(u8);
static void Task_DisplayLevelUpStatsPg2(u8);
static void DisplayLevelUpStatsPg1(u8);
static void DisplayLevelUpStatsPg2(u8);
static void DrawLevelUpStats(u32, const u16 *, const u16 *);
static u8 CreateLevelUpStatsWindow(void);
static void RemoveLevelUpStatsWindow(void);
static void Task_TryLearnNewMoves(u8);
static void Task_TryLearningNextMove(u8);
static void CB2_ReturnToPartyMenuUsingRareCandy(void);
static void PartyMenuTryEvolution(u8);
static void DisplayMonNeedsToReplaceMove(u8);
static void DisplayMonLearnedMove(u8, u16);
static void DisplayLearnMoveMessage(const u8 *);
static void DisplayLearnMoveMessageAndClose(u8, const u8 *);
static void Task_LearnedMove(u8);
static void Task_DoLearnedMoveFanfareAfterText(u8);
static void Task_LearnNextMoveOrClosePartyMenu(u8);
static void Task_ReplaceMoveYesNo(u8);
static void Task_HandleReplaceMoveYesNoInput(u8);
static void Task_ShowSummaryScreenToForgetMove(u8);
static void CB2_ShowSummaryScreenToForgetMove(void);
static void CB2_ReturnToPartyMenuWhileLearningMove(void);
static void Task_ReturnToPartyMenuWhileLearningMove(u8);
static void DisplayPartyMenuForgotMoveMessage(u8);
static void Task_PartyMenuReplaceMove(u8);
static void StopLearningMovePrompt(u8);
static void Task_HandleStopLearningMove(u8);
static void Task_StopLearningMoveYesNo(u8);
static void Task_HandleStopLearningMoveYesNoInput(u8);
static void Task_TryLearningNextMoveAfterText(u8);
static void TryItemHoldFormChange(struct Pokemon *, s8, enum BattleTrainer);
static void BufferBagFullCantTakeItemMessage(void);
static void DisplayTookHeldItemMessage(struct Pokemon *, enum Item, bool8);
static void DisplayGaveHeldItemMessage(struct Pokemon *, enum Item, bool8, u8);
static void DisplayAlreadyHoldingItemSwitchMessage(struct Pokemon *, enum Item, bool8);
static void DisplaySwitchedHeldItemMessage(enum Item, enum Item, bool8);
static void GiveItemToMon(struct Pokemon *, enum Item);
static void CursorCb_Item(u8);
static void CursorCb_Give(u8);
static void CB2_SelectBagItemToGive(void);
static void CB2_GiveHoldItem(void);
static void Task_GiveHoldItem(u8);
static void Task_SwitchHoldItemsPrompt(u8);
static void Task_SwitchItemsYesNo(u8);
static void Task_HandleSwitchItemsYesNoInput(u8);
static void CursorCb_TakeItem(u8);
static void Task_UpdateHeldItemSprite(u8);
static void CursorCb_MoveItem(u8);
static void CursorCb_MoveItemCallback(u8);
static void CursorCb_Cancel2(u8);
static void GiveItemToSelectedMon(u8);
static void Task_UpdateHeldItemSpriteAndClosePartyMenu(u8);
static void Task_SwitchItemsFromBagYesNo(u8);
static void Task_HandleSwitchItemsFromBagYesNoInput(u8);
static bool8 ReturnGiveItemToBagOrPC(enum Item);
static void CursorCb_Stub(u8);
static void CursorCb_FieldMoves(u8);
static void Task_HandleFieldMoveMenuInput(u8);
static bool32 PartyMon_CanUseFieldMove(struct Pokemon *, enum FieldMove);
static bool32 PartyMon_HasFieldMoves(struct Pokemon *);
static void SetPartyMonFieldMoveActions(struct Pokemon *);
static void PartyFieldMoves_Draw(u32);
static void BufferCurrentMapName(void);
static const struct FieldMoveBlock *PartyMenu_GetFieldMoveBlock(enum FieldMove);
static bool32 PartyMenu_IsFieldMoveBlocked(enum FieldMove);
static void CursorCb_FieldMove(u8);
static void TryTutorSelectedMon(u8);
static void TryGiveMailToSelectedMon(u8);
static void TryGiveItemToSelectedMon(u8);
static void TryEnterMonForMinigame(u8, u8);
static u32 PartyMon_GetNewAbilityNum(struct Pokemon *);
static void Task_ChangeAbility(u8);
static void Task_Mint(u8);
static void ItemUse_ApplyReduceEvItem(u8, u32);
static u16 ItemEffectToMonEv(struct Pokemon *, enum ItemEffectType);
static void ItemEffectToStatString(enum ItemEffectType, u8 *);
static void Task_DynamaxCandy(u8);
static void PartyMenu_Refresh(void);
static bool32 IsFusionMon(enum Species);
static void FormChangeTeachMove(u8, enum Move, u32);
static void DeleteMove(struct Pokemon *, enum Move);
static bool32 DoesMonHaveAnyMoves(struct Pokemon *);
static bool32 TryItemUseFusionChange(u8, TaskFunc);
static void RestoreFusionMon(struct Pokemon *);
static void DeleteInvalidFusionMoves(struct Pokemon *, enum Species);
static void Task_TryItemUseFusionChange(u8);
static void SpriteCB_FormChangeIconMosaic(struct Sprite *);
static void Task_TryItemUseFormChange(u8);
static bool32 TryItemUseFormChange(u8, TaskFunc);
static bool32 TryMultichoiceFormChange(u8);
static void CursorCb_CatalogBulb(u8);
static void CursorCb_CatalogOven(u8);
static void CursorCb_CatalogWashing(u8);
static void CursorCb_CatalogFridge(u8);
static void CursorCb_CatalogFan(u8);
static void CursorCb_CatalogMower(u8);
static void CursorCb_ChangeForm(u8);
static void CursorCb_ChangeAbility(u8);
static void DisplayHexorbMessageAndScheduleTask(u8, const u8 *, TaskFunc, bool32);
static void TryHexorbAndPrintResult(u8);
static void DisplayHexorbResult(u8, u32, enum HexorbResultCodes, struct Pokemon *);
static void Task_RetryHexorbAfterFailedStatus(u8);
static void Task_RetryHexorbAfterFailedMon(u8);

#include "data/ui_party_menu.h"

// ==================================================
// Party menu set up
// ==================================================

static void InitPartyMenu(enum PartyMenuType menuType, enum PartyMenuLayout layout, u8 partyAction, bool8 keepCursorPos, u8 messageId, TaskFunc task, MainCallback callback)
{
    sPartyMenuDataPtr = AllocZeroed(sizeof(struct PartyMenuData));
    if (!sPartyMenuDataPtr)
    {
        SetMainCallback2(callback);
        return;
    }

    gPartyMenu.menuType = menuType;
    gPartyMenu.exitCallback = callback;
    gPartyMenu.action = partyAction;
    if (layout != KEEP_PARTY_LAYOUT)
        gPartyMenu.layout = layout;

    sPartyMenuDataPtr->task = task;
    sPartyMenuDataPtr->messageId = messageId;
    sPartyMenuDataPtr->chooseHalf = (menuType == PARTY_MENU_TYPE_CHOOSE_HALF);
    sPartyMenuDataPtr->partyCount = CalculatePlayerPartyCount();

    if (!keepCursorPos || gPartyMenu.slotId >= sPartyMenuDataPtr->partyCount)
        gPartyMenu.slotId = 0;

    gTextFlags.autoScroll = 0;
    memset(sPartyMenuDataPtr->monIconSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->monIconSpriteIds));
    memset(sPartyMenuDataPtr->heldItemSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->heldItemSpriteIds));
    memset(sPartyMenuDataPtr->statusSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->statusSpriteIds));
    memset(sPartyMenuDataPtr->statStageSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->statStageSpriteIds));
    memset(sPartyMenuDataPtr->scrollArrowSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->scrollArrowSpriteIds));
    memset(sPartyMenuDataPtr->windowId, WINDOW_NONE, sizeof(sPartyMenuDataPtr->windowId));
    gMain.state = 0;
    SetMainCallback2(CB2_PartyMenu_Setup);
}

static void CB2_PartyMenu_Setup(void)
{
    enum PartyMenuSetupSteps steps = gMain.state;

    switch (steps)
    {
    case PARTY_SETUP_RESET:
        CpuFill16(0, (void *)VRAM, VRAM_SIZE);
        FillPalette(RGB_BLACK, BG_PLTT_ID(0), PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinatesAndBgCntRegs();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        FieldClearVBlankHBlankCallbacks();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        FreeAllWindowBuffers();
        ResetSpriteData();
        ResetTasks();
        break;
    case PARTY_SETUP_BG:
        PartySetup_Bgs();
        break;
    case PARTY_SETUP_GFX:
        PartySetup_Graphics();
        break;
    case PARTY_SETUP_WINDOWS:
        PartySetup_Windows();
        break;
    case PARTY_SETUP_SLOTS:
        PartySetup_Slots();
        break;
    case PARTY_SETUP_SPRITES:
        PartySetup_Sprites();
        break;
    case PARTY_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        break;
    case PARTY_SETUP_FINISH:
        CreateTask(sPartyMenuDataPtr->task, 0);
        DisplayPartyMenuStdMessage(sPartyMenuDataPtr->messageId);
        SetVBlankCallback(VBlankCB_PartyMenu_Idle);
        SetMainCallback2(CB2_PartyMenu_Idle);
        return;
    default:
        break;
    }

    gMain.state++;
}

static void CB2_PartyMenu_Idle(void)
{
    PartyStatusIcons_UpdateFade();
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_PartyMenu_Idle(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void PartySetup_Bgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sPartyMenu_BackgroundTemplates, NELEMS(sPartyMenu_BackgroundTemplates));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetBgTilemapBuffer(PARTY_BG_TEXT, sPartyMenuDataPtr->textTilemapBuf);
    SetBgTilemapBuffer(PARTY_BG_HELD, sPartyMenuDataPtr->heldTilemapBuf);
    SetBgTilemapBuffer(PARTY_BG_SLOTS, sPartyMenuDataPtr->slotsTilemapBuf);
    ShowBg(PARTY_BG_TEXT);
    ShowBg(PARTY_BG_HELD);
    ShowBg(PARTY_BG_SLOTS);
    ShowBg(PARTY_BG_WALLPAPER);
}

static void PartySetup_Graphics(void)
{
    DecompressDataWithHeaderVram(sPartyMenu_Gfx_Wallpaper, (void *)BG_CHAR_ADDR(GetBgAttribute(PARTY_BG_WALLPAPER, BG_ATTR_CHARBASEINDEX)));
    LoadBgTilemap(PARTY_BG_WALLPAPER, sPartyMenu_Tilemap_Wallpaper, BG_SCREEN_SIZE, 0);
    LoadPalette(sPartyMenu_Pals_Wallpaper[OptionsMenu_GetSavedOptions(VISUAL_SETTINGS, VISUAL_OPTIONS_COLOR)],
                BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    SetBackdropFromColor(RGB_BLACK);

    LoadPalette(&sPartyMenu_Pal_Slot[BG_PLTT_ID(PARTY_BG_PAL_SLOT_MAIN)], BG_PLTT_ID(PARTY_BG_PAL_SLOT_MAIN), PLTT_SIZE_4BPP);
    LoadPalette(&sPartyMenu_Pal_Slot[BG_PLTT_ID(PARTY_BG_PAL_SLOT_MAIN)], BG_PLTT_ID(PARTY_BG_PAL_SLOT_MARKED), PLTT_SIZE_4BPP);
    LoadPalette(&sPartyMenu_Pal_Slot[BG_PLTT_ID(PARTY_BG_PAL_SLOT_MARKED) + PARTY_SLOT_MARKED_PAL_START],
                BG_PLTT_ID(PARTY_BG_PAL_SLOT_MARKED) + PARTY_SLOT_MARKED_PAL_START,
                PLTT_SIZEOF(PARTY_SLOT_MARKED_PAL_END - PARTY_SLOT_MARKED_PAL_START + 1));
    LoadPalette(sPartyMenu_Pal_HelperText, BG_PLTT_ID(PARTY_BG_PAL_HELPER), PLTT_SIZE_4BPP);

    LoadUserWindowBorderGfxOnBg(PARTY_BG_TEXT, PARTY_TEXT_TILE_FRAME, BG_PLTT_ID(PARTY_BG_PAL_FRAME));
    LoadBgTiles(PARTY_BG_TEXT, sPartyMenu_Gfx_MenuFrame, sizeof(sPartyMenu_Gfx_MenuFrame), PARTY_TEXT_TILE_MENU_FRAME);
    LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(PARTY_BG_PAL_DIALOG), PLTT_SIZE_4BPP);
    LoadPalette(&sPartyMenu_Pal_Slot[BG_PLTT_ID(PARTY_TILES_PAL_MENU)], BG_PLTT_ID(PARTY_BG_PAL_MENU_TEXT), PLTT_SIZE_4BPP);
}

static void PartySetup_Windows(void)
{
    InitWindows(sPartyMenu_WindowTemplates);
    DeactivateAllTextPrinters();
    FillWindowPixelBuffer(PARTY_WIN_HEADER, PIXEL_FILL(0));
    PutWindowTilemap(PARTY_WIN_HEADER);
    FillWindowPixelBuffer(PARTY_WIN_FOOTER, PIXEL_FILL(0));
    PutWindowTilemap(PARTY_WIN_FOOTER);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);

    u32 baseBlock = 1;
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        u32 row = slot / PARTY_SLOT_COLUMNS;
        struct WindowTemplate template =
        {
            .bg = PARTY_BG_SLOTS,
            .tilemapLeft = PARTY_SLOT_LEFT + PARTY_SLOT_WIDTH * (slot % PARTY_SLOT_COLUMNS),
            .tilemapTop = sPartyMenu_SlotRows[row].top,
            .width = PARTY_SLOT_WIDTH,
            .height = sPartyMenu_SlotRows[row].height,
            .paletteNum = PARTY_BG_PAL_SLOT_MAIN,
            .baseBlock = baseBlock,
        };

        sPartyMenuDataPtr->slotWindowIds[slot] = AddWindow(&template);
        baseBlock += template.width * template.height;
    }

    struct WindowTemplate heldTemplate =
    {
        .bg = PARTY_BG_HELD,
        .width = PARTY_SLOT_WIDTH,
        .height = PARTY_SLOT_MID_HEIGHT,
        .paletteNum = PARTY_BG_PAL_SLOT_MAIN,
        .baseBlock = baseBlock,
    };
    sPartyMenuDataPtr->heldWindowId = AddWindow(&heldTemplate);
}

static void PartySetup_Slots(void)
{
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
        PartySlot_Draw(slot);
}

static void PartySetup_Sprites(void)
{
    PartySetup_MonIcons();

    LoadSpritePalette(&sPartyMenu_SpritePalette_Ui);
    PartySetup_HeldItems();
    PartySetup_StatusIcons();
    PartySetup_StatStages();

    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_Cursor);
    sPartyMenuDataPtr->cursorSpriteId = CreateSprite(&sPartyMenu_SpriteTemplate_Cursor, 0, 0, PARTY_SPRITE_SUBPRIORITY_CURSOR);

    struct Sprite *cursor = &gSprites[sPartyMenuDataPtr->cursorSpriteId];
    SetSubspriteTables(cursor, sPartyMenu_SubspriteTable_Cursor);
    cursor->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
    PartyCursor_SnapToSlot();
}

static void PartyMenu_Refresh(void)
{
    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
    {
        FreeAndDestroyMonIconSprite(&gSprites[sPartyMenuDataPtr->monIconSpriteIds[slot]]);
        if (sPartyMenuDataPtr->heldItemSpriteIds[slot] != SPRITE_NONE)
            DestroySprite(&gSprites[sPartyMenuDataPtr->heldItemSpriteIds[slot]]);
        if (sPartyMenuDataPtr->statusSpriteIds[slot] != SPRITE_NONE)
            DestroySprite(&gSprites[sPartyMenuDataPtr->statusSpriteIds[slot]]);
    }
    memset(sPartyMenuDataPtr->monIconSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->monIconSpriteIds));
    memset(sPartyMenuDataPtr->heldItemSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->heldItemSpriteIds));
    memset(sPartyMenuDataPtr->statusSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->statusSpriteIds));

    sPartyMenuDataPtr->partyCount = CalculatePlayerPartyCount();
    PartySetup_Slots();
    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
    {
        PartyMonIcon_Create(slot);
        UpdatePartyMonHeldItemSprite(slot);
        SetPartyMonAilmentGfx(slot);
    }
    PartyCursor_SnapToSlot();
}

// ==================================================
// Input
// ==================================================

void Task_HandleChooseMonInput(u8 taskId)
{
    if (!gPaletteFade.active && MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        s8 *slotPtr = PartyCursor_GetSlotPtr();
        u32 prevSlot = *slotPtr;

        if (PartyCursor_HandleDirectionalInput())
        {
            PartyCursor_SnapToSlot();
            if (PartySlot_GetEvItemStat() != NUM_STATS
             || PartySlot_IsExpItem()
             || PartySlot_IsMint()
             || PartySlot_IsAbilityItem()
             || PartySlot_IsPPItem()
             || PartySlot_GetFormChangeMethod() != FORM_CHANGE_TERMINATOR
             || PartySlot_IsRotomCatalog()
             || PartySlot_GetXItemStat() != NUM_BATTLE_STATS)
            {
                PartySlot_Draw(prevSlot);
                PartySlot_Draw(*slotPtr);
            }
            PartyStatStages_Update();
        }
        else if (JOY_NEW(A_BUTTON))
        {
            HandleChooseMonSelection(taskId, slotPtr);
        }
        else if (JOY_NEW(SELECT_BUTTON) && PartyMenu_CanSwitch())
        {
            PlaySE(SE_SELECT);
            PartyHeld_Lift();
            gTasks[taskId].func = Task_PartyMenu_HandleHeldInput;
        }
        else if (JOY_NEW(B_BUTTON))
        {
            HandleChooseMonCancel(taskId, slotPtr);
        }
        else if (JOY_NEW(START_BUTTON) && sPartyMenuDataPtr->chooseHalf)
        {
            gPartyMenu.task(taskId);
        }
        else if (JOY_NEW(START_BUTTON) && PartyMenu_IsDefaultScreen())
        {
            if (CellularSignal_GetCurrentStrength() == START_SIGNAL_NONE)
            {
                PlaySE(SE_BOO);
                PartyView_DrawFooter(PARTY_FOOTER_NO_SIGNAL);
                gTasks[taskId].func = Task_ReturnToChooseMonAfterConfirm;
            }
            else
            {
                PlaySE(SE_SELECT);
                PokemonPC_SetReturnToPartyCallback(CB2_ReopenPartyMenuFromPC);
                sPartyMenuDataPtr->exitCallback = CB2_ShowPokemonPCFromParty;
                Task_ClosePartyMenu(taskId);
            }
        }
    }
}

static void HandleChooseMonSelection(u8 taskId, s8 *slotPtr)
{
    switch (gPartyMenu.action)
    {
    case PARTY_ACTION_SOFTBOILED:
        if (IsSelectedMonNotEgg((u8 *)slotPtr))
        {
            PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
            Task_TryUseSoftboiledOnPartyMon(taskId);
        }
        break;
    case PARTY_ACTION_USE_ITEM:
        if (IsSelectedMonNotEgg((u8 *)slotPtr))
        {
            if (gPartyMenu.menuType == PARTY_MENU_TYPE_IN_BATTLE)
                sPartyMenuDataPtr->exitCallback = CB2_SetUpExitToBattleScreen;

            PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
            gItemUseCB(taskId, Task_ClosePartyMenuAfterText);
        }
        break;
    case PARTY_ACTION_MOVE_TUTOR:
        if (IsSelectedMonNotEgg((u8 *)slotPtr))
        {
            PlaySE(SE_SELECT);
            PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
            TryTutorSelectedMon(taskId);
        }
        break;
    case PARTY_ACTION_GIVE_MAILBOX_MAIL:
        if (IsSelectedMonNotEgg((u8 *)slotPtr))
        {
            PlaySE(SE_SELECT);
            PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
            TryGiveMailToSelectedMon(taskId);
        }
        break;
    case PARTY_ACTION_GIVE_ITEM:
    case PARTY_ACTION_GIVE_PC_ITEM:
        if (IsSelectedMonNotEgg((u8 *)slotPtr))
        {
            PlaySE(SE_SELECT);
            PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
            TryGiveItemToSelectedMon(taskId);
        }
        break;
    case PARTY_ACTION_CHOOSE_AND_CLOSE:
        PlaySE(SE_SELECT);
        Task_ClosePartyMenu(taskId);
        break;
    case PARTY_ACTION_MINIGAME:
        if (IsSelectedMonNotEgg((u8 *)slotPtr))
        {
            TryEnterMonForMinigame(taskId, (u8)*slotPtr);
        }
        break;
    case PARTY_ACTION_CHOOSE_FAINTED_MON:
    {
        u8 partyId = GetPartyIdFromBattleSlot((u8)*slotPtr);
        struct Pokemon *party = NULL;
        s8 partySlot = 0;
        GetPartyAndSlotFromPartyMenuId(*slotPtr, &party, &partySlot);

        if (GetMonData(&party[partySlot], MON_DATA_HP) > 0
         || GetMonData(&party[partySlot], MON_DATA_SPECIES_OR_EGG) == SPECIES_EGG
         || ((gBattleTypeFlags & BATTLE_TYPE_MULTI) && !AreMultiPartiesFullTeams() && partyId >= (PARTY_SIZE / 2))
         || IsFaintedMon(&party[partySlot]))
        {
            // Can't select if egg, alive, or doesn't belong to you
            // Can't select if Fainted Mon is active and the 'mon in question has fainted either.
            PlaySE(SE_FAILURE);
        }
        else
        {
            PlaySE(SE_SELECT);
            gSelectedMonPartyId = CombinedToIndividualPartyId(partyId);
            Task_ClosePartyMenu(taskId);
        }
        break;
    }
    case PARTY_ACTION_SEND_MON_TO_BOX:
    {
        u8 partyId = (u8)*slotPtr;
        if ((gBattleTypeFlags & BATTLE_TYPE_MULTI) && !AreMultiPartiesFullTeams() && partyId >= (PARTY_SIZE / 2))
        {
            // Can't select if mon doesn't belong to you
            PlaySE(SE_FAILURE);
            DisplayPartyMenuMessage(COMPOUND_STRING("Cannot send a mon that doesn't\nbelong to you to the box.{PAUSE_UNTIL_PRESS}"), FALSE);
            gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
        }
        else if (DoesSelectedMonKnowHM((u8 *)slotPtr))
        {
            PlaySE(SE_FAILURE);
            DisplayPartyMenuMessage(COMPOUND_STRING("Cannot send that mon to the box,\nbecause it knows a HM move.{PAUSE_UNTIL_PRESS}"), FALSE);
            gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
        }
        else
        {
            PlaySE(SE_SELECT);
            gSelectedMonPartyId = GetPartyIdFromBattleSlot(partyId);
            Task_ClosePartyMenu(taskId);
        }
        break;
    }
    default:
    case PARTY_ACTION_ABILITY_PREVENTS:
    case PARTY_ACTION_SWITCHING:
        PlaySE(SE_SELECT);
        Task_TryCreateSelectionWindow(taskId);
        break;
    }
}

static bool8 IsSelectedMonNotEgg(u8 *slotPtr)
{
    if (GetMonData(&gParties[B_TRAINER_PLAYER][*slotPtr], MON_DATA_IS_EGG) == TRUE)
    {
        PlaySE(SE_FAILURE);
        return FALSE;
    }
    return TRUE;
}

bool8 DoesSelectedMonKnowHM(u8 *slotPtr)
{
    if (B_CATCH_SWAP_CHECK_HMS == FALSE)
        return FALSE;

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        if (IsMoveHM(GetMonData(&gParties[B_TRAINER_PLAYER][*slotPtr], MON_DATA_MOVE1 + i)))
            return TRUE;
    }
    return FALSE;
}

static void HandleChooseMonCancel(u8 taskId, s8 *slotPtr)
{
    switch (gPartyMenu.action)
    {
    case PARTY_ACTION_SEND_OUT:
    case PARTY_ACTION_CHOOSE_FAINTED_MON:
        PlaySE(SE_FAILURE);
        break;
    case PARTY_ACTION_SWITCH:
    case PARTY_ACTION_SOFTBOILED:
        PlaySE(SE_SELECT);
        FinishTwoMonAction(taskId);
        break;
    case PARTY_ACTION_MINIGAME:
        PlaySE(SE_SELECT);
        CancelParticipationPrompt(taskId);
        break;
    case PARTY_ACTION_SEND_MON_TO_BOX:
        PlaySE(SE_PC_OFF);
        gSelectedMonPartyId = PARTY_SIZE + 1;
        Task_ClosePartyMenu(taskId);
        break;
    default:
        if (DisplayCancelChooseMonYesNo(taskId) == TRUE)
        {
            PlaySE(SE_SELECT);
        }
        else
        {
            PlaySE(SE_PC_OFF);
            if (!MenuHelpers_IsLinkActive())
                gSpecialVar_0x8004 = PARTY_SIZE + 1;
            gPartyMenuUseExitCallback = FALSE;
            *slotPtr = PARTY_SIZE + 1;
            Task_ClosePartyMenu(taskId);
        }
        break;
    }
}

static bool8 DisplayCancelChooseMonYesNo(u8 taskId)
{
    const u8 *stringPtr = NULL;

    if (gPartyMenu.menuType == PARTY_MENU_TYPE_CONTEST)
        stringPtr = gText_CancelParticipation;
    else if (gPartyMenu.menuType == PARTY_MENU_TYPE_CHOOSE_HALF)
        stringPtr = gText_CancelBattle;

    if (stringPtr == NULL)
        return FALSE;

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    StringExpandPlaceholders(gStringVar4, stringPtr);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    gTasks[taskId].func = Task_CancelChooseMonYesNo;
    return TRUE;
}

static void Task_CancelChooseMonYesNo(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuDisplayYesNoMenu();
        gTasks[taskId].func = Task_HandleCancelChooseMonYesNoInput;
    }
}

static void Task_HandleCancelChooseMonYesNoInput(u8 taskId)
{
    switch (PartyMenuProcessYesNoInput())
    {
    case 0:
        gPartyMenuUseExitCallback = FALSE;
        gPartyMenu.slotId = PARTY_SIZE + 1;
        ClearSelectedPartyOrder();
        Task_ClosePartyMenu(taskId);
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        // fallthrough
    case 1:
        Task_ReturnToChooseMonAfterText(taskId);
        break;
    }
}

static void CancelParticipationPrompt(u8 taskId)
{
    DisplayPartyMenuMessage(gText_CancelParticipation, TRUE);
    gTasks[taskId].func = Task_CancelParticipationYesNo;
}

static void Task_CancelParticipationYesNo(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuDisplayYesNoMenu();
        gTasks[taskId].func = Task_HandleCancelParticipationYesNoInput;
    }
}

static void Task_HandleCancelParticipationYesNoInput(u8 taskId)
{
    switch (PartyMenuProcessYesNoInput())
    {
    case 0:
        gSpecialVar_0x8004 = PARTY_SIZE + 1;
        Task_ClosePartyMenu(taskId);
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        // fallthrough
    case 1:
        gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
        break;
    }
}

// Finish switching mons or using Softboiled
static void FinishTwoMonAction(u8 taskId)
{
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    gPartyMenu.action = PARTY_ACTION_CHOOSE_MON;
    AnimatePartySlot(gPartyMenu.slotId, 0);
    gPartyMenu.slotId = gPartyMenu.slotId2;
    AnimatePartySlot(gPartyMenu.slotId2, 1);
    DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
    gTasks[taskId].func = Task_HandleChooseMonInput;
}

static void Task_ReturnToChooseMonAfterText(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
        if (MenuHelpers_IsLinkActive() == TRUE)
        {
            gTasks[taskId].func = Task_WaitForLinkAndReturnToChooseMon;
        }
        else
        {
            if (gPartyMenu.action == PARTY_ACTION_SEND_MON_TO_BOX)
                DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON_FOR_BOX);
            else
                DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
            gTasks[taskId].func = Task_HandleChooseMonInput;
        }
    }
}

static void PartyItem_ReturnOrCloseAfterText(u8 taskId)
{
    if (gPartyMenu.menuType == PARTY_MENU_TYPE_FIELD && CheckBagHasItem(gSpecialVar_ItemId, 1))
    {
        gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
    }
    else
    {
        gTasks[taskId].func = Task_ClosePartyMenuAfterText;
    }
}

// when not able to use / no effect, go back to pick another mon - both in field and in battle
static void PartyItem_DisplayNoEffect(u8 taskId)
{
    gPartyMenuUseExitCallback = FALSE;
    sPartyMenuDataPtr->exitCallback = NULL;
    DisplayPartyMenuMessage(gText_WontHaveEffect, TRUE);
    gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
}

static void Task_WaitForLinkAndReturnToChooseMon(u8 taskId)
{
    if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
        gTasks[taskId].func = Task_HandleChooseMonInput;
    }
}

static void Task_ReturnToChooseMonAfterConfirm(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        PartyView_DrawFooter(PartyView_GetChooseMonFooter());
        gTasks[taskId].func = Task_HandleChooseMonInput;
    }
}

static void Task_PartyMenu_HandleHeldInput(u8 taskId)
{
    if (PartyCursor_HandleDirectionalInput())
    {
        PartyHeld_SnapToSlot();
    }
    else if (JOY_NEW(A_BUTTON | SELECT_BUTTON | B_BUTTON))
    {
        PlaySE(SE_SELECT);
        PartyHeld_Place(JOY_NEW(A_BUTTON | SELECT_BUTTON));
        gTasks[taskId].func = Task_HandleChooseMonInput;
    }
}

// ==================================================
// Party slots
// ==================================================

static void PartySlot_Draw(u32 slot)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];

    PartySlot_Render(windowId, slot / PARTY_SLOT_COLUMNS, slot, slot >= sPartyMenuDataPtr->partyCount);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    ScheduleBgCopyTilemapToVram(PARTY_BG_SLOTS);
    PartyMonIcon_UpdateAnim(slot);
}

static void PartySlot_DrawEmpty(u32 slot)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];

    PartySlot_Render(windowId, slot / PARTY_SLOT_COLUMNS, slot, TRUE);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PartySlot_Render(u32 windowId, u32 row, u32 partySlot, bool32 isEmpty)
{
    PartySlot_DrawFrame(windowId, row, isEmpty);
    if (!isEmpty)
        PartySlot_DrawMonInfo(windowId, partySlot, row);
}

static void PartySlot_DrawFrame(u32 windowId, u32 row, bool32 isEmpty)
{
    u32 numTiles = PARTY_SLOT_WIDTH * sPartyMenu_SlotRows[row].height;
    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    const u8 *tilemap = sPartyMenu_SlotRows[row].tilemap;

    if (isEmpty)
        tilemap = sPartyMenu_SlotRows[row].emptyTilemap;

    for (u32 i = 0; i < numTiles; i++)
        CpuCopy16(&sPartyMenu_Gfx_Slot[TILE_OFFSET_4BPP(tilemap[i])], &tileData[TILE_OFFSET_4BPP(i)], TILE_SIZE_4BPP);
}

static void PartySlot_DrawMonInfo(u32 windowId, u32 partySlot, u32 row)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][partySlot];
    u32 contentY = sPartyMenu_SlotRows[row].contentY;
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.nickname;
    u8 nickname[POKEMON_NAME_LENGTH + 1];

    GetMonData(mon, MON_DATA_NICKNAME, nickname);
    StringGet_Nickname(nickname);
    PartySlot_Print(windowId, GetFontIdToFit(nickname, FONT_OUTLINED, 0, rect->width),
                    rect->x, rect->y + contentY, COLORID_PARTY_WHITE, nickname);

    enum PartyTextColors descColor;
    u32 description = PartySlot_GetDescription(partySlot, &descColor);
    if (description != PARTY_SLOT_DESC_NONE)
    {
        PartySlot_DrawDescription(windowId, description, descColor, contentY);
    }

    if (GetMonData(mon, MON_DATA_IS_EGG))
    {
        return;
    }

    PartySlot_DrawGender(windowId, mon, nickname, contentY);
    PartySlot_DrawLevel(windowId, mon, contentY);

    enum Stat xItemStat = PartySlot_GetXItemStat();
    if (xItemStat != NUM_BATTLE_STATS
     && partySlot == *PartyCursor_GetSlotPtr()
     && PartySlot_GetActiveBattler(partySlot) != MAX_BATTLERS_COUNT)
    {
        PartySlot_DrawStatName(windowId, xItemStat, contentY);
        return;
    }

    if (PartySlot_IsDireHit() && description == PARTY_SLOT_DESC_NONE)
    {
        PartySlot_DrawDireHit(windowId, contentY);
        return;
    }

    if (PartySlot_IsMint())
    {
        if (description == PARTY_SLOT_DESC_NONE)
        {
            PartySlot_DrawNature(windowId, partySlot, mon, contentY);
        }
        return;
    }

    if (PartySlot_IsAbilityItem())
    {
        if (description == PARTY_SLOT_DESC_NONE)
        {
            PartySlot_DrawAbility(windowId, partySlot, mon, contentY);
        }
        return;
    }

    enum Stat evStat = PartySlot_GetEvItemStat();
    if (evStat != NUM_STATS)
    {
        if (PartySlot_IsEvResetItem())
        {
            if (partySlot == *PartyCursor_GetSlotPtr())
            {
                PartySlot_DrawEvReset(windowId, contentY);
            }
        }
        else
        {
            PartySlot_DrawEvItemStat(windowId, partySlot, mon, evStat, contentY);
        }
        return;
    }

    if (PartySlot_IsExpItem())
    {
        PartySlot_DrawExpItem(windowId, partySlot, mon, contentY);
        return;
    }

    if (PartySlot_IsPPItem() && partySlot == *PartyCursor_GetSlotPtr())
    {
        PartySlot_DrawPP(windowId, mon, contentY);
        return;
    }

    enum FormChanges formChangeMethod = PartySlot_GetFormChangeMethod();
    if (formChangeMethod != FORM_CHANGE_TERMINATOR)
    {
        if (PartySlot_ShowsFormChange(mon)
         && (formChangeMethod == FORM_CHANGE_ITEM_USE || partySlot == *PartyCursor_GetSlotPtr()))
        {
            if (description == PARTY_SLOT_DESC_NONE)
            {
                PartySlot_DrawFormChange(windowId, partySlot, mon, contentY);
            }
            return;
        }
        if (formChangeMethod == FORM_CHANGE_ITEM_USE && partySlot == *PartyCursor_GetSlotPtr())
        {
            return;
        }
    }

    if (PartySlot_IsRotomCatalog() && description != PARTY_SLOT_DESC_NONE)
    {
        return;
    }

    if (description == PARTY_SLOT_DESC_NONE)
    {
        PartySlot_DrawHp(windowId, mon, contentY);
    }
    PartySlot_DrawItem(windowId, mon, contentY);
}

static void PartySlot_DrawGender(u32 windowId, struct Pokemon *mon, const u8 *nickname, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.gender;
    enum Species species = GetMonData(mon, MON_DATA_SPECIES);

    if ((species == SPECIES_NIDORAN_M || species == SPECIES_NIDORAN_F)
     && StringCompare(nickname, GetSpeciesName(species)) == 0)
    {
        return;
    }

    switch (GetMonGender(mon))
    {
    case MON_MALE:
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_BLUE, gText_MaleSymbol);
        break;
    case MON_FEMALE:
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, gText_FemaleSymbol);
        break;
    }
}

static void PartySlot_DrawLevel(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.level;
    u32 numberX = rect->x + GetStringWidth(FONT_OUTLINED, gText_LevelSymbol, 0) + PARTY_SLOT_LEVEL_SPACING;
    u8 level[4];

    ConvertIntToDecimalStringN(level, GetMonData(mon, MON_DATA_LEVEL), STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_YELLOW, gText_LevelSymbol);
    PartySlot_Print(windowId, FONT_OUTLINED, numberX, rect->y + contentY, COLORID_PARTY_WHITE, level);
}

static void PartySlot_DrawHp(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.hp;
    u32 hp = GetMonData(mon, MON_DATA_HP);
    u32 maxHp = GetMonData(mon, MON_DATA_MAX_HP);
    u8 text[8];

    PartySlot_DrawBar(windowId, sPartyMenu_HpBarColors[GetHPBarLevel(hp, maxHp)], hp, maxHp, contentY);

    u8 *end = ConvertIntToDecimalStringN(text, hp, STR_CONV_MODE_LEFT_ALIGN, 3);
    *end++ = CHAR_SLASH;
    ConvertIntToDecimalStringN(end, maxHp, STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x + GetStringRightAlignXOffset(FONT_OUTLINED, text, rect->width),
                    rect->y + contentY, COLORID_PARTY_WHITE, text);
}

static void PartySlot_DrawBar(u32 windowId, const u8 *colors, u32 value, u32 max, u32 contentY)
{
    const struct PartySlotRect *bar = &sPartyMenu_SlotLayout.hpBar;
    u32 fillX = bar->x + PARTY_HP_BAR_FRAME_SIZE;
    u32 fillY = bar->y + PARTY_HP_BAR_FRAME_SIZE + contentY;
    u32 fillMaxWidth = bar->width - 2 * PARTY_HP_BAR_FRAME_SIZE;
    u32 fillHeight = bar->height - 2 * PARTY_HP_BAR_FRAME_SIZE;
    u32 fillWidth = value * fillMaxWidth / max;

    if (fillWidth == 0 && value > 0)
        fillWidth = 1;

    PartySlot_FillRect(windowId, colors[0], fillX, bar->y + contentY, fillMaxWidth, bar->height);
    PartySlot_FillRect(windowId, colors[0], bar->x, fillY, bar->width, fillHeight);
    PartySlot_FillRect(windowId, colors[1], fillX, fillY, fillMaxWidth, fillHeight);
    if (fillWidth > 0)
        PartySlot_FillRect(windowId, colors[2], fillX, fillY, fillWidth, fillHeight);
}

static void PartySlot_DrawItem(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.item;
    enum Item item = GetMonData(mon, MON_DATA_HELD_ITEM);

    if (item == ITEM_NONE)
        return;

    const u8 *name = GetItemName(item);
    PartySlot_Print(windowId, GetFontIdToFit(name, FONT_OUTLINED, 0, rect->width),
                    rect->x, rect->y + contentY, COLORID_PARTY_WHITE, name);
}

static enum Stat PartySlot_GetEvItemStat(void)
{
    if (gPartyMenu.action != PARTY_ACTION_USE_ITEM)
        return NUM_STATS;

    switch (GetItemEffectType(gSpecialVar_ItemId))
    {
    case ITEM_EFFECT_HP_EV:
        return STAT_HP;
    case ITEM_EFFECT_ATK_EV:
        return STAT_ATK;
    case ITEM_EFFECT_DEF_EV:
        return STAT_DEF;
    case ITEM_EFFECT_SPEED_EV:
        return STAT_SPEED;
    case ITEM_EFFECT_SPATK_EV:
        return STAT_SPATK;
    case ITEM_EFFECT_SPDEF_EV:
        return STAT_SPDEF;
    default:
        return NUM_STATS;
    }
}

// Fresh-Start Mochi and Sherbet Surprise reset every EV
static bool32 PartySlot_IsEvResetItem(void)
{
    return GetItemEffect(gSpecialVar_ItemId)[ITEM_EFFECT_ARG_START] == ITEM6_RESET_EV;
}

static enum Stat PartySlot_GetXItemStat(void)
{
    if (gPartyMenu.action != PARTY_ACTION_USE_ITEM || GetItemBattleUsage(gSpecialVar_ItemId) != EFFECT_ITEM_INCREASE_STAT)
        return NUM_BATTLE_STATS;

    return GetItemEffect(gSpecialVar_ItemId)[1];
}

static u32 PartySlot_GetActiveBattler(u32 partySlot)
{
    u32 battler;

    if (gPartyMenu.menuType != PARTY_MENU_TYPE_IN_BATTLE)
        return MAX_BATTLERS_COUNT;

    if (partySlot == 0)
        battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
    else if (partySlot == 1 && IsDoubleBattle())
        battler = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);
    else
        return MAX_BATTLERS_COUNT;

    return IsBattlerAlive(battler) ? battler : MAX_BATTLERS_COUNT;
}

static void PartySlot_DrawStatName(u32 windowId, enum Stat stat, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.statName;
    const u8 *name = gStatNamesTable[stat];
    u32 fontId = GetFontIdToFit(name, FONT_OUTLINED, 0, rect->width);

    PartySlot_Print(windowId, fontId, rect->x + GetStringCenterAlignXOffset(fontId, name, rect->width),
                    rect->y + contentY, COLORID_PARTY_WHITE, name);
}

static bool32 PartySlot_IsDireHit(void)
{
    return gPartyMenu.action == PARTY_ACTION_USE_ITEM && GetItemBattleUsage(gSpecialVar_ItemId) == EFFECT_ITEM_SET_FOCUS_ENERGY;
}

static void PartySlot_DrawDireHit(u32 windowId, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.description;
    const u8 *name = COMPOUND_STRING("Crit. hits");
    u32 boostX = rect->x + GetStringWidth(FONT_OUTLINED, name, 0) + GetStringWidth(FONT_OUTLINED, gText_Space, 0);

    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_WHITE, name);
    PartySlot_Print(windowId, FONT_OUTLINED, boostX, rect->y + contentY, COLORID_PARTY_RED, COMPOUND_STRING("+2"));
}

static void PartySlot_DrawEvItemStat(u32 windowId, u32 partySlot, struct Pokemon *mon, enum Stat stat, u32 contentY)
{
    const struct PartySlotRect *rect;
    u32 iv = GetMonData(mon, MON_DATA_HP_IV + stat);
    u32 ev = GetMonData(mon, MON_DATA_HP_EV + stat);
    bool32 isEvMaxed = (ev >= MAX_PER_STAT_EVS || GetMonEVCount(mon) >= MAX_TOTAL_EVS);

    PartySlot_DrawStatName(windowId, stat, contentY);
    PartySlot_PrintNumber(windowId, &sPartyMenu_SlotLayout.statValue, GetMonData(mon, MON_DATA_MAX_HP + stat), COLORID_PARTY_WHITE, contentY);

    rect = &sPartyMenu_SlotLayout.ivLabel;
    PartySlot_Print(windowId, FONT_OUTLINED_NARROW, rect->x, rect->y + contentY, COLORID_PARTY_YELLOW, COMPOUND_STRING("Iv"));
    PartySlot_PrintNumber(windowId, &sPartyMenu_SlotLayout.ivValue, iv, iv == MAX_PER_STAT_IVS ? COLORID_PARTY_GREEN : COLORID_PARTY_WHITE, contentY);

    rect = &sPartyMenu_SlotLayout.evLabel;
    PartySlot_Print(windowId, FONT_OUTLINED_NARROW, rect->x, rect->y + contentY, COLORID_PARTY_YELLOW, COMPOUND_STRING("Ev"));
    PartySlot_PrintNumber(windowId, &sPartyMenu_SlotLayout.evValue, ev, isEvMaxed ? COLORID_PARTY_GREEN : COLORID_PARTY_WHITE, contentY);

    if (partySlot == *PartyCursor_GetSlotPtr())
        PartySlot_DrawEvItemDelta(windowId, mon, stat, contentY);
}

static void PartySlot_DrawEvItemDelta(u32 windowId, struct Pokemon *mon, enum Stat stat, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.evDelta;
    u32 count = sPartyMenuDataPtr->itemCount != 0 ? sPartyMenuDataPtr->itemCount : 1;
    u32 delta = PartySlot_GetEvItemDelta(mon, stat, count);
    u8 text[5];

    text[0] = (s8)GetItemEffect(gSpecialVar_ItemId)[ITEM_EFFECT_ARG_START] > 0 ? CHAR_PLUS : CHAR_HYPHEN;
    ConvertIntToDecimalStringN(&text[1], delta, STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, delta != 0 ? COLORID_PARTY_WHITE : COLORID_PARTY_GREY, text);
}

// mirrors the EV branch of PokemonUseItemEffects
static u32 PartySlot_GetEvItemDelta(struct Pokemon *mon, enum Stat stat, u32 count)
{
    const u8 *effect = GetItemEffect(gSpecialVar_ItemId);
    s32 change = (s8)effect[ITEM_EFFECT_ARG_START];
    s32 ev = GetMonData(mon, MON_DATA_HP_EV + stat);

    if (change < 0)
        return min(-change * (s32)count, ev);

    s32 cap = (effect[10] & ITEM10_IS_VITAMIN) ? EV_ITEM_RAISE_LIMIT : MAX_PER_STAT_EVS;
    return max(0, min(change * (s32)count, min(cap - ev, MAX_TOTAL_EVS - (s32)GetMonEVCount(mon))));
}

static u32 PartySlot_GetEvItemMaxCount(struct Pokemon *mon)
{
    enum Stat stat = PartySlot_GetEvItemStat();

    if (stat == NUM_STATS || PartySlot_IsEvResetItem())
        return 0;

    u32 change = abs((s8)GetItemEffect(gSpecialVar_ItemId)[ITEM_EFFECT_ARG_START]);
    u32 maxDelta = PartySlot_GetEvItemDelta(mon, stat, MAX_BAG_ITEM_CAPACITY);
    return min(CountTotalItemQuantityInBag(gSpecialVar_ItemId), (maxDelta + change - 1) / change);
}

static bool32 PartySlot_IsExpItem(void)
{
    return gPartyMenu.action == PARTY_ACTION_USE_ITEM
        && GetItemEffectType(gSpecialVar_ItemId) == ITEM_EFFECT_RAISE_LEVEL;
}

static bool32 PartySlot_IsMint(void)
{
    return gPartyMenu.action == PARTY_ACTION_USE_ITEM
        && GetItemFieldFunc(gSpecialVar_ItemId) == ItemUseOutOfBattle_Mint;
}

static void PartySlot_DrawNature(u32 windowId, u32 partySlot, struct Pokemon *mon, u32 contentY)
{
    u32 nature = GetMonData(mon, MON_DATA_HIDDEN_NATURE);

    if (partySlot != *PartyCursor_GetSlotPtr())
    {
        const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.natureName;
        const u8 *name = gNaturesInfo[nature].name;
        u32 fontId = GetFontIdToFit(name, FONT_OUTLINED, 0, rect->width);
        PartySlot_Print(windowId, fontId, rect->x + GetStringCenterAlignXOffset(fontId, name, rect->width),
                        rect->y + contentY, COLORID_PARTY_YELLOW, name);
        return;
    }

    u32 newNature = GetItemSecondaryId(gSpecialVar_ItemId);
    PartySlot_DrawNatureRow(windowId, nature, newNature, TRUE, contentY);
    PartySlot_DrawNatureRow(windowId, nature, newNature, FALSE, contentY + PARTY_SLOT_NATURE_DOWN_Y - PARTY_SLOT_NATURE_UP_Y);
}

static void PartySlot_DrawNatureRow(u32 windowId, u32 nature, u32 newNature, bool32 raised, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.natureCurrent;
    bool32 isNeutral = gNaturesInfo[newNature].statUp == gNaturesInfo[newNature].statDown;
    enum PartyTextColors changeColor;
    u8 text[8];
    u32 fontId;

    if (isNeutral)
        changeColor = COLORID_PARTY_GREY;
    else if (raised)
        changeColor = COLORID_PARTY_RED;
    else
        changeColor = COLORID_PARTY_BLUE;

    PartySlot_StringNatureStat(text, nature, raised);
    fontId = GetFontIdToFit(text, FONT_OUTLINED, 0, rect->width);
    PartySlot_Print(windowId, fontId, rect->x + GetStringRightAlignXOffset(fontId, text, rect->width),
                    rect->y + contentY, COLORID_PARTY_WHITE, text);

    rect = &sPartyMenu_SlotLayout.natureArrow;
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, changeColor, COMPOUND_STRING("{RIGHT_ARROW}"));

    rect = &sPartyMenu_SlotLayout.natureNext;
    PartySlot_StringNatureStat(text, newNature, raised);
    fontId = GetFontIdToFit(text, FONT_OUTLINED, 0, rect->width);
    PartySlot_Print(windowId, fontId, rect->x, rect->y + contentY, changeColor, text);
}

static u8 *PartySlot_StringNatureStat(u8 *dst, u32 nature, bool32 raised)
{
    const struct NatureInfo *info = &gNaturesInfo[nature];

    if (info->statUp == info->statDown)
        return StringCopy(dst, COMPOUND_STRING("None"));

    *dst++ = raised ? CHAR_PLUS : CHAR_HYPHEN;
    return StringCopy(dst, sPartyMenu_StatShortLabels[raised ? info->statUp : info->statDown]);
}

static bool32 PartySlot_IsAbilityItem(void)
{
    ItemUseFunc fieldFunc = GetItemFieldFunc(gSpecialVar_ItemId);

    return gPartyMenu.action == PARTY_ACTION_USE_ITEM
        && (fieldFunc == ItemUseOutOfBattle_AbilityCapsule
         || fieldFunc == ItemUseOutOfBattle_AbilityPatch);
}

static void PartySlot_DrawAbility(u32 windowId, u32 partySlot, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.abilityName;
    const u8 *name = gAbilitiesInfo[GetMonAbility(mon)].name;
    bool32 isHovered = partySlot == *PartyCursor_GetSlotPtr();
    u32 fontId = GetFontIdToFit(name, FONT_OUTLINED, 0, rect->width);

    PartySlot_Print(windowId, fontId, rect->x + GetStringCenterAlignXOffset(fontId, name, rect->width),
                    rect->y + contentY, isHovered ? COLORID_PARTY_WHITE : COLORID_PARTY_YELLOW, name);
    if (!isHovered)
    {
        return;
    }

    rect = &sPartyMenu_SlotLayout.arrowBottom;
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, COMPOUND_STRING("{RIGHT_ARROW}"));

    rect = &sPartyMenu_SlotLayout.indentBottom;
    name = gAbilitiesInfo[GetAbilityBySpecies(GetMonData(mon, MON_DATA_SPECIES), PartyMon_GetNewAbilityNum(mon))].name;
    fontId = GetFontIdToFit(name, FONT_OUTLINED, 0, rect->width);
    PartySlot_Print(windowId, fontId, rect->x, rect->y + contentY, COLORID_PARTY_RED, name);
}

static bool32 PartySlot_IsPPItem(void)
{
    enum ItemEffectType effectType = GetItemEffectType(gSpecialVar_ItemId);

    return gPartyMenu.action == PARTY_ACTION_USE_ITEM
        && (effectType == ITEM_EFFECT_HEAL_PP || effectType == ITEM_EFFECT_PP_UP || effectType == ITEM_EFFECT_PP_MAX);
}

static enum FormChanges PartySlot_GetFormChangeMethod(void)
{
    if (gPartyMenu.action == PARTY_ACTION_GIVE_ITEM)
    {
        return FORM_CHANGE_ITEM_HOLD;
    }

    ItemUseFunc fieldFunc = GetItemFieldFunc(gSpecialVar_ItemId);

    if (gPartyMenu.action == PARTY_ACTION_USE_ITEM
     && (fieldFunc == ItemUseOutOfBattle_FormChange || fieldFunc == ItemUseOutOfBattle_FormChange_ConsumedOnUse))
    {
        return FORM_CHANGE_ITEM_USE;
    }
    return FORM_CHANGE_TERMINATOR;
}

static enum Item PartySlot_GetFormChangeItem(void)
{
    return (gPartyMenu.action == PARTY_ACTION_GIVE_ITEM) ? gPartyMenu.bagItem : gSpecialVar_ItemId;
}

static const u8 *PartySlot_GetFormName(enum Species species)
{
    for (u32 i = 0; i < ARRAY_COUNT(sPartyMenu_FormNames); i++)
    {
        if (sPartyMenu_FormNames[i].species == species)
        {
            return sPartyMenu_FormNames[i].name;
        }
    }
    return NULL;
}

static bool32 PartySlot_ShowsFormChange(struct Pokemon *mon)
{
    enum Species species = GetMonData(mon, MON_DATA_SPECIES);

    enum FormChanges method = PartySlot_GetFormChangeMethod();
    enum Item item = PartySlot_GetFormChangeItem();

    if (PartySlot_GetFormName(species) == NULL)
    {
        return FALSE;
    }
    if (method == FORM_CHANGE_ITEM_HOLD && GetItemHoldEffect(item) != HOLD_EFFECT_MEMORY)
    {
        return FALSE;
    }
    return PartyMon_GetFormChangeTarget(mon) != species || PartyMon_HasFormChangeItem(species, method, item);
}

static bool32 PartyMon_HasFormChangeItem(enum Species species, enum FormChanges method, enum Item item)
{
    const struct FormChange *formChanges = GetSpeciesFormChanges(species);

    if (formChanges == NULL)
    {
        return FALSE;
    }
    for (u32 i = 0; formChanges[i].method != FORM_CHANGE_TERMINATOR; i++)
    {
        if (formChanges[i].method == method && formChanges[i].param1 == item)
        {
            return TRUE;
        }
    }
    return FALSE;
}

static bool32 PartySlot_IsRotomCatalog(void)
{
    return gPartyMenu.action == PARTY_ACTION_USE_ITEM && GetItemFieldFunc(gSpecialVar_ItemId) == ItemUseOutOfBattle_RotomCatalog;
}

static enum Species PartyMon_GetFormChangeTarget(struct Pokemon *mon)
{
    enum Item item = PartySlot_GetFormChangeItem();
    struct FormChangeContext ctx =
    {
        .method = PartySlot_GetFormChangeMethod(),
        .currentSpecies = GetMonData(mon, MON_DATA_SPECIES),
        .partyItemUsed = item,
        .heldItem = item,
        .ability = GetMonAbility(mon),
    };

    return GetFormChangeTargetSpecies_Internal(ctx);
}

static void PartySlot_DrawFormChange(u32 windowId, u32 partySlot, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.indentTop;
    enum Species species = GetMonData(mon, MON_DATA_SPECIES);
    enum Species targetSpecies = PartyMon_GetFormChangeTarget(mon);

    if (partySlot != *PartyCursor_GetSlotPtr() || targetSpecies == species)
    {
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_YELLOW, PartySlot_GetFormName(species));
        return;
    }

    if (PartySlot_GetFormChangeMethod() == FORM_CHANGE_ITEM_HOLD)
    {
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_WHITE, PartySlot_GetFormName(species));
        rect = &sPartyMenu_SlotLayout.arrowBottom;
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, COMPOUND_STRING("{RIGHT_ARROW}"));
        rect = &sPartyMenu_SlotLayout.indentBottom;
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, PartySlot_GetFormName(targetSpecies));
        return;
    }

    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, PartySlot_GetFormName(targetSpecies));
    rect = &sPartyMenu_SlotLayout.arrowTop;
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, COMPOUND_STRING("{RIGHT_ARROW}"));

    u8 text[TYPE_NAME_LENGTH + 3];
    u8 *end = StringCopy(text, COMPOUND_STRING("("));

    end = StringCopy(end, gTypesInfo[GetSpeciesType(targetSpecies, 0)].name);
    StringCopy(end, COMPOUND_STRING(")"));
    rect = &sPartyMenu_SlotLayout.indentBottom;
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, text);
}

static void PartySlot_DrawPP(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.ppMove;
    const u8 *slash = COMPOUND_STRING("/");
    u32 slashWidth = GetStringWidth(FONT_OUTLINED, slash, 0);
    u32 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        enum Move move = GetMonData(mon, MON_DATA_MOVE1 + i);

        if (move == MOVE_NONE)
        {
            continue;
        }

        u32 maxPP = CalculatePPWithBonus(move, ppBonuses, i);
        u32 pp = GetMonData(mon, MON_DATA_PP1 + i);
        u32 slashX = rect->x + (i % PARTY_SLOT_PP_COLUMNS) * rect->width + (rect->width - slashWidth) / 2;
        u32 y = rect->y + (i / PARTY_SLOT_PP_COLUMNS) * PARTY_SLOT_PP_ROW_SPACING + contentY;
        enum PartyTextColors color;
        u8 text[4];

        ConvertIntToDecimalStringN(text, pp, STR_CONV_MODE_LEFT_ALIGN, 2);
        color = (pp == maxPP) ? COLORID_PARTY_GREEN : sPartyMenu_PPStateColors[GetCurrentPPToMaxPPState(pp, maxPP)];
        PartySlot_Print(windowId, FONT_OUTLINED, slashX - GetStringWidth(FONT_OUTLINED, text, 0), y, color, text);

        PartySlot_Print(windowId, FONT_OUTLINED, slashX, y, COLORID_PARTY_WHITE, slash);

        ConvertIntToDecimalStringN(text, maxPP, STR_CONV_MODE_LEFT_ALIGN, 2);
        color = (PartyMoves_GetPPBoost(mon, i) == 0) ? COLORID_PARTY_GREEN : COLORID_PARTY_WHITE;
        PartySlot_Print(windowId, FONT_OUTLINED, slashX + slashWidth, y, color, text);
    }
}

static u32 PartySlot_GetExpItemCeiling(void)
{
    if (GetItemHoldEffectParam(gSpecialVar_ItemId) == 0)
        return B_RARE_CANDY_CAP ? min(GetCurrentLevelCap(), MAX_LEVEL) : MAX_LEVEL;
    return (B_RARE_CANDY_CAP && B_EXP_CAP_TYPE == EXP_CAP_HARD) ? min(GetCurrentLevelCap(), MAX_LEVEL) : MAX_LEVEL;
}

static u32 PartySlot_GetExpItemGain(struct Pokemon *mon, u32 count)
{
    u32 level = GetMonData(mon, MON_DATA_LEVEL);
    u32 ceiling = PartySlot_GetExpItemCeiling();

    if (level >= ceiling || (B_RARE_CANDY_CAP && level >= GetCurrentLevelCap()))
        return 0;

    const u32 *expTable = gExperienceTables[gSpeciesInfo[GetMonData(mon, MON_DATA_SPECIES)].growthRate];
    u32 param = GetItemHoldEffectParam(gSpecialVar_ItemId);
    u32 exp = GetMonData(mon, MON_DATA_EXP);
    u32 target;

    if (param == 0)
        target = expTable[min(level + count, ceiling)];
    else
        target = min(exp + sExpCandyExperienceTable[param - 1] * count, expTable[ceiling]);

    return target > exp ? target - exp : 0;
}

static u32 PartySlot_GetExpItemMaxCount(struct Pokemon *mon)
{
    u32 param = GetItemHoldEffectParam(gSpecialVar_ItemId);
    u32 count;

    if (param == 0)
        count = PartySlot_GetExpItemCeiling() - GetMonData(mon, MON_DATA_LEVEL);
    else
        count = (PartySlot_GetExpItemGain(mon, MAX_BAG_ITEM_CAPACITY) + sExpCandyExperienceTable[param - 1] - 1) / sExpCandyExperienceTable[param - 1];

    return min(CountTotalItemQuantityInBag(gSpecialVar_ItemId), count);
}

static void PartySlot_DrawExpItem(u32 windowId, u32 partySlot, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.hp;
    const u32 *expTable = gExperienceTables[gSpeciesInfo[GetMonData(mon, MON_DATA_SPECIES)].growthRate];
    u32 level = GetMonData(mon, MON_DATA_LEVEL);
    u32 exp = GetMonData(mon, MON_DATA_EXP);
    u32 toNext = 0;
    u8 text[9];

    if (level < MAX_LEVEL)
    {
        toNext = expTable[level + 1] - exp;
        PartySlot_DrawBar(windowId, sPartyMenu_ExpBarColors, exp - expTable[level], expTable[level + 1] - expTable[level], contentY);
    }
    else
    {
        PartySlot_DrawBar(windowId, sPartyMenu_ExpBarColors, 1, 1, contentY);
    }

    if (partySlot == *PartyCursor_GetSlotPtr())
    {
        u32 count = sPartyMenuDataPtr->itemCount != 0 ? sPartyMenuDataPtr->itemCount : 1;
        u32 gain = PartySlot_GetExpItemGain(mon, count);

        text[0] = CHAR_PLUS;
        ConvertIntToDecimalStringN(&text[1], gain, STR_CONV_MODE_LEFT_ALIGN, 7);
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x + GetStringRightAlignXOffset(FONT_OUTLINED, text, rect->width),
                        rect->y + contentY, gain != 0 ? COLORID_PARTY_WHITE : COLORID_PARTY_GREY, text);

        u32 endLevel = 1;
        while (endLevel <= MAX_LEVEL && expTable[endLevel] <= exp + gain)
            endLevel++;
        endLevel--;

        if (endLevel > level)
        {
            const u8 *arrow = COMPOUND_STRING("{RIGHT_ARROW}");

            rect = &sPartyMenu_SlotLayout.expLevel;
            PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, arrow);
            ConvertIntToDecimalStringN(text, endLevel, STR_CONV_MODE_LEFT_ALIGN, 3);
            PartySlot_Print(windowId, FONT_OUTLINED, rect->x + GetStringWidth(FONT_OUTLINED, arrow, 0) + PARTY_SLOT_EXP_LEVEL_SPACING,
                            rect->y + contentY, COLORID_PARTY_RED, text);
        }
    }

    rect = &sPartyMenu_SlotLayout.expToNext;
    PartySlot_Print(windowId, FONT_OUTLINED_NARROW, rect->x, rect->y + contentY, COLORID_PARTY_YELLOW, COMPOUND_STRING("Next"));
    ConvertIntToDecimalStringN(text, toNext, STR_CONV_MODE_LEFT_ALIGN, 7);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x + GetStringRightAlignXOffset(FONT_OUTLINED, text, rect->width),
                    rect->y + contentY, COLORID_PARTY_WHITE, text);
}

static bool32 PartySpinner_TryOpen(u8 taskId, u32 maxCount, s32 yOffset)
{
    if (maxCount <= 1)
        return FALSE;

    sPartyMenuDataPtr->itemCount = 1;
    sPartyMenuDataPtr->maxItemCount = maxCount;
    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_Spinner);
    sPartyMenuDataPtr->spinnerSpriteId = CreateSprite(&sPartyMenu_SpriteTemplate_Spinner,
                                                      PartyMonIcon_GetX(gPartyMenu.slotId) + PARTY_SPINNER_X_OFFSET,
                                                      PartyMonIcon_GetY(gPartyMenu.slotId) + yOffset,
                                                      PARTY_SPRITE_SUBPRIORITY_CURSOR);
    PartyView_DrawFooter(PARTY_FOOTER_SPINNER);
    gTasks[taskId].func = Task_HandleItemSpinnerInput;
    return TRUE;
}

static void PartySpinner_Close(void)
{
    DestroySprite(&gSprites[sPartyMenuDataPtr->spinnerSpriteId]);
    FreeSpriteTilesByTag(PARTY_GFXTAG_SPINNER);
    sPartyMenuDataPtr->itemCount = 0;
}

static void Task_HandleItemSpinnerInput(u8 taskId)
{
    if (AdjustQuantityAccordingToDPadInput(&sPartyMenuDataPtr->itemCount, sPartyMenuDataPtr->maxItemCount))
    {
        PartySlot_Draw(gPartyMenu.slotId);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        u32 count = sPartyMenuDataPtr->itemCount;

        PartySpinner_Close();
        if (PartySlot_IsExpItem())
            ItemUse_ApplyExpItem(taskId, count);
        else if (gItemUseCB == ItemUseCB_ReduceEV)
            ItemUse_ApplyReduceEvItem(taskId, count);
        else
            ItemUse_ApplyEvItem(taskId, count);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        PartySpinner_Close();
        PartySlot_Draw(gPartyMenu.slotId);
        PartyView_DrawFooter(PartyView_GetChooseMonFooter());
        gTasks[taskId].func = Task_HandleChooseMonInput;
    }
}

static void ItemUse_ApplyEvItem(u8 taskId, u32 count)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Item item = gSpecialVar_ItemId;

    for (u32 i = 0; i < count; i++)
        ExecuteTableBasedItemEffect(mon, item, gPartyMenu.slotId, 0);

    gPartyMenuUseExitCallback = TRUE;
    PlaySE(SE_USE_ITEM);
    RemoveBagItem(item, count);
    PartySlot_Draw(gPartyMenu.slotId);
    GetMonNickname(mon, gStringVar1);
    GetMedicineItemEffectMessage(item, 0);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    PartyItem_ReturnOrCloseAfterText(taskId);
}

static void PartySlot_DrawEvReset(u32 windowId, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.statName;
    const u8 *label = COMPOUND_STRING("Ev");
    const u8 *all = COMPOUND_STRING(": All {RIGHT_ARROW}");
    const u8 *zero = COMPOUND_STRING("0");
    u32 labelWidth = GetStringWidth(FONT_OUTLINED_NARROW, label, 0);
    u32 allWidth = GetStringWidth(FONT_OUTLINED, all, 0);
    u32 width = labelWidth + allWidth + GetStringWidth(FONT_OUTLINED, zero, 0);
    u32 x = rect->x + (width < rect->width ? (rect->width - width) / 2 : 0);
    u32 y = rect->y + contentY;

    PartySlot_Print(windowId, FONT_OUTLINED_NARROW, x, y, COLORID_PARTY_YELLOW, label);
    PartySlot_Print(windowId, FONT_OUTLINED, x + labelWidth, y, COLORID_PARTY_WHITE, all);
    PartySlot_Print(windowId, FONT_OUTLINED, x + labelWidth + allWidth, y, COLORID_PARTY_RED, zero);
}

static void PartySlot_PrintNumber(u32 windowId, const struct PartySlotRect *rect, u32 value, enum PartyTextColors color, u32 contentY)
{
    u8 text[4];

    ConvertIntToDecimalStringN(text, value, STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, color, text);
}

static void PartySlot_DrawDescription(u32 windowId, u32 description, enum PartyTextColors color, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.description;
    const u8 *str = sPartyMenu_Descriptions[description];
    u32 fontId = GetFontIdToFit(str, FONT_OUTLINED, 0, rect->width);

    PartySlot_Print(windowId, fontId, rect->x + GetStringCenterAlignXOffset(fontId, str, rect->width),
                    rect->y + contentY, color, str);
}

static u32 PartySlot_GetDescription(u32 partySlot, enum PartyTextColors *color)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][partySlot];

    *color = COLORID_PARTY_WHITE;

    if (sPartyMenuDataPtr->chooseHalf)
    {
        if (!GetBattleEntryEligibility(mon))
        {
            *color = COLORID_PARTY_GREY;
            return PARTYBOX_DESC_NOT_ABLE;
        }
        for (u32 i = 0; i < GetMaxBattleEntries(); i++)
        {
            if (gSelectedOrderFromParty[i] == partySlot + 1)
            {
                *color = COLORID_PARTY_YELLOW;
                return i + PARTYBOX_DESC_FIRST;
            }
        }
        *color = COLORID_PARTY_GREEN;
        return PARTYBOX_DESC_ABLE_3;
    }

    if (gPartyMenu.menuType == PARTY_MENU_TYPE_MOVE_RELEARNER)
    {
        if (!GetMonData(mon, MON_DATA_IS_EGG) && HasMoveToRelearn(&mon->box, gMoveRelearnerState))
            return PARTYBOX_DESC_ABLE_2;
        return PARTYBOX_DESC_NOT_ABLE_2;
    }

    if (gPartyMenu.action == PARTY_ACTION_MOVE_TUTOR)
    {
        gSpecialVar_Result = FALSE;
        return PartySlot_GetTeachMoveDescription(mon, gSpecialVar_0x8005, color);
    }

    if (gPartyMenu.action != PARTY_ACTION_USE_ITEM)
    {
        return PARTY_SLOT_DESC_NONE;
    }

    if (PartySlot_IsMint()
     && partySlot == *PartyCursor_GetSlotPtr()
     && !GetMonData(mon, MON_DATA_IS_EGG)
     && GetMonData(mon, MON_DATA_HIDDEN_NATURE) == GetItemSecondaryId(gSpecialVar_ItemId))
    {
        *color = COLORID_PARTY_GREY;
        return PARTYBOX_DESC_NO_USE;
    }

    if (PartySlot_IsRotomCatalog()
     && partySlot == *PartyCursor_GetSlotPtr()
     && !GetMonData(mon, MON_DATA_IS_EGG)
     && !PartyMon_HasFormChangeItem(GetMonData(mon, MON_DATA_SPECIES), FORM_CHANGE_ITEM_USE_MULTICHOICE, gSpecialVar_ItemId))
    {
        *color = COLORID_PARTY_GREY;
        return PARTYBOX_DESC_NO_USE;
    }

    if (PartySlot_GetFormChangeMethod() == FORM_CHANGE_ITEM_USE
     && partySlot == *PartyCursor_GetSlotPtr()
     && !GetMonData(mon, MON_DATA_IS_EGG)
     && PartyMon_GetFormChangeTarget(mon) == GetMonData(mon, MON_DATA_SPECIES))
    {
        *color = COLORID_PARTY_GREY;
        return PARTYBOX_DESC_NO_USE;
    }

    if (PartySlot_IsAbilityItem()
     && partySlot == *PartyCursor_GetSlotPtr()
     && !GetMonData(mon, MON_DATA_IS_EGG)
     && PartyMon_GetNewAbilityNum(mon) == NUM_ABILITY_SLOTS)
    {
        *color = COLORID_PARTY_GREY;
        return PARTYBOX_DESC_NO_USE;
    }

    if (PartySlot_GetXItemStat() != NUM_BATTLE_STATS)
    {
        if (PartySlot_GetActiveBattler(partySlot) == MAX_BATTLERS_COUNT)
        {
            *color = COLORID_PARTY_GREY;
            return PARTYBOX_DESC_NO_USE;
        }
        if (partySlot == *PartyCursor_GetSlotPtr())
        {
            return PARTY_SLOT_DESC_NONE;
        }

        *color = COLORID_PARTY_GREEN;
        return PARTY_SLOT_DESC_IN_BATTLE;
    }

    if (PartySlot_IsDireHit())
    {
        u32 battler = PartySlot_GetActiveBattler(partySlot);

        if (battler == MAX_BATTLERS_COUNT
         || gBattleMons[battler].volatiles.focusEnergy
         || gBattleMons[battler].volatiles.dragonCheer)
        {
            *color = COLORID_PARTY_GREY;
            return PARTYBOX_DESC_NO_USE;
        }
        if (partySlot == *PartyCursor_GetSlotPtr())
        {
            return PARTY_SLOT_DESC_NONE;
        }

        *color = COLORID_PARTY_GREEN;
        return PARTY_SLOT_DESC_IN_BATTLE;
    }

    switch (CheckIfItemIsTMHMOrEvolutionStone(gSpecialVar_ItemId))
    {
    case ITEM_IS_TM_HM:
        return PartySlot_GetTeachMoveDescription(mon, ItemIdToBattleMoveId(gSpecialVar_ItemId), color);
    case ITEM_IS_EVOLUTION_STONE:
        if (!GetMonData(mon, MON_DATA_IS_EGG)
         && GetEvolutionTargetSpecies(mon, EVO_MODE_ITEM_CHECK, gSpecialVar_ItemId, NULL, NULL, CHECK_EVO) != SPECIES_NONE)
        {
            *color = COLORID_PARTY_GREEN;
            return PARTYBOX_DESC_ABLE_3;
        }
        return PARTYBOX_DESC_NO_USE;
    default:
        return PARTY_SLOT_DESC_NONE;
    }
}

static u32 PartySlot_GetTeachMoveDescription(struct Pokemon *mon, enum Move move, enum PartyTextColors *color)
{
    switch (CanTeachMove(mon, move))
    {
    case CANNOT_LEARN_MOVE:
    case CANNOT_LEARN_MOVE_IS_EGG:
        *color = COLORID_PARTY_RED;
        return PARTYBOX_DESC_NOT_ABLE_2;
    case ALREADY_KNOWS_MOVE:
        *color = COLORID_PARTY_GREY;
        return PARTYBOX_DESC_LEARNED;
    default:
        *color = COLORID_PARTY_GREEN;
        return PARTYBOX_DESC_ABLE_2;
    }
}

static void PartySlot_FillRect(u32 windowId, u32 color, u32 x, u32 y, u32 width, u32 height)
{
    u32 *tileData = (u32 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 widthTiles = GetWindowAttribute(windowId, WINDOW_WIDTH);
    u32 fill = color * 0x11111111;

    for (u32 py = y; py < y + height; py++)
    {
        u32 *row = &tileData[(py / TILE_HEIGHT) * widthTiles * TILE_HEIGHT + py % TILE_HEIGHT];

        for (u32 px = x; px < x + width;)
        {
            u32 start = px % TILE_WIDTH;
            u32 end = min(TILE_WIDTH, start + (x + width - px));
            u32 mask = (end == TILE_WIDTH ? 0xFFFFFFFF : (1u << (end * 4)) - 1) & ~((1u << (start * 4)) - 1);
            u32 *word = &row[(px / TILE_WIDTH) * TILE_HEIGHT];

            *word = (*word & ~mask) | (fill & mask);
            px += end - start;
        }
    }
}

static void PartySlot_Print(u32 windowId, u32 fontId, u32 x, u32 y, enum PartyTextColors color, const u8 *str)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, 0, 0, sPartyMenu_TextColors[color], TEXT_SKIP_DRAW, str);
}

// ==================================================
// Cursor
// ==================================================

static s8 *PartyCursor_GetSlotPtr(void)
{
    if (gPartyMenu.action == PARTY_ACTION_SWITCH || gPartyMenu.action == PARTY_ACTION_SOFTBOILED)
        return &gPartyMenu.slotId2;
    return &gPartyMenu.slotId;
}

static bool32 PartyCursor_HandleDirectionalInput(void)
{
    s8 *slotPtr = PartyCursor_GetSlotPtr();
    u32 partyCount = sPartyMenuDataPtr->partyCount;
    u32 slot = *slotPtr;
    u32 col = slot % PARTY_SLOT_COLUMNS;

    if (JOY_REPEAT(DPAD_RIGHT))
    {
        slot = (slot + 1) % partyCount;
    }
    else if (JOY_REPEAT(DPAD_LEFT))
    {
        slot = (slot + partyCount - 1) % partyCount;
    }
    else if (JOY_REPEAT(DPAD_UP))
    {
        if (slot < PARTY_SLOT_COLUMNS)
        {
            slot = col + ((partyCount - 1 - col) / PARTY_SLOT_COLUMNS) * PARTY_SLOT_COLUMNS;
        }
        else
        {
            slot -= PARTY_SLOT_COLUMNS;
        }
    }
    else if (JOY_REPEAT(DPAD_DOWN))
    {
        slot += PARTY_SLOT_COLUMNS;
        if (slot >= partyCount)
            slot = col;
    }

    if (slot >= partyCount || slot == (u32)*slotPtr)
        return FALSE;

    PlaySE(SE_SELECT);
    *slotPtr = slot;
    return TRUE;
}

void AnimatePartySlot(u8 slot, u8 animNum)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];
    bool32 isSource = (gPartyMenu.action == PARTY_ACTION_SWITCH || gPartyMenu.action == PARTY_ACTION_SOFTBOILED)
                   && slot == gPartyMenu.slotId;

    SetWindowAttribute(windowId, WINDOW_PALETTE_NUM, isSource ? PARTY_BG_PAL_SLOT_MARKED : PARTY_BG_PAL_SLOT_MAIN);
    PutWindowTilemap(windowId);
    ScheduleBgCopyTilemapToVram(PARTY_BG_SLOTS);
}

static void PartyCursor_SnapToSlot(void)
{
    struct Sprite *cursor = &gSprites[sPartyMenuDataPtr->cursorSpriteId];
    u32 slot = *PartyCursor_GetSlotPtr();

    cursor->x = PartyMonIcon_GetX(slot);
    cursor->y = PartyMonIcon_GetY(slot) + PARTY_CURSOR_Y_OFFSET;

    for (u32 i = 0; i < sPartyMenuDataPtr->partyCount; i++)
    {
        PartyMonIcon_UpdateAnim(i);
    }
}

// ==================================================
// Held slot
// ==================================================

static bool32 PartyMenu_CanSwitch(void)
{
    return gPartyMenu.menuType == PARTY_MENU_TYPE_FIELD
        && gPartyMenu.action == PARTY_ACTION_CHOOSE_MON
        && sPartyMenuDataPtr->partyCount > 1
        && !InBattlePike();
}

static bool32 PartyMenu_IsDefaultScreen(void)
{
    return gPartyMenu.menuType == PARTY_MENU_TYPE_FIELD
        && gPartyMenu.action == PARTY_ACTION_CHOOSE_MON;
}

static void PartyHeld_Lift(void)
{
    gPartyMenu.action = PARTY_ACTION_SWITCH;
    gPartyMenu.slotId2 = gPartyMenu.slotId;
    DisplayPartyMenuStdMessage(PARTY_MSG_MOVE_TO_WHERE);
    gSprites[sPartyMenuDataPtr->cursorSpriteId].invisible = TRUE;
    PartySlot_DrawEmpty(gPartyMenu.slotId);
    PartyMonSprites_SetLifted(gPartyMenu.slotId, TRUE);
    PartyHeld_SnapToSlot();
}

static void PartyHeld_SnapToSlot(void)
{
    u32 heldWindowId = sPartyMenuDataPtr->heldWindowId;
    u32 slot = gPartyMenu.slotId2;
    u32 slotWindowId = sPartyMenuDataPtr->slotWindowIds[slot];
    bool32 isMidRow = (slot / PARTY_SLOT_COLUMNS == PARTY_SLOT_ROW_MID);

    ClearWindowTilemap(heldWindowId);
    SetWindowAttribute(heldWindowId, WINDOW_TILEMAP_LEFT, GetWindowAttribute(slotWindowId, WINDOW_TILEMAP_LEFT) + PARTY_HELD_OFFSET_X);
    SetWindowAttribute(heldWindowId, WINDOW_TILEMAP_TOP, GetWindowAttribute(slotWindowId, WINDOW_TILEMAP_TOP) - (isMidRow ? 0 : PARTY_HELD_OFFSET_Y));
    FillWindowPixelBuffer(heldWindowId, PIXEL_FILL(0));
    // the lifted slot swaps frame art: slot_main on the middle row, slot_mid elsewhere
    PartySlot_Render(heldWindowId, isMidRow ? PARTY_SLOT_ROW_TOP : PARTY_SLOT_ROW_MID, gPartyMenu.slotId, FALSE);
    PutWindowTilemap(heldWindowId);
    CopyWindowToVram(heldWindowId, COPYWIN_FULL);

    PartyMonSprites_MoveToSlot(gPartyMenu.slotId, slot);
}

static void PartyHeld_Place(bool32 confirm)
{
    u32 heldSlot = gPartyMenu.slotId;

    ClearWindowTilemap(sPartyMenuDataPtr->heldWindowId);
    CopyBgTilemapBufferToVram(PARTY_BG_HELD);
    PartyMonSprites_SetLifted(heldSlot, FALSE);

    if (!confirm)
        gPartyMenu.slotId2 = heldSlot;

    u32 targetSlot = gPartyMenu.slotId2;
    if (targetSlot != heldSlot)
    {
        struct Pokemon *party = gParties[B_TRAINER_PLAYER];
        struct Pokemon *temp = Alloc(sizeof(struct Pokemon));
        u8 *iconIds = sPartyMenuDataPtr->monIconSpriteIds;
        u8 *itemIds = sPartyMenuDataPtr->heldItemSpriteIds;
        u8 *statusIds = sPartyMenuDataPtr->statusSpriteIds;
        u8 tempSpriteId;

        if (heldSlot == 0 || targetSlot == 0)
            gFollowerSteps = 0;

        *temp = party[heldSlot];
        party[heldSlot] = party[targetSlot];
        party[targetSlot] = *temp;
        Free(temp);

        SWAP(iconIds[heldSlot], iconIds[targetSlot], tempSpriteId);
        SWAP(itemIds[heldSlot], itemIds[targetSlot], tempSpriteId);
        SWAP(statusIds[heldSlot], statusIds[targetSlot], tempSpriteId);
        PartySlot_Draw(targetSlot);
    }

    PartyMonSprites_MoveToSlot(heldSlot, heldSlot);
    PartySlot_Draw(heldSlot);

    gPartyMenu.action = PARTY_ACTION_CHOOSE_MON;
    gPartyMenu.slotId = targetSlot;
    DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
    gSprites[sPartyMenuDataPtr->cursorSpriteId].invisible = FALSE;
    PartyCursor_SnapToSlot();
}

// ==================================================
// Mon icons
// ==================================================

static void PartySetup_MonIcons(void)
{
    LoadMonIconPalettes();

    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
        PartyMonIcon_Create(slot);
}

static void PartyMonIcon_Create(u32 slot)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][slot];
    u8 spriteId = CreateMonIconIsEgg(GetMonData(mon, MON_DATA_SPECIES), SpriteCB_PartyMonIcon,
                                     PartyMonIcon_GetX(slot), PartyMonIcon_GetY(slot),
                                     PARTY_SPRITE_SUBPRIORITY_MON_ICON,
                                     GetMonData(mon, MON_DATA_PERSONALITY), GetMonData(mon, MON_DATA_IS_EGG));

    gSprites[spriteId].oam.priority = PARTY_SPRITE_PRIORITY_MAIN;
    sPartyMenuDataPtr->monIconSpriteIds[slot] = spriteId;
    PartyMonIcon_UpdateAnim(slot);
}

static void PartyMonIcon_UpdateAnim(u32 slot)
{
    u32 spriteId = sPartyMenuDataPtr->monIconSpriteIds[slot];

    if (spriteId == SPRITE_NONE)
    {
        return;
    }

    enum PartyMonIconAnims anim = PartyMon_GetIconAnim(&gParties[B_TRAINER_PLAYER][slot], slot == PartyMonIcon_GetBouncingSlot());
    if (gSprites[spriteId].animNum != anim)
    {
        SetPartyHPBarSprite(&gSprites[spriteId], anim);
    }
}

static enum PartyMonIconAnims PartyMon_GetIconAnim(struct Pokemon *mon, bool32 isBouncing)
{
    enum PartyMonIconAnims hpAnim;

    switch (GetHPBarLevel(GetMonData(mon, MON_DATA_HP), GetMonData(mon, MON_DATA_MAX_HP)))
    {
    case HP_BAR_FULL:
        hpAnim = PARTY_ICON_ANIM_FULL_HP;
        break;
    case HP_BAR_GREEN:
        hpAnim = PARTY_ICON_ANIM_GREEN_HP;
        break;
    case HP_BAR_YELLOW:
        hpAnim = PARTY_ICON_ANIM_YELLOW_HP;
        break;
    case HP_BAR_RED:
        hpAnim = PARTY_ICON_ANIM_RED_HP;
        break;
    default:
        return PARTY_ICON_ANIM_STOPPED;
    }

    if (isBouncing)
    {
        return hpAnim;
    }

    switch (GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS)))
    {
    case AILMENT_NONE:
        return hpAnim;
    case AILMENT_SLP:
    case AILMENT_FRZ:
        return PARTY_ICON_ANIM_STOPPED;
    default:
        return max(hpAnim, PARTY_ICON_ANIM_RED_HP);
    }
}

static u32 PartyMonIcon_GetBouncingSlot(void)
{
    if (gSprites[sPartyMenuDataPtr->cursorSpriteId].invisible)
    {
        return gPartyMenu.slotId;
    }
    return *PartyCursor_GetSlotPtr();
}

static void SpriteCB_PartyMonIcon(struct Sprite *sprite)
{
    u32 bouncingSlot = PartyMonIcon_GetBouncingSlot();

    UpdateMonIconFrame(sprite);

    if (bouncingSlot >= sPartyMenuDataPtr->partyCount
     || sprite - gSprites != sPartyMenuDataPtr->monIconSpriteIds[bouncingSlot])
    {
        sprite->y2 = 0;
    }
    else
    {
        sprite->y2 = (sprite->animCmdIndex & 1) ? PARTY_MON_ICON_BOUNCE_UP : PARTY_MON_ICON_BOUNCE_DOWN;
    }

    if (sprite->oam.priority == PARTY_SPRITE_PRIORITY_LIFTED)
    {
        sprite->y2 -= PARTY_HELD_SPRITE_OFFSET_Y;
    }
}

static s16 PartyMonIcon_GetX(u32 slot)
{
    return PARTY_MON_ICON_X + PARTY_MON_ICON_X_SPACING * (slot % PARTY_SLOT_COLUMNS);
}

static s16 PartyMonIcon_GetY(u32 slot)
{
    return PARTY_MON_ICON_Y + PARTY_MON_ICON_Y_SPACING * (slot / PARTY_SLOT_COLUMNS);
}

static void PartySetup_HeldItems(void)
{
    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_HeldItem);

    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
        UpdatePartyMonHeldItemSprite(slot);
}

static void UpdatePartyMonHeldItemSprite(u32 slot)
{
    u8 *spriteId = &sPartyMenuDataPtr->heldItemSpriteIds[slot];
    bool32 hasItem = GetMonData(&gParties[B_TRAINER_PLAYER][slot], MON_DATA_HELD_ITEM) != ITEM_NONE;

    if (hasItem && *spriteId == SPRITE_NONE)
    {
        *spriteId = CreateSprite(&sPartyMenu_SpriteTemplate_HeldItem,
                                 PartyMonIcon_GetX(slot) + PARTY_HELD_ITEM_X_OFFSET,
                                 PartyMonIcon_GetY(slot) + PARTY_HELD_ITEM_Y_OFFSET,
                                 PARTY_SPRITE_SUBPRIORITY_HELD_ITEM);
    }
    else if (!hasItem && *spriteId != SPRITE_NONE)
    {
        DestroySprite(&gSprites[*spriteId]);
        *spriteId = SPRITE_NONE;
    }
}

static void PartySetup_StatusIcons(void)
{
    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_Status);
    LoadSpritePalette(&sPartyMenu_SpritePalette_Status);

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3
                               | BLDCNT_TGT2_BD | BLDCNT_EFFECT_BLEND);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(PARTY_STATUS_FADE_LEVELS, 0));

    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
        SetPartyMonAilmentGfx(slot);
}

static void SetPartyMonAilmentGfx(u32 slot)
{
    u8 *spriteId = &sPartyMenuDataPtr->statusSpriteIds[slot];
    u32 ailment = GetMonAilment(&gParties[B_TRAINER_PLAYER][slot]);

    PartyMonIcon_UpdateAnim(slot);

    if (ailment == AILMENT_NONE || ailment == AILMENT_PKRS || PartySlot_IsExpItem())
    {
        if (*spriteId != SPRITE_NONE)
        {
            DestroySprite(&gSprites[*spriteId]);
            *spriteId = SPRITE_NONE;
        }
        return;
    }

    if (*spriteId == SPRITE_NONE)
    {
        *spriteId = CreateSprite(&sPartyMenu_SpriteTemplate_Status,
                                 PartyMonIcon_GetX(slot) + PARTY_STATUS_ICON_X_OFFSET,
                                 PartyMonIcon_GetY(slot) + PARTY_STATUS_ICON_Y_OFFSET,
                                 PARTY_SPRITE_SUBPRIORITY_STATUS);
    }
    StartSpriteAnim(&gSprites[*spriteId], ailment - 1);
}

static void PartySetup_StatStages(void)
{
    if (PartySlot_GetXItemStat() == NUM_BATTLE_STATS)
        return;

    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_StatStage);
    for (u32 i = 0; i < PARTY_STAT_STAGE_NUM; i++)
        sPartyMenuDataPtr->statStageSpriteIds[i] = CreateSprite(&sPartyMenu_SpriteTemplate_StatStage, 0, 0, PARTY_SPRITE_SUBPRIORITY_STAT_STAGE);

    PartyStatStages_Update();
}

static void PartyStatStages_Update(void)
{
    if (sPartyMenuDataPtr->statStageSpriteIds[0] == SPRITE_NONE)
        return;

    u32 slot = *PartyCursor_GetSlotPtr();
    u32 battler = PartySlot_GetActiveBattler(slot);
    s32 stages = 0;

    if (battler != MAX_BATTLERS_COUNT)
        stages = gBattleMons[battler].statStages[PartySlot_GetXItemStat()] - DEFAULT_STAT_STAGE;

    for (u32 i = 0; i < PARTY_STAT_STAGE_NUM; i++)
    {
        struct Sprite *sprite = &gSprites[sPartyMenuDataPtr->statStageSpriteIds[i]];
        enum PartyStatStageFrames frame = PARTY_STAT_STAGE_EMPTY;

        sprite->invisible = (battler == MAX_BATTLERS_COUNT);
        sprite->x = PartyMonIcon_GetX(slot) + PARTY_STAT_STAGE_X_OFFSET + i * PARTY_STAT_STAGE_SPACING;
        sprite->y = PartyMonIcon_GetY(slot) + PARTY_STAT_STAGE_Y_OFFEST;

        if (stages > (s32)i)
            frame = PARTY_STAT_STAGE_RAISED;
        else if (-stages > (s32)i)
            frame = PARTY_STAT_STAGE_LOWERED;
        StartSpriteAnim(sprite, frame);
    }
}

static void PartyStatusIcons_UpdateFade(void)
{
    struct PartyMenuData *data = sPartyMenuDataPtr;

    data->statusFadeTimer++;

    if (data->statusFadePinned && data->statusFadePhase != PARTY_STATUS_FADE_IN)
    {
        if (data->statusFadeLevel == 0)
        {
            data->statusFadePhase = PARTY_STATUS_FADE_SHOW;
            data->statusFadeTimer = 0;
        }
        else
        {
            data->statusFadePhase = PARTY_STATUS_FADE_IN;
            data->statusFadeTimer = (PARTY_STATUS_FADE_LEVELS - data->statusFadeLevel)
                                  * PARTY_STATUS_FADE_FRAMES / PARTY_STATUS_FADE_LEVELS;
        }
    }

    switch (data->statusFadePhase)
    {
    case PARTY_STATUS_FADE_SHOW:
        if (!data->statusFadePinned && data->statusFadeTimer >= PARTY_STATUS_FADE_SHOW_FRAMES)
        {
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_OUT;
        }
        break;
    case PARTY_STATUS_FADE_OUT:
        if (data->statusFadeTimer >= PARTY_STATUS_FADE_FRAMES)
        {
            data->statusFadeLevel = PARTY_STATUS_FADE_LEVELS;
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_HIDE;
        }
        else
        {
            data->statusFadeLevel = data->statusFadeTimer * PARTY_STATUS_FADE_LEVELS / PARTY_STATUS_FADE_FRAMES;
        }
        break;
    case PARTY_STATUS_FADE_HIDE:
        if (data->statusFadeTimer >= PARTY_STATUS_FADE_HIDE_FRAMES)
        {
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_IN;
        }
        break;
    case PARTY_STATUS_FADE_IN:
        if (data->statusFadeTimer >= PARTY_STATUS_FADE_FRAMES)
        {
            data->statusFadeLevel = 0;
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_SHOW;
        }
        else
        {
            data->statusFadeLevel = PARTY_STATUS_FADE_LEVELS
                                  - data->statusFadeTimer * PARTY_STATUS_FADE_LEVELS / PARTY_STATUS_FADE_FRAMES;
        }
        break;
    }

    if (data->statusFadeLevel == data->statusFadeAppliedLevel)
        return;

    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(PARTY_STATUS_FADE_LEVELS - data->statusFadeLevel, data->statusFadeLevel));
    data->statusFadeAppliedLevel = data->statusFadeLevel;
}

// spriteSlot is the party index whose sprites move
static void PartyMonSprites_SetLifted(u32 spriteSlot, bool32 lifted)
{
    u8 spriteIds[] = {
        sPartyMenuDataPtr->monIconSpriteIds[spriteSlot],
        sPartyMenuDataPtr->heldItemSpriteIds[spriteSlot],
        sPartyMenuDataPtr->statusSpriteIds[spriteSlot],
    };

    sPartyMenuDataPtr->statusFadePinned = lifted;

    for (u32 i = 0; i < ARRAY_COUNT(spriteIds); i++)
    {
        if (spriteIds[i] == SPRITE_NONE)
            continue;

        struct Sprite *sprite = &gSprites[spriteIds[i]];
        sprite->oam.priority = lifted ? PARTY_SPRITE_PRIORITY_LIFTED : PARTY_SPRITE_PRIORITY_MAIN;
        sprite->x2 = lifted ? PARTY_HELD_OFFSET_X * TILE_WIDTH : 0;
        sprite->y2 = lifted ? -PARTY_HELD_SPRITE_OFFSET_Y : 0;
    }
}

static void PartyMonSprites_MoveToSlot(u32 spriteSlot, u32 slot)
{
    u32 iconSpriteId = sPartyMenuDataPtr->monIconSpriteIds[spriteSlot];
    u32 itemSpriteId = sPartyMenuDataPtr->heldItemSpriteIds[spriteSlot];
    u32 statusSpriteId = sPartyMenuDataPtr->statusSpriteIds[spriteSlot];

    gSprites[iconSpriteId].x = PartyMonIcon_GetX(slot);
    gSprites[iconSpriteId].y = PartyMonIcon_GetY(slot);

    if (itemSpriteId != SPRITE_NONE)
    {
        gSprites[itemSpriteId].x = PartyMonIcon_GetX(slot) + PARTY_HELD_ITEM_X_OFFSET;
        gSprites[itemSpriteId].y = PartyMonIcon_GetY(slot) + PARTY_HELD_ITEM_Y_OFFSET;
    }

    if (statusSpriteId != SPRITE_NONE)
    {
        gSprites[statusSpriteId].x = PartyMonIcon_GetX(slot) + PARTY_STATUS_ICON_X_OFFSET;
        gSprites[statusSpriteId].y = PartyMonIcon_GetY(slot) + PARTY_STATUS_ICON_Y_OFFSET;
    }
}

// ==================================================
// Action menu
// ==================================================

static void Task_TryCreateSelectionWindow(u8 taskId)
{
    if (CreateSelectionWindow(taskId))
    {
        gTasks[taskId].data[0] = 0xFF;
        gTasks[taskId].func = Task_HandleSelectionMenuInput;
    }
}

static bool8 CreateSelectionWindow(u8 taskId)
{
    struct Pokemon *party = NULL;
    s8 partySlot = 0;
    GetPartyAndSlotFromPartyMenuId(gPartyMenu.slotId, &party, &partySlot);
    struct Pokemon *mon = &party[partySlot];

    GetMonNickname(mon, gStringVar1);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    SetPartyMonSelectionActions(party, gPartyMenu.slotId, GetPartyMenuActionsType(mon));
    DisplaySelectionWindow(SELECTWINDOW_ACTIONS);
    DisplayPartyMenuStdMessage(PARTY_MSG_DO_WHAT_WITH_MON);
    return TRUE;
}

static void SetPartyMonSelectionActions(struct Pokemon *mons, u8 slotId, u8 action)
{
    if (action == ACTIONS_NONE)
    {
        SetPartyMonFieldSelectionActions(mons, slotId);
    }
    else
    {
        sPartyMenuDataPtr->numActions = sPartyMenuActionCounts[action];
        sPartyMenuDataPtr->actions = sPartyMenuActions[action];
    }
}

static void SetPartyMonFieldSelectionActions(struct Pokemon *mons, u8 slotId)
{
    bool32 hasFieldMoves = PartyMon_HasFieldMoves(&mons[slotId]);

    if (InBattlePike())
    {
        sPartyMenuDataPtr->actions = sPartyMenuPikeActions[hasFieldMoves];
        sPartyMenuDataPtr->numActions = sPartyMenuPikeActionCounts[hasFieldMoves];
    }
    else
    {
        bool32 canSwitch = GetMonData(&mons[1], MON_DATA_SPECIES) != SPECIES_NONE;

        sPartyMenuDataPtr->actions = sPartyMenuFieldActions[canSwitch][hasFieldMoves];
        sPartyMenuDataPtr->numActions = sPartyMenuFieldActionCounts[canSwitch][hasFieldMoves];
    }
}

static u8 GetPartyMenuActionsType(struct Pokemon *mon)
{
    u32 actionType;

    switch (gPartyMenu.menuType)
    {
    case PARTY_MENU_TYPE_FIELD:
        if (InMultiPartnerRoom() == TRUE || GetMonData(mon, MON_DATA_IS_EGG))
            actionType = ACTIONS_SWITCH;
        else
            actionType = ACTIONS_NONE; // actions populated by SetPartyMonFieldSelectionActions
        break;
    case PARTY_MENU_TYPE_IN_BATTLE:
        actionType = GetPartyMenuActionsTypeInBattle(mon);
        break;
    case PARTY_MENU_TYPE_CHOOSE_HALF:
        switch (GetPartySlotEntryStatus(gPartyMenu.slotId))
        {
        default: // Not eligible
            actionType = ACTIONS_SUMMARY_ONLY;
            break;
        case 0: // Eligible
            actionType = ACTIONS_ENTER;
            break;
        case 1: // Already selected
            actionType = ACTIONS_NO_ENTRY;
            break;
        }
        break;
    case PARTY_MENU_TYPE_DAYCARE:
        actionType = (GetMonData(mon, MON_DATA_IS_EGG)) ? ACTIONS_SUMMARY_ONLY : ACTIONS_STORE;
        break;
    case PARTY_MENU_TYPE_UNION_ROOM_REGISTER:
        actionType = ACTIONS_REGISTER;
        break;
    case PARTY_MENU_TYPE_UNION_ROOM_TRADE:
        actionType = ACTIONS_TRADE;
        break;
    case PARTY_MENU_TYPE_SPIN_TRADE:
        actionType = ACTIONS_SPIN_TRADE;
        break;
    case PARTY_MENU_TYPE_STORE_PYRAMID_HELD_ITEMS:
        actionType = ACTIONS_TAKEITEM_TOSS;
        break;
    // The following have no selection actions (i.e. they exit immediately upon selection)
    // PARTY_MENU_TYPE_CONTEST
    // PARTY_MENU_TYPE_CHOOSE_MON
    // PARTY_MENU_TYPE_MULTI_SHOWCASE
    // PARTY_MENU_TYPE_MULTI_FULL_SHOWCASE
    // PARTY_MENU_TYPE_MOVE_RELEARNER
    // PARTY_MENU_TYPE_MINIGAME
    default:
        actionType = ACTIONS_NONE;
        break;
    }
    return actionType;
}

static u8 GetPartyMenuActionsTypeInBattle(struct Pokemon *mon)
{
    if (GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_SPECIES) != SPECIES_NONE
     && GetMonData(mon, MON_DATA_IS_EGG) == FALSE
     && gPartyMenu.layout != PARTY_LAYOUT_MULTI_FULL_PARTNER)
    {
        if (gPartyMenu.action == PARTY_ACTION_SEND_OUT)
            return ACTIONS_SEND_OUT;
        if (!(gBattleTypeFlags & BATTLE_TYPE_ARENA))
            return ACTIONS_SHIFT;
    }
    return ACTIONS_SUMMARY_ONLY;
}

static u8 GetPartySlotEntryStatus(s8 slot)
{
    if (GetBattleEntryEligibility(&gParties[B_TRAINER_PLAYER][slot]) == FALSE)
        return 2;
    if (HasPartySlotAlreadyBeenSelected(slot + 1) == TRUE)
        return 1;
    return 0;
}

static bool8 GetBattleEntryEligibility(struct Pokemon *mon)
{
    enum Species species;

    if (GetMonData(mon, MON_DATA_IS_EGG)
        || GetMonData(mon, MON_DATA_LEVEL) > GetBattleEntryLevelCap()
        || (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY)
            && gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY)
            && GetMonData(mon, MON_DATA_HELD_ITEM) != ITEM_NONE))
    {
        return FALSE;
    }

    switch (VarGet(VAR_FRONTIER_FACILITY))
    {
    case FACILITY_MULTI_OR_EREADER:
        if (GetMonData(mon, MON_DATA_HP) != 0)
            return TRUE;
        return FALSE;
    case FACILITY_UNION_ROOM:
        return TRUE;
    default: // Battle Frontier
        species = GetMonData(mon, MON_DATA_SPECIES);
        if (gSpeciesInfo[species].isFrontierBanned)
            return FALSE;
        return TRUE;
    }
}

static u8 CheckBattleEntriesAndGetMessage(void)
{
    u8 maxBattlers;
    u8 i, j;
    u8 facility;
    struct Pokemon *party = gParties[B_TRAINER_PLAYER];
    u8 minBattlers = GetMinBattleEntries();
    u8 *order = gSelectedOrderFromParty;

    if (order[minBattlers - 1] == 0)
    {
        if (minBattlers == 1)
            return PARTY_MSG_NO_MON_FOR_BATTLE;
        ConvertIntToDecimalStringN(gStringVar1, minBattlers, STR_CONV_MODE_LEFT_ALIGN, 1);
        return PARTY_MSG_X_MONS_ARE_NEEDED;
    }

    facility = VarGet(VAR_FRONTIER_FACILITY);
    if (facility == FACILITY_UNION_ROOM || facility == FACILITY_MULTI_OR_EREADER)
        return 0xFF;

    maxBattlers = GetMaxBattleEntries();
    for (i = 0; i < maxBattlers - 1; i++)
    {
        enum Species species = GetMonData(&party[order[i] - 1], MON_DATA_SPECIES);
        enum Item item = GetMonData(&party[order[i] - 1], MON_DATA_HELD_ITEM);
        for (j = i + 1; j < maxBattlers; j++)
        {
            if (species == GetMonData(&party[order[j] - 1], MON_DATA_SPECIES))
                return PARTY_MSG_MONS_CANT_BE_SAME;
            if (item != ITEM_NONE && item == GetMonData(&party[order[j] - 1], MON_DATA_HELD_ITEM))
                return PARTY_MSG_NO_SAME_HOLD_ITEMS;
        }
    }

    return 0xFF;
}

static bool8 HasPartySlotAlreadyBeenSelected(u8 slot)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(gSelectedOrderFromParty); i++)
    {
        if (gSelectedOrderFromParty[i] == slot)
            return TRUE;
    }
    return FALSE;
}

static void Task_ValidateChosenHalfParty(u8 taskId)
{
    u8 msgId = CheckBattleEntriesAndGetMessage();

    if (msgId != 0xFF)
    {
        PlaySE(SE_FAILURE);
        DisplayPartyMenuStdMessage(msgId);
        gTasks[taskId].func = Task_ContinueChoosingHalfParty;
    }
    else
    {
        PlaySE(SE_SELECT);
        Task_ClosePartyMenu(taskId);
    }
}

static void Task_ContinueChoosingHalfParty(u8 taskId)
{
    if ((JOY_NEW(A_BUTTON)) || (JOY_NEW(B_BUTTON)))
    {
        PlaySE(SE_SELECT);
        DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
        gTasks[taskId].func = Task_HandleChooseMonInput;
    }
}

static u8 GetMaxBattleEntries(void)
{
    switch (VarGet(VAR_FRONTIER_FACILITY))
    {
    case FACILITY_MULTI_OR_EREADER:
        return MULTI_PARTY_SIZE;
    case FACILITY_UNION_ROOM:
        return UNION_ROOM_PARTY_SIZE;
    default: // Battle Frontier
        return gSpecialVar_0x8005;
    }
}

static u8 GetMinBattleEntries(void)
{
    switch (VarGet(VAR_FRONTIER_FACILITY))
    {
    case FACILITY_MULTI_OR_EREADER:
        return 1;
    case FACILITY_UNION_ROOM:
        return UNION_ROOM_PARTY_SIZE;
    default: // Battle Frontier
        return gSpecialVar_0x8005;
    }
}

static u8 GetBattleEntryLevelCap(void)
{
    switch (VarGet(VAR_FRONTIER_FACILITY))
    {
    case FACILITY_MULTI_OR_EREADER:
        return MAX_LEVEL;
    case FACILITY_UNION_ROOM:
        return UNION_ROOM_MAX_LEVEL;
    default: // Battle Frontier
        if (gSpecialVar_0x8004 == FRONTIER_LVL_50)
            return FRONTIER_MAX_LEVEL_50;
        return FRONTIER_MAX_LEVEL_OPEN;
    }
}

static u8 DisplaySelectionWindow(u8 windowType)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST];
    struct WindowTemplate window;

    u32 height = sPartyMenuDataPtr->numActions * PARTY_LIST_ROW_HEIGHT;

    switch (windowType)
    {
    case SELECTWINDOW_MOVES:
    {
        u32 width = PARTY_MOVES_WIDTH;

        SetWindowTemplateFields(&window, PARTY_BG_TEXT, DISPLAY_TILE_WIDTH - width, PARTY_FOOTER_TOP - PARTY_FRAME_SIZE - height, width, height, PARTY_BG_PAL_MENU_TEXT, PARTY_TEXT_TILE_LIST);
        break;
    }
    case SELECTWINDOW_CATALOG:
        SetWindowTemplateFields(&window, PARTY_BG_TEXT, DISPLAY_TILE_WIDTH - PARTY_CATALOG_WIDTH, PARTY_FOOTER_TOP - PARTY_FRAME_SIZE - height, PARTY_CATALOG_WIDTH, height, PARTY_BG_PAL_MENU_TEXT, PARTY_TEXT_TILE_LIST);
        break;
    case SELECTWINDOW_ZYGARDECUBE:
        SetWindowTemplateFields(&window, PARTY_BG_TEXT, DISPLAY_TILE_WIDTH - PARTY_ZYGARDE_CUBE_WIDTH, PARTY_FOOTER_TOP - PARTY_FRAME_SIZE - height, PARTY_ZYGARDE_CUBE_WIDTH, height, PARTY_BG_PAL_MENU_TEXT, PARTY_TEXT_TILE_LIST);
        break;
    case SELECTWINDOW_FIELD_MOVES:
        height = min(sPartyMenuDataPtr->numActions, PARTY_FIELD_MOVES_ROWS) * PARTY_LIST_ROW_HEIGHT;
        SetWindowTemplateFields(&window, PARTY_BG_TEXT, DISPLAY_TILE_WIDTH - PARTY_ACTIONS_WIDTH, PARTY_FOOTER_TOP - PARTY_FRAME_SIZE - height, PARTY_ACTIONS_WIDTH, height, PARTY_BG_PAL_MENU_TEXT, PARTY_TEXT_TILE_LIST);
        break;
    case SELECTWINDOW_ACTIONS:
    case SELECTWINDOW_ITEM:
    default:
        SetWindowTemplateFields(&window, PARTY_BG_TEXT, DISPLAY_TILE_WIDTH - PARTY_ACTIONS_WIDTH, PARTY_FOOTER_TOP - PARTY_FRAME_SIZE - height, PARTY_ACTIONS_WIDTH, height, PARTY_BG_PAL_MENU_TEXT, PARTY_TEXT_TILE_LIST);
        break;
    }

    *windowPtr = AddWindow(&window);
    CallWindowFunction(*windowPtr, PartyList_DrawFrame);
    sPartyMenuDataPtr->actionCursor = 0;
    sPartyMenuDataPtr->listScroll = 0;
    if (windowType == SELECTWINDOW_FIELD_MOVES && sPartyMenuDataPtr->numActions > PARTY_FIELD_MOVES_ROWS)
    {
        PartyList_CreateScrollArrows();
    }
    if (windowType == SELECTWINDOW_MOVES)
    {
        PartyMoves_Draw(*windowPtr);
    }
    else
    {
        PartyActions_Draw(*windowPtr);
    }
    PutWindowTilemap(*windowPtr);
    if (sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG] == WINDOW_NONE)
        PartyView_DrawFooter(PARTY_FOOTER_LIST);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);

    return *windowPtr;
}

static void PartyActions_Draw(u32 windowId)
{
    u32 width = GetWindowAttribute(windowId, WINDOW_WIDTH);
    u32 numRows = GetWindowAttribute(windowId, WINDOW_HEIGHT) / PARTY_LIST_ROW_HEIGHT;
    u32 scroll = sPartyMenuDataPtr->listScroll;

    PartyList_Clear(windowId, sPartyMenuDataPtr->actionCursor - scroll);
    if (sPartyMenuDataPtr->scrollArrowSpriteIds[PARTY_SCROLL_ARROW_UP] != SPRITE_NONE)
    {
        gSprites[sPartyMenuDataPtr->scrollArrowSpriteIds[PARTY_SCROLL_ARROW_UP]].invisible = (scroll == 0);
        gSprites[sPartyMenuDataPtr->scrollArrowSpriteIds[PARTY_SCROLL_ARROW_DOWN]].invisible = (scroll + numRows >= sPartyMenuDataPtr->numActions);
    }

    for (u32 row = 0; row < numRows; row++)
    {
        u32 action = sPartyMenuDataPtr->actions[row];

        if (action >= MENU_FIELD_MOVES)
        {
            u32 color = PartyMenu_IsFieldMoveBlocked(action - MENU_FIELD_MOVES) ? COLORID_MENU_GREY : COLORID_MENU_FIELD_MOVE;
            PartyList_PrintRow(windowId, row, width, color, GetMoveName(FieldMove_GetMoveId(action - MENU_FIELD_MOVES)));
        }
        else if (PartyActions_IsHexorbBlocked(action))
        {
            PartyList_PrintRow(windowId, row, width, COLORID_MENU_GREY, sCursorOptions[action].text);
        }
        else
        {
            PartyList_PrintRow(windowId, row, width, action == MENU_FIELD_MOVES_SUBMENU ? COLORID_MENU_FIELD_MOVE : COLORID_MENU_WHITE, sCursorOptions[action].text);
        }
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static bool32 PartyActions_IsHexorbBlocked(u32 action)
{
    if (action < MENU_INFLICT_SLEEP || action > MENU_INFLICT_PARALYSIS)
    {
        return FALSE;
    }

    u32 status = Hexorb_ConvertMenuPosToStatus(action - MENU_INFLICT_SLEEP);
    return Hexorb_GetInflictResult(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], status) != HEXORB_RESULT_SUCCESS;
}

static void PartyMoves_Draw(u32 windowId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    bool32 isBoostItem = PartyMoves_IsPPBoostItem();
    const u8 *slash = COMPOUND_STRING("/");
    u32 slashX = isBoostItem ? PARTY_MOVES_BOOST_SLASH_X : PARTY_MOVES_HEAL_SLASH_X;
    u32 slashWidth = GetStringWidth(PARTY_LIST_FONT, slash, 0);
    u32 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);

    PartyList_Clear(windowId, sPartyMenuDataPtr->actionCursor);
    for (u32 i = 0; i < sPartyMenuDataPtr->numActions; i++)
    {
        enum Move move = GetMonData(mon, MON_DATA_MOVE1 + i);
        const u8 *name = GetMoveName(move);
        u32 y = i * TILE_TO_PIXELS(PARTY_LIST_ROW_HEIGHT);
        u32 maxPP = CalculatePPWithBonus(move, ppBonuses, i);
        u32 pp = GetMonData(mon, MON_DATA_PP1 + i);
        enum PartyTextColors color;
        u8 text[4];

        PartySlot_Print(windowId, GetFontIdToFit(name, PARTY_LIST_FONT, 0, PARTY_MOVES_NAME_WIDTH), PARTY_LIST_TEXT_X, y, COLORID_MENU_WHITE, name);

        ConvertIntToDecimalStringN(text, pp, STR_CONV_MODE_LEFT_ALIGN, 2);
        color = (pp == maxPP) ? COLORID_MENU_GREEN : sPartyMenu_PPStateColors[GetCurrentPPToMaxPPState(pp, maxPP)];
        u32 x = (isBoostItem ? slashX : PARTY_MOVES_HEAL_PP_RIGHT) - GetStringWidth(PARTY_LIST_FONT, text, 0);
        PartySlot_Print(windowId, PARTY_LIST_FONT, x, y, color, text);

        PartySlot_Print(windowId, PARTY_LIST_FONT, slashX, y, COLORID_MENU_WHITE, slash);

        ConvertIntToDecimalStringN(text, maxPP, STR_CONV_MODE_LEFT_ALIGN, 2);
        color = (PartyMoves_GetPPBoost(mon, i) == 0) ? COLORID_MENU_GREEN : COLORID_MENU_WHITE;
        x = isBoostItem ? PARTY_MOVES_BOOST_MAX_RIGHT - GetStringWidth(PARTY_LIST_FONT, text, 0) : slashX + slashWidth;
        PartySlot_Print(windowId, PARTY_LIST_FONT, x, y, color, text);

        if (i == sPartyMenuDataPtr->actionCursor)
        {
            u32 delta = isBoostItem ? PartyMoves_GetPPBoost(mon, i) : PartyMoves_GetPPRestore(mon, i);

            text[0] = CHAR_PLUS;
            ConvertIntToDecimalStringN(&text[1], delta, STR_CONV_MODE_LEFT_ALIGN, 2);
            x = isBoostItem ? PARTY_MOVES_BOOST_DELTA_X : PARTY_MOVES_HEAL_DELTA_X;
            PartySlot_Print(windowId, PARTY_LIST_FONT, x, y, delta != 0 ? COLORID_MENU_RED : COLORID_MENU_GREY, text);
        }
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static bool32 PartyMoves_IsPPBoostItem(void)
{
    enum ItemEffectType effectType = GetItemEffectType(gSpecialVar_ItemId);

    return effectType == ITEM_EFFECT_PP_UP || effectType == ITEM_EFFECT_PP_MAX;
}

// mirrors ITEM4_PP_UP / ITEM5_PP_MAX in PokemonUseItemEffects
static u32 PartyMoves_GetPPBoost(struct Pokemon *mon, u32 moveSlot)
{
    enum Move move = GetMonData(mon, MON_DATA_MOVE1 + moveSlot);
    u32 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
    u32 ppUps = (ppBonuses & gPPUpGetMask[moveSlot]) >> (moveSlot * 2);
    u32 maxPP = CalculatePPWithBonus(move, ppBonuses, moveSlot);
    u32 newPPUps = (GetItemEffectType(gSpecialVar_ItemId) == ITEM_EFFECT_PP_MAX) ? 3 : ppUps + 1;

    if (ppUps >= 3 || maxPP < 5)
        return 0;

    ppBonuses = (ppBonuses & gPPUpClearMask[moveSlot]) + gPPUpAddValues[moveSlot] * newPPUps;
    return CalculatePPWithBonus(move, ppBonuses, moveSlot) - maxPP;
}

static u32 PartyMoves_GetPPRestore(struct Pokemon *mon, u32 moveSlot)
{
    enum Move move = GetMonData(mon, MON_DATA_MOVE1 + moveSlot);
    u32 maxPP = CalculatePPWithBonus(move, GetMonData(mon, MON_DATA_PP_BONUSES), moveSlot);

    return min(GetItemEffect(gSpecialVar_ItemId)[ITEM_EFFECT_ARG_START], maxPP - GetMonData(mon, MON_DATA_PP1 + moveSlot));
}

static void PartyList_Clear(u32 windowId, u32 cursor)
{
    u32 y = cursor * TILE_TO_PIXELS(PARTY_LIST_ROW_HEIGHT);
    u32 windowWidth = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_WIDTH));

    FillWindowPixelBuffer(windowId, PIXEL_FILL(PARTY_MENU_COLOR_WHITE));
    BlitBitmapToWindow(windowId, sPartyMenu_Gfx_ListCursor, 0, y, PARTY_LIST_CURSOR_WIDTH, PARTY_LIST_CURSOR_HEIGHT);
    for (u32 x = PARTY_LIST_CURSOR_WIDTH; x < windowWidth; x += PARTY_LIST_CURSOR_WIDTH - PARTY_LIST_CURSOR_CAP_WIDTH)
    {
        u32 width = min(windowWidth - x, PARTY_LIST_CURSOR_WIDTH - PARTY_LIST_CURSOR_CAP_WIDTH);

        BlitBitmapRectToWindow(windowId, sPartyMenu_Gfx_ListCursor, PARTY_LIST_CURSOR_WIDTH - width, 0, PARTY_LIST_CURSOR_WIDTH, PARTY_LIST_CURSOR_HEIGHT,
                               x, y, width, PARTY_LIST_CURSOR_HEIGHT);
    }
}

static void PartyList_DrawFrame(u8 bg, u8 left, u8 top, u8 width, u8 height, u8 paletteNum)
{
    FillBgTilemapBufferRect(bg, PARTY_TEXT_TILE_MENU_FRAME + PARTY_FRAME_TILE_TOP_LEFT,    left - PARTY_FRAME_SIZE, top - PARTY_FRAME_SIZE, PARTY_FRAME_SIZE, PARTY_FRAME_SIZE, PARTY_BG_PAL_FRAME);
    FillBgTilemapBufferRect(bg, PARTY_TEXT_TILE_MENU_FRAME + PARTY_FRAME_TILE_TOP,         left,                    top - PARTY_FRAME_SIZE, width,            PARTY_FRAME_SIZE, PARTY_BG_PAL_FRAME);
    FillBgTilemapBufferRect(bg, PARTY_TEXT_TILE_MENU_FRAME + PARTY_FRAME_TILE_LEFT,        left - PARTY_FRAME_SIZE, top,                    PARTY_FRAME_SIZE, height,           PARTY_BG_PAL_FRAME);
    FillBgTilemapBufferRect(bg, PARTY_TEXT_TILE_MENU_FRAME + PARTY_FRAME_TILE_BOTTOM_LEFT, left - PARTY_FRAME_SIZE, top + height,           PARTY_FRAME_SIZE, PARTY_FRAME_SIZE, PARTY_BG_PAL_FRAME);
    FillBgTilemapBufferRect(bg, PARTY_TEXT_TILE_MENU_FRAME + PARTY_FRAME_TILE_BOTTOM,      left,                    top + height,           width,            PARTY_FRAME_SIZE, PARTY_BG_PAL_FRAME);
}

static void PartyList_ClearFrame(u8 bg, u8 left, u8 top, u8 width, u8 height, u8 paletteNum)
{
    FillBgTilemapBufferRect(bg, 0, left - PARTY_FRAME_SIZE, top - PARTY_FRAME_SIZE, width + PARTY_FRAME_SIZE, height + 2 * PARTY_FRAME_SIZE, 0);
}

static void PartyList_PrintRow(u32 windowId, u32 row, u32 width, enum PartyTextColors color, const u8 *text)
{
    u32 fontId = GetFontIdToFit(text, PARTY_LIST_FONT, 0, TILE_TO_PIXELS(width) - PARTY_LIST_TEXT_X);

    AddTextPrinterParameterized4(windowId, fontId, PARTY_LIST_TEXT_X, row * TILE_TO_PIXELS(PARTY_LIST_ROW_HEIGHT), 0, 0, sPartyMenu_TextColors[color], TEXT_SKIP_DRAW, text);
}

#define tSineStep data[0]
#define tSinePos  data[1]

static void PartyList_CreateScrollArrows(void)
{
    u8 *spriteIds = sPartyMenuDataPtr->scrollArrowSpriteIds;

    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_Spinner);
    spriteIds[PARTY_SCROLL_ARROW_UP] = CreateSprite(&sPartyMenu_SpriteTemplate_ScrollArrow, PARTY_SCROLL_ARROW_X, PARTY_SCROLL_ARROW_UP_Y, PARTY_SPRITE_SUBPRIORITY_CURSOR);
    spriteIds[PARTY_SCROLL_ARROW_DOWN] = CreateSprite(&sPartyMenu_SpriteTemplate_ScrollArrow, PARTY_SCROLL_ARROW_X, PARTY_SCROLL_ARROW_DOWN_Y, PARTY_SPRITE_SUBPRIORITY_CURSOR);
    StartSpriteAnim(&gSprites[spriteIds[PARTY_SCROLL_ARROW_DOWN]], PARTY_SCROLL_ARROW_DOWN);

    gSprites[spriteIds[PARTY_SCROLL_ARROW_UP]].tSineStep = PARTY_SCROLL_ARROW_SINE_STEP;
    gSprites[spriteIds[PARTY_SCROLL_ARROW_DOWN]].tSineStep = -PARTY_SCROLL_ARROW_SINE_STEP;
}

static void SpriteCB_PartyScrollArrow(struct Sprite *sprite)
{
    sprite->y2 = Sin((u8)sprite->tSinePos, PARTY_SCROLL_ARROW_BOUNCE);
    sprite->tSinePos += sprite->tSineStep;
}

#undef tSineStep
#undef tSinePos

static void PartyList_DestroyScrollArrows(void)
{
    for (u32 i = 0; i < ARRAY_COUNT(sPartyMenuDataPtr->scrollArrowSpriteIds); i++)
    {
        DestroySprite(&gSprites[sPartyMenuDataPtr->scrollArrowSpriteIds[i]]);
        sPartyMenuDataPtr->scrollArrowSpriteIds[i] = SPRITE_NONE;
    }
    FreeSpriteTilesByTag(PARTY_GFXTAG_SPINNER);
}

static s32 PartyList_ProcessInput(void (*draw)(u32))
{
    u32 numRows = sPartyMenuDataPtr->numActions;
    u32 cursor = sPartyMenuDataPtr->actionCursor;
    s32 input = MENU_NOTHING_CHOSEN;

    if (JOY_REPEAT(DPAD_UP))
        cursor = (cursor == 0) ? numRows - 1 : cursor - 1;
    else if (JOY_REPEAT(DPAD_DOWN))
        cursor = (cursor == numRows - 1) ? 0 : cursor + 1;
    else if (JOY_NEW(A_BUTTON))
        input = cursor;
    else if (JOY_NEW(B_BUTTON))
        input = MENU_B_PRESSED;

    if (cursor != sPartyMenuDataPtr->actionCursor)
    {
        u32 windowId = sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST];
        u32 visibleRows = GetWindowAttribute(windowId, WINDOW_HEIGHT) / PARTY_LIST_ROW_HEIGHT;

        PlaySE(SE_SELECT);
        sPartyMenuDataPtr->actionCursor = cursor;
        if (numRows > visibleRows)
        {
            s32 scroll = (s32)cursor - (s32)(visibleRows / 2);

            sPartyMenuDataPtr->listScroll = min(max(scroll, 0), (s32)(numRows - visibleRows));
        }
        draw(windowId);
    }
    return input;
}

static void Task_HandleSelectionMenuInput(u8 taskId)
{
    if (!gPaletteFade.active && MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        u32 numActions = sPartyMenuDataPtr->numActions;
        s32 input = PartyList_ProcessInput(PartyActions_Draw);

        switch (input)
        {
        case MENU_NOTHING_CHOSEN:
            break;
        case MENU_B_PRESSED:
            PlaySE(SE_SELECT);
            sCursorOptions[sPartyMenuDataPtr->actions[numActions - 1]].func(taskId);
            break;
        default:
            sCursorOptions[sPartyMenuDataPtr->actions[input]].func(taskId);
            break;
        }
    }
}

static void CursorCb_Summary(u8 taskId)
{
    PlaySE(SE_SELECT);
    sPartyMenuDataPtr->exitCallback = CB2_ShowPokemonSummaryScreen;
    Task_ClosePartyMenu(taskId);
}

static void CB2_ShowPokemonSummaryScreen(void)
{
    if (gPartyMenu.menuType == PARTY_MENU_TYPE_IN_BATTLE)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            LoadBattlePartyCurrentOrderForLayout();

        UpdatePartyToBattleOrder();

        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
        {
            if (!AreMultiPartiesFullTeams())
                GetMultiPartyForSummaryScreen();
        }

        if (gPartyMenu.layout == PARTY_LAYOUT_MULTI_FULL_PARTNER)
            ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, gParties[B_TRAINER_PARTNER], gPartyMenu.slotId, CalculatePartyCount(B_TRAINER_PARTNER) - 1, CB2_ReturnToPartyMenuFromSummaryScreen);
        else if (gPartyMenu.layout == PARTY_LAYOUT_MULTI_FULL)
            ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, CalculatePartyCount(B_TRAINER_PLAYER) - 1, CB2_ReturnToPartyMenuFromSummaryScreen);
        else
            ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, CalculatePartyCountOfSide(B_BATTLER_0) - 1, CB2_ReturnToPartyMenuFromSummaryScreen);
    }
    else if (gPartyMenu.menuType == PARTY_MENU_TYPE_CHOOSE_HALF)
    {
        ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, gPartiesCount[B_TRAINER_PLAYER] - 1, CB2_ReturnToPartyMenuFromSummaryScreen);
    }
    else
    {
        ShowPokemonSummaryScreen(SUMMARY_MODE_NORMAL, gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, gPartiesCount[B_TRAINER_PLAYER] - 1, CB2_ReturnToPartyMenuFromSummaryScreen);
    }
}

void CB2_ReturnToPartyMenuFromSummaryScreen(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_MULTI && !AreMultiPartiesFullTeams() && gPartyMenu.menuType == PARTY_MENU_TYPE_IN_BATTLE)
        RestoreMultiPartyFromSummaryScreen();
    gPaletteFade.bufferTransferDisabled = TRUE;
    gPartyMenu.slotId = gLastViewedMonIndex;
    InitPartyMenu(gPartyMenu.menuType, KEEP_PARTY_LAYOUT, gPartyMenu.action, TRUE, PARTY_MSG_DO_WHAT_WITH_MON, Task_TryCreateSelectionWindow, gPartyMenu.exitCallback);
}

static void CursorCb_Switch(u8 taskId)
{
    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyHeld_Lift();
    gTasks[taskId].func = Task_PartyMenu_HandleHeldInput;
}

static void CursorCb_Cancel1(u8 taskId)
{
    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    if (gPartyMenu.menuType == PARTY_MENU_TYPE_DAYCARE)
        DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON_2);
    else
        DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
    gTasks[taskId].func = Task_HandleChooseMonInput;
}

static void CursorCb_SendMon(u8 taskId)
{
    u32 switchMon = TrySwitchInPokemon();

    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    if (switchMon == CAN_SWITCH)
    {
        Task_ClosePartyMenu(taskId);
    }
    else if (switchMon == SAME_SWITCH)
    {
        HandleChooseMonCancel(taskId, PartyCursor_GetSlotPtr());
    }
    else
    {
        // gStringVar4 below is the error message buffered by TrySwitchInPokemon
        PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
    }
}

static void CursorCb_Enter(u8 taskId)
{
    u8 maxBattlers;
    u8 i;

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    maxBattlers = GetMaxBattleEntries();
    for (i = 0; i < maxBattlers; i++)
    {
        if (gSelectedOrderFromParty[i] == 0)
        {
            PlaySE(SE_SELECT);
            gSelectedOrderFromParty[i] = gPartyMenu.slotId + 1;
            PartySlot_Draw(gPartyMenu.slotId);
            DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
            gTasks[taskId].func = Task_HandleChooseMonInput;
            return;
        }
    }
    ConvertIntToDecimalStringN(gStringVar1, maxBattlers, STR_CONV_MODE_LEFT_ALIGN, 1);
    StringExpandPlaceholders(gStringVar4, gText_NoMoreThanVar1Pkmn);
    PlaySE(SE_FAILURE);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
}

static void CursorCb_NoEntry(u8 taskId)
{
    u8 maxBattlers;
    u8 i, j;

    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    maxBattlers = GetMaxBattleEntries();
    for (i = 0; i < maxBattlers; i++)
    {
        if (gSelectedOrderFromParty[i] == (gPartyMenu.slotId + 1))
        {
            for (j = i; j < (maxBattlers - 1); j++)
                gSelectedOrderFromParty[j] = gSelectedOrderFromParty[j + 1];
            gSelectedOrderFromParty[j] = 0;
            break;
        }
    }
    PartySlot_Draw(gPartyMenu.slotId);
    for (i = 0; i < (maxBattlers - 1); i++)
    {
        if (gSelectedOrderFromParty[i] != 0)
            PartySlot_Draw(gSelectedOrderFromParty[i] - 1);
    }
    DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
    gTasks[taskId].func = Task_HandleChooseMonInput;
}

static void CursorCb_Store(u8 taskId)
{
    PlaySE(SE_SELECT);
    Task_ClosePartyMenu(taskId);
}

// ==================================================
// Field moves
// ==================================================

static void CursorCb_FieldMoves(u8 taskId)
{
    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    SetPartyMonFieldMoveActions(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId]);
    DisplaySelectionWindow(SELECTWINDOW_FIELD_MOVES);
    DisplayPartyMenuStdMessage(PARTY_MSG_WHICH_FIELD_MOVE);
    gTasks[taskId].func = Task_HandleFieldMoveMenuInput;
}

static void Task_HandleFieldMoveMenuInput(u8 taskId)
{
    if (!gPaletteFade.active && MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        switch (PartyList_ProcessInput(PartyFieldMoves_Draw))
        {
        case MENU_NOTHING_CHOSEN:
            break;
        case MENU_B_PRESSED:
            CursorCb_Cancel2(taskId);
            break;
        default:
            CursorCb_FieldMove(taskId);
            break;
        }
    }
}

static bool32 PartyMon_CanUseFieldMove(struct Pokemon *mon, enum FieldMove fieldMove)
{
    enum CanMoveBeLearned canLearn;

    if (!IsFieldMoveUnlocked(fieldMove))
    {
        return FALSE;
    }

    canLearn = CanTeachMove(mon, FieldMove_GetMoveId(fieldMove));
    return canLearn == ALREADY_KNOWS_MOVE || canLearn == CAN_LEARN_MOVE;
}

static bool32 PartyMon_HasFieldMoves(struct Pokemon *mon)
{
    for (enum FieldMove fieldMove = 0; fieldMove < FIELD_MOVES_COUNT; fieldMove++)
    {
        if (PartyMon_CanUseFieldMove(mon, fieldMove))
        {
            return TRUE;
        }
    }
    return FALSE;
}

static void SetPartyMonFieldMoveActions(struct Pokemon *mon)
{
    u32 scroll = sPartyMenuDataPtr->listScroll;

    sPartyMenuDataPtr->numActions = 0;
    for (u32 i = 0; i < ARRAY_COUNT(sPartyMenu_FieldMoveOrder); i++)
    {
        enum FieldMove fieldMove = sPartyMenu_FieldMoveOrder[i];

        if (!PartyMon_CanUseFieldMove(mon, fieldMove))
        {
            continue;
        }
        if (sPartyMenuDataPtr->numActions >= scroll && sPartyMenuDataPtr->numActions - scroll < PARTY_FIELD_MOVES_ROWS)
        {
            sPartyMenuDataPtr->fieldMoveRows[sPartyMenuDataPtr->numActions - scroll] = fieldMove + MENU_FIELD_MOVES;
        }
        sPartyMenuDataPtr->numActions++;
    }
    sPartyMenuDataPtr->actions = sPartyMenuDataPtr->fieldMoveRows;
}

static void PartyFieldMoves_Draw(u32 windowId)
{
    SetPartyMonFieldMoveActions(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId]);
    PartyActions_Draw(windowId);
}

static void BufferCurrentMapName(void)
{
    GetMapNameGeneric(gStringVar1, gMapHeader.regionMapSectionId);
}

static const struct FieldMoveBlock *PartyMenu_GetFieldMoveBlock(enum FieldMove fieldMove)
{
    for (u32 i = 0; i < ARRAY_COUNT(sPartyMenu_FieldMoveBlocks); i++)
    {
        const struct FieldMoveBlock *block = &sPartyMenu_FieldMoveBlocks[i];

        if ((block->fieldMoves & FIELD_MOVE_BIT(fieldMove)) && block->isActive())
        {
            return block;
        }
    }
    return NULL;
}

static bool32 PartyMenu_IsFieldMoveBlocked(enum FieldMove fieldMove)
{
    if (MenuHelpers_IsLinkActive() == TRUE || InUnionRoom() == TRUE || PartyMenu_GetFieldMoveBlock(fieldMove) != NULL)
    {
        return TRUE;
    }

    bool8 (*fieldCallback)(void) = gFieldCallback2;
    MainCallback postMenuCallback = gPostMenuFieldCallback;
    u16 specialVarResult = gSpecialVar_Result;
    bool32 canUse = SetUpFieldMove(fieldMove);

    gFieldCallback2 = fieldCallback;
    gPostMenuFieldCallback = postMenuCallback;
    gSpecialVar_Result = specialVarResult;
    return !canUse;
}

static void CursorCb_FieldMove(u8 taskId)
{
    u8 fieldMove = sPartyMenuDataPtr->actions[sPartyMenuDataPtr->actionCursor - sPartyMenuDataPtr->listScroll] - MENU_FIELD_MOVES;
    const struct MapHeader *mapHeader;

    PlaySE(SE_SELECT);
    if (gFieldMoveInfo[fieldMove].fieldMoveFunc == NULL)
        return;

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    if (MenuHelpers_IsLinkActive() == TRUE || InUnionRoom() == TRUE)
    {
        DisplayPartyMenuStdMessage(PARTY_MSG_CANT_USE_HERE);
        gTasks[taskId].func = Task_CancelAfterAorBPress;
        return;
    }

    const struct FieldMoveBlock *block = PartyMenu_GetFieldMoveBlock(fieldMove);

    if (block != NULL)
    {
        if (block->bufferStrings != NULL)
        {
            block->bufferStrings();
        }
        StringExpandPlaceholders(gStringVar4, block->message);
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
    }
    else if (SetUpFieldMove(fieldMove) == TRUE)
    {
        switch (fieldMove)
        {
        case FIELD_MOVE_MILK_DRINK:
        case FIELD_MOVE_SOFT_BOILED:
            ChooseMonForSoftboiled(taskId);
            break;
        case FIELD_MOVE_TELEPORT:
            mapHeader = Overworld_GetMapHeaderByGroupAndId(gSaveBlock1Ptr->lastHealLocation.mapGroup, gSaveBlock1Ptr->lastHealLocation.mapNum);
            GetMapNameGeneric(gStringVar1, mapHeader->regionMapSectionId);
            StringExpandPlaceholders(gStringVar4, gText_ReturnToHealingSpot);
            DisplayFieldMoveExitAreaMessage(taskId);
            break;
        case FIELD_MOVE_DIG:
            if (ShouldDoSecretLabDigEffect())
            {
                StringExpandPlaceholders(gStringVar4, gText_WantToUseDig);
            }
            else
            {
                mapHeader = Overworld_GetMapHeaderByGroupAndId(gSaveBlock1Ptr->escapeWarp.mapGroup, gSaveBlock1Ptr->escapeWarp.mapNum);
                GetMapNameGeneric(gStringVar1, mapHeader->regionMapSectionId);
                StringExpandPlaceholders(gStringVar4, gText_EscapeFromHere);
            }
            DisplayFieldMoveExitAreaMessage(taskId);
            break;
        case FIELD_MOVE_FLY:
            gPartyMenu.exitCallback = CB2_OpenFlyMapSystemReturnToPartyMenu;
            Task_ClosePartyMenu(taskId);
            break;
        default:
            gPartyMenu.exitCallback = CB2_ReturnToField;
            Task_ClosePartyMenu(taskId);
            break;
        }
    }
    // Cant use Field Move
    else
    {
        switch (fieldMove)
        {
        case FIELD_MOVE_SURF:
            DisplayCantUseSurfMessage();
            break;
        case FIELD_MOVE_FLASH:
            DisplayCantUseFlashMessage();
            break;
        default:
            DisplayPartyMenuStdMessage(FieldMove_GetPartyMsgID(fieldMove));
            break;
        }
        gTasks[taskId].func = Task_CancelAfterAorBPress;
    }
}

static void DisplayFieldMoveExitAreaMessage(u8 taskId)
{
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    gTasks[taskId].func = Task_FieldMoveExitAreaYesNo;
}

static void Task_FieldMoveExitAreaYesNo(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuDisplayYesNoMenu();
        gTasks[taskId].func = Task_HandleFieldMoveExitAreaYesNoInput;
    }
}

static void Task_HandleFieldMoveExitAreaYesNoInput(u8 taskId)
{
    switch (PartyMenuProcessYesNoInput())
    {
    case 0:
        gPartyMenu.exitCallback = CB2_ReturnToField;
        Task_ClosePartyMenu(taskId);
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        // fallthrough
    case 1:
        gFieldCallback2 = NULL;
        gPostMenuFieldCallback = NULL;
        Task_ReturnToChooseMonAfterText(taskId);
        break;
    }
}

static void Task_CancelAfterAorBPress(u8 taskId)
{
    if ((JOY_NEW(A_BUTTON)) || (JOY_NEW(B_BUTTON)))
        CursorCb_Cancel1(taskId);
}

static void DisplayCantUseFlashMessage(void)
{
    if (FlagGet(FLAG_SYS_USE_FLASH) == TRUE)
        DisplayPartyMenuStdMessage(PARTY_MSG_ALREADY_IN_USE);
    else
        DisplayPartyMenuStdMessage(PARTY_MSG_CANT_USE_HERE);
}

static void DisplayCantUseSurfMessage(void)
{
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
        DisplayPartyMenuStdMessage(PARTY_MSG_ALREADY_SURFING);
    else
        DisplayPartyMenuStdMessage(PARTY_MSG_CANT_SURF_HERE);
}

// ==================================================
// HP
// ==================================================

#define tHP           data[0]
#define tMaxHP        data[1]
#define tHPIncrement  data[2]
#define tHPToAdd      data[3]
#define tPartyId      data[4]
#define tStartHP      data[5]

static void Task_PartyMenuModifyHP(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    tHP += tHPIncrement;
    tHPToAdd--;
    struct Pokemon *party = NULL;
    s8 partySlot = 0;
    GetPartyAndSlotFromPartyMenuId(tPartyId, &party, &partySlot);

    SetMonData(&party[partySlot], MON_DATA_HP, &tHP);
    PartySlot_Draw(partySlot);
    if (tHPToAdd == 0 || tHP == 0 || tHP == tMaxHP)
    {
        // If HP was recovered, buffer the amount recovered
        if (tHP > tStartHP)
            ConvertIntToDecimalStringN(gStringVar2, tHP - tStartHP, STR_CONV_MODE_LEFT_ALIGN, 3);

        SwitchTaskToFollowupFunc(taskId);
    }
}

void PartyMenuModifyHP(u8 taskId, u8 slot, s8 hpIncrement, s16 hpDifference, TaskFunc task)
{
    struct Pokemon *mon = GetPartyMonFromPartyMenuId(slot);
    s16 *data = gTasks[taskId].data;

    tHP = GetMonData(mon, MON_DATA_HP);
    tMaxHP = GetMonData(mon, MON_DATA_MAX_HP);
    tHPIncrement = hpIncrement;
    tHPToAdd = hpDifference;
    tPartyId = slot;
    tStartHP = tHP;
    SetTaskFuncWithFollowupFunc(taskId, Task_PartyMenuModifyHP, task);
}

// The usage of hp in this function is mostly nonsense
// Because caseId is always passed 0, none of the other cases ever occur
static void ResetHPTaskData(u8 taskId, u8 caseId, u32 hp)
{
    s16 *data = gTasks[taskId].data;

    switch (caseId) // always zero
    {
    case 0:
        tHP = hp;
        tStartHP = hp;
        break;
    case 1:
        tMaxHP = hp;
        break;
    case 2:
        tHPIncrement = hp;
        break;
    case 3:
        tHPToAdd = hp;
        break;
    case 4:
        tPartyId = hp;
        break;
    case 5:
        SetTaskFuncWithFollowupFunc(taskId, Task_PartyMenuModifyHP, (TaskFunc)hp); // >casting hp as a taskfunc
        break;
    }
}

#undef tHP
#undef tMaxHP
#undef tHPIncrement
#undef tHPToAdd
#undef tPartyId
#undef tStartHP

// ==================================================
// Item use: HP and status
// ==================================================

static bool32 IsHPRecoveryItem(enum Item item)
{
    const u8 *effect = GetItemEffect(item);

    if (effect == NULL)
        return FALSE;

    if (effect[4] & ITEM4_HEAL_HP)
        return TRUE;
    else
        return FALSE;
}

static void GetMedicineItemEffectMessage(enum Item item, u32 statusCured)
{
    switch (GetItemEffectType(item))
    {
    case ITEM_EFFECT_CURE_POISON:
        StringExpandPlaceholders(gStringVar4, gText_PkmnCuredOfPoison);
        break;
    case ITEM_EFFECT_CURE_SLEEP:
        StringExpandPlaceholders(gStringVar4, gText_PkmnWokeUp2);
        break;
    case ITEM_EFFECT_CURE_BURN:
        StringExpandPlaceholders(gStringVar4, gText_PkmnBurnHealed);
        break;
    case ITEM_EFFECT_CURE_FREEZE_FROSTBITE:
        if (statusCured & STATUS1_FREEZE)
            StringExpandPlaceholders(gStringVar4, gText_PkmnThawedOut);
        if (statusCured & STATUS1_FROSTBITE)
            StringExpandPlaceholders(gStringVar4, gText_PkmnFrostbiteHealed);
        break;
    case ITEM_EFFECT_CURE_PARALYSIS:
        StringExpandPlaceholders(gStringVar4, gText_PkmnCuredOfParalysis);
        break;
    case ITEM_EFFECT_CURE_CONFUSION:
        StringExpandPlaceholders(gStringVar4, gText_PkmnSnappedOutOfConfusion);
        break;
    case ITEM_EFFECT_CURE_INFATUATION:
        StringExpandPlaceholders(gStringVar4, gText_PkmnGotOverInfatuation);
        break;
    case ITEM_EFFECT_CURE_ALL_STATUS:
        StringExpandPlaceholders(gStringVar4, gText_PkmnBecameHealthy);
        break;
    case ITEM_EFFECT_HP_EV:
        StringCopy(gStringVar2, gText_HP3);
        StringExpandPlaceholders(gStringVar4, gText_PkmnBaseVar2StatIncreased);
        break;
    case ITEM_EFFECT_ATK_EV:
        StringCopy(gStringVar2, gText_Attack3);
        StringExpandPlaceholders(gStringVar4, gText_PkmnBaseVar2StatIncreased);
        break;
    case ITEM_EFFECT_DEF_EV:
        StringCopy(gStringVar2, gText_Defense3);
        StringExpandPlaceholders(gStringVar4, gText_PkmnBaseVar2StatIncreased);
        break;
    case ITEM_EFFECT_SPEED_EV:
        StringCopy(gStringVar2, gText_Speed2);
        StringExpandPlaceholders(gStringVar4, gText_PkmnBaseVar2StatIncreased);
        break;
    case ITEM_EFFECT_SPATK_EV:
        StringCopy(gStringVar2, gText_SpAtk3);
        StringExpandPlaceholders(gStringVar4, gText_PkmnBaseVar2StatIncreased);
        break;
    case ITEM_EFFECT_SPDEF_EV:
        StringCopy(gStringVar2, gText_SpDef3);
        StringExpandPlaceholders(gStringVar4, gText_PkmnBaseVar2StatIncreased);
        break;
    case ITEM_EFFECT_PP_UP:
    case ITEM_EFFECT_PP_MAX:
        StringExpandPlaceholders(gStringVar4, gText_MovesPPIncreased);
        break;
    case ITEM_EFFECT_HEAL_PP:
        StringExpandPlaceholders(gStringVar4, gText_PPWasRestored);
        break;
    default:
        StringExpandPlaceholders(gStringVar4, gText_WontHaveEffect);
        break;
    }
}

static bool32 NotUsingHPEVItemOnShedinja(struct Pokemon *mon, enum Item item)
{
    if (GetItemEffectType(item) == ITEM_EFFECT_HP_EV && HasShedinjaHPHandling(GetMonData(mon, MON_DATA_SPECIES)))
        return FALSE;
    return TRUE;
}

static bool32 IsItemFlute(enum Item item)
{
    if (item == ITEM_BLUE_FLUTE || item == ITEM_RED_FLUTE || item == ITEM_YELLOW_FLUTE)
        return TRUE;
    return FALSE;
}

void ItemUseCB_Medicine(u8 taskId, TaskFunc task)
{
    u16 hp = 0;
    struct Pokemon *party = NULL;
    s8 partySlot = 0;
    GetPartyAndSlotFromPartyMenuId(gPartyMenu.slotId, &party, &partySlot);
    struct Pokemon *mon = &party[partySlot];
    enum Item item = gSpecialVar_ItemId;
    bool8 canHeal, cannotUse;
    u32 oldStatus = GetMonData(mon, MON_DATA_STATUS);

    if (NotUsingHPEVItemOnShedinja(mon, item) == FALSE)
    {
        cannotUse = TRUE;
    }
    else if (PartySpinner_TryOpen(taskId, PartySlot_GetEvItemMaxCount(mon), PARTY_SPINNER_Y_OFFSET))
    {
        PlaySE(SE_SELECT);
        return;
    }
    else
    {
        canHeal = IsHPRecoveryItem(item);
        if (canHeal == TRUE)
        {
            hp = GetMonData(mon, MON_DATA_HP);
            if (hp == GetMonData(mon, MON_DATA_MAX_HP))
                canHeal = FALSE;
        }
        cannotUse = ExecuteTableBasedItemEffect(mon, item, gPartyMenu.slotId, 0);
    }

    if (cannotUse != FALSE)
    {
        PlaySE(SE_SELECT);
        PartyItem_DisplayNoEffect(taskId);
        return;
    }
    else
    {
        gPartyMenuUseExitCallback = TRUE;
        if (!IsItemFlute(item))
        {
            PlaySE(SE_USE_ITEM);
            RemoveBagItem(item, 1);
        }
        else
        {
            PlaySE(SE_GLASS_FLUTE);
        }
        SetPartyMonAilmentGfx(gPartyMenu.slotId);
        if (canHeal == TRUE)
        {
            if (hp == 0)
                AnimatePartySlot(gPartyMenu.slotId, 1);
            PartyMenuModifyHP(taskId, gPartyMenu.slotId, 1, GetMonData(mon, MON_DATA_HP) - hp, Task_DisplayHPRestoredMessage);
            ResetHPTaskData(taskId, 0, hp);
            return;
        }
        else
        {
            PartySlot_Draw(gPartyMenu.slotId);
            GetMonNickname(mon, gStringVar1);
            GetMedicineItemEffectMessage(item, oldStatus);
            DisplayPartyMenuMessage(gStringVar4, TRUE);
            PartyItem_ReturnOrCloseAfterText(taskId);
        }
    }
}

static void Task_DisplayHPRestoredMessage(u8 taskId)
{
    struct Pokemon *party = NULL;
    s8 partySlot = 0;

    GetPartyAndSlotFromPartyMenuId(gPartyMenu.slotId, &party, &partySlot);
    GetMonNickname(&party[partySlot], gStringVar1);
    StringExpandPlaceholders(gStringVar4, gText_PkmnHPRestoredByVar2);
    DisplayPartyMenuMessage(gStringVar4, FALSE);
    HandleBattleLowHpMusicChange();
    PartyItem_ReturnOrCloseAfterText(taskId);
}

#define tUsedOnSlot   data[0]
#define tHadEffect    data[1]
#define tLastSlotUsed data[2]

void ItemUseCB_SacredAsh(u8 taskId, TaskFunc task)
{
    sPartyMenuDataPtr->tUsedOnSlot = FALSE;
    sPartyMenuDataPtr->tHadEffect = FALSE;
    sPartyMenuDataPtr->tLastSlotUsed = gPartyMenu.slotId;
    UseSacredAsh(taskId);
}

static void UseSacredAsh(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    u16 hp;

    if (GetMonData(mon, MON_DATA_SPECIES) == SPECIES_NONE)
    {
        gTasks[taskId].func = Task_SacredAshLoop;
        return;
    }

    hp = GetMonData(mon, MON_DATA_HP);
    if (ExecuteTableBasedItemEffect(mon, gSpecialVar_ItemId, gPartyMenu.slotId, 0))
    {
        gTasks[taskId].func = Task_SacredAshLoop;
        return;
    }

    PlaySE(SE_USE_ITEM);
    SetPartyMonAilmentGfx(gPartyMenu.slotId);
    AnimatePartySlot(sPartyMenuDataPtr->tLastSlotUsed, 0);
    AnimatePartySlot(gPartyMenu.slotId, 1);
    PartyCursor_SnapToSlot();
    PartyMenuModifyHP(taskId, gPartyMenu.slotId, 1, GetMonData(mon, MON_DATA_HP) - hp, Task_SacredAshDisplayHPRestored);
    ResetHPTaskData(taskId, 0, hp);
    sPartyMenuDataPtr->tUsedOnSlot = TRUE;
    sPartyMenuDataPtr->tHadEffect = TRUE;
}

static void Task_SacredAshLoop(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        if (sPartyMenuDataPtr->tUsedOnSlot == TRUE)
        {
            sPartyMenuDataPtr->tUsedOnSlot = FALSE;
            sPartyMenuDataPtr->tLastSlotUsed = gPartyMenu.slotId;
        }
        if (++(gPartyMenu.slotId) == PARTY_SIZE)
        {
            if (sPartyMenuDataPtr->tHadEffect == FALSE)
            {
                gPartyMenuUseExitCallback = FALSE;
                DisplayPartyMenuMessage(gText_WontHaveEffect, TRUE);
            }
            else
            {
                gPartyMenuUseExitCallback = TRUE;
                RemoveBagItem(gSpecialVar_ItemId, 1);
            }
            gTasks[taskId].func = Task_ClosePartyMenuAfterText;
            gPartyMenu.slotId = 0;
        }
        else
        {
            UseSacredAsh(taskId);
        }
    }
}

static void Task_SacredAshDisplayHPRestored(u8 taskId)
{
    GetMonNickname(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gStringVar1);
    StringExpandPlaceholders(gStringVar4, gText_PkmnHPRestoredByVar2);
    DisplayPartyMenuMessage(gStringVar4, FALSE);
    gTasks[taskId].func = Task_SacredAshLoop;
}

static bool8 IsMonNotFullyHealed(void)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    u16 currentHP = GetMonData(mon,MON_DATA_HP);
    u16 maxHP = GetMonData(mon,MON_DATA_MAX_HP);
    u32 status = GetMonData(mon,MON_DATA_STATUS);

    u8 currentPP = 0, maxPP = 0;
    u8 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);

    s32 j;

    if (currentHP < maxHP)
        return TRUE;

    if (status != 0)
        return TRUE;

    for (j = 0; j < MAX_MON_MOVES; j++)
    {
        currentPP = GetMonData(mon, MON_DATA_PP1 + j);
        maxPP = CalculatePPWithBonus(GetMonData(mon,MON_DATA_MOVE1 + j), ppBonuses, j);

        if (currentPP < maxPP)
        {
            return TRUE;
        }
    }

    return FALSE;
}

static void HealMonFromSlotId(void)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    u32 j = 0, ppBonuses = 0;
    u8 arg[4] = {0,0,0,0};

    // restore HP.
    u16 maxHP = GetMonData(mon, MON_DATA_MAX_HP);
    arg[0] = maxHP;
    arg[1] = maxHP >> 8;
    SetMonData(mon, MON_DATA_HP, arg);

    // restore PP.
    ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
    for(j = 0; j < MAX_MON_MOVES; j++)
    {
        arg[0] = CalculatePPWithBonus(GetMonData(mon, MON_DATA_MOVE1 + j), ppBonuses, j);
        SetMonData(mon, MON_DATA_PP1 + j, arg);
    }

    // since status is u32, the four 0 assignments here are probably for safety to prevent undefined data from reaching SetMonData.
    arg[0] = 0;
    arg[1] = 0;
    arg[2] = 0;
    arg[3] = 0;
    SetMonData(mon, MON_DATA_STATUS, arg);
}

void ItemUseCB_UsePokevial(u8 taskId, TaskFunc task)
{
    PokevialStartVariablesAndRun(taskId, task);
}

static void Task_UsePokevialFromField(u8 taskId)
{
    PokevialStartVariablesAndRun(taskId,NULL);
}

static void PokevialStartVariablesAndRun(u8 taskId, TaskFunc task)
{
    if (gPartyMenu.slotId == 1)
        sPartyMenuDataPtr->tHadEffect = FALSE;

    sPartyMenuDataPtr->tUsedOnSlot = FALSE;
    sPartyMenuDataPtr->tLastSlotUsed = gPartyMenu.slotId;

    gPartyMenu.slotId = 0;
    UsePokevial(taskId);
}

static void UsePokevial(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    u16 hp = 0, maxHP = 0;

    if (GetMonData(mon, MON_DATA_SPECIES) == SPECIES_NONE)
    {
        gTasks[taskId].func = Task_PokevialLoop;
        return;
    }

    if (!IsMonNotFullyHealed())
    {
        gTasks[taskId].func = Task_PokevialLoop;
        return;
    }

    hp = GetMonData(mon, MON_DATA_HP);
    maxHP = GetMonData(mon, MON_DATA_MAX_HP);

    PlaySE(SE_USE_ITEM);
    HealMonFromSlotId();
    SetPartyMonAilmentGfx(gPartyMenu.slotId);
    AnimatePartySlot(sPartyMenuDataPtr->tLastSlotUsed, 0);
    AnimatePartySlot(gPartyMenu.slotId, 1);
    PartyCursor_SnapToSlot();
    if (hp != maxHP)
    {
        PartyMenuModifyHP(taskId, gPartyMenu.slotId, 1, GetMonData(mon, MON_DATA_HP) - hp, Task_PokevialLoop);
        ResetHPTaskData(taskId, 0, hp);
    }

    sPartyMenuDataPtr->tUsedOnSlot = TRUE;
    sPartyMenuDataPtr->tHadEffect = TRUE;
}

static void Task_PokevialLoop(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive())
        return;

    if (sPartyMenuDataPtr->tUsedOnSlot == TRUE)
    {
        sPartyMenuDataPtr->tUsedOnSlot = FALSE;
        sPartyMenuDataPtr->tLastSlotUsed = gPartyMenu.slotId;
    }

    gPartyMenu.slotId++;
    if (gPartyMenu.slotId < PARTY_SIZE)
    {
        UsePokevial(taskId);
        return;
    }

    gPartyMenuUseExitCallback = FALSE;
    if (sPartyMenuDataPtr->tHadEffect)
    {
        PokevialDoseDown(VIAL_STANDARD_DOSE);
        DisplayPartyMenuMessage(gText_YourPkmnWereRestored, FALSE);
    }
    else
        DisplayPartyMenuMessage(gText_WontHaveEffect, TRUE);

    gTasks[taskId].func = Task_ClosePartyMenuAfterText;
    gPartyMenu.slotId = 0;
}

#undef tUsedOnSlot
#undef tHadEffect
#undef tLastSlotUsed

// ==================================================
// Item use: level up and learn move
// ==================================================

void ItemUseCB_RareCandy(u8 taskId, TaskFunc task)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    u8 holdEffectParam = GetItemHoldEffectParam(gSpecialVar_ItemId);

    sInitialLevel = GetMonData(mon, MON_DATA_LEVEL);
    PlaySE(SE_SELECT);
    if (PartySlot_GetExpItemGain(mon, 1) == 0)
    {
        enum Species targetSpecies = SPECIES_NONE;
        bool32 canStopEvo = TRUE;

        // Resets values to 0 so other means of teaching moves doesn't overwrite levels
        sInitialLevel = 0;
        sFinalLevel = 0;

        if (holdEffectParam == 0) // Rare Candy
        {
            targetSpecies = GetEvolutionTargetSpecies(mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, &canStopEvo, CHECK_EVO);
        }

        if (targetSpecies != SPECIES_NONE)
        {
            GetEvolutionTargetSpecies(mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, &canStopEvo, DO_EVO);
            RemoveBagItem(gSpecialVar_ItemId, 1);
            PartyMenu_Free();
            gCB2_AfterEvolution = gPartyMenu.exitCallback;
            BeginEvolutionScene(mon, targetSpecies, canStopEvo, gPartyMenu.slotId);
            DestroyTask(taskId);
        }
        else
        {
            PartyItem_DisplayNoEffect(taskId);
        }
    }
    else if (!PartySpinner_TryOpen(taskId, PartySlot_GetExpItemMaxCount(mon), PARTY_SPINNER_EXP_Y_OFFSET))
    {
        ItemUse_ApplyExpItem(taskId, 1);
    }
}

static void ItemUse_ApplyExpItem(u8 taskId, u32 count)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    u8 holdEffectParam = GetItemHoldEffectParam(gSpecialVar_ItemId);
    u32 gain = PartySlot_GetExpItemGain(mon, count);

    BufferMonStatsToTaskData(mon, sPartyMenuDataPtr->data);
    for (u32 i = 0; i < count; i++)
        ExecuteTableBasedItemEffect(mon, gSpecialVar_ItemId, gPartyMenu.slotId, 0);
    BufferMonStatsToTaskData(mon, &sPartyMenuDataPtr->data[NUM_STATS]);

    sFinalLevel = GetMonData(mon, MON_DATA_LEVEL);
    gPartyMenuUseExitCallback = TRUE;
    UpdateMonDisplayInfoAfterRareCandy(gPartyMenu.slotId, mon);
    RemoveBagItem(gSpecialVar_ItemId, count);
    GetMonNickname(mon, gStringVar1);
    if (sFinalLevel > sInitialLevel)
    {
        PlayFanfareByFanfareNum(FANFARE_LEVEL_UP);
        if (holdEffectParam == 0) // Rare Candy
        {
            ConvertIntToDecimalStringN(gStringVar2, sFinalLevel, STR_CONV_MODE_LEFT_ALIGN, 3);
            StringExpandPlaceholders(gStringVar4, gText_PkmnElevatedToLvVar2);
        }
        else // Exp Candies
        {
            ConvertIntToDecimalStringN(gStringVar2, gain, STR_CONV_MODE_LEFT_ALIGN, 7);
            ConvertIntToDecimalStringN(gStringVar3, sFinalLevel, STR_CONV_MODE_LEFT_ALIGN, 3);
            StringExpandPlaceholders(gStringVar4, gText_PkmnGainedExpAndElevatedToLvVar3);
        }

        DisplayPartyMenuMessage(gStringVar4, TRUE);
        gTasks[taskId].func = Task_DisplayLevelUpStatsPg1;
    }
    else
    {
        sInitialLevel = 0;
        sFinalLevel = 0;
        PlaySE(SE_USE_ITEM);
        ConvertIntToDecimalStringN(gStringVar2, gain, STR_CONV_MODE_LEFT_ALIGN, 7);
        StringExpandPlaceholders(gStringVar4, gText_PkmnGainedExp);
        DisplayPartyMenuMessage(gStringVar4, FALSE);
        PartyItem_ReturnOrCloseAfterText(taskId);
    }
}

static void UpdateMonDisplayInfoAfterRareCandy(u8 slot, struct Pokemon *mon)
{
    SetPartyMonAilmentGfx(slot);
    PartySlot_Draw(slot);
}

static void BufferMonStatsToTaskData(struct Pokemon *mon, s16 *data)
{
    data[0] = GetMonData(mon, MON_DATA_MAX_HP);
    data[1] = GetMonData(mon, MON_DATA_ATK);
    data[2] = GetMonData(mon, MON_DATA_DEF);
    data[4] = GetMonData(mon, MON_DATA_SPATK);
    data[5] = GetMonData(mon, MON_DATA_SPDEF);
    data[3] = GetMonData(mon, MON_DATA_SPEED);
}

static void Task_DisplayLevelUpStatsPg1(u8 taskId)
{
    if (WaitFanfare(FALSE) && IsPartyMenuTextPrinterActive() != TRUE && ((JOY_NEW(A_BUTTON)) || (JOY_NEW(B_BUTTON))))
    {
        PlaySE(SE_SELECT);
        DisplayLevelUpStatsPg1(taskId);
        gTasks[taskId].func = Task_DisplayLevelUpStatsPg2;
    }
}

static void Task_DisplayLevelUpStatsPg2(u8 taskId)
{
    if ((JOY_NEW(A_BUTTON)) || (JOY_NEW(B_BUTTON)))
    {
        PlaySE(SE_SELECT);
        DisplayLevelUpStatsPg2(taskId);
        sInitialLevel += 1; // so the Pokemon doesn't learn a move meant for its previous level
        gTasks[taskId].func = Task_TryLearnNewMoves;
    }
}

static void DisplayLevelUpStatsPg1(u8 taskId)
{
    u16 *arrayPtr = (u16*) sPartyMenuDataPtr->data;

    arrayPtr[12] = CreateLevelUpStatsWindow();
    DrawLevelUpStats(arrayPtr[12], arrayPtr, &arrayPtr[6]);
    CopyWindowToVram(arrayPtr[12], COPYWIN_GFX);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

static void DisplayLevelUpStatsPg2(u8 taskId)
{
    u16 *arrayPtr = (u16*) sPartyMenuDataPtr->data;

    DrawLevelUpStats(arrayPtr[12], &arrayPtr[6], NULL);
    CopyWindowToVram(arrayPtr[12], COPYWIN_GFX);
}

static void DrawLevelUpStats(u32 windowId, const u16 *stats, const u16 *statsAfter)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(PARTY_MENU_COLOR_WHITE));
    for (u32 i = 0; i < NUM_STATS; i++)
    {
        enum Stat stat = sPartyMenu_LevelUpStatOrder[i];
        u32 y = i * PARTY_LEVELUP_ROW_HEIGHT;
        u8 text[5];

        PartySlot_Print(windowId, FONT_OUTLINED, PARTY_LEVELUP_LABEL_X, y, COLORID_MENU_WHITE,
                        stat == STAT_HP ? COMPOUND_STRING("Max. HP") : gStatNamesTable[stat]);
        ConvertIntToDecimalStringN(text, stats[stat], STR_CONV_MODE_LEFT_ALIGN, 3);
        PartySlot_Print(windowId, FONT_OUTLINED, PARTY_LEVELUP_VALUE_RIGHT - GetStringWidth(FONT_OUTLINED, text, 0), y,
                        COLORID_MENU_WHITE, text);
        if (statsAfter != NULL)
        {
            text[0] = CHAR_PLUS;
            ConvertIntToDecimalStringN(&text[1], statsAfter[stat] - stats[stat], STR_CONV_MODE_LEFT_ALIGN, 3);
            PartySlot_Print(windowId, FONT_OUTLINED, PARTY_LEVELUP_DELTA_X, y, COLORID_MENU_RED, text);
        }
    }
}

static u8 CreateLevelUpStatsWindow(void)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST];

    *windowPtr = AddWindow(&sPartyMenu_WinTemplate_LevelUp);
    CallWindowFunction(*windowPtr, PartyList_DrawFrame);
    PutWindowTilemap(*windowPtr);
    return *windowPtr;
}

static void RemoveLevelUpStatsWindow(void)
{
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PutWindowTilemap(PARTY_WIN_HEADER);
}

static void Task_TryLearnNewMoves(u8 taskId)
{
    u16 learnMove;

    if (WaitFanfare(FALSE) && ((JOY_NEW(A_BUTTON)) || (JOY_NEW(B_BUTTON))))
    {
        RemoveLevelUpStatsWindow();
        for (; sInitialLevel <= sFinalLevel; sInitialLevel++)
        {
            SetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_LEVEL, &sInitialLevel);
            learnMove = MonTryLearningNewMove(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], TRUE);
            gPartyMenu.learnMoveState = 1;
            switch (learnMove)
            {
            case 0: // No moves to learn
                if (sInitialLevel >= sFinalLevel)
                    PartyMenuTryEvolution(taskId);
                break;
            case MON_HAS_MAX_MOVES:
                DisplayMonNeedsToReplaceMove(taskId);
                break;
            case MON_ALREADY_KNOWS_MOVE:
                gTasks[taskId].func = Task_TryLearningNextMove;
                break;
            default:
                DisplayMonLearnedMove(taskId, learnMove);
                break;
            }
            if (learnMove)
                break;
        }
    }
}

static void Task_TryLearningNextMove(u8 taskId)
{
    u16 result;
    for (; sInitialLevel <= sFinalLevel; sInitialLevel++)
    {
        SetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_LEVEL, &sInitialLevel);
        result = MonTryLearningNewMove(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], FALSE);
        switch (result)
        {
        case 0: // No moves to learn
            if (sInitialLevel >= sFinalLevel)
                PartyMenuTryEvolution(taskId);
            break;
        case MON_HAS_MAX_MOVES:
            DisplayMonNeedsToReplaceMove(taskId);
            break;
        case MON_ALREADY_KNOWS_MOVE:
            gTasks[taskId].func = Task_TryLearningNextMove;
            return;
        default:
            DisplayMonLearnedMove(taskId, result);
            break;
        }
        if (result)
            break;
    }
}

static void CB2_ReturnToPartyMenuUsingRareCandy(void)
{
    gItemUseCB = ItemUseCB_RareCandy;
    SetMainCallback2(CB2_ShowPartyMenuForItemUse);
}

static void PartyMenuTryEvolution(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Species targetSpecies = SPECIES_NONE;
    bool32 canStopEvo = TRUE;

    // Resets values to 0 so other means of teaching moves doesn't overwrite levels
    sInitialLevel = 0;
    sFinalLevel = 0;

    targetSpecies = GetEvolutionTargetSpecies(mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, &canStopEvo, CHECK_EVO);

    if (targetSpecies != SPECIES_NONE)
    {
        GetEvolutionTargetSpecies(mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, &canStopEvo, DO_EVO);
        PartyMenu_Free();
        if (GetItemFieldFunc(gSpecialVar_ItemId) == ItemUseOutOfBattle_RareCandy && gPartyMenu.menuType == PARTY_MENU_TYPE_FIELD && CheckBagHasItem(gSpecialVar_ItemId, 1))
            gCB2_AfterEvolution = CB2_ReturnToPartyMenuUsingRareCandy;
        else
            gCB2_AfterEvolution = gPartyMenu.exitCallback;
        BeginEvolutionScene(mon, targetSpecies, canStopEvo, gPartyMenu.slotId);
        DestroyTask(taskId);
    }
    else
    {
        PartyItem_ReturnOrCloseAfterText(taskId);
    }
}

static void DisplayMonNeedsToReplaceMove(u8 taskId)
{
    GetMonNickname(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gStringVar1);
    StringCopy(gStringVar2, GetMoveName(gMoveToLearn));
    StringExpandPlaceholders(gStringVar4, gText_PkmnNeedsToReplaceMove);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    gPartyMenu.data1 = gMoveToLearn;
    gTasks[taskId].func = Task_ReplaceMoveYesNo;
}

static void DisplayMonLearnedMove(u8 taskId, u16 move)
{
    GetMonNickname(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gStringVar1);
    StringCopy(gStringVar2, GetMoveName(move));
    StringExpandPlaceholders(gStringVar4, gText_PkmnLearnedMove3);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    gPartyMenu.data1 = move;
    gTasks[taskId].func = Task_DoLearnedMoveFanfareAfterText;
}

static void DisplayLearnMoveMessage(const u8 *str)
{
    StringExpandPlaceholders(gStringVar4, str);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
}

static void DisplayLearnMoveMessageAndClose(u8 taskId, const u8 *str)
{
    DisplayLearnMoveMessage(str);
    gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
}

static void Task_LearnedMove(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Item item = gSpecialVar_ItemId;

    if (gPartyMenu.learnMoveState == 0)
    {
        AdjustFriendship(mon, FRIENDSHIP_EVENT_LEARN_TMHM);
        if (!GetItemImportance(item))
            RemoveBagItem(item, 1);
    }
    GetMonNickname(mon, gStringVar1);
    StringCopy(gStringVar2, GetMoveName(gPartyMenu.data1));
    StringExpandPlaceholders(gStringVar4, gText_PkmnLearnedMove3);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    gTasks[taskId].func = Task_DoLearnedMoveFanfareAfterText;
}

static void Task_DoLearnedMoveFanfareAfterText(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PlayFanfare(MUS_LEVEL_UP);
        if (gPartyMenu.learnMoveState != 1)
            PartySlot_Draw(gPartyMenu.slotId);
        gTasks[taskId].func = Task_LearnNextMoveOrClosePartyMenu;
    }
}

static void Task_LearnNextMoveOrClosePartyMenu(u8 taskId)
{
    if (IsFanfareTaskInactive() && ((JOY_NEW(A_BUTTON)) || (JOY_NEW(B_BUTTON))))
    {
        if (gPartyMenu.learnMoveState == 1)
        {
            Task_TryLearningNextMove(taskId);
        }
        else
        {
            if (gPartyMenu.learnMoveState == 2) // never occurs
                gSpecialVar_Result = TRUE;
            if (gPartyMenu.action == PARTY_ACTION_USE_ITEM)
            {
                Task_ReturnToChooseMonAfterText(taskId);
            }
            else
            {
                Task_ClosePartyMenu(taskId);
            }
        }
    }
}

static void Task_ReplaceMoveYesNo(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuDisplayYesNoMenu();
        gTasks[taskId].func = Task_HandleReplaceMoveYesNoInput;
    }
}

static void Task_HandleReplaceMoveYesNoInput(u8 taskId)
{
    switch (PartyMenuProcessYesNoInput())
    {
    case 0:
        DisplayPartyMenuMessage(gText_WhichMoveToForget, TRUE);
        gTasks[taskId].func = Task_ShowSummaryScreenToForgetMove;
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        // fallthrough
    case 1:
        StopLearningMovePrompt(taskId);
        break;
    }
}

static void Task_ShowSummaryScreenToForgetMove(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        sPartyMenuDataPtr->exitCallback = CB2_ShowSummaryScreenToForgetMove;
        Task_ClosePartyMenu(taskId);
    }
}

static void CB2_ShowSummaryScreenToForgetMove(void)
{
    ShowSelectMovePokemonSummaryScreen(gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, CB2_ReturnToPartyMenuWhileLearningMove, gPartyMenu.data1);
}

static void CB2_ReturnToPartyMenuWhileLearningMove(void)
{
    if (sFinalLevel != 0)
        SetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_LEVEL, &sFinalLevel); // to avoid displaying incorrect level
    if (gPartyMenu.action == PARTY_ACTION_USE_ITEM && gPartyMenu.menuType == PARTY_MENU_TYPE_FIELD && CheckBagHasItem(gSpecialVar_ItemId, 1))
        InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_USE_ITEM, TRUE, PARTY_MSG_NONE, Task_ReturnToPartyMenuWhileLearningMove, gPartyMenu.exitCallback);
    else
        InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, TRUE, PARTY_MSG_NONE, Task_ReturnToPartyMenuWhileLearningMove, gPartyMenu.exitCallback);
}

static void Task_ReturnToPartyMenuWhileLearningMove(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if (GetMoveSlotToReplace() != MAX_MON_MOVES)
            DisplayPartyMenuForgotMoveMessage(taskId);
        else
            StopLearningMovePrompt(taskId);
    }
}

static void DisplayPartyMenuForgotMoveMessage(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Move move = GetMonData(mon, MON_DATA_MOVE1 + GetMoveSlotToReplace());

    GetMonNickname(mon, gStringVar1);
    StringCopy(gStringVar2, GetMoveName(move));
    DisplayLearnMoveMessage(gText_12PoofForgotMove);
    gTasks[taskId].func = Task_PartyMenuReplaceMove;
}

static void Task_PartyMenuReplaceMove(u8 taskId)
{
    struct Pokemon *mon;
    enum Move move;

    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
        RemoveMonPPBonus(mon, GetMoveSlotToReplace());
        move = gPartyMenu.data1;
        SetMonMoveSlot(mon, move, GetMoveSlotToReplace());
        Task_LearnedMove(taskId);
    }
}

static void StopLearningMovePrompt(u8 taskId)
{
    if (P_ASK_MOVE_CONFIRMATION == FALSE)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
        GetMonNickname(mon, gStringVar1);
    }

    StringCopy(gStringVar2, GetMoveName(gPartyMenu.data1));
    StringExpandPlaceholders(gStringVar4, (P_ASK_MOVE_CONFIRMATION) ? gText_StopLearningMove2 : gText_MoveNotLearned);
    DisplayPartyMenuMessage(gStringVar4, TRUE);
    gTasks[taskId].func = (P_ASK_MOVE_CONFIRMATION) ? Task_StopLearningMoveYesNo : Task_HandleStopLearningMove;
}

static void Task_HandleStopLearningMove(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        if (gPartyMenu.learnMoveState == 1)
            gTasks[taskId].func = Task_TryLearningNextMoveAfterText;
        else
            gTasks[taskId].func = Task_ClosePartyMenuAfterText;
    }
}

static void Task_StopLearningMoveYesNo(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuDisplayYesNoMenu();
        gTasks[taskId].func = Task_HandleStopLearningMoveYesNoInput;
    }
}

static void Task_HandleStopLearningMoveYesNoInput(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];

    switch (PartyMenuProcessYesNoInput())
    {
    case 0:
        GetMonNickname(mon, gStringVar1);
        StringCopy(gStringVar2, GetMoveName(gPartyMenu.data1));
        StringExpandPlaceholders(gStringVar4, gText_MoveNotLearned);
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        if (gPartyMenu.learnMoveState == 1)
        {
            gTasks[taskId].func = Task_TryLearningNextMoveAfterText;
        }
        else
        {
            if (gPartyMenu.learnMoveState == 2) // never occurs
                gSpecialVar_Result = FALSE;
            gTasks[taskId].func = Task_ClosePartyMenuAfterText;
        }
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        // fallthrough
    case 1:
        GetMonNickname(mon, gStringVar1);
        StringCopy(gStringVar2, GetMoveName(gPartyMenu.data1));
        DisplayLearnMoveMessage(gText_PkmnNeedsToReplaceMove);
        gTasks[taskId].func = Task_ReplaceMoveYesNo;
        break;
    }
}

static void Task_TryLearningNextMoveAfterText(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
        Task_TryLearningNextMove(taskId);
}

// ==================================================
// Held item
// ==================================================

static void TryItemHoldFormChange(struct Pokemon *mon, s8 slotId, enum BattleTrainer trainer)
{
    if (TryFormChange(mon, FORM_CHANGE_ITEM_HOLD, trainer))
    {
        enum Species species = GetMonData(mon, MON_DATA_SPECIES);
        PlayCry_NormalNoDucking(species, 0, CRY_VOLUME_RS, CRY_VOLUME_RS);
        FreeAndDestroyMonIconSprite(&gSprites[sPartyMenuDataPtr->monIconSpriteIds[slotId]]);
        PartyMonIcon_Create(slotId);
        UpdatePartyMonHeldItemSprite(slotId);
    }
}

enum TryTakeMonItemResult
{
    TAKE_NO_ITEM,
    TAKE_NO_BAG_SPACE,
    TAKE_OK,
};

static enum TryTakeMonItemResult TryTakeMonItem(struct Pokemon *mon)
{
    enum Item item = GetMonData(mon, MON_DATA_HELD_ITEM);

    if (item == ITEM_NONE)
        return TAKE_NO_ITEM;

    if (!AddBagItem(item, 1))
        return TAKE_NO_BAG_SPACE;

    item = ITEM_NONE;
    SetMonData(mon, MON_DATA_HELD_ITEM, &item);
    TryItemHoldFormChange(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gPartyMenu.slotId, B_TRAINER_PLAYER);
    return TAKE_OK;
}

static void BufferBagFullCantTakeItemMessage(void)
{
    StringExpandPlaceholders(gStringVar4, gText_BagFullCouldNotRemoveItem);
}

static void DisplayTookHeldItemMessage(struct Pokemon *mon, enum Item item, bool8 keepOpen)
{
    GetMonNickname(mon, gStringVar1);
    CopyItemName(item, gStringVar2);
    StringExpandPlaceholders(gStringVar4, gText_ReceivedItemFromPkmn);
    DisplayPartyMenuMessage(gStringVar4, keepOpen);
}

static void DisplayGaveHeldItemMessage(struct Pokemon *mon, enum Item item, bool8 keepOpen, u8 unused)
{
    GetMonNickname(mon, gStringVar1);
    CopyItemName(item, gStringVar2);
    StringExpandPlaceholders(gStringVar4, gText_PkmnWasGivenItem);
    DisplayPartyMenuMessage(gStringVar4, keepOpen);
}

static void DisplayAlreadyHoldingItemSwitchMessage(struct Pokemon *mon, enum Item item, bool8 keepOpen)
{
    GetMonNickname(mon, gStringVar1);
    CopyItemName(item, gStringVar2);
    StringExpandPlaceholders(gStringVar4, gText_PkmnAlreadyHoldingItemSwitch);
    DisplayPartyMenuMessage(gStringVar4, keepOpen);
}

static void DisplaySwitchedHeldItemMessage(enum Item item, enum Item item2, bool8 keepOpen)
{
    CopyItemName(item, gStringVar1);
    CopyItemName(item2, gStringVar2);
    StringExpandPlaceholders(gStringVar4, gText_SwitchedPkmnItem);
    DisplayPartyMenuMessage(gStringVar4, keepOpen);
}

static void GiveItemToMon(struct Pokemon *mon, enum Item item)
{
    u8 itemBytes[2];

    itemBytes[0] = item;
    itemBytes[1] = item >> 8;
    SetMonData(mon, MON_DATA_HELD_ITEM, itemBytes);
    TryItemHoldFormChange(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gPartyMenu.slotId, B_TRAINER_PLAYER);
}

static void CursorCb_Item(u8 taskId)
{
    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    SetPartyMonSelectionActions(gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, ACTIONS_ITEM);
    DisplaySelectionWindow(SELECTWINDOW_ITEM);
    DisplayPartyMenuStdMessage(PARTY_MSG_DO_WHAT_WITH_ITEM);
    gTasks[taskId].data[0] = 0xFF;
    gTasks[taskId].func = Task_HandleSelectionMenuInput;
}

static void CursorCb_Give(u8 taskId)
{
    PlaySE(SE_SELECT);
    sPartyMenuDataPtr->exitCallback = CB2_SelectBagItemToGive;
    Task_ClosePartyMenu(taskId);
}

static void CB2_SelectBagItemToGive(void)
{
    if (CurrentBattlePyramidLocation() == PYRAMID_LOCATION_NONE)
        Inventory_Init(CB2_GiveHoldItem, INVENTORY_MODE_GIVE_ITEM);
    else
        GoToBattlePyramidBagMenu(PYRAMIDBAG_LOC_PARTY, CB2_GiveHoldItem);
}

static void CB2_GiveHoldItem(void)
{
    if (gSpecialVar_ItemId == ITEM_NONE)
    {
        InitPartyMenu(gPartyMenu.menuType, KEEP_PARTY_LAYOUT, gPartyMenu.action, TRUE, PARTY_MSG_NONE, Task_TryCreateSelectionWindow, gPartyMenu.exitCallback);
    }
    else
    {
        sPartyMenuItemId = GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_HELD_ITEM);

        // Already holding item
        if (sPartyMenuItemId != ITEM_NONE)
        {
            InitPartyMenu(gPartyMenu.menuType, KEEP_PARTY_LAYOUT, gPartyMenu.action, TRUE, PARTY_MSG_NONE, Task_SwitchHoldItemsPrompt, gPartyMenu.exitCallback);
        }
        // Give item
        else
        {
            InitPartyMenu(gPartyMenu.menuType, KEEP_PARTY_LAYOUT, gPartyMenu.action, TRUE, PARTY_MSG_NONE, Task_GiveHoldItem, gPartyMenu.exitCallback);
        }
    }
}

static void Task_GiveHoldItem(u8 taskId)
{
    enum Item item;

    if (!gPaletteFade.active)
    {
        item = gSpecialVar_ItemId;
        DisplayGaveHeldItemMessage(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], item, FALSE, 0);
        GiveItemToMon(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], item);
        RemoveBagItem(item, 1);
        gTasks[taskId].func = Task_UpdateHeldItemSprite;
    }
}

static void Task_SwitchHoldItemsPrompt(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DisplayAlreadyHoldingItemSwitchMessage(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], sPartyMenuItemId, TRUE);
        gTasks[taskId].func = Task_SwitchItemsYesNo;
    }
}

static void Task_SwitchItemsYesNo(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuDisplayYesNoMenu();
        gTasks[taskId].func = Task_HandleSwitchItemsYesNoInput;
    }
}

static void Task_HandleSwitchItemsYesNoInput(u8 taskId)
{
    switch (PartyMenuProcessYesNoInput())
    {
    case 0: // Yes, switch items
        RemoveBagItem(gSpecialVar_ItemId, 1);

        // No room to return held item to bag
        if (AddBagItem(sPartyMenuItemId, 1) == FALSE)
        {
            AddBagItem(gSpecialVar_ItemId, 1);
            BufferBagFullCantTakeItemMessage();
            DisplayPartyMenuMessage(gStringVar4, FALSE);
            gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
        }
        // Giving item
        else
        {
            GiveItemToMon(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gSpecialVar_ItemId);
            DisplaySwitchedHeldItemMessage(gSpecialVar_ItemId, sPartyMenuItemId, TRUE);
            gTasks[taskId].func = Task_UpdateHeldItemSprite;
        }
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        // fallthrough
    case 1: // No
        gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
        break;
    }
}

static void CursorCb_TakeItem(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Item item = GetMonData(mon, MON_DATA_HELD_ITEM);

    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    switch (TryTakeMonItem(mon))
    {
    case TAKE_NO_ITEM:
        GetMonNickname(mon, gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnNotHolding);
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        break;
    case TAKE_NO_BAG_SPACE:
        BufferBagFullCantTakeItemMessage();
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        break;
    case TAKE_OK:
        DisplayTookHeldItemMessage(mon, item, TRUE);
        break;
    }
    gTasks[taskId].func = Task_UpdateHeldItemSprite;
}

static void Task_UpdateHeldItemSprite(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        UpdatePartyMonHeldItemSprite(gPartyMenu.slotId);
        PartySlot_Draw(gPartyMenu.slotId);
        Task_ReturnToChooseMonAfterText(taskId);
    }
}

static void CursorCb_MoveItem(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];

    PlaySE(SE_SELECT);

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);

    if (GetMonData(mon, MON_DATA_HELD_ITEM) != ITEM_NONE)
    {
        gPartyMenu.action = PARTY_ACTION_SWITCH;
        DisplayPartyMenuStdMessage(PARTY_MSG_MOVE_ITEM_WHERE);
        AnimatePartySlot(gPartyMenu.slotId, 1);
        gPartyMenu.slotId2 = gPartyMenu.slotId;
        gTasks[taskId].func = CursorCb_MoveItemCallback;
    }
    else
    {
        GetMonNickname(mon, gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnNotHolding);
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        gTasks[taskId].func = Task_UpdateHeldItemSprite;
    }
}

static void CursorCb_MoveItemCallback(u8 taskId)
{
    enum Item item1, item2;
    u8 buffer[100];

    if (gPaletteFade.active || MenuHelpers_ShouldWaitForLinkRecv())
        return;

    if (PartyCursor_HandleDirectionalInput())
    {
        PartyCursor_SnapToSlot();
    }
    else if (JOY_NEW(B_BUTTON))
    {
        HandleChooseMonCancel(taskId, &gPartyMenu.slotId2);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        // Pokemon can't give away items to eggs or themselves
        if (GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId2], MON_DATA_IS_EGG)
            || gPartyMenu.slotId == gPartyMenu.slotId2)
        {
            PlaySE(SE_FAILURE);
            return;
        }

        PlaySE(SE_SELECT);
        gPartyMenu.action = PARTY_ACTION_CHOOSE_MON;

        item1 = GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_HELD_ITEM);
        item2 = GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId2], MON_DATA_HELD_ITEM);

        SetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_HELD_ITEM, &item2);
        SetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId2], MON_DATA_HELD_ITEM, &item1);

        TryItemHoldFormChange(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gPartyMenu.slotId, B_TRAINER_PLAYER);
        TryItemHoldFormChange(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId2], gPartyMenu.slotId2, B_TRAINER_PLAYER);

        UpdatePartyMonHeldItemSprite(gPartyMenu.slotId);
        UpdatePartyMonHeldItemSprite(gPartyMenu.slotId2);
        PartySlot_Draw(gPartyMenu.slotId);
        PartySlot_Draw(gPartyMenu.slotId2);

        if (item2 == ITEM_NONE)
        {
            GetMonNickname(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId2], gStringVar1);
            CopyItemName(item1, gStringVar2);
            StringExpandPlaceholders(gStringVar4, gText_PkmnWasGivenItem);
        }
        else
        {
            GetMonNickname(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gStringVar1);
            CopyItemName(item1, gStringVar2);
            StringExpandPlaceholders(buffer, gText_XsYAnd);

            StringAppend(buffer, gText_XsYWereSwapped);
            GetMonNickname(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId2], gStringVar1);
            CopyItemName(item2, gStringVar2);
            StringExpandPlaceholders(gStringVar4, buffer);
        }

        DisplayPartyMenuMessage(gStringVar4, TRUE);

        AnimatePartySlot(gPartyMenu.slotId2, 0);
        AnimatePartySlot(gPartyMenu.slotId, 1);
        PartyCursor_SnapToSlot();

        gTasks[taskId].func = Task_UpdateHeldItemSprite;
    }
}

static void CursorCb_Cancel2(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];

    PlaySE(SE_SELECT);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    SetPartyMonSelectionActions(gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, GetPartyMenuActionsType(mon));
    DisplaySelectionWindow(SELECTWINDOW_ACTIONS);
    DisplayPartyMenuStdMessage(PARTY_MSG_DO_WHAT_WITH_MON);
    gTasks[taskId].data[0] = 0xFF;
    gTasks[taskId].func = Task_HandleSelectionMenuInput;
}

static void TryGiveItemToSelectedMon(u8 taskId)
{
    sPartyMenuItemId = GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_HELD_ITEM);
    if (sPartyMenuItemId == ITEM_NONE)
    {
        GiveItemToSelectedMon(taskId);
    }
    else
    {
        DisplayAlreadyHoldingItemSwitchMessage(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], sPartyMenuItemId, TRUE);
        gTasks[taskId].func = Task_SwitchItemsFromBagYesNo;
    }
}

static void GiveItemToSelectedMon(u8 taskId)
{
    enum Item item;

    if (!gPaletteFade.active)
    {
        item = gPartyMenu.bagItem;
        DisplayGaveHeldItemMessage(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], item, FALSE, 1);
        GiveItemToMon(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], item);
        RemoveBagItem(item, 1);
        gTasks[taskId].func = Task_UpdateHeldItemSpriteAndClosePartyMenu;
    }
}

static void Task_UpdateHeldItemSpriteAndClosePartyMenu(u8 taskId)
{
    s8 slot = gPartyMenu.slotId;

    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        UpdatePartyMonHeldItemSprite(slot);
        PartySlot_Draw(slot);
        Task_ClosePartyMenu(taskId);
    }
}

static void Task_SwitchItemsFromBagYesNo(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        PartyMenuDisplayYesNoMenu();
        gTasks[taskId].func = Task_HandleSwitchItemsFromBagYesNoInput;
    }
}

static void Task_HandleSwitchItemsFromBagYesNoInput(u8 taskId)
{
    enum Item item;

    switch (PartyMenuProcessYesNoInput())
    {
    case 0: // Yes, switch items
        item = gPartyMenu.bagItem;
        RemoveBagItem(item, 1);
        if (AddBagItem(sPartyMenuItemId, 1) == FALSE)
        {
            ReturnGiveItemToBagOrPC(item);
            BufferBagFullCantTakeItemMessage();
            DisplayPartyMenuMessage(gStringVar4, FALSE);
            gTasks[taskId].func = Task_UpdateHeldItemSpriteAndClosePartyMenu;
        }
        else
        {
            GiveItemToMon(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], item);
            DisplaySwitchedHeldItemMessage(item, sPartyMenuItemId, TRUE);
            gTasks[taskId].func = Task_UpdateHeldItemSpriteAndClosePartyMenu;
        }
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        // fallthrough
    case 1: // No, dont switch items
        gTasks[taskId].func = Task_UpdateHeldItemSpriteAndClosePartyMenu;
        break;
    }
}

// Returns FALSE if there was no space to return the item
// but there always should be, and the return is ignored in all uses
static bool8 ReturnGiveItemToBagOrPC(enum Item item)
{
    if (gPartyMenu.action == PARTY_ACTION_GIVE_ITEM)
        return AddBagItem(item, 1);
    else
        return AddPCItem(item, 1);
}

// ==================================================
// Messages
// ==================================================

void DisplayPartyMenuStdMessage(u32 stringId)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG];

    PartyMenuRemoveWindow(windowPtr);
    PartyView_ClearHeader();

    if (stringId == PARTY_MSG_NONE)
        return;

    if (stringId == PARTY_MSG_CHOOSE_MON)
    {
        if (gPartyMenu.action == PARTY_ACTION_MOVE_TUTOR
         || (gPartyMenu.action == PARTY_ACTION_USE_ITEM && GetItemPocket(gSpecialVar_ItemId) == POCKET_TM_HM))
            stringId = PARTY_MSG_TEACH_WHICH_MON;
        else if (gPartyMenu.action == PARTY_ACTION_USE_ITEM)
            stringId = PARTY_MSG_USE_ON_WHICH_MON;
        else if (gPartyMenu.action == PARTY_ACTION_GIVE_ITEM)
            stringId = PARTY_MSG_GIVE_TO_WHICH_MON;
    }

    if (sPartyMenu_HeaderMessages[stringId] != NULL)
    {
        PartyView_ExpandHeader(stringId);
        PartyView_PrintHeader(gStringVar4);
        PartyView_DrawFooter(PartyView_GetFooter(stringId));
        return;
    }

    PartyView_ClearFooter();
    StringExpandPlaceholders(gStringVar4, sPartyMenu_MsgBoxMessages[stringId]);
    *windowPtr = AddWindow(&sPartyMenu_WinTemplate_MsgBox);
    DrawStdFrameWithCustomTileAndPalette(*windowPtr, FALSE, PARTY_TEXT_TILE_FRAME, PARTY_BG_PAL_FRAME);
    AddTextPrinterParameterized(*windowPtr, FONT_NORMAL, gStringVar4, 0, 1, 0, 0);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

#define tKeepOpen  data[0]

u8 DisplayPartyMenuMessage(const u8 *str, bool8 keepOpen)
{
    u8 taskId;

    PrintMessage(str);
    taskId = CreateTask(Task_PrintAndWaitForText, 1);
    gTasks[taskId].tKeepOpen = keepOpen;
    return taskId;
}

static void Task_PrintAndWaitForText(u8 taskId)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG];

    if (RunTextPrintersRetIsActive(*windowPtr) != TRUE)
    {
        if (gTasks[taskId].tKeepOpen == FALSE)
            PartyMenuRemoveWindow(windowPtr);
        DestroyTask(taskId);
    }
}

#undef tKeepOpen

bool8 IsPartyMenuTextPrinterActive(void)
{
    return FuncIsActiveTask(Task_PrintAndWaitForText);
}

static void PartyMenuDisplayYesNoMenu(void)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_YESNO];

    *windowPtr = AddWindow(&sPartyMenu_WinTemplate_YesNo);
    CallWindowFunction(*windowPtr, PartyList_DrawFrame);
    sPartyMenuDataPtr->yesNoCursor = 0;
    PartyYesNo_Draw(*windowPtr);
    PutWindowTilemap(*windowPtr);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

static void PartyYesNo_Draw(u32 windowId)
{
    PartyList_Clear(windowId, sPartyMenuDataPtr->yesNoCursor);
    PartyList_PrintRow(windowId, 0, PARTY_YESNO_WIDTH, COLORID_MENU_WHITE, gText_Yes);
    PartyList_PrintRow(windowId, 1, PARTY_YESNO_WIDTH, COLORID_MENU_WHITE, gText_No);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static s8 PartyMenuProcessYesNoInput(void)
{
    s8 result = MENU_NOTHING_CHOSEN;
    u32 cursor = sPartyMenuDataPtr->yesNoCursor;

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        result = cursor;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        result = MENU_B_PRESSED;
    }
    else if (JOY_NEW(DPAD_UP) && cursor > 0)
    {
        cursor--;
    }
    else if (JOY_NEW(DPAD_DOWN) && cursor < PARTY_YESNO_OPTIONS - 1)
    {
        cursor++;
    }

    if (cursor != sPartyMenuDataPtr->yesNoCursor)
    {
        PlaySE(SE_SELECT);
        sPartyMenuDataPtr->yesNoCursor = cursor;
        PartyYesNo_Draw(sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_YESNO]);
    }

    if (result != MENU_NOTHING_CHOSEN)
        PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_YESNO]);
    return result;
}

static void PrintMessage(const u8 *text)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG];

    PartyMenuRemoveWindow(windowPtr);
    PartyView_ClearFooter();
    *windowPtr = AddWindow(&sPartyMenu_WinTemplate_MsgBox);
    DrawStdFrameWithCustomTileAndPalette(*windowPtr, FALSE, PARTY_TEXT_TILE_FRAME, PARTY_BG_PAL_FRAME);
    gTextFlags.canABSpeedUpPrint = TRUE;
    AddTextPrinterParameterized(*windowPtr, FONT_NORMAL, text, 0, 1, GetPlayerTextSpeedDelay(), NULL);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

static void PartyView_ExpandHeader(u32 stringId)
{
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    const u8 *str = sPartyMenu_HeaderMessages[stringId];

    DynamicPlaceholderTextUtil_Reset();
    switch (stringId)
    {
    case PARTY_MSG_DO_WHAT_WITH_MON:
    case PARTY_MSG_MOVE_TO_WHERE:
    case PARTY_MSG_MOVE_ITEM_WHERE:
    case PARTY_MSG_WHICH_FIELD_MOVE:
        GetMonNickname(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], nickname);
        DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, nickname);
        break;
    case PARTY_MSG_TEACH_WHICH_MON:
        if (gPartyMenu.action == PARTY_ACTION_MOVE_TUTOR)
            DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, GetMoveName(gSpecialVar_0x8005));
        else
            DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, GetMoveName(ItemIdToBattleMoveId(gSpecialVar_ItemId)));
        break;
    case PARTY_MSG_USE_ON_WHICH_MON:
        if (gPartyMenu.action == PARTY_ACTION_SOFTBOILED)
            str = COMPOUND_STRING("Use on which Pokémon?");
        else
            DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, GetItemName(gSpecialVar_ItemId));
        break;
    }
    DynamicPlaceholderTextUtil_ExpandPlaceholders(gStringVar4, str);
}

static void PartyView_PrintHeader(const u8 *str)
{
    u32 fontId = GetFontIdToFit(str, FONT_SMALL, 0, TILE_TO_PIXELS(PARTY_HELPER_WIDTH));

    FillWindowPixelBuffer(PARTY_WIN_HEADER, PIXEL_FILL(0));
    AddTextPrinterParameterized4(PARTY_WIN_HEADER, fontId, 0, PARTY_HELPER_TEXT_Y, 0, 0, sPartyMenu_TextColors[COLORID_PARTY_HELPER], TEXT_SKIP_DRAW, str);
    CopyWindowToVram(PARTY_WIN_HEADER, COPYWIN_GFX);
}

static void PartyView_ClearHeader(void)
{
    FillWindowPixelBuffer(PARTY_WIN_HEADER, PIXEL_FILL(0));
    CopyWindowToVram(PARTY_WIN_HEADER, COPYWIN_GFX);
}

static void PartyView_ClearFooter(void)
{
    FillWindowPixelBuffer(PARTY_WIN_FOOTER, PIXEL_FILL(0));
    ClearWindowTilemap(PARTY_WIN_FOOTER);
    CopyWindowToVram(PARTY_WIN_FOOTER, COPYWIN_GFX);
}

static enum PartyMenuFooters PartyView_GetChooseMonFooter(void)
{
    if (sPartyMenuDataPtr->chooseHalf)
        return PARTY_FOOTER_CHOOSE_HALF;

    switch (gPartyMenu.action)
    {
    case PARTY_ACTION_SOFTBOILED:
        return PARTY_FOOTER_TARGET;
    case PARTY_ACTION_SEND_OUT:
    case PARTY_ACTION_CHOOSE_FAINTED_MON:
        return PARTY_FOOTER_CHOOSE_NO_CANCEL;
    case PARTY_ACTION_CHOOSE_MON:
        if (PartyMenu_CanSwitch())
            return PARTY_FOOTER_DEFAULT;
        if (gPartyMenu.menuType == PARTY_MENU_TYPE_FIELD)
            return PARTY_FOOTER_DEFAULT_NO_SWITCH;
        return PARTY_FOOTER_CHOOSE;
    default:
        return PARTY_FOOTER_CHOOSE;
    }
}

static enum PartyMenuFooters PartyView_GetFooter(u32 stringId)
{
    switch (stringId)
    {
    case PARTY_MSG_MOVE_TO_WHERE:
        return PARTY_FOOTER_SWITCH;
    case PARTY_MSG_MOVE_ITEM_WHERE:
        return PARTY_FOOTER_TARGET;
    case PARTY_MSG_DO_WHAT_WITH_MON:
    case PARTY_MSG_WHICH_FIELD_MOVE:
    case PARTY_MSG_DO_WHAT_WITH_ITEM:
    case PARTY_MSG_DO_WHAT_WITH_MAIL:
    case PARTY_MSG_RESTORE_WHICH_MOVE:
    case PARTY_MSG_BOOST_PP_WHICH_MOVE:
    case PARTY_MSG_WHICH_APPLIANCE:
    case PARTY_MSG_WHICH_STATUS:
        return PARTY_FOOTER_LIST;
    default:
        return PartyView_GetChooseMonFooter();
    }
}

static void PartyView_DrawFooter(enum PartyMenuFooters footer)
{
    const u8 *str = sPartyMenu_FooterMessages[footer];
    u32 fontId = GetFontIdToFit(str, FONT_SMALL, 0, TILE_TO_PIXELS(PARTY_HELPER_WIDTH));

    FillWindowPixelBuffer(PARTY_WIN_FOOTER, PIXEL_FILL(0));
    AddTextPrinterParameterized4(PARTY_WIN_FOOTER, fontId, 0, PARTY_HELPER_TEXT_Y, 0, 0, sPartyMenu_TextColors[COLORID_PARTY_HELPER], TEXT_SKIP_DRAW, str);
    PutWindowTilemap(PARTY_WIN_FOOTER);
    CopyWindowToVram(PARTY_WIN_FOOTER, COPYWIN_FULL);
}

static void PartyMenuRemoveWindow(u8 *windowPtr)
{
    if (*windowPtr == WINDOW_NONE)
    {
        return;
    }

    if (windowPtr == &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]
     && sPartyMenuDataPtr->scrollArrowSpriteIds[PARTY_SCROLL_ARROW_UP] != SPRITE_NONE)
    {
        PartyList_DestroyScrollArrows();
    }

    if (windowPtr == &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG])
    {
        ClearStdWindowAndFrameToTransparent(*windowPtr, FALSE);
    }
    else
    {
        CallWindowFunction(*windowPtr, PartyList_ClearFrame);
    }
    RemoveWindow(*windowPtr);
    *windowPtr = WINDOW_NONE;
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

// ==================================================
// Exit
// ==================================================

static void Task_ClosePartyMenu(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_ClosePartyMenuAndSetCB2;
}

static void Task_ClosePartyMenuAfterText(u8 taskId)
{
    if (IsPartyMenuTextPrinterActive() != TRUE)
    {
        if (gPartyMenuUseExitCallback == FALSE)
            sPartyMenuDataPtr->exitCallback = NULL;
        Task_ClosePartyMenu(taskId);
    }
}

static void CB2_SetUpExitToBattleScreen(void)
{
    SetMainCallback2(CB2_SetUpReshowBattleScreenAfterMenu);
}

static void Task_ClosePartyMenuAndSetCB2(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if (gPartyMenu.menuType == PARTY_MENU_TYPE_IN_BATTLE)
            UpdatePartyToFieldOrder();

        if (sPartyMenuDataPtr->exitCallback != NULL)
            SetMainCallback2(sPartyMenuDataPtr->exitCallback);
        else
            SetMainCallback2(gPartyMenu.exitCallback);
        PartyMenu_Free();
        DestroyTask(taskId);
    }
}

static void PartyMenu_Free(void)
{
    FreeAllWindowBuffers();
    DestroySpriteAndFreeResources(&gSprites[sPartyMenuDataPtr->cursorSpriteId]);

    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        if (sPartyMenuDataPtr->monIconSpriteIds[slot] != SPRITE_NONE)
            FreeAndDestroyMonIconSprite(&gSprites[sPartyMenuDataPtr->monIconSpriteIds[slot]]);
        if (sPartyMenuDataPtr->heldItemSpriteIds[slot] != SPRITE_NONE)
            DestroySprite(&gSprites[sPartyMenuDataPtr->heldItemSpriteIds[slot]]);
        if (sPartyMenuDataPtr->statusSpriteIds[slot] != SPRITE_NONE)
            DestroySprite(&gSprites[sPartyMenuDataPtr->statusSpriteIds[slot]]);
    }

    for (u32 i = 0; i < PARTY_STAT_STAGE_NUM; i++)
    {
        if (sPartyMenuDataPtr->statStageSpriteIds[i] != SPRITE_NONE)
            DestroySprite(&gSprites[sPartyMenuDataPtr->statStageSpriteIds[i]]);
    }

    FreeSpriteTilesByTag(PARTY_GFXTAG_HELD_ITEM);
    FreeSpriteTilesByTag(PARTY_GFXTAG_STAT_STAGE);
    FreeSpriteTilesByTag(PARTY_GFXTAG_STATUS);
    FreeSpritePaletteByTag(PARTY_PALTAG_STATUS);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);

    FreeMonIconPalettes();

    TRY_FREE_AND_SET_NULL(sPartyMenuDataPtr);
}

// ==================================================
// Entry points
// ==================================================

static void TryTutorSelectedMon(u8 taskId)
{
    struct Pokemon *mon;

    if (!gPaletteFade.active)
    {
        mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
        GetMonNickname(mon, gStringVar1);
        gPartyMenu.data1 = gSpecialVar_0x8005;
        StringCopy(gStringVar2, GetMoveName(gPartyMenu.data1));
        gPartyMenu.learnMoveState = 2;
        switch (CanTeachMove(mon, gPartyMenu.data1))
        {
        case CANNOT_LEARN_MOVE:
            DisplayLearnMoveMessageAndClose(taskId, gText_PkmnCantLearnMove);
            return;
        case ALREADY_KNOWS_MOVE:
            DisplayLearnMoveMessageAndClose(taskId, gText_PkmnAlreadyKnows);
            return;
        default:
            if (GiveMoveToMon(mon, gPartyMenu.data1) != MON_HAS_MAX_MOVES)
            {
                Task_LearnedMove(taskId);
                return;
            }
            break;
        }
        DisplayLearnMoveMessage(gText_PkmnNeedsToReplaceMove);
        gTasks[taskId].func = Task_ReplaceMoveYesNo;
    }
}

void CB2_PartyMenuFromStartMenu(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_StartMenu_ReturnToUI);
}

void CB2_ReturnToPartyMenuFromFlyMap(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, TRUE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_StartMenu_ReturnToUI);
}

static void CB2_ReopenPartyMenuFromPC(void)
{
    PokemonPC_SetReturnToPartyCallback(NULL);
    InitPartyMenu(gPartyMenu.menuType, KEEP_PARTY_LAYOUT, gPartyMenu.action, TRUE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, gPartyMenu.exitCallback);
}

void CB2_ShowPartyMenuForItemUse(void)
{
    MainCallback callback = CB2_ReturnToInventoryMenu;
    enum PartyMenuLayout partyLayout;
    enum PartyMenuType menuType;
    u8 i;
    u8 msgId;
    TaskFunc task;

    if ((gPartyMenu.data1 == DATA1_PARTY_MENU_FROM_FIELD) || (FlagGet(FLAG_SYS_USED_FROM_REGISTER_MENU)))
    {
        FlagClear(FLAG_SYS_USED_FROM_REGISTER_MENU);
        callback = CB2_ReturnToField;
        gPartyMenu.data1 = 0;
    }

    if (gMain.inBattle)
    {
        menuType = PARTY_MENU_TYPE_IN_BATTLE;
        partyLayout = GetPartyLayoutFromBattleType();
    }
    else
    {
        menuType = PARTY_MENU_TYPE_FIELD;
        partyLayout = PARTY_LAYOUT_SINGLE;
    }

    if (GetItemEffectType(gSpecialVar_ItemId) == ITEM_EFFECT_SACRED_ASH)
    {
        gPartyMenu.slotId = 0;
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES) != SPECIES_NONE && GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HP) == 0)
            {
                gPartyMenu.slotId = i;
                break;
            }
        }
        task = Task_SetSacredAshCB;
        msgId = PARTY_MSG_NONE;
    }
    else if (GetItemEffectType(gSpecialVar_ItemId) == ITEM_EFFECT_POKEVIAL)
    {
        gPartyMenu.slotId = 0;
        task = Task_SetSacredAshCB;
        msgId = PARTY_MSG_NONE;
    }
    else
    {
        if (GetItemPocket(gSpecialVar_ItemId) == POCKET_TM_HM)
            msgId = PARTY_MSG_TEACH_WHICH_MON;
        else
            msgId = PARTY_MSG_USE_ON_WHICH_MON;

        task = Task_HandleChooseMonInput;
    }

    InitPartyMenu(menuType, partyLayout, PARTY_ACTION_USE_ITEM, TRUE, msgId, task, callback);
}

static void CB2_ReturnToBagMenu(void)
{
    if (CurrentBattlePyramidLocation() == PYRAMID_LOCATION_NONE)
        GoToBagMenu(ITEMMENULOCATION_LAST, POCKETS_COUNT, NULL);
    else
        GoToBattlePyramidBagMenu(PYRAMIDBAG_LOC_PREV, gPyramidBagMenuState.exitCallback);
}

// Giving an item by selecting Give from the bag menu
// As opposted to by selecting Give in the party menu, which is handled by CursorCb_Give
void CB2_ChooseMonToGiveItem(void)
{
    MainCallback callback = (CurrentBattlePyramidLocation() == PYRAMID_LOCATION_NONE) ? CB2_ReturnToBagMenu : CB2_ReturnToPyramidBagMenu;
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_GIVE_ITEM, FALSE, PARTY_MSG_GIVE_TO_WHICH_MON, Task_HandleChooseMonInput, callback);
    gPartyMenu.bagItem = gSpecialVar_ItemId;
}

void CB2_ChooseMonToGiveItem_ReturnToNewInventory(void)
{
    MainCallback callback = CB2_ReturnToInventoryMenu;
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_GIVE_ITEM, FALSE, PARTY_MSG_GIVE_TO_WHICH_MON, Task_HandleChooseMonInput, callback);
    gPartyMenu.bagItem = gSpecialVar_ItemId;
}

void ChooseMonToGiveMailFromMailbox(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_GIVE_MAILBOX_MAIL, FALSE, PARTY_MSG_GIVE_TO_WHICH_MON, Task_HandleChooseMonInput, Mailbox_ReturnToMailListAfterDeposit);
}

void InitChooseHalfPartyForBattle(u8 unused)
{
    ClearSelectedPartyOrder();
    InitPartyMenu(PARTY_MENU_TYPE_CHOOSE_HALF, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, gMain.savedCallback);
    gPartyMenu.task = Task_ValidateChosenHalfParty;
}

void ChooseMonForTradingBoard(enum PartyMenuType menuType, MainCallback callback)
{
    InitPartyMenu(menuType, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, callback);
}

void ChooseMonForMoveTutor(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_MOVE_TUTOR, FALSE, PARTY_MSG_TEACH_WHICH_MON, Task_HandleChooseMonInput, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ChooseMonForWirelessMinigame(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_MINIGAME, PARTY_LAYOUT_SINGLE, PARTY_ACTION_MINIGAME, FALSE, PARTY_MSG_CHOOSE_MON_OR_CANCEL, Task_HandleChooseMonInput, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static u8 GetPartyLayoutFromBattleType(void)
{
    if (IsMultiBattle() == TRUE && !AreMultiPartiesFullTeams())
        return PARTY_LAYOUT_MULTI;
    if (IsMultiBattle() == TRUE && AreMultiPartiesFullTeams())
        return PARTY_LAYOUT_MULTI_FULL;
    if (!IsDoubleBattle() || gPartiesCount[B_TRAINER_PLAYER] == 1) // Draw the single layout in a double battle where the player has only one Pokémon.
        return PARTY_LAYOUT_SINGLE;
    return PARTY_LAYOUT_DOUBLE;
}

void OpenPartyMenuInBattle(u8 partyAction)
{
    MainCallback cb = partyAction == PARTY_ACTION_SEND_MON_TO_BOX ? ReshowBlankBattleScreenAfterMenu : CB2_SetUpReshowBattleScreenAfterMenu;
    BattleInfo_Init(partyAction, cb);
}

void ChooseMonForInBattleItem(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_IN_BATTLE, GetPartyLayoutFromBattleType(), PARTY_ACTION_USE_ITEM, FALSE, PARTY_MSG_USE_ON_WHICH_MON, Task_HandleChooseMonInput, CB2_ReturnToInventoryBattleMenu);
    ReshowBattleScreenDummy();
    UpdatePartyToBattleOrder();
}

void ShowPartyMenuToShowcaseMultiBattleParty(void)
{
}

void ChooseMonForDaycare(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_DAYCARE, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON_2, Task_HandleChooseMonInput, BufferMonSelection);
}

static void BufferMonSelection(void)
{
    gSpecialVar_0x8004 = GetCursorSelectionMonId();
    if (gSpecialVar_0x8004 >= PARTY_SIZE)
        gSpecialVar_0x8004 = PARTY_NOTHING_CHOSEN;
    gFieldCallback2 = CB2_FadeFromPartyMenu;
    SetMainCallback2(CB2_ReturnToField);
}

bool8 CB2_FadeFromPartyMenu(void)
{
    FadeInFromBlack();
    CreateTask(Task_PartyMenuWaitForFade, 10);
    return TRUE;
}

static void Task_PartyMenuWaitForFade(u8 taskId)
{
    if (IsWeatherNotFadingIn())
    {
        DestroyTask(taskId);
        UnlockPlayerFieldControls();
        ScriptContext_Enable();
    }
}

void ChooseContestMon(void)
{
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_ChooseContestMon, 10);
}

static void Task_ChooseContestMon(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_CONTEST, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_AND_CLOSE, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_ChooseContestMon);
        DestroyTask(taskId);
    }
}

static void CB2_ChooseContestMon(void)
{
    gContestMonPartyIndex = GetCursorSelectionMonId();
    if (gContestMonPartyIndex >= PARTY_SIZE)
        gContestMonPartyIndex = PARTY_NOTHING_CHOSEN;
    gSpecialVar_0x8004 = gContestMonPartyIndex;
    gFieldCallback2 = CB2_FadeFromPartyMenu;
    SetMainCallback2(CB2_ReturnToField);
}

// Used as a script special for showing a party mon to various npcs (e.g. in-game trades, move deleter)
void ChoosePartyMon(void)
{
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_ChoosePartyMon, 10);
}

static void Task_ChoosePartyMon(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_CHOOSE_MON, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_AND_CLOSE, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, BufferMonSelection);
        DestroyTask(taskId);
    }
}

void ChooseMonForMoveRelearner(void)
{
    gRelearnMode = RELEARN_MODE_SCRIPT;
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_ChooseMonForMoveRelearner, 10);
}

static void Task_ChooseMonForMoveRelearner(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_MOVE_RELEARNER, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_AND_CLOSE, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_ChooseMonForMoveRelearner);
        DestroyTask(taskId);
    }
}

static void CB2_ChooseMonForMoveRelearner(void)
{
    gSpecialVar_0x8004 = GetCursorSelectionMonId();
    if (gSpecialVar_0x8004 >= PARTY_SIZE)
    {
        gSpecialVar_0x8004 = PARTY_NOTHING_CHOSEN;
    }
    gFieldCallback2 = CB2_FadeFromPartyMenu;
    SetMainCallback2(CB2_ReturnToField);
}

// Can be called if the Battle Pyramid Bag is full on exiting and at least one party mon still has held items
// The player can then select to toss items from the bag or take/toss held items from the party
void BattlePyramidChooseMonHeldItems(void)
{
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_BattlePyramidChooseMonHeldItems, 10);
}

static void Task_BattlePyramidChooseMonHeldItems(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_STORE_PYRAMID_HELD_ITEMS, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, BufferMonSelection);
        DestroyTask(taskId);
    }
}

void InitPartyMenuForPokevialFromField(u8 taskId)
{
    gPartyMenu.slotId = 0;
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_USE_ITEM, TRUE, PARTY_MSG_NONE, Task_UsePokevialFromField, CB2_ReturnToField);
}

void InitPartyMenuForHexorbFromField(u8 taskId)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_USE_ITEM, TRUE, PARTY_MSG_USE_ON_WHICH_MON, Task_HandleChooseMonInput, CB2_ReturnToField);
}

// ==================================================
// Not ported yet
// ==================================================

static void Task_SetSacredAshCB(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if (gPartyMenu.menuType == PARTY_MENU_TYPE_IN_BATTLE)
            sPartyMenuDataPtr->exitCallback = CB2_SetUpExitToBattleScreen;
        gItemUseCB(taskId, Task_ClosePartyMenuAfterText); // ItemUseCB_SacredAsh in this case
    }
}

static void CursorCb_Stub(u8 taskId)
{
    PlaySE(SE_FAILURE);
}

static void TryGiveMailToSelectedMon(u8 taskId)
{
}

static void TryEnterMonForMinigame(u8 taskId, u8 slot)
{
}


// Battle scripts called in HandleAction_UseItem
void ItemUseCB_BattleScript(u8 taskId, TaskFunc task)
{
    struct Pokemon *mon = GetPartyMonFromPartyMenuId(gPartyMenu.slotId);
    bool32 isBattlerItem = PartySlot_GetXItemStat() != NUM_BATTLE_STATS || PartySlot_IsDireHit();

    if ((isBattlerItem && PartySlot_GetActiveBattler(gPartyMenu.slotId) == MAX_BATTLERS_COUNT)
     || CannotUseItemsInBattle(gSpecialVar_ItemId, mon))
    {
        PlaySE(SE_SELECT);
        PartyItem_DisplayNoEffect(taskId);
    }
    else
    {
        gBattleStruct->itemPartyIndex[gBattlerInMenuId] = GetPartyIdFromBattleSlot(gPartyMenu.slotId);
        gPartyMenuUseExitCallback = TRUE;
        PlaySE(SE_SELECT);
        if (!IsItemFlute(gSpecialVar_ItemId))
            RemoveBagItem(gSpecialVar_ItemId, 1);
        gTasks[taskId].func = task;
    }
}

void ItemUseCB_BattleChooseMove(u8 taskId, TaskFunc task)
{
    PlaySE(SE_SELECT);
    DisplayPartyMenuStdMessage(PARTY_MSG_RESTORE_WHICH_MOVE);
    ShowMoveSelectWindow(gPartyMenu.slotId);
    gTasks[taskId].func = Task_HandleWhichMoveInput;
}

static const u8 sText_AskChangeAbility[] = _("Would you like to change {STR_VAR_1}'s\nability to {STR_VAR_2}?");
static const u8 sText_AbilityChanged[] = _("{STR_VAR_1}'s ability became\n{STR_VAR_2}!{PAUSE_UNTIL_PRESS}");

#define tState      data[0]
#define tSpecies    data[1]
#define tAbilityNum data[2]
#define tMonId      data[3]
#define tOldFunc    4

static u32 PartyMon_GetNewAbilityNum(struct Pokemon *mon)
{
    enum Species species = GetMonData(mon, MON_DATA_SPECIES);
    u32 abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);

    if (GetItemFieldFunc(gSpecialVar_ItemId) == ItemUseOutOfBattle_AbilityPatch)
    {
        abilityNum = (abilityNum == NUM_NORMAL_ABILITY_SLOTS) ? 0 : NUM_NORMAL_ABILITY_SLOTS;
        if (GetSpeciesAbility(species, abilityNum) == ABILITY_NONE)
        {
            return NUM_ABILITY_SLOTS;
        }
        return abilityNum;
    }

    if (abilityNum >= NUM_NORMAL_ABILITY_SLOTS
     || GetSpeciesAbility(species, 1) == ABILITY_NONE
     || GetSpeciesAbility(species, 0) == GetSpeciesAbility(species, 1))
    {
        return NUM_ABILITY_SLOTS;
    }
    return abilityNum ^ 1;
}

static void Task_ChangeAbility(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        // Can't use.
        if (tAbilityNum == NUM_ABILITY_SLOTS)
        {
            PlaySE(SE_SELECT);
            PartyItem_DisplayNoEffect(taskId);
            return;
        }
        gPartyMenuUseExitCallback = TRUE;
        GetMonNickname(&gParties[B_TRAINER_PLAYER][tMonId], gStringVar1);
        StringCopy(gStringVar2, gAbilitiesInfo[GetAbilityBySpecies(tSpecies, tAbilityNum)].name);
        StringExpandPlaceholders(gStringVar4, sText_AskChangeAbility);
        PlaySE(SE_SELECT);
        DisplayPartyMenuMessage(gStringVar4, 1);
        tState++;
        break;
    case 1:
        if (!IsPartyMenuTextPrinterActive())
        {
            PartyMenuDisplayYesNoMenu();
            tState++;
        }
        break;
    case 2:
        switch (PartyMenuProcessYesNoInput())
        {
        case 0:
            tState++;
            break;
        case 1:
        case MENU_B_PRESSED:
            gPartyMenuUseExitCallback = FALSE;
            PlaySE(SE_SELECT);
            // Don't exit party selections screen, return to choosing a mon.
            DisplayPartyMenuStdMessage(PARTY_MSG_USE_ON_WHICH_MON);
            gTasks[taskId].func = (void *)GetWordTaskArg(taskId, tOldFunc);
            return;
        }
        break;
    case 3:
        PlaySE(SE_USE_ITEM);
        StringExpandPlaceholders(gStringVar4, sText_AbilityChanged);
        DisplayPartyMenuMessage(gStringVar4, 1);
        tState++;
        break;
    case 4:
        if (!IsPartyMenuTextPrinterActive())
            tState++;
        break;
    case 5:
        SetMonData(&gParties[B_TRAINER_PLAYER][tMonId], MON_DATA_ABILITY_NUM, &tAbilityNum);
        RemoveBagItem(gSpecialVar_ItemId, 1);
        PartyItem_ReturnOrCloseAfterText(taskId);
        break;
    }
}

void ItemUseCB_AbilityCapsule(u8 taskId, TaskFunc task)
{
    s16 *data = gTasks[taskId].data;

    tState = 0;
    tMonId = gPartyMenu.slotId;
    tSpecies = GetMonData(&gParties[B_TRAINER_PLAYER][tMonId], MON_DATA_SPECIES);
    tAbilityNum = PartyMon_GetNewAbilityNum(&gParties[B_TRAINER_PLAYER][tMonId]);
    SetWordTaskArg(taskId, tOldFunc, (uintptr_t)(gTasks[taskId].func));
    gTasks[taskId].func = Task_ChangeAbility;
}

void ItemUseCB_AbilityPatch(u8 taskId, TaskFunc task)
{
    ItemUseCB_AbilityCapsule(taskId, task);
}

#undef tState
#undef tSpecies
#undef tAbilityNum
#undef tMonId
#undef tOldFunc

#define tState      data[0]
#define tMonId      data[1]
#define tOldNature  data[2]
#define tNewNature  data[3]
#define tOldFunc    4

static void Task_Mint(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        // Can't use.
        if (tOldNature == tNewNature)
        {
            PlaySE(SE_SELECT);
            PartyItem_DisplayNoEffect(taskId);
            return;
        }
        gPartyMenuUseExitCallback = TRUE;
        GetMonNickname(&gParties[B_TRAINER_PLAYER][tMonId], gStringVar1);
        CopyItemName(gSpecialVar_ItemId, gStringVar2);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("It might affect {STR_VAR_1}'s stats.\nAre you sure you want to use it?"));
        PlaySE(SE_SELECT);
        DisplayPartyMenuMessage(gStringVar4, 1);
        tState++;
        break;
    case 1:
        if (!IsPartyMenuTextPrinterActive())
        {
            PartyMenuDisplayYesNoMenu();
            tState++;
        }
        break;
    case 2:
        switch (PartyMenuProcessYesNoInput())
        {
        case 0:
            tState++;
            break;
        case 1:
        case MENU_B_PRESSED:
            gPartyMenuUseExitCallback = FALSE;
            PlaySE(SE_SELECT);
            // Don't exit party selections screen, return to choosing a mon.
            DisplayPartyMenuStdMessage(PARTY_MSG_USE_ON_WHICH_MON);
            gTasks[taskId].func = (void *)GetWordTaskArg(taskId, tOldFunc);
            return;
        }
        break;
    case 3:
        PlaySE(SE_USE_ITEM);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}'s stats may have changed due\nto the effects of the {STR_VAR_2}!{PAUSE_UNTIL_PRESS}"));
        DisplayPartyMenuMessage(gStringVar4, 1);
        tState++;
        break;
    case 4:
        if (!IsPartyMenuTextPrinterActive())
            tState++;
        break;
    case 5:
        SetMonData(&gParties[B_TRAINER_PLAYER][tMonId], MON_DATA_HIDDEN_NATURE, &tNewNature);
        CalculateMonStats(&gParties[B_TRAINER_PLAYER][tMonId]);
        RemoveBagItem(gSpecialVar_ItemId, 1);
        PartyItem_ReturnOrCloseAfterText(taskId);
        break;
    }
}

void ItemUseCB_Mint(u8 taskId, TaskFunc task)
{
    s16 *data = gTasks[taskId].data;

    tState = 0;
    tMonId = gPartyMenu.slotId;
    tOldNature = GetMonData(&gParties[B_TRAINER_PLAYER][tMonId], MON_DATA_HIDDEN_NATURE);
    tNewNature = GetItemSecondaryId(gSpecialVar_ItemId);
    SetWordTaskArg(taskId, tOldFunc, (uintptr_t)(gTasks[taskId].func));
    gTasks[taskId].func = Task_Mint;
}

#undef tState
#undef tMonId
#undef tOldNature
#undef tNewNature
#undef tOldFunc

void ItemUseCB_ResetEVs(u8 taskId, TaskFunc task)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Item item = gSpecialVar_ItemId;
    bool8 cannotUseEffect = ExecuteTableBasedItemEffect(mon, item, gPartyMenu.slotId, 0);

    if (cannotUseEffect)
    {
        PlaySE(SE_SELECT);
        PartyItem_DisplayNoEffect(taskId);
    }
    else
    {
        gPartyMenuUseExitCallback = TRUE;
        PlaySE(SE_USE_ITEM);
        RemoveBagItem(item, 1);
        GetMonNickname(mon, gStringVar1);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}'s base points\nwere all reset to zero!{PAUSE_UNTIL_PRESS}"));
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        PartyItem_ReturnOrCloseAfterText(taskId);
    }
}

void ItemUseCB_ResetEVsAndFriendship(u8 taskId, TaskFunc task)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Item item = gSpecialVar_ItemId;
    bool8 cannotUseEffect = ExecuteTableBasedItemEffect(mon, item, gPartyMenu.slotId, 0);

    if (cannotUseEffect)
    {
        PlaySE(SE_SELECT);
        PartyItem_DisplayNoEffect(taskId);
    }
    else
    {
        gPartyMenuUseExitCallback = TRUE;
        u8 friendship = 0;
        SetMonData(mon,MON_DATA_FRIENDSHIP,&friendship);
        PlaySE(SE_USE_ITEM);
        RemoveBagItem(item, 1);
        GetMonNickname(mon, gStringVar1);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1} is unhappy, and its base points\nwere all reset to zero!{PAUSE_UNTIL_PRESS}"));
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        PartyItem_ReturnOrCloseAfterText(taskId);
    }
}

void ItemUseCB_ReduceEV(u8 taskId, TaskFunc task)
{
    if (PartySpinner_TryOpen(taskId, PartySlot_GetEvItemMaxCount(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId]), PARTY_SPINNER_Y_OFFSET))
    {
        PlaySE(SE_SELECT);
        return;
    }
    ItemUse_ApplyReduceEvItem(taskId, 1);
}

static void ItemUse_ApplyReduceEvItem(u8 taskId, u32 count)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum Item item = gSpecialVar_ItemId;
    enum ItemEffectType effectType = GetItemEffectType(item);
    u16 friendship = GetMonData(mon, MON_DATA_FRIENDSHIP);
    u16 ev = ItemEffectToMonEv(mon, effectType);
    bool8 cannotUseEffect = ExecuteTableBasedItemEffect(mon, item, gPartyMenu.slotId, 0);
    for (u32 i = 1; i < count; i++)
        ExecuteTableBasedItemEffect(mon, item, gPartyMenu.slotId, 0);
    u16 newFriendship = GetMonData(mon, MON_DATA_FRIENDSHIP);
    u16 newEv = ItemEffectToMonEv(mon, effectType);

    if (cannotUseEffect || (friendship == newFriendship && ev == newEv))
    {
        PlaySE(SE_SELECT);
        PartyItem_DisplayNoEffect(taskId);
    }
    else
    {
        gPartyMenuUseExitCallback = TRUE;
        PlaySE(SE_USE_ITEM);
        RemoveBagItem(item, count);
        PartySlot_Draw(gPartyMenu.slotId);
        GetMonNickname(mon, gStringVar1);
        ItemEffectToStatString(effectType, gStringVar2);
        if (friendship != newFriendship)
        {
            if (ev != newEv)
                StringExpandPlaceholders(gStringVar4, gText_PkmnFriendlyBaseVar2Fell);
            else
                StringExpandPlaceholders(gStringVar4, gText_PkmnFriendlyBaseVar2CantFall);
        }
        else
        {
            StringExpandPlaceholders(gStringVar4, gText_PkmnAdoresBaseVar2Fell);
        }
        DisplayPartyMenuMessage(gStringVar4, TRUE);
        PartyItem_ReturnOrCloseAfterText(taskId);
    }
}

static u16 ItemEffectToMonEv(struct Pokemon *mon, enum ItemEffectType effectType)
{
    switch (effectType)
    {
    case ITEM_EFFECT_HP_EV:
        if (!HasShedinjaHPHandling(GetMonData(mon, MON_DATA_SPECIES)))
            return GetMonData(mon, MON_DATA_HP_EV);
        return 0;
        break;
    case ITEM_EFFECT_ATK_EV:
        return GetMonData(mon, MON_DATA_ATK_EV);
    case ITEM_EFFECT_DEF_EV:
        return GetMonData(mon, MON_DATA_DEF_EV);
    case ITEM_EFFECT_SPEED_EV:
        return GetMonData(mon, MON_DATA_SPEED_EV);
    case ITEM_EFFECT_SPATK_EV:
        return GetMonData(mon, MON_DATA_SPATK_EV);
    case ITEM_EFFECT_SPDEF_EV:
        return GetMonData(mon, MON_DATA_SPDEF_EV);
    default:
        return 0;
    }
}

static void ItemEffectToStatString(enum ItemEffectType effectType, u8 *dest)
{
    switch (effectType)
    {
    case ITEM_EFFECT_HP_EV:
        StringCopy(dest, gText_HP3);
        break;
    case ITEM_EFFECT_ATK_EV:
        StringCopy(dest, gText_Attack3);
        break;
    case ITEM_EFFECT_DEF_EV:
        StringCopy(dest, gText_Defense3);
        break;
    case ITEM_EFFECT_SPEED_EV:
        StringCopy(dest, gText_Speed2);
        break;
    case ITEM_EFFECT_SPATK_EV:
        StringCopy(dest, gText_SpAtk3);
        break;
    case ITEM_EFFECT_SPDEF_EV:
        StringCopy(dest, gText_SpDef3);
        break;
    default:
        break;
    }
}

static void ShowMoveSelectWindow(u8 slot)
{
    u32 moveCount = 0;

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][slot], MON_DATA_MOVE1 + i) != MOVE_NONE)
        {
            moveCount++;
        }
    }
    sPartyMenuDataPtr->numActions = moveCount;
    DisplaySelectionWindow(SELECTWINDOW_MOVES);
}

static void Task_HandleWhichMoveInput(u8 taskId)
{
    s32 input = PartyList_ProcessInput(PartyMoves_Draw);

    if (input != MENU_NOTHING_CHOSEN)
    {
        PlaySE(SE_SELECT);
        if (input == MENU_B_PRESSED)
        {
            ReturnToUseOnWhichMon(taskId);
        }
        else
        {
            SetSelectedMoveForItem(taskId);
        }
    }
}

void ItemUseCB_PPRecovery(u8 taskId, TaskFunc task)
{
    const u8 *effect = GetItemEffect(gSpecialVar_ItemId);

    if (effect == NULL || !(effect[4] & ITEM4_HEAL_PP_ONE))
    {
        gPartyMenu.data1 = 0;
        TryUseItemOnMove(taskId);
    }
    else
    {
        PlaySE(SE_SELECT);
        DisplayPartyMenuStdMessage(PARTY_MSG_RESTORE_WHICH_MOVE);
        ShowMoveSelectWindow(gPartyMenu.slotId);
        gTasks[taskId].func = Task_HandleWhichMoveInput;
    }
}

static void SetSelectedMoveForItem(u8 taskId)
{
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    gPartyMenu.data1 = sPartyMenuDataPtr->actionCursor;
    TryUseItemOnMove(taskId);
}

static void ReturnToUseOnWhichMon(u8 taskId)
{
    gTasks[taskId].func = Task_HandleChooseMonInput;
    sPartyMenuDataPtr->exitCallback = NULL;
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    DisplayPartyMenuStdMessage(PARTY_MSG_USE_ON_WHICH_MON);
}

static void TryUseItemOnMove(u8 taskId)
{
    struct PartyMenu *ptr = &gPartyMenu;
    struct Pokemon *party = NULL;
    s8 partySlot = 0;
    GetPartyAndSlotFromPartyMenuId(ptr->slotId, &party, &partySlot);
    struct Pokemon *mon = &party[partySlot];
    // In battle, set appropriate variables to be used in battle script.
    if (gMain.inBattle)
    {
        if (CannotUseItemsInBattle(gSpecialVar_ItemId, mon))
        {
            PlaySE(SE_SELECT);
            PartyItem_DisplayNoEffect(taskId);
        }
        else
        {
            gBattleStruct->itemPartyIndex[gBattlerInMenuId] = GetPartyIdFromBattleSlot(gPartyMenu.slotId);
            gBattleStruct->itemMoveIndex[gBattlerInMenuId] = ptr->data1;
            gPartyMenuUseExitCallback = TRUE;
            RemoveBagItem(gSpecialVar_ItemId, 1);
            gTasks[taskId].func = Task_ClosePartyMenuAfterText;
        }
    }
    // Outside of battle, only PP items are used on moves.
    else
    {
        enum Move move = MOVE_NONE;
        s16 *moveSlot = &gPartyMenu.data1;
        enum Item item = gSpecialVar_ItemId;

        if (ExecuteTableBasedItemEffect(mon, item, ptr->slotId, *moveSlot))
        {
            PlaySE(SE_SELECT);
            PartyItem_DisplayNoEffect(taskId);
        }
        else
        {
            gPartyMenuUseExitCallback = TRUE;
            PlaySE(SE_USE_ITEM);
            RemoveBagItem(item, 1);
            PartySlot_Draw(ptr->slotId);
            move = GetMonData(mon, MON_DATA_MOVE1 + *moveSlot);
            StringCopy(gStringVar1, GetMoveName(move));
            GetMedicineItemEffectMessage(item, 0);
            DisplayPartyMenuMessage(gStringVar4, TRUE);
            PartyItem_ReturnOrCloseAfterText(taskId);
        }
    }
}

void ItemUseCB_PPUp(u8 taskId, TaskFunc task)
{
    PlaySE(SE_SELECT);
    DisplayPartyMenuStdMessage(PARTY_MSG_BOOST_PP_WHICH_MOVE);
    ShowMoveSelectWindow(gPartyMenu.slotId);
    gTasks[taskId].func = Task_HandleWhichMoveInput;
}

void ItemUseCB_TMHM(u8 taskId, TaskFunc task)
{
    struct Pokemon *mon;
    enum Item item = gSpecialVar_ItemId;
    enum Move move = ItemIdToBattleMoveId(item);

    gPartyMenu.data1 = move;
    gPartyMenu.learnMoveState = 0;

    PlaySE(SE_SELECT);
    mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];

    GetMonNickname(mon, gStringVar1);
    StringCopy(gStringVar2, GetMoveName(move));

    switch (CanTeachMove(mon, move))
    {
    case CANNOT_LEARN_MOVE:
        DisplayLearnMoveMessageAndClose(taskId, COMPOUND_STRING("{STR_VAR_1} cannot learn\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}"));
        return;
    case ALREADY_KNOWS_MOVE:
        DisplayLearnMoveMessageAndClose(taskId, gText_PkmnAlreadyKnows);
        return;
    default:
        break;
    }

    if (GiveMoveToMon(mon, move) != MON_HAS_MAX_MOVES)
    {
        gTasks[taskId].func = Task_LearnedMove;
    }
    else
    {
        DisplayLearnMoveMessage(gText_PkmnNeedsToReplaceMove);
        gTasks[taskId].func = Task_ReplaceMoveYesNo;
    }
}

#define tState        data[0]
#define tMonId        data[1]
#define tDynamaxLevel data[2]
#define tOldFunc      4

static void Task_DynamaxCandy(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        // Can't use.
        if (tDynamaxLevel == MAX_DYNAMAX_LEVEL)
        {
            gPartyMenuUseExitCallback = FALSE;
            PlaySE(SE_SELECT);
            DisplayPartyMenuMessage(gText_WontHaveEffect, 1);
            gTasks[taskId].func = Task_ClosePartyMenuAfterText;
            return;
        }
        gPartyMenuUseExitCallback = TRUE;
        GetMonNickname(&gParties[B_TRAINER_PLAYER][tMonId], gStringVar1);
        CopyItemName(gSpecialVar_ItemId, gStringVar2);
        tState++;
        break;
    case 1:
        PlaySE(SE_USE_ITEM);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}'s Dynamax Level\nincreased by 1!{PAUSE_UNTIL_PRESS}"));
        DisplayPartyMenuMessage(gStringVar4, 1);
        tState++;
        break;
    case 2:
        if (!IsPartyMenuTextPrinterActive())
            tState++;
        break;
    case 3:
        tDynamaxLevel++;
        SetMonData(&gParties[B_TRAINER_PLAYER][tMonId], MON_DATA_DYNAMAX_LEVEL, &tDynamaxLevel);
        RemoveBagItem(gSpecialVar_ItemId, 1);
        gTasks[taskId].func = Task_ClosePartyMenu;
        break;
    }
}

void ItemUseCB_DynamaxCandy(u8 taskId, TaskFunc task)
{
    s16 *data = gTasks[taskId].data;

    tState = 0;
    tMonId = gPartyMenu.slotId;
    tDynamaxLevel = GetMonData(&gParties[B_TRAINER_PLAYER][tMonId], MON_DATA_DYNAMAX_LEVEL);
    SetWordTaskArg(taskId, tOldFunc, (uintptr_t)(gTasks[taskId].func));
    gTasks[taskId].func = Task_DynamaxCandy;
}

#undef tState
#undef tMonId
#undef tDynamaxLevel
#undef tOldFunc

void ItemUseCB_EvolutionStone(u8 taskId, TaskFunc task)
{
    PlaySE(SE_SELECT);
    gCB2_AfterEvolution = gPartyMenu.exitCallback;
    if (ExecuteTableBasedItemEffect(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], gSpecialVar_ItemId, gPartyMenu.slotId, 0))
    {
        PartyItem_DisplayNoEffect(taskId);
    }
    else
    {
        if (GetItemPocket(gSpecialVar_ItemId) != POCKET_KEY_ITEMS)
            RemoveBagItem(gSpecialVar_ItemId, 1);
        PartyMenu_Free();
        DestroyTask(taskId);
    }
}

#define FUSE_MON        1
#define UNFUSE_MON      2
#define SECOND_FUSE_MON 3

#define tState          data[0]
#define tTargetSpecies  data[1]
#define tAnimWait       data[2]
#define tNextFunc       3

#define fusionType           data[6]
#define firstFusion          data[7]
#define firstFusionSlot      data[8]
#define fusionResult         data[9]
#define secondFusionSlot     data[10]
#define unfuseSecondMon      data[11]
#define moveToLearn          data[12]
#define tExtraMoveHandling   data[13]
#define forgetMove           data[14]
#define storageIndex         data[15]

static bool32 IsFusionMon(enum Species species)
{
    u16 i;
    const struct Fusion *itemFusion = gFusionTablePointers[species];
    if (itemFusion == NULL)
        return FALSE;
    for (i = 0; itemFusion[i].fusionStorageIndex != FUSION_TERMINATOR; i++)
    {
        if (itemFusion[i].fusingIntoMon == species)
            return UNFUSE_MON;
        else if (itemFusion[i].targetSpecies1 == species)
            return FUSE_MON;
        else if (itemFusion[i].targetSpecies2 == species)
            return SECOND_FUSE_MON;
    }
    return FALSE;
}

static void FormChangeTeachMove(u8 taskId, enum Move move, u32 slot)
{
    struct Pokemon *mon;

    gPartyMenu.data1 = move;
    gPartyMenu.learnMoveState = 0;

    PlaySE(SE_SELECT);
    mon = &gParties[B_TRAINER_PLAYER][slot];
    GetMonNickname(mon, gStringVar1);
    StringCopy(gStringVar2, GetMoveName(move));

    if (GiveMoveToMon(mon, move) != MON_HAS_MAX_MOVES)
    {
        gTasks[taskId].func = Task_LearnedMove;
    }
    else
    {
        DisplayLearnMoveMessage(gText_PkmnNeedsToReplaceMove);
        gTasks[taskId].func = Task_ReplaceMoveYesNo;
    }
}

static void DeleteMove(struct Pokemon *mon, enum Move move)
{
    struct BoxPokemon *boxMon = &mon->box;
    u32 i, j;

    if (move != MOVE_NONE)
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            u32 existingMove = GetBoxMonData(boxMon, MON_DATA_MOVE1 + i);
            if (existingMove == move)
            {
                SetMonMoveSlot(mon, MOVE_NONE, i);
                RemoveMonPPBonus(mon, i);
                for (j = i; j < MAX_MON_MOVES - 1; j++)
                    ShiftMoveSlot(&mon->box, j, j + 1);
                break;
            }
        }
    }
}

static bool32 DoesMonHaveAnyMoves(struct Pokemon *mon)
{
    struct BoxPokemon *boxMon = &mon->box;
    u32 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        enum Move existingMove = GetBoxMonData(boxMon, MON_DATA_MOVE1 + i);
        if (existingMove != MOVE_NONE)
            return TRUE;
    }
    return FALSE;
}

static bool32 TryItemUseFusionChange(u8 taskId, TaskFunc task)
{
    enum Species targetSpecies = gTasks[taskId].fusionResult;
    s8 *slotPtr = PartyCursor_GetSlotPtr();
    *slotPtr = gTasks[taskId].firstFusionSlot;
    if (gTasks[taskId].fusionType == FUSE_MON)
        AnimatePartySlot(gTasks[taskId].secondFusionSlot, 0);
    AnimatePartySlot(*slotPtr, 1);
    PartyCursor_SnapToSlot();

    if (targetSpecies != SPECIES_NONE)
    {
        gPartyMenuUseExitCallback = TRUE;
        SetWordTaskArg(taskId, tNextFunc, (u32)task);
        gTasks[taskId].func = Task_TryItemUseFusionChange;
        gTasks[taskId].tState = 0;
        gTasks[taskId].tTargetSpecies = targetSpecies;
        gTasks[taskId].tAnimWait = 0;
        return TRUE;
    }
    else
    {
        gPartyMenuUseExitCallback = FALSE;
        PlaySE(SE_SELECT);
        DisplayPartyMenuMessage(gText_WontHaveEffect, TRUE);
        gTasks[taskId].func = task;
        return FALSE;
    }
}

static void RestoreFusionMon(struct Pokemon *mon)
{
    s32 i;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES) == SPECIES_NONE)
            break;
    }

    if (i >= PARTY_SIZE)
    {
        CopyMonToPC(mon);
    }
    else
    {
        CopyMon(&gParties[B_TRAINER_PLAYER][i], mon, sizeof(*mon));
        gPartiesCount[B_TRAINER_PLAYER] = i + 1;
    }
}

static void DeleteInvalidFusionMoves(struct Pokemon *mon, enum Species species)
{
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        enum Move move = GetMonData(mon, MON_DATA_MOVE1 + i);
        bool32 toDelete = TRUE;
        const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);
        for (u32 j = 0; learnset[j].move != LEVEL_UP_MOVE_END;j++)
        {
            if (learnset[j].move == move)
            {
                toDelete = FALSE;
                break;
            }
        }
        if (!toDelete)
            continue;
        const u16 *learnset2 = GetSpeciesTeachableLearnset(species);
        for (u32 j = 0; learnset2[j] != MOVE_UNAVAILABLE;j++)
        {
            if (learnset2[j] == move)
            {
                toDelete = FALSE;
                break;
            }
        }
        if (!toDelete)
            continue;
        const u16 *learnset3 = GetSpeciesEggMoves(species);
        for (u32 j = 0; learnset3[j] != MOVE_UNAVAILABLE;j++)
        {
            if (learnset3[j] == move)
            {
                toDelete = FALSE;
                break;
            }
        }
        if (toDelete)
            DeleteMove(mon, move);
    }
}

#if P_FUSION_FORMS
static void SwapFusionMonMoves(struct Pokemon *mon, const u16 moveTable[][2], u32 mode)
{
    u32 oldMoveIndex, newMoveIndex;
    if (mode == FUSE_MON)
    {
        oldMoveIndex = 0;
        newMoveIndex = 1;
    }
    else //mode == UNFUSE_MON
    {
        oldMoveIndex = 1;
        newMoveIndex = 0;
    }
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        enum Move move = GetMonData(mon, MON_DATA_MOVE1 + i);
        for (u32 j = 0; j < 2; j++)
        {
            if (move == moveTable[j][oldMoveIndex])
            {
                u32 pp = GetMovePP(moveTable[j][newMoveIndex]);
                SetMonData(mon, MON_DATA_MOVE1 + i, &moveTable[j][newMoveIndex]);
                SetMonData(mon, MON_DATA_PP1 + i, &pp);
            }
        }
    }

}
#endif //P_FUSION_FORMS

static void Task_TryItemUseFusionChange(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gTasks[taskId].firstFusionSlot];
    struct Sprite *icon = &gSprites[sPartyMenuDataPtr->monIconSpriteIds[gTasks[taskId].firstFusionSlot]];
    struct Pokemon *mon2;
    struct Sprite *icon2 = &gSprites[sPartyMenuDataPtr->monIconSpriteIds[gTasks[taskId].secondFusionSlot]];
    enum Species targetSpecies;

    switch (gTasks[taskId].tState)
    {
    case 0:
        if (gTasks[taskId].fusionType == FUSE_MON)
        {
            mon2 = &gParties[B_TRAINER_PLAYER][gTasks[taskId].secondFusionSlot];
            CopyMon(&gPokemonStoragePtr->fusions[gTasks[taskId].storageIndex], mon2, sizeof(*mon2));
            ZeroMonData(&gParties[B_TRAINER_PLAYER][gTasks[taskId].secondFusionSlot]);
        }
        else
        {
            mon2 = &gPokemonStoragePtr->fusions[gTasks[taskId].storageIndex];
            RestoreFusionMon(mon2);
            ZeroMonData(&gPokemonStoragePtr->fusions[gTasks[taskId].storageIndex]);
        }
        targetSpecies = gTasks[taskId].tTargetSpecies;
        SetMonData(mon, MON_DATA_SPECIES, &targetSpecies);
        CalculateMonStats(mon);
        CompactPartySlots();
        CalculatePlayerPartyCount();
        gTasks[taskId].tState++;
        PlaySE(SE_M_TELEPORT);
        break;
    case 1:
        targetSpecies = gTasks[taskId].tTargetSpecies;
        if (gTasks[taskId].tAnimWait == 0)
        {
            icon->oam.mosaic = TRUE;
            icon->data[0] = 10;
            icon->data[1] = 1;
            icon->data[2] = taskId;
            icon->callback = SpriteCB_FormChangeIconMosaic;
            SetGpuReg(REG_OFFSET_MOSAIC, (icon->data[0] << 12) | (icon->data[1] << 8));
            if (gTasks[taskId].fusionType == FUSE_MON)
            {
                icon2->oam.mosaic = TRUE;
                icon2->data[0] = 10;
                icon2->data[1] = 1;
                icon2->data[2] = taskId;
                icon2->callback = SpriteCB_FormChangeIconMosaic;
                SetGpuReg(REG_OFFSET_MOSAIC, (icon2->data[0] << 12) | (icon2->data[1] << 8));
            }
        }

        if (++gTasks[taskId].tAnimWait == 60)
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_WHITEALPHA);
            gTasks[taskId].tState++;
        }
        break;
    case 2:
        if (gPaletteFade.active)
            break;
        if (gTasks[taskId].fusionType == FUSE_MON && gTasks[taskId].firstFusionSlot > gTasks[taskId].secondFusionSlot)
        {
            gTasks[taskId].firstFusionSlot--;
            gPartyMenu.slotId--;
        }
        PartyMenu_Refresh();
        gTasks[taskId].tState++;
        break;
    case 3:
        BeginNormalPaletteFade(PALETTES_ALL, 16, 0, 0, RGB_WHITEALPHA);
        gTasks[taskId].tState++;
        break;
    case 4:
        targetSpecies = gTasks[taskId].tTargetSpecies;
        PlayCry_Normal(targetSpecies, 0);
        gTasks[taskId].tState++;
        break;
    case 5:
        if (IsCryFinished())
        {
            GetMonNickname(mon, gStringVar1);
            StringExpandPlaceholders(gStringVar4, gText_PkmnTransformed);
            DisplayPartyMenuMessage(gStringVar4, FALSE);
            gTasks[taskId].tState++;
        }
        break;
    case 6:
        if (!IsPartyMenuTextPrinterActive())
        {
            if (gTasks[taskId].fusionType == FUSE_MON)
            {
#if P_FUSION_FORMS
#if P_FAMILY_KYUREM
#if P_FAMILY_RESHIRAM
                if (gTasks[taskId].tExtraMoveHandling == SWAP_EXTRA_MOVES_KYUREM_WHITE)
                    SwapFusionMonMoves(mon, gKyuremWhiteSwapMoveTable, FUSE_MON);
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
                if (gTasks[taskId].tExtraMoveHandling == SWAP_EXTRA_MOVES_KYUREM_BLACK)
                    SwapFusionMonMoves(mon, gKyuremBlackSwapMoveTable, FUSE_MON);
#endif //P_FAMILY_ZEKROM
#endif //P_FAMILY_KYUREM
#endif //P_FUSION_FORMS
                if (gTasks[taskId].moveToLearn != 0)
                    FormChangeTeachMove(taskId, gTasks[taskId].moveToLearn, gTasks[taskId].firstFusionSlot);
            }
            else //(gTasks[taskId].fusionType == UNFUSE_MON)
            {
#if P_FUSION_FORMS
#if P_FAMILY_KYUREM
#if P_FAMILY_RESHIRAM
                if (gTasks[taskId].tExtraMoveHandling == SWAP_EXTRA_MOVES_KYUREM_WHITE)
                    SwapFusionMonMoves(mon, gKyuremWhiteSwapMoveTable, UNFUSE_MON);
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
                if (gTasks[taskId].tExtraMoveHandling == SWAP_EXTRA_MOVES_KYUREM_BLACK)
                    SwapFusionMonMoves(mon, gKyuremBlackSwapMoveTable, UNFUSE_MON);
#endif //P_FAMILY_ZEKROM
#endif //P_FAMILY_KYUREM
#endif //P_FUSION_FORMS
                if ( gTasks[taskId].tExtraMoveHandling == FORGET_EXTRA_MOVES)
                {
                    DeleteInvalidFusionMoves(mon, gTasks[taskId].fusionResult);
                    if (!DoesMonHaveAnyMoves(mon))
                        FormChangeTeachMove(taskId, MOVE_CONFUSION, gTasks[taskId].firstFusionSlot);
                }
            }
            gTasks[taskId].tState++;
        }
        break;
    case 7:
        gTasks[taskId].func = (void *)GetWordTaskArg(taskId, tNextFunc);
        break;
    }
}

void ItemUseCB_Fusion(u8 taskId, TaskFunc taskFunc)
{
    u16 i;
    struct Task *task = &gTasks[taskId];
    enum Species species = GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_SPECIES);
    const struct Fusion *itemFusion = gFusionTablePointers[species];

    PlaySE(SE_SELECT);
    switch (IsFusionMon(species))
    {
    case FALSE: // Cancel if Not a Fuse Mon
        break;
    case UNFUSE_MON:
        if (task->fusionType == FUSE_MON) // Cancel if An already Fused Mon Is Chosen For The Second Fusion Mon
            break;
        if (gPartiesCount[B_TRAINER_PLAYER] == PARTY_SIZE)
        {
            gPartyMenuUseExitCallback = FALSE;
            DisplayPartyMenuMessage(gText_YourPartysFull, TRUE);
            task->func = taskFunc;
            return;
        }
        for (i = 0; itemFusion[i].fusionStorageIndex != FUSION_TERMINATOR; i++) // Loops through fusion table and checks if the mon can be unfused
        {
            if (gPokemonStoragePtr->fusions[itemFusion[i].fusionStorageIndex].level == 0)
                continue;
            if (itemFusion[i].itemId == gSpecialVar_ItemId && GetMonData(&gPokemonStoragePtr->fusions[itemFusion[i].fusionStorageIndex], MON_DATA_SPECIES) == itemFusion[i].targetSpecies2)
            {
                task->fusionType = UNFUSE_MON;
                task->firstFusion = species;
                task->firstFusionSlot = gPartyMenu.slotId;
                task->storageIndex = itemFusion[i].fusionStorageIndex;
                task->fusionResult = itemFusion[i].targetSpecies1;
                task->unfuseSecondMon = itemFusion[i].targetSpecies2;
                task->tExtraMoveHandling = itemFusion[i].extraMoveHandling;
                task->forgetMove = itemFusion[i].fusionMove;
                TryItemUseFusionChange(taskId, taskFunc);
                return;
            }
        }
        break;
    case FUSE_MON:
        if (task->fusionType == FUSE_MON) // Cancel If Second Mon is Another First Fusion Mon
            break;
        for (i = 0; itemFusion[i].fusionStorageIndex != FUSION_TERMINATOR; i++) // Run through the Fusion table for each species and check if the item matches one of the entries
        {
            if (itemFusion[i].itemId == gSpecialVar_ItemId)
            {
                task->fusionType = FUSE_MON;
                task->firstFusion = species;
                task->firstFusionSlot = gPartyMenu.slotId;
                task->storageIndex = itemFusion[i].fusionStorageIndex;
                task->func = Task_HandleChooseMonInput;
                gPartyMenuUseExitCallback = FALSE;
                sPartyMenuDataPtr->exitCallback = NULL;
                PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
                DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_SECOND_FUSION);
                return;
            }
        }
        break;
    case SECOND_FUSE_MON:
            if (task->fusionType != FUSE_MON) // Cancel if Secondary Fusion Mon Chosen First
                break;
            for (i = 0; itemFusion[i].fusionStorageIndex != FUSION_TERMINATOR; i++) // run through fusion table and check if the fusion works
            {
                if (gPokemonStoragePtr->fusions[itemFusion[i].fusionStorageIndex].level != 0)
                    continue;
                if (itemFusion[i].itemId == gSpecialVar_ItemId && itemFusion[i].targetSpecies1 == task->firstFusion && itemFusion[i].targetSpecies2 == species)
                {
                    task->storageIndex = itemFusion[i].fusionStorageIndex;
                    task->fusionResult = itemFusion[i].fusingIntoMon;
                    task->secondFusionSlot = gPartyMenu.slotId;
                    task->moveToLearn = itemFusion[i].fusionMove;
                    task->tExtraMoveHandling = itemFusion[i].extraMoveHandling;
                    // Start Fusion
                    TryItemUseFusionChange(taskId, taskFunc);
                    return;
                }
            }
            break;
    }
    // No Effect Exit
    gPartyMenuUseExitCallback = FALSE;
    DisplayPartyMenuMessage(gText_WontHaveEffect, TRUE);
    task->func = taskFunc;
    return;
}

#undef FUSE_MON
#undef UNFUSE_MON
#undef SECOND_FUSE_MON

#undef fusionType
#undef firstFusion
#undef firstFusionSlot
#undef fusionResult
#undef secondFusionSlot
#undef unfuseSecondMon
#undef moveToLearn
#undef forgetMove
#undef storageIndex

static void SpriteCB_FormChangeIconMosaic(struct Sprite *sprite)
{
    u8 taskId = sprite->data[2];

    sprite->data[0] -= sprite->data[1];

    if (sprite->data[0] <= 0)
    {
        if (gTasks[taskId].tAnimWait == 60)
            sprite->data[0] = 0;
        else
            sprite->data[0] = 10;
    }

    SetGpuReg(REG_OFFSET_MOSAIC, (sprite->data[0] << 12) | (sprite->data[1] << 8));

    if (sprite->data[0] == 0)
    {
        sprite->oam.mosaic = FALSE;
        sprite->callback = SpriteCB_PartyMonIcon;
    }
}

static void Task_TryItemUseFormChange(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    struct Sprite *icon = &gSprites[sPartyMenuDataPtr->monIconSpriteIds[gPartyMenu.slotId]];

    switch (gTasks[taskId].tState)
    {
    case 0:
        PlaySE(SE_M_TELEPORT);
        gTasks[taskId].tState++;
        break;
    case 1:
        if (gTasks[taskId].tAnimWait == 0)
        {
            FreeAndDestroyMonIconSprite(icon);
            PartyMonIcon_Create(gPartyMenu.slotId);
            icon = &gSprites[sPartyMenuDataPtr->monIconSpriteIds[gPartyMenu.slotId]];
            icon->oam.mosaic = TRUE;
            icon->data[0] = 10;
            icon->data[1] = 1;
            icon->data[2] = taskId;
            icon->callback = SpriteCB_FormChangeIconMosaic;
            SetGpuReg(REG_OFFSET_MOSAIC, (icon->data[0] << 12) | (icon->data[1] << 8));
        }
        if (++gTasks[taskId].tAnimWait == 60)
            gTasks[taskId].tState++;
        break;
    case 2:
        PlayCry_Normal(gTasks[taskId].tTargetSpecies, 0);
        gTasks[taskId].tState++;
        break;
    case 3:
        if (IsCryFinished())
        {
            GetMonNickname(mon, gStringVar1);
            StringExpandPlaceholders(gStringVar4, gText_PkmnTransformed);
            DisplayPartyMenuMessage(gStringVar4, FALSE);
            gTasks[taskId].tState++;
        }

        break;
    case 4:
        if (!IsPartyMenuTextPrinterActive())
        {
            if (gSpecialVar_ItemId == ITEM_ROTOM_CATALOG) //only for Rotom currently
            {
                u32 i;
                for (i = 0; i < ARRAY_COUNT(sRotomFormChangeMoves); i++)
                    DeleteMove(mon, sRotomFormChangeMoves[i]);

                if (I_ROTOM_CATALOG_THUNDER_SHOCK < GEN_9 && gSpecialVar_0x8000 == ROTOM_BASE_MOVE)
                {
                    if (!DoesMonHaveAnyMoves(mon))
                        FormChangeTeachMove(taskId, gSpecialVar_0x8000, gPartyMenu.slotId);
                }
                else
                    FormChangeTeachMove(taskId, gSpecialVar_0x8000, gPartyMenu.slotId);
            }

            gTasks[taskId].tState++;
        }
        break;
    case 5:
        gTasks[taskId].func = (void *)GetWordTaskArg(taskId, tNextFunc);
        break;
    }
}

static bool32 TryItemUseFormChange(u8 taskId, TaskFunc task)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];

    if (TryFormChange(mon, FORM_CHANGE_ITEM_USE, B_TRAINER_PLAYER))
    {
        gPartyMenuUseExitCallback = TRUE;
        SetWordTaskArg(taskId, tNextFunc, (u32)task);
        gTasks[taskId].func = Task_TryItemUseFormChange;
        gTasks[taskId].tState = 0;
        gTasks[taskId].tTargetSpecies = GetMonData(mon, MON_DATA_SPECIES);
        gTasks[taskId].tAnimWait = 0;
        return TRUE;
    }
    else
    {
        PlaySE(SE_SELECT);
        PartyItem_DisplayNoEffect(taskId);
        return FALSE;
    }
}

void ItemUseCB_FormChange(u8 taskId, TaskFunc task)
{
    TryItemUseFormChange(taskId, task);
}

void ItemUseCB_FormChange_ConsumedOnUse(u8 taskId, TaskFunc task)
{
    if (TryItemUseFormChange(taskId, task))
        RemoveBagItem(gSpecialVar_ItemId, 1);
}

void ItemUseCB_RotomCatalog(u8 taskId, TaskFunc task)
{
    enum Species species = GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_SPECIES);

    if (!PartyMon_HasFormChangeItem(species, FORM_CHANGE_ITEM_USE_MULTICHOICE, gSpecialVar_ItemId))
    {
        gPartyMenuUseExitCallback = FALSE;
        PlaySE(SE_SELECT);
        DisplayPartyMenuMessage(gText_WontHaveEffect, TRUE);
        gTasks[taskId].func = Task_ReturnToChooseMonAfterText;
        return;
    }

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    SetPartyMonSelectionActions(gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, ACTIONS_ROTOM_CATALOG);
    DisplaySelectionWindow(SELECTWINDOW_CATALOG);
    DisplayPartyMenuStdMessage(PARTY_MSG_WHICH_APPLIANCE);
    gTasks[taskId].data[0] = 0xFF;
    gTasks[taskId].func = Task_HandleSelectionMenuInput;
}

static bool32 TryMultichoiceFormChange(u8 taskId)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);

    if (TryFormChange(mon, FORM_CHANGE_ITEM_USE_MULTICHOICE, B_TRAINER_PLAYER))
    {
        gPartyMenuUseExitCallback = TRUE;
        SetWordTaskArg(taskId, tNextFunc, (u32)Task_ClosePartyMenuAfterText);
        gTasks[taskId].func = Task_TryItemUseFormChange;
        gTasks[taskId].tState = 0;
        gTasks[taskId].tTargetSpecies = GetMonData(mon, MON_DATA_SPECIES);
        gTasks[taskId].tAnimWait = 0;
        return TRUE;
    }
    else
    {
        PlaySE(SE_SELECT);
        PartyItem_DisplayNoEffect(taskId);
        return FALSE;
    }
}

static void CursorCb_CatalogBulb(u8 taskId)
{
    gSpecialVar_Result = 0;
    gSpecialVar_0x8000 = ROTOM_BASE_MOVE;
    TryMultichoiceFormChange(taskId);
}

static void CursorCb_CatalogOven(u8 taskId)
{
    gSpecialVar_Result = 1;
    gSpecialVar_0x8000 = ROTOM_HEAT_MOVE;
    TryMultichoiceFormChange(taskId);
}

static void CursorCb_CatalogWashing(u8 taskId)
{
    gSpecialVar_Result = 2;
    gSpecialVar_0x8000 = ROTOM_WASH_MOVE;
    TryMultichoiceFormChange(taskId);
}

static void CursorCb_CatalogFridge(u8 taskId)
{
    gSpecialVar_Result = 3;
    gSpecialVar_0x8000 = ROTOM_FROST_MOVE;
    TryMultichoiceFormChange(taskId);
}

static void CursorCb_CatalogFan(u8 taskId)
{
    gSpecialVar_Result = 4;
    gSpecialVar_0x8000 = ROTOM_FAN_MOVE;
    TryMultichoiceFormChange(taskId);
}

static void CursorCb_CatalogMower(u8 taskId)
{
    gSpecialVar_Result = 5;
    gSpecialVar_0x8000 = ROTOM_MOW_MOVE;
    TryMultichoiceFormChange(taskId);
}

void ItemUseCB_ZygardeCube(u8 taskId, TaskFunc task)
{
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    SetPartyMonSelectionActions(gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, ACTIONS_ZYGARDE_CUBE);
    DisplaySelectionWindow(SELECTWINDOW_ZYGARDECUBE);
    gTasks[taskId].data[0] = 0xFF;
    gTasks[taskId].func = Task_HandleSelectionMenuInput;
}

static void CursorCb_ChangeForm(u8 taskId)
{
    gSpecialVar_Result = 0;
    TryMultichoiceFormChange(taskId);
}

static void CursorCb_ChangeAbility(u8 taskId)
{
    gSpecialVar_Result = 1;
    TryMultichoiceFormChange(taskId);
}

#undef tState
#undef tTargetSpecies
#undef tAnimWait
#undef tNextFunc
#undef tExtraMoveHandling

static void DisplayHexorbMessageAndScheduleTask(u8 taskId, const u8* message, TaskFunc nextTask, bool32 useExitCallback)
{
    gPartyMenuUseExitCallback = useExitCallback;
    DisplayPartyMenuMessage(message, TRUE);
    gTasks[taskId].func = nextTask;
}

void ItemUseCB_UseHexorb(u8 taskId, TaskFunc task)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];

    if (!GetMonData(mon, MON_DATA_HP))
    {
        DisplayHexorbResult(taskId, 0, HEXORB_RESULT_FAIL_FAINTED, mon);
        return;
    }

    SetPartyMonSelectionActions(gParties[B_TRAINER_PLAYER], gPartyMenu.slotId, ACTIONS_HEXORB);
    DisplaySelectionWindow(SELECTWINDOW_HEXORB);
    DisplayPartyMenuStdMessage(PARTY_MSG_WHICH_STATUS);
    gTasks[taskId].data[0] = TASK_NONE;
    gTasks[taskId].func = Task_HandleSelectionMenuInput;
}

static void TryHexorbAndPrintResult(u8 taskId)
{
    u32 status = Hexorb_ConvertMenuPosToStatus(sPartyMenuDataPtr->actionCursor);
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId];
    enum HexorbResultCodes result = (Hexorb_TryInflictStatus(mon, status));

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_LIST]);
    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);

    DisplayHexorbResult(taskId, status, result, mon);
}

static void DisplayHexorbResult(u8 taskId, u32 status, enum HexorbResultCodes result, struct Pokemon* mon)
{
    switch (result)
    {
        case HEXORB_RESULT_SUCCESS:
            UpdateMonDisplayInfoAfterRareCandy(gPartyMenu.slotId, mon);
            PlayCry_ByMode(GetMonData(mon, MON_DATA_SPECIES), 0, CRY_MODE_WEAK);
            Hexorb_ConstructSuccessMessage(mon, status);
            DisplayHexorbMessageAndScheduleTask(taskId, gStringVar4, Task_ClosePartyMenuAfterText, TRUE);
            break;
        case HEXORB_RESULT_FAIL_ABILITY:
            PlaySE(SE_SELECT);
            Hexorb_ConstructAbilityFailureMessage(mon,status);
            DisplayHexorbMessageAndScheduleTask(taskId, gStringVar4, Task_RetryHexorbAfterFailedStatus, FALSE);
            break;
        case HEXORB_RESULT_FAIL_TYPE_0:
        case HEXORB_RESULT_FAIL_TYPE_1:
            gPartyMenuUseExitCallback = FALSE;
            PlaySE(SE_SELECT);
            Hexorb_ConstructTypeFailureMessage(mon, status, result);
            DisplayHexorbMessageAndScheduleTask(taskId, gStringVar4, Task_RetryHexorbAfterFailedStatus, FALSE);
            break;
        case HEXORB_RESULT_FAIL_SAME_STATUS:
            PlaySE(SE_SELECT);
            Hexorb_ConstructAlreadyStatusedMessage(mon, status);
            DisplayHexorbMessageAndScheduleTask(taskId, gStringVar4, Task_RetryHexorbAfterFailedStatus, FALSE);
            break;
        case HEXORB_RESULT_FAIL_HAS_STATUS:
            PlaySE(SE_SELECT);
            Hexorb_ConstructStatusFailureMessage(mon);
            DisplayHexorbMessageAndScheduleTask(taskId, gStringVar4, Task_RetryHexorbAfterFailedMon, FALSE);
            break;
        default:
        case HEXORB_RESULT_FAIL_FAINTED:
            PlaySE(SE_SELECT);
            Hexorb_ConstructStatusFailureMessage(mon);
            DisplayHexorbMessageAndScheduleTask(taskId, gText_WontHaveEffect, Task_RetryHexorbAfterFailedMon, FALSE);
            break;
    }
}

static void Task_RetryHexorbAfterFailedStatus(u8 taskId)
{
    if (!JOY_NEW(A_BUTTON | B_BUTTON))
        return;

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    PlaySE(SE_SELECT);
    ItemUseCB_UseHexorb(taskId, Task_HandleSelectionMenuInput);
}

static void Task_RetryHexorbAfterFailedMon(u8 taskId)
{
    if (!JOY_NEW(A_BUTTON | B_BUTTON))
        return;

    PartyMenuRemoveWindow(&sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG]);
    DisplayPartyMenuStdMessage(PARTY_MSG_USE_ON_WHICH_MON);
    PlaySE(SE_SELECT);
    gTasks[taskId].func = Task_HandleChooseMonInput;
}

// ==================================================
// Field moves
// ==================================================

bool8 FieldCallback_PrepareFadeInFromMenu(void)
{
    FadeInFromBlack();
    CreateTask(Task_FieldMoveWaitForFade, 8);
    if (PlayerHasFollowerNPC())
        CreateTask(Task_HideFollowerNPCForTeleport, 0);

    return TRUE;
}

// Same as above, but removes follower Pokémon
bool8 FieldCallback_PrepareFadeInForTeleport(void)
{
    RemoveFollowingPokemon();
    return FieldCallback_PrepareFadeInFromMenu();
}

#define taskState       task->data[0]

enum
{
    FNPC_WALK_INTO_PLAYER,
    FNPC_WAIT_FOR_ANIM_FINISH
};

static void Task_HideFollowerNPCForTeleport(u8 taskId)
{
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId()];
    struct Task *task;
    task = &gTasks[taskId];
    if (taskState == FNPC_WALK_INTO_PLAYER)
    {
        if (!PlayerHasFollowerNPC())
        {
            DestroyTask(taskId);
        }
        else
        {
            FollowerNPCWalkIntoPlayerForLeaveMap();
            taskState = FNPC_WAIT_FOR_ANIM_FINISH;
        }
    }
    if (taskState == FNPC_WAIT_FOR_ANIM_FINISH)
    {
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            FollowerNPCHideForLeaveMap(follower);
            DestroyTask(taskId);
        }
    }
}

#undef taskState

static void Task_FieldMoveWaitForFade(u8 taskId)
{
    if (IsWeatherNotFadingIn() == TRUE)
    {
        gFieldEffectArguments[0] = GetFieldMoveMonSpecies();
        gPostMenuFieldCallback();
        DestroyTask(taskId);
    }
}

static enum Species GetFieldMoveMonSpecies(void)
{
    return GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_SPECIES);
}

static void FieldCallback_Surf(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_SURF);
}

bool32 SetUpFieldMove_Surf(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_SURF))
        return FALSE;

    if (PartyHasMonWithSurf() == TRUE && IsPlayerFacingSurfableFishableWater() == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Surf;
        return TRUE;
    }
    return FALSE;
}

bool32 SetUpFieldMove_Fly(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE))
        return FALSE;

    if (Overworld_MapTypeAllowsTeleportAndFly(gMapHeader.mapType) == TRUE)
        return TRUE;
    else
        return FALSE;
}

static void FieldCallback_Waterfall(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_WATERFALL);
}

bool32 SetUpFieldMove_Waterfall(void)
{
    s16 x, y;

    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_WATERFALL))
        return FALSE;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    if (MetatileBehavior_IsWaterfall(MapGridGetMetatileBehaviorAt(x, y)) == TRUE && IsPlayerSurfingNorth() == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Waterfall;
        return TRUE;
    }
    return FALSE;
}

bool32 SetUpFieldMove_RockClimb(void)
{
    s16 x, y;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    if (MetatileBehavior_IsRockClimbable(MapGridGetMetatileBehaviorAt(x, y)))
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_RockClimb;
        return TRUE;
    }

    return FALSE;
}

static void FieldCallback_Dive(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_DIVE);
}

bool32 SetUpFieldMove_Dive(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_DIVE))
        return FALSE;

    gFieldEffectArguments[1] = TrySetDiveWarp();
    if (gFieldEffectArguments[1] != 0)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Dive;
        return TRUE;
    }
    return FALSE;
}

static void FieldCallback_RockClimb(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_ROCK_CLIMB);
}

// ==================================================
// Battle order
// ==================================================

void ClearSelectedPartyOrder(void)
{
    memset(gSelectedOrderFromParty, 0, sizeof(gSelectedOrderFromParty));
}

void BufferBattlePartyCurrentOrder(void)
{
    BufferBattlePartyOrder(gBattlePartyCurrentOrder, GetPlayerFlankId());
}

static void BufferBattlePartyOrder(u8 *partyBattleOrder, u8 flankId)
{
    u8 partyIds[PARTY_SIZE];
    int i, j;

    if (IsMultiBattle() == TRUE && AreMultiPartiesFullTeams() == TRUE)
    {
        partyBattleOrder[0] = (0 << 4) | 1;
        partyBattleOrder[1] = (2 << 4) | 3;
        partyBattleOrder[2] = (4 << 4) | 5;
        return;
    }
    else if (IsMultiBattle() == TRUE)
    {
        // Party ids are packed in 4 bits at a time
        // i.e. the party id order below would be 0, 3, 5, 4, 2, 1, and the two parties would be 0,5,4 and 3,2,1
        if (flankId != 0)
        {
            partyBattleOrder[0] = 0 | (3 << 4);
            partyBattleOrder[1] = 5 | (4 << 4);
            partyBattleOrder[2] = 2 | (1 << 4);
        }
        else
        {
            partyBattleOrder[0] = 3 | (0 << 4);
            partyBattleOrder[1] = 2 | (1 << 4);
            partyBattleOrder[2] = 5 | (4 << 4);
        }
        return;
    }
    else if (IsDoubleBattle() == FALSE)
    {
        j = 1;
        partyIds[0] = gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIds[0])
            {
                partyIds[j] = i;
                j++;
            }
        }
    }
    else
    {
        j = 2;
        partyIds[0] = gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)];
        partyIds[1] = gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT)];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIds[0] && i != partyIds[1])
            {
                partyIds[j] = i;
                j++;
            }
        }
    }
    for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
        partyBattleOrder[i] = (partyIds[0 + (i * 2)] << 4) | partyIds[1 + (i * 2)];
}

void BufferBattlePartyCurrentOrderBySide(enum BattlerId battler, u8 flankId)
{
    BufferBattlePartyOrderBySide(gBattleStruct->battlerPartyOrders[battler], flankId, battler);
}

// when IsOnPlayerSide(battlerId), this function is identical the one above
static void BufferBattlePartyOrderBySide(u8 *partyBattleOrder, u8 flankId, enum BattlerId battler)
{
    u8 partyIndexes[PARTY_SIZE];
    int i, j;

    enum BattlerId leftBattler;
    if (IsOnPlayerSide(battler))
        leftBattler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
    else
        leftBattler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);

    if (IsMultiBattle() == TRUE && AreMultiPartiesFullTeams() == TRUE)
    {
        partyBattleOrder[0] = (0 << 4) | 1;
        partyBattleOrder[1] = (2 << 4) | 3;
        partyBattleOrder[2] = (4 << 4) | 5;
        return;
    }
    else if (IsMultiBattle() == TRUE)
    {
        if (flankId != 0)
        {
            partyBattleOrder[0] = 0 | (3 << 4);
            partyBattleOrder[1] = 5 | (4 << 4);
            partyBattleOrder[2] = 2 | (1 << 4);
        }
        else
        {
            partyBattleOrder[0] = 3 | (0 << 4);
            partyBattleOrder[1] = 2 | (1 << 4);
            partyBattleOrder[2] = 5 | (4 << 4);
        }
        return;
    }
    else if (IsDoubleBattle() == FALSE)
    {
        j = 1;
        partyIndexes[0] = gBattlerPartyIndexes[leftBattler];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIndexes[0])
            {
                partyIndexes[j] = i;
                j++;
            }
        }
    }
    else
    {
        enum BattlerId rightBattler;
        if (IsOnPlayerSide(battler))
            rightBattler = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);
        else
            rightBattler = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);

        j = 2;
        partyIndexes[0] = gBattlerPartyIndexes[leftBattler];
        partyIndexes[1] = gBattlerPartyIndexes[rightBattler];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIndexes[0] && i != partyIndexes[1])
            {
                partyIndexes[j] = i;
                j++;
            }
        }
    }

    for (i = 0; i < 3; i++)
        partyBattleOrder[i] = (partyIndexes[0 + (i * 2)] << 4) | partyIndexes[1 + (i * 2)];
}

void SwitchPartyOrderLinkMulti(enum BattlerId battler, u8 slot, u8 slot2)
{
    u8 partyIds[PARTY_SIZE];
    u8 tempSlot = 0;
    int i, j;
    u8 *partyBattleOrder;
    u8 partyIdBuffer;

    if (IsMultiBattle())
    {
        partyBattleOrder = gBattleStruct->battlerPartyOrders[battler];
        for (i = j = 0; i < PARTY_SIZE / 2; j++, i++)
        {
            partyIds[j] = partyBattleOrder[i] >> 4;
            j++;
            partyIds[j] = partyBattleOrder[i] & 0xF;
        }
        partyIdBuffer = partyIds[slot2];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (partyIds[i] == slot)
            {
                tempSlot = partyIds[i];
                partyIds[i] = partyIdBuffer;
                break;
            }
        }
        if (i != PARTY_SIZE)
        {
            partyIds[slot2] = tempSlot;
            partyBattleOrder[0] = (partyIds[0] << 4) | partyIds[1];
            partyBattleOrder[1] = (partyIds[2] << 4) | partyIds[3];
            partyBattleOrder[2] = (partyIds[4] << 4) | partyIds[5];
        }
    }
}

static u8 GetPartyIdFromBattleSlot(u8 slot)
{
    bool32 modResult = slot & 1;
    u8 retVal;

    slot /= 2;
    if (modResult)
        retVal = gBattlePartyCurrentOrder[slot] & 0xF;
    else
        retVal = gBattlePartyCurrentOrder[slot] >> 4;
    return retVal;
}

static void SetPartyIdAtBattleSlot(u8 slot, u8 setVal)
{
    bool32 modResult = slot & 1;

    slot /= 2;
    if (modResult)
        gBattlePartyCurrentOrder[slot] = (gBattlePartyCurrentOrder[slot] & 0xF0) | setVal;
    else
        gBattlePartyCurrentOrder[slot] = (gBattlePartyCurrentOrder[slot] & 0xF) | (setVal << 4);
}

void SwitchPartyMonSlots(u8 slot, u8 slot2)
{
    u8 partyId = GetPartyIdFromBattleSlot(slot);
    SetPartyIdAtBattleSlot(slot, GetPartyIdFromBattleSlot(slot2));
    SetPartyIdAtBattleSlot(slot2, partyId);
}

u8 GetPartyIdFromBattlePartyId(u8 battlePartyId)
{
    u8 i, j;

    for (j = i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); j++, i++)
    {
        if ((gBattlePartyCurrentOrder[i] >> 4) != battlePartyId)
        {
            j++;
            if ((gBattlePartyCurrentOrder[i] & 0xF) == battlePartyId)
                return j;
        }
        else
        {
            return j;
        }
    }
    return 0;
}

static const u8 sMultiBattlePartyIdToMenuId_Left[PARTY_SIZE] = { 0, 2, 3, 1, 4, 5};
static const u8 sMultiBattlePartyIdToMenuId_Right[PARTY_SIZE] = { 1, 4, 5, 0, 2, 3};

static void UpdatePartyToBattleOrder(void)
{
    struct Pokemon *partyBuffer = Alloc(sizeof(gParties[B_TRAINER_PLAYER]));
    u8 i;
    const u8 *multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Left;

    if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && ((gBattlerInMenuId & BIT_FLANK) != B_FLANK_LEFT))
        multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Right;


    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *srcParty = NULL;
        s8 srcPartySlot = 0;
        u8 battlePartyId = GetPartyIdFromBattleSlot(i);
        u8 srcMenuId = battlePartyId;

        if (gPartyMenu.layout == PARTY_LAYOUT_MULTI && battlePartyId < PARTY_SIZE)
            srcMenuId = multiBattlePartyIdToMenuId[battlePartyId];

        GetPartyAndSlotFromPartyMenuId(srcMenuId, &srcParty, &srcPartySlot);
        memcpy(&partyBuffer[i], &srcParty[srcPartySlot], sizeof(struct Pokemon));
    }
    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *dstParty = NULL;
        s8 dstPartySlot = 0;
        GetPartyAndSlotFromPartyMenuId(i, &dstParty, &dstPartySlot);
        memcpy(&dstParty[dstPartySlot], &partyBuffer[i], sizeof(struct Pokemon));
    }
    Free(partyBuffer);
}

static void UpdatePartyToFieldOrder(void)
{
    struct Pokemon *partyBuffer = Alloc(sizeof(gParties[B_TRAINER_PLAYER]));
    u8 i;

    const u8 *multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Left;

    if ((gBattleTypeFlags & BATTLE_TYPE_LINK)
     && ((gBattlerInMenuId & BIT_FLANK) != B_FLANK_LEFT))
    {
        multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Right;
    }

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *srcParty = NULL;
        s8 srcPartySlot = 0;
        GetPartyAndSlotFromPartyMenuId(i, &srcParty, &srcPartySlot);
        memcpy(&partyBuffer[i], &srcParty[srcPartySlot], sizeof(struct Pokemon));
    }

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *dstParty = NULL;
        s8 dstPartySlot = 0;
        u8 battlePartyId = GetPartyIdFromBattleSlot(i);
        u8 dstMenuId = battlePartyId;

        if (gPartyMenu.layout == PARTY_LAYOUT_MULTI && battlePartyId < PARTY_SIZE)
            dstMenuId = multiBattlePartyIdToMenuId[battlePartyId];

        GetPartyAndSlotFromPartyMenuId(dstMenuId, &dstParty, &dstPartySlot);
        memcpy(&dstParty[dstPartySlot], &partyBuffer[i], sizeof(struct Pokemon));
    }

    Free(partyBuffer);
}

// Functions for 4-party link multi battle handling
static u8 CombinedToIndividualPartyId(u8 index)
{
    if (IsMultiBattle() == TRUE && !AreMultiPartiesFullTeams() && index >= MULTI_PARTY_SIZE)
        return index - MULTI_PARTY_SIZE;
    return index;
}

static u8 IndividualToCombinedPartyId(u8 index, enum BattlerId battler)
{
    if (IsMultiBattle() == TRUE && !AreMultiPartiesFullTeams() && (GetBattlerPosition(battler) & BIT_FLANK))
        return index + MULTI_PARTY_SIZE;
    return index;
}

static void LoadBattlePartyCurrentOrderForLayout(void)
{
    if (!gMain.inBattle || !IsMultiBattle())
        return;

    enum BattlerId battler = gBattlerInMenuId;

    if (gPartyMenu.layout == PARTY_LAYOUT_MULTI_FULL_PARTNER || gPartyMenu.layout == PARTY_LAYOUT_MULTI_FULL_SHOWCASE_PARTNER)
        battler = B_BATTLER_2;

    if (battler < gBattlersCount) // Including check given recent cases where animations set battlers OOB
        memcpy(gBattlePartyCurrentOrder, gBattleStruct->battlerPartyOrders[battler], sizeof(gBattlePartyCurrentOrder));
}

static void GetMultiPartyForSummaryScreen(void)
{
    // Consolidate player and partner party into player party for summary screen
    gParties[B_TRAINER_PLAYER][3] = gParties[B_TRAINER_PLAYER][2];
    gParties[B_TRAINER_PLAYER][2] = gParties[B_TRAINER_PLAYER][1];
    gParties[B_TRAINER_PLAYER][1] = gParties[B_TRAINER_PARTNER][0];
    gParties[B_TRAINER_PLAYER][4] = gParties[B_TRAINER_PARTNER][1];
    gParties[B_TRAINER_PLAYER][5] = gParties[B_TRAINER_PARTNER][2];
}

static void RestoreMultiPartyFromSummaryScreen(void)
{
    // Restore player mons
    gParties[B_TRAINER_PLAYER][1] = gParties[B_TRAINER_PLAYER][2];
    gParties[B_TRAINER_PLAYER][2] = gParties[B_TRAINER_PLAYER][3];

    // Clear partner mons from back of player party
    for (u32 i = MULTI_PARTY_SIZE; i < PARTY_SIZE; i++)
    {
        ZeroMonData(&gParties[B_TRAINER_PLAYER][i]);
    }
}

static u32 TrySwitchInPokemon(void)
{
    u8 slot = GetCursorSelectionMonId();
    struct Pokemon *party = NULL;
    s8 partySlot = 0, newPartySlot = 0;
    u8 newSlot;
    u8 battlePartyId = 0;

    GetPartyAndSlotFromPartyMenuId(slot, &party, &partySlot);
    battlePartyId = GetPartyIdFromBattleSlot(slot);

    // In a 6v6 multi battle, slots 1, 4, and 5 are the partner's Pokémon
    // mont note: per discussion with psf, 6v6 multi battle will not be used, so leave as-is
    if (IsMultiBattle() == TRUE && (slot == 1 || slot == 4 || slot == 5) && !AreMultiPartiesFullTeams())
    {
        StringCopy(gStringVar1, GetTrainerPartnerName());
        StringExpandPlaceholders(gStringVar4, gText_CantSwitchWithAlly);
        return NO_SWITCH;
    }
    if (GetMonData(&party[partySlot], MON_DATA_HP) == 0)
    {
        GetMonNickname(&party[partySlot], gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnHasNoEnergy);
        return NO_SWITCH;
    }
    for (enum BattlerId i = 0; i < gBattlersCount; i++)
    {
        if (IsOnPlayerSide(i)
         && GetBattlerParty(i) == party
         && CombinedToIndividualPartyId(battlePartyId) == gBattlerPartyIndexes[i])
        {
            GetMonNickname(&party[partySlot], gStringVar1);
            StringExpandPlaceholders(gStringVar4, gText_PkmnAlreadyInBattle);
            return SAME_SWITCH;
        }
    }
    if (GetMonData(&party[partySlot], MON_DATA_IS_EGG))
    {
        StringExpandPlaceholders(gStringVar4, gText_EggCantBattle);
        return NO_SWITCH;
    }
    if (BattlersShareParty(gBattlerInMenuId, GetPartnerBattler(gBattlerInMenuId))
     && battlePartyId == gBattleStruct->prevSelectedPartySlot)
    {
        GetMonNickname(&party[partySlot], gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnAlreadySelected);
        return NO_SWITCH;
    }
    if (gPartyMenu.action == PARTY_ACTION_ABILITY_PREVENTS)
    {
        SetMonPreventsSwitchingString();
        return NO_SWITCH;
    }
    if (gPartyMenu.action == PARTY_ACTION_CANT_SWITCH)
    {
        u8 currBattler = gBattlerInMenuId;
        GetMonNickname(&party[GetPartyIdFromBattlePartyId(IndividualToCombinedPartyId(gBattlerPartyIndexes[currBattler], currBattler))], gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnCantSwitchOut);
        return NO_SWITCH;
    }
    gSelectedMonPartyId = CombinedToIndividualPartyId(battlePartyId);
    gPartyMenuUseExitCallback = TRUE;
    newSlot = GetPartyIdFromBattlePartyId(IndividualToCombinedPartyId(gBattlerPartyIndexes[gBattlerInMenuId], gBattlerInMenuId));
    GetPartyAndSlotFromPartyMenuId(newSlot, &party, &newPartySlot);
    SwitchPartyMonSlots(newSlot, slot);
    SwapPartyPokemon(&party[newPartySlot], &party[partySlot]);
    return CAN_SWITCH;
}

static void SwapPartyPokemon(struct Pokemon *mon1, struct Pokemon *mon2)
{
    struct Pokemon *temp = Alloc(sizeof(struct Pokemon));

    *temp = *mon1;
    *mon1 = *mon2;
    *mon2 = *temp;

    Free(temp);
}

static void GetPartyAndSlotFromPartyMenuId(s8 menuId, struct Pokemon **party, s8 *partySlot)
{
    switch (gPartyMenu.layout)
    {
    case PARTY_LAYOUT_MULTI_FULL_PARTNER:
    case PARTY_LAYOUT_MULTI_FULL_SHOWCASE_PARTNER:
        *party = gParties[B_TRAINER_PARTNER];
        *partySlot = menuId;
        break;
    case PARTY_LAYOUT_MULTI_SHOWCASE:
        switch (menuId)
        {
        case 3:
        case 4:
        case 5:
            *party = gParties[B_TRAINER_PARTNER];
            *partySlot = menuId - MULTI_PARTY_SIZE;
            break;
        default:
            *party = gParties[B_TRAINER_PLAYER];
            *partySlot = menuId;
            break;
        }
        break;
    case PARTY_LAYOUT_MULTI:
        switch (menuId)
        {
        case 1:
            *party = gParties[B_TRAINER_PARTNER];
            *partySlot = 0;
            break;
        case 4:
        case 5:
            *party = gParties[B_TRAINER_PARTNER];
            *partySlot = menuId - MULTI_PARTY_SIZE;
            break;
        case 2:
        case 3:
            *party = gParties[B_TRAINER_PLAYER];
            *partySlot = menuId - 1;
            break;
        default:
            *party = gParties[B_TRAINER_PLAYER];
            *partySlot = menuId;
            break;
        }
        break;
    default:
        *party = gParties[B_TRAINER_PLAYER];
        *partySlot = menuId;
        break;
    }
}

static struct Pokemon *GetPartyMonFromPartyMenuId(s8 menuId)
{
    struct Pokemon *party = NULL;
    s8 partySlot = 0;

    GetPartyAndSlotFromPartyMenuId(menuId, &party, &partySlot);

    return &party[partySlot];
}

// ==================================================
// Script specials
// ==================================================

void DoBattlePyramidMonsHaveHeldItem(void)
{
    u8 i;

    gSpecialVar_Result = FALSE;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HELD_ITEM) != ITEM_NONE)
        {
            gSpecialVar_Result = TRUE;
            break;
        }
    }
}

void MoveDeleterChooseMoveToForget(void)
{
    ShowPokemonSummaryScreen(SUMMARY_MODE_SELECT_MOVE, gParties[B_TRAINER_PLAYER], gSpecialVar_0x8004, gPartiesCount[B_TRAINER_PLAYER] - 1, CB2_ReturnToField);
    gFieldCallback = FieldCB_ContinueScriptHandleMusic;
}

void GetNumMovesSelectedMonHas(void)
{
    u32 i;
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();

    gSpecialVar_Result = 0;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetBoxMonData(boxmon , MON_DATA_MOVE1 + i) != MOVE_NONE)
            gSpecialVar_Result++;
    }
}

void BufferMoveDeleterNicknameAndMove(void)
{
    enum Move move = MOVE_NONE;
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();
    move = GetBoxMonData(boxmon, MON_DATA_MOVE1 + gSpecialVar_0x8005);
    GetBoxMonData(boxmon, MON_DATA_NICKNAME, gStringVar1);
    StringCopy(gStringVar2, GetMoveName(move));
}

void MoveDeleterForgetMove(void)
{
    enum Move move = MOVE_NONE;
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();
    SetBoxMonData(boxmon, MON_DATA_MOVE1 + gSpecialVar_0x8005, &move);
    SetBoxMonData(boxmon, MON_DATA_PP1 + gSpecialVar_0x8005, &gMovesInfo[MOVE_NONE].pp);
    u8 ppBonuses = GetBoxMonData(boxmon, MON_DATA_PP_BONUSES);
    ppBonuses &= gPPUpClearMask[gSpecialVar_0x8005];
    SetBoxMonData(boxmon, MON_DATA_PP_BONUSES, &ppBonuses);
    for (u32 i = gSpecialVar_0x8005; i < MAX_MON_MOVES - 1; i++)
        ShiftMoveSlot(boxmon, i, i + 1);
}

void IsSelectedMonEgg(void)
{
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();
    if (GetBoxMonData(boxmon, MON_DATA_IS_EGG))
        gSpecialVar_Result = TRUE;
    else
        gSpecialVar_Result = FALSE;
}

void IsLastMonThatKnowsSurf(void)
{
    enum Move move;
    u32 i, j;

    gSpecialVar_Result = FALSE;
    if (gSpecialVar_0x8004 == PC_MON_CHOSEN)
        return;

    move = GetMonData(&gParties[B_TRAINER_PLAYER][gSpecialVar_0x8004], MON_DATA_MOVE1 + gSpecialVar_0x8005);
    if (move == MOVE_SURF)
    {
        for (i = 0; i < CalculatePlayerPartyCount(); i++)
        {
            if (i != gSpecialVar_0x8004)
            {
                for (j = 0; j < MAX_MON_MOVES; j++)
                {
                    if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_MOVE1 + j) == MOVE_SURF)
                        return;
                }
            }
        }
        if (AnyStorageMonWithMove(move) != TRUE)
            gSpecialVar_Result = !P_CAN_FORGET_HIDDEN_MOVE;
    }
}

// ==================================================
// Helpers
// ==================================================

bool8 IsMultiBattle(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_MULTI && IsDoubleBattle() && gMain.inBattle)
        return TRUE;
    else
        return FALSE;
}

u8 GetCursorSelectionMonId(void)
{
    return gPartyMenu.slotId;
}

u8 GetPartyMenuType(void)
{
    return gPartyMenu.menuType;
}

u8 *GetMonNickname(struct Pokemon *mon, u8 *dest)
{
    GetMonData(mon, MON_DATA_NICKNAME, dest);
    return StringGet_Nickname(dest);
}

u8 GetAilmentFromStatus(u32 status)
{
    if (status & STATUS1_PSN_ANY)
        return AILMENT_PSN;
    if (status & STATUS1_PARALYSIS)
        return AILMENT_PRZ;
    if (status & STATUS1_SLEEP)
        return AILMENT_SLP;
    if (status & STATUS1_FREEZE)
        return AILMENT_FRZ;
    if (status & STATUS1_BURN)
        return AILMENT_BRN;
    if (status & STATUS1_FROSTBITE)
        return AILMENT_FRB;
    return AILMENT_NONE;
}

u8 GetMonAilment(struct Pokemon *mon)
{
    u8 ailment;

    if (GetMonData(mon, MON_DATA_HP) == 0)
        return AILMENT_FNT;
    ailment = GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS));
    if (ailment != AILMENT_NONE)
        return ailment;
    if (ShouldPokemonShowActivePokerus(mon))
        return AILMENT_PKRS;
    return AILMENT_NONE;
}

enum CanMoveBeLearned CanTeachMove(struct Pokemon *mon, enum Move move)
{
    if (GetMonData(mon, MON_DATA_IS_EGG))
        return CANNOT_LEARN_MOVE_IS_EGG;
    else if (!CanMonEverLearnMove(GetMonData(mon, MON_DATA_SPECIES_OR_EGG), move))
        return CANNOT_LEARN_MOVE;
    else if (MonKnowsMove(mon, move) == TRUE)
        return ALREADY_KNOWS_MOVE;
    else if (!CanLearnTeachableMove(GetMonData(mon, MON_DATA_SPECIES_OR_EGG), move))
        return CANNOT_LEARN_MOVE;
    else
        return CAN_LEARN_MOVE;
}

enum Move ItemIdToBattleMoveId(enum Item item)
{
    return (GetItemPocket(item) == POCKET_TM_HM) ? GetItemTMHMMoveId(item) : MOVE_NONE;
}

bool8 MonKnowsMove(struct Pokemon *mon, enum Move move)
{
    u8 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetMonData(mon, MON_DATA_MOVE1 + i) == move)
            return TRUE;
    }
    return FALSE;
}

bool8 BoxMonKnowsMove(struct BoxPokemon *boxMon, enum Move move)
{
    u8 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetBoxMonData(boxMon, MON_DATA_MOVE1 + i) == move)
            return TRUE;
    }
    return FALSE;
}

enum ItemEffectType GetItemEffectType(enum Item item)
{
    u32 statusCure;
    const u8 *itemEffect = GetItemEffect(item);

    if (itemEffect == NULL)
        return ITEM_EFFECT_NONE;

    if ((itemEffect[0] & ITEM0_DIRE_HIT) || itemEffect[1] || (itemEffect[3] & ITEM3_GUARD_SPEC))
        return ITEM_EFFECT_X_ITEM;
    else if (itemEffect[0] & ITEM0_SACRED_ASH)
        return ITEM_EFFECT_SACRED_ASH;
    else if (itemEffect[0] & ITEM0_POKEVIAL)
        return ITEM_EFFECT_POKEVIAL;
    else if (itemEffect[3] & ITEM3_LEVEL_UP)
        return ITEM_EFFECT_RAISE_LEVEL;
    else if (itemEffect[0] & ITEM0_HEXORB)
        return ITEM_EFFECT_HEXORB;

    statusCure = itemEffect[3] & ITEM3_STATUS_ALL;
    if (statusCure || (itemEffect[0] >> 7))
    {
        if (statusCure == ITEM3_SLEEP)
            return ITEM_EFFECT_CURE_SLEEP;
        else if (statusCure == ITEM3_POISON)
            return ITEM_EFFECT_CURE_POISON;
        else if (statusCure == ITEM3_BURN)
            return ITEM_EFFECT_CURE_BURN;
        else if (statusCure == ITEM3_FREEZE)
            return ITEM_EFFECT_CURE_FREEZE_FROSTBITE;
        else if (statusCure == ITEM3_PARALYSIS)
            return ITEM_EFFECT_CURE_PARALYSIS;
        else if (statusCure == ITEM3_CONFUSION)
            return ITEM_EFFECT_CURE_CONFUSION;
        else if (itemEffect[0] >> 7 && !statusCure)
            return ITEM_EFFECT_CURE_INFATUATION;
        else
            return ITEM_EFFECT_CURE_ALL_STATUS;
    }

    if (itemEffect[4] & (ITEM4_REVIVE | ITEM4_HEAL_HP))
        return ITEM_EFFECT_HEAL_HP;
    else if (itemEffect[4] & ITEM4_EV_ATK)
        return ITEM_EFFECT_ATK_EV;
    else if (itemEffect[4] & ITEM4_EV_HP)
        return ITEM_EFFECT_HP_EV;
    else if (itemEffect[5] & ITEM5_EV_SPATK)
        return ITEM_EFFECT_SPATK_EV;
    else if (itemEffect[5] & ITEM5_EV_SPDEF)
        return ITEM_EFFECT_SPDEF_EV;
    else if (itemEffect[5] & ITEM5_EV_SPEED)
        return ITEM_EFFECT_SPEED_EV;
    else if (itemEffect[5] & ITEM5_EV_DEF)
        return ITEM_EFFECT_DEF_EV;
    else if (itemEffect[4] & ITEM4_EVO_STONE)
        return ITEM_EFFECT_EVO_STONE;
    else if (itemEffect[4] & ITEM4_PP_UP)
        return ITEM_EFFECT_PP_UP;
    else if (itemEffect[5] & ITEM5_PP_MAX)
        return ITEM_EFFECT_PP_MAX;
    else if (itemEffect[4] & (ITEM4_HEAL_PP | ITEM4_HEAL_PP_ONE))
        return ITEM_EFFECT_HEAL_PP;
    else
        return ITEM_EFFECT_NONE;
}

void ShiftMoveSlot(struct BoxPokemon *mon, u8 slotTo, u8 slotFrom)
{
    enum Move move1 = GetBoxMonData(mon, MON_DATA_MOVE1 + slotTo);
    enum Move move0 = GetBoxMonData(mon, MON_DATA_MOVE1 + slotFrom);
    u8 pp1 = GetBoxMonData(mon, MON_DATA_PP1 + slotTo);
    u8 pp0 = GetBoxMonData(mon, MON_DATA_PP1 + slotFrom);
    u8 ppBonuses = GetBoxMonData(mon, MON_DATA_PP_BONUSES);
    u8 ppBonusMask1 = gPPUpGetMask[slotTo];
    u8 ppBonusMove1 = (ppBonuses & ppBonusMask1) >> (slotTo * 2);
    u8 ppBonusMask2 = gPPUpGetMask[slotFrom];
    u8 ppBonusMove2 = (ppBonuses & ppBonusMask2) >> (slotFrom * 2);
    ppBonuses &= ~ppBonusMask1;
    ppBonuses &= ~ppBonusMask2;
    ppBonuses |= (ppBonusMove1 << (slotFrom * 2)) + (ppBonusMove2 << (slotTo * 2));
    SetBoxMonData(mon, MON_DATA_MOVE1 + slotTo, &move0);
    SetBoxMonData(mon, MON_DATA_MOVE1 + slotFrom, &move1);
    SetBoxMonData(mon, MON_DATA_PP1 + slotTo, &pp0);
    SetBoxMonData(mon, MON_DATA_PP1 + slotFrom, &pp1);
    SetBoxMonData(mon, MON_DATA_PP_BONUSES, &ppBonuses);
}

// ==================================================
// Vanilla assets used by other screens
// ==================================================

void LoadHeldItemIcons(void)
{
    LoadSpriteSheet(&gSpriteSheet_HeldItem);
    LoadSpritePalette(&sSpritePalette_HeldItem);
}

void DrawHeldItemIconsForTrade(u8 *partyCounts, u8 *partySpriteIds, u8 whichParty)
{
    u16 i;
    enum Item item;

    switch (whichParty)
    {
    case TRADE_PLAYER:
        for (i = 0; i < partyCounts[TRADE_PLAYER]; i++)
        {
            item = GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HELD_ITEM);
            if (item != ITEM_NONE)
                CreateHeldItemSpriteForTrade(partySpriteIds[i], ItemIsMail(item));
        }
        break;
    case TRADE_PARTNER:
        for (i = 0; i < partyCounts[TRADE_PARTNER]; i++)
        {
            item = GetMonData(&gParties[B_TRAINER_OPPONENT_A][i], MON_DATA_HELD_ITEM);
            if (item != ITEM_NONE)
                CreateHeldItemSpriteForTrade(partySpriteIds[i + PARTY_SIZE], ItemIsMail(item));
        }
        break;
    }
}

static void CreateHeldItemSpriteForTrade(u8 spriteId, bool8 isMail)
{
    u8 subpriority = gSprites[spriteId].subpriority;
    u8 newSpriteId = CreateSprite(&sSpriteTemplate_HeldItem, 250, 170, subpriority - 1);

    gSprites[newSpriteId].x2 = 4;
    gSprites[newSpriteId].y2 = 10;
    gSprites[newSpriteId].callback = SpriteCB_HeldItem;
    gSprites[newSpriteId].data[7] = spriteId;
    StartSpriteAnim(&gSprites[newSpriteId], isMail);
    gSprites[newSpriteId].callback(&gSprites[newSpriteId]);
}

static void SpriteCB_HeldItem(struct Sprite *sprite)
{
    u8 otherSpriteId = sprite->data[7];

    if (gSprites[otherSpriteId].invisible)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
        sprite->x = gSprites[otherSpriteId].x + gSprites[otherSpriteId].x2;
        sprite->y = gSprites[otherSpriteId].y + gSprites[otherSpriteId].y2;
    }
}

void LoadPartyMenuAilmentGfx(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_StatusIcons);
    LoadSpritePalette(&sSpritePalette_StatusIcons);
}

#endif // UI_PARTY_MENU
