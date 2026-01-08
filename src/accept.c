#include "global.h"
#include "main_menu.h"
#include "palette.h"
#include "main.h"
#include "gpu_regs.h"
#include "scanline_effect.h"
#include "task.h"
#include "malloc.h"
#include "decompress.h"
#include "bg.h"
#include "window.h"
#include "string_util.h"
#include "text.h"
#include "overworld.h"
#include "menu.h"
#include "constants/rgb.h"
#include "accept.h"
#include "event_scripts.h"
#include "random.h"
#include "strings.h"
#include "constants/accept.h"
#include "menu_helpers.h"
#include "dma3.h"
#include "frontier_pass.h"
#include "ui_options_menu.h"
#include "options_visual.h"
#include "pc_screen_effect.h"

u32 acceptFrameCounter;

struct AcceptState
{
    u8 emailPosition;
    bool8 devMode;
};

static bool32 AllocateStructs(void);
static void Accept_SetupCallback(void);
static void FreeSpritePalettesResetSpriteData(void);
static void InitializeBackgroundsAndLoadBackgroundGraphics(void);
static void Accept_InitWindows(void);
static void Accept_VBlankCB(void);
static void Accept_MainCB(void);
static bool32 Accept_InitializeBackgrounds(bool32);
static bool32 DebugShouldSkipBg(u32);
static bool32 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(bool32);
static void SetScheduleBgs(enum AcceptBackgrounds);
static void LoadGraphics(void);
static void LoadAcceptPalettes(void);
static void ClearWindowCopyToVram(enum AcceptWindows);
static void Task_WaitFadeAndExitGracefully(u8);
static void FadescreenAndExitGracefully(void);
static void FreeResources(void);
static void FreeBackgrounds(void);
static void FreeStructs(void);
static void Accept_SetUp(u8);
static void Task_ExecuteAcceptAnimations(u8);
static void CheckPositionAndAdvanceEmail(u8);
static void DestroyTaskAndExit(u8);
static void ChangePositionAndPrintEmailText(s32);
static void Task_HandleAcceptInput(u8);
static u32 CreateMenuSprite(u32, u32, u16, void (*callback)(struct Sprite*));
static void PrintMouse(void);
static void LoadMouseSprite(void);
static void SpriteCallback_Mouse(struct Sprite*);
static void IncrementAcceptTimer(void);
static void ResetAcceptTimer(void);
static u32 GetAcceptTimer(void);
static void PlayOpenEmailAnimation(u32);
static void FlashEmailCursor(u32);
static void RemoveEmailCursor(u32);
static void ShowEmailText();
static void ToggleMouseVisibility(struct Sprite*);
static void MoveMouse(struct Sprite*, u32);
static bool32 ChangeEmailPosition(s32);
static u32 GetEmailPosition(void);
static void ResetEmailPosition(void);
static bool32 IsAtEndOfEmail(void);
static u32 GetMaxLines(bool32);
static u32 GetFinalEmailLine(void);
static void Accept_PrintScrollbar(void);
static void SpriteCallback_Scrollbar(struct Sprite*);
static u32 CalculateScrollbarYPosition(void);
static void Accept_LoadScrollbarSprite(void);
static void PrintAcceptHelpBar(void);
static u32 GetDevMode(void);
static void SetDevMode(bool32);

static const u16 acceptPalettesBlack[] = INCBIN_U16("graphics/accept/palettes/black.gbapal");
static const u16 acceptPalettesBlue[] = INCBIN_U16("graphics/accept/palettes/blue.gbapal");
static const u16 acceptPalettesDefault[] = INCBIN_U16("graphics/accept/palettes/default.gbapal");
static const u16 acceptPalettesGreen[] = INCBIN_U16("graphics/accept/palettes/green.gbapal");
static const u16 acceptPalettesPlatinum[] = INCBIN_U16("graphics/accept/palettes/platinum.gbapal");
static const u16 acceptPalettesRed[] = INCBIN_U16("graphics/accept/palettes/red.gbapal");
static const u16 acceptPalettesScarlet[] = INCBIN_U16("graphics/accept/palettes/scarlet.gbapal");
static const u16 acceptPalettesViolet[] = INCBIN_U16("graphics/accept/palettes/violet.gbapal");
static const u16 acceptPalettesWhite[] = INCBIN_U16("graphics/accept/palettes/white.gbapal");
static const u16 acceptPalettesYellow[] = INCBIN_U16("graphics/accept/palettes/yellow.gbapal");
static const u16 acceptPalettesEmail[] = INCBIN_U16("graphics/accept/palettes/email.gbapal");
static const u16 acceptPalettesText[] = INCBIN_U16("graphics/accept/palettes/text.gbapal");

