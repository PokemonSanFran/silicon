* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recdA0u145GHmN4tR?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_STRESSCUP)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_STRESSCUP)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_STRESSCUP)` \== `TRUE`

# Functions
`StressCupPhaseX`
Give Player their Xth Stress Cup party.

# Involved Instances

## Stresscuporganizer 

### [`MAP_CRESALTA_VISTA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recdA0u145GHmN4tR?blocks=hide)

* Stresscuporganizer is facing a random direction.
* Stresscuporganizer is visible when the relevant subquest for `QUEST_RESTOREZENZUISLAND` is not complete.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Help Stresscuporganizer relive the glory days and beat them in two battles

### Quest is Complete

* Stresscuporganizer is feeling less antsy but still wants to get this nervous energy out

## `MAP_CRESALTA_VISTA`

### Interact with Stresscuporgnanizer when Quest is Inactive

Stresscuporgnanizer does not turn to face Player.
* Stresscuporgnanizer doesn't understand how anybody can call the beach relaxing
* Stresscuporgnanizer just wants to FEEL something again
Stresscuporgnanizer turns to face the Player.
* Stresscuporgnanizer says their partner told them to come to the beach to relax
* Stresscuporgnanizer used to be a tournament organizer for the Resido Pokémon League, but was pushed out of the industry as Sharprise corportized everything
* Stresscuporgnanizer says the job was hard and stressful with long sleepless nights
* Stresscuporgnanizer but they miss it so much
* Stresscuporgnanizer says everything has been boring since then
* Stresscuporgnanizer wants to feel something again, asks the Player if they'd be willing to help

Player is shown Yes / No menu.

### No

* Stresscuporgnanizer says they'll find something to wake them up

### Yes

`QUEST_STRESSCUP` starts.  
Proceed to "starts First Battle".

### Interact with Stresscuporgnanizer when Quest is Active

* Stresscuporgnanizer tells the Player they're able to really feel it life
Proceed to "starts First Battle".

### Stresscuporgnanizer starts First Battle

StressCupPhase1 runs.  
* Stresscuporgnanizer is going to give the Player some Pokémon to battle with
Stresscuporgnanizer gestures towards the player.  
* Stresscuporgnanizer says the Player will notice that the battle won't be as easy as usual
* Stresscuporgnanizer wishes Player good luck
Player battles against Stresscuporgnanizer.

### Player loses to Stresscuporgnanizer
* Stresscuporgnanizer is surprised, guessed Player couldn't hang

### Player defeats Stresscuporgnanizer
* Stresscuporgnanizer laughs and says that felt amazing

### After Battle 1
Player party is loaded from save.  
StressCupPhase2 runs.  
* Stresscuporgnanizer complements Player on winning
* Stresscuporgnanizer asks if the Player is starting to understand the thrill
* Player questions what they mean by starting
* Stresscuporgnanizer exclaims that of course they're not done, that was a warm up - now you really have to live on the edge
Stresscuporgnanizer gestures towards the player.  
* Player hopes they don't have to spend much more time on the edge
Player battles against Stresscuporgnanizer.

### Player loses to Stresscuporgnanizer
* Stresscuporgnanizer exclaims that this is what pressure really feels like

### Player defeats Stresscuporgnanizer
* Stresscuporgnanizer suggests Player has nerves of steel

### Post Second Battle
`QUEST_STRESSCUP set to Reward.`  
Player's party is restored from save.  
* Stresscuporgnanizer feels so great, really hasn't felt this good in a while
* Player doesn't understand what could feel good about any of that
* Stresscuporgnanizer says that feeling, the rush of adrenaline, used to be everyday for them, it was comfortable, and wishes they could find a way back into that

### Interact with Stresscuporgnanizer when Quest is Reward And Bag Is Full
* Stresscuporgnanizer says they've got something for the Player as a thanks
* Stresscuporgnanizer instructs Player to make room in their inventory

### Interact with Stresscuporgnanizer when Quest is Reward And Bag Has Space
* Stresscuporgnanizer gestures towards Player
Player receives `ITEM_POTION`.
Quest complete.

### Interact with Stresscuporgnanizer when Quest is Complete
* Stresscuporgnanizer notices that now that their adrenaline has spiked a little, they feel oddly calm
* Stresscuporganizer muses that perhaps coming to the beach isn't so bad but ultimately, they need to find another job
* Stresscuporganizer wants something fufilling, high execution, and high stress job

### Player Loses Any Battle
Player's party is restored from save.
Player whites out.

# Summary & Notes
Player comes across a tournament organizer who's work has been pushed out since Sharprise's League came into town. Loved being a tournament organizer and the chaos that the job required, and has come to the beach to try to relax. They're feeling antsy and want to feel the thrill of their work again, so they challenge the Player and give the Player a special team to use. The player and Stresscuporganizer use parties that have inaccurate moves and items. Quest completes when the Player wins twice, and each battle has a seperate team for both Player and Stresscuporganizer.

---

The player is able to access this quest after finishing "[Young Padawan](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recNSdquhDRkvbA3O?blocks=hide)".
