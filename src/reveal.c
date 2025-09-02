#include "global.h"
#include "battle_main.h"
#include "bg.h"
#include "buzzr.h"
#include "decompress.h"
#include "dma3.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "gpu_regs.h"
#include "malloc.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "reveal.h"
#include "scanline_effect.h"
#include "script.h"
#include "script_menu.h"
#include "string_util.h"
#include "constants/reveal.h"
#include "constants/rgb.h"

void SetRevealFrameCounter(u32 timer);
void IncrementFrameCounter(void);
void SetRevealTrainerSpriteId(enum RevealTrainerSpriteIds trainerSprite, u32 spriteId);
void ResetRevealTrainerSpriteIds(void);
u32 GetRevealTrainerSpriteId(enum RevealTrainerSpriteIds);
void SetRevealCharacter(enum RevealIds character);
void FreezePlayerWhenOverworldLinkActive(void);
void Task_InitRevealCharacter(u8 taskId);
void SetOverworldState(bool32 fromOverworld);
u32 GetRevealCharacter(void);
bool32 GetOverworldState(void);
u32 GetRevealFrameCounter(void);
void ResetRevealFrameCounter(void);
void Script_RevealCharacter(struct ScriptContext *ctx);
bool32 IsScriptCalledFromOverworld(void);
static void FadescreenAndExitGracefully(void);
static void Task_WaitFadeAndExitGracefully(u8 taskId);
static bool32 AllocateStructs(void);
static void Reveal_SetupCallback(void);
static void FreeSpritePalettesResetSpriteData(void);
static void InitializeBackgroundsAndLoadBackgroundGraphics(void);
static void Reveal_InitWindows(void);
static void Reveal_VBlankCB(void);
static void Reveal_MainCB(void);
static bool32 Reveal_InitializeBackgrounds(void);
static bool32 AllocZeroedTilemapBuffers(void);
static void HandleAndShowBgs(void);
static void SetScheduleBgs(u32 backgroundId);
static const u32* Reveal_GetBgTiles(enum RevealBackgrounds backgroundId);
static const u32* Reveal_GetBgTilemap(enum RevealBackgrounds backgroundId);
static void LoadGraphics(void);
static void LoadRevealPalettes(void);
static void FreeResources(void);
static void FreeBackgrounds(void);
static void FreeStructs(void);
static void Reveal_SetUp();
static void DestroyTaskAndExit(u8 taskId);
static void Task_HandleRevealInput(u8 taskId);
static void Task_AddSpritesAndText(u8 taskId);
static void PlayRevealAnimation(u32 timer);
static void PrepareRevealBackground(u32 timer);
static void PrintRevealContent(u32 timer, enum RevealIds revealId, enum RevealWindows windowId);
static void PrintVerifiedBuzzrBadge(u32 fontId, u32 letterSpacing, u8* username, u32 buzzrId, u32 x);
static void PrintOverworldSprite(u32 timer, enum RevealIds revealId);
static void SpriteCB_RevealOverworldSprite(struct Sprite *sprite);
static void PrintTrainerSprite(u32 trainerPicId, u32 timer, enum RevealIds revealId);
static void InitializeTrainerSpriteOutline(u32 spriteId);
static void PrintTrainerSpriteOutline(u32 trainerPicId, u32 timer, enum RevealIds revealId);
static void SpriteCB_MoveTrainerSprite(struct Sprite *sprite);
static void CropTrainerSpriteBottom(void);
static void RestoreOBJLayerInWindow0(void);

static u8 *sBgTilemapBuffer[BG_REVEAL_COUNT] = {NULL};
static const u16 revealPalette[] = INCBIN_U16("graphics/reveal/palettes/reveal.gbapal");
static const u8 revealAnim0[]  = INCBIN_U8("graphics/reveal/frame0.4bpp");
static const u8 revealAnim1[]  = INCBIN_U8("graphics/reveal/frame1.4bpp");
static const u8 revealAnim2[]  = INCBIN_U8("graphics/reveal/frame2.4bpp");
static const u8 revealAnim3[]  = INCBIN_U8("graphics/reveal/frame3.4bpp");
static const u8 revealAnim4[]  = INCBIN_U8("graphics/reveal/frame4.4bpp");
static const u8 revealAnim5[]  = INCBIN_U8("graphics/reveal/frame5.4bpp");
static const u8 revealAnim6[]  = INCBIN_U8("graphics/reveal/frame6.4bpp");
static const u8 revealAnim7[]  = INCBIN_U8("graphics/reveal/frame7.4bpp");
static const u8 revealAnim8[]  = INCBIN_U8("graphics/reveal/frame8.4bpp");
static const u8 revealAnim9[]  = INCBIN_U8("graphics/reveal/frame9.4bpp");
static const u8 revealAnim10[] = INCBIN_U8("graphics/reveal/frame10.4bpp");
static const u8 revealAnim11[] = INCBIN_U8("graphics/reveal/frame11.4bpp");
static const u8 revealAnim12[] = INCBIN_U8("graphics/reveal/frame12.4bpp");
static const u8 revealAnim13[] = INCBIN_U8("graphics/reveal/frame13.4bpp");

