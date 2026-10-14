#include "global.h"
#include "battle.h"
#include "battle_interface.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "battle_pyramid_bag.h"
#include "bg.h"
#include "contest.h"
#include "decompress.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_control_avatar.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "follower_npc.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "item_menu.h"
#include "item_use.h"
#include "mail.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "metatile_behavior.h"
#include "move_relearner.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "player_pc.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "pokemon_summary_screen.h"
#include "pokerus.h"
#include "qol_field_moves.h"
#include "reshow_battle_screen.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "trade.h"
#include "window.h"
#include "options_visual.h"
#include "ui_inventory.h"
#include "ui_options_menu.h"
#include "ui_start_menu.h"
#include "constants/field_effects.h"
#include "constants/party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/ui_party_menu.h"

#if UI_PARTY_MENU

struct PartySlotRect
{
    u8 x, y, width, height;
};

struct PartyMenuData
{
    TaskFunc task;
    MainCallback exitCallback;
    u8 messageId;
    bool8 chooseHalf;
    u8 partyCount;
    u8 cursorSpriteId;
    u8 monIconSpriteIds[PARTY_SIZE];
    u8 heldItemSpriteIds[PARTY_SIZE];
    u8 statusSpriteIds[PARTY_SIZE];
    u16 statusFadeTimer;
    u8 statusFadePhase;
    u8 statusFadeLevel;
    u8 statusFadeAppliedLevel;
    bool8 statusFadePinned;
    u8 slotWindowIds[PARTY_SIZE];
    u8 heldWindowId;
    u8 windowId[NUM_PARTY_DYN_WINDOWS];
    u16 textTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
    u16 slotsTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
    u16 heldTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
};

EWRAM_DATA struct PartyMenu gPartyMenu = {0};
EWRAM_DATA bool8 gPartyMenuUseExitCallback = 0;
EWRAM_DATA u8 gSelectedMonPartyId = 0;
EWRAM_DATA MainCallback gPostMenuFieldCallback = NULL;
EWRAM_DATA u8 gSelectedOrderFromParty[MAX_FRONTIER_PARTY_SIZE] = {0};
EWRAM_DATA u8 gBattlePartyCurrentOrder[PARTY_SIZE / 2] = {0}; // bits 0-3 are the current pos of Slot 1, 4-7 are Slot 2, and so on
COMMON_DATA void (*gItemUseCB)(u8, TaskFunc) = NULL;

static EWRAM_DATA struct PartyMenuData *sPartyMenuDataPtr = NULL;

static void InitPartyMenu(enum PartyMenuType, enum PartyMenuLayout, u8, bool8, u8, TaskFunc, MainCallback);
static void CB2_PartyMenu_Setup(void);
static void CB2_PartyMenu_Idle(void);
static void VBlankCB_PartyMenu_Idle(void);
static void PartySetup_Bgs(void);
static void PartySetup_Graphics(void);
static void PartySetup_Windows(void);
static void PartySetup_Slots(void);
static void PartySetup_Sprites(void);
static void Task_PartyMenu_WaitForFade(u8);
static void Task_PartyMenu_HandleHeldInput(u8);
static void PartySlot_Draw(u32);
static void PartySlot_DrawEmpty(u32);
static void PartySlot_Render(u32, u32, u32, bool32);
static void PartySlot_DrawFrame(u32, u32, bool32);
static void PartySlot_DrawMonInfo(u32, u32, u32);
static void PartySlot_DrawGender(u32, struct Pokemon *, const u8 *, u32);
static void PartySlot_DrawLevel(u32, struct Pokemon *, u32);
static void PartySlot_DrawHp(u32, struct Pokemon *, u32);
static void PartySlot_DrawItem(u32, struct Pokemon *, u32);
static void PartySlot_DrawDescription(u32, u32, enum PartyTextColors, u32);
static u32 PartySlot_GetDescription(u32, enum PartyTextColors *);
static u32 PartySlot_GetTeachMoveDescription(struct Pokemon *, enum Move, enum PartyTextColors *);
static void PartySlot_FillRect(u32, u32, u32, u32, u32, u32);
static void PartySlot_Print(u32, u32, u32, u32, enum PartyTextColors, const u8 *);
static bool32 PartyCursor_HandleDirectionalInput(void);
static bool32 PartyMenu_CanSwitch(void);
static void PartyCursor_SnapToSlot(void);
static void PartyHeld_Lift(void);
static void PartyHeld_SnapToSlot(void);
static void PartyHeld_Place(bool32);
static void PartySetup_MonIcons(void);
static void PartySetup_HeldItems(void);
static void PartySetup_StatusIcons(void);
static void PartyStatusIcons_UpdateFade(void);
static void PartyMonSprites_SetLifted(u32, bool32);
static void PartyMonSprites_MoveToSlot(u32, u32);
static s16 PartyMonIcon_GetX(u32);
static s16 PartyMonIcon_GetY(u32);
static void PrintMessage(const u8 *);
static void Task_PrintAndWaitForText(u8);
static void PartyView_PrintHeader(const u8 *);
static void PartyView_ClearHeader(void);
static void PartyView_ClearFooter(void);
static void PartyMenuRemoveWindow(u8 *);
static bool8 ShouldUseChooseMonText(void);
static void Task_ClosePartyMenu(u8);
static void Task_ClosePartyMenuAndSetCB2(u8);
static void PartyMenu_Free(void);
static void BufferMonSelection(void);
static void Task_PartyMenuWaitForFade(u8);
static void Task_ChooseContestMon(u8);
static void CB2_ChooseContestMon(void);
static void Task_ChoosePartyMon(u8);
static void Task_ChooseMonForMoveRelearner(u8);
static void CB2_ChooseMonForMoveRelearner(void);
static void Task_BattlePyramidChooseMonHeldItems(u8);
static u8 GetPartyLayoutFromBattleType(void);
static void Task_HideFollowerNPCForTeleport(u8);
static void Task_FieldMoveWaitForFade(u8);
static enum Species GetFieldMoveMonSpecies(void);
static void FieldCallback_Surf(void);
static void FieldCallback_Waterfall(void);
static void FieldCallback_Dive(void);
static void FieldCallback_RockClimb(void);
static void BufferBattlePartyOrder(u8 *, u8);
static void BufferBattlePartyOrderBySide(u8 *, u8, enum BattlerId);
static u8 GetPartyIdFromBattleSlot(u8);
static void SetPartyIdAtBattleSlot(u8, u8);
static void UpdatePartyToBattleOrder(void);
static void UpdatePartyToFieldOrder(void);
static void GetPartyAndSlotFromPartyMenuId(s8, struct Pokemon **, s8 *);
static void CreateHeldItemSpriteForTrade(u8, bool8);
static void SpriteCB_HeldItem(struct Sprite *);
static void CB2_ReturnToBagMenu(void);
static void Task_SetSacredAshCB(u8);
static void Task_UsePokevialFromField(u8);
static void Task_ValidateChosenHalfParty(u8);
static void ItemUseCB_WontHaveEffect(u8, TaskFunc);

#include "data/ui_party_menu.h"

// ==================================================
// Party menu set up
// ==================================================

static void InitPartyMenu(enum PartyMenuType menuType, enum PartyMenuLayout layout, u8 partyAction, bool8 keepCursorPos, u8 messageId, TaskFunc task, MainCallback callback)
{
    sPartyMenuDataPtr = AllocZeroed(sizeof(struct PartyMenuData));
    if (!sPartyMenuDataPtr)
    {
        SetMainCallback2(callback);
        return;
    }

    gPartyMenu.menuType = menuType;
    gPartyMenu.exitCallback = callback;
    gPartyMenu.action = partyAction;
    if (layout != KEEP_PARTY_LAYOUT)
        gPartyMenu.layout = layout;

    sPartyMenuDataPtr->task = task;
    sPartyMenuDataPtr->messageId = messageId;
    sPartyMenuDataPtr->chooseHalf = (menuType == PARTY_MENU_TYPE_CHOOSE_HALF);
    sPartyMenuDataPtr->partyCount = CalculatePlayerPartyCount();

    if (!keepCursorPos || gPartyMenu.slotId >= sPartyMenuDataPtr->partyCount)
        gPartyMenu.slotId = 0;

    gTextFlags.autoScroll = 0;
    memset(sPartyMenuDataPtr->monIconSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->monIconSpriteIds));
    memset(sPartyMenuDataPtr->heldItemSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->heldItemSpriteIds));
    memset(sPartyMenuDataPtr->statusSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->statusSpriteIds));
    memset(sPartyMenuDataPtr->windowId, WINDOW_NONE, sizeof(sPartyMenuDataPtr->windowId));
    gMain.state = 0;
    SetMainCallback2(CB2_PartyMenu_Setup);
}

