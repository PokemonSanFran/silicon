#include "global.h"
#include "event_object_movement.h"
#include "event_data.h"
#include "wild_encounter.h"
#include "fieldmap.h"
#include "field_screen_effect.h"
#include "item.h"
#include "malloc.h"
#include "mazegen.h"
#include "quests.h"
#include "quest_logic.h"
#include "string_util.h"
#include "story_jump.h"
#include "constants/songs.h"
#include "sound.h"
#include "field_effect.h"

#include "overworld.h"
#include "random.h"
#include "constants/items.h"
#include "constants/event_objects.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "field_control_avatar.h"
#include "event_scripts.h"
#include "map_name_popup.h"
#include "hidden_grotto.h"
#include "data/hidden_grotto.h"

static void HiddenGrotto_WarpPlayerToGrotto(u32 grottoMapGroup, u32 grottpMapNum);
static void HiddenGrotto_SetGrottoChoice(enum HiddenGrottoId grottoIndex, enum HiddenGrottoSecretsId chosen);
static void HiddenGrotto_ClearFlagSetSecret(enum HiddenGrottoId grottoIndex, u16 flag);
static void GenerateGrottoBattle(enum HiddenGrottoId grottoId);
static enum HiddenGrottoSecretsId HiddenGrotto_GetGrottoChoice(enum HiddenGrottoId grottoIndex);

static const u8* const discoveredGrottoTextArray[] =
    {
        gText_LookIveFound,\
        gText_WowHiddenPath,\
        gText_OhWhatsThis,\
        gText_AmazingHiddenTrail,\
        gText_HmmConcealedPath,\
        gText_MysteriousRoute,\
        gText_OhMyConcealedGrotto,\
        gText_IntriguingSecretPassage,\
        gText_WhoaHiddenEntrance,\
        gText_HiddenTrailEmerges,\
        gText_OhWhatDoWeHave,\
        gText_ConcealedPathwayAppears,\
        gText_MyCuriosityPiqued,\
        gText_LookClandestinePassage,\
        gText_OhSecretRoute,\
        gText_HmmObscuredPath,\
        gText_ConcealedEntranceDiscovered,\
        gText_WhatsThisCovertPathway,\
        gText_IntriguingHiddenTrail,\
        gText_HiddenGrottoMaterializes
    };

void HiddenGrotto_LoadDiscoveredGrottoText(void)
{
    u32 randomDialogIndex = Random() % (ARRAY_COUNT(discoveredGrottoTextArray));
    StringCopy(gStringVar1,discoveredGrottoTextArray[randomDialogIndex]);
}

static u16 HiddenGrotto_GetRouteMap(enum HiddenGrottoId grottoId)
{
    return hiddenGrottoData[grottoId].routeMap;
}
static u16 HiddenGrotto_GetGrottoMap(enum HiddenGrottoId grottoId)
{
    return hiddenGrottoData[grottoId].grottoMap;
}
static u16 HiddenGrotto_GetFlag(enum HiddenGrottoId grottoId)
{
    return hiddenGrottoData[grottoId].flag;
}

static u16 HiddenGrotto_GetSpecies(enum HiddenGrottoId grottoId)
{
    enum HiddenGrottoSecretsId secret = HiddenGrotto_GetGrottoChoice(grottoId);
    secret -= GROTTO_ITEM_COUNT;
    return hiddenGrottoData[grottoId].species[secret];
}
static u16 HiddenGrotto_GetMaxLevel(enum HiddenGrottoId grottoId)
{
    return hiddenGrottoData[grottoId].level[1];
}
static u16 HiddenGrotto_GetMinLevel(enum HiddenGrottoId grottoId)
{
    return hiddenGrottoData[grottoId].level[0];
}

static enum HiddenGrottoId HiddenGrotto_GetGrottoIdFromCurrentMap(void)
{
    u32 grottoMapGroup = gSaveBlock1Ptr->location.mapGroup;
    u32 grottoMapNum = gSaveBlock1Ptr->location.mapNum;
    enum HiddenGrottoId grottoIndex = NUM_HIDDEN_GROTTO;

    for (; grottoIndex > GROTTO_NONE; grottoIndex--)
    {
        if (HiddenGrotto_GetGrottoMap(grottoIndex) != (grottoMapNum | (grottoMapGroup << 8)))
            continue;

        return grottoIndex;
    }

    return grottoIndex;
}

static u16 HiddenGrotto_GetFlagFromCurrentMap(void)
{
    return HiddenGrotto_GetFlag(HiddenGrotto_GetGrottoIdFromCurrentMap());
}

