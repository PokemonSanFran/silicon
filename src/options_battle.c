#include "global.h"
#include "battle.h"
#include "item.h"
#include "options_battle.h"
#include "pokemon.h"
#include "battle_tower.h"
#include "pokemon_storage_system.h"
#include "ui_options_menu.h"
#include "constants/battle_string_ids.h"
#include "constants/hold_effects.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "constants/songs.h"
#include "sound.h"
#include "line_break.h"
#include "event_data.h"
#include "little_cup.h" // littlecup

// Battle Settings: Experience
static u32 GetBattleExperienceOption(void);
static bool32 IsMonMaxLevel(struct Pokemon);
static void CalcAndSetNewExp(struct BoxPokemon *, struct Pokemon,u32);
static u32 GetEVYield(u32, u16);
static void CheckAndCalcEVs(u32, u32, struct Pokemon, struct BoxPokemon *);
static u16 SetEVsIfMaxed(u16, u32, u8);
static u32 CalcNewEV(u32, struct Pokemon, u32, u32);
static bool32 HasAlreadyGivenPointsBoxMons(void);
static bool32 HasAlreadyPrintedGotExpMsg(void);

// Battle Settings: Whiteout
static u32 GetRespawnOptionValue(void);
static u32 IsWhiteoutSetToDeath(void);
static void GenerateGameOverMessage(u32 windowId, u32 fontId, u8* dest);
static bool8 PrintGameOverMessage(u8 taskId, u8 x, u8 y);
static void Task_PrintGameOverText(u8 taskId);
static void FieldCB_PrintGameOverText(void);
static bool32 TryToMoveMonFromStorageSystem(void);
static bool32 PlayerHasNoHealthyMons(void);

// Battle Settings: Bag Items
static bool32 ShouldTrainerTypeImpactItemUse(void);

// Battle Settings: Enemy Scaling
static u32 GetTrainerScalingOption(void);
static bool32 IsTrainerScalingOff(void);
static u32 CalcRawScaledLevel(u32, u32);
static u32 CalculatedScaledTrainerLevel(u32, u32);
static u32 GetScaledSpecies(u32);
static u32 NormalizeRawTrainerLevel(u32);

// Battle Settings: Points Message
static u32 GetPointsMessagesOption(void);

// Battle Settings: Mid Battle Evolution
static u32 GetMidBattleEvolutionOption(void);

// Battle Settings: Last Ball Used
static u32 GetLastUsedBallOption(void);
static u32 GetBestBallForBattle(void);
static void SetLastUsedBallOnSaveblock(u16);
static u32 GetLastUsedBallOnSaveblock(void);

// Battle Settings: Quick Run
static u32 GetQuickRunOption(void);
static bool32 IsQuickRunSetToL(void);

// Battle Settings: HP and EXP Speed
static u32 IsHPSpeedFast(void);
static u32 GetEXPSpeedOption(void);
static u32 GetHPSpeedOption(void);

// ***********************************************************************
// Battle Settings: Experience
// ***********************************************************************

static u32 GetBattleExperienceOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE];
}

bool32 IsExperienceOptionNotActive(void)
{
    return (GetBattleExperienceOption() != BATTLE_OPTION_EXPERIENCE_ACTIVE);
}

bool32 IsExperienceOptionAll(void)
{
    return (GetBattleExperienceOption() == BATTLE_OPTION_EXPERIENCE_ALL);
}

bool32 IsMonInvalid(struct Pokemon tempMon)
{
    if (GetMonData(&tempMon,MON_DATA_SPECIES_OR_EGG) == SPECIES_NONE)
        return TRUE;

    if (GetMonData(&tempMon, MON_DATA_IS_EGG))
        return TRUE;

    return FALSE;
}

static bool32 IsMonMaxLevel(struct Pokemon tempMon)
{
    return (GetMonData(&tempMon,MON_DATA_LEVEL) >= MAX_LEVEL);
}

u64 ApplyExpMultipliers(struct Pokemon tempMon,s32 experience)
{
    if (IsTradedMon(&tempMon))
        experience = (experience * 150) / 100;
    if (GetMonHoldEffect(&tempMon) == HOLD_EFFECT_LUCKY_EGG)
        experience = (experience * 150) / 100;
    if (IsMonPastEvolutionLevel(&tempMon))
        experience = (experience * 4915) / 4096;
    if (B_AFFECTION_MECHANICS == TRUE && GetMonFriendshipScore(&tempMon) >= FRIENDSHIP_50_TO_99)
        experience = (experience * 4915) / 4096;
    if (CheckBagHasItem(ITEM_EXP_CHARM, 1))
        experience = (experience * 150) / 100;

    return (GetExperienceExpMultiplerValue() * experience);
}

static void CalcAndSetNewExp(struct BoxPokemon *boxMon, struct Pokemon tempMon,u32 battleEXP)
{
    u32 origExp = GetBoxMonData(boxMon,MON_DATA_EXP);
    u64 totalExp = ApplyExpMultipliers(tempMon,battleEXP) + origExp;
    SetBoxMonData(boxMon,MON_DATA_EXP,&totalExp);
}

