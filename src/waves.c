#include "global.h"
#include "bg.h"
#include "window.h"
#include "scanline_effect.h"
#include "dma3.h"
#include "overworld.h"
#include "event_data.h"
#include "sound.h"
#include "ui_main_menu.h"
#include "field_weather.h"
#include "options_visual.h"
#include "malloc.h"
#include "waves.h"
#include "palette.h"
#include "task.h"
#include "string_util.h"
#include "ui_adventure_guide.h"
#include "constants/ui_adventure_guide.h"
#include "menu.h"
#include "menu_helpers.h"
#include "ui_start_menu.h"
#include "constants/quests.h"
#include "constants/rgb.h"
#include "constants/waves.h"
#include "constants/songs.h"
#include "data/waves.h"

static const u8 *const Waves_GetTitle(enum GoalEnum goal);
static const u8 *const Waves_GetDesc(enum GoalEnum goal);
static const u32* Waves_GetThumbnail(enum GoalEnum goal);
const u16* Waves_GetPalette(enum GoalEnum goalId);
const u32 Waves_GetGoal(enum GoalEnum goalId);
const enum SubQuestDefines Waves_GetRelatedSubQuest(enum GoalEnum goalId);
const enum QuestIdList Waves_GetRelatedQuest(enum GoalEnum goalId);
u8 Waves_GetPercentRaised(enum GoalEnum goalId, enum GoalAttributes attribute);
u8 Waves_GetPlayerPercent(enum GoalEnum goalId);
u8 Waves_GetPassivePercent(enum GoalEnum goalId);
u8 Waves_CalculateAmountRaised(enum GoalEnum goalId);
u8 Waves_CalculateAmountRemaining(enum GoalEnum goalId, enum GoalAttributes attributes);
static void Waves_VBlankCB(void);
static void Waves_MainCB(void);
static bool32 Waves_InitializeBackgrounds(void);
static bool32 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(void);
static void SetScheduleBgs(enum WavesBackgrounds backgroundId);
static bool8 AreTilesOrTilemapEmpty(enum WavesBackgrounds backgroundId);
static void LoadGraphics(void);
static void LoadWavesPalettes(void);
static void PlaySoundStartFadeQuitApp(u8 taskId);
static void Task_WaitFadeAndExitGracefully(u8 taskId);
void Waves_FadescreenAndExitGracefully(void);
static void Waves_FreeResources(void);
static void Waves_FreeStructs(void);
static void Waves_FreeBackgrounds(void);
static void SaveCallbackToWaves(MainCallback callback);
static void Waves_InitializeAndSaveCallback(MainCallback callback);
void Waves_SetupCallback(void);
static void Waves_InitWindows(void);
static void Task_Waves_HandleCardInput(u8 taskId);
static void Waves_OpenGoal(u8 taskId);
static void Waves_ChangeColumn(s32 direction);
static void Waves_ChangeRow(s32 direction);
static void FreeSpritePalettesResetSpriteData(void);
static bool32 AllocateStructs(void);
static void Waves_ReturnFromAdventureGuide(void);
static void ClearAllWindows(void);
static void Waves_InitializeBackgroundsAndLoadBackgroundGraphics(void);
static void Waves_PrintMenuHeader(enum WavesWindowsGrid windowId);
static void Waves_PrintHeaderText(enum WavesWindowsGrid windowId);

static const u16 wavesPalettesDefault[] = INCBIN_U16("graphics/accept/palettes/default.gbapal");
static const u16 wavesPalettesBlack[] = INCBIN_U16("graphics/accept/palettes/black.gbapal");
static const u16 wavesPalettesBlue[] = INCBIN_U16("graphics/accept/palettes/blue.gbapal");
static const u16 wavesPalettesGreen[] = INCBIN_U16("graphics/accept/palettes/green.gbapal");
static const u16 wavesPalettesPlatinum[] = INCBIN_U16("graphics/accept/palettes/platinum.gbapal");
static const u16 wavesPalettesRed[] = INCBIN_U16("graphics/accept/palettes/red.gbapal");
static const u16 wavesPalettesScarlet[] = INCBIN_U16("graphics/accept/palettes/scarlet.gbapal");
static const u16 wavesPalettesViolet[] = INCBIN_U16("graphics/accept/palettes/violet.gbapal");
static const u16 wavesPalettesWhite[] = INCBIN_U16("graphics/accept/palettes/white.gbapal");
static const u16 wavesPalettesYellow[] = INCBIN_U16("graphics/accept/palettes/yellow.gbapal");
static const u16 wavesPalettesText[] = INCBIN_U16("graphics/accept/palettes/text.gbapal");

