#include "global.h"
#include "battle.h"
#include "constants/trainers.h"
#include "battle_anim.h"
#include "tv.h"
#include "buzzr.h"
#include "battle_setup.h"
#include "constants/moves.h"
#include "constants/abilities.h"
#include "pokedex.h"
#include "event_object_movement.h"
#include "event_data.h"
#include "fieldmap.h"
#include "item.h"
#include "malloc.h"
#include "mazegen.h"
#include "quests.h"
#include "money.h"
#include "party_menu.h"
#include "string_util.h"
#include "quest_logic.h"
#include "hidden_grotto.h"
#include "overworld.h"
#include "random.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "constants/sound.h"
#include "field_control_avatar.h"
#include "battle_main.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "constants/region_map_sections.h"
#include "wild_encounter.h"
#include "region_map.h"
#include "battle_main.h"
#include "quest_strings.h"
#include "quest_logic.h"
#include "battle_util.h"
#include "pokemon.h"
#include "field_specials.h"
#include "battle_scripts.h"
#include "quests.h"
#include "options_battle.h"
#include "constants/trainer_types.h"
#include "constants/ui_map_system.h"
#include "pokemon_summary_screen.h"
#include "pokemon_storage_system.h"

bool32 HasPlayerJoinedThe_Tide(void)
{
    return (FlagGet(FLAG_TIMELINE_TRUE));
}

u32 GetCurrentMap(void)
{
    u32 currentMapGroup = gSaveBlock1Ptr->location.mapGroup;
    u32 currentMapNum = gSaveBlock1Ptr->location.mapNum;

    return (currentMapNum | (currentMapGroup << 8));
}

u16 Quest_Generic_CountRemainingSubquests(u16 relevantQuest)
{
    u32 totalSubquests = sSideQuests[relevantQuest].numSubquests;
    u32 completed = 0;

    for (u32 currentSubQuest = 0; currentSubQuest < totalSubquests; currentSubQuest++)
        if (QuestMenu_GetSetSubquestState(relevantQuest, FLAG_GET_COMPLETED, currentSubQuest))
            completed++;

    return (totalSubquests - completed);
}

u32 Quest_Generic_CountAndBufferRemainingSubquests(u16 relevantQuest)
{
    u32 numRemainingQuests = Quest_Generic_CountRemainingSubquests(relevantQuest);

    gSpecialVar_Result = numRemainingQuests;
    ConvertIntToDecimalStringN(gStringVar1, numRemainingQuests, STR_CONV_MODE_LEFT_ALIGN, 2);
    return numRemainingQuests;
}


void Quest_Generic_CompleteSubquests(u16 relevantQuest)
{
    u16 totalNumSubquests = sSideQuests[relevantQuest].numSubquests;
    u8 currentSubQuest;

    for (currentSubQuest = 0; currentSubQuest < totalNumSubquests; currentSubQuest++)
    {
        QuestMenu_GetSetSubquestState(relevantQuest, FLAG_SET_COMPLETED, currentSubQuest);
    }
}

void Quest_Generic_MakeQuestRewardIfSubquestsComplete(u32 relevantQuest)
{
    u32 totalNumSubquests = sSideQuests[relevantQuest].numSubquests;
    u32 currentSubQuest;

    for (currentSubQuest = 0; currentSubQuest < totalNumSubquests; currentSubQuest++)
        if (!QuestMenu_GetSetSubquestState(relevantQuest, FLAG_GET_COMPLETED, currentSubQuest))
            return;

    QuestMenu_ScriptSetReward(relevantQuest);
}

void SetVariableBit(u32 varConst, u32 bit, bool32 bitValue)
{
    u32 var = VarGet(varConst);

    if (bitValue)
        var |= (1 << bit);
    else
        var &= ~(1 << bit);

    VarSet(varConst,var);
}

bool8 GetVariableBit(u32 varConst, u32 bit)
{
    u32 var = VarGet(varConst);
    return (var >> bit) & 1;
}

// ***********************************************************************
// Quest: Kitchen Volunteering
// ***********************************************************************

void KitchenvolunteeringFunc_GeneratePantryItem(void);
static void KitchenvolunteeringFunc_CompleteSubquest(void);
void KitchenvolunteeringFunc_CheckProgressAndSetReward(void);
void KitchenvolunteeringFunc_ChooseRandomPantryItem(void);
static void KitchenvolunteeringFunc_RestoreChosenPantryItem(void);
static void KitchenvolunteeringFunc_HidePantryItems(void);

bool32 KitchenvolunteeringFunc_IsMapLayoutIdForPantryMaze(int mapLayoutId)
{
    return (mapLayoutId == Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(MAP_CAPHE_CITY_PANTRY_MAZE), MAP_NUM(MAP_CAPHE_CITY_PANTRY_MAZE))->mapLayoutId);
}

void Quest_Kitchenvolunteering_CreatePantryMaze(void)
{
    SeedRng(gSaveBlock3Ptr->mazeLayoutSeed);
    GenerateMazeMap(5, 5, &gMazeTemplates[CAVE_STAIRS_TEMPLATE_SET]);
    KitchenvolunteeringFunc_HidePantryItems();
    KitchenvolunteeringFunc_RestoreChosenPantryItem();
}

void KitchenvolunteeringFunc_GeneratePantryItem(void)
{
    gSpecialVar_0x8000 = ((ITEM_PANTRY_A - 1) + VarGet(VAR_LAST_TALKED));
    gSpecialVar_0x8001 = 1;

    KitchenvolunteeringFunc_CompleteSubquest();
}

static void KitchenvolunteeringFunc_CompleteSubquest(void)
{
    u32 item = VarGet(VAR_LAST_TALKED) - 1;

    QuestMenu_GetSetSubquestState(QUEST_KITCHENVOLUNTEERING,FLAG_SET_COMPLETED,(SUB_QUEST_1 + item));
}

void KitchenvolunteeringFunc_CheckProgressAndSetReward(void)
{

    if (!Quest_Kitchenvolunteering_CountRemainingItems())
    {
        QuestMenu_GetSetQuestState(QUEST_KITCHENVOLUNTEERING,FLAG_REMOVE_ACTIVE);
        QuestMenu_GetSetQuestState(QUEST_KITCHENVOLUNTEERING,FLAG_SET_REWARD);
    }
}

u8 Quest_Kitchenvolunteering_CountRemainingItems(void)
{
    u32 subquest;
    u32 numItems = 0;

    for (subquest = 0; subquest < QUEST_KITCHENVOLUNTEERING_SUB_COUNT; subquest++)
    {
        if (!QuestMenu_GetSetSubquestState(QUEST_KITCHENVOLUNTEERING,FLAG_GET_COMPLETED,(SUB_QUEST_1 + subquest)))
            continue;

        FlagSet(FLAG_TEMP_1 + subquest);
        numItems++;
    }
    return (QUEST_KITCHENVOLUNTEERING_SUB_COUNT - numItems);
}

void KitchenvolunteeringFunc_ChooseRandomPantryItem(void)
{
    u32 randomItem = (Random() % (ITEM_PANTRY_END - ITEM_PANTRY_START) + ITEM_PANTRY_START);

    CopyItemName(randomItem, gStringVar1);
    VarSet(VAR_QUEST_KITCHEN_ASSIGNED_ITEMS,randomItem);
}

static void KitchenvolunteeringFunc_RestoreChosenPantryItem(void)
{
    u32 chosenItem = (VarGet(VAR_QUEST_KITCHEN_ASSIGNED_ITEMS));
    u32 itemOffset = chosenItem - ITEM_PANTRY_A;

    if (QuestMenu_GetSetQuestState(QUEST_KITCHENVOLUNTEERING,FLAG_GET_COMPLETED))
        if (!CheckBagHasItem(chosenItem,1))
            FlagClear(FLAG_TEMP_1 + itemOffset);
}

static void KitchenvolunteeringFunc_HidePantryItems(void)
{
    u32 itemIndex = 0;

    for (itemIndex = 0; itemIndex < QUEST_KITCHENVOLUNTEERING_SUB_COUNT; itemIndex++)
    {
        if (!QuestMenu_GetSetSubquestState(QUEST_KITCHENVOLUNTEERING, FLAG_GET_COMPLETED, itemIndex))
            continue;

        FlagSet(FLAG_TEMP_1 + itemIndex);
    }
}

// ***********************************************************************
// Quest: Rock Collector
// ***********************************************************************

bool8 Quest_Rockcollector_CheckTakenStoneFlags(void)
{
    u8 numTakenStones = 0;
    u16 i;

    for (i = 0; i < ROCKCOLLECTOR_STONES_COUNT; i++)
    {
        if (FlagGet(FLAG_ITEM_ROCKCOLLECTOR_STONE_START + i))
        {
            numTakenStones++;
        }
    }

    gSpecialVar_Result = (numTakenStones == QUEST_ROCKCOLLECTOR_SUB_COUNT);
    return gSpecialVar_Result;
}

bool8 Quest_Rockcollector_CheckBagAllStones(void)
{
    u8 countNumStonesInBag = 0;
    u8 i;

    for (i = 0; i < QUEST_ROCKCOLLECTOR_SUB_COUNT; i++)
    {
        if (CheckBagHasItem(FIRST_EVOLUTION_STONE_INDEX + i, 1))
        {
            countNumStonesInBag++;
        }
    }

    gSpecialVar_Result = (countNumStonesInBag == QUEST_ROCKCOLLECTOR_SUB_COUNT);
    return gSpecialVar_Result;
}

void Quest_Rockcollector_TakeAllStonesFromBag(void){
    u8 i = 0;

    if(Quest_Rockcollector_CheckBagAllStones()){
        for (i = 0; i < QUEST_ROCKCOLLECTOR_SUB_COUNT; i++){
            RemoveBagItem(FIRST_EVOLUTION_STONE_INDEX+i,1);
            QuestMenu_GetSetSubquestState(QUEST_ROCKCOLLECTOR,FLAG_SET_COMPLETED,(SUB_QUEST_1 + i));
        }
    }
}

void Quest_Rockcollector_CheckSubquestTakeStone(void)
{
    u8 numExternalStones = 0;
    u8 numTakenStones = 0;
    u8 currentQuest = 0;
    u16 currentStone, currentFlag;

    for (currentQuest = 0; currentQuest < QUEST_ROCKCOLLECTOR_SUB_COUNT; currentQuest++)
    {
        currentStone = FIRST_EVOLUTION_STONE_INDEX + currentQuest;
        currentFlag = FLAG_ITEM_ROCKCOLLECTOR_STONE_START + currentQuest;

        if (!QuestMenu_GetSetSubquestState(QUEST_ROCKCOLLECTOR, FLAG_GET_COMPLETED, currentQuest) && CheckBagHasItem(currentStone, 1))
        {
            RemoveBagItem(currentStone, 1);
            CopyItemName(currentStone, gStringVar1);
            QuestMenu_GetSetSubquestState(QUEST_ROCKCOLLECTOR, FLAG_SET_COMPLETED, currentQuest);
            numTakenStones++;

            if (!FlagGet(currentFlag))
            {
                numExternalStones++;
            }
        }
    }

    VarSet(VAR_TEMP_1, numTakenStones);
    VarSet(VAR_TEMP_2, numExternalStones);
}

u16 Quest_Rockcollector_CountRemainingSubquests(void)
{
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_ROCKCOLLECTOR);
}

void Quest_Rockcollector_RespawnStones(void)
{
    u16 flags[ROCKCOLLECTOR_STONES_COUNT];
    u16 i;


    if(QuestMenu_GetSetQuestState(QUEST_ROCKCOLLECTOR,FLAG_GET_COMPLETED)){
        for (i = 0; i < ROCKCOLLECTOR_STONES_COUNT; i++)
        {
            flags[i] = FLAG_ITEM_ROCKCOLLECTOR_STONE_START + i;
            FlagClear(flags[i]);
        }
    }
}

// ***********************************************************************
// Quest: Hidden Grotto Mapping
// ***********************************************************************

u16 Quest_Hiddengrottomapping_CountCompletedSubquests(void){
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_HIDDENGROTTOMAPPING);
}

bool8 Quest_Hiddengrottomapping_CheckForJournalPage(void){
    u16 currentJournalPage;
    bool8 hasJournalPages = FALSE;
    u8 i;

    for (i = 0; i < QUEST_HIDDENGROTTOMAPPING_SUB_COUNT; i++){
        currentJournalPage = ITEM_PANNEN_JOURNAL_PAGE_1 + i;

        if (CheckBagHasItem(currentJournalPage,1)){
            RemoveBagItem(currentJournalPage,1);
            QuestMenu_GetSetSubquestState(QUEST_HIDDENGROTTOMAPPING,FLAG_SET_COMPLETED,i);
            hasJournalPages = TRUE;
        }
    }
    return hasJournalPages;
}

// ***********************************************************************
// Quest: Ultra Wormhole Research
// ***********************************************************************

#define BEAST  0
#define TOTEM  1
#define NUM_TOTEM_MON (QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT)

