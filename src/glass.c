#include "global.h"
#include "random.h"
#include "bg.h"
#include "text_window.h"
#include "window.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "scanline_effect.h"
#include "decompress.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "sound.h"
#include "string_util.h"
#include "script.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "glass.h"
#include "constants/glass.h"
#include "international_string_util.h"
#include "gba/isagbprint.h"
#include "event_data.h"
#include "trig.h"
#include "quests.h"
#include "constants/quests.h"
#include "script_menu.h"
#include "strings.h"
#include "data.h"
#include "region_map.h"
#include "battle_setup.h"
#include "event_object_movement.h"
#include "pokemon_icon.h"
#include "battle_main.h"
#include "constants/battle.h"
#include "pokemon_summary_screen.h"
#include "dma3.h"
#include "field_weather.h"
#include "constants/reveal.h"
#include "reveal.h"

void DebugSetTrainerStatus(void);

static void Glass_Init(MainCallback, s32, s32, s32, u16, u16);
static bool8 AllocateStructs(void);
static void Glass_SetupCB(void);
static void FreeSpritePalettesResetSpriteData(void);
static void InitBgsAndLoadBackgroundGraphics(bool32);
static void Glass_InitWindows(void);
static void AllocateResourcesForListMenu(void);
static void InitalizeLocationModeSpriteIds(void);
static void StartFadeAndSetUpBasedOnMode(void);
static void Glass_VBlankCB(void);
static void Glass_MainCB(void);

static bool8 Glass_InitBgs(bool32);
static bool8 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(bool32);
static void SetScheduleBgs(u32);
static void SetBackgroundTransparency(void);

static bool8 LoadGraphics(void);
static void LoadGlassPalettes(void);
static const u32* GetRelevantTiles(u32);
static const u32* GetBg1Tiles(void);
static const u32* GetBg2Tiles(void);
static const u32* GetBg3Tiles(void);
static const u32* GetRelevantTilemap(u32);
static const u32* GetBg1Tilemap(void);
static const u32* GetBg2Tilemap(void);
static const u32* GetBg3Tilemap(void);
static const u16* GetRelevantPalette(void);

static bool8 IsAppTrainerMode(void);
static void ToggleGlassMode(void);
static void SetUpLocationMode(u8);
static void SwitchToTrainerMode(u8);
static void Task_ChangeToTrainerModeAndReloadScreen(u8);
static void CleanUpLocationMode(u8);
static void SetUpTrainerMode(u8);
static void SwitchToLocationMode(u8);
static void Task_ChangeToLocationModeAndReloadScreen(u8);
static void CleanUpTrainerMode(u8);
static void ClearWindowCopyToVram(u32);

static void LoadCreateLocationModeSprites(void);

static void LoadMarkSpriteSheets(void);
static void LoadSingleMarkSprite(u32, u32, u32, u32);
static u16 CalculateTileTag(u32, u32, u32, u32);

static void CreateMapCursor(void);
static void SpriteCallback_MapCursor(struct Sprite*);
static void HandleMapCursorVisibility(struct Sprite*, s32);
static void MoveMapCursorSprite(struct Sprite*, u32);
static u8 CalculateMiniMapXCoord(u32);
static u8 CalculateMiniMapYCoord(u32);
static u8 CalculateMiniMapCoord(u32);

static void CreateLocationArrowSpritePair(void);
static void CreateUpLocationArrowSprite(void);
static void CreateDownLocationArrowSprite(void);
static void CreateLocationArrowSprite(u32,const u32*, u32, u32, void (*callback)(struct Sprite*));
static void SpriteCB_MenuArrow(struct Sprite*);
static bool8 ArrowPositionIsTop(struct Sprite*);
static void AnimateLocationArrowSprite(struct Sprite*, u32);
static void HandleMenuArrowSpriteVisibility(struct Sprite*, bool32);
static bool8 IsCursorOrPositionAtBottom(void);
static bool8 IsCursorOrPositionAtTop(void);
static bool8 IsTrainerCursorAtTop(void);
static bool8 IsTrainerCursorAtBottom(void);
static bool8 IsLocationPositionAtTop(void);
static bool8 IsLocationPositionAtBottom(void);

static void InitalizeCheckMonSpriteId(void);
static void DestroyCheckMonCursorSprite(void);
static void SaveCheckMonCursorSpriteId(u32);
static void PrintLocationCheckmark(u8, u32, u8);
static void CheckLocationCreateCheckHoverSprite(struct ListMenu*, s32);
static u8 CalculateCheckmarkVerticalPosition(struct ListMenu*);
static void CreateCheckSprite(u32, u32);
static u16 GetLocationHoverCheckTileTag(void);

static u8 GetLocationSortFromSaveBlock(void);
static void PopulateLocationList(void);
static void SetNumListElements(u32);
static u8 GetNumListElements(void);
static void BuildLocationListTemplate(void);
static u8 GenerateList(void);
static void AssignCancelNameAndId(u8);

static u8 GetCurrentSort(void);
static void SortLocationsById(void);
static void SortAllLocationsAZ(void);
static void SortAllLocationUndiscoveredFirst(void);
static void SortAllLocationsVisibleFirst(void);
static void SortAllLocationsConqueredFirst(void);
static void PopulateListMenuLocations(u32, u32);

static void MakeLocationListToBeSorted(u32*, u32);
static void SortUnlockedLocationsAZ(u32*, u32);
static void SortLockedLocationsId(u32*, u32);
static void SortLocationsUndiscoveredFirst(u32*, u32);
static void SortLocationsVisibleFirst(u32*, u32);
static void SortLocationsConqueredFirst(u32*, u32);
static void AddSortedLocationsToList(u32*, u32, u32*, u32);
static void PopulateListMenuWithSortedLocation(u32*, u32);

static bool8 IsBothLocationsLocked(u32*, u32, u32);
static bool8 IsLocationStateVisible(u32);
static bool8 IsLocationConquered(u32);
static u8 GetLocationPercent(u32);
static const u8* GetLocationName(u32);
static bool8 DoesLocationHaveDiscoveredTrainers(u32 location);

static void PrintMenuHeader(void);
static void HandleMenuHeader(void);
static void Glass_PrintSortModeHeader(u32, u32);
static const u8* GetSortName(u32);
static void PrintLocationName(void);
static u8 CalculateLocationNameXPosition(u32, u8*, u32);

static void PrintHelpBar(void);
static const u8* GetHelpBarText(void);
static const u8 *GetHelpBarTrainerText(u32);
static const u8 *GetHelpBarLocationText(u32);

static void Task_LocationInput(u8);
static u8 GetLocationIdFromCurrentPosition(void);
static u8 GetCurrentPosition(void);
static u8 GetLocationScrollOffset(void);
static u8 GetLocationRowPosition(void);
static void SaveChosenLocation(u32);

static void MoveCursorFunc(s32, bool8, struct ListMenu*);
static void PlayCursorSound(bool32);

static void HandleLocationStats(s32);
static void PrintLocationStats(s32, u32);
static u8 GetMapSectionFromTrainerId(u32);
static void InitAllLocationStats(void);
static void HandleLocationStatsTotal(u8*);
static void HandleLocationStatsDiscovered(u8*);
static void HandleLocationStatsDefeated(u8*);
static void IncrementLocationStat(u32, u8*);
static void DecrementLocationStat(u32, u8*);
static void PrintLocationPercent(u32, u32, u32);
static void PrintLocationTotal(u32, u32, u32);
static void PrintLocationDefeated(u32, u32, u32);
static void PrintLocationRemaining(u32, u32, u32);
static u8 GetLocationStat(u32,u32);

static void HandleLocationInput(u32, u8, u32);

static u8 IncrementSortOrder(bool32);
static void WriteLocationSortToSaveBlock(u32);
static void WriteTrainerSortToSaveBlock(u32);
static void SetSortOrderAndSave(void);
static void ChangeSortAndReloadLocationList(u8);
static void SetSort(u32);
static void ReloadLocationList(u8);
static void ClearStatsWindow(void);
static void ResetLocationPositionToZero(void);
static void ResetLocationCursorToTop(s16*);

static void DestroyListClearWindow(s16*);
static void SaveScrollAndRowPositions(void);
static u8 GetTrainerSortFromSaveBlock(void);
static void ChangeSortAndReloadTrainerList(u8);
static void BuildTrainerListTemplate(u32);
static u8 GetChosenLocation(void);

static void PopulateTrainerList(u32);
static void SortTrainerList();
static void PopulateAndSortTrainerList(u32);
static void CalcSetScreenRows(u32, u32);
static void UpdatePartySizes(void);
static void UpdatePartySizesAndPrintAllParties();
static void UpdatePartySizesAndPrintPartyForRow(u32);
static void PrintAllParties(void);
static void EmptyAllTrainerScreenRowSpriteIds(void);
static void EmptyTrainerScreenRowSpriteIds(u32 row);

static void InitalizeNameplateSpriteId(void);
static void HandleTrainerName(void);
static void PrintNameplate(void);
static u8 CalculateVerticalNameplatePosition(void);
static void LoadNameplateSprite(void);
static void SaveNameplateSpriteId(u32);
static void SpriteCallback_Nameplate(struct Sprite *sprite);
static void MoveNameplate(void);
static u8 GetNameplateSpriteId(void);

static u8 GetTrainerIdFromCurrentPosition(void);
static u8 GetTrainerIdFromPosition(u32);
static void PrintTrainerName(void);
static const u8 *GetTrainerName(u32);
static void* CalculateTrainerNameTileDestination(void);
static u8* CreateTrainerNameWindowAddText(u32*);
static void CopyTrainerNameWindowOntoNameplateMemory(u8*, void*, u32);
static u8 CalculateTrainerNameHorizontalPosition(u32, u32, u32);
static void DestroyNameplateSpriteId(void);

static void PrintMonCursor(void);
static u8 CalculateVerticalMonCursorPosition(u32);
static void LoadMonCursorSprite(void);
static void SpriteCallback_MonCursor(struct Sprite *sprite);
static void MoveMonCursor(void);
static u8 GetCheckMonCursorSpriteId(void);
static u8 CalculateVerticalTrainerPosition(u32);
static u8 CalculateCursorHorizontalPosition(void);

static void IncrementTrainerColumn(void);
static void DecrementTrainerColumn(void);
static void ChangeTrainerColumn(s32);
static bool8 IsCursorMovingRight(s32);
static bool8 IsColumnOnFirstMon(u32);
static bool8 IsColumnOnTrainer(u32);
static void SetColumnToTrainerIfCanPlayReveal(void);
static void AdjustTrainerColumn(u32);
static void SetCurrentTrainerColumn(u32);
static void SetCurrentTrainerColumnPlayCursorSound(u32);
static void IncrementTrainerRow(u32, u32);
static void DecrementTrainerRow(u32, u32);
static void SetCurrentTrainerRow(u32);
static void SetCurrentTrainerRowPlayCursorSound(u32);
static void ChangeTrainerRow(u32);
static void HandleSprites(u32, u32, u32);
static void PopulateTrainerIdsArray(u32*);
static void MoveTrainerRowsWhenFound(u32[GLASS_TRAINER_MAX_SHOWED][2], struct OnScreenRow[GLASS_TRAINER_MAX_SHOWED], u32[GLASS_TRAINER_MAX_SHOWED], u32[GLASS_TRAINER_MAX_SHOWED]);
static void LoopThroughScreenRows(u32*, u32*, u32);
static bool8 HaveAnyTrainersMovedScreenRow(u32*, u32*);

static u8 GetCurrentTrainerRow(void);
static u8 GetCurrentTrainerColumn(void);

static s32 GetCurrentCursorScreenRowPosition(void);
static void SetCurrentCursorScreenRowPosition(u32);
static u8 GetNumberOfScreenRows(void);
static u8 ConvertTrainerRowToScreenRow(u32, u32);
static u8 ConvertScreenRowToPositionInTrainerList(u32, u32);
static void SetScreenRow(u32, u32);

static void CreateTrainerArrowSpritePair(void);
static void CreateTrainerArrowSprite(u32,const u32*, u32, u32, void (*callback)(struct Sprite *));
static void CreateUpTrainerArrowSprite(void);
static void CreateDownTrainerArrowSprite(void);
static void SaveHoverSpriteId(u32);
static void InitalizeHoverSpriteId(void);
static void DestroyHoverSpriteId(void);

static bool8 IsTrainerDefeated(u32);
static bool8 IsTrainerRematch(u32);

static void SortAllTrainersAZ(u32);
static void StoreTrainersInTempList(u32, u32*);
static void SortDiscoveredTrainersAZ(u32, u32*, u32*);
static void SortDiscoveredTrainers(u32, u32*, u32*);
static void SortUndiscoveredTrainers(u32, u32*, u32*);
static void PopulateTrainerListWithSort(u32, u32*);
static void SortAllTrainersIncompleteFirst(u32);
static void SortDefeatedTrainers(u32, u32*, u32*);
static void SortAllTrainersUndiscoveredFirst(u32);
static void SortAllTrainersDefeatedFirst(u32);
static void ReloadTrainerList(void);
static void ResetTrainerRowAndCursor(void);
static void EmptyTrainerList(void);

static void PrintTrainerAndParty(u32);
static u8 GetTrainerIdFromTrainerFromScreenRow(u32);
static u8 GetListPositionFromScreenRow(u32);
static u8 GetTrainerOWSpriteIfBattled(u32);
static void PrintTrainerSprite(u32, u32);
static void PrintParty(u32, u32);
static void SavePartySizeForRow(u32, u32);
static u8 GetPartySizeForRow(u32);
static u8 CalculateHorizontalMonPosition(u32);
static u8 CalculateHorizontalMonCursorPosition(u32);
static void PrintPartyMon(u32,struct Pokemon*, u32, u32 y);
static void SetSpriteId(u32, u32, u32);
static void DestroyPartySprites(u32);
static void DestroyAllPartySprites(void);

static u8 CreateMarkSprite(u32, u32, u16, void (*callback)(struct Sprite*));
static void PrintTrainerStateMark(u32, u32, u32);
static void PrintElevatedTrainerStateMark(void);
static u8 GetMarkFromTrainerId(u32, bool32);

static void MoveSprites(u32, u32);
static void MoveTrainerForNameplate(s32);
static void HandleTrainerSpriteAnimation(void);
static void StopTrainerRowAnimation(u32, u32, u32);
static void AnimateTrainerRow(u32, u32, u32);
static bool8 IsCurrentRowIsDefeatedTrainer(u32);
static void ChangeBackground(u32);

static void Task_TrainerInput(u8);

static void HandleTrainerModeAPress(u8, u32);
static bool8 CanPlayTrainerReveal(u32);
static enum RevealIds GetRevealFromTrainerId(u32);
static void HandleCharacterReveal(u8, u32);
static void PlayTrainerReveal(u8 taskId);
static void Task_LoadReveal(u8 taskId);
static void HandlePartyMonSelection(u32, u8);
static void GoToPokemonSummary(u8);
static struct Pokemon *Glass_GetTempParty(void);
static void Task_LoadPokemonSummary(u8);

static bool8 IsReturningFromOtherScreen(u32);
static void HandleSavedTrainerModeData(u32, u32, u32, u16, u16);
static void RestoreTrainerModeData(u32, u32, u32, u16, u16);
static void RestoreScrollAndRowPositions(u32, u32);

static void PlaySoundStartFadeQuitApp(u8);
static void Task_WaitFadeAndExitGracefully(u8);
static void FadeAndBail(void);
static void ResetTrainerMode(void);
static void Glass_FreeResources(void);
static void FreeGlassStructs(void);
static void FreeGlassBackgrounds(void);

