#include "global.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "item_use.h"
#include "line_break.h"
#include "list_menu.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "options_visual.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "trig.h"
#include "tv.h"
#include "ui_adventure_guide.h"
#include "ui_options_menu.h"
#include "ui_pokedex.h"
#include "constants/field_weather.h"
#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/ui_adventure_guide.h"
#include "data/ui_adventure_guide.h"

//==========DEFINES==========//
struct MenuResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 *bgTilemapBuffers[BG_ADVENTURE_GUIDE_COUNT];
    u8 cursorNumX;
    u8 cursorNumY;
    u8 yFirstItem;
    bool8 isWindowOpen;
    u8 windowInfoNum;
    bool8 singleGuideMode;
    u8 spriteIDs[NUM_ADVENTURE_GUIDE_SPRITES];
};

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;

//==========STATIC=DEFINES==========//
static void Task_OpenAdventureGuideFromScript(u8 taskId);
static void Menu_RunSetup(void);
static void CreateListArrows(void);
static void CreatePageArrows(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void HandleAndShowBgs(void);
static void SetBackgroundTransparency(void);
static void SetScheduleBgs(u32 backgroundId);
static bool8 AllocZeroedTilemapBuffers(void);
static void Menu_FadeAndBail(void);
static void Menu_LoadGraphics(void);
static void Menu_InitWindows(void);
static void AdventureGuide_PrintAppTitle(void); // DONE
static void FillBgWithTile(u32 bg, const void *src);
static void LoadTilesToBg(u32 backgroundId);
static void AdventureGuide_PrintGuideText(void);
static void AdventureGuide_PrintWindowTitle(u32 optionNum);
static bool32 AdventureGuide_IsPopulated(enum AdventureGuideList guide);
static void AdventureGuide_PrintDescription(u32 optionNum);
static void AdventureGuide_PrintCursor(void);
static void AdventureGuide_PrintGuideList(void);
static const u8* AdventureGuide_GetGuideTitle(enum AdventureGuideList guide);
static void AdventureGuide_PrintHelpbar(void);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static bool32 AdventureGuide_GetSingleGuideMode(void);
static void AdventureGuide_LeaveAdventureGuide(u8 taskId);
static void AdventureGuide_HandleMainMenuInput(u8 taskId, u32 optionNum);
static void AdventureGuide_HandleOnlyPageInput(u8 taskId, u32 optionNum);
static void AdventureGuide_HandleLastPageInput(u8 taskId, u32 optionNum);
static void AdventureGuide_HandleFirstPageInput(u8 taskId, u32 optionNum);
static void AdventureGuide_HandleAnyPageInput(u8 taskId, u32 optionNum);
static void AdventureGuide_LoadBackgroundPalette(void);
static u8 AdventureGuide_GetNumberPages(void);

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[] =
{
    {
        .bg = BG0_ADVENTURE_GUIDE_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = BG1_ADVENTURE_GUIDE_LIST,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .priority = 1
    },
    {
        .bg = BG2_ADVENTURE_LIST_BOXES,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
    {
        .bg = BG3_ADVENTURE_LIST_GENERIC,
        .charBaseIndex = 3,
        .mapBaseIndex = 28,
        .priority = 3,
    }
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [WINDOW_ADVENTURE_GUIDE_HEADER] =
    {
        .bg = BG0_ADVENTURE_GUIDE_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 2,
        .width = 26,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [WINDOW_ADVENTURE_GUIDE_DESC] =
    {
        .bg = BG0_ADVENTURE_GUIDE_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 4,
        .width = 26,
        .height = 14,
        .paletteNum = 15,
        .baseBlock = 1 + (26 * 2),
    },
    [WINDOW_ADVENTURE_LIST_HEADER] =
    {
        .bg = BG1_ADVENTURE_GUIDE_LIST,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1 + (26 * 2) + (26 * 14),
    },
    [WINDOW_ADVENTURE_LIST] =
    {
        .bg = BG1_ADVENTURE_GUIDE_LIST,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 30,
        .height = 16,
        .paletteNum = 15,
        .baseBlock = 1 + (26 * 2) + (26 * 14) + (30 * 2),
    },
    [WINDOW_ADVENTURE_LIST_FOOTER] =
    {
        .bg = BG1_ADVENTURE_GUIDE_LIST,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1 + (26 * 2) + (26 * 14) + (30 * 2) + (30 * 16),
    },
    DUMMY_WIN_TEMPLATE,
};

static const u8 sCursor[]         = INCBIN_U8("graphics/ui_menus/adventure_guide/cursor.4bpp");
static const u32 gAdventureGuideUpArrow_Gfx[]    = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_up.4bpp.smol");
static const u32 gAdventureGuideDownArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_down.4bpp.smol");
static const u32 gAdventureGuideLeftArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_left.4bpp.smol");
static const u32 gAdventureGuideRightArrow_Gfx[] = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_right.4bpp.smol");

static const u32 sListBgTiles[]   = INCBIN_U32("graphics/ui_menus/adventure_guide/listBg.4bpp.smol");
static const u32 sListBgTilemap[] = INCBIN_U32("graphics/ui_menus/adventure_guide/listBg.bin.smolTM");

static const u32 sMenuBgTiles[]   = INCBIN_U32("graphics/ui_menus/adventure_guide/menuBg.4bpp.smol");
static const u32 sMenuBgTilemap[] = INCBIN_U32("graphics/ui_menus/adventure_guide/menuBg.bin.smolTM");

static const u16 sMenuPalette_Red[]      = INCBIN_U16("graphics/ui_menus/options_menu/palettes/red.gbapal");
static const u16 sMenuPalette_Black[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/black.gbapal");
static const u16 sMenuPalette_Green[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/green.gbapal");
static const u16 sMenuPalette_Blue[]     = INCBIN_U16("graphics/ui_menus/options_menu/palettes/blue.gbapal");
static const u16 sMenuPalette_Platinum[] = INCBIN_U16("graphics/ui_menus/options_menu/palettes/platinum.gbapal");
static const u16 sMenuPalette_Scarlet[]  = INCBIN_U16("graphics/ui_menus/options_menu/palettes/scarlet.gbapal");
static const u16 sMenuPalette_Violet[]   = INCBIN_U16("graphics/ui_menus/options_menu/palettes/violet.gbapal");
static const u16 sMenuPalette_White[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/white.gbapal");
static const u16 sMenuPalette_Yellow[]   = INCBIN_U16("graphics/ui_menus/options_menu/palettes/yellow.gbapal");
static const u16 adventurePalettesText[] = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/text.gbapal");
static const u8 sBlackTile[32] =
{
    [0 ... 31] = (PLTT_SIZE_4BPP + 2)
};

static const struct SpritePalette sAdventureSpritePalette =
{
    .data = sMenuPalette_Platinum,
    .tag = PAL_ADVENTURE_UI_SPRITES,
};

static const u8 sMenuWindowFontColors[][3] =
{
    [FONT_COLOR_ADVENTURE_BLACK]   = {TEXT_COLOR_TRANSPARENT,  3,  TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_WHITE]   = {TEXT_COLOR_TRANSPARENT,  1,  TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_WHITE_2] = {TEXT_COLOR_TRANSPARENT,  PAL_ID_ADVENTURE_LIST_TEXT,  TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_RED]     = {TEXT_COLOR_TRANSPARENT,  14, TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_BLUE]    = {TEXT_COLOR_TRANSPARENT,  4,  TEXT_COLOR_TRANSPARENT},
};

//==========FUNCTIONS==========//
// UI loader template
void CB2_AdventureGuideFromStartMenu(void)
{
    VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN, NUM_GUIDES);
    Adventure_Guide_Init(CB2_StartMenu_ReturnToUI);
}

void OpenAdventureGuideFromScript(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    PlayRainStoppingSoundEffect();
    CleanupOverworldWindowsAndTilemaps();
    CreateTask(Task_OpenAdventureGuideFromScript,0);
}

static void Task_OpenAdventureGuideFromScript(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    Adventure_Guide_Init(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    DestroyTask(taskId);
}

// This is our main initialization function if you want to call the menu from elsewhere
void Adventure_Guide_Init(MainCallback callback)
{
    u16 guideToOpen;
    if ((sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sMenuDataPtr->savedCallback = callback;
    sMenuDataPtr->yFirstItem = 0;
    sMenuDataPtr->windowInfoNum = 0;

    guideToOpen = VarGet(VAR_ADVENTURE_GUIDE_TO_OPEN);

    if(guideToOpen >= NUM_GUIDES)
    {
        sMenuDataPtr->isWindowOpen    = FALSE;
        sMenuDataPtr->singleGuideMode = FALSE;
        sMenuDataPtr->cursorNumY      = 0;
        sMenuDataPtr->cursorNumX      = 0;
    }
    else
    {
        gSaveBlock3Ptr->hasSeenGuide[guideToOpen] = TRUE;
        sMenuDataPtr->isWindowOpen    = TRUE;
        sMenuDataPtr->singleGuideMode = TRUE;
        sMenuDataPtr->cursorNumY = guideToOpen / MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW;
        sMenuDataPtr->cursorNumX = guideToOpen % MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW;
    }

    SetMainCallback2(Menu_RunSetup);
}

static void Menu_RunSetup(void)
{
    while (1)
    {
        if (Menu_DoGfxSetup() == TRUE)
            break;
    }
}

//Arrows
static void SpriteCallback_AdventureGuide_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if(sMenuDataPtr->cursorNumY == 0 || sMenuDataPtr->singleGuideMode || sMenuDataPtr->isWindowOpen)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;

}

static void SpriteCallback_AdventureGuide_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if(sMenuDataPtr->cursorNumY == MAX_ADVENTURE_GUIDE_ROWS - 1 || sMenuDataPtr->singleGuideMode || sMenuDataPtr->isWindowOpen)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

static void SpriteCallback_AdventureGuide_LeftArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;
    u32 numberPages = AdventureGuide_GetNumberPages();

    if(sMenuDataPtr->windowInfoNum != 0 && (sMenuDataPtr->singleGuideMode || sMenuDataPtr->isWindowOpen))
        sprite->invisible = FALSE;
    else
        sprite->invisible = TRUE;


    if (numberPages == 1)
        sprite->invisible = TRUE;
}

static void SpriteCallback_AdventureGuide_RightArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;
    u32 numberPages = AdventureGuide_GetNumberPages();

    if(sMenuDataPtr->windowInfoNum < numberPages - 1 && (sMenuDataPtr->singleGuideMode || sMenuDataPtr->isWindowOpen))
        sprite->invisible = FALSE;
    else
        sprite->invisible = TRUE;

    if (numberPages == 1)
        sprite->invisible = TRUE;
}

static void CreateListArrows(void)
{
    u32 arrowIds[] =
    {
        SPRITE_ADVENTURE_UP_ARROW,
        SPRITE_ADVENTURE_DOWN_ARROW,
    };

    for (u32 arrowCount = 0; arrowCount < ARRAY_COUNT(arrowIds); arrowCount++)
    {
        u32 arrowId = arrowIds[arrowCount];
        const u32 *data;

        if (arrowCount == 0)
            data = gAdventureGuideUpArrow_Gfx;
        else
            data = gAdventureGuideDownArrow_Gfx;

        struct CompressedSpriteSheet sSpriteSheet_AdventureGuideArrow =
        {
            data,
            2048,
            arrowId,
        };
        struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

        TempSpriteTemplate.tileTag = arrowId;
        TempSpriteTemplate.callback = (arrowId == SPRITE_ADVENTURE_UP_ARROW) ? SpriteCallback_AdventureGuide_UpArrow : SpriteCallback_AdventureGuide_DownArrow;
        TempSpriteTemplate.paletteTag = PAL_ADVENTURE_UI_SPRITES;

        LoadCompressedSpriteSheet(&sSpriteSheet_AdventureGuideArrow);
        LoadSpritePalette(&sAdventureSpritePalette);
        u32 y = (arrowId == SPRITE_ADVENTURE_UP_ARROW) ? ADVENTURE_UP_ARROW_Y : ADVENTURE_DOWN_ARROW_Y;
        u32 spriteId = CreateSprite(&TempSpriteTemplate, ADVENTURE_UP_ARROW_X, y, 0);
        sMenuDataPtr->spriteIDs[arrowId] = spriteId;

        gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x16);
        gSprites[spriteId].oam.size = SPRITE_SIZE(32x16);
        gSprites[spriteId].oam.priority = 0;
        gSprites[spriteId].invisible = FALSE;

        if (arrowId == SPRITE_ADVENTURE_DOWN_ARROW)
            gSprites[spriteId].vFlip = TRUE;

    }
}

static void CreatePageArrows(void)
{
    u32 arrowIds[2] = {SPRITE_ADVENTURE_LEFT_ARROW, SPRITE_ADVENTURE_RIGHT_ARROW};
    for (u32 arrowCount = 0; arrowCount < ARRAY_COUNT(arrowIds); arrowCount++)
    {
        u32 arrowId = arrowIds[arrowCount];
        const u32 *data;
        if (arrowCount == 0)
            data = gAdventureGuideLeftArrow_Gfx;
        else
            data = gAdventureGuideRightArrow_Gfx;

        struct CompressedSpriteSheet sSpriteSheet_AdventureGuideArrow =
        {
            data,
            2048,
            ADVENTURE_SPRITE_TAG + arrowId,
        };
        struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

        TempSpriteTemplate.tileTag = ADVENTURE_SPRITE_TAG + arrowId;
        TempSpriteTemplate.callback = (arrowId == SPRITE_ADVENTURE_LEFT_ARROW) ? SpriteCallback_AdventureGuide_LeftArrow : SpriteCallback_AdventureGuide_RightArrow;
        TempSpriteTemplate.paletteTag = PAL_ADVENTURE_UI_SPRITES;

        LoadCompressedSpriteSheet(&sSpriteSheet_AdventureGuideArrow);
        LoadSpritePalette(&sAdventureSpritePalette);
        u32 x = (arrowId == SPRITE_ADVENTURE_LEFT_ARROW) ? ADVENTURE_LEFT_ARROW_X: ADVENTURE_RIGHT_ARROW_X;
        u32 spriteId = CreateSprite(&TempSpriteTemplate, x, ADVENTURE_LEFT_ARROW_Y, 0);
        sMenuDataPtr->spriteIDs[arrowId] = spriteId;

        gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
        gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
        gSprites[spriteId].oam.priority = 0;
        gSprites[spriteId].invisible = FALSE;

        if (arrowId == SPRITE_ADVENTURE_RIGHT_ARROW)
            gSprites[spriteId].hFlip = TRUE;

    }
}

static void Menu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Menu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static bool8 Menu_DoGfxSetup(void)
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
            FreeSpritePalettesResetSpriteData();
            ResetTasks();
            gMain.state++;
            break;
        case 2:
            if (Menu_InitBgs())
            {
                Menu_LoadGraphics();
                gMain.state++;
            }
            else
            {
                BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                Menu_FadeAndBail();
                return TRUE;
            }
            break;
        case 3:
            Menu_InitWindows();
            gMain.state++;
            break;
        case 4:
            AdventureGuide_PrintAppTitle();

            if ((sMenuDataPtr->isWindowOpen == TRUE) || (sMenuDataPtr->singleGuideMode == TRUE))
            {
                AdventureGuide_PrintGuideText();
            }
            else
            {
                AdventureGuide_PrintGuideList();
            }

            AdventureGuide_PrintHelpbar();
            gMain.state++;
            break;
        case 5:
            CreateTask(Task_MenuWaitFadeIn, 0);
            CreateListArrows();
            CreatePageArrows();
            BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
            gMain.state++;
            break;
        case 6:
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
            gMain.state++;
            break;
        case 7:
            SetVBlankCallback(Menu_VBlankCB);
            SetMainCallback2(Menu_MainCB);
            return TRUE;
    }
    return FALSE;
}

static void Menu_FreeResources(void)
{
    if (sMenuDataPtr != NULL)
        Free(sMenuDataPtr);

    FreeBackgrounds();
    FreeAllWindowBuffers();
}

static void Task_MenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMenuDataPtr->savedCallback);
        Menu_FreeResources();
        DestroyTask(taskId);
    }
}

