#include "global.h"
#include "phenomenon.h"
#include "pokemon.h"
#include "metatile_behavior.h"
#include "dexnav.h"
#include "fieldmap.h"
#include "field_camera.h"
#include "field_effect.h"
#include "metatile_behavior.h"
#include "item.h"
#include "random.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "event_data.h"
#include "safari_zone.h"
#include "overworld.h"
#include "pokeblock.h"
#include "battle_setup.h"
#include "event_object_movement.h"
#include "script_pokemon_util.h"
#include "roamer.h"
#include "tv.h"
#include "link.h"
#include "script.h"
#include "wild_encounter.h"
#include "battle_debug.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "constants/abilities.h"
#include "constants/field_effects.h"
#include "constants/game_stat.h"
#include "constants/phenomenon.h"
#include "constants/item.h"
#include "constants/items.h"
#include "constants/layouts.h"
#include "constants/weather.h"
#include "constants/map_types.h"
#include "constants/metatile_behaviors.h"

//Config
u8 IsThereAPhenomenonOnCords(s16 coordX, s16 coordXY);
u16 getFieldEffectForPhenomenon(u16 slot);

struct Phenomenon{
    u8 fldEffSpriteId;
    u8 stepsTimer;
    int coordX;
    int coordY;
    u8 phenomenonType;
    u16 argument; //Either a Pokemon or an Item
    u16 argument2; //Either Pokemon Level or Number of Items
    u16 tileBehaviour;
    u16 fldEffId;
    u8 environment;
    bool8 active;
};

EWRAM_DATA struct Phenomenon sPhenomenonData[NUM_MAX_PHENOMENONS] = {0};

static bool8 MetatileBehavior_IsBridgeTile(u16 tileBehaviour){
    switch(tileBehaviour){ //To be configured
        case MB_BRIDGE_OVER_OCEAN:
        case MB_BRIDGE_OVER_POND_LOW:
        case MB_BRIDGE_OVER_POND_MED:
        case MB_BRIDGE_OVER_POND_HIGH:
        case MB_FORTREE_BRIDGE:
        case MB_BRIDGE_OVER_POND_MED_EDGE_1:
        case MB_BRIDGE_OVER_POND_MED_EDGE_2:
        case MB_BRIDGE_OVER_POND_HIGH_EDGE_1:
        case MB_BRIDGE_OVER_POND_HIGH_EDGE_2:
        case MB_UNUSED_BRIDGE:
        case MB_BIKE_BRIDGE_OVER_BARRIER:
            return TRUE;
        break;
    }

    return FALSE;
}

static u8 GeneratePhenomenonType(u16 tileBehaviour){
    u8 rand = Random() % 100;

    if(rand < PHENOMENON_ITEM_CHANCE && (tileBehaviour == MB_CAVE || MetatileBehavior_IsBridgeTile(tileBehaviour)))
        return PHENOMENON_TYPE_ITEM;

    return PHENOMENON_TYPE_ENCOUNTER;
}

static u16 GenerateItemForPhenomenon(u16 tileBehaviour){
    u16 itemToReturn;

    static const u16 sDustCloudItemList[] = {
        ITEM_FIRE_STONE,      ITEM_WATER_STONE,        ITEM_THUNDER_STONE,   ITEM_LEAF_STONE,      ITEM_SUN_STONE,
        ITEM_SHINY_STONE,     ITEM_DUSK_STONE,         ITEM_DAWN_STONE,      ITEM_ICE_STONE,       ITEM_HARD_STONE,
        ITEM_EVERSTONE
    };

    if(MetatileBehavior_IsBridgeTile(tileBehaviour)){
        u8 rand = Random() % 100;

        if(rand < 15)
            itemToReturn = ITEM_HEALTH_WING;
        else if(rand < 30)
            itemToReturn = ITEM_MUSCLE_WING;
        else if(rand < 45)
            itemToReturn = ITEM_RESIST_WING;
        else if(rand < 60)
            itemToReturn = ITEM_GENIUS_WING;
        else if(rand < 75)
            itemToReturn = ITEM_CLEVER_WING;
        else if(rand < 90)
            itemToReturn = ITEM_SWIFT_WING;
        else
            itemToReturn = ITEM_PRETTY_WING;
    }
    else{ //MB_CAVE
        itemToReturn = sDustCloudItemList[Random() % 11];
    }

    return itemToReturn;
}


