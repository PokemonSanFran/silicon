#include "global.h"
#include "event_data.h"
#include "quest_logic.h"
#include "overworld.h"
#include "tv.h"
#include "strings.h"
#include "party_menu.h"
#include "script_pokemon_util.h"
#include "item.h"
#include "battle.h"
#include "string_util.h"
#include "silicon_battle_frontier.h"

u16 SiliconFrontier_GetNumberBattles(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType);
void SiliconFrontier_SetNumberBattles(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, u32 value);
u16 SiliconFrontier_GetNumberAllBattles(void);
u16 SiliconFrontier_GetCurrentStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType);
void SiliconFrontier_SetCurrentStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, u32 value);
u16 SiliconFrontier_GetLongestStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType);
void SiliconFrontier_SetLongestStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, u32 value);
enum SiliconFrontierPartner SiliconFrontier_GetLongestStreakPartner(enum SiliconFrontierFacility facility);
void SiliconFrontier_SetLongestStreakPartner(enum SiliconFrontierFacility facility, enum SiliconFrontierPartner partner);
struct RentalMon SiliconFrontier_GetPlayerFactoryRentalMon(enum SiliconFrontierChallengeType challengeType, u32 slot);
void SiliconFrontier_SetPlayerFactoryRentalMon(enum SiliconFrontierChallengeType challengeType, u32 slot, struct RentalMon originalMon);
enum SiliconFrontierPartner SiliconFrontier_GetCurrentPartner(enum SiliconFrontierChallengeType challengeType);
void SiliconFrontier_SetCurrentPartner(enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierPartner currentPartner);
u8 SiliconFrontier_GetRemainingHeals(void);
void SiliconFrontier_SetRemainingHeals(u32 value);
void SiliconFrontier_ResetRemainingHeals(void);
void SiliconFrontier_DecreaseRemainingHeals(void);
void SiliconFrontier_AllowRecordedBattle(void);
void SiliconFrontier_DisableRecordedBattle(void);
bool32 SiliconFrontier_CanBattleBeRecorded(void);
void SiliconFrontier_SetSelectedPartyMon(u32 saveBlockSlot, u32 partySlot);
u32 SiliconFrontier_GetSelectedPartyMon(u32 saveBlockSlot);
void SiliconFrontier_SetFacilityToVarFromMap(void);
enum SiliconFrontierFacility SiliconFrontier_GetFacilityFromMap(void);
void SiliconFrontier_ResetCurrentChallenge(void);
void SiliconFrontier_SetCurrentChallengeFromVars(void);
void SiliconFrontier_SetCurrentChallenge(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType);

#include "data/silicon_frontier/facilities.h"
#include "data/silicon_frontier/trainers.h"

u16 SiliconFrontier_GetNumberBattles(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType)
{
    return gSaveBlock2Ptr->frontier.numBattles[facility][challengeType];
}

void SiliconFrontier_SetNumberBattles(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, u32 value)
{
    gSaveBlock2Ptr->frontier.numBattles[facility][challengeType] = value;
}

u16 SiliconFrontier_GetNumberAllBattles(void)
{
    u32 total = 0;
    for (enum SiliconFrontierFacility facility = 0; facility < SILICON_FACILITY_COUNT; facility++)
    {
        for (enum SiliconFrontierChallengeType type = 0; type < SILICON_FRONTIER_CHALLENGE_TYPE_COUNT; type++)
        {
            total += SiliconFrontier_GetNumberBattles(facility,type);
        }
    }

    return min(total, MAX_u32);
}

u16 SiliconFrontier_GetCurrentStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType)
{
    return gSaveBlock2Ptr->frontier.streakData[facility][challengeType].currentStreak;
}

void SiliconFrontier_SetCurrentStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, u32 value)
{
    gSaveBlock2Ptr->frontier.streakData[facility][challengeType].currentStreak = value;
}

