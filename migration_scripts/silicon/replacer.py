import os
import re
import argparse

# Global memory to store user's "Yes/No to All" decisions
# Format: {'SPEAKER_ADELAIDE': True, 'adelaides': False}
TRUSTED_PARTIALS = {}

def get_replacement_case(original_match, new_word):
    if original_match.isupper():
        return new_word.upper()
    elif original_match.islower():
        return new_word.lower()
    elif original_match.istitle():
        return new_word.title()
    else:
        return new_word

def is_whole_word(content, start_index, end_index):
    if start_index > 0:
        char_before = content[start_index - 1]
        if char_before.isalnum() or char_before == '_':
            return False
    if end_index < len(content):
        char_after = content[end_index]
        if char_after.isalnum() or char_after == '_':
            return False
    return True

def process_file(filepath, old_word, new_word):
    global TRUSTED_PARTIALS
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            content = f.read()
    except (UnicodeDecodeError, Exception):
        return

    pattern = re.compile(re.escape(old_word), re.IGNORECASE)
    matches = list(pattern.finditer(content))
    
    if not matches:
        return

    new_content = list(content)
    file_modified = False

    # Process in reverse to maintain index integrity
    for match in reversed(matches):
        start, end = match.span()
        matched_text = content[start:end]
        replacement_text = get_replacement_case(matched_text, new_word)
        
        # Determine the full "word" context (e.g., SPEAKER_ADELAIDE or adelaides)
        word_start = start
        while word_start > 0 and (content[word_start-1].isalnum() or content[word_start-1] == '_'):
            word_start -= 1
        word_end = end
        while word_end < len(content) and (content[word_end].isalnum() or content[word_end] == '_'):
            word_end += 1
        
        full_context_word = content[word_start:word_end]
        do_replace = False
        
        if is_whole_word(content, start, end):
            do_replace = True
        elif full_context_word in TRUSTED_PARTIALS:
            do_replace = TRUSTED_PARTIALS[full_context_word]
        else:
            # Context for the user
            line_start = content.rfind('\n', 0, start) + 1
            line_end = content.find('\n', end)
            if line_end == -1: line_end = len(content)
            context_line = content[line_start:line_end].strip()
            
            print(f"\n[?] Partial match in '{filepath}':")
            print(f"    Line: ... {context_line} ...")
            print(f"    Full Word: {full_context_word}")
            
            prompt = f"    Replace '{matched_text}' with '{replacement_text}'? [A/n]: "
            choice = input(prompt).lower().strip()
            
            # Default to 'Always' if user presses Enter or types 'a'
            if choice == '' or choice == 'a':
                print(f"    -> [ALWAYS] Replacing all '{full_context_word}'")
                TRUSTED_PARTIALS[full_context_word] = True
                do_replace = True
            elif choice == 'n':
                print(f"    -> [NEVER] Skipping all '{full_context_word}'")
                TRUSTED_PARTIALS[full_context_word] = False
                do_replace = False
            else:
                # If they type anything else, just skip this one instance
                do_replace = False

        if do_replace:
            new_content[start:end] = replacement_text
            file_modified = True

    if file_modified:
        try:
            with open(filepath, 'w', encoding='utf-8') as f:
                f.write("".join(new_content))
            print(f"[-] Updated: {filepath}")
        except Exception as e:
            print(f"Error writing to {filepath}: {e}")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("old_word")
    parser.add_argument("new_word")
    parser.add_argument("--path", default=".")
    args = parser.parse_args()

    EXCLUDE_DIRS = {'.git', 'build'}
    EXCLUDE_FILES = {'silicon.map', '*.inc', 'tags'}

    print(f"Replacing '{args.old_word}' with '{args.new_word}'")
    print("Press [Enter] to accept 'Always replace' for a pattern.")

    for root, dirs, files in os.walk(args.path):
        dirs[:] = [d for d in dirs if d not in EXCLUDE_DIRS]
        for file in files:
            if file == os.path.basename(__file__) or file in EXCLUDE_FILES:
                continue
            process_file(os.path.join(root, file), args.old_word, args.new_word)

    print("\nProcessing complete.")

if __name__ == "__main__":
    main()
