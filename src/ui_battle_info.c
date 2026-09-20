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
#include "main.h"
#include "malloc.h"
#include "task.h"
#include "menu.h"
#include "menu_helpers.h"
#include "item.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "event_data.h"
#include "battle.h"
#include "party_menu.h"
#include "battle_controllers.h"
#include "ui_mon_summary.h"
#include "ui_battle_info.h"
#include "constants/rgb.h"
#include "constants/songs.h"

enum BattleInfoBackgrounds
{
    BI_BG_TEXT,
    BI_BG_MAIN,

    NUM_BI_BACKGROUNDS
};

enum BattleInfoSprites
{
    BI_SPRITE_HPBAR,
    BI_SPRITE_TYPE_1,
    BI_SPRITE_TYPE_2,
    BI_SPRITE_CURSOR,

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

#define BI_TYPE_1_X 8 + (60)
#define BI_TYPE_2_X 8 + (72)
#define BI_TYPES_Y  8 + (82)

#define sPartySlotIdx           data[0]

#define sTypeIcon_Type          data[0]
#define sTypeIcon_Index         data[1]

#define NUM_BI_MON_ICONS        (PARTY_SIZE * 2)

struct BattleInfoData
{
    MainCallback savedCB;
    struct UCoords8 gridPos;
    u8 currPartySlot:6;
    enum BattleInfoModes mode:2;
    u16 tilemapBuf[BG_SCREEN_SIZE / 2];
    u8 spriteIds[NUM_BI_SPRITES];
    u8 monIconIds[NUM_BI_MON_ICONS];
    u8 faintedIconIds[NUM_BI_MON_ICONS];
    struct SpriteFrameImage iconPic;
};

static EWRAM_DATA struct BattleInfoData *sBattleInfoDataPtr = NULL;

static void CB2_BattleInfoInit(void);
static void CB2_BattleInfo(void);
static void VBlankCB_BattleInfo(void);

static void Task_BattleInfo_WaitFade(u8);
static void Task_BattleInfo_WaitInput(u8);
static void Task_BattleInfo_MainModeInput(u8);
static void Task_BattleInfo_Close(u8);

static void SpriteCB_BattleInfo_MonIcon(struct Sprite *);
static void SpriteCB_BattleInfo_HPBar(struct Sprite *);
static void SpriteCB_BattleInfo_TypeIcon(struct Sprite *);
static void SpriteCB_BattleInfo_Cursor(struct Sprite *);

static void BattleInfoInit_Backgrounds(void);
static void BattleInfoInit_Graphics(void);
static void BattleInfoInit_Windows(void);
static void BattleInfoInit_Sprites(void);

static void BattleInfoMode_Set(enum BattleInfoModes);
static void BattleInfoMode_Update(void);

static void BattleInfoInput_UpdateGrid(s32, s32);
static void BattleInfoInput_UpdateXPos(s32);
static void BattleInfoInput_UpdateYPos(s32);

static void BattleInfoSprite_CreateMonIcons(void);
static u8 BattleInfoSprite_CreateMonIcon(enum BattleTrainer, u32, s32, s32);
static u32 BattleInfoSprite_CreateFaintedIcon(enum BattleTrainer, u32, s32, s32);
static void BattleInfoSprite_CreateHPBar(void);
static void BattleInfoSprite_CreateTypeIcons(void);
static void BattleInfoSprite_CreateTypeIcon(enum BattleInfoSprites, enum Type);
static void BattleInfoSprite_CreateCursor(void);

static void BattleInfoText_UpdateHeader(void);
static void BattleInfoText_UpdateStatStages(void);
static void BattleInfoText_UpdateStatusList(void);
static void BattleInfoText_UpdateFooter(void);

static void BattleInfoHelper_UpdateEverything(void);
static struct Pokemon *BattleInfoHelper_GetCurrMon(void);
static struct BattlePokemon *BattleInfoHelper_GetCurrBattleMon(void);
static enum BattlerId BattleInfoHelper_GetCurrBattler(void);
static enum BattleTrainer BattleInfoHelper_GetCurrTrainer(void);
static u32 BattleInfoHelper_GetCurrPartySlot(void);
static bool32 BattleInfoHelper_CanMonInfoBeShown(void);
static u32 BattleInfoHelper_GetVolatileMaxValue(enum Volatile);
static u32 BattleInfoHelper_GetTotalCrits(void);
static void BattleInfoHelper_AddTextPrinter(u32, u32, u32, enum BattleInfoTextColors, const u8 *);

static const u32 sBattleInfo_MainGfx[] = INCGFX_U32("graphics/ui_menus/battle_info/tiles.png", ".4bpp.smol");
static const u16 sBattleInfo_MainPal[] = INCGFX_U16("graphics/ui_menus/battle_info/tiles.png", ".gbapal");
static const u32 sBattleInfo_MainMap[] = INCGFX_U32("graphics/ui_menus/battle_info/main_tilemap.bin", ".smolTM");

static const u8 sBattleInfo_StatStageBlit[] = INCGFX_U8("graphics/ui_menus/battle_info/stat_stage.png", ".4bpp");
static const u8 sBattleInfo_StatusListBlit[] = INCGFX_U8("graphics/ui_menus/battle_info/status_list.png", ".4bpp");

static const struct BgTemplate sBattleInfo_BgTemplates[NUM_BI_BACKGROUNDS] =
{
    [BI_BG_TEXT] =
    {
        .bg = BI_BG_TEXT,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 0,
    },
    [BI_BG_MAIN] =
    {
        .bg = BI_BG_MAIN,
        .charBaseIndex = 0,
        .mapBaseIndex = 29,
        .priority = 1,
    },
};

static const struct WindowTemplate sBattleInfo_WindowTemplates[] =
{
    {
        .tilemapLeft = 0, .tilemapTop = 8,
        .width = DISPLAY_TILE_WIDTH, .height = 12,
        .baseBlock = 1
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
        .updateFunc = BattleInfoText_UpdateStatusList,
        .inputTask = Task_BattleInfo_MainModeInput,
    },
    [BI_MODE_OPTIONS_LIST] =
    {
        .helpBarTxt = COMPOUND_STRING("{A_BUTTON} Confirm {B_BUTTON} Return"),
    },
    [BI_MODE_STATUS_LIST] =
    {
        .helpBarTxt = COMPOUND_STRING("{A_BUTTON} Summary {DPAD_UPDOWN} Navigate {B_BUTTON} Return"),
        .updateFunc = BattleInfoText_UpdateStatusList,
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

extern const u32 sCriticalHitOdds[5];

void OpenBattleInfo(MainCallback savedCB)
{
    sBattleInfoDataPtr = AllocZeroed(sizeof(*sBattleInfoDataPtr));
    assertf(sBattleInfoDataPtr != NULL, "[BATTLE INFO] failed to allocate necessary menu data")
    {
        SetMainCallback2(savedCB);
        return;
    }

    sBattleInfoDataPtr->savedCB = savedCB;
    sBattleInfoDataPtr->mode = BI_MODE_MAIN;
    memset(sBattleInfoDataPtr->spriteIds, SPRITE_NONE, NUM_BI_SPRITES);
    memset(sBattleInfoDataPtr->monIconIds, SPRITE_NONE, NUM_BI_MON_ICONS);

    SetMainCallback2(CB2_BattleInfoInit);
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
        PlaySE(SE_RG_HELP_OPEN);
        u32 taskId = CreateTask(TaskDummy, 0);
        SetTaskFuncWithFollowupFunc(taskId, Task_BattleInfo_WaitFade, Task_BattleInfo_WaitInput);
        SetMainCallback2(CB2_BattleInfo);
        SetVBlankCallback(VBlankCB_BattleInfo);
        return;
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
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_RG_HELP_CLOSE);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        SetTaskFuncWithFollowupFunc(taskId, Task_BattleInfo_WaitFade, Task_BattleInfo_Close);
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        BattleInfoMode_Set(BI_MODE_OPTIONS_LIST);
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

static void Task_BattleInfo_Close(u8 taskId)
{
    RemoveWindow(0);

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

    SetMainCallback2(sBattleInfoDataPtr->savedCB);
    UnsetBgTilemapBuffer(BI_BG_MAIN);

    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();
    FreeMonIconPalettes();
    ResetSpriteData();
    FreeAllWindowBuffers();

    FREE_AND_SET_NULL(sBattleInfoDataPtr);
    DestroyTask(taskId);
}

static void SpriteCB_BattleInfo_MonIcon(struct Sprite *sprite)
{
    if (sprite->sPartySlotIdx == sBattleInfoDataPtr->currPartySlot)
        UpdateMonIconFrame(sprite);
}

static void SpriteCB_BattleInfo_HPBar(struct Sprite *sprite)
{
    u32 slotIdx = sBattleInfoDataPtr->currPartySlot;
    if (slotIdx == sprite->sPartySlotIdx) return;

    sprite->sPartySlotIdx = slotIdx;
    struct Pokemon *mon = BattleInfoHelper_GetCurrMon();
    sprite->invisible = !BattleInfoHelper_CanMonInfoBeShown();
    MonSummary_InjectHpBar(sprite, GetMonData(mon, MON_DATA_HP, NULL), GetMonData(mon, MON_DATA_MAX_HP, NULL));
    // bullshit workaround bc the injected hp colors keeps showing up
    if (FindTaskIdByFunc(Task_BattleInfo_WaitInput) == TASK_NONE)
        BlendPalettes(1 << (16 + sprite->oam.paletteNum), 16, RGB_BLACK);
}

static void SpriteCB_BattleInfo_TypeIcon(struct Sprite *sprite)
{
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
        sprite->invisible = !BattleInfoHelper_CanMonInfoBeShown();
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

    FillWindowPixelBuffer(0, PIXEL_FILL(0));
    BattleInfoText_UpdateHeader();
    BattleInfoText_UpdateStatStages();
    BattleInfoText_UpdateFooter();
    BattleInfoMode_Update();
    PutWindowTilemap(0);
    CopyWindowToVram(0, COPYWIN_FULL);
}

static void BattleInfoInit_Sprites(void)
{
    BattleInfoSprite_CreateMonIcons();
    BattleInfoSprite_CreateHPBar();
    BattleInfoSprite_CreateTypeIcons();
    BattleInfoSprite_CreateCursor();
}

static void BattleInfoMode_Set(enum BattleInfoModes mode)
{
    PlaySE(SE_SELECT);
    sBattleInfoDataPtr->mode = mode;
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
    u32 currPartySlot = sBattleInfoDataPtr->currPartySlot;

    BattleInfoInput_UpdateXPos(deltaX);
    BattleInfoInput_UpdateYPos(deltaY);

    u32 nextPartySlot = sBattleInfoDataPtr->gridPos.x + (sBattleInfoDataPtr->gridPos.y * PARTY_SIZE);

    if (nextPartySlot == currPartySlot)
        return;

    PlaySE(SE_SELECT);
    sBattleInfoDataPtr->currPartySlot = nextPartySlot;
    BattleInfoHelper_UpdateEverything();
}

static void BattleInfoInput_UpdateXPos(s32 delta)
{
    u32 currX = sBattleInfoDataPtr->gridPos.x;
    s32 nextX = currX + delta;
    u32 maxNum = PARTY_SIZE - 1;
    bool32 additive = delta == 1;

    if (additive && nextX > maxNum)
        nextX = 0;
    else if (!additive && nextX < 0)
        nextX = maxNum;

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

static void BattleInfoSprite_CreateMonIcons(void)
{
    u8 *spriteIds = sBattleInfoDataPtr->monIconIds;

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_OBJ);
    SetGpuReg(REG_OFFSET_BLDY, 9);

    for (u32 i = 0, x = BI_MON_ICON_X; i < PARTY_SIZE; i++, x += BI_MON_ICON_X_PAD)
    {
        spriteIds[i] = BattleInfoSprite_CreateMonIcon(B_TRAINER_PLAYER, i, x, BI_MON_ICON_Y + BI_MON_ICON_Y_PAD);
        sBattleInfoDataPtr->faintedIconIds[i] = BattleInfoSprite_CreateFaintedIcon(B_TRAINER_PLAYER, i, x, BI_MON_ICON_Y + BI_MON_ICON_Y_PAD + 2);

        spriteIds[i + PARTY_SIZE] = BattleInfoSprite_CreateMonIcon(B_TRAINER_OPPONENT_A, i, x, BI_MON_ICON_Y);
        sBattleInfoDataPtr->faintedIconIds[i + PARTY_SIZE] = BattleInfoSprite_CreateFaintedIcon(B_TRAINER_OPPONENT_A, i, x, BI_MON_ICON_Y + 2);
    }
}

static u8 BattleInfoSprite_CreateMonIcon(enum BattleTrainer trainer, u32 idx, s32 x, s32 y)
{
    enum BattlerId battler = 0;
    for (; battler < MAX_BATTLERS_COUNT; battler++)
        if (GetBattlerTrainer(battler) == trainer)
            break;

    struct Pokemon *mon = &gParties[trainer][idx];
    enum Species species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    if (!IsOnPlayerSide(battler)
     && !gBattleStruct->partyState[trainer][idx].sentOut)
    {
        species = SPECIES_NONE;
    }

    u32 spriteId = CreateMonIcon(
        species,
        SpriteCB_MonIcon,
        x, y, 0,
        GetMonData(mon, MON_DATA_PERSONALITY, NULL));

    for (battler = 0; battler < MAX_BATTLERS_COUNT; battler++)
    {
        if (idx == gBattlerPartyIndexes[battler] || species == SPECIES_NONE)
        {
            gSprites[spriteId].oam.objMode = ST_OAM_OBJ_BLEND;
            break;
        }
    }

    if (idx < gPartiesCount[trainer])
    {
        if (species != SPECIES_NONE)
            gSprites[spriteId].callback = SpriteCB_BattleInfo_MonIcon;
    }
    else
    {
        gSprites[spriteId].invisible = TRUE;
    }

    gSprites[spriteId].sPartySlotIdx = idx + (PARTY_SIZE * (trainer == B_TRAINER_PLAYER));
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
    *spriteId = MonSummary_CreateHPBarSprite(TAG_BI_HPBAR, TAG_BI_HPBAR, BI_HPBAR_X, BI_HPBAR_Y);
    if (*spriteId == SPRITE_NONE)
        return;

    struct Sprite *sprite = &gSprites[*spriteId];
    sprite->sPartySlotIdx = -1;
    sprite->oam.objMode = ST_OAM_OBJ_BLEND;
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
    sprite->callback = SpriteCB_BattleInfo_Cursor;
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
        2, 3,
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

    BattleInfoHelper_AddTextPrinter(74, 28, FONT_OUTLINED, BI_TXTCLR_OUTLINED, strbuf);

    // do not reveal opponent data w/o google glass
    if (sBattleInfoDataPtr->currPartySlot < PARTY_SIZE
     && !FlagGet(FLAG_SYS_APP_GOOGLE_GLASS_GET))
    {
        return;
    }

    // ability
    BattleInfoHelper_AddTextPrinter(
        4, 26,
        fontId,
        BI_TXTCLR_CONTENT,
        gAbilitiesInfo[GetSpeciesAbility(species, GetMonData(mon, MON_DATA_ABILITY_NUM, NULL))].name);

    // held item
    enum Item item = GetMonData(mon, MON_DATA_HELD_ITEM, NULL);
    if (item != ITEM_NONE)
        strbuf = GetItemName(item);
    else
        strbuf = COMPOUND_STRING("No Held Item");
    BattleInfoHelper_AddTextPrinter(
        4, 42,
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

            BlitBitmapToWindow(0, sBattleInfo_StatStageBlit + tileNum, x, y + 5, 8, 8);
        }
    }
}

static void BattleInfoText_UpdateStatusList(void)
{
    if (!BattleInfoHelper_CanMonInfoBeShown())
        return;

    u32 windowId = 0;
    BlitBitmapToWindow(windowId, sBattleInfo_StatusListBlit, 160, 8, 80, 80);

    for (u32 i = 0, y = 4; i < 5; i++, y += 16)
    {
        const u8 *str = COMPOUND_STRING("Test");
        u32 fontId = GetFontIdToFit(str, FONT_OUTLINED, 0, 72);
        BattleInfoHelper_AddTextPrinter(
            162, y,
            fontId,
            BI_TXTCLR_OUTLINED,
            str);
    }
}

static void BattleInfoText_UpdateFooter(void)
{
    BattleInfoHelper_AddTextPrinter(
        4, 81,
        FONT_SMALL,
        BI_TXTCLR_FOOTER,
        sBattleInfo_ModesInfo[sBattleInfoDataPtr->mode].helpBarTxt);
}

static void BattleInfoHelper_UpdateEverything(void)
{
    FillWindowPixelBuffer(0, PIXEL_FILL(0));
    BattleInfoText_UpdateHeader();
    BattleInfoText_UpdateStatStages();
    BattleInfoText_UpdateFooter();
    BattleInfoMode_Update();
    CopyWindowToVram(0, COPYWIN_GFX);
}

static struct Pokemon *BattleInfoHelper_GetCurrMon(void)
{
    // try getting accurate mon data
    enum BattlerId battler = BattleInfoHelper_GetCurrBattler();
    if (battler != MAX_BATTLERS_COUNT)
        return GetBattlerMon(battler);

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
    bool32 isOpponent = sBattleInfoDataPtr->currPartySlot < PARTY_SIZE;
    u32 partySlot = sBattleInfoDataPtr->currPartySlot - (PARTY_SIZE * !isOpponent);

    for (enum BattlerId battler = 0; battler < MAX_BATTLERS_COUNT; battler++)
    {
        if (!IsBattlerAlive(battler))
            continue;

        if (gBattlerPartyIndexes[battler] != partySlot)
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
    if (sBattleInfoDataPtr->currPartySlot < PARTY_SIZE)
        return B_TRAINER_OPPONENT_A;
    else
        return B_TRAINER_PLAYER;
}

static u32 BattleInfoHelper_GetCurrPartySlot(void)
{
    u32 currPartySlot = sBattleInfoDataPtr->currPartySlot;
    bool32 isPlayer = currPartySlot >= PARTY_SIZE;

    return currPartySlot - (PARTY_SIZE * isPlayer);
}

static bool32 BattleInfoHelper_CanMonInfoBeShown(void)
{
    if (GetMonData(BattleInfoHelper_GetCurrMon(), MON_DATA_MAX_HP, NULL) == 0)
        return FALSE;

    enum BattleTrainer trainer = BattleInfoHelper_GetCurrTrainer();
    if (trainer == B_TRAINER_PLAYER)
        return TRUE;

    return trainer == B_TRAINER_OPPONENT_A
        && gBattleStruct->partyState[trainer][BattleInfoHelper_GetCurrPartySlot()].sentOut;
}

UNUSED static u32 BattleInfoHelper_GetVolatileMaxValue(enum Volatile vol)
{
    #define UNPACK_VOLATILE_MAX_SIZE(_enum, _fieldName, _typeMaxValue, ...) case _enum: return min(MAX_u16, GET_VOLATILE_MAXIMUM(_typeMaxValue));

    switch (vol)
    {
    VOLATILE_DEFINITIONS(UNPACK_VOLATILE_MAX_SIZE)
    /* Expands to the following:
        * case VOLATILE_CONFUSION:
            return MAX_BITS(3); // Max value 7
        * case VOLATILE_FLINCHED:
            return MAX_BITS(1); // Max value 1
        * ...etc.
        */
    default:
        return 0;
    }
}

static u32 BattleInfoHelper_GetTotalCrits(void)
{
    struct BattlePokemon *batMon = BattleInfoHelper_GetCurrBattleMon();

    if (batMon == NULL)
    {
        return 0;
    }
    else if (batMon->volatiles.laserFocus)
    {
        return ARRAY_COUNT(sCriticalHitOdds) - 1;
    }

    enum BattlerId battler = BattleInfoHelper_GetCurrBattler();
    u32 GetHoldEffectCritChanceIncrease(enum BattlerId battler, enum HoldEffect holdEffect);
    u32 CalcBattlerPassiveCritChance(enum BattlerId battler, enum HoldEffect holdEffect, enum Ability ability);

    return CalcBattlerPassiveCritChance(battler, GetItemHoldEffect(batMon->item), batMon->ability);
}

static void BattleInfoHelper_AddTextPrinter(u32 x, u32 y, u32 fontId, enum BattleInfoTextColors color, const u8 *str)
{
    AddTextPrinterParameterized6(0, fontId, x, y, 0, 0, sBattleInfo_TextColors[color], TEXT_SKIP_DRAW, str);
}
