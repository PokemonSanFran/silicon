import os
import re

# Configuration
FILE_EXTENSION = ".pory"

# Regex Patterns
# Matches: applymovement(PLAYER, SomeMovementName)
# Group 1: Actor (e.g., PLAYER)
# Group 2: Movement Name
REGEX_APPLY = re.compile(r'applymovement\s*\(\s*([^,]+)\s*,\s*([a-zA-Z0-9_]+)\s*\)')

# Matches: movement SomeMovementName { ... }
# Group 1: Movement Name
# Group 2: Body content
REGEX_DEF = re.compile(r'^movement\s+([a-zA-Z0-9_]+)\s*\{([^}]+)\}', re.MULTILINE | re.DOTALL)

def get_pory_files(root_dir):
    """Yields all .pory file paths recursively."""
    for dirpath, _, filenames in os.walk(root_dir):
        for f in filenames:
            if f.endswith(FILE_EXTENSION):
                yield os.path.join(dirpath, f)

def parse_movement_body_to_inline(body_text):
    """
    Converts a raw movement body block into a comma-separated string 
    suitable for moves().
    """
    # Split by lines
    lines = body_text.split('\n')
    commands = []
    
    for line in lines:
        # Remove comments and whitespace
        clean = re.sub(r'//.*', '', line).strip()
        if clean:
            commands.append(clean)
            
    return f"moves({', '.join(commands)})"

def main():
    root_dir = os.getcwd()
    print(f"--- Scanning {root_dir} for .pory files ---")

    # ---------------------------------------------------------
    # PASS 1: Global Analysis
    # Count usages and store definitions
    # ---------------------------------------------------------
    movement_counts = {}      # { "MoveName": count }
    movement_bodies = {}      # { "MoveName": "raw body text" }
    
    files = list(get_pory_files(root_dir))
    
    for file_path in files:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()

        # Find Definitions
        for match in REGEX_DEF.finditer(content):
            name = match.group(1)
            body = match.group(2)
            movement_bodies[name] = body
            # Initialize count if not exists
            if name not in movement_counts:
                movement_counts[name] = 0

        # Find Usages (Counts)
        for match in REGEX_APPLY.finditer(content):
            move_name = match.group(2)
            # Ignore if the second arg is 'moves' (already inlined)
            if move_name == "moves":
                continue
            
            movement_counts[move_name] = movement_counts.get(move_name, 0) + 1

    print(f"Found {len(movement_bodies)} definitions.")

    # ---------------------------------------------------------
    # PASS 2 & 3: Inline and Cleanup
    # ---------------------------------------------------------
    inlined_movements = set()

    for file_path in files:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()

        original_content = content
        
        # --- Sub-Pass: Inline Usages ---
        def replacement_handler(match):
            actor = match.group(1)
            move_name = match.group(2)

            # CRITERIA:
            # 1. We know the definition of this movement
            # 2. It is used exactly ONCE in the entire repo
            if move_name in movement_bodies and movement_counts.get(move_name) == 1:
                raw_body = movement_bodies[move_name]
                new_inline_args = parse_movement_body_to_inline(raw_body)
                
                print(f"Inlining: {move_name}")
                inlined_movements.add(move_name)
                
                # Return new string: applymovement(ACTOR, moves(...))
                return f"applymovement({actor}, {new_inline_args})"
            
            # If not meeting criteria, return original text
            return match.group(0)

        content = REGEX_APPLY.sub(replacement_handler, content)

        # --- Sub-Pass: Delete Definitions ---
        # We only delete the definition if we actually inlined it.
        # Note: We iterate finding definitions again to replace them with empty strings.
        
        def deletion_handler(match):
            name = match.group(1)
            if name in inlined_movements:
                # Remove the block
                return ""
            return match.group(0)

        content = REGEX_DEF.sub(deletion_handler, content)

        # Clean up double newlines left behind by deletion if necessary
        # (Optional cosmetic cleanup to prevent massive gaps)
        content = re.sub(r'\n\s*\n\s*\n', '\n\n', content)

        # Save changes if modified
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)

    print(f"--- Complete. Inlined {len(inlined_movements)} scripts. ---")

if __name__ == "__main__":
    main()