static u32 GetEVYield(u32 statIndex, u16 defeatedSpecies)
{
    switch(statIndex)
    {
        case STAT_HP: return gSpeciesInfo[defeatedSpecies].evYield_HP;
        case STAT_ATK: return gSpeciesInfo[defeatedSpecies].evYield_Attack;
        case STAT_DEF: return gSpeciesInfo[defeatedSpecies].evYield_Defense;
        case STAT_SPEED: return gSpeciesInfo[defeatedSpecies].evYield_Speed;
        case STAT_SPATK: return gSpeciesInfo[defeatedSpecies].evYield_SpAttack;
        default:
        case STAT_SPDEF: return gSpeciesInfo[defeatedSpecies].evYield_SpDefense;
    }
}

static void CheckAndCalcEVs(u32 newTotalEV, u32 defeatedSpecies, struct Pokemon tempMon, struct BoxPokemon *boxMon)
{
    u32 evYield, evs, statIndex;

    for (statIndex = STAT_HP; statIndex < NUM_STATS; statIndex++)
    {
        if (newTotalEV >= MAX_TOTAL_EVS)
            break;

        evYield = GetEVYield(statIndex, defeatedSpecies);
        if (!evYield)
            continue;

        evs = CalcNewEV(statIndex, tempMon, newTotalEV, evYield);
        SetBoxMonData(boxMon,(MON_DATA_HP_EV + statIndex),&evs);
        newTotalEV += evs;
    }
}

static u16 SetEVsIfMaxed(u16 evIncrease, u32 totalEVs, u8 evs)
{
    if (totalEVs + (s16)evIncrease > MAX_TOTAL_EVS)
        evIncrease = ((s16)evIncrease + MAX_TOTAL_EVS) - (totalEVs + evIncrease);

    if (evs + (s16)evIncrease > MAX_PER_STAT_EVS)
    {
        int val1 = (s16)evIncrease + MAX_PER_STAT_EVS;
        int val2 = evs + evIncrease;
        evIncrease = val1 - val2;
    }

    return evIncrease;
}

u32 GetMonItemHoldEffect(u16 heldItem)
{
    if (heldItem == ITEM_ENIGMA_BERRY_E_READER)
    {
        if (gMain.inBattle)
            return gEnigmaBerries[0].holdEffect;
        else
#ifndef FREE_ENIGMA_BERRY
            return gSaveBlock1Ptr->enigmaBerry.holdEffect;
#else
        return 0;
#endif
    }
    else
    {
        return GetItemHoldEffect(heldItem);
    }
}

static u32 CalcNewEV(u32 statIndex, struct Pokemon tempMon,  u32 totalEVs, u32 evYield)
{
    u32 heldItem, holdEffect, stat, bonus, evs;
    u32 evIncrease = 0, multiplier = 1;

    if (CheckPartyHasHadPokerus(&tempMon, 0))
        multiplier = 2;

    heldItem = GetMonData(&tempMon, MON_DATA_HELD_ITEM, 0);
    holdEffect = GetMonItemHoldEffect(heldItem);
    stat = GetItemSecondaryId(heldItem);
    bonus = GetItemHoldEffectParam(heldItem);

    if (holdEffect == HOLD_EFFECT_POWER_ITEM && stat == statIndex)
        evIncrease = (evYield + bonus) * multiplier;
    else
        evIncrease = evYield * multiplier;

    if (holdEffect == HOLD_EFFECT_MACHO_BRACE)
        evIncrease *= 2;

    evs = GetMonData(&tempMon, MON_DATA_HP_EV + statIndex, 0);
    evIncrease = SetEVsIfMaxed(evIncrease, totalEVs, evs);
    return (evs + evIncrease);
}

static bool32 HasAlreadyGivenPointsBoxMons(void)
{
    if (gBattleStruct->givenPointsBoxMons)
        return TRUE;

    return FALSE;
}

void ApplyPointsBoxMons(u32 battleEXP, u16 defeatedSpecies)
{
    u32 boxId, boxPosition, totalEVs;
    struct Pokemon tempMon;
    struct BoxPokemon *boxMon;

    if (!IsExperienceOptionAll() || HasAlreadyGivenPointsBoxMons())
        return;

    gBattleStruct->givenPointsBoxMons = TRUE;

    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            BoxMonAtToMon(boxId, boxPosition, &tempMon);

            if (IsMonInvalid(tempMon))
                continue;

            boxMon = GetBoxedMonPtr(boxId,boxPosition);

            if(IsFaintedBoxMon(boxMon))
                continue;

            totalEVs = GetMonEVCount(&tempMon);
            if (totalEVs < MAX_TOTAL_EVS)
                CheckAndCalcEVs(totalEVs,defeatedSpecies,tempMon,boxMon);

            if (IsMonMaxLevel(tempMon))
                continue;

            CalcAndSetNewExp(boxMon,tempMon,battleEXP);
        }
    }
}

static bool32 HasAlreadyPrintedGotExpMsg(void)
{
    if (gBattleStruct->teamGotExpMsgPrinted)
        return TRUE;

    return FALSE;
}

void PrintExpShareMessage(void)
{
    if(HasAlreadyPrintedGotExpMsg())
        return;

    if (!IsPointsMessagesOptionOn())
        return;

    gBattleStruct->teamGotExpMsgPrinted = TRUE;

    if (!IsExperienceOptionAll())
        PrepareStringBattle(STRINGID_PARTYGAINEDPOINTS, gBattleStruct->expGetterBattlerId);
    else
        PrepareStringBattle(STRINGID_ALLGAINEDPOINTS, gBattleStruct->expGetterBattlerId);
}