static const u32 desktopBgTiles[] = INCBIN_U32("graphics/accept/desktopbg.4bpp.smol");
static const u32 desktopBgTilemap[] = INCBIN_U32("graphics/accept/desktopbg.bin.smolTM");

static const u8 windowAnim0[] = INCBIN_U8("graphics/accept/frame0.4bpp");
static const u8 windowAnim1[] = INCBIN_U8("graphics/accept/frame1.4bpp");
static const u8 windowAnim2[] = INCBIN_U8("graphics/accept/frame2.4bpp");
static const u8 windowAnim3[] = INCBIN_U8("graphics/accept/frame3.4bpp");

static const u8 devAnim0[] = INCBIN_U8("graphics/accept/devFrame0.4bpp");
static const u8 devAnim1[] = INCBIN_U8("graphics/accept/devFrame1.4bpp");
static const u8 devAnim2[] = INCBIN_U8("graphics/accept/devFrame2.4bpp");
static const u8 devAnim3[] = INCBIN_U8("graphics/accept/devFrame3.4bpp");

static const u8 emailSelector[] = INCBIN_U8("graphics/accept/selector.4bpp");

static const u32 desktopMouseSprite[] = INCBIN_U32("graphics/accept/mouse.4bpp.smol");
static const u32 acceptScrollbar[] = INCBIN_U32("graphics/accept/scrollbar.4bpp.smol");