static void CB2_PartyMenu_Setup(void)
{
    enum PartyMenuSetupSteps steps = gMain.state;

    switch (steps)
    {
    case PARTY_SETUP_RESET:
        CpuFill16(0, (void *)VRAM, VRAM_SIZE);
        FillPalette(RGB_BLACK, BG_PLTT_ID(0), PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinatesAndBgCntRegs();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        FieldClearVBlankHBlankCallbacks();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        FreeAllWindowBuffers();
        ResetSpriteData();
        ResetTasks();
        break;
    case PARTY_SETUP_BG:
        PartySetup_Bgs();
        break;
    case PARTY_SETUP_GFX:
        PartySetup_Graphics();
        break;
    case PARTY_SETUP_WINDOWS:
        PartySetup_Windows();
        break;
    case PARTY_SETUP_SLOTS:
        PartySetup_Slots();
        break;
    case PARTY_SETUP_SPRITES:
        PartySetup_Sprites();
        break;
    case PARTY_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        break;
    case PARTY_SETUP_FINISH:
        CreateTask(Task_PartyMenu_WaitForFade, 0);
        DisplayPartyMenuStdMessage(sPartyMenuDataPtr->messageId);
        SetVBlankCallback(VBlankCB_PartyMenu_Idle);
        SetMainCallback2(CB2_PartyMenu_Idle);
        return;
    default:
        break;
    }

    gMain.state++;
}

static void CB2_PartyMenu_Idle(void)
{
    RunTasks();
    PartyStatusIcons_UpdateFade();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_PartyMenu_Idle(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void PartySetup_Bgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sPartyMenu_BackgroundTemplates, NELEMS(sPartyMenu_BackgroundTemplates));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetBgTilemapBuffer(PARTY_BG_TEXT, sPartyMenuDataPtr->textTilemapBuf);
    SetBgTilemapBuffer(PARTY_BG_HELD, sPartyMenuDataPtr->heldTilemapBuf);
    SetBgTilemapBuffer(PARTY_BG_SLOTS, sPartyMenuDataPtr->slotsTilemapBuf);
    ShowBg(PARTY_BG_TEXT);
    ShowBg(PARTY_BG_HELD);
    ShowBg(PARTY_BG_SLOTS);
    ShowBg(PARTY_BG_WALLPAPER);
}

static void PartySetup_Graphics(void)
{
    DecompressDataWithHeaderVram(sPartyMenu_Gfx_Wallpaper, (void *)BG_CHAR_ADDR(GetBgAttribute(PARTY_BG_WALLPAPER, BG_ATTR_CHARBASEINDEX)));
    LoadBgTilemap(PARTY_BG_WALLPAPER, sPartyMenu_Tilemap_Wallpaper, BG_SCREEN_SIZE, 0);
    LoadPalette(sPartyMenu_Pals_Wallpaper[OptionsMenu_GetSavedOptions(VISUAL_SETTINGS, VISUAL_OPTIONS_COLOR)],
                BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    SetBackdropFromColor(RGB_BLACK);

    LoadPalette(&sPartyMenu_Pal_Slot[BG_PLTT_ID(PARTY_BG_PAL_SLOT_MAIN)], BG_PLTT_ID(PARTY_BG_PAL_SLOT_MAIN), PLTT_SIZE_4BPP);
    LoadPalette(&sPartyMenu_Pal_Slot[BG_PLTT_ID(PARTY_BG_PAL_SLOT_MAIN)], BG_PLTT_ID(PARTY_BG_PAL_SLOT_MARKED), PLTT_SIZE_4BPP);
    LoadPalette(&sPartyMenu_Pal_Slot[BG_PLTT_ID(PARTY_BG_PAL_SLOT_MARKED) + PARTY_SLOT_MARKED_PAL_START],
                BG_PLTT_ID(PARTY_BG_PAL_SLOT_MARKED) + PARTY_SLOT_MARKED_PAL_START,
                PLTT_SIZEOF(PARTY_SLOT_MARKED_PAL_END - PARTY_SLOT_MARKED_PAL_START + 1));
    LoadPalette(sPartyMenu_Pal_HelperText, BG_PLTT_ID(PARTY_BG_PAL_HELPER), PLTT_SIZE_4BPP);

    LoadUserWindowBorderGfxOnBg(PARTY_BG_TEXT, PARTY_TEXT_TILE_FRAME, BG_PLTT_ID(PARTY_BG_PAL_FRAME));
    LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(PARTY_BG_PAL_DIALOG), PLTT_SIZE_4BPP);
    LoadPalette(gStandardMenuPalette, BG_PLTT_ID(PARTY_BG_PAL_MENU_TEXT), PLTT_SIZE_4BPP);
}

static void PartySetup_Windows(void)
{
    InitWindows(sPartyMenu_WindowTemplates);
    DeactivateAllTextPrinters();
    FillWindowPixelBuffer(PARTY_WIN_HEADER, PIXEL_FILL(0));
    PutWindowTilemap(PARTY_WIN_HEADER);
    FillWindowPixelBuffer(PARTY_WIN_FOOTER, PIXEL_FILL(0));
    PutWindowTilemap(PARTY_WIN_FOOTER);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);

    u32 baseBlock = 1;
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        u32 row = slot / PARTY_SLOT_COLUMNS;
        struct WindowTemplate template =
        {
            .bg = PARTY_BG_SLOTS,
            .tilemapLeft = PARTY_SLOT_LEFT + PARTY_SLOT_WIDTH * (slot % PARTY_SLOT_COLUMNS),
            .tilemapTop = sPartyMenu_SlotRows[row].top,
            .width = PARTY_SLOT_WIDTH,
            .height = sPartyMenu_SlotRows[row].height,
            .paletteNum = PARTY_BG_PAL_SLOT_MAIN,
            .baseBlock = baseBlock,
        };

        sPartyMenuDataPtr->slotWindowIds[slot] = AddWindow(&template);
        baseBlock += template.width * template.height;
    }

    struct WindowTemplate heldTemplate =
    {
        .bg = PARTY_BG_HELD,
        .width = PARTY_SLOT_WIDTH,
        .height = PARTY_SLOT_MID_HEIGHT,
        .paletteNum = PARTY_BG_PAL_SLOT_MAIN,
        .baseBlock = baseBlock,
    };
    sPartyMenuDataPtr->heldWindowId = AddWindow(&heldTemplate);
}

static void PartySetup_Slots(void)
{
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
        PartySlot_Draw(slot);
}

static void PartySetup_Sprites(void)
{
    PartySetup_MonIcons();

    LoadSpritePalette(&sPartyMenu_SpritePalette_Ui);
    PartySetup_HeldItems();
    PartySetup_StatusIcons();

    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_Cursor);
    sPartyMenuDataPtr->cursorSpriteId = CreateSprite(&sPartyMenu_SpriteTemplate_Cursor, 0, 0, PARTY_SPRITE_SUBPRIORITY_CURSOR);

    struct Sprite *cursor = &gSprites[sPartyMenuDataPtr->cursorSpriteId];
    SetSubspriteTables(cursor, sPartyMenu_SubspriteTable_Cursor);
    cursor->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
    PartyCursor_SnapToSlot();
}

// ==================================================
// Input
// ==================================================

static void Task_PartyMenu_WaitForFade(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_HandleChooseMonInput;
}

void Task_HandleChooseMonInput(u8 taskId)
{
    if (PartyCursor_HandleDirectionalInput())
    {
        PartyCursor_SnapToSlot();
    }
    else if (JOY_NEW(SELECT_BUTTON) && PartyMenu_CanSwitch())
    {
        PlaySE(SE_SELECT);
        PartyHeld_Lift();
        gTasks[taskId].func = Task_PartyMenu_HandleHeldInput;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        Task_ClosePartyMenu(taskId);
    }
}

static void Task_PartyMenu_HandleHeldInput(u8 taskId)
{
    if (PartyCursor_HandleDirectionalInput())
    {
        PartyHeld_SnapToSlot();
    }
    else if (JOY_NEW(A_BUTTON | SELECT_BUTTON | B_BUTTON))
    {
        PlaySE(SE_SELECT);
        PartyHeld_Place(JOY_NEW(A_BUTTON | SELECT_BUTTON));
        gTasks[taskId].func = Task_HandleChooseMonInput;
    }
}

// ==================================================
// Party slots
// ==================================================

static void PartySlot_Draw(u32 slot)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];

    PartySlot_Render(windowId, slot / PARTY_SLOT_COLUMNS, slot, slot >= sPartyMenuDataPtr->partyCount);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    ScheduleBgCopyTilemapToVram(PARTY_BG_SLOTS);
}

static void PartySlot_DrawEmpty(u32 slot)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];

    PartySlot_Render(windowId, slot / PARTY_SLOT_COLUMNS, slot, TRUE);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PartySlot_Render(u32 windowId, u32 row, u32 partySlot, bool32 isEmpty)
{
    PartySlot_DrawFrame(windowId, row, isEmpty);
    if (!isEmpty)
        PartySlot_DrawMonInfo(windowId, partySlot, row);
}

static void PartySlot_DrawFrame(u32 windowId, u32 row, bool32 isEmpty)
{
    u32 numTiles = PARTY_SLOT_WIDTH * sPartyMenu_SlotRows[row].height;
    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    const u8 *tilemap = sPartyMenu_SlotRows[row].tilemap;

    if (isEmpty)
        tilemap = sPartyMenu_SlotRows[row].emptyTilemap;

    for (u32 i = 0; i < numTiles; i++)
        CpuCopy16(&sPartyMenu_Gfx_Slot[TILE_OFFSET_4BPP(tilemap[i])], &tileData[TILE_OFFSET_4BPP(i)], TILE_SIZE_4BPP);
}

static void PartySlot_DrawMonInfo(u32 windowId, u32 partySlot, u32 row)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][partySlot];
    u32 contentY = sPartyMenu_SlotRows[row].contentY;
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.nickname;
    u8 nickname[POKEMON_NAME_LENGTH + 1];

    GetMonData(mon, MON_DATA_NICKNAME, nickname);
    StringGet_Nickname(nickname);
    PartySlot_Print(windowId, GetFontIdToFit(nickname, FONT_OUTLINED, 0, rect->width),
                    rect->x, rect->y + contentY, COLORID_PARTY_WHITE, nickname);

    enum PartyTextColors descColor;
    u32 description = PartySlot_GetDescription(partySlot, &descColor);
    if (description != PARTY_SLOT_DESC_NONE)
        PartySlot_DrawDescription(windowId, description, descColor, contentY);

    if (GetMonData(mon, MON_DATA_IS_EGG))
        return;

    if (description == PARTY_SLOT_DESC_NONE)
        PartySlot_DrawHp(windowId, mon, contentY);
    PartySlot_DrawGender(windowId, mon, nickname, contentY);
    PartySlot_DrawLevel(windowId, mon, contentY);
    PartySlot_DrawItem(windowId, mon, contentY);
}

static void PartySlot_DrawGender(u32 windowId, struct Pokemon *mon, const u8 *nickname, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.gender;
    enum Species species = GetMonData(mon, MON_DATA_SPECIES);

    if ((species == SPECIES_NIDORAN_M || species == SPECIES_NIDORAN_F)
     && StringCompare(nickname, GetSpeciesName(species)) == 0)
    {
        return;
    }

    switch (GetMonGender(mon))
    {
    case MON_MALE:
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_BLUE, gText_MaleSymbol);
        break;
    case MON_FEMALE:
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_RED, gText_FemaleSymbol);
        break;
    }
}

static void PartySlot_DrawLevel(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.level;
    u32 numberX = rect->x + GetStringWidth(FONT_OUTLINED, gText_LevelSymbol, 0) + PARTY_SLOT_LEVEL_SPACING;
    u8 level[4];

    ConvertIntToDecimalStringN(level, GetMonData(mon, MON_DATA_LEVEL), STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_YELLOW, gText_LevelSymbol);
    PartySlot_Print(windowId, FONT_OUTLINED, numberX, rect->y + contentY, COLORID_PARTY_WHITE, level);
}

static void PartySlot_DrawHp(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *bar = &sPartyMenu_SlotLayout.hpBar;
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.hp;
    u32 hp = GetMonData(mon, MON_DATA_HP);
    u32 maxHp = GetMonData(mon, MON_DATA_MAX_HP);
    u32 fillX = bar->x + PARTY_HP_BAR_FRAME_SIZE;
    u32 fillY = bar->y + PARTY_HP_BAR_FRAME_SIZE + contentY;
    u32 fillMaxWidth = bar->width - 2 * PARTY_HP_BAR_FRAME_SIZE;
    u32 fillHeight = bar->height - 2 * PARTY_HP_BAR_FRAME_SIZE;
    u32 fillWidth = GetScaledHPFraction(hp, maxHp, fillMaxWidth);
    const u8 *colors = sPartyMenu_HpBarColors[GetHPBarLevel(hp, maxHp)];
    u8 text[8];

    PartySlot_FillRect(windowId, colors[0], fillX, bar->y + contentY, fillMaxWidth, bar->height);
    PartySlot_FillRect(windowId, colors[0], bar->x, fillY, bar->width, fillHeight);
    PartySlot_FillRect(windowId, colors[1], fillX, fillY, fillMaxWidth, fillHeight);
    if (fillWidth > 0)
        PartySlot_FillRect(windowId, colors[2], fillX, fillY, fillWidth, fillHeight);

    u8 *end = ConvertIntToDecimalStringN(text, hp, STR_CONV_MODE_LEFT_ALIGN, 3);
    *end++ = CHAR_SLASH;
    ConvertIntToDecimalStringN(end, maxHp, STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x + GetStringRightAlignXOffset(FONT_OUTLINED, text, rect->width),
                    rect->y + contentY, COLORID_PARTY_WHITE, text);
}

