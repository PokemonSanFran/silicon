import re

# List of species to remove
species_to_remove = [
    "RESIDO_DEX_EKANS",
    "RESIDO_DEX_ARBOK",
    "RESIDO_DEX_VENONAT",
    "RESIDO_DEX_VENOMOTH",
    "RESIDO_DEX_DIGLETT",
    "RESIDO_DEX_DUGTRIO",
    "RESIDO_DEX_SHELLDER",
    "RESIDO_DEX_CLOYSTER",
    "RESIDO_DEX_VOLTORB",
    "RESIDO_DEX_ELECTRODE",
    "RESIDO_DEX_WOOPER",
    "RESIDO_DEX_QUAGSIRE",
    "RESIDO_DEX_MANTINE",
    "RESIDO_DEX_MAKUHITA",
    "RESIDO_DEX_HARIYAMA",
    "RESIDO_DEX_WAILMER",
    "RESIDO_DEX_WAILORD",
    "RESIDO_DEX_SEVIPER",
    "RESIDO_DEX_CORPHISH",
    "RESIDO_DEX_CRAWDAUNT",
    "RESIDO_DEX_BALTOY",
    "RESIDO_DEX_CLAYDOL",
    "RESIDO_DEX_BIDOOF",
    "RESIDO_DEX_BIBAREL",
    "RESIDO_DEX_BUIZEL",
    "RESIDO_DEX_FLOATZEL",
    "RESIDO_DEX_CHERUBI",
    "RESIDO_DEX_CHERRIM",
    "RESIDO_DEX_CHERRIM",
    "RESIDO_DEX_DRIFLOON",
    "RESIDO_DEX_DRIFBLIM",
    "RESIDO_DEX_MANTYKE",
    "RESIDO_DEX_PIDOVE",
    "RESIDO_DEX_TRANQUILL",
    "RESIDO_DEX_UNFEZANT",
    "RESIDO_DEX_VENIPEDE",
    "RESIDO_DEX_WHIRLIPEDE",
    "RESIDO_DEX_SCOLIPEDE",
    "RESIDO_DEX_FENNEKIN",
    "RESIDO_DEX_BRAIXEN",
    "RESIDO_DEX_DELPHOX",
    "RESIDO_DEX_BUNNELBY",
    "RESIDO_DEX_DIGGERSBY",
    "RESIDO_DEX_SKRELP",
    "RESIDO_DEX_DRAGALGE",
    "RESIDO_DEX_YUNGOOS",
    "RESIDO_DEX_GUMSHOOS",
    "RESIDO_DEX_WISHIWASHI", 
    "RESIDO_DEX_FOMANTIS",
    "RESIDO_DEX_LURANTIS",
    "RESIDO_DEX_STUFFUL",
    "RESIDO_DEX_BEWEAR",
    "RESIDO_DEX_TURTONATOR",
    "RESIDO_DEX_BRUXISH",
    "RESIDO_DEX_GOSSIFLEUR",
    "RESIDO_DEX_ELDEGOSS",
    "RESIDO_DEX_YAMPER",
    "RESIDO_DEX_BOLTUND",
    "RESIDO_DEX_SNOM",
    "RESIDO_DEX_FROSMOTH",
    "RESIDO_DEX_EISCUE",
    "RESIDO_DEX_NACLI",
    "RESIDO_DEX_NACLSTACK",
    "RESIDO_DEX_GARGANACL",
    "RESIDO_DEX_TADBULB",
    "RESIDO_DEX_BELLIBOLT"
]

def clean_array(array_content):
    # Remove each species from the array
    for species in species_to_remove:
        # Handle cases where species is at start, middle, or end
        pattern1 = re.compile(rf'^\s*{species}\s*,', re.MULTILINE)
        pattern2 = re.compile(rf',\s*{species}\s*,')
        pattern3 = re.compile(rf',\s*{species}\s*$', re.MULTILINE)
        pattern4 = re.compile(rf'^\s*{species}\s*$', re.MULTILINE)
        
        array_content = pattern1.sub('', array_content)
        array_content = pattern2.sub(',', array_content)
        array_content = pattern3.sub('', array_content)
        array_content = pattern4.sub('', array_content)
    
    # Clean up any resulting issues
    array_content = array_content.replace(',,', ',')
    array_content = re.sub(r',\s*\n\s*};', '\n};', array_content)
    array_content = re.sub(r'{\s*,', '{', array_content)
    array_content = re.sub(r',\s*,', ',', array_content)
    
    return array_content

# Read the input file
with open('input.txt', 'r') as file:
    content = file.read()

# Process each array separately to ensure we catch them all
arrays = {
    'Numerical': re.search(r'const u16 gResidoPokedexOrder_Numerical\[\] =\s*\{[^}]*\};', content, re.DOTALL),
    'Alphabetical': re.search(r'const u16 gResidoPokedexOrder_Alphabetical\[\] =\s*\{[^}]*\};', content, re.DOTALL),
    'Weight': re.search(r'const u16 gResidoPokedexOrder_Weight\[\] =\s*\{[^}]*\};', content, re.DOTALL),
    'Height': re.search(r'const u16 gResidoPokedexOrder_Height\[\] =\s*\{[^}]*\};', content, re.DOTALL)
}

for name, match in arrays.items():
    if match:
        original = match.group(0)
        cleaned = clean_array(original)
        content = content.replace(original, cleaned)

# Write the output file
with open('output.txt', 'w') as file:
    file.write(content)

print("Species removed successfully from all arrays. Output written to output.txt")