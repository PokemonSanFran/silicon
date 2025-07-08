#ifndef GUARD_PHENOMENON_H
#define GUARD_PHENOMENON_H

void TryCreatingPhenomenon(void);
u8 IsPlayerOnPhenomenon(void);
u16 GetCurrentPhenomenonArgument(void);
bool8 CheckForPhenomenon(void);
void TryToCleanPhenomenonDataFromScript(void);
void CheckForNPCPhenomenon(void);
void CheckForNPCSteppingIntoPhenomenon(s16 npcX, s16 npcY);
void CheckForNPCPhenomenonFromObjectEvent(struct ObjectEvent *objectEvent);
void ClearAllPhenomenonData(void);
void SpriteCB_PlayFieldEffectSound(struct Sprite *sprite);
void RestartPhenomenon(void);

#define ENABLE_COMMON_ENCOUNTERS             FALSE        // If enabled will let rustling grass spawn Pokemon in the Land encounter table + the Phenomenon encounter table
#define PHENOMENON_COMMON_ENCOUNTER_CHANCE   30           // Percent of chances of getting a common encounter if ENABLE_COMMON_ENCOUNTERS is enabled
#define PHENOMENON_FORCE_ONLY_ENCOUNTER_TYPE TRUE         // If enabled will force the use only of an specific Phenomenon type per map
#define PHENOMENON_ENABLE_IN_ALL_MAPS        TRUE         // If enabled makes the chance of getting phenomenons on any map possible if there are correct tiles for it and a proper encounter table(only works if you have PHENOMENON_FORCE_ONLY_ENCOUNTER_TYPE disabled)
#define B_FLAG_ENABLE_PHENOMENON             0            // If this flag has a value, the player will only see phenomenon after this flag has been set.
#define NUM_MAX_PHENOMENONS                  1            // Number of Maximum Phenomenons at once
#define PHENOMENON_ITEM_CHANCE               20           // Chance of getting an item instead of an encounter(where possible)
#define FLAG_CHECKING_PHENOMENON             FLAG_TEMP_10 // This flag is used when ScriptContext_SetupScript is ran to see if the script that was called was one related to phenomenons, if not it will clear all the Phenomenon data
#define PHENOMENON_CHANCE_PER_STEP           1            // Chance of a Phenomenon Spawning each step


#endif // GUARD_PHENOMENON_H
