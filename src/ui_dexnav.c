#include "global.h"
#include "battle.h"
#include "bg.h"
#include "daycare.h"
#include "dexnav.h"
#include "dma3.h"
#include "event_data.h"
#include "fieldmap.h"
#include "field_effect.h"
#include "frontier_pass.h"
#include "gpu_regs.h"
#include "item_use.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "options_visual.h"
#include "overworld.h"
#include "palette.h"
#include "pokedex.h"
#include "pokemon_icon.h"
#include "region_map.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "trainer_pokemon_sprites.h"
#include "tv.h"
#include "ui_adventure_guide.h"
#include "ui_dexnav.h"
#include "ui_pokedex.h"
#include "ui_start_menu.h"
#include "wild_encounter.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/ui_adventure_guide.h"

static void Dexnav_RestoreFromSave(struct DexnavSavedData savedData);
static bool8 Dexnav_IsThereSavedData(void);
static enum DexnavHabitats Dexnav_GetSavedHabitat(void);
static u8 Dexnav_GetSavedCursorPosition(void);
static u16 Dexnav_GetSavedSpecies(void);
static void Dexnav_VBlankCB(void);
static void Dexnav_MainCB(void);
static bool8 Dexnav_InitalizeBackgrounds(void);
static void Dexnav_ReturnFromAdventureGuide(void);
static void Dexnav_SetSavedHabitat(enum DexnavHabitats habitat);
static void Dexnav_SetSavedCursorPosition(u32 cursorPosition);
static void Dexnav_RegisterCurrentlySelectedMon(void);
static void Dexnav_SetSavedSpecies(u32 species);
static void Dexnav_SetSavedCallback(void* callback);
static bool8 Dexnav_AllocateStructs(void);
static bool8 AllocZeroedTilemapBuffers(void);
static void Dexnav_SaveSpriteId(enum DexnavSpriteIds spriteId, u32 id);
static u32 Dexnav_GetSpriteId(enum DexnavSpriteIds spriteId);
static void Dexnav_ResetAllSpriteIds(void);
static void HandleAndShowBgs(void);
static void SetBackgroundTransparency(void);
static void SetScheduleBgs(enum DexnavBackgrounds backgroundId);
static bool8 AreTilesOrTilemapEmpty(enum DexnavBackgrounds backgroundId);
static void LoadGraphics(void);
static struct DexnavSavedData Dexnav_GetSavedData(void);
static void Dexnav_LaunchPokedex(u8 taskId);
static void LoadDexnavPalettes(void);
static void PlaySoundStartFadeQuitApp(u8 taskId);
static void Task_WaitFadeAndExitGracefully(u8 taskId);
static void Dexnav_FreeResources(void);
static void Dexnav_FreeStructs(void);
static bool8 Dexnav_SwitchHabitat(void);
static void Dexnav_FreeBackgrounds(void);
static void Dexnav_InitializeAndSaveCallback(MainCallback callback, struct DexnavSavedData savedData);
static void SaveCallbackToDexnav(MainCallback callback);
static void Dexnav_InitWindows(void);
static void Task_HandleInput(u8 taskId);
static void DisplayHelpBar(enum DexnavWindows windowId);
static void Dexnav_SetMode(enum DexnavMode mode);
static bool8 Dexnav_IsCurrentModeScan(void);
static enum DexnavMode Dexnav_GetMode(void);
static void Dexnav_PrintHelpBarText(enum DexnavWindows windowId);
static enum DexnavHabitats Dexnav_GetHabitat(void);
static bool8 Dexnav_HasMultipleHabitats(void);
static void Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics(void);
static u8 Dexnav_GetNumberHabitatMons(enum DexnavHabitats habitat);
static void Dexnav_LoadEncounterData(void);
static enum DexnavHabitats Dexnav_CalculateInitialHabitat(void);
static enum DexnavMode Dexnav_CalculateInitialMode(void);
static bool8 Dexnav_ShouldHideCompletionMark(void);
static void Task_DexnavFadeToPokedex(u8 taskId);
static void Dexnav_CreateCompletionSprite(void);
static void Dexnav_CreateRegisterSprite(void);
static void Dexnav_HandleHabitatHeader(void);
static void Dexnav_DisplayHeader(enum DexnavWindows windowId);
static void Dexnav_PrintHeaderNameText(enum DexnavWindows windowId);
static u32 Dexnav_GetInsight(void);
static u32 Dexnav_GetCurrentlySelectedSpecies(void);
static void Dexnav_DisplayInsight(void);
static void Dexnav_PrintInsight(enum DexnavWindows windowId, bool32 isScanMode);
static void Dexnav_PrintStreak(enum DexnavWindows windowId, bool32 isScanMode);
static void Dexnav_DisplayStreak(void);
static void Dexnav_DisplayStarsInsight(void);
static void Dexnav_DisplayStarsStreak(void);
static void Dexnav_DisplayMonInfo(void);
static void Dexnav_PrintMonName(enum DexnavWindows windowId);
static void SpriteCB_StarInsight(struct Sprite *sprite);
static void SpriteCB_StarStreak(struct Sprite *sprite);
static void Dexnav_PrintMonTypes(void);
static void Dexnav_PrintFishingIcon(void);
static u32 Dexnav_GetCursorPosition(void);
static bool8 Dexnav_IsSelectedMonNotFishingMon(void);
static u32 Dexnav_GetCursorPosition(void);
static void Dexnav_SetCursorPosition(u32 value);
static void Dexnav_MoveCursor(s32 direction);
static void SpriteCB_DexnavFishing(struct Sprite *sprite);
static void Dexnav_DisplaySelectedMon(void);
static void Dexnav_RemoveSelectedMonSprite(void);
static void Dexnav_DisplayHabitatPokemon(enum DexnavHabitats habitat, u32 speciesIndex);
static void Dexnav_PrintFloatingActionButton(void);
static u32 Dexnav_GetSpeciesFromHabitatAndIndex(enum DexnavHabitats habitat, u32 speciesIndex);
static void Dexnav_DisplayAllHabitatPokemon(void);
static void Dexnav_DisplayCursors(void);
void Dexnav_StartOverworldSearch(u8 taskId);
static void Task_BeginDexnavOverworld(u8 taskId);

struct DexnavState *sDexnavState = NULL;
static u8 *sBgTilemapBuffer[BG_DEXNAV_COUNT] = {NULL};

static const u8 dexnavMonIconCoordinates[][DEXNAV_MAX_SHOWN_MONS][AXIS_COUNT] =
{
    [0] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
    },
    [1] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 186, [AXIS_Y] = 60},
    },
    [2] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 160, [AXIS_Y] = 14},
        [2]  = {[AXIS_X] = 160, [AXIS_Y] = 106},
    },
    [3] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 133, [AXIS_Y] = 7 },
        [2]  = {[AXIS_X] = 186, [AXIS_Y] = 60},
        [3]  = {[AXIS_X] = 133, [AXIS_Y] = 113},
    },
    [4] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 117, [AXIS_Y] = 10},
        [2]  = {[AXIS_X] = 176, [AXIS_Y] = 29},
        [3]  = {[AXIS_X] = 176, [AXIS_Y] = 91},
        [4]  = {[AXIS_X] = 117, [AXIS_Y] = 110},
    },
    [5] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 106, [AXIS_Y] = 14},
        [2]  = {[AXIS_X] = 160, [AXIS_Y] = 14},
        [3]  = {[AXIS_X] = 186, [AXIS_Y] = 60},
        [4]  = {[AXIS_X] = 160, [AXIS_Y] = 106},
        [5]  = {[AXIS_X] = 106, [AXIS_Y] = 106},
    },
    [6] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 100, [AXIS_Y] = 19},
        [2]  = {[AXIS_X] = 145, [AXIS_Y] = 8 },
        [3]  = {[AXIS_X] = 181, [AXIS_Y] = 37},
        [4]  = {[AXIS_X] = 181, [AXIS_Y] = 83},
        [5]  = {[AXIS_X] = 145, [AXIS_Y] = 112},
        [6]  = {[AXIS_X] = 100, [AXIS_Y] = 101},
    },
    [7] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 96,  [AXIS_Y] = 23},
        [2]  = {[AXIS_X] = 133, [AXIS_Y] = 7 },
        [3]  = {[AXIS_X] = 170, [AXIS_Y] = 23},
        [4]  = {[AXIS_X] = 186, [AXIS_Y] = 60},
        [5]  = {[AXIS_X] = 170, [AXIS_Y] = 97},
        [6]  = {[AXIS_X] = 133, [AXIS_Y] = 113},
        [7]  = {[AXIS_X] = 96,  [AXIS_Y] = 97},
    },
    [8] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 92,  [AXIS_Y] = 26},
        [2]  = {[AXIS_X] = 124, [AXIS_Y] = 8 },
        [3]  = {[AXIS_X] = 160, [AXIS_Y] = 14},
        [4]  = {[AXIS_X] = 183, [AXIS_Y] = 42},
        [5]  = {[AXIS_X] = 183, [AXIS_Y] = 78},
        [6]  = {[AXIS_X] = 160, [AXIS_Y] = 106},
        [7]  = {[AXIS_X] = 124, [AXIS_Y] = 112},
        [8]  = {[AXIS_X] = 92,  [AXIS_Y] = 94},
    },
    [9] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 90,  [AXIS_Y] = 29},
        [2]  = {[AXIS_X] = 117, [AXIS_Y] = 10},
        [3]  = {[AXIS_X] = 149, [AXIS_Y] = 10},
        [4]  = {[AXIS_X] = 176, [AXIS_Y] = 29},
        [5]  = {[AXIS_X] = 186, [AXIS_Y] = 60},
        [6]  = {[AXIS_X] = 176, [AXIS_Y] = 91},
        [7]  = {[AXIS_X] = 149, [AXIS_Y] = 110},
        [8]  = {[AXIS_X] = 117, [AXIS_Y] = 110},
        [9]  = {[AXIS_X] = 90,  [AXIS_Y] = 91},
    },
    [10] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 88,  [AXIS_Y] = 31},
        [2]  = {[AXIS_X] = 111, [AXIS_Y] = 12},
        [3]  = {[AXIS_X] = 141, [AXIS_Y] = 8 },
        [4]  = {[AXIS_X] = 168, [AXIS_Y] = 20},
        [5]  = {[AXIS_X] = 184, [AXIS_Y] = 45},
        [6]  = {[AXIS_X] = 184, [AXIS_Y] = 75},
        [7]  = {[AXIS_X] = 168, [AXIS_Y] = 97},
        [8]  = {[AXIS_X] = 141, [AXIS_Y] = 109},
        [9]  = {[AXIS_X] = 111, [AXIS_Y] = 105},
        [10] = {[AXIS_X] = 88,  [AXIS_Y] = 86},
    },
    [11] =
    {
        [0]  = {[AXIS_X] = 80,  [AXIS_Y] = 60},
        [1]  = {[AXIS_X] = 87,  [AXIS_Y] = 33},
        [2]  = {[AXIS_X] = 106, [AXIS_Y] = 14},
        [3]  = {[AXIS_X] = 133, [AXIS_Y] = 7 },
        [4]  = {[AXIS_X] = 160, [AXIS_Y] = 14},
        [5]  = {[AXIS_X] = 179, [AXIS_Y] = 33},
        [6]  = {[AXIS_X] = 186, [AXIS_Y] = 60},
        [7]  = {[AXIS_X] = 179, [AXIS_Y] = 87},
        [8]  = {[AXIS_X] = 160, [AXIS_Y] = 106},
        [9]  = {[AXIS_X] = 133, [AXIS_Y] = 113},
        [10] = {[AXIS_X] = 106, [AXIS_Y] = 106},
        [11] = {[AXIS_X] = 87,  [AXIS_Y] = 87},
    },
};

