* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)
# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_ULTRAWORMHOLESEARCH) `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_ULTRAWORMHOLESEARCH) `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_ULTRAWORMHOLESEARCH) `TRUE`

### Grotto Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_HIDDENGROTTOMAPPING) `TRUE`

### Lucrezia Not Arrested

`VAR_STORYLINE_STATE` >= STORY_CLEAR`

## Functions

### `ShowWormholeList`
For each completed subquest, a different menu item is populated.

| SUB_QUEST | Menu Item |
| --- | --- |
| 1 | Paldea|
| 2 | Unova|
| 3 | Orre|
| 4 | Sinnoh|
| 5 | Hoenn|
| 6 | Alola|
| 7 | Kalos|
| 8 | Johto|
| 9 | Galar|
| 10 | Kanto|

## Variables / Flags

### `VAR_QUEST_ULTRAWORMHOLE_RESEARCH`

A variable to track the the quest.

| Value | Constant | Description |
| --- | --- |--- |
| 0 | HAS_NOT_UNLOCKED | Has not discovered the bookcase | 
| 1 | HAS_UNLOCKED | Has discovered the bookcase, door is open | 
| 2 | DEMOED_MACHINE | Professormadrone has demoed Wormhole machine | 
| 3 | EXPLAINED_TYPENULL | Save point before Type: Null is given | 

# Involved Instances

## Professormadrone

### [`MAP_SHARPRISESPIRE_LAB`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Professormadrone is facing a north.
* Professormadrone is looking at a computer.
* Professormadrone is always visible.

## Typenullpet

### [`MAP_SHARPRISESPIRE_LAB`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Typenullpet is randomly walking around.
* Typenullpet is always visible.

## Totem0

### [`MAP_ROUTE_5`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem0 is facing a random direction.
* Totem0 is visible when
    * Quest Active AND
    * `SUB_QUEST_1` is NOT complete.

## Totem1

### [`MAP_ROUTE_98`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem1 is facing a random direction.
* Totem1 is visible when
    * Quest Active AND
    * `SUB_QUEST_2` is NOT complete.

## Totem2

### [`MAP_NONGYU_BRIDGE`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)

* Totem2 is facing a random direction.
* Totem2 is visible when
    * Quest Active AND
    * `SUB_QUEST_3` is NOT complete.

## Totem3

### [`MAP_ROUTE_D`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem3 is facing a random direction.
* Totem3 is visible when
    * Quest Active AND
    * `SUB_QUEST_4` is NOT complete.

## Totem4

### [`MAP_ROUTE_6`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)

* Totem4 is facing a random direction.
* Totem4 is visible when
    * Quest Active AND
    * `SUB_QUEST_5` is NOT complete.

## Totem5

### [`MAP_ROUTE_2`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem5 is facing a random direction.
* Totem5 is visible when
    * Quest Active AND
    * `SUB_QUEST_6` is NOT complete.

## Totem6

### [`MAP_ROUTE_100`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem6 is facing a random direction.
* Totem6 is visible when
    * Quest Active AND
    * `SUB_QUEST_7` is NOT complete.

## Totem7

### [`MAP_ROUTE_13`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem7 is facing a random direction.
* Totem7 is visible when
    * Quest Active AND
    * `SUB_QUEST_8` is NOT complete.

## Totem8

### [`MAP_ROUTE_1`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem8 is facing a random direction.
* Totem8 is visible when
    * Quest Active AND
    * `SUB_QUEST_9` is NOT complete.

## Totem9

### [`MAP_ROUTE_9`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* Totem9 is facing a random direction.
* Totem9 is visible when
    * Quest Active AND
    * `SUB_QUEST_10` is NOT complete.

## BossPoipole

### [`MAP_ULTRA_PALDEA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossPoipole is facing a random direction.
* BossPoipole is visible when `FLAG_DAILY_ULTRA_BEAST_0` is not set.

## BossPheromosa

### [`MAP_ULTRA_UNOVA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossPheromosa is facing a random direction.
* BossPheromosa is visible when `FLAG_DAILY_ULTRA_BEAST_1` is not set.

## BossGuzzlord

### [`MAP_ULTRA_ORRE`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossGuzzlord is facing a random direction.
* BossGuzzlord is visible when `FLAG_DAILY_ULTRA_BEAST_2` is not set.

## BossBlacephalon

### [`MAP_ULTRA_SINNOH`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossBlacephalon is facing a random direction.
* BossBlacephalon is visible when `FLAG_DAILY_ULTRA_BEAST_3` is not set.

## BossCelesteela