// ***********************************************************************
// Battle Settings: Experience Multiplier
// ***********************************************************************

u32 GetExperienceExpMultiplerValue(void)
{
    return (gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER]);
}

// ***********************************************************************
// Battle Settings: Individual Values
// ***********************************************************************
void Script_AreIndividualValuesDisabled(void)
{
    gSpecialVar_Result = AreIndividualValuesDisabled();
}

bool32 AreIndividualValuesDisabled(void)
{
#ifdef TESTING
    return FALSE;
#endif
    return !(gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_INDIVIDUAL_VALUES]);
}

// ***********************************************************************
// Battle Settings: Effort Values
// ***********************************************************************

void Script_AreEffortValuesEnabled(void)
{
    gSpecialVar_Result = AreEffortValuesEnabled();
}

bool32 AreEffortValuesEnabled(void)
{
   return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EFFORT_VALUES];
}

bool32 IsFieldForEffortValues(u32 field)
{
    if (field >= MON_DATA_HP_EV && field <= MON_DATA_SPDEF_EV)
        return TRUE;

    return FALSE;
}

u32 GetAdjustedEffortValues(void)
{
    return 0;
}

// ***********************************************************************
// Battle Settings: Whiteout
// ***********************************************************************

#include "task.h"
#include "menu.h"
#include "gba/macro.h"
#include "string_util.h"
#include "save.h"
#include "main.h"
#include "palette.h"
#include "constants/rgb.h"
#include "script.h"
#include "overworld.h"
#include "field_screen_effect.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"

static const struct WindowTemplate sWindowTemplate_GameOverText =
{
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 5,
    .width = 30,
    .height = 11,
    .paletteNum = 15,
    .baseBlock = 1,
};

static const u8 sGameOverTextColors[] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY };


#define tState      data[0]
#define tWindowId   data[1]
#define tPrintState data[2]

static u32 GetRespawnOptionValue(void)
{
    return (gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_WHITEOUT]);
}

static u32 IsWhiteoutSetToDeath(void)
{
    return (GetRespawnOptionValue() == BATTLE_OPTION_WHITEOUT_DEATH);
}

static void GenerateGameOverMessage(u32 windowId, u32 fontId, u8* dest)
{
    u32 screenLines = 10;
    u32 windowWidth = (GetWindowAttribute(windowId,WINDOW_WIDTH) * TILE_SIZE_1BPP)- 0;

    StringCopy(dest,COMPOUND_STRING("You have no Pokémon in the party or the PC that can battle. Your adventure is over. Thanks for playing!{PAUSE_UNTIL_PRESS}"));
    BreakStringNaive(dest, windowWidth, screenLines, fontId,HIDE_SCROLL_PROMPT);
}

static bool8 PrintGameOverMessage(u8 taskId, u8 x, u8 y)
{
    u8 windowId = gTasks[taskId].tWindowId;
    u32 fontId = FONT_NORMAL;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 speed = 1;

    switch (gTasks[taskId].tPrintState)
    {
    case 0:
        FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
        GenerateGameOverMessage(windowId,fontId,gStringVar4);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sGameOverTextColors, speed, gStringVar4);
        gTextFlags.canABSpeedUpPrint = FALSE;
        gTasks[taskId].tPrintState = 1;
        break;
    case 1:
        RunTextPrinters();
        if (!IsTextPrinterActive(windowId))
        {
            gTasks[taskId].tPrintState = 0;
            return TRUE;
        }
        break;
    }
    return FALSE;
}

static void Task_PrintGameOverText(u8 taskId)
{
    u8 windowId;

    switch (gTasks[taskId].tState)
    {
    case 0:
        windowId = AddWindow(&sWindowTemplate_GameOverText);
        gTasks[taskId].tWindowId = windowId;
        Menu_LoadStdPalAt(BG_PLTT_ID(15));
        FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
        gTasks[taskId].tState++;
        break;
    case 1:
        if (PrintGameOverMessage(taskId, 2, 8))
            gTasks[taskId].tState++;
        break;
    case 2:
        if (!JOY_NEW(A_BUTTON) && !JOY_NEW(B_BUTTON))
            break;

        windowId = gTasks[taskId].tWindowId;
        ClearWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_MAP);
        RemoveWindow(windowId);
        CpuFastFill16(RGB_BLACK, gPlttBufferFaded, PLTT_SIZE);
        if(IsWhiteoutSetToDeath())
            ClearSaveData();
        DoSoftReset();
        break;
    }
}

static void FieldCB_PrintGameOverText(void)
{
    u8 taskId;

    LockPlayerFieldControls();
    CpuFastFill16(RGB_BLACK, gPlttBufferFaded, PLTT_SIZE);
    taskId = CreateTask(Task_PrintGameOverText, 10);
    gTasks[taskId].tState = 0;
}

#undef tState
#undef tWindowId
#undef tPrintState

static bool32 TryToMoveMonFromStorageSystem(void)
{
    u32 i, j;

    if (CalculatePlayerPartyCount() >= 1)
        return FALSE;

    for (i = 0; i < TOTAL_BOXES_COUNT; i++)
    {
        for (j = 0; j < IN_BOX_COUNT; j++)
        {
            if (GetBoxMonData(&gPokemonStoragePtr->boxes[i][j], MON_DATA_SANITY_HAS_SPECIES)
             && !GetBoxMonData(&gPokemonStoragePtr->boxes[i][j], MON_DATA_SANITY_IS_EGG)
             && !IsFaintedBoxMon(&gPokemonStoragePtr->boxes[i][j]))
            {
                BoxMonAtToMon(i, j, &gPlayerParty[0]);
                ZeroBoxMonAt(i, j);
                return TRUE;
            }
        }
    }

    return FALSE;
}

