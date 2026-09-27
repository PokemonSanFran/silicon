#ifndef GUARD_OPTIONS_MUSIC_H
#define GUARD_OPTIONS_MUSIC_H

// Music Setting: Mute
bool32 IsMusicMuted(void);
bool32 AreFanfaresMuted(void);
bool32 AreSoundEffectsMuted(void);
bool32 AreCriesMuted(void);
void ReturnDummyMusicIfMuted(u16*);

#endif // GUARD_OPTIONS_MUSIC_H
