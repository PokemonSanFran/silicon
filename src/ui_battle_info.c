#include "global.h"
#include "gpu_regs.h"
#include "bg.h"
#include "scanline_effect.h"
#include "palette.h"
#include "sound.h"
#include "window.h"
#include "sprite.h"
#include "text.h"
#include "string_util.h"
#include "international_string_util.h"
#include "trig.h"
#include "main.h"
#include "malloc.h"
#include "task.h"
#include "menu.h"
#include "menu_helpers.h"
#include "line_break.h"
#include "item.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "event_data.h"
#include "text_window.h"
#include "battle.h"
#include "battle_setup.h"
#include "party_menu.h"
#include "strings.h"
#include "battle_controllers.h"
#include "ui_mon_summary.h"
#include "silicon_battle_status_criteria.h"
#include "ui_battle_info.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/party_menu.h"

enum BattleInfoBackgrounds
{
    BI_BG_TEXT,
    BI_BG_TEXT_ALT,
    BI_BG_MAIN,

    NUM_BI_BACKGROUNDS
};

enum BattleInfoWindows
{
    BI_WIN_MAIN,
    BI_WIN_STATUS_LIST,
    BI_WIN_OPTIONS_LIST,
    BI_WIN_TEXTBOX,

    NUM_BI_WINDOWS
};

enum BattleInfoSprites
{
    BI_SPRITE_HPBAR,
    BI_SPRITE_TYPE_1,
    BI_SPRITE_TYPE_2,
    BI_SPRITE_CURSOR,
    BI_SPRITE_OPTIONS_CURSOR,
    BI_SPRITE_STATUS_CURSOR,
    BI_SPRITE_INDICATOR_LEFT,
    BI_SPRITE_INDICATOR_RIGHT,

    NUM_BI_SPRITES
};

enum BattleInfoSpriteTags
{
    TAG_BI_START = 0x6969,

    TAG_BI_TYPE_1 = TAG_BI_START,
    TAG_BI_TYPE_2,
    TAG_BI_HPBAR,
    TAG_BI_MAIN,

    NUM_BI_TAGS
};

enum BattleInfoSubspriteEntries
{
    BI_SUBSPRITE_OPTIONS_CURSOR,
    BI_SUBSPRITE_STATUS_CURSOR,

    NUM_BI_SUBSPRITES
};

enum BattleInfoTextColors
{
    BI_TXTCLR_OUTLINED,
    BI_TXTCLR_CONTENT,
    BI_TXTCLR_FOOTER,

    NUM_BI_TXTCLRS
};

enum PACKED BattleInfoModes
{
    BI_MODE_MAIN,
    BI_MODE_OPTIONS_LIST,
    BI_MODE_STATUS_LIST,

    NUM_BI_MODES
};

enum BattleInfoOptions
{
    BI_OPTION_SWAP,
    BI_OPTION_SUMMARY,
    BI_OPTION_STATUS,
    BI_OPTION_CANCEL,

    NUM_BI_OPTIONS
};

#define MOVE_BACK       -1
#define MOVE_FORWARD     1

#define TYPE_SLOT_1     0
#define TYPE_SLOT_2     1

#define BI_MON_ICON_X  16 + (TILE_TO_PIXELS(2) - 2)
#define BI_MON_ICON_Y  16 + (3)

#define BI_MON_ICON_X_PAD   (TILE_TO_PIXELS(4) + 4)
#define BI_MON_ICON_Y_PAD   (TILE_TO_PIXELS(4) + 1)

#define BI_HPBAR_X  32 + (3)
#define BI_HPBAR_Y  16 + (TILE_TO_PIXELS(10) - 2)

#define BI_TYPE_1_X 8 + (TILE_TO_PIXELS(8) - 4)
#define BI_TYPE_2_X 8 + (TILE_TO_PIXELS(9))
#define BI_TYPES_Y  8 + (TILE_TO_PIXELS(10) + 2)

#define BI_OPTIONS_CURSOR_X     (TILE_TO_PIXELS(22) + 1)
#define BI_OPTIONS_CURSOR_Y     (TILE_TO_PIXELS(10) + 1)

#define BI_STATUS_CURSOR_X      (TILE_TO_PIXELS(18))
#define BI_STATUS_CURSOR_Y      (TILE_TO_PIXELS(9) - 3)

#define BI_PARTY_VIEW_LEFT_X    8 + (0)
#define BI_PARTY_VIEW_RIGHT_X   8 + (DISPLAY_WIDTH - TILE_TO_PIXELS(2))
#define BI_PARTY_VIEW_Y         8 + (TILE_TO_PIXELS(2))
#define BI_PARTY_VIEW_Y_PAD (TILE_TO_PIXELS(4))

#define BI_PARTY_FREQUENCY  4

#define BI_SPECIES_NAME_X       2
#define BI_SPECIES_NAME_Y       3

#define BI_GENDER_SYMBOL_X      TILE_TO_PIXELS(9) + 2
#define BI_GENDER_SYMBOL_Y      TILE_TO_PIXELS(3) + 4

#define BI_HEADER_TEXT_X        4
#define BI_HEADER_TEXT_Y        TILE_TO_PIXELS(3) + 2
#define BI_HEADER_TEXT_Y_PAD    TILE_TO_PIXELS(2)

#define BI_STD_WIN_PALETTE_OFFSET   BG_PLTT_ID(1)

#define sPartySlotIdx           data[0]

#define sTypeIcon_Type          data[0]
#define sTypeIcon_Index         data[1]

#define sPartyView_SineIdx      data[0]

#define NUM_BI_MON_ICONS        (PARTY_SIZE * 2)

#define MAX_SHOWN_BI_STATUS_ITEMS   5

#define BI_STATUS_LIST_TIMER_LIMIT  120

// normally, return either B_TRAINER_PLAYER or B_TRAINER_OPPONENT_A
// sBattleInfoDataPtr->viewPartnerParty contains a bitfield that uses
// those two constants for shifting (1st bit for player and 2nd for opp)
// so, if sBattleInfoDataPtr->viewPartnerParty & trainer yields anything
// but 0, it'll jump to its partner trainer's constants (B_TRAINER_PARTNER/OPPONENT_B)
// the bitfield is only set if
// 1. inside a battle w/ at least 3 trainers and,
// 2. either the player or the opp has a partner on their side
// so we shouldn't worry to add an edge case here
#define BI_SET_PARTY_VIEW_TRAINER(_t)  (1 << (_t))
#define BI_GET_TRUE_TRAINER(_t)        (_t + (!!(sBattleInfoDataPtr->viewPartnerParty & (_t + 1)) * NUM_BATTLE_SIDES))

struct BattleInfoData
{
    MainCallback savedCB;
    struct UCoords8 gridPos;
    bool8 viewPartnerParty:2; // 1st bit = player 2nd bit = opponent
    u8 pad:4;
    enum BattleInfoModes mode:2;
    u16 textboxTileNum;
    u16 tilemapBuf[BG_SCREEN_SIZE / 2];
    u8 spriteIds[NUM_BI_SPRITES];
    u8 monIconIds[NUM_BI_MON_ICONS];
    u8 faintedIconIds[NUM_BI_MON_ICONS];

    // options prompt
    u8 optionsCursor:4;
    u8 numOptions:4;
    enum BattleInfoOptions optionsList[NUM_BI_OPTIONS];
    u8 switchInResult;

    // status conditions list
    u8 statusCursor;
    u8 topLeftStatus;
    u8 visualStatusCursor:7;
    u8 toggleStatusDesc:1;
    u8 numStatuses;
    u8 statusPagination;
    u8 statusUpdateTimer;
    enum SiliconBattleStatuses *statusList;
};

static EWRAM_DATA struct BattleInfoData *sBattleInfoDataPtr = NULL;
static EWRAM_INIT struct
{
    enum BattleInfoModes mode:4;
    u8 optionsCursor:4;
    struct UCoords8 gridPos;
    MainCallback trueCB;
    u8 partyAction:6;
    u8 partyView:2;
} sBattleInfoSavedState = {
    .gridPos = { 0, 1 },
};

static void CB2_BattleInfoInit(void);
static void CB2_ReloadBattleInfo(void);
static void CB2_BattleInfo(void);
static void VBlankCB_BattleInfo(void);

static void Task_BattleInfo_WaitFade(u8);
static void Task_BattleInfo_WaitInput(u8);
static void Task_BattleInfo_MainModeInput(u8);
static void Task_BattleInfo_OptionsModeInput(u8);
static void Task_BattleInfo_StatusListModeInput(u8);
static void Task_BattleInfo_Close(u8);
static void Task_BattleInfo_WaitTextboxInput(u8);

static void SpriteCB_BattleInfo_MonIcon(struct Sprite *);
static void SpriteCB_BattleInfo_HPBar(struct Sprite *);
static void SpriteCB_BattleInfo_TypeIcon(struct Sprite *);
static void SpriteCB_BattleInfo_Cursor(struct Sprite *);
static void SpriteCB_BattleInfo_OptionsCursor(struct Sprite *);
static void SpriteCB_BattleInfo_StatusCursor(struct Sprite *);
static void SpriteCB_BattleInfo_PartyIndicator(struct Sprite *);

static void BattleInfoInit_Backgrounds(void);
static void BattleInfoInit_Graphics(void);
static void BattleInfoInit_Windows(void);
static void BattleInfoInit_Sprites(void);

static void BattleInfoMode_Set(enum BattleInfoModes);
static void BattleInfoMode_Update(void);

static void BattleInfoInput_UpdateGrid(s32, s32);
static void BattleInfoInput_UpdateXPos(s32);
static void BattleInfoInput_UpdateYPos(s32);
static void BattleInfoInput_UpdateOptionsCursor(s32);
static void BattleInfoInput_UpdateStatusCursor(s32);
static void BattleInfoInput_SetGrid(u32, u32);

static void BattleInfoSprite_CreateMonIcons(void);
static void BattleInfoSprite_RecreateMonIcons(void);
static u8 BattleInfoSprite_CreateMonIcon(enum BattleTrainer, u32, s32, s32);
static u32 BattleInfoSprite_CreateFaintedIcon(enum BattleTrainer, u32, s32, s32);
static void BattleInfoSprite_CreateHPBar(void);
static void BattleInfoSprite_CreateTypeIcons(void);
static void BattleInfoSprite_CreateTypeIcon(enum BattleInfoSprites, enum Type);
static void BattleInfoSprite_CreateCursor(void);
static void BattleInfoSprite_CreateOptionsCursor(void);
static void BattleInfoSprite_CreateStatusCursor(void);
static void BattleInfoSprite_CreatePartyIndicators(void);

static void BattleInfoText_UpdateHeader(void);
static void BattleInfoText_UpdateStatStages(void);
static void BattleInfoText_ShowMonStatusList(void);
static void BattleInfoText_ShowStatusDescription(void);
static void BattleInfoText_ShowOptionsPrompt(void);
static void BattleInfoText_ShowTextbox(u32);
static void BattleInfoText_UpdateFooter(void);

