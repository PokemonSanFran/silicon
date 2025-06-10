#include "global.h"
#include "battle_tower.h"
#include "cable_club.h"
#include "data.h"
#include "daycare.h"
#include "decoration.h"
#include "diploma.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "field_camera.h"
#include "field_effect.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "field_weather.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item_icon.h"
#include "link.h"
#include "load_save.h"
#include "list_menu.h"
#include "main.h"
#include "mystery_gift.h"
#include "match_call.h"
#include "menu.h"
#include "overworld.h"
#include "party_menu.h"
#include "pokeblock.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "quests.h"
#include "random.h"
#include "rayquaza_scene.h"
#include "region_map.h"
#include "rtc.h"
#include "script.h"
#include "script_menu.h"
#include "sound.h"
#include "starter_choose.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "tv.h"
#include "wallclock.h"
#include "window.h"
#include "constants/battle_frontier.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_tower.h"
#include "constants/decorations.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_specials.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/map_types.h"
#include "constants/mystery_gift.h"
#include "constants/slot_machine.h"
#include "constants/songs.h"
#include "constants/moves.h"
#include "constants/quests.h"
#include "constants/party_menu.h"
#include "constants/battle_frontier.h"
#include "constants/weather.h"
#include "constants/metatile_labels.h"
#include "palette.h"
#include "pokemon_storage_system.h"
#include "options_visual.h"
#include "little_cup.h"
#include "battle_util.h"

#define VAR_LITTLE_CUP VAR_TEMP_2

bool32 IsCurrentBattleLittleCup(void)
{
    return (FlagGet(FLAG_LITTLE_CUP_BATTLE));
}

bool32 WasPreviousBattleLittleCup(void)
{
    return (VarGet(VAR_LITTLE_CUP) == 1);
}

void ResetTemporaryLittleCupVar(void)
{
    VarSet(VAR_LITTLE_CUP,0);
}

void SetTemporaryLittleCupVar(void)
{
    VarSet(VAR_LITTLE_CUP,1);
}

bool8 CheckPlayerLittleCupEligibility(void)
{
    u8 i;
    bool8 pass = FALSE;
    u16 species = 0;

    gSpecialVar_0x8005 = SPECIES_NONE;

    for(i = 0; i < PARTY_SIZE; i++)
    {
        species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        if (species == SPECIES_NONE || species == SPECIES_EGG)
            continue;
        if (GetEggSpecies(species) != species)
        {
            gSpecialVar_0x8005 = species;
            gSpecialVar_0x8004 = GetEggSpecies(species);
            return TRUE;
        }
        if (CanEvolve(species))
            pass = TRUE;
    }

    return pass;
}

void PreparePartyForLittleCupBattle(void)
{
    int i, j, k, l, participatingPokemonSlot = 0;
    u16 move, species, species2;
    u16 moves[4];
    u16 speciesEggMoves[EGG_MOVES_ARRAY_COUNT] = {0};
    u8 partyCount = CalculatePlayerPartyCount();
    u8 numEggMoves;
    bool8 pass, pass2;
    const struct LevelUpMove *learnset;

    SavePlayerParty();

    for (i = 0; i < partyCount; i++)
    {
        struct Pokemon* pokemon = &gPlayerParty[i];
        species = GetMonData(pokemon, MON_DATA_SPECIES_OR_EGG);
        species2 = GetEggSpecies(species);

        SetMonData(pokemon, MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[species].growthRate][LITTLE_CUP_LEVEL]);
        CalculateMonStats(pokemon);

        if (species != SPECIES_NONE && species != SPECIES_EGG &&
                (species2 != species || CanEvolve(species)))
        {
            // Set species and level
            SetMonData(pokemon, MON_DATA_SPECIES, &species2);
            CalculateMonStats(pokemon);
            // Go through moves in case the species are not identical
            if (species != species2)
            {
                EvolutionRenameMon(pokemon, species, species2);
                learnset = GetSpeciesLevelUpLearnset(species2);
                numEggMoves = GetEggMovesBySpecies(species2, speciesEggMoves);
                k = 0;
                pass = FALSE;
                pass2 = FALSE;
                // Filter out incompatible moves
                for (j = 0; j < 4; j++)
                {
                    move = GetMonData(pokemon, MON_DATA_MOVE1 + j);
                    if (CanLearnTeachableMove(species2, move))
                    {
                        moves[k] = move;
                        k++;
                        continue;
                    }
                    for (l = 0; l < MAX_LEVEL_UP_MOVES; l++)
                    {
                        if (learnset[l].move == LEVEL_UP_MOVE_END)
                            break;

                        if (learnset[l].move == move)
                        {
                            moves[k] = move;
                            k++;
                            pass = TRUE;
                            break;
                        }
                    }
                    if (pass)
                        continue;
                    for (l = 0; l < numEggMoves; l++)
                    {
                        if (speciesEggMoves[l] == move)
                        {
                            moves[k] = move;
                            k++;
                            break;
                        }
                    }
                }
                // Replace incompatible moves with default moves
                pass = FALSE;

                for(j = MAX_LEVEL_UP_MOVES; j >= 0; j--)
                {
                    if (learnset[j].move == LEVEL_UP_MOVE_END)
                    {
                        pass = TRUE;
                        continue;
                    }
                    if (pass)
                    {
                        if (learnset[j].level > LITTLE_CUP_LEVEL)
                            continue;
                        // Check if move not already known
                        pass2 = TRUE;
                        for(l = 0; l < k; l++)
                        {
                            if (moves[l] == learnset[j].move)
                                pass2 = FALSE;
                        }
                        if (pass2 == FALSE)
                            continue;
                        moves[k] = learnset[j].move;
                        k++;
                        if (k == 4 || j == 0)
                            break;
                    }
                }
                // Remove all other moves
                for (; k < 4; k++)
                {
                    moves[k] = MOVE_NONE;
                }
                for (j = 0; j < 4; j++)
                {
                    move = moves[j];
                    SetMonData(pokemon, MON_DATA_MOVE1 + j, &move);
                    SetMonData(pokemon, MON_DATA_PP1 + j, &gMovesInfo[move].pp);
                }
            }
            participatingPokemonSlot += 1 << i;
        }
        else
            ZeroMonData(pokemon);
    }
    CompactPartySlots();
    FlagSet(FLAG_LITTLE_CUP_BATTLE);
}
