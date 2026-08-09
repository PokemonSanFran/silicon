#include "global.h"
#include "event_data.h"
#include "pokedex.h"
#include "ui_pokedex.h"
#include "constants/nameplate.h"
#include "frontier_util.h"
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
#include "silicon_frontier_accessors.h"
#include "data/silicon_frontier/facilities.h"
#include "data/silicon_frontier/trainers.h"
#include "data/silicon_frontier/mons.h"

enum SiliconFrontierChallengeType SiliconFrontier_GetLastChallengeTypeFromCurrentFacility(void);
u32 SiliconFrontier_GetNumberAllBattles(void);
void SiliconFrontier_ResetRemainingHeals(void);
void SiliconFrontier_DecreaseRemainingHeals(void);
void SiliconFrontier_SetFacilityToVarFromMap(void);
u8 SiliconFrontier_GetFacilityMilestoneRequirement(enum SiliconFrontierFacility facility,  enum BossPhases phase);
u16 SiliconFrontier_GetFacilityBadge(enum SiliconFrontierFacility facility,  enum BossPhases phase);
const u8* SiliconFrontier_GetFacilityBadgeName(enum SiliconFrontierFacility facility,  enum BossPhases phase);
enum SiliconFrontierTrainerIds SiliconFrontier_GetFacilityBoss(enum SiliconFrontierFacility facility,  enum BossPhases phase);
const u8* SiliconFrontier_GetFacilityOriginalName(enum SiliconFrontierFacility facility);
const u8* SiliconFrontier_GetFacilityName(enum SiliconFrontierFacility facility);
mapsec_s16_t SiliconFrontier_GetFacilityMapsec(enum SiliconFrontierFacility facility);
enum SiliconFrontierFacility SiliconFrontier_GetFacilityFromMap(void);
void SiliconFrontier_ResetCurrentChallenge(void);
void SiliconFrontier_SetCurrentChallengeFromVars(void);
void SiliconFrontier_GetLastChallengeStreakLength(void);
void SiliconFrontier_SetLastChallengeFromCurrentChallenge(void);
void Script_SiliconFrontier_GetLastChallengeTypeFromCurrentFacility(void);
void BufferLastChallengeType(void);
void SiliconFrontier_ResetLastChallenge(void);
static u32 SiliconFroniter_GetPartySizeFromCurrentChallenge(void);
void SiliconFrontier_SetPartyScreenPickAmount(void);
void SiliconFrontier_SetSelectedMons(void);
void SiliconFrontier_ResetPartyIndexVars(void);
static bool32 SiliconFrontier_CheckMon_Egg(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[]);
static bool32 SiliconFrontier_CheckMon_Legendary(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[]);
static bool32 SiliconFrontier_CheckMon_UniqueSpecies(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[]);
static bool32 SiliconFrontier_CheckMon_UniqueItem(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[]);
static bool32 SiliconFroniter_CheckMon_MatchingType(u32 partyIndex, struct Pokemon *mon, enum Species speciesArray[], enum Item itemArray[]);
void SiliconFrontier_FailCheck(u32 partyIndex, enum SiliconFrontierEligiblity checkIndex);
static bool8 SiliconFrontier_GetCheck(u32 partyIndex, enum SiliconFrontierEligiblity checkIndex);
void SiliconFrontier_CheckMonEligibility(void);
bool32 SiliconFrontier_IsPartyValidForChallenge(void);
void Script_SiliconFrontier_IsPartyValidForChallenge(void);
static bool32 SiliconFrontier_AreChosenMonsEligible(void);
void Script_SiliconFrontier_AreChosenMonsEligible(void);
void SiliconFrontier_ReturnPartyCodes(void);
void BufferPartySizeForChallenge(void);
enum SiliconFrontierTrainerIds GetRandomSiliconFrontierTrainer(void);
u16 SiliconFrontier_GetTrainerFlag(enum SiliconFrontierTrainerIds trainerId);
bool8 SiliconFrontier_IsBossUnlocked(enum SiliconFrontierTrainerIds trainerId);
enum SiliconFrontierTrainerIds SiliconFrontier_GetNextGenericBoss(u32 currentStreak);
enum SiliconFrontierTrainerIds SiliconFrontier_GetBossFromCurrentFacility(enum BossPhases phase);
enum SiliconFrontierTrainerIds SiliconFrontier_GenerateOpponent(void);
bool8 SiliconFroniter_IsCurrentChallengeTypeDouble(void);
bool8 SiliconFroniter_IsCurrentChallengeTypeMulti(void);
bool8 SiliconFroniter_IsCurrentChallengeTypeLinkMulti(void);
void SiliconFrontier_SetAllOpponents(void);
const u16 SiliconFrontier_GetObjectGfxId(enum SiliconFrontierTrainerIds trainerId);
const u8* SiliconFrontier_GetTrainerName(enum SiliconFrontierTrainerIds trainerId);
const u8* SiliconFrontier_GetBattleText(enum SiliconFrontierSpeechStrings stringId, enum SiliconFrontierTrainerIds trainerId);
const u8* SiliconFrontier_GetPlayerLossText(enum SiliconFrontierTrainerIds trainerId);
u16 SiliconFrontier_GetTrainerClass(enum SiliconFrontierTrainerIds trainerId);
void SiliconFrontier_SetAllOpponentsObjects(void);
const u8* SiliconFrontier_GetOpponentIntroText(enum SiliconFrontierTrainerIds trainerId);
enum NameplateSpeaker SiliconFrontier_GetSpeaker(enum SiliconFrontierTrainerIds trainerId);
enum NameplateTail SiliconFrontier_GetTail(enum SiliconFrontierTrainerIds trainerId);
enum NameplateEmotes SiliconFrontier_GetEmote(enum SiliconFrontierTrainerIds trainerId);
void SiliconFrontier_BufferOpponentText(enum SiliconFrontierTrainerIds trainerId);
void SiliconFrontier_SetUpTextA(void);
void SiliconFrontier_SetUpTextB(void);
static void SiliconFrontier_FillTrainerParty(enum SiliconFrontierTrainerIds trainerId, u32 monCount, enum BattleTrainer trainer);
static void SiliconFrontier_FillOpponentParties(void);
void SiliconFrontier_SetUpOpponent(void);
//static void SiliconFrontier_IncreaseNumBattles(void);
static void HandleFacilityTrainerBattleEnd(void);
static void Task_StartBattleAfterTransition(u8 taskId);
void SiliconFrontier_StartFacilityBattle(void);
void SiliconFrontier_TryIncrementWinStreakAndRecord(void);
u32 SiliconFrontier_CalculateStreakBP(void);
void SiliconFrontier_BufferBP(void);
void SiliconFrontier_BufferStreakString(void);
void SiliconFrontier_TryAwardBadge(void);
void SiliconFrontier_BufferAwardSpeech(void);
void SiliconFrontier_BufferGoldMilestone(void);
u32 SiliconFroniter_CountCaughtBlockedSpecies(void);
void Script_SiliconFroniter_CountCaughtBlockedSpecies(void);
bool32 SiliconFrontier_ShouldSpeciesBeBlockedFromFrontier(enum Species species);
void DebugToggleBosses(void);
void Script_BufferGetFacilityName(void);
void Script_BufferBasePoints(void);
void Script_BufferBossPoints(void);
void Script_BufferMilestonePoints(void);
void Script_BufferSilverBadgeAndStreak(void);
void Script_BufferGoldBadgeAndStreak(void);
void SiliconFrontier_ResetCurrentStreak(void);
u32 SiliconFrontier_TranslatePartnerId(enum SiliconFrontierPartner partnerId);
void SiliconFrontier_DebugChoosePartner(void);
void SiliconFrontier_ResetCurrentPartner(void);
void Script_SiliconFrontier_GetTypeFromCurrentChallenge(void);

