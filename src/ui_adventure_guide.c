#include "global.h"
#include "ui_adventure_guide.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "trig.h"
#include "tv.h"
#include "line_break.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/ui_adventure_guide.h"
#include "ui_options_menu.h"
#include "ui_pokedex.h"

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
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void HandleAndShowBgs(void);
static void SetScheduleBgs(u32 backgroundId);
static bool8 AllocZeroedTilemapBuffers(void);
static void Menu_FadeAndBail(void);
static void Menu_LoadGraphics(void);
static void Menu_InitWindows(void);
static void AdventureGuide_PrintAppTitle(void); // DONE
static void AdventureGuide_PrintGuideText(void);
static void AdventureGuide_PrintWindowTitle(u32 optionNum);
static void AdventureGuide_PrintDescription(u32 optionNum);
static void AdventureGuide_PrintNumber(u32 optionNum);
static void AdventureGuide_PrintCursor(void);
static void AdventureGuide_PrintGuideList(void);
static void AdventureGuide_PrintHelpbar(void);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static bool32 AdventureGuide_GetSingleGuideMode(void);
static void AdventureGuide_LeaveAdventureGuide(u8 taskId);
static void AdventureGuide_HandleMainMenuInput(u8 taskId, u32 optionNum);
static void AdventureGuide_HandleLastPageInput(u8 taskId, u32 optionNum);
static void AdventureGuide_HandleFirstPageInput(u8 taskId, u32 optionNum);
static void AdventureGuide_HandleAnyPageInput(u8 taskId, u32 optionNum);
static void AdventureGuide_LoadBackgroundPalette(void);
static u8 getCurrentOptionNumPages(void);

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
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1
    },
    {
        .bg = BG2_ADVENTURE_LIST_BOXES,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .priority = 2,
    },
    {
        .bg = BG3_ADVENTURE_LIST_GENERIC,
        .charBaseIndex = 3,
        .mapBaseIndex = 26,
        .priority = 3,
    }
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [WINDOW_ADVENTURE_LIST_HEADER] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 1,
    },
    [WINDOW_ADVENTURE_LIST] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 30,
        .height = 16,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2),
    },
    [WINDOW_ADVENTURE_LIST_FOOTER] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2) + (30 * 16),
    },
    [WINDOW_ADVENTURE_GUIDE_HEADER] =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 2,
        .width = 26,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2) + (30 * 16) + (30 * 2),
    },
    [WINDOW_ADVENTURE_GUIDE_DESC] =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 4,
        .width = 26,
        .height = 12,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2) + (30 * 16) + (30 * 2) + (26 * 2),
    },
    [WINDOW_ADVENTURE_GUIDE_FOOTER] =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 16,
        .width = 26,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2) + (30 * 16) + (30 * 2) + (26 * 2) + (26 * 12),
    }
};

static const u8 sCursor[]         = INCBIN_U8("graphics/ui_menus/adventure_guide/cursor.4bpp");
static const u32 gAdventureGuideUpArrow_Gfx[]    = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_up.4bpp.lz");
static const u32 gAdventureGuideDownArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_down.4bpp.lz");
static const u32 gAdventureGuideLeftArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_left.4bpp.lz");
static const u32 gAdventureGuideRightArrow_Gfx[] = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_right.4bpp.lz");

static const u32 sListBgTiles[]   = INCBIN_U32("graphics/ui_menus/adventure_guide/listBg.4bpp.lz");
static const u32 sListBgTilemap[] = INCBIN_U32("graphics/ui_menus/adventure_guide/listBg.bin.lz");

static const u32 sMenuBgTiles[]   = INCBIN_U32("graphics/ui_menus/adventure_guide/menuBg.4bpp.lz");
static const u32 sMenuBgTilemap[] = INCBIN_U32("graphics/ui_menus/adventure_guide/menuBg.bin.lz");

