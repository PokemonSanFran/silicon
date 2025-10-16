#include "global.h"
#include "task.h"
#include "text.h"
#include "menu.h"
#include "sound.h"
#include "main.h"
#include "save.h"
#include "palette.h"
#include "gpu_regs.h"
#include "bg.h"
#include "text_window.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "naming_screen.h"
#include "overworld.h"
#include "event_data.h"
#include "safari_zone.h"
#include "new_game.h"
#include "play_time.h"
#include "script.h"
#include "field_screen_effect.h"
#include "random.h"
#include "quests.h"
#include "constants/quests.h"
#include "script_pokemon_util.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "field_specials.h"
#include "constants/species.h"
#include "debug.h"
#include "debug_start.h"
#include "story_jump.h"
#include "constants/story_jump.h"
#include "main_menu.h"

extern const u8 gText_SelectPoint[];
extern const u8 gText_ProlougeIntro[];
extern const u8 gText_BecomeChampion[];
extern const u8 gText_TheAnnouncement[];
extern const u8 gText_BeginAdventure[];
extern const u8 gText_ChosenStarter[];
extern const u8 gText_ImProbablyBetterThanYou[];

static const struct MenuAction sMenuActions_DebugStartChoices[] = {
    {gText_ProlougeIntro},
    {gText_BecomeChampion},
    {gText_TheAnnouncement},
    {gText_BeginAdventure},
    {gText_ChosenStarter},
	{gText_ImProbablyBetterThanYou},
};

static bool8 SetupDebugStartScreen(void);
static void InitDebugStartScreenWindows(void);
static void VBlankCB(void);
static void MainCB(void);
static void Task_DoDebugAskQuestion(u8 taskId);
static void ShowDebugStartChoices(void);
static void Task_DebugStartScreenChoice(u8 taskId);
static void CB2_FadeAndDoReset(void);
static void CancelDebugStartReturnToTitle(u8 taskId);

static const struct BgTemplate sClearSaveBgTemplates[2] = {
	{
		.bg = 0,
		.charBaseIndex = 0,
		.mapBaseIndex = 31,
		.screenSize = 0,
		.paletteMode = 0,
		.priority = 0,
		.baseTile = 0,
	},
	{
		.bg = 3,
		.charBaseIndex = 0,
		.mapBaseIndex = 30,
		.screenSize = 0,
		.paletteMode = 0,
		.priority = 1,
		.baseTile = 0,
	},
};

static const struct WindowTemplate sClearSaveTextWindow[] = {
	{
		.bg = 0,
		.tilemapLeft = 3,
		.tilemapTop = 15,
		.width = 26,
		.height = 4,
		.paletteNum = 15,
		.baseBlock = 11,
	},
	DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sDebugStartChoices[] = {
	{
		.bg = 0,
		.tilemapLeft = 1,
		.tilemapTop = 1,
		.width = 25,
		.height = 12,
		.paletteNum = 15,
		.baseBlock = 115,
	}
};

void CB2_InitDebugStartScreen(void)
{
	if (SetupDebugStartScreen())
    {
        AssignDefaultPlayerName();
		CreateTask(Task_DoDebugAskQuestion, 0);
    }
}

static bool8 SetupDebugStartScreen(void)
{
	u16 i;

	switch (gMain.state) {
		case 0:
		default:
			SetVBlankCallback(NULL);
			SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0);
			SetGpuReg(REG_OFFSET_BG0HOFS, 0);
			SetGpuReg(REG_OFFSET_BG0VOFS, 0);
			SetGpuReg(REG_OFFSET_BG3HOFS, 0);
			SetGpuReg(REG_OFFSET_BG3VOFS, 0);
			SetGpuReg(REG_OFFSET_WIN0H, 0);
			SetGpuReg(REG_OFFSET_WIN0V, 0);
			SetGpuReg(REG_OFFSET_WININ, 0);
			SetGpuReg(REG_OFFSET_WINOUT, 0);
			SetGpuReg(REG_OFFSET_BLDCNT, 0);
			SetGpuReg(REG_OFFSET_BLDALPHA, 0);
			SetGpuReg(REG_OFFSET_BLDY, 0);
			DmaFill16(3, 0, (void *)VRAM, VRAM_SIZE);
			DmaFill32(3, 0, (void *)OAM, OAM_SIZE);
			DmaFill16(3, 0, (void *)(PLTT + 2), PLTT_SIZE - 2);
			ResetPaletteFade();
			gPlttBufferUnfaded[0] = RGB_WHITE;
			gPlttBufferFaded[0] = RGB_WHITE;
			gPlttBufferUnfaded[1] = RGB(5, 10, 14);
			gPlttBufferFaded[1] = RGB(5, 10, 14);
			for (i = 0; i < 0x10; i++)
				((u16 *)(VRAM + 0x20))[i] = 0x1111;

			for (i = 0; i < 0x400; i++)
				((u16 *)(BG_SCREEN_ADDR(30)))[i] = 0x0001;
			ResetTasks();
			ResetSpriteData();
			ResetBgsAndClearDma3BusyFlags(0);
			InitBgsFromTemplates(0, sClearSaveBgTemplates, ARRAY_COUNT(sClearSaveBgTemplates));
			SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
			ShowBg(0);
			ShowBg(3);
			SetGpuReg(REG_OFFSET_BLDCNT, 0);
			InitDebugStartScreenWindows();
			BeginNormalPaletteFade(PALETTES_BG, 0, 0x10, 0, RGB_WHITEALPHA);
			EnableInterrupts(INTR_FLAG_VBLANK);
			SetVBlankCallback(VBlankCB);
			gMain.state = 1;
			break;
		case 1:
			UpdatePaletteFade();
			if (!gPaletteFade.active) {
				SetMainCallback2(MainCB);
				return TRUE;
			}
	}
	return FALSE;
}