u16 SiliconFrontier_GetLongestStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType)
{
    return gSaveBlock2Ptr->frontier.streakData[facility][challengeType].longestStreak;
}

void SiliconFrontier_SetLongestStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, u32 value)
{
    gSaveBlock2Ptr->frontier.streakData[facility][challengeType].longestStreak = value;
}

enum SiliconFrontierPartner SiliconFrontier_GetLongestStreakPartner(enum SiliconFrontierFacility facility)
{
    return gSaveBlock2Ptr->frontier.streakData[facility][SILICON_FRONTIER_CHALLENGE_TYPE_MULTI].longestStreakPartner;
}

void SiliconFrontier_SetLongestStreakPartner(enum SiliconFrontierFacility facility, enum SiliconFrontierPartner partner)
{
    gSaveBlock2Ptr->frontier.streakData[facility][SILICON_FRONTIER_CHALLENGE_TYPE_MULTI].longestStreakPartner = partner;
}

struct RentalMon SiliconFrontier_GetPlayerFactoryRentalMon(enum SiliconFrontierChallengeType challengeType, u32 slot)
{
    return gSaveBlock2Ptr->frontier.factoryRentalMons[challengeType][slot];
}

void SiliconFrontier_SetPlayerFactoryRentalMon(enum SiliconFrontierChallengeType challengeType, u32 slot, struct RentalMon originalMon)
{
    return;
    // should just copy into the slot
}

enum SiliconFrontierPartner SiliconFrontier_GetCurrentPartner(enum SiliconFrontierChallengeType challengeType)
{
    return gSaveBlock2Ptr->frontier.currentPartner[challengeType];
}

void SiliconFrontier_SetCurrentPartner(enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierPartner currentPartner)
{
    gSaveBlock2Ptr->frontier.currentPartner[challengeType] = currentPartner;
}

u8 SiliconFrontier_GetRemainingHeals(void)
{
    return gSaveBlock2Ptr->frontier.remainingSparringHeals;
}

void SiliconFrontier_SetRemainingHeals(u32 value)
{
    gSaveBlock2Ptr->frontier.remainingSparringHeals = value;
}

void SiliconFrontier_ResetRemainingHeals(void)
{
    SiliconFrontier_SetRemainingHeals(RESTRICTED_SPARRING_MAX_HEALS_COUNT);
}

void SiliconFrontier_DecreaseRemainingHeals(void)
{
    u32 heals = SiliconFrontier_GetRemainingHeals();

    if (heals > 0)
        heals--;

    SiliconFrontier_SetRemainingHeals(heals);
}

void SiliconFrontier_AllowRecordedBattle(void)
{
    gSaveBlock2Ptr->frontier.disableRecordBattle = FALSE;
}

void SiliconFrontier_DisableRecordedBattle(void)
{
    gSaveBlock2Ptr->frontier.disableRecordBattle = TRUE;
}

bool32 SiliconFrontier_CanBattleBeRecorded(void)
{
    return (gSaveBlock2Ptr->frontier.disableRecordBattle == FALSE);
}

void SiliconFrontier_SetSelectedPartyMon(u32 saveBlockSlot, u32 partySlot)
{
    gSaveBlock2Ptr->frontier.selectedPartyMons[saveBlockSlot] = partySlot;
}

u32 SiliconFrontier_GetSelectedPartyMon(u32 saveBlockSlot)
{
    return gSaveBlock2Ptr->frontier.selectedPartyMons[saveBlockSlot];
}

void SiliconFrontier_SetFacilityToVarFromMap(void)
{
    VarSet(VAR_0x8006,SiliconFrontier_GetFacilityFromMap());
}

enum SiliconFrontierFacility SiliconFrontier_GetFacilityFromMap(void)
{
    for (enum SiliconFrontierFacility facility = 0; facility < SILICON_FACILITY_COUNT; facility++)
        if (GetCurrentRegionMapSectionId() == gSiliconFrontierData[facility].mapsec)
            return facility;

