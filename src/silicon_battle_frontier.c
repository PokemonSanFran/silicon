#include "global.h"
#include "event_data.h"
#include "constants/nameplate.h"
#include "battle_frontier.h"
#include "constants/battle_frontier.h"
#include "quest_logic.h"
#include "overworld.h"
#include "tv.h"
#include "strings.h"
#include "party_menu.h"
#include "script_pokemon_util.h"
#include "pokemon.h"
#include "item.h"
#include "battle.h"
#include "string_util.h"
#include "battle_transition.h"
#include "battle_setup.h"
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
static void SiliconFrontier_FillTrainerParty(enum SiliconFrontierTrainerIds trainerId, u32 monCount);

#include "data/silicon_frontier/facilities.h"
#include "data/silicon_frontier/trainers.h"
#include "data/silicon_frontier/mons.h"

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

enum SiliconFrontierTrainerIds GetRandomSiliconFrontierTrainer(void)
{
    enum SiliconFrontierTrainerIds min = SILICON_FRONTIER_TRAINER_SPECIAL_END;
    enum SiliconFrontierTrainerIds max = SILICON_FRONTIER_TRAINER_COUNT - 1;
    return RandomUniform(RNG_RANDOM_SILICON_FRONTIER_TRAINER, min,max);
}

u16 SiliconFrontier_GetTrainerFlag(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].unlockFlag;
}

bool8 SiliconFrontier_IsBossUnlocked(enum SiliconFrontierTrainerIds trainerId)
{
    u32 flag = SiliconFrontier_GetTrainerFlag(trainerId);

    if (flag == 0)
        return TRUE;

    return (FlagGet(flag));
}

enum SiliconFrontierTrainerIds SiliconFrontier_GetNextGenericBoss(u32 currentStreak)
{
    currentStreak = (currentStreak + 1) - SILICON_FRONTIER_STREAK_LENGTH_BOSS;
    u32 bossIndex = currentStreak / SILICON_FRONTIER_STREAK_LENGTH_BOSS;
    u32 possibleTrainer = SILICON_FRONTIER_TRAINER_BOSS_START + bossIndex;

    while (possibleTrainer >= SILICON_FRONTIER_TRAINER_BOSS_END)
        possibleTrainer -= SILICON_FRONTIER_BOSS_COUNT;

    if (SiliconFrontier_IsBossUnlocked(possibleTrainer) == FALSE)
        return GetRandomSiliconFrontierTrainer();

    return possibleTrainer;
}

enum SiliconFrontierTrainerIds SiliconFrontier_GetBossFromCurrentFacility(enum BossPhases phase)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    return gSiliconFrontierData[facility].boss[phase];
}

enum SiliconFrontierTrainerIds SiliconFrontier_GenerateOpponent(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType);

    if (((currentStreak + 1) % SILICON_FRONTIER_STREAK_LENGTH_BOSS) != 0)
        return GetRandomSiliconFrontierTrainer();

    if (currentStreak == SILICON_FRONTIER_STREAK_LENGTH_SILVER_BEFORE)
        return SiliconFrontier_GetBossFromCurrentFacility(SILICON_FRONTIER_BOSS_PHASE_SILVER);
    else if (currentStreak == SILICON_FRONTIER_STREAK_LENGTH_GOLD_BEFORE)
        return SiliconFrontier_GetBossFromCurrentFacility(SILICON_FRONTIER_BOSS_PHASE_GOLD);
    else if (((currentStreak + 1) % SILICON_FRONTIER_STREAK_LENGTH_SILVER) == 0)
        return SiliconFrontier_GetBossFromCurrentFacility(SILICON_FRONTIER_BOSS_PHASE_BEYOND);

    return SiliconFrontier_GetNextGenericBoss(currentStreak);
}

bool8 SiliconFroniter_IsCurrentChallengeTypeDouble(void)
{
    return (SiliconFrontier_GetTypeFromCurrentChallenge() != SILICON_FRONTIER_CHALLENGE_TYPE_SINGLE);
}

bool8 SiliconFroniter_IsCurrentChallengeTypeMulti(void)
{
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();

    if (challengeType == SILICON_FRONTIER_CHALLENGE_TYPE_SINGLE)
        return FALSE;

    if (challengeType == SILICON_FRONTIER_CHALLENGE_TYPE_DOUBLE)
        return FALSE;

    return TRUE;
}

bool8 SiliconFroniter_IsCurrentChallengeTypeLinkMulti(void)
{
    return (SiliconFrontier_GetTypeFromCurrentChallenge() == SILICON_FRONTIER_CHALLENGE_TYPE_LINK_MULTI);
}