struct GlassState
{
    MainCallback savedCallback;
    u8 sortOrder;
    u16 chosenLocation;
    bool8 trainerMode;
    u8 locationStats[MAPSEC_COUNT][GLASS_LOCATION_STAT_COUNT];
    u8 mapCursorSpriteId;
    struct Pokemon tempParty[PARTY_SIZE];
};

struct GlassLists
{
    u8 numListElements;
    u16 LocationList[RESIDO_MAPSEC_COUNT];
    u16 TrainerList[TRAINERS_COUNT];
    struct OnScreenRow onScreenRow[GLASS_TRAINER_MAX_SHOWED];
};

struct GlassMenuStaticResources
{
    u16 scroll;
    u16 row;
    u16 storedScrollOffset;
    u16 storedRowPosition;
    u8 trainerRow;
    u8 trainerColumn;
    u8 cursorScreenRow;
    u8 interfaceSpriteIds[GLASS_UI_SPRITE_COUNT];
};

static EWRAM_DATA struct GlassState *sGlassState = NULL;
static EWRAM_DATA struct GlassLists *sGlassLists = NULL;
static EWRAM_DATA struct ListMenuItem *sListMenuItems = NULL;
static EWRAM_DATA struct GlassMenuStaticResources sListMenuState = {0};
static EWRAM_DATA u8 *sBgTilemapBuffer[BG_GLASS_COUNT] = {NULL};

static const u8 sText_HelpBarLocation[] =_("{A_BUTTON} See Trainers {B_BUTTON} Return {START_BUTTON} Sort");
static const u8 sText_HelpBarLocationLocked[] =_("{B_BUTTON} Return {START_BUTTON} Sort");
static const u8 sText_HelpBarTrainers[] =_("{A_BUTTON} Pokémon Summary {B_BUTTON} Return {START_BUTTON} Sort");
static const u8 sText_HelpBarTrainersLocked[] =_("{B_BUTTON} Return {START_BUTTON} Sort");

static const u8 sText_SortOrder_AZ[] =_("A - Z");
static const u8 sText_SortOrder_Undiscovered[] =_("Undiscovered First");
static const u8 sText_SortOrder_Incomplete[] =_("Incomplete First");
static const u8 sText_SortOrder_Completed[] =_("Completed First");

static const u8 sText_SortOrder_Undefeated[] =_("Undefeated First");
static const u8 sText_SortOrder_Defeated[] =_("Defeated First");

static const u8 sText_SortOrder_IncompleteAZ[] =_("Incomplete First A - Z");
static const u8 sText_SortOrder_CompletedAZ[] =_("Completed First A - Z");

static const u8 sText_Back[] =_("Back");
static const u8 sText_Close[] =_("Close");
static const u8 sText_Completed[] =_("Completed: ");
static const u8 sText_Remaining[] =_("Remaining: ");
static const u8 sText_Trainers[] =_("Trainers: ");
static const u8 sText_Total[] =_("({STR_VAR_1})");

static const struct BgTemplate sGlassBgTemplates[] =
{
    {
        .bg = BG0_GLASS_TEXT_CONTENT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    {
        .bg = BG1_GLASS_MAP_STATS_TRAINER_CURSOR,
        .charBaseIndex = 1,
        .mapBaseIndex = 29,
        .priority = 1,
    },
    {
        .bg = BG2_GLASS_LIST_BG,
        .charBaseIndex = 2,
        .mapBaseIndex = 25,
        .priority = 2,
    },
    {
        .bg = BG3_GLASS_BACKGROUND,
        .charBaseIndex = 3,
        .mapBaseIndex = 27,
        .priority = 3
    },
};

static const struct WindowTemplate sGlassWindowTemplates[] =
{
    [GLASS_WINDOW_HELP_BAR] =
    {
        .bg = BG0_GLASS_TEXT_CONTENT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [GLASS_WINDOW_HEADER] =
    {
        .bg = BG0_GLASS_TEXT_CONTENT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 3,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2),
    },
    [GLASS_WINDOW_STATS] =
    {
        .bg = BG0_GLASS_TEXT_CONTENT,
        .tilemapLeft = 0,
        .tilemapTop = 11,
        .width = 15,
        .height = 7,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2) + (30 * 2),
    },
    [GLASS_WINDOW_LIST] =
    {
        .bg = BG0_GLASS_TEXT_CONTENT,
        .tilemapLeft = 15,
        .tilemapTop = 2,
        .width = 15,
        .height = 15,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2) + (30 * 2) + (15 * 7),
    },
    DUMMY_WIN_TEMPLATE
};

static const u32 glassLocationCursorMap[] = INCBIN_U32("graphics/ui_menus/glass/location/cursor/map.4bpp.smol");
static const u32 glassLocationArrowsBottom[] = INCBIN_U32("graphics/ui_menus/glass/location/arrows/bottom.4bpp.smol");
static const u32 glassLocationArrowsTop[] = INCBIN_U32("graphics/ui_menus/glass/location/arrows/top.4bpp.smol");
static const u32 glassLocationListBgTiles[] = INCBIN_U32("graphics/ui_menus/glass/location/list/bg.4bpp.smol");
static const u32 glassLocationListBgTilemap[] = INCBIN_U32("graphics/ui_menus/glass/location/list/bg.bin.smolTM");
static const u32 glassLocationMapStatsMapboxTiles[] = INCBIN_U32("graphics/ui_menus/glass/location/mapStats/mapbox.4bpp.smol");
static const u32 glassLocationMapStatsMapboxTilemap[] = INCBIN_U32("graphics/ui_menus/glass/location/mapStats/mapbox.bin.smolTM");
static const u32 glassLocationBgTiles[] = INCBIN_U32("graphics/ui_menus/glass/location/bg.4bpp.smol");
static const u32 glassLocationBgTilemap[] = INCBIN_U32("graphics/ui_menus/glass/location/bg.bin.smolTM");