static const u32 wavesInterfaceTiles[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_inferface.4bpp.smol");
static const u32 wavesInterfaceTilemap[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/waves_inferface.bin.smolTM");

static const u32 siliconBgTiles[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/bg.4bpp.smol");
static const u32 siliconBgTilemap[] = INCBIN_U32("graphics/ui_menus/waves/backgrounds/bg.bin.smolTM");

EWRAM_DATA struct WavesState *sWavesState = NULL;
static EWRAM_DATA u8 *sBgTilemapBuffer[BG_WAVES_COUNT] = {NULL};
static bool8 firstOpen;

const u8 sWavesWindowFontColors[][3] =
{
    [WAVES_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [WAVES_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
};

static const struct BgTemplate sWavesBgTemplates[BG_WAVES_COUNT] =
{
    [BG0_WAVES_TEXT] =
    {
        .bg = BG0_WAVES_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    [BG1_WAVES_INTERFACE] =
    {
        .bg = BG1_WAVES_INTERFACE,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    [BG2_WAVES_CHOSEN_BACKGROUND] =
    {
        .bg = BG2_WAVES_CHOSEN_BACKGROUND,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
};

static const struct WindowTemplate sWavesGridWindows[] =
{
    [WIN_WAVES_CARD_HEADER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1,
    },
    [WIN_WAVES_CARD_1] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2),
    },
    [WIN_WAVES_CARD_2] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7),
    },
    [WIN_WAVES_CARD_3] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_CARD_4] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_CARD_5] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_CARD_6] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_GOAL_FOOTER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sWavesGoalWindows[] =
{
    [WIN_WAVES_GOAL_HEADER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1,
    },
    [WIN_WAVES_GOAL_TITLE] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 1,
        .tilemapTop = 3,
        .width = 12,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2),
    },
    [WIN_WAVES_GOAL_DESC] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 30,
        .height = 5,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2),
    },
    [WIN_WAVES_GOAL_PLAYER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 15,
        .tilemapTop = 5,
        .width = 13,
        .height = 1,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5),
    },
    [WIN_WAVES_GOAL_PASSIVE] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 15,
        .tilemapTop = 7,
        .width = 13,
        .height = 1,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1),
    },
    [WIN_WAVES_GOAL_TOTAL] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 15,
        .tilemapTop = 7,
        .width = 13,
        .height = 1,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1),
    },
    [WIN_WAVES_GOAL_RAISED] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 14,
        .tilemapTop = 3,
        .width = 15,
        .height = 10,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1) + (15 * 7),
    },
    [WIN_WAVES_GOAL_FOOTER] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1) + (15 * 7) + (15 * 10)
    },
    DUMMY_WIN_TEMPLATE
};

static const u8 *const Waves_GetTitle(enum GoalEnum goal)
{
    return sWavesInformation[goal].title;
}

static const u8 *const Waves_GetDesc(enum GoalEnum goal)
{
    return sWavesInformation[goal].desc;
}

static const u32* Waves_GetThumbnail(enum GoalEnum goal)
{
    return sWavesInformation[goal].thumbnail;
}

const u16* Waves_GetPalette(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].palette;
}

const u32 Waves_GetGoal(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].goal;
}

const enum SubQuestDefines Waves_GetRelatedSubQuest(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].relatedSubQuest;
}

const enum QuestIdList Waves_GetRelatedQuest(enum GoalEnum goalId)
{
    return sWavesInformation[goalId].relatedQuest;
}

u8 Waves_GetPercentRaised(enum GoalEnum goalId, enum GoalAttributes attribute)
{
    return gSaveBlock3Ptr->wavesFunds[attribute];
}

u8 Waves_GetPlayerPercent(enum GoalEnum goalId)
{
    return Waves_GetPercentRaised(goalId, GOAL_PLAYER_PERCENT);
}

u8 Waves_GetPassivePercent(enum GoalEnum goalId)
{
    return Waves_GetPercentRaised(goalId, GOAL_PASSIVE_PERCENT);
}

u8 Waves_CalculateAmountRaised(enum GoalEnum goalId)
{
    u32 combinedPercent = Waves_GetPlayerPercent(goalId) + Waves_GetPassivePercent(goalId);
    return (Waves_GetGoal(goalId) / combinedPercent);
}

