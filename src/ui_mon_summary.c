#include "global.h"
#include "main.h"
#include "battle_main.h"
#include "battle_anim.h"
#include "bg.h"
#include "pokemon.h"
#include "window.h"
#include "sprite.h"
#include "gpu_regs.h"
#include "string_util.h"
#include "international_string_util.h"
#include "decompress.h"
#include "scanline_effect.h"
#include "sound.h"
#include "palette.h"
#include "task.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "strings.h"
#include "party_menu.h"
#include "tv.h"
#include "item.h"
#include "region_map.h"
#include "color_variation.h"
#include "item_icon.h"
#include "pokeball.h"
#include "ui_mon_summary.h"
#include "constants/ui_mon_summary.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/party_menu.h"

// ram
static EWRAM_DATA struct MonSummaryResources *sMonSummaryDataPtr = NULL;

// declarations
static void MonSummary_FreeResources(void);
static void CB2_MonSummary(void);
static void VBlankCB_MonSummary(void);
static void Task_MonSummary_WaitFadeAndExit(u8);

static void SummarySetup_Backgrounds(void);
static void SummarySetup_Graphics(void);
static void SummarySetup_Sprites(void);
static void SummarySetup_Windows(void);
static void CB2_SummarySetup(void);
static void Task_SummarySetup_WaitFade(u8);

static void SummaryInput_UpdatePage(s32);
static void SummaryInput_UpdateMon(s32);
static void SummaryInput_SetIndex(u32);
static u32 SummaryInput_GetIndex(void);
static void SummaryInput_SetTotalIndex(u32);
static u32 SummaryInput_GetTotalIndex(void);
static void SummaryInput_SetSubMode(bool32);
static bool32 SummaryInput_IsWithinSubMode(void);
static bool32 SummaryInput_IsInputAdditive(s32);
static void Task_SummaryInput_InfosInput(u8);

static void SummaryMon_SetStruct(void);
static struct MonSummary *SummaryMon_GetStruct(void);
static void SummaryMon_CopyCurrentRawMon(void);
static void SummaryMon_GetNatureFlavors(u8 *);

static void SummaryMode_SetValue(enum MonSummaryModes);
static enum MonSummaryModes SummaryMode_GetValue(void);
static TaskFunc SummaryMode_GetInputFunc(enum MonSummaryModes);
static void *SummaryPage_GetHandleFrontEndFunc(enum MonSummaryPages);
static void *SummaryPage_GetHandleTextBoxFunc(enum MonSummaryPages);
static void *SummaryPage_GetHandleHelpBarFunc(enum MonSummaryPages);
static void Task_SummaryMode_DefaultInput(u8);

static void SummaryPage_SetValue(enum MonSummaryPages);
static enum MonSummaryPages SummaryPage_GetValue(void);
static void SummaryPage_TogglePageSlot(void);
static u32 SummaryPage_GetPageSlot(void);
static const struct MonSummaryPageInfo *SummaryPage_GetInfo(enum MonSummaryPages);
static const u8 *SummaryPage_GetName(enum MonSummaryPages);
static const u32 *SummaryPage_GetTilemap(enum MonSummaryPages);
static struct Coords8 SummaryPage_GetMainSpriteCoords(enum MonSummaryPages, enum MonSummaryMainSprites);
static struct UCoords8 SummaryPage_GetTextBoxCoords(enum MonSummaryPages);
static TaskFunc SummaryPage_GetInputFunc(enum MonSummaryPages);
static void SummaryPage_UnloadDynamicSprites(void);
static void SummaryPage_LoadTilemap(void);
static void SummaryPage_Reload(enum MonSummaryReloadModes);

static void SummarySprite_SetSpriteId(u8, u8);
static u8 SummarySprite_GetSpriteId(u8);
static void SummarySprite_SetDynamicSpriteId(u8, u8);
static u8 SummarySprite_GetDynamicSpriteId(u8);
static const struct MonSummarySprite *SummarySprite_GetMainStruct(u32);
static void SummarySprite_InjectHpBar(struct Sprite *);
static void SummarySprite_InjectExpBar(struct Sprite *);
static void SummarySprite_InjectFriendshipBar(struct Sprite *);
static void SummarySprite_CreateMonSprite(void);
static void SummarySprite_InjectPokemon(void);
static u32 SummarySprite_GetPokemonPaletteSlot(void);
static void SummarySprite_PlayPokemonCry(void);
static void SummarySprite_MonHeldItem(u32, s32, s32);
static void SummarySprite_MonPokeBall(u32, s32, s32);
static void SpriteCB_SummarySprite_ShinySymbol(struct Sprite *);
static void SpriteCB_SummarySprite_HpBar(struct Sprite *);
static void SpriteCB_SummarySprite_ExpBar(struct Sprite *);
static void SpriteCB_SummarySprite_FriendshipBar(struct Sprite *);

static void SummaryPrint_AddText(u32, u32, u32, u32, enum MonSummaryFontColors, const u8 *);
static const struct WindowTemplate *SummaryPrint_GetMainWindowTemplate(u32);
static void SummaryPrint_Header(void);
static void SummaryPrint_BlitPageTabs(u32, u32, u32);
static void SummaryPrint_BlitStatusSymbol(u32, u32);
static UNUSED void SummaryPrint_BlitMonMarkings(u32, u32, u32);
static void SummaryPrint_TextBox(void);
static void SummaryPrint_HelpBar(void);
static void SummaryPrint_MonName(u32, u32, u32);
static void SummaryPrint_MonGender(u32, u32);
static void SummaryPrint_MonLevel(u32, u32);
static void SummaryPrint_MonHeldItem(u32, u32, u32);
static void SummaryPrint_MonAbility(u32, u32, u32);
static void SummaryPrint_MonStat(enum Stat, u32, u32);

static void DummyPage_Handle(void);

static void InfosPage_HandleFrontEnd(void);
static void InfosPage_HandleTextBox(void);
static void InfosPage_HandleHelpBar(void);
static void InfosPage_HandleHeader(void);
static void InfosPage_HandleGeneral(void);
static void InfosPageGeneral_PrintMonTyping(struct MonSummary *);
static void InfosPageGeneral_PrintTrainerInfo(struct MonSummary *);
static void InfosPageGeneral_PrintNeededExperience(struct MonSummary *);
static void InfosPageGeneral_PrintNatureInfo(struct MonSummary *);
static void InfosPage_HandleMisc(void);

static void StatsPage_HandleFrontEnd(void);
static void StatsPage_HandleHeader(void);
static void StatsPage_HandleGeneral(void);
static void StatsPage_HandleMisc(void);
static void StatsPageMisc_MonTotalEVs(void);

// const data
#include "data/ui_mon_summary.h"

// code
void MonSummary_OpenDefault(void)
{
    MonSummary_Init(
        &(const struct MonSummaryConfigs){
            .mode = SUMMARY_MODE_DEFAULT,
            .mons = gPlayerParty,
            .currIdx = 0, .totalIdx = gPlayerPartyCount - 1,
            .arg.value = 0
        },
        CB2_ReturnToFieldContinueScript);
}