static bool32 PlayerHasNoHealthyMons(void)
{
    return (CalculatePlayerPartyCount() == 0 && !TryToMoveMonFromStorageSystem());
}

void SetUpFieldCallbackOnWhiteOut(void)
{
    if (PlayerHasNoHealthyMons() || (IsWhiteoutSetToDeath()))
        gFieldCallback = FieldCB_PrintGameOverText;
    else
        gFieldCallback = FieldCB_WarpExitFadeFromBlack;
}

// ***********************************************************************
// Battle Settings: Fainted Mon
// ***********************************************************************

#include "party_menu.h"
#include "constants/party_menu.h"

u32 GetFaintedMonOptionValue(void)
{
    return (gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_FAINTED_MON]);
}

void SetFaintedMonBit(struct Pokemon *mon)
{
    bool8 value = TRUE;
    SetMonData(mon, MON_DATA_IS_FAINTED, &value);
}

u32 IsFaintedMon(struct Pokemon *mon)
{
    return (GetFaintedMonOptionValue() != BATTLE_OPTION_FAINTED_MON_ALLOWED && GetMonData(mon, MON_DATA_IS_FAINTED));
}

u32 IsFaintedBoxMon(struct BoxPokemon *boxMon)
{
    return (GetFaintedMonOptionValue() != BATTLE_OPTION_FAINTED_MON_ALLOWED && GetBoxMonData(boxMon, MON_DATA_IS_FAINTED));
}

void PerformPlayerFaintedMonOperations(struct Pokemon *mon)
{
    u32 species = GetMonData(mon, MON_DATA_SPECIES_OR_EGG, NULL);

    if (!IsFaintedMon(mon))
        return;

    if (species != SPECIES_EGG && species != SPECIES_NONE)
    {
        if (GetFaintedMonOptionValue() == BATTLE_OPTION_FAINTED_MON_BOX)
            CopyMonToPC(mon);
        ZeroMonData(mon);
        CompactPartySlots();
    }
}

// ***********************************************************************
// Battle Settings: Difficulty
// ***********************************************************************

enum optionBattleDifficulty GetBattleDifficulty(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_BATTLE_DIFFICULTY];
}

// ***********************************************************************
// Battle Settings: Bag Items
// ***********************************************************************

#include "battle_setup.h"
#include "data.h"
#include "constants/item.h"
#include "glass.h"

u32 GetBagItemsOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_BAG_ITEMS];
}

static bool32 IsTrainerTypeNotRegular(u32 trainerId)
{
    return (GetTrainerType(gTrainerBattleParameter.params.opponentA) != GLASS_TRAINER_TYPE_REGULAR);
}

static bool32 ShouldTrainerTypeImpactItemUse(void)
{
    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER))
        return FALSE;

    if (IsTrainerTypeNotRegular(gTrainerBattleParameter.params.opponentA))
        return TRUE;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS))
        return FALSE;

    return (IsTrainerTypeNotRegular(gTrainerBattleParameter.params.opponentB));
}

bool32 CanUseBagItems(u16 itemId)
{
    if ((GetItemPocket(itemId) != POCKET_POKE_BALLS))
    {
        switch (GetBagItemsOption())
        {
        case BATTLE_OPTION_BAG_ITEMS_NO_BOSS:
            return !ShouldTrainerTypeImpactItemUse() ? TRUE : FALSE;
        case BATTLE_OPTION_BAG_ITEMS_NO_TRAINER:
            return !(gBattleTypeFlags & BATTLE_TYPE_TRAINER);
        case BATTLE_OPTION_BAG_ITEMS_4_ONLY:
            return (gBattleStruct->playerBattleItemCount < 4);
        case BATTLE_OPTION_BAG_ITEMS_NO_ITEMS:
            return FALSE;
        default:
            return TRUE;
        }
    }
    return TRUE;
}

void TryToIncreaseBattleItemUseCount(u16 itemId)
{
    if (GetItemPocket(itemId) != POCKET_POKE_BALLS)
        gBattleStruct->playerBattleItemCount++;
}

// ***********************************************************************
// Battle Settings: Level
// ***********************************************************************

#include "event_data.h"

u32 GetLevelOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL];
}

u32 GetCurrentPSFLevelCap(void)
{
    if (GetLevelOption() != BATTLE_OPTION_LEVEL_CAP)
        return MAX_LEVEL;

    switch (VarGet(B_LEVEL_CAP_VARIABLE))
    {
        case 0: return 25;
        case 1: return 28;
        case 2: return 31;
        case 3: return 34;
        case 4: return 37;
        case 5: return 40;
        case 6: return 43;
        case 7: return 46;
        case 8: return 49;
        case 9: return 52;
        case 10: return 55;
        case 11: return 58;
        case 12: return 61;
        case 13: return 64;
        case 14: return 67;
        case 15: return 70;
        case 16: return 73;
        case 17: return 74;
        case 18: return 75;
        case 19: return 76;
        case 20: return 77;
        case 21: return 79;
        case 22: return 81;
        case 23: return 83;
        case 24: return 85;
        case 25: return 87;
        case 26: return 89;
        default: return MAX_LEVEL;
    }
}