void ShouldGrottoLoadSecret(void)
{
    u16 flag = HiddenGrotto_GetFlagFromCurrentMap();
    gSpecialVar_Result = (FlagGet(flag) == FALSE);
}

void HiddenGrotto_LoadGrottoAndWarpPlayer(void)
{
    u32 grottoMapGroup = gSaveBlock1Ptr->location.mapGroup;
    u32 grottoMapNum = gSaveBlock1Ptr->location.mapNum;

    for (enum HiddenGrottoId grottoIndex = 0; grottoIndex < NUM_HIDDEN_GROTTO; grottoIndex++)
    {
        if (HiddenGrotto_GetRouteMap(grottoIndex) != (grottoMapNum | (grottoMapGroup << 8)))
            continue;

        grottoMapGroup = (HiddenGrotto_GetGrottoMap(grottoIndex) >> 8);
        grottoMapNum = (HiddenGrotto_GetGrottoMap(grottoIndex) & 0xFF);
        break;
    }
    HiddenGrotto_WarpPlayerToGrotto(grottoMapGroup,grottoMapNum);
}

static void HiddenGrotto_WarpPlayerToGrotto(u32 grottoMapGroup, u32 grottoMapNum)
{
    SetWarpDestinationToMapWarp(grottoMapGroup,grottoMapNum,0);
    DoWarp();
    ResetInitialPlayerAvatarState();
    PlaySE(SE_EXIT);
}

void HiddenGrotto_SetAllSecretFlags(void)
{
    for (enum HiddenGrottoId grottoIndex = 0; grottoIndex < NUM_HIDDEN_GROTTO; grottoIndex++)
        FlagSet(HiddenGrotto_GetFlag(grottoIndex));
}

void TrySetHiddenGrottoSecrets(void)
{
    u16 *ptr = GetVarPointer(VAR_HIDDEN_GROTTO_STEP_COUNT);
    (*ptr)++;

    //if ((*ptr % HIDDEN_GROTTO_STEPS) != 0)
        //return;

    for (enum HiddenGrottoId grottoIndex = 0; grottoIndex < NUM_HIDDEN_GROTTO; grottoIndex++)
    {
        u32 flag = HiddenGrotto_GetFlag(grottoIndex);
        if (FlagGet(flag) == FALSE)
            continue;

        //u32 chance = Random() % 100;
        //if (chance >= HIDDEN_GROTTO_SECRET_CHANCE)
            //continue;

        HiddenGrotto_ClearFlagSetSecret(grottoIndex, flag);
    }
}

static enum HiddenGrottoSecretsId HiddenGrotto_GenerateSecret(void)
{
    u32 chance = Random() % 10000;

    if (chance < GROTTO_NORMAL_ITEM_1_CHANCE)
        return GROTTO_NORMAL_ITEM_1;
    if (chance < GROTTO_NORMAL_ITEM_2_CHANCE)
        return GROTTO_NORMAL_ITEM_2;
    if (chance < GROTTO_NORMAL_ITEM_3_CHANCE)
        return GROTTO_NORMAL_ITEM_3;
    if (chance < GROTTO_NORMAL_ITEM_4_CHANCE)
        return GROTTO_NORMAL_ITEM_4;
    if (chance < GROTTO_NORMAL_ITEM_5_CHANCE)
        return GROTTO_NORMAL_ITEM_5;
    if (chance < GROTTO_NORMAL_ITEM_6_CHANCE)
        return GROTTO_NORMAL_ITEM_6;
    if (chance < GROTTO_NORMAL_ITEM_7_CHANCE)
        return GROTTO_NORMAL_ITEM_7;
    if (chance < GROTTO_NORMAL_ITEM_8_CHANCE)
        return GROTTO_NORMAL_ITEM_8;
    if (chance < GROTTO_NORMAL_ITEM_9_CHANCE)
        return GROTTO_NORMAL_ITEM_9;
    if (chance < GROTTO_RARE_ITEM_1_CHANCE)
        return GROTTO_RARE_ITEM_1;
    if (chance < GROTTO_RARE_ITEM_2_CHANCE)
        return GROTTO_RARE_ITEM_2;
    if (chance < GROTTO_RARE_ITEM_3_CHANCE)
        return GROTTO_RARE_ITEM_3;
    if (chance < GROTTO_RARE_ITEM_4_CHANCE)
        return GROTTO_RARE_ITEM_4;
    if (chance < GROTTO_RARE_ITEM_5_CHANCE)
        return GROTTO_RARE_ITEM_5;
    if (chance < GROTTO_RARE_ITEM_6_CHANCE)
        return GROTTO_RARE_ITEM_6;
    if (chance < GROTTO_RARE_ITEM_7_CHANCE)
        return GROTTO_RARE_ITEM_7;
    if (chance < GROTTO_RARE_ITEM_8_CHANCE)
        return GROTTO_RARE_ITEM_8;
    if (chance < GROTTO_RARE_ITEM_9_CHANCE)
        return GROTTO_RARE_ITEM_9;
    if (chance < GROTTO_RARE_ITEM_10_CHANCE)
        return GROTTO_RARE_ITEM_10;
    if (chance < GROTTO_RARE_ITEM_11_CHANCE)
        return GROTTO_RARE_ITEM_11;
    if (chance < GROTTO_RARE_ITEM_12_CHANCE)
        return GROTTO_RARE_ITEM_12;
    if (chance < GROTTO_RARE_ITEM_13_CHANCE)
        return GROTTO_RARE_ITEM_13;
    if (chance < GROTTO_RARE_ITEM_14_CHANCE)
        return GROTTO_RARE_ITEM_14;
    if (chance < GROTTO_POKEMON_1_CHANCE)
        return GROTTO_POKEMON_1;
    if (chance < GROTTO_POKEMON_2_CHANCE)
        return GROTTO_POKEMON_2;
    if (chance < GROTTO_POKEMON_3_CHANCE)
        return GROTTO_POKEMON_3;