static void Menu_FadeAndBail(void)
{
    CreateTask(Task_MenuWaitFadeAndBail, 0);
    SetVBlankCallback(Menu_VBlankCB);
    SetMainCallback2(Menu_MainCB);
}

static bool8 AllocZeroedTilemapBuffers(void)
{
    for (enum AdventureBackgrounds backgroundId = 0; backgroundId < BG_ADVENTURE_GUIDE_COUNT; backgroundId++)
    {
        sMenuDataPtr->bgTilemapBuffers[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sMenuDataPtr->bgTilemapBuffers[backgroundId] == NULL)
            return FALSE;

        memset(sMenuDataPtr->bgTilemapBuffers[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, BG_ADVENTURE_GUIDE_COUNT);

    for (enum AdventureBackgrounds backgroundId = 0; backgroundId < BG_ADVENTURE_GUIDE_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT1_BG2);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
    ShowBg(BG2_ADVENTURE_LIST_BOXES);
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sMenuDataPtr->bgTilemapBuffers[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static bool8 Menu_InitBgs(void)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs();

    return TRUE;
}

static const u32* const sAdventureTilesLUT[] =
{
    [BG0_ADVENTURE_GUIDE_TEXT] = NULL,
    [BG1_ADVENTURE_GUIDE_LIST] = NULL,
    [BG2_ADVENTURE_LIST_BOXES] = sListBgTiles,
    [BG3_ADVENTURE_LIST_GENERIC] = sMenuBgTiles,
};

static const u32* const sAdventureTilemapLUT[] =
{
    [BG0_ADVENTURE_GUIDE_TEXT] = NULL,
    [BG1_ADVENTURE_GUIDE_LIST] = NULL,
    [BG2_ADVENTURE_LIST_BOXES] = sListBgTilemap,
    [BG3_ADVENTURE_LIST_GENERIC] = sMenuBgTilemap,
};

static bool8 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sAdventureTilesLUT[backgroundId] == NULL || sAdventureTilemapLUT[backgroundId] == NULL);
}

static void Menu_LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum AdventureBackgrounds backgroundId = BG0_ADVENTURE_GUIDE_TEXT; backgroundId < BG_ADVENTURE_GUIDE_COUNT; backgroundId++)
    {
        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sAdventureTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sAdventureTilemapLUT[backgroundId],0,0);
    }
    AdventureGuide_LoadBackgroundPalette();
}