u8 GetPhenomenonEncounterLevelFromMapData(u16 species, u8 environment)
{
    u16 headerId = GetCurrentMapWildMonHeaderId();
    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_PHENOMENON);
    const struct WildPokemonInfo *landMonsInfo       = gWildMonHeaders[headerId].encounterTypes[timeOfDay].landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo      = gWildMonHeaders[headerId].encounterTypes[timeOfDay].waterMonsInfo;
    const struct WildPokemonInfo *phenomenonMonsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].phenomenonMonsInfo;
    u8 min = 100;
    u8 max = 0;
    u8 i;

    switch (environment)
    {
    case PHENOMENON_ENCOUNTER_ENVIROMENT_LAND:    // grass
        if (landMonsInfo == NULL)
            return MON_LEVEL_NONEXISTENT; //Hidden pokemon should only appear on walkable tiles or surf tiles

        for (i = 0; i < LAND_WILD_COUNT; i++)
        {
            if (landMonsInfo->wildPokemon[i].species == species)
            {
                min = (min < landMonsInfo->wildPokemon[i].minLevel) ? min : landMonsInfo->wildPokemon[i].minLevel;
                max = (max > landMonsInfo->wildPokemon[i].maxLevel) ? max : landMonsInfo->wildPokemon[i].maxLevel;
            }
        }
        break;
    case PHENOMENON_ENCOUNTER_ENVIROMENT_WATER:    //water
        if (waterMonsInfo == NULL)
            return MON_LEVEL_NONEXISTENT; //Hidden pokemon should only appear on walkable tiles or surf tiles

        for (i = 0; i < WATER_WILD_COUNT; i++)
        {
            if (waterMonsInfo->wildPokemon[i].species == species)
            {
                min = (min < waterMonsInfo->wildPokemon[i].minLevel) ? min : waterMonsInfo->wildPokemon[i].minLevel;
                max = (max > waterMonsInfo->wildPokemon[i].maxLevel) ? max : waterMonsInfo->wildPokemon[i].maxLevel;
            }
        }
        break;
    case PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE: //Bridges
    case NUM_PHENOMENON_ENVIROMENTS:             //Phenomenon Table
        if (phenomenonMonsInfo == NULL)
            return MON_LEVEL_NONEXISTENT;

        for (i = 0; i < 4; i++)
        {
            if (phenomenonMonsInfo->wildPokemon[i].species == species)
            {
                min = (min < phenomenonMonsInfo->wildPokemon[i].minLevel) ? min : phenomenonMonsInfo->wildPokemon[i].minLevel;
                max = (max > phenomenonMonsInfo->wildPokemon[i].maxLevel) ? max : phenomenonMonsInfo->wildPokemon[i].maxLevel;
            }
        }
        break;
    default:
        return MON_LEVEL_NONEXISTENT;
    }

    if (max == 0)
        return MON_LEVEL_NONEXISTENT;

    return RandomUniform(RNG_DEXNAV_ENCOUNTER_LEVEL, min, max);
}

u16 GetLandWildMon(void)
{
    u16 headerId = GetCurrentMapWildMonHeaderId();
    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_LAND);
    const struct WildPokemonInfo *landMonsInfo       = gWildMonHeaders[headerId].encounterTypes[timeOfDay].landMonsInfo;

    if (headerId == 0xFFFF || landMonsInfo == NULL){
        //DebugPrintfLevel(MGBA_LOG_WARN, "GetLandWildMon Failed");
        return SPECIES_NONE;
    }

    return landMonsInfo->wildPokemon[ChooseWildMonIndex_Land()].species;
}

u16 GetPhenomenonWildMon(void)
{
    u16 headerId = GetCurrentMapWildMonHeaderId();
    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_PHENOMENON);
    const struct WildPokemonInfo *phenomenonMonsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].phenomenonMonsInfo;

    if (headerId == 0xFFFF || phenomenonMonsInfo == NULL){
        //DebugPrintfLevel(MGBA_LOG_WARN, "GetPhenomenonWildMon Failed");
        return SPECIES_NONE;
    }

    return phenomenonMonsInfo->wildPokemon[ChooseWildMonIndex_Land()].species;
}