### [`MAP_ULTRA_HOENN`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossCelesteela is facing a random direction.
* BossCelesteela is visible when `FLAG_DAILY_ULTRA_BEAST_4` is not set.

## BossBuzzwole

### [`MAP_ULTRA_ALOLA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossBuzzwole is facing a random direction.
* BossBuzzwole is visible when `FLAG_DAILY_ULTRA_BEAST_5` is not set.

## BossStakataka

### [`MAP_ULTRA_KALOS`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossStakataka is facing a random direction.
* BossStakataka is visible when `FLAG_DAILY_ULTRA_BEAST_6` is not set.

## BossNihilego

### [`MAP_ULTRA_JOHTO`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossNihilego is facing a random direction.
* BossNihilego is visible when `FLAG_DAILY_ULTRA_BEAST_7` is not set.

## BossKartana

### [`MAP_ULTRA_GALAR`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossKartana is facing a random direction.
* BossKartana is visible when `FLAG_DAILY_ULTRA_BEAST_8` is not set.

## BossXurkitree

### [`MAP_ULTRA_KANTO`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBV533nAhgxGFNk?blocks=hide)
* BossXurkitree is facing a random direction.
* BossXurkitree is visible when `FLAG_DAILY_ULTRA_BEAST_9` is not set.

## Unstablepannenspouse

### [`MAP_ROUTE_11`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbljvligxPdsMk0f7/viwJ3NjKsqFhKmUj4/recqlc7TGI2e3kBX8?blocks=hide)
* Unstablepannenspouse is wandering in a radnom direction.
* Unstablepannenspouse is always visible.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Capture the 10 Pokémon pulled from alternate dimensions

### Quest is Complete

* Player helped Professormadrone collect data on all 10 Pokémon from alternate dimensions

## `MAP_SHARPRISESPIRE_TOP`

### Interact with Bookshelf and Grotto Quest Incomplete
* Game describes a list of books on Lucrezia's bookshelf, including a title about learning Esperanto

### Interact with Bookshelf and Lucrezia Not Arrested
* Game describes a list of books on Lucrezia's bookshelf, including a title about learning Esperanto
* Player exclaims that they're not here to read

### Interact with Bookshelf and Grotto Quest Complete
`VAR_QUEST_ULTRAWORMHOLE_RESEARCH` is set to `HAS_UNLOCKED`.
* Game describes a list of books on Lucrezia's bookshelf, including a title about learning Esperanto
* Player reacts to seeing a book about Esperanto and wonders if that was the same language Professormadrone's notes were in
* PLAYER pulled on the spine of the book, but it didn't budge.
* The bookshelf slid back in the wall!
Play `SE_CLICK`.
Screen fades to black.
Bookshelf door is revealed.
Screen fades from black.
* Player reacts to the secret door

## `MAP_SHARPRISESPIRE_LAB`

### Interact with Professormadrone and Quest Inactive
**NOTE FOR FUDJ**: I would love to figure out how to cut this down or moves parts of it somewhere else. It just feels really long.
* Professormadrone asks if Lucrezia sent you, is surprised to see anybody
* Player explain that Adeliade was arrested and asks if Professormadrone is working with them too
* Professormadrone mutters about as long as the lights are still on
* Professormadrone welcomes the Player to the the Sharprise Wormhole Research Facility
* Professormadrone says that they are at the cutting edge of understanding Pokémon's ability to traverse dimensions
* Player notes that there was a Resido researcher that also used Esperanto working on something similar
* Professormadrone asks if they're referring to Pannen - says its a shame they stopped publishing their work
* Professormadrone remarks how lucky they are, because Player looks like a Trainer, and they've been looking for help from a Trainer
Quest starts.
Professormadrone faces north.
* Professormadrone has been working on some technology also being funded by Sharprise, where Pokémon can be pulled across dimensions into ours without threatening the integrity of time and space
* Professormadrone states that bringing wild Pokémon from other dimensions directly into the lab would be dangerous
* Professormadrone says so instead, they'll drop them directly on the routes
Professormadrone gestures towards a computer.
Play `SE_BEEP`.
Play `TOTEM_POKEMON_0`'s cry.
Play `TOTEM_POKEMON_2`'s cry.
Play `TOTEM_POKEMON_4`'s cry.
* Player asks if those sounds are supposed to happen
Professormadrone gestures towards Player.
* Professormadrone explains they've run the process that pulls the Pokémon over. There are now ten routes in Resido that have wild Pokémon from other dimensions.
* Professormadrone has put those locations in the Player's Todo List and says that for every Pokémon they capture from another dimension, they'll remotely analyze the battle data to see how the Pokémon is adapting to the enviroment
* Professormadrone offers in exchange for the battle data, they'll allow the Player to go to the homeworld of the Pokémon that captured
* Player asks what happens if they don't want to
* Professormadrone chuckles and has a feeling that the Player is the adventuring type, but the Player is free to refuse