enum SiliconFrontierChallengeType SiliconFrontier_GetLastChallengeTypeFromCurrentFacility(void)
{
    return SiliconFrontier_GetTypeFromLastChallenge(SiliconFrontier_GetFacilityFromMap());
}

/*
u32 SiliconFrontier_GetNumberAllBattles(void)
{
    u32 total = 0;
    for (enum SiliconFrontierFacility facility = 0; facility < SILICON_FACILITY_COUNT; facility++)
    {
        for (enum SiliconFrontierSparringTypes sparringType = 0; sparringType < SPARRING_TYPE_COUNT; sparringType++)
        {
            for (enum SiliconFrontierChallengeType type = 0; type < SILICON_FRONTIER_CHALLENGE_TYPE_COUNT; type++)
            {
                total += SiliconFrontier_GetNumberBattles(facility,type,sparringType);
            }
        }
    }
    return min(total, MAX_u32);
}
*/

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

void Script_SiliconFrontier_GetFacilityFromCurrentChallenge(void)
{
    VarSet(VAR_TEMP_F,SiliconFrontier_GetFacilityFromCurrentChallenge());
}

u8 SiliconFrontier_GetFacilityMilestoneRequirement(enum SiliconFrontierFacility facility,  enum BossPhases phase)
{
    return gSiliconFrontierData[facility].milestone[phase];
}