static const u8 sVerified_Gfx[] = INCBIN_U8("graphics/ui_menus/buzzr/verified.4bpp");
static const u32 glassTrainerBgTiles[] = INCBIN_U32("graphics/ui_menus/glass/trainer/bg.4bpp.smol");
static const u32 glassTrainerBgTilemap[] = INCBIN_U32("graphics/ui_menus/glass/trainer/bg.bin.smolTM");

static const u8* const sRevealAnimationLUT[] =
{
    [REVEAL_FRAME_ANIMATION_0] = revealAnim0,
    [REVEAL_FRAME_ANIMATION_1] = revealAnim1,
    [REVEAL_FRAME_ANIMATION_2] = revealAnim2,
    [REVEAL_FRAME_ANIMATION_3] = revealAnim3,
    [REVEAL_FRAME_ANIMATION_4] = revealAnim4,
    [REVEAL_FRAME_ANIMATION_5] = revealAnim5,
    [REVEAL_FRAME_ANIMATION_6] = revealAnim6,
    [REVEAL_FRAME_ANIMATION_7] = revealAnim7,
    [REVEAL_FRAME_ANIMATION_8] = revealAnim8,
    [REVEAL_FRAME_ANIMATION_9] = revealAnim9,
    [REVEAL_FRAME_ANIMATION_10] = revealAnim10,
    [REVEAL_FRAME_ANIMATION_11] = revealAnim11,
    [REVEAL_FRAME_ANIMATION_12] = revealAnim12,
    [REVEAL_FRAME_ANIMATION_13] = revealAnim13,
};

static const u8 sRevealWindowFontColors[][3] =
{
    [REVEAL_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  REVEAL_PALETTE_BLACK, TEXT_COLOR_TRANSPARENT},
    [REVEAL_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  REVEAL_PALETTE_WHITE,  TEXT_COLOR_TRANSPARENT},
};

static const struct SpritePalette sRevealInterfaceSpritePalette =
{
    .data = revealPalette,
    .tag = PAL_REVEAL_UI_SPRITES,
};

static const struct BgTemplate sRevealBgTemplates[] =
{
    [BG0_REVEAL] =
    {
        .bg = BG0_REVEAL,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    [BG1_REVEAL_GLASS]
    {
        .bg = BG1_REVEAL_GLASS,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
};

static const struct WindowTemplate sRevealWindowTemplates[] =
{
    [REVEAL_WINDOW_ANIMATION] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 30,
        .height = 12,
        .paletteNum = REVEAL_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START,
    },
    [REVEAL_WINDOW_HEADER] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = REVEAL_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START + (30 * 12),
    },
    [REVEAL_WINDOW_QUOTE] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 15,
        .height = 5,
        .paletteNum = REVEAL_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START + (30 * 12) + (30 * 2),
    },
    [REVEAL_WINDOW_USERNAME] =
    {
        .bg = 0,
        .tilemapLeft = 7,
        .tilemapTop = 9,
        .width = 15,
        .height = 2,
        .paletteNum = REVEAL_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START + (30 * 12) + (30 * 2) + (15 * 5),
    },
    [REVEAL_WINDOW_TITLE] =
    {
        .bg = 0,
        .tilemapLeft = 7,
        .tilemapTop = 11,
        .width = 15,
        .height = 2,
        .paletteNum = REVEAL_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START + (30 * 12) + (30 * 2) + (15 * 5) + (15 * 2),
    },
    [REVEAL_WINDOW_BIO] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 14,
        .width = 30,
        .height = 4,
        .paletteNum = REVEAL_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START + (30 * 12) + (30 * 2) + (15 * 5) + (15 * 2) + (15 * 2),
    },
    [REVEAL_WINDOW_FOOTER] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = REVEAL_PALETTE_INTERFACE_ID,
        .baseBlock = VRAM_ANIMATION_START + (30 * 12) + (30 * 2) + (15 * 5) + (15 * 2) + (15 * 2) + (30 * 4),
    },
    DUMMY_WIN_TEMPLATE
};