static const u16 sMenuPalette_Red[]      = INCBIN_U16("graphics/ui_menus/options_menu/palettes/red.gbapal");
static const u16 sMenuPalette_Black[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/black.gbapal");
static const u16 sMenuPalette_Green[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/green.gbapal");
static const u16 sMenuPalette_Blue[]     = INCBIN_U16("graphics/ui_menus/options_menu/palettes/blue.gbapal");
static const u16 sMenuPalette_Platinum[] = INCBIN_U16("graphics/ui_menus/options_menu/palettes/platinum.gbapal");
static const u16 sMenuPalette_Scarlet[]  = INCBIN_U16("graphics/ui_menus/options_menu/palettes/scarlet.gbapal");
static const u16 sMenuPalette_Violet[]   = INCBIN_U16("graphics/ui_menus/options_menu/palettes/violet.gbapal");
static const u16 sMenuPalette_White[]    = INCBIN_U16("graphics/ui_menus/options_menu/palettes/white.gbapal");
static const u16 sMenuPalette_Yellow[]   = INCBIN_U16("graphics/ui_menus/options_menu/palettes/yellow.gbapal");

static const u8 sMenuWindowFontColors[][3] =
{
    [FONT_COLOR_ADVENTURE_BLACK]   = {TEXT_COLOR_TRANSPARENT,  3,  TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_WHITE]   = {TEXT_COLOR_TRANSPARENT,  1,  TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_WHITE_2] = {TEXT_COLOR_TRANSPARENT,  2,  TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_RED]     = {TEXT_COLOR_TRANSPARENT,  14, TEXT_COLOR_TRANSPARENT},
    [FONT_COLOR_ADVENTURE_BLUE]    = {TEXT_COLOR_TRANSPARENT,  4,  TEXT_COLOR_TRANSPARENT},
};

//==========FUNCTIONS==========//
// UI loader template
void Task_OpenAdventureGuideFromStartMenu(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    CleanupOverworldWindowsAndTilemaps();
    VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN, NUM_GUIDES);
    Adventure_Guide_Init(CB2_ReturnToFieldWithOpenMenu);
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

    // initialize stuff
    sMenuDataPtr->savedCallback = callback;
    sMenuDataPtr->cursorNumX = 0;
    sMenuDataPtr->cursorNumY = 0;
    sMenuDataPtr->yFirstItem = 0;
    sMenuDataPtr->isWindowOpen = FALSE;
    sMenuDataPtr->windowInfoNum = 0;

    guideToOpen = VarGet(VAR_ADVENTURE_GUIDE_TO_OPEN);
    //VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN, NUM_GUIDES); // reset the variable

    if(guideToOpen >= NUM_GUIDES){
        sMenuDataPtr->isWindowOpen    = FALSE;
        sMenuDataPtr->singleGuideMode = FALSE;
        sMenuDataPtr->cursorNumY      = 0;
        sMenuDataPtr->cursorNumX      = 0;
    }
    else{
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

    if(sMenuDataPtr->windowInfoNum != 0 && (sMenuDataPtr->singleGuideMode || sMenuDataPtr->isWindowOpen))
        sprite->invisible = FALSE;
    else
        sprite->invisible = TRUE;
}

static void SpriteCallback_AdventureGuide_RightArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->x2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if(sMenuDataPtr->windowInfoNum < getCurrentOptionNumPages() - 1 && (sMenuDataPtr->singleGuideMode || sMenuDataPtr->isWindowOpen))
        sprite->invisible = FALSE;
    else
        sprite->invisible = TRUE;
}

#define UP_ARROW_X 120 - 16
#define UP_ARROW_Y 0

static void CreateUpArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_ADVENTURE_UP_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AdventureGuideUpArrow = {gAdventureGuideUpArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_AdventureGuide_UpArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AdventureGuideUpArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, UP_ARROW_X, UP_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_UP_ARROW] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_UP_ARROW]].oam.shape = SPRITE_SHAPE(32x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_UP_ARROW]].oam.size = SPRITE_SIZE(32x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_UP_ARROW]].oam.priority = 1;
}

#define DOWN_ARROW_X UP_ARROW_X
#define DOWN_ARROW_Y 160 - 16

static void CreateDownArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_ADVENTURE_DOWN_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AdventureGuideDownArrow = {gAdventureGuideDownArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_AdventureGuide_DownArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AdventureGuideDownArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, DOWN_ARROW_X, DOWN_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_DOWN_ARROW] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_DOWN_ARROW]].oam.shape = SPRITE_SHAPE(32x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_DOWN_ARROW]].oam.size = SPRITE_SIZE(32x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_DOWN_ARROW]].oam.priority = 1;
}

#define LEFT_ARROW_X 8
#define LEFT_ARROW_Y (160 / 2)

static void CreateLeftArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_ADVENTURE_LEFT_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AdventureGuideLeftArrow = {gAdventureGuideLeftArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_AdventureGuide_LeftArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AdventureGuideLeftArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, LEFT_ARROW_X, LEFT_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_LEFT_ARROW] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_LEFT_ARROW]].oam.shape    = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_LEFT_ARROW]].oam.size     = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_LEFT_ARROW]].oam.priority = 1;
}

#define RIGHT_ARROW_X 240 - 16
#define RIGHT_ARROW_Y LEFT_ARROW_Y

