#include "global.h"
#include "silicon_battle_frontier.h"

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
    (for enum SiliconFrontierFacility facility = 0; facility < SILICON_FACILITY_COUNT; facility++)
    {
        (for enum SiliconFrontierChallengeType type = 0; type < SILICON_FRONTIER_CHALLENGE_TYPE_COUNT; type++)
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

u8 SiliconFrontier_ResetRemainingHeals(void)
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

void SiliconFrontier_GetSelectedPartyMon(u32 saveBlockSlot)
{
    return gSaveBlock2Ptr->frontier.selectedPartyMons[saveBlockSlot];
}
