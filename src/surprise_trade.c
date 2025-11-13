#include "global.h"
#include "pokemon.h"
#include "pokemon_summary_screen.h"
#include "strings.h"
#include "daycare.h"
#include "random.h"
#include "overworld.h"
#include "text.h"
#include "event_data.h"
#include "region_map.h"
#include "malloc.h"
#include "constants/species.h"
#include "constants/items.h"
#include "constants/abilities.h"
#include "constants/region_map_sections.h"
#include "item.h"
#include "constants/item.h"
#include "constants/hold_effects.h"
#include "mail.h"
#include "constants/pokemon.h"
#include "party_menu.h"
#include "siliconStarter.h"
#include "field_weather.h"
#include "constants/weather.h"
#include "battle.h"
#include "string_util.h"
#include "daycare.h"
#include "surprise_trade.h"
#include "data/surprise_trade_ot.h"

static u32 GenerateSurpriseTradeSpecies(void);
static u32 CalculateSurpriseTradeExperience(u32 level, u32 species);
static void AddSurpriseTradeMoves(struct Pokemon *mon);
static void AddLevelUpMoves(struct Pokemon *mon, u32 species, u32 *finalMoves);
static void InsertSurpriseTradeMove(u32 count, u32 startingSlot, u32 *finalMoves, const u32 *candidates);
static void AddTeachableMove(struct Pokemon *mon, u32 species, u32 *finalMoves);
static void AddEggMove(struct Pokemon *mon, u32 species, u32 *finalMoves);
static void ApplyFinalMoves(struct Pokemon *mon, u32 *finalMoves);
static void CompactMoveSlots(struct Pokemon *mon);
static void AddSurpriseTradeEffortValues(struct Pokemon* mon);
static u32 GenerateSurpriseTradeAbility(u32 species);
static bool32 IsItemBlocked(u32 item);
static u32 GenerateSurpriseTradeItem(void);
static u32 GenerateSurpriseTradeBall(void);

void CreateWonderTradePokemon(void)
{
    u32 wonderTradeSpecies = GenerateSurpriseTradeSpecies();
    u32 playerMonLevel = GetMonData(&gPlayerParty[gSpecialVar_0x8005], MON_DATA_LEVEL);
    u32 experience = CalculateSurpriseTradeExperience(playerMonLevel, wonderTradeSpecies);
    u32 newHeldItem = GenerateSurpriseTradeItem();
    u32 abilityNum = GenerateSurpriseTradeAbility(wonderTradeSpecies);
    enum PokeBall ball = GenerateSurpriseTradeBall();

    u32 trainer = Random() % ARRAY_COUNT(surpriseTradeTrainer);
    u8* name = Alloc(TRAINER_NAME_LENGTH+1);
    StringCopy(name, surpriseTradeTrainer[trainer].otName);

    u32 otId = surpriseTradeTrainer[trainer].otId;
    u32 otGender = surpriseTradeTrainer[trainer].otGender;

    u32 metLocation = METLOC_IN_GAME_TRADE;

    CreateMon(&gEnemyParty[0], wonderTradeSpecies, 1, USE_RANDOM_IVS, FALSE, 0, OT_ID_PRESET, otId);

    bool32 isShiny = ShouldMonBeShiny(GetMonData(&gEnemyParty[0],MON_DATA_PERSONALITY),otId);

    SetMonData(&gEnemyParty[0], MON_DATA_EXP, &experience);
    SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, &newHeldItem);
    SetMonData(&gEnemyParty[0], MON_DATA_ABILITY_NUM, &abilityNum);
    SetMonData(&gEnemyParty[0], MON_DATA_IS_SHINY, &isShiny);

    SetMonData(&gEnemyParty[0], MON_DATA_OT_NAME, name);
    SetMonData(&gEnemyParty[0], MON_DATA_OT_ID, &otId);
    SetMonData(&gEnemyParty[0], MON_DATA_OT_GENDER, &otGender);
    SetMonData(&gEnemyParty[0], MON_DATA_MET_LOCATION, &metLocation);
    SetMonData(&gEnemyParty[0], MON_DATA_POKEBALL, &ball);

    AddSurpriseTradeEffortValues(&gEnemyParty[0]);
    AddSurpriseTradeMoves(&gEnemyParty[0]);

    CalculateMonStats(&gEnemyParty[0]);
    Free(name);
}