void MonSummary_Init(const struct MonSummaryConfigs *config, MainCallback callback)
{
    sMonSummaryDataPtr = AllocZeroed(sizeof(struct MonSummaryResources));

    if (!gMonSpritesGfxPtr)
    {
        CreateMonSpritesGfxManager(MON_SPR_GFX_MANAGER_A, MON_SPR_GFX_MODE_NORMAL);
    }

    if (!sMonSummaryDataPtr
     || !config
     || config->mode >= NUM_SUMMARY_MODES)
    {
        DestroyMonSpritesGfxManager(MON_SPR_GFX_MANAGER_A);
        TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr);
        SetMainCallback2(callback);
        return;
    }

    enum MonSummaryPages page = SUMMARY_PAGE_INFOS;

    switch (config->mode)
    {
    default:
        break;
    case SUMMARY_MODE_BOX:
        sMonSummaryDataPtr->useBoxMon = TRUE;
        break;
    }

    sMonSummaryDataPtr->savedCallback = callback;
    sMonSummaryDataPtr->list.mons = config->mons;

    SummaryInput_SetIndex(config->currIdx);
    SummaryInput_SetTotalIndex(config->totalIdx);
    SummaryPage_SetValue(page);
    SummaryMode_SetValue(config->mode);
    memset(sMonSummaryDataPtr->spriteIds, SPRITE_NONE, ARRAY_COUNT(sMonSummaryDataPtr->spriteIds));

    SetMainCallback2(CB2_SummarySetup);
}

static void MonSummary_FreeResources(void)
{
    if (!gMonSpritesGfxPtr)
    {
        DestroyMonSpritesGfxManager(MON_SPR_GFX_MANAGER_A);
    }

    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1]);
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2]);
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr);
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void CB2_MonSummary(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_MonSummary(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_MonSummary_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        MainCallback cb = sMonSummaryDataPtr->savedCallback;

        SetMainCallback2(cb);
        MonSummary_FreeResources();
        DestroyTask(taskId);
    }
}

static void SummarySetup_Backgrounds(void)
{
    u32 tilemapSize = BG_SCREEN_SIZE * 2;

    sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1] = AllocZeroed(tilemapSize);
    sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2] = AllocZeroed(tilemapSize);

    if (!sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1]
     || !sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2])
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        CreateTask(Task_MonSummary_WaitFadeAndExit, 0);
        SetVBlankCallback(VBlankCB_MonSummary);
        SetMainCallback2(CB2_MonSummary);
        return;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sSummarySetup_BgTemplates, NELEMS(sSummarySetup_BgTemplates));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);

    SetBgTilemapBuffer(SUMMARY_BG_PAGE_1, sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1]);
    SetBgTilemapBuffer(SUMMARY_BG_PAGE_2, sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2]);

    for (enum MonSummaryBackgrounds bg = 0; bg < NUM_SUMMARY_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }
}

static void SummarySetup_Graphics(void)
{
    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();

    DecompressAndCopyTileDataToVram(SUMMARY_BG_PAGE_1, sMonSummary_MainTiles, 0, 0, 0);
    LoadPalette(sMonSummary_MainPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);

    LoadSpritePalette(&(const struct SpritePalette){
        .data = sMonSummary_MainPalette,
        .tag = TAG_SUMMARY_UNIVERSAL_PAL
    });

    SummaryPage_LoadTilemap();
    CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_1);
}

static void SummarySetup_Sprites(void)
{
    // excludes e.g. mon sprite
    for (u32 i = 0; i < ARRAY_COUNT(sSummarySetup_MainSprites); i++)
    {
        const struct MonSummarySprite *config = SummarySprite_GetMainStruct(i);
        struct Coords8 coords = SummaryPage_GetMainSpriteCoords(SummaryPage_GetValue(), config->id);
        struct SpriteTemplate template =
        {
            .tileTag = config->tileTag,
            .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
            .oam = config->oam,
            .anims = config->anims,
            .images = &(struct SpriteFrameImage){ config->gfx },
            .affineAnims = gDummySpriteAffineAnimTable,
            .callback = config->callback,
        };

        LoadCompressedSpriteSheetByTemplate(&template, 0);
        SummarySprite_SetSpriteId(config->id,
            CreateSprite(&template, coords.x, coords.y, 0));
        gSprites[SummarySprite_GetSpriteId(config->id)].sMonIndex = -1;

        if (config->subsprites)
        {
            SetSubspriteTables(&gSprites[SummarySprite_GetSpriteId(config->id)], config->subsprites);
        }
    }

    SummarySprite_CreateMonSprite();
}

static void SummarySetup_Windows(void)
{
    InitWindows(sSummarySetup_MainWindows);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    for (u32 i = 0, baseBlock = 1; i < NUM_SUMMARY_MAIN_WINDOWS; i++)
    {
        SetWindowAttribute(i, WINDOW_BASE_BLOCK, baseBlock);
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);

        const struct WindowTemplate *template = SummaryPrint_GetMainWindowTemplate(i);
        baseBlock += template->width * template->height;
    }

    void (*func)(void) = SummaryPage_GetHandleFrontEndFunc(SummaryPage_GetValue());
    func();

    SummaryPrint_Header();
    SummaryPrint_HelpBar();
    SummaryPrint_TextBox();

    CopyWindowToVram(SUMMARY_MAIN_WIN_PAGE_TEXT, COPYWIN_GFX);
    ScheduleBgCopyTilemapToVram(SUMMARY_BG_TEXT);
}

static void CB2_SummarySetup(void)
{
    enum MonSummarySetupSteps steps = gMain.state;

    switch (steps)
    {
    case SUMMARY_SETUP_RESET:
        FillPalette(RGB_BLACK, 0, PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinatesAndBgCntRegs();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        FreeAllWindowBuffers();
        ResetSpriteData();
        ResetTasks();
        break;
    case SUMMARY_SETUP_MONDATA:
        SummaryMon_SetStruct();
        break;
    case SUMMARY_SETUP_BACKGROUNDS:
        SummarySetup_Backgrounds();
        break;
    case SUMMARY_SETUP_GRAPHICS:
        SummarySetup_Graphics();
        break;
    case SUMMARY_SETUP_WINDOWS:
        SummarySetup_Windows();
        break;
    case SUMMARY_SETUP_SPRITES:
        SummarySetup_Sprites();
        break;
    case SUMMARY_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_SummarySetup_WaitFade, 0);
        break;
    case SUMMARY_SETUP_FINISH:
        SetVBlankCallback(VBlankCB_MonSummary);
        SetMainCallback2(CB2_MonSummary);
        return;
    default:
        DebugPrintf("WARNING unused step at: %d", steps);
        break;
    }

    gMain.state++;
}