static const u16* const sAdventurePalettesLUT[] =
{
    [VISUAL_OPTION_COLOR_RED] =      sMenuPalette_Red,
    [VISUAL_OPTION_COLOR_GREEN] =    sMenuPalette_Green,
    [VISUAL_OPTION_COLOR_BLUE] =     sMenuPalette_Blue,
    [VISUAL_OPTION_COLOR_YELLOW] =   sMenuPalette_Yellow,
    [VISUAL_OPTION_COLOR_BLACK] =    sMenuPalette_Black,
    [VISUAL_OPTION_COLOR_WHITE] =    sMenuPalette_White,
    [VISUAL_OPTION_COLOR_PLATINUM] = sMenuPalette_Platinum,
    [VISUAL_OPTION_COLOR_SCARLET] =  sMenuPalette_Scarlet,
    [VISUAL_OPTION_COLOR_VIOLET] =   sMenuPalette_Violet,
    [VISUAL_OPTION_COLOR_CUSTOM] =   sMenuPalette_Platinum,
    [VISUAL_OPTION_COLOR_COUNT] =    sMenuPalette_Platinum,
};

static void AdventureGuide_LoadBackgroundPalette(void)
{
    LoadPalette(sAdventurePalettesLUT[GetVisualColor()], PAL_SLOT_ADVENTURE_UI, PLTT_SIZE_4BPP);
    LoadPalette(adventurePalettesText,PAL_SLOT_ADVENTURE_TEXT,PLTT_SIZE_4BPP);
}

