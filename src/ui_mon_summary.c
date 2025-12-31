#include "global.h"
#include "main.h"
#include "bg.h"
#include "window.h"
#include "sprite.h"
#include "gpu_regs.h"
#include "string_util.h"
#include "decompress.h"
#include "scanline_effect.h"
#include "sound.h"
#include "palette.h"
#include "task.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "ui_mon_summary.h"
#include "constants/ui_mon_summary.h"
#include "constants/rgb.h"
#include "constants/songs.h"

// ram
static EWRAM_DATA struct MonSummaryResources *sMonSummaryResourcesPtr = NULL;

// declarations
static void MonSummary_Init(enum MonSummaryModes, MainCallback);
static void MonSummary_FreeResources(void);
static void CB2_MonSummary(void);
static void VBlankCB_MonSummary(void);
static void Task_MonSummary_WaitFadeAndExit(u8);

static void SummarySetup_Backgrounds(void);
static void SummarySetup_Graphics(void);
static void SummarySetup_Windows(void);
static void CB2_SummarySetup(void);
static void Task_SummarySetup_WaitFade(u8);

static void SummaryPage_SetValue(enum MonSummaryPages);
static enum MonSummaryPages SummaryPage_GetValue(void);
static void SummaryPage_LoadTilemap(void);

static void PageInput_RunSpecificHandler(u8);
static void Task_PageInput_Handle(u8);
static void Task_PageInput_HandleInfos(u8);

// const data
static const struct BgTemplate sMonSummaryBgTemplates[NUM_MON_SUMMARY_BACKGROUNDS] =
{
    {
        .bg = MON_SUMMARY_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = MON_SUMMARY_BG_PAGE_1,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .screenSize = 1,
        .priority = 1
    },
    {
        .bg = MON_SUMMARY_BG_PAGE_2,
        .charBaseIndex = 2,
        .mapBaseIndex = 26,
        .screenSize = 1,
        .priority = 1
    },
    {
        .bg = MON_SUMMARY_BG_STATIC,
        .charBaseIndex = 2,
        .mapBaseIndex = 30,
        .priority = 3
    },
};

static const struct WindowTemplate sMonSummary_StaticWindows[] =
{
    [MON_SUMMARY_MAIN_WIN_HEADER] =
    {
        .bg = MON_SUMMARY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 10,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 1
    },

    // MON_SUMMARY_MAIN_WIN_DYNAMIC uses AddWindow

    DUMMY_WIN_TEMPLATE
};

static const struct {
    u8 windowId;
    u8 left;
    u8 top;
    u8 width;
    u8 height;
} sMonSummary_DynamicWindows[NUM_MON_SUMMARY_PAGES][TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS] =
{
    [MON_SUMMARY_PAGE_INFOS] =
    {
        {
            .windowId = MON_SUMMARY_INFOS_WIN_TEST,
            .left = 15, .top = 11,
            .width = 14, .height = 2
        },
        MON_SUMMARY_DYNAMIC_WIN_DUMMY
    },
    // TODO reference needed windows from actual assets on gdrive
    [MON_SUMMARY_PAGE_STATS] =
    {
        MON_SUMMARY_DYNAMIC_WIN_DUMMY
    },
    [MON_SUMMARY_PAGE_MOVES] =
    {
        MON_SUMMARY_DYNAMIC_WIN_DUMMY
    },
};

// MUDSKIP TODO use actual assets from gdrive
static const u32 sMonSummary_MainTiles[] = INCBIN_U32("graphics/ui_menus/mon_summary/tiles.4bpp.smol");
static const u32 sMonSummary_MainTilemap[] = INCBIN_U32("graphics/ui_menus/mon_summary/bg.bin.smolTM");
static const u16 sMonSummary_MainPalette[] = INCBIN_U16("graphics/ui_menus/mon_summary/tiles.gbapal");

static const u32 *const sMonSummary_TilemapByPages[NUM_MON_SUMMARY_PAGES] =
{
    [MON_SUMMARY_PAGE_INFOS] = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/infos.bin.smolTM"),
    /*
    [MON_SUMMARY_PAGE_STATS] = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/stats.bin.smolTM"),
    [MON_SUMMARY_PAGE_MOVES] = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/moves.bin.smolTM"),
    */
};

static const u8 sMonSummaryWindowFontColors[][3] =
{
    [MON_SUMMARY_FNTCLR_PRIMARY]   = { 0, 1, 4 },
    [MON_SUMMARY_FNTCLR_SECONDARY] = { 0, 1, 2 },
};

static const TaskFunc sMonSummary_InputByPages[NUM_MON_SUMMARY_PAGES] =
{
    [MON_SUMMARY_PAGE_INFOS] = Task_PageInput_HandleInfos
    // TODO other inputs
};

// code
void MonSummary_OpenDefault(void)
{
    MonSummary_Init(MON_SUMMARY_MODE_DEFAULT, CB2_ReturnToFieldContinueScript);
}

static void MonSummary_Init(enum MonSummaryModes mode, MainCallback callback)
{
    sMonSummaryResourcesPtr = AllocZeroed(sizeof(struct MonSummaryResources));

    if (!sMonSummaryResourcesPtr
     || mode >= NUM_MON_SUMMARY_MODES)
    {
        TRY_FREE_AND_SET_NULL(sMonSummaryResourcesPtr);
        SetMainCallback2(callback);
        return;
    }

    sMonSummaryResourcesPtr->savedCallback = callback;
    sMonSummaryResourcesPtr->mode = mode;
    SummaryPage_SetValue(MON_SUMMARY_PAGE_INFOS);

    SetMainCallback2(CB2_SummarySetup);
}