// ***********************************************************************
// Battle Settings: Opponent Items
// ***********************************************************************

static u32 GetOpponentsItemsOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_OPPONENTS_ITEMS];
}

u32 CanAIUseItems(void)
{
    if (GetOpponentsItemsOption() == BATTLE_OPTION_OPPONENTS_ITEMS_DISABLED)
        return FALSE;

    return TRUE;
}

// ***********************************************************************
// Battle Settings: Center Healing
// ***********************************************************************

static u32 GetCenterHealingOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_CENTER_HEALING];
}

u32 CanHealPlayer(void)
{
    if (GetCenterHealingOption() == BATTLE_OPTION_CENTER_HEALING_DISABLED && VarGet(VAR_0x8000) != PLAYER_CAN_HEAL)
        return FALSE;

    return TRUE;
}

// ***********************************************************************
// Battle Settings: Take Wild Items
// ***********************************************************************

u32 GetTakeWildItemsOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_TAKE_WILD_ITEMS];
}

// ***********************************************************************
// Battle Settings: Move Healing
// ***********************************************************************

#include "constants/battle_move_effects.h"

static u32 GetMoveHealingOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_MOVE_HEALING];
}

static bool32 IsBattlerOwnedByPlayer(u8 battlerId)
{
    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER
     && GetBattlerPosition(battlerId) == B_POSITION_PLAYER_RIGHT
     && IsOtherTrainer(gBattleMons[battlerId].otId, gBattleMons[battlerId].otName))
        return FALSE;

    return TRUE;
}

u32 IsPlayerAllowedToUseHealingMoves(u8 battlerId, u16 moveId)
{
    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER
     && GetMoveHealingOption() == BATTLE_OPTION_MOVE_HEALING_DISABLED
     && IsBattlerOwnedByPlayer(battlerId))
    {
        switch (gMovesInfo[moveId].effect)
        {
        case EFFECT_ABSORB:
        case EFFECT_STRENGTH_SAP:
        case EFFECT_DREAM_EATER:
        case EFFECT_MORNING_SUN:
        case EFFECT_SYNTHESIS:
        case EFFECT_MOONLIGHT:
        case EFFECT_RESTORE_HP:
        case EFFECT_REST:
        case EFFECT_ROOST:
        case EFFECT_HEALING_WISH:
        case EFFECT_WISH:
        case EFFECT_HEAL_PULSE:
        case EFFECT_JUNGLE_HEALING:
            return FALSE;
        default:
            return TRUE;
        }
    }

    return TRUE;
}

// ***********************************************************************
// Battle Settings: First Pokemon Catch
// ***********************************************************************

#include "battle_script_commands.h"
#include "pokedex.h"
#include "constants/map_types.h"

u32 GetFirstPokemonCatchOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_FIRST_POKEMON_CATCH];
}

bool32 IsPlayerAllowedToCatchBattler(u8 battlerId)
{
    struct Pokemon *party = GetBattlerParty(battlerId);
    struct Pokemon *mon = &party[gBattlerPartyIndexes[battlerId]];

    if (IsMonShiny(mon))
        return TRUE;

    switch (GetFirstPokemonCatchOption())
    {
    case BATTLE_OPTION_FIRST_POKEMON_CATCH_DEFAULT:
        return TRUE;
    case BATTLE_OPTION_FIRST_POKEMON_CATCH_FIRST_ONLY:
    case BATTLE_OPTION_FIRST_POKEMON_CATCH_DUPLICATE:
        if (gSaveBlock3Ptr->firstPokemonCatchFlags[gSaveBlock1Ptr->location.mapGroup])
            return FALSE;
        break;
    }

    return TRUE;
}

void TryToSetFirstPokemonCatchFlag(void)
{
    if (GetFirstPokemonCatchOption() == BATTLE_OPTION_FIRST_POKEMON_CATCH_FIRST_ONLY && GetCurrentMapType() == MAP_TYPE_ROUTE)
        gSaveBlock3Ptr->firstPokemonCatchFlags[gSaveBlock1Ptr->location.mapGroup] = TRUE;
    else if (GetFirstPokemonCatchOption() == BATTLE_OPTION_FIRST_POKEMON_CATCH_DUPLICATE && GetCurrentMapType() == MAP_TYPE_ROUTE && gBattleOutcome == B_OUTCOME_CAUGHT)
        gSaveBlock3Ptr->firstPokemonCatchFlags[gSaveBlock1Ptr->location.mapGroup] = TRUE;
}

// ***********************************************************************
// Battle Settings: Item Healing
// ***********************************************************************

#include "item_use.h"

static const u16 sHealingHeldItemEffects[HOLD_EFFECT_COUNT] =
{
    HOLD_EFFECT_RESTORE_HP, HOLD_EFFECT_CURE_PAR, HOLD_EFFECT_CURE_SLP, HOLD_EFFECT_CURE_PSN, HOLD_EFFECT_CURE_BRN, HOLD_EFFECT_CURE_FRZ, HOLD_EFFECT_RESTORE_PP,
    HOLD_EFFECT_CURE_CONFUSION, HOLD_EFFECT_CURE_STATUS, HOLD_EFFECT_CONFUSE_SPICY, HOLD_EFFECT_CONFUSE_DRY, HOLD_EFFECT_CONFUSE_SWEET, HOLD_EFFECT_CONFUSE_BITTER,
    HOLD_EFFECT_CONFUSE_SOUR, HOLD_EFFECT_MENTAL_HERB, HOLD_EFFECT_SHELL_BELL, HOLD_EFFECT_BIG_ROOT, HOLD_EFFECT_ENIGMA_BERRY, HOLD_EFFECT_RESTORE_PCT_HP,
};