static u32 GenerateSurpriseTradeSpecies(void)
{
    u32 species = Random() % RESIDO_DEX_COUNT;
    u32 residoDexList[RESIDO_DEX_COUNT];

    for (u32 speciesIndex = 0; speciesIndex < RESIDO_DEX_COUNT; speciesIndex++)
        residoDexList[speciesIndex] = speciesIndex;

    Shuffle(residoDexList,RESIDO_DEX_COUNT,sizeof(residoDexList[0]));

    for (u32 speciesIndex = 0; speciesIndex < NUM_SPECIES; speciesIndex++)
    {
        u32 newSpecies = residoDexList[speciesIndex];
        //PSF TODO replace natDexNum with residoDexNum
        if (gSpeciesInfo[newSpecies].natDexNum != species)
            continue;

        if (gSpeciesInfo[newSpecies].isMegaEvolution)
            continue;

        if (gSpeciesInfo[newSpecies].isLegendary)
            continue;

        if (gSpeciesInfo[newSpecies].isMythical)
            continue;

        if (gSpeciesInfo[newSpecies].isUltraBeast)
            continue;

        if (gSpeciesInfo[newSpecies].isParadox)
            continue;

        break;
    }
    return GetEggSpecies(species);
}

static u32 CalculateSurpriseTradeExperience(u32 level, u32 species)
{
    u32 growthRate = gSpeciesInfo[species].growthRate;
    u32 expLimit = gExperienceTables[growthRate][level + 1];
    u32 topLimit = gExperienceTables[growthRate][MAX_LEVEL];

    u32 exp = Random() % expLimit;

    if (exp == 0)
        exp = 1;
    else if (exp > topLimit)
        exp = topLimit;

    return exp;
}

void AddSurpriseTradeMoves(struct Pokemon *mon)
{
    u32 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u32 finalMoves[MAX_MON_MOVES] = {MOVE_NONE};

    AddLevelUpMoves(mon, species, finalMoves);

    if (Random() & 1)
        AddTeachableMove(mon, species, finalMoves);

    if (Random() & 1)
        AddEggMove(mon, species, finalMoves);

    ApplyFinalMoves(mon, finalMoves);
    CompactMoveSlots(mon);
}

static void AddLevelUpMoves(struct Pokemon *mon, u32 species, u32 *finalMoves)
{
    u32 learnedMoves[MAX_MON_MOVES] = {MOVE_NONE};
    u32 learnedCount = 0;
    u32 level = GetLevelFromMonExp(mon);

    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);
    for (u32 i = 0; learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].level > level || learnset[i].level == 0)
            continue;

        bool32 alreadyIn = FALSE;
        for (u32 learnedMoveIndex = 0; learnedMoveIndex < learnedCount; learnedMoveIndex++)
        {
            if (learnedMoves[learnedMoveIndex] != learnset[i].move)
                continue;

            alreadyIn = TRUE;
            break;
        }

        if (!alreadyIn && learnedCount < ARRAY_COUNT(learnedMoves))
            learnedMoves[learnedCount++] = learnset[i].move;
    }

    u32 start = (learnedCount >= MAX_MON_MOVES) ? learnedCount - MAX_MON_MOVES : 0;
    u32 finalCount = 0;
    for (u32 moveIndex = start; moveIndex < learnedCount && finalCount < MAX_MON_MOVES; moveIndex++)
        finalMoves[finalCount++] = learnedMoves[moveIndex];
}

static void InsertSurpriseTradeMove(u32 count, u32 startingSlot, u32 *finalMoves, const u32 *candidates)
{
    if (!count)
        return;

    u32 newSlot = startingSlot - 2;

    if (finalMoves[startingSlot] == MOVE_NONE)
        finalMoves[startingSlot] = finalMoves[newSlot];

    finalMoves[newSlot] = candidates[Random() % count];
}

