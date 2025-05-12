#include "global.h"
#include "event_data.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_weather.h"
#include "fldeff.h"
#include "palette.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "task.h"
#include "util.h"
#include "constants/battle_anim.h"
#include "constants/field_effects.h"
#include "constants/songs.h"
#include "constants/weather.h"

static void UNUSED ReturnFogAfterClearing(u8 taskId)
{
    //PSF TODO hook this up to run when ShouldWildBattleBeFog returns TRUE during the actual field effect script
    gTasks[taskId].data[0] = 0;

    if (gPaletteFade.active)
        return;

    SetWeather(WEATHER_FOG_HORIZONTAL);
    gWeatherPtr->currWeather = WEATHER_FOG_HORIZONTAL;
    ScriptContext_SetupScript(EventScript_RegenerateFog);
    DestroyTask(taskId);
}