    return SILICON_FACILITY_NONE;
}

void SiliconFrontier_ResetCurrentChallenge(void)
{
    SiliconFrontier_SetCurrentChallenge(SILICON_FACILITY_NONE,SILICON_FRONTIER_CHALLENGE_TYPE_NONE);
}


void SiliconFrontier_SetCurrentChallengeFromVars(void)
{
    SiliconFrontier_SetCurrentChallenge(SiliconFrontier_GetFacilityFromMap(),gSpecialVar_Result);
}

void SiliconFrontier_SetCurrentChallenge(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType)
{
    u16 value = 0;
    value |= (u16)facility & MAX_u8;
    value |= ((u16)challengeType & MAX_u8) << 8;
    gSaveBlock2Ptr->frontier.currentChallenge = value;
}

u16 SiliconFrontier_GetCurrentChallenge(void)
{
    return gSaveBlock2Ptr->frontier.currentChallenge;
}

enum SiliconFrontierFacility SiliconFrontier_GetFacilityFromCurrentChallenge(void)
{
    return ((SiliconFrontier_GetCurrentChallenge()) & MAX_u8);
}

enum SiliconFrontierChallengeType SiliconFrontier_GetTypeFromCurrentChallenge(void)
{
    return ((SiliconFrontier_GetCurrentChallenge() >> 8) & MAX_u8);
}

enum Type SiliconFacility_GetChosenSparringType(void)
{
    return gSaveBlock2Ptr->frontier.chosenSparringType;
}

static void SiliconFacility_SetChosenSparringType(enum Type type)
{
    gSaveBlock2Ptr->frontier.chosenSparringType = type;
}

static enum SiliconFrontierChallengeType SiliconFrontier_GetLastChallengeTypeFromCurrentFacility(void)
{
    return gSaveBlock2Ptr->frontier.lastChallengeType[SiliconFrontier_GetFacilityFromMap()];
}

void SiliconFrontier_GetLastChallengeStreakLength(void)
{
    gSpecialVar_Result = SiliconFrontier_GetCurrentStreak(SiliconFrontier_GetFacilityFromMap(),SiliconFrontier_GetLastChallengeTypeFromCurrentFacility());
}

static void SiliconFrontier_SetLastChallenge(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType)
{
    gSaveBlock2Ptr->frontier.lastChallengeType[facility] = challengeType;
}

void SiliconFrontier_SetLastChallengeFromCurrentChallenge(void)
{
    SiliconFrontier_SetLastChallenge(SiliconFrontier_GetFacilityFromCurrentChallenge(),SiliconFrontier_GetTypeFromCurrentChallenge());
}

void Script_SiliconFrontier_GetLastChallengeTypeFromCurrentFacility(void)
{
    gSpecialVar_Result = SiliconFrontier_GetLastChallengeTypeFromCurrentFacility();
}

void BufferLastChallengeType(void)
{
    const u8* challengeTypeTitles[] =
    {
        [SILICON_FRONTIER_CHALLENGE_TYPE_NONE] = COMPOUND_STRING(""),
        [SILICON_FRONTIER_CHALLENGE_TYPE_SINGLE] = gText_Single,
        [SILICON_FRONTIER_CHALLENGE_TYPE_DOUBLE] = gText_Double,
        [SILICON_FRONTIER_CHALLENGE_TYPE_MULTI] = COMPOUND_STRING("Multi"),
        [SILICON_FRONTIER_CHALLENGE_TYPE_LINK_MULTI] = COMPOUND_STRING("Multi Link"),
    };

    StringCopy(gStringVar1,challengeTypeTitles[SiliconFrontier_GetLastChallengeTypeFromCurrentFacility()]);
}

void SiliconFrontier_ResetLastChallenge(void)
{
    SiliconFrontier_SetLastChallenge(SiliconFrontier_GetFacilityFromMap(),SILICON_FRONTIER_CHALLENGE_TYPE_NONE);
}