u16 SiliconFrontier_GetFacilityBadge(enum SiliconFrontierFacility facility,  enum BossPhases phase)
{
    return gSiliconFrontierData[facility].badge[phase];
}

const u8* SiliconFrontier_GetFacilityBadgeName(enum SiliconFrontierFacility facility,  enum BossPhases phase)
{
    return gSiliconFrontierData[facility].badgeName[phase];
}

enum SiliconFrontierTrainerIds SiliconFrontier_GetFacilityBoss(enum SiliconFrontierFacility facility,  enum BossPhases phase)
{
    return gSiliconFrontierData[facility].boss[phase];
}

const u8* SiliconFrontier_GetFacilityOriginalName(enum SiliconFrontierFacility facility)
{
    return gSiliconFrontierData[facility].originalName;
}

const u8* SiliconFrontier_GetFacilityName(enum SiliconFrontierFacility facility)
{
    return gSiliconFrontierData[facility].name;
}

mapsec_s16_t SiliconFrontier_GetFacilityMapsec(enum SiliconFrontierFacility facility)
{
    return gSiliconFrontierData[facility].mapsec;
}

enum SiliconFrontierFacility SiliconFrontier_GetFacilityFromMap(void)
{
    for (enum SiliconFrontierFacility facility = 0; facility < SILICON_FACILITY_COUNT; facility++)
        if (GetCurrentRegionMapSectionId() == SiliconFrontier_GetFacilityMapsec(facility))
            return facility;

    return SILICON_FACILITY_NONE;
}

void SiliconFrontier_ResetCurrentChallenge(void)
{
    SiliconFrontier_SetCurrentChallengeFacility(SILICON_FACILITY_NONE);
    SiliconFrontier_SetCurrentChallengeChallengeType(SILICON_FRONTIER_CHALLENGE_TYPE_NONE);
    SiliconFrontier_SetCurrentChallengeSparringType(SPARRING_TYPE_COUNT);
}

void SiliconFrontier_SetCurrentChallengeSparringTypeFromVarResult(void)
{
    SiliconFrontier_SetCurrentChallengeSparringType(gSpecialVar_Result);
}

void SiliconFrontier_SetCurrentChallengeFacilityFromMap(void)
{
    SiliconFrontier_SetCurrentChallengeFacility(SiliconFrontier_GetFacilityFromMap());
}

void SiliconFrontier_SetCurrentChallengeChallengeTypeFromVarResult(void)
{
    SiliconFrontier_SetCurrentChallengeChallengeType(gSpecialVar_Result);
}

static enum Type SiliconFrontier_ConvertSparringTypeToMonType(enum SiliconFrontierSparringTypes type)
{
    for (enum Type typeIndex = TYPE_NONE; typeIndex < NUMBER_OF_MON_TYPES; typeIndex++)
    {
        if (gTypesInfo[typeIndex].sparringType == type)
            return typeIndex;
    }