static const u32 TOTEM_POKEMON_LIST[NUM_TOTEM_MON][9]=
{
    {MAP_ROUTE5, TOTEM_POKEMON_0, ITEM_LEFTOVERS, 3, 6, 5, 2, 1, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 1)},
    {MAP_ROUTE98, TOTEM_POKEMON_1, ITEM_LEFTOVERS, 0, 4, 2, 6, 5, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 2)},
    {MAP_NONGYU_BRIDGE, TOTEM_POKEMON_2, ITEM_LEFTOVERS, 5, 2, 3, 1, 0, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 3)},
    {MAP_ROUTE_D, TOTEM_POKEMON_3, ITEM_LEFTOVERS, 1, 5, 6, 4, 2, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 4)},
    {MAP_ROUTE6, TOTEM_POKEMON_4, ITEM_LEFTOVERS, 6, 3, 1, 0, 4, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 5)},
    {MAP_ROUTE2, TOTEM_POKEMON_5, ITEM_LEFTOVERS, 2, 0, 4, 5, 6, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 6)},
    {MAP_ROUTE100, TOTEM_POKEMON_6, ITEM_LEFTOVERS, 6, 2, 1, 3, 5, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 7)},
    {MAP_ROUTE13, TOTEM_POKEMON_7, ITEM_LEFTOVERS, 4, 3, 0, 6, 1, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 8)},
    {MAP_ROUTE9, TOTEM_POKEMON_8, ITEM_LEFTOVERS, 1, 4, 6, 2, 3, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 9)},
    {MAP_ROUTE9, TOTEM_POKEMON_9, ITEM_LEFTOVERS, 1, 4, 6, 2, 3, (FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 9)},
};
    //PSF TODO need to make new totem formes
    //totem formes have larger heights and weights but don't follow any specific rule
    //shiny locked off
    //when bred, produces a normal species of that pokemon
    //always have one specific ability
    //spawn with three perfect IVs
    //Compared to their non-Totem counterparts, every Totem Pokémon's weight is increased less than appropriately to its height. If a Pokémon's density were to remain the same between its Totem and non-Totem variants, a Totem Pokémon twice the height should be eight times the weight.
    //Not a unique form in the pokedex
    //fixed natures and move sets and level
    //wild map, totem species, held item, totem atk, totem def, totem speed, totem spatk, totem spdef, totem flag

static const u32 ULTRA_BEAST_LIST[QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT][9]=
{
    {MAP_ULTRA_PALDEA,SPECIES_POIPOLE,ITEM_BEAST_BALL,3,1,6,5,0},
    {MAP_ULTRA_UNOVA,SPECIES_PHEROMOSA,ITEM_BEAST_BALL,6,4,0,5,2},
    {MAP_ULTRA_ORRE,SPECIES_GUZZLORD,ITEM_BEAST_BALL,1,2,5,4,6},
    {MAP_ULTRA_SINNOH,SPECIES_BLACEPHALON,ITEM_BEAST_BALL,0,3,6,2,1},
    {MAP_ULTRA_HOENN,SPECIES_CELESTEELA,ITEM_BEAST_BALL,2,4,1,6,5},
    {MAP_ULTRA_ALOLA,SPECIES_BUZZWOLE,ITEM_BEAST_BALL,3,0,2,6,1},
    {MAP_ULTRA_KALOS,SPECIES_STAKATAKA,ITEM_BEAST_BALL,0,4,4,1,6},
    {MAP_ULTRA_JOHTO,SPECIES_NIHILEGO,ITEM_BEAST_BALL,5,3,2,0,1},
    {MAP_ULTRA_GALAR,SPECIES_KARTANA,ITEM_BEAST_BALL,1,6,5,0,4},
    {MAP_ULTRA_KANTO,SPECIES_XURKITREE,ITEM_BEAST_BALL,6,3,0,4,2},
};

bool8 Quest_Ultrawormholeresearch_ShouldTotemNotSpawn(void) {
    u16 totemFlag = FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 1;
    u8 i;

    if (!QuestMenu_GetSetQuestState(QUEST_ULTRAWORMHOLERESEARCH, FLAG_GET_ACTIVE)) {
        return TRUE;
    }

    for (i = 0; i < NUM_TOTEM_MON; i++) {
        if (TOTEM_POKEMON_LIST[i][0] == GetCurrentMap() && FlagGet(totemFlag + i)) {
            return TRUE;
        }
    }

    return FALSE;
}

void Quest_Ultrawormholeresearch_PlayTotemCry(void) {
    u8 i;

    for (i = 0; i < NUM_TOTEM_MON ; i++) {
        if (TOTEM_POKEMON_LIST[i][0] == GetCurrentMap()) {
            PlayCry_Script(TOTEM_POKEMON_LIST[i][1], CRY_MODE_ENCOUNTER);
            break;
        }
    }
}

void Quest_Ultrawormholeresearch_SetTotemBoost(u8 type, u8 i) {
    const u32* boostList;
    u8 j;

    if (type == TOTEM) {
        boostList = &TOTEM_POKEMON_LIST[i][2];
    } else if (type == BEAST) {
        boostList = &ULTRA_BEAST_LIST[i][2];
    } else {
        return;
    }

    gSpecialVar_0x8000 = B_POSITION_OPPONENT_LEFT;
    for (j = 0; j < 5; j++) {
        *(&gSpecialVar_0x8001 + j) = boostList[j];
    }

    //ScriptSetTotemBoost(); PSF TODO need to convert this back to C to be used here, or refactor how boosts are applied for the Wormhole Quests
}

void Quest_Ultrawormholeresearch_SetTotemBattle(void) {
    u16 totemMon, totemHeldItem;
    u8 i;
    u32 mapId = GetCurrentMap();

    for (i = 0; i < NUM_TOTEM_MON; i++) {
        if (TOTEM_POKEMON_LIST[i][0] == mapId) {
            totemMon = TOTEM_POKEMON_LIST[i][1];
            totemHeldItem = TOTEM_POKEMON_LIST[i][2];

            CreateScriptedWildMon(totemMon, 100, totemHeldItem);
            Quest_Ultrawormholeresearch_SetTotemBoost(TOTEM, i);
            return;
        }
    }
}

void Quest_Ultrawormholeresearch_SetDefeatedTotemFlag(void) {
    u8 i;
    u16 totemFlag = FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM + 1;
    u32 mapId = GetCurrentMap();

    for (i = 0; i < NUM_TOTEM_MON; i++) {
        if (TOTEM_POKEMON_LIST[i][0] == mapId) {
            FlagSet(totemFlag + i);
            return;
        }
    }
}

u32 Quest_Ultrawormholeresearch_BufferTotemPokemonName(void){
    u8 i;

    for (i = 0; i < NUM_TOTEM_MON; i++) {
        if (TOTEM_POKEMON_LIST[i][0] == GetCurrentMap()) {
            return TOTEM_POKEMON_LIST[i][1];
        }
    }
    return 0;
}

void Quest_Ultrawormholeresearch_PlayUltraBeastCry(void) {
    u8 i;

    for (i = 0; i < QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT; i++) {
        if (ULTRA_BEAST_LIST[i][0] == GetCurrentMap()) {
            PlayCry_Script(ULTRA_BEAST_LIST[i][1], CRY_MODE_ENCOUNTER);
            break;
        }
    }
}

void Quest_Ultrawormholeresearch_SetUltraBeastBattle(void){
    u16 ultraBeastMon, ultraBeastHeldItem;
    u8 i;

    for (i = 0; i < QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT; i++) {
        if (ULTRA_BEAST_LIST[i][0] == GetCurrentMap()) {

            ultraBeastMon = ULTRA_BEAST_LIST[i][1];
            ultraBeastHeldItem = ULTRA_BEAST_LIST[i][2];

            CreateScriptedWildMon(ultraBeastMon,100,ultraBeastHeldItem);
            Quest_Ultrawormholeresearch_SetTotemBoost(BEAST,i);
            break;
        }
    }
}

u32 Quest_Ultrawormholeresearch_BufferUltraBeastPokemonName(void){
    u8 i;

    for (i = 0; i < QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT; i++) {
        if (ULTRA_BEAST_LIST[i][0] == GetCurrentMap()) {
            return ULTRA_BEAST_LIST[i][1];
        }
    }
    return 0;
}

void Quest_Ultrawormholeresearch_SetSubquestForUltraBeast(void){
    u8 i;

    for (i = 0; i < QUEST_ULTRAWORMHOLERESEARCH_SUB_COUNT; i++) {
        if (ULTRA_BEAST_LIST[i][0] == GetCurrentMap()) {
            QuestMenu_GetSetSubquestState(QUEST_ULTRAWORMHOLERESEARCH,FLAG_SET_COMPLETED,i);
            break;
        }
    }
}

u16 Quest_Ultrawormholeresearch_CountRemainingSubquests(void){
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_ULTRAWORMHOLERESEARCH);
}

// ***********************************************************************
// Quest: Taxicabturnaround
// ***********************************************************************

#define SEA 0
#define SKY 1
#define LAND 2

static const u32 TAXICAB_LOCATION_MAP[QUEST_TAXICABTURNAROUND_SUB_COUNT][3]=
{
    {MAP_ZENZU_ISLAND,SUB_QUEST_1,SEA},
    {MAP_QIU_VILLAGE,SUB_QUEST_2,SEA},
    {MAP_HALERBA_CITY,SUB_QUEST_3,SEA},
    {MAP_PETAROSA_BOROUGH,SUB_QUEST_4,SEA},
    {MAP_CRESALTA_VISTA,SUB_QUEST_5,SEA},
    {MAP_HALAI_ISLAND,SUB_QUEST_6,SEA},
    {MAP_IRISINA_TOWN,SUB_QUEST_7,SKY},
    {MAP_MERMEREZA_CITY,SUB_QUEST_8,SKY},
    {MAP_CURENO_PORT,SUB_QUEST_9,SKY},
    {MAP_CUCONU_TOWN,SUB_QUEST_10,SKY},
    {MAP_OROLAND,SUB_QUEST_11,SKY},
    {MAP_TIRABUDIN_PLACE,SUB_QUEST_12,SKY},
    {MAP_ESPULEE_OUTSKIRTS,SUB_QUEST_13,LAND},
    {MAP_CHASILLA,SUB_QUEST_14,LAND},
    {MAP_CAPHE_CITY,SUB_QUEST_15,LAND},
    {MAP_HODOU_CITY,SUB_QUEST_16,LAND},
    {MAP_TORA_TOWN,SUB_QUEST_17,LAND},
    {MAP_PERLACIA_CITY,SUB_QUEST_18,LAND},
    {MAP_GLAVEZ_HILL,SUB_QUEST_19,LAND},
};

u8 Quest_Taxicabturnaround_LookUpCorrespondingSubquest(void){
    u8 i;

    for (i = 0; i < QUEST_TAXICABTURNAROUND_SUB_COUNT; i++) {
        if (TAXICAB_LOCATION_MAP[i][0] == GetCurrentMap()) {
            return i;
        }
    }
    return 99;
}

u8 Quest_Taxicabturnaround_LookUpQuestType(void)
{
    u8 index = Quest_Taxicabturnaround_LookUpCorrespondingSubquest();
    return TAXICAB_LOCATION_MAP[index][2];
}

bool8 Quest_Taxicabturnaround_IsSubquestComplete(void){
    u8 index = Quest_Taxicabturnaround_LookUpCorrespondingSubquest();
    u8 subquest = TAXICAB_LOCATION_MAP[index][1];

    if (QuestMenu_GetSetSubquestState(QUEST_TAXICABTURNAROUND, FLAG_GET_COMPLETED, subquest)){
        return TRUE;
    }else{
        return FALSE;
    }
}

bool8 Quest_Taxicabturnaround_CheckSeaPokemon(void){
    //1.1m and can learn surf
    u32 species = 0, height = 0;
    u32 requiredHeight = 11;
    bool8 doesPokemonMatch = TRUE;

    species = GetMonData(&gPlayerParty[gSpecialVar_0x8004],MON_DATA_SPECIES,NULL);

    height = gSpeciesInfo[species].height;

    if ((!CanLearnTeachableMove(species,MOVE_SURF)) || (height < requiredHeight)){

        doesPokemonMatch = FALSE;
    }

    return doesPokemonMatch;
}

bool8 Quest_Taxicabturnaround_CheckSkyPokemon(void){
    //80 base speed and can learn fly
    u32 species = 0, speed = 0;
    u32 requiredSpeed= 80;
    bool8 doesPokemonMatch = TRUE;

    species = GetMonData(&gPlayerParty[gSpecialVar_0x8004],MON_DATA_SPECIES,NULL);

    speed = gSpeciesInfo[species].baseSpeed;

    if ((!CanLearnTeachableMove(species,MOVE_FLY)) || (speed < requiredSpeed)){

        doesPokemonMatch = FALSE;
    }

    return doesPokemonMatch;
}

bool8 Quest_Taxicabturnaround_CheckLandPokemon(void){
    //32kg and field egg group
    u32 species = 0, weight = 0;
    u32 requiredWeight = 320;
    u32 eggGroup[2] = {0,0};
    bool8 doesPokemonMatch = TRUE;

    species = GetMonData(&gPlayerParty[gSpecialVar_0x8004],MON_DATA_SPECIES,NULL);
    eggGroup[0] = gSpeciesInfo[species].eggGroups[0];
    eggGroup[1] = gSpeciesInfo[species].eggGroups[1];

    weight = gSpeciesInfo[species].weight;

    if (((eggGroup[0] != EGG_GROUP_FIELD) && (eggGroup[1] != EGG_GROUP_FIELD)) || (weight < requiredWeight)){
        doesPokemonMatch = FALSE;
    }

    return doesPokemonMatch;
}

bool8 Quest_Taxicabturnaround_CheckRequiredPokemon(void){
    u8 index = Quest_Taxicabturnaround_LookUpCorrespondingSubquest();
    u8 neededType = TAXICAB_LOCATION_MAP[index][2];

    switch(neededType){
        case SEA:
            return Quest_Taxicabturnaround_CheckSeaPokemon();
        case SKY:
            return Quest_Taxicabturnaround_CheckSkyPokemon();
        case LAND:
            return Quest_Taxicabturnaround_CheckLandPokemon();
        default:
            return FALSE;
    }
}

void Quest_Taxicabturnaround_MarkSubquestComplete(void){
    u32 subquest = 0;
    bool8 foundTaxi = FALSE;
    u8 i;

    for (i = 0; i < QUEST_TAXICABTURNAROUND_SUB_COUNT; i++) {
        if (TAXICAB_LOCATION_MAP[i][0] == GetCurrentMap()) {
            subquest = TAXICAB_LOCATION_MAP[i][1];
            foundTaxi = TRUE;
            break;
        }
    }

    if (foundTaxi) {
        if (!QuestMenu_GetSetSubquestState(QUEST_TAXICABTURNAROUND, FLAG_GET_COMPLETED, subquest)) {
            QuestMenu_GetSetSubquestState(QUEST_TAXICABTURNAROUND, FLAG_SET_COMPLETED, subquest);
        }
    }
}

u16 Quest_Taxicabturnaround_CountRemainingSubquests(void){
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_TAXICABTURNAROUND);
}