static const struct BgTemplate sDexnavBgTemplates[] = 
{
    [BG0_DEXNAV_TEXT] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    [BG1_DEXNAV_WHEEL] =
    {
        .bg = BG1_DEXNAV_WHEEL,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    [BG2_DEXNAV_UI] =
    {
        .bg = BG2_DEXNAV_UI,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
    [BG3_DEXNAV_BACKGROUNDS] =
    {
        .bg = BG3_DEXNAV_BACKGROUNDS,
        .charBaseIndex = 3,
        .mapBaseIndex = 28,
        .priority = 2,
    },
};

static const struct {
    const u32 *tiles;
    const u32 *tilemap;
} sDexnav_BackgroundGraphics[BG_DEXNAV_COUNT] =
{
    [BG0_DEXNAV_TEXT] =
    {
        .tiles = NULL,
        .tilemap = NULL,
    },
    [BG1_DEXNAV_WHEEL] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/wheel.4bpp.smol"),
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/wheel.bin.smolTM"),
    },
    [BG2_DEXNAV_UI] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/interface.4bpp.smol"),
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/interface.bin.smolTM"),
    },
    [BG3_DEXNAV_BACKGROUNDS] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/background.4bpp.smol"),
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/background.bin.smolTM"),
    },
};

static const struct WindowTemplate sDexnavWindows[] =
{
    [WIN_DEXNAV_HEADER] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_INSIGHT] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 8,
        .height = 5,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_MON_INFO] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 8,
        .width = 9,
        .height = 5,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_STREAK] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 8,
        .height = 5,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_HELP_BAR] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_HABITAT_HEADER] =
    {
        .bg = BG3_DEXNAV_BACKGROUNDS,
        .tilemapLeft = 13,
        .tilemapTop = 0,
        .width = 17,
        .height = 2,
        .paletteNum = DEXNAV_PALETTE_HABITAT_ID,
    },
    DUMMY_WIN_TEMPLATE
};

const u8 sDexnavWindowFontColors[DEXNAV_FONT_COLOR_COUNT][3] =
{
    [DEXNAV_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [DEXNAV_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
};

static const struct DexnavSpriteSheet sDexnavSpriteSheets[DEXNAV_SPRITEIDS_COUNT] = 
{
    [DEXNAV_SPRITEID_COMPLETION_MARK] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/completion.4bpp"),
            .size = TILE_OFFSET_4BPP(4),
            .tag = DEXNAV_SPRITETAG_COMPLETION,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/completion.gbapal"),
            .tag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING,
        },
    },
    [DEXNAV_SPRITEID_INSIGHT_POSITION_0] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/star.4bpp"),
            .size = TILE_OFFSET_4BPP(32),
            .tag = DEXNAV_SPRITETAG_STAR,
        },
    },
    [DEXNAV_SPRITEID_INDICATOR_ABILITY] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/indicators.4bpp"),
            .size = TILE_OFFSET_4BPP(16),
            .tag = DEXNAV_SPRITETAG_INDICATOR,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/indicators.gbapal"),
            .tag = DEXNAV_PALTAG_INDICATOR,
        },
    },
    [DEXNAV_SPRITEID_FAB] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/fab.4bpp"),
            .size = TILE_OFFSET_4BPP(32),
            .tag = DEXNAV_SPRITETAG_FAB,
        },
    },
    [DEXNAV_SPRITEID_INDICATOR_IV_0] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/iv.4bpp"),
            .size = TILE_OFFSET_4BPP(64),
            .tag = DEXNAV_SPRITETAG_IV,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/iv.gbapal"),
            .tag = DEXNAV_PALTAG_IV,
        },
    },
    [DEXNAV_SPRITEID_TYPE_0] =
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/types/19x16/types.4bpp"),
            .size = TILE_OFFSET_4BPP(NUMBER_OF_MON_TYPES * 8 * 2),
            .tag = DEXNAV_SPRITETAG_TYPES,
        },
    },
    [DEXNAV_SPRITEID_INDICATOR_FISHING] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/fishing.4bpp"),
            .size = TILE_OFFSET_4BPP(4),
            .tag = DEXNAV_SPRITETAG_FISHING,
        },
    },
    [DEXNAV_SPRITEID_CURSOR] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/cursor.4bpp"),
            .size = TILE_OFFSET_4BPP(192),
            .tag = DEXNAV_SPRITETAG_CURSOR,
        },
    },
    [DEXNAV_SPRITEID_REGISTER] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/register.4bpp"),
            .size = TILE_OFFSET_4BPP(8),
            .tag = DEXNAV_SPRITETAG_REGISTER,
        },
    },
    [DEXNAV_SPRITEID_OVERWORLD] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/ow_dexnav_arrow.4bpp"),
            .size = TILE_OFFSET_4BPP(144),
            .tag = DEXNAV_SPRITETAG_OVERWORLD,
        },
    },
};

static void SpriteCB_Register(struct Sprite *sprite)
{
    u16 rawValue = VarGet(DN_VAR_SPECIES);
    u32 species = rawValue & DEXNAV_MASK_SPECIES;
    enum DexnavHabitats habitat = rawValue >> 14;

    if (species == SPECIES_NONE)
    {
        sprite->invisible = TRUE;
        return;
    }

    if (habitat != Dexnav_GetHabitat())
    {
        sprite->invisible = TRUE;
        return;
    }

    u32 monIndex = 0;
    for (monIndex = 0; monIndex < DEXNAV_MAX_SHOWN_MONS; monIndex++)
    {
        if (sDexnavState->dexnavSpecies[habitat][monIndex] != species)
            continue;

        break;
    }

    if (monIndex == DEXNAV_MAX_SHOWN_MONS)
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->invisible = FALSE;

    u32 num = Dexnav_GetNumberHabitatMons(Dexnav_GetHabitat()) - 1;

    sprite->x = (dexnavMonIconCoordinates[num][monIndex][AXIS_X] + 18);
    sprite->y = (dexnavMonIconCoordinates[num][monIndex][AXIS_Y] + 30);
}

static void Dexnav_CreateRegisterSprite(void)
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_REGISTER;
    TempSpriteTemplate.callback = SpriteCB_Register;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;

    u32 spriteId = CreateSprite(&TempSpriteTemplate, 0, 0, 0);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x16);
    gSprites[spriteId].oam.priority = 1;

    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_REGISTER,spriteId);
}

static void Dexnav_CreateCompletionSprite(void)
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_COMPLETION;
    TempSpriteTemplate.callback = SpriteCallbackDummy;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;

    u32 spriteId = CreateSprite(&TempSpriteTemplate, 8, 4, 0);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].invisible = Dexnav_ShouldHideCompletionMark();

    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_COMPLETION_MARK,spriteId);
}

static bool8 Dexnav_ShouldHideCompletionMark(void)
{
    if ((Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_LAND) == 0) && (Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_WATER) == 0))
        return TRUE;

    for (enum DexnavHabitats habitat = 0; habitat < DEXNAV_HABITAT_COUNT; habitat++)
    {
        for (u32 speciesIndex = 0; speciesIndex < DEXNAV_MAX_SHOWN_MONS; speciesIndex++)
        {
            u32 species = sDexnavState->dexnavSpecies[habitat][speciesIndex];

            if (species == SPECIES_NONE)
                return FALSE;

            if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_CAUGHT) == FALSE)
                return TRUE;
        }
    }
    return FALSE;
}

static void Dexnav_SetHabitat(enum DexnavHabitats habitat)
{
    sDexnavState->habitat = habitat;
}

static bool8 Dexnav_SwitchHabitat(void)
{
    enum DexnavHabitats habitat = Dexnav_GetHabitat();

    if (habitat == DEXNAV_HABITAT_NONE)
        return FALSE;

    if (Dexnav_HasMultipleHabitats() == FALSE)
        return FALSE;

    if (QuestMenu_GetSetQuestState(QUEST_HANG20,FLAG_GET_INACTIVE) == TRUE)
        return FALSE;

    if (habitat == DEXNAV_HABITAT_LAND)
        Dexnav_SetHabitat(DEXNAV_HABITAT_WATER);
    else if (habitat == DEXNAV_HABITAT_WATER)
        Dexnav_SetHabitat(DEXNAV_HABITAT_LAND);

    return TRUE;
}

