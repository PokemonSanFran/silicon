#include "global.h"
#include "strings.h"
#include "bg.h"
#include "quest_logic.h"
#include "data.h"
#include "region_map.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_use.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "tv.h"
#include "quests.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/quests.h"
#include "constants/rgb.h"
#include "constants/event_objects.h"
#include "event_object_movement.h"
#include "pokemon_icon.h"
#include "quest_flavor_lookup.h"
#include "quest_strings.h"
#include "battle_main.h"
#include "random.h"
#include "data/playerQuestText.h"

static void ExpandStringsForQuestFlavor(s32 flavorText);

static u32 VarGet_Cast(u32 dataAddress)
{
    return VarGet((u16)dataAddress);
}
static u32 FlagGet_Cast(u32 dataAddress)
{
    return FlagGet((u16)dataAddress);
}
static u32 ReturnQuestState_Cast(u32 dataAddress)
{
    return ReturnQuestState((enum QuestIdList)dataAddress);
}

static u32 (* sGetFuncs[])(u32 dataAddress) =
{
    [QUEST_FLAVOR_COMPARE_FLAG] = FlagGet_Cast,
    [QUEST_FLAVOR_COMPARE_VAR] = VarGet_Cast,
    [QUEST_FLAVOR_COMPARE_QUEST] = ReturnQuestState_Cast,
};

const u8 *GetQuestDesc_PlayersAdventure(void)
{
    StringCopy(gStringVar4,COMPOUND_STRING(""));

    for (s32 flavorText = (ARRAY_COUNT(playerAdventureText)-1); (flavorText != -1); flavorText--)
    {
        u32 numPassingTests = 0, numTests = 0;

        for (u32 condition = 0; condition < ARRAY_COUNT(playerAdventureText[flavorText].textCondition); condition++)
        {
            u32 dataAddress = playerAdventureText[flavorText].textCondition[condition].dataAddress;

            if (dataAddress == 0)
                continue;

            numTests++;

            u32 targetValue = playerAdventureText[flavorText].textCondition[condition].targetValue;
            enum QuestFlavorDataType dataType = playerAdventureText[flavorText].textCondition[condition].dataType;
            u32 observedValue = sGetFuncs[dataType](dataAddress);
            u32 comparisonOperator = playerAdventureText[flavorText].textCondition[condition].compareOp;
            bool32 compareResult;

            switch(comparisonOperator)
            {
                default:
                case EQUAL:
                    compareResult = (observedValue == targetValue);
                    break;
                case LESS_THAN:
                    compareResult = (observedValue < targetValue);
                    break;
                case GREATER_THAN:
                    compareResult = (observedValue > targetValue);
                    break;
                case LESS_THAN_OR_EQUAL:
                    compareResult = (observedValue <= targetValue);
                    break;
                case GREATER_THAN_OR_EQUAL:
                    compareResult = (observedValue >= targetValue);
                    break;
                case NOT_EQUAL:
                    compareResult = (observedValue != targetValue);
                    break;
            }

            if (compareResult == FALSE)
                break;

            numPassingTests++; 
        }
        if (numPassingTests == numTests)
        {
            ExpandStringsForQuestFlavor(flavorText);
            StringExpandPlaceholders(gStringVar4,playerAdventureText[flavorText].text);
            break;
        }
    }
    return gStringVar4;    
}

static void ExpandStringsForQuestFlavor(s32 flavorText)
{
    static u8 *const stringVariables[NUM_STRING_VARIABLES] = {gStringVar1, gStringVar2, gStringVar3 };

    for (u32 stringIndex = 0; stringIndex < NUM_STRING_VARIABLES; stringIndex++)
    {
        enum QuestFlavorGetNameType type = playerAdventureText[flavorText].textComponent[stringIndex].textTargetType;

        if (type == QUEST_FLAVOR_GET_NOTHING)
            continue;

        u32 target = playerAdventureText[flavorText].textComponent[stringIndex].textTargetValue;

        switch(type)
        {
            default:
                break;
            case QUEST_FLAVOR_GET_NAME_MAP:
                GetMapName(stringVariables[stringIndex],Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(target),MAP_NUM(target))->regionMapSectionId,0);
                break;
            case QUEST_FLAVOR_GET_NAME_SPECIES:
                StringCopy(stringVariables[stringIndex],GetSpeciesName(target));
                break;
            case QUEST_FLAVOR_GET_NAME_ITEM:
                StringCopy(stringVariables[stringIndex],GetItemName(target));
                break;
            case QUEST_FLAVOR_GET_NAME_ITEM_PLURAL:
                CopyItemNameHandlePlural(target,stringVariables[stringIndex],3);
                break;
            case QUEST_FLAVOR_GET_NAME_ABILITY:
                StringCopy(stringVariables[stringIndex],GetAbilityName(target));
                break;
            case QUEST_FLAVOR_GET_NAME_MOVE:
                StringCopy(stringVariables[stringIndex],GetMoveName(target));
                break;
        }
    }
}