bool8 Quest_Taxicabturnaround_CheckReadyForNext(void){
    u8 currentSubQuest;
    u8 questType;
    u8 completedLand = 0, completedSky = 0, completedSea = 0;
    u8 requiredComplete = 1;

    for (currentSubQuest = 0; currentSubQuest < QUEST_TAXICABTURNAROUND_SUB_COUNT; currentSubQuest++)
    {
        if (QuestMenu_GetSetSubquestState(QUEST_TAXICABTURNAROUND, FLAG_GET_COMPLETED, currentSubQuest))
        {
            questType = TAXICAB_LOCATION_MAP[currentSubQuest][2];

            switch(questType){
                case LAND: completedLand++;
                           break;
                case SEA: completedSea++;
                          break;
                case SKY: completedSky++;
                          break;
                default: break;
            }
        }
    }

    return (\
            (completedLand > requiredComplete) &&\
            (completedSky > requiredComplete) &&\
            (completedSea > requiredComplete)\
           );
}

// ***********************************************************************
// Quest: Bodega Burnout
// ***********************************************************************

#define DELIVER 0
#define RESCUE 1
#define CATCH_STRONG 2
#define CATCH_COLD  3
#define CATCH_SMART 4
#define CATCH_FAIRY 5

static const u32 POKE_MART_MAP[QUEST_BODEGABURNOUT_SUB_COUNT][4]=
{
    {MAP_PERLACIA_CITY_POKEMON_CENTER_1F,SUB_QUEST_1,DELIVER,MAP_ROUTE6},
    {MAP_QIU_VILLAGE_POKEMON_CENTER_1F,SUB_QUEST_2,DELIVER,MAP_TORGEOT_CLIMB},
    {MAP_HALERBA_CITY_POKEMON_CENTER_1F,SUB_QUEST_3,DELIVER,MAP_ROUTE3},
    {MAP_CAPHE_CITY_POKEMON_CENTER_1F,SUB_QUEST_4,DELIVER,MAP_ARANTRAZ},
    {MAP_CRESALTA_VISTA_POKEMON_CENTER_1F,SUB_QUEST_5,DELIVER,MAP_CAPHE_CITY},
    {MAP_GLAVEZ_HILL_POKEMON_CENTER_1F,SUB_QUEST_6,DELIVER,MAP_PERLACIA_CITY},

    {MAP_CURENO_PORT_POKEMON_CENTER_1F,SUB_QUEST_7,RESCUE,MAP_ROUTE14},
    {MAP_MERMEREZA_CITY_POKEMON_CENTER_1F,SUB_QUEST_8,RESCUE,MAP_ROUTE4},
    {MAP_HODOU_CITY_POKEMON_CENTER_1F,SUB_QUEST_9,RESCUE,MAP_HODOU_CITY},
    {MAP_TORA_TOWN_POKEMON_CENTER_1F,SUB_QUEST_10,RESCUE,MAP_ROUTE10},
    {MAP_IRISINA_TOWN_POKEMON_CENTER_1F,SUB_QUEST_11,RESCUE,MAP_ROUTE11},
    {MAP_PETAROSA_BOROUGH_POKEMON_CENTER_1F,SUB_QUEST_12,RESCUE,MAP_NONGYU_BRIDGE},

    {MAP_OROLAND_POKEMON_CENTER_1F,SUB_QUEST_13,CATCH_STRONG,},
    {MAP_ESPULEE_OUTSKIRTS_POKEMON_CENTER_1F,SUB_QUEST_14,CATCH_STRONG,},
    {MAP_TIRABUDIN_PLACE_POKEMON_CENTER_1F,SUB_QUEST_15,CATCH_COLD,},
    {MAP_ZENZU_ISLAND_POKEMON_CENTER_1F,SUB_QUEST_16,CATCH_COLD,},
    {MAP_CUCONU_TOWN_POKEMON_CENTER_1F,SUB_QUEST_17,CATCH_SMART,},
    {MAP_HALAI_ISLAND_POKEMON_CENTER_1F,SUB_QUEST_18,CATCH_SMART,},
    {MAP_CHASILLA_POKEMON_CENTER_1F,SUB_QUEST_19,CATCH_FAIRY,},
};

static const u8* const bodegaParametersTextArray[19][2]=
{
    {gText_Bodegaburnout_PersonA,gText_Route6},
    {gText_Bodegaburnout_PersonB,gText_TorgeotClimb},
    {gText_Bodegaburnout_PersonC,gText_Route3},
    {gText_Bodegaburnout_PersonD,gText_Arantraz},
    {gText_Bodegaburnout_PersonE,gText_CapheCity},
    {gText_Bodegaburnout_PersonF,gText_PerlaciaCity},
    {gText_Bodegaburnout_PersonG,gText_Route14},
    {gText_Bodegaburnout_PersonH,gText_Route4},
    {gText_Bodegaburnout_PersonI,gText_HodouCity},
    {gText_Bodegaburnout_PersonJ,gText_Route10},
    {gText_Bodegaburnout_PersonK,gText_Route11},
    {gText_Bodegaburnout_PersonL,gText_NongyuBridge},
    {gText_Bodegaburnout_StrongMon,gText_Bodegaburnout_AssistWithStocking},
    {gText_Bodegaburnout_StrongMon,gText_Bodegaburnout_AssistWithStocking},
    {gText_Bodegaburnout_ColdMon,gText_Bodegaburnout_HelpKeepFood},
    {gText_Bodegaburnout_ColdMon,gText_Bodegaburnout_HelpKeepFood},
    {gText_Bodegaburnout_SmartMon,gText_Bodegaburnout_BalanceOurBooks},
    {gText_Bodegaburnout_SmartMon,gText_Bodegaburnout_BalanceOurBooks},
    {gText_Bodegaburnout_FairyMon,gText_Bodegaburnout_RaiseTheMood},
};

u8 Quest_Bodegaburnout_LookUpCorrespondingSubquest(void){
    u8 i;

    for (i = 0; i < QUEST_BODEGABURNOUT_SUB_COUNT; i++) {
        if (POKE_MART_MAP[i][0] == GetCurrentMap()) {
            return i;
        }
    }
    return 99;
}

bool8 Quest_Bodegaburnout_IsSubquestComplete(void){
    u8 index = Quest_Bodegaburnout_LookUpCorrespondingSubquest();
    u8 subquest = POKE_MART_MAP[index][1];

    if (QuestMenu_GetSetSubquestState(QUEST_BODEGABURNOUT, FLAG_GET_COMPLETED, subquest)){
        return TRUE;
    }else{
        return FALSE;
    }
}

void Quest_Bodegaburnout_Catch_MarkSubquestComplete(void){
    u32 subquest = 0;
    bool8 foundTaxi = FALSE;
    u8 i;

    for (i = 0; i < QUEST_BODEGABURNOUT_SUB_COUNT; i++) {
        if (POKE_MART_MAP[i][0] == GetCurrentMap()) {
            subquest = POKE_MART_MAP[i][1];
            foundTaxi = TRUE;
            break;
        }
    }

    if (foundTaxi) {
        if (!QuestMenu_GetSetSubquestState(QUEST_BODEGABURNOUT, FLAG_GET_COMPLETED, subquest)) {
            QuestMenu_GetSetSubquestState(QUEST_BODEGABURNOUT, FLAG_SET_COMPLETED, subquest);
        }
    }
}

u16 Quest_Bodegaburnout_CountRemainingSubquests(void){
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_BODEGABURNOUT);
}

bool8 Quest_Bodegaburnout_CheckReadyForNext(void){
    u8 currentSubQuest;
    u8 questType;
    u8 completedDeliver = 0, completedRescue = 0, completedCatch = 0;
    u8 requiredComplete = 1;

    for (currentSubQuest = 0; currentSubQuest < QUEST_BODEGABURNOUT_SUB_COUNT; currentSubQuest++)
    {
        if (QuestMenu_GetSetSubquestState(QUEST_BODEGABURNOUT, FLAG_GET_COMPLETED, currentSubQuest))
        {
            questType = POKE_MART_MAP[currentSubQuest][2];

            switch(questType){
                case CATCH_STRONG:
                case CATCH_COLD:
                case CATCH_SMART:
                case CATCH_FAIRY:
                    completedCatch++;
                    break;
                case DELIVER: completedDeliver++;
                  break;
                case RESCUE: completedRescue++;
                 break;
                default: break;
            }
        }
    }

    return (
            (completedDeliver > requiredComplete) &&
            (completedRescue > requiredComplete) &&
            (completedCatch > requiredComplete)
           );
}

u32 Quest_Bodegaburnout_GetQuestType(void){
    u8 i;

    for (i = 0; i < QUEST_BODEGABURNOUT_SUB_COUNT; i++) {
        if (POKE_MART_MAP[i][0] == GetCurrentMap()) {
            return POKE_MART_MAP[i][2];
        }
    }
    return 99;
}

void Quest_Bodegaburnout_LoadRequestText(void){
    u8 i;

    for (i = 0; i < QUEST_BODEGABURNOUT_SUB_COUNT; i++) {
        if (POKE_MART_MAP[i][0] == GetCurrentMap()) {
            StringCopy(gStringVar1,bodegaParametersTextArray[i][0]);
            StringCopy(gStringVar2,bodegaParametersTextArray[i][1]);
            StringCopy(gStringVar3,gText_Pokemon);
        }
    }
}

bool8 Quest_Bodegaburnout_CheckStrongPokemon(void){
    //Human-like egg group AND 12 decimeters
    u32 species = 0, height = 0;
    u32 eggGroup[2] = {0,0};
    u32 requiredHeight = 12;
    bool8 doesPokemonMatch = TRUE;

    species = GetMonData(&gPlayerParty[gSpecialVar_0x8004],MON_DATA_SPECIES,NULL);
    eggGroup[0] = gSpeciesInfo[species].eggGroups[0];
    eggGroup[1] = gSpeciesInfo[species].eggGroups[1];
    height = gSpeciesInfo[species].height;

    if (
            (
             (eggGroup[0] != EGG_GROUP_HUMAN_LIKE) &&
             (eggGroup[1] != EGG_GROUP_HUMAN_LIKE)
            )
            ||
            (height < requiredHeight)
       )
            {
                doesPokemonMatch = FALSE;
            }
    return doesPokemonMatch;
}

bool8 Quest_Bodegaburnout_CheckColdPokemon(void){
    u32 species = 0;
    u32 type[2] = {0,0};
    bool8 doesPokemonMatch = TRUE;

    species = GetMonData(&gPlayerParty[gSpecialVar_0x8004],MON_DATA_SPECIES,NULL);
    type[0] = gSpeciesInfo[species].types[0];
    type[1] = gSpeciesInfo[species].types[1];

        if (
             (type[0] != TYPE_ICE) &&
             (type[1] != TYPE_ICE)
           )
            {
                doesPokemonMatch = FALSE;
            }
    return doesPokemonMatch;
}

bool8 Quest_Bodegaburnout_CheckSmartPokemon(void){
    //Pokemon that like Bitter food have an easier time becoming Smart in Contest Data, so only pokemon that like bitter flavors
    u32 nature = GetNature(&gPlayerParty[gSpecialVar_0x8004]);

    if (
        (nature != NATURE_GENTLE) &&
        (nature != NATURE_SASSY) &&
        (nature != NATURE_CALM) &&
        (nature != NATURE_CAREFUL)
       )
    {
        return FALSE;
    }

    return TRUE;
}

bool8 Quest_Bodegaburnout_CheckFairyPokemon(void){
    u32 species = 0;
    u32 eggGroup[2] = {0,0};
    u32 type[2] = {0,0};
    bool8 doesPokemonMatch = TRUE;

    species = GetMonData(&gPlayerParty[gSpecialVar_0x8004],MON_DATA_SPECIES,NULL);
    eggGroup[0] = gSpeciesInfo[species].eggGroups[0];
    eggGroup[1] = gSpeciesInfo[species].eggGroups[1];
    type[0] = gSpeciesInfo[species].types[0];
    type[1] = gSpeciesInfo[species].types[1];

        if (
             (eggGroup[0] != EGG_GROUP_FAIRY) &&
             (eggGroup[1] != EGG_GROUP_FAIRY)
             &&
             (type[0] != TYPE_FAIRY) &&
             (type[1] != TYPE_FAIRY)
           )
            {
                doesPokemonMatch = FALSE;
            }
    return doesPokemonMatch;
}

bool8 Quest_Bodegaburnout_CheckRequiredPokemon(void){
    u8 index = Quest_Bodegaburnout_LookUpCorrespondingSubquest();
    u8 neededType = POKE_MART_MAP[index][2];

    switch(neededType){
        case CATCH_STRONG:
            return Quest_Bodegaburnout_CheckStrongPokemon();
        case CATCH_COLD:
            return Quest_Bodegaburnout_CheckColdPokemon();
        case CATCH_SMART:
            return Quest_Bodegaburnout_CheckSmartPokemon();
        case CATCH_FAIRY:
            return Quest_Bodegaburnout_CheckFairyPokemon();
        default:
            return FALSE;
    }
}

bool8 Quest_Bodegaburnout_CheckLocationAndMatchItem(void){
    u8 i;
    u16 bodegaPackage = ITEM_BODEGA_DELIVERY_FIRST;

    for (i = 0; i < QUEST_BODEGABURNOUT_SUB_COUNT; i++) {
        if (POKE_MART_MAP[i][0] == GetCurrentMap()) {
            bodegaPackage += i;
            gSpecialVar_0x8000 = bodegaPackage;
            gSpecialVar_0x8001 = 1;
            break;
        }
    }
    return CheckBagHasItem(bodegaPackage,1);
}


u8 Quest_Bodegaburnout_GetIndexFirstRescue(void){
    u8 i;

    for (i = 0; i < QUEST_BODEGABURNOUT_SUB_COUNT; i++) {
        if (POKE_MART_MAP[i][2] == RESCUE){
            break;
        }
    }
    return i;
}

