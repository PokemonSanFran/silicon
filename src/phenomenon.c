#include "global.h"
#include "phenomenon.h"
#include "math.h"
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
#include "m4a.h"
#include "tv.h"
#include "link.h"
#include "script.h"
#include "sound.h"
#include "wild_encounter.h"
#include "battle_debug.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "constants/abilities.h"
#include "constants/field_effects.h"
#include "constants/game_stat.h"
#include "constants/phenomenon.h"
#include "constants/item.h"
#include "constants/songs.h"
#include "constants/items.h"
#include "constants/layouts.h"
#include "constants/weather.h"
#include "constants/map_types.h"
#include "constants/metatile_behaviors.h"

static u8 IsThereAPhenomenonOnCords(s16 coordX, s16 coordXY);
static u16 getFieldEffectForPhenomenon(void);
static inline unsigned int GetPhenomenonVolume(void);
static void Task_UpdatePhenomenonVolume(u8 taskId);

struct Phenomenon{
    u8 fldEffSpriteId;
    u16 volume;
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

EWRAM_DATA struct Phenomenon sPhenomenonData = {0};

static bool8 MetatileBehavior_IsBridgeTile(u16 tileBehaviour){
    switch(tileBehaviour){
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

static u8 GeneratePhenomenonType(u16 tileBehaviour)
{
    if (tileBehaviour != MB_CAVE && !MetatileBehavior_IsBridgeTile(tileBehaviour))
        return PHENOMENON_TYPE_ENCOUNTER;

    if ((Random() % 100) < PHENOMENON_ITEM_CHANCE)
        return PHENOMENON_TYPE_ITEM;

    return PHENOMENON_TYPE_ENCOUNTER;
}

static u16 GenerateItemForPhenomenon(u16 tileBehaviour)
{
    static const u16 sDustCloudItemList[] =
    {
        ITEM_FIRE_STONE,
        ITEM_WATER_STONE,
        ITEM_THUNDER_STONE,
        ITEM_LEAF_STONE,
        ITEM_SUN_STONE,
        ITEM_SHINY_STONE,
        ITEM_DUSK_STONE,
        ITEM_DAWN_STONE,
        ITEM_ICE_STONE,
        ITEM_HARD_STONE,
        ITEM_LINKING_CORD,
        ITEM_EVERSTONE
    };

    if(!MetatileBehavior_IsBridgeTile(tileBehaviour))
        return sDustCloudItemList[Random() % ARRAY_COUNT(sDustCloudItemList)];

    u32 rand = Random() % 100;

    if(rand < 15)
        return ITEM_HEALTH_WING;
    else if(rand < 30)
        return ITEM_MUSCLE_WING;
    else if(rand < 45)
        return ITEM_RESIST_WING;
    else if(rand < 60)
        return ITEM_GENIUS_WING;
    else if(rand < 75)
        return ITEM_CLEVER_WING;
    else if(rand < 90)
        return ITEM_SWIFT_WING;
    else
        return ITEM_PRETTY_WING;

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

static void GenerateWildPokemonForPhenomenon(void){

    u8 environment        = sPhenomenonData.environment;
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

    sPhenomenonData.argument  = species;
    sPhenomenonData.argument2 = level;
}

static bool8 GeneratePhenomenonTile(void)
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

    if (FlagGet(DN_FLAG_SEARCHING))
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
            if ((Random() % 100) < encounterRate && !MapGridGetCollisionAt(tileX, tileY) && !IsThereAPhenomenonOnCords(tileX, tileY))
            {
                sPhenomenonData.coordX         = tileX;
                sPhenomenonData.coordY         = tileY;
                sPhenomenonData.tileBehaviour  = tileBehaviour;
                sPhenomenonData.phenomenonType = GeneratePhenomenonType(tileBehaviour);
                sPhenomenonData.environment    = environment;

                switch(sPhenomenonData.phenomenonType){
                    case PHENOMENON_TYPE_ENCOUNTER:
                        GenerateWildPokemonForPhenomenon();
                        if(sPhenomenonData.argument2 == MON_LEVEL_NONEXISTENT){
                            //DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonTile Failed to find level for species: %d", numPhenomenon, sPhenomenonData[numPhenomenon].argument);
                            return FALSE;
                        }
                    break;
                    case PHENOMENON_TYPE_ITEM:
                        sPhenomenonData.argument  = GenerateItemForPhenomenon(tileBehaviour);
                        sPhenomenonData.argument2 = 1;
                    break;
                }

                //DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonTile numPhenomenon: %d Cord(%d, %d)", numPhenomenon, sPhenomenonData[numPhenomenon].coordX, sPhenomenonData[numPhenomenon].coordY);

                return TRUE;
                //DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonTile X: %d Y: %d numPhenomenon: %d, tileBehaviour: %d, randomXOffset: %d, randomYOffset: %d", tileX, tileY, numPhenomenon, tileBehaviour, randomXOffset, randomYOffset);
            }
        }
    }
    return FALSE;
}

bool8 GeneratePhenomenonFieldEffectAt(u8 fldEffId){
    u16 fldEffSpriteId = MAX_SPRITES;
    int phenomenon_X  = sPhenomenonData.coordX;
    int phenomenon_Y  = sPhenomenonData.coordY;

    gFieldEffectArguments[0] = phenomenon_X + MAP_OFFSET;
    gFieldEffectArguments[1] = phenomenon_Y + MAP_OFFSET;
    gFieldEffectArguments[2] = 0xFF;
    gFieldEffectArguments[3] = 2;
    fldEffSpriteId = FieldEffectStart(fldEffId);

    //DebugPrintfLevel(MGBA_LOG_WARN, "GeneratePhenomenonFieldEffectAt fldEffSpriteId %d fldEffId: %d", fldEffSpriteId, fldEffId);
    if (fldEffSpriteId == MAX_SPRITES)
        return FALSE;

    sPhenomenonData.fldEffSpriteId = fldEffSpriteId;
    sPhenomenonData.fldEffId       = fldEffId;


    return TRUE;
}

void InitializePhenomenonData(void){
    sPhenomenonData.coordX         = 0;
    sPhenomenonData.coordY         = 0;
    sPhenomenonData.phenomenonType = PHENOMENON_TYPES;
    sPhenomenonData.fldEffSpriteId = MAX_SPRITES;
    sPhenomenonData.active         = FALSE;
    sPhenomenonData.argument       = 0;
    sPhenomenonData.argument2      = 0;
    sPhenomenonData.fldEffId       = 0;
    sPhenomenonData.volume         = 0;
}

void TryCreatingPhenomenon(void){
    InitializePhenomenonData();

    if(GeneratePhenomenonTile()){
        if(GeneratePhenomenonFieldEffectAt(getFieldEffectForPhenomenon())){
            u8 taskId;
            u16 volume = (u16)GetPhenomenonVolume();
            sPhenomenonData.active = TRUE;
            sPhenomenonData.volume = volume;
            taskId = CreateTask(Task_UpdatePhenomenonVolume, 64);
            gTasks[taskId].data[0] = volume;
        }
    }
}

u16 getFieldEffectForPhenomenon(void){
    u8 currMapType = GetCurrentMapType();
    u8 fldEffId = FLDEFF_CAVE_DUST;
    u16 metatileBehaviour = sPhenomenonData.tileBehaviour;
    u16 environment = sPhenomenonData.environment;

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

bool8 IsPlayerOnPhenomenon(void)
{
    int playerX = gSaveBlock1Ptr->pos.x;
    int playerY = gSaveBlock1Ptr->pos.y;

    return IsThereAPhenomenonOnCords(playerX, playerY);
}

bool8 IsThereAPhenomenonOnCords(s16 coordX, s16 coordY)
{
    if(coordX == sPhenomenonData.coordX && coordY == sPhenomenonData.coordY && sPhenomenonData.active)
        return TRUE;

    return FALSE;
}

bool8 IsPlayerOnCoordinate(s16 x, s16 y)
{
    int playerX = gSaveBlock1Ptr->pos.x;
    int playerY = gSaveBlock1Ptr->pos.y;

    if(playerX == x && playerY == y)
        return TRUE;

    return FALSE;
}

void ClearPhenomenonData(void){
    u16 fldEffSpriteId = sPhenomenonData.fldEffSpriteId;
    u16 fldEffId       = sPhenomenonData.fldEffId;

    if(fldEffSpriteId != MAX_SPRITES && fldEffId != 0){
        //DebugPrintfLevel(MGBA_LOG_WARN, "ClearPhenomenonData fldEffSpriteId: %d fldEffId: %d", fldEffSpriteId, fldEffId);
        FieldEffectStop(&gSprites[fldEffSpriteId], fldEffId);
        InitializePhenomenonData();
    }
}

void TryToCleanPhenomenonDataFromScript(void){
    if(!FlagGet(FLAG_CHECKING_PHENOMENON))
        ClearPhenomenonData();

    FlagClear(FLAG_CHECKING_PHENOMENON);
}

void CheckForNPCSteppingIntoPhenomenon(s16 npcX, s16 npcY){
    if (IsThereAPhenomenonOnCords(npcX, npcY))
        ClearPhenomenonData();
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
    s16 posX, posY;

    for(u32 i = 0; i < OBJECT_EVENTS_COUNT; i++){
        if(gObjectEvents[i].movementActionId != MOVEMENT_ACTION_NONE){
            posX = gObjectEvents[i].currentCoords.x - MAP_OFFSET;
            posY = gObjectEvents[i].currentCoords.y - MAP_OFFSET;
            CheckForNPCSteppingIntoPhenomenon(posX, posY);
        }
    }
}

static bool8 ShouldCreateAPhenomenon(void){
    if (sPhenomenonData.active)
        return FALSE;
    return (Random() % 100) < (PHENOMENON_CHANCE_PER_STEP + 1);
}

u16 GetCurrentPhenomenonArgument(void){
    return VarGet(VAR_PHENOMENON_ARGUMENT);
}

static void CreatePhenomenonWildPokemon(void){
    u16 species = sPhenomenonData.argument;
    u16 level   = sPhenomenonData.argument2;
    u16 item    = ITEM_NONE;

    CreateScriptedWildMon(species, level, item);
    //sIsScriptedWildDouble = FALSE;
}

static void SavePhenomenonArgumentIntoVar(void){
    VarSet(VAR_PHENOMENON_ARGUMENT, sPhenomenonData.argument);
}

bool8 CheckForPhenomenon(void){
    bool8 playerPhenomenon = IsPlayerOnPhenomenon();

    if(B_FLAG_ENABLE_PHENOMENON != 0 && !FlagGet(B_FLAG_ENABLE_PHENOMENON))
        return FALSE;

    if(playerPhenomenon){
        VarSet(VAR_PHENOMENON_TYPE, sPhenomenonData.phenomenonType);
        switch(sPhenomenonData.phenomenonType){
            case PHENOMENON_TYPE_ENCOUNTER:
                CreatePhenomenonWildPokemon();
            break;
            default:
                SavePhenomenonArgumentIntoVar();
            break;
        }
        FlagSet(FLAG_CHECKING_PHENOMENON);
        ClearPhenomenonData();
        return TRUE;
    }
    else{
        if(ShouldCreateAPhenomenon()) {
            TryCreatingPhenomenon();
        }
    }

    return FALSE;
}

#define sWaitFldEff  data[0]
#define sSoundEffectDelay data[6]

bool8 IsFieldEffectForPhenomenon(u32 fieldEffectId)
{
    return (fieldEffectId == FLDEFF_SHAKING_GRASS || fieldEffectId == FLDEFF_SHAKING_LONG_GRASS || fieldEffectId == FLDEFF_SAND_HOLE || fieldEffectId == FLDEFF_CAVE_DUST || fieldEffectId == FLDEFF_WATER_SURFACING);
}

static inline unsigned int GetPhenomenonVolume(void)
{
    s16 distance;
    s16 phenomenonX = sPhenomenonData.coordX + MAP_OFFSET;
    s16 phenomenonY = sPhenomenonData.coordY + MAP_OFFSET;
    distance = GetCurrentDistanceFromPlayer(phenomenonX, phenomenonY);
    
    if (distance < 4)
        return 256;
    else if (distance < 8)
        return 180;
    else if (distance < 12)
        return 120;
    else
        return 80;
}

static inline unsigned int ModulatePhenomenonVolume(unsigned int curVolume, unsigned int targetVolume)
{
    if (curVolume < targetVolume)
        return curVolume + 4;
    else if (curVolume > targetVolume)
        return curVolume - 4;
    return curVolume;
}

static void Task_UpdatePhenomenonVolume(u8 taskId)
{
    struct Task * task;
    unsigned int targetVolume = 0;
    task = &gTasks[taskId];

    if (!sPhenomenonData.active)
    {
        DestroyTask(taskId);
        return;
    }

    targetVolume = ModulatePhenomenonVolume(task->data[0], GetPhenomenonVolume());
    task->data[0] = targetVolume;
    sPhenomenonData.volume = targetVolume;
    m4aMPlayVolumeControl(&gMPlayInfo_SE4, TRACKS_ALL, (u16)targetVolume);
}

void SpriteCB_PlayFieldEffectSound(struct Sprite *sprite)
{
    u32 sound;
    u32 delay;
    u32 fieldEffectId = sprite->sWaitFldEff;

    if (!IsFieldEffectForPhenomenon(fieldEffectId))
        return;

    sound = MUS_DUMMY, delay = 0;

    switch (fieldEffectId)
    {
        default:
        case FLDEFF_SHAKING_GRASS:
        case FLDEFF_SHAKING_LONG_GRASS:
            sound = SE_SHAKING_GRASS;
            delay = PHENOMENON_SOUND_DELAY_GRASS;
            break;
        case FLDEFF_SAND_HOLE:
        case FLDEFF_CAVE_DUST:
            sound = SE_CAVE_DUST;
            delay = PHENOMENON_SOUND_DELAY_DUST;
            break;
        case FLDEFF_WATER_SURFACING:
            sound = SE_RIPPLING_WATER;
            delay = PHENOMENON_SOUND_DELAY_WATER;
            break;
        case FLDEFF_SHADOW: // bridge, unused currently
            sound = SE_FLAPPING_WINGS;
            delay = PHENOMENON_SOUND_DELAY_BRIDGE;
            break;
    }

    if (sprite->sSoundEffectDelay == 0)
        sprite->sSoundEffectDelay = delay;

    if (sprite->sSoundEffectDelay == delay)
    {
        PlaySE4WithVolume(sound, (u16)sPhenomenonData.volume);
        sprite->sSoundEffectDelay = 1;
    }
    else
    {
        sprite->sSoundEffectDelay++;
    }
}

void RestartPhenomenon(void)
{
    if(sPhenomenonData.active == FALSE || FieldEffectActiveListContains(sPhenomenonData.fldEffId))
        return;

    GeneratePhenomenonFieldEffectAt(sPhenomenonData.fldEffId);
}