static const u32 glassTrainerArrowsBottom[] = INCBIN_U32("graphics/ui_menus/glass/trainer/arrows/bottom.4bpp.smol");
static const u32 glassTrainerArrowsTop[] = INCBIN_U32("graphics/ui_menus/glass/trainer/arrows/top.4bpp.smol");
static const u32 glassTrainerCursorsMon[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/mon.4bpp.smol");

static const u32 glassTrainerCursorsNameplate[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/nameplate.4bpp.smol");

static const u32 glassTrainerCursorTiles[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/row/0.4bpp.smol");
static const u32 glassTrainerCursorsRow0Tilemap[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/row/0.bin.smolTM");
static const u32 glassTrainerCursorsRow1Tilemap[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/row/1.bin.smolTM");
static const u32 glassTrainerCursorsRow2Tilemap[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/row/2.bin.smolTM");
static const u32 glassTrainerCursorsRow3Tilemap[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/row/3.bin.smolTM");
static const u32 glassTrainerCursorsRowTrainer[] = INCBIN_U32("graphics/ui_menus/glass/trainer/cursors/row/trainer.4bpp.smol");
static const u32 glassTrainerListBgTiles[] = INCBIN_U32("graphics/ui_menus/glass/trainer/list/bg.4bpp.smol");
static const u32 glassTrainerListBgTilemap[] = INCBIN_U32("graphics/ui_menus/glass/trainer/list/bg.bin.smolTM");
static const u32 glassTrainerBgTiles[] = INCBIN_U32("graphics/ui_menus/glass/trainer/bg.4bpp.smol");
static const u32 glassTrainerBgTilemap[] = INCBIN_U32("graphics/ui_menus/glass/trainer/bg.bin.smolTM");

static const u32 glassMarksBoss[] = INCBIN_U32("graphics/ui_menus/glass/marks/boss.4bpp.smol");
static const u32 glassMarksBossComplete[] = INCBIN_U32("graphics/ui_menus/glass/marks/bossComplete.4bpp.smol");
static const u32 glassMarksBossCompleteHover[] = INCBIN_U32("graphics/ui_menus/glass/marks/bossCompleteHover.4bpp.smol");
static const u32 glassMarksBossRematch[] = INCBIN_U32("graphics/ui_menus/glass/marks/bossRematch.4bpp.smol");
static const u32 glassMarksGym[] = INCBIN_U32("graphics/ui_menus/glass/marks/gym.4bpp.smol");
static const u32 glassMarksGymComplete[] = INCBIN_U32("graphics/ui_menus/glass/marks/gymComplete.4bpp.smol");
static const u32 glassMarksGymCompleteHover[] = INCBIN_U32("graphics/ui_menus/glass/marks/gymCompleteHover.4bpp.smol");
static const u32 glassMarksGymRematch[] = INCBIN_U32("graphics/ui_menus/glass/marks/gymRematch.4bpp.smol");
// PSF TODO this sprite is broken on the trainer page - just this one, don't know why
static const u32 glassMarksRegularComplete[] = INCBIN_U32("graphics/ui_menus/glass/marks/regularComplete.4bpp.smol");
static const u32 glassMarksRegularCompleteHover[] = INCBIN_U32("graphics/ui_menus/glass/marks/regularCompleteHover.4bpp.smol");
static const u32 glassMarksRegularRematchComplete[] = INCBIN_U32("graphics/ui_menus/glass/marks/regularRematchComplete.4bpp.smol");
static const u32 glassMarksRegularRematchCompleteHover[] = INCBIN_U32("graphics/ui_menus/glass/marks/regularRematchCompleteHover.4bpp.smol");

static const u8 glassMarksRegularCompleteHoverBitmap[] = INCBIN_U8("graphics/ui_menus/glass/marks/regularCompleteHover.4bpp");

static const u16 glassPalettesBlack[] = INCBIN_U16("graphics/ui_menus/glass/palettes/black.gbapal");
static const u16 glassPalettesBlue[] = INCBIN_U16("graphics/ui_menus/glass/palettes/blue.gbapal");
static const u16 glassPalettesDefault[] = INCBIN_U16("graphics/ui_menus/glass/palettes/default.gbapal");
static const u16 glassPalettesGreen[] = INCBIN_U16("graphics/ui_menus/glass/palettes/green.gbapal");
static const u16 glassPalettesMap[] = INCBIN_U16("graphics/ui_menus/glass/palettes/map.gbapal");
static const u16 glassPalettesPlatinum[] = INCBIN_U16("graphics/ui_menus/glass/palettes/platinum.gbapal");
static const u16 glassPalettesRed[] = INCBIN_U16("graphics/ui_menus/glass/palettes/red.gbapal");
static const u16 glassPalettesScarlet[] = INCBIN_U16("graphics/ui_menus/glass/palettes/scarlet.gbapal");
static const u16 glassPalettesViolet[] = INCBIN_U16("graphics/ui_menus/glass/palettes/violet.gbapal");
static const u16 glassPalettesWhite[] = INCBIN_U16("graphics/ui_menus/glass/palettes/white.gbapal");
static const u16 glassPalettesYellow[] = INCBIN_U16("graphics/ui_menus/glass/palettes/yellow.gbapal");
static const u16 glassPalettesText[] = INCBIN_U16("graphics/ui_menus/glass/palettes/text.gbapal");

static const u8 sGlassWindowFontColors[][3] =
{
    [GLASS_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [GLASS_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
    [GLASS_FONT_COLOR_TRAINER_NAME] = {GLASS_SPRITE_TEXT_COLOR_DARK_GRAY, GLASS_SPRITE_TEXT_COLOR_WHITE, GLASS_SPRITE_TEXT_COLOR_TRANSPARENT},
};

static const struct SpritePalette sGlassInterfaceSpritePalette =
{
    .data = glassPalettesDefault,
    .tag = PAL_GLASS_UI_SPRITES,
};

void DebugSetTrainerStatus(void)
{
    FlagSet(FLAG_VISITED_QIU_VILLAGE);
    FlagSet(FLAG_VISITED_HALERBA_CITY);
    SetTrainerDiscovered(713);
    SetTrainerDiscovered(303);
    SetTrainerDiscovered(294);
    SetTrainerDiscovered(167);
    FlagSet(TRAINER_FLAGS_START + 86);
    FlagSet(TRAINER_FLAGS_START + 848);
    FlagSet(TRAINER_FLAGS_START + 177);
    FlagSet(TRAINER_FLAGS_START + 681);
    FlagSet(TRAINER_FLAGS_START + 509);
    FlagSet(TRAINER_FLAGS_START + 577);

    FlagSet(TRAINER_FLAGS_START + TRAINER_GRUNT_AQUA_HIDEOUT_3);
    FlagSet(TRAINER_FLAGS_START + TRAINER_MOLLIE);
    FlagSet(TRAINER_FLAGS_START + TRAINER_FERNANDO_1);
    FlagSet(TRAINER_FLAGS_START + TRAINER_DALTON_4);
    FlagSet(TRAINER_FLAGS_START + TRAINER_HUMBERTO);
    FlagSet(TRAINER_FLAGS_START + TRAINER_TABITHA_MOSSDEEP);
    FlagSet(TRAINER_FLAGS_START + TRAINER_LYDIA_2);
    FlagSet(TRAINER_FLAGS_START + TRAINER_JACKSON_2);
    FlagSet(TRAINER_FLAGS_START + TRAINER_TERRY);
    FlagSet(TRAINER_FLAGS_START + TRAINER_WYATT);
    FlagSet(TRAINER_FLAGS_START + TRAINER_MELINA);
}

void CB2_GlassFromStartMenu(void)
{
    Glass_Init(CB2_StartMenu_ReturnToUI, -1, -1, -1, -1, -1);
}

static void Glass_Init(MainCallback callback, s32 locationId, s32 row, s32 column, u16 locationRow, u16 locationScroll)
{
    if (AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }
    sGlassState->savedCallback = callback;
    HandleSavedTrainerModeData(locationId, row, column, locationRow, locationScroll);
    SetMainCallback2(Glass_SetupCB);
}

static bool8 AllocateStructs(void)
{
    sGlassState = AllocZeroed(sizeof(struct GlassState));
    sGlassLists = AllocZeroed(sizeof(struct GlassLists));

    return (
            sGlassState == NULL
            && sGlassLists == NULL
           );
}

static void Glass_SetupCB(void)
{
    switch (gMain.state)
    {
        case 0:
            //DebugSetTrainerStatus(); // Used only for debugging
            InitAllLocationStats();
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
            InitBgsAndLoadBackgroundGraphics(TRUE);
            gMain.state++;
            break;
        case 3:
            Glass_InitWindows();
            gMain.state++;
            break;
        case 4:
            AllocateResourcesForListMenu();
            gMain.state++;
            break;
        case 5:
            InitalizeLocationModeSpriteIds();
            gMain.state++;
            break;
        case 6:
            StartFadeAndSetUpBasedOnMode();
            gMain.state++;
            break;
        case 7:
            SetVBlankCallback(Glass_VBlankCB);
            SetMainCallback2(Glass_MainCB);
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

static void InitBgsAndLoadBackgroundGraphics(u32 isFirst)
{
    if (Glass_InitBgs(isFirst))
        LoadGraphics();
    else
        FadeAndBail();
}

static void Glass_InitWindows(void)
{
    InitWindows(sGlassWindowTemplates);
    DeactivateAllTextPrinters();
}

static void AllocateResourcesForListMenu(void)
{
    sListMenuItems = Alloc(sizeof(struct ListMenuItem) * (MAPSEC_NONE));

    if (sListMenuItems == NULL)
        FadeAndBail();
}

static void InitalizeLocationModeSpriteIds(void)
{
    InitalizeCheckMonSpriteId();
    InitalizeNameplateSpriteId();
    InitalizeHoverSpriteId();
}

static void StartFadeAndSetUpBasedOnMode(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);

    if (IsAppTrainerMode())
        SetUpTrainerMode(0);
    else
        SetUpLocationMode(0);
}

static void Glass_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Glass_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool8 Glass_InitBgs(bool32 isFirst)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs(TRUE);

    return TRUE;
}

static bool8 AllocZeroedTilemapBuffers(void)
{
    u32 backgroundId;

    for (backgroundId = 0; backgroundId < BG_GLASS_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(bool32 isFirst)
{
    u32 backgroundId;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sGlassBgTemplates, NELEMS(sGlassBgTemplates));

    for (backgroundId = 0; backgroundId < BG_GLASS_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);

        if (!isFirst)
            continue;

        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT1_BG2);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
}

static bool8 LoadGraphics(void)
{
    u32 backgroundId;
    ResetTempTileDataBuffers();
    for (backgroundId = BG1_GLASS_MAP_STATS_TRAINER_CURSOR; backgroundId < BG_GLASS_COUNT; backgroundId++)
    {
        DecompressAndLoadBgGfxUsingHeap(backgroundId, GetRelevantTiles(backgroundId), 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId, GetRelevantTilemap(backgroundId),0,0);
    }
    LoadGlassPalettes();
    return TRUE;
}

static void LoadGlassPalettes(void)
{
    LoadPalette(GetRelevantPalette(), BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(glassPalettesMap, BG_PLTT_ID(1), PLTT_SIZE_4BPP);
    LoadPalette(glassPalettesText,BG_PLTT_ID(15), PLTT_SIZE_4BPP);
}

static const u32* GetRelevantTiles(u32 backgroundId)
{
    switch (backgroundId)
    {
        case BG1_GLASS_MAP_STATS_TRAINER_CURSOR:
            return GetBg1Tiles();
        case BG2_GLASS_LIST_BG:
            return GetBg2Tiles();
        default:
            return GetBg3Tiles();
    }
}

static const u32* GetBg3Tiles(void)
{
    return IsAppTrainerMode() ? glassTrainerBgTiles : glassLocationBgTiles;
}

static const u32* GetBg2Tiles(void)
{
    return IsAppTrainerMode() ? glassTrainerListBgTiles : glassLocationListBgTiles;
}

static const u32* GetBg1Tiles(void)
{
    return IsAppTrainerMode() ? glassTrainerCursorTiles: glassLocationMapStatsMapboxTiles;
}

static const u32* GetRelevantTilemap(u32 backgroundId)
{
    switch (backgroundId)
    {
        case BG1_GLASS_MAP_STATS_TRAINER_CURSOR:
            return GetBg1Tilemap();
        case BG2_GLASS_LIST_BG:
            return GetBg2Tilemap();
        default:
            return GetBg3Tilemap();
    }
}

static const u32* GetBg1Tilemap(void)
{
    if (!IsAppTrainerMode())
        return glassLocationMapStatsMapboxTilemap;

    switch (GetCurrentCursorScreenRowPosition())
    {
        case  3: return glassTrainerCursorsRow3Tilemap;
        case  2: return glassTrainerCursorsRow2Tilemap;
        case  1: return glassTrainerCursorsRow1Tilemap;
        default: return glassTrainerCursorsRow0Tilemap;
    }
}

static const u32* GetBg2Tilemap(void)
{
    return IsAppTrainerMode() ? glassTrainerListBgTilemap : glassLocationListBgTilemap;
}

static const u32* GetBg3Tilemap(void)
{
    return IsAppTrainerMode() ? glassTrainerBgTilemap : glassLocationBgTilemap;
}

static const u16 *GetRelevantPalette(void)
{
    switch(gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR])
    {
        case VISUAL_OPTION_COLOR_RED: return glassPalettesRed;
        case VISUAL_OPTION_COLOR_BLACK: return glassPalettesBlack;
        case VISUAL_OPTION_COLOR_BLUE: return glassPalettesBlue;
        case VISUAL_OPTION_COLOR_GREEN: return glassPalettesGreen;
        case VISUAL_OPTION_COLOR_PLATINUM: return glassPalettesPlatinum;
        case VISUAL_OPTION_COLOR_SCARLET: return glassPalettesScarlet;
        case VISUAL_OPTION_COLOR_VIOLET: return glassPalettesViolet;
        case VISUAL_OPTION_COLOR_WHITE: return glassPalettesWhite;
        case VISUAL_OPTION_COLOR_YELLOW: return glassPalettesYellow;
        default: return glassPalettesDefault;
    }
}

static bool8 IsAppTrainerMode(void)
{
    return sGlassState->trainerMode;
}

static void ToggleGlassMode(void)
{
    sGlassState->trainerMode = !(sGlassState->trainerMode);
}

static void SetUpLocationMode(u8 taskId)
{
    u32 trainerTask = FindTaskIdByFunc(Task_TrainerInput);

    ClearWindowCopyToVram(GLASS_WINDOW_HEADER);
    ClearWindowCopyToVram(GLASS_WINDOW_HELP_BAR);
    ClearWindowCopyToVram(GLASS_WINDOW_STATS);
    ClearWindowCopyToVram(GLASS_WINDOW_LIST);

    DestroyTask(taskId);

    if (trainerTask != TASK_NONE)
        DestroyTask(trainerTask);

    LoadCreateLocationModeSprites();
    SetSort(GetLocationSortFromSaveBlock());
    PopulateLocationList();
    BuildLocationListTemplate();

    RestoreScrollAndRowPositions(sListMenuState.storedRowPosition,sListMenuState.storedScrollOffset);

    taskId = CreateTask(Task_LocationInput, 0);
    gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate,sListMenuState.scroll,sListMenuState.row);

    PrintMenuHeader();
    PrintHelpBar();
    HandleLocationStats(GetLocationIdFromCurrentPosition());
}

static void SwitchToTrainerMode(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);

    gTasks[taskId].func = Task_ChangeToTrainerModeAndReloadScreen;
}

static void Task_ChangeToTrainerModeAndReloadScreen(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    CleanUpLocationMode(taskId);
    ToggleGlassMode();
    FreeGlassBackgrounds();
    InitBgsAndLoadBackgroundGraphics(FALSE);
    BeginNormalPaletteFade(PALETTES_ALL,0,16,0,RGB_BLACK);
    SetUpTrainerMode(taskId);
}

static void CleanUpLocationMode(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    DestroyCheckMonCursorSprite();
    DestroyListClearWindow(data);
    FreeSpritePalettesResetSpriteData();
    ClearWindowCopyToVram(GLASS_WINDOW_STATS);
    ResetTrainerRowAndCursor();
}

static void SetUpTrainerMode(u8 taskId)
{
    ClearWindowCopyToVram(GLASS_WINDOW_HEADER);
    ClearWindowCopyToVram(GLASS_WINDOW_HELP_BAR);
    ClearWindowCopyToVram(GLASS_WINDOW_LIST);

    LoadSpritePalette(&sGlassInterfaceSpritePalette);

    LoadMonIconPalettes();

    LoadMarkSpriteSheets();
    SetSort(GetTrainerSortFromSaveBlock());
    BuildTrainerListTemplate(GetChosenLocation());

    gTasks[taskId].func = Task_TrainerInput;

    PrintMenuHeader();
    PrintHelpBar();
    HandleTrainerName();
    PrintMonCursor();
    CreateTrainerArrowSpritePair();
}

static void SwitchToLocationMode(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_ChangeToLocationModeAndReloadScreen;
}

static void Task_ChangeToLocationModeAndReloadScreen(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    CleanUpTrainerMode(taskId);
    ToggleGlassMode();
    FreeGlassBackgrounds();
    InitBgsAndLoadBackgroundGraphics(FALSE);
    BeginNormalPaletteFade(PALETTES_ALL,0,16,0,RGB_BLACK);
    SetUpLocationMode(taskId);
}

static void CleanUpTrainerMode(u8 taskId)
{
    DestroyCheckMonCursorSprite();
    EmptyTrainerList();
    DestroyAllPartySprites();
    DestroyNameplateSpriteId();
    DestroyHoverSpriteId();
    FreeSpritePalettesResetSpriteData();
}

static void ClearWindowCopyToVram(u32 windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void LoadCreateLocationModeSprites(void)
{
    LoadMarkSpriteSheets();
    CreateMapCursor();
    CreateLocationArrowSpritePair();
}

static void LoadMarkSpriteSheets(void)
{
    u32 type, hover, rematch, state;

    for (type = 0; type < GLASS_TRAINER_TYPE_COUNT; type++)
        for (rematch = 0; rematch < GLASS_TRAINER_REMATCH_COUNT; rematch++)
            for (hover = 0; hover < GLASS_TRAINER_HOVER_COUNT; hover++)
                for (state = 0; state < GLASS_TRAINER_STATE_COUNT; state++)
                    LoadSingleMarkSprite(type,hover,rematch,state);
}

static void LoadSingleMarkSprite(u32 type, u32 hover, u32 rematch, u32 state)
{
    const u32* markTable[GLASS_TRAINER_TYPE_COUNT][GLASS_TRAINER_REMATCH_COUNT][GLASS_TRAINER_HOVER_COUNT][GLASS_TRAINER_STATE_COUNT] = {NULL};
    struct CompressedSpriteSheet sSpriteSheet_TrainerMarks;
    const u32* gfx;

    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_INCOMPLETE] = NULL;
    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_COMPLETE] =  glassMarksRegularComplete;
    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_INCOMPLETE] =  NULL;
    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_COMPLETE] =  glassMarksRegularCompleteHover;
    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_INCOMPLETE] =  NULL;
    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_COMPLETE] =  glassMarksRegularRematchComplete;
    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_INCOMPLETE] =  NULL;
    markTable[GLASS_TRAINER_TYPE_REGULAR][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_COMPLETE] =  glassMarksRegularRematchCompleteHover;

    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksGym;
    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_COMPLETE] = glassMarksGymComplete;
    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksGym;
    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_COMPLETE] = glassMarksGymCompleteHover;
    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksGymRematch;
    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_COMPLETE] = glassMarksGymComplete;
    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksGym;
    markTable[GLASS_TRAINER_TYPE_GYM][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_COMPLETE] = glassMarksGymCompleteHover;

    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksBoss;
    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_COMPLETE] = glassMarksBossComplete;
    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksBoss;
    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_NO][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_COMPLETE] = glassMarksBossCompleteHover;
    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksBoss;
    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_NO][GLASS_TRAINER_STATE_COMPLETE] = glassMarksBossComplete;
    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_INCOMPLETE] = glassMarksBoss;
    markTable[GLASS_TRAINER_TYPE_BOSS][GLASS_TRAINER_REMATCH_YES][GLASS_TRAINER_HOVER_YES][GLASS_TRAINER_STATE_COMPLETE] = glassMarksBossCompleteHover;

    gfx = markTable[type][rematch][hover][state];

    if (gfx == NULL)
        return;

    sSpriteSheet_TrainerMarks.data = gfx;
    sSpriteSheet_TrainerMarks.size = GLASS_SPRITE_ICON_SIZE;
    sSpriteSheet_TrainerMarks.tag = CalculateTileTag(type, rematch, hover, state);
    LoadCompressedSpriteSheet(&sSpriteSheet_TrainerMarks);
}

static u16 CalculateTileTag(u32 type, u32 rematch, u32 hover, u32 state)
{

    if (type == GLASS_TRAINER_TYPE_REGULAR)
        if (state != GLASS_TRAINER_STATE_COMPLETE)
            return 0;

    return (
            (type * GLASS_TRAINER_TYPE_CONST) +
            (rematch * GLASS_TRAINER_REMATCH_CONST) +
            (hover * GLASS_TRAINER_HOVER_CONST) +
            state
           );
}

static void CreateMapCursor(void)
{
    CreateLocationArrowSprite(GLASS_GFXTAG_MAP_CURSOR,glassLocationCursorMap,8,24, SpriteCallback_MapCursor);
}

static void SpriteCallback_MapCursor(struct Sprite *sprite)
{
    s32 map = GetLocationIdFromCurrentPosition();

    MoveMapCursorSprite(sprite,map);
    HandleMapCursorVisibility(sprite, map);
}

static void HandleMapCursorVisibility(struct Sprite* sprite, s32 map)
{
    sprite->invisible = (map == LIST_CANCEL);
}

static void MoveMapCursorSprite(struct Sprite *sprite, u32 map)
{
    sprite->x2 = CalculateMiniMapXCoord(gRegionMapEntries[map].x);
    sprite->y2 = CalculateMiniMapYCoord(gRegionMapEntries[map].y);
}

static u8 CalculateMiniMapXCoord(u32 coord)
{
    u32 newCoord = ((CalculateMiniMapCoord(coord)));

    return (newCoord > 106) ? 106 : newCoord;
}

static u8 CalculateMiniMapYCoord(u32 coord)
{
    u32 newCoord = ((CalculateMiniMapCoord(coord)));

    return (newCoord > 94) ? 94: newCoord;
}

static u8 CalculateMiniMapCoord(u32 coord)
{
    return ((coord * (240/112) * 2) + 4);
}

static void CreateLocationArrowSpritePair(void)
{
    CreateUpLocationArrowSprite();
    CreateDownLocationArrowSprite();
}

static void CreateUpLocationArrowSprite(void)
{
    CreateLocationArrowSprite(GLASS_GFXTAG_LOCATION_UP_ARROW,glassLocationArrowsTop,177,9, SpriteCB_MenuArrow);
}

static void CreateDownLocationArrowSprite(void)
{
    CreateLocationArrowSprite(GLASS_GFXTAG_LOCATION_DOWN_ARROW,glassLocationArrowsBottom,177,135,SpriteCB_MenuArrow);
}

