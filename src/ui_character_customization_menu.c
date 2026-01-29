#include "global.h"
#include "ui_character_customization_menu.h"
#include "constants/ui_character_customization_menu.h"
#include "strings.h"
#include "battle_gfx_sfx_util.h"
#include "battle_main.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_weather.h"
#include "field_effect.h"
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
#include "main_menu.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "naming_screen.h"
#include "trig.h"
#include "palette.h"
#include "pokemon.h"
#include "random.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "gba/syscall.h"
#include "task.h"
#include "trainer_pokemon_sprites.h"
#include "text_window.h"
#include "overworld.h"
#include "dma3.h"
#include "event_data.h"
#include "field_player_avatar.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/trainers.h"
#include "constants/event_objects.h"

//==========DEFINES==========//
struct MenuResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 cursorPlace;
    u8 currentFirstOption;
    u8 cursorPlaceInCustomPaletteScren;
	u8 spriteIDs[NUM_SPRITES];
    u8 oldPaletteTag[NUM_SPRITES];
    u16 CurrentDirectionFrames;
    bool8 isCustomPaletteScren;
    u8 DrawnDialogue;
    u8 Temp_Customization_Settings[NUM_CUSTOMIZATION_PARTS];
    u8 Temp_Custom_Color_Settings[NUM_CUSTOMIZATION_PARTS][NUM_COLOR_OPTIONS];
    u8 Temp_playerSubjectPronoun[PLAYER_NAME_LENGTH + 1];
    u8 Temp_playerObjectPronoun[PLAYER_NAME_LENGTH + 1];
    u8 Temp_playerPosesivePronoun[PLAYER_NAME_LENGTH + 1];
    u8 PlayerSpriteState;
    u8 interfacePalette;
    u8 debugstuff;
};

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;
static EWRAM_DATA u8 *sBgTilemapBuffer[NUM_CUSTOMIZATION_BACKGROUNDS] = {NULL};

//==========STATIC=DEFINES==========//
static bool32 DebugShouldSkipBg(u32 bg);
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void Menu_FadeAndBail(void);
static void Menu_LoadGraphics(void);
static void SetScheduleBgs(u32 backgroundId);
static void HandleAndShowBgs(void);
static bool32 AllocZeroedTilemapBuffers(void);
static void Menu_InitWindows(void);
static void SetBackgroundTransparency(void);
static void PrintToWindow(u8 colorIdx);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);
static void RecolorPlayerCharacters(u8 palnum);
void CB2_ReturnToCostumizationMenu(void);

static void CreateTrainerFrontSprite(void);
static void CreateTrainerBackSprite(void);
static void CreateTrainerOverworldSprite(void);
static void CreateTrainerOverworldBikeSprite(void);
static void CreateTrainerOverworldPokemonCall(void);

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[] =
{
    {
        .bg = CUSTOMIZATION_MENU_BG_TEXT,    // windows, etc
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = CUSTOMIZATION_MENU_BG_BOXES,    // this bg loads the UI tilemap
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    {
        .bg = CUSTOMIZATION_MENU_BG_SHADOWS,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
    {
        .bg = CUSTOMIZATION_MENU_BG_ART,
        .charBaseIndex = 3,
        .mapBaseIndex = 27,
        .priority = 2,
    },
};

static const struct WindowTemplate sMenuWindowTemplates[] =
{
    [CUSTOM_WINDOW_HEADER] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 1,
    },
    [CUSTOM_WINDOW_OPTIONS]
    {
        .bg = 0,
        .tilemapLeft = 9,
        .tilemapTop = 3,
        .width = 12,
        .height = 14,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2),
    },
    [CUSTOM_WINDOW_VALUES]
    {
        .bg = 0,
        .tilemapLeft = 21,
        .tilemapTop = 3,
        .width = 9,
        .height = 14,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2) + (12 * 14),
    },
    [CUSTOM_WINDOW_FOOTER]
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 1 + (30 * 2) + (12 * 14) + (9 * 14),
    },
    DUMMY_WIN_TEMPLATE,
};

static const u32 siliconBgTiles[] = INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.4bpp.smol");
static const u32 siliconBgTilemap[] = INCBIN_U32("graphics/ui_menus/main_menu/siliconBg.bin.smolTM");

static const u32 shadowBgTiles[] = INCBIN_U32("graphics/ui_menus/character_customization/shadowBg.4bpp.smol");
static const u32 shadowBgTilemap[] = INCBIN_U32("graphics/ui_menus/character_customization/shadowBg.bin.smolTM");

static const u32 boxesBgTiles[] = INCBIN_U32("graphics/ui_menus/character_customization/boxesBg.4bpp.smol");
static const u32 boxesBgTilemap[] = INCBIN_U32("graphics/ui_menus/character_customization/boxesBg.bin.smolTM");

static const u16 sMenuPalette[] = INCBIN_U16("graphics/ui_menus/options_menu/palette_custom.gbapal");
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
    [FONT_CUSTOM_BLACK]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,   TEXT_COLOR_TRANSPARENT},
    [FONT_CUSTOM_WHITE]    = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,       TEXT_COLOR_TRANSPARENT},
};



static const u32 sCustomizationMenuUpArrow_Gfx[]        = INCBIN_U32("graphics/ui_menus/character_customization/up_arrow.4bpp.smol");
static const u32 sCustomizationMenuDownArrow_Gfx[]      = INCBIN_U32("graphics/ui_menus/character_customization/down_arrow.4bpp.smol");
static const u32 sCustomizationMenuLeftArrow_Gfx[]      = INCBIN_U32("graphics/ui_menus/character_customization/left_arrow.4bpp.smol");
static const u32 sCustomizationMenuRightArrow_Gfx[]     = INCBIN_U32("graphics/ui_menus/character_customization/right_arrow.4bpp.smol");

static void SpriteCallback_UpArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if(!sMenuDataPtr->isCustomPaletteScren){
        if(sMenuDataPtr->cursorPlace == 0)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;
    }
    else{
        if(sMenuDataPtr->cursorPlaceInCustomPaletteScren == 0)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;
    }
}

static const struct SpritePalette sInterfaceSpritePalette[] = {{sMenuPalette, 0}};

static void CreateUpArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_UP_CUSTOM_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AmazonDownArrow = {sCustomizationMenuUpArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_UpArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AmazonDownArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, UP_CUSTOM_ARROW_X, UP_CUSTOM_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority = 1;
}

static void SpriteCallback_DownArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;
    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += 8;

    if(!sMenuDataPtr->isCustomPaletteScren){
        if(sMenuDataPtr->cursorPlace == NUM_CUSTOMIZATION_PARTS - 1)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;
    }
    else{
        if(sMenuDataPtr->cursorPlaceInCustomPaletteScren == NUM_COLOR_OPTIONS)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;
    }
}

static void CreateDownArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_DOWN_CUSTOM_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AmazonDownArrow = {sCustomizationMenuDownArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_DownArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AmazonDownArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, DOWN_CUSTOM_ARROW_X, DOWN_CUSTOM_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority = 1;
}

static void SpriteCallback_LeftArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0] + 128;

    if(!sMenuDataPtr->isCustomPaletteScren){
        u8 num = (sMenuDataPtr->cursorPlace - sMenuDataPtr->currentFirstOption);
        sprite->y = LEFT_CUSTOM_ARROW_Y;
        sprite->y2 = (17 * num);
        sprite->x = LEFT_CUSTOM_ARROW_X;
        sprite->x2 = gSineTable[val] / 128;
        sprite->data[0] += 8;

        sprite->invisible = FALSE;

        /*if(sMenuDataPtr->buyScreen || sMenuDataPtr->currentItem == 0)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;*/
    }
    else{
        u8 num = sMenuDataPtr->cursorPlaceInCustomPaletteScren;
        sprite->y = LEFT_CUSTOM_ARROW_Y;
        sprite->y2 = (16 * num);
        sprite->x = LEFT_CUSTOM_ARROW_X;
        sprite->x2 = gSineTable[val] / 128;
        sprite->data[0] += 8;

        if(num == NUM_COLOR_OPTIONS)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;
    }
}

static void CreateLeftArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_LEFT_CUSTOM_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AmazonLeftArrow = {sCustomizationMenuLeftArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_LeftArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AmazonLeftArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, LEFT_CUSTOM_ARROW_X, LEFT_CUSTOM_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority = 1;
}

static void SpriteCallback_RightArrow(struct Sprite *sprite)
{
    u8 val = sprite->data[0];

    if(!sMenuDataPtr->isCustomPaletteScren){
        u8 num = (sMenuDataPtr->cursorPlace - sMenuDataPtr->currentFirstOption);
        sprite->y = RIGHT_CUSTOM_ARROW_Y;
        sprite->y2 = (17 * num);
        sprite->x = RIGHT_CUSTOM_ARROW_X;
        sprite->x2 = gSineTable[val] / 128;
        sprite->data[0] += 8;

        sprite->invisible = FALSE;

        /*if(sMenuDataPtr->buyScreen || sMenuDataPtr->currentItem == 0)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;*/
    }
    else{
        u8 num = sMenuDataPtr->cursorPlaceInCustomPaletteScren;
        sprite->y = RIGHT_CUSTOM_ARROW_Y;
        sprite->y2 = (16 * num);
        sprite->x = RIGHT_CUSTOM_ARROW_X;
        sprite->x2 = gSineTable[val] / 128;
        sprite->data[0] += 8;

        if(num == NUM_COLOR_OPTIONS)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;
    }
}

static void CreateRightArrowSprite(void)
{
    u8 spriteId;
    u8 SpriteTag = SPRITE_RIGHT_CUSTOM_ARROW;
    struct CompressedSpriteSheet sSpriteSheet_AmazonLeftArrow = {sCustomizationMenuRightArrow_Gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag  = SpriteTag;
    TempSpriteTemplate.callback = SpriteCallback_RightArrow;

    LoadCompressedSpriteSheet(&sSpriteSheet_AmazonLeftArrow);
    spriteId = CreateSprite(&TempSpriteTemplate, RIGHT_CUSTOM_ARROW_X, RIGHT_CUSTOM_ARROW_Y, 0);
    sMenuDataPtr->spriteIDs[SpriteTag] = spriteId;

    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.size = SPRITE_SIZE(16x16);
    gSprites[sMenuDataPtr->spriteIDs[SpriteTag]].oam.priority = 1;
}

//==========FUNCTIONS==========//
// UI loader template
void Task_OpenCharacterCustomizationMenuFromStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        Character_Customization_Menu_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
}

void CB2_CustomizationFromStartMenu(void)
{
    Character_Customization_Menu_Init(CB2_StartMenu_ReturnToUI);
}