static void Task_SummarySetup_WaitFade(u8 taskId)
{
    if (!gPaletteFade.active && ++gTasks[taskId].tDelay >= 5)
    {
        SummarySprite_PlayPokemonCry();
        gTasks[taskId].tDelay = 0;
        gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());
    }
}

static void SummaryInput_UpdatePage(s32 delta)
{
    enum MonSummaryPages page = SummaryPage_GetValue();
    u32 count = NUM_SUMMARY_PAGES - 1;
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);

    if ((!page && !additiveDelta) || (page == count && additiveDelta))
    {
        return;
    }

    PlaySE(SE_CLICK);
    SummaryPage_SetValue(page + delta);
    SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
}

static void SummaryInput_UpdateMon(s32 delta)
{
    u32 idx = SummaryInput_GetIndex();
    u32 count = SummaryInput_GetTotalIndex();
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);

    if (!idx && !additiveDelta)
    {
        SummaryInput_SetIndex(count);
    }
    else if (idx == count && additiveDelta)
    {
        SummaryInput_SetIndex(0);
    }
    else
    {
        SummaryInput_SetIndex(idx + delta);
    }

    PlaySE(SE_CLICK);
    SummaryPage_Reload(SUMMARY_RELOAD_MON);
}

static void SummaryInput_SetIndex(u32 index)
{
    sMonSummaryDataPtr->currIdx = index;
}

static u32 SummaryInput_GetIndex(void)
{
    return sMonSummaryDataPtr->currIdx;
}

static void SummaryInput_SetTotalIndex(u32 index)
{
    sMonSummaryDataPtr->totalIdx = index;
}

static u32 SummaryInput_GetTotalIndex(void)
{
    return sMonSummaryDataPtr->totalIdx;
}

static void SummaryInput_SetSubMode(bool32 flag)
{
    sMonSummaryDataPtr->subMode = flag;
}

static bool32 SummaryInput_IsWithinSubMode(void)
{
    return sMonSummaryDataPtr->subMode;
}

static bool32 SummaryInput_IsInputAdditive(s32 delta)
{
    return delta == 1;
}

static void Task_SummaryMode_DefaultInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT | L_BUTTON))
    {
        SummaryInput_UpdatePage(-1);
        return;
    }

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON))
    {
        SummaryInput_UpdatePage(1);
        return;
    }

    if (JOY_NEW(DPAD_UP)
     && SummaryPage_GetValue() != SUMMARY_PAGE_MOVES)
    {
        SummaryInput_UpdateMon(-1);
        return;
    }

    if (JOY_NEW(DPAD_DOWN)
     && SummaryPage_GetValue() != SUMMARY_PAGE_MOVES)
    {
        SummaryInput_UpdateMon(1);
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        SummaryInput_SetSubMode(TRUE);
        SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
        gTasks[taskId].func = SummaryPage_GetInputFunc(SummaryPage_GetValue());
        return;
    }

    if (JOY_NEW(B_BUTTON) && IsCryFinished())
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MonSummary_WaitFadeAndExit;
        return;
    }
}

static void Task_SummaryInput_InfosInput(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        SummaryInput_SetSubMode(FALSE);
        SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
        gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());
        return;
    }
}

static void SummaryMon_SetStruct(void)
{
    SummaryMon_CopyCurrentRawMon();

    struct MonSummaryResources *res = sMonSummaryDataPtr;
    struct Pokemon *mon = res->mon;

    res->summary.species = GetMonData(mon, MON_DATA_SPECIES);
    res->summary.species2 = GetMonData(mon, MON_DATA_SPECIES_OR_EGG);
    res->summary.exp = GetMonData(mon, MON_DATA_EXP);
    res->summary.level = GetMonData(mon, MON_DATA_LEVEL);
    res->summary.abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);
    res->summary.item = GetMonData(mon, MON_DATA_HELD_ITEM);
    res->summary.personality = GetMonData(mon, MON_DATA_PERSONALITY);
    res->summary.sanity = GetMonData(mon, MON_DATA_SANITY_IS_BAD_EGG);

    if (res->summary.sanity)
    {
        res->summary.isEgg = TRUE;
    }
    else
    {
        res->summary.isEgg = GetMonData(mon, MON_DATA_IS_EGG);
    }

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        res->summary.moves[i] = GetMonData(mon, MON_DATA_MOVE1 + i);
        res->summary.pp[i] = GetMonData(mon, MON_DATA_PP1 + i);
    }

    res->summary.ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
    res->summary.nature = GetNature(mon);
    res->summary.mintNature = GetMonData(mon, MON_DATA_HIDDEN_NATURE);
    res->summary.currHp = GetMonData(mon, MON_DATA_HP);
    res->summary.stats[STAT_HP] = GetMonData(mon, MON_DATA_MAX_HP);
    res->summary.stats[STAT_ATK] = GetMonData(mon, MON_DATA_ATK);
    res->summary.stats[STAT_DEF] = GetMonData(mon, MON_DATA_DEF);
    res->summary.stats[STAT_SPATK] = GetMonData(mon, MON_DATA_SPATK);
    res->summary.stats[STAT_SPDEF] = GetMonData(mon, MON_DATA_SPDEF);
    res->summary.stats[STAT_SPEED] = GetMonData(mon, MON_DATA_SPEED);

    GetMonData(mon, MON_DATA_OT_NAME, res->summary.trainerName);
    ConvertInternationalString(res->summary.trainerName, GetMonData(mon, MON_DATA_LANGUAGE));
    res->summary.ailment = GetMonAilment(mon);
    res->summary.trainerGender = GetMonData(mon, MON_DATA_OT_GENDER);
    res->summary.trainerId = GetMonData(mon, MON_DATA_OT_ID);
    res->summary.metLocation = GetMonData(mon, MON_DATA_MET_LOCATION);
    res->summary.metLevel = GetMonData(mon, MON_DATA_MET_LEVEL);
    res->summary.metGame = GetMonData(mon, MON_DATA_MET_GAME);
    res->summary.friendship = GetMonData(mon, MON_DATA_FRIENDSHIP);

    res->summary.ribbonCount = GetMonData(mon, MON_DATA_RIBBON_COUNT);
    res->summary.isShiny = GetMonData(mon, MON_DATA_IS_SHINY);

    res->summary.ivs[STAT_HP] = GetMonData(mon, MON_DATA_HP_IV);
    res->summary.ivs[STAT_ATK] = GetMonData(mon, MON_DATA_ATK_IV);
    res->summary.ivs[STAT_DEF] = GetMonData(mon, MON_DATA_DEF_IV);
    res->summary.ivs[STAT_SPATK] = GetMonData(mon, MON_DATA_SPATK_IV);
    res->summary.ivs[STAT_SPDEF] = GetMonData(mon, MON_DATA_SPDEF_IV);
    res->summary.ivs[STAT_SPEED] = GetMonData(mon, MON_DATA_SPEED_IV);

    res->summary.evs[STAT_HP] = GetMonData(mon, MON_DATA_HP_EV);
    res->summary.evs[STAT_ATK] = GetMonData(mon, MON_DATA_ATK_EV);
    res->summary.evs[STAT_DEF] = GetMonData(mon, MON_DATA_DEF_EV);
    res->summary.evs[STAT_SPATK] = GetMonData(mon, MON_DATA_SPATK_EV);
    res->summary.evs[STAT_SPDEF] = GetMonData(mon, MON_DATA_SPDEF_EV);
    res->summary.evs[STAT_SPEED] = GetMonData(mon, MON_DATA_SPEED_EV);

    GetMonNickname(mon, res->summary.nickname);
    res->summary.gender = GetMonGender(mon);
    res->summary.markings = GetMonData(mon, MON_DATA_MARKINGS);
    res->summary.ball = GetMonData(mon, MON_DATA_POKEBALL);
    SummaryMon_GetNatureFlavors(res->summary.flavors);
}

