#include "global.h"
#include "silicon_factory.h"
#include "event_data.h"
#include "move.h"
#include "constants/battle_move_effects.h"
#include "constants/battle.h"
#include "frontier_util.h"
#include "battle_frontier.h"
#include "constants/battle_frontier.h"
#include "constants/battle_factory.h"
#include "silicon_battle_frontier.h"
#include "silicon_frontier_accessors.h"

void SiliconFrontier_SaveNextMonIdsToTemp(u32 slot, u32 monId)
{
    VarSet((VAR_0x8008+slot),monId);
}

void SiliconFrontier_CopyTempVarsToLast(void)
{
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();

    for (u32 slot = 0; slot < MAX_FRONTIER_PARTY_SIZE; slot++)
    {
        u32 monId = VarGet(VAR_0x8008 + slot);
        SiliconFrontier_SetFactoryRentalMon(B_SIDE_OPPONENT,challengeType,slot,monId);
    }
}

void SiliconFrontier_ResetNextMonsTemp(void)
{
    for (u32 slot = 0; slot < MAX_FRONTIER_PARTY_SIZE; slot++)
        SiliconFrontier_SaveNextMonIdsToTemp(slot,SILICON_FRONTIER_MON_NULL);
}