static void ClearAllWindows(void)
{
    for (enum AdventureWindows windowId = 0; windowId < WINDOW_ADVENTURE_COUNT; windowId++)
        ClearWindowCopyToVram(windowId);
}

static void Menu_InitWindows(void)
{
    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
    ClearAllWindows();
    ScheduleBgCopyTilemapToVram(2);
}
static void AdventureGuide_PrintAppTitle(void)
{
    u32 x = 4;
    u32 y = 0;
    u32 font = FONT_NORMAL;
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    const u8 *str = COMPOUND_STRING("Adventure Guide");
    enum AdventureWindows windowId = WINDOW_ADVENTURE_LIST_HEADER;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], TEXT_SKIP_DRAW, str);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void AdventureGuide_PrintGuideText(void)
{
    u32 optionNum = (sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) + sMenuDataPtr->cursorNumX;

    FillBgWithTile(BG2_ADVENTURE_LIST_BOXES,sBlackTile);
    AdventureGuide_PrintWindowTitle(optionNum);
    AdventureGuide_PrintDescription(optionNum);
    AdventureGuide_PrintHelpbar();

    for (enum AdventureWindows windowId = WINDOW_ADVENTURE_GUIDE_HEADER; windowId < WINDOW_ADVENTURE_LIST_HEADER; windowId++)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

static bool32 AdventureGuide_IsPopulated(enum AdventureGuideList guide)
{
    return (AdventureGuideInfo[guide].isAdvancedGuide > 0);
}

static void AdventureGuide_PrintWindowTitle(u32 optionNum)
{
    u32 x = 4;
    u32 y = 0;
    u32 font = FONT_NORMAL;
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    enum AdventureWindows windowId = WINDOW_ADVENTURE_GUIDE_HEADER;
    u32 currentPageNumber = sMenuDataPtr->windowInfoNum + 1;
    u32 finalPageNumber = AdventureGuide_GetNumberPages();

    FillWindowPixelBuffer(windowId, PIXEL_FILL(5));

    ConvertIntToDecimalStringN(gStringVar1, currentPageNumber, STR_CONV_MODE_RIGHT_ALIGN, CountDigits(currentPageNumber));
    ConvertIntToDecimalStringN(gStringVar2, finalPageNumber, STR_CONV_MODE_RIGHT_ALIGN, CountDigits(finalPageNumber));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING(" ({STR_VAR_1}/{STR_VAR_2})"));

