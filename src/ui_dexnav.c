#include "global.h"

static void Dexnav_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Dexnav_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Dexnav_InitalizeBackgrounds(void)
{
    ResetAllBgsCoordinates();

    if (!AllocZeroedTilemapBuffers())
        return FALSE;

   HandleAndShowBgs();

    return TRUE;
}

static bool32 AllocZeroedTilemapBuffers(void)
{
    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sDexnavBgTemplates, NELEMS(sDexnavBgTemplates));

    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
}

static void SetScheduleBgs(enum DexnavBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    DoScheduledBgTilemapCopiesToVram(backgroundId);
}

static const u32* const sDexnavTilesLUT[] = 
{
    [BG0_DEXNAV_TEXT] = NULL,
    [BG1_DEXNAV_WHEEL] = dexnavWheelTiles,
    [BG2_DEXNAV_UI] = dexnavInterfaceTiles,
    [BG3_DEXNAV_BACKGROUNDS] = dexnavBgTiles,
};

static const u32* const sDexnavTilemapLUT[] = 
{
    [BG0_DEXNAV_TEXT] = NULL,
    [BG1_DEXNAV_WHEEL] = dexnavWheelTilemap,
    [BG2_DEXNAV_UI] = dexnavInterfaceTilemap,
    [BG3_DEXNAV_BACKGROUNDS] = dexnavBgTilemap,
};

static const u16* const sDexnavPalettesLUT[] = 
{
    [VISUAL_OPTION_COLOR_RED] = dexnavPalettesRed,
    [VISUAL_OPTION_COLOR_GREEN] = dexnavPalettesGreen,
    [VISUAL_OPTION_COLOR_BLUE] = dexnavPalettesBlue,
    [VISUAL_OPTION_COLOR_YELLOW] = dexnavPalettesYellow,
    [VISUAL_OPTION_COLOR_BLACK] = dexnavPalettesBlack,
    [VISUAL_OPTION_COLOR_WHITE] = dexnavPalettesWhite,
    [VISUAL_OPTION_COLOR_PLATINUM] = dexnavPalettesPlatinum,
    [VISUAL_OPTION_COLOR_SCARLET] = dexnavPalettesScarlet,
    [VISUAL_OPTION_COLOR_VIOLET] = dexnavPalettesViolet,
    [VISUAL_OPTION_COLOR_CUSTOM] = dexnavPalettesDefault,
    [VISUAL_OPTION_COLOR_COUNT] = dexnavPalettesDefault,
}
