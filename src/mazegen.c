#include "global.h"
#include "event_object_movement.h"
#include "event_data.h"
#include "fieldmap.h"
#include "field_control_avatar.h"
#include "item.h"
#include "malloc.h"
#include "mazegen.h"
#include "quest_logic.h"
#include "overworld.h"
#include "random.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/map_groups.h"

// ***********************************************************************
// mazegen.c
// -----------------------------------------------------------------------
// This file contains the functions required to randomly generate a maze
// and to stitch it together as a map in-game.
// ***********************************************************************

#define EMPTY   0
#define NORTH   (1 << 0)
#define EAST    (1 << 1)
#define SOUTH   (1 << 2)
#define WEST    (1 << 3)

struct MapChunk {
    u16 width;
    u16 height;
    u16 *map;
};

EWRAM_DATA struct Maze *gMazeStruct = NULL;
EWRAM_DATA struct Cell **gMazeEndpoints = NULL;

#include "data/maze_templates.h"

static u16 SelectTemplateNumber(u16 templateNum, u16 connection, const struct TemplateSet *templateSet);
static u16 SelectTemplateVariety(const struct MapTemplate *template);

// Initializes the cells in a Maze struct as unvisited and with
// correct coordinates.
static void InitMaze(struct Maze *maze)
{
    u32 x, y;

    for (x = 0; x < maze->width; ++x)
    {
        for (y = 0; y < maze->height; ++y)
        {
            maze->cells[x][y].x = x;
            maze->cells[x][y].y = y;
            maze->cells[x][y].templateNum = 0;
            maze->cells[x][y].distance = 0;
            maze->cells[x][y].visited = FALSE;
            maze->cells[x][y].endpoint = FALSE;
            maze->cells[x][y].connections = EMPTY;
        }
    }
}

// Returns the direction(s) of the unvisited neighbors of a given cell
// in a Maze struct as a bitfield.
static u16 GetUnvisitedNeighbors(u16 x, u16 y, struct Maze *maze)
{
    u16 output = 0;

    if (y > 0 && !maze->cells[x][y-1].visited)
        output |= NORTH;
    if (x + 1 < maze->width && !maze->cells[x+1][y].visited)
        output |= EAST;
    if (y + 1 < maze->height && !maze->cells[x][y+1].visited)
        output |= SOUTH;
    if (x > 0 && !maze->cells[x-1][y].visited)
        output |= WEST;

    return output;
}

// Returns a random 'on' bit in a given bitfield.
static u16 SelectRandomBit(u16 bitfield)
{
    s32 i, count = 0;
    u16 options[16];

    // Find 'on' bits and store in array to pick from.
    for (i = 0; i < 16; ++i)
    {
        if (bitfield & (1 << i))
        {
            options[count] = i + 1;
            count++;
        }
    }

    return 1 << (options[Random() % count] - 1);
}

// Generates a maze of given width and height into an empty Maze struct.
static void GenerateMaze(struct Maze *maze, u16 width, u16 height, const struct TemplateSet *templateSet)
{
    u16 candidates, max, top, visited, templateNum;
    struct Cell *origin, *stack[width * height];

    // init stack
    max = width * height;
    top = 0;
    visited = 1;

    // init maze
    maze->width = width;
    maze->height = height;
    InitMaze(maze);
    origin = &maze->cells[0][0];
    templateNum = origin->templateNum = 0;

    // Maze generation ends when every cell has been visited.
    while (visited < (maze->width * maze->height))
    {
        stack[top] = origin;
        origin->visited = TRUE;
        origin->distance = top;
        candidates = GetUnvisitedNeighbors(origin->x, origin->y, maze);
        templateNum = origin->templateNum;

        // If there are no unvisited neighbors, pop the stack and recurse
        // to the previous cell. If the stack is empty, break the loop.
        if (!candidates || top >= max)
        {
            if ((origin->connections & (origin->connections - 1)) == 0) // single bit = endpoint
                origin->endpoint = TRUE;
            else
                origin->endpoint = FALSE;

            top--; // pop the stack
            if (top <= 0)
                break;
            origin = stack[top];
        }
        // Otherwise, select a random neighbor to become the new origin
        // point and document this connection.
        else
        {
            bool8 ignoreNeighbor = FALSE; //(Random() % 100 < 25);
            switch (SelectRandomBit(candidates))
            {
                case NORTH:
                    if (!ignoreNeighbor)
                    {
                        origin->connections |= NORTH;
                        origin = &maze->cells[origin->x][origin->y-1];
                        origin->connections |= SOUTH;
                        origin->templateNum = SelectTemplateNumber(templateNum, SOUTH, templateSet);
                    }
                    else
                    {
                        maze->cells[origin->x][origin->y-1].visited = TRUE;
                    }
                    break;
                case EAST:
                    if (!ignoreNeighbor)
                    {
                        origin->connections |= EAST;
                        origin = &maze->cells[origin->x+1][origin->y];
                        origin->connections |= WEST;
                        origin->templateNum = SelectTemplateNumber(templateNum, WEST, templateSet);
                    }
                    else
                    {
                        maze->cells[origin->x][origin->y-1].visited = TRUE;
                    }
                    break;
                case SOUTH:
                    if (!ignoreNeighbor)
                    {
                        origin->connections |= SOUTH;
                        origin = &maze->cells[origin->x][origin->y+1];
                        origin->connections |= NORTH;
                        origin->templateNum = SelectTemplateNumber(templateNum, NORTH, templateSet);

                    }
                    else
                    {
                        maze->cells[origin->x][origin->y-1].visited = TRUE;
                    }
                    break;
                case WEST:
                    if (!ignoreNeighbor)
                    {
                        origin->connections |= WEST;
                        origin = &maze->cells[origin->x-1][origin->y];
                        origin->connections |= EAST;
                        origin->templateNum = SelectTemplateNumber(templateNum, EAST, templateSet);
                    }
                    else
                    {
                        maze->cells[origin->x][origin->y-1].visited = TRUE;
                    }
                    break;
            }
            visited++;
            top++;
        }
    }

    // the final cell is an endpoint if the loop didn't break
    if (top > 0)
    {
        origin->distance = top;
        origin->endpoint = TRUE;
    }
}