    StringCopy(gStringVar2,AdventureGuide_GetGuideTitle(optionNum));

    u8* end = StringAppend(gStringVar2,gStringVar4);
    PrependFontIdToFit(gStringVar2, end, font, ADVENTURE_GUIDE_INFO_WIDTH);
    AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], TEXT_SKIP_DRAW, gStringVar2);
}

static void AdventureGuide_PrintDescription(u32 optionNum)
{
    u32 fontId = FONT_SMALL_NARROW;
    u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 x = 16;
    u32 y = 8;
    enum AdventureWindows windowId = WINDOW_ADVENTURE_GUIDE_DESC;
    u8 *end;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    if (AdventureGuide_IsPopulated(optionNum) == FALSE)
    {
        end = StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("Example Description"));
    }
    else
    {
        end = StringExpandPlaceholders(gStringVar3, AdventureGuideInfo[optionNum].description[sMenuDataPtr->windowInfoNum]);
    }

    BreakStringAutomatic(gStringVar3, ADVENTURE_GUIDE_INFO_WIDTH, ADVENTURE_GUIDE_LINES, fontId, HIDE_SCROLL_PROMPT);
    PrependFontIdToFit(gStringVar3, end, fontId, ADVENTURE_GUIDE_INFO_WIDTH);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_COLOR_ADVENTURE_BLACK], TEXT_SKIP_DRAW, gStringVar3);
}

static void AdventureGuide_PrintCursor(void)
{
    enum AdventureWindows windowId = WINDOW_ADVENTURE_LIST;
    u32 x = 0 + (sMenuDataPtr->cursorNumX * 120);
    u32 y = (sMenuDataPtr->cursorNumY - sMenuDataPtr->yFirstItem) * 16;

    BlitBitmapToWindow(windowId, sCursor, x, y,  120, 16);
}

static const u8 sText_Unknown[]          = _("???");
static const u8 sText_Example[]          = _("Example Title");

static const u8* AdventureGuide_GetGuideTitle(enum AdventureGuideList guide)
{
    bool32 unlocked = gSaveBlock3Ptr->hasSeenGuide[guide] == TRUE;
    bool32 populated = AdventureGuide_IsPopulated(guide);

    if ((unlocked == TRUE) && (populated == TRUE))
        return AdventureGuideInfo[guide].title;
    else if (unlocked == FALSE)
        return sText_Unknown;
    else if (populated == FALSE)
        return sText_Example;
    else
        return sText_Unknown;
}