static void PartySlot_DrawItem(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.item;
    enum Item item = GetMonData(mon, MON_DATA_HELD_ITEM);

    if (item == ITEM_NONE)
        return;

    const u8 *name = GetItemName(item);
    PartySlot_Print(windowId, GetFontIdToFit(name, FONT_OUTLINED, 0, rect->width),
                    rect->x, rect->y + contentY, COLORID_PARTY_WHITE, name);
}

static void PartySlot_DrawDescription(u32 windowId, u32 description, enum PartyTextColors color, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.description;
    const u8 *str = sPartyMenu_Descriptions[description];
    u32 fontId = GetFontIdToFit(str, FONT_OUTLINED, 0, rect->width);

    PartySlot_Print(windowId, fontId, rect->x + GetStringCenterAlignXOffset(fontId, str, rect->width),
                    rect->y + contentY, color, str);
}

static u32 PartySlot_GetDescription(u32 partySlot, enum PartyTextColors *color)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][partySlot];

    *color = COLORID_PARTY_WHITE;

    if (gPartyMenu.menuType == PARTY_MENU_TYPE_MOVE_RELEARNER)
    {
        if (!GetMonData(mon, MON_DATA_IS_EGG) && HasMoveToRelearn(&mon->box, gMoveRelearnerState))
            return PARTYBOX_DESC_ABLE_2;
        return PARTYBOX_DESC_NOT_ABLE_2;
    }

    if (gPartyMenu.action == PARTY_ACTION_MOVE_TUTOR)
    {
        gSpecialVar_Result = FALSE;
        return PartySlot_GetTeachMoveDescription(mon, gSpecialVar_0x8005, color);
    }

    if (gPartyMenu.action != PARTY_ACTION_USE_ITEM)
        return PARTY_SLOT_DESC_NONE;

    switch (CheckIfItemIsTMHMOrEvolutionStone(gSpecialVar_ItemId))
    {
    case ITEM_IS_TM_HM:
        return PartySlot_GetTeachMoveDescription(mon, ItemIdToBattleMoveId(gSpecialVar_ItemId), color);
    case ITEM_IS_EVOLUTION_STONE:
        if (!GetMonData(mon, MON_DATA_IS_EGG)
         && GetEvolutionTargetSpecies(mon, EVO_MODE_ITEM_CHECK, gSpecialVar_ItemId, NULL, NULL, CHECK_EVO) != SPECIES_NONE)
        {
            *color = COLORID_PARTY_GREEN;
            return PARTYBOX_DESC_ABLE_3;
        }
        return PARTYBOX_DESC_NO_USE;
    default:
        return PARTY_SLOT_DESC_NONE;
    }
}

static u32 PartySlot_GetTeachMoveDescription(struct Pokemon *mon, enum Move move, enum PartyTextColors *color)
{
    switch (CanTeachMove(mon, move))
    {
    case CANNOT_LEARN_MOVE:
    case CANNOT_LEARN_MOVE_IS_EGG:
        *color = COLORID_PARTY_RED;
        return PARTYBOX_DESC_NOT_ABLE_2;
    case ALREADY_KNOWS_MOVE:
        *color = COLORID_PARTY_GREY;
        return PARTYBOX_DESC_LEARNED;
    default:
        *color = COLORID_PARTY_GREEN;
        return PARTYBOX_DESC_ABLE_2;
    }
}

static void PartySlot_FillRect(u32 windowId, u32 color, u32 x, u32 y, u32 width, u32 height)
{
    u32 *tileData = (u32 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 widthTiles = GetWindowAttribute(windowId, WINDOW_WIDTH);
    u32 fill = color * 0x11111111;

    for (u32 py = y; py < y + height; py++)
    {
        u32 *row = &tileData[(py / TILE_HEIGHT) * widthTiles * TILE_HEIGHT + py % TILE_HEIGHT];

        for (u32 px = x; px < x + width;)
        {
            u32 start = px % TILE_WIDTH;
            u32 end = min(TILE_WIDTH, start + (x + width - px));
            u32 mask = (end == TILE_WIDTH ? 0xFFFFFFFF : (1u << (end * 4)) - 1) & ~((1u << (start * 4)) - 1);
            u32 *word = &row[(px / TILE_WIDTH) * TILE_HEIGHT];

            *word = (*word & ~mask) | (fill & mask);
            px += end - start;
        }
    }
}

static void PartySlot_Print(u32 windowId, u32 fontId, u32 x, u32 y, enum PartyTextColors color, const u8 *str)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, 0, 0, sPartyMenu_TextColors[color], TEXT_SKIP_DRAW, str);
}

// ==================================================
// Cursor
// ==================================================

static s8 *PartyCursor_GetSlotPtr(void)
{
    if (gPartyMenu.action == PARTY_ACTION_SWITCH || gPartyMenu.action == PARTY_ACTION_SOFTBOILED)
        return &gPartyMenu.slotId2;
    return &gPartyMenu.slotId;
}

static bool32 PartyCursor_HandleDirectionalInput(void)
{
    s8 *slotPtr = PartyCursor_GetSlotPtr();
    u32 partyCount = sPartyMenuDataPtr->partyCount;
    u32 slot = *slotPtr;
    u32 col = slot % PARTY_SLOT_COLUMNS;

    if (JOY_REPEAT(DPAD_LEFT) || JOY_REPEAT(DPAD_RIGHT))
    {
        slot += (PARTY_SLOT_COLUMNS - 1) - 2 * col;
    }
    else if (JOY_REPEAT(DPAD_UP))
    {
        if (slot < PARTY_SLOT_COLUMNS)
        {
            slot = col + ((partyCount - 1 - col) / PARTY_SLOT_COLUMNS) * PARTY_SLOT_COLUMNS;
        }
        else
        {
            slot -= PARTY_SLOT_COLUMNS;
        }
    }
    else if (JOY_REPEAT(DPAD_DOWN))
    {
        slot += PARTY_SLOT_COLUMNS;
        if (slot >= partyCount)
            slot = col;
    }

    if (slot >= partyCount || slot == (u32)*slotPtr)
        return FALSE;

    PlaySE(SE_SELECT);
    *slotPtr = slot;
    return TRUE;
}

static void PartyCursor_SnapToSlot(void)
{
    struct Sprite *cursor = &gSprites[sPartyMenuDataPtr->cursorSpriteId];
    u32 slot = *PartyCursor_GetSlotPtr();

    cursor->x = PartyMonIcon_GetX(slot);
    cursor->y = PartyMonIcon_GetY(slot) + PARTY_CURSOR_Y_OFFSET;
}

// ==================================================
// Held slot
// ==================================================

static bool32 PartyMenu_CanSwitch(void)
{
    return gPartyMenu.menuType == PARTY_MENU_TYPE_FIELD
        && gPartyMenu.action == PARTY_ACTION_CHOOSE_MON
        && sPartyMenuDataPtr->partyCount > 1
        && !InBattlePike();
}

static void PartyHeld_Lift(void)
{
    gPartyMenu.action = PARTY_ACTION_SWITCH;
    gPartyMenu.slotId2 = gPartyMenu.slotId;
    PartyView_ClearHeader();
    gSprites[sPartyMenuDataPtr->cursorSpriteId].invisible = TRUE;
    PartySlot_DrawEmpty(gPartyMenu.slotId);
    PartyMonSprites_SetLifted(gPartyMenu.slotId, TRUE);
    PartyHeld_SnapToSlot();
}

static void PartyHeld_SnapToSlot(void)
{
    u32 heldWindowId = sPartyMenuDataPtr->heldWindowId;
    u32 slot = gPartyMenu.slotId2;
    u32 slotWindowId = sPartyMenuDataPtr->slotWindowIds[slot];

    ClearWindowTilemap(heldWindowId);
    SetWindowAttribute(heldWindowId, WINDOW_TILEMAP_LEFT, GetWindowAttribute(slotWindowId, WINDOW_TILEMAP_LEFT) + PARTY_HELD_OFFSET_X);
    SetWindowAttribute(heldWindowId, WINDOW_TILEMAP_TOP, GetWindowAttribute(slotWindowId, WINDOW_TILEMAP_TOP) - PARTY_HELD_OFFSET_Y);
    FillWindowPixelBuffer(heldWindowId, PIXEL_FILL(0));
    PartySlot_Render(heldWindowId, slot / PARTY_SLOT_COLUMNS, gPartyMenu.slotId, FALSE);
    PutWindowTilemap(heldWindowId);
    CopyWindowToVram(heldWindowId, COPYWIN_FULL);

    PartyMonSprites_MoveToSlot(gPartyMenu.slotId, slot);
}

static void PartyHeld_Place(bool32 confirm)
{
    u32 heldSlot = gPartyMenu.slotId;

    ClearWindowTilemap(sPartyMenuDataPtr->heldWindowId);
    CopyBgTilemapBufferToVram(PARTY_BG_HELD);
    PartyMonSprites_SetLifted(heldSlot, FALSE);

    if (!confirm)
        gPartyMenu.slotId2 = heldSlot;

    u32 targetSlot = gPartyMenu.slotId2;
    if (targetSlot != heldSlot)
    {
        struct Pokemon *party = gParties[B_TRAINER_PLAYER];
        struct Pokemon *temp = Alloc(sizeof(struct Pokemon));
        u8 *iconIds = sPartyMenuDataPtr->monIconSpriteIds;
        u8 *itemIds = sPartyMenuDataPtr->heldItemSpriteIds;
        u8 *statusIds = sPartyMenuDataPtr->statusSpriteIds;
        u8 tempSpriteId;

        if (heldSlot == 0 || targetSlot == 0)
            gFollowerSteps = 0;

        *temp = party[heldSlot];
        party[heldSlot] = party[targetSlot];
        party[targetSlot] = *temp;
        Free(temp);

        SWAP(iconIds[heldSlot], iconIds[targetSlot], tempSpriteId);
        SWAP(itemIds[heldSlot], itemIds[targetSlot], tempSpriteId);
        SWAP(statusIds[heldSlot], statusIds[targetSlot], tempSpriteId);
        PartySlot_Draw(targetSlot);
    }

    PartyMonSprites_MoveToSlot(heldSlot, heldSlot);
    PartySlot_Draw(heldSlot);

    gPartyMenu.action = PARTY_ACTION_CHOOSE_MON;
    gPartyMenu.slotId = targetSlot;
    DisplayPartyMenuStdMessage(PARTY_MSG_CHOOSE_MON);
    gSprites[sPartyMenuDataPtr->cursorSpriteId].invisible = FALSE;
    PartyCursor_SnapToSlot();
}

// ==================================================
// Mon icons
// ==================================================

static void PartySetup_MonIcons(void)
{
    LoadMonIconPalettes();

    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][slot];
        u8 spriteId = CreateMonIconIsEgg(GetMonData(mon, MON_DATA_SPECIES), SpriteCB_MonIcon,
                                         PartyMonIcon_GetX(slot), PartyMonIcon_GetY(slot),
                                         PARTY_SPRITE_SUBPRIORITY_MON_ICON,
                                         GetMonData(mon, MON_DATA_PERSONALITY), GetMonData(mon, MON_DATA_IS_EGG));

        gSprites[spriteId].oam.priority = PARTY_SPRITE_PRIORITY_MAIN;
        sPartyMenuDataPtr->monIconSpriteIds[slot] = spriteId;
    }
}

