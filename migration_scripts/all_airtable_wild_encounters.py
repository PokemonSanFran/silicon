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
    """Format species name with special handling for specific cases"""
    # Remove 'SPECIES_' prefix
    if species.startswith('SPECIES_'):
        species = species[8:]
    
    # Special cases mapping
    special_cases = {
        # Standard special cases with punctuation and formatting
        'MAUSHOLD': 'Maushold Family of Four',
        'MAUSHOLD_THREE': 'Maushold Family of Three',
        'MIME_JR': 'Mime Jr.',
        'MIMIKYU': 'Mimikyu Disguised Form',
        'MIMIKYU_BUSTED': 'Mimikyu Busted Form',
        'MINIOR': 'Minior Meteor Form',
        'MR_MIME': 'Mr. Mime',
        'NIDORAN_F': 'Nidoran♀',
        'NIDORAN_M': 'Nidoran♂',
        'TYPE_NULL': 'Type: Null',
        'SINISTEA': 'Sinistea Phony Form',
        'SINISTEA_ANTIQUE': 'Sinistea Antique Form',
        'POLTEAGEIST': 'Polteageist Phony Form',
        'POLTEAGEIST_ANTIQUE': 'Polteageist Antique Form',
        
        # Palafin forms
        'PALAFIN': 'Palafin Zero Form',
        'PALAFIN_HERO': 'Palafin Hero Form',
        
        # Gimmighoul forms
        'GIMMIGHOUL_ROAMING': 'Gimmighoul Roaming Form',
        'GIMMIGHOUL_CHEST': 'Gimmighoul Chest Form',
        'GIMMIGHOUL': 'Gimmighoul Chest Form',
        
        # Rotom forms
        'ROTOM_WASH': 'Wash Rotom',
        'ROTOM_MOW': 'Mow Rotom',
        'ROTOM_HEAT': 'Heat Rotom',
        'ROTOM_FROST': 'Frost Rotom',
        'ROTOM_FAN': 'Fan Rotom',
        
        # Aegislash forms
        'AEGISLASH_BLADE': 'Aegislash Blade Forme',
        'AEGISLASH_SHIELD': 'Aegislash Shield Forme',
        'AEGISLASH': 'Aegislash Shield Forme',
        
        # Silvally
        'SILVALLY': 'Silvally Type: Normal',
        
        # Urshifu forms
        'URSHIFU_RAPID_STRIKE': 'Urshifu Rapid Strike Style',
        'URSHIFU_SINGLE_STRIKE': 'Urshifu Single Strike Style',
    }
    
    # Check if it's a special case first
    if species in special_cases:
        return special_cases[species]
    
    # Handle pattern-based special cases
    if species.startswith('MINIOR_CORE_'):
        color = species[12:].capitalize()
        return f'Minior {color} Core'
    
    if species.startswith('ORICORIO_'):
        style = species[9:]  # Get the style part without converting case yet
        if style == 'PAU':
            return "Oricorio Pa'u Style"
        elif style == 'POM_POM':
            return 'Oricorio Pom-Pom Style'
        elif style == 'BAILE':
            return 'Oricorio Baile Style'
        elif style == 'SENSU':
            return 'Oricorio Sensu Style'
        # Fallback for any other Oricorio forms
        return f'Oricorio {style.replace("_", " ").title()} Style'
    
    if species.startswith('SCATTERBUG_'):
        pattern = species[11:].replace('_', '-').lower()
        if pattern == 'pokeball':
            pattern = 'poke-ball'
        return f'Scatterbug {pattern}'
    
    if species.startswith('SPEWPA_'):
        pattern = species[7:].replace('_', '-').lower()
        if pattern == 'pokeball':
            pattern = 'poke-ball'
        return f'Spewpa {pattern}'
    
    if species.startswith('VIVILLON_'):
        pattern = species[9:].replace('_', ' ').title()
        if 'Pokeball' in pattern:
            pattern = pattern.replace('Pokeball', 'Poké Ball')
        return f'Vivillon {pattern} Pattern'
    
    if species.startswith('SQUAWKABILLY_'):
        color = species[13:].capitalize()
        return f'Squawkabilly {color} Plumage'
    
    if species.startswith('TATSUGIRI_'):
        form = species[10:].capitalize()
        return f'Tatsugiri {form} Form'
    
    # Handle Flabébé/Floette/Florges forms
    if species.startswith('FLABEBE'):
        if species == 'FLABEBE':
            return 'Flabébé Red Flower'
        elif '_' in species:
            color = species[8:].capitalize()  # Remove 'FLABEBE_'
            return f'Flabébé {color} Flower'
    
    if species.startswith('FLOETTE_'):
        color = species[8:].capitalize()
        return f'Floette {color} Flower'
    
    if species.startswith('FLORGES_'):
        color = species[8:].capitalize()
        return f'Florges {color} Flower'
    
    # For all other species, apply standard formatting
    if '_' in species:
        # Handle underscores by capitalizing each part
        parts = species.split('_')
        # Special handling for compound names
        formatted_parts = []
        for part in parts:
            if part == 'JR':
                formatted_parts.append('Jr.')
            elif part == 'MR':
                formatted_parts.append('Mr.')
            elif part == 'MIME':
                formatted_parts.append('Mime')
            else:
                formatted_parts.append(part.capitalize())
        
        # Join with space for most cases
        return ' '.join(formatted_parts)
    
    # Single word species
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