u8 Waves_CalculateAmountRemaining(enum GoalEnum goalId, enum GoalAttributes attributes)
{
    return (Waves_GetGoal(goalId) - Waves_CalculateAmountRaised(goalId));
};

static void Waves_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Waves_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool32 Waves_InitializeBackgrounds(void)
{
    ResetAllBgsCoordinates();

    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs();

    return TRUE;
}
static bool32 AllocZeroedTilemapBuffers(void)
{
    enum WavesBackgrounds backgroundId;

    for (backgroundId = 0; backgroundId < BG_WAVES_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sWavesBgTemplates, NELEMS(sWavesBgTemplates));

    for (enum WavesBackgrounds backgroundId = 0; backgroundId < BG_WAVES_COUNT; backgroundId++)
    {
        //if (AreTilesOrTilemapEmpty(backgroundId))
            //continue;

        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
}

static void SetScheduleBgs(enum WavesBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static const u32* const sWavesTilesLUT[] =
{
    [BG0_WAVES_TEXT] = NULL,
    [BG1_WAVES_INTERFACE] = wavesInterfaceTiles,
    [BG2_WAVES_CHOSEN_BACKGROUND] = siliconBgTiles,
    [BG3_WAVES_NOTHING] = NULL,
};

static const u32* const sWavesTilemapLUT[] =
{
    [BG0_WAVES_TEXT] = NULL,
    [BG1_WAVES_INTERFACE] = wavesInterfaceTilemap,
    [BG2_WAVES_CHOSEN_BACKGROUND] = siliconBgTilemap,
    [BG3_WAVES_NOTHING] = NULL,
};

static const u16* const sWavesPalettesLUT[] =
{
    [VISUAL_OPTION_COLOR_RED] = wavesPalettesRed,
    [VISUAL_OPTION_COLOR_GREEN] = wavesPalettesGreen,
    [VISUAL_OPTION_COLOR_BLUE] = wavesPalettesBlue,
    [VISUAL_OPTION_COLOR_YELLOW] = wavesPalettesYellow,
    [VISUAL_OPTION_COLOR_BLACK] = wavesPalettesBlack,
    [VISUAL_OPTION_COLOR_WHITE] = wavesPalettesWhite,
    [VISUAL_OPTION_COLOR_PLATINUM] = wavesPalettesPlatinum,
    [VISUAL_OPTION_COLOR_SCARLET] = wavesPalettesScarlet,
    [VISUAL_OPTION_COLOR_VIOLET] = wavesPalettesViolet,
    [VISUAL_OPTION_COLOR_CUSTOM] = wavesPalettesDefault,
    [VISUAL_OPTION_COLOR_COUNT] = wavesPalettesDefault,
};

static bool8 AreTilesOrTilemapEmpty(enum WavesBackgrounds backgroundId)
{
    return (sWavesTilesLUT[backgroundId] == NULL || sWavesTilesLUT[backgroundId] == NULL);
}

static void LoadGraphics(void)
{
    u32 backgroundId;
    ResetTempTileDataBuffers();
    for (backgroundId = BG0_WAVES_TEXT; backgroundId < BG_WAVES_COUNT; backgroundId++)
    {
        DebugPrintf("before %d",backgroundId);

        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DebugPrintf("after %d",backgroundId);

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sWavesTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sWavesTilemapLUT[backgroundId],0,0);
    }
    LoadWavesPalettes();
}

static void LoadWavesPalettes(void)
{
    LoadPalette(sWavesPalettesLUT[GetVisualColor()], WAVES_PALETTE_INTERFACE_SLOT, PLTT_SIZE_4BPP);

    LoadPalette(wavesPalettesText, WAVES_PALETTE_TEXT_SLOT, PLTT_SIZE_4BPP);
}

static void ClearWindowCopyToVram(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void PlaySoundStartFadeQuitApp(u8 taskId)
{
    PlaySE(SE_PC_OFF);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_WaitFadeAndExitGracefully;
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(sWavesState->savedCallback);
    Waves_FreeResources();
    DestroyTask(taskId);
}

void Waves_FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Waves_VBlankCB);
    SetMainCallback2(Waves_MainCB);
}