static void BattleInfoHelper_Exit(u8);
static void BattleInfoHelper_UpdateEverything(void);
static struct Pokemon *BattleInfoHelper_GetCurrMon(void);
static struct BattlePokemon *BattleInfoHelper_GetCurrBattleMon(void);
static enum BattlerId BattleInfoHelper_GetCurrBattler(void);
static enum BattleTrainer BattleInfoHelper_GetCurrTrainer(void);
static bool32 BattleInfoHelper_IsTrainerOnPlayerSide(void);
static u32 BattleInfoHelper_GetCombinedCursorValue(void);
static u32 BattleInfoHelper_DoesCurrTrainerHaveAPartner(void);
static u32 BattleInfoHelper_GetCurrPartySlot(void);
static u32 BattleInfoHelper_TrySwitchInMon(void);
static void BattleInfoHelper_SwapPartyMons(struct Pokemon *, struct Pokemon *);
static u32 BattleInfoHelper_SlotToBattlePartyOrder(enum BattlerId battler, u32 slot);
static void BattleInfoHelper_ReorderPartyToInfoLayout(void);
static void BattleInfoHelper_ReorderPartyToBattleLayout(void);
static bool32 BattleInfoHelper_CanMonInfoBeShown(void);
static void BattleInfoHelper_PopulateOptionsList(void);
static void BattleInfoHelper_PopulateStatusList(void);
static u32 BattleInfoHelper_GetTotalCrits(void);
static bool32 BattleInfoHelper_CanShowHP(void);
static void BattleInfoHelper_AddTextPrinterToWindow(u32, u32, u32, u32, enum BattleInfoTextColors, const u8 *);
static void BattleInfoHelper_AddTextPrinter(u32, u32, u32, enum BattleInfoTextColors, const u8 *);

bool8 DoesSelectedMonKnowHM(u8 *slotPtr);

static const u32 sBattleInfo_MainGfx[] = INCGFX_U32("graphics/ui_menus/battle_info/tiles.png", ".4bpp.smol");
static const u16 sBattleInfo_MainPal[] = INCGFX_U16("graphics/ui_menus/battle_info/tiles.png", ".gbapal");
static const u32 sBattleInfo_MainMap[] = INCGFX_U32("graphics/ui_menus/battle_info/main_tilemap.bin", ".smolTM");

static const u8 sBattleInfo_StatStageBlit[] = INCGFX_U8("graphics/ui_menus/battle_info/stat_stage.png", ".4bpp");
static const u8 sBattleInfo_StatusListBlit[] = INCGFX_U8("graphics/ui_menus/battle_info/status_list.png", ".4bpp");
static const u8 sBattleInfo_OptionsPromptBlit[] = INCGFX_U8("graphics/ui_menus/battle_info/options_prompt.png", ".4bpp");

static const struct BgTemplate sBattleInfo_BgTemplates[NUM_BI_BACKGROUNDS] =
{
    [BI_BG_TEXT] =
    {
        .bg = BI_BG_TEXT,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    [BI_BG_TEXT_ALT] =
    {
        .bg = BI_BG_TEXT_ALT,
        .charBaseIndex = 1,
        .mapBaseIndex = 29,
        .priority = 0,
    },
    [BI_BG_MAIN] =
    {
        .bg = BI_BG_MAIN,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .priority = 2,
    },
};

static const struct WindowTemplate sBattleInfo_WindowTemplates[] =
{
    [BI_WIN_MAIN] =
    {
        .tilemapLeft = 0, .tilemapTop = 8,
        .width = DISPLAY_TILE_WIDTH, .height = 12,
    },
    [BI_WIN_STATUS_LIST] =
    {
        .bg = BI_BG_TEXT_ALT,
        .tilemapLeft = 20, .tilemapTop = 8,
        .width = 10, .height = 11
    },
    [BI_WIN_OPTIONS_LIST] =
    {
        .bg = BI_BG_TEXT_ALT,
        .tilemapLeft = 24, .tilemapTop = 10,
        .width = 6, .height = 8,
    },
    [BI_WIN_TEXTBOX] =
    {
        .bg = BI_BG_TEXT_ALT,
        .tilemapLeft = 1, .tilemapTop = 11,
        .width = 18, .height = 6,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct SpriteTemplate sBattleInfo_CursorSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_BI_MAIN,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(32x32),
        .size = SPRITE_SIZE(32x32),
        .priority = 1
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCGFX_U8("graphics/ui_menus/battle_info/cursor.png", ".4bpp"),
        .size = 32 * 32 / 2,
        .relativeFrames = TRUE,
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_JUMP(0)
        },
    },
    .callback = SpriteCB_BattleInfo_Cursor
};

static const struct SpriteTemplate sBattleInfo_FaintedIconSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_BI_MAIN,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(32x32),
        .size = SPRITE_SIZE(32x32),
        .objMode = ST_OAM_OBJ_BLEND,
        .priority = 0
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCGFX_U8("graphics/ui_menus/battle_info/fainted.png", ".4bpp"),
        .size = 32 * 32 / 2,
        .relativeFrames = TRUE,
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_END
        },
    },
};

static const struct OamData sBattleInfo_GenericCursorOamData =
{
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .objMode = ST_OAM_OBJ_BLEND,
    .priority = 1
};

static const union AnimCmd *const sBattleInfo_GenericCursorAnims[] =
{
    (const union AnimCmd[]){
        ANIMCMD_FRAME(0, 16),
        ANIMCMD_FRAME(1, 16),
        ANIMCMD_JUMP(0)
    },
};

static const struct SpriteTemplate sBattleInfo_OptionsCursorSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_BI_MAIN,
    .oam = &sBattleInfo_GenericCursorOamData,
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCGFX_U8("graphics/ui_menus/battle_info/options_cursor.png", ".4bpp", "-mwidth 4 -mheight 2"),
        .size = 64 * 16 / 2,
        .relativeFrames = TRUE,
    },
    .anims = sBattleInfo_GenericCursorAnims,
    .callback = SpriteCB_BattleInfo_OptionsCursor
};

static const struct SpriteTemplate sBattleInfo_StatusCursorSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_BI_MAIN,
    .oam = &sBattleInfo_GenericCursorOamData,
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCGFX_U8("graphics/ui_menus/battle_info/status_cursor.png", ".4bpp", "-mwidth 4 -mheight 2"),
        .size = 96 * 16 / 2,
        .relativeFrames = TRUE,
    },
    .anims = sBattleInfo_GenericCursorAnims,
    .callback = SpriteCB_BattleInfo_StatusCursor
};

static const struct SpriteTemplate sBattleInfo_PartyIndicatorSpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = TAG_BI_MAIN,
    .oam = &(const struct OamData){
        .shape = SPRITE_SHAPE(16x16),
        .size = SPRITE_SIZE(16x16),
        .objMode = ST_OAM_OBJ_BLEND,
    },
    .images = &(const struct SpriteFrameImage){
        .data = (const u8[])INCGFX_U8("graphics/ui_menus/battle_info/party_switch_indicator.png", ".4bpp"),
        .size = 16 * 16 / 2,
        .relativeFrames = TRUE,
    },
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_END,
        },
        (const union AnimCmd[]){
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_END,
        },
    },
    .callback = SpriteCB_BattleInfo_PartyIndicator
};

#define SUBSPRITE_ENTRY(l, t, dim, ...)     { .x = l, .y = t, .shape = SPRITE_SHAPE(dim), .size = SPRITE_SIZE(dim), __VA_ARGS__ }
#define SUBSPRITE_TABLE_ENTRY(idx, entry)   [CAT(BI_SUBSPRITE_, idx)] = { ARRAY_COUNT(entry), entry }

static const struct Subsprite sBattleInfo_OptionsCursorSubsprites[] =
{
    SUBSPRITE_ENTRY(0, 0, 32x16, .tileOffset=0), SUBSPRITE_ENTRY(32, 0, 32x16, .tileOffset=8),
};

static const struct Subsprite sBattleInfo_StatusCursorSubsprites[] =
{
    SUBSPRITE_ENTRY( 0, 0, 32x16, .tileOffset= 0), SUBSPRITE_ENTRY(32, 0, 32x16, .tileOffset= 8),
    SUBSPRITE_ENTRY(64, 0, 32x16, .tileOffset=16), SUBSPRITE_ENTRY(96, 0, 32x16, .tileOffset=24),
};

static const struct SubspriteTable sBattleInfo_SubspritesTable[] =
{
    SUBSPRITE_TABLE_ENTRY(OPTIONS_CURSOR, sBattleInfo_OptionsCursorSubsprites),
    SUBSPRITE_TABLE_ENTRY(STATUS_CURSOR,  sBattleInfo_StatusCursorSubsprites),
};

#undef SUBSPRITE_ENTRY
#undef SUBSPRITE_TABLE_ENTRY

static const union TextColor sBattleInfo_TextColors[NUM_BI_TXTCLRS] =
{
    [BI_TXTCLR_OUTLINED]  = { .foreground = 2, .shadow = 1 },
    [BI_TXTCLR_CONTENT]   = { .foreground = 2, .shadow = 0 },
    [BI_TXTCLR_FOOTER]    = { .foreground = 1, .shadow = 0 },
};

static const u8 *const sBattleInfo_StatNames[] =
{
    [STAT_ATK]      = COMPOUND_STRING("ATK:"),
    [STAT_DEF]      = COMPOUND_STRING("DEF:"),
    [STAT_SPATK]    = COMPOUND_STRING("SPATK:"),
    [STAT_SPDEF]    = COMPOUND_STRING("SPDEF:"),
    [STAT_SPEED]    = COMPOUND_STRING("SPD:"),
    [STAT_ACC]      = COMPOUND_STRING("ACC:"),
    [STAT_EVASION]  = COMPOUND_STRING("EVA:"),
                      COMPOUND_STRING("CRIT:"),
};

static const struct {
    const u8 *helpBarTxt;
    void (*updateFunc)(void);
    TaskFunc inputTask;
} sBattleInfo_ModesInfo[] =
{
    [BI_MODE_MAIN] =
    {
        .helpBarTxt = COMPOUND_STRING("{A_BUTTON} Options {B_BUTTON} Close"),
        .updateFunc = BattleInfoText_ShowMonStatusList,
        .inputTask = Task_BattleInfo_MainModeInput,
    },
    [BI_MODE_OPTIONS_LIST] =
    {
        .helpBarTxt = COMPOUND_STRING("{A_BUTTON} Confirm {B_BUTTON} Return"),
        .updateFunc = BattleInfoText_ShowOptionsPrompt,
        .inputTask = Task_BattleInfo_OptionsModeInput,
    },
    [BI_MODE_STATUS_LIST] =
    {
        .helpBarTxt = COMPOUND_STRING("{A_BUTTON} Summary {DPAD_UPDOWN} Navigate {B_BUTTON} Return"),
        .updateFunc = BattleInfoText_ShowMonStatusList,
        .inputTask = Task_BattleInfo_StatusListModeInput,
    },
};

static const enum Stat sBattleInfo_StatOrder[] =
{
    STAT_ATK,
    STAT_DEF,
    STAT_SPATK,
    STAT_SPDEF,
    STAT_SPEED,
    STAT_ACC,
    STAT_EVASION,
    STAT_EVASION + 1, // STAT_CRIT
};