static struct MonSummary *SummaryMon_GetStruct(void)
{
    return &sMonSummaryDataPtr->summary;
}

static void SummaryMon_CopyCurrentRawMon(void)
{
    struct MonSummaryResources *res = sMonSummaryDataPtr;

    if (sMonSummaryDataPtr->useBoxMon)
    {
        struct BoxPokemon *boxMon = &res->list.boxMons[res->currIdx];
        BoxMonToMon(boxMon, res->mon);
    }
    else
    {
        res->mon = &res->list.mons[res->currIdx];
    }
}

static void SummaryMon_GetNatureFlavors(u8 *flavors)
{
    struct Pokemon *mon = sMonSummaryDataPtr->mon;

    memset(flavors, FLAVOR_COUNT, sizeof(u8) * 2);

    for (u32 i = 0; i < FLAVOR_COUNT; i++)
    {
        s8 flavor = GetMonFlavorRelation(mon, i);

        if (flavor != 0)
        {
            flavors[SUMMARY_MON_LIKED_FLAVOR + (flavor == -1)] = i;
        }
    }
}

static void SummaryMode_SetValue(enum MonSummaryModes mode)
{
    sMonSummaryDataPtr->mode = mode;
}

static enum MonSummaryModes SummaryMode_GetValue(void)
{
    return sMonSummaryDataPtr->mode;
}

static TaskFunc SummaryMode_GetInputFunc(enum MonSummaryModes mode)
{
    TaskFunc func = sSummaryMode_InputFuncs[mode];
    if (!func) return TaskDummy;

    return func;
}

static void SummaryPage_SetValue(enum MonSummaryPages page)
{
    sMonSummaryDataPtr->page = page;
}

static enum MonSummaryPages SummaryPage_GetValue(void)
{
    return sMonSummaryDataPtr->page;
}

static void SummaryPage_TogglePageSlot(void)
{
    sMonSummaryDataPtr->pageSlot ^= 1;
}

static u32 SummaryPage_GetPageSlot(void)
{
    return sMonSummaryDataPtr->pageSlot;
}

static const struct MonSummaryPageInfo *SummaryPage_GetInfo(enum MonSummaryPages page)
{
    if (page >= NUM_SUMMARY_PAGES) return NULL;

    return &sSummaryPage_Info[page];
}

static const u8 *SummaryPage_GetName(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);
    if (!info || !info->name) return gText_EmptyString2;

    return info->name;
}

static const u32 *SummaryPage_GetTilemap(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->tilemap) return sMonSummary_MainTilemap;

    return info->tilemap;
}

static struct Coords8 SummaryPage_GetMainSpriteCoords(enum MonSummaryPages page, enum MonSummaryMainSprites sprite)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info) return (struct Coords8){ DISPLAY_WIDTH, DISPLAY_HEIGHT };

    return info->mainSpriteCoords[sprite];
}

static struct UCoords8 SummaryPage_GetTextBoxCoords(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info) return (struct UCoords8){ 0, 0 };

    return info->textBoxCoords;
}

static TaskFunc SummaryPage_GetInputFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->input) return TaskDummy;

    return info->input;
}

static void *SummaryPage_GetHandleFrontEndFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->handleFrontEnd) return DummyPage_Handle;

    return info->handleFrontEnd;
}

static void *SummaryPage_GetHandleTextBoxFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->handleTextBox) return DummyPage_Handle;

    return info->handleTextBox;
}

static void *SummaryPage_GetHandleHelpBarFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->handleHelpBar) return DummyPage_Handle;

    return info->handleHelpBar;
}

static void SummaryPage_UnloadDynamicSprites(void)
{
    for (u32 i = 0; i < TOTAL_SUMMARY_DYNAMIC_SPRITES; i++)
    {
        u32 spriteId = SummarySprite_GetDynamicSpriteId(i);
        if (spriteId == SPRITE_NONE) continue;

        struct Sprite *sprite = &gSprites[spriteId];
        u32 tileTag = (u16)sprite->sTileTag, paletteTag = (u16)sprite->sPaletteTag;

        FreeSpriteOamMatrix(sprite);
        DestroySpriteAndFreeResources(&gSprites[spriteId]);
        FreeSpriteTilesByTag(tileTag);
        FreeSpritePaletteByTag(paletteTag);

        SummarySprite_SetDynamicSpriteId(i, SPRITE_NONE);
    }
}

static void SummaryPage_LoadTilemap(void)
{
    enum MonSummaryBackgrounds nextBg = SUMMARY_BG_PAGE_1;

    CopyToBgTilemapBuffer(nextBg, SummaryPage_GetTilemap(SummaryPage_GetValue()), 0, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 8);
}

static void SummaryPage_Reload(enum MonSummaryReloadModes mode)
{
    SummaryPage_TogglePageSlot();

    for (u32 i = 0; i < NUM_SUMMARY_MAIN_WINDOWS; i++)
    {
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);
    }

    switch (mode)
    {
    default:
        break;
    case SUMMARY_RELOAD_MON:
        SummaryMon_SetStruct();
        SummarySprite_PlayPokemonCry();
        break;
    case SUMMARY_RELOAD_PAGE:
        {
            for (enum MonSummaryMainSprites i = 0; i < ARRAY_COUNT(sSummarySetup_MainSprites); i++)
            {
                struct Coords8 coords = SummaryPage_GetMainSpriteCoords(SummaryPage_GetValue(), i);
                u32 spriteId = SummarySprite_GetSpriteId(i);

                gSprites[spriteId].x = coords.x;
                gSprites[spriteId].y = coords.y;
            }

            SummaryPage_LoadTilemap();
            break;
        }
    }

    SummarySprite_CreateMonSprite();
    SummaryPage_UnloadDynamicSprites();

    void (*handleFrontEnd)(void) = SummaryPage_GetHandleFrontEndFunc(SummaryPage_GetValue());
    handleFrontEnd();
    SummaryPrint_TextBox();

    SummaryPrint_Header();
    SummaryPrint_HelpBar();
    CopyBgTilemapBufferToVram(SUMMARY_BG_TEXT);

    CopyWindowToVram(SUMMARY_MAIN_WIN_PAGE_TEXT, COPYWIN_GFX);
    CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_TEXT);
    CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_1);
}