const struct RevealPrintConfig sRevealPrintConfigs[REVEAL_WINDOW_COUNT] =
{
    [REVEAL_WINDOW_HEADER] = {
        .fontId = FONT_REVEAL,
        .x = 4,
        .y = 0,
        .colorIndex = REVEAL_FONT_COLOR_WHITE,
        .frameThreshold = REVEAL_FRAME_ANIMATION_HEADER_FOOTER,
    },
    [REVEAL_WINDOW_USERNAME] = {
        .fontId = FONT_REVEAL,
        .x = 2,
        .y = 0,
        .colorIndex = REVEAL_FONT_COLOR_WHITE,
        .frameThreshold = REVEAL_FRAME_ANIMATION_USERNAME,
    },
    [REVEAL_WINDOW_TITLE] = {
        .fontId = FONT_REVEAL,
        .x = 18,
        .y = 0,
        .colorIndex = REVEAL_FONT_COLOR_WHITE,
        .frameThreshold = REVEAL_FRAME_ANIMATION_USERNAME,
    },
    [REVEAL_WINDOW_QUOTE] = {
        .fontId = FONT_SMALL,
        .x = 4,
        .y = 0,
        .colorIndex = REVEAL_FONT_COLOR_BLACK,
        .frameThreshold = REVEAL_FRAME_ANIMATION_FLAVOR,
    },
    [REVEAL_WINDOW_BIO] = {
        .fontId = FONT_SMALL,
        .x = 4,
        .y = 0,
        .colorIndex = REVEAL_FONT_COLOR_BLACK,
        .frameThreshold = REVEAL_FRAME_ANIMATION_FLAVOR,
    },
    [REVEAL_WINDOW_FOOTER] = {
        .fontId = FONT_SMALL_NARROW,
        .x = 4,
        .y = 0,
        .colorIndex = REVEAL_FONT_COLOR_WHITE,
        .frameThreshold = REVEAL_FRAME_ANIMATION_HEADER_FOOTER,
    }
};