// Copies a rectangular area of a map layout and stores it in a MapChunk struct.
static void CopyMapChunk(u16 x, u16 y, u16 width, u16 height, const struct MapLayout *src, struct MapChunk *dest)
{
    s32 i, j;

    dest->width = width;
    dest->height = height;
    dest->map = Alloc(sizeof(u16) * width * height);

    for (i = 0; i < height; ++i)
    {
        for (j = 0; j < width; ++j)
        {
            dest->map[j + width * i] = src->map[src->width * (y + i) + x + j];
        }
    }
}

// Pastes a rectangular area of a map layout over gBackupMapLayout at
// the given (x, y) and frees the map stored in the MapChunk.
static void PasteMapChunk(u16 x, u16 y, struct MapChunk *chunk)
{
    u16 *src, *dest;
    int i;
    src = chunk->map;
    dest = gBackupMapLayout.map;
    dest += gBackupMapLayout.width * (7 + y) + x + MAP_OFFSET;
    for (i = 0; i < chunk->height; ++i)
    {
        CpuCopy16(src, dest, chunk->width * 2);
        dest += gBackupMapLayout.width;
        src += chunk->width;
    }
    Free(chunk->map);
    chunk->map = NULL;
}

// The (x, y) coordinates of map chunks on a map template.
static const u16 sMapChunkCoordinateTable[][2] = {
    [EMPTY] = {0, 0},
    [NORTH] = {0, 1},
    [EAST] = {0, 2},
    [SOUTH] = {0, 3},
    [WEST] = {1, 0},
    [NORTH | EAST] = {1, 1},
    [NORTH | SOUTH] = {1, 2},
    [NORTH | WEST] = {1, 3},
    [EAST | SOUTH] = {2, 0},
    [EAST | WEST] = {2, 1},
    [SOUTH | WEST] = {2, 2},
    [NORTH | EAST | SOUTH] = {2, 3},
    [NORTH | EAST | WEST] = {3, 0},
    [NORTH | SOUTH | WEST] = {3, 1},
    [EAST | SOUTH | WEST] = {3, 2},
    [NORTH | EAST | SOUTH | WEST] = {3, 3},
};

// The (x, y) coordinates of a variety of a map template within its layout.
static const u16 sVarietyOffsetTable[][2] = {
    [0] = {0, 0},
    [1] = {1, 0},
    [2] = {0, 1},
    [3] = {1, 1},
};

// Returns which template to use for a given cell based on its previous
// connection.
static u16 SelectTemplateNumber(u16 templateNum, u16 connection, const struct TemplateSet *templateSet) {
    s32 i;
    u16 rand = Random() % templateSet->templates[templateNum].totalWeight;
    u16 index;

    switch (connection) // get the proper index for adjacency table
    {
        case NORTH:
            index = 0;
            break;
        case EAST:
            index = 1;
            break;
        case SOUTH:
            index = 2;
            break;
        default:
        //case WEST:
            index = 3;
            break;
    }

    for (i = 0; i < templateSet->templateCount; ++i) // pick a random template from the table
    {
        if (rand < templateSet->templates[templateNum].adjacencyWeights[index][i])
            return i;
        else
            rand -= templateSet->templates[templateNum].adjacencyWeights[index][i];
    }

    return templateNum;
}

// Returns what variety of a map template should be used to create
// a map chunk.
static u16 SelectTemplateVariety(const struct MapTemplate *template)
{
    s32 i;
    s16 rand = Random() % template->totalWeight;

    for (i = 0; i < MAX_VARIETIES; ++i)
    {
        if (rand < template->varietyWeights[i])
            return i;
        else
            rand -= template->varietyWeights[i];
    }

    return 0;
}