### Interact with Professormadrone and Quest Active and No Totems Captured
* Professormadrone explains they've run the process that pulls the Pokémon over. There are now ten routes in Resido that have wild Pokémon from other dimensions.
* Professormadrone has put those locations in the Player's Todo List and says that for every Pokémon they capture from another dimension, they'll remotely analyze the battle data to see how the Pokémon is adapting to the enviroment
* Professormadrone offers in exchange for the battle data, they'll allow the Player to go to the homeworld of the Pokémon that captured

### Interact with Professormadrone and Quest Active and Totem Captured And Has Not Demoed Machine And Bag Does Not Have Space for 10 Beast Balls
* Professormadrone praises the Player for their work so far
* Professormadrone notices that the Player does not have room in their bag, tells the Player to come back when they make room for 10 new Balls

### Interact with Professormadrone and Quest Active and Totem Captured And Has Not Demoed Machine And Bag Has SPace for 10 Beast Balls
`VAR_QUEST_ULTRAWORMHOLE_RESEARCH` is set to `DEMOED_MACHINE`.
* Professormadrone praises the Player for their work so far
* Professormadrone says a deal is a deal and will show the Player how to work the machine
Professormadrone walks four metatiles west.
Professormadrone walks ten metatiles north.
Player walks four metatiles west.
Player walks ten metatiles north.
Professormadrone gestures towards a computer near a door.
Professormadrone faces Player.
* Professormadrone explains that this computer controls where the door actually leads
* Professormadrone says each door target is the home of a Pokémon that can't be captured in this dimension at all
Professormadrone steps one metatile east.
Professormadrone gestures south.
Professormadrone gestures towards Player.
Player recieves 10 `ITEM_BEAST_BALL`.
* Professormadrone explains that they should have the ability to buy Beast Balls from Presto if they need more
* Professormadrone asks to take a look and see if they have any questions 
Professormadrone steps one metatile east.
Professormadrone faces the Player.
Player steps one metatile east.
Player faces north.
* Player says they can't read anything on the screen
* Player asks if the entire interface is in Esperanto
* Professormadrone is surprised the Player has heard of the language and chuckles to themselves
Professormadrone runs ten metatiles south.
Play `SE_BEEP`.
* Professormadrone says all of their work is written in Esperanto, but Lucrezia asked them to keep backups in a common language - the player should be able to read the computers in the lab now
* Professormadrone says the rest should be self explanatory, they worked very hard on making the interface user friendly.

### Interact with Professormadrone and Quest Active and Has Demoed Machine
* Professormadrone hopes the Player's adventures across time and space are going well
* Professormadrone is happy to see that the current process is safe to use, but they'll need a more efficient power source to get the machine into its finalized version
* Professormadrone states that the finalized version of this technology would automatically capture Pokémon before bringing them here
* Professormadrone laughs and says this lab on its own consumes more power than all of Resido put together
* Professormadrone is impressed at how much political will Sharprise must have to get such clearance for this project

### Interact with Professormadrone and Quest Reward and Does Not Have Room for a Pokémon And 17 Items
* Professormadrone has a final request for the Player despite all their hard work
* Professormadrone asks them to make room in their boxes or party for a new Mon
* Professormadrone also says Player will need room for 17 items.

### Interact with Professormadrone and Quest Reward and Has Room For A Pokémon And 17 Items
`VAR_QUEST_ULTRAWORMHOLE_RESEARCH` is set to `EXPLAINED_TYPENULL`.
* Professormadrone is impressed that Player managed to capture all 10 Pokémon
* Professormadrone exclaims that the data has been extremely helpful
* Professormadrone mutters that they're very grateful that the Player is seemingly unharmed
* Professormadrone says there he actually has two Type: Null - one belonged to another researcher that is... no longer working on the project
* Professormadrone explains that this Type: Null prefers staying in its Poké Ball, but Professormadrone wants to make sure this Type: Null gets regular exercise

### Interact with Professormadrone and Quest Reward And Has Explained Type: Null
Game asks if Player wants to save.
Professormadrone gestures towards Player.
Player recieves Type:Null.
Player recieves one of each Memory.
* Professormadrone explans that if the Player can get Type:Null to evolve, those memories will allow the Player to unlock its full potential
Quest complete.

