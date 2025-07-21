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
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/ui_adventure_guide.h"
#include "ui_options_menu.h"

//==========DEFINES==========//
struct MenuResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 gfxLoadState;
	u16 bgTilemapBuffers[NUM_ADVENTURE_GUIDE_BACKGROUNDS][0x400];
    u8 cursorNumX;
    u8 cursorNumY;
    u8 yFirstItem;
    bool8 isWindowOpen;
    u8 windowInfoNum;
    bool8 singleGuideMode;
    u8 spriteIDs[NUM_ADVENTURE_GUIDE_SPRITES];
};

enum WindowIds
{
    WINDOW_1,
};

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

//==========STATIC=DEFINES==========//
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void Menu_FadeAndBail(void);
static bool8 Menu_LoadGraphics(void);
static void Menu_InitWindows(void);
static void PrintToWindow(u8 windowId, u8 colorIdx);
static void AdventureGuide_PrintCursor(u32 windowId);
static void AdventureGuide_PrintGuideList(u32 windowId);
static void AdventureGuide_PrintTitle(u32 windowId, u32 optionNum);
static void AdventureGuide_PrintNumber(u32 windowId, u32 optionNum);
static void AdventureGuide_PrintDescription(u32 windowId, u32 optionNum);
static void AdventureGuide_PrintHelpbar(u32 windowId);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static void AdventureGuide_LoadBackgroundPalette(void);
static void setNormalBackground(void);
static void setTransparentBackground(void);
static void removeTransparentBackground(void);
static void Menu_ChangeTransparentTilemap(void);
static u8 getCurrentOptionNumPages(void);

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[] =
{
    {
        .bg = 0,    // windows, etc
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,    // this bg loads the UI tilemap
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    },
    {
        .bg = 2,
        .charBaseIndex = 3,
        .mapBaseIndex = 28,
        .priority = 3,
    }
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [WINDOW_1] =
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 0,   // position from left (per 8 pixels)
        .tilemapTop = 0,    // position from top (per 8 pixels)
        .width = 30,        // width (per 8 pixels)
        .height = 20,       // height (per 8 pixels)
        .paletteNum = 0,    // palette index to use for text
        .baseBlock = 1,     // tile start in VRAM
    },
};

static const u32 sMenuTiles[]             = INCBIN_U32("graphics/ui_menus/adventure_guide/tiles.4bpp.lz");
static const u32 sMenuTilemap[]           = INCBIN_U32("graphics/ui_menus/adventure_guide/tilemap.bin.lz");
static const u32 sBlackBgTilemap[]        = INCBIN_U32("graphics/ui_menus/adventure_guide/tilemap_black.bin.lz");
static const u32 sBlackBgTilemap_Single[] = INCBIN_U32("graphics/ui_menus/adventure_guide/tilemap_black_single.bin.lz");
static const u32 sBackgroundTilemap[]     = INCBIN_U32("graphics/ui_menus/adventure_guide/bg_tilemap.bin.lz");
static const u32 sFrontBgTilemap[]        = INCBIN_U32("graphics/ui_menus/adventure_guide/front_tilemap.bin.lz");

static const u16 sMenuPalette[]          = INCBIN_U16("graphics/ui_menus/adventure_guide/palette_custom.gbapal");

static const u16 sMenuPalette_Red[]      = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/red.gbapal");
static const u16 sMenuPalette_Black[]    = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/black.gbapal");
static const u16 sMenuPalette_Green[]    = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/green.gbapal");
static const u16 sMenuPalette_Blue[]     = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/blue.gbapal");
static const u16 sMenuPalette_Platinum[] = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/platinum.gbapal");
static const u16 sMenuPalette_Scarlet[]  = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/scarlet.gbapal");
static const u16 sMenuPalette_Violet[]   = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/violet.gbapal");
static const u16 sMenuPalette_White[]    = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/white.gbapal");
static const u16 sMenuPalette_Yellow[]   = INCBIN_U16("graphics/ui_menus/adventure_guide/palettes/yellow.gbapal");

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
    //s16 *data = gTasks[taskId].data;
    if (gPaletteFade.active)
        return;

        CleanupOverworldWindowsAndTilemaps();
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
    sMenuDataPtr->gfxLoadState = 0;
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