static void AdventureGuide_PrintGuideList(void)
{
    u32 font = FONT_NORMAL;
    enum AdventureWindows windowId = WINDOW_ADVENTURE_LIST;
    // PSF TODO use Crim font here
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE_2;

    FillPalette(ADVENTURE_CURSOR_COLOR,PAL_INDEX_CURSOR,2);
    FillPalette(ADVENTURE_LIST_TEXT_COLOR,PAL_INDEX_LIST_TEXT,2);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    LoadTilesToBg(BG2_ADVENTURE_LIST_BOXES);

    AdventureGuide_PrintCursor();

    for (u32 i = 0; i < MAX_ADVENTURE_GUIDE_ITEMS; i++)
    {
        u32 x = (((i % MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) * 15) * 8) + 4;
        u32 y = 1 + ((i / MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) * 16);
        u32 j = i + (sMenuDataPtr->yFirstItem * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW);
        AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], TEXT_SKIP_DRAW, AdventureGuide_GetGuideTitle(j));
    }

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void AdventureGuide_PrintHelpbar(void)
{
    u32 x = 4;
    u32 y = 1;
    u32 font = FONT_SMALL_NARROW;
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    u32 currentPageNumber = sMenuDataPtr->windowInfoNum + 1;
    u32 finalPageNumber = AdventureGuide_GetNumberPages();
    enum AdventureWindows windowId = WINDOW_ADVENTURE_LIST_FOOTER;

    bool32 isMainMenu = (!sMenuDataPtr->isWindowOpen && !sMenuDataPtr->singleGuideMode);
    bool32 isLastPage = ((currentPageNumber / finalPageNumber) == 1);
    bool32 isFirstPage = ((finalPageNumber != 1) && ((currentPageNumber == 1)));
    bool32 isOnlyPage = (finalPageNumber == 1);

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (isMainMenu)
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{A_BUTTON} View Guide {B_BUTTON} Return"));
    }
    else if (isLastPage && !isOnlyPage)
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{B_BUTTON} Previous Page {START_BUTTON} Return"));
    }
    else if (isFirstPage && !isOnlyPage)
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{A_BUTTON} Next Page {START_BUTTON} Return"));
    }
    if (isOnlyPage)
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{START_BUTTON} Return"));
    }
    else
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{A_BUTTON} Next Page {B_BUTTON} Previous Page {START_BUTTON} Return"));
    }

    AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar1);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

void Script_shouldSkipGuide(void)
{
    enum AdventureGuideList guide = VarGet(VAR_ADVENTURE_GUIDE_TO_OPEN);
    gSpecialVar_Result = (shouldSkipGuide(guide));
}

bool8 shouldSkipGuide(u8 guideNum){
    if(guideNum < NUM_GUIDES){
        if(gSaveBlock3Ptr->hasSeenGuide[guideNum] == TRUE)
            return TRUE;
        else
            gSaveBlock3Ptr->hasSeenGuide[guideNum] = TRUE;

        switch(gSaveBlock2Ptr->optionsGame[GAME_OPTIONS_SKIP_GUIDES]){
            case GAME_OPTION_GUIDE_SKIP_GENERAL:
                //Skip general guides only
                if(AdventureGuideInfo[guideNum].isAdvancedGuide != ADVENTURE_GUIDE_ADVANCED)
                    return TRUE;
                break;
            case GAME_OPTION_GUIDE_SKIP_ALL:
                return TRUE;
                break;
        }
        //Sets the guide to open
        VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN, guideNum);
        return FALSE;
    }
    else{
        //Sets the guide to open
        VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN, NUM_GUIDES);
        return FALSE;
    }
}

static void Task_MenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MenuMain;
}

static void Task_MenuTurnOff(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    Menu_FadeAndBail();
}


static void PressedUpButton_AdventureGuide(){
    u8 halfScreen      = MAX_ADVENTURE_GUIDE_ROWS_ON_SCREEN / 2;
    u8 finalhalfScreen = MAX_ADVENTURE_GUIDE_ROWS - halfScreen;

    if(MAX_ADVENTURE_GUIDE_ROWS_ON_SCREEN > MAX_ADVENTURE_GUIDE_ROWS){
        //Disables Scrolling if there are less moves than the screen can show
        if(sMenuDataPtr->cursorNumY == 0)
            sMenuDataPtr->cursorNumY = MAX_ADVENTURE_GUIDE_ROWS - 1;
        else
            sMenuDataPtr->cursorNumY--;

        sMenuDataPtr->yFirstItem = 0;
    }
    else{
        if(sMenuDataPtr->cursorNumY > halfScreen && sMenuDataPtr->cursorNumY <= finalhalfScreen ){
            //If you are in the last option go to the first one
            sMenuDataPtr->cursorNumY--;
            sMenuDataPtr->yFirstItem--;
        }
        else if(sMenuDataPtr->cursorNumY == 0){
            //If you are in the first option go to the last one
            sMenuDataPtr->cursorNumY = MAX_ADVENTURE_GUIDE_ROWS - 1;
            sMenuDataPtr->yFirstItem = MAX_ADVENTURE_GUIDE_ROWS - MAX_ADVENTURE_GUIDE_ROWS_ON_SCREEN; //10 - 8 = 2
        }
        else{
            sMenuDataPtr->cursorNumY--;
        }
    }
}