static const u8 *sBattleInfo_OptionNames[] =
{
    [BI_OPTION_SWAP]     = COMPOUND_STRING("Swap"),
    [BI_OPTION_SUMMARY]  = COMPOUND_STRING("Summary"),
    [BI_OPTION_STATUS]   = COMPOUND_STRING("Status"),
    [BI_OPTION_CANCEL]   = COMPOUND_STRING("Cancel"),
};

extern const u32 sCriticalHitOdds[5];

void BattleInfo_Init(u32 partyAction, MainCallback savedCB)
{
    sBattleInfoSavedState.partyAction = partyAction;
    gPartyMenuUseExitCallback = FALSE;
    sBattleInfoDataPtr = AllocZeroed(sizeof(*sBattleInfoDataPtr));
    assertf(sBattleInfoDataPtr != NULL, "[BATTLE INFO] failed to allocate necessary menu data")
    {
        SetMainCallback2(savedCB);
        return;
    }

    sBattleInfoDataPtr->statusList = AllocZeroed(sizeof(enum SiliconBattleStatuses) * BattleStatusCriteria_GetMaxTotalListItems());
    assertf(sBattleInfoDataPtr->statusList != NULL, "[BATTLE INFO] failed to allocate necessary status list data")
    {
        FREE_AND_SET_NULL(sBattleInfoDataPtr);
        SetMainCallback2(savedCB);
        return;
    }

    sBattleInfoDataPtr->savedCB = savedCB;
    sBattleInfoDataPtr->mode = BI_MODE_MAIN;
    sBattleInfoDataPtr->switchInResult = NO_SWITCH;
    BattleInfoInput_SetGrid(sBattleInfoSavedState.gridPos.x, sBattleInfoSavedState.gridPos.y);
    memset(sBattleInfoDataPtr->spriteIds, SPRITE_NONE, NUM_BI_SPRITES);
    memset(sBattleInfoDataPtr->monIconIds, SPRITE_NONE, NUM_BI_MON_ICONS);
    BattleInfoHelper_ReorderPartyToInfoLayout();

    SetMainCallback2(CB2_BattleInfoInit);
}

void BattleInfo_ResetSavedState(void)
{
    sBattleInfoSavedState.mode = 0;
    sBattleInfoSavedState.optionsCursor = 0;
    sBattleInfoSavedState.gridPos.x = 0;
    sBattleInfoSavedState.gridPos.y = 1;
    sBattleInfoSavedState.trueCB = NULL;
    sBattleInfoSavedState.partyAction = 0;
    sBattleInfoSavedState.partyView = 0;
}

enum BattleTrainer BattleInfo_GetBattleTrainer(void)
{
    enum BattleTrainer currTrainer = B_TRAINER_OPPONENT_A - sBattleInfoSavedState.gridPos.y;
    currTrainer = (currTrainer + (!!(sBattleInfoSavedState.partyView & (currTrainer + 1)) * NUM_BATTLE_SIDES));

    return currTrainer;
}

const u8 *BattleInfo_GetBattleTrainerName(void)
{
    switch (BattleInfo_GetBattleTrainer())
    {
    default:
        return gText_EmptyString3;
    case B_TRAINER_PLAYER:
        return gSaveBlock2Ptr->playerName;
    case B_TRAINER_PARTNER:
        return GetTrainerNameFromId(gPartnerTrainerId);
    case B_TRAINER_OPPONENT_A:
        return GetTrainerNameFromId(TRAINER_BATTLE_PARAM.opponentA);
    case B_TRAINER_OPPONENT_B:
        return GetTrainerNameFromId(TRAINER_BATTLE_PARAM.opponentB);
    }
}

static void CB2_BattleInfoInit(void)
{
    enum
    {
        STATE_RESET,
        STATE_INIT_BG,
        STATE_INIT_GFX,
        STATE_INIT_WIN,
        STATE_INIT_SPRITE,
        STATE_INIT_PALETTES,
    } state = gMain.state;

    switch (state)
    {
    case STATE_RESET:
        FillPalette(RGB_BLACK, 0, PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinates();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        gPaletteFade.bufferTransferDisabled = TRUE;
        FreeAllWindowBuffers();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case STATE_INIT_BG:
        BattleInfoInit_Backgrounds();
        gMain.state++;
        break;
    case STATE_INIT_GFX:
        BattleInfoInit_Graphics();
        gMain.state++;
        break;
    case STATE_INIT_WIN:
        BattleInfoHelper_PopulateStatusList();
        BattleInfoInit_Windows();
        gMain.state++;
        break;
    case STATE_INIT_SPRITE:
        BattleInfoInit_Sprites();
        gMain.state++;
        break;
    case STATE_INIT_PALETTES:
        gPaletteFade.bufferTransferDisabled = FALSE;
        gMain.state++;
        break;
    default:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        u32 taskId = CreateTask(TaskDummy, 0);
        SetTaskFuncWithFollowupFunc(taskId, Task_BattleInfo_WaitFade, Task_BattleInfo_WaitInput);
        SetMainCallback2(CB2_BattleInfo);
        SetVBlankCallback(VBlankCB_BattleInfo);
        return;
    }
}

static void CB2_ReloadBattleInfo(void)
{
    BattleInfoHelper_ReorderPartyToBattleLayout();
    BattleInfo_Init(sBattleInfoSavedState.partyAction, sBattleInfoSavedState.trueCB);
    sBattleInfoDataPtr->mode = sBattleInfoSavedState.mode;

    switch (sBattleInfoDataPtr->mode)
    {
    default:
        break;
    case BI_MODE_OPTIONS_LIST:
        BattleInfoInput_SetGrid(gLastViewedMonIndex, sBattleInfoSavedState.gridPos.y);
        BattleInfoHelper_PopulateOptionsList();
        sBattleInfoDataPtr->optionsCursor = sBattleInfoSavedState.optionsCursor;
        break;
    }
}

static void CB2_BattleInfo(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_BattleInfo(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_BattleInfo_WaitFade(u8 taskId)
{
    if (gPaletteFade.active) return;
    SwitchTaskToFollowupFunc(taskId);
}

static void Task_BattleInfo_WaitInput(u8 taskId)
{
    TaskFunc inputTask = sBattleInfo_ModesInfo[sBattleInfoDataPtr->mode].inputTask;
    if (inputTask != NULL)
        inputTask(taskId);
}

static void Task_BattleInfo_MainModeInput(u8 taskId)
{
    if (++sBattleInfoDataPtr->statusUpdateTimer == BI_STATUS_LIST_TIMER_LIMIT)
    {
        sBattleInfoDataPtr->statusUpdateTimer = 0;
        sBattleInfoDataPtr->statusPagination += MAX_SHOWN_BI_STATUS_ITEMS;
        if (sBattleInfoDataPtr->statusPagination >= sBattleInfoDataPtr->numStatuses)
            sBattleInfoDataPtr->statusPagination = 0;

        BattleInfoMode_Update();
        CopyWindowToVram(BI_WIN_MAIN, COPYWIN_FULL);
        CopyWindowToVram(BI_WIN_STATUS_LIST, COPYWIN_FULL);
    }

    if (JOY_NEW(B_BUTTON))
    {
        switch (sBattleInfoSavedState.partyAction)
        {
        case PARTY_ACTION_SEND_MON_TO_BOX:
            PlaySE(SE_SELECT);
            gSelectedMonPartyId = PARTY_SIZE + 1;
            BattleInfoHelper_Exit(taskId);
            break;
        case PARTY_ACTION_SEND_OUT:
        case PARTY_ACTION_CHOOSE_FAINTED_MON:
            PlaySE(SE_FAILURE);
            break;
        default:
            PlaySE(SE_SELECT);
            BattleInfoHelper_Exit(taskId);
            break;
        }

        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        if (BattleInfoHelper_CanMonInfoBeShown())
        {
            if (sBattleInfoSavedState.partyAction == PARTY_ACTION_SEND_MON_TO_BOX)
            {
                u8 currPartySlot = BattleInfoHelper_GetCurrPartySlot();
                if (DoesSelectedMonKnowHM(&currPartySlot))
                {
                    PlaySE(SE_FAILURE);
                    StringCopy(gStringVar4, COMPOUND_STRING("Cannot send that mon to the box, because it knows a HM move.{PAUSE_UNTIL_PRESS}"));
                    BreakStringAutomatic(gStringVar4, WindowWidthPx(BI_WIN_TEXTBOX), 3, FONT_SMALL, HIDE_SCROLL_PROMPT);
                    BattleInfoText_ShowTextbox(taskId);
                }
                else
                {
                    PlaySE(SE_SELECT);
                    gSelectedMonPartyId = BattleInfoHelper_SlotToBattlePartyOrder(gBattlerInMenuId, currPartySlot);
                    BattleInfoHelper_Exit(taskId);
                }
            }
            else
            {
                PlaySE(SE_SELECT);
                BattleInfoMode_Set(BI_MODE_OPTIONS_LIST);
            }
        }
        else
        {
            PlaySE(SE_FAILURE);
        }

        return;
    }

    if (JOY_REPEAT(DPAD_LEFT))
    {
        BattleInfoInput_UpdateGrid(MOVE_BACK, 0);
        return;
    }

    if (JOY_REPEAT(DPAD_RIGHT))
    {
        BattleInfoInput_UpdateGrid(MOVE_FORWARD, 0);
        return;
    }

    if (JOY_REPEAT(DPAD_UP))
    {
        BattleInfoInput_UpdateGrid(0, MOVE_BACK);
        return;
    }

    if (JOY_REPEAT(DPAD_DOWN))
    {
        BattleInfoInput_UpdateGrid(0, MOVE_FORWARD);
        return;
    }
}

static void Task_BattleInfo_OptionsModeInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BattleInfoMode_Set(BI_MODE_MAIN);
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        switch (sBattleInfoDataPtr->optionsList[sBattleInfoDataPtr->optionsCursor])
        {
        case BI_OPTION_SWAP:
            {
                sBattleInfoDataPtr->switchInResult = BattleInfoHelper_TrySwitchInMon();
                switch (sBattleInfoDataPtr->switchInResult)
                {
                case NO_SWITCH:
                case SAME_SWITCH:
                    PlaySE(SE_FAILURE);
                    BattleInfoText_ShowTextbox(taskId);
                    // fallthrough
                default:
                    return;
                case CAN_SWITCH:
                    PlaySE(SE_SELECT);
                    break;
                }
            }
            // fallthrough
        case BI_OPTION_SUMMARY:
            PlaySE(SE_SELECT);
            BattleInfoHelper_Exit(taskId);
            break;
        case BI_OPTION_STATUS:
            if (BattleInfoHelper_CanMonInfoBeShown()
             && sBattleInfoDataPtr->numStatuses != 0)
            {
                PlaySE(SE_SELECT);
                BattleInfoMode_Set(BI_MODE_STATUS_LIST);
            }
            else
            {
                PlaySE(SE_FAILURE);
            }
            break;
        case BI_OPTION_CANCEL:
            PlaySE(SE_SELECT);
            BattleInfoMode_Set(BI_MODE_MAIN);
            break;
        default:
            break;
        }

        return;
    }

    if (JOY_REPEAT(DPAD_UP))
    {
        BattleInfoInput_UpdateOptionsCursor(MOVE_BACK);
        return;
    }

    if (JOY_REPEAT(DPAD_DOWN))
    {
        BattleInfoInput_UpdateOptionsCursor(MOVE_FORWARD);
        return;
    }
}

static void Task_BattleInfo_StatusListModeInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BattleInfoMode_Set(BI_MODE_OPTIONS_LIST);
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        sBattleInfoDataPtr->toggleStatusDesc ^= 1;
        BattleInfoText_ShowStatusDescription();
        return;
    }

    if (JOY_REPEAT(DPAD_UP))
    {
        BattleInfoInput_UpdateStatusCursor(MOVE_BACK);
        return;
    }

    if (JOY_REPEAT(DPAD_DOWN))
    {
        BattleInfoInput_UpdateStatusCursor(MOVE_FORWARD);
        return;
    }
}