static void InitDebugStartScreenWindows(void)
{
	InitWindows(sClearSaveTextWindow);
	DeactivateAllTextPrinters();
	FillWindowPixelBuffer(0, PIXEL_FILL(0));
	LoadWindowGfx(0, 0, 2, 224);
	LoadPalette(gStandardMenuPalette, 0xF0, 0x20);
}

static void VBlankCB(void)
{
	TransferPlttBuffer();
}

static void MainCB(void)
{
	RunTasks();
	UpdatePaletteFade();
}

static void Task_DoDebugAskQuestion(u8 taskId)
{
	DrawStdFrameWithCustomTileAndPalette(0, FALSE, 2, 14);
	AddTextPrinterParameterized(0, FONT_NARROW, gText_SelectPoint, 0, 1, 0, 0);
	ShowDebugStartChoices();
	gTasks[taskId].func = Task_DebugStartScreenChoice;
}
static void ShowDebugStartChoices(void)
{
	u8 windowId;
	LoadMessageBoxAndBorderGfx();
	windowId = AddWindow(sDebugStartChoices);
	DrawStdWindowFrame(windowId, FALSE);
	PrintMenuTable(windowId, ARRAY_COUNT(sMenuActions_DebugStartChoices),
	               sMenuActions_DebugStartChoices);
	InitMenuInUpperLeftCornerNormal(windowId, ARRAY_COUNT(sMenuActions_DebugStartChoices), 0);
	CopyWindowToVram(windowId, 3);
}

static void Task_DebugStartScreenChoice(u8 taskId)
{
    s32 input = Menu_ProcessInput();
    u32 jumpPoint = input + 1;

    switch (input)
    {
        case MENU_B_PRESSED:
            CancelDebugStartReturnToTitle(taskId);
            break;
        case MENU_NOTHING_CHOSEN:
            break;
        default:
            PlaySE(SE_SELECT);
            DebugStart_NewGame();
            JumpPlayerToStoryPoint(jumpPoint, JUMP_DEBUG);
            WarpPlayerAfterVarSet();
            break;
    }
}

static void CancelDebugStartReturnToTitle(u8 taskId)
{
    PlaySE(SE_SELECT);
    DestroyTask(taskId);
    SetMainCallback2(CB2_FadeAndDoReset);
}

static void CB2_FadeAndDoReset(void)
{
	switch (gMain.state) {
		case 0:
		default:
			BeginNormalPaletteFade(PALETTES_BG, 0, 0, 0x10, RGB_WHITEALPHA);
			gMain.state = 1;
			break;
		case 1:
			UpdatePaletteFade();
			if (!gPaletteFade.active) {
				FreeAllWindowBuffers();
				DoSoftReset();
			}
			break;
	}
}

void DebugStart_NewGame(void)
{
    ClearSaveData();
	FieldClearVBlankHBlankCallbacks();
	StopMapMusic();
	ResetSafariZoneFlag();
	NewGameInitData();
	ResetInitialPlayerAvatarState();
	PlayTimeCounter_Start();
	ScriptContext_Init();
	UnlockPlayerFieldControls();
	gFieldCallback2 = NULL;
	DoMapLoadLoop(&gMain.state);
	SetFieldVBlankCallback();
    gDifferentSaveFile = FALSE;
}
