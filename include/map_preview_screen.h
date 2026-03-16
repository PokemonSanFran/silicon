#ifndef GUARD_MAP_PREVIEW_SCREEN_H
#define GUARD_MAP_PREVIEW_SCREEN_H

struct MapPreviewScreen
{
    u16 mapsec;
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
void Script_MapPreview(void);
bool32 IsMapPreviewTypeCave(u32 mapSecId);
bool32 IsMapPreviewTypeBasic(u32 mapSecId);
bool32 IsMapPreviewTypeFadeIn(mapsec_u16_t mapSecId);
u32 GetFadeScreenModeFromMapPreviewType(void);
void RunMapPreviewScreen(mapsec_u16_t mapSecId);
bool32 ShouldRunCaveMapPreviewScreen(void);
bool32 ShouldRunFadeInMapPreviewScreen(void);
void RunFadeInMapPreviewScreen(void);
void MapPreview_SetFlag(u16 flagId);

#endif //GUARD_MAP_PREVIEW_SCREEN_H