static void MonSummary_FreeResources(void)
{
    TRY_FREE_AND_SET_NULL(sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1]);
    TRY_FREE_AND_SET_NULL(sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2]);
    TRY_FREE_AND_SET_NULL(sMonSummaryResourcesPtr);
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void CB2_MonSummary(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_MonSummary(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_MonSummary_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        MainCallback cb = sMonSummaryResourcesPtr->savedCallback;

        SetMainCallback2(cb);
        MonSummary_FreeResources();
        DestroyTask(taskId);
    }
}

static void SummarySetup_Backgrounds(void)
{
    u32 tilemapSize = BG_SCREEN_SIZE * 2;

    sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1] = AllocZeroed(tilemapSize);
    sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2] = AllocZeroed(tilemapSize);

    if (!sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1]
     || !sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2])
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        CreateTask(Task_MonSummary_WaitFadeAndExit, 0);
        SetVBlankCallback(VBlankCB_MonSummary);
        SetMainCallback2(CB2_MonSummary);
        return;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMonSummaryBgTemplates, NELEMS(sMonSummaryBgTemplates));

    SetBgTilemapBuffer(MON_SUMMARY_BG_PAGE_1, sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1]);
    SetBgTilemapBuffer(MON_SUMMARY_BG_PAGE_2, sMonSummaryResourcesPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2]);

    for (enum MonSummaryBackgrounds bg = 0; bg < NUM_MON_SUMMARY_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }
}

static void SummarySetup_Graphics(void)
{
    ResetTempTileDataBuffers();
    DecompressAndCopyTileDataToVram(MON_SUMMARY_BG_STATIC, sMonSummary_MainTiles, 0, 0, 0);

    void *addr = (void *)BG_SCREEN_ADDR(GetBgAttribute(MON_SUMMARY_BG_STATIC, BG_ATTR_MAPBASEINDEX));
    DecompressDataWithHeaderVram(sMonSummary_MainTilemap, addr);

    LoadPalette(sMonSummary_MainPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);

    SummaryPage_LoadTilemap();
}

static void SummarySetup_Windows(void)
{
    InitWindows(sMonSummary_StaticWindows);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(MON_SUMMARY_MAIN_WIN_HEADER, PIXEL_FILL(0));
    PutWindowTilemap(MON_SUMMARY_MAIN_WIN_HEADER);
    CopyWindowToVram(MON_SUMMARY_MAIN_WIN_HEADER, COPYWIN_FULL);
}

static void CB2_SummarySetup(void)
{
    enum MonSummarySetupSteps steps = gMain.state;

    switch (steps)
    {
    case MON_SUMMARY_SETUP_RESET:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        FillPalette(RGB_BLACK, BG_PLTT_ID(0), PLTT_SIZEOF(512));
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
        break;
    case MON_SUMMARY_SETUP_BACKGROUNDS:
        SummarySetup_Backgrounds();
        break;
    case MON_SUMMARY_SETUP_GRAPHICS:
        SummarySetup_Graphics();
        break;
    case MON_SUMMARY_SETUP_WINDOWS:
        SummarySetup_Windows();
        break;
    case MON_SUMMARY_SETUP_FADE:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_SummarySetup_WaitFade, 0);
        break;
    case MON_SUMMARY_SETUP_FINISH:
        SetVBlankCallback(VBlankCB_MonSummary);
        SetMainCallback2(CB2_MonSummary);
        return;
    default:
        DebugPrintf("WARNING infinite loop at: %d", steps);
        return;
    }

    gMain.state++;
}

static void Task_SummarySetup_WaitFade(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_PageInput_Handle;
    }
}

static void SummaryPage_SetValue(enum MonSummaryPages page)
{
    sMonSummaryResourcesPtr->page = page;
}

static enum MonSummaryPages SummaryPage_GetValue(void)
{
    return sMonSummaryResourcesPtr->page;
}

static void SummaryPage_SetPageSlot(u32 slot)
{
    sMonSummaryResourcesPtr->pageSlot = slot;
}

static u32 SummaryPage_GetPageSlot(void)
{
    return sMonSummaryResourcesPtr->pageSlot;
}

static void SummaryPage_LoadTilemap(void)
{
    u32 slot = SummaryPage_GetPageSlot();
    enum MonSummaryBackgrounds bg = MON_SUMMARY_BG_PAGE_1 + slot;
    u32 reg = slot ? REG_OFFSET_BG2HOFS : REG_OFFSET_BG1HOFS;

    if (gMain.state)
    {
        SetGpuReg(reg, -8);
    }
    else
    {
        SetGpuReg(reg, DISPLAY_WIDTH);
    }

    FillBgTilemapBufferRect_Palette0(bg, 0, 0, 0, DISPLAY_TILE_WIDTH * 2, DISPLAY_TILE_HEIGHT);
    CopyToBgTilemapBuffer(bg, sMonSummary_TilemapByPages[SummaryPage_GetValue()], 0, 0);
    CopyBgTilemapBufferToVram(bg);

    SummaryPage_SetPageSlot(slot ^ 1);
}

// page-specific _or_ mode-specific (e.g. MON_SUMMARY_MODE_IV_TRAIN)
static void PageInput_RunSpecificHandler(u8 taskId)
{
    TaskFunc func = sMonSummary_InputByPages[SummaryPage_GetValue()];

    if (func)
    {
        func(taskId);
    }
}

static void Task_PageInput_Handle(u8 taskId)
{
    PageInput_RunSpecificHandler(taskId);

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MonSummary_WaitFadeAndExit;
    }
}

static void Task_PageInput_HandleInfos(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        DebugPrintf("current page: %d", SummaryPage_GetValue());
    }
}