static const u32 gAdventureGuideUpArrow_Gfx[]    = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_up.4bpp.lz");
static const u32 gAdventureGuideDownArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_down.4bpp.lz");
static const u32 gAdventureGuideLeftArrow_Gfx[]  = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_left.4bpp.lz");
static const u32 gAdventureGuideRightArrow_Gfx[] = INCBIN_U32("graphics/ui_menus/adventure_guide/arrow_right.4bpp.lz");

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
            sMenuDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            Menu_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        if (Menu_LoadGraphics() == TRUE)
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
        PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
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
    try_free(sBg1TilemapBuffer);
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

static bool8 Menu_InitBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    //Background 1
    setNormalBackground();

    //Background 2 - Transparent
    setTransparentBackground();
    return TRUE;
}

static void setNormalBackground(void){
    SetBgAttribute(ADVENTURE_GUIDE_BG_NORMAL, BG_ATTR_PRIORITY, ADVENTURE_GUIDE_BG_NORMAL);
    InitBgsFromTemplates(0, sMenuBgTemplates, ARRAY_COUNT(sMenuBgTemplates));
    SetBgTilemapBuffer(ADVENTURE_GUIDE_BG_NORMAL, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_NORMAL]);
    ScheduleBgCopyTilemapToVram(ADVENTURE_GUIDE_BG_NORMAL);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(ADVENTURE_GUIDE_FRONT_BG);
    ShowBg(ADVENTURE_GUIDE_BG_NORMAL);
    ChangeBgX(ADVENTURE_GUIDE_BG_NORMAL, 0, 0);
    ChangeBgY(ADVENTURE_GUIDE_BG_NORMAL, 0, 0);
}

static void setTransparentBackground(void){
    u8 strength = ADVENTURE_GUIDE_TRANSPARENCY_STRENGTH;
    SetBgTilemapBuffer(ADVENTURE_GUIDE_BG_TRANSPARENT, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT]);
    ScheduleBgCopyTilemapToVram(ADVENTURE_GUIDE_BG_TRANSPARENT);

    //Transparency
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_ALL | BLDCNT_TGT1_BG1); //Blend Background over the rest
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(strength, strength));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);

    ShowBg(ADVENTURE_GUIDE_BG_TRANSPARENT);
    ChangeBgX(ADVENTURE_GUIDE_BG_TRANSPARENT, 0, 0);
    ChangeBgY(ADVENTURE_GUIDE_BG_TRANSPARENT, 0, 0);
}

static void removeTransparentBackground(){
    SetBgAttribute(ADVENTURE_GUIDE_BG_TRANSPARENT, BG_ATTR_PRIORITY, ADVENTURE_GUIDE_BG_TRANSPARENT);
    InitBgsFromTemplates(0, sMenuBgTemplates, ARRAY_COUNT(sMenuBgTemplates));
    SetBgTilemapBuffer(ADVENTURE_GUIDE_BG_TRANSPARENT, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT]);
    ScheduleBgCopyTilemapToVram(ADVENTURE_GUIDE_BG_TRANSPARENT);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(ADVENTURE_GUIDE_BG_TRANSPARENT);
}

static void Menu_ChangeTransparentTilemap(void)
{
    try_free(sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT]);
    memset(sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT], 0, 0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, NELEMS(sMenuBgTemplates));
    SetBgTilemapBuffer(1, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT]);
    ScheduleBgCopyTilemapToVram(1);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);

    sMenuDataPtr->isWindowOpen = !sMenuDataPtr->isWindowOpen;
    if(sMenuDataPtr->isWindowOpen){
        LZDecompressWram(sBlackBgTilemap, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT]);
        //SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(3, 3));
    }
    else{
        LZDecompressWram(sMenuTilemap, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT]);
        //SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    }
}