static void SummarySprite_SetSpriteId(u8 id, u8 value)
{
    sMonSummaryDataPtr->spriteIds[id] = value;
}

static u8 SummarySprite_GetSpriteId(u8 id)
{
    return sMonSummaryDataPtr->spriteIds[id];
}

static void SummarySprite_SetDynamicSpriteId(u8 id, u8 value)
{
    sMonSummaryDataPtr->spriteIds[id + NUM_SUMMARY_MAIN_SPRITES] = value;
}

static u8 SummarySprite_GetDynamicSpriteId(u8 id)
{
    return sMonSummaryDataPtr->spriteIds[id + NUM_SUMMARY_MAIN_SPRITES];
}

static const struct MonSummarySprite *SummarySprite_GetMainStruct(u32 idx)
{
    return &sSummarySetup_MainSprites[idx];
}

static void SummarySprite_InjectHpBar(struct Sprite *sprite)
{
    struct WindowTemplate template = { .width = 8, .height  = 4 }; // 64x32
    u32 windowId = AddWindow(&template);

    BlitBitmapToWindow(windowId, sSummarySprite_HpBarBlit,
        0, 0,
        TILE_TO_PIXELS(template.width), TILE_TO_PIXELS(template.height));

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 currHp = mon->currHp;
    u32 maxHp = mon->stats[STAT_HP];

    u32 hpPercentage = (currHp * 100) / maxHp;
    enum MonSummaryHpBarColors color = hpPercentage / 33;
    if (color > SUMMARY_HP_BAR_CLR_GREEN) color = SUMMARY_HP_BAR_CLR_GREEN;

    LoadPalette(&sSummarySprite_HpBarColors[1 + (color * 2)], OBJ_PLTT_ID(sprite->oam.paletteNum) + 6, PLTT_SIZEOF(2));

    ConvertUIntToDecimalStringN(gStringVar1, currHp, STR_CONV_MODE_LEFT_ALIGN, 4);
    ConvertUIntToDecimalStringN(gStringVar2, maxHp, STR_CONV_MODE_LEFT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}/{STR_VAR_2}"));

    u32 width = TILE_TO_PIXELS(7) - 1; // 55
    u32 fontId = GetOutlineFontIdToFit(gStringVar4, width);
    u32 x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, gStringVar4, width, -1);
    SummaryPrint_AddText(windowId, fontId, x, 0, SUMMARY_FNTCLR_INTERFACE, gStringVar4);

    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(windowId);
}

// the FillWindowPixelRect width calc can be improved
// as i am not very mathy
static void SummarySprite_InjectExpBar(struct Sprite *sprite)
{
    struct WindowTemplate template = { .width = 8, .height  = 1 }; // 64x8, uses subsprite
    u32 windowId = AddWindow(&template);

    BlitBitmapToWindow(windowId, sSummarySprite_ExpBarBlit,
        0, 0,
        TILE_TO_PIXELS(template.width), TILE_TO_PIXELS(template.height));

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 maxExp = gExperienceTables[gSpeciesInfo[mon->species].growthRate][mon->level];
    u32 currExp = mon->exp - maxExp;
    maxExp -= gExperienceTables[gSpeciesInfo[mon->species].growthRate][mon->level - 1];

    u32 expPercentage = (currExp * 100) / maxExp;
    u32 width = uq4_12_divide(expPercentage, UQ_4_12(1.92));

    FillWindowPixelRect(windowId, PIXEL_FILL(15), 0, 0, width, 4);

    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(windowId);
}

static void SummarySprite_InjectFriendshipBar(struct Sprite *sprite)
{
    struct WindowTemplate template = { .width = 5, .height  = 1 }; // 48x8, uses subsprite
    u32 windowId = AddWindow(&template);

    BlitBitmapToWindow(windowId, sSummarySprite_FriendshipBarBlit,
        0, 0,
        TILE_TO_PIXELS(template.width), TILE_TO_PIXELS(template.height));

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 friendship = mon->friendship;
    u32 percentage = (friendship * 100) / MAX_FRIENDSHIP;
    u32 width = percentage / 4; // 25 pixels

    FillWindowPixelRect(windowId, PIXEL_FILL(12), 0, 2, width, 4);

    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(windowId);
}

static void SummarySprite_CreateMonSprite(void)
{
    if (SummarySprite_GetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON) != SPRITE_NONE)
    {
        DestroySpriteAndFreeResources(&gSprites[SummarySprite_GetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON)]);
    }
    else
    {
        // ensure neither of these gets overwritten by other sprite palettes
        AllocSpritePalette(TAG_SUMMARY_POKEMON_SLOT_1);
        AllocSpritePalette(TAG_SUMMARY_POKEMON_SLOT_2);
    }

    u32 coord = SummaryPage_GetValue() == SUMMARY_PAGE_INFOS ? 32 : 16;

    SummarySprite_InjectPokemon();
    SummarySprite_SetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON,
        CreateSprite(&gMultiuseSpriteTemplate, coord, coord, 0));

    u32 mainSpriteId = SummarySprite_GetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON);
    struct Sprite *sprite = &gSprites[mainSpriteId];

    FreeSpriteOamMatrix(sprite);
    sprite->oam.priority = 0;
    sprite->callback = SpriteCallbackDummy;
    sprite->hFlip = IsMonSpriteNotFlipped(SummaryMon_GetStruct()->species2);
    sprite->oam.paletteNum = SummarySprite_GetPokemonPaletteSlot();

    sprite->invisible = FALSE;
}

// switch between buffers
static void SummarySprite_InjectPokemon(void)
{
    u32 position = B_POSITION_OPPONENT_LEFT;
    struct MonSummary *mon = SummaryMon_GetStruct();
    u8 *gfx = NULL;

    if (gMain.inBattle || gMonSpritesGfxPtr != NULL)
    {
        gfx = gMonSpritesGfxPtr->spritesGfx[B_POSITION_OPPONENT_LEFT];
    }
    else
    {
        gfx = MonSpritesGfxManager_GetSpritePtr(MON_SPR_GFX_MANAGER_A, B_POSITION_OPPONENT_LEFT);
    }

    u32 index = SummarySprite_GetPokemonPaletteSlot();
    CpuFill32(0, gfx, 512);

    if (SummaryPage_GetValue() == SUMMARY_PAGE_INFOS)
    {
        HandleLoadSpecialPokePic(TRUE, gfx, mon->species2, mon->personality);

        LoadPalette(
            GetMonSpritePalFromSpeciesAndPersonality(mon->species, mon->isShiny, mon->personality),
            OBJ_PLTT_ID(index), PLTT_SIZE_4BPP);
        UniquePalette(OBJ_PLTT_ID(index), &sMonSummaryDataPtr->mon->box);
        CpuCopy32(&gPlttBufferFaded[OBJ_PLTT_ID(index)], &gPlttBufferUnfaded[OBJ_PLTT_ID(index)], PLTT_SIZEOF(16));

    }
    else
    {
        CpuCopy32(GetMonIconTiles(mon->species2, mon->personality), gfx, 512);
        LoadPalette(GetValidMonIconPalettePtr(mon->species2), OBJ_PLTT_ID(index), PLTT_SIZE_4BPP);
    }

    SetMultiuseSpriteTemplateToPokemon(TAG_NONE, position);

    if (SummaryPage_GetValue() != SUMMARY_PAGE_INFOS)
    {
        gMultiuseSpriteTemplate.oam = &sSummaryPage_MonIconOam;
    }
}

