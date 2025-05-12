* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recuoHL7SfStXmbmk?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_GARDENCLEANUP)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_GARDENCLEANUP)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_GARDENCLEANUP)` \== `TRUE`

### Cleaned Up Species

`subquestmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_GARDENCLEANUP,SUB_QUEST_1)` \== `TRUE`

### Garden Next Stage 

`VAR_GARDENCLEANUP_STATE` > 30

### X Defeated
X is the current value of `VAR_GARDENCLEANUP_STATE`.

## VAR_GARDENCLEANUP_STATE
This variable tracks the number of Pawmi and Pawmo that have been defeated in the garden.

## Functions
### ShowNeededMonList
Show a list to the player.

If `SUB_QUEST_2` is incomplete, add "Can create sun" to the list.

If `SUB_QUEST_3` is incomplete, add "Can water plants" to the list.

If `SUB_QUEST_4` is incomplete, add "Can plant seeds" to the list.

Always add "None" to the list.

### IncrementGardenCleanup
If `SUB_QUEST_1` for `QUEST_GARDENCLEANUP` is incomplete AND one of the current Enemy Mon is Pawmo or Pawmi, AND the battle was won either by defeat or capture, then increment `VAR_GARDENCLEANUP_STATE` by 1.

### CheckMonForSun
Checks if the presented Pokémon can learn one of the following Moves or has one of the followng Abilities. Returns `FALSE` for none, `PERFECT` for those in that list, and `TOO_MUCH` for those in that list.

### CheckSubquestReward
If all four subquests are complete, Quest is Reward.

#### Perfect
##### Moves
Sunny Day

#### Too Much
##### Moves
Max Flare

##### Abilities
Drought
Desolate Land
Orichalum Pulse

### CheckMonForWater
Checks if the presented Pokémon can learn one of the following Moves or has one of the followng Abilities. Returns `FALSE` for none, `PERFECT` for those in that list, and `TOO_MUCH` for those in that list.

#### Perfect
##### Moves
* Bouncy Bubble
* Bubble
* Water Gun
* Water Pulse
* Bubble Beam
* Splishy Splash

#### Too Much 
##### Moves
* G-Max Cannonade
* G-Max Foam Burst
* G-Max Rapid Flow
* G-Max Stonesurge
* Hydro Vortex
* Max Geyser
* Water Shuriken
* Whirlpool
* Chilling Water
* Brine
* Hydro Steam
* Scald
* Snipe Shot
* Water Pledge
* Muddy Water
* Sparkling Aria
* Surf
* Hydro Pump
* Origin Pulse
* Hydro Cannon
* Water Spout
* G-Max Hydrosnipe
* Oceanic Operetta

##### Abilities
* Drizzle
* Primordial Sea

### CheckMonForSeed
Checks if the presented Pokémon can learn one of the following Moves or has one of the followng Abilities. Returns `FALSE` for none, `PERFECT` for those in that list, and `TOO_MUCH` for those in that list.
#### Perfect
##### Moves
* Bullet Seed
* Rototiller

# Involved Instances

## [CommunitygardenkidA](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recuoHL7SfStXmbmk?blocks=hide)

### `MAP_CAPHE_COMMUNITY_GARDEN`

* CommunitygardenkidA is walking in a random direction.
* CommunitygardenkidA is always visible.

# Scenes

## `QUEST_MENU`

### Quest is Active And Species Not Cleaned Up

* Help CommunitygardenkidA reduce pests by defeating 30 Pawmi or Pawmo

### Quest is Active Cleaned Up Species

* Bring specific Pokémon to CommunitygardenkidA to help further expand the garden

### Quest is Complete

* CommunitygardenkidA has gotten the community garden off the ground

## `BUZZR`

### Anytime

* Random says its a shame that Caphe Bodega went out of business, crushed by Presto

### Quest Active

* Random notes seeing kids working on the Caphe Community Garden
* Random beleives that the kid in the Caphe Community Garden is the kid of the owners

### Quest Complete

* Random is impressed that the garden in the center of the city is finally cleaned up

## `MAP_CAPHE_COMMUNITY_GARDEN`

### Interact with CommunitygardenkidA and Quest Not Started and Species Not Cleaned Up
* CommunitygardenkidA learned about community gardens in schools, where a community works together to grow fruits and vegetables that everybody can enjoy
* CommunitygardenkidA knows this lot has been abandoned for years and wants to put in the work to clean it up but thinks they're in over their head
* CommunitygardenkidA says its really hard to plant any food
* CommunitygardenkidA says all the Pawmo and Pawmi eat the Berries before anybody can harvest them
* CommunitygardenkidA asks if the Player can help tame the local population of Pawmo and Pawmi by defeating 30 of them
Quest starts.

### Interact with CommunitygardenkidA and Quest Not Started and Species Cleaned Up
* CommunitygardenkidA learned about community gardens in schools, where a community works together to grow fruits and vegetables that everybody can enjoy
* CommunitygardenkidA knows this lot has been abandoned for years and wants to put in the work to clean it up but thinks they're in over their head
* CommunitygardenkidA says its really hard to plant any food
* CommunitygardenkidA says all the Pawmo and Pawmi eat the Berries before anybody can harvest them
* CommunitygardenkidA has noticed you doing training in the garden though
Quest starts.
Proceed to "Interact with CommunitygardenkidA and Quest Active and Species Cleaned Up"

### Interact with CommunitygardenkidA and Quest Active and Species Not Cleaned Up
* CommunitygardenkidA says its really hard to plant any food
* CommunitygardenkidA says all the Pawmo and Pawmi eat the Berries before anybody can harvest them
* CommunitygardenkidA asks if the Player can help tame the local population of Pawmo and Pawmi by defeating 30 of them

### Interact with CommunitygardenkidA and Quest Active and Species Cleaned Up
Run `IncrementGardenCleanup`.
* CommunitygardenkidA thinks those mons have gotten that hint that they shouldn't hang around here anymore
* CommunitygardenkidA thanks Player for their help
* CommunitygardenkidA is going to do some work around the garden now that its easier to navigate
Proceed to "Interact with CommunitygardenkidA and Quest Active and Garden Next Stage".

### Interact with CommunitygardenkidA and Quest Active and Garden Next Stage
* CommunitygardenkidA thinks they're going to need some help getting some Pokémon to help manage the garden
* CommunitygardenkidA asks if Player has any of these Pokémon
Run `ShowNeededMonList`.
Player must select from the list.

### Player Selects None Or Cancels Pokémon Selection
* CommunitygardenkidA says that's fine if Player doesn't have a Pokémon to help right now
* CommunitygardenkidA asks Player to come back when they have a Mon that can help

### Player Selects Can Create Sunlight
* CommunitygardenkidA says plants need sunlight to grow - does Player have a Mon knows that knows the move Sunny Day?
* Player selects Mon from their party

### Player Selects Can Water Plants
* CommunitygardenkidA says plants need water to grow - does Player have a Mon that knows the move Rain Dance?
* Player selects Mon from their party

### Player Selects Can Plant Seeds
* CommunitygardenkidA thinks a Pokémon will be more efficient at planting seeds - does Player have a Mon that knows the move Bullet Seed?
* Player selects Mon from their party

### Mon Can't Create Sunlight
* CommunitygardenkidA doesn't think [NICKNAME] can create sunlight very well.

### Mon Can't Water Plants
* CommunitygardenkidA doesn't think [NICKNAME] will be able to water plants very well.

### Mon Can't Plant Seeds
* CommunitygardenkidA doesn't think [NICKNAME] will be able to plant seeds very well.

### Mon Creates Too Much Sunlight
* CommunitygardenkidA says [NICKNAME] can create sun... but it's going to be too strong and dry out the plants!

### Mon Creates Too Much Rain
* CommunitygardenkidA says [NICKNAME] can create rain... but it's gong to be too strong and overwater the plants!

### Mon Can Create Sunlight
* CommunitygardenkidA says that [NICKNAME] would be great for creating sunlight.
* CommunitygardenkidA asks if the Player is sure that CommunitygardenkidA can have [NICKNAME]

### Mon Can Water Plants
* CommunitygardenkidA says that [NICKNAME] would be great for watering plants.
* CommunitygardenkidA asks if the Player is sure that CommunitygardenkidA can have [NICKNAME]

### Mon Can Plant Seeds
* CommunitygardenkidA says that [NICKNAME] would be great for planting seeds.
* CommunitygardenkidA asks if the Player is sure that CommunitygardenkidA can have [NICKNAME]

### Player Answers No
* CommunitygardenkidA understands if Player doesn't want to part with [NICKNAME]
* CommunitygardenkidA asks Player to come back when they have a Mon that can help

### Player Answers Yes And Less Than 2 Healthy Mon
* CommunitygardenkidA realizes that Player can't give up their last healthy Mon

### Player Answers Yes And Has More Than 1 Healthy Mon
* CommunitygardenkidA thanks Player
Selected Mon is deleted.
Player gestures towards CommunitygardenkidA.
Run `CheckSubquestReward`.
If Quest Reward, go to "Interact with CommunitygardenkidA and Quest Reward and Bag Has No Space".

### Interact with CommunitygardenkidA and Quest Reward and Bag Has No Space
* CommunitygardenkidA thinks this is an awesome start
* CommunitygardenkidA tells Player to make room in their bag and come back

### Interact with CommunitygardenkidA and Quest Reward and Bag Has Space
* CommunitygardenkidA is going to do some more work but thinks it will be easier to plant food here in the future
* CommunitygardenkidA is super excited to get started and thanks Player
* CommunitygardenkidA thinks Player can use the community garden if they want to plant berries, and thinks the following item will help
CommunitygardenkidA gestures towards Player.
Player recieves `ITEM_WAILMER_PAIL`.
Quest complete.

### Interact with CommunitygardenkidA and Quest Complete
* CommunitygardenkidA says the community garden has been coming along perfectly
* CommunitygardenkidA has noticed that berries tend to yield more berries when planted in the garden
* CommunitygardenkidA loves that the land gives back when people give into it

//PSF TODO

* Move Greedent tree to Community Garden but only after Quest Complete
* Make it so Rich Mulch is always in effect when berries are planted here and quest complete
* Garden has four states depending on number of subquests completed
    * 0: water level 0, grass level 0, plots level 0
    * 1: water level 0, grass level 0, plots level 0
    * 2: water level 0, grass level 1, plots level 0
    * 3: water level 0, grass level 1, plots level 1
    * 4: water level 1, grass level 1, plots level 1

# Summary & Notes

A smaller neighborhood market is unable to keep up with Presto's drone delivery of groceries and closed up shop. The child of one of the owners wants to start a community garden as a way to replace this source of fruits and vegetables in the community after learning about them in school. Child asks Player to defeat 30 invasive Pawmo, and then asks the Player to bring a Pokémon that knows a weaker Water-move, another that knows a move like Sunny Day, and another that knows Bullet Seed. Player gets the Wailmer Pail once the quest is complete.

---

The player is able to access after finishing "[Ready, Set, I Started 2 Hours Ago](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/reck2Uf6L8MgR6ObL?blocks=hide)".