static s16 PartyMonIcon_GetX(u32 slot)
{
    return PARTY_MON_ICON_X + PARTY_MON_ICON_X_SPACING * (slot % PARTY_SLOT_COLUMNS);
}

static s16 PartyMonIcon_GetY(u32 slot)
{
    return PARTY_MON_ICON_Y + PARTY_MON_ICON_Y_SPACING * (slot / PARTY_SLOT_COLUMNS);
}

static void PartySetup_HeldItems(void)
{
    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_HeldItem);

    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][slot], MON_DATA_HELD_ITEM) == ITEM_NONE)
            continue;

        sPartyMenuDataPtr->heldItemSpriteIds[slot] = CreateSprite(&sPartyMenu_SpriteTemplate_HeldItem,
                                                                  PartyMonIcon_GetX(slot) + PARTY_HELD_ITEM_X_OFFSET,
                                                                  PartyMonIcon_GetY(slot) + PARTY_HELD_ITEM_Y_OFFSET,
                                                                  PARTY_SPRITE_SUBPRIORITY_HELD_ITEM);
    }
}

static void PartySetup_StatusIcons(void)
{
    LoadCompressedSpriteSheet(&sPartyMenu_SpriteSheet_Status);
    LoadSpritePalette(&sPartyMenu_SpritePalette_Status);

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3
                               | BLDCNT_TGT2_BD | BLDCNT_EFFECT_BLEND);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(PARTY_STATUS_FADE_LEVELS, 0));

    for (u32 slot = 0; slot < sPartyMenuDataPtr->partyCount; slot++)
    {
        u32 ailment = GetMonAilment(&gParties[B_TRAINER_PLAYER][slot]);
        if (ailment == AILMENT_NONE || ailment == AILMENT_PKRS)
            continue;

        u8 spriteId = CreateSprite(&sPartyMenu_SpriteTemplate_Status,
                                   PartyMonIcon_GetX(slot) + PARTY_STATUS_ICON_X_OFFSET,
                                   PartyMonIcon_GetY(slot) + PARTY_STATUS_ICON_Y_OFFSET,
                                   PARTY_SPRITE_SUBPRIORITY_STATUS);
        StartSpriteAnim(&gSprites[spriteId], ailment - 1);
        sPartyMenuDataPtr->statusSpriteIds[slot] = spriteId;
    }
}

static void PartyStatusIcons_UpdateFade(void)
{
    struct PartyMenuData *data = sPartyMenuDataPtr;

    data->statusFadeTimer++;

    if (data->statusFadePinned && data->statusFadePhase != PARTY_STATUS_FADE_IN)
    {
        if (data->statusFadeLevel == 0)
        {
            data->statusFadePhase = PARTY_STATUS_FADE_SHOW;
            data->statusFadeTimer = 0;
        }
        else
        {
            data->statusFadePhase = PARTY_STATUS_FADE_IN;
            data->statusFadeTimer = (PARTY_STATUS_FADE_LEVELS - data->statusFadeLevel)
                                  * PARTY_STATUS_FADE_FRAMES / PARTY_STATUS_FADE_LEVELS;
        }
    }

    switch (data->statusFadePhase)
    {
    case PARTY_STATUS_FADE_SHOW:
        if (!data->statusFadePinned && data->statusFadeTimer >= PARTY_STATUS_FADE_SHOW_FRAMES)
        {
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_OUT;
        }
        break;
    case PARTY_STATUS_FADE_OUT:
        if (data->statusFadeTimer >= PARTY_STATUS_FADE_FRAMES)
        {
            data->statusFadeLevel = PARTY_STATUS_FADE_LEVELS;
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_HIDE;
        }
        else
        {
            data->statusFadeLevel = data->statusFadeTimer * PARTY_STATUS_FADE_LEVELS / PARTY_STATUS_FADE_FRAMES;
        }
        break;
    case PARTY_STATUS_FADE_HIDE:
        if (data->statusFadeTimer >= PARTY_STATUS_FADE_HIDE_FRAMES)
        {
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_IN;
        }
        break;
    case PARTY_STATUS_FADE_IN:
        if (data->statusFadeTimer >= PARTY_STATUS_FADE_FRAMES)
        {
            data->statusFadeLevel = 0;
            data->statusFadeTimer = 0;
            data->statusFadePhase = PARTY_STATUS_FADE_SHOW;
        }
        else
        {
            data->statusFadeLevel = PARTY_STATUS_FADE_LEVELS
                                  - data->statusFadeTimer * PARTY_STATUS_FADE_LEVELS / PARTY_STATUS_FADE_FRAMES;
        }
        break;
    }

    if (data->statusFadeLevel == data->statusFadeAppliedLevel)
        return;

    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(PARTY_STATUS_FADE_LEVELS - data->statusFadeLevel, data->statusFadeLevel));
    data->statusFadeAppliedLevel = data->statusFadeLevel;
}

// spriteSlot is the party index whose sprites move
static void PartyMonSprites_SetLifted(u32 spriteSlot, bool32 lifted)
{
    u8 spriteIds[] = {
        sPartyMenuDataPtr->monIconSpriteIds[spriteSlot],
        sPartyMenuDataPtr->heldItemSpriteIds[spriteSlot],
        sPartyMenuDataPtr->statusSpriteIds[spriteSlot],
    };

    sPartyMenuDataPtr->statusFadePinned = lifted;

    for (u32 i = 0; i < ARRAY_COUNT(spriteIds); i++)
    {
        if (spriteIds[i] == SPRITE_NONE)
            continue;

        struct Sprite *sprite = &gSprites[spriteIds[i]];
        sprite->oam.priority = lifted ? PARTY_SPRITE_PRIORITY_LIFTED : PARTY_SPRITE_PRIORITY_MAIN;
        sprite->x2 = lifted ? PARTY_HELD_OFFSET_X * TILE_WIDTH : 0;
        sprite->y2 = lifted ? -PARTY_HELD_OFFSET_Y * TILE_HEIGHT : 0;
    }
}

static void PartyMonSprites_MoveToSlot(u32 spriteSlot, u32 slot)
{
    u32 iconSpriteId = sPartyMenuDataPtr->monIconSpriteIds[spriteSlot];
    u32 itemSpriteId = sPartyMenuDataPtr->heldItemSpriteIds[spriteSlot];
    u32 statusSpriteId = sPartyMenuDataPtr->statusSpriteIds[spriteSlot];

    gSprites[iconSpriteId].x = PartyMonIcon_GetX(slot);
    gSprites[iconSpriteId].y = PartyMonIcon_GetY(slot);

    if (itemSpriteId != SPRITE_NONE)
    {
        gSprites[itemSpriteId].x = PartyMonIcon_GetX(slot) + PARTY_HELD_ITEM_X_OFFSET;
        gSprites[itemSpriteId].y = PartyMonIcon_GetY(slot) + PARTY_HELD_ITEM_Y_OFFSET;
    }

    if (statusSpriteId != SPRITE_NONE)
    {
        gSprites[statusSpriteId].x = PartyMonIcon_GetX(slot) + PARTY_STATUS_ICON_X_OFFSET;
        gSprites[statusSpriteId].y = PartyMonIcon_GetY(slot) + PARTY_STATUS_ICON_Y_OFFSET;
    }
}

// ==================================================
// Messages
// ==================================================

void DisplayPartyMenuStdMessage(u32 stringId)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG];

    PartyMenuRemoveWindow(windowPtr);
    PartyView_ClearHeader();

    if (stringId == PARTY_MSG_NONE)
        return;

    if (stringId == PARTY_MSG_CHOOSE_MON)
    {
        if (sPartyMenuDataPtr->chooseHalf)
            stringId = PARTY_MSG_CHOOSE_MON_AND_CONFIRM;
        else if (!ShouldUseChooseMonText())
            stringId = PARTY_MSG_CHOOSE_MON_OR_CANCEL;
    }

    if (sPartyMenu_HeaderMessages[stringId] != NULL)
    {
        StringExpandPlaceholders(gStringVar4, sPartyMenu_HeaderMessages[stringId]);
        PartyView_PrintHeader(gStringVar4);
        PutWindowTilemap(PARTY_WIN_FOOTER);
        ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
        return;
    }

    PartyView_ClearFooter();
    StringExpandPlaceholders(gStringVar4, sPartyMenu_MsgBoxMessages[stringId]);
    *windowPtr = AddWindow(&sPartyMenu_WinTemplate_MsgBox);
    DrawStdFrameWithCustomTileAndPalette(*windowPtr, FALSE, PARTY_TEXT_TILE_FRAME, PARTY_BG_PAL_FRAME);
    AddTextPrinterParameterized(*windowPtr, FONT_NORMAL, gStringVar4, 0, 1, 0, 0);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

#define tKeepOpen  data[0]

u8 DisplayPartyMenuMessage(const u8 *str, bool8 keepOpen)
{
    u8 taskId;

    PrintMessage(str);
    taskId = CreateTask(Task_PrintAndWaitForText, 1);
    gTasks[taskId].tKeepOpen = keepOpen;
    return taskId;
}

static void Task_PrintAndWaitForText(u8 taskId)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG];

    if (RunTextPrintersRetIsActive(*windowPtr) != TRUE)
    {
        if (gTasks[taskId].tKeepOpen == FALSE)
            PartyMenuRemoveWindow(windowPtr);
        DestroyTask(taskId);
    }
}

#undef tKeepOpen

bool8 IsPartyMenuTextPrinterActive(void)
{
    return FuncIsActiveTask(Task_PrintAndWaitForText);
}

static void PrintMessage(const u8 *text)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG];

    PartyMenuRemoveWindow(windowPtr);
    PartyView_ClearFooter();
    *windowPtr = AddWindow(&sPartyMenu_WinTemplate_MsgBox);
    DrawStdFrameWithCustomTileAndPalette(*windowPtr, FALSE, PARTY_TEXT_TILE_FRAME, PARTY_BG_PAL_FRAME);
    gTextFlags.canABSpeedUpPrint = TRUE;
    AddTextPrinterParameterized(*windowPtr, FONT_NORMAL, text, 0, 1, GetPlayerTextSpeedDelay(), NULL);
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

static void PartyView_PrintHeader(const u8 *str)
{
    u32 fontId = GetFontIdToFit(str, FONT_SMALL, 0, TILE_TO_PIXELS(PARTY_HELPER_WIDTH));

    FillWindowPixelBuffer(PARTY_WIN_HEADER, PIXEL_FILL(0));
    AddTextPrinterParameterized4(PARTY_WIN_HEADER, fontId, 0, PARTY_HELPER_TEXT_Y, 0, 0, sPartyMenu_TextColors[COLORID_PARTY_HELPER], TEXT_SKIP_DRAW, str);
    CopyWindowToVram(PARTY_WIN_HEADER, COPYWIN_GFX);
}