    return TYPE_NONE;
}

void SiliconFrontier_GetLastChallengeStreakLength(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromMap();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetLastChallengeTypeFromCurrentFacility();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    gSpecialVar_Result = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);
}

void SiliconFrontier_SetCurrentChallengeFromLastChallenge(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromLastChallenge(facility);
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetLastSparringType(facility);

    SiliconFrontier_SetCurrentChallengeChallengeType(challengeType);
    SiliconFrontier_SetCurrentChallengeSparringType(sparringType);
}

void SiliconFrontier_SetLastChallengeFromCurrentChallenge(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    SiliconFrontier_SetLastChallengeChallengeType(facility,challengeType);
    SiliconFrontier_SetLastChallengeSparringType(facility,sparringType);
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
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();

    SiliconFrontier_SetLastChallengeChallengeType(facility,SILICON_FRONTIER_CHALLENGE_TYPE_NONE);
    SiliconFrontier_SetLastChallengeSparringType(facility,SPARRING_TYPE_COUNT);
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
        SiliconFrontier_SetSelectedPartyMon(i,gSelectedOrderFromParty[i]);
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
    enum Type requiredType = SiliconFrontier_ConvertSparringTypeToMonType(SiliconFrontier_GetCurrentChallengeSparringType());

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
        enum Type requiredType = SiliconFrontier_ConvertSparringTypeToMonType(SiliconFrontier_GetCurrentChallengeSparringType());

        StringCopy(gStringVar3,gTypesInfo[requiredType].name);
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
        enum Type requiredType = SiliconFrontier_ConvertSparringTypeToMonType(SiliconFrontier_GetCurrentChallengeSparringType());

        StringCopy(gStringVar3,gTypesInfo[requiredType].name);
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
        enum Type requiredType = SiliconFrontier_ConvertSparringTypeToMonType(SiliconFrontier_GetCurrentChallengeSparringType());

        StringCopy(gStringVar3,gTypesInfo[requiredType].name);
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
        enum Type requiredType = SiliconFrontier_ConvertSparringTypeToMonType(SiliconFrontier_GetCurrentChallengeSparringType());

        StringCopy(gStringVar3,gTypesInfo[requiredType].name);
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
    return SiliconFrontier_GetFacilityBoss(facility,phase);
}

enum SiliconFrontierTrainerIds SiliconFrontier_GenerateOpponent(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();


    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);

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

    gPartnerTrainerId = TRAINER_PARTNER(SiliconFrontier_GetCurrentPartner());
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

static void SiliconFrontier_FillTrainerParty(enum SiliconFrontierTrainerIds trainerId, u32 monCount, enum BattleTrainer trainer)
{
    enum SiliconFrontierMonIdChallengeType monIDtype = (SiliconFroniter_IsCurrentChallengeTypeDouble()) ? SILICON_FRONTIER_MON_ID_BATTLE_DOUBLES : SILICON_FRONTIER_MON_ID_BATTLE_SINGLES;

    const u16 *monSet = gSiliconFrontierTrainers[trainerId].monSet[monIDtype];

    u32 bfMonCount = 0;
    u32 monId = monSet[bfMonCount];
    while (monId != SILICON_FRONTIER_MON_NULL)
    {
        bfMonCount++;
        monId = monSet[bfMonCount];
        if (monId == SILICON_FRONTIER_MON_NULL)
            break;
    }
    bfMonCount--;

    u32 i = 0, j = 0, firstMonId = 0;
    u32 otID = Random32();
    while (i != monCount)
    {
        u32 monIndex = RandomUniform(RNG_RANDOM_SILICON_FRONTIER_MON,0,bfMonCount);
        monId = monSet[monIndex];

        // Ensure this Pokémon species isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
        {
            if (GetMonData(&gParties[trainer][j], MON_DATA_SPECIES) == gSiliconFrontierMons[monId].species)
                break;
        }
        if (j != i + firstMonId)
            continue;

        // Ensure this Pokemon's held item isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
        {
            if (GetMonData(&gParties[trainer][j], MON_DATA_HELD_ITEM) != ITEM_NONE && GetMonData(&gParties[trainer][j], MON_DATA_HELD_ITEM) == gSiliconFrontierMons[monId].heldItem)
                break;
        }
        if (j != i + firstMonId)
            continue;

        u8 fixedIV = MAX_PER_STAT_IVS;
        CreateFacilityMon(&gSiliconFrontierMons[monId], SILICON_FRONTIER_LEVEL, fixedIV, otID, 0, &gParties[trainer][i + firstMonId]);

        // The Pokémon was successfully added to the trainer's party, so it's safe to move on to
        // the next party slot.
        i++;
    }
}

