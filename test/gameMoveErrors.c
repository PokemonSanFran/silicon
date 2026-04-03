#include "global.h"
#include "pokemon.h"
#include "daycare.h"
#include "ui_pokedex.h"
//#include "constants/ui_resido_species.h"
#include "test/battle.h"
#include "gba/isagbprint.h"

TEST("Opposing Trainers have Pokemon in the Resido Dex")
{
    for (enum DifficultyLevel difficulty = 0; difficulty < DIFFICULTY_COUNT; difficulty++)
    {
        for (u32 trainerId = 0; trainerId < TRAINERS_COUNT; trainerId++)
        {
            const struct Trainer *trainer = &gTrainers[difficulty][trainerId];

            if (trainer == NULL)
                continue;

            u32 partySize = trainer->partySize;

            if (partySize == 0)
            {
                continue;
            }

            const struct TrainerMon *party = trainer->party;

            for (u32 monIndex = 0; monIndex < partySize; monIndex++)
            {
                u32 species = party[monIndex].species;

                if (species == SPECIES_NONE || species >= NUM_SPECIES)
                {
                    continue;
                }

                if ((species >= SPECIES_SHARPRISE_START) && (species <= SPECIES_SHARPRISE_END))
                    continue;

                enum ResidoDexNumbers residoId = ConvertSpeciesIdToResidoDex(species);

                if (residoId != RESIDO_DEX_NONE && residoId != RESIDO_DEX_COUNT)
                    continue;

                Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__, ":L%s:%d: %S %S is not in Resido.", gTestRunnerState.test->filename, __LINE__, GetTrainerNameFromId(trainerId), GetSpeciesName(species));

            }
        }
    }
}

static bool8 CanSpeciesLearnMove(u32 species, u32 move, u32 level, u32 *neededLevel)
{

    if ((move == MOVE_OVERHEAT   && species == SPECIES_ROTOM_HEAT)  ||
            (move == MOVE_AIR_SLASH  && species == SPECIES_ROTOM_FAN)   ||
            (move == MOVE_BLIZZARD   && species == SPECIES_ROTOM_FROST) ||
            (move == MOVE_LEAF_STORM && species == SPECIES_ROTOM_MOW)   ||
            (move == MOVE_HYDRO_PUMP && species == SPECIES_ROTOM_WASH))
        return TRUE;

    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);
    for (u32 i = 0; learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].move == move)
        {
            if (learnset[i].level <= level || !IsMonInUndiscoveredOrGenderless(species))
                return TRUE;

            *neededLevel = learnset[i].level;
        }
    }

    const u16 *teachables = GetSpeciesTeachableLearnset(species);
    for (u32 i = 0; teachables[i] != MOVE_UNAVAILABLE; i++)
        if (teachables[i] == move)
            return TRUE;

    const u16 *eggMoves = GetSpeciesEggMoves(species);
    for (u32 i = 0; eggMoves[i] != MOVE_UNAVAILABLE; i++)
        if (eggMoves[i] == move)
            return TRUE;

    return FALSE;
}

static u16 GetPreEvolution(u16 targetSpecies)
{
    for (u32 species = 1; species < NUM_SPECIES; species++)
    {
        if (!IsSpeciesEnabled(species))
            continue;

        const struct Evolution *evolutions = GetSpeciesEvolutions(species);

        if (!evolutions)
            continue;

        for (u32 evolutionIndex = 0; evolutions[evolutionIndex].method != EVOLUTIONS_END; evolutionIndex++)
            if (SanitizeSpeciesId(evolutions[evolutionIndex].targetSpecies) == targetSpecies)
                return species;
    }
    return SPECIES_NONE;
}

TEST("Opposing Trainers do not have Game Move Errors")
{
    for (u32 difficulty = 0; difficulty < DIFFICULTY_COUNT; difficulty++)
    {
        for (u32 trainerId = 0; trainerId < TRAINERS_COUNT; trainerId++)
        {
            const struct Trainer *trainer = &gTrainers[difficulty][trainerId];
            if (!trainer || trainer->partySize == 0)
                continue;

            for (u32 monIndex = 0; monIndex < trainer->partySize; monIndex++)
            {
                const struct TrainerMon *mon = &trainer->party[monIndex];
                u32 species = mon->species;
                u32 level = mon->lvl;

                if (!IsSpeciesEnabled(species))
                    continue;

                for (u32 moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
                {
                    u32 move = mon->moves[moveIndex];
                    if (move == MOVE_NONE)
                        continue;

                    u32 neededLevel = 0;
                    bool32 canLearn = FALSE;
                    u32 currentSpecies = species;

                    for (u32 depth = 0; depth < 5; depth++)
                    {

                        if (CanSpeciesLearnMove(currentSpecies, move, level, &neededLevel))
                        {
                            canLearn = TRUE;
                            break;
                        }

                        currentSpecies = GetPreEvolution(currentSpecies);
                        if (currentSpecies == SPECIES_NONE)
                            break;
                    }

                    if (canLearn)
                        continue;

                    if (neededLevel > 0)
                    {
                        Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__,":L%s:%d: %S's %S (#%d) has invalid move %S (Lvl %d < Req %d).",gTestRunnerState.test->filename, __LINE__, GetTrainerNameFromId(trainerId),GetSpeciesName(species), monIndex, GetMoveName(move), level, neededLevel);
                    }
                    else
                    {
                        Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__,":L%s:%d: %S's %S (#%d) has invalid move %S.",gTestRunnerState.test->filename, __LINE__, GetTrainerNameFromId(trainerId),GetSpeciesName(species), monIndex, GetMoveName(move));
                    }
                }
            }
        }
    }
}