const u8 SiliconFrontier_PartySizes[SILICON_FRONTIER_CHALLENGE_TYPE_COUNT] =
{
    [SILICON_FRONTIER_CHALLENGE_TYPE_NONE] = 0,
    [SILICON_FRONTIER_CHALLENGE_TYPE_SINGLE] = FRONTIER_PARTY_SIZE,
    [SILICON_FRONTIER_CHALLENGE_TYPE_DOUBLE] = FRONTIER_DOUBLES_PARTY_SIZE,
    [SILICON_FRONTIER_CHALLENGE_TYPE_MULTI] = FRONTIER_MULTI_PARTY_SIZE,
    [SILICON_FRONTIER_CHALLENGE_TYPE_LINK_MULTI] = FRONTIER_MULTI_PARTY_SIZE,
};

static u32 SiliconFroniter_GetPartySizeFromCurrentChallenge(void)
{
    enum SiliconFrontierChallengeType type = SiliconFrontier_GetTypeFromCurrentChallenge();
    return SiliconFrontier_PartySizes[type];
}

void SiliconFrontier_SetPartyScreenPickAmount(void)
{
    VarSet(VAR_0x8005,SiliconFroniter_GetPartySizeFromCurrentChallenge());
    VarSet(VAR_0x8004,FRONTIER_LVL_OPEN);
}

void SiliconFrontier_SetSelectedMons(void)
{
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    for (u32 i = 0; i < size; i++)
        gSaveBlock2Ptr->frontier.selectedPartyMons[i] = gSelectedOrderFromParty[i];
    ReducePlayerPartyToSelectedMons();
}

u16 const VarToPartyIndexMap[MAX_FRONTIER_PARTY_SIZE] =
{
    [0] = VAR_TEMP_0,
    [1] = VAR_TEMP_0,
    [2] = VAR_TEMP_1,
    [3] = VAR_TEMP_1,
};

void SiliconFrontier_ResetPartyIndexVars(void)
{
    for (u32 partyIndex = 0; partyIndex < MAX_FRONTIER_PARTY_SIZE; partyIndex++)
        VarSet(VarToPartyIndexMap[partyIndex],0);
}

static bool32 SiliconFrontier_CheckMon_Egg(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[])
{
    enum Species species = SanitizeSpeciesId(GetMonData(mon, MON_DATA_SPECIES_OR_EGG));
    if (species == SPECIES_EGG)
        return FALSE;

    if (species == SPECIES_NONE)
    {
        if (partyIndex < SiliconFroniter_GetPartySizeFromCurrentChallenge())
            return FALSE;

        return TRUE;
    }
    return TRUE;
}

static bool32 SiliconFrontier_CheckMon_Legendary(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[])
{
    enum Species species = GET_BASE_SPECIES_ID(SanitizeSpeciesId(GetMonData(mon, MON_DATA_SPECIES_OR_EGG)));

    if (gSpeciesInfo[species].isUltraBeast == TRUE)
        return FALSE;

    if (gSpeciesInfo[species].isRestrictedLegendary == TRUE)
        return FALSE;

    if (gSpeciesInfo[species].isMythical == TRUE)
        return FALSE;

    if (gSpeciesInfo[species].isSubLegendary == TRUE)
        return FALSE;

    return TRUE;
}

static bool32 SiliconFrontier_CheckMon_UniqueSpecies(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[])
{
    enum Species species = SanitizeSpeciesId(GetMonData(mon, MON_DATA_SPECIES_OR_EGG));
    species = GET_BASE_SPECIES_ID(species);

    for (u32 speciesIndex = 0; speciesIndex < partyIndex; speciesIndex++)
    {
        if (speciesArray[partyIndex] != species)
            continue;

        return FALSE;
    }
    speciesArray[partyIndex] = species;
    return TRUE;
}