void ResetCustomizationValuesData(void){
    u8 i;

    // PSF TODO Pick a single body type and then have one of our artists pick a canon set of colors for each artist

    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE]         = Random() % (NUM_BODY_TYPES); // Body type has no custom option
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_SKIN_COLOR]        = Random() % (NUM_SKIN_COLOR - 1);
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_HAIR_COLOR]        = Random() % (NUM_HAIR_COLOR - 1);
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_PRIMARY_COLOR]     = Random() % (NUM_PRIMARY_COLOR - 1);
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_SECONDARY_COLOR]   = Random() % (NUM_PRIMARY_COLOR - 1);
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_SUBJECT_PRONOUN]   = Random() % NUM_PRONOUN_TYPES;
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_OBJECT_PRONOUN]    = Random() % NUM_PRONOUN_TYPES;
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_POSSESIVE_PRONOUN] = Random() % NUM_PRONOUN_TYPES;

    for (i = 0; i < PLAYER_NAME_LENGTH; i++){
        gSaveBlock3Ptr->playerSubjectPronoun[i]  = gText_He[i];
        gSaveBlock3Ptr->playerObjectPronoun[i]   = gText_Him[i];
        gSaveBlock3Ptr->playerPosesivePronoun[i] = gText_His[i];
    }

    gSaveBlock3Ptr->playerSubjectPronoun[PLAYER_NAME_LENGTH] = EOS;
    gSaveBlock3Ptr->playerObjectPronoun[PLAYER_NAME_LENGTH] = EOS;
    gSaveBlock3Ptr->playerPosesivePronoun[PLAYER_NAME_LENGTH] = EOS;

    FlagSet(FLAG_SYS_CUSTOMIZATION_DATA_INITIALIZED);
}

// This is our main initialization function if you want to call the menu from elsewhere
void Character_Customization_Menu_Init(MainCallback callback)
{
    u8 i, j;

    if ((sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    if(!FlagGet(FLAG_SYS_CUSTOMIZATION_DATA_INITIALIZED))
        ResetCustomizationValuesData();

    sMenuDataPtr->cursorPlace = 0;
    sMenuDataPtr->currentFirstOption = 0;
    sMenuDataPtr->isCustomPaletteScren = FALSE;
    sMenuDataPtr->PlayerSpriteState = 0;

    sMenuDataPtr->DrawnDialogue = DRAWN_DIALOGUE_HELP_BAR;

    for(i = 0; i < NUM_SPRITES; i++){
        sMenuDataPtr->spriteIDs[i] = SPRITE_NONE;
    }

	for(i = 0; i < NUM_CUSTOMIZATION_PARTS; i++){
        sMenuDataPtr->Temp_Customization_Settings[i] = gSaveBlock3Ptr->customizationValues[i];
    }

    for(i = CUSTOMIZATION_SKIN_COLOR; i < NUM_CUSTOM_COLOR_OPTIONS; i++){
        for(j = 0; j < NUM_COLOR_OPTIONS; j++){
            sMenuDataPtr->Temp_Custom_Color_Settings[i][j] = gSaveBlock3Ptr->rgbValues[i][j];
        }
    }

    for(i = 0; i < PLAYER_NAME_LENGTH + 1; i++){
        sMenuDataPtr->Temp_playerSubjectPronoun[i] = gSaveBlock3Ptr->playerSubjectPronoun[i];
        sMenuDataPtr->Temp_playerObjectPronoun[i] = gSaveBlock3Ptr->playerObjectPronoun[i];
        sMenuDataPtr->Temp_playerPosesivePronoun[i] = gSaveBlock3Ptr->playerPosesivePronoun[i];
    }


    // initialize stuff
    sMenuDataPtr->savedCallback = callback;

    SetMainCallback2(Menu_RunSetup);
}

static void ResetSaveBlockCustomizationDataBeforeExit(void)
{
    u8 i,j;

    for(i = 0; i < NUM_CUSTOMIZATION_PARTS; i++){
        gSaveBlock3Ptr->customizationValues[i] = sMenuDataPtr->Temp_Customization_Settings[i];
    }

    for(i = CUSTOMIZATION_SKIN_COLOR; i < NUM_CUSTOM_COLOR_OPTIONS; i++){
        for(j = 0; j < NUM_COLOR_OPTIONS; j++){
            gSaveBlock3Ptr->rgbValues[i][j] = sMenuDataPtr->Temp_Custom_Color_Settings[i][j];
        }
    }

    for(i = 0; i < PLAYER_NAME_LENGTH + 1; i++){
        gSaveBlock3Ptr->playerSubjectPronoun[i] = sMenuDataPtr->Temp_playerSubjectPronoun[i];
        gSaveBlock3Ptr->playerObjectPronoun[i] = sMenuDataPtr->Temp_playerObjectPronoun[i];
        gSaveBlock3Ptr->playerPosesivePronoun[i] = sMenuDataPtr->Temp_playerPosesivePronoun[i];
    }
}

static bool8 HasCustomizationDataBeenModified(void)
{
    bool8 modified = FALSE;
    u8 i,j;

    for(i = 0; i < NUM_CUSTOMIZATION_PARTS; i++){
        if(gSaveBlock3Ptr->customizationValues[i] != sMenuDataPtr->Temp_Customization_Settings[i])
            return TRUE;
    }

    for(i = 0; i < NUM_CUSTOMIZATION_PARTS; i++){
        for(j = 0; j < NUM_COLOR_OPTIONS; j++){
            if(gSaveBlock3Ptr->rgbValues[i][j] != sMenuDataPtr->Temp_Custom_Color_Settings[i][j])
                return TRUE;
        }
    }

    /*for(i = 0; i < PLAYER_NAME_LENGTH + 1; i++){
        gSaveBlock3Ptr->playerSubjectPronoun[i] = sMenuDataPtr->Temp_playerSubjectPronoun[i];
        gSaveBlock3Ptr->playerObjectPronoun[i] = sMenuDataPtr->Temp_playerObjectPronoun[i];
        gSaveBlock3Ptr->playerPosesivePronoun[i] = sMenuDataPtr->Temp_playerPosesivePronoun[i];
    }*/

    return modified;
}

static bool8 HasCustomSubjectPronounBeenModified(void){
    u8 i;
    u8 stringLength = 2;
    for(i = 0; i < stringLength; i++){
        if(gSaveBlock3Ptr->playerSubjectPronoun[i] != gText_He[i]){
            return TRUE;
        }
    }

    return FALSE;
}

static bool8 HasCustomObjectPronounBeenModified(void){
    u8 i;
    u8 stringLength = 3;
    for(i = 0; i < stringLength; i++){
        if(gSaveBlock3Ptr->playerObjectPronoun[i] != gText_Him[i]){
            return TRUE;
        }
    }

    return FALSE;
}

static bool8 HasCustomPossesivePronounBeenModified(void){
    u8 i;
    u8 stringLength = 3;
    for(i = 0; i < stringLength; i++){
        if(gSaveBlock3Ptr->playerPosesivePronoun[i] != gText_His[i]){
            return TRUE;
        }
    }

    return FALSE;
}

static void Menu_RunSetup(void)
{
    while (1)
    {
        if (Menu_DoGfxSetup() == TRUE)
            break;
    }
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT1_BG2 | BLDCNT_TGT2_BG3);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
    ShowBg(CUSTOMIZATION_MENU_BG_SHADOWS);
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

static void RecolorPlayerCharacters(u8 palnum)
{
    u32 slot = OBJ_PLTT_ID(palnum);
    SetCustomPlayerPalette(&gPlttBufferUnfaded[slot], &gSaveBlock3Ptr->rgbValues, &gSaveBlock3Ptr->customizationValues);
    SetCustomPlayerPalette(&gPlttBufferFaded[slot], &gSaveBlock3Ptr->rgbValues, &gSaveBlock3Ptr->customizationValues);
}

u8 const sPlayerAnimList[NUM_SEQUENCES] = {
    [SEQUENCE_WALK_DOWN]    = ANIM_STD_GO_SOUTH,
    [SEQUENCE_WALK_RIGHT]   = ANIM_STD_GO_EAST,
    [SEQUENCE_WALK_UP]      = ANIM_STD_GO_NORTH,
    [SEQUENCE_WALK_LEFT]    = ANIM_STD_GO_WEST,

    [SEQUENCE_RUN_DOWN]     = ANIM_RUN_SOUTH,
    [SEQUENCE_RUN_RIGHT]    = ANIM_RUN_EAST,
    [SEQUENCE_RUN_UP]       = ANIM_RUN_NORTH,
    [SEQUENCE_RUN_LEFT]     = ANIM_RUN_WEST,

    [SEQUENCE_BIKE_DOWN]    = ANIM_STD_GO_SOUTH,
    [SEQUENCE_BIKE_RIGHT]   = ANIM_STD_GO_EAST,
    [SEQUENCE_BIKE_UP]      = ANIM_STD_GO_NORTH,
    [SEQUENCE_BIKE_LEFT]    = ANIM_STD_GO_WEST,

    [SEQUENCE_CALL_POKEMON] = ANIMATION_NONE,
};

u8 const sBikeAnimList[NUM_SEQUENCES] = {
    [SEQUENCE_WALK_DOWN]    = ANIM_STD_GO_SOUTH,
    [SEQUENCE_WALK_RIGHT]   = ANIM_STD_GO_EAST,
    [SEQUENCE_WALK_UP]      = ANIM_STD_GO_NORTH,
    [SEQUENCE_WALK_LEFT]    = ANIM_STD_GO_WEST,

    [SEQUENCE_RUN_DOWN]     = ANIM_STD_GO_SOUTH,
    [SEQUENCE_RUN_RIGHT]    = ANIM_STD_GO_EAST,
    [SEQUENCE_RUN_UP]       = ANIM_STD_GO_NORTH,
    [SEQUENCE_RUN_LEFT]     = ANIM_STD_GO_WEST,

    [SEQUENCE_BIKE_DOWN]    = ANIM_STD_GO_SOUTH,
    [SEQUENCE_BIKE_RIGHT]   = ANIM_STD_GO_EAST,
    [SEQUENCE_BIKE_UP]      = ANIM_STD_GO_NORTH,
    [SEQUENCE_BIKE_LEFT]    = ANIM_STD_GO_WEST,

    [SEQUENCE_CALL_POKEMON] = ANIMATION_NONE,
};

static u8 getCurrentSequence(){
    u8 sequence = sMenuDataPtr->CurrentDirectionFrames/ NUM_MOVEMENT_FRAMES;

    return sequence;
}

u8 getPlayerAnimation(){
    return sPlayerAnimList[getCurrentSequence()];
}

u8 getBikeAnimation(){
    return sBikeAnimList[getCurrentSequence()];
}

static void DoOverworldSpriteAnimation(){
    u8 spriteId;

    //Nomal Overworld
    spriteId = sMenuDataPtr->spriteIDs[SPRITE_TRAINER_OVERWORLD];
    StartSpriteAnim(&gSprites[spriteId], getPlayerAnimation());

    //Bike Overworld
    spriteId = sMenuDataPtr->spriteIDs[SPRITE_TRAINER_OVERWORLD_BIKE];
    StartSpriteAnim(&gSprites[spriteId], getBikeAnimation());

    //Pokemon Back Sprite
    spriteId = sMenuDataPtr->spriteIDs[SPRITE_TRAINER_BACK_SPRITE];
    StoreSpriteCallbackInData6(&gSprites[spriteId], SpriteCB_FreePlayerSpriteLoadMonSprite);
    StartSpriteAnim(&gSprites[spriteId], 1);

    //Pokemon Call Overworld
    spriteId = sMenuDataPtr->spriteIDs[SPRITE_TRAINER_OVERWORLD_POKEMON_CALL];
    StartSpriteAnim(&gSprites[spriteId], ANIM_STD_FACE_SOUTH);

}

static void SpriteCallback_TrainerOverworldSprite(struct Sprite *sprite)
{
    switch(getCurrentSequence()){
        case SEQUENCE_WALK_DOWN:
        case SEQUENCE_WALK_RIGHT:
        case SEQUENCE_WALK_UP:
        case SEQUENCE_WALK_LEFT:
        case SEQUENCE_RUN_DOWN:
        case SEQUENCE_RUN_RIGHT:
        case SEQUENCE_RUN_UP:
        case SEQUENCE_RUN_LEFT:
            sprite->invisible = FALSE;
        break;
        default:
            sprite->invisible = TRUE;
        break;
    }
}

static void SpriteCallback_TrainerBikeOverworldSprite(struct Sprite *sprite)
{
    switch(getCurrentSequence()){
        case SEQUENCE_BIKE_DOWN:
        case SEQUENCE_BIKE_RIGHT:
        case SEQUENCE_BIKE_UP:
        case SEQUENCE_BIKE_LEFT:
            sprite->invisible = FALSE;
        break;
        default:
            sprite->invisible = TRUE;
        break;
    }
}

static void SpriteCallback_TrainerPokemonCallOverworldSprite(struct Sprite *sprite)
{
    switch(getCurrentSequence()){
        case SEQUENCE_CALL_POKEMON:
            sprite->invisible = FALSE;
        break;
        default:
            sprite->invisible = TRUE;
        break;
    }
}

static void SpriteCallback_TrainerBackSprite(struct Sprite *sprite)
{
    switch(getCurrentSequence()){
        case SEQUENCE_WALK_UP:
        case SEQUENCE_WALK_LEFT:
        case SEQUENCE_RUN_UP:
        case SEQUENCE_RUN_LEFT:
        case SEQUENCE_BIKE_UP:
        case SEQUENCE_BIKE_LEFT:
            sprite->invisible = FALSE;
        break;
        default:
            sprite->invisible = TRUE;
        break;
    }
}

static void SpriteCallback_TrainerFrontSprite(struct Sprite *sprite)
{
    switch(getCurrentSequence()){
        case SEQUENCE_WALK_DOWN:
        case SEQUENCE_WALK_RIGHT:
        case SEQUENCE_RUN_DOWN:
        case SEQUENCE_RUN_RIGHT:
        case SEQUENCE_BIKE_DOWN:
        case SEQUENCE_BIKE_RIGHT:
        case SEQUENCE_CALL_POKEMON:
            sprite->invisible = FALSE;
        break;
        default:
            sprite->invisible = TRUE;
        break;
    }
}

static void CreateTrainerSprites(){
    CreateTrainerFrontSprite();
    CreateTrainerBackSprite();
    CreateTrainerOverworldSprite();
    CreateTrainerOverworldBikeSprite();
    CreateTrainerOverworldPokemonCall();
    RecolorPlayerCharacters(gSprites[sMenuDataPtr->spriteIDs[SPRITE_TRAINER_FRONT_SPRITE]].oam.paletteNum);

    sMenuDataPtr->interfacePalette = LoadSpritePalette(sInterfaceSpritePalette);
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_UP_CUSTOM_ARROW]].oam.paletteNum = sMenuDataPtr->interfacePalette;
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_DOWN_CUSTOM_ARROW]].oam.paletteNum = sMenuDataPtr->interfacePalette;
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_LEFT_CUSTOM_ARROW]].oam.paletteNum = sMenuDataPtr->interfacePalette;
    gSprites[sMenuDataPtr->spriteIDs[SPRITE_RIGHT_CUSTOM_ARROW]].oam.paletteNum = sMenuDataPtr->interfacePalette;
}