static void Task_BattleInfo_Close(u8 taskId)
{
    u8 *spriteIds = sBattleInfoDataPtr->spriteIds;
    for (enum BattleInfoSprites idx = 0; idx < NUM_BI_SPRITES; idx++)
    {
        if (spriteIds[idx] == SPRITE_NONE) continue;
        struct Sprite *sprite = &gSprites[spriteIds[idx]];
        DestroySprite(sprite);
    }

    spriteIds = sBattleInfoDataPtr->monIconIds;
    for (u32 idx = 0; idx < NUM_BI_MON_ICONS; idx++)
    {
        if (spriteIds[idx] == SPRITE_NONE) continue;
        struct Sprite *sprite = &gSprites[spriteIds[idx]];
        FreeAndDestroyMonIconSprite(sprite);
    }

    spriteIds = sBattleInfoDataPtr->faintedIconIds;
    for (u32 idx = 0; idx < NUM_BI_MON_ICONS; idx++)
    {
        if (spriteIds[idx] == SPRITE_NONE) continue;
        struct Sprite *sprite = &gSprites[spriteIds[idx]];
        DestroySprite(sprite);
    }

    for (enum BattleInfoSpriteTags tag = TAG_BI_START; tag < NUM_BI_TAGS; tag++)
    {
        FreeSpriteTilesByTag(tag);
        FreeSpritePaletteByTag(tag);
    }

    UnsetBgTilemapBuffer(BI_BG_MAIN);

    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();
    FreeMonIconPalettes();
    ResetSpriteData();
    FreeAllWindowBuffers();

    sBattleInfoSavedState.gridPos = sBattleInfoDataPtr->gridPos;
    sBattleInfoSavedState.partyView = sBattleInfoDataPtr->viewPartnerParty;
    BattleInfoHelper_ReorderPartyToBattleLayout();

    if (sBattleInfoDataPtr->mode == BI_MODE_OPTIONS_LIST)
    {
        sBattleInfoSavedState.trueCB = sBattleInfoDataPtr->savedCB;
        sBattleInfoSavedState.mode = sBattleInfoDataPtr->mode;

        switch (sBattleInfoDataPtr->optionsList[sBattleInfoDataPtr->optionsCursor])
        {
        default:
            SetMainCallback2(sBattleInfoDataPtr->savedCB);
            break;
        case BI_OPTION_SUMMARY:
            {
                sBattleInfoSavedState.optionsCursor = sBattleInfoDataPtr->optionsCursor;
                BattleInfoHelper_ReorderPartyToInfoLayout();

                enum BattleTrainer trainer = BattleInfoHelper_GetCurrTrainer();
                struct Pokemon *party = GetTrainerParty(trainer);
                u32 partySlot = BattleInfoHelper_GetCurrPartySlot();

                MonSummary_Init(SUMMARY_MODE_LOCK_MOVES, party, partySlot, gPartiesCount[trainer] - 1, FALSE, CB2_ReloadBattleInfo);
                break;
            }
        }
    }
    else
    {
        SetMainCallback2(sBattleInfoDataPtr->savedCB);
    }

    Free(sBattleInfoDataPtr->statusList);
    FREE_AND_SET_NULL(sBattleInfoDataPtr);
    DestroyTask(taskId);
}

static void Task_BattleInfo_WaitTextboxInput(u8 taskId)
{
    if (!RunTextPrintersRetIsActive(BI_WIN_TEXTBOX))
    {
        switch (sBattleInfoDataPtr->mode)
        {
        case BI_MODE_OPTIONS_LIST:
            if (sBattleInfoDataPtr->switchInResult == SAME_SWITCH)
            {
                switch (sBattleInfoSavedState.partyAction)
                {
                case PARTY_ACTION_SEND_OUT:
                case PARTY_ACTION_CHOOSE_FAINTED_MON:
                    BattleInfoMode_Set(BI_MODE_MAIN);
                    break;
                default:
                    BattleInfoHelper_Exit(taskId);
                    return;
                }
            }
            else // NO_SWITCH
            {
                BattleInfoMode_Set(BI_MODE_MAIN);
            }
            // fallthrough
        default:
            SwitchTaskToFollowupFunc(taskId);
            break;
        }
    }
}

static void SpriteCB_BattleInfo_MonIcon(struct Sprite *sprite)
{
    if (sprite->sPartySlotIdx == BattleInfoHelper_GetCombinedCursorValue())
        UpdateMonIconFrame(sprite);
}

static void SpriteCB_BattleInfo_HPBar(struct Sprite *sprite)
{
    u32 slotIdx = BattleInfoHelper_GetCombinedCursorValue();
    if (slotIdx == sprite->sPartySlotIdx) return;

    sprite->sPartySlotIdx = slotIdx;
    struct Pokemon *mon = BattleInfoHelper_GetCurrMon();
    sprite->invisible = !BattleInfoHelper_CanMonInfoBeShown();
    sprite->data[7] = BattleInfoHelper_CanShowHP();
    MonSummary_InjectHpBar(sprite, GetMonData(mon, MON_DATA_HP, NULL), GetMonData(mon, MON_DATA_MAX_HP, NULL));
    // bullshit workaround bc the injected hp colors keeps showing up
    if (FindTaskIdByFunc(Task_BattleInfo_WaitInput) == TASK_NONE)
        BlendPalettes(1 << (16 + sprite->oam.paletteNum), 16, RGB_BLACK);
}

static void SpriteCB_BattleInfo_TypeIcon(struct Sprite *sprite)
{
    if (sBattleInfoDataPtr->mode != BI_MODE_MAIN
     && sprite->sTypeIcon_Type != -1)
    {
        return;
    }

    struct Pokemon *mon = BattleInfoHelper_GetCurrMon();
    enum Type type = GetSpeciesType(GetMonData(mon, MON_DATA_SPECIES, NULL), sprite->sTypeIcon_Index);

    if (sprite->sTypeIcon_Index == TYPE_SLOT_2)
    {
        sprite->invisible =
            GetSpeciesType(GetMonData(mon, MON_DATA_SPECIES, NULL), sprite->sTypeIcon_Index ^ 1) == type
         || !BattleInfoHelper_CanMonInfoBeShown();
    }
    else
    {
        sprite->invisible = type == TYPE_NONE || !BattleInfoHelper_CanMonInfoBeShown();
    }

    if (type == sprite->sTypeIcon_Type)
        return;

    sprite->oam.paletteNum = IndexOfSpritePaletteTag(MonSummary_GetTypePaletteFromTag(TAG_BI_TYPE_1, type));
    StartSpriteAnimIfDifferent(sprite, type);
    sprite->sTypeIcon_Type = type;
}

static void SpriteCB_BattleInfo_Cursor(struct Sprite *sprite)
{
    sprite->x2 = sBattleInfoDataPtr->gridPos.x * BI_MON_ICON_X_PAD;
    sprite->y2 = sBattleInfoDataPtr->gridPos.y * BI_MON_ICON_Y_PAD;
}

static void SpriteCB_BattleInfo_OptionsCursor(struct Sprite *sprite)
{
    if ((sprite->invisible = sBattleInfoDataPtr->mode != BI_MODE_OPTIONS_LIST))
        return;

    sprite->y2 = sBattleInfoDataPtr->optionsCursor * 16;
    sprite->y2 += (NUM_BI_OPTIONS - sBattleInfoDataPtr->numOptions) * 16;
}

static void SpriteCB_BattleInfo_StatusCursor(struct Sprite *sprite)
{
    if ((sprite->invisible = sBattleInfoDataPtr->mode != BI_MODE_STATUS_LIST))
        return;

    sprite->y2 = sBattleInfoDataPtr->visualStatusCursor * 16;
}

static void SpriteCB_BattleInfo_PartyIndicator(struct Sprite *sprite)
{
    if ((sprite->invisible = sBattleInfoDataPtr->mode != BI_MODE_MAIN))
        return;

    sprite->invisible = !BattleInfoHelper_DoesCurrTrainerHaveAPartner();
    sprite->x2 = gSineTable[(u8)(sprite->sPartyView_SineIdx)] / 128;
    if (sprite->animNum)
        sprite->sPartyView_SineIdx += BI_PARTY_FREQUENCY;
    else
        sprite->sPartyView_SineIdx += -BI_PARTY_FREQUENCY;

    sprite->y2 = sBattleInfoDataPtr->gridPos.y * BI_PARTY_VIEW_Y_PAD;
}

static void BattleInfoInit_Backgrounds(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBattleInfo_BgTemplates, NUM_BI_BACKGROUNDS);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    SetBgTilemapBuffer(BI_BG_MAIN, sBattleInfoDataPtr->tilemapBuf);
    for (enum BattleInfoBackgrounds bg = 0; bg < NUM_BI_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }
}

static void BattleInfoInit_Graphics(void)
{
    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();

    DecompressAndLoadBgGfxUsingHeap(BI_BG_MAIN, sBattleInfo_MainGfx, 0, 0, 0);
    LoadPalette(sBattleInfo_MainPal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    CopyToBgTilemapBuffer(BI_BG_MAIN, sBattleInfo_MainMap, 0, 0);
    CopyBgTilemapBufferToVram(BI_BG_MAIN);

    LoadMonIconPalettes();
    LoadSpritePalettes(
        (const struct SpritePalette[]){
            { gMonSummary_TypeSpritePalettes[0].data, TAG_BI_TYPE_1 },
            { gMonSummary_TypeSpritePalettes[1].data, TAG_BI_TYPE_2 },
            { sBattleInfo_MainPal, TAG_BI_MAIN },
            { NULL },
        });
}

static void BattleInfoInit_Windows(void)
{
    FreeAllWindowBuffers();
    InitWindows(sBattleInfo_WindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(BI_BG_TEXT);
    ScheduleBgCopyTilemapToVram(BI_BG_TEXT_ALT);

    u32 baseBlock = 1;
    for (u32 i = 0; i < NUM_BI_WINDOWS; i++)
    {
        SetWindowAttribute(i, WINDOW_BASE_BLOCK, baseBlock);
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);

        baseBlock += GetWindowAttribute(i, WINDOW_WIDTH) * GetWindowAttribute(i, WINDOW_HEIGHT);
    }

    LoadUserWindowBorderGfx(BI_WIN_TEXTBOX, baseBlock, BI_STD_WIN_PALETTE_OFFSET);
    sBattleInfoDataPtr->textboxTileNum = baseBlock;

    BattleInfoHelper_UpdateEverything();
}

static void BattleInfoInit_Sprites(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_OBJ);
    SetGpuReg(REG_OFFSET_BLDY, 9);

    BattleInfoSprite_CreateMonIcons();
    BattleInfoSprite_CreateHPBar();
    BattleInfoSprite_CreateTypeIcons();
    BattleInfoSprite_CreateCursor();
    BattleInfoSprite_CreateOptionsCursor();
    BattleInfoSprite_CreateStatusCursor();
    BattleInfoSprite_CreatePartyIndicators();
}