const struct RevealCharacterStruct sRevealCharacters[REVEAL_COUNT] =
{
    [REVEAL_ALICIA] =
    {
        .trainerId = TRAINER_RED,
        .buzzrId = BUZZR_USER_ALICIA,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Alicia\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Alicia's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(16,8,30),
    },
    [REVEAL_CHARLOTTE] =
    {
        .trainerId = TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS,
        .buzzrId = BUZZR_USER_CHARLOTTE,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Charlotte\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Charlotte's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(6,10,30),
    },
    [REVEAL_OLIVER] =
    {
        .trainerId = TRAINER_OLIVER,
        .buzzrId = BUZZR_USER_OLIVER,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Oliver\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Oliver's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(21,1,24),
    },
    [REVEAL_BELEN] =
    {
        .trainerId = TRAINER_BELEN,
        .buzzrId = BUZZR_USER_BELEN,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Belen\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Belen's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(9,7,29),
    },
    [REVEAL_KAI] =
    {
        .trainerId = TRAINER_KAI_NEWASSHOLEAPPEARS,
        .buzzrId = BUZZR_USER_KAI,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Kai\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Kai's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(28,14,9),
    },
    [REVEAL_SHINZO] =
    {
        .trainerId = TRAINER_SHINZO,
        .buzzrId = BUZZR_USER_SHINZO,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Shinzo\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Shinzo's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(8,20,12),
    },
    [REVEAL_EMRYS] =
    {
        .trainerId = TRAINER_EMRYS,
        .buzzrId = BUZZR_USER_EMRYS,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Emrys\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Emrys's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(14,19,31),
    },
    [REVEAL_RAMESH] =
    {
        .trainerId = TRAINER_RAMESH_IMIN,
        .buzzrId = BUZZR_USER_RAMESH,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Ramesh\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Ramesh's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(27,30,4),
    },
    [REVEAL_ADELAIDE] =
    {
        .trainerId = TRAINER_ADELAIDE_A,
        .buzzrId = BUZZR_USER_ADELAIDE,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Adelaide\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Adelaide's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(20,9,20),
    },
    [REVEAL_KAUNA] =
    {
        .trainerId = TRAINER_KAUNA,
        .buzzrId = BUZZR_USER_KAUNA,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Kauna\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Kauna's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(25,14,6),
    },
    [REVEAL_ADAORA] =
    {
        .trainerId = TRAINER_ADAORA_HOWDISAPPOINTING,
        .buzzrId = BUZZR_USER_ADAORA,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Adaora\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Adaora's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(22,15,17),
    },
    [REVEAL_NERIENE] =
    {
        .trainerId = TRAINER_NERIENE,
        .buzzrId = BUZZR_USER_NERIENE,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Neriene\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Neriene's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(1,22,6),
    },
    [REVEAL_KEI_YING] =
    {
        .trainerId = TRAINER_KEI_YING_WAREHOUSE_RAVE,
        .buzzrId = BUZZR_USER_KEI_YING,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Kei_Ying\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Kei_Ying's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(13,14,17),
    },
    [REVEAL_DIMU] =
    {
        .trainerId = TRAINER_DIMU,
        .buzzrId = BUZZR_USER_DIMU,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Dimu\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Dimu's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(8,14,26),
    },
    [REVEAL_TALA] =
    {
        .trainerId = TRAINER_TALA,
        .buzzrId = BUZZR_USER_TALA,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Tala\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Tala's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(23,7,12),
    },
    [REVEAL_BD] =
    {
        .trainerId = TRAINER_BD,
        .buzzrId = BUZZR_USER_BD,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Bd\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Bd's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(9,21,4),
    },
    [REVEAL_AMI] =
    {
        .trainerId = TRAINER_AMIARGENTO,
        .buzzrId = BUZZR_USER_AMI,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Ami\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Ami's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(22,22,9),
    },
    [REVEAL_ALCMENE] =
    {
        .trainerId = TRAINER_ALCMENE,
        .buzzrId = BUZZR_USER_ALCMENE,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Alcmene\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Alcmene's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(16,2,16),
    },
    [REVEAL_ARMANDO] =
    {
        .trainerId = TRAINER_ARMANDO,
        .buzzrId = BUZZR_USER_ARMANDO,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Armando\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Armando's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(27,9,7),
    },
    [REVEAL_MAGNUS] =
    {
        .trainerId = TRAINER_MAGNUS_PROLOGUE,
        .buzzrId = BUZZR_USER_MAGNUS,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Magnus\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Magnus's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(18,26,28),
    },
    [REVEAL_DOYLE] =
    {
        .trainerId = TRAINER_DOYLE_ZENZU_ISLAND,
        .buzzrId = BUZZR_USER_DOYLE,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Doyle\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Doyle's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(16,4,5),
    },
    [REVEAL_IMELDA] =
    {
        .trainerId = TRAINER_IMELDA,
        .buzzrId = BUZZR_USER_IMELDA,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Imelda\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Imelda's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(28,25,30),
    },
    [REVEAL_ELLEN] =
    {
        .trainerId = TRAINER_ELLEN,
        .buzzrId = BUZZR_USER_ELLEN,
        .quote = COMPOUND_STRING("“this is a quote that is \nsaid by Ellen\nto add flavor”"),
        .bio = COMPOUND_STRING("- This is Ellen's bio line\n- This is the character's second bio line"),
        .accentColor = RGB(28,25,30),
    },
};

struct RevealState
{
    MainCallback savedCallback;
    u8 character;
    u16 frameCounter;
    u8 trainerSpriteIds[REVEAL_TRAINER_END];
};

static struct RevealState *sRevealState = NULL;

static u32 GetRevealTrainerId(enum RevealIds revealId)
{
    return sRevealCharacters[revealId].trainerId;
}

static u32 GetRevealBuzzrId(enum RevealIds revealId)
{
    return sRevealCharacters[revealId].buzzrId;
}

static const u8 *const GetRevealQuote(enum RevealIds revealId)
{
    return sRevealCharacters[revealId].quote;
}

static const u8 *const GetRevealBio(enum RevealIds revealId)
{
    return sRevealCharacters[revealId].bio;
}

static const u32 GetRevealAccentColor(enum RevealIds revealId)
{
    return sRevealCharacters[revealId].accentColor;
}

void SetRevealFrameCounter(u32 timer)
{
    sRevealState->frameCounter = timer;
}

void IncrementFrameCounter(void)
{
    u32 revealFrameCounter = GetRevealFrameCounter();

    if (revealFrameCounter >= REVEAL_FRAME_ANIMATION_END)
        return;

    SetRevealFrameCounter(++revealFrameCounter);
}

void SetRevealCharacter(enum RevealIds character)
{
    sRevealState->character = character;
}

void SetSavedCallback(bool32 overworldState)
{
    sRevealState->savedCallback = (overworldState) ? CB2_ReturnToFieldContinueScript : CB2_ReturnToTrainerScreen;
}

