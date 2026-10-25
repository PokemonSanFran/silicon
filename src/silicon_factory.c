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
   switch(slot) 
   {
       case 0:
           gSpecialVar_0x8008 = monId;
           break;
       case 1:
           gSpecialVar_0x8009 = monId;
           break;
       case 2:
           gSpecialVar_0x800A= monId;
           break;
       case 3:
           gSpecialVar_0x800B = monId;
           break;
   }
}

void SiliconFrontier_CopyTempVarsToLast(void)
{
    enum SiliconFrontierChallengeType challengeType = SiliconFrontier_GetTypeFromCurrentChallenge();

    for (u32 slot = 0; slot < MAX_FRONTIER_PARTY_SIZE; slot++)
    {
        u32 monId = 0;
        switch(slot) 
        {
            case 0:
                monId = gSpecialVar_0x8008;
                break;
            case 1:
                monId = gSpecialVar_0x8009;
                break;
            case 2:
                monId = gSpecialVar_0x800A;
                break;
            case 3:
                monId = gSpecialVar_0x800B;
                break;
        }
        SiliconFrontier_SetFactoryRentalMon(B_SIDE_OPPONENT,challengeType,slot,monId);

    }
}

void SiliconFrontier_ResetNextMonsTemp(void)
{
    gSpecialVar_0x8008 = SILICON_FRONTIER_MON_NULL;
    gSpecialVar_0x8009 = SILICON_FRONTIER_MON_NULL;
    gSpecialVar_0x800A= SILICON_FRONTIER_MON_NULL;
    gSpecialVar_0x800B = SILICON_FRONTIER_MON_NULL;
}