static void GenerateWildPokemonForPhenomenon(u8 numPhenomenon){

    u8 environment        = sPhenomenonData[numPhenomenon].environment;
    u16 species           = SPECIES_NONE;
    u16 level             = 5;
    u16 wildEnviroment    = NUM_PHENOMENON_ENVIROMENTS;

    #if PHENOMENON_FORCE_ONLY_ENCOUNTER_TYPE == TRUE
        species = GetPhenomenonWildMon();

        if(ENABLE_COMMON_ENCOUNTERS && (Random() % 100 < PHENOMENON_COMMON_ENCOUNTER_CHANCE)){
            switch(environment){
                case PHENOMENON_ENCOUNTER_ENVIROMENT_LAND:
                    species = GetLandWildMon();
                break;
                case PHENOMENON_ENCOUNTER_ENVIROMENT_WATER:
                    species = GetLocalWaterMon();
                break;
            }
        }
    #else
        u16 headerId = GetCurrentMapWildMonHeaderId();
        const struct WildPokemonInfo *phenomenonMonsInfo = gWildMonHeaders[headerId].phenomenonMonsInfo;
        u8 phenomenonEnvironment = phenomenonMonsInfo->encounterRate;
        bool8 encounterPhenomenonMons = (phenomenonMonsInfo != NULL && environment == phenomenonEnvironment) && (!ENABLE_COMMON_ENCOUNTERS || (Random() % 100 < PHENOMENON_COMMON_ENCOUNTER_CHANCE));

        switch(environment){
            case PHENOMENON_ENCOUNTER_ENVIROMENT_LAND:
                if(encounterPhenomenonMons)
                    species = GetPhenomenonWildMon();
                else{
                    species = GetLandWildMon();
                    wildEnviroment = environment;
                }
            break;
            case PHENOMENON_ENCOUNTER_ENVIROMENT_WATER:
                if(encounterPhenomenonMons)
                    species = GetPhenomenonWildMon();
                else{
                    species = GetLocalWaterMon();
                    wildEnviroment = environment;
                }
            break;
            case PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE:
                //Can only encounter from the phenomenon table
                species = GetPhenomenonWildMon();
                wildEnviroment = PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE;
            break;
        }
    #endif

    level = GetPhenomenonEncounterLevelFromMapData(species, wildEnviroment);

    sPhenomenonData[numPhenomenon].argument  = species;
    sPhenomenonData[numPhenomenon].argument2 = level;
}