void Quest_Bodegaburnout_CheckAndSetRescueFlag(void){
    u8 j, k = 0;
    u16 rescueFlag = FLAG_QUEST_BODEGA_RESCUE_FLAGS_START;
    bool8 flagStatus;
    bool8 questStatus = QuestMenu_GetSetQuestState(QUEST_BODEGABURNOUT, FLAG_GET_ACTIVE);

    for (j = Quest_Bodegaburnout_GetIndexFirstRescue(); j < QUEST_BODEGABURNOUT_SUB_COUNT; j++) {
        if (POKE_MART_MAP[k][3] == GetCurrentMap()) {
            rescueFlag += k;

            flagStatus = FlagGet(rescueFlag);
            if (!flagStatus && !questStatus){
                FlagSet(rescueFlag);
                FlagSet(FLAG_QUEST_BODEGA_RESCUE1); //PSF TODO Is this a debug line?
            }
            break;
        }
        k++;
    }
}

void Quest_Bodegaburnout_ClearRescueFlag(void){
    u8 j, k = 0;
    u16 rescueFlag = FLAG_QUEST_BODEGA_RESCUE_FLAGS_START;

    for (j = Quest_Bodegaburnout_GetIndexFirstRescue(); j < QUEST_BODEGABURNOUT_SUB_COUNT; j++) {
        if (POKE_MART_MAP[j][0] == GetCurrentMap()) {
            rescueFlag += k;

            if (FlagGet(rescueFlag)){
                FlagClear(rescueFlag);
            }
            break;
        }
        k++;
    }
}

void Quest_Bodegaburnout_DeliveryRescue_MarkSubquestCompleteAndRemoveItem(void){
    u8 i;
    u16 bodegaPackage = ITEM_BODEGA_DELIVERY_FIRST;

    for (i = 0; i < QUEST_BODEGABURNOUT_SUB_COUNT; i++) {
        if (POKE_MART_MAP[i][3] == GetCurrentMap()) {
            QuestMenu_GetSetSubquestState(QUEST_BODEGABURNOUT, FLAG_SET_COMPLETED,POKE_MART_MAP[i][1]);

            if (POKE_MART_MAP[i][2] == DELIVER) {
                bodegaPackage += i;
                RemoveBagItem(bodegaPackage,1);
            }
            break;
        }
    }
}

// ***********************************************************************
// Quest: Break The Internet
// ***********************************************************************

static const u32 socialMediaQuestList[] =
{
    QUEST_RABIESOUTBREAK,
    QUEST_VSDEOXYS,
    QUEST_FRESHWATEREVOLUTION,
    QUEST_SMOOTHIECRAFTING,
    QUEST_HODOUTUNNELS,
    QUEST_PSYOP,
    QUEST_BREAKTHEINTERNET,
    QUEST_BETWEENASTONEANDAHARDPLACE,
    QUEST_ROCKCOLLECTOR,
};

u8 Quest_Breaktheinternet_Count_CompletedSocialMedia(void)
{
    u32 i, numCompletedQuests = 0;

    for (i = 0; i < ARRAY_COUNT(socialMediaQuestList) ;i++)
        if (QuestMenu_GetSetQuestState(socialMediaQuestList[i],FLAG_GET_COMPLETED))
            numCompletedQuests++;

    return numCompletedQuests;
}

u16 Quest_Breaktheinternet_CountRemainingSubquests(void)
{
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_BREAKTHEINTERNET);
}

// ***********************************************************************
// Quest: Warehouse Warfare
// ***********************************************************************

u16 Quest_Warehousewarfare_CountRemainingSubquests(void)
{
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_WAREHOUSEWARFARE);
}

// ***********************************************************************
// Quest: Persuasive Passenger
// ***********************************************************************

u16 Quest_Persuasivepassenger_CountRemainingSubquests(void)
{
    return Quest_Generic_CountAndBufferRemainingSubquests(QUEST_PERSUASIVEPASSENGER);
}

bool8 Quest_Persuasivepassenger_ShouldPlayFirstDriver(void)
{
    u16 completedQuests = Quest_Persuasivepassenger_CountRemainingSubquests();
    bool8 questActive = QuestMenu_GetSetQuestState(QUEST_PERSUASIVEPASSENGER,FLAG_GET_ACTIVE);
    bool8 onCorrectMap = (MAP_HALAI_ISLAND == GetCurrentMap());
    bool8 shouldPlay = FALSE;

    if ((completedQuests == 3) && (questActive) && (onCorrectMap)){
        shouldPlay = TRUE;
    }

    return shouldPlay;
}

bool8 Quest_Persuasivepassenger_ShouldPlaySecondDriver(void)
{
    u16 completedQuests = Quest_Persuasivepassenger_CountRemainingSubquests();
    bool8 questActive = QuestMenu_GetSetQuestState(QUEST_PERSUASIVEPASSENGER,FLAG_GET_ACTIVE);
    bool8 onCorrectMap = (MAP_TIRABUDIN_PLACE == GetCurrentMap());
    bool8 shouldPlay = FALSE;

    if ((completedQuests == 2) && (questActive) && (onCorrectMap)){
        shouldPlay = TRUE;
    }

    return shouldPlay;
}

bool8 Quest_Persuasivepassenger_ShouldPlayThirdDriver(void)
{
    u16 completedQuests = Quest_Persuasivepassenger_CountRemainingSubquests();
    bool8 questActive = QuestMenu_GetSetQuestState(QUEST_PERSUASIVEPASSENGER,FLAG_GET_ACTIVE);
    bool8 shouldPlay = FALSE;

    if ((completedQuests == 1) && (questActive)){
        shouldPlay = TRUE;
    }

    return shouldPlay;
}

u16 Quest_Persuasivepassenger_CheckQuestAndChooseDriver(void){
    if(!QuestMenu_GetSetQuestState(QUEST_PERSUASIVEPASSENGER,FLAG_GET_ACTIVE))
        return NO_EXCEPTION;

    if (Quest_Persuasivepassenger_ShouldPlayFirstDriver())
        return EXCEPTION_3;

    if (Quest_Persuasivepassenger_ShouldPlaySecondDriver())
        return EXCEPTION_2;

    if (Quest_Persuasivepassenger_ShouldPlayThirdDriver())
        return EXCEPTION_1;

    return NO_EXCEPTION;
}

bool8 Quest_Persuasivepassenger_CheckNeededItems(void){
    bool8 hasSitrus = CheckBagHasItem(ITEM_SITRUS_BERRY,3);
    bool8 hasHoney = CheckBagHasItem(ITEM_HONEY,5);
    bool8 hasWatmel = CheckBagHasItem(ITEM_WATMEL_BERRY,1);
    bool8 hasLemonade = CheckBagHasItem(ITEM_LEMONADE,2);

    bool8 hasNeededItems = FALSE;

    if (hasSitrus && hasHoney && hasWatmel && hasLemonade){
        hasNeededItems = TRUE;
    }
    return hasNeededItems;
}
void Quest_Persuasivepassenger_TakeNeededItems(void){
    if (Quest_Persuasivepassenger_CheckNeededItems()){
        RemoveBagItem(ITEM_SITRUS_BERRY,3);
        RemoveBagItem(ITEM_HONEY,5);
        RemoveBagItem(ITEM_WATMEL_BERRY,1);
        RemoveBagItem(ITEM_LEMONADE,2);
    }
}

// ***********************************************************************
// Quest: Skill Library
// ***********************************************************************

u32 Quest_Skilllibrary_CountObtainedTechnicalMachines(void)
{
    u32 count = 0, machineIndex = 0;
    u32 machineRange = (ITEM_TM01 + NUM_TECHNICAL_MACHINES);

    for (machineIndex = ITEM_TM01; machineIndex < machineRange; machineIndex++)
        if (CheckBagHasItem(machineIndex,1))
            count++;

    return count;
}

void Quest_Skilllibrary_StoreAndCompare(void)
{
    u32 numMachines = Quest_Skilllibrary_CountObtainedTechnicalMachines();
    u32 previousNumMachines = VarGet(VAR_QUEST_SKILLLIBRARY_TM_COUNT);
    u32 diff = (numMachines - previousNumMachines);
    u32 remainingMachines = (NUM_TECHNICAL_MACHINES - numMachines);
    bool32 hasMoreMachines = (diff > 0);

    gSpecialVar_Result = hasMoreMachines;
    ConvertIntToDecimalStringN(gStringVar1, numMachines, STR_CONV_MODE_LEFT_ALIGN, 3);

    if (!hasMoreMachines)
        return;

    VarSet(VAR_QUEST_SKILLLIBRARY_TM_COUNT,numMachines);
    ConvertIntToDecimalStringN(gStringVar2, diff, STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar3, remainingMachines, STR_CONV_MODE_LEFT_ALIGN, 3);
}

u32 Quest_Skilllibrary_GetPercentage(void)
{
    return (Quest_Skilllibrary_CountObtainedTechnicalMachines() / NUM_TECHNICAL_MACHINES) * 100;
}

void Quest_Skilllibrary_Debug(void)
{
    u32 machineIndex = 0;
    u32 machineRange = (ITEM_TM01 + NUM_TECHNICAL_MACHINES);

    for (machineIndex = ITEM_TM01; machineIndex < machineRange; machineIndex++)
        if (!CheckBagHasItem(machineIndex,1))
            AddBagItem(machineIndex,1);
}

// ***********************************************************************
// Quest: Compulsive Healing Peer Support
// ***********************************************************************

bool8 Quest_CompulsiveHealingPeerSupport_CheckIfPartyTypes(void);

void DebugQuest_CompulsiveHealingPeerSupport(u8 state)
{
    switch (state)
    {
        default:
        case STATE_QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP_NOT_STARTED:
            break;
        case STATE_QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP_STARTED_QUEST:
            QuestMenu_ScriptSetActive(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP);
            break;
        case STATE_QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP_COMPLETE_QUEST:
            FlagSet(FLAG_DAILY_NOPOMOD_BATTLE);
            QuestMenu_ScriptSetComplete(QUEST_COMPULSIVEHEALINGPEERSUPPORTGROUP);
            break;
    }
}

void Quest_CompulsiveHealingPeerSupport_UpdateType(void)
{
    u32 randomType = Random() % NUMBER_OF_MON_TYPES;
    while(randomType == TYPE_MYSTERY || randomType == TYPE_NONE || randomType == TYPE_STELLAR)
        randomType = Random () % NUMBER_OF_MON_TYPES;

    VarSet(VAR_QUEST_COMPULSIVE_HEALING_PEER_SUPPORT_GROUP_DAILY_TYPE,randomType);
}

void Quest_TryCompulsiveHealingPeerSupport_UpdateType(u16 days)
{
    if (days == 0)
        return;

    Quest_CompulsiveHealingPeerSupport_UpdateType();
}

void Quest_CompulsiveHealingPeerSupport_BufferTypeName(void)
{
    u32 dailyType = VarGet(VAR_QUEST_COMPULSIVE_HEALING_PEER_SUPPORT_GROUP_DAILY_TYPE);
    StringCopy(gStringVar1,gTypesInfo[dailyType].name);
}

void Script_Quest_CompulsiveHealingPeerSupport_CheckIfPartyTypes(void)
{
    gSpecialVar_Result = Quest_CompulsiveHealingPeerSupport_CheckIfPartyTypes();
}

bool8 Quest_CompulsiveHealingPeerSupport_CheckIfPartyTypes(void)
{
    u32 dailyType = VarGet(VAR_QUEST_COMPULSIVE_HEALING_PEER_SUPPORT_GROUP_DAILY_TYPE);
    struct Pokemon *pokemon;

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        pokemon = &gPlayerParty[i];
        if (GetMonData(pokemon, MON_DATA_SANITY_HAS_SPECIES) && !GetMonData(pokemon, MON_DATA_IS_EGG))
        {
            u32 species = GetMonData(pokemon, MON_DATA_SPECIES);
            if (gSpeciesInfo[species].types[0] != dailyType && gSpeciesInfo[species].types[1] != dailyType)
            {
                return FALSE;
            }
        }
    }
    return TRUE;
}
// ***********************************************************************
// Quest: Restore Treasure Island
// ***********************************************************************


u16 Quest_Restorezenzugym_CheckRemainingSubquests(void)
{
    return Quest_Generic_CountRemainingSubquests(QUEST_RESTOREZENZUGYM);
}

// ***********************************************************************
// Quest: Restore EspuleeOutskirts
// ***********************************************************************

u16 Quest_Restoreespuleeoutskirts_CheckRemainingSubquests(void)
{
    return Quest_Generic_CountRemainingSubquests(QUEST_RESTOREESPULEEGYM);
}

// ***********************************************************************
// Quest: Artisan Balls 1
// ***********************************************************************

void TryToUpdateArtisanBalls1SubQuestsState(u16 itemId)
{
    u32 subquestId;

    if (!QuestMenu_GetSetQuestState(QUEST_ARTISANBALLS1, FLAG_GET_ACTIVE))
        return;

    switch (itemId)
    {
        case ITEM_FAST_BALL:
            subquestId = SUB_QUEST_1;
            break;
        case ITEM_LEVEL_BALL:
            subquestId = SUB_QUEST_2;
            break;
        case ITEM_LURE_BALL:
            subquestId = SUB_QUEST_3;
            break;
        case ITEM_HEAVY_BALL:
            subquestId = SUB_QUEST_4;
            break;
        case ITEM_LOVE_BALL:
            subquestId = SUB_QUEST_5;
            break;
        case ITEM_FRIEND_BALL:
            subquestId = SUB_QUEST_6;
            break;
        case ITEM_MOON_BALL:
            subquestId = SUB_QUEST_7;
            break;
        default:
            return;
    }

    QuestMenu_GetSetSubquestState(QUEST_ARTISANBALLS1, FLAG_SET_COMPLETED, subquestId);
}


