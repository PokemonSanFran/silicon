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

#include "event_scripts.h" //PSF allows for calling of mapscript to set secret lab

bool8 ShouldDoSecretLabDigEffect(void)
{
    if (!FlagGet(FLAG_DISCOVERED_PARC)
     && (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE4)
     && gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE4)))
    {
         if ((gSaveBlock1Ptr->pos.x > 11 && gSaveBlock1Ptr->pos.x < 15) && (gSaveBlock1Ptr->pos.y > 15 && gSaveBlock1Ptr->pos.y < 19))
             return TRUE;
    }

    return FALSE;
}

void DoSecretLabDigEffect(void)
{
    ScriptContext_SetupScript(Route4_UncoverSecretLab_Script);
    PlaySE(SE_BANG);
}