static void CreateTrainerFrontSprite()
{
    u8 bodyType = gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE];
    u8 trainerFrontPic = TRAINER_PIC_SILICON_PLAYER_M1 + bodyType;
    u8 spriteID = SPRITE_TRAINER_FRONT_SPRITE;

    if(sMenuDataPtr->spriteIDs[spriteID] != SPRITE_NONE)
    {
        FreeAndDestroyTrainerPicSprite(sMenuDataPtr->spriteIDs[spriteID]);
        sMenuDataPtr->spriteIDs[spriteID] = SPRITE_NONE;
    }

    u32 paletteNum = AllocSpritePalette(OBJ_EVENT_PAL_TAG_SILICON);
    u16 slot = OBJ_PLTT_ID(paletteNum);
    RecolorPlayerCharacters(paletteNum);

    sMenuDataPtr->spriteIDs[spriteID] = CreateTrainerPicSprite(trainerFrontPic,TRUE,TRAINER_BACK_SPRITE_X,TRAINER_BACK_SPRITE_Y, slot, OBJ_EVENT_PAL_TAG_SILICON);
    gSprites[sMenuDataPtr->spriteIDs[spriteID]].callback = SpriteCallback_TrainerFrontSprite;
}

static void CreateTrainerBackSprite(){
    u8 spriteID = SPRITE_TRAINER_BACK_SPRITE;

    if(sMenuDataPtr->spriteIDs[spriteID] != SPRITE_NONE){
        DestroySpriteAndFreeResources(&gSprites[sMenuDataPtr->spriteIDs[spriteID]]);
        sMenuDataPtr->spriteIDs[spriteID] = SPRITE_NONE;
    }

    u32 trainerBackPic = PlayerGetTrainerBackPicId();
    DecompressTrainerBackPic(trainerBackPic, 0);
    SetMultiuseSpriteTemplateToTrainerBack(trainerBackPic, 0);
    if(sMenuDataPtr->spriteIDs[spriteID] == SPRITE_NONE){
        sMenuDataPtr->spriteIDs[spriteID] = CreateSprite(&gMultiuseSpriteTemplate, TRAINER_BACK_SPRITE_X, TRAINER_BACK_SPRITE_Y, 0);

        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.paletteNum = gSprites[sMenuDataPtr->spriteIDs[SPRITE_TRAINER_FRONT_SPRITE]].oam.paletteNum;
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].callback = SpriteCallback_TrainerBackSprite;
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.priority= 0;
    }
}

static void CreateTrainerOverworldSprite(){
    u8 bodyType = gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE];
    u16 graphicsId = GetPlayerAvatarGraphicsIdByStateIdAndGender(PLAYER_AVATAR_STATE_NORMAL,bodyType);
    u8 spriteID = SPRITE_TRAINER_OVERWORLD;

    if(sMenuDataPtr->spriteIDs[spriteID] != SPRITE_NONE){
        DestroySpriteAndFreeResources(&gSprites[sMenuDataPtr->spriteIDs[spriteID]]);
        sMenuDataPtr->spriteIDs[spriteID] = SPRITE_NONE;
    }

    if(sMenuDataPtr->spriteIDs[spriteID] == SPRITE_NONE){
        sMenuDataPtr->spriteIDs[spriteID] =  CreateObjectGraphicsSprite(graphicsId, SpriteCallbackDummy, TRAINER_OVERWORLD_PIC_X, TRAINER_OVERWORLD_PIC_Y, 0);
        StartSpriteAnim(&gSprites[sMenuDataPtr->spriteIDs[spriteID]], getPlayerAnimation());
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].callback = SpriteCallback_TrainerOverworldSprite;

        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.paletteNum = gSprites[sMenuDataPtr->spriteIDs[SPRITE_TRAINER_FRONT_SPRITE]].oam.paletteNum;
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.priority= 0;
    }
}

static void CreateTrainerOverworldBikeSprite(){
    u8 bodyType = gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE];
    u16 graphicsId = GetPlayerAvatarGraphicsIdByStateIdAndGender(PLAYER_AVATAR_STATE_MACH_BIKE,bodyType);
    u8 spriteID = SPRITE_TRAINER_OVERWORLD_BIKE;

    if(sMenuDataPtr->spriteIDs[spriteID] != SPRITE_NONE){
        DestroySpriteAndFreeResources(&gSprites[sMenuDataPtr->spriteIDs[spriteID]]);
        sMenuDataPtr->spriteIDs[spriteID] = SPRITE_NONE;
    }

    if(sMenuDataPtr->spriteIDs[spriteID] == SPRITE_NONE){
        sMenuDataPtr->spriteIDs[spriteID] =  CreateObjectGraphicsSprite(graphicsId, SpriteCallbackDummy, TRAINER_OVERWORLD_PIC_X, TRAINER_OVERWORLD_PIC_Y, 0);
        StartSpriteAnim(&gSprites[sMenuDataPtr->spriteIDs[spriteID]], getBikeAnimation());
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].callback = SpriteCallback_TrainerBikeOverworldSprite;
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.priority= 0;

        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.paletteNum = gSprites[sMenuDataPtr->spriteIDs[SPRITE_TRAINER_FRONT_SPRITE]].oam.paletteNum;
    }
}

static void CreateTrainerOverworldPokemonCall(){
    u8 bodyType = gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE];
    u16 graphicsId = GetPlayerAvatarGraphicsIdByStateIdAndGender(PLAYER_AVATAR_STATE_FIELD_MOVE,bodyType);
    u8 spriteID = SPRITE_TRAINER_OVERWORLD_POKEMON_CALL;

    if(sMenuDataPtr->spriteIDs[spriteID] != SPRITE_NONE){
        DestroySpriteAndFreeResources(&gSprites[sMenuDataPtr->spriteIDs[spriteID]]);
        sMenuDataPtr->spriteIDs[spriteID] = SPRITE_NONE;
    }

    if(sMenuDataPtr->spriteIDs[spriteID] == SPRITE_NONE){
        sMenuDataPtr->spriteIDs[spriteID] =  CreateObjectGraphicsSprite(graphicsId, SpriteCallbackDummy, TRAINER_OVERWORLD_PIC_X, TRAINER_OVERWORLD_PIC_Y, 0);
        StartSpriteAnim(&gSprites[spriteID], ANIM_STD_FACE_SOUTH);
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].callback = SpriteCallback_TrainerPokemonCallOverworldSprite;

        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.priority= 0;
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.paletteNum = gSprites[sMenuDataPtr->spriteIDs[SPRITE_TRAINER_FRONT_SPRITE]].oam.paletteNum;
    }
}