// ***********************************************************************
// Quest: Artisan Balls 3
// ***********************************************************************
void Quest_ArtisanBalls3_CheckBallSetReward(u32 battler)
{
    bool32 isPlayerSide = (GetBattlerSide(battler) == B_SIDE_PLAYER);
    bool32 usingApricornBall = IS_ITEM_APRICORN_BALL(GetMonData(&gPlayerParty[gBattlerPartyIndexes[battler]], MON_DATA_POKEBALL));

    bool32 battlingGymLeader = (gTrainers[gTrainerBattleParameter.params.opponentA]->trainerClass == TRAINER_CLASS_LEADER || gTrainers[gTrainerBattleParameter.params.opponentB]->trainerClass == TRAINER_CLASS_LEADER);

    bool32 battlingInStadium = (GetCurrentMap() == MAP_SHARPRISE_STADIUM_ARENA);

    if (!isPlayerSide)
        return;
    if (!usingApricornBall)
        return;
    if (!battlingGymLeader && !battlingInStadium)
        return;

    QuestMenu_GetSetQuestState(QUEST_ARTISANBALLS3, FLAG_SET_REWARD);
}

void Quest_ArtisanBalls3_CheckFirstBattlerBallsAndSetReward(void)
{
    bool32 isArtisanBall3Active = QuestMenu_GetSetQuestState(QUEST_ARTISANBALLS3,FLAG_GET_ACTIVE);
    u32 battlerId;

    if (!isArtisanBall3Active)
        return;

    for (battlerId = 0; battlerId < gBattlersCount; battlerId++)
        Quest_ArtisanBalls3_CheckBallSetReward(battlerId);
}
// ***********************************************************************
// Quest: Ice Cream Crafting
// ***********************************************************************

void DebugQuest_Smoothiecrafting(u8 state)
{
    switch (state)
    {
        case STATE_QUEST_SMOOTHIECRAFTING_NOT_STARTED:
            break;
        case STATE_QUEST_SMOOTHIECRAFTING_STARTED:
            Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_SMOOTHIE);
            QuestMenu_ScriptSetActive(QUEST_SMOOTHIECRAFTING);
            break;
        case STATE_QUEST_SMOOTHIECRAFTING_HAS_ITEMS:
            AddBagItem(QUEST_SMOOTHIE_CRAFTING_BERRY_1,QUEST_SMOOTHIE_CRAFTING_QUANTITY_1);
            AddBagItem(QUEST_SMOOTHIE_CRAFTING_BERRY_2,QUEST_SMOOTHIE_CRAFTING_QUANTITY_2);
            AddBagItem(QUEST_SMOOTHIE_CRAFTING_BERRY_3,QUEST_SMOOTHIE_CRAFTING_QUANTITY_3);
            break;
        case STATE_QUEST_SMOOTHIECRAFTING_REWARD:
            RemoveBagItem(QUEST_SMOOTHIE_CRAFTING_BERRY_1,QUEST_SMOOTHIE_CRAFTING_QUANTITY_1);
            RemoveBagItem(QUEST_SMOOTHIE_CRAFTING_BERRY_2,QUEST_SMOOTHIE_CRAFTING_QUANTITY_2);
            RemoveBagItem(QUEST_SMOOTHIE_CRAFTING_BERRY_3,QUEST_SMOOTHIE_CRAFTING_QUANTITY_3);
            break;
        case STATE_QUEST_SMOOTHIECRAFTING_COMPLETE:
            QuestMenu_ScriptSetComplete(QUEST_SMOOTHIECRAFTING);
            AddBagItem(QUEST_SMOOTHIE_CRAFTING_PRODUCT,6);
            break;
    }
}
void Quest_SmoothieCrafting_BufferRecipe(void)
{
    StringCopy(gStringVar2,COMPOUND_STRING(""));
    ConvertIntToDecimalStringN(gStringVar4,QUEST_SMOOTHIE_CRAFTING_QUANTITY_1,STR_CONV_MODE_LEFT_ALIGN,CountDigits(QUEST_SMOOTHIE_CRAFTING_QUANTITY_1));
    StringAppend(gStringVar2,gStringVar4);
    StringAppend(gStringVar2,COMPOUND_STRING(" "));
    CopyItemNameHandlePlural(QUEST_SMOOTHIE_CRAFTING_BERRY_1,gStringVar4,QUEST_SMOOTHIE_CRAFTING_QUANTITY_1);
    StringAppend(gStringVar2,gStringVar4);
    StringAppend(gStringVar2,COMPOUND_STRING(", "));

    ConvertIntToDecimalStringN(gStringVar4,QUEST_SMOOTHIE_CRAFTING_QUANTITY_2,STR_CONV_MODE_LEFT_ALIGN,CountDigits(QUEST_SMOOTHIE_CRAFTING_QUANTITY_2));
    StringAppend(gStringVar2,gStringVar4);
    StringAppend(gStringVar2,COMPOUND_STRING(" "));
    CopyItemNameHandlePlural(QUEST_SMOOTHIE_CRAFTING_BERRY_2,gStringVar4,QUEST_SMOOTHIE_CRAFTING_QUANTITY_2);
    StringAppend(gStringVar2,gStringVar4);
    StringAppend(gStringVar2,COMPOUND_STRING(", & "));

    ConvertIntToDecimalStringN(gStringVar4,QUEST_SMOOTHIE_CRAFTING_QUANTITY_3,STR_CONV_MODE_LEFT_ALIGN,CountDigits(QUEST_SMOOTHIE_CRAFTING_QUANTITY_3));
    StringAppend(gStringVar2,gStringVar4);
    StringAppend(gStringVar2,COMPOUND_STRING(" "));
    CopyItemNameHandlePlural(QUEST_SMOOTHIE_CRAFTING_BERRY_3,gStringVar4,QUEST_SMOOTHIE_CRAFTING_QUANTITY_3);
    StringAppend(gStringVar2,gStringVar4);
    StringAppend(gStringVar2,COMPOUND_STRING(""));
}

void Quest_SmoothieCrafting_ConstrctRemaining(void)
{
}

// ***********************************************************************
// Quest: Freshwater Evolution
// ***********************************************************************
// Scans the Player's party.
// If the Player has 6 Shiny Octillery, the function returns TRUE. If they don't, it returns FALSE.
// The function stores the nickname of the last Octillery scanned inside of gStringVar1/STR_VAR_1.
bool8 IsPartyFullOfShinyOctillery(void)
{
    u32 partyCount = CalculatePlayerPartyCount();

    for (gSpecialVar_0x8004 = 0; gSpecialVar_0x8004 <= partyCount; gSpecialVar_0x8004++)
    {
        if(GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES) != QUEST_FRESHWATER_EVOLUTION_SPECIES)
            continue;

        if (IsMonShiny(&gPlayerParty[gSpecialVar_0x8004]))
            continue;

        GetMonNickname(&gPlayerParty[gSpecialVar_0x8004], gStringVar1);
        return FALSE;
    }

    return TRUE;
}

void DebugQuest_FreshwaterEvolution(u8 state)
{
    switch (state)
    {
        case STATE_QUEST_FRESHWATER_NOT_STARTED:
            break;
        case STATE_QUEST_FRESHWATER_STARTED:
            Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_FRESHWATER);
            QuestMenu_ScriptSetActive(QUEST_FRESHWATEREVOLUTION);
            break;
        case STATE_QUEST_FRESHWATER_REWARD:
            QuestMenu_ScriptSetReward(QUEST_FRESHWATEREVOLUTION);
            GetSetPokedexFlag(SpeciesToNationalPokedexNum(QUEST_FRESHWATER_EVOLUTION_SPECIES),FLAG_SET_CAUGHT);
            GetSetPokedexFlag(SpeciesToNationalPokedexNum(QUEST_FRESHWATER_EVOLUTION_SPECIES),FLAG_SET_SEEN);
            break;
        case STATE_QUEST_FRESHWATER_COMPLETE:
            QuestMenu_ScriptSetComplete(QUEST_FRESHWATEREVOLUTION);
            AddBagItem(QUEST_FRESHWATER_EVOLUTION_ITEM,1);
            break;
    }
}

// ***********************************************************************
// Cutscene: You Realize They're Evil, Right?
// ***********************************************************************
void YouRealizeTheyreEvilRight_GetMapForCompletedRestoration(void)
{
    if (QuestMenu_GetSetQuestState(QUEST_RESTOREZENZUGYM,FLAG_GET_COMPLETED))
    {
        StringCopy(gStringVar1,gText_Quest_RestoreZenzuIsland_Map);
        return;
    }
    if (QuestMenu_GetSetQuestState(QUEST_RESTOREHODOUGYM,FLAG_GET_COMPLETED))
    {
        StringCopy(gStringVar1,gText_Quest_RestoreHodouCity_Map);
        return;
    }
    if (QuestMenu_GetSetQuestState(QUEST_RESTOREESPULEEGYM,FLAG_GET_COMPLETED))
    {
        StringCopy(gStringVar1,gText_Quest_RestoreEspuleeOutskirts_Map);
        return;
    }
}

// ***********************************************************************
// Cutscene: VSGarbodor
// ***********************************************************************
//PSF TODO rewrite this to make a table of starters and VAR_CHOSEN_PSF_STARTER, and look at the types of that pokemon and randomly pick one
u32 VSGarbodor_RandomlyChooseTypeFromStarter(void)
{
    u32 type = Random() % 2;
    u32 gemType = 0;

    switch(VarGet(VAR_CHOSEN_PSF_STARTER))
    {
        case 0: return gemType = gSpeciesInfo[SPECIES_SCYTHER].types[type];
        case 1: return gemType = gSpeciesInfo[SPECIES_CHARMANDER].types[type];
        case 2: return gemType = gSpeciesInfo[SPECIES_PETILIL].types[type];
        case 3: return gemType = gSpeciesInfo[SPECIES_FLAAFFY].types[type];
        case 4: return gemType = gSpeciesInfo[SPECIES_MAREANIE].types[type];
        case 5: return gemType = gSpeciesInfo[SPECIES_ARON].types[type];
        case 6: return gemType = gSpeciesInfo[SPECIES_SWINUB].types[type];
        case 7: return gemType = gSpeciesInfo[SPECIES_HATTREM].types[type];
        default: return gemType = gSpeciesInfo[SPECIES_PANCHAM].types[type];
    }

}

u32 VSGarbodor_GetGemFromType(void)
{
    switch(VSGarbodor_RandomlyChooseTypeFromStarter())
    {
        case TYPE_NORMAL: return ITEM_NORMAL_GEM;
        case TYPE_FIGHTING: return ITEM_FIGHTING_GEM;
        case TYPE_FLYING: return ITEM_FLYING_GEM;
        case TYPE_POISON: return ITEM_POISON_GEM;
        case TYPE_GROUND: return ITEM_GROUND_GEM;
        case TYPE_ROCK: return ITEM_ROCK_GEM;
        case TYPE_BUG: return ITEM_BUG_GEM;
        case TYPE_GHOST: return ITEM_GHOST_GEM;
        case TYPE_STEEL: return ITEM_STEEL_GEM;
        case TYPE_FIRE: return ITEM_FIRE_GEM;
        case TYPE_WATER: return ITEM_WATER_GEM;
        case TYPE_GRASS: return ITEM_GRASS_GEM;
        case TYPE_ELECTRIC: return ITEM_ELECTRIC_GEM;
        case TYPE_PSYCHIC: return ITEM_PSYCHIC_GEM;
        case TYPE_ICE: return ITEM_ICE_GEM;
        case TYPE_DRAGON: return ITEM_DRAGON_GEM;
        case TYPE_DARK: return ITEM_DARK_GEM;
        default: return ITEM_FAIRY_GEM;
    }
}

void VSGarbodor_ChooseGemBasedOnStarter(void)
{
    gSpecialVar_0x8003 = VSGarbodor_GetGemFromType();
}

// ***********************************************************************
// Cutscene: MaskOff  / Manhunt
// ***********************************************************************

bool32 MaskOff_ShouldShowVigrim(void)
{
    if (VarGet(VAR_MASK_OFF_STATE) < GOT_MASK_OFF_CLUE_4)
        return FALSE;
    if (VarGet(VAR_MASK_OFF_STATE) >= DEFEATED_MASK_OFF_VIGRIM)
        return FALSE;
    return (HasPlayerJoinedThe_Tide());
}

bool32 Manhunt_ShouldShowVigrim(void)
{
    if (VarGet(VAR_MANHUNT_STATE) < GOT_MANHUNT_CLUE_4)
        return FALSE;
    if (VarGet(VAR_MANHUNT_STATE) >= DEFEATED_MANHUNT_VIGRIM)
        return FALSE;
    return (!HasPlayerJoinedThe_Tide());
}

bool32 ShouldShowVigrim(void)
{
    //if on the last stage of "MaskOff", OR the last stage of "Manhunt", OR before the raid on the Naval Base, then show Vigrim. otherwise, hide
    if (MaskOff_ShouldShowVigrim())
        return TRUE;

    if (Manhunt_ShouldShowVigrim())
        return TRUE;

    if (VarGet(VAR_STORYLINE_STATE) < STORY_EAST_RESIDO_COMPLETE)
        return TRUE;

    return FALSE;
}

// ***********************************************************************
// Cutscene: False Timeline
// ***********************************************************************


u32 GetFalseTimelineCompletion(void)
{
    bool32 completedManhunt = QuestMenu_GetSetQuestState(QUEST_MANHUNT,FLAG_GET_COMPLETED);
    bool32 completedHowDisappointing = QuestMenu_GetSetQuestState(QUEST_HOWDISAPPOINTING,FLAG_GET_COMPLETED);
    bool32 completedLetsBurnThisMotherDown = QuestMenu_GetSetQuestState(QUEST_LETSBURNTHISMOTHERDOWN,FLAG_GET_COMPLETED);

    if(!completedManhunt && !completedHowDisappointing && !completedLetsBurnThisMotherDown)
        return FALSE_TIMELINE_NONE_COMPLETE;
    else if(completedManhunt && !completedHowDisappointing && !completedLetsBurnThisMotherDown)
        return FALSE_TIMELINE_MAN_COMPLETE;
    else if(!completedManhunt && completedHowDisappointing && !completedLetsBurnThisMotherDown)
        return FALSE_TIMELINE_HOW_COMPLETE;
    else if(!completedManhunt && !completedHowDisappointing && completedLetsBurnThisMotherDown)
        return FALSE_TIMELINE_BURN_COMPLETE;
    else if(!completedManhunt && completedHowDisappointing && completedLetsBurnThisMotherDown)
        return FALSE_TIMELINE_HOW_BURN_COMPLETE;
    else if(completedManhunt && !completedHowDisappointing && completedLetsBurnThisMotherDown)
        return FALSE_TIMELINE_MAN_BURN_COMPLETE;
    else if(completedManhunt && completedHowDisappointing && !completedLetsBurnThisMotherDown)
        return FALSE_TIMELINE_MAN_HOW_COMPLETE;
    //else if(completedManhunt && completedHowDisappointing && completedLetsBurnThisMotherDown)
    else
        return FALSE_TIMELINE_MAN_HOW_BURN_COMPLETE;
}

