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

static void SummaryInput_UpdatePage(s32);
static bool32 SummaryInput_IsInputAdditive(s32);
static void SummaryInput_RunSpecificHandler(u8);
static void Task_SummaryInput_Handle(u8);
static void Task_SummaryInput_HandleInfos(u8);

static void SummaryPage_SetValue(enum MonSummaryPages);
static enum MonSummaryPages SummaryPage_GetValue(void);
static u32 SummaryPage_SanitizeWindowId(u32);
static void SummaryPage_SetWindowId(u32, u32);
static u8 SummaryPage_GetWindowId(u32);
static void SummaryPage_TogglePageSlot(void);
static u32 SummaryPage_GetPageSlot(void);
static const struct MonSummaryPageInfo *SummaryPage_GetInfo(enum MonSummaryPages);
static struct WindowTemplate SummaryPage_FillDynamicWindowTemplate(enum MonSummaryPages, u32);
static u32 SummaryPage_GetDynamicWindowBaseBlock(u32);
static const u32 *SummaryPage_GetTilemap(enum MonSummaryPages);
static TaskFunc SummaryPage_GetInputFunc(enum MonSummaryPages);
static void SummaryPage_LoadDynamicWindows(void);
static void SummaryPage_LoadTilemap(void);
static void SummaryPage_Reload(void);

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
};

static const struct WindowTemplate sMonSummary_MainWindows[] =
{
    [MON_SUMMARY_MAIN_WIN_HEADER] =
    {
        .bg = MON_SUMMARY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 10,
        .height = 2,
        .paletteNum = 0,
    },

    // MON_SUMMARY_MAIN_WIN_DYNAMIC uses AddWindow

    DUMMY_WIN_TEMPLATE
};

static const struct MonSummaryPageInfo sMonSummary_PagesInfo[NUM_MON_SUMMARY_PAGES] =
{
    [MON_SUMMARY_PAGE_INFOS] =
    {
        .windows =
        {
            {
                .id = MON_SUMMARY_INFOS_WIN_TEST,
                .left = 15, .top = 11,
                .width = 14, .height = 2
            },
            MON_SUMMARY_DYNAMIC_WIN_DUMMY
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/infos.bin.smolTM"),
        .input = Task_SummaryInput_HandleInfos
    },
    [MON_SUMMARY_PAGE_STATS] =
    {
        .windows =
        {
            MON_SUMMARY_DYNAMIC_WIN_DUMMY
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/stats.bin.smolTM"),
    },
    [MON_SUMMARY_PAGE_MOVES] =
    {
        .windows =
        {
            MON_SUMMARY_DYNAMIC_WIN_DUMMY
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/moves.bin.smolTM"),
    },
};

static const u32 sMonSummary_MainTiles[] = INCBIN_U32("graphics/ui_menus/mon_summary/pages/tiles.4bpp.smol");
static const u32 sMonSummary_MainTilemap[] = INCBIN_U32("graphics/ui_menus/mon_summary/pages/blank.bin");
static const u16 sMonSummary_MainPalette[] = INCBIN_U16("graphics/ui_menus/mon_summary/pages/tiles.gbapal");

static const u8 sMonSummaryWindowFontColors[][3] =
{
    [MON_SUMMARY_FNTCLR_PRIMARY]   = { 0, 1, 4 },
    [MON_SUMMARY_FNTCLR_SECONDARY] = { 0, 1, 2 },
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
    memset(sMonSummaryResourcesPtr->windowIds, WINDOW_NONE, ARRAY_COUNT(sMonSummaryResourcesPtr->windowIds));

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
    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();

    DecompressAndCopyTileDataToVram(MON_SUMMARY_BG_PAGE_1, sMonSummary_MainTiles, 0, 0, 0);
    LoadPalette(sMonSummary_MainPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);

    SummaryPage_LoadTilemap();
}

static void SummarySetup_Windows(void)
{
    InitWindows(sMonSummary_MainWindows);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    for (u32 i = 0, baseBlock = 1; i < NUM_MON_SUMMARY_MAIN_WINS; i++)
    {
        SetWindowAttribute(i, WINDOW_BASE_BLOCK, baseBlock);
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);
        CopyWindowToVram(i, COPYWIN_FULL);

        baseBlock += sMonSummary_MainWindows[i].width * sMonSummary_MainWindows[i].height;
    }

    SummaryPage_LoadDynamicWindows();
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
        gTasks[taskId].func = Task_SummaryInput_Handle;
    }
}

static void SummaryInput_UpdatePage(s32 delta)
{
    enum MonSummaryPages page = SummaryPage_GetValue();
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);
    u32 count = NUM_MON_SUMMARY_PAGES - 1;

    if ((!page && !additiveDelta) || (page == count && additiveDelta))
    {
        return;
    }

    PlaySE(SE_CLICK);
    SummaryPage_SetValue(page + delta);
    SummaryPage_Reload();
}

static bool32 SummaryInput_IsInputAdditive(s32 delta)
{
    return delta == 1;
}

// page-specific _or_ mode-specific (e.g. MON_SUMMARY_MODE_IV_TRAIN)
// TODO mode-specific handler
static void SummaryInput_RunSpecificHandler(u8 taskId)
{
    TaskFunc func = SummaryPage_GetInputFunc(SummaryPage_GetValue());

    func(taskId);
}

static void Task_SummaryInput_Handle(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    SummaryInput_RunSpecificHandler(taskId);
    if (tSpecificInputPress)
    {
        tSpecificInputPress = FALSE;
        return;
    }

    if (JOY_NEW(DPAD_LEFT | L_BUTTON))
    {
        SummaryInput_UpdatePage(-1);
        return;
    }

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON))
    {
        SummaryInput_UpdatePage(1);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MonSummary_WaitFadeAndExit;
        return;
    }
}