    return GROTTO_POKEMON_4;
}

static void HiddenGrotto_ClearFlagSetSecret(enum HiddenGrottoId grottoIndex, u16 flag)
{
    FlagClear(flag);
    HiddenGrotto_SetGrottoChoice(grottoIndex, HiddenGrotto_GenerateSecret());
}

static void HiddenGrotto_SetGrottoChoice(enum HiddenGrottoId grottoIndex, enum HiddenGrottoSecretsId chosen)
{
    gSaveBlock3Ptr->hiddenGrottoSpawn[grottoIndex] = chosen;
}

static enum HiddenGrottoSecretsId HiddenGrotto_GetGrottoChoice(enum HiddenGrottoId grottoIndex)
{
    return gSaveBlock3Ptr->hiddenGrottoSpawn[grottoIndex];
}

u32 HiddenGrotto_GenerateObjectGfx(void)
{
    u32 modifier = 0;
    enum HiddenGrottoId grottoId = HiddenGrotto_GetGrottoIdFromCurrentMap();
    enum HiddenGrottoSecretsId secret = HiddenGrotto_GetGrottoChoice(grottoId);

    if (secret < GROTTO_ITEM_COUNT)
        return OBJ_EVENT_GFX_POKE_BALL;

    if (IsOverworldMonShiny())
        modifier += OBJ_EVENT_MON_SHINY;

    if (IsOverworldMonFemale())
        modifier += OBJ_EVENT_MON_FEMALE;

    return (modifier + OBJ_EVENT_MON + HiddenGrotto_GetSpecies(grottoId));
}

void HiddenGrotto_BufferHiddenGrottoName(void)
{
    enum HiddenGrottoId grottoId = HiddenGrotto_GetGrottoIdFromCurrentMap();
    StringCopy(gStringVar1,GetSpeciesName(HiddenGrotto_GetSpecies(grottoId)));
}

void HiddenGrotto_SetSecretObjectGfx(void)
{
    u32 objectIdGfx = HiddenGrotto_GenerateObjectGfx();
    VarSet(VAR_OBJ_GFX_ID_0,objectIdGfx);
}

static bool32 HiddenGrotto_Interact_IsSecretMon(void)
{
    return (VarGet(VAR_OBJ_GFX_ID_0) != OBJ_EVENT_GFX_POKE_BALL);
}

void Overworld_HiddenGrotto_Interact_IsSecretMon(void)
{
    gSpecialVar_Result = (VarGet(VAR_OBJ_GFX_ID_0) != OBJ_EVENT_GFX_POKE_BALL);
}

void HiddenGrotto_TryGenerateBattle(void)
{
    if (HiddenGrotto_Interact_IsSecretMon() == FALSE)
        return;

    enum HiddenGrottoId grottoId = HiddenGrotto_GetGrottoIdFromCurrentMap();
    GenerateGrottoBattle(grottoId);
}

static void GenerateGrottoBattle(enum HiddenGrottoId grottoId)
{
    u32 species = HiddenGrotto_GetSpecies(grottoId);
    u32 max = HiddenGrotto_GetMaxLevel(grottoId);
    u32 min = HiddenGrotto_GetMinLevel(grottoId);
    u32 range = max - min + 1;
    u32 level = (Random() % range) + min;

    CreateWildMon(species, level);
}