// ***********************************************************************
// Cutscene: Enter The Master
// ***********************************************************************

u32 GetPartySlotIfMonCanMegaEvolve(void);
bool32 CanFutureEvolutionMegaEvolve(u32);
bool32 CanMonMegaEvolve(u32);

u32 GetPartySlotIfMonCanMegaEvolve(void)
{
    s32 partySlot, species;
    struct Pokemon *pokemon;

    gSpecialVar_Result = FALSE;

    for (partySlot = 0; partySlot < gPlayerPartyCount; partySlot++)
    {
        pokemon = &gPlayerParty[partySlot];

        if (!GetMonData(pokemon, MON_DATA_SANITY_HAS_SPECIES))
            continue;

        if (GetMonData(pokemon, MON_DATA_IS_EGG))
            continue;

        species = (GetMonData(pokemon,MON_DATA_SPECIES));

        if (CanMonMegaEvolve(species))
            return partySlot;

        if (!CanEvolve(species))
            continue;

        if (!CanFutureEvolutionMegaEvolve(species))
            continue;

        gSpecialVar_Result = TRUE;
        return partySlot;
    }
    return PARTY_SIZE;
}

bool32 CanFutureEvolutionMegaEvolve(u32 species)
{
    u32 nextStage, i;
    bool32 hasEvolution = TRUE;
    const struct Evolution *evolutions;

    while (hasEvolution)
    {
        hasEvolution = FALSE;
        evolutions = GetSpeciesEvolutions(species);

        if (evolutions == NULL)
            return FALSE;

        for (i = 0; evolutions[i].method != EVOLUTIONS_END; i++)
        {
            nextStage = SanitizeSpeciesId(evolutions[i].targetSpecies);
            hasEvolution = TRUE;

            if (CanMonMegaEvolve(nextStage))
                return TRUE;

            species = nextStage;
        }

        if (!hasEvolution)
            return FALSE;
    }
    return FALSE;
}

bool32 CanMonMegaEvolve(u32 species)
{
    u32 i;
    const struct FormChange *formChangeTable = GetSpeciesFormChanges(species);

    if (formChangeTable == NULL)
        return FALSE;

    for (i = 0; formChangeTable[i].method != FORM_CHANGE_TERMINATOR; i++)
        if (formChangeTable[i].method != FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM)
            continue;

    return TRUE;
}

// ***********************************************************************
// Cutscene: Wow You're Strong
// ***********************************************************************

void WowYoureStrong_GetBadgesAndSetTowerState(void)
{
	GetNumberOfBadges();

	if (gSpecialVar_Result != 3)
		return;

	VarSet(VAR_SHARPRISESPIRE_CONFERENCE_STATE,DEFEATED_THIRD_LEADER);
}

// ***********************************************************************
// Quest: Drug Helmet Test
// ***********************************************************************

#define VAR_PHASE_NUMBER VAR_TEMP_0
void Quest_DrugHelmetTest_ForgetMoveByPhase(void)
{
    int i, k, l;
    u32 species, move;
    u32 phaseNum = VarGet(VAR_PHASE_NUMBER);

    for (i = 0; i < gPlayerPartyCount; i++){
        species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, 0);
        if(species == SPECIES_NONE)
            return;

        if(GetMonData(&gPlayerParty[i], MON_DATA_MOVE2, 0) != MOVE_NONE){
            switch (phaseNum)
            {
            case 1:
                for(k = 1; k < MAX_MON_MOVES - 1; k++){
                    move = GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + k + 1, 0);
                    SetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + k, &move);
                }
                move = MOVE_NONE;
                SetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + k, &move);
                break;
            case 2:
                move = GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + 2, 0);
                SetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + 1, &move);
                move = MOVE_NONE;
                SetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + 2, &move);
                SetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + 3, &move);
                break;
            case 3:
                move = MOVE_NONE;
                for(l = 1; l < MAX_MON_MOVES; l++){
                    SetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + l, &move);
                }
                break;
            }
        }
    }
}

// ***********************************************************************
// Quest: RPS
// ***********************************************************************

u32 exponent(u32 y, u32 x)
{
    u32 result = 1;
    u32 index;

    for (index = 0; index < x; index++)
        result *= y;

    return result;
}

u32 Quest_RPS_CalculateWager(void)
{
    u32 streak = VarGet(VAR_QUEST_RPS_STREAK_COUNT);

    if (!QuestMenu_GetSetQuestState(QUEST_RPS,FLAG_GET_COMPLETED))
        return QUEST_RPS_BASE_WAGER;

    return (QUEST_RPS_WAGER * (exponent(2,streak)));
}

void Quest_RPS_CheckWager(void)
{
    gSpecialVar_Result = IsEnoughMoney(&gSaveBlock1Ptr->money, Quest_RPS_CalculateWager());
}

void Quest_RPS_PayWager(void)
{
    AddMoney(&gSaveBlock1Ptr->money,Quest_RPS_CalculateWager());
}

void Quest_RPS_StopMoneyLoss(void)
{
    if (gTrainerBattleParameter.params.opponentA != TRAINER_MONTY)
        return;

    if (gBattleOutcome == B_OUTCOME_WON)
        gBattlescriptCurrInstr = BattleScript_FrontierTrainerBattleWon;
    else
        gBattleTypeFlags |= BATTLE_TYPE_FRONTIER;

    //PSF TODO fix so that this random frontier trainer doesn't slide in
}

void DebugQuest_RPS(u8 state)
{
    switch (state)
    {
        case STATE_QUEST_RPS_NOT_STARTED:
            break;
        case STATE_QUEST_RPS_STARTED:
            QuestMenu_ScriptSetActive(QUEST_RPS);
            break;
        case STATE_QUEST_RPS_COMPLETE:
            QuestMenu_ScriptSetComplete(QUEST_RPS);
            AddMoney(&gSaveBlock1Ptr->money,QUEST_RPS_BASE_WAGER);
            break;
        case STATE_QUEST_RPS_STREAK_0:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,0);
            break;
        case STATE_QUEST_RPS_STREAK_1:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,1);
            break;
        case STATE_QUEST_RPS_STREAK_2:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,2);
            break;
        case STATE_QUEST_RPS_STREAK_3:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,3);
            break;
        case STATE_QUEST_RPS_STREAK_4:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,4);
            break;
        case STATE_QUEST_RPS_STREAK_5:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,5);
            break;
        case STATE_QUEST_RPS_STREAK_6:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,6);
            break;
        case STATE_QUEST_RPS_STREAK_7:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,7);
            break;
        case STATE_QUEST_RPS_STREAK_8:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,8);
            break;
        case STATE_QUEST_RPS_STREAK_9:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,9);
            break;
        case STATE_QUEST_RPS_STREAK_10:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,QUEST_RPS_MAX_STREAK_LENGTH);
            Quest_RPS_PayWager();
            break;
        case STATE_QUEST_RPS_REWARD:
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,QUEST_RPS_GIVE_REWARD);
            break;
        case STATE_QUEST_RPS_DICE_GIVEN:
            AddBagItem(ITEM_LOADED_DICE,1);
            VarSet(VAR_QUEST_RPS_STREAK_COUNT,QUEST_RPS_REWARD_GIVEN);
            break;
    }
}

// ***********************************************************************
// Quest:Cute Pokémon
// ***********************************************************************
u32 GetEiscueHint(u32 speciesId);
u32 GetCorsolaHint(u32 speciesId);
u32 GetDuskullHint(u32 speciesId);
u32 GetScraftyHint(u32 speciesId);
void DebugQuest_CutePokemon_GiveMon(void);

#define FLAG_SCRIPT_USE FLAG_TEMP_1

void BufferCorsolaWeightPlusOne(void)
{
    FlagSet(FLAG_SCRIPT_USE);
    StringCopy(gStringVar1,ConvertMonWeightToString(GetSpeciesWeight(SPECIES_CORSOLA)+1));
    FlagClear(FLAG_SCRIPT_USE);
}

void BufferEiscueHeightPlusOne(void)
{
    FlagSet(FLAG_SCRIPT_USE);
    StringCopy(gStringVar1,ConvertMonHeightToString(GetSpeciesHeight(SPECIES_EISCUE)+1));
    FlagClear(FLAG_SCRIPT_USE);
}

#undef FLAG_SCRIPT_USE

u32 GetHintFromMon(void)
{
    u32 remainingQuests = Quest_Generic_CountRemainingSubquests(QUEST_CUTEPOKEMON);
    u32 speciesId = GetMonData(&gPlayerParty[gSpecialVar_0x8004],MON_DATA_SPECIES,NULL);

        switch(remainingQuests)
        {
            case 4: return GetEiscueHint(speciesId);
            case 3: return GetCorsolaHint(speciesId);
            case 2: return GetDuskullHint(speciesId);
            default:
            case 1: return GetScraftyHint(speciesId);
        }
}

u32 GetEiscueHint(u32 speciesId)
{
    if (gSpeciesInfo[speciesId].types[0] != TYPE_ICE && gSpeciesInfo[speciesId].types[1] != TYPE_ICE)
        return VAR_CUTE_POKEMON_EISCUE_HINT_0;
    if (GetSpeciesHeight(speciesId) > GetSpeciesHeight(SPECIES_EISCUE))
        return VAR_CUTE_POKEMON_EISCUE_HINT_1;
    if (speciesId != SPECIES_EISCUE)
        return VAR_CUTE_POKEMON_EISCUE_HINT_2;

    return VAR_CUTE_POKEMON_GREETING_PERLACIA;
}

u32 GetCorsolaHint(u32 speciesId)
{
    if (GetSpeciesColor(speciesId) != BODY_COLOR_PINK)
        return VAR_CUTE_POKEMON_CORSOLA_HINT_0;
    if (GetSpeciesWeight(speciesId) > GetSpeciesWeight(SPECIES_CORSOLA))
        return VAR_CUTE_POKEMON_CORSOLA_HINT_1;
    if (speciesId != SPECIES_CORSOLA)
        return VAR_CUTE_POKEMON_CORSOLA_HINT_2;

    return VAR_CUTE_POKEMON_GREETING_QIU;
}

u32 GetDuskullHint(u32 speciesId)
{
    if (GetMonAbility(&gPlayerParty[gSpecialVar_0x8004])!= ABILITY_LEVITATE)
        return VAR_CUTE_POKEMON_DUSKULL_HINT_0;
    if (!CanEvolve(speciesId))
        return VAR_CUTE_POKEMON_DUSKULL_HINT_1;
    if (speciesId != SPECIES_DUSKULL)
        return VAR_CUTE_POKEMON_DUSKULL_HINT_2;

    return VAR_CUTE_POKEMON_GREETING_CRESALTA;
}

u32 GetScraftyHint(u32 speciesId)
{
    struct Pokemon *mon;
    mon = &gPlayerParty[gSpecialVar_0x8004];
    u32 monCanLearn = CanTeachMove(mon, MOVE_ACID_SPRAY);

    if (gSpeciesInfo[speciesId].eggGroups[0] != EGG_GROUP_DRAGON && gSpeciesInfo[speciesId].eggGroups[1] != EGG_GROUP_DRAGON)
        return VAR_CUTE_POKEMON_SCRAFTY_HINT_0;
    //PSF TODO make sure acid spray is properly distributed when learnsets are done
    if (monCanLearn == CANNOT_LEARN_MOVE || monCanLearn == CANNOT_LEARN_MOVE)
        return VAR_CUTE_POKEMON_SCRAFTY_HINT_1;
    if (speciesId != SPECIES_SCRAFTY)
        return VAR_CUTE_POKEMON_SCRAFTY_HINT_2;

    return VAR_CUTE_POKEMON_GREETING_HALAI;
}

void CheckCutePokemonAndSetHint(void)
{
    u32 currentHint = GetHintFromMon();
    u32 currentVar = VarGet(VAR_CUTE_POKEMON_GUESS);

    VarSet(VAR_TEMP_0,currentHint);

    if (currentVar > currentHint)
        return;

    VarSet(VAR_CUTE_POKEMON_GUESS,currentHint);
}

void Quest_CutePokemon_DailyEvent(u32 daysSince)
{

    u32 location = VAR_CUTE_POKEMON_REMATCH_COMPLETE;

    if (!IsQuestCompletedState(QUEST_CUTEPOKEMON))
        return;

    while (--daysSince != 0xFFFF)
        location = (Random() % (VAR_CUTE_POKEMON_HALAI - VAR_CUTE_POKEMON_CORRECT - 1)) + VAR_CUTE_POKEMON_CORRECT + 1;

    VarSet(VAR_CUTE_POKEMON_GUESS,location);
}

