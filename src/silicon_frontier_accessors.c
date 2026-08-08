#include "global.h"
#include "battle_frontier.h"
#include "silicon_battle_frontier.h"

/*
u16 SiliconFrontier_GetNumberBattles(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierSparringTypes sparringType)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return 0;
    }
    return rec.numBattles[challengeType];
}

void SiliconFrontier_SetNumberBattles(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierSparringTypes sparringType, u32 value)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING:
            rec = &battleFrontier->sparring[sparringType];
            break;
        case SILICON_FACILITY_TOWER:
            rec = &battleFrontier->tower;
            break;
        case SILICON_FACILITY_ARCADE:
            rec = &battleFrontier->arcade;
            break;
        case SILICON_FACILITY_FACTORY:
            rec = &battleFrontier->factory;
            break;
        default:
            return;
    }

    if ((facility != SILICON_FACILITY_SPARRING) && (sparringType != 0))
        return;

    rec.numBattles[challengeType] = value;
}
*/

u16 SiliconFrontier_GetCurrentStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierSparringTypes sparringType)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return 0;
    }
    return rec->streakData[challengeType].currentStreak;
}

void SiliconFrontier_SetCurrentStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierSparringTypes sparringType, u32 value)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return;
    }
    rec->streakData[challengeType].currentStreak = value;
}

u16 SiliconFrontier_GetLongestStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierSparringTypes sparringType)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return 0;
    }
    return rec->streakData[challengeType].longestStreak;
}

void SiliconFrontier_SetLongestStreak(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType, enum SiliconFrontierSparringTypes sparringType, u32 value)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return;
    }
    rec->streakData[challengeType].longestStreak = value;
}

struct BattleFrontierRecordMon SiliconFrontier_GetLongestStreakPlayerPartyMon(enum SiliconFrontierFacility facility, enum SiliconFrontierSparringTypes sparringType, enum SiliconFrontierChallengeType challengeType, u32 slot)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        default:
                                        return (struct BattleFrontierRecordMon){0};
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
    }
    return rec->longestStreakParty[challengeType][slot];
}

void SiliconFrontier_SetLongestStreakPlayerPartyMonAttribute(enum SiliconFrontierFacility facility, enum SiliconFrontierSparringTypes sparringType, enum SiliconFrontierChallengeType challengeType, u32 slot, enum MonData attribute, u32 value)
{
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;
    struct FacilityRecords *rec;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return;
    }

    struct BattleFrontierRecordMon *mon = &rec->longestStreakParty[challengeType][slot];

    switch (attribute)
    {
        case MON_DATA_SPECIES:
            mon->species = value;
            break;
        case MON_DATA_HELD_ITEM:
            mon->heldItem = value;
            break;
        case MON_DATA_IS_SHINY:
            mon->isShiny = value;
            break;
        case MON_DATA_PERSONALITY:
            mon->gender = value;
            break;
        default:
            return;
    }
    return;
}

enum SiliconFrontierPartner SiliconFrontier_GetLongestStreakPartner(enum SiliconFrontierFacility facility, enum SiliconFrontierSparringTypes sparringType)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return SILICON_FRONTIER_PARTNER_NONE;
    }
    return rec->longestStreakPartner;
}

void SiliconFrontier_SetLongestStreakPartner(enum SiliconFrontierFacility facility, enum SiliconFrontierSparringTypes sparringType, enum SiliconFrontierPartner partner)
{
    struct FacilityRecords *rec;
    struct BattleFrontier *battleFrontier = &gSaveBlock2Ptr->frontier;

    switch(facility)
    {
        case SILICON_FACILITY_SPARRING: rec = &battleFrontier->sparring[sparringType];
                                        break;
        case SILICON_FACILITY_TOWER:    rec = &battleFrontier->tower;
                                        break;
        case SILICON_FACILITY_ARCADE:   rec = &battleFrontier->arcade;
                                        break;
        case SILICON_FACILITY_FACTORY:  rec = &battleFrontier->factory;
                                        break;
        default:
                                        return;
    }
    rec->longestStreakPartner = partner;
}

u16 SiliconFrontier_GetPlayerFactoryRentalMon(enum SiliconFrontierChallengeType challengeType, u32 slot)
{
    return gSaveBlock2Ptr->frontier.factoryRentalMonIds[challengeType][slot];
}

void SiliconFrontier_SetPlayerFactoryRentalMon(enum SiliconFrontierChallengeType challengeType, u32 slot, u32 monId)
{
    gSaveBlock2Ptr->frontier.factoryRentalMonIds[challengeType][slot] = monId;
}

enum SiliconFrontierPartner SiliconFrontier_GetCurrentPartner(void)
{
    return gSaveBlock2Ptr->frontier.currentPartner;
}

void SiliconFrontier_SetCurrentPartner(enum SiliconFrontierPartner currentPartner)
{
    gSaveBlock2Ptr->frontier.currentPartner = currentPartner;
}

u8 SiliconFrontier_GetRemainingHeals(void)
{
    return gSaveBlock2Ptr->frontier.remainingSparringHeals;
}

void SiliconFrontier_SetRemainingHeals(u32 value)
{
    gSaveBlock2Ptr->frontier.remainingSparringHeals = value;
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

void SiliconFrontier_SetCurrentChallengeFacility(enum SiliconFrontierFacility facility)
{
    gSaveBlock2Ptr->frontier.currentChallenge.facility = facility;
}

void SiliconFrontier_SetCurrentChallengeChallengeType(enum SiliconFrontierChallengeType challengeType)
{
    gSaveBlock2Ptr->frontier.currentChallenge.challengeType = challengeType;
}

void SiliconFrontier_SetCurrentChallengeSparringType(enum SiliconFrontierSparringTypes sparringType)
{
    gSaveBlock2Ptr->frontier.currentChallenge.sparringType = sparringType;
}

enum SiliconFrontierFacility SiliconFrontier_GetFacilityFromCurrentChallenge(void)
{
    return gSaveBlock2Ptr->frontier.currentChallenge.facility;
}

enum SiliconFrontierChallengeType SiliconFrontier_GetTypeFromCurrentChallenge(void)
{
    return gSaveBlock2Ptr->frontier.currentChallenge.challengeType;
}

enum SiliconFrontierSparringTypes SiliconFrontier_GetCurrentChallengeSparringType(void)
{
    return gSaveBlock2Ptr->frontier.currentChallenge.sparringType;
}

void SiliconFrontier_SetLastChallengeChallengeType(enum SiliconFrontierFacility facility, enum SiliconFrontierChallengeType challengeType)
{
    gSaveBlock2Ptr->frontier.lastChallenge[facility].challengeType = challengeType;
}

void SiliconFrontier_SetLastChallengeSparringType(enum SiliconFrontierFacility facility, enum SiliconFrontierSparringTypes sparringType)
{
    gSaveBlock2Ptr->frontier.lastChallenge[facility].sparringType = sparringType;
}

enum SiliconFrontierChallengeType SiliconFrontier_GetTypeFromLastChallenge(enum SiliconFrontierFacility facility)
{
    return gSaveBlock2Ptr->frontier.lastChallenge[facility].challengeType;
}

enum SiliconFrontierSparringTypes SiliconFrontier_GetLastSparringType(enum SiliconFrontierFacility facility)
{
    return gSaveBlock2Ptr->frontier.lastChallenge[facility].sparringType;
}

