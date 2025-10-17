#include "global.h"
#include "ui_options_menu.h"
#include "constants/songs.h"
#include "constants/cries.h"
#include "options_music.h"
#include "overworld.h"
#include "sound.h"
#include "constants/species.h"
#include "random.h"

static void CorrectSavedSurfMusic(u16 music);
static void CorrectSavedBikeMusic(u16 music);

static bool32 IsCurrentMusicUnderwaterMusic(u32);
bool32 IsCurrentMusicSurfMusic(u32);
static u32 GetSurfMusic(u32);

static u32 GetBikeMusic(u32);
static u32 GetWildBattleMusic(u32);
static u32 GetTrainerBattleMusic(u32);
static u32 GetGymBattleMusic(u32);
static u32 GetTournamentBattleMusic(u32);
static u32 GetChampionBattleMusic(u32);

void PreviewBGM(u32 currentOptionId, u32 musicOption)
{
    if (IsMusicMuted())
        return;

    switch (currentOptionId)
    {
        case MUSIC_OPTIONS_SURF:
            PlayBGM(GetSurfMusic(musicOption));
            break;
        case MUSIC_OPTIONS_BIKE:
            PlayBGM(GetBikeMusic(musicOption));
            break;
        case MUSIC_OPTIONS_WILD:
            PlayBGM(GetWildBattleMusic(musicOption));
            break;
        case MUSIC_OPTIONS_TRAINER:
            PlayBGM(GetTrainerBattleMusic(musicOption));
            break;
        case MUSIC_OPTIONS_GYM:
            PlayBGM(GetGymBattleMusic(musicOption));
            break;
        case MUSIC_OPTIONS_TOURNAMENT:
            PlayBGM(GetTournamentBattleMusic(musicOption));
            break;
        case MUSIC_OPTIONS_CHAMPION:
            PlayBGM(GetChampionBattleMusic(musicOption));
            break;
        case MUSIC_OPTIONS_MUTE_MUSIC:
            if (musicOption)
                PlayBGM(MUS_DUMMY);
            else
                ResetCurrentlyPlayingMusic();
            break;
        case MUSIC_OPTIONS_MUTE_SOUNDFX:
            return;
        case MUSIC_OPTIONS_MUTE_CRIES:
            if (!musicOption)
                PlayCry_NormalNoDucking(Random() % NUM_SPECIES, 0, CRY_VOLUME_RS, CRY_PRIORITY_NORMAL);
            break;
        case MUSIC_OPTIONS_MUTE_FANFARES:
            if (!musicOption)
                PlayFanfare(MUS_LEVEL_UP);
            break;
        default:
            ResetCurrentlyPlayingMusic();
            break;
    }
}

void ResetCurrentlyPlayingMusic(void)
{
    PlayBGM(GetCorrectMusicForScenario());
}

// ***********************************************************************
// Music Settings: Mute Music
// ***********************************************************************

bool32 IsMusicMuted(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_MUTE_MUSIC];
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
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_MUTE_SOUNDFX];
}

// ***********************************************************************
// Music Settings: Mute Cries
// ***********************************************************************

bool32 AreCriesMuted(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_MUTE_CRIES];
}

// ***********************************************************************
// Music Settings: Mute Fanfares
// ***********************************************************************

bool32 AreFanfaresMuted(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_MUTE_FANFARES];
}

// ***********************************************************************
// Music Settings: Surf Music
// ***********************************************************************

void CorrectSavedMusic(void)
{
    u16 music = gSaveBlock1Ptr->savedMusic;

    CorrectSavedSurfMusic(music);
    CorrectSavedBikeMusic(music);
}

static void CorrectSavedSurfMusic(u16 music)
{
    u32 i;
    u32 correct = GetSurfMusicFromOption();

    if(music == correct)
        return;

    for (i = 0; i < MUSIC_PRESET_COUNT; i++)
    {
        if (music != GetSurfMusic(i))
            continue;

        Overworld_SetSavedMusic(correct);
        return;
    }
}

static u32 GetSurfMusicOption(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_SURF];
}

bool32 IsCurrentMusicSurfOrUnderwaterMusic(u32 currentMusic)
{
    return (IsCurrentMusicSurfMusic(currentMusic) || IsCurrentMusicUnderwaterMusic(currentMusic));
}

bool32 IsCurrentMusicSurfMusic(u32 currentMusic)
{
    u32 musicIndex;
    for (musicIndex = 0; musicIndex < MUSIC_PRESET_CUSTOM; musicIndex++)
        if (currentMusic == GetSurfMusic(musicIndex))
            return TRUE;

    return FALSE;
}

