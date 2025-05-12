# Sequence

[x] Make buzzr files into tilemap
[x] Boot up with background
[x] Create states for each screen, button presses change state
[x] Help bar changes based on state
[x] Header bar text changes based on state
[x] Logomark background appears if not in picture mode
[x] Highlighted header changes based on state
[x] Create struct for tweets
[x] Populate scrtuct with fake tweets
[x] Add list menu to screen with just the tweet header
[x] Support scrolling through them
[x] Support tweets being cut off at the bottom when scrolling
[x] Add filtering of tweets based on data in the struct
[x] Build step counting and integrate into unlock crtieria
[x] show text on the box
[x] Print tweet metadata on screen
[x] Add saveblock storage of tweet order, read from this order to display tweets

[x] Support tweets marked as read when scrolled, also needs to be in saveblock (this is a struct)
[x] Add picture support to the tweet struct
[x] Support pressing A to pictures on tweets that have them and B to go back

[] Support header changing based on filter

[] Add background for tweets depending on the height of the tweet

[] Build unlock criteria mechanism
[] Add unlock crtieria to struct

[] Fix memleak on tilemap switching
[] Support reverse order sorting
[] Fix palettes
[] Pixel pushing
[] General code cleanup

[] Implement checktweetread scripting macro
[] scripting macro to show tweet box and lock player when called, and press A to dismiss
[] Show text and metadata on scripting box
[] Change scripting box size based on tweet size

[] Implement universal script that when a quest tweet is read but the quest is not at least active, run a script to start that quest
[] Set up submodules for poryscript