static void PartyView_ClearHeader(void)
{
    FillWindowPixelBuffer(PARTY_WIN_HEADER, PIXEL_FILL(0));
    CopyWindowToVram(PARTY_WIN_HEADER, COPYWIN_GFX);
}

static void PartyView_ClearFooter(void)
{
    FillWindowPixelBuffer(PARTY_WIN_FOOTER, PIXEL_FILL(0));
    ClearWindowTilemap(PARTY_WIN_FOOTER);
    CopyWindowToVram(PARTY_WIN_FOOTER, COPYWIN_GFX);
}

static void PartyMenuRemoveWindow(u8 *windowPtr)
{
    if (*windowPtr == WINDOW_NONE)
        return;

    ClearStdWindowAndFrameToTransparent(*windowPtr, FALSE);
    RemoveWindow(*windowPtr);
    *windowPtr = WINDOW_NONE;
    ScheduleBgCopyTilemapToVram(PARTY_BG_TEXT);
}

static bool8 ShouldUseChooseMonText(void)
{
    u8 numAliveMons = 0;

    if (gPartyMenu.action == PARTY_ACTION_SEND_OUT)
        return TRUE;

    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][slot];

        if (GetMonData(mon, MON_DATA_SPECIES) != SPECIES_NONE && (GetMonData(mon, MON_DATA_HP) != 0 || GetMonData(mon, MON_DATA_IS_EGG)))
            numAliveMons++;
        if (numAliveMons > 1)
            return TRUE;
    }
    return FALSE;
}

// ==================================================
// Exit
// ==================================================

static void Task_ClosePartyMenu(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_ClosePartyMenuAndSetCB2;
}

static void Task_ClosePartyMenuAndSetCB2(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if (gPartyMenu.menuType == PARTY_MENU_TYPE_IN_BATTLE)
            UpdatePartyToFieldOrder();

        if (sPartyMenuDataPtr->exitCallback != NULL)
            SetMainCallback2(sPartyMenuDataPtr->exitCallback);
        else
            SetMainCallback2(gPartyMenu.exitCallback);
        PartyMenu_Free();
        DestroyTask(taskId);
    }
}

static void PartyMenu_Free(void)
{
    FreeAllWindowBuffers();
    DestroySpriteAndFreeResources(&gSprites[sPartyMenuDataPtr->cursorSpriteId]);

    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        if (sPartyMenuDataPtr->monIconSpriteIds[slot] != SPRITE_NONE)
            FreeAndDestroyMonIconSprite(&gSprites[sPartyMenuDataPtr->monIconSpriteIds[slot]]);
        if (sPartyMenuDataPtr->heldItemSpriteIds[slot] != SPRITE_NONE)
            DestroySprite(&gSprites[sPartyMenuDataPtr->heldItemSpriteIds[slot]]);
        if (sPartyMenuDataPtr->statusSpriteIds[slot] != SPRITE_NONE)
            DestroySprite(&gSprites[sPartyMenuDataPtr->statusSpriteIds[slot]]);
    }

    FreeSpriteTilesByTag(PARTY_GFXTAG_HELD_ITEM);
    FreeSpriteTilesByTag(PARTY_GFXTAG_STATUS);
    FreeSpritePaletteByTag(PARTY_PALTAG_STATUS);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);

    FreeMonIconPalettes();

    TRY_FREE_AND_SET_NULL(sPartyMenuDataPtr);
}

// ==================================================
// Entry points
// ==================================================

void CB2_PartyMenuFromStartMenu(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_StartMenu_ReturnToUI);
}

void CB2_ReturnToPartyMenuFromFlyMap(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, TRUE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_StartMenu_ReturnToUI);
}

void CB2_ShowPartyMenuForItemUse(void)
{
    MainCallback callback = CB2_ReturnToInventoryMenu;
    enum PartyMenuLayout partyLayout;
    enum PartyMenuType menuType;
    u8 i;
    u8 msgId;
    TaskFunc task;

    if ((gPartyMenu.data1 == DATA1_PARTY_MENU_FROM_FIELD) || (FlagGet(FLAG_SYS_USED_FROM_REGISTER_MENU)))
    {
        FlagClear(FLAG_SYS_USED_FROM_REGISTER_MENU);
        callback = CB2_ReturnToField;
        gPartyMenu.data1 = 0;
    }

    if (gMain.inBattle)
    {
        menuType = PARTY_MENU_TYPE_IN_BATTLE;
        partyLayout = GetPartyLayoutFromBattleType();
    }
    else
    {
        menuType = PARTY_MENU_TYPE_FIELD;
        partyLayout = PARTY_LAYOUT_SINGLE;
    }

    if (GetItemEffectType(gSpecialVar_ItemId) == ITEM_EFFECT_SACRED_ASH)
    {
        gPartyMenu.slotId = 0;
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES) != SPECIES_NONE && GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HP) == 0)
            {
                gPartyMenu.slotId = i;
                break;
            }
        }
        task = Task_SetSacredAshCB;
        msgId = PARTY_MSG_NONE;
    }
    else if (GetItemEffectType(gSpecialVar_ItemId) == ITEM_EFFECT_POKEVIAL)
    {
        gPartyMenu.slotId = 0;
        task = Task_SetSacredAshCB;
        msgId = PARTY_MSG_NONE;
    }
    else
    {
        if (GetItemPocket(gSpecialVar_ItemId) == POCKET_TM_HM)
            msgId = PARTY_MSG_TEACH_WHICH_MON;
        else
            msgId = PARTY_MSG_USE_ON_WHICH_MON;

        task = Task_HandleChooseMonInput;
    }

    InitPartyMenu(menuType, partyLayout, PARTY_ACTION_USE_ITEM, TRUE, msgId, task, callback);
}

static void CB2_ReturnToBagMenu(void)
{
    if (CurrentBattlePyramidLocation() == PYRAMID_LOCATION_NONE)
        GoToBagMenu(ITEMMENULOCATION_LAST, POCKETS_COUNT, NULL);
    else
        GoToBattlePyramidBagMenu(PYRAMIDBAG_LOC_PREV, gPyramidBagMenuState.exitCallback);
}

// Giving an item by selecting Give from the bag menu
// As opposted to by selecting Give in the party menu, which is handled by CursorCb_Give
void CB2_ChooseMonToGiveItem(void)
{
    MainCallback callback = (CurrentBattlePyramidLocation() == PYRAMID_LOCATION_NONE) ? CB2_ReturnToBagMenu : CB2_ReturnToPyramidBagMenu;
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_GIVE_ITEM, FALSE, PARTY_MSG_GIVE_TO_WHICH_MON, Task_HandleChooseMonInput, callback);
    gPartyMenu.bagItem = gSpecialVar_ItemId;
}

void CB2_ChooseMonToGiveItem_ReturnToNewInventory(void)
{
    MainCallback callback = CB2_ReturnToInventoryMenu;
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_GIVE_ITEM, FALSE, PARTY_MSG_GIVE_TO_WHICH_MON, Task_HandleChooseMonInput, callback);
    gPartyMenu.bagItem = gSpecialVar_ItemId;
}

void ChooseMonToGiveMailFromMailbox(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_GIVE_MAILBOX_MAIL, FALSE, PARTY_MSG_GIVE_TO_WHICH_MON, Task_HandleChooseMonInput, Mailbox_ReturnToMailListAfterDeposit);
}

void InitChooseHalfPartyForBattle(u8 unused)
{
    ClearSelectedPartyOrder();
    InitPartyMenu(PARTY_MENU_TYPE_CHOOSE_HALF, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, gMain.savedCallback);
    gPartyMenu.task = Task_ValidateChosenHalfParty;
}

void ChooseMonForTradingBoard(enum PartyMenuType menuType, MainCallback callback)
{
    InitPartyMenu(menuType, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, callback);
}

void ChooseMonForMoveTutor(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_MOVE_TUTOR, FALSE, PARTY_MSG_TEACH_WHICH_MON, Task_HandleChooseMonInput, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ChooseMonForWirelessMinigame(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_MINIGAME, PARTY_LAYOUT_SINGLE, PARTY_ACTION_MINIGAME, FALSE, PARTY_MSG_CHOOSE_MON_OR_CANCEL, Task_HandleChooseMonInput, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static u8 GetPartyLayoutFromBattleType(void)
{
    if (IsMultiBattle() == TRUE && !AreMultiPartiesFullTeams())
        return PARTY_LAYOUT_MULTI;
    if (IsMultiBattle() == TRUE && AreMultiPartiesFullTeams())
        return PARTY_LAYOUT_MULTI_FULL;
    if (!IsDoubleBattle() || gPartiesCount[B_TRAINER_PLAYER] == 1) // Draw the single layout in a double battle where the player has only one Pokémon.
        return PARTY_LAYOUT_SINGLE;
    return PARTY_LAYOUT_DOUBLE;
}

void OpenPartyMenuInBattle(u8 partyAction)
{
    if (partyAction == PARTY_ACTION_SEND_MON_TO_BOX)
        InitPartyMenu(PARTY_MENU_TYPE_IN_BATTLE, GetPartyLayoutFromBattleType(), partyAction, FALSE, PARTY_MSG_CHOOSE_MON_FOR_BOX, Task_HandleChooseMonInput, ReshowBlankBattleScreenAfterMenu);
    else
        InitPartyMenu(PARTY_MENU_TYPE_IN_BATTLE, GetPartyLayoutFromBattleType(), partyAction, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_SetUpReshowBattleScreenAfterMenu);
    ReshowBattleScreenDummy();
    UpdatePartyToBattleOrder();
}

void ChooseMonForInBattleItem(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_IN_BATTLE, GetPartyLayoutFromBattleType(), PARTY_ACTION_USE_ITEM, FALSE, PARTY_MSG_USE_ON_WHICH_MON, Task_HandleChooseMonInput, CB2_ReturnToInventoryBattleMenu);
    ReshowBattleScreenDummy();
    UpdatePartyToBattleOrder();
}

void ShowPartyMenuToShowcaseMultiBattleParty(void)
{
}

void ChooseMonForDaycare(void)
{
    InitPartyMenu(PARTY_MENU_TYPE_DAYCARE, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON_2, Task_HandleChooseMonInput, BufferMonSelection);
}

static void BufferMonSelection(void)
{
    gSpecialVar_0x8004 = GetCursorSelectionMonId();
    if (gSpecialVar_0x8004 >= PARTY_SIZE)
        gSpecialVar_0x8004 = PARTY_NOTHING_CHOSEN;
    gFieldCallback2 = CB2_FadeFromPartyMenu;
    SetMainCallback2(CB2_ReturnToField);
}

bool8 CB2_FadeFromPartyMenu(void)
{
    FadeInFromBlack();
    CreateTask(Task_PartyMenuWaitForFade, 10);
    return TRUE;
}

static void Task_PartyMenuWaitForFade(u8 taskId)
{
    if (IsWeatherNotFadingIn())
    {
        DestroyTask(taskId);
        UnlockPlayerFieldControls();
        ScriptContext_Enable();
    }
}

void ChooseContestMon(void)
{
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_ChooseContestMon, 10);
}

static void Task_ChooseContestMon(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_CONTEST, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_AND_CLOSE, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_ChooseContestMon);
        DestroyTask(taskId);
    }
}