static u32 GetItemHealingOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_ITEM_HEALING];
}

bool32 IsPlayerAllowedToUseHealingItems(u16 itemId, bool8 checkFieldUse, bool8 checkBattleUse, bool8 checkHeldEffect)
{
    ItemUseFunc itemUseFunc = GetItemFieldFunc(itemId);
    u16 itemBattleUsageEffect = GetItemBattleUsage(itemId);
    u32 i;
    u16 itemHeldEffect = GetItemHoldEffect(itemId);

    if (GetItemHealingOption() == BATTLE_OPTION_ITEM_HEALING_DISABLED)
    {
        if (checkFieldUse)
        {
            if (itemUseFunc == ItemUseOutOfBattle_Medicine
             || itemUseFunc == ItemUseOutOfBattle_PPRecovery
             || itemUseFunc == ItemUseOutOfBattle_SacredAsh
             || itemUseFunc == ItemUseOutOfBattle_PPUp
             || itemUseFunc == ItemUseOutOfBattle_PPUp)
                return FALSE;
        }

        if (checkBattleUse)
        {
            if (itemBattleUsageEffect == EFFECT_ITEM_RESTORE_HP
             || itemBattleUsageEffect == EFFECT_ITEM_CURE_STATUS
             || itemBattleUsageEffect == EFFECT_ITEM_HEAL_AND_CURE_STATUS
             || itemBattleUsageEffect == EFFECT_ITEM_REVIVE
             || itemBattleUsageEffect == EFFECT_ITEM_RESTORE_PP
             || itemBattleUsageEffect == EFFECT_ITEM_ENIGMA_BERRY_EREADER)
                return FALSE;
        }

        if (checkHeldEffect)
        {
            for (i = HOLD_EFFECT_NONE; i < ARRAY_COUNT(sHealingHeldItemEffects); i++)
            {
                if (itemHeldEffect != sHealingHeldItemEffects[i])
                    continue;
                else
                    return FALSE;
            }
        }
    }

    return TRUE;
}

// ***********************************************************************
// Battle Settings: Level Scaling
// ***********************************************************************

static u32 GetTrainerScalingOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_TRAINER_SCALING];
}

static bool32 IsTrainerScalingNotParty(void)
{
    return (GetTrainerScalingOption() != BATTLE_OPTION_TRAINER_SCALING_PARTY);
}

static bool32 IsTrainerScalingOff(void)
{
    return (GetTrainerScalingOption() == BATTLE_OPTION_TRAINER_SCALING_OFF);
}

u32 HandleScaledLevel(u32 origEnemyLevel, u32 origNumEnemyMon)
{
   if (IsTrainerScalingOff())
       return origEnemyLevel;

   if (IsCurrentBattleLittleCup())
       return LITTLE_CUP_LEVEL;

   //if (IsPlayerUsingGlassOnDefeatedTrainer())
       //return origEnemyLevel;
    // PSF TODO when player is accessing the Google Glass but has already beaten the Trainer, their original unsacled level should show, otherwise show the scaled level. We can acheieve this with a temp var/flag or maybe even a new battleTypeFlags

   return CalculatedScaledTrainerLevel(origEnemyLevel, origNumEnemyMon);
}

u32 HandleScaledSpecies(u32 origSpecies)
{
    if (IsTrainerScalingNotParty())
        return origSpecies;

    return GetScaledSpecies(origSpecies);
}

static u32 GetScaledSpecies(u32 origSpecies)
{
    // PSF TODO Update with formula to figure out when to evolve the Pokemonn
    return origSpecies;
}

#define TRAINER_SCALING_THRESHOLD 5
#define TRAINER_SCALING_PARTY_MULTIPLIER 2

static u32 AveragePlayerMaxEnemyMonLevels(u32 enemyMonLevel, u32 playerMaxLevel)
{
    return ((enemyMonLevel + playerMaxLevel) / 2);
}

static u32 GetPartySizeDifference(u32 numPlayerMon, u32 numEnemyMon)
{
    return (numPlayerMon - numEnemyMon);
}

static u32 CalcRawScaledLevel(u32 enemyMonLevel, u32 numEnemyMon)
{
    u32 numPlayerMon = 0, difference = 0;
    u32 playerMaxLevel = GetHighestLevelInPlayerParty();
    u32 average = AveragePlayerMaxEnemyMonLevels(enemyMonLevel,playerMaxLevel);

    if (enemyMonLevel > playerMaxLevel)
        return average;

    numPlayerMon = CalculatePartyCount(gPlayerParty);
    difference = GetPartySizeDifference(numPlayerMon, numEnemyMon);

    if ((playerMaxLevel - enemyMonLevel) <= TRAINER_SCALING_THRESHOLD)
        return (average + difference);

    return (average + (TRAINER_SCALING_PARTY_MULTIPLIER * difference));
}

static u32 NormalizeRawTrainerLevel(u32 rawScaledLevel)
{
    if (rawScaledLevel <= MIN_LEVEL)
        return MIN_LEVEL;

    if (rawScaledLevel >= MAX_LEVEL)
        return MAX_LEVEL;

    return rawScaledLevel;
}