static void CreateLocationArrowSprite(u32 SpriteTag,const u32 *gfx,u32 x, u32 y, void (*callback)(struct Sprite *))
{
    u32 spriteId;

    struct CompressedSpriteSheet sSpriteSheet_GlassArrow = {gfx, 0x0800, SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = callback;
    TempSpriteTemplate.paletteTag = PAL_GLASS_UI_SPRITES;

    LoadCompressedSpriteSheet(&sSpriteSheet_GlassArrow);
    LoadSpritePalette(&sGlassInterfaceSpritePalette);
    spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
}

static void SpriteCB_MenuArrow(struct Sprite *sprite)
{
    bool32 arrowPosIsTop = ArrowPositionIsTop(sprite);
    AnimateLocationArrowSprite(sprite,arrowPosIsTop);
    HandleMenuArrowSpriteVisibility(sprite,arrowPosIsTop);
}

static bool8 ArrowPositionIsTop(struct Sprite *sprite)
{
    return (sprite->y < (DISPLAY_HEIGHT / 2));
}

static void AnimateLocationArrowSprite(struct Sprite *sprite, u32 arrowPosIsTop)
{
    u32 offset = (arrowPosIsTop) ? 128 : 0;
    u8 val = sprite->data[0] + offset;

    sprite->y2 = gSineTable[val] / 128;
    sprite->data[0] += TILE_SIZE_1BPP;
}

static void HandleMenuArrowSpriteVisibility(struct Sprite *sprite, bool32 arrowPosIsTop)
{
    bool32 cursorIsTop = IsCursorOrPositionAtTop();
    bool32 cursorIsBottom = IsCursorOrPositionAtBottom();

    sprite->invisible = (
            (cursorIsTop && arrowPosIsTop)
            || (cursorIsBottom && !arrowPosIsTop)
            );
}

static bool8 IsCursorOrPositionAtTop(void)
{
    return (IsAppTrainerMode() ? IsTrainerCursorAtTop() : IsLocationPositionAtTop());
}

static bool8 IsCursorOrPositionAtBottom(void)
{
    return (IsAppTrainerMode() ? IsTrainerCursorAtBottom() : IsLocationPositionAtBottom());
}

static bool8 IsTrainerCursorAtTop(void)
{
    return (GetCurrentCursorScreenRowPosition() == GLASS_ROW_1);
}

static bool8 IsTrainerCursorAtBottom(void)
{
    return (GetCurrentCursorScreenRowPosition() == GLASS_ROW_4);
}

static bool8 IsLocationPositionAtTop(void)
{
    return (GetCurrentPosition() == 0);
}

static bool8 IsLocationPositionAtBottom(void)
{
    return (GetCurrentPosition() == GetNumListElements());
}

static void InitalizeCheckMonSpriteId(void)
{
    sListMenuState.interfaceSpriteIds[GLASS_UI_CHECK_MON_CURSOR] = SPRITE_NONE;
}

static void DestroyCheckMonCursorSprite(void)
{
    if (sListMenuState.interfaceSpriteIds[GLASS_UI_CHECK_MON_CURSOR] == SPRITE_NONE)
        return;

    DestroySpriteAndFreeResources(&gSprites[sListMenuState.interfaceSpriteIds[GLASS_UI_CHECK_MON_CURSOR]]);
    InitalizeCheckMonSpriteId();
}

static void SaveCheckMonCursorSpriteId(u32 spriteId)
{
    sListMenuState.interfaceSpriteIds[GLASS_UI_CHECK_MON_CURSOR] = spriteId;
}

static void PrintLocationCheckmark(u8 windowId, u32 locationId, u8 y)
{
    if (!IsLocationConquered(locationId))
        return;

    BlitBitmapToWindow(GLASS_WINDOW_LIST,glassMarksRegularCompleteHoverBitmap,104,y+1,16,16);
}

static void CheckLocationCreateCheckHoverSprite(struct ListMenu *list, s32 locationId)
{
    u32 x, y;

    if (!IsLocationConquered(locationId))
        return;

    x = (GetWindowAttribute(GLASS_WINDOW_LIST,WINDOW_TILEMAP_LEFT) * 8) + 108;
    y = CalculateCheckmarkVerticalPosition(list);

    CreateCheckSprite(x,y);
}

static u8 CalculateCheckmarkVerticalPosition(struct ListMenu *list)
{
    u8 yMultiplier = GetFontAttribute(gMultiuseListMenuTemplate.fontId, FONTATTR_MAX_LETTER_HEIGHT) + gMultiuseListMenuTemplate.itemVerticalPadding;
    u8 y = list->selectedRow * yMultiplier + gMultiuseListMenuTemplate.upText_Y;
    return (GetWindowAttribute(gMultiuseListMenuTemplate.windowId, WINDOW_TILEMAP_TOP) * 8 + y + 5);
}

static void CreateCheckSprite(u32 x, u32 y)
{
    u32 spriteId;
    u16 TileTag = GetLocationHoverCheckTileTag();

    if (TileTag == 0)
        return;

    spriteId = CreateMarkSprite(x,y,TileTag, SpriteCallbackDummy);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
    SaveCheckMonCursorSpriteId(spriteId);
}

static u16 GetLocationHoverCheckTileTag(void)
{
    return CalculateTileTag(GLASS_TRAINER_TYPE_REGULAR,GLASS_TRAINER_REMATCH_NO,GLASS_TRAINER_HOVER_YES,GLASS_TRAINER_STATE_COMPLETE);
}

static u8 GetLocationSortFromSaveBlock(void)
{
    return gSaveBlock3Ptr->glass.LocationSort;
}

static void PopulateLocationList(void)
{
    u32 row;
    u32 locationIndex = RESIDO_MAPSEC_START;
    for (row = 0; locationIndex < RESIDO_MAPSEC_END; row++)
    {
        sGlassLists->LocationList[row] = locationIndex;
        locationIndex++;
    }
    SetNumListElements(row);
}

static void SetNumListElements(u32 num)
{
    sGlassLists->numListElements = num;
}

static u8 GetNumListElements(void)
{
    return sGlassLists->numListElements;
}

static void BuildLocationListTemplate(void)
{
    u32 lastRow = GenerateList();
    AssignCancelNameAndId(lastRow);

    gMultiuseListMenuTemplate.items = sListMenuItems;
    gMultiuseListMenuTemplate.moveCursorFunc = MoveCursorFunc;
    gMultiuseListMenuTemplate.itemPrintFunc = PrintLocationCheckmark;
    gMultiuseListMenuTemplate.totalItems = GetNumListElements() + 1;
    gMultiuseListMenuTemplate.maxShowed = GLASS_LOCATIONS_MAX_SHOWED;
    gMultiuseListMenuTemplate.windowId = GLASS_WINDOW_LIST;
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 5;
    gMultiuseListMenuTemplate.cursor_X = 0;
    gMultiuseListMenuTemplate.upText_Y = 4;
    gMultiuseListMenuTemplate.cursorPal = 1;
    gMultiuseListMenuTemplate.fillValue = 0;
    gMultiuseListMenuTemplate.cursorShadowPal = 2;
    gMultiuseListMenuTemplate.lettersSpacing = 1;
    gMultiuseListMenuTemplate.itemVerticalPadding = 1;
    gMultiuseListMenuTemplate.scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD;
    gMultiuseListMenuTemplate.fontId = FONT_NORMAL;
    gMultiuseListMenuTemplate.cursorKind = CURSOR_RED_OUTLINE;
}

static u8 GenerateList(void)
{
    switch(GetCurrentSort())
    {
        default:
        case GLASS_SORT_LOCATION_DEFAULT:
            SortLocationsById();
            break;
        case GLASS_SORT_LOCATION_AZ:
            SortAllLocationsAZ();
            break;
        case GLASS_SORT_LOCATION_DUMMY:
            SortAllLocationUndiscoveredFirst();
            break;
        case GLASS_SORT_LOCATION_INCOMPLETE_FIRST:
            SortAllLocationsVisibleFirst();
            break;
        case GLASS_SORT_LOCATION_COMPLETED_FIRST:
            SortAllLocationsConqueredFirst();
            break;
    }
    return GetNumListElements();
}

static void AssignCancelNameAndId(u8 numRow)
{
    if (IsAppTrainerMode())
        sListMenuItems[numRow].name = sText_Back;
    else
        sListMenuItems[numRow].name = sText_Close;

    sListMenuItems[numRow].id = LIST_CANCEL;
}

static u8 GetCurrentSort(void)
{
    return sGlassState->sortOrder;
}

static void SortLocationsById(void)
{
    u32 row;
    for (row = 0; row < ARRAY_COUNT(sGlassLists->LocationList); row++)
        PopulateListMenuLocations(row, sGlassLists->LocationList[row]);
}

static void SortAllLocationsAZ(void)
{
    u32 numLocations = ARRAY_COUNT(sGlassLists->LocationList);
    u32 sortedLocationIndicies[numLocations];

    MakeLocationListToBeSorted(sortedLocationIndicies, numLocations);
    SortUnlockedLocationsAZ(sortedLocationIndicies, numLocations);
    SortLockedLocationsId(sortedLocationIndicies, numLocations);
    PopulateListMenuWithSortedLocation(sortedLocationIndicies, numLocations);
}

static void SortAllLocationUndiscoveredFirst(void)
{
    u32 numLocations = ARRAY_COUNT(sGlassLists->LocationList);
    u32 sortedLocationIndicies[numLocations];

    SortLocationsUndiscoveredFirst(sortedLocationIndicies,numLocations);
    PopulateListMenuWithSortedLocation(sortedLocationIndicies, numLocations);
}

static void SortAllLocationsVisibleFirst(void)
{
    u32 numLocations = ARRAY_COUNT(sGlassLists->LocationList);
    u32 sortedLocationIndicies[numLocations];

    SortLocationsVisibleFirst(sortedLocationIndicies,numLocations);
    PopulateListMenuWithSortedLocation(sortedLocationIndicies, numLocations);
}

static void SortAllLocationsConqueredFirst(void)
{
    u32 numLocations = ARRAY_COUNT(sGlassLists->LocationList);
    u32 sortedLocationIndicies[numLocations];

    SortLocationsConqueredFirst(sortedLocationIndicies,numLocations);
    PopulateListMenuWithSortedLocation(sortedLocationIndicies, numLocations);
}

static void PopulateListMenuLocations(u32 row, u32 locationIndex)
{
    sListMenuItems[row].name = GetLocationName(locationIndex);
    sListMenuItems[row].id = locationIndex;
}

static void MakeLocationListToBeSorted(u32* sortedLocationIndicies, u32 numLocations)
{
    u32 i;
    for (i = 0; i < numLocations; ++i)
        sortedLocationIndicies[i] = sGlassLists->LocationList[i];
}

static void SortUnlockedLocationsAZ(u32* sortedLocationIndicies, u32 numLocations)
{
    u32 i, j, newTemp;
    for (i = 0; i < numLocations; ++i)
        for (j = i + 1; j < numLocations; ++j)
        {
            if (IsLocationVisited(sortedLocationIndicies[i])
                    && (!IsLocationVisited(sortedLocationIndicies[j])
                        || StringCompare(GetLocationName(sortedLocationIndicies[i]), GetLocationName(sortedLocationIndicies[j])) <= 0))
                continue;

            SWAP(sortedLocationIndicies[i],sortedLocationIndicies[j],newTemp);
        }
}

static void SortLockedLocationsId(u32* sortedLocationIndicies, u32 numLocations)
{
    u32 i, j, newTemp;
    for (i = 0; i < numLocations - 1; ++i)
        for (j = i + 1; j < numLocations; ++j)
        {
            if (!IsBothLocationsLocked(sortedLocationIndicies,i,j))
                continue;

            if(sortedLocationIndicies[i] <= sortedLocationIndicies[j])
                continue;

            SWAP(sortedLocationIndicies[i],sortedLocationIndicies[j],newTemp);
        }
}

static void SortLocationsUndiscoveredFirst(u32* sortedLocationIndicies, u32 numLocations)
{
    u32 sortedListIndex = 0;

    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_UNDISCOVERED);
    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_VISIBLE);
    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_CONQUERED);
}

static void SortLocationsVisibleFirst(u32* sortedLocationIndicies, u32 numLocations)
{
    u32 sortedListIndex = 0;

    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_VISIBLE);
    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_UNDISCOVERED);
    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_CONQUERED);
}

static void SortLocationsConqueredFirst(u32* sortedLocationIndicies, u32 numLocations)
{
    u32 sortedListIndex = 0;

    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_CONQUERED);
    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_UNDISCOVERED);
    AddSortedLocationsToList(sortedLocationIndicies, numLocations, &sortedListIndex, GLASS_LIST_SORT_LOCATION_VISIBLE);
}

static void AddSortedLocationsToList(u32* sortedLocationIndicies, u32 numLocations, u32* sortedListIndex, u32 mode)
{
    u32 listIndex;
    bool32 shouldSort;

    for (listIndex = 0; listIndex < numLocations; listIndex++)
    {
        switch (mode)
        {
            case GLASS_LIST_SORT_LOCATION_UNDISCOVERED:
                shouldSort = (!IsLocationVisited(sGlassLists->LocationList[listIndex]));
                break;
            case GLASS_LIST_SORT_LOCATION_VISIBLE:
                shouldSort = (IsLocationStateVisible(sGlassLists->LocationList[listIndex]));
                break;
            default:
            case GLASS_LIST_SORT_LOCATION_CONQUERED:
                shouldSort = (IsLocationConquered(sGlassLists->LocationList[listIndex]));
                break;
        }

        if (!shouldSort)
            continue;

            sortedLocationIndicies[(*sortedListIndex)++] = sGlassLists->LocationList[listIndex];
    }
}

static void PopulateListMenuWithSortedLocation(u32* sortedLocationIndicies, u32 numLocations)
{
    u32 row;
    for (row = 0; row < numLocations; ++row)
        PopulateListMenuLocations(row, sortedLocationIndicies[row]);
}

bool8 IsLocationVisited(u32 listNum)
{
    return (FlagGet(gRegionMapEntries[listNum].visitedFlag));
}

static bool8 IsBothLocationsLocked(u32* sortedLocationIndicies, u32 firstIndex, u32 secondIndex)
{
    if (IsLocationVisited(sortedLocationIndicies[firstIndex]))
        return FALSE;

    if (IsLocationVisited(sortedLocationIndicies[secondIndex]))
        return FALSE;

    return TRUE;
}

static bool8 IsLocationStateVisible(u32 listNum)
{
    if (!IsLocationVisited(listNum))
        return FALSE;

    if (GetLocationPercent(listNum) == 100)
        return FALSE;

    return TRUE;
}

static bool8 IsLocationConquered(u32 listNum)
{
    if (!IsLocationVisited(listNum))
        return FALSE;

    if (GetLocationPercent(listNum) != 100)
        return FALSE;

    return TRUE;
}

static u8 GetLocationPercent(u32 location)
{
    return GetLocationStat(location,GLASS_LOCATION_RATE);
}

static bool8 DoesLocationHaveDiscoveredTrainers(u32 location)
{
    return (GetLocationStat(location,GLASS_LOCATION_DISCOVERED) != 0);
}

static const u8 *GetLocationName(u32 listNum)
{
    if (!IsLocationVisited(listNum))
        return gText_ThreeQuestionMarks;

    if (!DoesLocationHaveDiscoveredTrainers(listNum))
        return gText_ThreeQuestionMarks;

    return gRegionMapEntries[listNum].name;
}

static void PrintMenuHeader(void)
{
    FillWindowPixelBuffer(GLASS_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    HandleMenuHeader();

    CopyWindowToVram(GLASS_WINDOW_HEADER, COPYWIN_GFX);
}

static void HandleMenuHeader(void)
{
    Glass_PrintSortModeHeader(GLASS_WINDOW_HEADER,GetCurrentSort());

    if (IsAppTrainerMode())
        PrintLocationName();
}

static void Glass_PrintSortModeHeader(u32 windowId, u32 sort)
{
    u32 fontId = FONT_GLASS_BAR;

    u8 *percentString = Alloc(USER_MAX_LENGTH*2);

    StringCopy(gStringVar1, GetSortName(sort));
    StringExpandPlaceholders(gStringVar4, sText_Total);
    StringCopy(percentString, gStringVar4);

    if (!sort)
        StringCopy(percentString,gText_Blank);

    AddTextPrinterParameterized4(windowId, fontId, 22, 0, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, percentString);

    Free(percentString);
}

static const u8 *GetSortName(u32 sort)
{
    switch(sort)
    {
        case GLASS_SORT_TRAINER_AZ:
            return sText_SortOrder_AZ;
        case GLASS_SORT_TRAINER_UNDISCOVERED_FIRST:
            return sText_SortOrder_Undiscovered;
        case GLASS_SORT_TRAINER_INCOMPLETE_FIRST:
            if (IsAppTrainerMode())
                return sText_SortOrder_Undefeated;
            else
                return sText_SortOrder_Incomplete;
        case GLASS_SORT_TRAINER_INCOMPLETE_FIRSTAZ:
            return sText_SortOrder_IncompleteAZ;
        case GLASS_SORT_TRAINER_COMPLETED_FIRST:
            if (IsAppTrainerMode())
                return sText_SortOrder_Defeated;
            else
                return sText_SortOrder_Completed;
        case GLASS_SORT_TRAINER_COMPLETED_FIRSTAZ:
            return sText_SortOrder_CompletedAZ;
        default:
            return gText_Blank;
    }
}

static void PrintLocationName(void)
{
    u32 fontId = FONT_GLASS_BAR;
    u32 x = 0;
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u8 *locationName = Alloc(USER_MAX_LENGTH*2);
    StringCopy(locationName,GetLocationName(GetChosenLocation()));

    x = CalculateLocationNameXPosition(fontId, locationName, letterSpacing);

    AddTextPrinterParameterized4(GLASS_WINDOW_HEADER, fontId, x, 0, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_WHITE], TEXT_SKIP_DRAW,locationName);

    Free(locationName);
}