void SetRevealTrainerSpriteId(enum RevealTrainerSpriteIds trainerSprite, u32 spriteId)
{
    sRevealState->trainerSpriteIds[trainerSprite] = spriteId;
}

void ResetRevealTrainerSpriteIds(void)
{
    for (u32 spriteIndex = 0; spriteIndex < REVEAL_TRAINER_END; spriteIndex++)
        SetRevealTrainerSpriteId(spriteIndex,SPRITE_NONE);
}

u32 GetRevealTrainerSpriteId(enum RevealTrainerSpriteIds trainerSprite)
{
    return sRevealState->trainerSpriteIds[trainerSprite];
}

u32 GetRevealCharacter(void)
{
    return sRevealState->character;
}

MainCallback GetSavedCallback(void)
{
    return sRevealState->savedCallback;
}

u32 GetRevealFrameCounter(void)
{
    return sRevealState->frameCounter;
}

void ResetRevealFrameCounter(void)
{
    SetRevealFrameCounter(0);
}

void Script_RevealCharacter(struct ScriptContext *ctx)
{
    enum RevealIds revealId = VarGet(ScriptReadHalfword(ctx));

    RevealCharacter(revealId,TRUE);
}

void RevealCharacter(enum RevealIds revealId, bool32 overworldState)
{
    if (AllocateStructs())
        FadescreenAndExitGracefully();

    SetRevealCharacter(revealId);
    SetSavedCallback(overworldState);
    SetMainCallback2(Reveal_SetupCallback);
}

bool32 IsScriptCalledFromOverworld(void)
{
    return (sRevealState->savedCallback == CB2_ReturnToFieldContinueScript);
}

bool32 ShouldSkipBackground(enum RevealBackgrounds backgroundId)
{
    if (backgroundId == BG0_REVEAL)
        return FALSE;

    return IsScriptCalledFromOverworld();
}

void FreezePlayerWhenOverworldLinkActive(void)
{
    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }
    LockPlayerFieldControls();
    CleanupOverworldWindowsAndTilemaps();
}

static void FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Reveal_VBlankCB);
    SetMainCallback2(Reveal_MainCB);
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    FreeResources();
    DestroyTask(taskId);
    SetMainCallback2(GetSavedCallback());
}

static bool32 AllocateStructs(void)
{
    sRevealState = AllocZeroed(sizeof(struct RevealState));

    return (sRevealState == NULL
           );
}

static void TrySkipFirstSetupPhase(void)
{
    if (gMain.state)
        return;

    if (IsScriptCalledFromOverworld())
        gMain.state = 2;
}

static void Reveal_SetupCallback(void)
{
    TrySkipFirstSetupPhase();

    switch (gMain.state)
    {
        case 0:
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            ResetPaletteFade();
            ResetTasks();
            gMain.state++;
            break;
        case 2:
            FreeSpritePalettesResetSpriteData();
            InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            LoadSpritePalette(&sRevealInterfaceSpritePalette);
            gMain.state++;
            break;
        case 4:
            if (!IsScriptCalledFromOverworld())
                BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            gMain.state++;
            break;
        case 5:
            Reveal_SetUp();
            ResetRevealTrainerSpriteIds();
            gMain.state++;
            break;
        case 6:
            ResetRevealFrameCounter();
            SetVBlankCallback(Reveal_VBlankCB);
            SetMainCallback2(Reveal_MainCB);
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

static void InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Reveal_InitializeBackgrounds())
        LoadGraphics();
    else
        FadescreenAndExitGracefully();
}

static void Reveal_InitWindows(void)
{
    InitWindows(sRevealWindowTemplates);
    DeactivateAllTextPrinters();
}

static void Reveal_VBlankCB(void)
{
    u32 timer = GetRevealFrameCounter();
    LoadOam();
    ProcessSpriteCopyRequests();
    PlayRevealAnimation(timer);
    TransferPlttBuffer();
}