static void SiliconFrontier_FillOpponentParties(void)
{
    ZeroEnemyPartyMons();
    ZeroPartyMons(gParties[B_TRAINER_PARTNER]);

    u32 partySize = SiliconFroniter_GetPartySizeFromCurrentChallenge();
    SiliconFrontier_FillTrainerParty(TRAINER_BATTLE_PARAM.opponentA,partySize,B_TRAINER_OPPONENT_A);
    if (SiliconFroniter_IsCurrentChallengeTypeMulti() == FALSE)
        return;
    SiliconFrontier_FillTrainerParty(TRAINER_BATTLE_PARAM.opponentB,partySize,B_TRAINER_OPPONENT_B);
    SiliconFrontier_FillTrainerParty(TRAINER_BATTLE_PARAM.opponentB,partySize,B_TRAINER_PARTNER);
}

void SiliconFrontier_SetUpOpponent(void)
{
    SiliconFrontier_SetAllOpponents();
    SiliconFrontier_SetAllOpponentsObjects();
    SiliconFrontier_FillOpponentParties();
    SiliconFrontier_SetAllOpponentsObjects();
}

/*
static void SiliconFrontier_IncreaseNumBattles(void)
{

    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();

    u32 battles = SiliconFrontier_GetNumberBattles(facility,challengeType);

    if (++battles > MAX_u32)
        return;

    SiliconFrontier_SetNumberBattles(facility,challengeType,battles);
}
*/

static void HandleFacilityTrainerBattleEnd(void)
{
    //SiliconFrontier_IncreaseNumBattles();
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
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);

    if (++currentStreak > MAX_u16)
        return;

    SiliconFrontier_SetCurrentStreak(facility,challengeType,sparringType, currentStreak);

    if (currentStreak <= SiliconFrontier_GetLongestStreak(facility,challengeType, sparringType))
        return;

    SiliconFrontier_SetLongestStreak(facility,challengeType,sparringType, currentStreak);
}

u32 SiliconFrontier_CalculateStreakBP(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    u32 currentStreak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);

    if (((currentStreak) % SILICON_FRONTIER_STREAK_LENGTH_BOSS) != 0)
    {
        u32 points = (currentStreak / SILICON_FRONTIER_BP_REWARD_BASE_MAX) + SILICON_FRONTIER_BP_REWARD_BASE;
        return (points > SILICON_FRONTIER_BP_REWARD_BASE_MAX) ? SILICON_FRONTIER_BP_REWARD_BASE_MAX : points;
    }

    if (currentStreak == SILICON_FRONTIER_STREAK_LENGTH_SILVER)
        return SILICON_FRONTIER_BP_REWARD_BOSS_MILESTONE;
    else if (currentStreak == SILICON_FRONTIER_STREAK_LENGTH_GOLD)
        return SILICON_FRONTIER_BP_REWARD_BOSS_MILESTONE;

    return SILICON_FRONTIER_BP_REWARD_BASE_MAX;
}

void SiliconFrontier_BufferBP(void)
{
    VarSet(VAR_0x8007,SiliconFrontier_CalculateStreakBP());
}

