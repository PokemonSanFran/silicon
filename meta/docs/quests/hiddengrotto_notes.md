# STORY AND FLOW

each route has a grotto on it, accessed by walking up, arrows appear, and player interacts with tile in front of them,pressing A does a warp inside

# LOGIC
three grottos have hidden page of journal, sparkles on ground, found near the "back" of the grotto, picking it up subquest and it never spawns again

totem mons are controlled by a temp flag
perma flag is set when they are caught, and a mapscript permanently sets the totem flag so they never appear again

flag is set to prevent them being caught again, pannen calls you that the machine is updated based on the battle data

# GROTTO SECRETS

each grotto has a flag for its secret
when set, every 256 steps, there is a 5% chance of it being unset
is set when the selected pokemon or item is defeated / captured
does not get rerolled

40% chance its a hidden item
40% chance its a visible item
20% chance its a pokemon

all grottos share a single item table except for one wilcard 1% item in the visible section

each route has 3 or 4 pokemon in its table each with varying rates

for each grotto, save block will remember the ID in the table, so we only need to store like this

grottos[i] = {4, 5,...}

meaning that for the 0th grotto, option 4 was rolled

looking up the table reveals that option 4 is for grotto 0 is a wooper

uses variable object ID to choose a sprite and a script
