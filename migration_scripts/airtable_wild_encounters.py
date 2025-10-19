import json
import sys
import subprocess
import platform
import re

def format_species_name(species):
    # Remove 'SPECIES_' prefix and convert to title case
    species = species.replace('SPECIES_', '')
    # Handle special cases with underscores
    if '_' in species:
        parts = species.split('_')
        return '_'.join([part.capitalize() for part in parts])
    return species.capitalize()

def copy_to_clipboard(text):
    system = platform.system()
    try:
        if system == "Linux":
            process = subprocess.Popen(['xclip', '-selection', 'clipboard'], stdin=subprocess.PIPE)
            process.communicate(input=text.encode('utf-8'))
        elif system == "Darwin":
            process = subprocess.Popen(['pbcopy'], stdin=subprocess.PIPE)
            process.communicate(input=text.encode('utf-8'))
        elif system == "Windows":
            import pyperclip
            pyperclip.copy(text)
        else:
            print("Clipboard functionality not supported on this system.")
            return False
        return True
    except Exception as e:
        print(f"Failed to copy to clipboard: {e}")
        return False

def extract_time_of_day(base_label):
    # Match suffixes: _Morning, _Day, _Evening, _Night
    match = re.search(r'_(Morning|Day|Evening|Night)$', base_label)
    if match:
        return match.group(1)
    return ""

def generate_encounters(map_name, display_name, json_file='src/data/wild_encounters.json'):
    # Load the JSON data
    with open(json_file) as f:
        data = json.load(f)
    
    # Collect ALL encounter data for the specified map
    encounters = []
    for group in data['wild_encounter_groups']:
        for encounter in group.get('encounters', []):
            if encounter.get('map') == map_name:
                encounters.append(encounter)

    
    if not encounters:
        print(f"No encounter data found for map: {map_name}")
        return
    
    output = []

    for encounter_data in encounters:
        # Determine time of day from base_label
        base_label = encounter_data.get("base_label", "")
        time_of_day = extract_time_of_day(base_label)

        # Land encounters
        if 'land_mons' in encounter_data:
            for mon in encounter_data['land_mons']['mons'][:20]:
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tland_mons\t{time_of_day}"
                    )

        # Water encounters
        if 'water_mons' in encounter_data:
            for mon in encounter_data['water_mons']['mons'][:20]:
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\twater_mons\t"
                    )

        # Fishing encounters
        if 'fishing_mons' in encounter_data:
            for mon in encounter_data['fishing_mons']['mons'][:20]:
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tfishing_mons\t"
                    )

        # Fly encounters
        if 'fly_mons' in encounter_data:
            for mon in encounter_data['fly_mons']['mons'][:20]:
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tfly_mons\t"
                    )

        # Phenomenon encounters
        if 'phenomenon_mons' in encounter_data:
            for mon in encounter_data['phenomenon_mons']['mons'][:20]:
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tphenomenon_mons\t"
                    )

    # Join all output lines
    output_text = '\n'.join(output)
    
    # Print to console
    print(output_text)
    
    # Copy to clipboard
    if copy_to_clipboard(output_text):
        print("\nOutput copied to clipboard!")
    else:
        print("\nOutput was not copied to clipboard (see error above)")


if __name__ == '__main__':
    if len(sys.argv) != 3:
        print("Usage: python generate_wild_encounters.py MAP_NAME DISPLAY_NAME")
        print("Example: python generate_wild_encounters.py MAP_CRESALTA_VISTA \"Cresalta Vista\"")
        sys.exit(1)
    
    map_name = sys.argv[1]
    display_name = sys.argv[2]
    generate_encounters(map_name, display_name)