static void CB2_ChooseContestMon(void)
{
    gContestMonPartyIndex = GetCursorSelectionMonId();
    if (gContestMonPartyIndex >= PARTY_SIZE)
        gContestMonPartyIndex = PARTY_NOTHING_CHOSEN;
    gSpecialVar_0x8004 = gContestMonPartyIndex;
    gFieldCallback2 = CB2_FadeFromPartyMenu;
    SetMainCallback2(CB2_ReturnToField);
}

// Used as a script special for showing a party mon to various npcs (e.g. in-game trades, move deleter)
void ChoosePartyMon(void)
{
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_ChoosePartyMon, 10);
}

static void Task_ChoosePartyMon(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_CHOOSE_MON, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_AND_CLOSE, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, BufferMonSelection);
        DestroyTask(taskId);
    }
}

void ChooseMonForMoveRelearner(void)
{
    gRelearnMode = RELEARN_MODE_SCRIPT;
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_ChooseMonForMoveRelearner, 10);
}

static void Task_ChooseMonForMoveRelearner(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_MOVE_RELEARNER, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_AND_CLOSE, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, CB2_ChooseMonForMoveRelearner);
        DestroyTask(taskId);
    }
}

static void CB2_ChooseMonForMoveRelearner(void)
{
    gSpecialVar_0x8004 = GetCursorSelectionMonId();
    if (gSpecialVar_0x8004 >= PARTY_SIZE)
    {
        gSpecialVar_0x8004 = PARTY_NOTHING_CHOSEN;
    }
    gFieldCallback2 = CB2_FadeFromPartyMenu;
    SetMainCallback2(CB2_ReturnToField);
}

// Can be called if the Battle Pyramid Bag is full on exiting and at least one party mon still has held items
// The player can then select to toss items from the bag or take/toss held items from the party
void BattlePyramidChooseMonHeldItems(void)
{
    LockPlayerFieldControls();
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_BattlePyramidChooseMonHeldItems, 10);
}

static void Task_BattlePyramidChooseMonHeldItems(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        InitPartyMenu(PARTY_MENU_TYPE_STORE_PYRAMID_HELD_ITEMS, PARTY_LAYOUT_SINGLE, PARTY_ACTION_CHOOSE_MON, FALSE, PARTY_MSG_CHOOSE_MON, Task_HandleChooseMonInput, BufferMonSelection);
        DestroyTask(taskId);
    }
}

void InitPartyMenuForPokevialFromField(u8 taskId)
{
    gPartyMenu.slotId = 0;
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_USE_ITEM, TRUE, PARTY_MSG_NONE, Task_UsePokevialFromField, CB2_ReturnToField);
}

void InitPartyMenuForHexorbFromField(u8 taskId)
{
    InitPartyMenu(PARTY_MENU_TYPE_FIELD, PARTY_LAYOUT_SINGLE, PARTY_ACTION_USE_ITEM, TRUE, PARTY_MSG_USE_ON_WHICH_MON, Task_HandleChooseMonInput, CB2_ReturnToField);
}

// ==================================================
// Not ported yet
// ==================================================

void AnimatePartySlot(u8 slot, u8 animNum)
{
}

void PartyMenuModifyHP(u8 taskId, u8 slot, s8 hpIncrement, s16 hpDifference, TaskFunc task)
{
}

static void Task_SetSacredAshCB(u8 taskId)
{
}

static void Task_UsePokevialFromField(u8 taskId)
{
}

static void Task_ValidateChosenHalfParty(u8 taskId)
{
}

static void ItemUseCB_WontHaveEffect(u8 taskId, TaskFunc task)
{
    gPartyMenuUseExitCallback = FALSE;
    PlaySE(SE_SELECT);
    DisplayPartyMenuMessage(gText_WontHaveEffect, TRUE);
    gTasks[taskId].func = task;
}

void ItemUseCB_BattleScript(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_BattleChooseMove(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_Medicine(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_AbilityCapsule(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_AbilityPatch(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_Mint(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_ResetEVs(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_ResetEVsAndFriendship(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_ReduceEV(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_PPRecovery(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_PPUp(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_TMHM(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_RareCandy(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_DynamaxCandy(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_SacredAsh(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_EvolutionStone(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_FormChange(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_FormChange_ConsumedOnUse(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_RotomCatalog(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_ZygardeCube(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_Fusion(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_UsePokevial(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

void ItemUseCB_UseHexorb(u8 taskId, TaskFunc task)
{
    ItemUseCB_WontHaveEffect(taskId, task);
}

// ==================================================
// Field moves
// ==================================================

bool8 FieldCallback_PrepareFadeInFromMenu(void)
{
    FadeInFromBlack();
    CreateTask(Task_FieldMoveWaitForFade, 8);
    if (PlayerHasFollowerNPC())
        CreateTask(Task_HideFollowerNPCForTeleport, 0);

    return TRUE;
}

// Same as above, but removes follower Pokémon
bool8 FieldCallback_PrepareFadeInForTeleport(void)
{
    RemoveFollowingPokemon();
    return FieldCallback_PrepareFadeInFromMenu();
}

#define taskState       task->data[0]

enum
{
    FNPC_WALK_INTO_PLAYER,
    FNPC_WAIT_FOR_ANIM_FINISH
};

static void Task_HideFollowerNPCForTeleport(u8 taskId)
{
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId()];
    struct Task *task;
    task = &gTasks[taskId];
    if (taskState == FNPC_WALK_INTO_PLAYER)
    {
        if (!PlayerHasFollowerNPC())
        {
            DestroyTask(taskId);
        }
        else
        {
            FollowerNPCWalkIntoPlayerForLeaveMap();
            taskState = FNPC_WAIT_FOR_ANIM_FINISH;
        }
    }
    if (taskState == FNPC_WAIT_FOR_ANIM_FINISH)
    {
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            FollowerNPCHideForLeaveMap(follower);
            DestroyTask(taskId);
        }
    }
}

#undef taskState

static void Task_FieldMoveWaitForFade(u8 taskId)
{
    if (IsWeatherNotFadingIn() == TRUE)
    {
        gFieldEffectArguments[0] = GetFieldMoveMonSpecies();
        gPostMenuFieldCallback();
        DestroyTask(taskId);
    }
}

static enum Species GetFieldMoveMonSpecies(void)
{
    return GetMonData(&gParties[B_TRAINER_PLAYER][gPartyMenu.slotId], MON_DATA_SPECIES);
}

static void FieldCallback_Surf(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_SURF);
}

bool32 SetUpFieldMove_Surf(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_SURF))
        return FALSE;

    if (PartyHasMonWithSurf() == TRUE && IsPlayerFacingSurfableFishableWater() == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Surf;
        return TRUE;
    }
    return FALSE;
}

bool32 SetUpFieldMove_Fly(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE))
        return FALSE;

    if (Overworld_MapTypeAllowsTeleportAndFly(gMapHeader.mapType) == TRUE)
        return TRUE;
    else
        return FALSE;
}

static void FieldCallback_Waterfall(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_WATERFALL);
}

bool32 SetUpFieldMove_Waterfall(void)
{
    s16 x, y;

    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_WATERFALL))
        return FALSE;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    if (MetatileBehavior_IsWaterfall(MapGridGetMetatileBehaviorAt(x, y)) == TRUE && IsPlayerSurfingNorth() == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Waterfall;
        return TRUE;
    }
    return FALSE;
}

bool32 SetUpFieldMove_RockClimb(void)
{
    s16 x, y;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    if (MetatileBehavior_IsRockClimbable(MapGridGetMetatileBehaviorAt(x, y)))
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_RockClimb;
        return TRUE;
    }

    return FALSE;
}

static void FieldCallback_Dive(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_DIVE);
}

bool32 SetUpFieldMove_Dive(void)
{
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_DIVE))
        return FALSE;

    gFieldEffectArguments[1] = TrySetDiveWarp();
    if (gFieldEffectArguments[1] != 0)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Dive;
        return TRUE;
    }
    return FALSE;
}

static void FieldCallback_RockClimb(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    FieldEffectStart(FLDEFF_USE_ROCK_CLIMB);
}

// ==================================================
// Battle order
// ==================================================

void ClearSelectedPartyOrder(void)
{
    memset(gSelectedOrderFromParty, 0, sizeof(gSelectedOrderFromParty));
}

void BufferBattlePartyCurrentOrder(void)
{
    BufferBattlePartyOrder(gBattlePartyCurrentOrder, GetPlayerFlankId());
}

static void BufferBattlePartyOrder(u8 *partyBattleOrder, u8 flankId)
{
    u8 partyIds[PARTY_SIZE];
    int i, j;

    if (IsMultiBattle() == TRUE && AreMultiPartiesFullTeams() == TRUE)
    {
        partyBattleOrder[0] = (0 << 4) | 1;
        partyBattleOrder[1] = (2 << 4) | 3;
        partyBattleOrder[2] = (4 << 4) | 5;
        return;
    }
    else if (IsMultiBattle() == TRUE)
    {
        // Party ids are packed in 4 bits at a time
        // i.e. the party id order below would be 0, 3, 5, 4, 2, 1, and the two parties would be 0,5,4 and 3,2,1
        if (flankId != 0)
        {
            partyBattleOrder[0] = 0 | (3 << 4);
            partyBattleOrder[1] = 5 | (4 << 4);
            partyBattleOrder[2] = 2 | (1 << 4);
        }
        else
        {
            partyBattleOrder[0] = 3 | (0 << 4);
            partyBattleOrder[1] = 2 | (1 << 4);
            partyBattleOrder[2] = 5 | (4 << 4);
        }
        return;
    }
    else if (IsDoubleBattle() == FALSE)
    {
        j = 1;
        partyIds[0] = gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIds[0])
            {
                partyIds[j] = i;
                j++;
            }
        }
    }
    else
    {
        j = 2;
        partyIds[0] = gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)];
        partyIds[1] = gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT)];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIds[0] && i != partyIds[1])
            {
                partyIds[j] = i;
                j++;
            }
        }
    }
    for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
        partyBattleOrder[i] = (partyIds[0 + (i * 2)] << 4) | partyIds[1 + (i * 2)];
}

void BufferBattlePartyCurrentOrderBySide(enum BattlerId battler, u8 flankId)
{
    BufferBattlePartyOrderBySide(gBattleStruct->battlerPartyOrders[battler], flankId, battler);
}

