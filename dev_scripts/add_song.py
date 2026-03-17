import os
import sys

def add_song_to_project(midi_input):
    # 1. Strip folder path and extension to get the clean name
    # This turns "sound/songs/midi/mus_route6_night.mid" -> "mus_route6_night"
    clean_name = os.path.basename(midi_input) 
    base_name = os.path.splitext(clean_name)[0].lower()
    upper_name = base_name.upper()

    # Define File Paths
    SONGS_H = "include/constants/songs.h"
    SONG_TABLE = "sound/song_table.inc"
    MIDI_CFG = "sound/songs/midi/midi.cfg"
    DEBUG_C = "src/debug.c"

    # 2. Update include/constants/songs.h
    # Target: Insert before MUS_LAST 
    update_file(SONGS_H, 
                "    MUS_LAST,", 
                f"    {upper_name},\n    MUS_LAST,")

    # 3. Update sound/song_table.inc
    # Target: After mus_vs_game_director 
    # Format: song name, PLAYER, 0
    update_file(SONG_TABLE,
                "song mus_vs_game_director, MUSIC_PLAYER_BGM, 0",
                f"song mus_vs_game_director, MUSIC_PLAYER_BGM, 0\n\tsong {base_name}, MUSIC_PLAYER_BGM, 0")

    # 4. Update sound/songs/midi/midi.cfg
    # Target: Append config flags to the end [cite: 3]
    with open(MIDI_CFG, "a") as f:
        f.write(f"{base_name}.mid:           -E -R50 -G191 -V080 -P1\n")

    # 5. Update src/debug.c
    # Target: After X(MUS_VS_GAME_DIRECTOR) [cite: 4]
    update_file(DEBUG_C,
                "X(MUS_VS_GAME_DIRECTOR) \\",
                f"X(MUS_VS_GAME_DIRECTOR) \\\n    X({upper_name}) \\")

    print(f"Successfully processed: {base_name}")

def update_file(path, search_text, replace_text):
    if not os.path.exists(path):
        print(f"Warning: {path} not found. Skipping...")
        return
    
    with open(path, 'r') as f:
        content = f.read()
    
    if search_text in content:
        new_content = content.replace(search_text, replace_text)
        with open(path, 'w') as f:
            f.write(new_content)
    else:
        print(f"Warning: Could not find anchor in {path}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python add_song.py sound/songs/midi/your_song.mid")
    else:
        add_song_to_project(sys.argv[1])