const u8 *GetQuestDesc_RabiesOutbreak(void)
{
    u8 defeatedGlameowCount = VarGet(VAR_DEFEATED_GLAMEOW_COUNT);
    StringCopy(gStringVar1,GetSpeciesName(QUEST_RABIES_OUTBREAK_SPECIES));
    GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(QUEST_RABIES_OUTBREAK_MAP),MAP_NUM(QUEST_RABIES_OUTBREAK_MAP))->regionMapSectionId,0);
    ConvertIntToDecimalStringN(gStringVar3, (QUEST_RABIES_OUTBREAK_COUNT - defeatedGlameowCount), STR_CONV_MODE_LEFT_ALIGN, CountDigits(QUEST_RABIES_OUTBREAK_COUNT));
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_RABIESOUTBREAK].desc[FLAG_GET_ACTIVE]);
    return gStringVar4;
}

const u8  *GetQuestDesc_BetweenAStoneAndAHardPlace(void)
{
    u32 numRemainingTrolleyRides = (NUM_QUEST_BETWEENASTONEANDAHARDPLACE_TROLLEY_RIDES- GetGameStat(GAME_STAT_TROLLEY_RIDES));

    ConvertIntToDecimalStringN(gStringVar1, numRemainingTrolleyRides, STR_CONV_MODE_LEFT_ALIGN, CountDigits(numRemainingTrolleyRides));

    u32 flag = ReturnQuestState(QUEST_BETWEENASTONEANDAHARDPLACE);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_PSYOP].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_FreshwaterEvolution(void)
{
    GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(QUEST_FRESHWATER_EVOLUTION_MAP),MAP_NUM(QUEST_FRESHWATER_EVOLUTION_MAP))->regionMapSectionId,0);
    StringCopy(gStringVar2,GetSpeciesName(QUEST_FRESHWATER_EVOLUTION_SPECIES));
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_FRESHWATEREVOLUTION].desc[FLAG_GET_ACTIVE]);
    return gStringVar4;
}

const u8 *GetQuestDesc_SmoothieCrafting(void)
{
    GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(QUEST_SMOOTHIE_CRAFTING_MAP),MAP_NUM(QUEST_SMOOTHIE_CRAFTING_MAP))->regionMapSectionId,0);
    CopyItemNameHandlePlural(QUEST_SMOOTHIE_CRAFTING_PRODUCT,gStringVar3,1);
    Quest_SmoothieCrafting_BufferRecipe();

    u32 flag = ReturnQuestState(QUEST_SMOOTHIECRAFTING);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_SMOOTHIECRAFTING].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_Hodoutunnels(void)
{
    GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HODOUTUNNELS),MAP_NUM(MAP_QUEST_HODOUTUNNELS))->regionMapSectionId,0);

    bool32 talkedToElder = Quest_Hodoutunnels_GetVariable_TalkedToElder();
    u32 flag = ReturnQuestState(QUEST_HODOUTUNNELS);

    if (CheckBagHasItem(ITEM_QUEST_HODOUTUNNELS_TREASURE,1))
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Bring the treasure back to the elder in {STR_VAR_1}."));
    else if (talkedToElder == TRUE && (flag != FLAG_GET_COMPLETED))
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("There’s a red scroll in {STR_VAR_1} that guards the elder’s treasure. Find it!"));
    else
        StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_HODOUTUNNELS].desc[flag]);

    return gStringVar4;
}

const u8 *GetQuestDesc_Psyop(void)
{
    StringCopy(gStringVar1,GetSpeciesName(SPECIES_SINISTEA_PHONY));
    GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_PSYOP),MAP_NUM(MAP_QUEST_PSYOP))->regionMapSectionId,0);
    StringCopy(gStringVar3,GetItemName(ITEM_QUEST_PSYOP_TARGET_BALL));

    u32 flag = ReturnQuestState(QUEST_PSYOP);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_PSYOP].desc[flag]);
    return gStringVar4;
}