static u8 CalculateLocationNameXPosition(u32 fontId, u8* locationName, u32 letterSpacing)
{
    u32 stringWidth = 0;
    stringWidth = GetStringWidth(fontId,locationName,letterSpacing) + 1;
    return (240 - stringWidth);
}

static void PrintHelpBar(void)
{
    u32 windowId = GLASS_WINDOW_HELP_BAR;
    u32 fontId = FONT_GLASS_BAR;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AddTextPrinterParameterized4(windowId, fontId, BAR_LEFT_PADDING, BAR_TOP_PADDING, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, GetHelpBarText());

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static const u8 *GetHelpBarText(void)
{
    if (IsAppTrainerMode())
        return GetHelpBarTrainerText(GetTrainerIdFromCurrentPosition());

    return GetHelpBarLocationText(GetLocationIdFromCurrentPosition());
}

static const u8 *GetHelpBarTrainerText(u32 trainerId)
{
    if (IsTrainerDiscovered(trainerId))
        return sText_HelpBarTrainers;

    return sText_HelpBarTrainersLocked;
}

static const u8 *GetHelpBarLocationText(u32 locationId)
{
    if (IsLocationVisited(locationId))
        return sText_HelpBarLocation;

    return sText_HelpBarLocationLocked;
}

static void Task_LocationInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    s32 input = ListMenu_ProcessInput(data[0]);
    u32 entityId = GetLocationIdFromCurrentPosition();
    ListMenuGetScrollAndRow(data[0], &sListMenuState.scroll,&sListMenuState.row);

    if (gPaletteFade.active)
        return;

    PrintHelpBar();
    HandleLocationInput(input,taskId,entityId);

    if (entityId == LIST_CANCEL)
        return;

    SaveChosenLocation(entityId);
}

static u8 GetLocationIdFromCurrentPosition(void)
{
    return sListMenuItems[GetCurrentPosition()].id;
}

static u8 GetCurrentPosition(void)
{
    return (GetLocationScrollOffset() + GetLocationRowPosition());
}

static u8 GetLocationScrollOffset(void)
{
    return sListMenuState.scroll;
}

static u8 GetLocationRowPosition(void)
{
    return sListMenuState.row;
}

static void SaveChosenLocation(u32 locationId)
{
    sGlassState->chosenLocation = locationId;
}

static void MoveCursorFunc(s32 locationId, bool8 onInit, struct ListMenu *list)
{
    DestroyCheckMonCursorSprite();
    PlayCursorSound(onInit);
    HandleLocationStats(locationId);

    CheckLocationCreateCheckHoverSprite(list, locationId);
}

static void PlayCursorSound(bool32 firstRun)
{
    if (!firstRun) {
        PlaySE(SE_RG_BAG_CURSOR);
    }
}

static void HandleLocationStats(s32 locationId)
{
    u32 windowId = GLASS_WINDOW_STATS;

    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    if (locationId != LIST_CANCEL)
        PrintLocationStats(locationId, windowId);

    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PrintLocationStats(s32 locationId, u32 windowId)
{
    u32 fontId = FONT_GLASS_METRICS;

    PrintLocationPercent(locationId, windowId, fontId);
    PrintLocationTotal(locationId, windowId, fontId);
    PrintLocationDefeated(locationId, windowId, fontId);
    PrintLocationRemaining(locationId, windowId, fontId);
}

static u8 GetMapSectionFromTrainerId(u32 trainerId)
{
    return gTrainers[GetCurrentDifficultyLevel()][trainerId].mapSec;
}

static void ResetAllLocationStats(void)
{
    for (u32 mapSecId = RESIDO_MAPSEC_START; mapSecId < RESIDO_MAPSEC_END; mapSecId++)
        memset(sGlassState->locationStats[mapSecId], 0, sizeof(sGlassState->locationStats[mapSecId]));
}

static void CountAllTrainersAndAdjustStats(u32 checkedMap, u8 *outStats)
{
    bool32 processAll = (checkedMap == MAPSEC_NONE);

    if (processAll)
        ResetAllLocationStats();

    if ((processAll == FALSE) && (checkedMap < RESIDO_MAPSEC_START || checkedMap >= RESIDO_MAPSEC_END))
        return;

    for (u32 trainerId = 0; trainerId < TRAINERS_COUNT; trainerId++)
    {
        u32 mapSecId = GetMapSectionFromTrainerId(trainerId);

        if (mapSecId < RESIDO_MAPSEC_START || mapSecId >= RESIDO_MAPSEC_END)
            continue;

        if (!processAll && mapSecId != checkedMap)
            continue;

        u8 *statArray = processAll
            ? sGlassState->locationStats[mapSecId]
            : outStats;

        HandleLocationStatsTotal(statArray);

        if (IsTrainerDiscovered(trainerId))
            HandleLocationStatsDiscovered(statArray);

        if (IsTrainerDefeated(trainerId))
            HandleLocationStatsDefeated(statArray);
    }
}

static void CalculateLocationStats(u8* stats)
{
    u32 total = stats[GLASS_LOCATION_TOTAL];

    if (total == 0)
    {
        stats[GLASS_LOCATION_RATE] = 0;
        return;
    }

    u32 numerator = (stats[GLASS_LOCATION_DEFEATED] * 10000);
    u32 denominator = (total * 100);
    stats[GLASS_LOCATION_RATE] = numerator / denominator;
}

static void CalculateAllLocationStats(void)
{
    for (u32 mapSecId = RESIDO_MAPSEC_START; mapSecId < RESIDO_MAPSEC_END; mapSecId++)
        CalculateLocationStats(sGlassState->locationStats[mapSecId]);
}

static void InitAllLocationStats(void)
{
    CountAllTrainersAndAdjustStats(MAPSEC_NONE,NULL);
    CalculateAllLocationStats();
}

static void HandleLocationStatsTotal(u8* statArray)
{
    IncrementLocationStat(GLASS_LOCATION_TOTAL,statArray);
    IncrementLocationStat(GLASS_LOCATION_UNDEFEATED,statArray);
    IncrementLocationStat(GLASS_LOCATION_UNDISCOVERED,statArray);
}

static void HandleLocationStatsDiscovered(u8* statArray)
{
    IncrementLocationStat(GLASS_LOCATION_DISCOVERED,statArray);
    DecrementLocationStat(GLASS_LOCATION_UNDISCOVERED,statArray);
    IncrementLocationStat(GLASS_LOCATION_INCOMPLETE,statArray);
}

static void HandleLocationStatsDefeated(u8* statArray)
{
    IncrementLocationStat(GLASS_LOCATION_DEFEATED,statArray);
    DecrementLocationStat(GLASS_LOCATION_UNDEFEATED,statArray);
    DecrementLocationStat(GLASS_LOCATION_INCOMPLETE,statArray);
}

static void IncrementLocationStat(u32 stat, u8* statArray)
{
    if (statArray[stat] >= UCHAR_MAX)
        return;

    statArray[stat]++;
}

static void DecrementLocationStat(u32 stat, u8* statArray)
{
    if (!statArray[stat])
        return;

    statArray[stat]--;
}

static void PrintLocationPercent(u32 location, u32 windowId, u32 fontId)
{
    u8 *percentString = Alloc(USER_MAX_LENGTH*2);

    ConvertIntToDecimalStringN(gStringVar1,GetLocationStat(location,GLASS_LOCATION_RATE),STR_CONV_MODE_LEFT_ALIGN,3);
    StringExpandPlaceholders(gStringVar4, gText_Var1Percent);
    StringCopy(gStringVar3,sText_Trainers);
    StringAppend(gStringVar3, gStringVar4);
    StringCopy(percentString, gStringVar3);

    AddTextPrinterParameterized4(windowId, fontId, 6, 9, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, percentString);

    Free(percentString);
}

static void PrintLocationTotal(u32 location, u32 windowId, u32 fontId)
{
    u8 *totalString = Alloc(13);

    ConvertIntToDecimalStringN(gStringVar1,GetLocationStat(location,GLASS_LOCATION_TOTAL),STR_CONV_MODE_LEFT_ALIGN,3);
    StringExpandPlaceholders(gStringVar4, sText_Total);
    StringCopy(totalString, gStringVar4);

    AddTextPrinterParameterized4(windowId, fontId, 94, 9, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, totalString);

    Free(totalString);
}

static void PrintLocationDefeated(u32 location, u32 windowId, u32 fontId)
{
    u8 *defeatedString = Alloc(13);

    ConvertIntToDecimalStringN(gStringVar1,GetLocationStat(location,GLASS_LOCATION_DEFEATED),STR_CONV_MODE_LEFT_ALIGN,3);
    StringCopy(gStringVar3,sText_Completed);
    StringAppend(gStringVar3, gStringVar1);
    StringCopy(defeatedString, gStringVar3);

    AddTextPrinterParameterized4(windowId, fontId, 6, 25, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, defeatedString);

    Free(defeatedString);
}

static void PrintLocationRemaining(u32 location, u32 windowId, u32 fontId)
{
    u8 *remainingString = Alloc(13);

    ConvertIntToDecimalStringN(gStringVar1,GetLocationStat(location,GLASS_LOCATION_UNDEFEATED),STR_CONV_MODE_LEFT_ALIGN,3);
    StringCopy(gStringVar3,sText_Remaining);
    StringAppend(gStringVar3, gStringVar1);
    StringCopy(remainingString, gStringVar3);

    AddTextPrinterParameterized4(windowId, fontId, 6, 41, GetFontAttribute(fontId, FONTATTR_LETTER_SPACING), GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_BLACK], TEXT_SKIP_DRAW, remainingString);

    Free(remainingString);
}

static u8 GetLocationStat(u32 location, u32 stat)
{
    return sGlassState->locationStats[location][stat];
}

static void HandleLocationInput(u32 input, u8 taskId, u32 entityId)
{
    switch(input)
    {
        case LIST_NOTHING_CHOSEN:
            if (JOY_NEW(START_BUTTON))
                ChangeSortAndReloadLocationList(taskId);
            break;
        case LIST_CANCEL:
            PlaySoundStartFadeQuitApp(taskId);
            break;
        default:
            if (IsLocationVisited(entityId) && DoesLocationHaveDiscoveredTrainers(entityId))
                SwitchToTrainerMode(taskId);
            else
                PlaySE(SE_BOO);
            break;
    }
}

static u8 IncrementSortOrder(bool32 isTrainerMode)
{
    u32 currentSort = GetCurrentSort();
    currentSort++;

    if (currentSort > GLASS_SORT_TRAINER_COMPLETED_FIRST)
        currentSort = GLASS_SORT_LOCATION_DEFAULT;

    SetSort(currentSort);

    return currentSort;
}

static void WriteLocationSortToSaveBlock(u32 sort)
{
    gSaveBlock3Ptr->glass.LocationSort = sort;
}

static void WriteTrainerSortToSaveBlock(u32 sort)
{
    gSaveBlock3Ptr->glass.TrainerSort = sort;
}

static void SetSortOrderAndSave(void)
{
    bool32 isTrainerMode = IsAppTrainerMode();
    u32 currentSort = IncrementSortOrder(isTrainerMode);

    PlaySE(SE_SELECT);

    if (isTrainerMode)
        WriteTrainerSortToSaveBlock(currentSort);
    else
        WriteLocationSortToSaveBlock(currentSort);
}

static void ChangeSortAndReloadLocationList(u8 taskId)
{
    SetSortOrderAndSave();
    PrintMenuHeader();
    ReloadLocationList(taskId);
}

static void SetSort(u32 sort)
{
    sGlassState->sortOrder = sort;
}

static void ReloadLocationList(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    DestroyListClearWindow(data);
    ClearStatsWindow();
    BuildLocationListTemplate();
    ResetLocationCursorToTop(data);
}

static void ClearStatsWindow(void)
{
    u32 windowId = GLASS_WINDOW_STATS;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void ResetLocationPositionToZero(void)
{
    sListMenuState.scroll = 0;
    sListMenuState.row = 0;
}

static void ResetLocationCursorToTop(s16 *data)
{
    ResetLocationPositionToZero();
    data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll,sListMenuState.row);
}

static void DestroyListClearWindow(s16* data)
{
    SaveScrollAndRowPositions();
    DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
    ClearStdWindowAndFrameToTransparent(GLASS_WINDOW_LIST, FALSE);
}

static void SaveScrollAndRowPositions(void)
{
    sListMenuState.storedScrollOffset = sListMenuState.scroll;
    sListMenuState.storedRowPosition = sListMenuState.row;
}

static u8 GetTrainerSortFromSaveBlock(void)
{
    return gSaveBlock3Ptr->glass.TrainerSort;
}

static void ChangeSortAndReloadTrainerList(u8 taskId)
{
    SetSortOrderAndSave();
    ReloadTrainerList();
}

static void BuildTrainerListTemplate(u32 locationId)
{
    u32 row = GetCurrentTrainerRow();

    PopulateAndSortTrainerList(locationId);
    CalcSetScreenRows(GetNumListElements(), row);
    UpdatePartySizesAndPrintAllParties();
    AdjustTrainerColumn(row);
    MoveTrainerForNameplate(GLASS_MOVE_TRAINER);
    HandleTrainerSpriteAnimation();
    PrintElevatedTrainerStateMark();
}

static u8 GetChosenLocation(void)
{
    return sGlassState->chosenLocation;
}

static void PopulateTrainerList(u32 map)
{
    u32 row = 0, trainerIndex;

    for(trainerIndex = 0; trainerIndex < TRAINERS_COUNT ; trainerIndex++)
    {
        if (GetMapSectionFromTrainerId(trainerIndex) != map)
            continue;

        sGlassLists->TrainerList[row++] = trainerIndex;
    }

    SetNumListElements(--row);
}

static void SortTrainerList(void)
{
    u32 numTrainers = GetNumListElements();

    switch(GetCurrentSort())
    {
        case GLASS_SORT_TRAINER_AZ:
            SortAllTrainersAZ(numTrainers);
            break;
        case GLASS_SORT_TRAINER_UNDISCOVERED_FIRST:
            SortAllTrainersUndiscoveredFirst(numTrainers);
            break;
        case GLASS_SORT_TRAINER_INCOMPLETE_FIRST:
            SortAllTrainersIncompleteFirst(numTrainers);
            break;
        case GLASS_SORT_TRAINER_COMPLETED_FIRST:
            SortAllTrainersDefeatedFirst(numTrainers);
            break;
        default:
        case GLASS_SORT_TRAINER_DEFAULT:
            break;
    }
}

static void PopulateAndSortTrainerList(u32 map)
{
    EmptyTrainerList();
    PopulateTrainerList(map);
    SortTrainerList();
}

