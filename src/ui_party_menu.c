#include "global.h"
#include "battle.h"
#include "battle_interface.h"
#include "bg.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "window.h"
#include "options_visual.h"
#include "ui_options_menu.h"
#include "ui_party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/ui_party_menu.h"

struct PartySlotRect
{
    u8 x, y, width, height;
};

struct PartyMenuData
{
    MainCallback savedCB;
    u8 partyCount;
    u8 cursorSlot;
    u8 cursorSpriteId;
    u8 monIconSpriteIds[PARTY_SIZE];
    u8 slotWindowIds[PARTY_SIZE];
    u16 slotsTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
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
static void PartySlot_Draw(u32);
static void PartySlot_DrawFrame(u32, u32);
static void PartySlot_DrawMonInfo(u32, u32);
static void PartySlot_DrawGender(u32, struct Pokemon *, const u8 *, u32);
static void PartySlot_DrawLevel(u32, struct Pokemon *, u32);
static void PartySlot_DrawHp(u32, struct Pokemon *, u32);
static void PartySlot_Print(u32, u32, u32, u32, enum PartySlotTextColors, const u8 *);
static void PartyCursor_HandleDirectionalInput(void);
static void PartyCursor_SnapToSlot(void);
static void PartySetup_MonIcons(void);
static s16 PartyMonIcon_GetX(u32);
static s16 PartyMonIcon_GetY(u32);
static void Task_PartyMenu_Exit(u8);
static void PartyMenu_Free(void);

#include "data/ui_party_menu.h"

// ==================================================
// Party menu set up
// ==================================================

void PartyMenu_Init(MainCallback callback)
{
    sPartyMenuDataPtr = AllocZeroed(sizeof(struct PartyMenuData));
    if (!sPartyMenuDataPtr)
    {
        SetMainCallback2(callback);
        return;
    }

    sPartyMenuDataPtr->savedCB = callback;
    sPartyMenuDataPtr->partyCount = CalculatePlayerPartyCount();
    memset(sPartyMenuDataPtr->monIconSpriteIds, SPRITE_NONE, sizeof(sPartyMenuDataPtr->monIconSpriteIds));
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
    SetBgTilemapBuffer(PARTY_BG_SLOTS, sPartyMenuDataPtr->slotsTilemapBuf);
    ShowBg(PARTY_BG_SLOTS);
    ShowBg(PARTY_BG_WALLPAPER);
}

static void PartySetup_Graphics(void)
{
    DecompressDataWithHeaderVram(sPartyMenu_WallpaperTiles, (void *)BG_CHAR_ADDR(GetBgAttribute(PARTY_BG_WALLPAPER, BG_ATTR_CHARBASEINDEX)));
    LoadBgTilemap(PARTY_BG_WALLPAPER, sPartyMenu_WallpaperTilemap, BG_SCREEN_SIZE, 0);
    LoadPalette(sPartyMenu_WallpaperPalettes[OptionsMenu_GetSavedOptions(VISUAL_SETTINGS, VISUAL_OPTIONS_COLOR)],
                BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    SetBackdropFromColor(RGB_BLACK);

    LoadPalette(&sPartyMenu_Palette[BG_PLTT_ID(PARTY_PAL_SLOT_FIRST)], BG_PLTT_ID(PARTY_PAL_SLOT_FIRST),
                sizeof(sPartyMenu_Palette) - PLTT_SIZE_4BPP * PARTY_PAL_SLOT_FIRST);
}

static void PartySetup_Windows(void)
{
    InitWindows(sPartyMenu_WindowTemplates);
    DeactivateAllTextPrinters();

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
            .paletteNum = PARTY_PAL_SLOT_SLOTS,
            .baseBlock = baseBlock,
        };

        sPartyMenuDataPtr->slotWindowIds[slot] = AddWindow(&template);
        baseBlock += template.width * template.height;
    }
}

static void PartySetup_Slots(void)
{
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
        PartySlot_Draw(slot);
}

static void PartySetup_Sprites(void)
{
    PartySetup_MonIcons();

    LoadCompressedSpriteSheet(&sPartyMenu_CursorSpriteSheet);
    LoadSpritePalette(&sPartyMenu_CursorSpritePalette);
    sPartyMenuDataPtr->cursorSpriteId = CreateSprite(&sPartyMenu_CursorSpriteTemplate, 0, 0, PARTY_OBJ_SUBPRIORITY_CURSOR);

    struct Sprite *cursor = &gSprites[sPartyMenuDataPtr->cursorSpriteId];
    SetSubspriteTables(cursor, sPartyMenu_CursorSubspriteTable);
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
    PartyCursor_HandleDirectionalInput();

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_PartyMenu_Exit;
    }
}

// ==================================================
// Party slots
// ==================================================