static bool32 IsCurrentMusicUnderwaterMusic(u32 currentMusic)
{
    return (currentMusic == MUS_UNDERWATER);
}

u32 GetSurfMusicFromOption(void)
{
    return GetSurfMusic(GetSurfMusicOption());
}

static u32 GetSurfMusic(u32 musicIndex)
{
    switch(musicIndex)
    {
        case MUSIC_PRESET_LGPE: return MUS_RG_SURF;
        case MUSIC_PRESET_HGSS: return MUS_RG_VS_MEWTWO;
        case MUSIC_PRESET_ORAS: return MUS_CREDITS;
        case MUSIC_PRESET_BDSP: return MUS_RG_CAUGHT;
        case MUSIC_PRESET_BW2:  return MUS_GSC_PEWTER;
        case MUSIC_PRESET_XY:   return MUS_RG_ENCOUNTER_DEOXYS;
        case MUSIC_PRESET_USUM: return MUS_SLOTS_WIN;
        case MUSIC_PRESET_SWSH: return MUS_EVOLVED;
        case MUSIC_PRESET_SV:   return MUS_LITTLEROOT;
        default:                return MUS_SURF;
    }
}

// ***********************************************************************
// Music Settings: Bike Music
// ***********************************************************************

static void CorrectSavedBikeMusic(u16 music)
{
    u32 i;
    u32 correct = GetBikeMusicFromOption();

    if (music == correct)
        return;

    for (i = 0; i < MUSIC_PRESET_COUNT; i++)
    {
        if (music != GetBikeMusic(i))
            continue;

        Overworld_SetSavedMusic(correct);
        return;
    }
}
static u32 GetBikeMusicOption(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_BIKE];
}

u32 GetBikeMusicFromOption(void)
{
    return GetBikeMusic(GetBikeMusicOption());
}

static u32 GetBikeMusic(u32 musicIndex)
{
    switch(musicIndex)
    {
        case MUSIC_PRESET_LGPE: return MUS_RG_CYCLING;
        case MUSIC_PRESET_HGSS: return MUS_RG_FOLLOW_ME;
        case MUSIC_PRESET_ORAS: return MUS_RG_POKE_JUMP;
        case MUSIC_PRESET_BDSP: return MUS_AWAKEN_LEGEND;
        case MUSIC_PRESET_BW2:  return MUS_VERDANTURF;
        case MUSIC_PRESET_XY:   return MUS_OBTAIN_BERRY;
        case MUSIC_PRESET_USUM: return MUS_SCHOOL;
        case MUSIC_PRESET_SWSH: return MUS_GSC_ROUTE38;
        case MUSIC_PRESET_SV:   return MUS_LILYCOVE_MUSEUM;
        default:                return MUS_CYCLING;
    }
}

// ***********************************************************************
// Music Settings: WildBattleBattle Battle
// ***********************************************************************
static u32 GetWildBattleMusicOption(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_WILD];
}

u32 GetWildBattleMusicFromOption(void)
{
    return GetWildBattleMusic(GetWildBattleMusicOption());
}

static u32 GetWildBattleMusic(u32 musicIndex)
{
    switch(musicIndex)
    {
        case MUSIC_PRESET_LGPE: return MUS_RG_VS_WILD;
        case MUSIC_PRESET_HGSS: return MUS_ENCOUNTER_HIKER;
        case MUSIC_PRESET_ORAS: return MUS_VICTORY_WILD;
        case MUSIC_PRESET_BDSP: return MUS_B_FACTORY;
        case MUSIC_PRESET_BW2:  return MUS_RG_SEVII_67;
        case MUSIC_PRESET_XY:   return MUS_SLATEPORT;
        case MUSIC_PRESET_USUM: return MUS_VICTORY_GYM_LEADER;
        case MUSIC_PRESET_SWSH: return MUS_RG_SEVII_123;
        case MUSIC_PRESET_SV:   return MUS_GYM;
        default:                return MUS_VS_WILD;
    }
}

// ***********************************************************************
// Music Settings: TrainerBattle Battle
// ***********************************************************************
static u32 GetTrainerBattleMusicOption(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_TRAINER];
}

u32 GetTrainerBattleMusicFromOption(void)
{
    return GetTrainerBattleMusic(GetTrainerBattleMusicOption());
}