static void CalcSetScreenRows(u32 numList, u32 currentRow)
{
    u32 screenRow = ConvertScreenRowToPositionInTrainerList(numList, currentRow);
    u32 rowIndex, newRow;

    for (rowIndex = 0; rowIndex < GLASS_TRAINER_MAX_SHOWED; rowIndex++)
    {
        newRow = screenRow + rowIndex;

        if (newRow > (numList + 1))
            newRow = GLASS_EMPTY_TRAINER_ROW;

        SetScreenRow(rowIndex, newRow);
    }
}

static void UpdatePartySizes(void)
{
    u32 trainerId, rowIndex;

    for (rowIndex = 0; rowIndex < GLASS_TRAINER_MAX_SHOWED; rowIndex++)
    {
        trainerId = GetTrainerIdFromTrainerFromScreenRow(rowIndex);
        SavePartySizeForRow(gTrainers[GetCurrentDifficultyLevel()][trainerId].partySize,rowIndex);
    }
}

static void UpdatePartySizesAndPrintAllParties(void)
{
    EmptyAllTrainerScreenRowSpriteIds();
    UpdatePartySizes();
    PrintAllParties();
}

static void UpdatePartySizesAndPrintPartyForRow(u32 row)
{
    UpdatePartySizes();
    PrintTrainerAndParty(row);
}

static void EmptyTrainerScreenRowSpriteIds(u32 row)
{
    for (u32 column = 0; column < GLASS_TRAINER_COLUMN_COUNT; column++)
        SetSpriteId(row,column,SPRITE_NONE);
}

static void EmptyAllTrainerScreenRowSpriteIds(void)
{
    for (u32 row = 0; row < GLASS_TRAINER_MAX_SHOWED; row++)
        EmptyTrainerScreenRowSpriteIds(row);
}

static void PrintAllParties(void)
{
    for (u32 rowIndex = 0; rowIndex < GetNumberOfScreenRows() + 1; rowIndex++)
        PrintTrainerAndParty(rowIndex);
}

static void InitalizeNameplateSpriteId(void)
{
    SaveNameplateSpriteId(SPRITE_NONE);
}

static void HandleTrainerName(void)
{
    PrintNameplate();
    PrintTrainerName();
}

static void PrintNameplate(void)
{
    u32 spriteId;
    u32 y = CalculateVerticalNameplatePosition();

    LoadNameplateSprite();

    spriteId = CreateMarkSprite(0,y,GLASS_GFXTAG_TRAINER_NAMEPLATE, SpriteCallback_Nameplate);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(64x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(64x32);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 0;

    SaveNameplateSpriteId(spriteId);
}

static u8 CalculateVerticalNameplatePosition(void)
{
    return CalculateVerticalTrainerPosition(GetCurrentCursorScreenRowPosition()) + (TILE_SIZE_1BPP / 2);
}

static void LoadNameplateSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_GlassNameplate =
    {
        glassTrainerCursorsNameplate,
        (64*32),
        GLASS_GFXTAG_TRAINER_NAMEPLATE,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_GlassNameplate);
    LoadSpritePalette(&sGlassInterfaceSpritePalette);
}

static void SaveNameplateSpriteId(u32 spriteId)
{
    sListMenuState.interfaceSpriteIds[GLASS_UI_NAMEPLATE] = spriteId;
}

static void SpriteCallback_Nameplate(struct Sprite *sprite)
{
#define dOldNameplateRow data[0]
#define dCurrentNameplateRow data[1]
#define dFramesSinceMove data[2]

    sprite->dCurrentNameplateRow = GetCurrentTrainerRow();

    if (sprite->dCurrentNameplateRow == sprite->dOldNameplateRow)
        return;

    sprite->dFramesSinceMove++;

    if (!sprite->dFramesSinceMove)
        return;

    MoveNameplate();
    PrintTrainerName();

    sprite->dOldNameplateRow = GetCurrentTrainerRow();
    sprite->dFramesSinceMove = 0;

#undef dOldNameplateRow
#undef dCurrentNameplateRow
#undef dFramesSinceMove
}

static void MoveNameplate(void)
{
    u32 y = CalculateVerticalNameplatePosition();
    u32 spriteId = GetNameplateSpriteId();
    gSprites[spriteId].y = y;
}

static u8 GetNameplateSpriteId(void)
{
    return sListMenuState.interfaceSpriteIds[GLASS_UI_NAMEPLATE];
}

static u8 GetTrainerIdFromCurrentPosition(void)
{
    return GetTrainerIdFromPosition(GetCurrentTrainerRow());
}

static u8 GetTrainerIdFromPosition(u32 position)
{
    return sGlassLists->TrainerList[position];
}

static void PrintTrainerName(void)
{
    void* tileDest = CalculateTrainerNameTileDestination();
    u32 windowId;
    u8* windowTileData = CreateTrainerNameWindowAddText(&windowId);

    CopyTrainerNameWindowOntoNameplateMemory(windowTileData, tileDest, GLASS_TRAINER_NAMEPLATE_WIDTH);
    RemoveWindow(windowId);
}

static const u8 *GetTrainerName(u32 trainerId)
{
    if ((GetNumListElements() + 1) == GetCurrentTrainerRow())
        return gText_Cancel;

    if (!IsTrainerDiscovered(trainerId))
        return gText_ThreeQuestionMarks;

    return GetTrainerNameFromId(trainerId);
}

static void* CalculateTrainerNameTileDestination(void)
{
    u32 tileNum = gSprites[GetNameplateSpriteId()].oam.tileNum + TILE_SIZE_1BPP;

    return ((void *)(OBJ_VRAM0) + (tileNum * TILE_SIZE_4BPP));
}

static u8* CreateTrainerNameWindowAddText(u32* windowId)
{
    static const struct WindowTemplate trainerNameWindowTemplate =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 8,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2) + (30 * 2) + (15 * 7) + (15 * 15),
    };

    u32 fontId = FONT_GLASS_TRAINER_NAME;
    u32 letterSpacing = GetFontAttribute(fontId,FONTATTR_LETTER_SPACING);
    u32 trainerId = GetTrainerIdFromCurrentPosition();

    u32 x = CalculateTrainerNameHorizontalPosition(fontId, trainerId, letterSpacing);
    u32 y = GLASS_TRAINER_NAMEPLATE_VERTICAL_PADDING;

    *windowId = AddWindow(&trainerNameWindowTemplate);

    FillWindowPixelBuffer(*windowId, PIXEL_FILL(8));
    AddTextPrinterParameterized4(*windowId, fontId, x, y, letterSpacing, GetFontAttribute(fontId, FONTATTR_LINE_SPACING), sGlassWindowFontColors[GLASS_FONT_COLOR_TRAINER_NAME], TEXT_SKIP_DRAW, GetTrainerName(trainerId));

    return (u8 *)(GetWindowAttribute(*windowId, WINDOW_TILE_DATA));
}

static void CopyTrainerNameWindowOntoNameplateMemory(u8* windowTileData, void *dest, u32 windowWidth)
{
    CpuCopy32(windowTileData + UCHAR_MAX + 1, dest, windowWidth * (TILE_SIZE_1BPP / 2));
}

static u8 CalculateTrainerNameHorizontalPosition(u32 fontId, u32 trainerId, u32 letterSpacing)
{
    u32 stringWidth = GetStringWidth(fontId,GetTrainerName(trainerId),letterSpacing) + 1;

    return ((GLASS_TRAINER_NAMEPLATE_WIDTH - stringWidth) / 2) + GLASS_TRAINER_NAMEPLATE_HORIZOTNAL_PADDING;
}

static void DestroyNameplateSpriteId(void)
{
    if (GetNameplateSpriteId() == SPRITE_NONE)
        return;

    DestroySpriteAndFreeResources(&gSprites[sListMenuState.interfaceSpriteIds[GLASS_UI_NAMEPLATE]]);
    InitalizeNameplateSpriteId();
}

static void PrintMonCursor(void)
{
    u32 spriteId;
    u32 x = CalculateHorizontalMonCursorPosition(GetCurrentTrainerColumn());
    u32 y = CalculateVerticalMonCursorPosition(GetCurrentCursorScreenRowPosition());
    u16 TileTag = GLASS_GFXTAG_MON_CURSOR;

    LoadMonCursorSprite();
    spriteId = CreateMarkSprite(x,y,TileTag, SpriteCallback_MonCursor);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x32);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x32);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 2;
    SaveCheckMonCursorSpriteId(spriteId);
}

static u8 CalculateVerticalMonCursorPosition(u32 screenRow)
{
    return CalculateVerticalTrainerPosition(screenRow) - GLASS_MON_CURSOR_PADDING;
}

static void LoadMonCursorSprite(void)
{
    struct CompressedSpriteSheet sSpriteSheet_GlassMonCursor =
    {
        glassTrainerCursorsMon,
        (32*32),
        GLASS_GFXTAG_MON_CURSOR,
    };

    LoadCompressedSpriteSheet(&sSpriteSheet_GlassMonCursor);
    LoadSpritePalette(&sGlassInterfaceSpritePalette);
}

static void SpriteCallback_MonCursor(struct Sprite* sprite)
{
    if (sprite->y < CalculateVerticalMonCursorPosition(GLASS_ROW_4))
        sprite->invisible = FALSE;
    else
        sprite->invisible = TRUE;
}

static void MoveMonCursor(void)
{
    u32 screenRow = GetCurrentCursorScreenRowPosition();
    u32 spriteId = GetCheckMonCursorSpriteId();
    gSprites[spriteId].y = CalculateVerticalMonCursorPosition(screenRow);
    gSprites[spriteId].x = CalculateCursorHorizontalPosition();
}

static u8 GetCheckMonCursorSpriteId(void)
{
    return sListMenuState.interfaceSpriteIds[GLASS_UI_CHECK_MON_CURSOR];
}

static u8 CalculateVerticalTrainerPosition(u32 row)
{
    return row * PARTY_HEIGHT + PARTY_VERTICAL_OFFSET;
}

static u8 CalculateCursorHorizontalPosition(void)
{
    u32 column = GetCurrentTrainerColumn();

    if (IsColumnOnTrainer(column))
        return TILE_SIZE_1BPP;
    else
        return CalculateHorizontalMonCursorPosition(column);
}

static void IncrementTrainerColumn(void)
{
    ChangeTrainerColumn(1);
}

static void DecrementTrainerColumn(void)
{
    ChangeTrainerColumn(-1);
}

static void ChangeTrainerColumn(s32 delta)
{
    u32 column = GetCurrentTrainerColumn();
    u32 row = GetCurrentCursorScreenRowPosition();
    u32 partySize = GetPartySizeForRow(row);
    bool32 cursorMovingRight = IsCursorMovingRight(delta);
    u32 lastMon = partySize - 1;

    if (!partySize)
    {
        SetCurrentTrainerColumnPlayCursorSound(GLASS_MON_1);
        return;
    }
    else if ((column == lastMon) && cursorMovingRight)
        SetColumnToTrainerIfCanPlayReveal();
    else if (IsColumnOnFirstMon(column) && !cursorMovingRight)
        SetColumnToTrainerIfCanPlayReveal();
    else if ((IsColumnOnTrainer(column)) && cursorMovingRight)
        SetCurrentTrainerColumnPlayCursorSound(GLASS_MON_1);
    else if ((IsColumnOnTrainer(column)) && !cursorMovingRight)
        SetCurrentTrainerColumnPlayCursorSound(lastMon);
    else
    {
        column = (column + delta + partySize) % partySize;
        SetCurrentTrainerColumnPlayCursorSound(column);
    }
    MoveMonCursor();
}

static bool8 IsCursorMovingRight(s32 delta)
{
    return (delta == 1);
}

static bool8 IsColumnOnFirstMon(u32 column)
{
    return (column == GLASS_MON_1);
}

static bool8 IsColumnOnTrainer(u32 column)
{
    return (column == GLASS_TRAINER_HEADER);
}

static void SetColumnToTrainerIfCanPlayReveal(void)
{
    if (CanPlayTrainerReveal(GetTrainerIdFromCurrentPosition()))
        SetCurrentTrainerColumnPlayCursorSound(GLASS_TRAINER_HEADER);
}

static void AdjustTrainerColumn(u32 row)
{
    u32 column = GetCurrentTrainerColumn();
    u32 partySize = GetPartySizeForRow(row);

    if (column > (partySize - 1))
        SetCurrentTrainerColumn(GLASS_MON_1);
}

static void SetCurrentTrainerColumn(u32 column)
{
    sListMenuState.trainerColumn = column;
}

static void SetCurrentTrainerColumnPlayCursorSound(u32 row)
{
    PlaySE(SE_RG_BAG_CURSOR);
    SetCurrentTrainerColumn(row);
}

static void IncrementTrainerRow(u32 row, u32 numListElements)
{
    u32 screenRow;
    if (row <= numListElements)
        row = row + 1;
    else
        row = 0;

    screenRow = ConvertTrainerRowToScreenRow(row,numListElements);
    SetCurrentTrainerRowPlayCursorSound(row);
    SetCurrentCursorScreenRowPosition(screenRow);
}

static void DecrementTrainerRow(u32 row, u32 numListElements)
{
    if (row > 0)
        row = row - 1;
    else
        row = numListElements + 1;

    SetCurrentTrainerRowPlayCursorSound(row);
    SetCurrentCursorScreenRowPosition(ConvertTrainerRowToScreenRow(row,numListElements));
}

static void SetCurrentTrainerRow(u32 row)
{
    sListMenuState.trainerRow = row;
}

static void SetCurrentTrainerRowPlayCursorSound(u32 row)
{
    PlaySE(SE_RG_BAG_CURSOR);
    SetCurrentTrainerRow(row);
}

static void ChangeTrainerRow(u32 direction)
{
    u32 row = GetCurrentTrainerRow();
    u32 numListElements = GetNumListElements();

    MoveTrainerForNameplate(GLASS_MOVE_TRAINER);

    if (direction == DPAD_DOWN)
        IncrementTrainerRow(row, numListElements);
    else
        DecrementTrainerRow(row, numListElements);

    HandleSprites(direction, GetCurrentTrainerRow(), numListElements);
    AdjustTrainerColumn(GetCurrentCursorScreenRowPosition());

    MoveMonCursor();

    HandleTrainerSpriteAnimation();
    MoveTrainerForNameplate(GLASS_MOVE_TRAINER_BACK);
    PrintElevatedTrainerStateMark();

    ChangeBackground(BG1_GLASS_MAP_STATS_TRAINER_CURSOR);
}

static void HandleSprites(u32 direction, u32 row, u32 numListElements)
{
    //PSF TODO when a map only has one or two Trainers, sprites do not print correctly
    u32 originalTrainerId[GLASS_TRAINER_MAX_SHOWED];
    u32 newTrainerId[GLASS_TRAINER_MAX_SHOWED];
    u32 rowMovementRecord[GLASS_TRAINER_MAX_SHOWED][2];
    struct OnScreenRow tempScreenRow[GLASS_TRAINER_MAX_SHOWED];
    PopulateTrainerIdsArray(originalTrainerId);
    CalcSetScreenRows(numListElements, row);
    PopulateTrainerIdsArray(newTrainerId);

    if (!HaveAnyTrainersMovedScreenRow(originalTrainerId, newTrainerId))
        return;

    LoopThroughScreenRows(originalTrainerId, newTrainerId, GLASS_LOOP_MODE_DESTROY);
    MoveTrainerRowsWhenFound(rowMovementRecord, tempScreenRow, originalTrainerId, newTrainerId);
    LoopThroughScreenRows(originalTrainerId, newTrainerId, GLASS_LOOP_MODE_CREATE);
}