static void PressedDownButton_AdventureGuide(){
    u8 halfScreen      = MAX_ADVENTURE_GUIDE_ROWS_ON_SCREEN / 2; // 4
    u8 finalhalfScreen = MAX_ADVENTURE_GUIDE_ROWS - halfScreen;  // 10 - 4 = 6

    if(MAX_ADVENTURE_GUIDE_ROWS_ON_SCREEN > MAX_ADVENTURE_GUIDE_ROWS){
        //Disables Scrolling if there are less moves than the screen can show
        if(sMenuDataPtr->cursorNumY >= MAX_ADVENTURE_GUIDE_ROWS - 1)
            sMenuDataPtr->cursorNumY = 0;
        else
            sMenuDataPtr->cursorNumY++;

        sMenuDataPtr->yFirstItem = 0;
    }
    else{
        if(sMenuDataPtr->cursorNumY < halfScreen){
            //Check if your are below the first half of the screen
            sMenuDataPtr->cursorNumY++;
        }
        else if(sMenuDataPtr->cursorNumY >= (MAX_ADVENTURE_GUIDE_ROWS - 1)){
            //If you are in the last option go to the first one
            sMenuDataPtr->cursorNumY = 0;
            sMenuDataPtr->yFirstItem = 0;
        }
        else if(sMenuDataPtr->cursorNumY >= finalhalfScreen){
            sMenuDataPtr->cursorNumY++;
        }
        else{
            sMenuDataPtr->cursorNumY++;
            sMenuDataPtr->yFirstItem++;
        }
    }
}

static u8 AdventureGuide_GetNumberPages(void)
{
    u32 optionNum = sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW + sMenuDataPtr->cursorNumX;
    u32 numPages = 0;

    if (optionNum >= ARRAY_COUNT(AdventureGuideInfo))
        return 1;

    if (AdventureGuide_IsPopulated(optionNum) == FALSE)
        return 1;

    for (numPages = 0; numPages < MAX_GUIDE_PAGES; numPages++)
    {
        if (AdventureGuideInfo[optionNum].description[numPages] == NULL ||
                AdventureGuideInfo[optionNum].description[numPages][0] == '\0')
        {
            break;
        }
    }

    return (numPages == 0) ? 1 : numPages;
}

/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    u32 optionNum = (sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) + sMenuDataPtr->cursorNumX;
    u32 currentPageNumber = sMenuDataPtr->windowInfoNum + 1;
    u32 finalPageNumber = AdventureGuide_GetNumberPages();

    bool32 isMainMenu = (!sMenuDataPtr->isWindowOpen && !sMenuDataPtr->singleGuideMode);
    bool32 isLastPage = ((currentPageNumber / finalPageNumber) == 1);
    bool32 isFirstPage = ((finalPageNumber != 1) && ((currentPageNumber == 1)));
    bool32 isOnlyPage = (finalPageNumber == 1);

    if (isMainMenu)
    {
        AdventureGuide_HandleMainMenuInput(taskId, optionNum);
    }
    else if (isLastPage && !isOnlyPage)
    {
        AdventureGuide_HandleLastPageInput(taskId, optionNum);
        return;
    }
    else if (isFirstPage && !isOnlyPage)
    {
        AdventureGuide_HandleFirstPageInput(taskId, optionNum);
        return;
    }
    else if (isOnlyPage)
    {
        AdventureGuide_HandleOnlyPageInput(taskId, optionNum);
        return;
    }
    else
    {
        AdventureGuide_HandleAnyPageInput(taskId, optionNum);
        return;
    }
}

static bool32 AdventureGuide_GetSingleGuideMode(void)
{
    return sMenuDataPtr->singleGuideMode;
}

static void AdventureGuide_LeaveAdventureGuide(u8 taskId)
{
    PlaySE(SE_PC_OFF);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_MenuTurnOff;
}

static void FillBgWithTile(u32 bg, const void *src)
{
    LoadBgTiles(BG2_ADVENTURE_LIST_BOXES, sBlackTile, sizeof(sBlackTile), 0);
    FillBgTilemapBufferRect(BG2_ADVENTURE_LIST_BOXES, 0, 0, 0, DISPLAY_TILE_WIDTH, DISPLAY_TILE_HEIGHT, PAL_ID_ADVENTURE_UI);

    FillPalette(ADVENTURE_DARK_CURSOR_COLOR,PAL_INDEX_CURSOR,2);
    FillPalette(ADVENTURE_DARK_LIST_TEXT_COLOR,PAL_INDEX_LIST_TEXT,2);

    CopyBgTilemapBufferToVram(BG2_ADVENTURE_LIST_BOXES);
}

static void LoadTilesToBg(u32 backgroundId)
{
    DecompressAndLoadBgGfxUsingHeap(backgroundId, sAdventureTilesLUT[backgroundId], 0, 0, 0);
    CopyToBgTilemapBuffer(backgroundId, sAdventureTilemapLUT[backgroundId],0,0);
    CopyBgTilemapBufferToVram(backgroundId);
}

