#include "global.h"
#include "pokemon.h"
#include "test/battle.h"
#include "gba/isagbprint.h"

TEST("Opposing Trainers do not have Game Move Errors")
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

                for (u32 moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
                {
                    bool32 retVal = FALSE;
                    enum Move move = party[monIndex].moves[moveIndex];

                    if (move == MOVE_NONE)
                    {
                        continue;
                    }

                    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);
                    for (u32 j = 0; learnset[j].move != LEVEL_UP_MOVE_END; j++)
                    {
                        if (learnset[j].move == move)
                        {
                            retVal = TRUE;
                            break;
                        }
                    }

                    if (retVal)
                        continue;

                    const u16 *teachables = GetSpeciesTeachableLearnset(species);
                    for (u32 j = 0; teachables[j] != MOVE_UNAVAILABLE; j++)
                    {
                        if (teachables[j] == move)
                        {
                            retVal = TRUE;
                            break;
                        }
                    }

                    if (retVal)
                        continue;

                    const u16 *eggMoves = GetSpeciesEggMoves(species);
                    for (u32 j = 0; eggMoves[j] != MOVE_UNAVAILABLE; j++)
                    {
                        if (eggMoves[j] == move)
                        {
                            retVal = TRUE;
                            break;
                        }
                    }

                    if (retVal)
                        continue;

                    u16 currentSpecies = species;
                    for (u32 evoDepth = 0; evoDepth < 5 && !retVal; evoDepth++)
                    {
                        bool32 foundPrevo = FALSE;
                        u16 prevoSpecies = SPECIES_NONE;

                        for (u32 s = 1; s < NUM_SPECIES; s++)
                        {
                            if (!IsSpeciesEnabled(s))
                                continue;

                            const struct Evolution *evolutions = GetSpeciesEvolutions(s);
                            if (evolutions == NULL)
                                continue;

                            for (u32 e = 0; evolutions[e].method != EVOLUTIONS_END; e++)
                            {
                                if (SanitizeSpeciesId(evolutions[e].targetSpecies) == currentSpecies)
                                {
                                    prevoSpecies = s;
                                    foundPrevo = TRUE;

                                    const struct LevelUpMove *prevLearnset = GetSpeciesLevelUpLearnset(prevoSpecies);
                                    for (u32 j = 0; prevLearnset[j].move != LEVEL_UP_MOVE_END; j++)
                                    {
                                        if (prevLearnset[j].move == move)
                                        {
                                            retVal = TRUE;
                                            break;
                                        }
                                    }

                                    if (!retVal)
                                    {
                                        const u16 *prevTeachables = GetSpeciesTeachableLearnset(prevoSpecies);
                                        for (u32 j = 0; prevTeachables[j] != MOVE_UNAVAILABLE; j++)
                                        {
                                            if (prevTeachables[j] == move)
                                            {
                                                retVal = TRUE;
                                                break;
                                            }
                                        }
                                    }

                                    if (!retVal)
                                    {
                                        const u16 *prevEggMoves = GetSpeciesEggMoves(prevoSpecies);
                                        for (u32 j = 0; prevEggMoves[j] != MOVE_UNAVAILABLE; j++)
                                        {
                                            if (prevEggMoves[j] == move)
                                            {
                                                retVal = TRUE;
                                                break;
                                            }
                                        }
                                    }

                                    break;
                                }
                            }

                            if (foundPrevo)
                                break;
                        }

                        if (retVal)
                            break;

                        if (!foundPrevo)
                            break;

                        currentSpecies = prevoSpecies;
                    }

                    if (retVal)
                        continue;

                    Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__, ":L%s:%d: Pokemon %d for %S is a %S with %S.", gTestRunnerState.test->filename, __LINE__, monIndex, GetTrainerNameFromId(trainerId), GetSpeciesName(species), GetMoveName(move));
                }
            }
        }
    }
}