static const u8 sAcceptWindowFontColors[][3] =
{
    [ACCEPT_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [ACCEPT_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
};

static const struct SpritePalette sAcceptInterfaceSpritePalette =
{
    .data = acceptPalettesDefault,
    .tag = PAL_ACCEPT_UI_SPRITES,
};

static EWRAM_DATA u8 *sBgTilemapBuffer[BG_ACCEPT_COUNT] = {NULL};
static EWRAM_DATA struct AcceptState *sAcceptState = NULL;

static const struct BgTemplate sAcceptBgTemplates[] =
{
    {
        .bg = BG0_ACCEPT_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = BG1_ACCEPT_DESKTOP,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    {
        .bg = BG2_ACCEPT_BACKGROUND,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
};

static const struct WindowTemplate sAcceptWindowTemplates[] =
{
    [ACCEPT_WINDOW_ANIMATION]
    {
        .bg = BG1_ACCEPT_DESKTOP,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 20,
        .paletteNum = 1,
        .baseBlock = 1,
    },
    [ACCEPT_WINDOW_EMAIL]
    {
        .bg = BG0_ACCEPT_TEXT,
        .tilemapLeft = 4,
        .tilemapTop = 4,
        .width = 25,
        .height = 14,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 20),
    },
    [ACCEPT_WINDOW_HELPBAR]
    {
        .bg = BG0_ACCEPT_TEXT,
        .tilemapLeft =  0   ,
        .tilemapTop =   18  ,
        .width =    30  ,
        .height =   2   ,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 20) + (25 * 14),
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sDevWindowTemplates[] =
{
    [ACCEPT_WINDOW_ANIMATION]
    {
        .bg = BG1_ACCEPT_DESKTOP,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 20,
        .paletteNum = 1,
        .baseBlock = 1,
    },
    [ACCEPT_WINDOW_EMAIL]
    {
        .bg = BG0_ACCEPT_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 26,
        .height = 15,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 20),
    },
    [ACCEPT_WINDOW_HELPBAR]
    {
        .bg = BG0_ACCEPT_TEXT,
        .tilemapLeft =  0   ,
        .tilemapTop =   18  ,
        .width =    30  ,
        .height =   2   ,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 20) + (26 * 15),
    },
    DUMMY_WIN_TEMPLATE
};

static const u8* const sEmailOpenAnimationLUT[] =
{
    [ACCEPT_EMAIL_OPEN_0_FRAME_COUNT]   = windowAnim0,
    [ACCEPT_EMAIL_OPEN_1_FRAME_COUNT]   = windowAnim1,
    [ACCEPT_EMAIL_OPEN_2_FRAME_COUNT]   = windowAnim2,
    [ACCEPT_EMAIL_OPEN_3_FRAME_COUNT]   = windowAnim3,
};

static const u8* const sDevMessageOpenAnimationLUT[] =
{
    [ACCEPT_EMAIL_OPEN_0_FRAME_COUNT]   = devAnim0,
    [ACCEPT_EMAIL_OPEN_1_FRAME_COUNT]   = devAnim1,
    [ACCEPT_EMAIL_OPEN_2_FRAME_COUNT]   = devAnim2,
    [ACCEPT_EMAIL_OPEN_3_FRAME_COUNT]   = devAnim3,
};

static const u32* const sAcceptTilesLUT[] =
{
    [BG0_ACCEPT_TEXT] = NULL,
    [BG1_ACCEPT_DESKTOP] = NULL,
    [BG2_ACCEPT_BACKGROUND] = desktopBgTiles,
    [BG_ACCEPT_COUNT] = NULL,
};

static const u32* const sAcceptTilemapLUT[] =
{
    [BG0_ACCEPT_TEXT] = NULL,
    [BG1_ACCEPT_DESKTOP] = NULL,
    [BG2_ACCEPT_BACKGROUND] = desktopBgTilemap,
    [BG_ACCEPT_COUNT] = NULL,
};

static const u16* const sAcceptPalettesLUT[] =
{
    [VISUAL_OPTION_COLOR_RED] = acceptPalettesRed,
    [VISUAL_OPTION_COLOR_GREEN] = acceptPalettesGreen,
    [VISUAL_OPTION_COLOR_BLUE] = acceptPalettesBlue,
    [VISUAL_OPTION_COLOR_YELLOW] = acceptPalettesYellow,
    [VISUAL_OPTION_COLOR_BLACK] = acceptPalettesBlack,
    [VISUAL_OPTION_COLOR_WHITE] = acceptPalettesWhite,
    [VISUAL_OPTION_COLOR_PLATINUM] = acceptPalettesPlatinum,
    [VISUAL_OPTION_COLOR_SCARLET] = acceptPalettesScarlet,
    [VISUAL_OPTION_COLOR_VIOLET] = acceptPalettesViolet,
    [VISUAL_OPTION_COLOR_CUSTOM] = acceptPalettesDefault,
    [VISUAL_OPTION_COLOR_COUNT] = acceptPalettesDefault,
};

void ReadAcceptLetterFromOverworld(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    SetMainCallback2(CB2_GoToAccept);
}

void StartNewGameWithDevIntro(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    SetMainCallback2(CB2_GoToDevIntro);
}

void CB2_GoToAccept(void)
{
    if (!UpdatePaletteFade())
        SetMainCallback2(Accept_SetupCallback);

    if (AllocateStructs())
        FadescreenAndExitGracefully();
}

void CB2_GoToDevIntro(void)
{
    if (!UpdatePaletteFade())
        SetMainCallback2(Accept_SetupCallback);

    if (AllocateStructs())
        FadescreenAndExitGracefully();

    SetDevMode(TRUE);
}

static bool32 AllocateStructs(void)
{
    sAcceptState = AllocZeroed(sizeof(struct AcceptState));

    return (sAcceptState == NULL
           );
}

static void Accept_SetupCallback(void)
{
    switch (gMain.state)
    {
        case 0:
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            ResetAcceptTimer();
            ResetGpuRegsAndBgs();
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            FreeSpritePalettesResetSpriteData();
            ResetPaletteFade();
            ResetTasks();
            gMain.state++;
            break;
        case 2:
            InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            gMain.state++;
            break;
        case 4:
            LoadSpritePalette(&sAcceptInterfaceSpritePalette);
            gMain.state++;
            break;
        case 5:
            //PSF TODO figure out why this flashes pink when fading in
            BeginPCScreenEffect_TurnOn(0, 0, 0);
            gMain.state++;
            break;
        case 6:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            gMain.state++;
            break;
        case 7:
            ResetEmailPosition();
            Accept_SetUp(0);
            gMain.state++;
            break;
        case 8:
            SetVBlankCallback(Accept_VBlankCB);
            SetMainCallback2(Accept_MainCB);
            break;
    }
}

static void FreeSpritePalettesResetSpriteData(void)
{
    ResetSpriteData();
    FreeSpriteTileRanges();
    FreeAllSpritePalettes();
    ClearDma3Requests();
}

static void InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Accept_InitializeBackgrounds(TRUE))
        LoadGraphics();
    else
        FadescreenAndExitGracefully();
}

static void Accept_InitWindows(void)
{
    if (GetDevMode())
        InitWindows(sDevWindowTemplates);
    else
        InitWindows(sAcceptWindowTemplates);

    DeactivateAllTextPrinters();
}

static void Accept_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    PlayOpenEmailAnimation(GetAcceptTimer());
    TransferPlttBuffer();
}