static u32 CalculatedScaledTrainerLevel(u32 origEnemyLevel, u32 origNumEnemyMon)
{
    u32 rawScaledLevel = CalcRawScaledLevel(origEnemyLevel, origNumEnemyMon);

    /*
    DebugPrintf("origEnemyLevel is %d",origEnemyLevel);
    DebugPrintf("playerMaxLevel is %d",playerMaxLevel);
    DebugPrintf("numPlayerMon is %d",numPlayerMon);

    DebugPrintf("rawScaledLevel is %d",rawScaledLevel);
    */

    return NormalizeRawTrainerLevel(rawScaledLevel);
}


// ***********************************************************************
// Battle Settings: Points Messages
// ***********************************************************************

static u32 GetPointsMessagesOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_POINTS_MESSAGES];
}

bool32 IsPointsMessagesOptionOn(void)
{
    return (GetPointsMessagesOption() == BATTLE_OPTION_POINTS_MESSAGES_ON);
}

void PrintMonRecievedEffortValues(bool32 wasSentOut, u8* expMonId)
{
    // PSF TODO: This returns 0 which is STRINGID_INTROMSG, which prints "Wild Poemon appeared!". When the option is off, the message is skipped entirely, with no delay. Right now, manually incrementing the switch case causes a delay, as if the message was there anyways.
    if (!IsPointsMessagesOptionOn())
        return;

    if (!wasSentOut || gBattleStruct->evsGiven == 0)
        return;

    PREPARE_MON_NICK_WITH_PREFIX_BUFFER(gBattleTextBuff1, gBattleStruct->expGetterBattlerId, *expMonId);
    PREPARE_WORD_NUMBER_BUFFER(gBattleTextBuff3, 6, gBattleStruct->evsGiven);
    PrepareStringBattle(STRINGID_PKMNGAINEDEVS, gBattleStruct->expGetterBattlerId);
}

u32 PrintMonRecievedExperience(u8* expMonId, bool32 printBoosted)
{
    if (!IsPointsMessagesOptionOn())
        return STRINGID_COUNT;

    PREPARE_MON_NICK_WITH_PREFIX_BUFFER(gBattleTextBuff1, gBattleStruct->expGetterBattlerId, *expMonId);
    PREPARE_STRING_BUFFER(gBattleTextBuff2, (printBoosted == TRUE) ? STRINGID_ABOOSTED : STRINGID_EMPTYSTRING3);
    PREPARE_WORD_NUMBER_BUFFER(gBattleTextBuff3, 6, gBattleStruct->battlerExpReward);
    return STRINGID_PKMNGAINEDEXP;
}

u32 PrintMonRecievedEffortAndExperience(u8* expMonId, bool32 printBoosted)
{
    if (!IsPointsMessagesOptionOn())
        return STRINGID_COUNT;

    PREPARE_MON_NICK_WITH_PREFIX_BUFFER(gBattleTextBuff1, gBattleStruct->expGetterBattlerId, *expMonId);
    PREPARE_WORD_NUMBER_BUFFER(gBattleTextBuff2, 6, gBattleStruct->battlerExpReward);
    PREPARE_WORD_NUMBER_BUFFER(gBattleTextBuff3, 6, gBattleStruct->evsGiven);
    return (printBoosted == TRUE) ? STRINGID_PKMNGAINEDPOINTSBOOSTED : STRINGID_PKMNGAINEDPOINTS;
}

// ***********************************************************************
// Battle Settings: Mid Battle Evolution
// ***********************************************************************

static u32 GetMidBattleEvolutionOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_MID_BATTLE_EVOLUTION];
}

bool32 IsMidBattleEvolutionOn(void)
{
    return (GetMidBattleEvolutionOption() == BATTLE_OPTION_MID_BATTLE_EVOLUTION_ON);
}

// ***********************************************************************
// Battle Settings: Last Ball Used
// ***********************************************************************

static u32 GetLastUsedBallOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_LAST_USED_BALL];
}

bool32 IsLastUsedBallOn(void)
{
    return (GetLastUsedBallOption() != BATTLE_OPTION_BALL_OFF);
}

bool32 IsLastUsedBallOptionAlways(void)
{
    return (GetLastUsedBallOption() == BATTLE_OPTION_BALL_ALWAYS);
}

bool32 IsLastUsedBallOptionBest(void)
{
    return (GetLastUsedBallOption() == BATTLE_OPTION_BALL_BEST);
}

bool32 IsLastUsedBallOptionAfter(void)
{
    return (GetLastUsedBallOption() == BATTLE_OPTION_BALL_AFTER);
}

bool32 IsLastUsedBallOptionAfterAndLastBallIsNone(void)
{
    if (!IsLastUsedBallOptionAfter())
        return FALSE;

    return gLastUsedBall == ITEM_NONE;
}