static void Waves_FreeResources(void)
{
    FreeSpritePalettesResetSpriteData();
    Waves_FreeStructs();
    Waves_FreeBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void Waves_FreeStructs(void)
{
    if (sWavesState != NULL)
        Free(sWavesState);
}

static void Waves_FreeBackgrounds(void)
{
    enum WavesBackgrounds backgroundId;

    for (backgroundId = 0; backgroundId < BG_WAVES_COUNT; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

void CB2_WavesFromStartMenu(void)
{
    Waves_InitializeAndSaveCallback(CB2_StartMenu_ReturnToUI);
}

static void Waves_InitializeAndSaveCallback(MainCallback callback)
{
    enum AdventureGuideList targetGuide = GUIDE_WAVES_OF_CHANGE;

    if (!shouldSkipGuide(targetGuide))
    {
        VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN,targetGuide);
        gMain.savedCallback = callback;
        Adventure_Guide_Init(Waves_ReturnFromAdventureGuide);
        return;
    }

    if (AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }
    SaveCallbackToWaves(callback);
    SetMainCallback2(Waves_SetupCallback);
}

static void SaveCallbackToWaves(MainCallback callback)
{
    sWavesState->savedCallback = callback;
}


void Waves_SetupCallback(void)
{
    switch (gMain.state)
    {
        case 0:
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            ResetPaletteFade();
            ResetTasks();
            FreeSpritePalettesResetSpriteData();
            gMain.state++;
            break;
        case 2:
            CreateTask(Task_Waves_HandleCardInput,0);
            Waves_InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            Waves_InitWindows();
            gMain.state++;
            break;
        case 4:
            gMain.state++;
            break;
        case 5:
            gMain.state++;
            break;
        case 6:
            ClearAllWindows();
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            Waves_PrintMenuHeader(WIN_WAVES_CARD_HEADER);
            //PrintHelpBar(WIN_WAVES_CARD_FOOTER);
            if (firstOpen)
                PlaySE(SE_PC_LOGIN);
            gMain.state++;
            break;
        case 7:
            firstOpen = FALSE;
            SetVBlankCallback(Waves_VBlankCB);
            SetMainCallback2(Waves_MainCB);
            break;
    }
}

static void Waves_InitWindows(void)
{
    InitWindows(sWavesGridWindows);
    DeactivateAllTextPrinters();
}

static void Task_Waves_HandleCardInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON) || JOY_REPEAT(B_BUTTON) || JOY_HELD(B_BUTTON))
    {
        PlaySoundStartFadeQuitApp(taskId);
    }

    if (JOY_NEW(A_BUTTON) || JOY_REPEAT(A_BUTTON) || JOY_HELD(A_BUTTON))
    {
        Waves_OpenGoal(taskId);
        return;
    }

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN) || JOY_HELD(DPAD_DOWN))
    {
        Waves_ChangeColumn(1);
        return;
    }

    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP) || JOY_HELD(DPAD_UP))
    {
        Waves_ChangeColumn(-1);
        return;
    }

    if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT) || JOY_HELD(DPAD_LEFT))
    {
        Waves_ChangeRow(-1);
        return;
    }

    if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT) || JOY_HELD(DPAD_RIGHT))
    {
        Waves_ChangeRow(1);
        return;
    }
}

static void Waves_OpenGoal(u8 taskId)
{
    return;
}

static void Waves_ChangeColumn(s32 direction)
{
    return;
}

static void Waves_ChangeRow(s32 direction)
{
    return;
}

static void FreeSpritePalettesResetSpriteData(void)
{
    ResetSpriteData();
    FreeSpriteTileRanges();
    FreeAllSpritePalettes();
    ClearDma3Requests();
}

static bool32 AllocateStructs(void)
{
    sWavesState = AllocZeroed(sizeof(struct WavesState));

    return (sWavesState == NULL
           );
}

static void ClearAllWindows(void)
{
    for (enum AdventureWindows windowId = 0; windowId < WINDOW_ADVENTURE_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void Waves_ReturnFromAdventureGuide(void)
{
    Waves_InitializeAndSaveCallback(gMain.savedCallback);
}

static void Waves_InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Waves_InitializeBackgrounds())
        LoadGraphics();
    else
        Waves_FadescreenAndExitGracefully();
}

static void Waves_PrintMenuHeader(enum WavesWindowsGrid windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Waves_PrintHeaderText(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Waves_PrintHeaderText(enum WavesWindowsGrid windowId)
{
    u32 fontId = FONT_WAVES_TITLE;
    u32 x = 4;
    u32 y = 0;
    AddTextPrinterParameterized4(windowId, fontId, x, y, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sWavesWindowFontColors[WAVES_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}
