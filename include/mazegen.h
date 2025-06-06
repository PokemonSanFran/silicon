#ifndef GUARD_MAZEGEN_H
#define GUARD_MAZEGEN_H

#define MAX_MAZE_WIDTH      8
#define MAX_MAZE_HEIGHT     5
#define MAX_SPECIAL_ROOMS   20
#define MAX_ITEM_PLACEMENT_ATTEMPTS 100
#define MAZE_PLAYER_SPAWN_X 5
#define MAZE_PLAYER_SPAWN_Y 5
#define PLAYER_POSITION 0

enum
{
    MAZE_PLAYER_START_POSITION,
    MAZE_ITEM_1_POSITION,
    MAZE_ITEM_2_POSITION,
    MAZE_ITEM_3_POSITION,
    MAZE_ITEM_4_POSITION,
    MAZE_ITEM_5_POSITION,
};

struct Cell
{
    u16 x:4;
    u16 y:4;
    u8 templateNum;     // template num
    u8 variety;         // template variety
    u8 distance;        // path distance from origin
    u16 visited:1;      // boolean
    u16 endpoint:1;     // boolean
    u16 connections:4;  // stored as bitfield
};

struct Maze
{
    u16 width;
    u16 height;
    struct Cell cells[MAX_MAZE_WIDTH][MAX_MAZE_HEIGHT];
};

#define MAX_TEMPLATES   4
#define MAX_VARIETIES   4

// Template Set Constants
#define CAVE_STAIRS_TEMPLATE_SET    0
#define CAVE_WATER_TEMPLATE_SET     1

struct MapTemplate
{
    u16 mapNumber;
    u16 varietyWeights[MAX_VARIETIES];
    u16 totalWeight;
    u8 adjacencyWeights[4][MAX_TEMPLATES];
};

struct TemplateSet
{
    u16 mapBase;
    struct MapTemplate templates[MAX_TEMPLATES];
    u16 templateCount;
    u16 chunkWidth;
    u16 chunkHeight;
};

struct Maze *GenerateMazeMap(u16 width, u16 height, const struct TemplateSet *templateSet);
struct Cell **GetMazeEndpoints(struct Maze *maze);

extern struct Maze *gMazeStruct;
extern struct Cell **gMazeEndpoints;
extern const struct TemplateSet gMazeTemplates[];

void GenerateMazeLayoutSeed(void);

#endif // GUARD_MAZEGEN_H