static u32 GetBestBallForBattle(void)
{
    u32 i;
    struct BagPocket *ballsPocket = &gBagPockets[POCKET_POKE_BALLS - 1];
    u32 odds = 0, newOdds = 0, bestBall = ITEM_NONE;
    u8 leftAtkFlankId = GetBattlerPosition(B_POSITION_PLAYER_LEFT);
    u8 rightAtkFlankId = GetBattlerPosition(B_POSITION_PLAYER_RIGHT);
    u8 atkId = (IsBattlerAlive(leftAtkFlankId)) ? leftAtkFlankId : rightAtkFlankId;
    u8 defId = GetCatchingBattler();

    if (gMain.inBattle)
    {
        for (i = 0; i < ballsPocket->capacity; i++)
        {
            if (ballsPocket->itemSlots[i].itemId == ITEM_NONE)
                break;
            if (ballsPocket->itemSlots[i].itemId == ITEM_MASTER_BALL)
                continue;

            odds = GetCatchingOdds(atkId, defId, ballsPocket->itemSlots[i].itemId);
            if (odds > newOdds)
            {
                newOdds = odds;
                bestBall = ballsPocket->itemSlots[i].itemId;
            }
        }
    }

    return bestBall;
}

bool32 ShouldCalculateBallToDisplay(void)
{
    if (IsLastUsedBallOptionBest())
        return TRUE;

    if (!gLastThrownBall)
        return TRUE;

    if (!CheckBagHasItem(gLastThrownBall,1))
        return TRUE;

    return FALSE;
}

u32 GetBallToDisplay(void)
{
    if (IsLastUsedBallOptionAlways() || IsLastUsedBallOptionAfter())
        return GetLastUsedBallOnSaveblock();
    else if (IsLastUsedBallOptionBest())
        return GetBestBallForBattle();

    return (gBagPockets[POCKET_POKE_BALLS].itemSlots[0].itemId);
}

static void SetLastUsedBallOnSaveblock(u16 ball)
{
    gSaveBlock3Ptr->lastUsedBall = ball;
}

static u32 GetLastUsedBallOnSaveblock(void)
{
    return gSaveBlock3Ptr->lastUsedBall;
}

void HandleLastUsedBallOnSaveblock(void)
{
    if (IsLastUsedBallOptionAlways() || IsLastUsedBallOptionAfter())
        SetLastUsedBallOnSaveblock(gLastUsedItem);
}

// ***********************************************************************
// Battle Settings: Quick Run
// ***********************************************************************

static u32 GetQuickRunOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_QUICK_RUN];
}

static bool32 IsQuickRunSetToL(void)
{
    return (GetQuickRunOption() == BATTLE_OPTION_QUICK_RUN_L);
}

bool32 IsQuickRunSetToBA(void)
{
    return (GetQuickRunOption() == BATTLE_OPTION_QUICK_RUN_B_AND_A);
}

void AttemptFleeWithL(u32 battler, u32 mode)
{
    if(!IsQuickRunSetToL())
        return;

    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER))
        return;

    PlaySE(SE_SELECT);
    TryHideLastUsedBall();
    BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, mode, 0);

    if (mode == B_ACTION_RUN)
        PlayerBufferExecCompleted(battler);
    else
        SafariBufferExecCompleted(battler);
}

// ***********************************************************************
// Battle Settings: HP and EXP Speed
// ***********************************************************************

static u32 GetHPSpeedOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_HP_SPEED];
}

static u32 GetEXPSpeedOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_SPEED];
}

static u32 IsHPSpeedFast(void)
{
    return GetHPSpeedOption() == BATTLE_OPTION_BAR_SPEED_FAST;
}

bool32 IsBarOptionInstant(u8 whichBar)
{
    u32 isInstant = (whichBar == HEALTH_BAR) ? GetHPSpeedOption() : GetEXPSpeedOption();

    return (isInstant == BATTLE_OPTION_BAR_SPEED_INSTANT);
}

#define B_HEALTHBAR_PIXELS 48
#define B_EXPBAR_PIXELS 64

u32 GetHPFraction(u8 battlerId)
{
    if (IsHPSpeedFast())
        return max(gBattleSpritesDataPtr->battleBars[battlerId].maxValue / (B_HEALTHBAR_PIXELS / 2), 1);
    else
        return 1;
}

s32 SetInstantBarMove(struct BattleBarInfo *bar)
{
    bar->oldValue -= bar->receivedValue;
    if (bar->oldValue > bar->maxValue)
        bar->oldValue = bar->maxValue;
    if (bar->oldValue < 0)
        bar->oldValue = 0;

    bar->receivedValue = 0;
    return bar->oldValue;
}

u32 GetEXPScale(void)
{
    switch (GetEXPSpeedOption())
    {
        default:
        case BATTLE_OPTION_BAR_SPEED_NORMAL: return B_EXPBAR_PIXELS;
        case BATTLE_OPTION_BAR_SPEED_FAST: return (B_EXPBAR_PIXELS / 8) * 2;
        case BATTLE_OPTION_BAR_SPEED_INSTANT: return (B_EXPBAR_PIXELS / 8) * 0;
    }
}

// ***********************************************************************
// Battle Settings: Intro
// ***********************************************************************

enum optionBattleIntro GetBattleIntroSkip(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_INTRO];
}

// ***********************************************************************
// Battle Settings: Nickname
// ***********************************************************************

u32 GetNicknameOption(void)
{
    return gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_NICKNAME];
}

bool32 IsMonNicknamed(struct Pokemon *mon)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    u8 nickname[POKEMON_NAME_BUFFER_SIZE];

    GetMonData(mon, MON_DATA_NICKNAME, nickname);
    return (StringCompare(GetSpeciesName(species), nickname));
}

bool32 IsChosenMonNicknamed(void)
{
    return IsMonNicknamed(&gPlayerParty[gSpecialVar_0x8004]);
}