// when IsOnPlayerSide(battlerId), this function is identical the one above
static void BufferBattlePartyOrderBySide(u8 *partyBattleOrder, u8 flankId, enum BattlerId battler)
{
    u8 partyIndexes[PARTY_SIZE];
    int i, j;

    enum BattlerId leftBattler;
    if (IsOnPlayerSide(battler))
        leftBattler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
    else
        leftBattler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);

    if (IsMultiBattle() == TRUE && AreMultiPartiesFullTeams() == TRUE)
    {
        partyBattleOrder[0] = (0 << 4) | 1;
        partyBattleOrder[1] = (2 << 4) | 3;
        partyBattleOrder[2] = (4 << 4) | 5;
        return;
    }
    else if (IsMultiBattle() == TRUE)
    {
        if (flankId != 0)
        {
            partyBattleOrder[0] = 0 | (3 << 4);
            partyBattleOrder[1] = 5 | (4 << 4);
            partyBattleOrder[2] = 2 | (1 << 4);
        }
        else
        {
            partyBattleOrder[0] = 3 | (0 << 4);
            partyBattleOrder[1] = 2 | (1 << 4);
            partyBattleOrder[2] = 5 | (4 << 4);
        }
        return;
    }
    else if (IsDoubleBattle() == FALSE)
    {
        j = 1;
        partyIndexes[0] = gBattlerPartyIndexes[leftBattler];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIndexes[0])
            {
                partyIndexes[j] = i;
                j++;
            }
        }
    }
    else
    {
        enum BattlerId rightBattler;
        if (IsOnPlayerSide(battler))
            rightBattler = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);
        else
            rightBattler = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);

        j = 2;
        partyIndexes[0] = gBattlerPartyIndexes[leftBattler];
        partyIndexes[1] = gBattlerPartyIndexes[rightBattler];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (i != partyIndexes[0] && i != partyIndexes[1])
            {
                partyIndexes[j] = i;
                j++;
            }
        }
    }

    for (i = 0; i < 3; i++)
        partyBattleOrder[i] = (partyIndexes[0 + (i * 2)] << 4) | partyIndexes[1 + (i * 2)];
}

void SwitchPartyOrderLinkMulti(enum BattlerId battler, u8 slot, u8 slot2)
{
    u8 partyIds[PARTY_SIZE];
    u8 tempSlot = 0;
    int i, j;
    u8 *partyBattleOrder;
    u8 partyIdBuffer;

    if (IsMultiBattle())
    {
        partyBattleOrder = gBattleStruct->battlerPartyOrders[battler];
        for (i = j = 0; i < PARTY_SIZE / 2; j++, i++)
        {
            partyIds[j] = partyBattleOrder[i] >> 4;
            j++;
            partyIds[j] = partyBattleOrder[i] & 0xF;
        }
        partyIdBuffer = partyIds[slot2];
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (partyIds[i] == slot)
            {
                tempSlot = partyIds[i];
                partyIds[i] = partyIdBuffer;
                break;
            }
        }
        if (i != PARTY_SIZE)
        {
            partyIds[slot2] = tempSlot;
            partyBattleOrder[0] = (partyIds[0] << 4) | partyIds[1];
            partyBattleOrder[1] = (partyIds[2] << 4) | partyIds[3];
            partyBattleOrder[2] = (partyIds[4] << 4) | partyIds[5];
        }
    }
}

static u8 GetPartyIdFromBattleSlot(u8 slot)
{
    bool32 modResult = slot & 1;
    u8 retVal;

    slot /= 2;
    if (modResult)
        retVal = gBattlePartyCurrentOrder[slot] & 0xF;
    else
        retVal = gBattlePartyCurrentOrder[slot] >> 4;
    return retVal;
}

static void SetPartyIdAtBattleSlot(u8 slot, u8 setVal)
{
    bool32 modResult = slot & 1;

    slot /= 2;
    if (modResult)
        gBattlePartyCurrentOrder[slot] = (gBattlePartyCurrentOrder[slot] & 0xF0) | setVal;
    else
        gBattlePartyCurrentOrder[slot] = (gBattlePartyCurrentOrder[slot] & 0xF) | (setVal << 4);
}

void SwitchPartyMonSlots(u8 slot, u8 slot2)
{
    u8 partyId = GetPartyIdFromBattleSlot(slot);
    SetPartyIdAtBattleSlot(slot, GetPartyIdFromBattleSlot(slot2));
    SetPartyIdAtBattleSlot(slot2, partyId);
}

u8 GetPartyIdFromBattlePartyId(u8 battlePartyId)
{
    u8 i, j;

    for (j = i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); j++, i++)
    {
        if ((gBattlePartyCurrentOrder[i] >> 4) != battlePartyId)
        {
            j++;
            if ((gBattlePartyCurrentOrder[i] & 0xF) == battlePartyId)
                return j;
        }
        else
        {
            return j;
        }
    }
    return 0;
}

static const u8 sMultiBattlePartyIdToMenuId_Left[PARTY_SIZE] = { 0, 2, 3, 1, 4, 5};
static const u8 sMultiBattlePartyIdToMenuId_Right[PARTY_SIZE] = { 1, 4, 5, 0, 2, 3};

static void UpdatePartyToBattleOrder(void)
{
    struct Pokemon *partyBuffer = Alloc(sizeof(gParties[B_TRAINER_PLAYER]));
    u8 i;
    const u8 *multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Left;

    if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && ((gBattlerInMenuId & BIT_FLANK) != B_FLANK_LEFT))
        multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Right;


    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *srcParty = NULL;
        s8 srcPartySlot = 0;
        u8 battlePartyId = GetPartyIdFromBattleSlot(i);
        u8 srcMenuId = battlePartyId;

        if (gPartyMenu.layout == PARTY_LAYOUT_MULTI && battlePartyId < PARTY_SIZE)
            srcMenuId = multiBattlePartyIdToMenuId[battlePartyId];

        GetPartyAndSlotFromPartyMenuId(srcMenuId, &srcParty, &srcPartySlot);
        memcpy(&partyBuffer[i], &srcParty[srcPartySlot], sizeof(struct Pokemon));
    }
    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *dstParty = NULL;
        s8 dstPartySlot = 0;
        GetPartyAndSlotFromPartyMenuId(i, &dstParty, &dstPartySlot);
        memcpy(&dstParty[dstPartySlot], &partyBuffer[i], sizeof(struct Pokemon));
    }
    Free(partyBuffer);
}

static void UpdatePartyToFieldOrder(void)
{
    struct Pokemon *partyBuffer = Alloc(sizeof(gParties[B_TRAINER_PLAYER]));
    u8 i;

    const u8 *multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Left;

    if ((gBattleTypeFlags & BATTLE_TYPE_LINK)
     && ((gBattlerInMenuId & BIT_FLANK) != B_FLANK_LEFT))
    {
        multiBattlePartyIdToMenuId = sMultiBattlePartyIdToMenuId_Right;
    }

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *srcParty = NULL;
        s8 srcPartySlot = 0;
        GetPartyAndSlotFromPartyMenuId(i, &srcParty, &srcPartySlot);
        memcpy(&partyBuffer[i], &srcParty[srcPartySlot], sizeof(struct Pokemon));
    }

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *dstParty = NULL;
        s8 dstPartySlot = 0;
        u8 battlePartyId = GetPartyIdFromBattleSlot(i);
        u8 dstMenuId = battlePartyId;

        if (gPartyMenu.layout == PARTY_LAYOUT_MULTI && battlePartyId < PARTY_SIZE)
            dstMenuId = multiBattlePartyIdToMenuId[battlePartyId];

        GetPartyAndSlotFromPartyMenuId(dstMenuId, &dstParty, &dstPartySlot);
        memcpy(&dstParty[dstPartySlot], &partyBuffer[i], sizeof(struct Pokemon));
    }

    Free(partyBuffer);
}

static void GetPartyAndSlotFromPartyMenuId(s8 menuId, struct Pokemon **party, s8 *partySlot)
{
    switch (gPartyMenu.layout)
    {
    case PARTY_LAYOUT_MULTI_FULL_PARTNER:
    case PARTY_LAYOUT_MULTI_FULL_SHOWCASE_PARTNER:
        *party = gParties[B_TRAINER_PARTNER];
        *partySlot = menuId;
        break;
    case PARTY_LAYOUT_MULTI_SHOWCASE:
        switch (menuId)
        {
        case 3:
        case 4:
        case 5:
            *party = gParties[B_TRAINER_PARTNER];
            *partySlot = menuId - MULTI_PARTY_SIZE;
            break;
        default:
            *party = gParties[B_TRAINER_PLAYER];
            *partySlot = menuId;
            break;
        }
        break;
    case PARTY_LAYOUT_MULTI:
        switch (menuId)
        {
        case 1:
            *party = gParties[B_TRAINER_PARTNER];
            *partySlot = 0;
            break;
        case 4:
        case 5:
            *party = gParties[B_TRAINER_PARTNER];
            *partySlot = menuId - MULTI_PARTY_SIZE;
            break;
        case 2:
        case 3:
            *party = gParties[B_TRAINER_PLAYER];
            *partySlot = menuId - 1;
            break;
        default:
            *party = gParties[B_TRAINER_PLAYER];
            *partySlot = menuId;
            break;
        }
        break;
    default:
        *party = gParties[B_TRAINER_PLAYER];
        *partySlot = menuId;
        break;
    }
}

// ==================================================
// Script specials
// ==================================================

void DoBattlePyramidMonsHaveHeldItem(void)
{
    u8 i;

    gSpecialVar_Result = FALSE;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HELD_ITEM) != ITEM_NONE)
        {
            gSpecialVar_Result = TRUE;
            break;
        }
    }
}

void MoveDeleterChooseMoveToForget(void)
{
    ShowPokemonSummaryScreen(SUMMARY_MODE_SELECT_MOVE, gParties[B_TRAINER_PLAYER], gSpecialVar_0x8004, gPartiesCount[B_TRAINER_PLAYER] - 1, CB2_ReturnToField);
    gFieldCallback = FieldCB_ContinueScriptHandleMusic;
}

void GetNumMovesSelectedMonHas(void)
{
    u32 i;
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();

    gSpecialVar_Result = 0;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetBoxMonData(boxmon , MON_DATA_MOVE1 + i) != MOVE_NONE)
            gSpecialVar_Result++;
    }
}

void BufferMoveDeleterNicknameAndMove(void)
{
    enum Move move = MOVE_NONE;
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();
    move = GetBoxMonData(boxmon, MON_DATA_MOVE1 + gSpecialVar_0x8005);
    GetBoxMonData(boxmon, MON_DATA_NICKNAME, gStringVar1);
    StringCopy(gStringVar2, GetMoveName(move));
}

void MoveDeleterForgetMove(void)
{
    enum Move move = MOVE_NONE;
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();
    SetBoxMonData(boxmon, MON_DATA_MOVE1 + gSpecialVar_0x8005, &move);
    SetBoxMonData(boxmon, MON_DATA_PP1 + gSpecialVar_0x8005, &gMovesInfo[MOVE_NONE].pp);
    u8 ppBonuses = GetBoxMonData(boxmon, MON_DATA_PP_BONUSES);
    ppBonuses &= gPPUpClearMask[gSpecialVar_0x8005];
    SetBoxMonData(boxmon, MON_DATA_PP_BONUSES, &ppBonuses);
    for (u32 i = gSpecialVar_0x8005; i < MAX_MON_MOVES - 1; i++)
        ShiftMoveSlot(boxmon, i, i + 1);
}

void IsSelectedMonEgg(void)
{
    struct BoxPokemon *boxmon = GetSelectedBoxMonFromPcOrParty();
    if (GetBoxMonData(boxmon, MON_DATA_IS_EGG))
        gSpecialVar_Result = TRUE;
    else
        gSpecialVar_Result = FALSE;
}

