#include "global.h"
#include "catchup.h"
#include "overworld.h"
#include "event_data.h"
#include "item.h"
#include "pokemon_storage_system.h"
#include "pokemon_summary_screen.h"
#include "pokedex.h"
#include "script_pokemon_util.h"
#include "random.h"
#include "new_game.h"
#include "siliconStarter.h"
#include "constants/pokemon.h"
#include "constants/siliconStarter.h"
#include "constants/moves.h"

const struct StarterMonTemplate sStarterMonTable[] =
{
    [SILICON_STARTER_SCYTHER] =
    {
        .gender = MON_FEMALE,
        .item = ITEM_NONE,
        .abilityNum = 1, // ABILITY_TECHNICIAN
        .level = 18,
        .evs =
        {
            [STAT_HP] =     23,
            [STAT_ATK] =    81,
            [STAT_DEF] =    50,
            [STAT_SPATK] =  3,
            [STAT_SPDEF] =  9,
            [STAT_SPEED] =  61,
        },
        .ivs =
        {
            [STAT_HP] =     22,
            [STAT_ATK] =    25,
            [STAT_DEF] =    13,
            [STAT_SPATK] =  14,
            [STAT_SPDEF] =  0,
            [STAT_SPEED] =  8,
        },
        .nature = NATURE_HASTY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FURY_CUTTER, MOVE_FALSE_SWIPE, MOVE_WING_ATTACK, MOVE_DOUBLE_TEAM},
        .friendship = 71,
        .nextExpPercent = 19,
        .species = SPECIES_SCYTHER,
    },
    [SILICON_STARTER_CHARCADET] =
    {
        .gender = MON_MALE,
        .item = ITEM_NONE,
        .abilityNum = 2, // ABILITY_FLAME_BODY
        .level = 22,
        .evs =
        {
            [STAT_HP] =     52,
            [STAT_ATK] =    23,
            [STAT_DEF] =    3,
            [STAT_SPATK] =  81,
            [STAT_SPDEF] =  23,
            [STAT_SPEED] =  45,
        },
        .ivs =
        {
            [STAT_HP] =     6,
            [STAT_ATK] =    19,
            [STAT_DEF] =    5,
            [STAT_SPATK] =  30,
            [STAT_SPDEF] =  3,
            [STAT_SPEED] =  7,
        },
        .nature = NATURE_NAIVE,
        .ball = ITEM_DUSK_BALL,
        .moves = {MOVE_ASTONISH, MOVE_WILL_O_WISP, MOVE_CLEAR_SMOG, MOVE_EMBER},
        .friendship = 179,
        .nextExpPercent = 25,
        .species = SPECIES_CHARCADET,
    },
    [SILICON_STARTER_PETILIL] =
    {
        .gender = MON_FEMALE,
        .item = ITEM_NONE,
        .abilityNum = 0, //ABILITY_CHLOROPHYLL
        .level = 22,
        .evs =
        {
            [STAT_HP] =     34,
            [STAT_ATK] =    7,
            [STAT_DEF] =    32,
            [STAT_SPATK] =  81,
            [STAT_SPDEF] =  7,
            [STAT_SPEED] =  65,
        },
        .ivs =
        {
            [STAT_HP] =     21,
            [STAT_ATK] =    18,
            [STAT_DEF] =    0,
            [STAT_SPATK] =  2,
            [STAT_SPDEF] =  2,
            [STAT_SPEED] =  19,
        },
        .nature = NATURE_QUIET,
        .ball = ITEM_GREAT_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_HELPING_HAND, MOVE_GROWTH},
        .friendship = 183,
        .nextExpPercent = 27,
        .species = SPECIES_PETILIL,
    },
    [SILICON_STARTER_FLAAFFY] =
    {
        .gender = MON_MALE,
        .item = ITEM_NONE,
        .abilityNum = 0, // ABILITY_STATIC
        .level = 22,
        .evs =
        {
            [STAT_HP] =     56,
            [STAT_ATK] =    9,
            [STAT_DEF] =    48,
            [STAT_SPATK] =  45,
            [STAT_SPDEF] =  43,
            [STAT_SPEED] =  25,
        },
        .ivs =
        {
            [STAT_HP] =     3,
            [STAT_ATK] =    1,
            [STAT_DEF] =    22,
            [STAT_SPATK] =  2,
            [STAT_SPDEF] =  15,
            [STAT_SPEED] =  29,
        },
        .nature = NATURE_HASTY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CHARGE, MOVE_THUNDER_WAVE, MOVE_THUNDER_SHOCK, MOVE_COTTON_SPORE},
        .friendship = 206,
        .nextExpPercent = 56,
        .species = SPECIES_FLAAFFY,
    },
    [SILICON_STARTER_MAREANIE] =
    {
        .gender = MON_FEMALE,
        .item = ITEM_NONE,
        .abilityNum = 0, // ABILITY_MERCILESS
        .level = 22,
        .evs =
        {
            [STAT_HP] =     61,
            [STAT_ATK] =    21,
            [STAT_DEF] =    63,
            [STAT_SPATK] =  21,
            [STAT_SPDEF] =  61,
            [STAT_SPEED] =  0,
        },
        .ivs =
        {
            [STAT_HP] =     13,
            [STAT_ATK] =    24,
            [STAT_DEF] =    14,
            [STAT_SPATK] =  0,
            [STAT_SPDEF] =  8,
            [STAT_SPEED] =  21,
        },
        .nature = NATURE_SASSY,
        .ball = ITEM_NET_BALL,
        .moves = {MOVE_VENOSHOCK, MOVE_WIDE_GUARD, MOVE_POISON_STING, MOVE_PECK},
        .friendship = 205,
        .nextExpPercent = 33,
        .species = SPECIES_MAREANIE,
    },
    [SILICON_STARTER_ARON] =
    {
        .gender = MON_FEMALE,
        .item = ITEM_NONE,
        .abilityNum = 0, //ABILITY_ROCK_HEAD
        .level = 21,
        .evs =
        {
            [STAT_HP] =     7,
            [STAT_ATK] =    68,
            [STAT_DEF] =    54,
            [STAT_SPATK] =  27,
            [STAT_SPDEF] =  16,
            [STAT_SPEED] =  54,
        },
        .ivs =
        {
            [STAT_HP] =     22,
            [STAT_ATK] =    15,
            [STAT_DEF] =    2,
            [STAT_SPATK] =  5,
            [STAT_SPDEF] =  14,
            [STAT_SPEED] =  29,
        },
        .nature = NATURE_RELAXED,
        .ball = ITEM_HEAL_BALL,
        // PSF TODO change moves once SV learnset is created
        .moves = {MOVE_PROTECT, MOVE_ROAR, MOVE_ROCK_TOMB, MOVE_METAL_CLAW},
        .friendship = 173,
        .nextExpPercent = 32,
        .species = SPECIES_ARON,
    },
    [SILICON_STARTER_SWINUB] =
    {
        .gender = MON_MALE,
        .item = ITEM_NONE,
        .abilityNum = 2, //ABILITY_THICK_FAT
        .level = 22,
        .evs =
        {
            [STAT_HP] =     36,
            [STAT_ATK] =    34,
            [STAT_DEF] =    25,
            [STAT_SPATK] =  43,
            [STAT_SPDEF] =  63,
            [STAT_SPEED] =  23,
        },
        .ivs =
        {
            [STAT_HP] =     13,
            [STAT_ATK] =    28,
            [STAT_DEF] =    15,
            [STAT_SPATK] =  23,
            [STAT_SPDEF] =  25,
            [STAT_SPEED] =  25,
        },
        .nature = NATURE_SASSY,
        .ball = ITEM_TIMER_BALL,
        .moves = {MOVE_ICE_SHARD, MOVE_FLAIL, MOVE_MUD_SLAP, MOVE_TACKLE},
        .friendship = 130,
        .nextExpPercent = 80,
        .species = SPECIES_SWINUB,
    },
    [SILICON_STARTER_HATTREM] =
    {
        .gender = MON_FEMALE,
        .item = ITEM_NONE,
        .abilityNum = 0, //ABILITY_HEALER
        .level = 21,
        .evs =
        {
            [STAT_HP] =     48,
            [STAT_ATK] =    21,
            [STAT_DEF] =    27,
            [STAT_SPATK] =  30,
            [STAT_SPDEF] =  36,
            [STAT_SPEED] =  63,
        },
        .ivs =
        {
            [STAT_HP] =     22,
            [STAT_ATK] =    5,
            [STAT_DEF] =    1,
            [STAT_SPATK] =  15,
            [STAT_SPDEF] =  10,
            [STAT_SPEED] =  8,
        },
        .nature = NATURE_CALM,
        .ball = ITEM_GREAT_BALL,
        .moves = {MOVE_DISARMING_VOICE, MOVE_CONFUSION, MOVE_LIFE_DEW, MOVE_AROMATIC_MIST},
        .friendship = 101,
        .nextExpPercent = 25,
        .species = SPECIES_HATTREM,
    },
    [SILICON_STARTER_PANCHAM] =
    {
        .gender = MON_FEMALE,
        .item = ITEM_NONE,
        .abilityNum = 1, //ABILITY_MOLD_BREAKER
        .level = 21,
        .evs =
        {
            [STAT_HP] =     86,
            [STAT_ATK] =    3,
            [STAT_DEF] =    23,
            [STAT_SPATK] =  3,
            [STAT_SPDEF] =  63,
            [STAT_SPEED] =  39,
        },
        .ivs =
        {
            [STAT_HP] =     15,
            [STAT_ATK] =    22,
            [STAT_DEF] =    10,
            [STAT_SPATK] =  15,
            [STAT_SPDEF] =  21,
            [STAT_SPEED] =  0,
        },
        .nature = NATURE_CAREFUL,
        .ball = ITEM_GREAT_BALL,
        // PSF TODO change moves once SV learnset is created
        .moves = {MOVE_WORK_UP, MOVE_LOW_SWEEP, MOVE_TAUNT, MOVE_CIRCLE_THROW},
        .friendship = 124,
        .nextExpPercent = 55,
        .species = SPECIES_PANCHAM,
    },
};