static enum DexnavHabitats Dexnav_GetHabitat(void)
{
    return sDexnavState->habitat;
}

static void Dexnav_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Dexnav_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool8 Dexnav_InitalizeBackgrounds(void)
{
    ResetAllBgsCoordinates();

    if (!AllocZeroedTilemapBuffers())
        return FALSE;

   HandleAndShowBgs();

    return TRUE;
}

static bool8 AllocZeroedTilemapBuffers(void)
{
    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
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
    InitBgsFromTemplates(0, sDexnavBgTemplates, NELEMS(sDexnavBgTemplates));

    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT1_BG1);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
    ShowBg(BG1_DEXNAV_WHEEL);
}

static void SetScheduleBgs(enum DexnavBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static const u32 sHabitatBackgounds[] = INCBIN_U32("graphics/ui_menus/dexnav/habitatHeader.4bpp");

static const u16* const sDexnavPalettesLUT[] = 
{
    [VISUAL_OPTION_COLOR_RED] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/red.gbapal"),
    [VISUAL_OPTION_COLOR_GREEN] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/green.gbapal"),
    [VISUAL_OPTION_COLOR_BLUE] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/blue.gbapal"),
    [VISUAL_OPTION_COLOR_YELLOW] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/yellow.gbapal"),
    [VISUAL_OPTION_COLOR_BLACK] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/black.gbapal"),
    [VISUAL_OPTION_COLOR_WHITE] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/white.gbapal"),
    [VISUAL_OPTION_COLOR_PLATINUM] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/platinum.gbapal"),
    [VISUAL_OPTION_COLOR_SCARLET] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/scarlet.gbapal"),
    [VISUAL_OPTION_COLOR_VIOLET] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/violet.gbapal"),
    [VISUAL_OPTION_COLOR_CUSTOM] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/platinum.gbapal"),
    [VISUAL_OPTION_COLOR_COUNT] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/platinum.gbapal"),
};

static const u16 dexnavPalettesText[] = INCBIN_U16("graphics/ui_menus/dexnav/palettes/text.gbapal");
static const u16 dexnavPalettesHabitat[] = INCBIN_U16("graphics/ui_menus/dexnav/habitatHeader.gbapal");
static const u16 dexnavPalettesTypes[] = INCBIN_U16("graphics/types/types.gbapal");

static bool8 AreTilesOrTilemapEmpty(enum DexnavBackgrounds backgroundId)
{
    return (sDexnav_BackgroundGraphics[backgroundId].tiles == NULL || sDexnav_BackgroundGraphics[backgroundId].tilemap== NULL);
}

static void LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum DexnavBackgrounds backgroundId = BG0_DEXNAV_TEXT; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
    {
        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sDexnav_BackgroundGraphics[backgroundId].tiles,0,0,0);
        CopyToBgTilemapBuffer(backgroundId, sDexnav_BackgroundGraphics[backgroundId].tilemap,0,0);
    }

    LoadDexnavPalettes();

    for (u32 spriteId = 0; spriteId < DEXNAV_SPRITEIDS_COUNT; spriteId++)
    {
        if (sDexnavSpriteSheets[spriteId].spriteSheet.tag == 0)
            continue;

        LoadSpriteSheet(&sDexnavSpriteSheets[spriteId].spriteSheet);

        if (sDexnavSpriteSheets[spriteId].palette.tag == 0)
            continue;

        LoadSpritePalette(&sDexnavSpriteSheets[spriteId].palette);
    }
}

static void LoadDexnavPalettes(void)
{
    FillPalette(RGB_DEXNAV_GRAY, DEXNAV_PALETTE_ALL_BLACK_SLOT, PLTT_SIZE_4BPP);
    LoadMonIconPalettes();
    LoadPalette(dexnavPalettesTypes, DEXNAV_PALETTE_TYPE_SLOT, 3 * PLTT_SIZE_4BPP);

    LoadPalette(sDexnavPalettesLUT[GetVisualColor()], DEXNAV_PALETTE_INTERFACE_SLOT, PLTT_SIZE_4BPP);
    LoadPalette(dexnavPalettesText, DEXNAV_PALETTE_TEXT_SLOT, PLTT_SIZE_4BPP);
    LoadPalette(dexnavPalettesHabitat, DEXNAV_PALETTE_HABITAT_SLOT, PLTT_SIZE_4BPP);
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

    SetMainCallback2(sDexnavState->savedCallback);
    Dexnav_FreeResources();
    DestroyTask(taskId);
}

void Dexnav_FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Dexnav_VBlankCB);
    SetMainCallback2(Dexnav_MainCB);
}

static void Dexnav_FreeResources(void)
{
    FreeSpritePalettesResetSpriteData();
    Dexnav_FreeStructs();
    Dexnav_FreeBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void Dexnav_FreeStructs(void)
{
    if (sDexnavState != NULL)
        Free(sDexnavState);
}

static void Dexnav_FreeBackgrounds(void)
{
    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

void CB2_DexnavFromStartMenu(void)
{
    struct DexnavSavedData savedData = {DEXNAV_HABITAT_NONE, 0, SPECIES_NONE};
    Dexnav_InitializeAndSaveCallback(CB2_StartMenu_ReturnToUI, savedData);
}

static void Dexnav_InitializeAndSaveCallback(MainCallback callback, struct DexnavSavedData savedData)
{
    enum AdventureGuideList targetGuide = GUIDE_DEXNAV;

    if (!shouldSkipGuide(targetGuide))
    {
        VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN,targetGuide);
        gMain.savedCallback = callback;
        Adventure_Guide_Init(Dexnav_ReturnFromAdventureGuide);
        return;
    }

    if (Dexnav_AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }
    SaveCallbackToDexnav(callback);
    Dexnav_RestoreFromSave(savedData);
    SetMainCallback2(Dexnav_SetupCallback);
}

static void Dexnav_RestoreFromSave(struct DexnavSavedData savedData)
{
    memcpy(&sDexnavState->savedData,&savedData,sizeof(struct DexnavSavedData));
}

static bool8 Dexnav_IsThereSavedData(void)
{
    return (Dexnav_GetSavedSpecies() != SPECIES_NONE);
}

static u16 Dexnav_GetSavedSpecies(void)
{
    return sDexnavState->savedData.species;
}

static u8 Dexnav_GetSavedCursorPosition(void)
{
    return sDexnavState->savedData.cursorPosition;
}

static enum DexnavHabitats Dexnav_GetSavedHabitat(void)
{
    return sDexnavState->savedData.habitat;
}

static struct DexnavSavedData Dexnav_GetSavedData(void)
{
    return sDexnavState->savedData;
}

static void Dexnav_SetSavedSpecies(u32 species)
{
    sDexnavState->savedData.species = species;
}

static void Dexnav_SetSavedCallback(void* callback)
{
    sDexnavState->savedCallback = callback;
}

static void Dexnav_SetSavedCursorPosition(u32 cursorPosition)
{
    sDexnavState->savedData.cursorPosition = cursorPosition;
}

static void Dexnav_SetSavedHabitat(enum DexnavHabitats habitat)
{
    sDexnavState->savedData.habitat = habitat;
}

static void Dexnav_ReturnFromAdventureGuide(void)
{
    struct DexnavSavedData savedData = {DEXNAV_HABITAT_NONE, 0, SPECIES_NONE};
    Dexnav_InitializeAndSaveCallback(gMain.savedCallback,savedData);
}

void Dexnav_ReturnFromPokedex(struct DexnavSavedData savedData)
{
    Dexnav_InitializeAndSaveCallback(savedData.savedCallback,savedData);
}

static bool8 Dexnav_AllocateStructs(void)
{
    sDexnavState = AllocZeroed(sizeof(struct DexnavState));

    return (sDexnavState == NULL
           );
}

static void SaveCallbackToDexnav(MainCallback callback)
{
    sDexnavState->savedCallback = callback;
}

void Dexnav_SetupCallback(void)
{
    switch (gMain.state)
    {
        case 0:
            ResetGpuRegsAndBgs();
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
            Dexnav_ResetAllSpriteIds();
            gMain.state++;
            break;
        case 2:
            CreateTask(Task_HandleInput,0);
            Dexnav_LoadEncounterData();
            Dexnav_SetHabitat(Dexnav_CalculateInitialHabitat());
            Dexnav_SetMode(Dexnav_CalculateInitialMode());
            Dexnav_SetCursorPosition(Dexnav_GetSavedCursorPosition());
            Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics();
            Dexnav_CreateCompletionSprite();
            Dexnav_CreateRegisterSprite();
            gMain.state++;
            break;
        case 3:
            Dexnav_InitWindows();
            Dexnav_DisplayAllHabitatPokemon();
            Dexnav_DisplayMonInfo();
            Dexnav_PrintFloatingActionButton();
            Dexnav_HandleHabitatHeader();
            Dexnav_DisplayHeader(WIN_DEXNAV_HEADER);
            DisplayHelpBar(WIN_DEXNAV_HELP_BAR);
            Dexnav_DisplayInsight();
            Dexnav_DisplayStarsInsight();
            Dexnav_DisplayStreak();
            Dexnav_DisplayStarsStreak();
            Dexnav_DisplayCursors();
            gMain.state++;
            break;
        case 4:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            SetVBlankCallback(Dexnav_VBlankCB);
            SetMainCallback2(Dexnav_MainCB);
            break;
    }
}

static void Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Dexnav_InitalizeBackgrounds())
        LoadGraphics();
    else
        Dexnav_FadescreenAndExitGracefully();
}

static void Dexnav_ResetAllSpriteIds(void)
{
    for (enum DexnavSpriteIds spriteId = 0; spriteId < DEXNAV_SPRITEIDS_COUNT; spriteId++)
        Dexnav_SaveSpriteId(spriteId, SPRITE_NONE);
}