static void BattleInfoMode_Set(enum BattleInfoModes mode)
{
    sBattleInfoDataPtr->mode = mode;

    switch (mode)
    {
    case BI_MODE_OPTIONS_LIST:
        sBattleInfoDataPtr->optionsCursor = 0;
        BattleInfoHelper_PopulateOptionsList();
        break;
    case BI_MODE_STATUS_LIST:
        sBattleInfoDataPtr->statusCursor = 0;
        sBattleInfoDataPtr->topLeftStatus = 0;
        sBattleInfoDataPtr->visualStatusCursor = 0;
        sBattleInfoDataPtr->toggleStatusDesc = 0;
        break;
    default:
        break;
    }

    BattleInfoHelper_UpdateEverything();
}

static void BattleInfoMode_Update(void)
{
    void (*updateFunc)(void) = sBattleInfo_ModesInfo[sBattleInfoDataPtr->mode].updateFunc;
    if (updateFunc != NULL)
        updateFunc();
}

static void BattleInfoInput_UpdateGrid(s32 deltaX, s32 deltaY)
{
    u32 currPartyView = sBattleInfoDataPtr->viewPartnerParty;

    BattleInfoInput_UpdateXPos(deltaX);
    BattleInfoInput_UpdateYPos(deltaY);

    if (sBattleInfoDataPtr->viewPartnerParty != currPartyView)
        BattleInfoSprite_RecreateMonIcons();

    PlaySE(SE_SELECT);
    sBattleInfoDataPtr->statusUpdateTimer = 0;
    sBattleInfoDataPtr->statusPagination = 0;
    BattleInfoHelper_PopulateStatusList();
    BattleInfoHelper_UpdateEverything();
}

static void BattleInfoInput_UpdateXPos(s32 delta)
{
    u32 currX = sBattleInfoDataPtr->gridPos.x;
    s32 nextX = currX + delta;
    u32 maxNum = PARTY_SIZE - 1;
    bool32 additive = delta == 1;
    bool32 shouldBleed = FALSE;
    bool32 hasPartner = BattleInfoHelper_DoesCurrTrainerHaveAPartner();

    if (additive && nextX > maxNum)
        nextX = 0, shouldBleed = TRUE;
    else if (!additive && nextX < 0)
        nextX = maxNum, shouldBleed = TRUE;

    if (hasPartner && shouldBleed)
        sBattleInfoDataPtr->viewPartnerParty ^= BI_SET_PARTY_VIEW_TRAINER(B_TRAINER_OPPONENT_A - sBattleInfoDataPtr->gridPos.y);

    sBattleInfoDataPtr->gridPos.x = nextX;
}

static void BattleInfoInput_UpdateYPos(s32 delta)
{
    u32 currY = sBattleInfoDataPtr->gridPos.y;
    s32 nextY = currY + delta;
    u32 maxNum = 1;
    bool32 additive = delta == 1;

    if (additive && nextY > maxNum)
        nextY = 0;
    else if (!additive && nextY < 0)
        nextY = maxNum;

    sBattleInfoDataPtr->gridPos.y = nextY;
}

static void BattleInfoInput_UpdateOptionsCursor(s32 delta)
{
    u32 currPos = sBattleInfoDataPtr->optionsCursor;
    s32 nextPos = currPos + delta;
    u32 maxPos = sBattleInfoDataPtr->numOptions - 1;
    bool32 additive = delta == 1;

    if (additive && nextPos > maxPos)
        nextPos = 0;
    else if (!additive && nextPos < 0)
        nextPos = maxPos;

    if (currPos == nextPos)
        return;

    PlaySE(SE_SELECT);
    sBattleInfoDataPtr->optionsCursor = nextPos;
}

static void BattleInfoInput_UpdateStatusCursor(s32 delta)
{
    u32 currPos = sBattleInfoDataPtr->statusCursor;
    u32 firstPos = sBattleInfoDataPtr->topLeftStatus;
    u32 visualPos = sBattleInfoDataPtr->visualStatusCursor;
    u32 numStatuses = sBattleInfoDataPtr->numStatuses - 1;
    u32 halfScreen = MAX_SHOWN_BI_STATUS_ITEMS / 2;
    u32 finalHalfScreen = numStatuses - halfScreen;
    bool32 scroll = (numStatuses + 1) > MAX_SHOWN_BI_STATUS_ITEMS;
    bool32 additive = delta == 1;

    if (((currPos >= halfScreen && currPos < finalHalfScreen && additive)
        || (currPos > halfScreen && currPos <= finalHalfScreen && !additive))
     && scroll)
    {
        currPos += delta;
        firstPos += delta;
        visualPos = halfScreen;
    }
    else if (currPos >= numStatuses && additive)
    {
        currPos = 0;
        firstPos = 0;
        visualPos = 0;
    }
    else if (!currPos && !additive)
    {
        currPos = numStatuses;

        if (scroll)
            firstPos = currPos - (MAX_SHOWN_BI_STATUS_ITEMS - 1);

        if (numStatuses >= (MAX_SHOWN_BI_STATUS_ITEMS - 1))
            visualPos = MAX_SHOWN_BI_STATUS_ITEMS - 1;
        else
            visualPos = numStatuses;
    }
    else
    {
        currPos += delta;
        visualPos += delta;
    }

    if (currPos == sBattleInfoDataPtr->statusCursor)
    {
        PlaySE(SE_FAILURE);
        return;
    }

    PlaySE(SE_SELECT);

    sBattleInfoDataPtr->topLeftStatus = firstPos;
    sBattleInfoDataPtr->statusCursor = currPos;
    sBattleInfoDataPtr->visualStatusCursor = visualPos;

    BattleInfoMode_Update();
    BattleInfoText_ShowStatusDescription();
}

static void BattleInfoInput_SetGrid(u32 x, u32 y)
{
    sBattleInfoDataPtr->gridPos.x = x;
    sBattleInfoDataPtr->gridPos.y = y;
    sBattleInfoDataPtr->viewPartnerParty = sBattleInfoSavedState.partyView;
}

static void BattleInfoSprite_CreateMonIcons(void)
{
    u8 *spriteIds = sBattleInfoDataPtr->monIconIds;

    for (u32 i = 0, x = BI_MON_ICON_X; i < PARTY_SIZE; i++, x += BI_MON_ICON_X_PAD)
    {
        spriteIds[i] = BattleInfoSprite_CreateMonIcon(
            BI_GET_TRUE_TRAINER(B_TRAINER_PLAYER), i,
            x, BI_MON_ICON_Y + BI_MON_ICON_Y_PAD);
        sBattleInfoDataPtr->faintedIconIds[i] = BattleInfoSprite_CreateFaintedIcon(
            BI_GET_TRUE_TRAINER(B_TRAINER_PLAYER), i,
            x, BI_MON_ICON_Y + BI_MON_ICON_Y_PAD + 2);

        spriteIds[i + PARTY_SIZE] = BattleInfoSprite_CreateMonIcon(
            BI_GET_TRUE_TRAINER(B_TRAINER_OPPONENT_A), i,
            x, BI_MON_ICON_Y);
        sBattleInfoDataPtr->faintedIconIds[i + PARTY_SIZE] = BattleInfoSprite_CreateFaintedIcon(
            BI_GET_TRUE_TRAINER(B_TRAINER_OPPONENT_A), i,
            x, BI_MON_ICON_Y + 2);
    }
}

static void BattleInfoSprite_RecreateMonIcons(void)
{
    for (u32 i = 0, x = BI_MON_ICON_X; i < PARTY_SIZE; i++, x += BI_MON_ICON_X_PAD)
    {
        u8 *spriteIds = sBattleInfoDataPtr->monIconIds;
        bool32 isOnPlayerSide = BattleInfoHelper_IsTrainerOnPlayerSide();
        u32 idx = i + (!isOnPlayerSide * PARTY_SIZE);

        if (spriteIds[idx] != SPRITE_NONE)
        {
            struct Sprite *sprite = &gSprites[spriteIds[idx]];
            FreeAndDestroyMonIconSprite(sprite);
        }

        enum BattleTrainer trainer = BattleInfoHelper_GetCurrTrainer();
        u32 yPos = BI_MON_ICON_Y + (isOnPlayerSide * BI_MON_ICON_Y_PAD);
        spriteIds[idx] = BattleInfoSprite_CreateMonIcon(trainer, i, x, yPos);

        spriteIds = sBattleInfoDataPtr->faintedIconIds;
        if (spriteIds[idx] != SPRITE_NONE)
        {
            struct Sprite *sprite = &gSprites[spriteIds[idx]];
            DestroySprite(sprite);
        }

        spriteIds[idx] = BattleInfoSprite_CreateFaintedIcon(trainer, i, x, yPos + 2);
    }
}

static u8 BattleInfoSprite_CreateMonIcon(enum BattleTrainer trainer, u32 idx, s32 x, s32 y)
{
    enum BattlerId battler = 0;
    for (; battler < gBattlersCount; battler++)
        if (GetBattlerTrainer(battler) == trainer)
            break;

    struct Pokemon *mon = &gParties[trainer][idx];
    enum Species species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    if (!IsOnPlayerSide(battler)
     && !FlagGet(FLAG_SYS_APP_GOOGLE_GLASS_GET)
     && !gBattleStruct->partyState[trainer][idx].sentOut)
    {
        species = SPECIES_NONE;
    }

    u32 spriteId = CreateMonIcon(
        species,
        NULL,
        x, y, 0,
        GetMonData(mon, MON_DATA_PERSONALITY, NULL));

    for (battler = 0; battler < gBattlersCount; battler++)
    {
        if ((IsBattlerAlive(battler)
         && &GetBattlerParty(battler)[idx] == mon
         && BattleInfoHelper_SlotToBattlePartyOrder(battler, idx) == gBattlerPartyIndexes[battler])
         || species == SPECIES_NONE)
        {
            gSprites[spriteId].oam.objMode = ST_OAM_OBJ_BLEND;
            break;
        }
    }

    if (idx < gPartiesCount[trainer])
    {
        if (species != SPECIES_NONE && GetMonData(mon, MON_DATA_HP, NULL) > 0)
        {
            gSprites[spriteId].sPartySlotIdx = idx + (PARTY_SIZE * !(trainer % NUM_BATTLE_SIDES));
            gSprites[spriteId].callback = SpriteCB_BattleInfo_MonIcon;
        }
    }
    else
    {
        gSprites[spriteId].invisible = TRUE;
    }

    return spriteId;
}