static u32 SummarySprite_GetPokemonPaletteSlot(void)
{
    return IndexOfSpritePaletteTag(TAG_SUMMARY_POKEMON_SLOT_1 + SummaryPage_GetPageSlot());
}

static void SummarySprite_PlayPokemonCry(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    if (mon->isEgg) return;

    u32 cryMode =
        ShouldPlayNormalMonCry(sMonSummaryDataPtr->mon) ? CRY_MODE_NORMAL : CRY_MODE_WEAK;

    PlayCry_ByMode(mon->species2, 0, cryMode);
}

static void SummarySprite_MonHeldItem(u32 spriteArrId, s32 x, s32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 itemId = mon->item, spriteId;

    if (itemId == ITEM_NONE || itemId >= ITEMS_COUNT) return;

    spriteId = AddItemIconSprite(TAG_SUMMARY_HELD_ITEM, TAG_SUMMARY_HELD_ITEM, itemId);

    gSprites[spriteId].x = x;
    gSprites[spriteId].y = y;
    gSprites[spriteId].sTileTag = TAG_SUMMARY_HELD_ITEM;
    gSprites[spriteId].sPaletteTag = TAG_SUMMARY_HELD_ITEM;

    SummarySprite_SetDynamicSpriteId(spriteArrId, spriteId);
}

static void SummarySprite_MonPokeBall(u32 spriteArrId, s32 x, s32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    enum PokeBall ball = mon->ball;

    LoadBallGfx(ball);
    u32 spriteId = CreateSprite(&gBallSpriteTemplates[ball], x, y, 0);

    gSprites[spriteId].callback = SpriteCallbackDummy;
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].sTileTag = gBallSpriteTemplates[ball].tileTag;
    gSprites[spriteId].sPaletteTag = gBallSpriteTemplates[ball].paletteTag;

    SummarySprite_SetDynamicSpriteId(spriteArrId, spriteId);
}

static void SpriteCB_SummarySprite_ShinySymbol(struct Sprite *sprite)
{
    sprite->invisible = SummaryMon_GetStruct()->isShiny ^ 1;
}

static void SpriteCB_SummarySprite_HpBar(struct Sprite *sprite)
{
    u32 index = SummaryInput_GetIndex();

    if (index == sprite->sMonIndex) return;

    SummarySprite_InjectHpBar(sprite);
    sprite->sMonIndex = index;
}

static void SpriteCB_SummarySprite_ExpBar(struct Sprite *sprite)
{
    u32 index = SummaryInput_GetIndex();

    if (index == sprite->sMonIndex) return;

    SummarySprite_InjectExpBar(sprite);
    sprite->sMonIndex = index;
}

static void SpriteCB_SummarySprite_FriendshipBar(struct Sprite *sprite)
{
    u32 index = SummaryInput_GetIndex();

    if (index == sprite->sMonIndex) return;

    SummarySprite_InjectFriendshipBar(sprite);
    sprite->sMonIndex = index;
}

// dynamic windows handles the id on its own
static void SummaryPrint_AddText(u32 windowId, u32 fontId, u32 x, u32 y, enum MonSummaryFontColors color, const u8 *str)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, 0, 0, sSummaryPrint_FontColors[color], TEXT_SKIP_DRAW, str);
}

static const struct WindowTemplate *SummaryPrint_GetMainWindowTemplate(u32 windowId)
{
    if (windowId >= ARRAY_COUNT(sSummarySetup_MainWindows)
     || windowId >= NUM_SUMMARY_MAIN_WINDOWS)
    {
        return &gDummyWindowTemplate;
    }

    return &sSummarySetup_MainWindows[windowId];
}

static void SummaryPrint_Header(void)
{
    // blit
    u32 winId = SUMMARY_MAIN_WIN_HEADER;
    SummaryPrint_BlitPageTabs(winId, 1, 4);

    // title
    const u8 *str = SummaryPage_GetName(SummaryPage_GetValue());
    u32 width = TILE_TO_PIXELS(SummaryPrint_GetMainWindowTemplate(winId)->width);

    u32 fontId = GetOutlineFontIdToFit(str, width);
    u32 x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, str, width, -1);

    SummaryPrint_AddText(winId, fontId, x, 16, SUMMARY_FNTCLR_INTERFACE, str);
    CopyWindowToVram(winId, COPYWIN_GFX);
}

static void SummaryPrint_BlitPageTabs(u32 windowId, u32 x, u32 y)
{
    for (enum MonSummaryPages page = 0; page < NUM_SUMMARY_PAGES; page++)
    {
        bool32 selected = page == SummaryPage_GetValue();

        BlitBitmapRectToWindow(windowId, sSummaryPrint_PageTabsBlit, selected * 8, 0, 16, 8, x, y, 8, 8);
        x += 11;
    }
}

static void SummaryPrint_BlitStatusSymbol(u32 x, u32 y)
{
    u32 ailment = SummaryMon_GetStruct()->ailment;
    if (ailment == AILMENT_NONE) return;
    ailment--;

    BlitBitmapRectToWindow(SUMMARY_MAIN_WIN_PAGE_TEXT,
        sSummaryPrint_StatusSymbolsBlit,
        0, ailment * 8,
        24, 64,
        x, y,
        24, 8);
}

static UNUSED void SummaryPrint_BlitMonMarkings(u32 windowId, u32 x, u32 y)
{

}

static void SummaryPrint_TextBox(void)
{
    struct UCoords8 coords = SummaryPage_GetTextBoxCoords(SummaryPage_GetValue());

    void (*handleTextBox)(void) = SummaryPage_GetHandleTextBoxFunc(SummaryPage_GetValue());
    handleTextBox();

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_NORMAL,
        coords.x, coords.y,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void SummaryPrint_HelpBar(void)
{
    void (*handleHelpBar)(void) = SummaryPage_GetHandleHelpBarFunc(SummaryPage_GetValue());
    handleHelpBar();

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_HELP_BAR, FONT_SMALL, 10, 1, SUMMARY_FNTCLR_HELP_BAR, gStringVar4);
    CopyWindowToVram(SUMMARY_MAIN_WIN_HELP_BAR, COPYWIN_GFX);
}

