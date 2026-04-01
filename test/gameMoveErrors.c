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
                    for (u32 j = 0; learnset[j].move != LEVEL_UP_MOVE_END;j++)
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
                    for (u32 j = 0; teachables[j] != MOVE_UNAVAILABLE;j++)
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
                    for (u32 j = 0; eggMoves[j] != MOVE_UNAVAILABLE;j++)
                    {
                        if (eggMoves[j] == move)
                        {
                            retVal = TRUE;
                            break;
                        }
                    }

                    if (retVal)
                        continue;

                    Test_ExitWithResult(TEST_RESULT_FAIL, __LINE__, ":L%s:%d: Pokemon %d for %S is a %S with %S.", gTestRunnerState.test->filename, __LINE__, monIndex, GetTrainerNameFromId(trainerId), GetSpeciesName(species), GetMoveName(move));
                }
            }

        }
    }
}