void SiliconFrontier_SetAllOpponents(void)
{
    TRAINER_BATTLE_PARAM.opponentA = SiliconFrontier_GenerateOpponent();

    TRAINER_BATTLE_PARAM.opponentB = SILICON_FRONTIER_TRAINER_NONE;

    if (SiliconFroniter_IsCurrentChallengeTypeMulti() == FALSE)
        return;

    TRAINER_BATTLE_PARAM.opponentB = SiliconFrontier_GenerateOpponent();
}

const u16 SiliconFrontier_GetObjectGfxId(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].objectGfxId;
}

const u8* SiliconFrontier_GetTrainerName(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].trainerName;
}

const u8* SiliconFrontier_GetBattleText(enum SiliconFrontierSpeechStrings stringId, enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].text[stringId];
}

const u8* SiliconFrontier_GetPlayerLossText(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].text[SILICON_FRONTIER_TEXT_PLAYER_LOST];
}

u16 SiliconFrontier_GetTrainerClass(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].trainerClass;
}

void SiliconFrontier_SetAllOpponentsObjects(void)
{
    VarSet(VAR_OBJ_GFX_ID_0,SiliconFrontier_GetObjectGfxId(TRAINER_BATTLE_PARAM.opponentA));
    VarSet(VAR_OBJ_GFX_ID_1,SiliconFrontier_GetObjectGfxId(TRAINER_BATTLE_PARAM.opponentB));

}

const u8* SiliconFrontier_GetOpponentIntroText(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].text[SILICON_FRONTIER_TEXT_BEFORE];
}

enum NameplateSpeaker SiliconFrontier_GetSpeaker(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].speaker;
}

enum NameplateTail SiliconFrontier_GetTail(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].tail;
}

enum NameplateEmotes SiliconFrontier_GetEmote(enum SiliconFrontierTrainerIds trainerId)
{
    return gSiliconFrontierTrainers[trainerId].emote;
}

void SiliconFrontier_BufferOpponentText(enum SiliconFrontierTrainerIds trainerId)
{
    VarSet(VAR_MSGBOX_SPEAKER,SiliconFrontier_GetSpeaker(trainerId));
    VarSet(VAR_MSGBOX_TAIL,SiliconFrontier_GetTail(trainerId));
    VarSet(VAR_MSGBOX_EMOTE,SiliconFrontier_GetEmote(trainerId));
    StringCopy(gStringVar1,SiliconFrontier_GetOpponentIntroText(trainerId));
}

void SiliconFrontier_SetUpTextA(void)
{
    SiliconFrontier_BufferOpponentText(TRAINER_BATTLE_PARAM.opponentA);
}

void SiliconFrontier_SetUpTextB(void)
{
    SiliconFrontier_BufferOpponentText(TRAINER_BATTLE_PARAM.opponentB);
}

static void SiliconFrontier_FillTrainerParty(enum SiliconFrontierTrainerIds trainerId, u32 monCount)
{
    const u16 *monSet = gSiliconFrontierTrainers[trainerId].monSet;

    u32 bfMonCount = 0;
    u32 monId = monSet[bfMonCount];
    while (monId != SILICON_FRONTIER_MON_NULL)
    {
        bfMonCount++;
        monId = monSet[bfMonCount];
        if (monId == SILICON_FRONTIER_MON_NULL)
            break;
    }

    u32 i = 0;
    u32 j = 0;
    u32 firstMonId = 0;
    u32 otID = Random32();
    u32 chosenMonIndices[monCount];
    bfMonCount--;
    while (i != monCount)
    {
        u32 monIndex = RandomUniform(RNG_RANDOM_SILICON_FRONTIER_MON,0,bfMonCount);
        monId = monSet[monIndex];

        // Ensure this Pokémon species isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
        {
            if (GetMonData(&gParties[B_TRAINER_OPPONENT_A][j], MON_DATA_SPECIES) == gSiliconFrontierMons[monId].species)
                break;
        }
        if (j != i + firstMonId)
            continue;

        // Ensure this Pokemon's held item isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
        {
            if (GetMonData(&gParties[B_TRAINER_OPPONENT_A][j], MON_DATA_HELD_ITEM) != ITEM_NONE
             && GetMonData(&gParties[B_TRAINER_OPPONENT_A][j], MON_DATA_HELD_ITEM) == gSiliconFrontierMons[monId].heldItem)
                break;
        }
        if (j != i + firstMonId)
            continue;

        chosenMonIndices[i] = monId;
        u8 fixedIV = MAX_PER_STAT_IVS;
        CreateFacilityMon(&gSiliconFrontierMons[monId],
                SILICON_FRONTIER_LEVEL, fixedIV, otID, 0,
                &gParties[B_TRAINER_OPPONENT_A][i + firstMonId]);

        // The Pokémon was successfully added to the trainer's party, so it's safe to move on to
        // the next party slot.
        i++;
    }
}

