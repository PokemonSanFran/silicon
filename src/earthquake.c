#include "global.h"
#include "malloc.h"
#include "battle.h"
#include "battle_tower.h"
#include "cable_club.h"
#include "data.h"
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
#include "battle_util.h"
#include "earthquake.h"

#define MAX_NUM_NATURAL_EARTHQUAKE 7
#define EARTHQUAKE_STEP_THRESHOLD 10000
#define EARTHQUAKE_RANDOM 100
#define AFTERSHOCK_RANDOM (EARTHQUAKE_RANDOM / 10)

#define MIN_NATURAL_PAN 1
#define MAX_NATURAL_HORIZONTAL_PAN 3
#define MAX_NATURAL_VERTICAL_PAN 3

#define MIN_NATURAL_SHAKES 2
#define MAX_NATURAL_SHAKES 15

#define NATURAL_DELAY 10

#define BASE_FAKE_HORIZONTAL_PAN 5
#define BASE_FAKE_VERTICAL_PAN 5

#define FAKE_SHAKES 30

#define BASE_FAKE_DELAY 5

#define SPEECH_FAKE 1
#define TAKEDOWN_FAKE 2
#define HALAI_FAKE 3

#define VAR_VERTICAL_PAN VAR_0x8004
#define VAR_HORIZONTAL_PAN VAR_0x8005
#define VAR_NUMBER_OF_SHAKES VAR_0x8006
#define VAR_SHAKE_DELAY VAR_0x8007

static u32 GetEarthquakeCount(void);
static bool32 HasPlayerExperiencedMaxEarthquakes(void);
static u32 GetEarthquakeStepCounter(void);
static bool32 IsEarthquakeStepCounterReady(void);
static void IncrementEarthquakeStepCounter(void);
static void IncrementEarthquakeCounter(void);
static void ResetEarthquakeStepCounter(void);
static u32 GenerateEarthquakeChance(void);
static bool32 IsTimeForEarthquake(u32 chance);
static u32 GenerateNaturalValue(u32 value);
static u32 GenerateNaturalShakes(void);
static void LoadFakeEarthquake(u32 count);
static u32 GenerateFakePan(u32 count, u32 pan);
static u32 GenerateFakeDelay(u32 count);
static void GenerateAftershock(void);

bool32 ShouldDoNaturalEarthquake(void)
{
    if (HasPlayerExperiencedMaxEarthquakes())
        return FALSE;

    IncrementEarthquakeStepCounter();

    if (!IsEarthquakeStepCounterReady())
        return FALSE;

    ResetEarthquakeStepCounter();

    if (!IsTimeForEarthquake(GenerateEarthquakeChance()))
        return FALSE;

    IncrementEarthquakeCounter();

    return TRUE;
}

static u32 GetEarthquakeCount(void)
{
    return VarGet(VAR_EARTHQUAKE_COUNT);
}

static bool32 HasPlayerExperiencedMaxEarthquakes(void)
{
    return (GetEarthquakeCount() >= MAX_NUM_NATURAL_EARTHQUAKE);
}

static void IncrementEarthquakeStepCounter(void)
{
    (++(*GetVarPointer(VAR_EARTHQUAKE_STEP_COUNTER)));
}

static u32 GetEarthquakeStepCounter(void)
{
    return VarGet(VAR_EARTHQUAKE_STEP_COUNTER);
}

static bool32 IsEarthquakeStepCounterReady(void)
{
    return (GetEarthquakeStepCounter() >= EARTHQUAKE_STEP_THRESHOLD);
}

static void ResetEarthquakeStepCounter(void)
{
    VarSet(VAR_EARTHQUAKE_STEP_COUNTER,0);
}

static u32 GenerateEarthquakeChance(void)
{
    return (Random() % EARTHQUAKE_RANDOM);
}

static bool32 IsTimeForEarthquake(u32 chance)
{
    return (chance == 0);
}


static void IncrementEarthquakeCounter(void)
{
    (++(*GetVarPointer(VAR_EARTHQUAKE_COUNT)));
}

void LoadNaturalValues(void)
{
    u32 horizontal = GenerateNaturalValue(MAX_NATURAL_HORIZONTAL_PAN);
    u32 vertical = GenerateNaturalValue(MAX_NATURAL_VERTICAL_PAN);
    u32 shakes = GenerateNaturalShakes();

    DebugPrintf("hor is %d, vertical is %d, shakes is %d",horizontal,vertical,shakes);

    GenerateAftershock();
    VarSet(VAR_VERTICAL_PAN,vertical);
    VarSet(VAR_HORIZONTAL_PAN,horizontal);
    VarSet(VAR_NUMBER_OF_SHAKES,shakes);
    VarSet(VAR_SHAKE_DELAY,NATURAL_DELAY);
}

static u32 GenerateNaturalValue(u32 value)
{
    u32 randomValue;
    do {
        randomValue = Random() % value;
    } while (randomValue < MIN_NATURAL_PAN);

    return randomValue;
}

static u32 GenerateNaturalShakes(void)
{
    u32 randomValue;
    do {
        randomValue = Random() % MAX_NATURAL_SHAKES;
    } while (randomValue < MIN_NATURAL_SHAKES);

    return randomValue;
}

static void GenerateAftershock(void)
{
    FlagClear(FLAG_TEMP_1);

    if ((Random() % AFTERSHOCK_RANDOM) == 0)
        FlagSet(FLAG_TEMP_1);
}

void GetStoryLoadFakeEarthquake(void)
{
    u32 sequence = 0;

    switch (VarGet(VAR_STORYLINE_STATE))
    {
        case STORY_PRE_EARTHQUAKE:
            sequence = HALAI_FAKE;
        case STORY_RAVE_AND_SPEECH_COMPLETE:
            sequence = TAKEDOWN_FAKE;
        default:
            sequence = SPEECH_FAKE;
    }

    LoadFakeEarthquake(sequence);
}

static void LoadFakeEarthquake(u32 count)
{
    u32 vertical = GenerateFakePan(count,BASE_FAKE_VERTICAL_PAN);
    u32 horizontal = GenerateFakePan(count,BASE_FAKE_HORIZONTAL_PAN);
    u32 delay = GenerateFakeDelay(count);

    VarSet(VAR_VERTICAL_PAN,vertical);
    VarSet(VAR_HORIZONTAL_PAN,horizontal);
    VarSet(VAR_NUMBER_OF_SHAKES,FAKE_SHAKES);
    VarSet(VAR_SHAKE_DELAY,delay);
}

static u32 GenerateFakePan(u32 count, u32 pan)
{
    u32 i, result = 1;

    for (i = 0; i < count; ++i)
        result *= pan;

    return result;
}

static u32 GenerateFakeDelay(u32 count)
{
    if (count == HALAI_FAKE)
        return BASE_FAKE_DELAY * 2;
    else
        return BASE_FAKE_DELAY;
}

static const u8* const feltEarthquakeArray[] =
{
    gText_NaturalEarthquake_0,\
    gText_NaturalEarthquake_1,\
    gText_NaturalEarthquake_2,\
    gText_NaturalEarthquake_3,\
    gText_NaturalEarthquake_4,\
    gText_NaturalEarthquake_5,\
    gText_NaturalEarthquake_6,\
    gText_NaturalEarthquake_7,\
    gText_NaturalEarthquake_8,\
    gText_NaturalEarthquake_9
};

void BufferRandomEarthquakeString(void)
{
    u32 randIndex = Random() % (ARRAY_COUNT(feltEarthquakeArray));
    StringCopy(gStringVar1,feltEarthquakeArray[randIndex]);
}