static bool8 Menu_DoGfxSetup(void)
{
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000)
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        ResetPaletteFade();
        ResetTasks();
        ResetSpriteData();
        FreeSpriteTileRanges();
        FreeAllSpritePalettes();
        ClearDma3Requests();
        gMain.state++;
        break;
    case 2:
        if (Menu_InitBgs())
            gMain.state++;
        else
        {
            Menu_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        Menu_LoadGraphics();
        gMain.state++;
        break;
    case 4:
        Menu_InitWindows();
        gMain.state++;
        break;
    case 5:
        CreateTask(Task_MenuWaitFadeIn, 0);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 6:
        CreateUpArrowSprite();
        CreateDownArrowSprite();
        CreateLeftArrowSprite();
        CreateRightArrowSprite();
        gMain.state++;
        break;
    case 7:
        PrintToWindow(FONT_CUSTOM_WHITE);
        CreateTrainerSprites();
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(Menu_VBlankCB);
        SetMainCallback2(Menu_MainCB);
        return TRUE;
    }
    return FALSE;
}

static void FreeCustomizationBackgrounds(void)
{
    for (u32 backgroundId = 0; backgroundId < NUM_CUSTOMIZATION_BACKGROUNDS; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

static void Menu_FreeResources(void)
{
    FreeAllSpritePalettes();
    if (sMenuDataPtr != NULL)
        Free(sMenuDataPtr);
    FreeCustomizationBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();
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
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_MenuWaitFadeAndBail, 0);
    SetVBlankCallback(Menu_VBlankCB);
    SetMainCallback2(Menu_MainCB);
}

static bool8 Menu_InitBgs(void)
{
	ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs();

	return TRUE;
}

static bool32 AllocZeroedTilemapBuffers(void)
{
    for (enum CustomizeBackgrounds backgroundId = 0; backgroundId < NUM_CUSTOMIZATION_BACKGROUNDS; backgroundId++)
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

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, NUM_CUSTOMIZATION_BACKGROUNDS);

    for (enum CustomizeBackgrounds backgroundId = 0; backgroundId < NUM_CUSTOMIZATION_BACKGROUNDS; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void LoadOptionsMenuPalettes(void)
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

static const u32* const sOptionsTilesLUT[] =
{
    [0] = NULL,
    [1] = boxesBgTiles,
    [2] = shadowBgTiles,
    [3] = siliconBgTiles,
};

static const u32* const sOptionsTilemapLUT[] =
{
    [0] = NULL,
    [1] = boxesBgTilemap,
    [2] = shadowBgTilemap,
    [3] = siliconBgTilemap,
};

static bool32 AreTilesOrTilemapEmpty(u32 backgroundId)
{
    return (sOptionsTilesLUT[backgroundId] == NULL || sOptionsTilemapLUT[backgroundId] == NULL);
}

static bool32 DebugShouldSkipBg(u32 bg)
{
    bool32 skipBg[4] =
    {
        [0] = FALSE,
        [1] = FALSE,
        [2] = FALSE,
        [3] = FALSE,
    };

    return skipBg[bg];
}

static void Menu_LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum CustomizeBackgrounds backgroundId = 0; backgroundId < NUM_CUSTOMIZATION_BACKGROUNDS; backgroundId++)
    {
        if (DebugShouldSkipBg(backgroundId))
            continue;

        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sOptionsTilesLUT[backgroundId], 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, sOptionsTilemapLUT[backgroundId],0,0);
    }
    LoadOptionsMenuPalettes();
}

static void Menu_InitWindows(void)
{
    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();

    for (enum CustomizeWindows windowId = 0; windowId < CUSTOM_WINDOW_COUNT; windowId++)
    {
        FillWindowPixelBuffer(windowId, 0);
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, 3);
    }
}

static void PressedDownButton(){
    if(!sMenuDataPtr->isCustomPaletteScren){
        u8 halfScreen = (NUM_MAX_CUSTOMIZATION_PARTS_ON_SCREEN) / 2;
        u8 finalhalfScreen = NUM_CUSTOMIZATION_PARTS - halfScreen;

        if(sMenuDataPtr->cursorPlace < halfScreen){
            sMenuDataPtr->cursorPlace++;
        }
        else if(sMenuDataPtr->cursorPlace >= (NUM_CUSTOMIZATION_PARTS - 1)){ //If you are in the last option go to the first one
            sMenuDataPtr->cursorPlace = 0;
            sMenuDataPtr->currentFirstOption = 0;
        }
        else if(sMenuDataPtr->cursorPlace >= finalhalfScreen){
            sMenuDataPtr->cursorPlace++;
        }
        else{
            sMenuDataPtr->cursorPlace++;
            sMenuDataPtr->currentFirstOption++;
        }
    }
    else{
        if(sMenuDataPtr->cursorPlaceInCustomPaletteScren == NUM_COLOR_OPTIONS){
            sMenuDataPtr->cursorPlaceInCustomPaletteScren = 0;
        }
        else{
            sMenuDataPtr->cursorPlaceInCustomPaletteScren++;
        }
    }
}

static void PressedUpButton(){
    if(!sMenuDataPtr->isCustomPaletteScren){
        u8 halfScreen = (NUM_MAX_CUSTOMIZATION_PARTS_ON_SCREEN) / 2; // 3
        u8 finalhalfScreen = NUM_CUSTOMIZATION_PARTS - halfScreen;

        if(sMenuDataPtr->cursorPlace > halfScreen && sMenuDataPtr->cursorPlace <= finalhalfScreen){
            sMenuDataPtr->cursorPlace--;
            sMenuDataPtr->currentFirstOption--;
        }
        else if(sMenuDataPtr->cursorPlace == 0){ //If you are in the first option go to the last one
            sMenuDataPtr->cursorPlace = NUM_CUSTOMIZATION_PARTS - 1;
            sMenuDataPtr->currentFirstOption = NUM_CUSTOMIZATION_PARTS - NUM_MAX_CUSTOMIZATION_PARTS_ON_SCREEN;
        }
        else{
            sMenuDataPtr->cursorPlace--;
        }
    }
    else{
        if(sMenuDataPtr->cursorPlaceInCustomPaletteScren == 0){
            sMenuDataPtr->cursorPlaceInCustomPaletteScren = NUM_COLOR_OPTIONS;
        }
        else{
            sMenuDataPtr->cursorPlaceInCustomPaletteScren--;
        }
    }
}

struct CustomizationData
{
    const u8* title;
    const u8* options[MAX_CUSTOMIZATION_OPTIONS_PER_SETTING];
    u8 numOptions;
};

