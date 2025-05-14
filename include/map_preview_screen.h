#ifndef GUARD_MAP_PREVIEW_SCREEN_H
#define GUARD_MAP_PREVIEW_SCREEN_H

struct MapPreviewScreen
{
    u8 mapsec;
    u8 type;
    u16 flagId;
    u8 image;
};

struct ImageData
{
    const void *tilesptr;
    const void *tilemapptr;
    const void *palptr;
};

bool32 ForestMapPreviewScreenIsRunning(void);
u32 GetFadeScreenModeFromMapPreviewType(void);
bool32 IsMapPreviewTypeFadeIn(u8 mapsecId);
void RunMapPreviewScreen(u8 mapsecId);
bool32 ShouldRunCaveMapPreviewScreen(void);
bool32 ShouldRunFadeInMapPreviewScreen(void);
void RunFadeInMapPreviewScreen(void);

#endif //GUARD_MAP_PREVIEW_SCREEN_H