static void PartySlot_Draw(u32 slot)
{
    u32 windowId = sPartyMenuDataPtr->slotWindowIds[slot];

    PartySlot_DrawFrame(windowId, slot);
    if (slot < sPartyMenuDataPtr->partyCount)
        PartySlot_DrawMonInfo(windowId, slot);

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void PartySlot_DrawFrame(u32 windowId, u32 slot)
{
    u32 row = slot / PARTY_SLOT_COLUMNS;
    u32 numTiles = PARTY_SLOT_WIDTH * sPartyMenu_SlotRows[row].height;
    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    const u8 *tilemap = sPartyMenu_SlotRows[row].tilemap;

    if (slot >= sPartyMenuDataPtr->partyCount)
        tilemap = sPartyMenu_SlotRows[row].emptyTilemap;

    for (u32 i = 0; i < numTiles; i++)
        CpuCopy16(&sPartyMenu_SlotTiles[TILE_OFFSET_4BPP(tilemap[i])], &tileData[TILE_OFFSET_4BPP(i)], TILE_SIZE_4BPP);
}

static void PartySlot_DrawMonInfo(u32 windowId, u32 slot)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][slot];
    u32 contentY = sPartyMenu_SlotRows[slot / PARTY_SLOT_COLUMNS].contentY;
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.nickname;
    u8 nickname[POKEMON_NAME_LENGTH + 1];

    GetMonData(mon, MON_DATA_NICKNAME, nickname);
    StringGet_Nickname(nickname);
    PartySlot_Print(windowId, GetFontIdToFit(nickname, FONT_OUTLINED, 0, rect->width),
                    rect->x, rect->y + contentY, COLORID_PARTY_DEFAULT, nickname);

    if (GetMonData(mon, MON_DATA_IS_EGG))
        return;

    PartySlot_DrawHp(windowId, mon, contentY);
    PartySlot_DrawGender(windowId, mon, nickname, contentY);
    PartySlot_DrawLevel(windowId, mon, contentY);
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
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_MALE, gText_MaleSymbol);
        break;
    case MON_FEMALE:
        PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_FEMALE, gText_FemaleSymbol);
        break;
    }
}

static void PartySlot_DrawLevel(u32 windowId, struct Pokemon *mon, u32 contentY)
{
    const struct PartySlotRect *rect = &sPartyMenu_SlotLayout.level;
    u32 numberX = rect->x + GetStringWidth(FONT_OUTLINED, gText_LevelSymbol, 0) + PARTY_SLOT_LEVEL_SPACING;
    u8 level[4];

    ConvertIntToDecimalStringN(level, GetMonData(mon, MON_DATA_LEVEL), STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x, rect->y + contentY, COLORID_PARTY_LEVEL, gText_LevelSymbol);
    PartySlot_Print(windowId, FONT_OUTLINED, numberX, rect->y + contentY, COLORID_PARTY_DEFAULT, level);
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

    FillWindowPixelRect(windowId, PIXEL_FILL(colors[0]), fillX, bar->y + contentY, fillMaxWidth, bar->height);
    FillWindowPixelRect(windowId, PIXEL_FILL(colors[0]), bar->x, fillY, bar->width, fillHeight);
    FillWindowPixelRect(windowId, PIXEL_FILL(colors[1]), fillX, fillY, fillMaxWidth, fillHeight);
    if (fillWidth > 0)
        FillWindowPixelRect(windowId, PIXEL_FILL(colors[2]), fillX, fillY, fillWidth, fillHeight);

    u8 *end = ConvertIntToDecimalStringN(text, hp, STR_CONV_MODE_LEFT_ALIGN, 3);
    *end++ = CHAR_SLASH;
    ConvertIntToDecimalStringN(end, maxHp, STR_CONV_MODE_LEFT_ALIGN, 3);
    PartySlot_Print(windowId, FONT_OUTLINED, rect->x + GetStringRightAlignXOffset(FONT_OUTLINED, text, rect->width),
                    rect->y + contentY, COLORID_PARTY_DEFAULT, text);
}

static void PartySlot_Print(u32 windowId, u32 fontId, u32 x, u32 y, enum PartySlotTextColors color, const u8 *str)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, 0, 0, sPartyMenu_TextColors[color], TEXT_SKIP_DRAW, str);
}

// ==================================================
// Cursor
// ==================================================

static void PartyCursor_HandleDirectionalInput(void)
{
    u32 partyCount = sPartyMenuDataPtr->partyCount;
    u32 slot = sPartyMenuDataPtr->cursorSlot;
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

    if (slot >= partyCount || slot == sPartyMenuDataPtr->cursorSlot)
        return;

    PlaySE(SE_SELECT);
    sPartyMenuDataPtr->cursorSlot = slot;
    PartyCursor_SnapToSlot();
}

static void PartyCursor_SnapToSlot(void)
{
    struct Sprite *cursor = &gSprites[sPartyMenuDataPtr->cursorSpriteId];
    u32 slot = sPartyMenuDataPtr->cursorSlot;

    cursor->x = PartyMonIcon_GetX(slot);
    cursor->y = PartyMonIcon_GetY(slot) + PARTY_CURSOR_Y_OFFSET;
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
                                         PARTY_OBJ_SUBPRIORITY_MON_ICON,
                                         GetMonData(mon, MON_DATA_PERSONALITY), GetMonData(mon, MON_DATA_IS_EGG));

        gSprites[spriteId].oam.priority = PARTY_OBJ_PRIORITY;
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

// ==================================================
// Exit
// ==================================================

static void Task_PartyMenu_Exit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sPartyMenuDataPtr->savedCB);
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
    }

    FreeMonIconPalettes();

    TRY_FREE_AND_SET_NULL(sPartyMenuDataPtr);
}