const struct CustomizationData Customization_Options[NUM_CUSTOMIZATION_PARTS] =
{
    [CUSTOMIZATION_BODY_TYPE] =
    {
        .title = COMPOUND_STRING("Body Type"),
        .options =
        {
            [BODY_TYPE_M1] = COMPOUND_STRING("Type 1"),
            [BODY_TYPE_M2] = COMPOUND_STRING("Type 2"),
            [BODY_TYPE_M3] = COMPOUND_STRING("Type 3"),
            [BODY_TYPE_N1] = COMPOUND_STRING("Type 4"),
            [BODY_TYPE_N2] = COMPOUND_STRING("Type 5"),
            [BODY_TYPE_N3] = COMPOUND_STRING("Type 6"),
            [BODY_TYPE_F1] = COMPOUND_STRING("Type 7"),
            [BODY_TYPE_F2] = COMPOUND_STRING("Type 8"),
            [BODY_TYPE_F3] = COMPOUND_STRING("Type 9"),
        },
        .numOptions = NUM_BODY_TYPES,
    },
    [CUSTOMIZATION_SKIN_COLOR] =
    {
        .title = COMPOUND_STRING("Skin Color"),
        .options = {
            [SKIN_COLOR_PALE_IVORY] = COMPOUND_STRING("Pale Ivory"),
            [SKIN_COLOR_PORCELAIN] = COMPOUND_STRING("Porcelain"),
            [SKIN_COLOR_FAIR] = COMPOUND_STRING("Fair"),
            [SKIN_COLOR_WARM_IVORY] = COMPOUND_STRING("Warm Ivory"),
            [SKIN_COLOR_SAND] = COMPOUND_STRING("Sand"),
            [SKIN_COLOR_PEACH] = COMPOUND_STRING("Peach"),
            [SKIN_COLOR_ROSE] = COMPOUND_STRING("Rose"),
            [SKIN_COLOR_DANDELION] = COMPOUND_STRING("Dandelion"),
            [SKIN_COLOR_GOLDEN] = COMPOUND_STRING("Golden"),
            [SKIN_COLOR_OLIVE] = COMPOUND_STRING("Olive"),
            [SKIN_COLOR_CARAMEL] = COMPOUND_STRING("Caramel"),
            [SKIN_COLOR_HONEY] = COMPOUND_STRING("Honey"),
            [SKIN_COLOR_AMBER] = COMPOUND_STRING("Amber"),
            [SKIN_COLOR_MAHOGANY] = COMPOUND_STRING("Mahogany"),
            [SKIN_COLOR_SIENNA] = COMPOUND_STRING("Sienna"),
            [SKIN_COLOR_BRONZE] = COMPOUND_STRING("Bronze"),
            [SKIN_COLOR_ESPRESSO] = COMPOUND_STRING("Espresso"),
            [SKIN_COLOR_EBONY] = COMPOUND_STRING("Ebony"),
            [SKIN_COLOR_COCOA] = COMPOUND_STRING("Cocoa"),
            [SKIN_COLOR_CUSTOM] = COMPOUND_STRING("Custom {A_BUTTON}"),
        },
        .numOptions = NUM_SKIN_COLOR,
    },
    [CUSTOMIZATION_HAIR_COLOR] =
    {
        .title = COMPOUND_STRING("Hair Color"),
        .options = {
            [HAIR_COLOR_GOLD] = COMPOUND_STRING("Gold"),
            [HAIR_COLOR_DARK_BROWN] = COMPOUND_STRING("Dark Brown"),
            [HAIR_COLOR_ASH_BROWN] = COMPOUND_STRING("Ash Brown"),
            [HAIR_COLOR_LIGHT_BROWN] = COMPOUND_STRING("Light Brown"),
            [HAIR_COLOR_PLATINUM] = COMPOUND_STRING("Platinum"),
            [HAIR_COLOR_PINK_BROWN] = COMPOUND_STRING("Pink Brown"),
            [HAIR_COLOR_WINE_RED] = COMPOUND_STRING("Wine Red"),
            [HAIR_COLOR_GREEN] = COMPOUND_STRING("Green"),
            [HAIR_COLOR_WHITE] = COMPOUND_STRING("White"),
            [HAIR_COLOR_PINK] = COMPOUND_STRING("Pink"),
            [HAIR_COLOR_BLUE] = COMPOUND_STRING("Blue"),
            [HAIR_COLOR_RED] = COMPOUND_STRING("Red"),
            [HAIR_COLOR_SMOKY_PINK] = COMPOUND_STRING("Smoky Pink"),
            [HAIR_COLOR_BLUE_GREEN] = COMPOUND_STRING("Blue Green"),
            [HAIR_COLOR_LAVENDER] = COMPOUND_STRING("Lavender"),
            [HAIR_COLOR_VIOLET] = COMPOUND_STRING("Violet"),
            [HAIR_COLOR_SCARLET] = COMPOUND_STRING("Scarlet"),
            [HAIR_COLOR_SILVER] = COMPOUND_STRING("Silver"),
            [HAIR_COLOR_ASH_PURPLE] = COMPOUND_STRING("Ash Purple"),
            [HAIR_COLOR_ASH_WHITE] = COMPOUND_STRING("Ash White"),
            [HAIR_COLOR_ASH_BLOND] = COMPOUND_STRING("Ash Blond"),
            [HAIR_COLOR_ASH_GREEN] = COMPOUND_STRING("Ash Green"),
            [HAIR_COLOR_DARK_DENIM] = COMPOUND_STRING("Dark Denim"),
            [HAIR_COLOR_DENIM] = COMPOUND_STRING("Denim"),
            [HAIR_COLOR_LIGHT_DENIM] = COMPOUND_STRING("Light Denim"),
            [HAIR_COLOR_BLACK] = COMPOUND_STRING("Black"),
            [HAIR_COLOR_CUSTOM] = COMPOUND_STRING("Custom {A_BUTTON}"),
        },
        .numOptions = NUM_HAIR_COLOR,
    },
    [CUSTOMIZATION_PRIMARY_COLOR] =
    {
        .title = COMPOUND_STRING("Primary Color"),
        .options = {
            [OUTFIT_COLOR_SCARLET] = COMPOUND_STRING("Scarlet"),
            [OUTFIT_COLOR_BLACK] = COMPOUND_STRING("Black"),
            [OUTFIT_COLOR_WHITE] = COMPOUND_STRING("White"),
            [OUTFIT_COLOR_GOLDEN] = COMPOUND_STRING("Golden"),
            [OUTFIT_COLOR_RUBY] = COMPOUND_STRING("Ruby"),
            [OUTFIT_COLOR_EMERALD] = COMPOUND_STRING("Emerald"),
            [OUTFIT_COLOR_SAPPHIRE] = COMPOUND_STRING("Sapphire"),
            [OUTFIT_COLOR_VIOLET] = COMPOUND_STRING("Violet"),
            [OUTFIT_COLOR_SILVER] = COMPOUND_STRING("Silver"),
            [OUTFIT_COLOR_CUSTOM] = COMPOUND_STRING("Custom {A_BUTTON}"),
        },
        .numOptions = NUM_PRIMARY_COLOR,
    },
    [CUSTOMIZATION_SECONDARY_COLOR] =
    {
        .title = COMPOUND_STRING("Accent Color"),
        .options = {
            [OUTFIT_COLOR_SCARLET] = COMPOUND_STRING("Scarlet"),
            [OUTFIT_COLOR_BLACK] = COMPOUND_STRING("Black"),
            [OUTFIT_COLOR_WHITE] = COMPOUND_STRING("White"),
            [OUTFIT_COLOR_GOLDEN] = COMPOUND_STRING("Golden"),
            [OUTFIT_COLOR_RUBY] = COMPOUND_STRING("Ruby"),
            [OUTFIT_COLOR_EMERALD] = COMPOUND_STRING("Emerald"),
            [OUTFIT_COLOR_SAPPHIRE] = COMPOUND_STRING("Sapphire"),
            [OUTFIT_COLOR_VIOLET] = COMPOUND_STRING("Violet"),
            [OUTFIT_COLOR_SILVER] = COMPOUND_STRING("Silver"),
            [OUTFIT_COLOR_CUSTOM] = COMPOUND_STRING("Custom {A_BUTTON}"),
        },
        .numOptions = NUM_PRIMARY_COLOR,
    },
    [CUSTOMIZATION_SUBJECT_PRONOUN] =
    {
        .title = COMPOUND_STRING("Subject Pronoun"),
        .options = {
            [PRONOUN_SUBJECT_THEY] = COMPOUND_STRING("They"),
            [PRONOUN_SUBJECT_HE] = COMPOUND_STRING("He"),
            [PRONOUN_SUBJECT_SHE] = COMPOUND_STRING("She"),
            [PRONOUN_SUBJECT_CUSTOM] = COMPOUND_STRING("Custom {A_BUTTON}"),
        },
        .numOptions = PRONOUN_SUBJECT_COUNT,
    },
    [CUSTOMIZATION_OBJECT_PRONOUN] =
    {
        .title = COMPOUND_STRING("Object Pronoun"),
        .options = {
            [PRONOUN_OBJECT_THEM] = COMPOUND_STRING("Them"),
            [PRONOUN_OBJECT_HIM] = COMPOUND_STRING("Him"),
            [PRONOUN_OBJECT_HER] = COMPOUND_STRING("Her"),
            [PRONOUN_OBJECT_CUSTOM] = COMPOUND_STRING("Custom {A_BUTTON}"),
        },
        .numOptions = PRONOUN_OBJECT_COUNT,
    },
    [CUSTOMIZATION_POSSESIVE_PRONOUN] =
    {
        .title = COMPOUND_STRING("Possessive Pronoun"),
        .options = {
            [PRONOUN_POSSESSIVE_THEIR] = COMPOUND_STRING("Their"),
            [PRONOUN_POSSESSIVE_HIS] = COMPOUND_STRING("His"),
            [PRONOUN_POSSESSIVE_HER] = COMPOUND_STRING("Hers"),
            [PRONOUN_POSSESSIVE_CUSTOM] = COMPOUND_STRING("Custom {A_BUTTON}"),
        },
        .numOptions = PRONOUN_POSSESSIVE_COUNT,
    },
};

const struct CustomizationData Custom_Color_Options[NUM_COLOR_OPTIONS] =
{
    [OPTION_COLOR_RED] =
    {
        .title = COMPOUND_STRING("Red Value"),
        .options = {
            [0] = COMPOUND_STRING("0"),
            [1] = COMPOUND_STRING("1"),
            [2] = COMPOUND_STRING("2"),
            [3] = COMPOUND_STRING("3"),
            [4] = COMPOUND_STRING("4"),
            [5] = COMPOUND_STRING("5"),
            [6] = COMPOUND_STRING("6"),
            [7] = COMPOUND_STRING("7"),
            [8] = COMPOUND_STRING("8"),
            [9] = COMPOUND_STRING("9"),
            [10] = COMPOUND_STRING("10"),
        },
        .numOptions = NUM_COLOR_LEVEL,
    },
    [OPTION_COLOR_GREEN] =
    {
        .title = COMPOUND_STRING("Green Value"),
        .options = {
            [0] = COMPOUND_STRING("0"),
            [1] = COMPOUND_STRING("1"),
            [2] = COMPOUND_STRING("2"),
            [3] = COMPOUND_STRING("3"),
            [4] = COMPOUND_STRING("4"),
            [5] = COMPOUND_STRING("5"),
            [6] = COMPOUND_STRING("6"),
            [7] = COMPOUND_STRING("7"),
            [8] = COMPOUND_STRING("8"),
            [9] = COMPOUND_STRING("9"),
            [10] = COMPOUND_STRING("10"),
        },
        .numOptions = NUM_COLOR_LEVEL,
    },
    [OPTION_COLOR_BLUE] =
    {
        .title = COMPOUND_STRING("Blue Value"),
        .options = {
            [0] = COMPOUND_STRING("0"),
            [1] = COMPOUND_STRING("1"),
            [2] = COMPOUND_STRING("2"),
            [3] = COMPOUND_STRING("3"),
            [4] = COMPOUND_STRING("4"),
            [5] = COMPOUND_STRING("5"),
            [6] = COMPOUND_STRING("6"),
            [7] = COMPOUND_STRING("7"),
            [8] = COMPOUND_STRING("8"),
            [9] = COMPOUND_STRING("9"),
            [10] = COMPOUND_STRING("10"),
        },
        .numOptions = NUM_COLOR_LEVEL,
    },
};

static const u8 sMenuSelector[] = INCBIN_U8("graphics/ui_menus/character_customization/selector.4bpp");

static const u8 sText_Title_Text[] = _("Character Customization");
static const u8 sText_Custom[] = _("Custom");
static const u8 sText_Custom_Pronoun_Text[] = _("{STR_VAR_1} {A_BUTTON}");
static const u8 sText_Help_Bar[] = _("{DPAD_LEFTRIGHT} Change {A_BUTTON} Colors {B_BUTTON} Discard {START_BUTTON} Save");
static const u8 sText_CustomColorText[] = _("{STR_VAR_1}/{STR_VAR_2}");
static const u8 sText_Cancel[] = _("Cancel");
static const u8 sText_Custom_Color_Help_Bar[] = _("{DPAD_LEFTRIGHT} Adjust Color {A_BUTTON} Back");
static const u8 sText_Leave_Dialog[] = _("Exit without saving? {A_BUTTON} Leave {B_BUTTON} Cancel {START_BUTTON} Save");