static void SummaryPrint_MonName(u32 x, u32 y, u32 maxWidth)
{
    // TODO blink
    struct MonSummary *mon = SummaryMon_GetStruct();
    const u8 *str = mon->nickname;
    u32 fontId = GetOutlineFontIdToFit(str, maxWidth);

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_MonGender(u32 x, u32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 species = mon->species2, gender = mon->gender;

    if ((species == SPECIES_NIDORAN_M || species == SPECIES_NIDORAN_F)
     || gender == MON_GENDERLESS)
    {
        return;
    }

    u32 femaleMon = gender == MON_FEMALE;
    enum MonSummaryFontColors color = SUMMARY_FNTCLR_MALE + femaleMon;
    const u8 *str = femaleMon ? gText_FemaleSymbol : gText_MaleSymbol;

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_OUTLINED, x, y, color, str);
}

static void SummaryPrint_MonLevel(u32 x, u32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    ConvertUIntToDecimalStringN(gStringVar1, mon->level, STR_CONV_MODE_LEFT_ALIGN, CountDigits(MAX_LEVEL));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{SHADOW 13}{LV}{SHADOW 1}{STR_VAR_1}"));

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_OUTLINED, x, y, SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void SummaryPrint_MonHeldItem(u32 x, u32 y, u32 maxWidth)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 itemId = mon->item;

    if (itemId == ITEM_NONE || itemId >= ITEMS_COUNT) return;

    const u8 *str = GetItemName(itemId);
    u32 fontId = GetOutlineFontIdToFit(str, maxWidth);

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_MonAbility(u32 x, u32 y, u32 maxWidth)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    enum Ability ability = GetSpeciesAbility(mon->species, mon->abilityNum);
    const u8 *str = GetAbilityName(ability);
    u32 fontId = GetOutlineFontIdToFit(str, maxWidth);

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_MonStat(enum Stat statIdx, u32 flag, u32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;

    if (flag & SUMMARY_STATS_FLAG_NAME)
    {
        enum MonSummaryFontColors color = SUMMARY_FNTCLR_NEU_STAT;
        u32 x2 = SUMMARY_STATS_GENERAL_NATURE_X;

        if (statIdx == gNaturesInfo[mon->nature].statUp)
        {
            color = SUMMARY_FNTCLR_POS_STAT;
            SummaryPrint_AddText(windowId, FONT_OUTLINED, x2, y, SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("+"));
        }
        else if (statIdx == gNaturesInfo[mon->nature].statDown)
        {
            color = SUMMARY_FNTCLR_NEG_STAT;
            SummaryPrint_AddText(windowId, FONT_OUTLINED, x2, y, SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("-"));
        }

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_NAME_X, y,
            color, sStatsPageGeneral_StatsNames[statIdx]);
    }

    if (flag & SUMMARY_STATS_FLAG_EVS)
    {
        u32 ev = mon->evs[statIdx];

        ConvertUIntToDecimalStringN(gStringVar1, ev, STR_CONV_MODE_LEFT_ALIGN, 3);
        u32 centerAlign = GetStringCenterAlignXOffsetWithLetterSpacing(FONT_OUTLINED,
                                gStringVar1, TILE_TO_PIXELS(2), -1);

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_EVS_X + centerAlign, y,
            SUMMARY_FNTCLR_INTERFACE, gStringVar1);
    }

    if (flag & SUMMARY_STATS_FLAG_IVS)
    {
        u32 iv = mon->ivs[statIdx];

        ConvertUIntToDecimalStringN(gStringVar1, iv, STR_CONV_MODE_LEFT_ALIGN, 2);
        u32 centerAlign = GetStringCenterAlignXOffsetWithLetterSpacing(FONT_OUTLINED, gStringVar1, 11, -1);

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_IVS_X + centerAlign, y,
            SUMMARY_FNTCLR_INTERFACE, gStringVar1);
    }

    if (flag & SUMMARY_STATS_FLAG_STATS)
    {
        u32 stat = mon->stats[statIdx];

        ConvertUIntToDecimalStringN(gStringVar1, stat, STR_CONV_MODE_LEFT_ALIGN, 4);
        u32 centerAlign = GetStringCenterAlignXOffsetWithLetterSpacing(FONT_OUTLINED, gStringVar1, TILE_TO_PIXELS(3) - 3, -1);

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_STATS_X + centerAlign, y,
            SUMMARY_FNTCLR_INTERFACE, gStringVar1);
    }
}

static void DummyPage_Handle(void)
{
    StringCopy(gStringVar4, COMPOUND_STRING(" "));
}

static void InfosPage_HandleFrontEnd(void)
{
    InfosPage_HandleHeader();
    InfosPage_HandleGeneral();
    InfosPage_HandleMisc();
}

static void InfosPage_HandleTextBox(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    ConvertUIntToDecimalStringN(gStringVar1, mon->metLevel, STR_CONV_MODE_LEFT_ALIGN, CountDigits(MAX_LEVEL));
    GetMapName(gStringVar2, mon->metLocation, 0);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Met at {LV} {STR_VAR_1}, {STR_VAR_2}."));
}

static void InfosPage_HandleHelpBar(void)
{
    if (SummaryInput_IsWithinSubMode())
    {
        StringCopy(gStringVar4, COMPOUND_STRING("{DPAD_NONE}Cycle {B_BUTTON} Cancel"));
    }
    else
    {
        StringCopy(gStringVar4, COMPOUND_STRING("{A_BUTTON} Details {B_BUTTON} Exit"));
    }
}

static void InfosPage_HandleHeader(void)
{
    SummaryPrint_MonName(SUMMARY_INFOS_HEADER_NAME_X, SUMMARY_INFOS_HEADER_NAME_Y, TILE_TO_PIXELS(8) - 2);
    SummaryPrint_MonGender(SUMMARY_INFOS_HEADER_GENDER_X, SUMMARY_INFOS_HEADER_GENDER_Y);
    SummaryPrint_MonLevel(SUMMARY_INFOS_HEADER_LEVEL_X, SUMMARY_INFOS_HEADER_LEVEL_Y);
    SummaryPrint_BlitStatusSymbol(SUMMARY_INFOS_HEADER_STATUS_X, SUMMARY_INFOS_HEADER_STATUS_Y);
}

static void InfosPage_HandleGeneral(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    InfosPageGeneral_PrintMonTyping(mon);
    InfosPageGeneral_PrintTrainerInfo(mon);
    InfosPageGeneral_PrintNeededExperience(mon);
    InfosPageGeneral_PrintNatureInfo(mon);
}

static void InfosPageGeneral_PrintMonTyping(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 fontId = FONT_OUTLINED;

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("Type:"));

    u32 species = mon->species;
    enum Type types[2] = { GetSpeciesType(species, 0), GetSpeciesType(species, 1) };

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y,
        SUMMARY_FNTCLR_INTERFACE, gTypesInfo[types[0]].shortName);

    if (types[1] != types[0])
    {
        SummaryPrint_AddText(windowId, fontId,
            SUMMARY_INFOS_GENERAL_X3, SUMMARY_INFOS_GENERAL_Y,
            SUMMARY_FNTCLR_INTERFACE, gTypesInfo[types[1]].shortName);
    }
}

