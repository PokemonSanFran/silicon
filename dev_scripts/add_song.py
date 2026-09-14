import os
import sys

def add_song_to_project(midi_input):
    clean_name = os.path.basename(midi_input)
    base_name = os.path.splitext(clean_name)[0].lower()
    upper_name = base_name.upper()

    SONGS_H = "include/constants/songs.h"
    SONG_TABLE = "sound/song_table.inc"
    MIDI_CFG = "sound/songs/midi/midi.cfg"
    DEBUG_C = "src/debug.c"

    update_file(
        SONGS_H,
        "    MUS_LAST,",
        f"    {upper_name},\n    MUS_LAST,"
    )

    insert_song_before_ph_trap_blend(SONG_TABLE, base_name)

    with open(MIDI_CFG, "a") as f:
        f.write(f"{base_name}.mid:           -E -R50 -G191 -V080 -P1\n")

    insert_song_above_blank_before_sound_list(DEBUG_C, upper_name)

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

def insert_song_before_ph_trap_blend(path, base_name):
    if not os.path.exists(path):
        print(f"Warning: {path} not found. Skipping...")
        return

    with open(path, 'r') as f:
        lines = f.readlines()

    for i, line in enumerate(lines):
        if "song ph_trap_blend" in line:
            indent = line[:len(line) - len(line.lstrip())]
            new_line = f"{indent}song {base_name}, MUSIC_PLAYER_BGM, 0\n"
            lines.insert(i, new_line)
            break
    else:
        print("Warning: Could not find ph_trap_blend in song_table.inc")
        return

    with open(path, 'w') as f:
        f.writelines(lines)

def insert_song_above_blank_before_sound_list(path, upper_name):
    if not os.path.exists(path):
        print(f"Warning: {path} not found. Skipping...")
        return

    with open(path, 'r') as f:
        lines = f.readlines()

    for i, line in enumerate(lines):
        if "#define SOUND_LIST_SE" in line:
            insert_index = i

            while insert_index > 0 and lines[insert_index - 1].strip() == "":
                insert_index -= 1

            indent = ""
            if insert_index > 0:
                prev_line = lines[insert_index - 1]
                indent = prev_line[:len(prev_line) - len(prev_line.lstrip())]

            new_line = f"{indent}X({upper_name}) \\\n"
            lines.insert(insert_index, new_line)
            break
    else:
        print("Warning: Could not find SOUND_LIST_SE in debug.c")
        return

    with open(path, 'w') as f:
        f.writelines(lines)

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python add_song.py sound/songs/midi/your_song.mid")
    else:
        add_song_to_project(sys.argv[1])