#!/bin/zsh

# Check if find returned any files
files=($(find . -type f \( -name "*.pory" -o -name "*.c" \)))

if [ ${#files[@]} -eq 0 ]; then
    echo "No .h or .c files found in the current directory tree."
    exit 0
fi

echo "Found ${#files[@]} files. Processing..."

for file in "${files[@]}"; do
    echo "Processing: $file"
    # Open in vim, write (save), and quit immediately
    vim -c "wq" "$file"
done

echo "All files processed."