static bool8 GeneratePhenomenonTile(u8 numPhenomenon)
{
    s16 i, randomXOffset, randomYOffset;
    u16 tileBehaviour, environment, encounterRate = 0;
    int tileX, tileY;
    int playerX = gSaveBlock1Ptr->pos.x;
    int playerY = gSaveBlock1Ptr->pos.y;

    u8 currMapType = GetCurrentMapType();
    u16 headerId = GetCurrentMapWildMonHeaderId();
    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_PHENOMENON);

    if(headerId == 0xFFFF)
        return FALSE;

    // Determine environment and encounter rate
    const struct WildPokemonInfo *landMonsInfo       = gWildMonHeaders[headerId].encounterTypes[timeOfDay].landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo      = gWildMonHeaders[headerId].encounterTypes[timeOfDay].waterMonsInfo;
    const struct WildPokemonInfo *phenomenonMonsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].phenomenonMonsInfo;

    #if PHENOMENON_FORCE_ONLY_ENCOUNTER_TYPE == TRUE
        if(phenomenonMonsInfo == NULL)
            return FALSE;

        environment = phenomenonMonsInfo->encounterRate;

        switch(environment){
            case PHENOMENON_ENCOUNTER_ENVIROMENT_LAND:
                //Land Encounters
                if(landMonsInfo != NULL)
                    encounterRate = landMonsInfo->encounterRate * PHENOMENON_LAND_RATE_MULTIPLIER;
                else
                    return FALSE;
            break;
            case PHENOMENON_ENCOUNTER_ENVIROMENT_WATER:
                //Water Encounters
                if(waterMonsInfo != NULL)
                    encounterRate = waterMonsInfo->encounterRate * PHENOMENON_WATER_RATE_MULTIPLIER;
                else
                    return FALSE;
            break;
            case PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE:
                //Bridge Encounters
                if(phenomenonMonsInfo != NULL)
                    encounterRate = PHENOMENON_BRIDGE_ENCOUNTER_CHANCE;
                else
                    return FALSE;
            break;
        }
    #else
        bool8 canBeBridgeEnviroment = phenomenonMonsInfo != NULL && (phenomenonMonsInfo->encounterRate == PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE) && currMapType != MAP_TYPE_UNDERGROUND;
        u8 playerTileBehaviour      = MapGridGetMetatileBehaviorAt(playerX + MAP_OFFSET, playerY + MAP_OFFSET);

        if(!PHENOMENON_ENABLE_IN_ALL_MAPS && phenomenonMonsInfo == NULL)
            return FALSE;

        if(canBeBridgeEnviroment && (Random() % 3 == 0 || MetatileBehavior_IsBridgeTile(playerTileBehaviour))){
            //Bridge Encounters
            environment   = PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE;
            encounterRate = PHENOMENON_BRIDGE_ENCOUNTER_CHANCE;
        }
        else if(waterMonsInfo != NULL && (Random() % 2 == 0 || MetatileBehavior_IsWaterWildEncounter(playerTileBehaviour))){
            //Water Encounters
            environment   = PHENOMENON_ENCOUNTER_ENVIROMENT_WATER;
            encounterRate = waterMonsInfo->encounterRate * PHENOMENON_WATER_RATE_MULTIPLIER;
        }
        else if(landMonsInfo != NULL){
            //Land Encounters
            environment   = PHENOMENON_ENCOUNTER_ENVIROMENT_LAND;
            encounterRate = landMonsInfo->encounterRate * PHENOMENON_LAND_RATE_MULTIPLIER;
        }
        else
            return FALSE;
    #endif

    for (i = 0; i < PHENOMENON_MAX_ATTEMPTS; i++)
    {
        bool8 foundCorrectTile;
        // Generate random offsets within the radius
        randomXOffset = (Random() % (2 * PHENOMENON_RADIUS + 1)) - PHENOMENON_RADIUS;
        randomYOffset = (Random() % (2 * PHENOMENON_RADIUS + 1)) - PHENOMENON_RADIUS;

        tileX = playerX + randomXOffset;
        tileY = playerY + randomYOffset;

        tileBehaviour = MapGridGetMetatileBehaviorAt(tileX + MAP_OFFSET, tileY + MAP_OFFSET);

        //This needs to be modified when the proper metatile is added to the game to use the ones you want
        switch(environment){
            case PHENOMENON_ENCOUNTER_ENVIROMENT_LAND:
                foundCorrectTile = MetatileBehavior_IsLandWildEncounter(tileBehaviour) && (currMapType != MAP_TYPE_UNDERGROUND || !IsElevationMismatchAt(gObjectEvents[gPlayerAvatar.spriteId].currentElevation, tileX, tileY));
            break;
            case PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE:
                foundCorrectTile = MetatileBehavior_IsBridgeTile(tileBehaviour) && currMapType != MAP_TYPE_UNDERGROUND;
            break;
            case PHENOMENON_ENCOUNTER_ENVIROMENT_WATER:
                foundCorrectTile = MetatileBehavior_IsWaterWildEncounter(tileBehaviour);
            break;
            default:
                foundCorrectTile = FALSE;
            break;
        }

        if (foundCorrectTile)
        {
            if ((Random() % 100) < encounterRate && !MapGridGetCollisionAt(tileX, tileY) && IsThereAPhenomenonOnCords(tileX, tileY) == NUM_MAX_PHENOMENONS)
            {
                sPhenomenonData[numPhenomenon].coordX         = tileX;
                sPhenomenonData[numPhenomenon].coordY         = tileY;
                sPhenomenonData[numPhenomenon].tileBehaviour  = tileBehaviour;
                sPhenomenonData[numPhenomenon].phenomenonType = GeneratePhenomenonType(tileBehaviour);
                sPhenomenonData[numPhenomenon].environment    = environment;

                switch(sPhenomenonData[numPhenomenon].phenomenonType){
                    case PHENOMENON_TYPE_ENCOUNTER:
                        GenerateWildPokemonForPhenomenon(numPhenomenon);
                        if(sPhenomenonData[numPhenomenon].argument2 == MON_LEVEL_NONEXISTENT){
                            DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonTile Failed to find level for species: %d", numPhenomenon, sPhenomenonData[numPhenomenon].argument);
                            return FALSE;
                        }
                    break;
                    case PHENOMENON_TYPE_ITEM:
                        sPhenomenonData[numPhenomenon].argument  = GenerateItemForPhenomenon(tileBehaviour);
                        sPhenomenonData[numPhenomenon].argument2 = 1;
                    break;
                }

                //DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonTile numPhenomenon: %d Cord(%d, %d)", numPhenomenon, sPhenomenonData[numPhenomenon].coordX, sPhenomenonData[numPhenomenon].coordY);

                return TRUE;
                DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonTile X: %d Y: %d numPhenomenon: %d, tileBehaviour: %d, randomXOffset: %d, randomYOffset: %d", tileX, tileY, numPhenomenon, tileBehaviour, randomXOffset, randomYOffset);
            }
        }
    }
    return FALSE;
}