static void SiliconFrontier_FillOpponentParties(void)
{
    ZeroEnemyPartyMons();
    u32 partySize = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    SiliconFrontier_FillTrainerParty(TRAINER_BATTLE_PARAM.opponentA,partySize);
    if (SiliconFroniter_IsCurrentChallengeTypeMulti() == FALSE)
        return;
    SiliconFrontier_FillTrainerParty(TRAINER_BATTLE_PARAM.opponentB,partySize);
}

void SiliconFrontier_SetUpOpponent(void)
{
    SiliconFrontier_SetAllOpponents();
    SiliconFrontier_SetAllOpponentsObjects();
    SiliconFrontier_FillOpponentParties();
    SiliconFrontier_SetAllOpponentsObjects();
}

static void SiliconFrontier_IncreaseNumBattles(void)
{

    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();

    u32 battles = SiliconFrontier_GetNumberBattles(facility,challengeType);

    if (++battles > MAX_u32)
        return;

    SiliconFrontier_SetNumberBattles(facility,challengeType,battles);
}

static void HandleFacilityTrainerBattleEnd(void)
{
    SiliconFrontier_IncreaseNumBattles();
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static void Task_StartBattleAfterTransition(u8 taskId)
{
    if (IsBattleTransitionDone() == TRUE)
    {
        gMain.savedCallback = HandleFacilityTrainerBattleEnd;
        SetMainCallback2(CB2_InitBattle);
        DestroyTask(taskId);
    }
}


void SiliconFrontier_StartFacilityBattle(void)
{
    gBattleScripting.specialTrainerBattleType = FACILITY_BATTLE_TOWER; // Needed for pokeemerald
    gBattleTypeFlags = BATTLE_TYPE_TRAINER | BATTLE_TYPE_BATTLE_TOWER;

    if (SiliconFroniter_IsCurrentChallengeTypeLinkMulti())
        gBattleTypeFlags |= BATTLE_TYPE_DOUBLE | BATTLE_TYPE_LINK | BATTLE_TYPE_MULTI | BATTLE_TYPE_TOWER_LINK_MULTI;
    else if (SiliconFroniter_IsCurrentChallengeTypeMulti())
        gBattleTypeFlags |= BATTLE_TYPE_DOUBLE | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_MULTI | BATTLE_TYPE_TWO_OPPONENTS;
    else if (SiliconFroniter_IsCurrentChallengeTypeDouble())
        gBattleTypeFlags |= BATTLE_TYPE_DOUBLE;

    CreateTask(Task_StartBattleAfterTransition, 1);
    PlayMapChosenOrBattleBGM(0);
    BattleTransition_StartOnField(GetSpecialBattleTransition(B_TRANSITION_GROUP_B_TOWER));
}

void SiliconFrontier_TryIncrementWinStreakAndRecord(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType);

    if (++currentStreak > MAX_u16)
        return;

    SiliconFrontier_SetCurrentStreak(facility,challengeType,currentStreak);

    if (currentStreak <= SiliconFrontier_GetLongestStreak(facility,challengeType))
        return;

    SiliconFrontier_SetLongestStreak(facility,challengeType,currentStreak);
}

u32 SiliconFrontier_CalculateStreakBP(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType);

    if (((currentStreak) % SILICON_FRONTIER_STREAK_LENGTH_BOSS) != 0)
    {
        u32 points = (currentStreak / 10) + 1;
        return (points > 10) ? 10 : points;
    }

    if (currentStreak == SILICON_FRONTIER_STREAK_LENGTH_SILVER)
        return 50;
    else if (currentStreak == SILICON_FRONTIER_STREAK_LENGTH_GOLD)
        return 50;

    return 20;
}

void SiliconFrontier_BufferBP(void)
{
    u32 value = SiliconFrontier_CalculateStreakBP();
    VarSet(VAR_0x8007,value);
    ConvertIntToDecimalStringN(gStringVar1,STR_CONV_MODE_LEFT_ALIGN,value,CountDigits(value));
}

void SiliconFrontier_BufferStreakString(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    u32 value = SiliconFrontier_GetCurrentStreak(facility,challengeType);
    ConvertIntToDecimalStringN(gStringVar2,STR_CONV_MODE_LEFT_ALIGN,value,CountDigits(value));
}
