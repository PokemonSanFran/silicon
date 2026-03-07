#include "global.h"
#include "main.h"
#include "bg.h"
#include "window.h"
#include "palette.h"
#include "task.h"
#include "malloc.h"
#include "menu_helpers.h"
#include "menu.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "decompress.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "gpu_regs.h"
#include "overworld.h"
#include "ui_move_reminder.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/characters.h"
#include "constants/ui_move_reminder.h"

static EWRAM_DATA struct MoveReminderResources *sMoveReminderResourcesPtr = NULL;

static void CB2_MoveReminder(void);
static void VBlankCB_MoveReminder(void);
static void MoveReminder_FreeResources(void);

static void Task_MReminderInput_Main(u8);
static void Task_MReminderInput_WaitFadeAndExit(u8);

static void CB2_MReminderSetup(void);
static bool32 MReminderSetup_InitBgs(void);
static void MReminderSetup_InitGraphics(void);
static void MReminderSetup_InitWindows(void);
static void MReminderSetup_InitSprites(void);
static void Task_MReminderSetup_WaitFade(u8);

static void TilemapBuffer_SetPtr(enum MoveReminderBackgroundBuffers, u8 *);
static u8 *TilemapBuffer_GetPtr(enum MoveReminderBackgroundBuffers);

static const struct MoveReminderModeInfo *MReminderMode_GetInfo(enum MoveReminderModes);
static const u32 *MReminderMode_GetTilemap(enum MoveReminderModes);
static void MReminderMode_ReloadTilemap(void);
static enum MoveReminderModes MReminderMode_GetValue(void);
static enum MoveReminderModes MReminderMode_SetValue(enum MoveReminderModes);

#include "data/ui_move_reminder.h"

void MoveReminder_Init(MainCallback callback)
{
    sMoveReminderResourcesPtr = AllocZeroed(sizeof(struct MoveReminderResources));
    if (sMoveReminderResourcesPtr == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sMoveReminderResourcesPtr->savedCallback = callback;
    MReminderMode_SetValue(MREMINDER_MODE_MAIN);

    SetMainCallback2(CB2_MReminderSetup);
}

static void CB2_MoveReminder(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_MoveReminder(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void MoveReminder_FreeResources(void)
{
    for (enum MoveReminderBackgroundBuffers buf = 0; buf < NUM_MREMINDER_BACKGROUND_BUFFERS; buf++)
    {
        u8 *ptr = TilemapBuffer_GetPtr(buf);
        TRY_FREE_AND_SET_NULL(ptr);
    }

    TRY_FREE_AND_SET_NULL(sMoveReminderResourcesPtr);
    FreeTempTileDataBuffersIfPossible();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void Task_MReminderInput_Main(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MReminderInput_WaitFadeAndExit;
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        return;
    }
}

static void Task_MReminderInput_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMoveReminderResourcesPtr->savedCallback);
        MoveReminder_FreeResources();
        DestroyTask(taskId);
    }
}

static void CB2_MReminderSetup(void)
{
    enum MoveReminderSetupSteps steps = gMain.state;

    switch (steps)
    {
    case MREMINDER_SETUP_RESET:
        FillPalette(RGB_BLACK, 0, PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinatesAndBgCntRegs();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        FreeAllWindowBuffers();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case MREMINDER_SETUP_BACKGROUNDS:
        if (!MReminderSetup_InitBgs())
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            CreateTask(Task_MReminderInput_WaitFadeAndExit, 0);
            SetVBlankCallback(VBlankCB_MoveReminder);
            SetMainCallback2(CB2_MoveReminder);
            return;
        }
        gMain.state++;
        break;
    case MREMINDER_SETUP_GRAPHICS:
        MReminderSetup_InitGraphics();
        gMain.state++;
        break;
    case MREMINDER_SETUP_WINDOWS:
        MReminderSetup_InitWindows();
        gMain.state++;
        break;
    case MREMINDER_SETUP_SPRITES:
        MReminderSetup_InitSprites();
        gMain.state++;
        break;
    case MREMINDER_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_MReminderSetup_WaitFade, 0);
        gMain.state++;
        break;
    case MREMINDER_SETUP_FINISH:
        SetVBlankCallback(VBlankCB_MoveReminder);
        SetMainCallback2(CB2_MoveReminder);
        gMain.state++;
        break;
    default:
        DebugPrintf("WARNING unused step at: %d", steps);
        gMain.state++;
        break;
    }
}

static bool32 MReminderSetup_InitBgs(void)
{
    ResetAllBgsCoordinates();

    bool32 allocFail = FALSE;

    for (enum MoveReminderBackgroundBuffers buf = 0; buf < NUM_MREMINDER_BACKGROUND_BUFFERS; buf++)
    {
        TilemapBuffer_SetPtr(buf, AllocZeroed(BG_SCREEN_SIZE));

        if (!TilemapBuffer_GetPtr(buf))
        {
            allocFail = TRUE;
            break;
        }
    }

    if (allocFail)
        return FALSE;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMoveReminderBgTemplates, NUM_MREMINDER_BACKGROUNDS);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);

    SetBgTilemapBuffer(MREMINDER_BG_TILEMAP, sMoveReminderResourcesPtr->tilemapBufs[MREMINDER_BGBUF_TILEMAP]);

    for (enum MoveReminderBackgrounds bg = 0; bg < NUM_MREMINDER_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }

    return TRUE;
}

static void MReminderSetup_InitGraphics(void)
{

}

static void MReminderSetup_InitWindows(void)
{
    InitWindows(sMoveReminderWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(MREMINDER_BG_TEXT);

    u32 baseBlock = 1;

    for (enum MoveReminderWindows winId = 0; winId < NUM_MREMINDER_WINDOWS; winId++)
    {
        SetWindowAttribute(winId, WINDOW_BASE_BLOCK, baseBlock);
        FillWindowPixelBuffer(winId, PIXEL_FILL(0));
        PutWindowTilemap(winId);
        // don't copy to VRAM yet

        const struct WindowTemplate *template = &gWindows[winId].window;
        baseBlock += template->width * template->height;
    }
}

static void MReminderSetup_InitSprites(void)
{

}

static void Task_MReminderSetup_WaitFade(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MReminderInput_Main;
}

static void TilemapBuffer_SetPtr(enum MoveReminderBackgroundBuffers buf, u8 *addr)
{
    sMoveReminderResourcesPtr->tilemapBufs[buf] = addr;
}

static u8 *TilemapBuffer_GetPtr(enum MoveReminderBackgroundBuffers buf)
{
    return sMoveReminderResourcesPtr->tilemapBufs[buf];
}

static const struct MoveReminderModeInfo *MReminderMode_GetInfo(enum MoveReminderModes mode)
{
    return &sMoveReminder_ModesInfo[mode];
}

static const u32 *MReminderMode_GetTilemap(enum MoveReminderModes mode)
{
    return MReminderMode_GetInfo(mode)->tilemap;
}

static void MReminderMode_ReloadTilemap(void)
{
    DecompressDataWithHeaderWram(
        MReminderMode_GetTilemap(MReminderMode_GetValue()),
        TilemapBuffer_GetPtr(MREMINDER_BGBUF_TILEMAP));
    CopyBgTilemapBufferToVram(MREMINDER_BG_TILEMAP);
}

static enum MoveReminderModes MReminderMode_GetValue(void)
{
    return sMoveReminderResourcesPtr->mode;
}

static enum MoveReminderModes MReminderMode_SetValue(enum MoveReminderModes mode)
{
    sMoveReminderResourcesPtr->mode = mode;
    return MReminderMode_GetValue();
}