static bool8 Menu_LoadGraphics(void)
{
    switch (sMenuDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sMenuTiles, 0, 0, 0);
        sMenuDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            if(sMenuDataPtr->singleGuideMode)
                LZDecompressWram(sBlackBgTilemap_Single, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_NORMAL]);
            else
                LZDecompressWram(sMenuTilemap, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_NORMAL]);
            sMenuDataPtr->gfxLoadState++;
        }
        break;
    case 2:
        LZDecompressWram(sBackgroundTilemap, sMenuDataPtr->bgTilemapBuffers[ADVENTURE_GUIDE_BG_TRANSPARENT]);
        sMenuDataPtr->gfxLoadState++;
        break;
    case 3:
        AdventureGuide_LoadBackgroundPalette();
        sMenuDataPtr->gfxLoadState++;
        break;
    default:
        sMenuDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void AdventureGuide_LoadBackgroundPalette(void)
{
    u8 chosenBackgroundColor = gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR];

    switch(chosenBackgroundColor){
        case VISUAL_OPTION_COLOR_BLACK:
            LoadPalette(sMenuPalette_Black, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_BLUE:
            LoadPalette(sMenuPalette_Blue, 0, 32);
            break;
        case VISUAL_OPTION_COLOR_GREEN:
            LoadPalette(sMenuPalette_Green, 0, 32);
            break;
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
        default:
            LoadPalette(sMenuPalette, 0, 32);
            break;
    }
}

static void Menu_InitWindows(void)
{
    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(WINDOW_1, 0);
    LoadUserWindowBorderGfx(WINDOW_1, 720, 14 * 16);
    PutWindowTilemap(WINDOW_1);
    CopyWindowToVram(WINDOW_1, 3);

    ScheduleBgCopyTilemapToVram(2);
}
#define GUIDE_NAME_LENGTH 30
#define MAX_GUIDE_DESCRIPTION_LENGTH 800
#define MAX_GUIDE_PAGES 5
#define FLAG_TEST FLAG_WATTSON_REMATCH_AVAILABLE

struct AdventureGuideData
{
    const u8 title[GUIDE_NAME_LENGTH];
    const u8 description[MAX_GUIDE_PAGES][MAX_GUIDE_DESCRIPTION_LENGTH];
    const u8 numPages;
    u16 flagToUnlock;
    bool8 isAdvancedGuide;
};