static void PrintToWindow(u8 colorIdx)
{
    u8 i;
    u8* end;
    u32 windowWidth = 0;
    u32 x, y;
    enum CustomizeWindows windowId;

    for (enum CustomizeWindows windowId = 0; windowId < CUSTOM_WINDOW_COUNT; windowId++)
        FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if(!sMenuDataPtr->isCustomPaletteScren){
        // Selector Sprite --------------------------------------------------------------------------------------------------------------------
        x = 1;
        windowId = CUSTOM_WINDOW_OPTIONS;
        y = 2 + (17 * (sMenuDataPtr->cursorPlace - sMenuDataPtr->currentFirstOption ));

        BlitBitmapToWindow(windowId, sMenuSelector, x, y, 96, 24);

        //Options Title
        x = 8;
        y = 6;
        windowWidth = 80;
        for(i = 0; i < NUM_MAX_CUSTOMIZATION_PARTS_ON_SCREEN; i++)
        {
            end = StringCopy(gStringVar4,Customization_Options[sMenuDataPtr->currentFirstOption + i].title);
            PrependFontIdToFit(gStringVar4,end,0,windowWidth);

            AddTextPrinterParameterized4(windowId, 8, x, y + (i*17), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, gStringVar4);
        }

        //Options Configuration

        for(i = 0; i < NUM_MAX_CUSTOMIZATION_PARTS_ON_SCREEN; i++)
        {
            end = StringCopy(gStringVar4, Customization_Options[sMenuDataPtr->currentFirstOption + i].options[gSaveBlock3Ptr->customizationValues[sMenuDataPtr->currentFirstOption + i]]);

            if((sMenuDataPtr->currentFirstOption + i == CUSTOMIZATION_SUBJECT_PRONOUN ||
                        sMenuDataPtr->currentFirstOption + i == CUSTOMIZATION_OBJECT_PRONOUN ||
                        sMenuDataPtr->currentFirstOption + i == CUSTOMIZATION_POSSESIVE_PRONOUN) &&
                    gSaveBlock3Ptr->customizationValues[sMenuDataPtr->currentFirstOption + i] == (Customization_Options[sMenuDataPtr->currentFirstOption + i].numOptions - 1)){
                switch(sMenuDataPtr->currentFirstOption + i){
                    case CUSTOMIZATION_SUBJECT_PRONOUN:
                        if(HasCustomSubjectPronounBeenModified()){
                            StringCopy(gStringVar1, gSaveBlock3Ptr->playerSubjectPronoun);
                            end = StringExpandPlaceholders(gStringVar4, sText_Custom_Pronoun_Text);
                        }
                        else{
                            StringCopy(gStringVar1, gText_Custom);
                            end = StringExpandPlaceholders(gStringVar4, sText_Custom_Pronoun_Text);
                        }
                        break;
                    case CUSTOMIZATION_OBJECT_PRONOUN:
                        if(HasCustomObjectPronounBeenModified()){
                            StringCopy(gStringVar1, gSaveBlock3Ptr->playerObjectPronoun);
                            end = StringExpandPlaceholders(gStringVar4, sText_Custom_Pronoun_Text);
                        }
                        else{
                            StringCopy(gStringVar1, gText_Custom);
                            end = StringExpandPlaceholders(gStringVar4, sText_Custom_Pronoun_Text);
                        }
                        break;
                    case CUSTOMIZATION_POSSESIVE_PRONOUN:
                        if(HasCustomPossesivePronounBeenModified()){
                            StringCopy(gStringVar1, gSaveBlock3Ptr->playerPosesivePronoun);
                            end = StringExpandPlaceholders(gStringVar4, sText_Custom_Pronoun_Text);
                        }
                        else{
                            StringCopy(gStringVar1, gText_Custom);
                            end = StringExpandPlaceholders(gStringVar4, sText_Custom_Pronoun_Text);
                        }
                        break;
                }
            }

            windowWidth = 41;
            PrependFontIdToFit(gStringVar4,end,0,windowWidth);
            x = 14;
            y = 6;
            windowId = CUSTOM_WINDOW_VALUES;

            AddTextPrinterParameterized4(windowId, 8, x, y + (i * 17), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, gStringVar4);
        }

        // Help Bar --------------------------------------------------------------------------------------------------------------------
        x = 0;
        y = 0;
        windowId = CUSTOM_WINDOW_FOOTER;

        switch(sMenuDataPtr->DrawnDialogue){
            case DRAWN_DIALOGUE_HELP_BAR:
                AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, sText_Help_Bar);
            break;
            case DRAWN_DIALOGUE_LEAVE_DIALOG:
                AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, sText_Leave_Dialog);
            break;
        }
    }
    else{
        // Selector Sprite --------------------------------------------------------------------------------------------------------------------

        x = 1;
        windowId = CUSTOM_WINDOW_OPTIONS;
        y = 2 + (17 * (sMenuDataPtr->cursorPlaceInCustomPaletteScren));
        BlitBitmapToWindow(windowId, sMenuSelector, x, y, 96, 24);

        //Options Title
        x = 8;
        y = 6;
        for(i = 0; i < NUM_COLOR_OPTIONS; i++){
            AddTextPrinterParameterized4(windowId, 8, x, y + (i*17), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, Custom_Color_Options[i].title);
        }

        //Cancel Text
        AddTextPrinterParameterized4(windowId, 8, x, y + (NUM_COLOR_OPTIONS * 17), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, sText_Cancel);

        //Options Configuration
        x = 14;
        y = 6;
        windowId = CUSTOM_WINDOW_VALUES;
        windowWidth = 41;
        for(i = 0; i < NUM_COLOR_OPTIONS; i++){
            end = StringCopy(gStringVar1,Custom_Color_Options[i].options[gSaveBlock3Ptr->rgbValues[sMenuDataPtr->cursorPlace][i]]);
            PrependFontIdToFit(gStringVar1,end,0,windowWidth);
            AddTextPrinterParameterized4(windowId, 8, x, y + (i * 17), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, gStringVar1);
        }


        // Help Bar --------------------------------------------------------------------------------------------------------------------
        x = 0;
        y = 0;
        windowId = CUSTOM_WINDOW_FOOTER;

        switch(sMenuDataPtr->DrawnDialogue){
            case DRAWN_DIALOGUE_HELP_BAR:
                AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, sText_Help_Bar);
            break;
            case DRAWN_DIALOGUE_LEAVE_DIALOG:
                AddTextPrinterParameterized4(windowId, 8, (x*8)+4, (y*8), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, sText_Leave_Dialog);
            break;
        }
    }
    // Title --------------------------------------------------------------------------------------------------------------------
        x = 0;
        y = 0;
        windowId = CUSTOM_WINDOW_HEADER;
        AddTextPrinterParameterized4(windowId, 8, (x*8) + 4, (y*8), 0, 0, sMenuWindowFontColors[FONT_CUSTOM_WHITE], SPRITE_NONE, sText_Title_Text);

    for (enum CustomizeWindows windowId = 0; windowId < CUSTOM_WINDOW_COUNT; windowId++)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, 3);
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
        SetMainCallback2(sMenuDataPtr->savedCallback);
        Menu_FreeResources();
        DestroyTask(taskId);
    }
}

static void Character_Customization_Util_Trainer_Pronoun(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    u8 namingScreenTypes[] =
    {
        [CUSTOMIZATION_SUBJECT_PRONOUN]   = NAMING_SCREEN_SUBJECT_PRONOUN,
        [CUSTOMIZATION_OBJECT_PRONOUN]    = NAMING_SCREEN_OBJECT_PRONOUN,
        [CUSTOMIZATION_POSSESIVE_PRONOUN] = NAMING_SCREEN_POSSESIVE_PRONOUN,
    };

    u8* pronounBuffers[] =
    {
        [CUSTOMIZATION_SUBJECT_PRONOUN]   = gSaveBlock3Ptr->playerSubjectPronoun,
        [CUSTOMIZATION_OBJECT_PRONOUN]    = gSaveBlock3Ptr->playerObjectPronoun,
        [CUSTOMIZATION_POSSESIVE_PRONOUN] = gSaveBlock3Ptr->playerPosesivePronoun,
    };

    u32 cursor = sMenuDataPtr->cursorPlace;
    // PSF TODO it would be nice if after leaving this screen, the cursor returned you to where you were, but I'm fairly certain this requires a refactor
    DoNamingScreen(namingScreenTypes[cursor], pronounBuffers[cursor], gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnToCostumizationMenu);
    Menu_FreeResources();
}