const u8  *GetQuestDesc_RockCollector(void)
{
    CopyItemName(ITEM_QUEST_ROCKCOLLECTOR_KIT,gStringVar1);
    Quest_RockCollector_ComposeList();
    u32 flag = ReturnQuestState(QUEST_ROCKCOLLECTOR);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_ROCKCOLLECTOR].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_BodegaBurnout(void)
{
    u32 flag = ReturnQuestState(QUEST_BODEGABURNOUT);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_BODEGABURNOUT].desc[flag]);

    if (QuestMenu_GetSetQuestState(QUEST_WAREHOUSEWARFARE,FLAG_GET_COMPLETED) == FALSE)
        return gStringVar4;

    if (flag != FLAG_GET_COMPLETED)
        return gStringVar4;

    StringAppend(gStringVar4,COMPOUND_STRING(" With Presto’s operations paused, the PokéMart delivery service can now finally start to take off."));
    return gStringVar4;
}

const u8 *GetQuestDesc_GetTheBandBackTogether(void)
{
    CopyItemName(ITEM_MACH_BIKE,gStringVar1);
    u32 flag = ReturnQuestState(QUEST_GETTHEBANDBACKTOGETHER);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_GETTHEBANDBACKTOGETHER].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_RestaurantExpansion1(void)
{
    u32 remaining = Quest_Generic_CountRemainingSubquests(QUEST_RESTAURANTEXPANSION1);

    static const u16 sQuestItems[] =
    {
        ITEM_QUEST_RESTAURANTEXPANSION1_4,
        ITEM_QUEST_RESTAURANTEXPANSION1_3,
        ITEM_QUEST_RESTAURANTEXPANSION1_2,
        ITEM_QUEST_RESTAURANTEXPANSION1_1
    };

    static const u16 sQuestMaps[] =
    {
        MAP_QUEST_RESTAURANTEXPANSION1_4,
        MAP_QUEST_RESTAURANTEXPANSION1_3,
        MAP_QUEST_RESTAURANTEXPANSION1_2,
        MAP_QUEST_RESTAURANTEXPANSION1_1,
    };


    if (remaining >= 1 && remaining <= 4)
    {
        u32 index = remaining - 1;
        u32 item = sQuestItems[index];

        if (!CheckBagHasItem(item, 1))
        {
            GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_RESTAURANTEXPANSION1_0),MAP_NUM(MAP_QUEST_RESTAURANTEXPANSION1_0))->regionMapSectionId, 0);
            StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Head to {STR_VAR_2} Gym to get the delivery from Belen!"));
            return gStringVar4;
        }

        CopyItemName(item, gStringVar1);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(sQuestMaps[index]),MAP_NUM(sQuestMaps[index]))->regionMapSectionId, 0);
    }

    u32 flag = ReturnQuestState(QUEST_RESTAURANTEXPANSION1);
    StringExpandPlaceholders(gStringVar4, sSideQuests[QUEST_RESTAURANTEXPANSION1].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_Freetheinnocent(void)
{
    if (!QuestMenu_GetSetQuestState(QUEST_FREETHEINNOCENT,FLAG_GET_ACTIVE))
    {
        u32 flag = ReturnQuestState(QUEST_FREETHEINNOCENT);
        StringExpandPlaceholders(gStringVar4, sSideQuests[QUEST_FREETHEINNOCENT].desc[flag]);
    }
    else if (Quest_Freetheinnocent_CashierSpoken())
    {
        CopyItemNameHandlePlural(ITEM_QUEST_FREETHEINNOCENT_ALIBI,gStringVar1,2);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("If you can find the source of {STR_VAR_1}, you might be able to find an alibi for FindtheguiltyvictimB."));

    }
    else if (Quest_Freetheinnocent_CupFound())
    {
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Does FindtheguiltyvictimB’s empty boba cup have a clue?"));
    }
    else if (Quest_Freetheinnocent_FactsLearned())
    {
        GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_FREETHEINNOCENT_HIKE_STOP_1),MAP_NUM(MAP_QUEST_FREETHEINNOCENT_HIKE_STOP_1))->regionMapSectionId,0);
        GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_FREETHEINNOCENT_HIKE_STOP_2),MAP_NUM(MAP_QUEST_FREETHEINNOCENT_HIKE_STOP_2))->regionMapSectionId,0);
        GetMapName(gStringVar3,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_FREETHEINNOCENT_HIKE_STOP_3),MAP_NUM(MAP_QUEST_FREETHEINNOCENT_HIKE_STOP_3))->regionMapSectionId,0);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("FindtheguiltyvictimB started with a boba in {STR_VAR_1}, stopped in {STR_VAR_2}, and finished at {STR_VAR_3}."));
    }
    else
    {
        u32 flag = ReturnQuestState(QUEST_FREETHEINNOCENT);
        StringExpandPlaceholders(gStringVar4, sSideQuests[QUEST_FREETHEINNOCENT].desc[flag]);
    }

    return gStringVar4;
}