static void Dexnav_SaveSpriteId(enum DexnavSpriteIds spriteId, u32 id)
{
    sDexnavState->spriteId[spriteId] = id;
}

static u32 Dexnav_GetSpriteId(enum DexnavSpriteIds spriteId)
{
    return sDexnavState->spriteId[spriteId];
}

static void Dexnav_InitWindows(void)
{
    const struct WindowTemplate *templates = sDexnavWindows;

    InitWindows(templates);

    u32 baseBlock = 1;
    for (enum DexnavWindows windowId = 0; windowId < ARRAY_COUNT(sDexnavWindows); windowId++)
    {
        SetWindowAttribute(windowId, WINDOW_BASE_BLOCK, baseBlock);
        ClearWindowCopyToVram(windowId);
        baseBlock += (templates[windowId].width * templates[windowId].height);
    }
    DeactivateAllTextPrinters();
}

static void Task_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON) || JOY_REPEAT(B_BUTTON))
    {
        PlaySoundStartFadeQuitApp(taskId);
        return;
    }

    if (JOY_NEW(A_BUTTON) || JOY_REPEAT(A_BUTTON))
    {
        Dexnav_StartOverworldSearch(taskId);
        return;
    }

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN) || JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
    {
        if(Dexnav_SwitchHabitat())
        {
            if (Dexnav_GetCurrentlySelectedSpecies() == SPECIES_NONE)
                Dexnav_SetCursorPosition(0);
            Dexnav_DisplayMonInfo();
            Dexnav_DisplayAllHabitatPokemon();
            Dexnav_HandleHabitatHeader();
        }
        return;
    }

    if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT))
    {
        Dexnav_MoveCursor(DEXNAV_DECREMENT_POSITION);
        Dexnav_DisplayMonInfo();
    }

    if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT))
    {
        Dexnav_MoveCursor(DEXNAV_INCREMENT_POSITION);
        Dexnav_DisplayMonInfo();
    }

    if (JOY_NEW(L_BUTTON) || JOY_REPEAT(L_BUTTON))
    {
        Dexnav_LaunchPokedex(taskId);
        return;
    }

    if (JOY_NEW(R_BUTTON) || JOY_REPEAT(R_BUTTON))
    {
        Dexnav_RegisterCurrentlySelectedMon();
        return;
    }

    if (JOY_NEW(START_BUTTON) || JOY_REPEAT(START_BUTTON))
    {
        return;
    }
}

static void DisplayHelpBar(enum DexnavWindows windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Dexnav_PrintHelpBarText(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static bool8 Dexnav_IsCurrentModeScan(void)
{
    return (Dexnav_GetMode() == DEXNAV_MODE_SCAN);
}

static enum DexnavMode Dexnav_GetMode(void)
{
    return sDexnavState->mode;
}

static void Dexnav_SetMode(enum DexnavMode mode)
{
    sDexnavState->mode = mode;
}

static void Dexnav_PrintHelpBarText(enum DexnavWindows windowId)
{
    u32 x = 4;
    u32 y = 0;
    u32 fontId = FONT_DEXNAV_HELPBAR;
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);

    bool32 isScanMode = Dexnav_IsCurrentModeScan();

    if (isScanMode)
    {
        StringCopy(gStringVar4, COMPOUND_STRING("{A_BUTTON} Overworld {START_BUTTON} Start Menu {B_BUTTON} Cancel Search"));
    }
    else
    {
        StringCopy(gStringVar4, COMPOUND_STRING("{L_BUTTON} Pokedex {R_BUTTON} Register"));

        if ((Dexnav_HasMultipleHabitats()) && (QuestMenu_GetSetQuestState(QUEST_HANG20,FLAG_GET_INACTIVE) == FALSE))
            StringAppend(gStringVar4,COMPOUND_STRING(" {DPAD_UPDOWN} Switch Habitat"));

        if ((Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_LAND) == 0) && (Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_WATER) == 0))
            StringCopy(gStringVar4, COMPOUND_STRING("No Pokemon found."));
    }

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static bool8 Dexnav_HasMultipleHabitats(void)
{
    u32 land = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_LAND);
    u32 water = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_WATER);

    return ((land > 0) && (water > 0));
}

static enum DexnavMode Dexnav_CalculateInitialMode(void)
{
    if (FlagGet(DN_FLAG_SEARCHING) == FALSE)
        return DEXNAV_MODE_MAIN;

    return DEXNAV_MODE_SCAN;
}

static enum DexnavHabitats Dexnav_CalculateInitialHabitat(void)
{
    if (Dexnav_IsThereSavedData())
        return Dexnav_GetSavedHabitat();

    u32 land = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_LAND);
    u32 water = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_WATER);

    if (land > 0)
        return DEXNAV_HABITAT_LAND;

    if (water == 0)
        return DEXNAV_HABITAT_NONE;

    if (QuestMenu_GetSetQuestState(QUEST_HANG20,FLAG_GET_INACTIVE) == FALSE)
        return DEXNAV_HABITAT_WATER;
    else
        return DEXNAV_HABITAT_NONE;
}

static void Dexnav_SaveNumberHabitatMons(enum DexnavHabitats habitat, u32 count)
{
    sDexnavState->numHabitatMons[habitat] = count;
}

static u8 Dexnav_GetNumberHabitatMons(enum DexnavHabitats habitat)
{
    return sDexnavState->numHabitatMons[habitat];
}

static bool32 Dexnav_SpeciesAlreadyInHabitat(u32 species, u32 habitat, u32 count)
{
    for (u32 i = 0; i < count; i++)
    {
        if (sDexnavState->dexnavSpecies[habitat][i] == species)
            return TRUE;
    }
    return FALSE;
}

static u32 Dexnav_PopulateHabitat(const struct WildPokemonInfo *monsInfo, u32 wildCount, u32 habitat, u32 startCount)
{
    if (monsInfo == NULL || monsInfo->encounterRate == 0)
        return startCount;

    bool32 isFishing = (startCount > 0);

    for (u32 i = 0; i < wildCount; i++)
    {
        u32 species = monsInfo->wildPokemon[i].species;

        if (species == SPECIES_NONE)
            continue;

        if (Dexnav_SpeciesAlreadyInHabitat(species, habitat, startCount))
            continue;

        sDexnavState->dexnavSpecies[habitat][startCount++] = species;

        if (habitat == DEXNAV_HABITAT_WATER)
            sDexnavState->fishingMons[startCount-1] = isFishing;
    }

    return startCount;
}

static void Dexnav_LoadEncounterData(void)
{
    memset(sDexnavState->dexnavSpecies, 0, sizeof(sDexnavState->dexnavSpecies));

    /*
    u32 counta = 0;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_CRABOMINABLE;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_QUAQUAVAL;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_WAILORD;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_FERALIGATR;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_DRACOVISH;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_GOLISOPOD;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_WALKING_WAKE;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_BASCULEGION;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_ARCTOVISH;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_GYARADOS;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_GRENINJA;
    sDexnavState->dexnavSpecies[DEXNAV_HABITAT_LAND][counta++] = SPECIES_GOODRA;
    Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_LAND, counta);
    return;
    */

    u32 headerId = GetCurrentMapWildMonHeaderId();

    if (headerId == HEADER_NONE)
    {
        u32 count = 0;
        Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_WATER, count);
        Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_LAND, count);
        return;
    }

    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_LAND);
    const struct WildPokemonInfo *monsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].landMonsInfo;
    u32 count = Dexnav_PopulateHabitat(monsInfo, LAND_WILD_COUNT, DEXNAV_HABITAT_LAND, 0);
    Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_LAND, count);

    timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_WATER);
    monsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].waterMonsInfo;
    count = Dexnav_PopulateHabitat(monsInfo, WATER_WILD_COUNT, DEXNAV_HABITAT_WATER, 0);

    if (QuestMenu_GetSetQuestState(QUEST_TEACHATRAINERTOFISH,FLAG_GET_INACTIVE) == FALSE)
    {
        timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_FISHING);
        monsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].fishingMonsInfo;
        count = Dexnav_PopulateHabitat(monsInfo, FISH_WILD_COUNT, DEXNAV_HABITAT_WATER, count);
    }
    Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_WATER, count);
}

