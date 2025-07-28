import json
import sys
import subprocess
import platform

def format_species_name(species):
    # Remove 'SPECIES_' prefix and convert to title case
    species = species.replace('SPECIES_', '')
    # Handle special cases with underscores
    if '_' in species:
        # Split by underscore, capitalize each part, then join with underscore
        parts = species.split('_')
        return '_'.join([part.capitalize() for part in parts])
    return species.capitalize()

def copy_to_clipboard(text):
    system = platform.system()
    try:
        if system == "Linux":
            # Use xclip on Linux
            process = subprocess.Popen(['xclip', '-selection', 'clipboard'], stdin=subprocess.PIPE)
            process.communicate(input=text.encode('utf-8'))
        elif system == "Darwin":
            # Use pbcopy on macOS
            process = subprocess.Popen(['pbcopy'], stdin=subprocess.PIPE)
            process.communicate(input=text.encode('utf-8'))
        elif system == "Windows":
            # Use pyperclip on Windows
            import pyperclip
            pyperclip.copy(text)
        else:
            print("Clipboard functionality not supported on this system.")
            return False
        return True
    except Exception as e:
        print(f"Failed to copy to clipboard: {e}")
        return False

def generate_encounters(map_name, display_name, json_file='src/data/wild_encounters.json'):
    # Load the JSON data
    with open(json_file) as f:
        data = json.load(f)
    
    # Find the encounter data for the specified map
    encounter_data = None
    for group in data['wild_encounter_groups']:
        for encounter in group.get('encounters', []):
            if encounter['map'] == map_name:
                encounter_data = encounter
                break
        if encounter_data:
            break
    
    if not encounter_data:
        print(f"No encounter data found for map: {map_name}")
        return
    
    # Define the time slots
    time_slots = ['Morning', 'Day', 'Evening', 'Night']
    
    # Generate output for each encounter type
    output = []
    
    # Water encounters (with time slots)
    if 'water_mons' in encounter_data:
        water_mons = encounter_data['water_mons']['mons']
        for time in time_slots:
            for mon in water_mons[:20]:  # Only first 20 entries as per example
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\twater_mons\t{time}"
                    )
    
    # Fishing encounters
    if 'fishing_mons' in encounter_data:
        fishing_mons = encounter_data['fishing_mons']['mons']
        for mon in fishing_mons[:20]:  # Only first 20 entries as per example
            if mon['species'] != 'SPECIES_NONE':
                species = format_species_name(mon['species'])
                output.append(
                    f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tfishing_mons\t"
                )
    
    # Fly encounters
    if 'fly_mons' in encounter_data:
        fly_mons = encounter_data['fly_mons']['mons']
        for mon in fly_mons[:20]:  # Only first 20 entries as per example
            if mon['species'] != 'SPECIES_NONE':
                species = format_species_name(mon['species'])
                output.append(
                    f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tfly_mons\t"
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