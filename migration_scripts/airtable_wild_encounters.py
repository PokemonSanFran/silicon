import json
import sys
import subprocess
import platform
import re

def format_species_name(species):
    # Remove 'SPECIES_' prefix
    species = species.replace('SPECIES_', '')
    
    # Handle all special cases from the table
    special_cases = {
        # Maushold variations
        'MAUSHOLD': 'Maushold Family of Four',
        'MAUSHOLD_THREE': 'Maushold Family of Three',
        
        # Mime variations
        'MIME_JR': 'Mime Jr.',
        'MR_MIME': 'Mr. Mime',
        
        # Mimikyu variations
        'MIMIKYU': 'Mimikyu Disguised Form',
        'MIMIKYU_BUSTED': 'Mimikyu Busted Form',
        
        # Minior variations
        'MINIOR': 'Minior Meteor Form',
        'MINIOR_CORE_RED': 'Minior Red Core',
        'MINIOR_CORE_YELLOW': 'Minior Yellow Core',
        'MINIOR_CORE_GREEN': 'Minior Green Core',
        'MINIOR_CORE_INDIGO': 'Minior Indigo Core',
        'MINIOR_CORE_BLUE': 'Minior Blue Core',
        'MINIOR_CORE_ORANGE': 'Minior Orange Core',
        'MINIOR_CORE_VIOLET': 'Minior Violet Core',
        
        # Nidoran
        'NIDORAN_F': 'Nidoran♀',
        'NIDORAN_M': 'Nidoran♂',
        
        # Oricorio variations
        'ORICORIO_BAILE': 'Oricorio Baile Style',
        'ORICORIO_POM_POM': 'Oricorio Pom-Pom Style',
        'ORICORIO_SENSU': 'Oricorio Sensu Style',
        'ORICORIO_PAU': 'Oricorio Pa\'u Style',
        
        # Palafin variations
        'PALAFIN': 'Palafin Zero Form',
        'PALAFIN_HERO': 'Palafin Hero Form',
        
        # Rotom variations
        'ROTOM_WASH': 'Wash Rotom',
        'ROTOM_MOW': 'Mow Rotom',
        'ROTOM_HEAT': 'Heat Rotom',
        'ROTOM_FROST': 'Frost Rotom',
        'ROTOM_FAN': 'Fan Rotom',
        
        # Scatterbug variations
        'SCATTERBUG_ARCHIPELAGO': 'Scatterbug archipelago',
        'SCATTERBUG_CONTINENTAL': 'Scatterbug continental',
        'SCATTERBUG_ELEGANT': 'Scatterbug elegant',
        'SCATTERBUG_FANCY': 'Scatterbug fancy',
        'SCATTERBUG_GARDEN': 'Scatterbug garden',
        'SCATTERBUG_HIGH_PLAINS': 'Scatterbug high-plains',
        'SCATTERBUG_ICY_SNOW': 'Scatterbug icy-snow',
        'SCATTERBUG_JUNGLE': 'Scatterbug jungle',
        'SCATTERBUG_MARINE': 'Scatterbug marine',
        'SCATTERBUG_MEADOW': 'Scatterbug meadow',
        'SCATTERBUG_MODERN': 'Scatterbug modern',
        'SCATTERBUG_MONSOON': 'Scatterbug monsoon',
        'SCATTERBUG_OCEAN': 'Scatterbug ocean',
        'SCATTERBUG_POKEBALL': 'Scatterbug poke-ball',
        'SCATTERBUG_POLAR': 'Scatterbug polar',
        'SCATTERBUG_RIVER': 'Scatterbug river',
        'SCATTERBUG_SANDSTORM': 'Scatterbug sandstorm',
        'SCATTERBUG_SAVANNA': 'Scatterbug savanna',
        'SCATTERBUG_SUN': 'Scatterbug sun',
        'SCATTERBUG_TUNDRA': 'Scatterbug tundra',
        
        # Spewpa variations
        'SPEWPA_ARCHIPELAGO': 'Spewpa archipelago',
        'SPEWPA_CONTINENTAL': 'Spewpa continental',
        'SPEWPA_ELEGANT': 'Spewpa elegant',
        'SPEWPA_FANCY': 'Spewpa fancy',
        'SPEWPA_GARDEN': 'Spewpa garden',
        'SPEWPA_HIGH_PLAINS': 'Spewpa high-plains',
        'SPEWPA_ICY_SNOW': 'Spewpa icy-snow',
        'SPEWPA_JUNGLE': 'Spewpa jungle',
        'SPEWPA_MARINE': 'Spewpa marine',
        'SPEWPA_MEADOW': 'Spewpa meadow',
        'SPEWPA_MODERN': 'Spewpa modern',
        'SPEWPA_MONSOON': 'Spewpa monsoon',
        'SPEWPA_OCEAN': 'Spewpa ocean',
        'SPEWPA_POKEBALL': 'Spewpa poke-ball',
        'SPEWPA_POLAR': 'Spewpa polar',
        'SPEWPA_RIVER': 'Spewpa river',
        'SPEWPA_SANDSTORM': 'Spewpa sandstorm',
        'SPEWPA_SAVANNA': 'Spewpa savanna',
        'SPEWPA_SUN': 'Spewpa sun',
        'SPEWPA_TUNDRA': 'Spewpa tundra',
        
        # Vivillon variations
        'VIVILLON_ARCHIPELAGO': 'Vivillon Archipelago Pattern',
        'VIVILLON_CONTINENTAL': 'Vivillon Continental Pattern',
        'VIVILLON_ELEGANT': 'Vivillon Elegant Pattern',
        'VIVILLON_FANCY': 'Vivillon Fancy Pattern',
        'VIVILLON_GARDEN': 'Vivillon Garden Pattern',
        'VIVILLON_HIGH_PLAINS': 'Vivillon High Plains Pattern',
        'VIVILLON_ICY_SNOW': 'Vivillon Icy Snow Pattern',
        'VIVILLON_JUNGLE': 'Vivillon Jungle Pattern',
        'VIVILLON_MARINE': 'Vivillon Marine Pattern',
        'VIVILLON_MEADOW': 'Vivillon Meadow Pattern',
        'VIVILLON_MODERN': 'Vivillon Modern Pattern',
        'VIVILLON_MONSOON': 'Vivillon Monsoon Pattern',
        'VIVILLON_OCEAN': 'Vivillon Ocean Pattern',
        'VIVILLON_POKEBALL': 'Vivillon Poké Ball Pattern',
        'VIVILLON_POLAR': 'Vivillon Polar Pattern',
        'VIVILLON_RIVER': 'Vivillon River Pattern',
        'VIVILLON_SANDSTORM': 'Vivillon Sandstorm Pattern',
        'VIVILLON_SAVANNA': 'Vivillon Savanna Pattern',
        'VIVILLON_SUN': 'Vivillon Sun Pattern',
        'VIVILLON_TUNDRA': 'Vivillon Tundra Pattern',
        
        # Squawkabilly variations
        'SQUAWKABILLY_BLUE': 'Squawkabilly Blue Plumage',
        'SQUAWKABILLY_GREEN': 'Squawkabilly Green Plumage',
        'SQUAWKABILLY_WHITE': 'Squawkabilly White Plumage',
        'SQUAWKABILLY_YELLOW': 'Squawkabilly Yellow Plumage',
        
        # Tatsugiri variations
        'TATSUGIRI_CURLY': 'Tatsugiri Curly Form',
        'TATSUGIRI_DROOPY': 'Tatsugiri Droopy Form',
        'TATSUGIRI_STRETCHY': 'Tatsugiri Stretchy Form',
        
        # Flabébé variations
        'FLABEBE': 'Flabébé Red Flower',
        'FLABEBE_YELLOW': 'Flabébé Yellow Flower',
        'FLABEBE_ORANGE': 'Flabébé Orange Flower',
        'FLABEBE_BLUE': 'Flabébé Blue Flower',
        'FLABEBE_RED': 'Flabébé Red Flower',
        'FLABEBE_WHITE': 'Flabébé White Flower',
        
        # Floette variations
        'FLOETTE_BLUE': 'Floette Blue Flower',
        'FLOETTE_YELLOW': 'Floette Yellow Flower',
        'FLOETTE_WHITE': 'Floette White Flower',
        'FLOETTE_RED': 'Floette Red Flower',
        'FLOETTE_ORANGE': 'Floette Orange Flower',
        
        # Florges variations
        'FLORGES_BLUE': 'Florges Blue Flower',
        'FLORGES_YELLOW': 'Florges Yellow Flower',
        'FLORGES_WHITE': 'Florges White Flower',
        'FLORGES_ORANGE': 'Florges Orange Flower',
        'FLORGES_RED': 'Florges Red Flower',
        
        # Aegislash variations
        'AEGISLASH_BLADE': 'Aegislash Blade Forme',
        'AEGISLASH_SHIELD': 'Aegislash Shield Forme',
        
        # Type variations
        'TYPE_NULL': 'Type: Null',
        'SILVALLY': 'Silvally Type: Normal',
        
        # Sinistea/Polteageist variations
        'SINISTEA': 'Sinistea Phony Form',
        'SINISTEA_ANTIQUE': 'Sinistea Antique Form',
        'POLTEAGEIST': 'Polteageist Phony Form',
        'POLTEAGEIST_ANTIQUE': 'Polteageist Antique Form',
        
        # Urshifu variations
        'URSHIFU_RAPID_STRIKE': 'Urshifu Rapid Strike Style',
        'URSHIFU_SINGLE_STRIKE': 'Urshifu Single Strike Style',
        
        # Gimmighoul variations
        'GIMMIGHOUL_ROAMING': 'Gimmighoul Roaming Form',
        'GIMMIGHOUL_CHEST': 'Gimmighoul Chest Form',
    }
    
    # Check if this is a special case
    if species in special_cases:
        return special_cases[species]
    
    # Handle generic cases with underscores
    if '_' in species:
        parts = species.split('_')
        return ' '.join([part.capitalize() for part in parts])
    
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

        # Rock Smash encounters
        if 'rock_smash_mons' in encounter_data:
            for mon in encounter_data['rock_smash_mons']['mons'][:20]:
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\trock_smash_mons\t"
                    )

        # Berry encounters
        if 'berry_mons' in encounter_data:
            for mon in encounter_data['berry_mons']['mons'][:20]:
                if mon['species'] != 'SPECIES_NONE':
                    species = format_species_name(mon['species'])
                    output.append(
                        f"{display_name}\t{species}\t{mon['min_level']}\t{mon['max_level']}\t5\tberry_mons\t"
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