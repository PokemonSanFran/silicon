#include "global.h"
#include "item.h"
#include "item_usability.h"
#include "pokemon.h"
#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/species.h"

static bool8 IsInvalidPartyMon(struct Pokemon *mon)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);

    return species == SPECIES_NONE || species == SPECIES_EGG;
}

static bool8 MonHasAnyPPToRestore(struct Pokemon *mon)
{
    u32 i;
    u8 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES, NULL);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u16 move = GetMonData(mon, MON_DATA_MOVE1 + i, NULL);

        if (move != MOVE_NONE
         && GetMonData(mon, MON_DATA_PP1 + i, NULL) < CalculatePPWithBonus(move, ppBonuses, i))
            return TRUE;
    }

    return FALSE;
}

u8 ItemEligibility_Usable(struct Pokemon *mon, u16 itemId)
{
    (void)mon;
    (void)itemId;

    return ELIGIBILITY_USABLE;
}

u8 ItemEligibility_AbilityCapsule(struct Pokemon *mon, u16 itemId)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u8 abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM, NULL);

    (void)itemId;

    if (IsInvalidPartyMon(mon)
     || GetSpeciesAbility(species, 0) == GetSpeciesAbility(species, 1)
     || GetSpeciesAbility(species, 1) == ABILITY_NONE
     || abilityNum > 1)
        return ELIGIBILITY_CANNOT;

    return ELIGIBILITY_USABLE;
}

u8 ItemEligibility_AbilityPatch(struct Pokemon *mon, u16 itemId)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u8 abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM, NULL);

    (void)itemId;

    if (IsInvalidPartyMon(mon) || GetSpeciesAbility(species, abilityNum) == ABILITY_NONE)
        return ELIGIBILITY_CANNOT;

    return ELIGIBILITY_USABLE;
}

u8 ItemEligibility_RareCandy(struct Pokemon *mon, u16 itemId)
{
    u8 level = GetMonData(mon, MON_DATA_LEVEL, NULL);

    (void)itemId;

    if (!IsInvalidPartyMon(mon) && level < MAX_LEVEL)
        return ELIGIBILITY_USABLE;

    return ELIGIBILITY_CANNOT;
}

u8 ItemEligibility_PPUp(struct Pokemon *mon, u16 itemId)
{
    u32 i;
    bool8 hasMoveThatCanReceivePPUps = FALSE;
    u8 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES, NULL);

    (void)itemId;

    if (IsInvalidPartyMon(mon))
        return ELIGIBILITY_CANNOT;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u16 move = GetMonData(mon, MON_DATA_MOVE1 + i, NULL);
        u8 maxPP = CalculatePPWithBonus(move, ppBonuses, i);
        u8 ppUpCount = (ppBonuses & gPPUpGetMask[i]) >> (i * 2);

        if (move == MOVE_NONE || maxPP < 5)
            continue;

        hasMoveThatCanReceivePPUps = TRUE;
        if (ppUpCount < 3)
            return ELIGIBILITY_USABLE;
    }

    return hasMoveThatCanReceivePPUps ? ELIGIBILITY_ALREADY_USED : ELIGIBILITY_CANNOT;
}

u8 ItemEligibility_Elixir(struct Pokemon *mon, u16 itemId)
{
    (void)itemId;

    if (IsInvalidPartyMon(mon) || !MonHasAnyPPToRestore(mon))
        return ELIGIBILITY_CANNOT;

    return ELIGIBILITY_USABLE;
}