static u32 GetTrainerBattleMusic(u32 musicIndex)
{
    switch(musicIndex)
    {
        case MUSIC_PRESET_LGPE: return MUS_RG_VS_TRAINER;
        case MUSIC_PRESET_HGSS: return MUS_B_DOME_LOBBY;
        case MUSIC_PRESET_ORAS: return MUS_RG_OAK;
        case MUSIC_PRESET_BDSP: return MUS_DEWFORD;
        case MUSIC_PRESET_BW2:  return MUS_RG_POKE_FLUTE;
        case MUSIC_PRESET_XY:   return MUS_BIRCH_LAB;
        case MUSIC_PRESET_USUM: return MUS_VICTORY_AQUA_MAGMA;
        case MUSIC_PRESET_SWSH: return MUS_RG_LAVENDER;
        case MUSIC_PRESET_SV:   return MUS_ENCOUNTER_AQUA;
        default:                return MUS_VS_TRAINER;
    }
}
// ***********************************************************************
// Music Settings: Gym Battle
// ***********************************************************************
static u32 GetGymBattleMusicOption(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_GYM];
}

u32 GetGymBattleMusicFromOption(void)
{
    return GetGymBattleMusic(GetGymBattleMusicOption());
}

static u32 GetGymBattleMusic(u32 musicIndex)
{
    switch(musicIndex)
    {
        case MUSIC_PRESET_LGPE: return MUS_RG_VS_GYM_LEADER;
        case MUSIC_PRESET_HGSS: return MUS_RG_ENCOUNTER_GIRL;
        case MUSIC_PRESET_ORAS: return MUS_CONTEST_RESULTS;
        case MUSIC_PRESET_BDSP: return MUS_LINK_CONTEST_P1;
        case MUSIC_PRESET_BW2:  return MUS_RG_SEVII_ROUTE;
        case MUSIC_PRESET_XY:   return MUS_ENCOUNTER_ELITE_FOUR;
        case MUSIC_PRESET_USUM: return MUS_POKE_MART;
        case MUSIC_PRESET_SWSH: return MUS_VS_AQUA_MAGMA_LEADER;
        case MUSIC_PRESET_SV:   return MUS_VS_FRONTIER_BRAIN;
        default:                return MUS_VS_GYM_LEADER;
    }
}
// ***********************************************************************
// Music Settings: Tournament Battle
// ***********************************************************************
static u32 GetTournamentBattleMusicOption(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_TOURNAMENT];
}

u32 GetTournamentBattleMusicFromOption(void)
{
    return GetTournamentBattleMusic(GetTournamentBattleMusicOption());
}

static u32 GetTournamentBattleMusic(u32 musicIndex)
{
    switch(musicIndex)
    {
        case MUSIC_PRESET_LGPE: return MUS_POKE_CENTER;
        case MUSIC_PRESET_HGSS: return MUS_VICTORY_LEAGUE;
        case MUSIC_PRESET_ORAS: return MUS_MT_PYRE;
        case MUSIC_PRESET_BDSP: return MUS_RG_HALL_OF_FAME;
        case MUSIC_PRESET_BW2:  return MUS_LINK_CONTEST_P2;
        case MUSIC_PRESET_XY:   return MUS_RG_ENCOUNTER_RIVAL;
        case MUSIC_PRESET_USUM: return MUS_CONTEST_LOBBY;
        case MUSIC_PRESET_SWSH: return MUS_RG_ROUTE3;
        case MUSIC_PRESET_SV:   return MUS_RG_VICTORY_TRAINER;
        default:                return MUS_VS_ELITE_FOUR;
    }
}
// ***********************************************************************
// Music Settings: Champion
// ***********************************************************************
static u32 GetChampionBattleMusicOption(void)
{
    return gSaveBlock2Ptr->optionsMusic[MUSIC_OPTIONS_CHAMPION];
}

u32 GetChampionBattleMusicFromOption(void)
{
    return GetChampionBattleMusic(GetChampionBattleMusicOption());
}

static u32 GetChampionBattleMusic(u32 musicIndex)
{
    switch(musicIndex)
    {
        case MUSIC_PRESET_LGPE: return MUS_RG_VS_CHAMPION;
        case MUSIC_PRESET_HGSS: return MUS_RG_VICTORY_ROAD;
        case MUSIC_PRESET_ORAS: return MUS_ROULETTE;
        case MUSIC_PRESET_BDSP: return MUS_PETALBURG;
        case MUSIC_PRESET_BW2:  return MUS_OBTAIN_SYMBOL;
        case MUSIC_PRESET_XY:   return MUS_CAUGHT;
        case MUSIC_PRESET_USUM: return MUS_OBTAIN_TMHM;
        case MUSIC_PRESET_SWSH: return MUS_RG_VS_DEOXYS;
        case MUSIC_PRESET_SV:   return MUS_RG_PHOTO;
        default:                return MUS_VS_CHAMPION;
    }
}