static void LoopThroughScreenRows(u32* originalTrainerId, u32*newTrainerId, u32 mode)
{
    u32 firstRow, secondRow;
    bool32 found;
    for (firstRow = 0; firstRow < GLASS_TRAINER_MAX_SHOWED; firstRow ++)
    {
        found = FALSE;
        for (secondRow = 0; secondRow < GLASS_TRAINER_MAX_SHOWED; secondRow++)
        {
            if (!mode)
                found = (originalTrainerId[firstRow] == newTrainerId[secondRow]);
            else
                found = (originalTrainerId[secondRow] == newTrainerId[firstRow]);
            if (found)
                break;
        }

        if (found)
            continue;

        if (!mode)
            DestroyPartySprites(firstRow);
        else if (mode)
            UpdatePartySizesAndPrintPartyForRow(firstRow);
    }
}

void MoveTrainerRowsWhenFound(u32 rowMovementRecord[GLASS_TRAINER_MAX_SHOWED][2], struct OnScreenRow tempScreenRow[GLASS_TRAINER_MAX_SHOWED], u32 originalTrainerId[GLASS_TRAINER_MAX_SHOWED], u32 newTrainerId[GLASS_TRAINER_MAX_SHOWED])
{
    u32 firstRow, secondRow, columnIndex;

    for (firstRow = 0; firstRow < GLASS_TRAINER_MAX_SHOWED; firstRow++)
    {
        for (secondRow = 0; secondRow < GLASS_TRAINER_MAX_SHOWED; secondRow++)
        {
            if (originalTrainerId[secondRow] == newTrainerId[firstRow])
            {
                MoveSprites(secondRow, firstRow);
                rowMovementRecord[secondRow][GLASS_ORIGINAL_ROW] = secondRow;
                rowMovementRecord[secondRow][GLASS_NEW_ROW] = firstRow;

                for (columnIndex = 0; columnIndex < GLASS_TRAINER_COLUMN_COUNT; columnIndex++)
                    tempScreenRow[secondRow].spriteId[columnIndex] = sGlassLists->onScreenRow[secondRow].spriteId[columnIndex];

                break;
            }
        }
    }

    for (secondRow = 0; secondRow < GLASS_TRAINER_MAX_SHOWED; secondRow++)
        for (columnIndex = 0; columnIndex < GLASS_TRAINER_COLUMN_COUNT; columnIndex++)
            if (rowMovementRecord[secondRow][GLASS_ORIGINAL_ROW] != rowMovementRecord[secondRow][GLASS_NEW_ROW])
                sGlassLists->onScreenRow[rowMovementRecord[secondRow][GLASS_NEW_ROW]].spriteId[columnIndex] = tempScreenRow[rowMovementRecord[secondRow][GLASS_ORIGINAL_ROW]].spriteId[columnIndex];
}

static bool8 HaveAnyTrainersMovedScreenRow(u32* originalTrainerId, u32* newTrainerId)
{
    u32 oldRow, newRow = 0;

    for (oldRow = 0; oldRow < GLASS_TRAINER_MAX_SHOWED; oldRow++)
        if (originalTrainerId[oldRow] != newTrainerId[newRow++])
            return TRUE;

    return FALSE;
}

static void PopulateTrainerIdsArray(u32* rows)
{
    u32 i;

    for (i = 0; i < GLASS_TRAINER_MAX_SHOWED; i++)
        rows[i] = GetTrainerIdFromTrainerFromScreenRow(i);
}

static u8 GetCurrentTrainerRow(void)
{
    return sListMenuState.trainerRow;
}

static u8 GetCurrentTrainerColumn(void)
{
    return sListMenuState.trainerColumn;
}

static s32 GetCurrentCursorScreenRowPosition(void)
{
    return sListMenuState.cursorScreenRow;
}

static void SetCurrentCursorScreenRowPosition(u32 row)
{
    sListMenuState.cursorScreenRow = row;
}

static u8 GetNumberOfScreenRows(void)
{
    u32 numList = GetNumListElements();
    return (numList > GLASS_TRAINER_MAX_SHOWED) ? GLASS_TRAINER_MAX_SHOWED : numList;
}

static u8 ConvertTrainerRowToScreenRow(u32 currentPosition, u32 numListElements)
{
    if (currentPosition > numListElements)
        return GLASS_SCREEN_ROW_LAST;
    else if (currentPosition < GLASS_SCREEN_ROW_BUFFER)
        return currentPosition;
    else
        return GLASS_SCREEN_ROW_BUFFER;
}

static u8 ConvertScreenRowToPositionInTrainerList(u32 numListElements, u32 currentPosition)
{
    if (currentPosition < GLASS_SCREEN_ROW_LAST)
        return 0;
    else if (currentPosition >= numListElements)
        return (numListElements - GLASS_SCREEN_ROW_BUFFER);
    else
        return (currentPosition - GLASS_SCREEN_ROW_BUFFER);
}

static void SetScreenRow(u32 index, u32 row)
{
    sGlassLists->onScreenRow[index].listPosition = row;
}

static void CreateTrainerArrowSpritePair(void)
{
    CreateUpTrainerArrowSprite();
    CreateDownTrainerArrowSprite();
}

static void CreateTrainerArrowSprite(u32 SpriteTag,const u32 *gfx,u32 x, u32 y, void (*callback)(struct Sprite *))
{
    u32 spriteId;

    struct CompressedSpriteSheet sSpriteSheet_GlassArrow = {gfx, (32*16), SpriteTag};
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = SpriteTag;
    TempSpriteTemplate.callback = callback;
    TempSpriteTemplate.paletteTag = PAL_GLASS_UI_SPRITES;

    LoadCompressedSpriteSheet(&sSpriteSheet_GlassArrow);
    LoadSpritePalette(&sGlassInterfaceSpritePalette);
    spriteId = CreateSprite(&TempSpriteTemplate,x,y, 0);

    gSprites[spriteId].oam.shape = SPRITE_SHAPE(32x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(32x16);
    gSprites[spriteId].oam.priority = 0;
}

static void CreateUpTrainerArrowSprite(void)
{
    CreateTrainerArrowSprite(GLASS_GFXTAG_TRAINER_UP_ARROW,glassTrainerArrowsTop,119,8,SpriteCB_MenuArrow);
}

static void CreateDownTrainerArrowSprite(void)
{
    CreateTrainerArrowSprite(GLASS_GFXTAG_TRAINER_DOWN_ARROW,glassTrainerArrowsBottom,119,140,SpriteCB_MenuArrow);
}

static void SaveHoverSpriteId(u32 spriteId)
{
    sListMenuState.interfaceSpriteIds[GLASS_UI_HOVER_MARK] = spriteId;
}

static void InitalizeHoverSpriteId(void)
{
    sListMenuState.interfaceSpriteIds[GLASS_UI_HOVER_MARK] = SPRITE_NONE;
}

static void DestroyHoverSpriteId(void)
{
    if (sListMenuState.interfaceSpriteIds[GLASS_UI_HOVER_MARK] == SPRITE_NONE)
        return;

    DestroySpriteAndFreeResources(&gSprites[sListMenuState.interfaceSpriteIds[GLASS_UI_HOVER_MARK]]);
    InitalizeHoverSpriteId();
}

u32 GetTrainerType(u32 trainerId)
{
    return gTrainers[GetCurrentDifficultyLevel()][trainerId].trainerType;
}

bool32 IsTrainerDiscovered(u32 trainerId)
{
    if (gSaveBlock3Ptr->glass.DiscoveredTrainer[trainerId] == TRUE)
        return TRUE;

    return (IsTrainerDefeated(trainerId));
}

static bool8 IsTrainerDefeated(u32 trainerID)
{
    return FlagGet(TRAINER_FLAGS_START + trainerID);
}

static bool8 IsTrainerRematch(u32 trainerId)
{
    u32 tableIndex, trainerIndex;

    for (tableIndex = 0; tableIndex < REMATCH_TABLE_ENTRIES; tableIndex++)
        for (trainerIndex = 1; tableIndex < REMATCHES_COUNT ; trainerIndex++)
            if (gRematchTable->trainerIds[trainerIndex] == trainerId)
                return TRUE;

    return FALSE;
}

void SetTrainersDiscovered(void)
{
    if (!gTrainerBattleParameter.params.opponentB)
        SetTrainerDiscovered(gTrainerBattleParameter.params.opponentB);
    SetTrainerDiscovered(gTrainerBattleParameter.params.opponentA);
}

void SetTrainerDiscovered(u32 trainerId)
{
   gSaveBlock3Ptr->glass.DiscoveredTrainer[trainerId] = TRUE;
}

static void SortAllTrainersAZ(u32 numTrainers)
{
    u32 trainerListIndex = 0, tempList[numTrainers];

    StoreTrainersInTempList(numTrainers,tempList);
    SortDiscoveredTrainersAZ(numTrainers, tempList, &trainerListIndex);
    SortUndiscoveredTrainers(numTrainers, tempList, &trainerListIndex);
    PopulateTrainerListWithSort(numTrainers, tempList);
}

static void StoreTrainersInTempList(u32 numTrainers, u32* tempList)
{
    u32 trainerListIndex;
    for (trainerListIndex = 0; trainerListIndex < numTrainers; trainerListIndex++)
        tempList[trainerListIndex] = sGlassLists->TrainerList[trainerListIndex];
}

static void SortDiscoveredTrainersAZ(u32 numTrainers, u32* tempList, u32* trainerListIndex)
{
    u32 i, newTemp;
    u32 k = 0;

    for (i = 0; i < numTrainers; ++i)
        for (k = i + 1; k < numTrainers; ++k)
        {
            if (IsTrainerDiscovered(tempList[i])
                    && (!IsTrainerDiscovered(tempList[k])
                        || StringCompare(GetTrainerNameFromId(tempList[i]), GetTrainerNameFromId(tempList[k])) <= 0))
                continue;

            SWAP(tempList[k],tempList[i],newTemp);
        }

    for (i = 0; i < numTrainers; i++)
        if (IsTrainerDiscovered(sGlassLists->TrainerList[i]))
            *trainerListIndex = *trainerListIndex + 1;
}

static void SortDiscoveredTrainers(u32 numTrainers, u32* tempList, u32* trainerListIndex)
{
    u32 i;

    for (i = 0; i < numTrainers; i++) {
        if (IsTrainerDiscovered(sGlassLists->TrainerList[i])) {
            if (!IsTrainerDefeated(sGlassLists->TrainerList[i])) {
                tempList[(*trainerListIndex)++] = sGlassLists->TrainerList[i];
            }
        }
    }
}

static void SortUndiscoveredTrainers(u32 numTrainers, u32* tempList, u32* trainerListIndex)
{
    u32 i;

    for (i = 0; i < numTrainers; i++) {
        if (!IsTrainerDiscovered(sGlassLists->TrainerList[i])) {
            tempList[(*trainerListIndex)++] = sGlassLists->TrainerList[i];
        }
    }
}

static void PopulateTrainerListWithSort(u32 numTrainers, u32* tempList)
{
    u32 i;

    for (i = 0; i < numTrainers; i++) {
        sGlassLists->TrainerList[i] = tempList[i];
    }
}

static void SortAllTrainersIncompleteFirst(u32 numTrainers)
{
    u32 trainerListIndex = 0, tempList[numTrainers];

    SortDiscoveredTrainers(numTrainers, tempList, &trainerListIndex);
    SortUndiscoveredTrainers(numTrainers, tempList, &trainerListIndex);
    SortDefeatedTrainers(numTrainers, tempList, &trainerListIndex);
    PopulateTrainerListWithSort(numTrainers, tempList);
}

static void SortDefeatedTrainers(u32 numTrainers, u32* tempList, u32* trainerListIndex)
{
    u32 i;

    for (i = 0; i < numTrainers; i++) {
        if (IsTrainerDefeated(sGlassLists->TrainerList[i])) {
            tempList[(*trainerListIndex)++] = sGlassLists->TrainerList[i];
        }
    }
}

static void SortAllTrainersUndiscoveredFirst(u32 numTrainers)
{
    u32 trainerListIndex = 0, tempList[numTrainers];

    SortUndiscoveredTrainers(numTrainers, tempList, &trainerListIndex);
    SortDiscoveredTrainers(numTrainers, tempList, &trainerListIndex);
    SortDefeatedTrainers(numTrainers, tempList, &trainerListIndex);
    PopulateTrainerListWithSort(numTrainers, tempList);
}

static void SortAllTrainersDefeatedFirst(u32 numTrainers)
{
    u32 trainerListIndex = 0, tempList[numTrainers];

    SortDefeatedTrainers(numTrainers, tempList, &trainerListIndex);
    SortDiscoveredTrainers(numTrainers, tempList, &trainerListIndex);
    SortUndiscoveredTrainers(numTrainers, tempList, &trainerListIndex);
    PopulateTrainerListWithSort(numTrainers, tempList);
}

static void ReloadTrainerList(void)
{
    u32 row = 0;
    u32 locationId = GetChosenLocation();
    u32 numListElements = GetNumListElements();
    u32 screenRow;

    DestroyCheckMonCursorSprite();
    EmptyTrainerList();
    DestroyAllPartySprites();
    DestroyNameplateSpriteId();
    DestroyHoverSpriteId();
    FreeSpritePalettesResetSpriteData();

    LoadMonIconPalettes();
    LoadMarkSpriteSheets();

    ResetTrainerRowAndCursor();

    screenRow = ConvertTrainerRowToScreenRow(row,numListElements);
    SetCurrentTrainerRow(row);
    SetCurrentCursorScreenRowPosition(screenRow);
    AdjustTrainerColumn(row);

    PopulateAndSortTrainerList(locationId);
    CalcSetScreenRows(GetNumListElements(), row);
    UpdatePartySizesAndPrintAllParties();

    MoveTrainerForNameplate(GLASS_MOVE_TRAINER);
    PrintElevatedTrainerStateMark();

    HandleTrainerName();
    PrintMonCursor();
    HandleTrainerSpriteAnimation();

    ChangeBackground(BG1_GLASS_MAP_STATS_TRAINER_CURSOR);
}

static void ResetTrainerRowAndCursor(void)
{
    SetCurrentCursorScreenRowPosition(0);
    SetCurrentTrainerRow(0);
}

static void EmptyTrainerList(void)
{
    u32 i;

    for(i = 0;i < TRAINERS_COUNT ; i++)
        sGlassLists->TrainerList[i] = TRAINER_NONE;
}

static void PrintTrainerAndParty(u32 screenRow)
{
    u32 trainerId = GetTrainerIdFromTrainerFromScreenRow(screenRow);

    EmptyTrainerScreenRowSpriteIds(screenRow);

    if (trainerId == TRAINER_NONE)
        return;

    PrintTrainerSprite(trainerId, screenRow);
    PrintTrainerStateMark(trainerId, screenRow, 1);
    PrintParty(trainerId, screenRow);
}

static u8 GetTrainerIdFromTrainerFromScreenRow(u32 screenRow)
{
    u32 listNum = GetListPositionFromScreenRow(screenRow);
    return GetTrainerIdFromPosition(listNum);
}

static u8 GetListPositionFromScreenRow(u32 screenRow)
{
    if (screenRow == GLASS_EMPTY_TRAINER_ROW)
        return GetNumListElements();

    return sGlassLists->onScreenRow[screenRow].listPosition;
}

u32 GetOverworldSpriteFromTrainerId(enum ResidoTrainerIds trainerId)
{
    return gTrainers[GetCurrentDifficultyLevel()][trainerId].objectEventGraphicsId;
}

static u8 GetTrainerOWSpriteIfBattled(u32 trainerId)
{
    if (IsTrainerDiscovered(trainerId))
        return GetOverworldSpriteFromTrainerId(trainerId);
    else
        return OBJ_EVENT_GFX_UNKNOWN;
}

static void PrintTrainerSprite(u32 trainerId, u32 screenRow)
{
    u32 y = CalculateVerticalTrainerPosition(screenRow);
    u32 x = (PARTY_HEIGHT / 2);
    u32 objectId = GetTrainerOWSpriteIfBattled(trainerId);
    u32 spriteId = CreateObjectGraphicsSprite(objectId, SpriteCallbackDummy, x, y,0);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = 0;

    SetSpriteId(screenRow,PARTY_SIZE,spriteId);
}

static void PrintParty(u32 trainerId, u32 row)
{
    struct Pokemon trainerParty[PARTY_SIZE];

    u32 i;
    u32 partySize = GetPartySizeForRow(row);

    for (i = 0; i < partySize; i++)
        PrintPartyMon(trainerId,trainerParty,i,row);
}

static void SavePartySizeForRow(u32 partySize, u32 row)
{
    sGlassLists->onScreenRow[row].partySize = partySize;
}

static u8 GetPartySizeForRow(u32 row)
{
    return sGlassLists->onScreenRow[row].partySize;
}

static u8 CalculateHorizontalMonPosition(u32 column)
{
    return (PARTY_HEIGHT * 2) + (column * PARTY_HEIGHT);
}

static u8 CalculateHorizontalMonCursorPosition(u32 column)
{
    return CalculateHorizontalMonPosition(column) - 8;
}

static void PrintPartyMon(u32 trainerId, struct Pokemon* trainerParty, u32 index, u32 row)
{
    u32 x = CalculateHorizontalMonPosition(index);
    u32 y = CalculateVerticalTrainerPosition(row);
    u32 species = SPECIES_NONE, personality = 0, spriteId;

    if (GetPartySizeForRow(row) == index)
        return;

    if (IsTrainerDiscovered(trainerId))
        species = gTrainers[GetCurrentDifficultyLevel()][trainerId].party[index].species;

    spriteId = CreateMonIcon(species, SpriteCallbackDummy, x, y, 0, personality);
    gSprites[spriteId].oam.priority = 1;
    SetSpriteId(row,index,spriteId);
}

static void SetSpriteId(u32 screenRow, u32 column, u32 spriteId)
{
    sGlassLists->onScreenRow[screenRow].spriteId[column] = spriteId;
}

static void DestroyPartySprites(u32 screenRow)
{
    u32 columnIndex, spriteId;

    for (columnIndex = 0; columnIndex < GLASS_TRAINER_COLUMN_COUNT; columnIndex++)
    {
        spriteId = sGlassLists->onScreenRow[screenRow].spriteId[columnIndex];

        if (spriteId == SPRITE_NONE)
            continue;

        if (columnIndex > GLASS_MON_6)
            DestroySprite(&gSprites[spriteId]);
        else
            FreeAndDestroyMonIconSprite(&gSprites[spriteId]);

         SetSpriteId(screenRow,columnIndex,SPRITE_NONE);
    }
}

static void DestroyAllPartySprites(void)
{
    u32 row, column, spriteId;

    for (row = 0; row < GLASS_TRAINER_MAX_SHOWED; row++)
        for (column = 0; column < GLASS_TRAINER_COLUMN_COUNT; column++)
        {

            spriteId = sGlassLists->onScreenRow[row].spriteId[column];
            if (spriteId == SPRITE_NONE)
                continue;

            if (spriteId == MAX_SPRITES)
                continue;

            DestroySpriteAndFreeResources(&gSprites[spriteId]);
        }
}

static u8 CreateMarkSprite(u32 x, u32 y, u16 TileTag, void (*callback)(struct Sprite*))
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;
    TempSpriteTemplate.tileTag = TileTag;
    TempSpriteTemplate.paletteTag = PAL_GLASS_UI_SPRITES;
    TempSpriteTemplate.callback = callback;

    LoadSpritePalette(&sGlassInterfaceSpritePalette);
    return CreateSprite(&TempSpriteTemplate,x,y,0);
}

