#include "global.h"
#include "bg.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "pokemon.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "window.h"
#include "options_visual.h"
#include "ui_options_menu.h"
#include "ui_party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/ui_party_menu.h"

struct PartyMenuData
{
    MainCallback savedCB;
    u8 partyCount;
    u8 cursorSlot;
    u8 cursorSpriteId;
    u16 slotsTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
};

static EWRAM_DATA struct PartyMenuData *sPartyMenuDataPtr = NULL;

static void CB2_PartyMenu_Setup(void);
static void CB2_PartyMenu_Idle(void);
static void VBlankCB_PartyMenu_Idle(void);
static void PartySetup_Bgs(void);
static void PartySetup_Graphics(void);
static void PartySetup_Slots(void);
static void PartySetup_Sprites(void);
static void Task_PartyMenu_WaitForFade(u8);
static void Task_PartyMenu_HandleInput(u8);
static void PartyCursor_HandleDirectionalInput(void);
static void PartyCursor_SnapToSlot(void);
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

    DecompressDataWithHeaderVram(sPartyMenu_Tiles, (void *)BG_CHAR_ADDR(GetBgAttribute(PARTY_BG_SLOTS, BG_ATTR_CHARBASEINDEX)));
    LoadPalette(&sPartyMenu_Palette[BG_PLTT_ID(PARTY_PAL_SLOT_FIRST)], BG_PLTT_ID(PARTY_PAL_SLOT_FIRST),
                sizeof(sPartyMenu_Palette) - PLTT_SIZE_4BPP * PARTY_PAL_SLOT_FIRST);
}

static void PartySetup_Slots(void)
{
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        u32 row = slot / PARTY_SLOT_COLUMNS;
        u32 left = PARTY_SLOT_LEFT + PARTY_SLOT_WIDTH * (slot % PARTY_SLOT_COLUMNS);
        const u8 *tilemap = sPartyMenu_SlotRows[row].tilemap;

        if (GetMonData(&gParties[B_TRAINER_PLAYER][slot], MON_DATA_SPECIES) == SPECIES_NONE)
            tilemap = sPartyMenu_SlotRows[row].emptyTilemap;

        for (u32 y = 0; y < sPartyMenu_SlotRows[row].height; y++)
        {
            for (u32 x = 0; x < PARTY_SLOT_WIDTH; x++)
            {
                FillBgTilemapBufferRect(PARTY_BG_SLOTS, tilemap[y * PARTY_SLOT_WIDTH + x],
                                        left + x, sPartyMenu_SlotRows[row].top + y, 1, 1, PARTY_PAL_SLOT_SLOTS);
            }
        }
    }

    ScheduleBgCopyTilemapToVram(PARTY_BG_SLOTS);
}

static void PartySetup_Sprites(void)
{
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
            // wrap to the lowest filled slot in this column
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

    cursor->x = PARTY_CURSOR_X + PARTY_CURSOR_X_SPACING * (slot % PARTY_SLOT_COLUMNS);
    cursor->y = PARTY_CURSOR_Y + PARTY_CURSOR_Y_SPACING * (slot / PARTY_SLOT_COLUMNS);
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
    DestroySpriteAndFreeResources(&gSprites[sPartyMenuDataPtr->cursorSpriteId]);
    TRY_FREE_AND_SET_NULL(sPartyMenuDataPtr);
}