static void InfosPageGeneral_PrintTrainerInfo(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 fontId = FONT_OUTLINED;

    // OT: <trainer name>
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y2,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("OT:"));
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y2,
        SUMMARY_FNTCLR_INTERFACE, mon->trainerName);

    // ID: <numbers>
    ConvertIntToDecimalStringN(gStringVar1, (u16)mon->trainerId, STR_CONV_MODE_LEADING_ZEROS, 5);
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y3,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("ID:"));
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y3,
        SUMMARY_FNTCLR_INTERFACE, gStringVar1);
}

static void InfosPageGeneral_PrintNeededExperience(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 fontId = FONT_OUTLINED;

    // EXP: <numbers> to Lv <next level>
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y4,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("EXP:"));

    u32 species = mon->species;
    u32 level = mon->level;

    u32 exp = 0;
    if (level < MAX_LEVEL)
    {
        exp = gExperienceTables[gSpeciesInfo[species].growthRate][level + 1] - mon->exp;
        level += 1;
    }

    ConvertUIntToDecimalStringN(gStringVar1, exp, STR_CONV_MODE_LEFT_ALIGN, 7);
    ConvertUIntToDecimalStringN(gStringVar2, level, STR_CONV_MODE_LEFT_ALIGN, CountDigits(MAX_LEVEL));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1} to {LV} {STR_VAR_2}"));

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y4,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

// <nature> nature <fav flavor> combined, will be called more often
static void InfosPageGeneral_PrintNatureInfo(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 winWidth = WindowWidthPx(windowId);
    u32 fontId = FONT_OUTLINED;

    // TODO implement menu blink
    StringCopy(gStringVar1, gNaturesInfo[mon->nature].name);
    if (mon->flavors[0] != FLAVOR_COUNT && mon->flavors[1] != FLAVOR_COUNT)
    {
        StringCopy(gStringVar2, COMPOUND_STRING("{EMOJI_HEART} "));
        StringAppend(gStringVar2, sInfosPageGeneral_BerryFlavorNames[mon->flavors[SUMMARY_MON_LIKED_FLAVOR]]);
    }
    else
    {
        StringCopy(gStringVar2, COMPOUND_STRING(" "));
    }

    const u8 *strTemplate = COMPOUND_STRING("{STR_VAR_1} Nature {STR_VAR_2}");

    StringExpandPlaceholders(gStringVar4, strTemplate);
    fontId = GetOutlineFontIdToFit(gStringVar4, winWidth);

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y5,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void InfosPage_HandleMisc(void)
{
    // PSF TODO update and use SummaryPrint_BlitMonMarkings once all 6 markings are implemented

    SummaryPrint_MonHeldItem(SUMMARY_INFOS_MISC_ITEM_NAME_X, SUMMARY_INFOS_MISC_ITEM_NAME_Y, TILE_TO_PIXELS(8));
    SummaryPrint_MonAbility(SUMMARY_INFOS_MISC_ABILITY_NAME_X, SUMMARY_INFOS_MISC_ABILITY_NAME_Y, TILE_TO_PIXELS(10));

    SummarySprite_MonHeldItem(SUMMARY_INFOS_SPRITE_HELD_ITEM,
        SUMMARY_INFOS_MISC_HELD_ITEM_X, SUMMARY_INFOS_MISC_HELD_ITEM_Y);

    SummarySprite_MonPokeBall(SUMMARY_INFOS_SPRITE_POKE_BALL,
        SUMMARY_INFOS_MISC_POKE_BALL_X, SUMMARY_INFOS_MISC_POKE_BALL_Y);
}

static void StatsPage_HandleFrontEnd(void)
{
    StatsPage_HandleHeader();
    StatsPage_HandleGeneral();
    StatsPage_HandleMisc();
}

static void StatsPage_HandleHeader(void)
{
    SummaryPrint_MonName(SUMMARY_STATS_HEADER_NAME_X, SUMMARY_STATS_HEADER_Y, TILE_TO_PIXELS(8));
    SummaryPrint_MonGender(SUMMARY_STATS_HEADER_GENDER_X, SUMMARY_STATS_HEADER_Y);
    SummaryPrint_MonLevel(SUMMARY_STATS_HEADER_LEVEL_X, SUMMARY_STATS_HEADER_Y);
}

// thanks middle speed..
static void StatsPage_HandleGeneral(void)
{
    u32 y = TILE_TO_PIXELS(4) + 1;
    SummaryPrint_MonStat(STAT_HP,    SUMMARY_STATS_FLAG_ALL, y);

    y += TILE_TO_PIXELS(2);
    SummaryPrint_MonStat(STAT_ATK,   SUMMARY_STATS_FLAG_ALL, y);

    y += TILE_TO_PIXELS(2);
    SummaryPrint_MonStat(STAT_DEF,   SUMMARY_STATS_FLAG_ALL, y);

    y += TILE_TO_PIXELS(2);
    SummaryPrint_MonStat(STAT_SPATK, SUMMARY_STATS_FLAG_ALL, y);

    y += TILE_TO_PIXELS(2);
    SummaryPrint_MonStat(STAT_SPDEF, SUMMARY_STATS_FLAG_ALL, y);

    y += TILE_TO_PIXELS(2);
    SummaryPrint_MonStat(STAT_SPEED, SUMMARY_STATS_FLAG_ALL, y);
}

static void StatsPage_HandleMisc(void)
{
    StatsPageMisc_MonTotalEVs();

    SummaryPrint_MonHeldItem(
        SUMMARY_STATS_MISC_ITEM_NAME_X, SUMMARY_STATS_MISC_ITEM_NAME_Y,
        TILE_TO_PIXELS(8));

    SummaryPrint_MonAbility(
        SUMMARY_STATS_MISC_ABILITY_NAME_X, SUMMARY_STATS_MISC_ABILITY_NAME_Y,
        TILE_TO_PIXELS(8));

    SummarySprite_MonHeldItem(SUMMARY_INFOS_SPRITE_HELD_ITEM,
        SUMMARY_STATS_MISC_HELD_ITEM_X, SUMMARY_STATS_MISC_HELD_ITEM_Y);
}

static void StatsPageMisc_MonTotalEVs(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 usedEVs = 0;

    for (enum Stat statIdx = 0; statIdx < NUM_STATS; statIdx++)
    {
        usedEVs += mon->evs[statIdx];
    }

    ConvertUIntToDecimalStringN(gStringVar1, usedEVs, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("EVs: {STR_VAR_1}/510"));

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_OUTLINED,
        SUMMARY_STATS_MISC_TOTAL_EVS_X, SUMMARY_STATS_MISC_TOTAL_EVS_Y,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}