void SiliconFrontier_BufferStreakString(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    u32 value = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);

    if (value >= MAX_u16)
        StringCopy(gStringVar2,COMPOUND_STRING("infinite"));
    else
        ConvertIntToDecimalStringN(gStringVar2,value,STR_CONV_MODE_LEFT_ALIGN,CountDigits(value));
}

void SiliconFrontier_TryAwardBadge(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    u32 streak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);
    gSpecialVar_Result = SILICON_FRONTIER_BOSS_PHASE_COUNT;

    for (u32 milestoneIndex = 0; milestoneIndex < (SILICON_FRONTIER_BOSS_PHASE_GOLD + 1); milestoneIndex++)
    {
        if (streak < SiliconFrontier_GetFacilityMilestoneRequirement(facility,milestoneIndex))
            continue;

        u32 badge = SiliconFrontier_GetFacilityBadge(facility,milestoneIndex);
        if (FlagGet(badge) == TRUE)
            continue;

        FlagSet(badge);
        gSpecialVar_Result = streak;
        return;
    }
}

void SiliconFrontier_BufferAwardSpeech(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();
    enum SiliconFrontierSparringTypes sparringType = SiliconFrontier_GetCurrentChallengeSparringType();

    u32 streak = SiliconFrontier_GetCurrentStreak(facility,challengeType, sparringType);
    u32 phase = streak / SILICON_FRONTIER_STREAK_LENGTH_SILVER;

    enum SiliconFrontierTrainerIds trainer = SiliconFrontier_GetFacilityBoss(facility,phase);
    GetFrontierTrainerName(gStringVar1,trainer);

    u32 value = SiliconFrontier_GetFacilityMilestoneRequirement(facility,phase);
    ConvertIntToDecimalStringN(gStringVar2,value,STR_CONV_MODE_LEFT_ALIGN,CountDigits(value));

    StringCopy(gStringVar3,SiliconFrontier_GetFacilityBadgeName(facility,phase));
}

void SiliconFrontier_BufferGoldMilestone(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromCurrentChallenge();
    u32 milestone = SiliconFrontier_GetFacilityMilestoneRequirement(facility,SILICON_FRONTIER_BOSS_PHASE_GOLD);
    ConvertIntToDecimalStringN(gStringVar1,milestone,STR_CONV_MODE_LEFT_ALIGN,CountDigits(milestone));
}

u32 SiliconFroniter_CountCaughtBlockedSpecies(void)
{
    u32 count = 0;
    for (u32 speciesIndex = 0; speciesIndex < NUM_SPECIES; speciesIndex++)
    {
        if (IsSpeciesEnabled(speciesIndex) == FALSE)
            continue;

        enum Species species = GET_BASE_SPECIES_ID(speciesIndex);

        if (ConvertSpeciesIdToResidoDex(species) == RESIDO_DEX_NONE)
            continue;

        if (species != speciesIndex)
            continue;

        if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT) == FALSE)
            continue;

        if (SiliconFrontier_ShouldSpeciesBeBlockedFromFrontier(species) == FALSE)
            continue;

        count++;
    }
    return count;
}

void Script_SiliconFroniter_CountCaughtBlockedSpecies(void)
{
    gSpecialVar_0x8005 = SiliconFroniter_CountCaughtBlockedSpecies();
}

bool32 SiliconFrontier_ShouldSpeciesBeBlockedFromFrontier(enum Species species)
{
    enum Species baseSpecies = GET_BASE_SPECIES_ID(species);
    if (gSpeciesInfo[baseSpecies].isFrontierBanned == TRUE)
        return TRUE;
    if (gSpeciesInfo[baseSpecies].isUltraBeast == TRUE)
        return TRUE;
    if (gSpeciesInfo[baseSpecies].isRestrictedLegendary == TRUE)
        return TRUE;
    if (gSpeciesInfo[baseSpecies].isMythical == TRUE)
        return TRUE;
    if (gSpeciesInfo[baseSpecies].isSubLegendary == TRUE)
        return TRUE;

    return FALSE;
}