### Interact with Professormadrone and Quest Complete
* Player asks if Professormadrone ever leaves
* Professormadrone explains that they're a Faller - somebody that has come across the bounds of time and space through an Ultra Wormhole and lost their memories
* Professormadrone has forgotten everything about their personal life, but remembered everything about their research
* Professormadrone says when they landed here, they landed in Lucrezia's office, and the two have been collaborating ever since
* Sharprise funds Professormadrone's research without question and has only had one restriction they can't communicate with anybody outside of Sharprise due to the highly dangerous nature of their work
* Professormadrone realizes the trade is insane, but Professormadrone doesn't have a life to go back to, and they're truly happy here, able to work on their research without distractions
* Player thinks that Professormadrone's fall through the Ultra Wormhole may have scrambled more than their memory

### Interact with Any Computer and Has Not Demoed Machine
* Player can't read any of the words on the screen
* Player wonders if its all written in Esperanto

### Interact with Wormhole Computer and Has Demoed Machine
* Machine asks player to select a target destination.
Run `ShowWormholeList`.
If the Player selects Cancel, the menu is closed.

### Interact with Other Computers and Has Demoed Machine
**NOTE FOR FUDJ**
* The facts from [this list](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblAAVPMkZAa6oE95/viwjLaa6jZV1waDQ5?blocks=hide) be written in Pannen's voice. Once you're done, I will organize them into groups depending on how you decide to write them (whatever flows best) split them across computers in the lab. 

### Player Selects A Location
* Wormhole target locked to "Specific Location".
* Machine instructs Player to approach the gate
Player steps one metatile to the west.
Player faces north.
* Machine announces now engaging
Door opens
* Player steps one metatile north.
Player warps to new location.

### Interact with Typenullpet And Type Null Not In Dex
* A doglike Pokémon is wagging its fin at the Player
* It is wearing a tag around its neck engraved with the words "Type: Null"
Player's Pokédex adds Type:Null as a Seen Pokémon

### Interact with Typenullpet And Type Null Is In Dex
* Type:Null is looking at the Player expectantly
* Will Player pet the Type:Null?

### Interact Selected Yes
* Player pets the Type:Null
* Type:Null looks content

### Interact Selected No
* Type:Null gives the player an icy stare

## `MAP_XXX`

### Interact with TotemMonX
* Player guesses that this must be one of the Pokémon from another dimension
* Player reminds themselves that they've got to capture it
* Pokemon cries
Battle starts against TotemMonX.
If Player wins, TotemMonX is removed from the map.

### TotemMonX is not captured
* Player thinks that they'll need to come back later to try and catch it

### TotemX is captured
* Player believes Professormadrone must have the data they need by now

## `MAP_ROUTE_11`

### Unstablepannenspouse
Unstablepannenspouse does not turn to face the Player.
* Unstablepannenspouse mutters about "Beauty", "Lightning" and "Burst".
Unstablepannenspouse faces the Player.
* Unstablepannenspouse asks if Ramesh still has Absorption
* Player remarks that doesn't understand what Unstablepannenspouse is talking about

# Summary & Notes
Player returns to Lucrezia's office and interacts with a bookshelf, which has a book about Esperanto on it. The Player recognizes the language from working with Pannen, and attemps to pick up the book, which triggers a secret staircase behind the bookshelf. Player goes down the bookcase which leads to a secret lab under the Salesforce Tower where they meet Pannen again, who has no memory of the player and is significantly older. Pannen attempts to use a new technology where Pokémon are brought from other dimensions into Resido, and asks Player to go throughout the region and capture them. In exchange, Pannen will help transport the Player to dimensions where they can battle and capture the Ultra Beasts. After unlocking all of the dimensions, Pannen gifts the Player with a Type:Null. 

The alternate dimensions are palette swapped versions of the routes where the totems are found. These dimensions have no encounters, no humans, and some of them have a puzzle on the route that must be solved before getting to the Ultra Beast. For example, if Totem Kingler unlock Buzzwole and is found on Route 1, the Buzzwole dimension is an alternate Route 1.

It is revealed over the course of the quest that Pannen and Pannenspouse both become Fallers but continued to work together (without memory of the other) under Sharprise. Repeated exposure to Ultrawormhole Energy resulted in Pannenspouse losing their sanity, and now they wander Resido, abandoned by Sharprise.

---

The player is able to access after finishing [Hidden Grotto Mapping](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recvnWf1L6CjztA3Q?blocks=hide) [We Can Stop You, Actually](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recNyDvd4s51ETVGn?blocks=hide)