static u32 BattleInfoSprite_CreateFaintedIcon(enum BattleTrainer trainer, u32 idx, s32 x, s32 y)
{
    struct Pokemon *mon = &gParties[trainer][idx];

    if (GetMonData(mon, MON_DATA_SPECIES, NULL) == SPECIES_NONE
     || GetMonData(mon, MON_DATA_HP, NULL) != 0)
    {
        return SPRITE_NONE;
    }

    return CreateSprite(&sBattleInfo_FaintedIconSpriteTemplate, x, y, 0);
}

static void BattleInfoSprite_CreateHPBar(void)
{
    u8 *spriteId = &sBattleInfoDataPtr->spriteIds[BI_SPRITE_HPBAR];
    *spriteId = MonSummary_CreateHPBarSprite(TAG_BI_HPBAR, TAG_BI_HPBAR, BI_HPBAR_X, BI_HPBAR_Y, BattleInfoHelper_CanShowHP());
    if (*spriteId == SPRITE_NONE)
        return;

    struct Sprite *sprite = &gSprites[*spriteId];
    sprite->sPartySlotIdx = -1;
    sprite->oam.objMode = ST_OAM_OBJ_BLEND;
    sprite->oam.priority = 1;
    sprite->callback = SpriteCB_BattleInfo_HPBar;
}

static void BattleInfoSprite_CreateTypeIcons(void)
{
    struct Pokemon *mon = BattleInfoHelper_GetCurrMon();
    enum Species species = GetMonData(mon, MON_DATA_SPECIES, NULL);

    BattleInfoSprite_CreateTypeIcon(BI_SPRITE_TYPE_1, GetSpeciesType(species, TYPE_SLOT_1));
    BattleInfoSprite_CreateTypeIcon(BI_SPRITE_TYPE_2, GetSpeciesType(species, TYPE_SLOT_2));
}

static void BattleInfoSprite_CreateTypeIcon(enum BattleInfoSprites id, enum Type type)
{
    u8 *spriteId = &sBattleInfoDataPtr->spriteIds[id];
    *spriteId = MonSummary_Create11x9TypeIcon(TAG_BI_TYPE_1, id == BI_SPRITE_TYPE_2 ? BI_TYPE_2_X : BI_TYPE_1_X, BI_TYPES_Y);
    if (*spriteId == SPRITE_NONE)
        return;

    struct Sprite *sprite = &gSprites[*spriteId];
    sprite->sTypeIcon_Index = id == BI_SPRITE_TYPE_2; // either 0 or 1
    sprite->sTypeIcon_Type = -1;
    sprite->oam.objMode = ST_OAM_OBJ_BLEND;
    sprite->oam.priority = 1;
    sprite->callback = SpriteCB_BattleInfo_TypeIcon;
}

static void BattleInfoSprite_CreateCursor(void)
{
    u8 *spriteId = &sBattleInfoDataPtr->spriteIds[BI_SPRITE_CURSOR];
    *spriteId = CreateSprite(&sBattleInfo_CursorSpriteTemplate, BI_MON_ICON_X, BI_MON_ICON_Y, 128);
    if (*spriteId == SPRITE_NONE)
        return;

    struct Sprite *sprite = &gSprites[*spriteId];
    sprite->oam.objMode = ST_OAM_OBJ_BLEND;
}

static void BattleInfoSprite_CreateOptionsCursor(void)
{
    u8 *spriteId = &sBattleInfoDataPtr->spriteIds[BI_SPRITE_OPTIONS_CURSOR];
    *spriteId = CreateSprite(&sBattleInfo_OptionsCursorSpriteTemplate, BI_OPTIONS_CURSOR_X, BI_OPTIONS_CURSOR_Y, 0);
    if (*spriteId == SPRITE_NONE)
        return;

    struct Sprite *sprite = &gSprites[*spriteId];
    SetSubspriteTables(sprite, &sBattleInfo_SubspritesTable[BI_SUBSPRITE_OPTIONS_CURSOR]);
    sprite->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
}

static void BattleInfoSprite_CreateStatusCursor(void)
{
    u8 *spriteId = &sBattleInfoDataPtr->spriteIds[BI_SPRITE_STATUS_CURSOR];
    *spriteId = CreateSprite(&sBattleInfo_StatusCursorSpriteTemplate, BI_STATUS_CURSOR_X, BI_STATUS_CURSOR_Y, 0);
    if (*spriteId == SPRITE_NONE)
        return;

    struct Sprite *sprite = &gSprites[*spriteId];
    SetSubspriteTables(sprite, &sBattleInfo_SubspritesTable[BI_SUBSPRITE_STATUS_CURSOR]);
    sprite->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
}

static void BattleInfoSprite_CreatePartyIndicators(void)
{
    u8 *spriteId = &sBattleInfoDataPtr->spriteIds[BI_SPRITE_INDICATOR_LEFT];
    struct Sprite *sprite;
    *spriteId = CreateSprite(&sBattleInfo_PartyIndicatorSpriteTemplate, BI_PARTY_VIEW_LEFT_X, BI_PARTY_VIEW_Y, 0);
    if (*spriteId != SPRITE_NONE)
    {
        sprite = &gSprites[*spriteId];
        StartSpriteAnim(sprite, FALSE);
    }

    spriteId++; // BI_DPRITE_INDICATOR_RIGHT's slot
    *spriteId = CreateSprite(&sBattleInfo_PartyIndicatorSpriteTemplate, BI_PARTY_VIEW_RIGHT_X, BI_PARTY_VIEW_Y, 0);
    if (*spriteId != SPRITE_NONE)
    {
        sprite = &gSprites[*spriteId];
        StartSpriteAnim(sprite, TRUE);
    }
}

static const u8 *BattleInfoHelper_GetTrainerName(void)
{
    switch (BattleInfoHelper_GetCurrTrainer())
    {
    default:
        return gText_EmptyString3;
    case B_TRAINER_PLAYER:
        return gSaveBlock2Ptr->playerName;
    case B_TRAINER_PARTNER:
        return GetTrainerNameFromId(gPartnerTrainerId);
    case B_TRAINER_OPPONENT_A:
        return GetTrainerNameFromId(TRAINER_BATTLE_PARAM.opponentA);
    case B_TRAINER_OPPONENT_B:
        return GetTrainerNameFromId(TRAINER_BATTLE_PARAM.opponentB);
    }
}

static void BattleInfoText_UpdateHeader(void)
{
    if (!BattleInfoHelper_CanMonInfoBeShown())
        return;

    struct Pokemon *mon = BattleInfoHelper_GetCurrMon();
    enum Species species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u32 fontId = FONT_SMALL;

    // species
    BattleInfoHelper_AddTextPrinter(
        BI_SPECIES_NAME_X, BI_SPECIES_NAME_Y,
        FONT_OUTLINED,
        BI_TXTCLR_OUTLINED,
        GetSpeciesName(species));

    // gender
    GetMonNickname(mon, gStringVar1);
    u32 gender = GetMonGender(mon);
    if ((species == SPECIES_NIDORAN_F || species == SPECIES_NIDORAN_M)
     && StringCompare(gStringVar1, GetSpeciesName(species)) == 0)
        gender = 100;

    if (GetBattlerSide(BattleInfoHelper_GetCurrBattler()) == B_SIDE_OPPONENT
     && IsGhostBattleWithoutScope())
        gender = 100;

    const u8 *strbuf;
    switch (gender)
    {
    default:
        strbuf = gText_EmptyString3;
        break;
    case MON_MALE:
        strbuf = COMPOUND_STRING("{SHADOW 11}♂");
        break;
    case MON_FEMALE:
        strbuf = COMPOUND_STRING("{SHADOW 4}♀");
        break;
    }

    BattleInfoHelper_AddTextPrinter(BI_GENDER_SYMBOL_X, BI_GENDER_SYMBOL_Y, FONT_OUTLINED, BI_TXTCLR_OUTLINED, strbuf);

    bool32 isOnPlayerSide = BattleInfoHelper_IsTrainerOnPlayerSide();
    u32 y = BI_HEADER_TEXT_Y;

    // trainer owner
    if (isOnPlayerSide
     || (!isOnPlayerSide && (gBattleTypeFlags & BATTLE_TYPE_TRAINER)))
    {
        BattleInfoHelper_AddTextPrinter(
            BI_HEADER_TEXT_X, y,
            fontId,
            BI_TXTCLR_CONTENT,
            BattleInfoHelper_GetTrainerName());
        y += BI_HEADER_TEXT_Y_PAD;
    }

    // do not reveal opponent data w/o google glass
    if (!isOnPlayerSide && (!FlagGet(FLAG_SYS_APP_GOOGLE_GLASS_GET) || !(gBattleTypeFlags & BATTLE_TYPE_TRAINER)))
        return;

    // ability
    enum Ability ability = GetSpeciesAbility(species, GetMonData(mon, MON_DATA_ABILITY_NUM, NULL));
    BattleInfoHelper_AddTextPrinter(
        BI_HEADER_TEXT_X, y,
        fontId,
        BI_TXTCLR_CONTENT,
        GetAbilityName(ability));
    y += BI_HEADER_TEXT_Y_PAD;

    // held item
    enum Item item = GetMonData(mon, MON_DATA_HELD_ITEM, NULL);
    if (item != ITEM_NONE)
        strbuf = GetItemName(item);
    else
        strbuf = COMPOUND_STRING("No Held Item");
    BattleInfoHelper_AddTextPrinter(
        BI_HEADER_TEXT_X, y,
        fontId,
        BI_TXTCLR_CONTENT,
        strbuf);
}

static void BattleInfoText_UpdateStatStages(void)
{
    if (!BattleInfoHelper_CanMonInfoBeShown())
        return;

    for (u32 idx = 0, y = 5; idx < ARRAY_COUNT(sBattleInfo_StatOrder); idx++, y += TILE_TO_PIXELS(1) + 1)
    {
        enum Stat stat = sBattleInfo_StatOrder[idx];

        BattleInfoHelper_AddTextPrinter(
            86, y,
            FONT_OUTLINED,
            BI_TXTCLR_OUTLINED,
            sBattleInfo_StatNames[stat]);

        // don't print anything related to stat changes if the mon is not out
        struct BattlePokemon *batMon = BattleInfoHelper_GetCurrBattleMon();
        u32 statStages, maxStages = DEFAULT_STAT_STAGE;
        if (stat > STAT_EVASION)
            maxStages = ARRAY_COUNT(sCriticalHitOdds) - 1;
        else
            maxStages = DEFAULT_STAT_STAGE;

        if (batMon == NULL)
            statStages = stat > STAT_EVASION ? 0 : DEFAULT_STAT_STAGE;
        else if (batMon != NULL && stat > STAT_EVASION)
            statStages = BattleInfoHelper_GetTotalCrits();
        else
            statStages = batMon->statStages[stat];

        for (u32 stage = 0, x = 117; stage < maxStages; stage++, x += TILE_TO_PIXELS(1) - 1)
        {
            u32 tileNum = 0;
            u32 positiveStages = statStages >= DEFAULT_STAT_STAGE;
            u32 limit = positiveStages ? statStages - DEFAULT_STAT_STAGE : DEFAULT_STAT_STAGE - statStages;

            if (stat > STAT_EVASION && statStages > stage)
            {
                tileNum = TILE_OFFSET_4BPP(1);
            }
            else if (stat <= STAT_EVASION && stage < limit)
            {
                if (positiveStages)
                    tileNum = TILE_OFFSET_4BPP(1);
                else
                    tileNum = TILE_OFFSET_4BPP(2);
            }

            BlitBitmapToWindow(BI_WIN_MAIN, sBattleInfo_StatStageBlit + tileNum, x, y + 5, 8, 8);
        }
    }
}