/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    if(JOY_NEW(DPAD_DOWN) && sMenuDataPtr->DrawnDialogue != DRAWN_DIALOGUE_LEAVE_DIALOG)
    {
        PressedDownButton();
        PrintToWindow(FONT_CUSTOM_BLACK);
    }

    if(JOY_NEW(DPAD_UP) && sMenuDataPtr->DrawnDialogue != DRAWN_DIALOGUE_LEAVE_DIALOG)
    {
        PressedUpButton();
        PrintToWindow(FONT_CUSTOM_BLACK);
    }

    if(JOY_NEW(DPAD_RIGHT) && sMenuDataPtr->DrawnDialogue != DRAWN_DIALOGUE_LEAVE_DIALOG)
    {
        if(!sMenuDataPtr->isCustomPaletteScren)
        {
            if(gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace] == (Customization_Options[sMenuDataPtr->cursorPlace].numOptions - 1))
                gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace] = 0;
            else
                gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace]++;
        }
        else
        {
            if(gSaveBlock3Ptr->rgbValues[sMenuDataPtr->cursorPlace][sMenuDataPtr->cursorPlaceInCustomPaletteScren] == (Custom_Color_Options[sMenuDataPtr->cursorPlaceInCustomPaletteScren].numOptions - 1))
                gSaveBlock3Ptr->rgbValues[sMenuDataPtr->cursorPlace][sMenuDataPtr->cursorPlaceInCustomPaletteScren] = 0;
            else
                gSaveBlock3Ptr->rgbValues[sMenuDataPtr->cursorPlace][sMenuDataPtr->cursorPlaceInCustomPaletteScren]++;
        }

        if(sMenuDataPtr->cursorPlace == CUSTOMIZATION_BODY_TYPE && !sMenuDataPtr->isCustomPaletteScren)
            CreateTrainerSprites();
        else
            RecolorPlayerCharacters(gSprites[sMenuDataPtr->spriteIDs[SPRITE_TRAINER_FRONT_SPRITE]].oam.paletteNum);
        PrintToWindow(FONT_CUSTOM_BLACK);
    }

    if(JOY_NEW(DPAD_LEFT) && sMenuDataPtr->DrawnDialogue != DRAWN_DIALOGUE_LEAVE_DIALOG)
    {
        if(!sMenuDataPtr->isCustomPaletteScren)
        {
            if(gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace] == 0)
                gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace] = (Customization_Options[sMenuDataPtr->cursorPlace].numOptions - 1);
            else
                gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace]--;
        }
        else
        {
            if(gSaveBlock3Ptr->rgbValues[sMenuDataPtr->cursorPlace][sMenuDataPtr->cursorPlaceInCustomPaletteScren] == 0)
                gSaveBlock3Ptr->rgbValues[sMenuDataPtr->cursorPlace][sMenuDataPtr->cursorPlaceInCustomPaletteScren] = (Custom_Color_Options[sMenuDataPtr->cursorPlaceInCustomPaletteScren].numOptions - 1);
            else
                gSaveBlock3Ptr->rgbValues[sMenuDataPtr->cursorPlace][sMenuDataPtr->cursorPlaceInCustomPaletteScren]--;
        }

        if(sMenuDataPtr->cursorPlace == CUSTOMIZATION_BODY_TYPE && !sMenuDataPtr->isCustomPaletteScren)
            CreateTrainerSprites();
        else
            RecolorPlayerCharacters(gSprites[sMenuDataPtr->spriteIDs[SPRITE_TRAINER_FRONT_SPRITE]].oam.paletteNum);
        PrintToWindow(FONT_CUSTOM_BLACK);
    }

    if(JOY_NEW(A_BUTTON))
    {
        if(!sMenuDataPtr->isCustomPaletteScren)
        {
            if(sMenuDataPtr->DrawnDialogue == DRAWN_DIALOGUE_LEAVE_DIALOG)
            {
                PlaySE(SE_PC_OFF);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                ResetSaveBlockCustomizationDataBeforeExit();
                gTasks[taskId].func = Task_MenuTurnOff;
            }
            else if(gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace] == (Customization_Options[sMenuDataPtr->cursorPlace].numOptions - 1) &&
                    sMenuDataPtr->cursorPlace != CUSTOMIZATION_BODY_TYPE &&
                    sMenuDataPtr->cursorPlace != CUSTOMIZATION_OBJECT_PRONOUN &&
                    sMenuDataPtr->cursorPlace != CUSTOMIZATION_SUBJECT_PRONOUN &&
                    sMenuDataPtr->cursorPlace != CUSTOMIZATION_POSSESIVE_PRONOUN)
            {
                PlaySE(SE_SELECT);
                sMenuDataPtr->isCustomPaletteScren = !sMenuDataPtr->isCustomPaletteScren;
                sMenuDataPtr->cursorPlaceInCustomPaletteScren = 0;
            }
            else if(gSaveBlock3Ptr->customizationValues[sMenuDataPtr->cursorPlace] == (Customization_Options[sMenuDataPtr->cursorPlace].numOptions - 1) &&
                    (sMenuDataPtr->cursorPlace == CUSTOMIZATION_OBJECT_PRONOUN ||
                     sMenuDataPtr->cursorPlace == CUSTOMIZATION_SUBJECT_PRONOUN ||
                     sMenuDataPtr->cursorPlace == CUSTOMIZATION_POSSESIVE_PRONOUN))
            {
                PlaySE(SE_SELECT);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Character_Customization_Util_Trainer_Pronoun;
            }
        }
        else
        {
            PlaySE(SE_SELECT);
            sMenuDataPtr->isCustomPaletteScren = !sMenuDataPtr->isCustomPaletteScren;
            sMenuDataPtr->cursorPlaceInCustomPaletteScren = 0;
        }
        PrintToWindow(FONT_CUSTOM_BLACK);
    }

    if (JOY_NEW(B_BUTTON))
    {
        if(!sMenuDataPtr->isCustomPaletteScren)
        {
            if(HasCustomizationDataBeenModified())
                sMenuDataPtr->DrawnDialogue = !sMenuDataPtr->DrawnDialogue;
            else
            {
                PlaySE(SE_PC_OFF);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                ResetSaveBlockCustomizationDataBeforeExit();
                gTasks[taskId].func = Task_MenuTurnOff;
            }
        }
        else
        {
            PlaySE(SE_SELECT);
            sMenuDataPtr->isCustomPaletteScren = !sMenuDataPtr->isCustomPaletteScren;
            sMenuDataPtr->cursorPlaceInCustomPaletteScren = 0;
        }
        PrintToWindow(FONT_CUSTOM_BLACK);
    }

    if (JOY_NEW(START_BUTTON))
    {
        if(!sMenuDataPtr->isCustomPaletteScren)
        {
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_MenuTurnOff;
        }
        PrintToWindow(FONT_CUSTOM_BLACK);
    }

    sMenuDataPtr->CurrentDirectionFrames++;
    if(sMenuDataPtr->CurrentDirectionFrames % NUM_MOVEMENT_FRAMES == 0)
    {
        if(sMenuDataPtr->CurrentDirectionFrames > (NUM_SEQUENCES * NUM_MOVEMENT_FRAMES) - 1)
        {
            sMenuDataPtr->CurrentDirectionFrames = 0;
        }

        DoOverworldSpriteAnimation();
    }
}

void CustomizeCharacterFromOverworld(void)
{
    Character_Customization_Menu_Init(CB2_ReturnToFieldContinueScript);
}

bool32 IsBackPicForSiliconPlayer(u32 picId)
{
    for (u32 picIndex = 0; picIndex < NUM_BODY_TYPES; picIndex++)
        if (picId == TRAINER_BACK_PIC_SILICON_PLAYER_M1 + picIndex)
            return TRUE;

    return FALSE;
}

void SetPlayerBackSlidePicPalette(u32 battler, struct Sprite *sprite)
{
    if (GetBattlerPosition(battler) == B_POSITION_PLAYER_LEFT)
        RecolorPlayerCharacters(sprite->oam.paletteNum);
}

void SetPlayerBackPicPalette(u32 picId, struct Sprite *sprite)
{
    if (IsBackPicForSiliconPlayer(picId))
        RecolorPlayerCharacters(sprite->oam.paletteNum);
}

void SetPlayerPalette(u32 paletteTag, struct Sprite *sprite)
{
    if (paletteTag == OBJ_EVENT_PAL_TAG_SILICON)
        RecolorPlayerCharacters(sprite->oam.paletteNum);
    // PSF TODO this should only happen in the overworld... how?
    //UpdatePalettesWithTime(PALETTES_ALL);
}

void SetPlayerAvatarToChampion(void)
{
    gSaveBlock3Ptr->customizationValues[CUSTOMIZATION_BODY_TYPE] = BODY_TYPE_CHAMPION;

    for (enum CustomizationOptions optionIndex = 1; optionIndex <  NUM_CUSTOM_COLOR_OPTIONS; optionIndex++)
        for (enum OptionColorRGB colorIndex = 0; colorIndex < NUM_COLOR_OPTIONS; colorIndex++)
            gSaveBlock3Ptr->rgbValues[optionIndex][colorIndex] = (Random() %  NUM_COLOR_LEVEL);
}

static const u16 sSkinColorList[] =
{
    [SKIN_COLOR_PALE_IVORY] = RGB2GBA(255, 231, 205),
    [SKIN_COLOR_PORCELAIN] = RGB2GBA(240, 213, 187),
    [SKIN_COLOR_FAIR] = RGB2GBA(225, 184, 153),
    [SKIN_COLOR_WARM_IVORY] = RGB2GBA(210, 170, 140),
    [SKIN_COLOR_SAND] = RGB2GBA(195, 156, 128),
    [SKIN_COLOR_PEACH] = RGB2GBA(232, 190, 163),
    [SKIN_COLOR_ROSE] = RGB2GBA(200, 150, 120),
    [SKIN_COLOR_DANDELION] = RGB2GBA(218,202,126),
    [SKIN_COLOR_GOLDEN] = RGB2GBA(180, 140, 110),
    [SKIN_COLOR_OLIVE] = RGB2GBA(160, 130, 95),
    [SKIN_COLOR_CARAMEL] = RGB2GBA(170, 110, 80),
    [SKIN_COLOR_HONEY] = RGB2GBA(150, 90, 60),
    [SKIN_COLOR_AMBER] = RGB2GBA(130, 80, 50),
    [SKIN_COLOR_MAHOGANY] = RGB2GBA(110, 60, 40),
    [SKIN_COLOR_SIENNA] = RGB2GBA(90, 50, 30),
    [SKIN_COLOR_BRONZE] = RGB2GBA(70, 40, 20),
    [SKIN_COLOR_ESPRESSO] = RGB2GBA(60, 30, 15),
    [SKIN_COLOR_EBONY] = RGB2GBA(40, 20, 10),
    [SKIN_COLOR_COCOA] = RGB2GBA(30, 15, 10),
};

static const u16 sHairColorList[] =
{
    [HAIR_COLOR_GOLD] = RGB2GBA(212, 175, 55),
    [HAIR_COLOR_DARK_BROWN] = RGB2GBA(60, 40, 20),
    [HAIR_COLOR_ASH_BROWN] = RGB2GBA(130, 110, 90),
    [HAIR_COLOR_LIGHT_BROWN] = RGB2GBA(150, 110, 70),
    [HAIR_COLOR_PLATINUM] = RGB2GBA(230, 230, 210),
    [HAIR_COLOR_PINK_BROWN] = RGB2GBA(190, 130, 130),
    [HAIR_COLOR_WINE_RED] = RGB2GBA(100, 30, 50),
    [HAIR_COLOR_GREEN] = RGB2GBA(50, 130, 70),
    [HAIR_COLOR_WHITE] = RGB2GBA(255, 255, 255),
    [HAIR_COLOR_PINK] = RGB2GBA(255, 160, 180),
    [HAIR_COLOR_BLUE] = RGB2GBA(60, 100, 220),
    [HAIR_COLOR_RED] = RGB2GBA(180, 50, 40),
    [HAIR_COLOR_SMOKY_PINK] = RGB2GBA(200, 150, 160),
    [HAIR_COLOR_BLUE_GREEN] = RGB2GBA(50, 150, 160),
    [HAIR_COLOR_LAVENDER] = RGB2GBA(200, 150, 220),
    [HAIR_COLOR_VIOLET] = RGB2GBA(130, 70, 180),
    [HAIR_COLOR_SCARLET] = RGB2GBA(200, 30, 40),
    [HAIR_COLOR_SILVER] = RGB2GBA(180, 180, 190),
    [HAIR_COLOR_ASH_PURPLE] = RGB2GBA(130, 110, 150),
    [HAIR_COLOR_ASH_WHITE] = RGB2GBA(220, 220, 220),
    [HAIR_COLOR_ASH_BLOND] = RGB2GBA(200, 180, 150),
    [HAIR_COLOR_ASH_GREEN] = RGB2GBA(120, 140, 110),
    [HAIR_COLOR_DARK_DENIM] = RGB2GBA(40, 70, 110),
    [HAIR_COLOR_DENIM] = RGB2GBA(70, 100, 150),
    [HAIR_COLOR_LIGHT_DENIM] = RGB2GBA(120, 150, 190),
    [HAIR_COLOR_BLACK] = RGB2GBA(30, 20, 10),
};

static const u16 sOutfitColorList[] =
{
    [OUTFIT_COLOR_SCARLET] = RGB2GBA(224,136,64),
    [OUTFIT_COLOR_BLACK] = RGB2GBA(39,45,39),
    [OUTFIT_COLOR_WHITE] = RGB2GBA(248,248,248),
    [OUTFIT_COLOR_GOLDEN] = RGB2GBA(248,192,72),
    [OUTFIT_COLOR_RUBY] = RGB2GBA(232,96,64),
    [OUTFIT_COLOR_EMERALD] = RGB2GBA(94,138,79),
    [OUTFIT_COLOR_SAPPHIRE] = RGB2GBA(63,102,213),
    [OUTFIT_COLOR_VIOLET] = RGB2GBA(128,88,152),
    [OUTFIT_COLOR_SILVER] = RGB2GBA(168,176,168),
};