static void Accept_MainCB(void)
{
    IncrementAcceptTimer();
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool32 Accept_InitializeBackgrounds(bool32 isFirst)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs(TRUE);

    return TRUE;
}

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sAcceptTilesLUT[backgroundId] == NULL || sAcceptTilesLUT[backgroundId] == NULL);
}

static bool32 DebugShouldSkipBg(u32 bg)
{
    bool32 skipBg[BG_ACCEPT_COUNT] =
    {
        [BG0_ACCEPT_TEXT] = FALSE,
        [BG1_ACCEPT_DESKTOP] = FALSE,
        [BG2_ACCEPT_BACKGROUND] = FALSE,
    };

    return skipBg[bg];
}

static bool32 AllocZeroedTilemapBuffers(void)
{
    enum AcceptBackgrounds backgroundId;

    for (backgroundId = BG0_ACCEPT_TEXT; backgroundId < BG_ACCEPT_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(bool32 isFirst)
{
    enum AcceptBackgrounds backgroundId;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sAcceptBgTemplates, NELEMS(sAcceptBgTemplates));

    for (backgroundId = BG0_ACCEPT_TEXT; backgroundId < BG_ACCEPT_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
}

static void SetScheduleBgs(enum AcceptBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void LoadGraphics(void)
{
    enum AcceptBackgrounds backgroundId;
    ResetTempTileDataBuffers();

    for (backgroundId = BG2_ACCEPT_BACKGROUND; backgroundId < BG_ACCEPT_COUNT; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId,sAcceptTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId,sAcceptTilemapLUT[backgroundId],0,0);
    }
    LoadAcceptPalettes();
}

static void LoadAcceptPalettes(void)
{
    LoadPalette(sAcceptPalettesLUT[GetVisualColor()], PAL_SLOT_ACCEPT_UI, PLTT_SIZE_4BPP);
    LoadPalette(acceptPalettesEmail,PAL_SLOT_EMAIL,PLTT_SIZE_4BPP);
    LoadPalette(acceptPalettesText,PAL_SLOT_TEXT,PLTT_SIZE_4BPP);
}

static void ClearWindowCopyToVram(enum AcceptWindows windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    FreeResources();
    DestroyTask(taskId);

    if (GetDevMode())
        CB2_InitUiOptionMenuFromDevLetter();
    else
        CB2_ReturnToFieldContinueScript();
}

static void FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Accept_VBlankCB);
    SetMainCallback2(Accept_MainCB);
}

static void FreeResources(void)
{
    FreeAllSpritePalettes();
    FreeBackgrounds();
    FreeStructs();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void FreeBackgrounds(void)
{
    for (enum AcceptBackgrounds backgroundId = BG0_ACCEPT_TEXT; backgroundId < BG_ACCEPT_COUNT; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

static void FreeStructs(void)
{
    if (sAcceptState != NULL)
        Free(sAcceptState);
}

static void IncrementAcceptTimer(void)
{
    if (GetAcceptTimer() >=ACCEPT_EMAIL_TEXT_APPEAR_FRAME_COUNT)
        return;

    acceptFrameCounter++;
}

static void ResetAcceptTimer(void)
{
    acceptFrameCounter = 0;
}

static u32 GetAcceptTimer(void)
{
    return acceptFrameCounter;
}

static void Accept_SetUp(u8 taskId)
{
    Accept_InitWindows();
    gTasks[taskId].func = Task_ExecuteAcceptAnimations;
}

static void Task_ExecuteAcceptAnimations(u8 taskId)
{
    u32 timer = GetAcceptTimer();
    //DebugPrintf("current timer %d",timer);
    switch (timer)
    {
        default:
            break;
        case ACCEPT_MOUSE_FIRST_APPEAR_FRAME_COUNT:
            PrintMouse();
            HideBg(BG1_ACCEPT_DESKTOP);
            break;
        case (ACCEPT_EMAIL_OPEN_0_FRAME_COUNT - 1):
            PutWindowTilemap(ACCEPT_WINDOW_ANIMATION);
            CopyWindowToVram(ACCEPT_WINDOW_ANIMATION, COPYWIN_MAP);
            ShowBg(BG1_ACCEPT_DESKTOP);
            break;
        case ACCEPT_EMAIL_OPEN_3_FRAME_COUNT:
            Accept_PrintScrollbar();
            break;
        case ACCEPT_EMAIL_CURSOR_WHITE_0_FRAME_COUNT:
        case ACCEPT_EMAIL_CURSOR_WHITE_1_FRAME_COUNT:
            FlashEmailCursor(timer);
            break;
        case ACCEPT_EMAIL_CURSOR_GRAY_0_FRAME_COUNT:
            RemoveEmailCursor(timer);
            break;
        case ACCEPT_EMAIL_TEXT_APPEAR_FRAME_COUNT:
            ShowEmailText();
            gTasks[taskId].func = Task_HandleAcceptInput;
            break;
    }
}

static void ChangePositionAndPrintEmailText(s32 delta)
{
    if (ChangeEmailPosition(delta))
        ShowEmailText();
}

static void CheckPositionAndAdvanceEmail(u8 taskId)
{
    ChangePositionAndPrintEmailText(1);

    if (IsAtEndOfEmail())
        DestroyTaskAndExit(taskId);
}

static void DestroyTaskAndExit(u8 taskId)
{
    DestroyTask(taskId);
    FadescreenAndExitGracefully();
}

static void Task_HandleAcceptInput(u8 taskId)
{
    if (JOY_NEW(START_BUTTON) || JOY_REPEAT(START_BUTTON) || JOY_HELD(START_BUTTON))
        DestroyTaskAndExit(taskId);

    if (JOY_NEW(A_BUTTON) || JOY_REPEAT(A_BUTTON) || JOY_HELD(A_BUTTON))
    {
        CheckPositionAndAdvanceEmail(taskId);
        return;
    }

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN) || JOY_HELD(DPAD_DOWN))
    {
        ChangePositionAndPrintEmailText(1);
        return;
    }

    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP) || JOY_HELD(DPAD_UP))
    {
        ChangePositionAndPrintEmailText(-1);
        return;
    }

    if (JOY_NEW(B_BUTTON) || JOY_REPEAT(B_BUTTON) || JOY_HELD(B_BUTTON))
    {
        ChangePositionAndPrintEmailText(-1);
        return;
    }
}


