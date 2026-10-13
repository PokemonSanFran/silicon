#include "global.h"
#include "battle.h"
#include "battle_interface.h"
#include "battle_pike.h"
#include "bg.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "item.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "options_visual.h"
#include "ui_options_menu.h"
#include "ui_party_menu.h"
#include "constants/party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/ui_party_menu.h"

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

static EWRAM_DATA struct PartyMenuData *sPartyMenuDataPtr = NULL;

static void CB2_PartyMenu_Setup(void);
static void CB2_PartyMenu_Idle(void);
static void VBlankCB_PartyMenu_Idle(void);
static void PartySetup_Bgs(void);
static void PartySetup_Graphics(void);
static void PartySetup_Windows(void);
static void PartySetup_Slots(void);
static void PartySetup_Sprites(void);
static void Task_PartyMenu_WaitForFade(u8);
static void Task_PartyMenu_HandleInput(u8);
static void Task_PartyMenu_HandleHeldInput(u8);
static void PartySlot_Draw(u32);
static void PartySlot_DrawEmpty(u32);
static void PartySlot_Render(u32, u32, struct Pokemon *);
static void PartySlot_DrawFrame(u32, u32, bool32);
static void PartySlot_DrawMonInfo(u32, struct Pokemon *, u32);
static void PartySlot_DrawGender(u32, struct Pokemon *, const u8 *, u32);
static void PartySlot_DrawLevel(u32, struct Pokemon *, u32);
static void PartySlot_DrawHp(u32, struct Pokemon *, u32);
static void PartySlot_DrawItem(u32, struct Pokemon *, u32);
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
static void PartyView_DisplayStdMessage(u32);
static void PartyView_PrintHeader(const u8 *);
static void PartyView_ClearHeader(void);
static void PartyView_ClearFooter(void);
static void PartyView_RemoveWindow(u8 *);
static bool8 ShouldUseChooseMonText(void);
static void Task_PartyMenu_Exit(u8);
static void PartyMenu_Free(void);

#include "data/ui_party_menu.h"

// ==================================================
// Party menu set up
// ==================================================

void PartyMenu_Init(enum PartyMenuType menuType, enum PartyMenuLayout layout, u8 partyAction, bool8 keepCursorPos, u8 messageId, TaskFunc task, MainCallback callback)
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
        PartyView_DisplayStdMessage(sPartyMenuDataPtr->messageId);
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
        gTasks[taskId].func = Task_PartyMenu_HandleInput;
}

static void Task_PartyMenu_HandleInput(u8 taskId)
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
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_PartyMenu_Exit;
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
        gTasks[taskId].func = Task_PartyMenu_HandleInput;
    }
}

// ==================================================
// Party slots
// ==================================================

static void PartySlot_Draw(u32 slot)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];
    struct Pokemon *mon = NULL;

    if (slot < sPartyMenuDataPtr->partyCount)
        mon = &gParties[B_TRAINER_PLAYER][slot];

    PartySlot_Render(windowId, slot / PARTY_SLOT_COLUMNS, mon);
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    ScheduleBgCopyTilemapToVram(PARTY_BG_SLOTS);
}

static void PartySlot_DrawEmpty(u32 slot)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];

    PartySlot_Render(windowId, slot / PARTY_SLOT_COLUMNS, NULL);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static void PartySlot_Render(u32 windowId, u32 row, struct Pokemon *mon)
{
    PartySlot_DrawFrame(windowId, row, mon == NULL);
    if (mon != NULL)
        PartySlot_DrawMonInfo(windowId, mon, row);
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

static void PartySlot_DrawMonInfo(u32 windowId, struct Pokemon *mon, u32 row)
{
    u32 contentY = sPartyMenu_SlotRows[row].contentY;
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.nickname;
    u8 nickname[POKEMON_NAME_LENGTH + 1];

    GetMonData(mon, MON_DATA_NICKNAME, nickname);
    StringGet_Nickname(nickname);
    PartySlot_Print(windowId, GetFontIdToFit(nickname, FONT_OUTLINED, 0, rect->width),
                    rect->x, rect->y + contentY, COLORID_PARTY_WHITE, nickname);

    if (GetMonData(mon, MON_DATA_IS_EGG))
        return;

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
        return;

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
    PartySlot_Render(heldWindowId, slot / PARTY_SLOT_COLUMNS, &gParties[B_TRAINER_PLAYER][gPartyMenu.slotId]);
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
    PartyView_DisplayStdMessage(PARTY_MSG_CHOOSE_MON);
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

static void PartyView_DisplayStdMessage(u32 stringId)
{
    u8 *windowPtr = &sPartyMenuDataPtr->windowId[PARTY_DYN_WIN_MSG];

    PartyView_RemoveWindow(windowPtr);
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

static void PartyView_RemoveWindow(u8 *windowPtr)
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

static void Task_PartyMenu_Exit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
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