static void Reveal_MainCB(void)
{
    IncrementFrameCounter();
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool32 Reveal_InitializeBackgrounds(void)
{
    ResetAllBgsCoordinates();
    if(!AllocZeroedTilemapBuffers())
        return FALSE;

    HandleAndShowBgs();

    return TRUE;
}

static bool32 AllocZeroedTilemapBuffers(void)
{
    enum RevealBackgrounds backgroundId;

    for (backgroundId = BG0_REVEAL; backgroundId < BG_REVEAL_COUNT ; backgroundId++)
    {
        if (ShouldSkipBackground(backgroundId))
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
    enum RevealBackgrounds backgroundId;

    for (backgroundId = BG0_REVEAL; backgroundId < BG_REVEAL_COUNT ; backgroundId++)
    {
        if (ShouldSkipBackground(backgroundId))
            continue;

        InitBgFromTemplate(&sRevealBgTemplates[backgroundId]);
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
}

static void SetScheduleBgs(u32 backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static const u32* Reveal_GetBgTiles(enum RevealBackgrounds backgroundId)
{
    if (!backgroundId)
        return NULL;

    return glassTrainerBgTiles;
}

static const u32* Reveal_GetBgTilemap(enum RevealBackgrounds backgroundId)
{
    if (!backgroundId)
        return NULL;

    return glassTrainerBgTilemap;
}

static void LoadGraphics(void)
{
    enum RevealBackgrounds backgroundId;

    ResetTempTileDataBuffers();

    for (backgroundId = BG0_REVEAL; backgroundId < BG_REVEAL_COUNT ; backgroundId++)
    {
        if (ShouldSkipBackground(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId,Reveal_GetBgTiles(backgroundId), 0, 0, 0);
        CopyToBgTilemapBuffer(backgroundId,Reveal_GetBgTilemap(backgroundId),0,0);
    }
    LoadRevealPalettes();
}

static void LoadRevealPalettes(void)
{
    enum RevealIds characterId = GetRevealCharacter();
    LoadPalette(revealPalette,REVEAL_PALETTE_INTERFACE_SLOT,PLTT_SIZE_4BPP);
    FillPalette(GetRevealAccentColor(characterId),(REVEAL_PALETTE_ACCENT_COLOR_ADDRESS), 2);
}

static void FreeResources(void)
{
    FreeAllSpritePalettes();
    FreeBackgrounds();
    FreeStructs();
    FreeAllWindowBuffers();
    ResetSpriteData();
    RestoreOBJLayerInWindow0();
}

static void FreeBackgrounds(void)
{
    enum RevealBackgrounds backgroundId;
    for (backgroundId = BG0_REVEAL; backgroundId < BG_REVEAL_COUNT ; backgroundId++)
    {
        if (ShouldSkipBackground(backgroundId))
            continue;

        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
    }
}

static void FreeStructs(void)
{
    if (sRevealState != NULL)
        Free(sRevealState);
}

static void Reveal_SetUp()
{
    Reveal_InitWindows();
    PutWindowTilemap(REVEAL_WINDOW_ANIMATION);
    CopyWindowToVram(REVEAL_WINDOW_ANIMATION, COPYWIN_GFX);
    CreateTask(Task_AddSpritesAndText,0);
    CreateTask(Task_HandleRevealInput,0);
}

static void DestroyTaskAndExit(u8 taskId)
{
    DestroyTask(taskId);
    FadescreenAndExitGracefully();
}

static void Task_AddSpritesAndText(u8 taskId)
{
    u32 timer = GetRevealFrameCounter();
    enum RevealIds revealId = GetRevealCharacter();
    u32 trainerPicId = GetTrainerPicFromId(GetRevealTrainerId(revealId));
    enum RevealWindows windowId;

    PrepareRevealBackground(timer);
    PrintOverworldSprite(timer, revealId);
    PrintTrainerSprite(trainerPicId, timer, revealId);
    PrintTrainerSpriteOutline(trainerPicId, timer, revealId);
    CropTrainerSpriteBottom();

    for (windowId = REVEAL_WINDOW_HEADER; windowId < REVEAL_WINDOW_COUNT; windowId++)
        PrintRevealContent(timer, revealId, windowId);

    if (timer == REVEAL_FRAME_SLIDE_END)
        DestroyTask(taskId);
}

static void Task_HandleRevealInput(u8 taskId)
{
    if (JOY_NEW(JOY_EXCL_DPAD))
        DestroyTaskAndExit(taskId);
}

static void PlayRevealAnimation(u32 timer)
{
    u32 size = TILE_SIZE_4BPP * DISPLAY_TILE_WIDTH * 12;
    u32 charBase = GetBgAttribute(BG0_REVEAL,BG_ATTR_CHARBASEINDEX);
    u32 baseBlock = VRAM_ANIMATION_START;

    if (timer >= REVEAL_FRAME_SLIDE_END)
        return;

    if (sRevealAnimationLUT[timer] != NULL)
        DmaCopy16(3, sRevealAnimationLUT[timer],(void *)(BG_CHAR_ADDR(charBase) + TILE_OFFSET_4BPP(baseBlock)), size);
}

static void PrepareRevealBackground(u32 timer)
{
    void PrepareWindow(enum RevealWindows windowId, enum RevealPaletteColors fillValue)
    {
        FillWindowPixelBuffer(windowId, PIXEL_FILL(fillValue));
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }

    switch (timer)
    {
        default:
            return;
        case REVEAL_FRAME_ANIMATION_HEADER_FOOTER:
            PrepareWindow(REVEAL_WINDOW_HEADER, REVEAL_PALETTE_BLACK);
            PrepareWindow(REVEAL_WINDOW_FOOTER, REVEAL_PALETTE_BLACK);
            break;
        case REVEAL_FRAME_ANIMATION_USERNAME:
            PrepareWindow(REVEAL_WINDOW_USERNAME, REVEAL_PALETTE_BLACK);
            PrepareWindow(REVEAL_WINDOW_TITLE, REVEAL_PALETTE_GRAY);
            break;
        case REVEAL_FRAME_ANIMATION_FLAVOR:
            PrepareWindow(REVEAL_WINDOW_QUOTE, REVEAL_PALETTE_WHITE);
            PrepareWindow(REVEAL_WINDOW_BIO, REVEAL_PALETTE_LIGHT_GRAY);
            break;
    }
}

static void PrintRevealContent(u32 timer, enum RevealIds revealId, enum RevealWindows windowId)
{
    const struct RevealPrintConfig *config = &sRevealPrintConfigs[windowId];
    if (timer < config->frameThreshold)
        return;

    u32 letterSpacing = GetFontAttribute(config->fontId, FONTATTR_LETTER_SPACING);
    u32 lineSpacing = GetFontAttribute(config->fontId, FONTATTR_LINE_SPACING);
    const u8 *color = sRevealWindowFontColors[config->colorIndex];
    u32 windowWidth = GetWindowAttribute(windowId, WINDOW_WIDTH) * TILE_WIDTH;
    u32 buzzrId = 0;
    u8 *end;

    switch(windowId)
    {
        default:
        case REVEAL_WINDOW_FOOTER:
            end = StringCopy(gStringVar3, COMPOUND_STRING("{START_BUTTON} Continue"));
            break;
        case REVEAL_WINDOW_HEADER:
            end = StringCopy(gStringVar3, GetTrainerNameFromId(GetRevealTrainerId(revealId)));
            break;
        case REVEAL_WINDOW_QUOTE:
            end = StringCopy(gStringVar3, GetRevealQuote(revealId));
            break;
        case REVEAL_WINDOW_USERNAME:
            buzzrId = GetRevealBuzzrId(revealId);
            end = StringCopy(gStringVar3, GetUsername(buzzrId));
            windowWidth -= (IsVerified(buzzrId)) ? 16 : 0;
            break;
        case REVEAL_WINDOW_TITLE:
            end = StringCopy(gStringVar3, GetTrainerClassNameFromId(GetRevealTrainerId(revealId)));
            break;
        case REVEAL_WINDOW_BIO:
            end = StringCopy(gStringVar3,GetRevealBio(revealId));
            break;
    }
    PrependFontIdToFit(gStringVar3, end, config->fontId, windowWidth);
    AddTextPrinterParameterized4(windowId, config->fontId, config->x, config->y, letterSpacing, lineSpacing, color, TEXT_SKIP_DRAW, gStringVar3);
    CopyWindowToVram(windowId, COPYWIN_GFX);

    if (windowId == REVEAL_WINDOW_USERNAME)
        PrintVerifiedBuzzrBadge(config->fontId, letterSpacing, gStringVar3, buzzrId, config->x);
}

static void PrintVerifiedBuzzrBadge(u32 fontId, u32 letterSpacing, u8* username, u32 buzzrId, u32 x)
{
    if (!IsVerified(buzzrId))
        return;

    x += (1 + GetStringWidth(fontId, username, letterSpacing));
    PrintHeaderIcons(REVEAL_WINDOW_USERNAME,sVerified_Gfx,x,1);
}

static void PrintOverworldSprite(u32 timer, enum RevealIds revealId)
{
    if (timer != REVEAL_FRAME_ANIMATION_10)
        return;

    if (GetRevealTrainerSpriteId(REVEAL_TRAINER_OW) != SPRITE_NONE)
        return;

    u32 y = 74;
    u32 x = 0;
    u32 trainerId = GetRevealTrainerId(revealId);
    u32 objectId = GetOverworldSpriteFromTrainerId(trainerId);
    u32 spriteId = CreateObjectGraphicsSprite(objectId, SpriteCB_RevealOverworldSprite, x, y,0);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].subpriority = 0;
    StartSpriteAnim(&gSprites[spriteId], ANIM_STD_GO_SOUTH);
    SetRevealTrainerSpriteId(REVEAL_TRAINER_OW,spriteId);
}

static void SpriteCB_RevealOverworldSprite(struct Sprite *sprite)
{
    u32 timer = GetRevealFrameCounter();

    if (timer != REVEAL_FRAME_ANIMATION_11)
        return;

    sprite->x2 = 38;
}

static const union AffineAnimCmd sAffineAnim_DoubleSizeAnim[] = {
    AFFINEANIMCMD_FRAME(236, 236, 0, 1),
    AFFINEANIMCMD_END
};

static const union AffineAnimCmd *const sAffineAnims_ShowLarge[] = {
    sAffineAnim_DoubleSizeAnim,
};

static void PrintTrainerSprite(u32 trainerPicId, u32 timer, enum RevealIds revealId)
{
    if (timer != REVEAL_FRAME_ANIMATION_10)
        return;

    if (GetRevealTrainerSpriteId(REVEAL_TRAINER_SPRITE_TRAINER) != SPRITE_NONE)
        return;

    u32 x = 264;
    u32 y = 63;
    u32 spriteId = CreateTrainerSprite(trainerPicId, x, y, 0, NULL);
    SetRevealTrainerSpriteId(REVEAL_TRAINER_SPRITE_TRAINER, spriteId);
    InitializeTrainerSpriteOutline(spriteId);
}


void InitializeTrainerSpriteOutline(u32 spriteId)
{
    struct Sprite *trainerSprite = &gSprites[spriteId];
    u32 paletteNum = IndexOfSpritePaletteTag(TAG_NONE);

    trainerSprite->invisible = TRUE;
    trainerSprite->oam.affineMode = ST_OAM_AFFINE_DOUBLE;
    trainerSprite->affineAnims = sAffineAnims_ShowLarge;

    InitSpriteAffineAnim(trainerSprite);
    StartSpriteAffineAnim(trainerSprite, 0);

    trainerSprite->callback = SpriteCB_MoveTrainerSprite;

    if (spriteId == GetRevealTrainerSpriteId(REVEAL_TRAINER_SPRITE_TRAINER))
        return;

    trainerSprite->oam.paletteNum = (paletteNum == 0xFF) ? REVEAL_PALETTE_SPRITE_FALLBACK : paletteNum;
    trainerSprite->subpriority = 1;
}

static void PrintTrainerSpriteOutline(u32 trainerPicId, u32 timer, enum RevealIds revealId)
{
    if (timer != REVEAL_FRAME_ANIMATION_10)
        return;

    u32 x = 263;
    u32 y = 62;
    u32 horizontalIndex, verticalIndex;
    u32 id = REVEAL_TRAINER_SPRITE_TRAINER;
    u32 spriteId;

    for (horizontalIndex = 0; horizontalIndex < 2; horizontalIndex++)
    {
        for (verticalIndex = 0; verticalIndex < 2; verticalIndex++)
        {
            spriteId = CreateTrainerSprite(trainerPicId, x + (2 * horizontalIndex), y + (2 * verticalIndex), 0, NULL);
            SetRevealTrainerSpriteId(++id, spriteId);
            InitializeTrainerSpriteOutline(spriteId);
        }
    }
    FillPalette(RGB_WHITE, OBJ_PLTT_ID(gSprites[spriteId].oam.paletteNum), 32);
}

static void SpriteCB_MoveTrainerSprite(struct Sprite *sprite)
{
    if (sprite->affineAnimEnded)
        sprite->invisible = FALSE;

    switch (sprite->data[0])
    {
        case 0:
            sprite->x -= 12;

            if (sprite->x <= 170)
                sprite->data[0]++;

            break;
        case 1:
            sprite->data[0]++;
            break;
        case 2:
        case 3:
        case 4:
            sprite->x += 1;
            sprite->data[0]++;
            break;
        case 5:
            sprite->data[0]++;
            break;
        case 6:
        case 7:
        case 8:
            sprite->x -= 1;
            sprite->data[0]++;
            break;
        default:
            break;
    }
}

static void CropTrainerSpriteBottom(void)
{
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(123, 329));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(104, 160));
    SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_CLR);
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_ALL);
}

static void RestoreOBJLayerInWindow0(void)
{
    SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ);
}