static u32 CreateMenuSprite(u32 x, u32 y, u16 TileTag, void (*callback)(struct Sprite*))
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag = TileTag;
    TempSpriteTemplate.paletteTag = PAL_ACCEPT_UI_SPRITES;
    TempSpriteTemplate.callback = callback;

    LoadSpritePalette(&sAcceptInterfaceSpritePalette);
    return CreateSprite(&TempSpriteTemplate,x,y,0);
}

static void PrintMouse(void)
{
    u32 spriteId;
    bool32 isDevMode = GetDevMode();
    u32 x = (isDevMode) ? 144 : 22;
    u32 y = (isDevMode) ? 119 : 68;
    u16 TileTag = ACCEPT_GFXTAG_MOUSE;

    LoadMouseSprite();
    spriteId = CreateMenuSprite(x,y,TileTag, SpriteCallback_Mouse);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].subpriority = 0;
    gSprites[spriteId].invisible = FALSE;
}

static void LoadMouseSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_MainMouse =
    {
        desktopMouseSprite,
        (16*16),
        ACCEPT_GFXTAG_MOUSE,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_MainMouse);
    LoadSpritePalette(&sAcceptInterfaceSpritePalette);
}

static void SpriteCallback_Mouse(struct Sprite* sprite)
{
    u32 timer = GetAcceptTimer();
    switch(timer)
    {
        default:
            return;
        case ACCEPT_MOUSE_CLICK_FRAME_COUNT:
        case ACCEPT_MOUSE_DESTROY_FRAME_COUNT:
        case ACCEPT_MOUSE_SECOND_APPEAR_FRAME_COUNT:
            ToggleMouseVisibility(sprite);
            break;
        case ACCEPT_MOUSE_MOVE_0_FRAME_COUNT:
        case ACCEPT_MOUSE_MOVE_1_FRAME_COUNT:
        case ACCEPT_MOUSE_MOVE_2_FRAME_COUNT:
        case ACCEPT_MOUSE_MOVE_3_FRAME_COUNT:
        case ACCEPT_MOUSE_MOVE_4_FRAME_COUNT:
        case ACCEPT_MOUSE_MOVE_5_FRAME_COUNT:
        case ACCEPT_MOUSE_MOVE_6_FRAME_COUNT:
        case ACCEPT_MOUSE_STOP_FRAME_COUNT:
            MoveMouse(sprite, timer);
            break;
    }
}

static void ToggleMouseVisibility(struct Sprite* sprite)
{
    sprite->invisible = !(sprite->invisible);
}

