#include "global.h"
#include "ui_options_menu.h"
#include "constants/songs.h"
#include "constants/cries.h"
#include "options_music.h"
#include "overworld.h"
#include "ui_pokedex.h"
#include "quest_logic.h"
#include "sound.h"
#include "constants/species.h"
#include "random.h"

// ***********************************************************************
// Music Settings: Mute Music
// ***********************************************************************

bool32 IsMusicMuted(void)
{
    return OptionsMenu_GetSavedOptions(MUSIC_SETTINGS,MUSIC_OPTIONS_MUTE_MUSIC);
}

void ReturnDummyMusicIfMuted(u16* songNum)
{
    if (!IsMusicMuted())
        return;

    *songNum = MUS_DUMMY;
}

// ***********************************************************************
// Music Settings: Mute Sound Effects
// ***********************************************************************

bool32 AreSoundEffectsMuted(void)
{
    return OptionsMenu_GetSavedOptions(MUSIC_SETTINGS,MUSIC_OPTIONS_MUTE_SOUNDFX);
}

// ***********************************************************************
// Music Settings: Mute Cries
// ***********************************************************************

bool32 AreCriesMuted(void)
{
    return OptionsMenu_GetSavedOptions(MUSIC_SETTINGS,MUSIC_OPTIONS_MUTE_CRIES);
}

// ***********************************************************************
// Music Settings: Mute Fanfares
// ***********************************************************************

bool32 AreFanfaresMuted(void)
{
    return OptionsMenu_GetSavedOptions(MUSIC_SETTINGS,MUSIC_OPTIONS_MUTE_FANFARES);
}