static void AdventureGuide_HandleMainMenuInput(u8 taskId, u32 optionNum)
{
    bool32 unlocked = (gSaveBlock3Ptr->hasSeenGuide[optionNum] == TRUE);

    if (JOY_NEW(A_BUTTON) && unlocked)
    {
        sMenuDataPtr->isWindowOpen = !sMenuDataPtr->isWindowOpen;
        AdventureGuide_PrintGuideText();
        ShowBg(0);
    }

    if (JOY_NEW(B_BUTTON))
    {
        AdventureGuide_LeaveAdventureGuide(taskId);
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        PressedDownButton_AdventureGuide();
        AdventureGuide_PrintGuideList();
    }

    if (JOY_NEW(DPAD_UP))
    {
        PressedUpButton_AdventureGuide();
        AdventureGuide_PrintGuideList();
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        if(sMenuDataPtr->cursorNumX == 0)
            sMenuDataPtr->cursorNumX = MAX_CURSOR_NUM_X - 1;
        else
            sMenuDataPtr->cursorNumX--;

        AdventureGuide_PrintGuideList();
    }

    if (JOY_NEW(DPAD_RIGHT))
    {
        if(sMenuDataPtr->cursorNumX == MAX_CURSOR_NUM_X - 1)
            sMenuDataPtr->cursorNumX = 0;
        else
            sMenuDataPtr->cursorNumX++;

        AdventureGuide_PrintGuideList();
    }
}

static void AdventureGuide_LeaveGuideReturnToMenu(void)
{
    sMenuDataPtr->isWindowOpen = !sMenuDataPtr->isWindowOpen;
    sMenuDataPtr->windowInfoNum = 0;
    HideBg(0);
    AdventureGuide_PrintAppTitle();
    AdventureGuide_PrintGuideList();
    AdventureGuide_PrintHelpbar();
    //ClearAllWindows();
    //Menu_ChangeTransparentTilemap();
}

static void AdventureGuide_IncrementGuidePage(void)
{
    sMenuDataPtr->windowInfoNum++;
    AdventureGuide_PrintGuideText();
}

static void AdventureGuide_DecrementGuidePage(void)
{
    sMenuDataPtr->windowInfoNum--;
    AdventureGuide_PrintGuideText();
}

static void AdventureGuide_HandleOnlyPageInput(u8 taskId, u32 optionNum)
{
    if (JOY_NEW(A_BUTTON) || (JOY_NEW(DPAD_RIGHT)) || (JOY_NEW(START_BUTTON)) || (JOY_NEW(B_BUTTON)) || (JOY_NEW(DPAD_LEFT)))
    {
        if (AdventureGuide_GetSingleGuideMode())
            AdventureGuide_LeaveAdventureGuide(taskId);
        else
            AdventureGuide_LeaveGuideReturnToMenu();
    }
}

static void AdventureGuide_HandleLastPageInput(u8 taskId, u32 optionNum)
{
    if (JOY_NEW(A_BUTTON) || (JOY_NEW(DPAD_RIGHT)) || (JOY_NEW(START_BUTTON)))
    {
        if (AdventureGuide_GetSingleGuideMode())
            AdventureGuide_LeaveAdventureGuide(taskId);
        else
            AdventureGuide_LeaveGuideReturnToMenu();
    }
    if (JOY_NEW(B_BUTTON) || (JOY_NEW(DPAD_LEFT)))
    {
        AdventureGuide_DecrementGuidePage();
    }
}

static void AdventureGuide_HandleFirstPageInput(u8 taskId, u32 optionNum)
{
    if (JOY_NEW(A_BUTTON) || (JOY_NEW(DPAD_RIGHT)))
    {
        AdventureGuide_IncrementGuidePage();
    }
    if (JOY_NEW(B_BUTTON) || (JOY_NEW(DPAD_LEFT)) || (JOY_NEW(START_BUTTON)))
    {
        if (AdventureGuide_GetSingleGuideMode())
            AdventureGuide_LeaveAdventureGuide(taskId);
        else
            AdventureGuide_LeaveGuideReturnToMenu();
    }
}

static void AdventureGuide_HandleAnyPageInput(u8 taskId, u32 optionNum)
{
    if (JOY_NEW(A_BUTTON) || (JOY_NEW(DPAD_RIGHT)))
    {
        AdventureGuide_IncrementGuidePage();
    }
    if (JOY_NEW(B_BUTTON) || (JOY_NEW(DPAD_LEFT)))
    {
        AdventureGuide_DecrementGuidePage();
    }
    if (JOY_NEW(START_BUTTON))
    {
        if (AdventureGuide_GetSingleGuideMode())
            AdventureGuide_LeaveAdventureGuide(taskId);
        else
            AdventureGuide_LeaveGuideReturnToMenu();
    }
}

// PSF TODO
// Determine the list of adventure guides that should appear
// Find places in game to put all adventure guides
// Insert them into the game
// Write text for all adventure guides
// Test all the different kinds
// meta/docs/adventure_guide.md