static u32 const sDevMouseCoordinates[ACCEPT_MOUSE_STOP_FRAME_COUNT + 1][2] =

{
    [ACCEPT_MOUSE_MOVE_0_FRAME_COUNT] = {154,111},
    [ACCEPT_MOUSE_MOVE_1_FRAME_COUNT] = {168,97},
    [ACCEPT_MOUSE_MOVE_2_FRAME_COUNT] = {148,79},
    [ACCEPT_MOUSE_MOVE_3_FRAME_COUNT] = {123,72},
    [ACCEPT_MOUSE_MOVE_4_FRAME_COUNT] = {92,67},
    [ACCEPT_MOUSE_MOVE_5_FRAME_COUNT] = {61,66},
    [ACCEPT_MOUSE_MOVE_6_FRAME_COUNT] = {34,67},
    [ACCEPT_MOUSE_STOP_FRAME_COUNT]   = {22,68},
};

static u32 const sAcceptMouseCoordinates[ACCEPT_MOUSE_STOP_FRAME_COUNT + 1][2] =
{
    [ACCEPT_MOUSE_MOVE_0_FRAME_COUNT] = {31,57},
    [ACCEPT_MOUSE_MOVE_1_FRAME_COUNT] = {33,53},
    [ACCEPT_MOUSE_MOVE_2_FRAME_COUNT] = {36,49},
    [ACCEPT_MOUSE_MOVE_3_FRAME_COUNT] = {39,45},
    [ACCEPT_MOUSE_MOVE_4_FRAME_COUNT] = {38,37},
    [ACCEPT_MOUSE_MOVE_5_FRAME_COUNT] = {37,28},
    [ACCEPT_MOUSE_MOVE_6_FRAME_COUNT] = {30,24},
    [ACCEPT_MOUSE_STOP_FRAME_COUNT]   = {23,20},
};

static void MoveMouse(struct Sprite* sprite, u32 timer)
{
    if (GetDevMode())
    {
        sprite->x = sDevMouseCoordinates[timer][0];
        sprite->y = sDevMouseCoordinates[timer][1];
    }
    else
    {
        sprite->x = sAcceptMouseCoordinates[timer][0];
        sprite->y = sAcceptMouseCoordinates[timer][1];
    }
}

static void PlayOpenEmailAnimation(u32 timer)
{
    u32 size = TILE_SIZE_4BPP * DISPLAY_TILE_WIDTH * DISPLAY_TILE_HEIGHT;

    if (timer > ACCEPT_EMAIL_OPEN_3_FRAME_COUNT || timer < ACCEPT_EMAIL_OPEN_0_FRAME_COUNT)
        return;

    while(timer != ACCEPT_EMAIL_OPEN_0_FRAME_COUNT && timer != ACCEPT_EMAIL_OPEN_1_FRAME_COUNT && timer != ACCEPT_EMAIL_OPEN_2_FRAME_COUNT && timer != ACCEPT_EMAIL_OPEN_3_FRAME_COUNT)
    {
        timer--;
    }

    if (GetDevMode())
        DmaCopy16(3, sDevMessageOpenAnimationLUT[timer],(void *)(BG_CHAR_ADDR(0) + TILE_OFFSET_4BPP(1)), size);
    else
        DmaCopy16(3, sEmailOpenAnimationLUT[timer],(void *)(BG_CHAR_ADDR(0) + TILE_OFFSET_4BPP(1)), size);
}

static void FastForwardPastGrayCursor(void)
{
    acceptFrameCounter = ACCEPT_EMAIL_TEXT_APPEAR_FRAME_COUNT;
}

static void FlashEmailCursor(u32 timer)
{
    enum AcceptWindows windowId = ACCEPT_WINDOW_EMAIL;

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);

    if (GetDevMode())
    {
        FastForwardPastGrayCursor();
        return;
    }

    BlitBitmapToWindow(windowId, emailSelector, 0, 0, 200, 16);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void RemoveEmailCursor(u32 timer)
{
    enum AcceptWindows windowId = ACCEPT_WINDOW_EMAIL;
    ClearWindowCopyToVram(windowId);
}