static void PlaceStairs(u8 mazeWidth, u8 mazeHeight){
    u8 x = 0, y= 0;

    for (x = 0; x < mazeWidth;x++){
        for (y = 0; y < mazeWidth;y++){
            if (GetWarpEventAtPosition(&gMapHeader, x - MAP_OFFSET , y - MAP_OFFSET , 3) == 0){
                MapGridSetMetatileIdAt(x, y, 0x33D);
            }
        }
    }
}

static void PlaceItemBall(u8 mazeWidth, u8 mazeHeight)
{
    u32 mazeSize = Sqrt(mazeWidth * mazeHeight);
    u32 minDistance = mazeSize / 3;

    u32 objectId = 1;

    u32 collision = 0, itemIndex = 0, dx = 0, dy = 0, numPlaced = 1, itemPlacementAttempts = 0;

    u32 itemCoords[QUEST_KITCHENVOLUNTEERING_SUB_COUNT+1][2];

    SeedRng(gSaveBlock3Ptr->mazeItemsSeed);

    itemCoords[MAZE_PLAYER_START_POSITION][0] = MAZE_PLAYER_SPAWN_X;
    itemCoords[MAZE_PLAYER_START_POSITION][1] = MAZE_PLAYER_SPAWN_Y;

    // Generate random item coordinates until all items are placed
    while (numPlaced < QUEST_KITCHENVOLUNTEERING_SUB_COUNT + 1)
    {
        u32 itemX = (Random() % mazeSize) + MAP_OFFSET;
        u32 itemY = (Random() % mazeSize) + MAP_OFFSET;

        /*
         * PSF TODO
         * The items need to spawn exclusively at endpoints, use gMazeEndpoints in Agustin's branch
         * Occasionally, when leaving the maze and returning, the game will crash. I need to test this on a machine with gdb access. I suspect it is something to do with GenerateMazeItemsSeed, which moves the location of the set item everytime the player enters the maze. To repro:
         * Go to MAP_CAPHE_CITY_PANTRY, get the STORAGE_KEY, go into the maze. Leave and come back a few times, and the game should crash.
         */
        // Check if the item collides with the maze or with another item
        collision = MapGridGetCollisionAt(itemX, itemY);
        for (itemIndex = 0; itemIndex < numPlaced; itemIndex++)
        {
            dx = abs(itemCoords[itemIndex][0] - itemX);
            dy = abs(itemCoords[itemIndex][1] - itemY);
            if (dx < minDistance && dy < minDistance)
            {
                collision = 1;
                itemPlacementAttempts++;
                if (itemPlacementAttempts > MAX_ITEM_PLACEMENT_ATTEMPTS)
                    Quest_Kitchenvolunteering_CreatePantryMaze();
                break;
            }
        }

        if (collision)
            continue;

        // Add the item to the list and mark the cell as occupied
        itemCoords[numPlaced][0] = itemX;
        itemCoords[numPlaced++][1] = itemY;

        SetObjEventTemplateCoords(objectId, itemX - MAP_OFFSET, itemY - MAP_OFFSET);
        objectId++;
    }
}

// Generates a maze from a template layout containing map chunks. The width
// and height describe the "chunks" that make up the map.
struct Maze *GenerateMazeMap(u16 width, u16 height, const struct TemplateSet *templateSet)
{
    s32 x, y;
    u16 connections, variety;
    struct MapChunk chunk;
    struct MapTemplate template;
    static struct Maze maze;
    const struct MapLayout *layout;

    GenerateMaze(&maze, width, height, templateSet);

    for (x = 0; x < width; ++x)
    {
        for (y = 0; y < height; ++y)
        {
            connections = maze.cells[x][y].connections;
            template = templateSet->templates[maze.cells[x][y].templateNum];
            layout = Overworld_GetMapHeaderByGroupAndId(0, template.mapNumber)->mapLayout;
            variety = SelectTemplateVariety(&template);
            CopyMapChunk(sMapChunkCoordinateTable[connections][0]*templateSet->chunkWidth + 40*sVarietyOffsetTable[variety][0], \
                    sMapChunkCoordinateTable[connections][1]*templateSet->chunkHeight + 40*sVarietyOffsetTable[variety][1], \
                    templateSet->chunkWidth, templateSet->chunkHeight, layout, &chunk);
            PasteMapChunk(x * templateSet->chunkWidth, y * templateSet->chunkHeight, &chunk);
        }
    }
    PlaceStairs(width * templateSet->chunkWidth,height * templateSet->chunkHeight);
    PlaceItemBall(width * templateSet->chunkWidth,height * templateSet->chunkHeight);
    return &maze;
}

void GenerateMazeLayoutSeed(void){
    gSaveBlock3Ptr->mazeLayoutSeed = Random();
}

void GenerateMazeItemsSeed(void){
    gSaveBlock3Ptr->mazeItemsSeed = Random();

    while (gSaveBlock3Ptr->mazeItemsSeed == gSaveBlock3Ptr->mazeLayoutSeed) {
        gSaveBlock3Ptr->mazeItemsSeed = Random();
    }
}
