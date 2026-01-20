* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recotP6V8Hy69B4l3?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,DEX_COMPLETION)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,DEX_COMPLETION)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,DEX_COMPLETION)` \== `TRUE`

### Has Unpaid Mons
`VAR_QUEST_DEX_COMPLETION` <= (`GetNumberNonForbiddenCaughtMons + 10`) == `TRUE`

### Has Shown Forbidden Mons
`FLAG_DEX_SHOWN_FORBIDDEN_MONS` == `TRUE`

## Functions

### `HasSeenForbiddenMons`
Returns `TRUE` if Player has captured any of the following:
* Type: Null
* Silvally 
* Nihilego
* Buzzwole
* Pheromosa
* Xurkitree
* Celesteela
* Kartana
* Guzzlord
* Poipole
* Naganadel
* Stakataka
* Blacephalon
* Kubfu
* Urshifu 

### `GetNumberNonForbiddenCaughtMons`
Return the number of Mons in the Resido Dex that are not forbidden.

### `GetPercentageNonForbidden`
Return the percentage of caught Mons in the Resido Dex that are not forbidden.

### `PayOutDexCompletion`
```c
NumCaught = GetNumberNonForbiddenCaughtMons();

for (i = 0; i < 10 ; i++)
{
    if (VarGet(VAR_QUEST_DEX_COMPLETION) >= tablePercent[i])
        continue;

    if (NumCaught < tableCaught[i])
        break;

    SetVar(VAR_QUEST_DEX_COMPLETION, tablePercent[i]);
    AddMoney(tableMoney[i]);
}
```

## Variables / Flags

### `VAR_QUEST_DEX_COMPLETION`
A variable to track how many Pokemon the player has been paid for.

| Percent of Pokemon Caught | Number of Pokemon Caught | Amount to Pay|
| --- | --- | --- |
| 10    | 41    | 18180
| 20    | 82    | 36360
| 30    | 123   | 54540
| 40    | 164   | 72720
| 50    | 205   | 90900
| 60    | 246   | 109080
| 70    | 287   | 127260
| 80    | 328   | 145440
| 90    | 369   | 163620
| 100   | 411   | 181800

# Involved Instances

## Dexresearcher 

### [`MAP_HALERBA_RESEARCH`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recotP6V8Hy69B4l3?blocks=hide)
* Dexresearcher is facing north.
* Dexresearcher is always visible.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Dexresearcher wants Player to capture all 411 Pokemon officially cataloged in Resido

### Quest is Complete

* Dexresearcher has finally gotten a total inventory of the species in Resido

## `BUZZR`

### Anytime

* Dexresearcher posting on Buzzr looking to hire a capture specialist, position is paid

### Quest Active

* Dexresearcher says position has been filled

## `MAP_HALERBA_RESEARCH`

### Interact with Dexresearcher and Quest Inactive
* Dexresearcher explains that they're part of the team that helped create Resido's Pokédex
* Dexresearcher says its a surprisingly involved job - revising and updating the list as new Mons migirate, sometimes taking steps to attract or repel specific species
* Dexresearcher one of the most important steps is validation of the Dex - making sure that all of the Pokémon lised in the Pokédex are still in the region and haven't sene driven away
* Dexresearcher mentions that they usually hire a Trainer on a contract basis for this, but it gets harder every year to find a Trainer willing to commit because all Trainers care about now is battling
* Dexresearcher says that its a paid position, and wonders if Player would be interested
* Player asks what work is required
* Dexresearcher says its easy - capture all of the Pokémon in the Resido Pokédex
* Player exclaims how is that easy 
* Dexresearcher says its only 411 - it should be easy for a Trainer like Player
Quest starts.
* Dexresearcher says to come back as you make progress - they'll pay you for every 10% of the Pokédex that the player has completed

### Interact with Dexresearcher and Quest Inactive and Dex Complete And Bag Has Space
Quest Active.
* Dexresearcher asks if Player is the Trainer "Player"
* Player confirms
* Dexresearcher explains that they were having trouble finding a Trainer to help them verify the Resido Dex, but suddenly their servers reported one Trainer who had been capturing a ton of Pokémon at an insane rate
* Dexresearcher says that they've incredibly grateful for your work, and they can finally close the open position
* Dexresearcher says that the position was a paid contract, but they're happy to just pay it out now
Dexresearcher gestures towards Player.
Show Money Box.  
Play Money Sound.  
Run `PayOutDexCompletion`.
Update Money Box.  
Close Money Box.
Quest Reward.
Proceed to "Interact with Dexresearcher and Quest Reward".

### Interact with Dexresearcher and Quest Active And Does Not Have Unpaid Mons
* Dexresearcher greets Player and says they'll check on how the Player is coming along
Dexresearcher faces North.
Play `SE_PC_ON`.
Dexresearcher faces Player.
* Dexresearcher says Player has captured X Pokemon which is Y% of the Resido Pokedex.
* Dexresearcher informs Player they'll do a payout once they reach Z% of the Resido Pokédex.
    Go to "Dexresearcher Advice".

### Interact with Dexresearcher and Quest Active And Has Unpaid Mons
* Dexresearcher greets Player and says they'll check on how the Player is coming along
Dexresearcher faces North.
Play `SE_PC_ON`.
Dexresearcher faces Player.
* Dexresearcher says Player has captured X Pokemon which is Y% of the Resido Pokedex.
* Dexresearcher says they owe Player a payout for their efforts
Dexresearcher gestures towards Player.
Show Money Box.  
Play Money Sound.  
Run `PayOutDexCompletion`.
Update Money Box.  
Close Money Box.
If At 100%:
    Quest Reward
    * Dexresearcher realizes that 100% is completion
    * Dexresearcher exclaims that they Player really did it
    * Dexresearcher congratulations the Player on completing the Resido Pokédex.
If Not at 100%:
    Go to "Dexresearcher Advice".

### Interact with Dexresearcher and Has Forbidden Mons And Never Shown Forbidden Mons
Set `FLAG_DEX_SHOWN_FORBIDDEN_MONS`.
* Dexresearcher notse that the Player has captured some Pokémon that aren't part of the Resido Pokédex
* Dexresearcher has a feeling that the less they know about their origin, the better things will be

### Dexresearcher Advice
### Player Caught Less Than 20%
* Dexresearcher says their team worked hard on making the Pokédex useful - make sure to try it out
### Caught Amount Is 20% <= x < 30%
* Dexresearcher says that some Pokemon can only be found at certain times of day 
### Caught Amount Is 30% <= x < 40%
* Dexresearcher asked if the Player has tried using the Dexnav to find rare Pokémon
### Caught Amount Is 40% <= x < 50%
* Dexresearcher suggests that the Player learn to fish at Lake Wajabi
### Caught Amount Is 50% <= x < 60%
* Dexresearcher says there are some Pokémon that can only be found on the ocean - sometimes Pua will teach Trainers at Cresalta Vista how to cross the ocean
### Caught Amount Is 60% <= x < 70%
* Dexresearcher notes there are a surprising number of Pokemon that can be lured by planted berries
### Caught Amount Is 70% <= x < 80%
* Dexresearcher says that the hardest part of getting some Pokemon is finding their evolution item
### Caught Amount Is 80% <= x < 90%
* Dexresearcher says there is a researcher named Pannen who has done some work around places where only certain Pokemon can be found
### Caught Amount Is 90% <= x < 100%
* Dexresearcher says that some Pokémon can only be obtained by working with specialized Trainers in the region - encourages Player to talk to everybody

### Interact with Dexresearcher and Quest Reward And Has No Bag Space
* Dexresearcher says they while they've paid out the terms of the contact, Dexresearcher is so grateful that they have something else for Player
* Dexresearcher instrcuts Player to come back with room for something important

### Interact with Dexresearcher and Quest Reward And Has Bag Space
* Dexresearcher says they while they've paid out the terms of the contact, Dexresearcher is so grateful that they have something else for Player
Dexresearcher gestures towards Player.
Player recieves `ITEM_SHINY_CHARM`.
Quest complete.

### Interact with Dexresearcher and Quest Complete
* Dexresearcher says it was a pleasure to work with the Player
* Dexresearcher asks if maybe the Player would be willing to do it again next year

# Summary & Notes
Dexresearcher asks the Player if they're willing to be hired as a Capture Specialist for Halerba's Research. Hiring for the role has been hard since most Trainers only cabout battling. Player agrees to help (reluctantly). Dexresearcher pays the Player for every 10% of the Dex that is completed, with the total amount being 1000000. When the Player finshes the Dex, they are also given the Shiny Charm.

---

The player is able to access this quest after finishing "[Young Padawan](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recNSdquhDRkvbA3O?blocks=hide)".