static void CreateRightArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_ADVENTURE_RIGHT_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AdventureGuideRightArrow = {gAdventureGuideRightArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_AdventureGuide_RightArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AdventureGuideRightArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, RIGHT_ARROW_X, RIGHT_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_RIGHT_ARROW] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_RIGHT_ARROW]].oam.shape    = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_RIGHT_ARROW]].oam.size     = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_ADVENTURE_RIGHT_ARROW]].oam.priority = 1;
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
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000)
                SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            ResetVramOamAndBgCntRegs();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            FreeAllSpritePalettes();
            ResetPaletteFade();
            ResetSpriteData();
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
                Menu_FadeAndBail();
                return TRUE;
            }
            break;
        case 3:
            gMain.state++;
            break;
        case 4:
            CreateUpArrowSprite();
            CreateDownArrowSprite();
            CreateLeftArrowSprite();
            CreateRightArrowSprite();
            LoadMessageBoxAndBorderGfx();
            Menu_InitWindows();
            gMain.state++;
            break;
        case 5:
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
            CreateTask(Task_MenuWaitFadeIn, 0);
            BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
            gMain.state++;
            break;
        case 6:
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
            gMain.state++;
            break;
        default:
            SetVBlankCallback(Menu_VBlankCB);
            SetMainCallback2(Menu_MainCB);
            return TRUE;
    }
    return FALSE;
}

#define try_free(ptr) ({        \
        void ** ptr__ = (void **)&(ptr);   \
        if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
        })

static void Menu_FreeResources(void)
{
    try_free(sMenuDataPtr);
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
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
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

        if (backgroundId == BG1_ADVENTURE_GUIDE_LIST)
            HideBg(BG1_ADVENTURE_GUIDE_LIST);
    }
    //SetBackgroundTransparency();
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

static void Menu_LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum AdventureBackgrounds backgroundId = 1; backgroundId < BG_ADVENTURE_GUIDE_COUNT; backgroundId++)
    {
        DecompressAndLoadBgGfxUsingHeap(backgroundId, sAdventureTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sAdventureTilemapLUT[backgroundId],0,0);
    }
    AdventureGuide_LoadBackgroundPalette();
}