static void AddTeachableMove(struct Pokemon *mon, u32 species, u32 *finalMoves)
{
    const u16 *teachableMoves = GetSpeciesTeachableLearnset(species);
    u32 candidates[MOVES_COUNT];
    u32 count = 0;

    for (u32 teachIndex = 0; teachableMoves[teachIndex] != MOVE_UNAVAILABLE && teachableMoves[teachIndex] != MOVE_NONE && teachIndex < MOVES_COUNT; teachIndex++)
    {
        bool32 alreadyKnown = FALSE;
        for (u32 moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
        {
            if (finalMoves[moveIndex] != teachableMoves[teachIndex])
                continue;

            alreadyKnown = TRUE;
            break;
        }

        if(!alreadyKnown)
            candidates[count++] = teachableMoves[teachIndex];
    }

    InsertSurpriseTradeMove(count,SURPRISE_TRADE_TEACHABLE_MOVE_SLOT,finalMoves,candidates);
}

static void AddEggMove(struct Pokemon *mon, u32 species, u32 *finalMoves)
{
    u16 eggMoves[EGG_MOVES_ARRAY_COUNT];
    u32 eggCount = GetEggMovesBySpecies(species, eggMoves);
    u32 candidates[EGG_MOVES_ARRAY_COUNT];
    u32 count = 0;

    for (u32 eggIndex = 0; eggIndex < eggCount; eggIndex++)
    {
        if (eggMoves[eggIndex] == MOVE_NONE)
            continue;

        bool32 alreadyKnown = FALSE;
        for (u32 moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
        {
            if (finalMoves[moveIndex] == eggMoves[eggIndex])
            {
                alreadyKnown = TRUE;
                break;
            }
        }

        if (!alreadyKnown)
            candidates[count++] = eggMoves[eggIndex];
    }

    InsertSurpriseTradeMove(count,SURPRISE_TRADE_EGG_MOVE_SLOT,finalMoves,candidates);
}

static void ApplyFinalMoves(struct Pokemon *mon, u32 *finalMoves)
{
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        SetMonData(mon, MON_DATA_MOVE1 + i, &finalMoves[i]);
        u32 pp = GetMovePP(finalMoves[i]);
        SetMonData(mon, MON_DATA_PP1 + i, &pp);
    }
}

static void CompactMoveSlots(struct Pokemon *mon)
{
    for (u32 i = 0; i < MAX_MON_MOVES - 1; i++)
    {
        u32 move = GetMonData(mon, MON_DATA_MOVE1 + i);

        if (move != MOVE_NONE)
            continue;

        move = GetMonData(mon, MON_DATA_MOVE1 + i + 1);

        if (move == MOVE_NONE)
            continue;

        ShiftMoveSlot(mon, i, i + 1);
    }
}

static void AddSurpriseTradeEffortValues(struct Pokemon* mon)
{
    s32 level = GetLevelFromMonExp(mon);
    u32 levelRatio = (level * 100) / MAX_LEVEL;
    u32 remaining = (MAX_TOTAL_EVS * levelRatio) / 100;
    u32 statIndex = 0;
    u32 evs[NUM_STATS] = {0};

    if (remaining > MAX_TOTAL_EVS)
        remaining = MAX_TOTAL_EVS;

    while (remaining > 0)
    {
        statIndex = Random() % NUM_STATS;
        if (evs[statIndex] >= MAX_PER_STAT_EVS)
            continue;

        evs[statIndex]++;
        remaining--;
    }

    for (statIndex = 0; statIndex < NUM_STATS; statIndex++)
        SetMonData(mon, MON_DATA_HP_EV + statIndex, &evs[statIndex]);
}

static u32 GenerateSurpriseTradeAbility(u32 species)
{
    u32 ability = Random() % NUM_NORMAL_ABILITY_SLOTS;

    if (gSpeciesInfo[species].abilities[2] == ABILITY_NONE)
        return ability;

    if ((Random() % 10) < 2)
        return 2;

    return ability;
}

const u32 blockedHoldEffects[] =
{
    HOLD_EFFECT_NONE,
    HOLD_EFFECT_REPEL,
    HOLD_EFFECT_SOUL_DEW,
    HOLD_EFFECT_DEEP_SEA_TOOTH,
    HOLD_EFFECT_DEEP_SEA_SCALE,
    HOLD_EFFECT_DRAGON_SCALE,
    HOLD_EFFECT_LIGHT_BALL,
    HOLD_EFFECT_THICK_CLUB,
    HOLD_EFFECT_LEEK,
    HOLD_EFFECT_ADAMANT_ORB,
    HOLD_EFFECT_LUSTROUS_ORB,
    HOLD_EFFECT_GRISEOUS_ORB,
    HOLD_EFFECT_ENIGMA_BERRY,
    HOLD_EFFECT_PLATE,
    HOLD_EFFECT_DRIVE,
    HOLD_EFFECT_GEMS,
    HOLD_EFFECT_MEGA_STONE,
    HOLD_EFFECT_PRIMAL_ORB,
    HOLD_EFFECT_MEMORY,
    HOLD_EFFECT_Z_CRYSTAL,
    HOLD_EFFECT_BOOSTER_ENERGY,
    HOLD_EFFECT_OGERPON_MASK,
};

static bool32 IsItemBlocked(u32 item)
{
    u32 itemHoldEffect = GetItemHoldEffect(item);

    if (GetItemImportance(item))
        return TRUE;

    for (u32 holdIndex = 0; holdIndex < ARRAY_COUNT(blockedHoldEffects); holdIndex++)
        if (itemHoldEffect == blockedHoldEffects[holdIndex])
            return TRUE;

    return FALSE;
}

static u32 GenerateSurpriseTradeItem(void)
{
    u32 item = ITEM_NONE;

    if (Random() % 10 < 5)
        return ITEM_NONE;

    while (IsItemBlocked(item))
        item = Random() % ITEMS_COUNT;

    return item;
}

static u32 GenerateSurpriseTradeBall(void)
{
    enum PokeBall ball = BALL_POKE;

    if (Random() % 2 == 0)
        return ball;

    while (ball == BALL_STRANGE
            || ball == BALL_POKE
            || ball == BALL_MASTER
            || ball == BALL_SAFARI
            || ball == BALL_SPORT
            || ball == BALL_PARK
            || ball == BALL_CHERISH
          )
        ball = Random() % POKEBALL_COUNT;

    return ball;
}

void ShowTradedMonReturnToStartMenu(void)
{
    ShowPokemonSummaryScreen(SUMMARY_MODE_NORMAL, &gPlayerParty[gSpecialVar_0x8005], 0, 0, CB2_StartMenu_ReturnToUI);
}