static void Dexnav_HandleHabitatHeader(void)
{
    enum DexnavWindows windowId = WIN_DEXNAV_HABITAT_HEADER;
    u32 habitat = Dexnav_GetHabitat();

    if (Dexnav_IsCurrentModeScan())
        habitat = DEXNAV_HABITAT_NONE;
    else if ((habitat == DEXNAV_HABITAT_LAND) && (CanUseDigOrEscapeRopeOnCurMap()))
        habitat = 3;

    u32 tileOffset = habitat * DEXNAV_HABITAT_HEADER_WIDTH;

    const u8* baseGfx = ((const u8*)sHabitatBackgounds) + tileOffset;

    CopyToWindowPixelBuffer(windowId, baseGfx, DEXNAV_HABITAT_HEADER_WIDTH, 0);

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void Dexnav_DisplayHeader(enum DexnavWindows windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (Dexnav_IsCurrentModeScan() == FALSE)
        Dexnav_PrintHeaderNameText(windowId);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Dexnav_PrintHeaderNameText(enum DexnavWindows windowId)
{
    u32 x = 27;
    u32 y = 0;
    u32 fontId = FONT_DEXNAV_HELPBAR;
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    
    if (Dexnav_ShouldHideCompletionMark())
        x = 4;

    u32 windowWidth = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_WIDTH)) - x;

    GetMapName(gStringVar4, gMapHeader.regionMapSectionId, 0);
    fontId = GetFontIdToFit(gStringVar4,FONT_DEXNAV_HELPBAR,letterSpacing,windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static u32 Dexnav_GetCurrentlySelectedSpecies(void)
{
    return sDexnavState->dexnavSpecies[Dexnav_GetHabitat()][Dexnav_GetCursorPosition()];
}

static u32 Dexnav_GetInsight(void)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();
    return GetSearchLevel(species);
}

static u32 Dexnav_GetStreak(void)
{
    return gSaveBlock3Ptr->dexNavChain;
}

static void Dexnav_DisplayInsight(void)
{
    bool32 isScanMode = Dexnav_IsCurrentModeScan();
    enum DexnavWindows windowId = (isScanMode ? WIN_DEXNAV_HEADER : WIN_DEXNAV_INTERFACE_INSIGHT);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Dexnav_PrintInsight(windowId, isScanMode);

    if (isScanMode == FALSE)
        CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Dexnav_PrintInsight(enum DexnavWindows windowId, bool32 isScanMode)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();
    if (species == SPECIES_NONE)
        return;

    u32 x = isScanMode ? 8 : 8;
    u32 y = isScanMode ? 1 : 5;
    u32 fontId = isScanMode ? FONT_DEXNAV_SCAN_HEADER : FONT_DEXNAV_STAT_HEADER;
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, COMPOUND_STRING("INSIGHT"));
    u32 insight = Dexnav_GetInsight();
    x = isScanMode ? 43 : 47;
    y = isScanMode ? 0 : (y - 3);
    
    if (insight < DEXNAV_MAX_INSIGHT)
        ConvertIntToDecimalStringN(gStringVar4, insight, STR_CONV_MODE_LEFT_ALIGN, CountDigits(insight));
    else
        StringCopy(gStringVar4,COMPOUND_STRING("MAX"));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static void Dexnav_DisplayStreak(void)
{
    bool32 isScanMode = Dexnav_IsCurrentModeScan();

    enum DexnavWindows windowId = (isScanMode ? WIN_DEXNAV_HEADER : WIN_DEXNAV_INTERFACE_STREAK);

    if (isScanMode == FALSE)
        FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    Dexnav_PrintStreak(windowId,isScanMode);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void Dexnav_PrintStreak(enum DexnavWindows windowId, bool32 isScanMode)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();
    if (species == SPECIES_NONE)
        return;

    u32 x = isScanMode ? 203 : 9 ;
    u32 y = isScanMode ? 0 : 4;
    u32 fontId = isScanMode ? FONT_DEXNAV_SCAN_HEADER : FONT_DEXNAV_STAT_HEADER;
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, COMPOUND_STRING("STREAK"));
    u32 streak = Dexnav_GetStreak();
    x = isScanMode ? 184 : 48;
    y = isScanMode ? 0   : y - 2;

    if (streak < DEXNAV_MAX_STREAK)
        ConvertIntToDecimalStringN(gStringVar4, streak, STR_CONV_MODE_LEFT_ALIGN, CountDigits(streak));
    else
        StringCopy(gStringVar4,COMPOUND_STRING("MAX"));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static const union AnimCmd sAnim_StarSmallEmpty[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_SMALL_EMPTY,4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StarSmallHalf[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_SMALL_HALF,4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StarSmallFull[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_SMALL_FULL,4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StarSmallSparkle[] =
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_SMALL_FULL,24),
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_SMALL_SPARKLE,24),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_StarSmallSparkle_Mid[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_SMALL_SPARKLE,24),
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_SMALL_FULL,24),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_StarBigEmpty[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_BIG_EMPTY,4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StarBigHalf[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_BIG_HALF,4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StarBigFull[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_BIG_FULL,4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StarBigSparkle[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_BIG_FULL,24),
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_BIG_SPARKLE,24),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_StarBigSparkle_Mid[] = 
{
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_BIG_SPARKLE,24),
    ANIMCMD_FRAME(DEXNAV_STAR_FRAME_BIG_FULL,24),
    ANIMCMD_JUMP(0),
};


static const union AnimCmd * const sAnims_Star[] =
{
    sAnim_StarSmallEmpty,
    sAnim_StarSmallHalf,
    sAnim_StarSmallFull,
    sAnim_StarSmallSparkle,
    sAnim_StarBigEmpty,
    sAnim_StarBigHalf,
    sAnim_StarBigFull,
    sAnim_StarBigSparkle,
    sAnim_StarSmallSparkle_Mid,
    sAnim_StarBigSparkle_Mid,
};

static void SpriteCB_StarStreak(struct Sprite *sprite)
{
    if (Dexnav_GetCurrentlySelectedSpecies() == SPECIES_NONE)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;

    bool32 isBig = (sprite->data[2] == DEXNAV_STAR_BIG_EMPTY);

    s32 streak = sprite->data[0];
    bool32 streakMax = (streak == DEXNAV_MAX_STREAK);

    u32 position = sprite->data[1];
    bool32 isCenter = (position == DEXNAV_STAR_CENTER);

    u32 targetAnim;

    if (streakMax && isCenter)
    {
        targetAnim = isBig ? DEXNAV_STAR_BIG_SPARKLE_MID : DEXNAV_STAR_SMALL_SPARKLE_MID;
        StartSpriteAnimIfDifferent(sprite, targetAnim);
        return;
    }

    if (streakMax)
    {
        targetAnim = isBig ? DEXNAV_STAR_BIG_SPARKLE : DEXNAV_STAR_SMALL_SPARKLE;
        StartSpriteAnimIfDifferent(sprite, targetAnim);
        return;
    }

    streak = (streak - ((DEXNAV_MAX_STREAK / 3) - 1) * position);

    if (isBig)
    {
        if (streak > ((DEXNAV_MAX_STREAK / 3) - 1))            
            targetAnim = DEXNAV_STAR_BIG_FULL;
        else if (streak < 1)
            targetAnim = DEXNAV_STAR_BIG_EMPTY;
        else
            targetAnim = DEXNAV_STAR_BIG_HALF;
    }
    else
    {
        if (streak > ((DEXNAV_MAX_STREAK / 3) - 1))            
            targetAnim = DEXNAV_STAR_SMALL_FULL;
        else if (streak < 1)
            targetAnim = DEXNAV_STAR_SMALL_EMPTY;
        else
            targetAnim = DEXNAV_STAR_SMALL_HALF;
    }

    StartSpriteAnimIfDifferent(sprite, targetAnim);
}

static void SpriteCB_StarInsight(struct Sprite *sprite)
{
    if (Dexnav_GetCurrentlySelectedSpecies() == SPECIES_NONE)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;

    bool32 isBig = (sprite->data[2] == DEXNAV_STAR_BIG_EMPTY);

    s32 insight = Dexnav_GetInsight();
    bool32 insightMax = (insight == DEXNAV_MAX_INSIGHT);

    u32 position = sprite->data[1];
    bool32 isCenter = (position == DEXNAV_STAR_CENTER);

    u32 targetAnim;

    if (insightMax && isCenter)
    {
        targetAnim = isBig ? DEXNAV_STAR_BIG_SPARKLE_MID : DEXNAV_STAR_SMALL_SPARKLE_MID;
        StartSpriteAnimIfDifferent(sprite, targetAnim);
        return;
    }

    if (insightMax)
    {
        targetAnim = isBig ? DEXNAV_STAR_BIG_SPARKLE : DEXNAV_STAR_SMALL_SPARKLE;
        StartSpriteAnimIfDifferent(sprite, targetAnim);
        return;
    }

    insight = (insight - ((DEXNAV_MAX_INSIGHT / 3) - 1) * position);

    if (isBig)
    {
        if (insight > ((DEXNAV_MAX_INSIGHT / 3) - 1))            
            targetAnim = DEXNAV_STAR_BIG_FULL;
        else if (insight < 1)
            targetAnim = DEXNAV_STAR_BIG_EMPTY;
        else
            targetAnim = DEXNAV_STAR_BIG_HALF;
    }
    else
    {
        if (insight > ((DEXNAV_MAX_INSIGHT / 3) - 1))            
            targetAnim = DEXNAV_STAR_SMALL_FULL;
        else if (insight < 1)
            targetAnim = DEXNAV_STAR_SMALL_EMPTY;
        else
            targetAnim = DEXNAV_STAR_SMALL_HALF;
    }

    StartSpriteAnimIfDifferent(sprite, targetAnim);
}

static void Dexnav_DisplayStarsInsight(void)
{
    u32 state = Dexnav_GetMode();
    bool32 isScanMode = (state == DEXNAV_MODE_SCAN);

    for (enum DexnavStarPosition position = 0; position < DEXNAV_STAR_POSITION_COUNT; position++)
    {
        struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

        TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_STAR;
        TempSpriteTemplate.callback = SpriteCB_StarInsight;
        TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;
        TempSpriteTemplate.anims = sAnims_Star;
        u32 x = isScanMode ? 66 + (12 * position) : 15 + (14 * position);
        u32 y = isScanMode ? 6 : 41;

        u32 spriteId = CreateSprite(&TempSpriteTemplate, x, y, 0);
        gSprites[spriteId].data[1] = position;
        gSprites[spriteId].data[2] = state;
        gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
        gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
        gSprites[spriteId].oam.priority = 0;
        Dexnav_SaveSpriteId(DEXNAV_SPRITEID_INSIGHT_POSITION_0 + position,spriteId);
    }
}

static void Dexnav_DisplayStarsStreak(void)
{
    u32 state = Dexnav_GetMode();
    bool32 isScanMode = (state == DEXNAV_MODE_SCAN);

    for (enum DexnavStarPosition position = 0; position < DEXNAV_STAR_POSITION_COUNT; position++)
    {
        struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

        TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_STAR;
        TempSpriteTemplate.callback = SpriteCB_StarStreak;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;
        TempSpriteTemplate.anims = sAnims_Star;
        u32 x = isScanMode ? 149 + (12 * position) : 15 + (14 * position);
        u32 y = isScanMode ? 6 : 128;

        u32 spriteId = CreateSprite(&TempSpriteTemplate, x, y, 0);
        gSprites[spriteId].data[0] = Dexnav_GetStreak();
        gSprites[spriteId].data[1] = position;
        gSprites[spriteId].data[2] = state;
        gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
        gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
        gSprites[spriteId].oam.priority = 0;
        Dexnav_SaveSpriteId(DEXNAV_SPRITEID_STREAK_POSITION_0 + position,spriteId);
    }
}

static void Dexnav_DisplayMonInfo(void)
{
    enum DexnavWindows windowId = WIN_DEXNAV_INTERFACE_MON_INFO;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Dexnav_PrintMonName(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);

    Dexnav_PrintMonTypes();
    Dexnav_PrintFishingIcon();
    Dexnav_DisplaySelectedMon();
    Dexnav_DisplayInsight();
    Dexnav_DisplayStarsInsight();
    Dexnav_DisplayStreak();
    Dexnav_DisplayStarsStreak();
}

static void Dexnav_PrintMonName(enum DexnavWindows windowId)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();
    if (species == SPECIES_NONE)
        return;

    u32 x = 7;
    u32 y = 0;
    u32 fontId = FONT_DEXNAV_STAT_HEADER;
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);
    u32 windowWidth = TILE_TO_PIXELS(GetWindowAttribute(windowId, WINDOW_WIDTH)) - x;

    StringCopy(gStringVar4,GetSpeciesName(species));
    fontId = GetFontIdToFit(gStringVar4,fontId,letterSpacing,windowWidth);

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static const union AnimCmd sSpriteAnim_TypeNone[] =
{
    ANIMCMD_FRAME(TYPE_NONE * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeNormal[] =
{
    ANIMCMD_FRAME(TYPE_NORMAL * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeFighting[] =
{
    ANIMCMD_FRAME(TYPE_FIGHTING * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeFlying[] =
{
    ANIMCMD_FRAME(TYPE_FLYING * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypePoison[] =
{
    ANIMCMD_FRAME(TYPE_POISON * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeGround[] =
{
    ANIMCMD_FRAME(TYPE_GROUND * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeRock[] =
{
    ANIMCMD_FRAME(TYPE_ROCK * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeBug[] =
{
    ANIMCMD_FRAME(TYPE_BUG * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeGhost[] =
{
    ANIMCMD_FRAME(TYPE_GHOST * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeSteel[] =
{
    ANIMCMD_FRAME(TYPE_STEEL * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeMystery[] =
{
    ANIMCMD_FRAME(TYPE_MYSTERY * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeFire[] =
{
    ANIMCMD_FRAME(TYPE_FIRE * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeWater[] =
{
    ANIMCMD_FRAME(TYPE_WATER * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeGrass[] =
{
    ANIMCMD_FRAME(TYPE_GRASS * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeElectric[] =
{
    ANIMCMD_FRAME(TYPE_ELECTRIC * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypePsychic[] =
{
    ANIMCMD_FRAME(TYPE_PSYCHIC * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeIce[] =
{
    ANIMCMD_FRAME(TYPE_ICE * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeDragon[] =
{
    ANIMCMD_FRAME(TYPE_DRAGON * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeDark[] =
{
    ANIMCMD_FRAME(TYPE_DARK * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeFairy[] =
{
    ANIMCMD_FRAME(TYPE_FAIRY * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_TypeStellar[] =
{
    ANIMCMD_FRAME(TYPE_STELLAR * 16, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd * const sSpriteAnimTable_Type[NUMBER_OF_MON_TYPES] =
{
    [TYPE_NONE] = sSpriteAnim_TypeNone,
    [TYPE_NORMAL] = sSpriteAnim_TypeNormal,
    [TYPE_FIGHTING] = sSpriteAnim_TypeFighting,
    [TYPE_FLYING] = sSpriteAnim_TypeFlying,
    [TYPE_POISON] = sSpriteAnim_TypePoison,
    [TYPE_GROUND] = sSpriteAnim_TypeGround,
    [TYPE_ROCK] = sSpriteAnim_TypeRock,
    [TYPE_BUG] = sSpriteAnim_TypeBug,
    [TYPE_GHOST] = sSpriteAnim_TypeGhost,
    [TYPE_STEEL] = sSpriteAnim_TypeSteel,
    [TYPE_MYSTERY] = sSpriteAnim_TypeNone,
    [TYPE_FIRE] = sSpriteAnim_TypeFire,
    [TYPE_WATER] = sSpriteAnim_TypeWater,
    [TYPE_GRASS] = sSpriteAnim_TypeGrass,
    [TYPE_ELECTRIC] = sSpriteAnim_TypeElectric,
    [TYPE_PSYCHIC] = sSpriteAnim_TypePsychic,
    [TYPE_ICE] = sSpriteAnim_TypeIce,
    [TYPE_DRAGON] = sSpriteAnim_TypeDragon,
    [TYPE_DARK] = sSpriteAnim_TypeDark,
    [TYPE_FAIRY] = sSpriteAnim_TypeFairy,
    [TYPE_STELLAR] = sSpriteAnim_TypeNone,
};

static void SpriteCB_DexnavTypes(struct Sprite *sprite)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();
    u32 typeNum = sprite->data[1];
    enum Type type = GetSpeciesType(species,typeNum);

    sprite->oam.paletteNum = gTypesInfo[type].palette;

    if (typeNum == 1)
        sprite->invisible = (GetSpeciesType(species,0) == GetSpeciesType(species,1));
    
    if (typeNum == 0)
        sprite->invisible = (GetSpeciesType(species,typeNum) == TYPE_NONE);

    StartSpriteAnimIfDifferent(sprite,type);
}

static void Dexnav_PrintMonTypes(void)
{
    for (u32 typeNum = 0; typeNum < 2; typeNum++)
    {
        if (Dexnav_GetSpriteId(DEXNAV_SPRITEID_TYPE_0 + typeNum) != SPRITE_NONE)
            continue;

        struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

        TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_TYPES;
        TempSpriteTemplate.callback = SpriteCB_DexnavTypes;
        TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_TYPES;
        TempSpriteTemplate.anims = sSpriteAnimTable_Type;

        u32 spriteId = CreateSprite(&TempSpriteTemplate, (11 + (20 * typeNum)), 85, 0);
        gSprites[spriteId].data[0] = Dexnav_GetCurrentlySelectedSpecies();
        gSprites[spriteId].data[1] = typeNum;
        gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
        gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
        gSprites[spriteId].oam.priority = 0;
        Dexnav_SaveSpriteId(DEXNAV_SPRITEID_TYPE_0 + typeNum,spriteId);
    }
}

static void SpriteCB_DexnavFishing(struct Sprite *sprite)
{
    sprite->invisible = Dexnav_IsSelectedMonNotFishingMon();
}

static bool8 Dexnav_IsSelectedMonNotFishingMon(void)
{
    if (Dexnav_GetHabitat() != DEXNAV_HABITAT_WATER)
        return TRUE;

    return !sDexnavState->fishingMons[Dexnav_GetCursorPosition()];
}

static u32 Dexnav_GetCursorPosition(void)
{
    return sDexnavState->position;
}

static void Dexnav_SetCursorPosition(u32 value)
{
    sDexnavState->position = value;
}

static void Dexnav_MoveCursor(s32 direction)
{
    s32 future = Dexnav_GetCursorPosition() + direction;
    s32 maxPosition = min(Dexnav_GetNumberHabitatMons(Dexnav_GetHabitat()),DEXNAV_MAX_SHOWN_MONS);

    if (future >= maxPosition)
        future = 0;
    else if (future < 0)
        future = (maxPosition-1);

    Dexnav_SetCursorPosition(future);
}

static void Dexnav_PrintFishingIcon(void)
{
    if (Dexnav_GetSpriteId(DEXNAV_SPRITEID_INDICATOR_FISHING) != SPRITE_NONE)
        return;

    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_FISHING;
    TempSpriteTemplate.callback = SpriteCB_DexnavFishing;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;

    u32 spriteId = CreateSprite(&TempSpriteTemplate, 50, 82, 0);
    gSprites[spriteId].data[0] = Dexnav_GetCursorPosition();
    gSprites[spriteId].invisible = Dexnav_IsSelectedMonNotFishingMon();
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_INDICATOR_FISHING,spriteId);
}

static void Dexnav_RemoveSelectedMonSprite(void)
{
    u32 spriteId = Dexnav_GetSpriteId(DEXNAV_SPRITEID_MON_MAIN);

   if (spriteId == SPRITE_NONE)
        return;

    FreeSpriteOamMatrix(&gSprites[spriteId]);
    FreeAndDestroyMonPicSprite(spriteId);
    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_MON_MAIN,SPRITE_NONE);
}

static void Dexnav_DisplaySelectedMon(void)
{
    Dexnav_RemoveSelectedMonSprite();
    u32 species = Dexnav_GetCurrentlySelectedSpecies();

    if (species == SPECIES_NONE)
        return;

    u32 x = 149, y = 80, personality = 0;
    bool32 isShiny = FALSE, isFrontPic = TRUE;
    u32 spriteId = CreateMonPicSprite(species,isShiny,personality,isFrontPic,x, y, DEXNAV_PALETTE_MAIN_MON_ID, TAG_NONE);
    FreeSpriteOamMatrix(&gSprites[spriteId]);
    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_MON_MAIN,spriteId);
}

static void Dexnav_DisplayAllHabitatPokemon(void)
{
    enum DexnavHabitats habitat = Dexnav_GetHabitat();
    
    if (habitat == DEXNAV_HABITAT_NONE)
        return;

    for (u32 speciesIndex = 0; speciesIndex < DEXNAV_MAX_SHOWN_MONS; speciesIndex++)
        Dexnav_DisplayHabitatPokemon(habitat, speciesIndex);

}

static void SpriteCB_MonIconDexnav(struct Sprite *sprite)
{
    if (sprite->data[0] == Dexnav_GetCursorPosition() && (sprite->data[1]))
        UpdateMonIconFrame(sprite);
    else
        return;
}

static void Dexnav_RemoveMonIcon(u32 spriteId)
{
    u32 oldSpriteId = Dexnav_GetSpriteId(spriteId);

    if (oldSpriteId == SPRITE_NONE)
        return;

    Dexnav_SaveSpriteId(spriteId,SPRITE_NONE);
    FreeAndDestroyMonIconSprite(&gSprites[oldSpriteId]);
}

static void Dexnav_DisplayHabitatPokemon(enum DexnavHabitats habitat, u32 speciesIndex)
{
    u32 species = Dexnav_GetSpeciesFromHabitatAndIndex(habitat,speciesIndex);
    u32 num = Dexnav_GetNumberHabitatMons(habitat);

    Dexnav_RemoveMonIcon(DEXNAV_SPRITEID_MON_0 + speciesIndex);

    if (num == 0)
        return;
    
    if (species == SPECIES_NONE)
        return;

    u32 x = dexnavMonIconCoordinates[num-1][speciesIndex][AXIS_X] + 16;
    u32 y = dexnavMonIconCoordinates[num-1][speciesIndex][AXIS_Y] + 16;

    u32 spriteId = CreateMonIcon(species,SpriteCB_MonIconDexnav,x,y,0,0);
    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_MON_0 + speciesIndex,spriteId);

    bool32 hasCaught = (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_CAUGHT));
    gSprites[spriteId].data[0] = speciesIndex;
    gSprites[spriteId].data[1] = hasCaught;

    if (hasCaught == FALSE)
        gSprites[spriteId].oam.paletteNum = DEXNAV_PALETTE_ALL_BLACK_ID;

    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_MON_0 + speciesIndex,spriteId);
}

static u32 Dexnav_GetSpeciesFromHabitatAndIndex(enum DexnavHabitats habitat, u32 speciesIndex)
{
    return sDexnavState->dexnavSpecies[habitat][speciesIndex];
}

static void SpriteCB_FAB(struct Sprite *sprite)
{
    enum DexnavMode mode = Dexnav_GetMode();
    StartSpriteAnimIfDifferent(sprite,mode);
}

static const union AnimCmd sAnim_FAB_Scan[] = 
{
    ANIMCMD_FRAME(DEXNAV_FAB_FRAME_SCAN,4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_FAB_Cancel[] = 
{
    ANIMCMD_FRAME(DEXNAV_FAB_FRAME_CANCEL,4),
    ANIMCMD_END,
};

static const union AnimCmd * const sSpriteAnimTable_FAB[] =
{
    sAnim_FAB_Scan,
    sAnim_FAB_Cancel,
};

static void Dexnav_PrintFloatingActionButton(void)
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_FAB;
    TempSpriteTemplate.callback = SpriteCB_FAB;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;
    TempSpriteTemplate.anims = sSpriteAnimTable_FAB;

    u32 spriteId = CreateSprite(&TempSpriteTemplate, 210, 116, 0);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
    gSprites[spriteId].oam.priority = 0;
    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_FAB,spriteId);
}

static const union AnimCmd sSpriteAnim_Cursors[] =
{
    ANIMCMD_FRAME(DEXNAV_CURSOR_FRAME_0,16),
    ANIMCMD_FRAME(DEXNAV_CURSOR_FRAME_1,8),
    ANIMCMD_FRAME(DEXNAV_CURSOR_FRAME_2,16),
    ANIMCMD_FRAME(DEXNAV_CURSOR_FRAME_1,8),
    ANIMCMD_JUMP(0),
    ANIMCMD_END
};

static const union AnimCmd * const sSpriteAnimTable_Cursor[] =
{
    sSpriteAnim_Cursors,
};

static bool8 Dexnav_ShouldHideCursors(void)
{
    if (Dexnav_IsCurrentModeScan())
        return TRUE;

    u32 num = (Dexnav_GetNumberHabitatMons(Dexnav_GetHabitat()));
    if (num < 1)
        return TRUE;

    return FALSE;
}

static void SpriteCB_Cursor(struct Sprite *sprite)
{
    u32 position = Dexnav_GetCursorPosition();
    u32 num = Dexnav_GetNumberHabitatMons(Dexnav_GetHabitat()) - 1;

    if ((position == sprite->data[0]) && (num == sprite->data[1]))
        return;

    sprite->data[0] = position;
    sprite->data[1] = num;
    sprite->x = (dexnavMonIconCoordinates[num][position][AXIS_X]);
    sprite->y = (dexnavMonIconCoordinates[num][position][AXIS_Y]);
}

static void Dexnav_DisplayCursors(void)
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_CURSOR;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;
    TempSpriteTemplate.anims = sSpriteAnimTable_Cursor;
    TempSpriteTemplate.callback = SpriteCB_Cursor;

    u32 position = Dexnav_GetCursorPosition();
    u32 num = Dexnav_GetNumberHabitatMons(Dexnav_GetHabitat()) - 1;

    u32 x = dexnavMonIconCoordinates[num][position][AXIS_X];
    u32 y = dexnavMonIconCoordinates[num][position][AXIS_Y];

    u32 spriteId = CreateSprite(&TempSpriteTemplate, x, y, 0);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(64x64);
    gSprites[spriteId].oam.size = SPRITE_SIZE(64x64);
    gSprites[spriteId].invisible = Dexnav_ShouldHideCursors();
    gSprites[spriteId].data[0] = position;
    gSprites[spriteId].data[1] = num;
    Dexnav_SaveSpriteId(DEXNAV_SPRITEID_CURSOR,spriteId);
}

static void Dexnav_LaunchPokedex(u8 taskId)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();
    if (species == SPECIES_NONE)
        return;

    Dexnav_SetSavedSpecies(species);
    Dexnav_SetSavedCallback(sDexnavState->savedCallback);
    Dexnav_SetSavedHabitat(Dexnav_GetHabitat());
    Dexnav_SetSavedCursorPosition(Dexnav_GetCursorPosition());

    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_DexnavFadeToPokedex;
}

static void Task_DexnavFadeToPokedex(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    struct DexnavSavedData tempData = Dexnav_GetSavedData();
    tempData.savedCallback = sDexnavState->savedCallback;
    Dexnav_FreeResources();
    Pokedex_InitFromDexnav(tempData,taskId);
}

void Dexnav_StartOverworldSearch(u8 taskId)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();
    if (species == SPECIES_NONE)
    {
        PlaySE(SE_FAILURE);
        return;
    }

    EndDexNavSearch();

    gSpecialVar_0x8000 = species;
    gSpecialVar_0x8001 = Dexnav_GetHabitat();
    gSpecialVar_0x8002 = FALSE;

    PlaySE(SE_DEX_SEARCH);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_BeginDexnavOverworld;
}

static void Task_BeginDexnavOverworld(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    Dexnav_FreeResources();
    DestroyTask(taskId);
    SetMainCallback1(CB1_DexNavSearchCallback);
    SetMainCallback2(CB2_ReturnToField);
}

static void Dexnav_RegisterCurrentlySelectedMon(void)
{
    u32 species = Dexnav_GetCurrentlySelectedSpecies();

    u16 rawValue = VarGet(DN_VAR_SPECIES);
    u32 oldSpecies = rawValue & DEXNAV_MASK_SPECIES;

    if (species == SPECIES_NONE)
    {
        PlaySE(SE_FAILURE);
        return;
    }

    if (oldSpecies == species) 
    {
        VarSet(DN_VAR_SPECIES,0);
        return;
    }

    enum DexnavHabitats habitat = Dexnav_GetHabitat();
    VarSet(DN_VAR_SPECIES,((habitat << 14) | species));
    PlayCry_Script(species, 0);
}

static void Dexnav_LoadOverworld(void)
{
    LoadSpriteSheet(&sDexnavSpriteSheets[DEXNAV_SPRITEID_OVERWORLD].spriteSheet);
    LoadSpritePalette(&sDexnavSpriteSheets[DEXNAV_SPRITEID_COMPLETION_MARK].palette);
}

static const union AnimCmd sSpriteAnimTable_DexnavOverworld0[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_0, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnimTable_DexnavOverworld1[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_1, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnimTable_DexnavOverworld2[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_2, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnimTable_DexnavOverworld3[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_3, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnimTable_DexnavOverworld4[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_4, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnimTable_DexnavOverworld5[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_5, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnimTable_DexnavOverworld6[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_6, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnimTable_DexnavOverworld7[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_7, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnimTable_DexnavOverworld8[] =
{
    ANIMCMD_FRAME(DEXNAV_OVERWORLD_FRAME_8, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd * const sSpriteAnimTable_DexnavOverworld[] =
{
    sSpriteAnimTable_DexnavOverworld0,
    sSpriteAnimTable_DexnavOverworld1,
    sSpriteAnimTable_DexnavOverworld2,
    sSpriteAnimTable_DexnavOverworld3,
    sSpriteAnimTable_DexnavOverworld4,
    sSpriteAnimTable_DexnavOverworld5,
    sSpriteAnimTable_DexnavOverworld6,
    sSpriteAnimTable_DexnavOverworld7,
    sSpriteAnimTable_DexnavOverworld8,
};

static void SpriteCB_DexnavOverworld(struct Sprite *sprite)
{
    sprite->invisible = (Dexnav_IsSearchActive() == FALSE);

    s32 tileX = Dexnav_GetOverworldTileX();
    s32 tileY = Dexnav_GetOverworldTileY();

    s32 playerX = gSaveBlock1Ptr->pos.x + MAP_OFFSET;
    s32 playerY = gSaveBlock1Ptr->pos.y + MAP_OFFSET;

    s32 dx = tileX - playerX;
    s32 dy = tileY - playerY;

    enum Direction direction;

    if (dx > 0)
    {
        if (dy > 0)
            direction = DIR_SOUTHEAST;
        else if (dy < 0)
            direction = DIR_NORTHEAST;
        else
            direction = DIR_EAST;
    }
    else if (dx < 0)
    {
        if (dy > 0)
            direction = DIR_SOUTHWEST;
        else if (dy < 0)
            direction = DIR_NORTHWEST;
        else
            direction = DIR_WEST;
    }
    else
    {
        if (dy > 0)
            direction = DIR_SOUTH;
        else if (dy < 0)
            direction = DIR_NORTH;
        else
        {
            sprite->invisible = TRUE;
            direction = DIR_NONE; 
        }
    }

    StartSpriteAnimIfDifferent(sprite, direction);
}

void Dexnav_DrawOverworldSearchIcon(void)
{
    Dexnav_LoadOverworld();
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_OVERWORLD;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING;
    TempSpriteTemplate.anims = sSpriteAnimTable_DexnavOverworld;
    TempSpriteTemplate.callback = SpriteCB_DexnavOverworld;

    u32 x = DEXNAV_OVERWORLD_SPRITE_X;
    u32 y = DEXNAV_OVERWORLD_SPRITE_Y;

    u32 spriteId = CreateSprite(&TempSpriteTemplate, x, y, 0);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);

    Dexnav_SetOverworldIconSpriteId(spriteId);
}

void Dexnav_FreeOverworldSpriteResources(void)
{
    u32 spriteId = Dexnav_GetOverworldIconSpriteId(); 

    if (spriteId != MAX_SPRITES)
        DestroySprite(&gSprites[spriteId]);

    Dexnav_SetOverworldIconSpriteId(MAX_SPRITES);

    FreeSpriteTilesByTag(DEXNAV_SPRITETAG_OVERWORLD);
    FreeSpritePaletteByTag(DEXNAV_PALTAG_ARROW_COMPLETION_STAR_FAB_FISHING);
}

u8 Dexnav_CalculatePotential(u32 insight)
{
    if (insight < DEXNAV_INSIGHT_PERCENT_10) 
        return insight / 20;
    else if (insight < DEXNAV_INSIGHT_PERCENT_50)
        return ((insight + 60) / 80);
    else if (insight < DEXNAV_MAX_INSIGHT)
        return ((insight - 50) / 25);
    else
        return NUM_STATS;
}

u8 Dexnav_CalculateAbilityNum(u32 species, u32 insight)
{
    Dexnav_ClearAbilityFlag();
    bool32 hasSecondAbility = (GetSpeciesAbility(species, 1) != ABILITY_NONE);
    bool32 hasHiddenAbility = (GetSpeciesAbility(species, 2) != ABILITY_NONE);

    if (hasSecondAbility == FALSE && hasHiddenAbility == FALSE)
        return 0;

    u32 rand = Random() % 100;

    if (hasHiddenAbility == FALSE)
        return (rand < 50) ? 0 : 1;

    u64 chance = 0;

    if (insight < DEXNAV_INSIGHT_PERCENT_5)
    {
        chance = 0;
    }
    else if (insight < DEXNAV_INSIGHT_PERCENT_12_5)
    {
        chance = (insight - 10);
    }
    else if (insight < DEXNAV_INSIGHT_PERCENT_50)
    {
        u64 x = (u64)insight;
        chance = ((7 * x * x) - (350 * x) + 21250) / 1125;
    }
    else
    {
        chance = DEXNAV_MAX_ITEM_ABILITY_CHANCE;
    }

    if (chance > DEXNAV_MAX_ITEM_ABILITY_CHANCE)
        chance = DEXNAV_MAX_ITEM_ABILITY_CHANCE;

    if (rand < (u32)chance)
    {
        Dexnav_SetAbilityFlag();
        return 2;
    }

    if (hasSecondAbility == FALSE)
        return 0;

    return (Random() % 2);
}

enum Item Dexnav_CalculateItem(u32 species, u32 insight)
{
    enum Item item1 = gSpeciesInfo[species].itemCommon;
    enum Item item2 = gSpeciesInfo[species].itemRare;

    Dexnav_ClearItemFlag();

    if (item1 == ITEM_NONE && item2 == ITEM_NONE)
        return ITEM_NONE;

    u32 rand = Random() % 100;
    enum Item selectedItem = ITEM_NONE;

    if (rand < 50) 
        selectedItem = item1;
    else if (rand < 55) 
        selectedItem = item2;

    if (selectedItem != ITEM_NONE)
        return selectedItem;

    u32 itemChance = 0;
    u32 extraChance = 0;
    if (insight < 10)
        itemChance = insight;
    else if (insight < 100)
        itemChance = ((4 * insight) + 50) / 9;
    else
        itemChance = DEXNAV_MAX_ITEM_ABILITY_CHANCE;

    if (itemChance > DEXNAV_MAX_ITEM_ABILITY_CHANCE)
        itemChance = DEXNAV_MAX_ITEM_ABILITY_CHANCE;

    if ((Random() % 100) < itemChance)
        extraChance = 1; 

    if (extraChance == 0)
        return selectedItem;

    if (item1 != ITEM_NONE && item2 != ITEM_NONE)
    {
        rand = Random() % 100;
        if (rand < 90)
            selectedItem = item1;
        else 
            selectedItem = item2;
    }
    else if (item1 == ITEM_NONE && item2 != ITEM_NONE)
    {
        rand = Random() % 100;
        if (rand < 55) 
            selectedItem = item2;
        else 
            selectedItem = ITEM_NONE;
    }
    else if (item1 != ITEM_NONE && item2 == ITEM_NONE)
    {
        selectedItem = item1;
    }

    if (selectedItem != ITEM_NONE)
        Dexnav_SetItemFlag();

    return selectedItem;
}

void Dexnav_GenerateMoveset(u32 species, u32 insight, u32 level, enum Move *moves)
{
    Dexnav_ClearMoveFlag();
    CreateWildMon(species, level);
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
        moves[i] = GetMonData(&gEnemyParty[0], MON_DATA_MOVE1 + i);

    u16 eggMoveBuffer[EGG_MOVES_ARRAY_COUNT];
    u32 numEggMoves = GetEggMoves(&gEnemyParty[0], eggMoveBuffer);

    if (numEggMoves == 0)
        return;

    u32 chance = 0;

    if (insight < 10)
    {
        chance = (3 * insight) + 20;
    }
    else if (insight < 100)
    {
        u64 x = (u64)insight;
        chance = (u32)((x * x) - (20 * x) + 8200) / 162;
    }
    else
    {
        chance = 100;
    }

    if (chance > 100)
        chance = 100;
    
    if (chance < 1)
        chance = 1;

    if (Random() % 100 >= chance)
        return;

    Dexnav_SetMoveFlag();
    moves[0] = eggMoveBuffer[Random() % numEggMoves];
}

u32 Dexnav_CalculateLevel(u32 species, enum EncounterType environment)
{
    Dexnav_ClearLevelFlag();
    u32 levelBase = GetEncounterLevelFromMapData(species, environment);

    if (levelBase == MON_LEVEL_NONEXISTENT)
        return MON_LEVEL_NONEXISTENT;

    u32 chance = 0;
    u32 insight = gSaveBlock3Ptr->dexNavChain;

    if (insight < DEXNAV_INSIGHT_PERCENT_12_5)
        chance = 0;
    else if (insight < DEXNAV_INSIGHT_PERCENT_75)
        chance = (4 * (insight - 25)) / 5;
    else
        chance = 100;

    if (chance > 100)
        chance = 100;

    u32 levelBonus = insight / 5;

    if ((Random() % 100) < chance)
        levelBonus += 10;

    if (levelBonus > 0)
        Dexnav_SetLevelFlag();

    u32 newLevel = levelBase + levelBonus;
    return (newLevel > MAX_LEVEL) ? MAX_LEVEL : newLevel;
}

bool8 Dexnav_CalculateShinyRolls(u32 streak)
{
    return streak;
}

void CreateDexnavWildMon(u32 species, u32 potential, u32 level, u32 abilityNum, enum Item item, enum Move *moves)
{
    Dexnav_ClearStatFlag();
    struct Pokemon *mon = &gEnemyParty[0];
    CreateWildMon(species, level);
    u8 ivs[NUM_STATS] = {0};
    u8 oldIvs[NUM_STATS] = {0};
    u32 statIndices[NUM_STATS] = 
        {
            STAT_HP,
            STAT_ATK,
            STAT_DEF,
            STAT_SPEED,
            STAT_SPATK,
            STAT_SPDEF
        };

    for (u32 i = 0; i < NUM_STATS; i++)
    {
        ivs[i] = GetMonData(mon, MON_DATA_HP_IV + i);
        oldIvs[i] = ivs[i];
    }

    Shuffle8(statIndices, NUM_STATS);

    for (u32 i = 0; i < potential && i < NUM_STATS; i++)
        ivs[statIndices[i]] = MAX_PER_STAT_IVS;

    for (u32 i = 0; i < NUM_STATS; i++)
        if (oldIvs[i] != ivs[i])
            Dexnav_SetStatFlag();

    for (u32 i = 0; i < NUM_STATS; i++)
        SetMonData(mon, MON_DATA_HP_IV + i, &ivs[i]);

    SetMonData(mon, MON_DATA_ABILITY_NUM, &abilityNum);
    SetMonData(mon, MON_DATA_HELD_ITEM, &item);

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
        SetMonMoveSlot(mon, moves[i], i);

    CalculateMonStats(mon);
}

void Dexnav_IncrementSpeciesSearchLevel(u32 origSpecies)
{
    u32 searchLevel = GetSearchLevel(origSpecies);
    
    if (searchLevel >= DEXNAV_MAX_INSIGHT)
        return;

    searchLevel++;
    
    u32 species = ConvertSpeciesIdToResidoDex(origSpecies);
    gSaveBlock2Ptr->dexNavSearchLevels[species] = searchLevel;
}

void Dexnav_StartFieldEffect(void)
{
    u32 oldSpriteId = Dexnav_GetOverworldFldEffSpriteId();
    if (oldSpriteId == MAX_SPRITES)
        return;

    u32 fieldEffect = Dexnav_GetOverworldFldEffId();
    if (fieldEffect == 0)
        return;

    gFieldEffectArguments[0] = Dexnav_GetOverworldTileX();
    gFieldEffectArguments[1] = Dexnav_GetOverworldTileY();
    gFieldEffectArguments[2] = 0xFF;
    gFieldEffectArguments[3] = 2;
    Dexnav_SetOverworldFldEffSpriteId(FieldEffectStart(fieldEffect));
}