bool8 GeneratePhenomenonFieldEffectAt(u8 numPhenomenon, u8 fldEffId){
    u16 fldEffSpriteId = MAX_SPRITES;
    int Phenomenon_X  = sPhenomenonData[numPhenomenon].coordX;
    int Phenomenon_Y  = sPhenomenonData[numPhenomenon].coordY;

    gFieldEffectArguments[0] = Phenomenon_X + MAP_OFFSET;
    gFieldEffectArguments[1] = Phenomenon_Y + MAP_OFFSET;
    gFieldEffectArguments[2] = 0xFF;
    gFieldEffectArguments[3] = 2;
    fldEffSpriteId = FieldEffectStart(fldEffId);

    DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonFieldEffectAt fldEffSpriteId %d fldEffId: %d", fldEffSpriteId, fldEffId);
    if (fldEffSpriteId == MAX_SPRITES)
        return FALSE;

    sPhenomenonData[numPhenomenon].fldEffSpriteId = fldEffSpriteId;
    sPhenomenonData[numPhenomenon].fldEffId       = fldEffId;


    return TRUE;
}

void InitializePhenomenonData(u8 numPhenomenon){
    if(numPhenomenon < NUM_MAX_PHENOMENONS){
        sPhenomenonData[numPhenomenon].coordX         = 0;
        sPhenomenonData[numPhenomenon].coordY         = 0;
        sPhenomenonData[numPhenomenon].phenomenonType = PHENOMENON_TYPES;
        sPhenomenonData[numPhenomenon].stepsTimer     = PHENOMENON_MAX_TIMER;
        sPhenomenonData[numPhenomenon].fldEffSpriteId = MAX_SPRITES;
        sPhenomenonData[numPhenomenon].active         = FALSE;
        sPhenomenonData[numPhenomenon].argument       = 0;
        sPhenomenonData[numPhenomenon].argument2      = 0;
        sPhenomenonData[numPhenomenon].fldEffId       = 0;
    }
}

static u8 FindInactivePhenomenonSlot(void){
    u8 i;

    for(i = 0; i < NUM_MAX_PHENOMENONS; i++){
        if(!sPhenomenonData[i].active)
            return i;
    }

    return NUM_MAX_PHENOMENONS;
}

void TryCreatingPhenomenon(void){
    s16 Phenomenon_Timer;
    u8 emptyPhenomenonSlot = FindInactivePhenomenonSlot();
    InitializePhenomenonData(emptyPhenomenonSlot);

    if(emptyPhenomenonSlot < NUM_MAX_PHENOMENONS){
        Phenomenon_Timer  = (Random() % (PHENOMENON_MAX_TIMER - PHENOMENON_MIN_TIMER)) + PHENOMENON_MIN_TIMER;

        if(GeneratePhenomenonTile(emptyPhenomenonSlot)){
            sPhenomenonData[emptyPhenomenonSlot].stepsTimer = Phenomenon_Timer;

            if(GeneratePhenomenonFieldEffectAt(emptyPhenomenonSlot, getFieldEffectForPhenomenon(emptyPhenomenonSlot))){
                sPhenomenonData[emptyPhenomenonSlot].active = TRUE;
                emptyPhenomenonSlot++;
            }
        }
    }
}