static bool32 SiliconFrontier_CheckMon_UniqueItem(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[])
{
    enum Item item = GetMonData(mon, MON_DATA_HELD_ITEM);

    if (item == ITEM_NONE)
        return TRUE;

    for (u32 itemIndex = 0; itemIndex < partyIndex; itemIndex++)
    {
        if (itemArray[partyIndex] != item)
            continue;

        return FALSE;
    }
    itemArray[partyIndex] = item;
    return TRUE;
}

static bool32 SiliconFroniter_CheckMon_MatchingType(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[])
{
    if (SiliconFrontier_GetFacilityFromCurrentChallenge() != SILICON_FACILITY_SPARRING)
        return TRUE;

    enum Species species = SanitizeSpeciesId(GetMonData(mon, MON_DATA_SPECIES_OR_EGG));
    enum Type requiredType = SiliconFacility_GetChosenSparringType();

    for (u32 typeIndex = 0; typeIndex < 2; typeIndex++)
    {
        if (requiredType == GetSpeciesType(species,typeIndex))
            return TRUE;
    }
    return FALSE;
}

static bool32 (* const sEligibleCheckFunc[])(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[]) =
{
    [SILICON_FRONTIER_ELIGIBILITY_EGG]             = SiliconFrontier_CheckMon_Egg,
    [SILICON_FRONTIER_ELIGIBILITY_LEGENDARY]       = SiliconFrontier_CheckMon_Legendary,
    [SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES]  = SiliconFrontier_CheckMon_UniqueSpecies,
    [SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM]     = SiliconFrontier_CheckMon_UniqueItem,
    [SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE]   = SiliconFroniter_CheckMon_MatchingType,
};

void SiliconFrontier_FailCheck(u32 partyIndex, enum SiliconFrontierEligiblity checkIndex)
{
    u32 targetVar = VarToPartyIndexMap[partyIndex];
    u16 value = VarGet(targetVar);

    if (partyIndex % 2 != 0)
        checkIndex += 8;

    value |= (1 << checkIndex);

    VarSet(targetVar,value);
}

static bool8 SiliconFrontier_GetCheck(u32 partyIndex, enum SiliconFrontierEligiblity checkIndex)
{
    u32 targetVar = VarToPartyIndexMap[partyIndex];
    u16 value = VarGet(targetVar);

    if (partyIndex % 2 != 0)
        checkIndex += 8;

    return (value & (1 << checkIndex)) != 0;
}

void SiliconFrontier_CheckMonEligibility(void)
{
    SiliconFrontier_ResetPartyIndexVars();

    enum Species speciesArray[MAX_FRONTIER_PARTY_SIZE];
    enum Item itemArray[MAX_FRONTIER_PARTY_SIZE];
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();

    for (u32 partyIndex = 0; partyIndex < size; partyIndex++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][partyIndex];
        speciesArray[partyIndex] = SPECIES_NONE;
        itemArray[partyIndex] = ITEM_NONE;

        for (enum SiliconFrontierEligiblity checkIndex = 0; checkIndex < SILICON_FRONTIER_ELIGIBILITY_COUNT; checkIndex++)
        {
            if (sEligibleCheckFunc[checkIndex](partyIndex, mon, speciesArray, itemArray) == FALSE)
                SiliconFrontier_FailCheck(partyIndex,checkIndex);
        }
    }
}

bool32 SiliconFrontier_IsPartyValidForChallenge(void)
{
    return (gPartiesCount[B_TRAINER_PLAYER] >= SiliconFrontier_PartySizes[SiliconFrontier_GetTypeFromCurrentChallenge()]);
}

void Script_SiliconFrontier_IsPartyValidForChallenge(void)
{
    gSpecialVar_Result = SiliconFrontier_IsPartyValidForChallenge();
}

static bool32 SiliconFrontier_AreChosenMonsEligible(void)
{
    u32 size = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    for (u32 partyIndex = 0; partyIndex < size; partyIndex++)
    {
        for (enum SiliconFrontierEligiblity checkIndex = 0; checkIndex < SILICON_FRONTIER_ELIGIBILITY_COUNT; checkIndex++)
        {
            if (SiliconFrontier_GetCheck(partyIndex,checkIndex))
                return FALSE;
        }
    }
    return TRUE;
}