void DebugQuest_CutePokemon_GiveMon(void)
{
#ifdef NDEBUG
    return;
#endif
    u32 numSidequests = sSideQuests[QUEST_CUTEPOKEMON].numSubquests;
    u32 species[numSidequests];
    u16 moves[MAX_MON_MOVES] = {MOVE_CELEBRATE,0,0,0};
    u8 evs[NUM_STATS] = {0,0,0,0,0,0};
    u8 ivs[NUM_STATS] = {0,0,0,0,0,0};

    if (!QuestMenu_GetSetQuestState(QUEST_CUTEPOKEMON,FLAG_GET_ACTIVE))
        return;

    ZeroPlayerPartyMons();
    species[0] = SPECIES_MARILL;

    switch(Quest_Generic_CountRemainingSubquests(QUEST_CUTEPOKEMON))
    {
        case 4:
            species[1] = SPECIES_LAPRAS;
            species[2] = SPECIES_BERGMITE;
            species[3] = SPECIES_EISCUE;
            break;
        case 3:
            species[1] = SPECIES_BEWEAR;
            species[2] = SPECIES_CHERUBI;
            species[3] = SPECIES_CORSOLA;
            break;
        case 2:
            species[1] = SPECIES_LATIOS;
            species[2] = SPECIES_BALTOY;
            species[3] = SPECIES_DUSKULL;
            break;
        case 1:
            species[1] = SPECIES_CHARMANDER;
            species[2] = SPECIES_EKANS;
            species[3] = SPECIES_SCRAFTY;
            break;
    }

    for (u32 monIndex = 0; monIndex < numSidequests; monIndex++)
        ScriptGiveMonParameterized(0,PARTY_SIZE,species[monIndex],50,ITEM_NONE,ITEM_POKE_BALL,NUM_NATURES,NUM_ABILITY_PERSONALITY,MON_GENDERLESS,evs,ivs,moves,SHINY_MODE_RANDOM,FALSE,NUMBER_OF_MON_TYPES,0);
}

void DebugQuest_CutePokemon(u8 state)
{
    switch (state)
    {
        default:
        case STATE_QUEST_CUTEPOKEMON_QUEST_NOT_STARTED:
            FlagSet(FLAG_SYS_STARTER_APPS_GET);
            break;
        case STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_EISCUE:
            DebugQuest_CutePokemon_GiveMon();
            QuestMenu_ScriptSetActive(QUEST_CUTEPOKEMON);
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_EISCUE_HINT_0);
            break;
        case STATE_QUEST_CUTEPOKEMON_GAVE_EISCUE:
            QuestMenu_GetSetSubquestState(QUEST_CUTEPOKEMON,FLAG_SET_COMPLETED,SUB_QUEST_1);
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_EISCUE_HINT_2);

            break;
        case STATE_QUEST_CUTEPOKEMON_WON_BATTLE_1:
            FlagSet(TRAINER_FLAGS_START + TRAINER_MELISSA_QIU);
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_BATTLE_QIU_COMPLETE);
            break;
        case STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_CORSOLA:
            DebugQuest_CutePokemon_GiveMon();
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_CORSOLA_HINT_0);
            break;
        case STATE_QUEST_CUTEPOKEMON_GAVE_CORSOLA:
            AddBagItem(ITEM_QUEST_CUTEPOKEMON_1,1);
            QuestMenu_GetSetSubquestState(QUEST_CUTEPOKEMON,FLAG_SET_COMPLETED,SUB_QUEST_2);
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_CORSOLA_HINT_2);
            break;
        case STATE_QUEST_CUTEPOKEMON_WON_BATTLE_2:
            FlagSet(TRAINER_FLAGS_START + TRAINER_MELISSA_CRESALTA);
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_BATTLE_CRESALTA_COMPLETE);
            break;
        case STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_DUSKULL:
            DebugQuest_CutePokemon_GiveMon();
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_DUSKULL_HINT_0);
            break;
        case STATE_QUEST_CUTEPOKEMON_GAVE_DUSKULL:
            QuestMenu_GetSetSubquestState(QUEST_CUTEPOKEMON,FLAG_SET_COMPLETED,SUB_QUEST_3);
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_GREETING_HALAI);
            break;
        case STATE_QUEST_CUTEPOKEMON_WON_BATTLE_3:
            FlagSet(TRAINER_FLAGS_START + TRAINER_MELISSA_HALAI);
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_BATTLE_HALAI_COMPLETE);
        case STATE_QUEST_CUTEPOKEMON_GUESSING_FOR_SCRAFTY:
            DebugQuest_CutePokemon_GiveMon();
            VarSet(VAR_CUTE_POKEMON_GUESS,VAR_CUTE_POKEMON_SCRAFTY_HINT_0);
            break;
        case STATE_QUEST_CUTEPOKEMON_QUEST_COMPLETE:
            AddBagItem(ITEM_QUEST_CUTEPOKEMON_2,1);
            QuestMenu_GetSetSubquestState(QUEST_CUTEPOKEMON,FLAG_SET_COMPLETED,SUB_QUEST_4);
            QuestMenu_ScriptSetComplete(QUEST_CUTEPOKEMON);
            break;
    }
}

// ***********************************************************************
// Quest: Angel Delivery
// ***********************************************************************
void DebugQuest_AngelDelivery(u8 state)
{
    switch (state)
    {
        default:
        case STATE_QUEST_ANGELDELIVERY_QUEST_NOT_STARTED:
            FlagSet(FLAG_SYS_STARTER_APPS_GET);
            break;
        case STATE_QUEST_ANGELDELIVERY_RECIEVED_BIKE:
            QuestMenu_ScriptSetActive(QUEST_ANGELDELIVERY);
            AddBagItem(ITEM_QUEST_ANGELDELIVERY_1,1);
            AddBagItem(ITEM_QUEST_ANGELDELIVERY_2,1);
            break;
        case STATE_QUEST_ANGELDELIVERY_ABOUT_TO_DELIVER_ITEM:
            break;
        case STATE_QUEST_ANGELDELIVERY_DELIVERED_ITEM:
            QuestMenu_ScriptSetReward(QUEST_ANGELDELIVERY);
            RemoveBagItem(ITEM_QUEST_ANGELDELIVERY_2,1);
            break;
        case STATE_QUEST_ANGELDELIVERY_BEFORE_BATTLE:
            break;
        case STATE_QUEST_ANGELDELIVERY_HAS_LOST_BATTLE:
            SetTrainerDiscovered(TRAINER_ANGELDELIVERY_BIKERC);
            SetTrainerDiscovered(TRAINER_ANGELDELIVERY_BIKERD);
            break;
        case STATE_QUEST_ANGELDELIVERY_COMPLETED_QUEST:
            FlagSet(TRAINER_FLAGS_START + TRAINER_ANGELDELIVERY_BIKERC);
            FlagSet(TRAINER_FLAGS_START + TRAINER_ANGELDELIVERY_BIKERD);
            QuestMenu_ScriptSetComplete(QUEST_ANGELDELIVERY);
            FlagSet(FLAG_SPEED_DEMON);
            break;
    }
}

// ***********************************************************************
// Quest: VS Deoxys
// ***********************************************************************
void DebugQuest_VSDeoxys(u8 state)
{
    switch (state)
    {
        default:
        case STATE_QUEST_VSDEOXYS_NOT_STARTED:
            FlagSet(FLAG_SYS_STARTER_APPS_GET);
            QuestMenu_ScriptSetActive(QUEST_VSDEOXYS);
            break;
        case STATE_QUEST_VSDEOXYS_RECIVED_ROCK_SMASH_TM:
            VarSet(VAR_QUEST_VSDEOXYS,VSDEOGUY_INTERACTED);
            AddBagItem(ITEM_TM192,1);
            break;
        case STATE_QUEST_VSDEOXYS_AFTER_MINIOR_BATTLE:
            VarSet(VAR_QUEST_VSDEOXYS,VSDEOGUY_LEFT_ROUTE);
            break;
        case STATE_QUEST_VSDEOXYS_HAS_ENTERED_RESEARCH:
            VarSet(VAR_QUEST_VSDEOXYS,VSDEOGUY_ENTERED_RESEARCH);
            break;
        case STATE_QUEST_VSDEOXYS_COMPLETE_QUEST:
            VarSet(VAR_QUEST_VSDEOXYS,VSDEOGUY_LEFT_RESEARCH);
            AddBagItem(ITEM_ROCKSMASH_TOOL,1);
            QuestMenu_ScriptSetComplete(QUEST_VSDEOXYS);
            break;
    }
}

// ***********************************************************************
// Quest: Drug Helmet Test
// ***********************************************************************
void DebugQuest_DrugHelmetTest(u8 state)
{
    switch(state)
    {
        default:
        case STATE_QUEST_DRUGHELMETTEST_NOT_STARTED:
            FlagSet(FLAG_SYS_STARTER_APPS_GET);
            break;
        case STATE_QUEST_DRUGHELMETTEST_LOST_BATTLE:
            SetTrainerDiscovered(TRAINER_DRUGHELMETTESTER_1);
            QuestMenu_ScriptSetActive(QUEST_DRUGHELMETTEST);
            break;
        case STATE_QUEST_DRUGHELMETTEST_DEFEATED_ALL_THREE:
            QuestMenu_ScriptSetReward(QUEST_DRUGHELMETTEST);
            break;
        case STATE_QUEST_DRUGHELMETTEST_COMPLETED_QUEST:
            QuestMenu_ScriptSetComplete(QUEST_DRUGHELMETTEST);
            AddBagItem(ITEM_QUEST_DRUGHELMETTEST_REWARD,1);
            break;
    }
}
// ***********************************************************************
// Quest: Restore Tirabudin Gym
// ***********************************************************************
void DebugQuest_RestoreTirabudinGym(u8 state)
{
    switch (state)
    {
    default:
    case STATE_QUEST_RESTORETIRABUDINGYM_NOT_STARTED:
        FlagSet(FLAG_SYS_STARTER_APPS_GET);
        break;
    case STATE_QUEST_RESTORETIRABUDINGYM_COMPLETED:
        QuestMenu_ScriptSetComplete(QUEST_RESTORETIRABUDINGYM);
        break;
    }
}

// ***********************************************************************
// Cutscene: Flying Blind | Fog Battles
// ***********************************************************************

bool32 GenerateAndStartWildFogBattle(u32 headerId, u32 area)
{
    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, area);

    if (area == WILD_AREA_LAND)
    {
        if (!TryGenerateWildMon(gWildMonHeaders[headerId].encounterTypes[timeOfDay].landMonsInfo, area, 0))
            return FALSE;
    }
    else
    {
        if (!TryGenerateWildMon(gWildMonHeaders[headerId].encounterTypes[timeOfDay].waterMonsInfo, area, 0))
            return FALSE;
    }

    BattleSetup_StartWildBattle();
    return TRUE;
}

void SetFogVariableAfterLoss(void)
{
    if (!IsFogBattle())
        return;

    VarSet(VAR_FAINTED_FOG_STATE, WARPED_AFTER_ENCOUNTER);
}

void IncrementFogVariable(void)
{
    if (!IsFogBattle())
        return;

    VarSet(VAR_FAINTED_FOG_STATE, ENCOUNTERED_FOG_MON);
}

bool32 ShouldWildBattleBeFog(void)
{
    if (GetCurrentMap() != MAP_ROUTE11 && GetCurrentMap() != MAP_ROUTE5)
        return FALSE;

    if (VarGet(VAR_ARANTRAZ_STATE) >= BATTLED_TALA)
        return FALSE;

    return TRUE;
}

u8* PrintUnknownLevel(u32 lvl, u32 battler, u8* text)
{
    if (!IsFogBattle())
        return ConvertIntToDecimalStringN(text + 2, lvl, STR_CONV_MODE_LEFT_ALIGN, 3);
    if (GetBattlerSide(battler) == B_SIDE_PLAYER)
        return ConvertIntToDecimalStringN(text + 2, lvl, STR_CONV_MODE_LEFT_ALIGN, 3);
    else
        return (StringCopy(text + 2,COMPOUND_STRING("??")));
}

const u8* ReturnBattleScriptCantUseItem(void)
{
    if (IsFogBattle())
        return BattleScript_ActionSelectionItemsCantBeUsedFog;
    else
        return BattleScript_ActionSelectionItemsCantBeUsed;
}

// ***********************************************************************
// Cutscene: Mutual Aid Unhoused
// ***********************************************************************
bool32 ShouldAskUnhoused(void)
{
    u32 odds = (ShouldWildBattleBeFog() ? 2 : 10);

    if (FlagGet(FLAG_UNHOUSED_REQUEST))
    {
        gSpecialVar_Result = FALSE;
        return gSpecialVar_Result;
    }

    if (!IsEnoughMoney(&gSaveBlock1Ptr->money,1000))
    {
        gSpecialVar_Result = FALSE;
        return gSpecialVar_Result;
    }

    if ((Random() % odds) != 1)
    {
        gSpecialVar_Result = FALSE;
        return gSpecialVar_Result;
    }

    gSpecialVar_Result = TRUE;
    return gSpecialVar_Result;
}

// ***********************************************************************
// Cutscene: You Realize Theyre Evil, Right?
// ***********************************************************************

void ShowGarbodor(void)
{
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct Pokemon *mon = &daycare->viewMon;
    u32 species = SPECIES_GARBODOR;
    u32 level = 40;
    u32 fixedIv = USE_RANDOM_IVS;
    u32 hasFixedPersonality = FALSE;
    u32 fixedPersonality = 0;
    u32 otIdType = OT_ID_PRESET;
    u32 fixedOtId = 0;
    bool32 isShiny = TRUE;
    u32 item = ITEM_NORMAL_GEM;

    CreateMon(mon, species, level, fixedIv, hasFixedPersonality, fixedPersonality, otIdType, fixedOtId);
    SetMonData(mon,MON_DATA_IS_SHINY,&isShiny);
    SetMonData(mon,MON_DATA_HELD_ITEM,&item);

    ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, mon, 0, 0, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

// ***********************************************************************
// Cutscene: Okay Let's Fix It
// ***********************************************************************

void AwardPartyMonChampionRibbon(void)
{
    bool8 giveRibbon = TRUE;

    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        if (IsMonInvalid(gPlayerParty[slot]))
            continue;

        SetMonData(&gPlayerParty[slot],MON_DATA_CHAMPION_RIBBON,&giveRibbon);
    }
}

static bool8 DoesMonHaveChampionRibbon(struct Pokemon pokemon)
{
    return (GetMonData(&pokemon,MON_DATA_CHAMPION_RIBBON));
}

static bool8 DoesPartyMonHaveChampionRibbon(void)
{
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        if (IsMonInvalid(gPlayerParty[slot]))
            continue;

        if (DoesMonHaveChampionRibbon(gPlayerParty[slot]))
            return TRUE;
    }

    return FALSE;
}

