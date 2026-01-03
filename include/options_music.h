#ifndef GUARD_OPTIONS_MUSIC_H
#define GUARD_OPTIONS_MUSIC_H

void CorrectSavedMusic(void);
void ResetCurrentlyPlayingMusic(void);
void PreviewBGM(u32 currentOptionId, u32 musicOption);

// Music Settings:  Surf Music
bool32 IsCurrentMusicSurfOrUnderwaterMusic(u32);
bool32 IsCurrentMusicSurfMusic(u32);
u32 GetSurfMusicFromOption(void);

// Music Settings: Bike Music
u32 GetBikeMusicFromOption(void);

// Music Settings: Wild Battle Music
u32 GetWildBattleMusicFromOption(void);

// Music Setting: Trainer Battle Music
u32 GetTrainerBattleMusicFromOption(void);

// Music Setting: Gym Battle Music
u32 GetGymBattleMusicFromOption(void);

// Music Setting: Tournament Battle Music
u32 GetTournamentBattleMusicFromOption(void);

// Music Setting: Champion Battle Music
u32 GetChampionBattleMusicFromOption(void);

// Music Setting: Mute
bool32 IsMusicMuted(void);
bool32 AreFanfaresMuted(void);
bool32 AreSoundEffectsMuted(void);
bool32 AreCriesMuted(void);
void ReturnDummyMusicIfMuted(u16*);

#endif // GUARD_OPTIONS_MUSIC_H
