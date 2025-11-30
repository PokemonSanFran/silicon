import json
import subprocess
import platform
import re
import csv
import os

def get_script_directory():
    """Get the directory where the Python script is located"""
    return os.path.dirname(os.path.abspath(__file__))

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

def load_map_list(csv_file='mapList.csv'):
    """Load map data from CSV file"""
    maps = []
    try:
        # Use the script's directory to find the CSV file
        script_dir = get_script_directory()
        csv_path = os.path.join(script_dir, csv_file)
        
        print(f"Looking for CSV file at: {csv_path}")
        
        with open(csv_path, 'r', newline='', encoding='utf-8') as f:
            reader = csv.reader(f)
            for row in reader:
                if len(row) >= 2:
                    map_id = row[0].strip()
                    display_name = row[1].strip()
                    maps.append((map_id, display_name))
        print(f"Loaded {len(maps)} maps from CSV")
        return maps
    except FileNotFoundError:
        print(f"Error: CSV file '{csv_file}' not found in script directory.")
        return []
    except Exception as e:
        print(f"Error reading CSV file: {e}")
        return []

def generate_encounters_for_all_maps(json_file='../src/data/wild_encounters.json', csv_file='mapList.csv'):
    # Load map list from CSV
    maps = load_map_list(csv_file)
    if not maps:
        print("No maps found in CSV file.")
        return
    
    # Load the JSON data
    try:
        # Use the script's directory to find the JSON file (if relative path)
        script_dir = get_script_directory()
        if not os.path.isabs(json_file):
            json_path = os.path.join(script_dir, json_file)
        else:
            json_path = json_file
            
        print(f"Looking for JSON file at: {json_path}")
        
        with open(json_path) as f:
            data = json.load(f)
    except FileNotFoundError:
        print(f"Error: JSON file '{json_file}' not found.")
        return
    except json.JSONDecodeError as e:
        print(f"Error parsing JSON file: {e}")
        return
    
    output = []
    total_maps_processed = 0
    total_encounters_found = 0
    
    # Process each map from the CSV
    for map_id, display_name in maps:
        # Collect ALL encounter data for the specified map
        encounters = []
        for group in data['wild_encounter_groups']:
            for encounter in group.get('encounters', []):
                if encounter.get('map') == map_id:
                    encounters.append(encounter)
        
        if not encounters:
            print(f"No encounter data found for map: {map_id} ({display_name})")
            continue
        
        total_maps_processed += 1
        map_encounter_count = 0
        
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
                        map_encounter_count += 1
                        total_encounters_found += 1

            # Water encounters
            if 'water_mons' in encounter_data:
                for mon in encounter_data['water_mons']['mons'][:20]:
                    if mon['species'] != 'SPECIES_NONE':
                        species = format_species_name(mon['species'])
                        output.append(
                            f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\twater_mons\t"
                        )
                        map_encounter_count += 1
                        total_encounters_found += 1


            # Berry encounters
            if 'berry_mons' in encounter_data:
                for mon in encounter_data['berry_mons']['mons'][:20]:
                    if mon['species'] != 'SPECIES_NONE':
                        species = format_species_name(mon['species'])
                        output.append(
                            f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tberry_mons\t"
                        )
                        map_encounter_count += 1
                        total_encounters_found += 1
            # Fishing encounters
            if 'fishing_mons' in encounter_data:
                for mon in encounter_data['fishing_mons']['mons'][:20]:
                    if mon['species'] != 'SPECIES_NONE':
                        species = format_species_name(mon['species'])
                        output.append(
                            f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tfishing_mons\t"
                        )
                        map_encounter_count += 1
                        total_encounters_found += 1

            # Fly encounters
            if 'fly_mons' in encounter_data:
                for mon in encounter_data['fly_mons']['mons'][:20]:
                    if mon['species'] != 'SPECIES_NONE':
                        species = format_species_name(mon['species'])
                        output.append(
                            f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tfly_mons\t"
                        )
                        map_encounter_count += 1
                        total_encounters_found += 1

            # Phenomenon encounters
            if 'phenomenon_mons' in encounter_data:
                for mon in encounter_data['phenomenon_mons']['mons'][:20]:
                    if mon['species'] != 'SPECIES_NONE':
                        species = format_species_name(mon['species'])
                        output.append(
                            f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tphenomenon_mons\t"
                        )
                        map_encounter_count += 1
                        total_encounters_found += 1

            # Rock Smash encounters
            if 'rock_smash_mons' in encounter_data:
                for mon in encounter_data['rock_smash_mons']['mons'][:20]:
                    if mon['species'] != 'SPECIES_NONE':
                        species = format_species_name(mon['species'])
                        output.append(
                            f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\trock_smash_mons\t"
                        )
                        map_encounter_count += 1
                        total_encounters_found += 1
        
        print(f"Processed {display_name}: {map_encounter_count} encounters")
    
    # Join all output lines
    output_text = '\n'.join(output)
    
    # Print summary
    print(f"\n=== SUMMARY ===")
    print(f"Total maps processed: {total_maps_processed}")
    print(f"Total encounters found: {total_encounters_found}")
    
    # Print to console
    print(f"\n=== ENCOUNTER DATA ===")
    print(output_text)
    
    # Copy to clipboard
    if copy_to_clipboard(output_text):
        print("\nOutput copied to clipboard!")
    else:
        print("\nOutput was not copied to clipboard (see error above)")

if __name__ == '__main__':
    generate_encounters_for_all_maps()