void SetCustomPlayerPalette(u16 *palette, u8 (*rgbValues)[NUM_CUSTOM_COLOR_OPTIONS][NUM_COLOR_OPTIONS], u8 (*customizationValues)[NUM_CUSTOMIZATION_PARTS])
{
    s32 r, g, b, i;
    u8 tone = Q_8_8(0.6);
    bool8 disableCustomSkinColor = FALSE;
    bool8 disableCustomHairColor = FALSE;
    bool8 disableCustomPrimaryColor = FALSE;
    bool8 disableCustomSecondaryColor = FALSE;
    //Skin
    u8 rToneSkin = (*rgbValues)[CUSTOMIZATION_SKIN_COLOR][OPTION_COLOR_RED];
    u8 gToneSkin = (*rgbValues)[CUSTOMIZATION_SKIN_COLOR][OPTION_COLOR_GREEN];
    u8 bTonSkin = (*rgbValues)[CUSTOMIZATION_SKIN_COLOR][OPTION_COLOR_BLUE];
    //Hair
    u8 rToneHair = (*rgbValues)[CUSTOMIZATION_HAIR_COLOR][OPTION_COLOR_RED];
    u8 gToneHair = (*rgbValues)[CUSTOMIZATION_HAIR_COLOR][OPTION_COLOR_GREEN];
    u8 bTonHair = (*rgbValues)[CUSTOMIZATION_HAIR_COLOR][OPTION_COLOR_BLUE];
    //Primary
    u8 rTonePrimary = (*rgbValues)[CUSTOMIZATION_PRIMARY_COLOR][OPTION_COLOR_RED];
    u8 gTonePrimary = (*rgbValues)[CUSTOMIZATION_PRIMARY_COLOR][OPTION_COLOR_GREEN];
    u8 bTonPrimary = (*rgbValues)[CUSTOMIZATION_PRIMARY_COLOR][OPTION_COLOR_BLUE];
    //Secondary
    u8 rToneSecondary = (*rgbValues)[CUSTOMIZATION_SECONDARY_COLOR][OPTION_COLOR_RED];
    u8 gToneSecondary = (*rgbValues)[CUSTOMIZATION_SECONDARY_COLOR][OPTION_COLOR_GREEN];
    u8 bTonSecondary = (*rgbValues)[CUSTOMIZATION_SECONDARY_COLOR][OPTION_COLOR_BLUE];


    //Skin
    if((*customizationValues)[CUSTOMIZATION_SKIN_COLOR] != NUM_SKIN_COLOR - 1){
        rToneSkin = GET_R(sSkinColorList[(*customizationValues)[CUSTOMIZATION_SKIN_COLOR]]);
        gToneSkin = GET_G(sSkinColorList[(*customizationValues)[CUSTOMIZATION_SKIN_COLOR]]);
        bTonSkin = GET_B(sSkinColorList[(*customizationValues)[CUSTOMIZATION_SKIN_COLOR]]);
    }
    else{
        rToneSkin = rToneSkin*2 + 5;
        gToneSkin = gToneSkin*2 + 5;
        bTonSkin = bTonSkin*2 + 5;
    }
    //disableCustomSkinColor = TRUE;

    //Hair Color
    if((*customizationValues)[CUSTOMIZATION_HAIR_COLOR] != NUM_HAIR_COLOR - 1){
        rToneHair = GET_R(sHairColorList[(*customizationValues)[CUSTOMIZATION_HAIR_COLOR]]);
        gToneHair = GET_G(sHairColorList[(*customizationValues)[CUSTOMIZATION_HAIR_COLOR]]);
        bTonHair = GET_B(sHairColorList[(*customizationValues)[CUSTOMIZATION_HAIR_COLOR]]);
    }
    else{
        rToneHair = (rToneHair * 2) + 5;
        gToneHair = (gToneHair * 2) + 5;
        bTonHair  = (bTonHair  * 2) + 5;
    }
    //disableCustomHairColor = TRUE;

    //Outfit Color - Primary Color
    if((*customizationValues)[CUSTOMIZATION_PRIMARY_COLOR] != NUM_PRIMARY_COLOR - 1){
                rTonePrimary = GET_R(sOutfitColorList[(*customizationValues)[CUSTOMIZATION_PRIMARY_COLOR]]);
        gTonePrimary = GET_G(sOutfitColorList[(*customizationValues)[CUSTOMIZATION_PRIMARY_COLOR]]);
        bTonPrimary = GET_B(sOutfitColorList[(*customizationValues)[CUSTOMIZATION_PRIMARY_COLOR]]);

    }
    else{
        rTonePrimary = (rTonePrimary * 2) + 5;
        gTonePrimary = (gTonePrimary * 2) + 5;
        bTonPrimary  = (bTonPrimary  * 2) + 5;
    }

    //disableCustomPrimaryColor = TRUE;

    //Outfit Color - Primary Color
    if((*customizationValues)[CUSTOMIZATION_SECONDARY_COLOR] != NUM_PRIMARY_COLOR - 1){
                rToneSecondary = GET_R(sOutfitColorList[(*customizationValues)[CUSTOMIZATION_SECONDARY_COLOR]]);
        gToneSecondary = GET_G(sOutfitColorList[(*customizationValues)[CUSTOMIZATION_SECONDARY_COLOR]]);
        bTonSecondary = GET_B(sOutfitColorList[(*customizationValues)[CUSTOMIZATION_SECONDARY_COLOR]]);

    }
    else{
        rToneSecondary = (rToneSecondary * 2) + 5;
        gToneSecondary = (gToneSecondary * 2) + 5;
        bTonSecondary  = (bTonSecondary  * 2) + 5;
    }

    for (i = 0; i < PLAYER_PALETTE_COUNT; i++, *palette++)
    {
        r = GET_R(*palette);
        g = GET_G(*palette);
        b = GET_B(*palette);

        switch(i)
        {
            case PLAYER_OUTLINE_COLOR_BLACK:
                r = 0;
                g = 0;
                b = 0;
                break;
            case PLAYER_OUTLINE_COLOR_DARK_GRAY:
                r = 7;
                g = 8;
                b = 10;
                break;
            case PLAYER_OUTLINE_COLOR_WHITE:
                r = 31;
                g = 31;
                b = 31;
                break;
            case PLAYER_OUTLINE_COLOR_LIGHT_GRAY:
                r = 13;
                g = 15;
                b = 16;
                break;
            case PLAYER_SKIN_COLOR_1:
                if(!disableCustomSkinColor){
                    r = rToneSkin;
                    g = gToneSkin;
                    b = bTonSkin;
                }
                break;
            case PLAYER_SKIN_COLOR_2:
                if(!disableCustomSkinColor){
                    r = rToneSkin;
                    g = gToneSkin;
                    b = bTonSkin;

                    r = (u16)((tone * r)) >> 8;
                    g = (u16)((tone * g)) >> 8;
                    b = (u16)((tone * b)) >> 8;
                }
                break;
            case PLAYER_SKIN_COLOR_3:
                if(!disableCustomSkinColor){
                    r = rToneSkin;
                    g = gToneSkin;
                    b = bTonSkin;

                    r = (u16)((tone * r)/2) >> 8;
                    g = (u16)((tone * g)/2) >> 8;
                    b = (u16)((tone * b)/2) >> 8;
                }
                break;
                //Hair
            case PLAYER_HAIR_COLOR_1:
                if(!disableCustomHairColor){
                    r = rToneHair;
                    g = gToneHair;
                    b = bTonHair;
                }
                break;
            case PLAYER_HAIR_COLOR_2:
                if(!disableCustomHairColor){
                    r = rToneHair;
                    g = gToneHair;
                    b = bTonHair;

                    r = (u16)((tone * r)) >> 8;
                    g = (u16)((tone * g)) >> 8;
                    b = (u16)((tone * b)) >> 8;
                }
                break;
            case PLAYER_HAIR_COLOR_3:
                if(!disableCustomHairColor){
                    r = rToneHair;
                    g = gToneHair;
                    b = bTonHair;

                    r = (u16)((tone * r)/2) >> 8;
                    g = (u16)((tone * g)/2) >> 8;
                    b = (u16)((tone * b)/2) >> 8;
                }
                break;
                //Primary
            case PLAYER_PRIMARY_COLOR_1:
                if(!disableCustomPrimaryColor){
                    r = rTonePrimary;
                    g = gTonePrimary;
                    b = bTonPrimary;
                }
                break;
            case PLAYER_PRIMARY_COLOR_2:
                if(!disableCustomPrimaryColor){
                    r = rTonePrimary;
                    g = gTonePrimary;
                    b = bTonPrimary;

                    r = (u16)((tone * r)) >> 8;
                    g = (u16)((tone * g)) >> 8;
                    b = (u16)((tone * b)) >> 8;
                }
                break;
                /*
            case PLAYER_PRIMARY_COLOR_3:
                if(!disableCustomPrimaryColor){
                    r = rTonePrimary;
                    g = gTonePrimary;
                    b = bTonPrimary;

                    r = (u16)((tone * r)/2) >> 8;
                    g = (u16)((tone * g)/2) >> 8;
                    b = (u16)((tone * b)/2) >> 8;
                }
                break;
                */
                //Secondary
            case PLAYER_SECONDARY_COLOR_1:
                if(!disableCustomSecondaryColor){
                    r = rToneSecondary*2 + 5;
                    g = gToneSecondary*2 + 5;
                    b = bTonSecondary*2 + 5;
                }
                break;
            case PLAYER_SECONDARY_COLOR_2:
                if(!disableCustomSecondaryColor){
                    r = rToneSecondary*2 + 5;
                    g = gToneSecondary*2 + 5;
                    b = bTonSecondary*2 + 5;

                    r = (u16)((tone * r)) >> 8;
                    g = (u16)((tone * g)) >> 8;
                    b = (u16)((tone * b)) >> 8;
                }
                break;
            case PLAYER_SECONDARY_COLOR_3:
                if(!disableCustomSecondaryColor){
                    r = rToneSecondary*2 + 5;
                    g = gToneSecondary*2 + 5;
                    b = bTonSecondary*2 + 5;

                    r = (u16)((tone * r)/2) >> 8;
                    g = (u16)((tone * g)/2) >> 8;
                    b = (u16)((tone * b)/2) >> 8;
                }
                break;
            default:
                break;
        }

        if (r > 31)
            r = 31;
        if (g > 31)
            g = 31;
        if (b > 31)
            b = 31;

        *palette = RGB2(r, g, b);
    }
}

void CB2_ReturnToCostumizationMenu(void)
{
    FieldClearVBlankHBlankCallbacks();
    Character_Customization_Menu_Init(CB2_StartMenu_ReturnToUI);
}