u16 getFieldEffectForPhenomenon(u16 slot){
    u8 currMapType = GetCurrentMapType();
    u8 fldEffId = FLDEFF_CAVE_DUST;
    u16 metatileBehaviour = sPhenomenonData[slot].tileBehaviour;
    u16 environment = sPhenomenonData[slot].environment;

    switch (environment)
    {
    case PHENOMENON_ENCOUNTER_ENVIROMENT_LAND:
        if (currMapType == MAP_TYPE_UNDERGROUND)
        {
            fldEffId = FLDEFF_CAVE_DUST;
        }
        else if (IsMapTypeIndoors(currMapType))
        {
            if (MetatileBehavior_IsTallGrass(metatileBehaviour)) //Grass in cave
                fldEffId = FLDEFF_SHAKING_GRASS;
            else if (MetatileBehavior_IsLongGrass(metatileBehaviour)) //Really tall grass
                fldEffId = FLDEFF_SHAKING_LONG_GRASS;
            else if (MetatileBehavior_IsSandOrDeepSand(metatileBehaviour))
                fldEffId = FLDEFF_SAND_HOLE;
            else
                fldEffId = FLDEFF_CAVE_DUST;
        }
        else //outdoor, underwater
        {
            if (MetatileBehavior_IsTallGrass(metatileBehaviour)) //Regular grass
                fldEffId = FLDEFF_SHAKING_GRASS;
            else if (MetatileBehavior_IsLongGrass(metatileBehaviour)) //Really tall grass
                fldEffId = FLDEFF_SHAKING_LONG_GRASS;
            else if (MetatileBehavior_IsSandOrDeepSand(metatileBehaviour)) //Desert Sand
                fldEffId = FLDEFF_SAND_HOLE;
            else if (MetatileBehavior_IsMountain(metatileBehaviour)) //Rough Terrain
                fldEffId = FLDEFF_CAVE_DUST;
            else
                fldEffId = FLDEFF_BERRY_TREE_GROWTH_SPARKLE; //default
        }
        break;
    case PHENOMENON_ENCOUNTER_ENVIROMENT_WATER:
        fldEffId = FLDEFF_WATER_SURFACING;
        break;
    case PHENOMENON_ENCOUNTER_ENVIROMENT_BRIDGE:
        fldEffId = FLDEFF_CAVE_DUST; //Flying Pokémon's shadow
        break;
    }

    return fldEffId;
}

u8 IsPlayerOnPhenomenon(void)
{
    int playerX = gSaveBlock1Ptr->pos.x;
    int playerY = gSaveBlock1Ptr->pos.y;

    return IsThereAPhenomenonOnCords(playerX, playerY);
}

u8 IsThereAPhenomenonOnCords(s16 coordX, s16 coordXY)
{
    u8 i;

    for(i = 0; i < NUM_MAX_PHENOMENONS; i++){
        if(coordX == sPhenomenonData[i].coordX && coordXY == sPhenomenonData[i].coordY && sPhenomenonData[i].active)
            return i;
    }

    return NUM_MAX_PHENOMENONS;
}

bool8 IsPlayerOnCoordinate(s16 x, s16 y)
{
    int playerX = gSaveBlock1Ptr->pos.x;
    int playerY = gSaveBlock1Ptr->pos.y;

    if(playerX == x && playerY == y)
        return TRUE;

    return FALSE;
}

static void ClearPhenomenonData(u8 id){
    u16 fldEffSpriteId = sPhenomenonData[id].fldEffSpriteId;
    u16 fldEffId       = sPhenomenonData[id].fldEffId;

    if(fldEffSpriteId != MAX_SPRITES && fldEffId != 0){
        //DebugPrintfLevel(MGBA_LOG_WARN, "ClearPhenomenonData fldEffSpriteId: %d fldEffId: %d", fldEffSpriteId, fldEffId);
        FieldEffectStop(&gSprites[fldEffSpriteId], fldEffId);
        InitializePhenomenonData(id);
    }
}