void IsLastMonThatKnowsSurf(void)
{
    enum Move move;
    u32 i, j;

    gSpecialVar_Result = FALSE;
    if (gSpecialVar_0x8004 == PC_MON_CHOSEN)
        return;

    move = GetMonData(&gParties[B_TRAINER_PLAYER][gSpecialVar_0x8004], MON_DATA_MOVE1 + gSpecialVar_0x8005);
    if (move == MOVE_SURF)
    {
        for (i = 0; i < CalculatePlayerPartyCount(); i++)
        {
            if (i != gSpecialVar_0x8004)
            {
                for (j = 0; j < MAX_MON_MOVES; j++)
                {
                    if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_MOVE1 + j) == MOVE_SURF)
                        return;
                }
            }
        }
        if (AnyStorageMonWithMove(move) != TRUE)
            gSpecialVar_Result = !P_CAN_FORGET_HIDDEN_MOVE;
    }
}

// ==================================================
// Helpers
// ==================================================

bool8 IsMultiBattle(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_MULTI && IsDoubleBattle() && gMain.inBattle)
        return TRUE;
    else
        return FALSE;
}

u8 GetCursorSelectionMonId(void)
{
    return gPartyMenu.slotId;
}

u8 GetPartyMenuType(void)
{
    return gPartyMenu.menuType;
}

u8 *GetMonNickname(struct Pokemon *mon, u8 *dest)
{
    GetMonData(mon, MON_DATA_NICKNAME, dest);
    return StringGet_Nickname(dest);
}

u8 GetAilmentFromStatus(u32 status)
{
    if (status & STATUS1_PSN_ANY)
        return AILMENT_PSN;
    if (status & STATUS1_PARALYSIS)
        return AILMENT_PRZ;
    if (status & STATUS1_SLEEP)
        return AILMENT_SLP;
    if (status & STATUS1_FREEZE)
        return AILMENT_FRZ;
    if (status & STATUS1_BURN)
        return AILMENT_BRN;
    if (status & STATUS1_FROSTBITE)
        return AILMENT_FRB;
    return AILMENT_NONE;
}

u8 GetMonAilment(struct Pokemon *mon)
{
    u8 ailment;

    if (GetMonData(mon, MON_DATA_HP) == 0)
        return AILMENT_FNT;
    ailment = GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS));
    if (ailment != AILMENT_NONE)
        return ailment;
    if (ShouldPokemonShowActivePokerus(mon))
        return AILMENT_PKRS;
    return AILMENT_NONE;
}

enum CanMoveBeLearned CanTeachMove(struct Pokemon *mon, enum Move move)
{
    if (GetMonData(mon, MON_DATA_IS_EGG))
        return CANNOT_LEARN_MOVE_IS_EGG;
    else if (!CanMonEverLearnMove(GetMonData(mon, MON_DATA_SPECIES_OR_EGG), move))
        return CANNOT_LEARN_MOVE;
    else if (MonKnowsMove(mon, move) == TRUE)
        return ALREADY_KNOWS_MOVE;
    else if (!CanLearnTeachableMove(GetMonData(mon, MON_DATA_SPECIES_OR_EGG), move))
        return CANNOT_LEARN_MOVE;
    else
        return CAN_LEARN_MOVE;
}

enum Move ItemIdToBattleMoveId(enum Item item)
{
    return (GetItemPocket(item) == POCKET_TM_HM) ? GetItemTMHMMoveId(item) : MOVE_NONE;
}

bool8 MonKnowsMove(struct Pokemon *mon, enum Move move)
{
    u8 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetMonData(mon, MON_DATA_MOVE1 + i) == move)
            return TRUE;
    }
    return FALSE;
}

bool8 BoxMonKnowsMove(struct BoxPokemon *boxMon, enum Move move)
{
    u8 i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetBoxMonData(boxMon, MON_DATA_MOVE1 + i) == move)
            return TRUE;
    }
    return FALSE;
}

enum ItemEffectType GetItemEffectType(enum Item item)
{
    u32 statusCure;
    const u8 *itemEffect = GetItemEffect(item);

    if (itemEffect == NULL)
        return ITEM_EFFECT_NONE;

    if ((itemEffect[0] & ITEM0_DIRE_HIT) || itemEffect[1] || (itemEffect[3] & ITEM3_GUARD_SPEC))
        return ITEM_EFFECT_X_ITEM;
    else if (itemEffect[0] & ITEM0_SACRED_ASH)
        return ITEM_EFFECT_SACRED_ASH;
    else if (itemEffect[0] & ITEM0_POKEVIAL)
        return ITEM_EFFECT_POKEVIAL;
    else if (itemEffect[3] & ITEM3_LEVEL_UP)
        return ITEM_EFFECT_RAISE_LEVEL;
    else if (itemEffect[0] & ITEM0_HEXORB)
        return ITEM_EFFECT_HEXORB;

    statusCure = itemEffect[3] & ITEM3_STATUS_ALL;
    if (statusCure || (itemEffect[0] >> 7))
    {
        if (statusCure == ITEM3_SLEEP)
            return ITEM_EFFECT_CURE_SLEEP;
        else if (statusCure == ITEM3_POISON)
            return ITEM_EFFECT_CURE_POISON;
        else if (statusCure == ITEM3_BURN)
            return ITEM_EFFECT_CURE_BURN;
        else if (statusCure == ITEM3_FREEZE)
            return ITEM_EFFECT_CURE_FREEZE_FROSTBITE;
        else if (statusCure == ITEM3_PARALYSIS)
            return ITEM_EFFECT_CURE_PARALYSIS;
        else if (statusCure == ITEM3_CONFUSION)
            return ITEM_EFFECT_CURE_CONFUSION;
        else if (itemEffect[0] >> 7 && !statusCure)
            return ITEM_EFFECT_CURE_INFATUATION;
        else
            return ITEM_EFFECT_CURE_ALL_STATUS;
    }

    if (itemEffect[4] & (ITEM4_REVIVE | ITEM4_HEAL_HP))
        return ITEM_EFFECT_HEAL_HP;
    else if (itemEffect[4] & ITEM4_EV_ATK)
        return ITEM_EFFECT_ATK_EV;
    else if (itemEffect[4] & ITEM4_EV_HP)
        return ITEM_EFFECT_HP_EV;
    else if (itemEffect[5] & ITEM5_EV_SPATK)
        return ITEM_EFFECT_SPATK_EV;
    else if (itemEffect[5] & ITEM5_EV_SPDEF)
        return ITEM_EFFECT_SPDEF_EV;
    else if (itemEffect[5] & ITEM5_EV_SPEED)
        return ITEM_EFFECT_SPEED_EV;
    else if (itemEffect[5] & ITEM5_EV_DEF)
        return ITEM_EFFECT_DEF_EV;
    else if (itemEffect[4] & ITEM4_EVO_STONE)
        return ITEM_EFFECT_EVO_STONE;
    else if (itemEffect[4] & ITEM4_PP_UP)
        return ITEM_EFFECT_PP_UP;
    else if (itemEffect[5] & ITEM5_PP_MAX)
        return ITEM_EFFECT_PP_MAX;
    else if (itemEffect[4] & (ITEM4_HEAL_PP | ITEM4_HEAL_PP_ONE))
        return ITEM_EFFECT_HEAL_PP;
    else
        return ITEM_EFFECT_NONE;
}

void ShiftMoveSlot(struct BoxPokemon *mon, u8 slotTo, u8 slotFrom)
{
    enum Move move1 = GetBoxMonData(mon, MON_DATA_MOVE1 + slotTo);
    enum Move move0 = GetBoxMonData(mon, MON_DATA_MOVE1 + slotFrom);
    u8 pp1 = GetBoxMonData(mon, MON_DATA_PP1 + slotTo);
    u8 pp0 = GetBoxMonData(mon, MON_DATA_PP1 + slotFrom);
    u8 ppBonuses = GetBoxMonData(mon, MON_DATA_PP_BONUSES);
    u8 ppBonusMask1 = gPPUpGetMask[slotTo];
    u8 ppBonusMove1 = (ppBonuses & ppBonusMask1) >> (slotTo * 2);
    u8 ppBonusMask2 = gPPUpGetMask[slotFrom];
    u8 ppBonusMove2 = (ppBonuses & ppBonusMask2) >> (slotFrom * 2);
    ppBonuses &= ~ppBonusMask1;
    ppBonuses &= ~ppBonusMask2;
    ppBonuses |= (ppBonusMove1 << (slotFrom * 2)) + (ppBonusMove2 << (slotTo * 2));
    SetBoxMonData(mon, MON_DATA_MOVE1 + slotTo, &move0);
    SetBoxMonData(mon, MON_DATA_MOVE1 + slotFrom, &move1);
    SetBoxMonData(mon, MON_DATA_PP1 + slotTo, &pp0);
    SetBoxMonData(mon, MON_DATA_PP1 + slotFrom, &pp1);
    SetBoxMonData(mon, MON_DATA_PP_BONUSES, &ppBonuses);
}

// ==================================================
// Vanilla assets used by other screens
// ==================================================

void LoadHeldItemIcons(void)
{
    LoadSpriteSheet(&gSpriteSheet_HeldItem);
    LoadSpritePalette(&sSpritePalette_HeldItem);
}

void DrawHeldItemIconsForTrade(u8 *partyCounts, u8 *partySpriteIds, u8 whichParty)
{
    u16 i;
    enum Item item;

    switch (whichParty)
    {
    case TRADE_PLAYER:
        for (i = 0; i < partyCounts[TRADE_PLAYER]; i++)
        {
            item = GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HELD_ITEM);
            if (item != ITEM_NONE)
                CreateHeldItemSpriteForTrade(partySpriteIds[i], ItemIsMail(item));
        }
        break;
    case TRADE_PARTNER:
        for (i = 0; i < partyCounts[TRADE_PARTNER]; i++)
        {
            item = GetMonData(&gParties[B_TRAINER_OPPONENT_A][i], MON_DATA_HELD_ITEM);
            if (item != ITEM_NONE)
                CreateHeldItemSpriteForTrade(partySpriteIds[i + PARTY_SIZE], ItemIsMail(item));
        }
        break;
    }
}

static void CreateHeldItemSpriteForTrade(u8 spriteId, bool8 isMail)
{
    u8 subpriority = gSprites[spriteId].subpriority;
    u8 newSpriteId = CreateSprite(&sSpriteTemplate_HeldItem, 250, 170, subpriority - 1);

    gSprites[newSpriteId].x2 = 4;
    gSprites[newSpriteId].y2 = 10;
    gSprites[newSpriteId].callback = SpriteCB_HeldItem;
    gSprites[newSpriteId].data[7] = spriteId;
    StartSpriteAnim(&gSprites[newSpriteId], isMail);
    gSprites[newSpriteId].callback(&gSprites[newSpriteId]);
}

static void SpriteCB_HeldItem(struct Sprite *sprite)
{
    u8 otherSpriteId = sprite->data[7];

    if (gSprites[otherSpriteId].invisible)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
        sprite->x = gSprites[otherSpriteId].x + gSprites[otherSpriteId].x2;
        sprite->y = gSprites[otherSpriteId].y + gSprites[otherSpriteId].y2;
    }
}

void LoadPartyMenuAilmentGfx(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_StatusIcons);
    LoadSpritePalette(&sSpritePalette_StatusIcons);
}

#endif // UI_PARTY_MENU
