# Sequence

[x] Make buzzr files into tilemap
[x] Boot up with background
[x] Create states for each screen, button presses change state
[x] Help bar changes based on state
[x] Header bar text changes based on state
[x] Logomark background appears if not in picture mode
[x] Highlighted header changes based on state
[x] Create struct for zaps
[x] Populate scrtuct with fake zaps
[x] Add list menu to screen with just the zap header
[x] Support scrolling through them
[x] Support zaps being cut off at the bottom when scrolling
[x] Add filtering of zaps based on data in the struct
[x] Build step counting and integrate into unlock crtieria
[x] show text on the box
[x] Print zap metadata on screen
[x] Add saveblock storage of zap order, read from this order to display zaps

[x] Support zaps marked as read when scrolled, also needs to be in saveblock (this is a struct)
[x] Add picture support to the zap struct
[x] Support pressing A to pictures on zaps that have them and B to go back

[x] Support header changing based on filter

[x] Build unlock criteria mechanism
[x] Add unlock crtieria to struct

[x] Fix memleak on tilemap switching
[x] Get zaps to always show newest on top
[x] Support reverse order sorting

[x] Get fade out and fade in working for picture mode
[x] Create real images for zaps and get picture mode working
[x] Add arrows at top and bottom of screen for position
[x] Add arrow for cursor on current zap
[x] Fix palettes

[x] wait for crim response on cursor
[x] Make sure everything in game matches everything in Figma, pixel wise
[x] Fix bug where going to a filter with no zaps gets rid of the arrows
[] Add background for zaps depending on the height of the zap

[x] When in the overworld and a zap has been read but its quest hasn't been started, start the quest
[x] Holding a button will scroll faster

# scripting macros
[x] check if a zap has been read
[x] mark zap as read
[x] show zap and lock player, press A to dismiss
    [x] Show text and metadata on scripting box
    [x] Change scripting box size based on zap size
[x] Test overworld spacing at every size zap
[x] When is a zap with a pic, press A to see pic, and then a button to proceed
[x] goto X if zap is read, call X if zap is read
[x] Fix overworld palettes

[x] Clean up the code of all functions and files

HandleZapBackground should load a background for every zap that appears in the timeline.
We were previously having a problem where the declaration of bgs was incorrect. Things were getting overwritten and double loaded and it was a mess. I believe this is fixed now.
I am now trying to use CopyToBgTilemapBufferRect to print the zap backgrounds onto the screen, but when I compile, absolutely nothing happens. Nothing appears on Bg1 at all. I think this is a knowledge check that I'm failing, so I'll come back closer to release.

I also suspect there will be two other problems

- Will the zap bg at the very bottom of the screen overlap the help bar? Do we need to put the help bar in its own window and fill the bg with black?
- How will the overworld handle the zap background? It should be handled as a seperate bg but the OW already is using that bg...

# in game
find all places in game where messages / zaps need to go and add them -
write dialogue for those zaps and unlock criteria -
port ghetto buzzr quests -
delete buzzr.c and related files -
rename ui_buzzr to just buzzr -

## PLACES
gym 1-
gym 2-
gym 3-
gym 4-
gym 5-
gym 6-
gym 7-
gym 8-
gruntalert-
social media-