static void AdventureGuide_LoadBackgroundPalette(void)
{
    switch(gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR])
    {
        case VISUAL_OPTION_COLOR_BLACK:
            LoadPalette(sMenuPalette_Black, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_BLUE:
            LoadPalette(sMenuPalette_Blue, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_GREEN:
            LoadPalette(sMenuPalette_Green, 0, 32);
            break;
        default:
        case VISUAL_OPTION_COLOR_PLATINUM:
            LoadPalette(sMenuPalette_Platinum, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_RED:
            LoadPalette(sMenuPalette_Red, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_SCARLET:
            LoadPalette(sMenuPalette_Scarlet, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_VIOLET:
            LoadPalette(sMenuPalette_Violet, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_WHITE:
            LoadPalette(sMenuPalette_White, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_YELLOW:
            LoadPalette(sMenuPalette_Yellow, 0, 32);
            break;
    }
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
#define GUIDE_NAME_LENGTH 30
#define MAX_GUIDE_DESCRIPTION_LENGTH 800
#define MAX_GUIDE_PAGES 5
#define FLAG_TEST FLAG_WATTSON_REMATCH_AVAILABLE

struct AdventureGuideData
{
    const u8 title[GUIDE_NAME_LENGTH];
    const u8 *description[MAX_GUIDE_PAGES];
    const u8 numPages;
    bool8 isAdvancedGuide;
};

static const struct AdventureGuideData AdventureGuideInfo[NUM_GUIDES] = {
    [GUIDE_YOUR_ADVENTURE_GUIDE] =
    {
        .title = _("Your Adventure Guide"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
        .isAdvancedGuide = TRUE,
    },
    [GUIDE_WILD_POKEMON] =
    {
        .title = _("Wild Pokemon"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_YOUR_ROTOM_PHONE] =
    {
        .title = _("Your Rotom Phone"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_AUTO_HEAL] =
    {
        .title = _("Auto Heal"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_OPENING_POKEDEX] =
    {
        .title = _("Opening Pokedex"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_LETS_GO] =
    {
        .title = _("Let's Go"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_YOUR_POKEMON_BOXES] =
    {
        .title = _("Your Pokemon Boxes"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_LOCKING_ON] =
    {
        .title = _("Locking On"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_CROUCHING] =
    {
        .title = _("Crouching"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_NO_IDEA_1] =
    {
        .title = _("No Idea 1"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
        .isAdvancedGuide = TRUE,
    },
    [GUIDE_CATCHING_POKEMON] =
    {
        .title = _("Catching Pokemon"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_NO_IDEA_2] =
    {
        .title = _("No Idea 2"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_SOMETHING_1] =
    {
        .title = _("Something 1"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_SOMETHING_2] =
    {
        .title = _("Something 2"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_SOMETHING_3] =
    {
        .title = _("Something 3"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_SOMETHING_4] =
    {
        .title = _("Something 4"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_SOMETHING_5] =
    {
        .title = _("Something 5"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
    [GUIDE_SOMETHING_6] =
    {
        .title = _("Something 6"),
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. 3"),
        },
        .numPages = 3,
    },
};


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

    AdventureGuide_PrintWindowTitle(optionNum);
    AdventureGuide_PrintDescription(optionNum);
    AdventureGuide_PrintNumber(optionNum);
    AdventureGuide_PrintHelpbar();

    for (enum AdventureWindows windowId = WINDOW_ADVENTURE_GUIDE_HEADER; windowId < WINDOW_ADVENTURE_COUNT ; windowId++)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

static void AdventureGuide_PrintWindowTitle(u32 optionNum)
{
    DebugPrintf("AdventureGuide_PrintWindowTitle");
    u32 x = 4;
    u32 y = 0;
    u32 font = FONT_NORMAL;
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    const u8 *str = AdventureGuideInfo[optionNum].title;
    enum AdventureWindows windowId = WINDOW_ADVENTURE_GUIDE_HEADER;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(2));
    AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], TEXT_SKIP_DRAW, str);
}

static void AdventureGuide_PrintDescription(u32 optionNum)
{
    DebugPrintf("AdventureGuide_PrintDescription");
    u32 fontId = FONT_SMALL_NARROW;
    u32 lineSpacing = GetFontAttribute(fontId,FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 x = 16;
    u32 y = 8;
    enum AdventureWindows windowId = WINDOW_ADVENTURE_GUIDE_DESC;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    u8 *end = StringExpandPlaceholders(gStringVar3, AdventureGuideInfo[optionNum].description[sMenuDataPtr->windowInfoNum]);

    BreakStringAutomatic(gStringVar3, ADVENTURE_GUIDE_INFO_WIDTH, ADVENTURE_GUIDE_LINES, fontId, HIDE_SCROLL_PROMPT);
    PrependFontIdToFit(gStringVar3, end, fontId, ADVENTURE_GUIDE_INFO_WIDTH);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sMenuWindowFontColors[FONT_COLOR_ADVENTURE_BLACK], TEXT_SKIP_DRAW, gStringVar3);
}

static void AdventureGuide_PrintNumber(u32 optionNum)
{
    DebugPrintf("AdventureGuide_PrintNumber");

    enum AdventureWindows windowId = WINDOW_ADVENTURE_GUIDE_FOOTER;
    u32 currentPageNumber = sMenuDataPtr->windowInfoNum + 1;
    u32 finalPageNumber = AdventureGuideInfo[optionNum].numPages;
    u32 x = 4;
    u32 y = 0;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(2));
    ConvertIntToDecimalStringN(gStringVar1, currentPageNumber, STR_CONV_MODE_RIGHT_ALIGN, CountDigits(currentPageNumber));
    ConvertIntToDecimalStringN(gStringVar2, finalPageNumber, STR_CONV_MODE_RIGHT_ALIGN, CountDigits(finalPageNumber));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{DPAD_LEFTRIGHT} Page {STR_VAR_1} / {STR_VAR_2}"));
    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, x, y, 0, 0, sMenuWindowFontColors[FONT_COLOR_ADVENTURE_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static void AdventureGuide_PrintCursor(void)
{
    enum AdventureWindows windowId = WINDOW_ADVENTURE_LIST;
    u32 x = 0 + (sMenuDataPtr->cursorNumX * 120);
    u32 y = (sMenuDataPtr->cursorNumY - sMenuDataPtr->yFirstItem) * 16;

    BlitBitmapToWindow(windowId, sCursor, x, y,  120, 16);
}

static void AdventureGuide_PrintGuideList(void)
{
    u32 font = FONT_NORMAL;
    enum AdventureWindows windowId = WINDOW_ADVENTURE_LIST;
    // PSF TODO use Crim font here
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AdventureGuide_PrintCursor();

    for(u32 i = 0; i < MAX_ADVENTURE_GUIDE_ITEMS; i++)
    {
        u32 x = (((i % MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) * 15) * 8) + 4;
        u32 y = 1 + ((i / MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) * 16);
        u32 j = i + (sMenuDataPtr->yFirstItem * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW);
        const u8 *str = (gSaveBlock3Ptr->hasSeenGuide[j] == TRUE) ? AdventureGuideInfo[j].title : COMPOUND_STRING("???");

        AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], TEXT_SKIP_DRAW, str);
    }

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void AdventureGuide_PrintHelpbar(void)
{
    u32 x = 4;
    u32 y = 1;
    u32 font = FONT_SMALL_NARROW;
    u32 optionNum = (sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) + sMenuDataPtr->cursorNumX;
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    u32 currentPageNumber = sMenuDataPtr->windowInfoNum + 1;
    u32 finalPageNumber = AdventureGuideInfo[optionNum].numPages;
    enum AdventureWindows windowId = WINDOW_ADVENTURE_LIST_FOOTER;

    bool32 isMainMenu = (!sMenuDataPtr->isWindowOpen && !sMenuDataPtr->singleGuideMode);
    bool32 isLastPage = ((currentPageNumber / finalPageNumber) == 1);
    bool32 isFirstPage = ((finalPageNumber != 1) && ((currentPageNumber == 1)));

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (isMainMenu)
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{A_BUTTON} View Guide {B_BUTTON} Return"));
    }
    else if (isLastPage)
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{B_BUTTON} Previous Page {START_BUTTON} Return"));
    }
    else if (isFirstPage)
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{A_BUTTON} Next Page {START_BUTTON} Return"));
    }
    else
    {
        StringCopy(gStringVar1,COMPOUND_STRING("{A_BUTTON} Next Page {B_BUTTON} Previous Page {START_BUTTON} Return"));
    }

    AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar1);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
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
                if(!AdventureGuideInfo[guideNum].isAdvancedGuide)
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

    Menu_FreeResources();
    DestroyTask(taskId);
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

static u8 getCurrentOptionNumPages(void){
    u8 optionNum = sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW + sMenuDataPtr->cursorNumX;
    return AdventureGuideInfo[optionNum].numPages;
}

#define MAX_CURSOR_NUM_X 2
#define MAX_CURSOR_NUM_Y 8
/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    u32 optionNum = (sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) + sMenuDataPtr->cursorNumX;
    u32 currentPageNumber = sMenuDataPtr->windowInfoNum + 1;
    u32 finalPageNumber = AdventureGuideInfo[optionNum].numPages;

    bool32 isMainMenu = (!sMenuDataPtr->isWindowOpen && !sMenuDataPtr->singleGuideMode);
    bool32 isLastPage = ((currentPageNumber / finalPageNumber) == 1);
    bool32 isFirstPage = ((finalPageNumber != 1) && ((currentPageNumber == 1)));

    if (isMainMenu)
        AdventureGuide_HandleMainMenuInput(taskId, optionNum);
    else if (isLastPage)
        AdventureGuide_HandleLastPageInput(taskId, optionNum);
    else if (isFirstPage)
        AdventureGuide_HandleFirstPageInput(taskId, optionNum);
    else
        AdventureGuide_HandleAnyPageInput(taskId, optionNum);
}

void SetTheFlag(void)
{
    //for (u32 i = 0; i < NUM_GUIDES; i++)
    gSaveBlock3Ptr->hasSeenGuide[GUIDE_YOUR_ADVENTURE_GUIDE] = TRUE;
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

static void AdventureGuide_HandleMainMenuInput(u8 taskId, u32 optionNum)
{
    bool32 unlocked = (gSaveBlock3Ptr->hasSeenGuide[optionNum] == TRUE);

    if (JOY_NEW(A_BUTTON) && unlocked)
    {
        sMenuDataPtr->isWindowOpen = !sMenuDataPtr->isWindowOpen;
        ClearWindowCopyToVram(WINDOW_ADVENTURE_LIST);
        AdventureGuide_PrintGuideText();
        //Menu_ChangeTransparentTilemap();
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
    sMenuDataPtr->windowInfoNum = 0;
    sMenuDataPtr->isWindowOpen = !sMenuDataPtr->isWindowOpen;
    ClearWindowCopyToVram(WINDOW_ADVENTURE_GUIDE_HEADER);
    ClearWindowCopyToVram(WINDOW_ADVENTURE_GUIDE_DESC);
    ClearWindowCopyToVram(WINDOW_ADVENTURE_GUIDE_FOOTER);
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
// header should be dimmed when window is open
// button interactions in window mode need to actually match the help bar
// button interctionas in non-window mode need to match the help bar
// palettes on sprites need to be corrected for both window and menu modes
// palette for text needs to use red in the last slot
// need to split up mega window into smaller windows for perf