static const struct AdventureGuideData AdventureGuideInfo[NUM_GUIDES] = {
    [GUIDE_YOUR_ADVENTURE_GUIDE] =
    {
        .title = _("Your Adventure Guide"),
        .description = {
            _( "Lorem ipsum dolor sit amet, consectetur\n"
               "adipiscing elit, sed do eiusmod tempor\n"
               "incididunt ut labore et dolore magna\n"
               "aliqua. Morbi quis commodo odio aenean\n"
               "sed  adipiscing diam donec. Diam vel quam\n"
               "elementum pulvinar. Aliquam ut porttitor\n"
               "leo a diam sollicitudin tempor id. Vehicula\n"
               "ipsum a arcu cursus vitae congue mauris\n"
               "rhoncus aenean.\n"
               "Lorem ipsum dolor sit amet, consectetur\n"
               "adipiscing elit, sed do eiusmod tempor\n"
               "incididunt ut labore et dolore magna"),
            _("Your Adventure Guide Page 2"),
            _("Your Adventure Guide Page 3"),
            },
        .numPages = 3,
        .isAdvancedGuide = TRUE,
    },
    [GUIDE_WILD_POKEMON] =
    {
        .title = _("Wild Pokemon"),
        .description = {
            _("Wild Pokemon Page 1"),
            _("Wild Pokemon Page 2"),
            _("Wild Pokemon Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_YOUR_ROTOM_PHONE] =
    {
        .title = _("Your Rotom Phone"),
        .description = {
            _("Your Rotom Phone Page 1"),
            _("Your Rotom Phone Page 2"),
            _("Your Rotom Phone Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_AUTO_HEAL] =
    {
        .title = _("Auto Heal"),
        .description = {
            _("Auto Heal Page 1"),
            _("Auto Heal Page 2"),
            _("Auto Heal Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_OPENING_POKEDEX] =
    {
        .title = _("Opening Pokedex"),
        .description = {
            _("Opening Pokedex Page 1"),
            _("Opening Pokedex Page 2"),
            _("Opening Pokedex Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_LETS_GO] =
    {
        .title = _("Let's Go"),
        .description = {
            _("Let's Go Page 1"),
            _("Let's Go Page 2"),
            _("Let's Go Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_YOUR_POKEMON_BOXES] =
    {
        .title = _("Your Pokemon Boxes"),
        .description = {
            _("Your Pokemon Boxes Page 1"),
            _("Your Pokemon Boxes Page 2"),
            _("Your Pokemon Boxes Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_LOCKING_ON] =
    {
        .title = _("Locking On"),
        .description = {
            _("Locking On Page 1"),
            _("Locking On Page 2"),
            _("Locking On Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_CROUCHING] =
    {
        .title = _("Crouching"),
        .description = {
            _("Crouching Page 1"),
            _("Crouching Page 2"),
            _("Crouching Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_NO_IDEA_1] =
    {
        .title = _("No Idea 1"),
        .description = {
            _("No Idea 1 Page 1"),
            _("No Idea 1 Page 2"),
            _("No Idea 1 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
        .isAdvancedGuide = TRUE,
    },
    [GUIDE_CATCHING_POKEMON] =
    {
        .title = _("Catching Pokemon"),
        .description = {
            _("Catching Pokemon Page 1"),
            _("Catching Pokemon Page 2"),
            _("Catching Pokemon Page 3"),
            },
        .numPages = 3,
    },
    [GUIDE_NO_IDEA_2] =
    {
        .title = _("No Idea 2"),
        .description = {
            _("No Idea 2 Page 1"),
            _("No Idea 2 Page 2"),
            _("No Idea 2 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
    },
    [GUIDE_SOMETHING_1] =
    {
        .title = _("Something 1"),
        .description = {
            _("Something 1 Page 1"),
            _("Something 1 Page 2"),
            _("Something 1 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
    },
    [GUIDE_SOMETHING_2] =
    {
        .title = _("Something 2"),
        .description = {
            _("Something 2 Page 1"),
            _("Something 2 Page 2"),
            _("Something 2 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
    },
    [GUIDE_SOMETHING_3] =
    {
        .title = _("Something 3"),
        .description = {
            _("Something 3 Page 1"),
            _("Something 3 Page 2"),
            _("Something 3 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
    },
    [GUIDE_SOMETHING_4] =
    {
        .title = _("Something 4"),
        .description = {
            _("Something 4 Page 1"),
            _("Something 4 Page 2"),
            _("Something 4 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
    },
    [GUIDE_SOMETHING_5] =
    {
        .title = _("Something 5"),
        .description = {
            _("Something 5 Page 1"),
            _("Something 5 Page 2"),
            _("Something 5 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
    },
    [GUIDE_SOMETHING_6] =
    {
        .title = _("Something 6"),
        .description = {
            _("Something 6 Page 1"),
            _("Something 6 Page 2"),
            _("Something 6 Page 3"),
            },
        .numPages = 3,
        .flagToUnlock = FLAG_TEST,
    },
};

static const u8 sText_Dummy[] = _("????");

static const u8 sText_HelpBar[]   = _("{A_BUTTON} View Guide {B_BUTTON} Return");
static const u8 sCursor[]         = INCBIN_U8("graphics/ui_menus/adventure_guide/cursor.4bpp");
static const u8 sCursor2[]        = INCBIN_U8("graphics/ui_menus/adventure_guide/cursor_2.4bpp");
static const u8 sBlackWindow[]    = INCBIN_U8("graphics/ui_menus/adventure_guide/black_window.4bpp");
static const u8 sGuideBox[]       = INCBIN_U8("graphics/ui_menus/adventure_guide/guideBox.4bpp");
static const u8 sDarkAButton[]    = INCBIN_U8("graphics/ui_menus/adventure_guide/dark_a_button.4bpp");
static const u8 sDarkBButton[]    = INCBIN_U8("graphics/ui_menus/adventure_guide/dark_b_button.4bpp");

static void PrintToWindow(u8 windowId, u8 colorIdx)
{
    u32 optionNum = (sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) + sMenuDataPtr->cursorNumX;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AdventureGuide_PrintCursor(windowId);
    AdventureGuide_PrintGuideList(windowId);

    AdventureGuide_PrintTitle(windowId, optionNum);

    AdventureGuide_PrintNumber(windowId, optionNum);
    AdventureGuide_PrintDescription(windowId, optionNum);
    AdventureGuide_PrintHelpbar(windowId);

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, 3);
}

static void AdventureGuide_PrintCursor(u32 windowId)
{
    u32 x = 0;
    u32 y = 2;
    u8 cursorX   =  sMenuDataPtr->cursorNumX * 120;
    u8 cursorY   = (sMenuDataPtr->cursorNumY - sMenuDataPtr->yFirstItem) * 16;
    if(!sMenuDataPtr->singleGuideMode){
        if(sMenuDataPtr->isWindowOpen)
            BlitBitmapToWindow(windowId, sCursor2, (x * 8) + cursorX, (y * 8) + cursorY, 120, 16);
        else
            BlitBitmapToWindow(windowId, sCursor,  (x * 8) + cursorX, (y * 8) + cursorY, 120, 16);
    }
}

static void AdventureGuide_PrintGuideList(u32 windowId)
{
    u32 x = 1;
    u32 y = 1;
    u32 font = FONT_NORMAL;
    u32 colorIdx = FONT_COLOR_ADVENTURE_BLACK;

    if(sMenuDataPtr->isWindowOpen || sMenuDataPtr->singleGuideMode)
        colorIdx = FONT_COLOR_ADVENTURE_WHITE;

    if(!sMenuDataPtr->singleGuideMode){
        for(u32 i = 0; i < MAX_ADVENTURE_GUIDE_ITEMS; i++){
            x = ((i % MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) * 15);
            y = 2 + ((i / MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW) * 2);

            u32 j = i + (sMenuDataPtr->yFirstItem * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW);

            if(AdventureGuideInfo[j].flagToUnlock == 0 || FlagGet(AdventureGuideInfo[j].flagToUnlock))
                AddTextPrinterParameterized4(windowId, font, (x * 8) + 4, (y * 8), 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, AdventureGuideInfo[j].title);
            else
                AddTextPrinterParameterized4(windowId, font, (x * 8) + 4, (y * 8), 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Dummy);
        }
    }
}

static void AdventureGuide_PrintTitle(u32 windowId, u32 optionNum)
{
    u32 x = 4;
    u32 y = 0;
    u32 font = FONT_NORMAL;
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    const u8 *str = (sMenuDataPtr->singleGuideMode) ? AdventureGuideInfo[optionNum].title : COMPOUND_STRING("Adventure Guide");

    AddTextPrinterParameterized4(windowId, font, x, y, 0, 0, sMenuWindowFontColors[colorIdx], TEXT_SKIP_DRAW, str);
}

static void AdventureGuide_PrintNumber(u32 windowId, u32 optionNum)
{
    if (!sMenuDataPtr->isWindowOpen && !sMenuDataPtr->singleGuideMode)
        return;

    u32 currentPageNumber = sMenuDataPtr->windowInfoNum + 1;
    u32 finalPageNumber = AdventureGuideInfo[optionNum].numPages;

    BlitBitmapToWindow(windowId, sGuideBox, 16, 16, 208, 128);

    ConvertIntToDecimalStringN(gStringVar1, currentPageNumber, STR_CONV_MODE_RIGHT_ALIGN, CountDigits(currentPageNumber));
    ConvertIntToDecimalStringN(gStringVar2, finalPageNumber, STR_CONV_MODE_RIGHT_ALIGN, CountDigits(finalPageNumber));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{DPAD_LEFTRIGHT} Page {STR_VAR_1} / {STR_VAR_2}"));
    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, 20, 129, 0, 0, sMenuWindowFontColors[FONT_COLOR_ADVENTURE_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static void AdventureGuide_PrintDescription(u32 windowId, u32 optionNum)
{
    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, 68, 45, 0, 0, sMenuWindowFontColors[FONT_COLOR_ADVENTURE_BLACK], 0xFF, AdventureGuideInfo[optionNum].description[sMenuDataPtr->windowInfoNum]);

}

static void AdventureGuide_PrintHelpbar(u32 windowId)
{
    u32 x = 0;
    u32 y = 0;
    u32 font = FONT_NORMAL;
    u32 colorIdx = FONT_COLOR_ADVENTURE_WHITE;
    //Help Bar
    x = 0;
    y = 18;
    AddTextPrinterParameterized4(windowId, font, (x * 8) + 4, (y * 8), 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_HelpBar);
    //Darkned A and B buttons
    if(sMenuDataPtr->isWindowOpen){
        x = 0;
        y = 18;
        BlitBitmapToWindow(windowId, sDarkAButton, (x * 8) + 4,  (y * 8) + 3, 8, 8);
        BlitBitmapToWindow(windowId, sDarkBButton, (x * 8) + 71, (y * 8) + 3 , 8, 8);
    }
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
    if (!gPaletteFade.active)
    {
        removeTransparentBackground();
        //VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN, 0);
        SetMainCallback2(sMenuDataPtr->savedCallback);
        Menu_FreeResources();
        DestroyTask(taskId);
    }
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
    u8 optionNum = sMenuDataPtr->cursorNumY * MAX_ADVENTURE_GUIDE_ITEMS_PER_ROW + sMenuDataPtr->cursorNumX;
    u8 numpages = AdventureGuideInfo[optionNum].numPages - 1;
    bool8 unlocked = AdventureGuideInfo[optionNum].flagToUnlock == 0 || FlagGet(AdventureGuideInfo[optionNum].flagToUnlock);
    bool8 closeMenu = FALSE;

    if(!sMenuDataPtr->singleGuideMode){

        if (JOY_NEW(A_BUTTON)){
            if(sMenuDataPtr->windowInfoNum != numpages && sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum++;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else if(sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum = 0;
                Menu_ChangeTransparentTilemap();
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else if(unlocked){
                Menu_ChangeTransparentTilemap();
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
        }

        if (JOY_NEW(B_BUTTON))
        {
            if(sMenuDataPtr->windowInfoNum != 0 && sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum--;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else if(sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum = 0;
                Menu_ChangeTransparentTilemap();
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else
                closeMenu = TRUE;
        }

        if ((JOY_NEW(DPAD_RIGHT))){
            if(sMenuDataPtr->windowInfoNum != numpages && sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum++;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else if(sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum = 0;
                Menu_ChangeTransparentTilemap();
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else{
                if(sMenuDataPtr->cursorNumX == MAX_CURSOR_NUM_X - 1)
                    sMenuDataPtr->cursorNumX = 0;
                else
                    sMenuDataPtr->cursorNumX++;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
        }

        if ((JOY_NEW(DPAD_LEFT))){
            if(sMenuDataPtr->windowInfoNum != 0 && sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum--;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else if(sMenuDataPtr->isWindowOpen){
                sMenuDataPtr->windowInfoNum = 0;
                Menu_ChangeTransparentTilemap();
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else{
                if(sMenuDataPtr->cursorNumX == 0)
                    sMenuDataPtr->cursorNumX = MAX_CURSOR_NUM_X - 1;
                else
                    sMenuDataPtr->cursorNumX--;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
        }

        if ((JOY_NEW(DPAD_DOWN))){
            if(sMenuDataPtr->isWindowOpen == FALSE){
                PressedDownButton_AdventureGuide();
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
        }

        if ((JOY_NEW(DPAD_UP))){
            if(sMenuDataPtr->isWindowOpen == FALSE){
                PressedUpButton_AdventureGuide();
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
        }
    }
    else{
        if (JOY_NEW(START_BUTTON))
            closeMenu = TRUE;

        if (JOY_NEW(A_BUTTON) || JOY_NEW(DPAD_RIGHT))
        {
            if(sMenuDataPtr->windowInfoNum != numpages){
                sMenuDataPtr->windowInfoNum++;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else
                closeMenu = TRUE;
        }

        if ((JOY_NEW(DPAD_LEFT)) || JOY_NEW(B_BUTTON))
        {
            if(sMenuDataPtr->windowInfoNum != 0){
                sMenuDataPtr->windowInfoNum--;
                PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
            }
            else
                closeMenu = TRUE;
        }
    }

    if(closeMenu){
        PrintToWindow(WINDOW_1, FONT_COLOR_ADVENTURE_WHITE);
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MenuTurnOff;
    }
}