void DebugToggleBosses(void)
{
    u32 trainer;
    switch(gSpecialVar_Result)
    {
        default:
        case 0: trainer = SILICON_FRONTIER_TRAINER_PUA;
                break;
        case 1: trainer = SILICON_FRONTIER_TRAINER_BAIYA;
                break;
        case 2: trainer = SILICON_FRONTIER_TRAINER_AMI_ARGENTO;
                break;
        case 3: trainer = SILICON_FRONTIER_TRAINER_TALA;
                break;
        case 4: trainer = SILICON_FRONTIER_TRAINER_DIMU;
                break;
        case 5: trainer = SILICON_FRONTIER_TRAINER_ADAORA;
                break;
        case 6: trainer = SILICON_FRONTIER_TRAINER_EMRYS;
                break;
        case 7: trainer = SILICON_FRONTIER_TRAINER_MAGNUS;
                break;
        case 8: trainer = SILICON_FRONTIER_TRAINER_BD;
                break;
        case 9: trainer = SILICON_FRONTIER_TRAINER_CHARLOTTE;
                break;
        case 10: trainer = SILICON_FRONTIER_TRAINER_NERIENE;
                 break;
        case 11: trainer = SILICON_FRONTIER_TRAINER_FRANK;
                 break;
        case 12: trainer = SILICON_FRONTIER_TRAINER_SHINZO;
                 break;
        case 13: trainer = SILICON_FRONTIER_TRAINER_KEI_YING;
                 break;
        case 14: trainer = SILICON_FRONTIER_TRAINER_BELEN;
                 break;
        case 15: trainer = SILICON_FRONTIER_TRAINER_ELEANOR;
                 break;
    }
    FlagSet(SiliconFrontier_GetTrainerFlag(trainer));
}

void Script_BufferGetFacilityName(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromMap();
    StringCopy(gStringVar1,SiliconFrontier_GetFacilityName(facility));
}

void Script_BufferBasePoints(void)
{
    ConvertIntToDecimalStringN(gStringVar1,SILICON_FRONTIER_BP_REWARD_BASE,STR_CONV_MODE_LEFT_ALIGN,CountDigits(SILICON_FRONTIER_BP_REWARD_BASE));
}

void Script_BufferBossPoints(void)
{
    ConvertIntToDecimalStringN(gStringVar1,SILICON_FRONTIER_STREAK_LENGTH_BOSS,STR_CONV_MODE_LEFT_ALIGN,CountDigits(SILICON_FRONTIER_STREAK_LENGTH_BOSS));
    ConvertIntToDecimalStringN(gStringVar2,SILICON_FRONTIER_BP_REWARD_BOSS,STR_CONV_MODE_LEFT_ALIGN,CountDigits(SILICON_FRONTIER_BP_REWARD_BOSS));
    ConvertIntToDecimalStringN(gStringVar3,SILICON_FRONTIER_BP_REWARD_BASE,STR_CONV_MODE_LEFT_ALIGN,CountDigits(SILICON_FRONTIER_BP_REWARD_BASE));
}

void Script_BufferMilestonePoints(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromMap();
    StringCopy(gStringVar1,SiliconFrontier_GetFacilityBadgeName(facility,SILICON_FRONTIER_BOSS_PHASE_SILVER));
    StringCopy(gStringVar2,SiliconFrontier_GetFacilityBadgeName(facility,SILICON_FRONTIER_BOSS_PHASE_GOLD));
    ConvertIntToDecimalStringN(gStringVar3,SILICON_FRONTIER_BP_REWARD_BOSS_MILESTONE,STR_CONV_MODE_LEFT_ALIGN,CountDigits(SILICON_FRONTIER_BP_REWARD_BOSS_MILESTONE));
}

void Script_BufferSilverBadgeAndStreak(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromMap();
    ConvertIntToDecimalStringN(gStringVar1,SILICON_FRONTIER_STREAK_LENGTH_SILVER ,STR_CONV_MODE_LEFT_ALIGN,CountDigits(SILICON_FRONTIER_STREAK_LENGTH_SILVER));
    StringCopy(gStringVar2,SiliconFrontier_GetFacilityBadgeName(facility,SILICON_FRONTIER_BOSS_PHASE_SILVER));
}