void ClearAllPhenomenonData(void){
    u8 i;

    for(i = 0; i < NUM_MAX_PHENOMENONS; i++){
        if(sPhenomenonData[i].active){
            ClearPhenomenonData(i);
        }
    }
}

void TryToCleanPhenomenonDataFromScript(void){
    if(!FlagGet(FLAG_CHECKING_PHENOMENON))
        ClearAllPhenomenonData();

    FlagClear(FLAG_CHECKING_PHENOMENON);
}

void CheckForNPCSteppingIntoPhenomenon(s16 npcX, s16 npcY){
    u8 phenomenonID = IsThereAPhenomenonOnCords(npcX, npcY);

    if(phenomenonID != NUM_MAX_PHENOMENONS)
        ClearPhenomenonData(phenomenonID);
}

void CheckForNPCPhenomenonFromObjectEvent(struct ObjectEvent *objectEvent){
    s16 posX, posY;

    if(objectEvent->movementActionId != MOVEMENT_ACTION_NONE){
        posX = objectEvent->currentCoords.x - MAP_OFFSET;
        posY = objectEvent->currentCoords.y - MAP_OFFSET;
        CheckForNPCSteppingIntoPhenomenon(posX, posY);
    }
}

void CheckForNPCPhenomenon(void){
    u8 i, j;
    s16 posX, posY;

    for(i = 0; i < OBJECT_EVENTS_COUNT; i++){
        if(gObjectEvents[i].movementActionId != MOVEMENT_ACTION_NONE){
            posX = gObjectEvents[i].currentCoords.x - MAP_OFFSET;
            posY = gObjectEvents[i].currentCoords.y - MAP_OFFSET;
            CheckForNPCSteppingIntoPhenomenon(posX, posY);
        }
    }
}

static void ClearFinishedPhenomenonData(void){
    u8 i;

    for(i = 0; i < NUM_MAX_PHENOMENONS; i++){
        if(sPhenomenonData[i].active){
            sPhenomenonData[i].stepsTimer--;
            if(sPhenomenonData[i].stepsTimer == 0)
                ClearPhenomenonData(i);
        }
    }
}

static bool8 ShouldCreateAPhenomenon(void){
    return (Random() % 100) < (PHENOMENON_CHANCE_PER_STEP + 1);
}

u16 GetCurrentPhenomenonArgument(void){
    return VarGet(VAR_PHENOMENON_ARGUMENT);
}

static void CreatePhenomenonWildPokemon(u8 playerPhenomenon){
    u16 species = sPhenomenonData[playerPhenomenon].argument;
    u16 level   = sPhenomenonData[playerPhenomenon].argument2;
    u16 item    = ITEM_NONE;

    CreateScriptedWildMon(species, level, item);
    //sIsScriptedWildDouble = FALSE;
}

static void SavePhenomenonArgumentIntoVar(u8 playerPhenomenon){
    VarSet(VAR_PHENOMENON_ARGUMENT, sPhenomenonData[playerPhenomenon].argument);
}

bool8 CheckForPhenomenon(void){
    u8 playerPhenomenon         = IsPlayerOnPhenomenon();
    u8 isThereAnEmptyPhenomenon = FindInactivePhenomenonSlot() != NUM_MAX_PHENOMENONS;

    if(B_FLAG_ENABLE_PHENOMENON != 0 && !FlagGet(B_FLAG_ENABLE_PHENOMENON))
        return FALSE;

    if(playerPhenomenon != NUM_MAX_PHENOMENONS){
        VarSet(VAR_PHENOMENON_TYPE, sPhenomenonData[playerPhenomenon].phenomenonType);
        switch(sPhenomenonData[playerPhenomenon].phenomenonType){
            case PHENOMENON_TYPE_ENCOUNTER:
                CreatePhenomenonWildPokemon(playerPhenomenon);
            break;
            default:
                SavePhenomenonArgumentIntoVar(playerPhenomenon);
            break;
        }
        FlagSet(FLAG_CHECKING_PHENOMENON);
        ClearAllPhenomenonData();
        return TRUE;
    }
    else{
        if(isThereAnEmptyPhenomenon && ShouldCreateAPhenomenon())
            TryCreatingPhenomenon();

        ClearFinishedPhenomenonData();
    }

    return FALSE;
}