const u8 *GetQuestDesc_RestoreEspuleeOutskirts(void)
{
    CopyItemName(ITEM_QUEST_RESTOREESPULEEGYM_START,gStringVar1);
    GetMapName(gStringVar2,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_RESTOREESPULEEGYM_ORIGIN),MAP_NUM(MAP_QUEST_RESTOREESPULEEGYM_ORIGIN))->regionMapSectionId,0);
    StringCopy(gStringVar3,GetSpeciesName(SPECIES_QUEST_RESTOREESPULEEGYM_TARGET));
    u32 flag = ReturnQuestState(QUEST_RESTOREESPULEEGYM);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_RESTOREESPULEEGYM].desc[flag]);

    if (CheckBagHasItem(ITEM_QUEST_RESTOREESPULEEGYM_A,1))
    {
        CopyItemName(ITEM_QUEST_RESTOREESPULEEGYM_A,gStringVar1);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Find somebody in Resido who wants {STR_VAR_1}!"));
    }
    else if (CheckBagHasItem(ITEM_QUEST_RESTOREESPULEEGYM_B,1))
    {
        CopyItemName(ITEM_QUEST_RESTOREESPULEEGYM_B,gStringVar1);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Find somebody in Resido who wants {STR_VAR_1}!"));
    }
    else if (CheckBagHasItem(ITEM_QUEST_RESTOREESPULEEGYM_C,1))
    {
        CopyItemName(ITEM_QUEST_RESTOREESPULEEGYM_C,gStringVar1);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Find somebody in Resido who wants {STR_VAR_1}!"));
    }
    else if (CheckBagHasItem(ITEM_QUEST_RESTOREESPULEEGYM_E,1))
    {
        CopyItemName(ITEM_QUEST_RESTOREESPULEEGYM_E,gStringVar1);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Find somebody in Resido who wants a {STR_VAR_1}!"));
    }
    else if (QuestMenu_GetSetSubquestState(QUEST_RESTOREESPULEEGYM,FLAG_GET_COMPLETED,SUB_QUEST_6))
    {
        StringCopy(gStringVar1,GetSpeciesName(SPECIES_QUEST_RESTOREESPULEEGYM_TARGET));
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Show Imelda your {STR_VAR_1}!"));
    }
    else if (QuestMenu_GetSetSubquestState(QUEST_RESTOREESPULEEGYM,FLAG_GET_COMPLETED,SUB_QUEST_4))
    {
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("You recieved an Odd Egg, but will somebody want it?"));
    }
    return gStringVar4;
}

const u8 *GetQuestDesc_Improvbattling(void)
{
    u32 flag = ReturnQuestState(QUEST_IMPROVBATTLING);
    GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_IMPROVBATTLING),MAP_NUM(MAP_QUEST_IMPROVBATTLING))->regionMapSectionId,0);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_IMPROVBATTLING].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_Teachatrainertofish(void)
{
    u32 flag = ReturnQuestState(QUEST_TEACHATRAINERTOFISH);
    GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_TEACHATRAINERTOFISH),MAP_NUM(MAP_QUEST_TEACHATRAINERTOFISH))->regionMapSectionId,0);
    StringCopy(gStringVar2,GetSpeciesName(VarGet(VAR_QUEST_TEACHATRAINERTOFISH)));
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_TEACHATRAINERTOFISH].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_Wildfirerisk(void)
{
    u32 flag = ReturnQuestState(QUEST_WILDFIRERISK);
    StringCopy(gStringVar1,GetItemName(ITEM_QUEST_WILDFIRERISK_REWARD));
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_WILDFIRERISK].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_Hang20(void)
{
    u32 flag = ReturnQuestState(QUEST_HANG20);
    GetMapName(gStringVar1,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HANG20),MAP_NUM(MAP_QUEST_HANG20))->regionMapSectionId,0);
    ConvertIntToDecimalStringN(gStringVar2, QUEST_HANG20_REQUIRED_WINS, STR_CONV_MODE_LEFT_ALIGN, CountDigits(QUEST_HANG20_REQUIRED_WINS));
    StringCopy(gStringVar3,GetMoveName(MOVE_SURF));
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_HANG20].desc[flag]);
    return gStringVar4;
}