void Script_BufferGoldBadgeAndStreak(void)
{
    enum SiliconFrontierFacility facility = SiliconFrontier_GetFacilityFromMap();
    ConvertIntToDecimalStringN(gStringVar1,SILICON_FRONTIER_STREAK_LENGTH_GOLD ,STR_CONV_MODE_LEFT_ALIGN,CountDigits(SILICON_FRONTIER_STREAK_LENGTH_GOLD));
    StringCopy(gStringVar2,SiliconFrontier_GetFacilityBadgeName(facility,SILICON_FRONTIER_BOSS_PHASE_GOLD));
}

void SiliconFrontier_ResetCurrentStreak(void)
{
    SiliconFrontier_SetCurrentStreak(SiliconFrontier_GetFacilityFromCurrentChallenge(),SiliconFrontier_GetTypeFromCurrentChallenge(), SiliconFrontier_GetCurrentChallengeSparringType(),0);
}

u32 SiliconFrontier_TranslatePartnerId(enum SiliconFrontierPartner partnerId)
{
    const u32 partnerMapping[SILICON_FRONTIER_PARTNER_COUNT] =
    {
        [SILICON_FRONTIER_PARTNER_PUA] = PARTNER_PUA,
        [SILICON_FRONTIER_PARTNER_CHARLOTTE] = PARTNER_CHARLOTTE,
        //[SILICON_FRONTIER_PARTNER_AMI_ARGENTO] = PARTNER_AMI_ARGENTO,
        //[SILICON_FRONTIER_PARTNER_TALA] = PARTNER_TALA,
        [SILICON_FRONTIER_PARTNER_TALA] = 1,
        [SILICON_FRONTIER_PARTNER_AMI_ARGENTO] = 1,
        [SILICON_FRONTIER_PARTNER_DIMU] = PARTNER_DIMU,
        [SILICON_FRONTIER_PARTNER_ADAORA] = PARTNER_ADAORA,
        [SILICON_FRONTIER_PARTNER_EMRYS] = PARTNER_EMRYS,
        [SILICON_FRONTIER_PARTNER_MAGNUS] = PARTNER_MAGNUS,
        [SILICON_FRONTIER_PARTNER_BD] = PARTNER_BD,
        [SILICON_FRONTIER_PARTNER_BAIYA] = PARTNER_BAIYA,
        [SILICON_FRONTIER_PARTNER_NERIENE] = PARTNER_NERIENE,
        //[SILICON_FRONTIER_PARTNER_FRANK] = PARTNER_FRANK,
        [SILICON_FRONTIER_PARTNER_FRANK] = 1,
        [SILICON_FRONTIER_PARTNER_SHINZO] = PARTNER_SHINZO,
        [SILICON_FRONTIER_PARTNER_KEI_YING] = PARTNER_KEI_YING,
        [SILICON_FRONTIER_PARTNER_BELEN] = PARTNER_BELEN,
        //[SILICON_FRONTIER_PARTNER_ELEANOR] = PARTNER_ELEANOR,
        [SILICON_FRONTIER_PARTNER_ELEANOR] = 1,
    };

    return partnerMapping[partnerId];
}

void SiliconFrontier_DebugChoosePartner(void)
{
    u32 partner = SiliconFrontier_TranslatePartnerId(Random() % SILICON_FRONTIER_PARTNER_COUNT);

    SiliconFrontier_SetCurrentPartner(partner);
}

void SiliconFrontier_ResetCurrentPartner(void)
{
    SiliconFrontier_SetCurrentPartner(SILICON_FRONTIER_PARTNER_NONE);
}

void Script_SiliconFrontier_GetTypeFromCurrentChallenge(void)
{
    VarSet(VAR_TEMP_0,SiliconFrontier_GetTypeFromCurrentChallenge());
}