void Script_SiliconFrontier_AreChosenMonsEligible(void)
{
    gSpecialVar_Result = SiliconFrontier_AreChosenMonsEligible();
}

void SiliconFrontier_ReturnPartyCodes(void)
{
    u32 partyIndex = VarGet(VAR_0x8006);
    bool32 checks[SILICON_FRONTIER_ELIGIBILITY_COUNT];

    for (enum SiliconFrontierEligiblity checkIndex = 0; checkIndex < SILICON_FRONTIER_ELIGIBILITY_COUNT; checkIndex++)
    {
        checks[checkIndex] = (SiliconFrontier_GetCheck(partyIndex,checkIndex));
    }

    if (checks[SILICON_FRONTIER_ELIGIBILITY_EGG] == TRUE)
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_EGG;
        return;
    }

    if (checks[SILICON_FRONTIER_ELIGIBILITY_LEGENDARY] == TRUE)
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_LEGENDARY;
        return;
    }

    if (
            checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE] == TRUE
       )
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        StringCopy(gStringVar2,GetItemName(GetMonData(&gParties[B_TRAINER_PLAYER][partyIndex],MON_DATA_HELD_ITEM)));
        StringCopy(gStringVar3,gTypesInfo[SiliconFacility_GetChosenSparringType()].name);
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_ALL;
        return;
    }

    if (
            checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES] == FALSE
            && checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE] == TRUE
       )
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        StringCopy(gStringVar2,GetItemName(GetMonData(&gParties[B_TRAINER_PLAYER][partyIndex],MON_DATA_HELD_ITEM)));
        StringCopy(gStringVar3,gTypesInfo[SiliconFacility_GetChosenSparringType()].name);
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_ITEM_TYPE;
        return;
    }

    if (
            checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM] == FALSE
            && checks[SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE] == TRUE
       )
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        StringCopy(gStringVar2,GetItemName(GetMonData(&gParties[B_TRAINER_PLAYER][partyIndex],MON_DATA_HELD_ITEM)));
        StringCopy(gStringVar3,gTypesInfo[SiliconFacility_GetChosenSparringType()].name);
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES_TYPE;
        return;
    }
    if (
            checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE] == FALSE
       )
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        StringCopy(gStringVar2,GetItemName(GetMonData(&gParties[B_TRAINER_PLAYER][partyIndex],MON_DATA_HELD_ITEM)));
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES_ITEM;
        return;
    }
    if (
            checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM] == FALSE
            && checks[SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE] == FALSE
       )
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES;
        return;
    }
    if (
            checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES] == FALSE
            && checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM] == TRUE
            && checks[SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE] == FALSE
       )
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        StringCopy(gStringVar2,GetItemName(GetMonData(&gParties[B_TRAINER_PLAYER][partyIndex],MON_DATA_HELD_ITEM)));
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_ITEM;
        return;
    }
    if (
            checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_SPECIES] == FALSE
            && checks[SILICON_FRONTIER_ELIGIBILITY_UNIQUE_ITEM] == FALSE
            && checks[SILICON_FRONTIER_ELIGIBILITY_MATCHING_TYPE] == TRUE
       )
    {
        VarSet(VAR_0x8004,partyIndex);
        BufferMonNickname();
        StringCopy(gStringVar3,gTypesInfo[SiliconFacility_GetChosenSparringType()].name);
        gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_TYPE;
        return;
    }

    gSpecialVar_Result = SILICON_FRONTIER_ELIGIBILITY_CODE_PASS;
}

void BufferPartySizeForChallenge(void)
{
    u32 partySize = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    ConvertIntToDecimalStringN(gStringVar2,partySize,STR_CONV_MODE_LEFT_ALIGN,CountDigits(partySize));
}