static void ShowSiliconStarter(u32 species);
static void GiveDebugStarter(void);

void GenerateDummyPartyMembers(void)
{
    u8 evs[NUM_STATS] = {0,0,0,0,0,0};
    u8 ivs[NUM_STATS] = {0,0,0,0,0,0};
    u16 moves[4] = {MOVE_SLEEP_POWDER,MOVE_NONE,MOVE_NONE,MOVE_NONE};

    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
        ScriptGiveMonParameterized(0,slot,SPECIES_SCYTHER,1,0,0,0,0,0,evs,ivs,moves,SHINY_MODE_RANDOM,0,0,0);

    CompactPartySlots();
}

void AddStartersToBox(void)
{
    for (enum SiliconStarters slot = 0; slot < SILICON_STARTER_COUNT; slot++)
        GiveSiliconStarter(slot);

    ResetBagAndParty();
}

void Script_ShowSiliconStarter(void)
{
    u32 slot = GetSlotFromStarter(VarGet(VAR_CHOSEN_PSF_STARTER));
    ShowSiliconStarter(slot);
}

static void ShowSiliconStarter(u32 slot)
{
    struct BoxPokemon *boxMons = GetBoxedMonPtr(StorageGetCurrentBox(), 0);
    u32 maxMonIndex = IN_BOX_COUNT - 1;

    ShowPokemonSummaryScreen(SUMMARY_MODE_BOX, boxMons, slot, maxMonIndex, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

u32 GetStarterFromSlot(enum SiliconStarters starterSlot)
{
    return sStarterMonTable[starterSlot].species;
}

u32 GetSlotFromStarter(u32 species)
{
    for (u32 speciesIndex = 0; speciesIndex < ARRAY_COUNT(sStarterMonTable); speciesIndex++)
    {
        if (sStarterMonTable[speciesIndex].level == 0)
            continue;

        if (sStarterMonTable[speciesIndex].species == species)
            return speciesIndex;
    }

    return SILICON_STARTER_COUNT;
}

static void SetStarterExp(u32 boxId, u32 monSlot, u32 species, u32 level, u32 nextExpPercent)
{
    if (level >= MAX_LEVEL)
        return;

    u32 growthRate = gSpeciesInfo[species].growthRate;
    u32 expCurrent = gExperienceTables[growthRate][level];
    u32 expNext = gExperienceTables[growthRate][level + 1];
    u32 expDiff = expNext - expCurrent;
    u32 expGained = (expDiff * nextExpPercent) / 100;
    u32 totalExp = expCurrent + expGained;

    SetBoxMonDataAt(boxId, monSlot, MON_DATA_EXP, &totalExp);
}

static void SetStarterFriendship(u32 boxId, u32 monSlot, u32 friendship)
{
    SetBoxMonDataAt(boxId, monSlot, MON_DATA_FRIENDSHIP, &friendship);
}

bool32 ShouldMonBeShiny(u32 personality, u32 trainerId)
{
    u32 rerolls = 0;

    if (CheckBagHasItem(ITEM_SHINY_CHARM, 1))
        rerolls += I_SHINY_CHARM_ADDITIONAL_ROLLS;

    while (GET_SHINY_VALUE(trainerId, personality) >= SHINY_ODDS && rerolls > 0)
    {
        personality = Random32();
        rerolls--;
    }

    return GET_SHINY_VALUE(trainerId, personality) < SHINY_ODDS;
}

static void RollForShiny(u32 boxId, u32 monSlot)
{
    return;
    u32 tid = gSaveBlock2Ptr->playerTrainerId[0]
        | (gSaveBlock2Ptr->playerTrainerId[1] << 8)
        | (gSaveBlock2Ptr->playerTrainerId[2] << 16)
        | (gSaveBlock2Ptr->playerTrainerId[3] << 24);

    u32 personality = GetBoxMonDataAt(boxId, monSlot, MON_DATA_PERSONALITY);
    bool32 isShiny = ShouldMonBeShiny(personality, tid);

    SetBoxMonDataAt(boxId, monSlot, MON_DATA_IS_SHINY, &isShiny);
}

void GiveSiliconStarter(enum SiliconStarters slot)
{
    u32 boxSlot = 0;
    const struct StarterMonTemplate *starter = &sStarterMonTable[slot];

    ScriptGiveMonParameterized(
            0, PARTY_SIZE, starter->species, starter->level, starter->item, starter->ball,
            starter->nature, starter->abilityNum, starter->gender,
            (u8 *)starter->evs, (u8 *)starter->ivs, (u16 *)starter->moves,
            SHINY_MODE_RANDOM, FALSE, NUMBER_OF_MON_TYPES, 0
            );

    SetStarterExp(boxSlot, slot, starter->species, starter->level, starter->nextExpPercent);
    SetStarterFriendship(boxSlot, slot, starter->friendship);
    RollForShiny(boxSlot, slot);

    BoxMonAtToMon(boxSlot, slot, &gPlayerParty[0]);
    CalculateMonStats(&gPlayerParty[0]);
    SetBoxMonAt(boxSlot, slot, &gPlayerParty[0].box);
    CompactPartySlots();
}

static void GiveDebugStarter(void)
{
#ifdef NDEBUG
    return;
#endif

    u8 evs[NUM_STATS] = {0,0,0,0,0,0};
    u8 ivs[NUM_STATS] = {31,31,31,31,31,31};
    u16 moves[2][4] = {
        {MOVE_DIG,MOVE_SURF,0,0},
        {MOVE_DRAIN_PUNCH,MOVE_BULLET_PUNCH,0,0}
    };

    ScriptGiveMonParameterized(0,PARTY_SIZE,SPECIES_MUDKIP,22,ITEM_NONE,ITEM_CHERISH_BALL,NATURE_BOLD,2,MON_FEMALE,evs,ivs,moves[0],SHINY_MODE_RANDOM,0,NUMBER_OF_MON_TYPES,0);
    ScriptGiveMonParameterized(0,PARTY_SIZE,SPECIES_PANGORO,22,ITEM_NONE,ITEM_BEAST_BALL,NATURE_ADAMANT,2,MON_MALE,evs,ivs,moves[1],SHINY_MODE_ALWAYS,0,NUMBER_OF_MON_TYPES,0);
}

void MoveStarterToParty(void)
{
    u32 species = VarGet(VAR_CHOSEN_PSF_STARTER);
    u32 starterSlot = GetSlotFromStarter(species);
    BoxMonAtToMon(0,starterSlot,&gPlayerParty[0]);

    ResetPokemonStorageSystem();
    ResetPokedex();
    GetSetPokedexFlag(species,FLAG_SET_CAUGHT);
    GiveDebugStarter();
    CompactPartySlots();
}