static void Task_SummaryInput_HandleInfos(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        DebugPrintf("current page: %d", SummaryPage_GetValue());
        tSpecificInputPress = TRUE;
        return;
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

static u32 SummaryPage_SanitizeWindowId(u32 id)
{
    return id % TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS;
}

static void SummaryPage_SetWindowId(u32 id, u32 value)
{
    sMonSummaryResourcesPtr->windowIds[SummaryPage_SanitizeWindowId(id)] = value;
}

static u8 SummaryPage_GetWindowId(u32 id)
{
    return sMonSummaryResourcesPtr->windowIds[SummaryPage_SanitizeWindowId(id)];
}

static void SummaryPage_TogglePageSlot(void)
{
    sMonSummaryResourcesPtr->pageSlot ^= 1;
}

static u32 SummaryPage_GetPageSlot(void)
{
    return sMonSummaryResourcesPtr->pageSlot;
}

static const struct MonSummaryPageInfo *SummaryPage_GetInfo(enum MonSummaryPages page)
{
    if (page >= NUM_MON_SUMMARY_PAGES) return NULL;

    return &sMonSummary_PagesInfo[page];
}

// translates .window struct onto a proper WindowTemplate
// since every page has its own enums, we'll use u32 instead.
// unless there's a better way to do this other than union.
static struct WindowTemplate SummaryPage_FillDynamicWindowTemplate(enum MonSummaryPages page, u32 windowId)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);
    windowId = SummaryPage_SanitizeWindowId(windowId);

    if (!info
     || info->windows[windowId].id == WINDOW_NONE
     || info->windows[windowId].id != windowId)
    {
        return (struct WindowTemplate)DUMMY_WIN_TEMPLATE;
    }

    const struct MonSummaryDynamicWindow *window = &info->windows[windowId];

    return (struct WindowTemplate){
        .bg = MON_SUMMARY_BG_TEXT,
        .tilemapLeft = window->left, .tilemapTop = window->top,
        .width = window->width, .height = window->width,
        .paletteNum = 0,
        .baseBlock = SummaryPage_GetDynamicWindowBaseBlock(windowId)
    };
}

static u32 SummaryPage_GetDynamicWindowBaseBlock(u32 windowId)
{
    windowId = SummaryPage_SanitizeWindowId(windowId);
    u32 baseBlock = 1;
    struct WindowTemplate template;

    // add static window baseBlock
    for (u32 i = 0; i < NUM_MON_SUMMARY_MAIN_WINS; i++)
    {
        template = sMonSummary_MainWindows[i];
        if (template.bg == gDummyWindowTemplate.bg) break;

        baseBlock += template.width * template.height;
    }

    // if this is the very first window, just return default baseBlock
    if (!windowId) return baseBlock;

    // add dynamic window baseBlock
    for (u32 i = 0; i < windowId; i++)
    {
        template = SummaryPage_FillDynamicWindowTemplate(SummaryPage_GetValue(), i);
        if (template.bg == gDummyWindowTemplate.bg) break;

        baseBlock += template.width * template.height;
    }

    return baseBlock;
}

static const u32 *SummaryPage_GetTilemap(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->tilemap) return sMonSummary_MainTilemap;

    return info->tilemap;
}

static TaskFunc SummaryPage_GetInputFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->input) return TaskDummy;

    return info->input;
}

static void SummaryPage_LoadDynamicWindows(void)
{
    for (u32 i = 0; i < TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS; i++)
    {
        struct WindowTemplate template = SummaryPage_FillDynamicWindowTemplate(SummaryPage_GetValue(), i);
        if (template.bg == 0xFF) break;

        SummaryPage_SetWindowId(i, AddWindow(&template));
        u32 windowId = SummaryPage_GetWindowId(i);
        if (windowId == WINDOW_NONE) break;

        FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

static void SummaryPage_UnloadDynamicWindows(void)
{
    for (u32 i = 0; i < TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS; i++)
    {
        u32 windowId = SummaryPage_GetWindowId(i);
        if (windowId == WINDOW_NONE) break;

        FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
        ClearWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_GFX);
        RemoveWindow(windowId);
        SummaryPage_SetWindowId(i, WINDOW_NONE);
    }
}

static void SummaryPage_LoadTilemap(void)
{
    u32 slot = SummaryPage_GetPageSlot();
    enum MonSummaryBackgrounds nextBg = MON_SUMMARY_BG_PAGE_1 + slot, prevBg = MON_SUMMARY_BG_PAGE_1 + (slot ^ 1);

    SetBgAttribute(nextBg, BG_ATTR_PRIORITY, 1);
    SetBgAttribute(prevBg, BG_ATTR_PRIORITY, 2);

    FillBgTilemapBufferRect_Palette0(nextBg, 0, 0, 0, DISPLAY_TILE_WIDTH, DISPLAY_TILE_HEIGHT);
    CopyToBgTilemapBuffer(nextBg, SummaryPage_GetTilemap(SummaryPage_GetValue()), 0, 0);
    SetGpuReg(slot ? REG_OFFSET_BG2HOFS : REG_OFFSET_BG1HOFS, 8);
    CopyBgTilemapBufferToVram(nextBg);

    ShowBg(nextBg);
    ShowBg(prevBg);
    SummaryPage_TogglePageSlot();
}

static void SummaryPage_Reload(void)
{
    SummaryPage_UnloadDynamicWindows();
    SummaryPage_LoadTilemap();
    SummaryPage_LoadDynamicWindows();
}