static bool8 DoesBoxMonHaveChampionRibbon(void)
{
    struct Pokemon tempMon;

    for (u32 boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (u32 boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            BoxMonAtToMon(boxId, boxPosition, &tempMon);

            if (IsMonInvalid(tempMon))
                continue;

            if (DoesMonHaveChampionRibbon(tempMon))
                return TRUE;
        }
    }
    return FALSE;
}

static bool8 DoesAnyMonHaveChampionRibbon(void)
{
     return (DoesPartyMonHaveChampionRibbon() || DoesBoxMonHaveChampionRibbon());
}

void Script_CheckIfAnyMonHasChampionRibbon(void)
{
    gSpecialVar_Result = DoesAnyMonHaveChampionRibbon();
}

void Script_CheckIfChosenMonHasChampionRibbon(void)
{
    gSpecialVar_Result = DoesMonHaveChampionRibbon(gPlayerParty[gSpecialVar_0x8004]);
}

static u8 DoesPlayerHaveOneOrTwoUsableMon(void)
{
    if (gPlayerPartyCount == 1)
        return PLAYER_HAS_ONE_MON;

    u32 aliveCount = 0;

    for (u32 i = 0; i < gPlayerPartyCount; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG, NULL) != SPECIES_EGG
         && GetMonData(&gPlayerParty[i], MON_DATA_HP, NULL) != 0
         && GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG, NULL) != SPECIES_NONE)
            aliveCount++;
    }

    return (aliveCount > 1) ? PLAYER_HAS_TWO_USABLE_MONS : PLAYER_HAS_ONE_USABLE_MON;
}

void Script_DoesPlayerHaveOneOrTwoUsableMon(void)
{
    gSpecialVar_Result = DoesPlayerHaveOneOrTwoUsableMon();
}

// ***********************************************************************
// Quest: Stress Cup
// ***********************************************************************

void StressCup_GivePlayerParty(void)
{
    ZeroPlayerPartyMons();
    CreateNPCTrainerPartyFromTrainer(gPlayerParty, &gTrainers[GetCurrentDifficultyLevel()][TRAINER_STRESSCUPORGNANIZER_PLAYER], TRUE, BATTLE_TYPE_TRAINER);
}

void DebugQuest_StressCup(u8 state)
{
    switch (state)
    {
        default:
        case STATE_QUEST_STRESSCUP_NOT_STARTED:
            break;
        case STATE_QUEST_STRESSCUP_STARTED_QUEST:
            QuestMenu_ScriptSetActive(QUEST_STRESSCUP);
            break;
        case STATE_QUEST_STRESSCUP_COMPLETE_QUEST:
            QuestMenu_ScriptSetComplete(QUEST_STRESSCUP);
            break;
    }
}
// ***********************************************************************
// Quest: Rabies Outbreak
// ***********************************************************************

void DebugQuest_RabiesOutbreak(u8 state)
{
    switch (state)
    {
        case STATE_QUEST_RABIES_NOT_STARTED:
            break;
        case STATE_QUEST_RABIES_STARTED:
            Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_RABIES);
            QuestMenu_ScriptSetActive(QUEST_RABIESOUTBREAK);
            break;
        case STATE_QUEST_RABIES_DEFEATED_1:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,1);
            break;
        case STATE_QUEST_RABIES_DEFEATED_2:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,2);
            break;
        case STATE_QUEST_RABIES_DEFEATED_3:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,3);
            break;
        case STATE_QUEST_RABIES_DEFEATED_4:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,4);
            break;
        case STATE_QUEST_RABIES_DEFEATED_5:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,5);
            break;
        case STATE_QUEST_RABIES_DEFEATED_6:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,6);
            break;
        case STATE_QUEST_RABIES_DEFEATED_7:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,7);
            break;
        case STATE_QUEST_RABIES_DEFEATED_8:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,8);
            break;
        case STATE_QUEST_RABIES_DEFEATED_9:
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,9);
            break;
        case STATE_QUEST_RABIES_REWARD:
            QuestMenu_ScriptSetReward(QUEST_RABIESOUTBREAK);
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,QUEST_RABIES_OUTBREAK_COUNT);
            break;
        case STATE_QUEST_RABIES_COMPLETE:
            AddBagItem(ITEM_QUEST_RABIES_OUTBREAK_REWARD,1);
            QuestMenu_ScriptSetComplete(QUEST_RABIESOUTBREAK);
            VarSet(VAR_DEFEATED_GLAMEOW_COUNT,QUEST_RABIES_OUTBREAK_COUNT);
            break;
    }
}
void CountDefeatedRabiesMon(void)
{
    /*
       Iterate every spot in the enemy's party
       If one is Glameow AND you're in GlavezHill AND its not a Trainer battle, then increment the defeated Glameow count by one
       If the Glameow count is > 9, AND the Rabies Outbreak quest is active  change the Rabies Outbreak quest to Reward state
   */
    if (GetCurrentMap() != QUEST_RABIES_OUTBREAK_MAP)
        return;

    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER))
        return;

    u32 defeatedGlameowCount = VarGet(VAR_DEFEATED_GLAMEOW_COUNT);

    for (u32 enemyPartyIndex = 0; enemyPartyIndex < PARTY_SIZE; enemyPartyIndex++)
    {
        if (GetMonData(&gEnemyParty[enemyPartyIndex],MON_DATA_SPECIES) != QUEST_RABIES_OUTBREAK_SPECIES)
            continue;

        defeatedGlameowCount++;
    }

    VarSet(VAR_DEFEATED_GLAMEOW_COUNT,defeatedGlameowCount);

    if (!QuestMenu_GetSetQuestState(QUEST_RABIESOUTBREAK,FLAG_GET_ACTIVE))
        return;

    if (defeatedGlameowCount < QUEST_RABIES_OUTBREAK_COUNT)
        return;

    QuestMenu_GetSetQuestState(QUEST_RABIESOUTBREAK,FLAG_SET_REWARD);
    QuestMenu_GetSetQuestState(QUEST_RABIESOUTBREAK,FLAG_REMOVE_ACTIVE);
}

void TryRabiesPokerus(struct BoxPokemon *boxMon, u32 species)
{
    bool32 rabiesPokerus = GetBoxMonData(boxMon, MON_DATA_POKERUS);

    if (rabiesPokerus == TRUE)
        return;

    if (GetCurrentMap() != QUEST_RABIES_OUTBREAK_MAP)
        return;

    if (species != QUEST_RABIES_OUTBREAK_SPECIES)
        return;

    rabiesPokerus = Random() % 2;
    SetBoxMonData(boxMon, MON_DATA_POKERUS, &rabiesPokerus);
}

// ***********************************************************************
// Quest: Hodou Tunnels
// ***********************************************************************

void Quest_Hodoutunnels_SetVariable_TalkedToElder(void)
{
    SetVariableBit(VAR_QUEST_HODOUTUNNELS,QUEST_HODOUTUNNELS_BIT_ELDER,TRUE);
}

void Quest_Hodoutunnels_SetVariable_HasDiscoveredScroll(void)
{
    SetVariableBit(VAR_QUEST_HODOUTUNNELS,QUEST_HODOUTUNNELS_BIT_SCROLL,TRUE);
}

void Quest_Hodoutunnels_SetVariable_HasDiscoveredTunnels(void)
{
    SetVariableBit(VAR_QUEST_HODOUTUNNELS,QUEST_HODOUTUNNELS_BIT_TUNNELS,TRUE);
}

bool8 Quest_Hodoutunnels_GetVariable_TalkedToElder(void)
{
    return GetVariableBit(VAR_QUEST_HODOUTUNNELS,QUEST_HODOUTUNNELS_BIT_ELDER);
}

bool8 Quest_Hodoutunnels_GetVariable_HasDiscoveredScroll(void)
{
    return GetVariableBit(VAR_QUEST_HODOUTUNNELS,QUEST_HODOUTUNNELS_BIT_SCROLL);
}

bool8 Quest_Hodoutunnels_GetVariable_HasDiscoveredTunnels(void)
{
    return GetVariableBit(VAR_QUEST_HODOUTUNNELS,QUEST_HODOUTUNNELS_BIT_TUNNELS);
}

void Quest_Hodoutunnels_GetVariable_TalkedToElder_Script(void)
{
    gSpecialVar_Result = Quest_Hodoutunnels_GetVariable_TalkedToElder();
}

void Quest_Hodoutunnels_GetVariable_HasDiscoveredScroll_Script(void)
{
    gSpecialVar_Result = Quest_Hodoutunnels_GetVariable_HasDiscoveredScroll();
}

void Quest_Hodoutunnels_GetVariable_HasDiscoveredTunnels_Script(void)
{
    gSpecialVar_Result = Quest_Hodoutunnels_GetVariable_HasDiscoveredTunnels();
}

void DebugQuest_Hodoutunnels(u8 state)
{
    switch (state)
    {
        case STATE_QUEST_HODOUTUNNELS_NOT_STARTED:
            break;
        case STATE_QUEST_HODOUTUNNELS_STARTED:
            Buzzr_MarkTweetAsRead(TWEET_QUEST_NPC_TUNNELS);
            QuestMenu_ScriptSetActive(QUEST_HODOUTUNNELS);
            break;
        case STATE_QUEST_HODOUTUNNELS_TALKED_TO_ELDER:
            Quest_Hodoutunnels_SetVariable_TalkedToElder();
            break;
        case STATE_QUEST_HODOUTUNNELS_DISCOVERED_SCROLL:
            QuestMenu_ScriptSetComplete(QUEST_CULTURALPURITY);
            Quest_Hodoutunnels_SetVariable_HasDiscoveredScroll();
            break;
        case STATE_QUEST_HODOUTUNNELS_HAS_TREASURE:
            AddBagItem(ITEM_QUEST_HODOUTUNNELS_TREASURE,1);
            break;
        case STATE_QUEST_HODOUTUNNELS_REWARD:
            QuestMenu_ScriptSetReward(QUEST_HODOUTUNNELS);
            RemoveBagItem(ITEM_QUEST_HODOUTUNNELS_TREASURE,1);
            break;
        case STATE_QUEST_HODOUTUNNELS_COMPLETE:
            QuestMenu_ScriptSetComplete(QUEST_HODOUTUNNELS);
            AddBagItem(ITEM_QUEST_HODOUTUNNELS_REWARD,1);
            break;
    }
}
//
// ***********************************************************************
// Quest: Psyop
// ***********************************************************************

static bool8 Quest_Psyop_CheckPartyForTarget(void)
{
    for (u32 partyIndex = 0; partyIndex < PARTY_SIZE; partyIndex++)
    {
        u32 species = GetMonData(&gPlayerParty[partyIndex],MON_DATA_SPECIES,NULL);

        if ((species == SPECIES_QUEST_PSYOP_TARGET) || (species == SPECIES_QUEST_PSYOP_REWARD))
            return TRUE;
    }
    return FALSE;
}

static enum QuestPsyopErrors Quest_Psyop_CheckTargetAttributes(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    u32 species = GetMonData(mon,MON_DATA_SPECIES,NULL);

    if ((species != SPECIES_QUEST_PSYOP_TARGET) && (species != SPECIES_QUEST_PSYOP_REWARD))
        return QUEST_PSYOP_NOT_SPECIES;

    if (species == SPECIES_QUEST_PSYOP_REWARD)
        return QUEST_PSYOP_IS_REWARD_SPECIES;

    u32 totalEv = 0;
    for (u32 stat = 0; stat < NUM_STATS; stat++)
        totalEv += GetMonData(mon,(MON_DATA_HP_EV + stat));

        bool32 hasMaxedEvs = (totalEv >= ADJUSTED_MAX_TOTAL_EVS);
        bool32 isCorrectBall = (GetMonData(mon,MON_DATA_POKEBALL,NULL) == (ItemIdToBallId(ITEM_QUEST_PSYOP_TARGET_BALL)));

    if (!hasMaxedEvs && !isCorrectBall)
        return QUEST_PSYOP_NO_EFFORT_AND_BALL;

    if (!hasMaxedEvs)
        return QUEST_PSYOP_NO_EFFORT;

    if (!isCorrectBall)
        return QUEST_PSYOP_NO_BALL;

    return QUEST_PSYOP_READY_TO_TRANSFORM;
}

void Script_Quest_Psyop_CheckTargetAttributes(void)
{
    gSpecialVar_Result = Quest_Psyop_CheckTargetAttributes();
}

void Script_Quest_Psyop_CheckPartyForTarget(void)
{
    gSpecialVar_Result = Quest_Psyop_CheckPartyForTarget();
}

void Quest_Psyop_TransformTarget(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    u32 species = SPECIES_QUEST_PSYOP_REWARD;

    SetMonData(mon,MON_DATA_SPECIES,&species);
    CalculateMonStats(mon);
}

void DebugQuest_Psyop_GiveMon(u32 state)
{
    u32 species[STATE_QUEST_PSYOP_COMPLETE+1] = {SPECIES_PANCHAM, SPECIES_QUEST_PSYOP_TARGET, SPECIES_QUEST_PSYOP_REWARD};
    u16 moves[MAX_MON_MOVES] = {MOVE_CELEBRATE,0,0,0};
    u8 evs[NUM_STATS] = {85,85,85,85,85,85};
    u8 ivs[NUM_STATS] = {0,0,0,0,0,0};
    u32 ball = ITEM_HEAL_BALL;

    ScriptGiveMonParameterized(0,PARTY_SIZE,species[state],50,ITEM_NONE,ball,NUM_NATURES,NUM_ABILITY_PERSONALITY,MON_GENDERLESS,evs,ivs,moves,SHINY_MODE_RANDOM,FALSE,NUMBER_OF_MON_TYPES,0);
}

void DebugQuest_Psyop(u8 state)
{
    switch (state)
    {
        default:
        case STATE_QUEST_PSYOP_NOT_STARTED:
            break;
        case STATE_QUEST_PSYOP_STARTED:
            DebugQuest_Psyop_GiveMon(state);
            QuestMenu_ScriptSetActive(QUEST_PSYOP);
            break;
        case STATE_QUEST_PSYOP_COMPLETE:
            DebugQuest_Psyop_GiveMon(state);
            QuestMenu_ScriptSetComplete(QUEST_PSYOP);
            break;
    }
}