static void PrintTrainerStateMark(u32 trainerId, u32 screenRow, u32 subpriority)
{
    u32 spriteId;
    u32 x = PARTY_HEIGHT;
    u32 y = CalculateVerticalTrainerPosition(screenRow);
    bool32 hover = (subpriority == 0) ? TRUE: FALSE;
    u16 TileTag = GetMarkFromTrainerId(trainerId, hover);

    if (!TileTag)
        return;

    spriteId = CreateMarkSprite(x,y,TileTag, SpriteCallbackDummy);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 1;
    gSprites[spriteId].subpriority = subpriority;

    if (subpriority)
        SetSpriteId(screenRow,GLASS_MARK_COLUMN,spriteId);
    else
        SaveHoverSpriteId(spriteId);
}

static void PrintElevatedTrainerStateMark(void)
{
    u32 screenRow = GetCurrentCursorScreenRowPosition();
    u32 trainerId = GetTrainerIdFromTrainerFromScreenRow(screenRow);
    DestroyHoverSpriteId();
    PrintTrainerStateMark(trainerId, screenRow, 0);
}

static u8 GetMarkFromTrainerId(u32 trainerId, bool32 hover)
{
    u32 type = GetTrainerType(trainerId);
    bool32 rematch = IsTrainerRematch(trainerId);
    bool32 state = IsTrainerDefeated(trainerId);

    return CalculateTileTag(type, rematch, hover, state);
}

static void MoveSprites(u32 old, u32 new)
{
    u32 columnIndex, spriteId;
    s32 offset = new - old;

    if (old == new)
        return;

    for (columnIndex = 0; columnIndex < GLASS_TRAINER_COLUMN_COUNT; columnIndex++)
    {
        spriteId = sGlassLists->onScreenRow[old].spriteId[columnIndex];

        if (spriteId == SPRITE_NONE)
            continue;

        gSprites[spriteId].y += (offset * PARTY_HEIGHT);
    }
}

static void MoveTrainerForNameplate(s32 offset)
{
    u32 currentRow = GetCurrentCursorScreenRowPosition();

    for (u32 rowIndex = 0; rowIndex < GLASS_TRAINER_MAX_SHOWED; rowIndex++)
    {
        u32 spriteId = sGlassLists->onScreenRow[currentRow].spriteId[PARTY_SIZE];
        u32 y = gSprites[spriteId].y;

        if (spriteId == SPRITE_NONE)
            continue;

        if (rowIndex == currentRow)
            gSprites[spriteId].y = y - GLASS_TRAINER_NAMEPLATE_MOVEMENT;
        else
            gSprites[spriteId].y = CalculateVerticalTrainerPosition(currentRow);
    }
}

static void HandleTrainerSpriteAnimation(void)
{
    u32 row, columnIndex, spriteId;

    for (row = 0; row < GLASS_TRAINER_MAX_SHOWED; row++)
    {
        for (columnIndex = 0; columnIndex < GLASS_MARK_COLUMN; columnIndex++)
        {
            spriteId = sGlassLists->onScreenRow[row].spriteId[columnIndex];

            if (spriteId == SPRITE_NONE)
                continue;

            if (IsCurrentRowIsDefeatedTrainer(row))
                AnimateTrainerRow(row, spriteId, columnIndex);
            else
                StopTrainerRowAnimation(row, spriteId, columnIndex);
        }
    }
}

static bool8 IsCurrentRowIsDefeatedTrainer(u32 row)
{
    if (GetCurrentCursorScreenRowPosition() != row)
        return FALSE;

    u32 trainerId = GetTrainerIdFromTrainerFromScreenRow(row);

    if (trainerId == TRAINER_NONE)
        return FALSE;

    if (!IsTrainerDefeated(trainerId))
        return FALSE;

    return TRUE;
}

static void AnimateTrainerRow(u32 row, u32 spriteId, u32 columnIndex)
{
    if (columnIndex == GLASS_TRAINER_HEADER)
        StartSpriteAnim(&gSprites[spriteId], ANIM_STD_GO_SOUTH);
    else
        gSprites[spriteId].callback = SpriteCB_MonIcon;
}

static void StopTrainerRowAnimation(u32 row, u32 spriteId, u32 columnIndex)
{
    if (columnIndex == GLASS_TRAINER_HEADER)
        StartSpriteAnim(&gSprites[spriteId], ANIM_STD_FACE_SOUTH);
    else
        gSprites[spriteId].callback = SpriteCallbackDummy;
}

static void ChangeBackground(u32 backgroundId)
{
    ClearScheduledBgCopiesToVram();
    SetScheduleBgs(backgroundId);
    CopyToBgTilemapBuffer(backgroundId, GetRelevantTilemap(backgroundId),0,0);
}

static void Task_TrainerInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (JOY_NEW(DPAD_LEFT))
        DecrementTrainerColumn();

    if (JOY_NEW(DPAD_RIGHT))
        IncrementTrainerColumn();

    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        ChangeTrainerRow(DPAD_UP);

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        ChangeTrainerRow(DPAD_DOWN);

    if (JOY_NEW(B_BUTTON))
        SwitchToLocationMode(taskId);

    if (JOY_NEW(A_BUTTON))
        HandleTrainerModeAPress(taskId, GetTrainerIdFromCurrentPosition());

    if (JOY_NEW(START_BUTTON))
        ChangeSortAndReloadTrainerList(taskId);

    PrintMenuHeader();
    PrintHelpBar();
}

static void HandleTrainerModeAPress(u8 taskId,u32 trainerId)
{
    if (IsTrainerCursorAtBottom())
        SwitchToLocationMode(taskId);
    else if (GetCurrentTrainerColumn() == GLASS_TRAINER_HEADER)
        HandleCharacterReveal(taskId,trainerId);
    else
        HandlePartyMonSelection(trainerId, taskId);
}

static bool8 CanPlayTrainerReveal(u32 trainerId)
{
    if (!GetRevealFromTrainerId(trainerId))
        return FALSE;

    if (IsTrainerDiscovered(trainerId))
        return TRUE;

    return FALSE;
}

static enum RevealIds GetRevealFromTrainerId(u32 trainerId)
{
    return (gTrainers[GetCurrentDifficultyLevel()][trainerId].characterRevealId);
}

static void HandleCharacterReveal(u8 taskId, u32 trainerId)
{
    if (!CanPlayTrainerReveal(trainerId))
        PlaySE(SE_BOO);
    else
        PlayTrainerReveal(taskId);
}

static void PlayTrainerReveal(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_LoadReveal;
}

static void Task_LoadReveal(u8 taskId)
{
    u32 trainerId;

    if (gPaletteFade.active)
        return;

    trainerId = GetTrainerIdFromCurrentPosition();
    enum RevealIds revealId = GetRevealFromTrainerId(trainerId);

    RevealCharacter(revealId, FALSE);
    FreeAllWindowBuffers();
}

static void HandlePartyMonSelection(u32 trainerId, u8 taskId)
{
    if (!IsTrainerDiscovered(trainerId))
        PlaySE(SE_BOO);
    else
        GoToPokemonSummary(taskId);
}

static void GoToPokemonSummary(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    PlaySE(SE_DEX_SEARCH);
    CreateTask(Task_LoadPokemonSummary,0);
    DestroyTask(taskId);
}

static struct Pokemon *Glass_GetTempParty(void)
{
    return (sGlassState == NULL) ? NULL : sGlassState->tempParty;
}

static void Task_LoadPokemonSummary(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    struct Pokemon *party = Glass_GetTempParty();

    u32 selectedMon = GetCurrentTrainerColumn();
    u32 trainerId = GetTrainerIdFromCurrentPosition();

    u32 partySize = (CreateNPCTrainerPartyFromTrainer(party, &gTrainers[GetCurrentDifficultyLevel()][trainerId], TRUE, BATTLE_TYPE_TRAINER)) - 1;

    DestroyTask(taskId);
    FreeAllWindowBuffers();
    ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, party, selectedMon, partySize, CB2_ReturnToTrainerScreen);
}

void CB2_ReturnToTrainerScreen(void)
{
    u32 locationId = GetChosenLocation();
    u32 row = GetCurrentTrainerRow();
    u32 column = GetCurrentTrainerColumn();

    Glass_FreeResources();
    Glass_Init(sGlassState->savedCallback,locationId,row,column,sListMenuState.storedRowPosition,sListMenuState.storedScrollOffset);
}

static bool8 IsReturningFromOtherScreen(u32 locationId)
{
    return (locationId != GLASS_NO_LOCATION_SAVED);
}

static void HandleSavedTrainerModeData(u32 locationId, u32 row, u32 column, u16 locationRow, u16 locationScroll)
{
    if (!IsReturningFromOtherScreen(locationId))
        return;

    ToggleGlassMode();
    RestoreTrainerModeData(locationId,row,column, locationRow, locationScroll);
}

static void RestoreTrainerModeData(u32 locationId, u32 row, u32 column, u16 locationRow, u16 locationScroll)
{
    SaveChosenLocation(locationId);
    SetCurrentTrainerRow(row);
    SetCurrentTrainerColumn(column);
    RestoreScrollAndRowPositions(locationRow, locationScroll);
}

static void RestoreScrollAndRowPositions(u32 storedLocationRow, u32 storedLocationScroll)
{
    sListMenuState.row = storedLocationRow;
    sListMenuState.scroll = storedLocationScroll;
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

    SetMainCallback2(sGlassState->savedCallback);
    ResetTrainerMode();
    CleanUpLocationMode(taskId);
    Glass_FreeResources();
    DestroyTask(taskId);
}

static void FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Glass_VBlankCB);
    SetMainCallback2(Glass_MainCB);
}

static void ResetTrainerMode(void)
{
    sGlassState->trainerMode = FALSE;
}

static void Glass_FreeResources(void)
{
    FreeAllSpritePalettes();
    FreeGlassStructs();
    FreeGlassBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void FreeGlassStructs(void)
{
    if (sGlassState != NULL)
        Free(sGlassState);

    if (sGlassLists != NULL)
        Free(sGlassLists);

    if (sListMenuItems != NULL)
        Free(sListMenuItems);
}

static void FreeGlassBackgrounds(void)
{
    u32 backgroundId;
    for (backgroundId = 0; backgroundId < BG_GLASS_COUNT; backgroundId++)
    {
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
    }
}

void Glass_ResetSaveData(void)
{
    u32 i;

    gSaveBlock3Ptr->glass.LocationSort = GLASS_SORT_LOCATION_DEFAULT;
    gSaveBlock3Ptr->glass.TrainerSort = GLASS_SORT_TRAINER_DEFAULT;

    for (i = 0; i < TRAINERS_COUNT; i++)
        gSaveBlock3Ptr->glass.DiscoveredTrainer[i] = FALSE;
}

u32 Glass_OverworldReturnLocationStat(u32 locationId, u32 stat)
{
    locationId = (locationId >= MAPSEC_NONE) ? gMapHeader.regionMapSectionId : locationId;
    stat = (stat > GLASS_LOCATION_RATE) ? GLASS_LOCATION_RATE : stat;

    u8 statArray[GLASS_LOCATION_STAT_COUNT] = {0};

    CountAllTrainersAndAdjustStats(locationId,statArray);
    CalculateLocationStats(statArray);

    return statArray[stat];
}
