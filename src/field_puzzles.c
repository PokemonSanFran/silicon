#include "global.h"
#include "event_data.h"
#include "field_camera.h"
#include "field_effect.h"
#include "script.h"
#include "sound.h"
#include "task.h"
#include "constants/field_effects.h"
#include "constants/songs.h"
#include "constants/metatile_labels.h"
#include "fieldmap.h"
#include "party_menu.h"
#include "fldeff.h"
#include "quest_logic.h"

#include "event_scripts.h" //PSF allows for calling of mapscript to set secret lab

bool8 ShouldDoSecretLabDigEffect(void)
{
    if (FlagGet(FLAG_DISCOVERED_PARC))
        return FALSE;

    if (GetCurrentMap() != MAP_ROUTE4)
        return FALSE;

    u32 pX = gSaveBlock1Ptr->pos.x;
    u32 pY = gSaveBlock1Ptr->pos.y;

    if (pX < 12 || pX > 14)
        return FALSE;

    if (pY < 16 || pY > 18)
        return FALSE;

    return TRUE;
}

void UncoverDoorsLab(void)
{
    MapGridSetMetatileIdAt((12 + MAP_OFFSET), (16 + MAP_OFFSET), 0x103);
    MapGridSetMetatileIdAt((13 + MAP_OFFSET), (16 + MAP_OFFSET), 0x104);
    MapGridSetMetatileIdAt((14 + MAP_OFFSET), (16 + MAP_OFFSET), 0x105);

    MapGridSetMetatileIdAt((12 + MAP_OFFSET), (17 + MAP_OFFSET), 0x10B);
    MapGridSetMetatileIdAt((13 + MAP_OFFSET), (17 + MAP_OFFSET), METATILE_General_CaveEntrance_Bottom);
    MapGridSetMetatileIdAt((14 + MAP_OFFSET), (17 + MAP_OFFSET), 0x10D);

    MapGridSetMetatileIdAt((12 + MAP_OFFSET), (18 + MAP_OFFSET), 0x113);
    MapGridSetMetatileIdAt((13 + MAP_OFFSET), (18 + MAP_OFFSET), 0x114);
    MapGridSetMetatileIdAt((14 + MAP_OFFSET), (18 + MAP_OFFSET), 0x115);

    DrawWholeMapView();
}

void DoSecretLabDigEffect(void)
{
    UncoverDoorsLab();

    if (VarGet(VAR_PARC_STATE) == LAB_NOT_DISCOVERED)
        VarSet(VAR_PARC_STATE,PLAYER_DISCOVERED_LAB);

    PlaySE(SE_BANG);
    FlagSet(FLAG_DISCOVERED_PARC);

    ScriptContext_SetupScript(ThisIsntRandom_CheckDoor_Script);
}