static void BattleInfoText_ShowMonStatusList(void)
{
    if (!BattleInfoHelper_CanMonInfoBeShown())
        return;

    enum BattleInfoWindows windowId = BI_WIN_MAIN;
    FillWindowPixelRect(windowId,   PIXEL_FILL(0),              TILE_TO_PIXELS(20), TILE_TO_PIXELS(1), TILE_TO_PIXELS(10), TILE_TO_PIXELS(10));
    BlitBitmapToWindow(windowId,    sBattleInfo_StatusListBlit, TILE_TO_PIXELS(20), TILE_TO_PIXELS(1), TILE_TO_PIXELS(10), TILE_TO_PIXELS(10));

    #define STATUS_LIST_MAX_ITEM_WIDTH      TILE_TO_PIXELS(9)
    #define STATUS_LIST_X                   162
    #define STATUS_LIST_Y_POS(pos)          4 + ((pos) * 16)

    if (sBattleInfoDataPtr->numStatuses == 0)
    {
        const u8 *str = COMPOUND_STRING("No Active Status");
        u32 fontId = GetFontIdToFit(str, FONT_OUTLINED, 0, STATUS_LIST_MAX_ITEM_WIDTH);
        u32 x = STATUS_LIST_X + GetStringCenterAlignXOffset(fontId, str, STATUS_LIST_MAX_ITEM_WIDTH);
        BattleInfoHelper_AddTextPrinter(x, STATUS_LIST_Y_POS(MAX_SHOWN_BI_STATUS_ITEMS / 2), fontId, BI_TXTCLR_OUTLINED, str);
        return;
    }

    u32 count = 0;
    if (sBattleInfoDataPtr->mode == BI_MODE_MAIN)
    {
        while ((sBattleInfoDataPtr->statusPagination + count) < sBattleInfoDataPtr->numStatuses
         && count < MAX_SHOWN_BI_STATUS_ITEMS)
        {
            count++;
        }
    }
    else
    {
        count = sBattleInfoDataPtr->numStatuses;
        if (count > MAX_SHOWN_BI_STATUS_ITEMS)
            count = MAX_SHOWN_BI_STATUS_ITEMS;
    }

    windowId = BI_WIN_STATUS_LIST;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(0));

    for (u32 i = 0; i < count; i++)
    {
        u32 idx = i;
        if (sBattleInfoDataPtr->mode == BI_MODE_STATUS_LIST)
            idx += sBattleInfoDataPtr->topLeftStatus;
        else // BI_MODE_MAIN
            idx += sBattleInfoDataPtr->statusPagination;

        enum SiliconBattleStatuses status = sBattleInfoDataPtr->statusList[idx];
        const u8 *str = BattleStatusCriteria_GetFormattedName(BattleInfoHelper_GetCurrBattler(), status);
        u32 fontId = GetFontIdToFit(str, FONT_OUTLINED, 0, STATUS_LIST_MAX_ITEM_WIDTH);
        BattleInfoHelper_AddTextPrinterToWindow(
            windowId,
            2, STATUS_LIST_Y_POS(i),
            fontId,
            BI_TXTCLR_OUTLINED,
            str);
    }

    PutWindowTilemap(windowId);
}

static void BattleInfoText_ShowStatusDescription(void)
{
    if (!sBattleInfoDataPtr->toggleStatusDesc)
    {
        ClearStdWindowAndFrameToTransparent(BI_WIN_TEXTBOX, COPYWIN_FULL);
    }
    else
    {
        StringCopy(gStringVar4, BattleStatusCriteria_GetDescription(sBattleInfoDataPtr->statusList[sBattleInfoDataPtr->statusCursor]));
        BreakStringAutomatic(gStringVar4, WindowWidthPx(BI_WIN_TEXTBOX), 3, FONT_SMALL, HIDE_SCROLL_PROMPT);
        BattleInfoText_ShowTextbox(TASK_NONE);
    }

    CopyWindowToVram(BI_WIN_STATUS_LIST, COPYWIN_FULL);
    CopyWindowToVram(BI_WIN_MAIN, COPYWIN_FULL);
}

static void BattleInfoText_PutOptionPromptTile(u32 tileNum, u32 x, u32 y)
{
    BlitBitmapToWindow(
        BI_WIN_MAIN,
        sBattleInfo_OptionsPromptBlit + TILE_OFFSET_4BPP(tileNum),
        x, y,
        8, 8);
}

static void BattleInfoText_ShowOptionsPrompt(void)
{
    u32 count = sBattleInfoDataPtr->numOptions;
    u32 baseY = (NUM_BI_OPTIONS - count) * 16;

    u32 topTilesY = baseY + 8;
    BattleInfoText_PutOptionPromptTile(0, TILE_TO_PIXELS(22), topTilesY);
    for (u32 i = 0; i < 7; i++)
        BattleInfoText_PutOptionPromptTile(1, TILE_TO_PIXELS(23 + i), topTilesY);

    for (u32 i = 0; i < count; i++)
    {
        u32 middleTilesY = 16 + baseY + i * 16;
        BattleInfoText_PutOptionPromptTile(2, TILE_TO_PIXELS(22), middleTilesY);
        BattleInfoText_PutOptionPromptTile(2, TILE_TO_PIXELS(22), middleTilesY + TILE_TO_PIXELS(1));
        for (u32 i = 0; i < 7; i++)
        {
            BattleInfoText_PutOptionPromptTile(3, TILE_TO_PIXELS(23 + i), middleTilesY);
            BattleInfoText_PutOptionPromptTile(3, TILE_TO_PIXELS(23 + i), middleTilesY + TILE_TO_PIXELS(1));
        }

        u32 baseTextY = baseY + i * 16;
        BattleInfoHelper_AddTextPrinterToWindow(
            BI_WIN_OPTIONS_LIST,
            2, baseTextY,
            FONT_OUTLINED,
            BI_TXTCLR_OUTLINED,
            sBattleInfo_OptionNames[sBattleInfoDataPtr->optionsList[i]]);
    }

    u32 bottomTilesY = 16 + baseY + count * 16;
    BattleInfoText_PutOptionPromptTile(4, TILE_TO_PIXELS(22), bottomTilesY);
    for (u32 i = 0; i < 7; i++)
        BattleInfoText_PutOptionPromptTile(5, TILE_TO_PIXELS(23 + i), bottomTilesY);

    PutWindowTilemap(BI_WIN_OPTIONS_LIST);
}

static void BattleInfoText_ShowTextbox(u32 taskId)
{
    enum BattleInfoWindows win = BI_WIN_TEXTBOX;

    DrawStdFrameWithCustomTileAndPalette(win, FALSE, sBattleInfoDataPtr->textboxTileNum, BI_STD_WIN_PALETTE_OFFSET);
    // typically i'd use TEXT_SKIP_DRAW here but for some ???? reason it keeps playing SE_SELECT when printed
    // this does NOT happen when using a proper text speed. it's so bizzare
    u32 speedDelay = GetPlayerTextSpeedDelay();
    if (taskId == TASK_NONE)
        speedDelay = TEXT_SKIP_DRAW;

    const union TextColor *ptr = &sBattleInfo_TextColors[BI_TXTCLR_CONTENT];
    const u8 colors[3] = { ptr->background, ptr->foreground, ptr->shadow };
    AddTextPrinterParameterized3(win, FONT_SMALL, 0, 0, colors, speedDelay, gStringVar4);
    CopyWindowToVram(win, COPYWIN_FULL);

    if (taskId != TASK_NONE)
        SetTaskFuncWithFollowupFunc(taskId, Task_BattleInfo_WaitTextboxInput, Task_BattleInfo_WaitInput);
}

static void BattleInfoText_UpdateFooter(void)
{
    const u8 *str = sBattleInfo_ModesInfo[sBattleInfoDataPtr->mode].helpBarTxt;

    switch (sBattleInfoSavedState.partyAction)
    {
    case PARTY_ACTION_CHOOSE_FAINTED_MON:
    case PARTY_ACTION_SEND_OUT:
        if (sBattleInfoDataPtr->mode == BI_MODE_MAIN)
            str = COMPOUND_STRING("{A_BUTTON} Options");
        break;
    case PARTY_ACTION_SEND_MON_TO_BOX:
        str = COMPOUND_STRING("{A_BUTTON} Send to Box {B_BUTTON} Cancel");
        break;
    default:
        break;
    }

    BattleInfoHelper_AddTextPrinter(4, 81, FONT_SMALL, BI_TXTCLR_FOOTER, str);
}

static void BattleInfoHelper_Exit(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    SetTaskFuncWithFollowupFunc(taskId, Task_BattleInfo_WaitFade, Task_BattleInfo_Close);
}

static void BattleInfoHelper_UpdateEverything(void)
{
    ClearStdWindowAndFrameToTransparent(BI_WIN_TEXTBOX, FALSE);
    for (enum BattleInfoWindows win = 0; win < NUM_BI_WINDOWS; win++)
        FillWindowPixelBuffer(win, PIXEL_FILL(0));

    BattleInfoText_UpdateHeader();
    BattleInfoText_UpdateStatStages();
    BattleInfoText_UpdateFooter();

    PutWindowTilemap(BI_WIN_TEXTBOX);
    PutWindowTilemap(BI_WIN_MAIN);

    BattleInfoMode_Update();
    for (enum BattleInfoWindows win = 0; win < NUM_BI_WINDOWS; win++)
        CopyWindowToVram(win, COPYWIN_FULL);
}

static struct Pokemon *BattleInfoHelper_GetCurrMon(void)
{
    return &gParties[BattleInfoHelper_GetCurrTrainer()][BattleInfoHelper_GetCurrPartySlot()];
}

static struct BattlePokemon *BattleInfoHelper_GetCurrBattleMon(void)
{
    enum BattlerId battler = BattleInfoHelper_GetCurrBattler();
    if (battler == MAX_BATTLERS_COUNT)
        return NULL;
    else
        return &gBattleMons[battler];
}

static enum BattlerId BattleInfoHelper_GetCurrBattler(void)
{
    bool32 isOpponent = !BattleInfoHelper_IsTrainerOnPlayerSide();
    u32 partySlot = BattleInfoHelper_GetCurrPartySlot();

    for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
    {
        if (!IsBattlerAlive(battler))
            continue;

        if (BattleInfoHelper_SlotToBattlePartyOrder(battler, partySlot) != gBattlerPartyIndexes[battler])
            continue;

        if ((isOpponent && !IsOnPlayerSide(battler))
         || (!isOpponent && IsOnPlayerSide(battler)))
        {
            return battler;
        }
    }

    return MAX_BATTLERS_COUNT;
}