const u8 *GetQuestDesc_CulturalPurity(void)
{
    u32 flag = ReturnQuestState(QUEST_CULTURALPURITY);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_CULTURALPURITY].desc[flag]);

    if (flag != FLAG_GET_ACTIVE)
        return gStringVar4;

    StringCopy(gStringVar1,GetSpeciesName(SPECIES_QUEST_CULTURAL_PURITY_MASCOT));

    switch (VarGet(VAR_CULTURAL_PURITY))
    {
        case CULTURAL_PURITY_QUEST_1_NOT_STARTED:
        case CULTURAL_PURITY_READY_FOR_A:
        case CULTURAL_PURITY_PAYWALL_A:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Narrow your party to only two types, and bring the tile to the northeastern bird in the tea leaves."));
            break;
        case CULTURAL_PURITY_OPEN_A:
        case CULTURAL_PURITY_DEFEATED_A1:
        case CULTURAL_PURITY_DEFEATED_A2:
        case CULTURAL_PURITY_DEFEATED_A3:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Train with the Level A of the Seafoam {STR_VAR_1} Society."));
            break;
        case CULTURAL_PURITY_READY_FOR_B:
        case CULTURAL_PURITY_PAYWALL_B:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Bring the tile to the southeastern birds of flour and sugar."));
            break;
        case CULTURAL_PURITY_OPEN_B:
        case CULTURAL_PURITY_DEFEATED_B1:
        case CULTURAL_PURITY_DEFEATED_B2:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Train with the Level B of the Seafoam {STR_VAR_1} Society."));
            break;
        case CULTURAL_PURITY_READY_FOR_C:
        case CULTURAL_PURITY_PAYWALL_C:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Bring the tile to the bird in the south western passage between two kingdoms."));
            break;
        case CULTURAL_PURITY_OPEN_C:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Train with the Level C of the Seafoam {STR_VAR_1} Society."));
            break;
        case CULTURAL_PURITY_DEFEATED_C:
        case CULTURAL_PURITY_READY_FOR_D:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Bring the tile to the northeastern bird’s nest."));
            break;
        default:
        case CULTURAL_PURITY_CHALLENGED_LEADER:
            StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Help show Shinzo what true strength means. Defeat the Leader of the Seafoam {STR_VAR_1} Society!"));
            break;
    }

    return gStringVar4;
}

const u8 *GetQuestDesc_HybridCulture(void)
{
    u32 flag = ReturnQuestState(QUEST_HYBRIDCULTURE);
    StringExpandPlaceholders(gStringVar4,sSideQuests[QUEST_HYBRIDCULTURE].desc[flag]);

    if (flag != FLAG_GET_ACTIVE)
        return gStringVar4;

    if (QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE,FLAG_GET_COMPLETED,SUB_QUEST_1) == FALSE)
    {
        BufferSunriseTimes();
        GetMapName(gStringVar3,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_1),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_1))->regionMapSectionId,0);
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Watch the sun rise from the center of {STR_VAR_3}! Go between {STR_VAR_1} and {STR_VAR_2}."));
    }
    else if (QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE,FLAG_GET_COMPLETED,SUB_QUEST_2) == FALSE)
    {
        GetMapName(gStringVar3,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_2),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_2))->regionMapSectionId,0);
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Go bird watching with Shinzo on {STR_VAR_3}."));
    }
    else if (QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE,FLAG_GET_COMPLETED,SUB_QUEST_3) == FALSE)
    {
        GetMapName(gStringVar3,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_3),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_3))->regionMapSectionId,0);
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Get lunch with Shinzo at {STR_VAR_3} Taco."));
    }
    else if (QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE,FLAG_GET_COMPLETED,SUB_QUEST_4) == FALSE)
    {
        GetMapName(gStringVar3,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_4),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_4))->regionMapSectionId,0);
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Find the deepest room of the {STR_VAR_3}."));
    }
    else if (QuestMenu_GetSetSubquestState(QUEST_HYBRIDCULTURE,FLAG_GET_COMPLETED,SUB_QUEST_5) == FALSE)
    {
        BufferSunsetTimes();
        GetMapName(gStringVar3,Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_QUEST_HYBRID_CULTURE_5),MAP_NUM(MAP_QUEST_HYBRID_CULTURE_5))->regionMapSectionId,0);
        StringExpandPlaceholders(gStringVar4,COMPOUND_STRING("Make the hike up {STR_VAR_3} and watch the sunset. Go between {STR_VAR_1} and {STR_VAR_2}."));
    }

    return gStringVar4;
}