static const u8* const sTextDevMessage[] =
{
#ifndef NDEBUG
    COMPOUND_STRING("{COLOR RED}NOTE FOR BETA TESTERS:"),
    COMPOUND_STRING("▶ To automatically WIN a battle,"),
    COMPOUND_STRING("press {DPAD_UP} and {B_BUTTON} and choose a Move."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ To automatically LOSE a battle,"),
    COMPOUND_STRING("press {DPAD_DOWN} and {B_BUTTON} and choose a Move."),
    COMPOUND_STRING("{COLOR RED}Please lose against Tala and Alcemene."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ To jump to a Story Point"),
    COMPOUND_STRING("press {R_BUTTON} and {START_BUTTON} in the overworld"),
    COMPOUND_STRING("and select 'Story Jump'."),
    COMPOUND_STRING("You can go forward, but not backwards."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ To start a new save,"),
    COMPOUND_STRING("press {R_BUTTON} and {SELECT_BUTTON}"),
    COMPOUND_STRING("from the Title Screen."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ Please only play the latest build."),
    COMPOUND_STRING("If you start a new build,"),
    COMPOUND_STRING("start a new save."),
    COMPOUND_STRING(""),
    COMPOUND_STRING(""),
#endif
    COMPOUND_STRING("Thanks for choosing Pokémon Silicon,"),
    COMPOUND_STRING("and welcome to the world of Pokémon!"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("If you paid for this game, you have"),
    COMPOUND_STRING("been scammed. Pokémon Silicon will"),
    COMPOUND_STRING("always be free to play."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("We've been collecting, battling and"),
    COMPOUND_STRING("studying Pokémon since 1996, and we"),
    COMPOUND_STRING("can't imagine our lives without it."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("Creating this game was the"),
    COMPOUND_STRING("culmination of the pure adoration that"),
    COMPOUND_STRING("we have for the series."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("We hope exploring the Resido"),
    COMPOUND_STRING("region will be as much fun as"),
    COMPOUND_STRING("creating it was!"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ Got questions?"),
    COMPOUND_STRING("http://pkmnSi.game"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ Join our Discord community!"),
    COMPOUND_STRING("http://pkmnSi.game/commnunity"),
    COMPOUND_STRING(""),
};

static const u8* const sTextEmail[] =
{
    COMPOUND_STRING("Dear {PLAYER},"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("Congratulations! We’re thrilled to"),
    COMPOUND_STRING("inform you that your application"),
    COMPOUND_STRING("for the SharpRise Capital"),
    COMPOUND_STRING("Kickstart Grant has been accepted."),
    COMPOUND_STRING("You’ve proven yourself as one of"),
    COMPOUND_STRING("the brightest upcoming Pokémon"),
    COMPOUND_STRING("Trainers, and we can’t wait to help"),
    COMPOUND_STRING("accelerate your journey!"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("As a grant recipient, here’s what"),
    COMPOUND_STRING("you can look forward to:"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ An all-expenses-paid trip to the"),
    COMPOUND_STRING("Resido region this September"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ Competing in the first-ever"),
    COMPOUND_STRING("season of the SharpRise Capital"),
    COMPOUND_STRING("Pokémon League (powered by"),
    COMPOUND_STRING("Presto)"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("▶ Exclusive perks like housing, a"),
    COMPOUND_STRING("stipend, and top-tier swag to"),
    COMPOUND_STRING("support you on your adventure"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("To finalize your spot, please sign"),
    COMPOUND_STRING("the attached documents and return"),
    COMPOUND_STRING("them to us by April 17, 2019."),
    COMPOUND_STRING(""),
    COMPOUND_STRING("We’re pumped to see what you’ll"),
    COMPOUND_STRING("accomplish!"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("Best,"),
    COMPOUND_STRING(""),
    COMPOUND_STRING("The SharpRise Capital Team"),
};

static void ShowEmailText(void)
{
    enum AcceptWindows windowId = ACCEPT_WINDOW_EMAIL;
    bool32 isDevMode = GetDevMode();
    u32 fontId = FONT_ACCEPT_EMAIL;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterHeight = GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT);
    u32 x = isDevMode ? 2 : 4;
    u32 y = isDevMode ? 6 : 0;
    u32 startingLine = GetEmailPosition();
    u32 maxLines = GetMaxLines(isDevMode);
    const u8 *color = sAcceptWindowFontColors[ACCEPT_FONT_COLOR_BLACK];

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_WHITE));

    for (u32 lineIndex = 0; lineIndex < (maxLines - 1); lineIndex++)
    {
        if (isDevMode)
            StringCopy(gStringVar4,sTextDevMessage[startingLine + lineIndex]);
        else
            StringExpandPlaceholders(gStringVar4,sTextEmail[startingLine + lineIndex]);
        AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
        y+= letterHeight;

        if (StringLength(gStringVar4) == 0)
            y+= lineSpacing;
    }
    CopyWindowToVram(windowId, COPYWIN_GFX);
    PrintAcceptHelpBar();
}

static void ResetEmailPosition(void)
{
    sAcceptState->emailPosition = 0;
}

static u32 GetEmailPosition(void)
{
    return sAcceptState->emailPosition;
}

static bool32 ChangeEmailPosition(s32 delta)
{
    u32 currentLine = GetEmailPosition();
    u32 newLine = delta + currentLine;
    u32 finalLine = GetFinalEmailLine();

    if (newLine < 0)
    {
        newLine = 0;
        return FALSE;
    }

    if (newLine > finalLine)
    {
        newLine = finalLine;
        return FALSE;
    }

    sAcceptState->emailPosition = newLine;
    return TRUE;
}

static bool32 IsAtEndOfEmail(void)
{
    return (GetEmailPosition() == GetFinalEmailLine());
}

static u32 GetMaxLines(bool32 isDevMode)
{
    return isDevMode ? MAX_DEV_LINES : MAX_EMAIL_LINES;
}

static u32 GetFinalEmailLine(void)
{
    bool32 isDevMode = GetDevMode();
    u32 maxLines = GetMaxLines(isDevMode);

    if (GetDevMode())
        return (ARRAY_COUNT(sTextDevMessage) - (maxLines - 1));
    else
        return (ARRAY_COUNT(sTextEmail) - (maxLines - 1));
}

static void Accept_PrintScrollbar(void)
{
    u32 spriteId;
    u32 y = CalculateScrollbarYPosition();
    u32 x = 237;
    u16 TileTag = ACCEPT_SPRITE_SCROLLBAR;

    if (GetDevMode())
        return;

    Accept_LoadScrollbarSprite();
    spriteId = CreateMenuSprite(x,y,TileTag, SpriteCallback_Scrollbar);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(8x8);
    gSprites[spriteId].oam.size = SPRITE_SIZE(8x8);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 2;
}

static void SpriteCallback_Scrollbar(struct Sprite* sprite)
{
    sprite->invisible = FALSE;
    sprite->y = CalculateScrollbarYPosition();
}

static u32 CalculateScrollbarYPosition(void)
{
    u32 currentLine = GetEmailPosition();
    u32 finalLine = GetFinalEmailLine();

    if (currentLine == 0)
        return (MIN_ACCEPT_SCROLLBAR_Y);
    else if (currentLine == finalLine)
        return (MIN_ACCEPT_SCROLLBAR_Y + MOVEABLE_AREA_ACCEPT_SCROLLBAR);
    else
        return MIN_ACCEPT_SCROLLBAR_Y + ((currentLine* 100 / finalLine) * MOVEABLE_AREA_ACCEPT_SCROLLBAR / 100);

    return MIN_ACCEPT_SCROLLBAR_Y;
}

static void Accept_LoadScrollbarSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_AcceptScrollbar =
    {
        acceptScrollbar,
        (8*8),
        ACCEPT_SPRITE_SCROLLBAR,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_AcceptScrollbar);
    LoadSpritePalette(&sAcceptInterfaceSpritePalette);
}

static void BufferHelpBarText(u8* dest)
{
    u32 line = GetEmailPosition();
    u32 finalLine = GetFinalEmailLine();
    if (line == 0)
        StringCopy(dest,COMPOUND_STRING("{A_BUTTON} Next {START_BUTTON} Skip"));
    else if (line == finalLine)
        StringCopy(dest,COMPOUND_STRING("{A_BUTTON} Start Adventure {B_BUTTON} Previous {START_BUTTON} Skip"));
    else
        StringCopy(dest,COMPOUND_STRING("{A_BUTTON} Next {B_BUTTON} Previous {START_BUTTON} Skip"));
}

static void PrintAcceptHelpBar(void)
{
    enum AcceptWindows windowId = ACCEPT_WINDOW_HELPBAR;
    u32 fontId = FONT_ACCEPT_HELP_BAR;
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sAcceptWindowFontColors[ACCEPT_FONT_COLOR_WHITE];
    u32 bgColor = (GetDevMode()) ? TEXT_COLOR_TRANSPARENT : TEXT_COLOR_DARK_GRAY;
    u32 x = 4;
    u32 y = 1;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(bgColor));
    BufferHelpBarText(gStringVar4);
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar4);
    // PSF TODO following two lines will actually show the help bar, but some pixels are broken when in DevMode
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static u32 GetDevMode(void)
{
    return sAcceptState->devMode;
}

static void SetDevMode(bool32 status)
{
    sAcceptState->devMode= status;
}