static enum BattleTrainer BattleInfoHelper_GetCurrTrainer(void)
{
    return BI_GET_TRUE_TRAINER(B_TRAINER_OPPONENT_A - sBattleInfoDataPtr->gridPos.y);
}

static bool32 BattleInfoHelper_IsTrainerOnPlayerSide(void)
{
    return (BattleInfoHelper_GetCurrTrainer() % NUM_BATTLE_SIDES) == B_SIDE_PLAYER;
}

static u32 BattleInfoHelper_GetCombinedCursorValue(void)
{
    return sBattleInfoDataPtr->gridPos.x + (sBattleInfoDataPtr->gridPos.y * PARTY_SIZE);
}

static u32 BattleInfoHelper_DoesCurrTrainerHaveAPartner(void)
{
    enum BattleTrainer currTrainer = BattleInfoHelper_GetCurrTrainer();
    for (enum BattleTrainer trainer = 0; trainer < MAX_BATTLE_TRAINERS; trainer++)
        if (trainer == (currTrainer ^ BIT_FLANK) && trainer != currTrainer) // is unique ...
            for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
                if (GetBattlerTrainer(battler) == trainer) // but is it a real trainer?
                    return TRUE;

    return FALSE;
}

static u32 BattleInfoHelper_GetCurrPartySlot(void)
{
    return sBattleInfoDataPtr->gridPos.x;
}

static u32 BattleInfoHelper_TrySwitchInMon(void)
{
    struct Pokemon *party = gParties[B_TRAINER_PLAYER];
    u32 newPartySlot = BattleInfoHelper_GetCurrPartySlot();
    u32 battlePartyId = BattleInfoHelper_SlotToBattlePartyOrder(gBattlerInMenuId, newPartySlot);

    if (GetMonData(&party[newPartySlot], MON_DATA_HP) == 0)
    {
        GetMonNickname(&party[newPartySlot], gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnHasNoEnergy);
        return NO_SWITCH;
    }

    for (enum BattlerId i = 0; i < gBattlersCount; i++)
    {
        if (IsOnPlayerSide(i)
         && GetBattlerParty(i) == party
         && battlePartyId == gBattlerPartyIndexes[i])
        {
            GetMonNickname(&party[newPartySlot], gStringVar1);
            StringExpandPlaceholders(gStringVar4, gText_PkmnAlreadyInBattle);
            return SAME_SWITCH;
        }
    }

    if (GetMonData(&party[newPartySlot], MON_DATA_IS_EGG))
    {
        StringExpandPlaceholders(gStringVar4, gText_EggCantBattle);
        return NO_SWITCH;
    }

    if (battlePartyId == gBattleStruct->prevSelectedPartySlot)
    {
        GetMonNickname(&party[newPartySlot], gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnAlreadySelected);
        return NO_SWITCH;
    }

    switch (gPartyMenu.action)
    {
    case PARTY_ACTION_ABILITY_PREVENTS:
        SetMonPreventsSwitchingString();
        return NO_SWITCH;
    case PARTY_ACTION_CANT_SWITCH:
        GetMonNickname(&party[newPartySlot], gStringVar1);
        StringExpandPlaceholders(gStringVar4, gText_PkmnCantSwitchOut);
        return NO_SWITCH;
    default:
        break;
    }

    gSelectedMonPartyId = battlePartyId;
    gPartyMenuUseExitCallback = TRUE;

    u32 currBattlerPartySlot = GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[gBattlerInMenuId]);
    SwitchPartyMonSlots(currBattlerPartySlot, newPartySlot);
    BattleInfoHelper_SwapPartyMons(&party[currBattlerPartySlot], &party[newPartySlot]);

    return CAN_SWITCH;
}

static void BattleInfoHelper_SwapPartyMons(struct Pokemon *currMon, struct Pokemon *nextMon)
{
    struct Pokemon *temp = Alloc(sizeof(struct Pokemon));

    *temp = *currMon;
    *currMon = *nextMon;
    *nextMon = *temp;

    Free(temp);
}

static u32 BattleInfoHelper_SlotToBattlePartyOrder(enum BattlerId battler, u32 slot)
{
    bool32 oddNumber = slot & 1;
    slot /= 2;

    u8 *order;
    if (GetBattlerTrainer(battler) == B_TRAINER_PLAYER)
        order = gBattlePartyCurrentOrder;
    else
        order = gBattleStruct->battlerPartyOrders[battler];

    if (oddNumber)
        return order[slot] & 0xF;
    else
        return order[slot] >> 4;
}

static void BattleInfoHelper_ReorderPartyToInfoLayout(void)
{
    struct Pokemon *partyBuffer = Alloc(sizeof(gParties[B_TRAINER_PLAYER]));
    u8 flag = 0;

    for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
    {
        enum BattleTrainer trainer = GetBattlerTrainer(battler);
        if (flag & (1 << trainer))
            continue;

        flag |= 1 << trainer;
        struct Pokemon *partyTarget = gParties[trainer];

        for (u32 i = 0; i < PARTY_SIZE; i++)
            memcpy(&partyBuffer[i], &partyTarget[BattleInfoHelper_SlotToBattlePartyOrder(battler, i)], sizeof(struct Pokemon));

        for (u32 i = 0; i < PARTY_SIZE; i++)
            memcpy(&partyTarget[i], &partyBuffer[i], sizeof(struct Pokemon));

        CalculatePartyCount(trainer);
    }

    Free(partyBuffer);
}

static void BattleInfoHelper_ReorderPartyToBattleLayout(void)
{
    struct Pokemon *partyBuffer = Alloc(sizeof(gParties[B_TRAINER_PLAYER]));
    u8 flag = 0;

    for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
    {
        enum BattleTrainer trainer = GetBattlerTrainer(battler);
        if (flag & (1 << trainer))
            continue;

        flag |= 1 << trainer;
        struct Pokemon *partyTarget = gParties[trainer];

        for (u32 i = 0; i < PARTY_SIZE; i++)
            memcpy(&partyBuffer[i], &partyTarget[i], sizeof(struct Pokemon));

        for (u32 i = 0; i < PARTY_SIZE; i++)
            memcpy(&partyTarget[BattleInfoHelper_SlotToBattlePartyOrder(battler, i)], &partyBuffer[i], sizeof(struct Pokemon));

        CalculatePartyCount(trainer);
    }

    Free(partyBuffer);
}

static bool32 BattleInfoHelper_CanMonInfoBeShown(void)
{
    struct Pokemon *mon = BattleInfoHelper_GetCurrMon();
    if (GetMonData(mon, MON_DATA_MAX_HP, NULL) == 0
     || GetMonData(mon, MON_DATA_SPECIES, NULL) == 0)
    {
        return FALSE;
    }

    if (BattleInfoHelper_IsTrainerOnPlayerSide() || FlagGet(FLAG_SYS_APP_GOOGLE_GLASS_GET))
        return TRUE;

    enum BattlerId battler = BattleInfoHelper_GetCurrBattler();
    u32 infoPartySlot = BattleInfoHelper_GetCurrPartySlot();
    if (battler != MAX_BATTLERS_COUNT)
        infoPartySlot = BattleInfoHelper_SlotToBattlePartyOrder(battler, infoPartySlot);

    enum BattleTrainer trainer = BattleInfoHelper_GetCurrTrainer();
    return gBattleStruct->partyState[trainer][infoPartySlot].sentOut;
}

static void BattleInfoHelper_PopulateOptionsList(void)
{
    bool32 isOnPlayerSide = BattleInfoHelper_IsTrainerOnPlayerSide();

    sBattleInfoDataPtr->numOptions = 0;
    #define ADD_OPT(num) sBattleInfoDataPtr->optionsList[sBattleInfoDataPtr->numOptions++] = CAT(BI_OPTION_, num);
    if (BattleInfoHelper_GetCurrTrainer() == B_TRAINER_PLAYER)
        ADD_OPT(SWAP);

    if ((!isOnPlayerSide
         && FlagGet(FLAG_SYS_APP_GOOGLE_GLASS_GET)
         && (gBattleTypeFlags & BATTLE_TYPE_TRAINER))
     || isOnPlayerSide)
    {
        ADD_OPT(SUMMARY);
    }

    ADD_OPT(STATUS);
    ADD_OPT(CANCEL);

    #undef ADD_OPT
}

static void BattleInfoHelper_PopulateStatusList(void)
{
    enum BattlerId battler = BattleInfoHelper_GetCurrBattler();
    enum SiliconBattleStatuses *list = sBattleInfoDataPtr->statusList;
    sBattleInfoDataPtr->numStatuses = BattleStatusCriteria_CompileListForBattler(battler, list);
    if (sBattleInfoDataPtr->numStatuses != 0)
        return;

    // try get status1 for benched mon
    u32 status1 = GetMonData(BattleInfoHelper_GetCurrMon(), MON_DATA_STATUS);
    if (status1 & STATUS1_SLEEP)
        list[0] = BATTLE_STATUS_ASLEEP;
    else if (status1 & STATUS1_PSN_ANY)
        list[0] = BATTLE_STATUS_POISONED;
    else if (status1 & STATUS1_BURN)
        list[0] = BATTLE_STATUS_BURN;
    else if (status1 & STATUS1_FREEZE)
        list[0] = BATTLE_STATUS_FREEZE;
    else if (status1 & STATUS1_PARALYSIS)
        list[0] = BATTLE_STATUS_PARALYZED;
    else
        return;

    sBattleInfoDataPtr->numStatuses = 1;
}

static u32 BattleInfoHelper_GetTotalCrits(void)
{
    struct BattlePokemon *batMon = BattleInfoHelper_GetCurrBattleMon();

    if (batMon == NULL)
        return 0;
    else if (batMon->volatiles.laserFocusTimer)
        return ARRAY_COUNT(sCriticalHitOdds) - 1;

    enum BattlerId battler = BattleInfoHelper_GetCurrBattler();
    u32 CalcBattlerPassiveCritChance(enum BattlerId battler, enum HoldEffect holdEffect, enum Ability ability);

    return CalcBattlerPassiveCritChance(battler, GetItemHoldEffect(batMon->item), batMon->ability);
}

// CanShowMon has other checks we don't want (mainly the sentOut bit)
static bool32 BattleInfoHelper_CanShowHP(void)
{
    return !BattleInfoHelper_IsTrainerOnPlayerSide() && !FlagGet(FLAG_SYS_APP_GOOGLE_GLASS_GET);
}

static void BattleInfoHelper_AddTextPrinterToWindow(u32 windowId, u32 x, u32 y, u32 fontId, enum BattleInfoTextColors color, const u8 *str)
{
    const union TextColor *ptr = &sBattleInfo_TextColors[color];
    const u8 colors[3] = { ptr->background, ptr->foreground, ptr->shadow };
    AddTextPrinterParameterized3(windowId, fontId, x, y, colors, TEXT_SKIP_DRAW, str);
}

static void BattleInfoHelper_AddTextPrinter(u32 x, u32 y, u32 fontId, enum BattleInfoTextColors color, const u8 *str)
{
    BattleInfoHelper_AddTextPrinterToWindow(BI_WIN_MAIN, x, y, fontId, color, str);
}
