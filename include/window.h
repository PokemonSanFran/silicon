#ifndef GUARD_WINDOW_H
#define GUARD_WINDOW_H

#define WINDOWS_MAX  32

#define PIXEL_FILL(num) ((num) | ((num) << 4))

enum {
    WINDOW_BG,
    WINDOW_TILEMAP_LEFT,
    WINDOW_TILEMAP_TOP,
    WINDOW_WIDTH,
    WINDOW_HEIGHT,
    WINDOW_PALETTE_NUM,
    WINDOW_BASE_BLOCK,
    WINDOW_TILE_DATA
};

// Mode for CopyWindowToVram, CopyWindowRectToVram and CopyWindowToVram8Bit
enum {
    COPYWIN_NONE,
    COPYWIN_MAP,
    COPYWIN_GFX,
    COPYWIN_FULL,
};

struct WindowTemplate
{
    u8 bg;
    u8 tilemapLeft;
    u8 tilemapTop;
    u8 width;
    u8 height;
    u8 paletteNum;
    u16 baseBlock;
};

#define DUMMY_WIN_TEMPLATE          \
{                                   \
    .bg = 0xFF,                     \
}

#define WINDOW_NONE 0xFF

struct Window
{
    struct WindowTemplate window;
    u8 *tileData;
};

bool32 InitWindows(const struct WindowTemplate *templates);
u32 AddWindow(const struct WindowTemplate *template);
int AddWindowWithoutTileMap(const struct WindowTemplate *template);
void RemoveWindow(u32 windowId);
void RemoveAllWindowsOnBg(u32 bgId);
void FreeAllWindowBuffers(void);
void CopyWindowToVram(u32 windowId, u32 mode);
void CopyWindowRectToVram(u32 windowId, u32 mode, u32 x, u32 y, u32 w, u32 h);
void PutWindowTilemap(u32 windowId);
void PutWindowRectTilemapOverridePalette(u32 windowId, u8 x, u8 y, u8 width, u8 height, u8 palette);
void ClearWindowTilemap(u32 windowId);
void PutWindowRectTilemap(u32 windowId, u8 x, u8 y, u8 width, u8 height);
void BlitBitmapToWindow(u32 windowId, const u8 *pixels, u16 x, u16 y, u16 width, u16 height);
void BlitBitmapRectToWindow(u32 windowId, const u8 *pixels, u16 srcX, u16 srcY, u16 srcWidth, int srcHeight, u16 destX, u16 destY, u16 rectWidth, u16 rectHeight);
void FillWindowPixelRect(u32 windowId, u8 fillValue, u16 x, u16 y, u16 width, u16 height);
void CopyToWindowPixelBuffer(u32 windowId, const void *src, u16 size, u16 tileOffset);
void FillWindowPixelBuffer(u32 windowId, u8 fillValue);
void ScrollWindow(u32 windowId, u8 direction, u8 distance, u8 fillValue);
void CallWindowFunction(u32 windowId, void ( *func)(u8, u8, u8, u8, u8, u8));
bool32 SetWindowAttribute(u32 windowId, u32 attributeId, u32 value);
u32 GetWindowAttribute(u32 windowId, u32 attributeId);
u32 AddWindow8Bit(const struct WindowTemplate *template);
void FillWindowPixelBuffer8Bit(u32 windowId, u8 fillValue);
void FillWindowPixelRect8Bit(u32 windowId, u8 fillValue, u16 x, u16 y, u16 width, u16 height);
void BlitBitmapRectToWindow4BitTo8Bit(u32 windowId, const u8 *pixels, u16 srcX, u16 srcY, u16 srcWidth, int srcHeight, u16 destX, u16 destY, u16 rectWidth, u16 rectHeight, u8 paletteNum);
void CopyWindowToVram8Bit(u32 windowId, u8 mode);
u32 WindowWidthPx(u32 windowId);
u32 WindowTemplateWidthPx(const struct WindowTemplate *template);
u32 CalculateNextWindowBaseblock(void); // siliconMerge

extern struct Window gWindows[];
extern void *gWindowBgTilemapBuffers[];

//begin FRLG import

//pokefirered\include\window.h to get FRLG intro working

#define COPYWIN_MAP  1
#define COPYWIN_GFX  2
#define COPYWIN_BOTH 3

//end FRLG import
#endif // GUARD_WINDOW_H
