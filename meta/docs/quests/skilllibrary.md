* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recUgbVGfgyHD4rmv?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_SKILLLIBRARY)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_SKILLLIBRARY)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_SKILLLIBRARY)` \== `TRUE`

### Has New TMs 
Run `Quest_Skilllibrary_StoreAndCompare` and use the result stored in `VAR_RESULT`.

### Is True Timeline
`FLAG_TIMELINE_TRUE` == `TRUE`
 
## Functions
### `Quest_Skilllibrary_StoreAndCompare`
* Returns `TRUE` if there are TMs that Skilllibrarian hasn't copied.
* Buffers the number of machines obtained to `STR_VAR_1`.
* Buffers the number of machines that need to be copied to `STR_VAR_2`.
* Buffers the number of remaining machines obtained to `STR_VAR_3`.

## Variables / Flags

### `VAR_NAME`

Variable Desc

# Involved Instances

## Skilllibrarian

### [`MAP_OROLAND`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recUgbVGfgyHD4rmv?blocks=hide)

* Skilllibrarian is facing north, facing the machine.
* Skilllibrarian is always visible.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Skilllibrarian needs player to brign X more Technical machines

### Quest is Complete

* Skilllibrarian's machine is now capable of letting all Trainers in Resido access all TM moves

## `BUZZR`

### Anytime
* Random talks about how hard it is to progress in the League without access to good moves
* Random asks if anybody has a spare TM134 that they can borrow

## Is Timeline True
* Skilllibrarian asks if anybody has a collection of Technical Machines for a.. project

### Quest Complete
* Skilllibrarian says that if anybody wants to teach their Pokemon and don't have a TM, come find them in Oroland

## `MAP_OROLAND_POKEMON_CENTER_1F`

### Interact with Machine and Quest Inactive
* Machine has a disc shaped slot and a screen with a primitive looking interface

### Interact with Machine and Quest Active
* This is Skilllibrarian's TM Copy Machine

### Interact with Skilllibrarian and Is Not True Timeline
* Skilllibrarian says they're working on a project
* Skilllibrarian needs help for a Trainer that isn't a narc
* Skilllibrarian says the Player smells like a narc

### Interact with Skilllibrarian and Quest Inactive
* Skilllibrarian explains that some Trainers are kept from their potential because they don't have access to Technical Machines
* Skilllibrarian says that some regions have a way for Trainers to craft their own Techincal Machines, but the technology is propietary
* Skilllibrarian says that they've found an even better solution for Resido
* Skilllibrarian says they've built a machine that can copy an existing Technical Machine and they want to make it free for Trainers to use
* Skilllibrarian now just needs to get a copy of all the Technical Machines in the region
* Skilllibrarian offers Player something to make catching Pokémon easier in exchange for their help
Quest starts.
* Skilllibrarian asks that Player come back when they find more Technical Machines, and Skilllibrarian will use their machine to make them available for everybody

### Interact with Skilllibrarian and Quest Active And Has Does Not Have New TMs
Run `Quest_Skilllibrary_StoreAndCompare`.
* Skilllibrarian asks that Player come back when they find more Technical Machines, and Skilllibrarian will use their machine to make them available for everybody
* Skilllibrarian says there are Y more Technical Machines to go

### Interact with Skilllibrarian and Quest Active And Has New TMs
Run `Quest_Skilllibrary_StoreAndCompare`.
* Skilllibrarian asks how many more Technical Machines did the Player bring
Player gestures towards Skilllibrarian
* Skilllibrarian notes that this is X more TMs they can copy
Skilllibrarian faces the machine.
Skilllibrarian gestures towards machine.
Play `SE_PC_LOGIN`.
Play `SE_ITEM_GET`.
Skilllibrarian gestures towards machine.
Skilllibrarian gestures towards Player.
* Skilllibrarian says the copy is all done, and thanks the Player for their donation
* Skilllibrarian says there are Y more Technical Machines to go
If Y is 0:
* Skilllibrarian realizes they said zero in shock
* Skilllibrarian says they got them all
* Skilllibrarian exclaims that the Skill Library now had access to all the TMs in Resido

### Interact with Skilllibrarian and Quest Reward And Has No Bag Space
* Skilllibrarian thanks the Player for all their tireless work
* Skilllibrarian says as promised, they have something for Player, but there's no space in Player's bag
* Skilllibrarian wants Player to come back with more room

### Interact with Skilllibrarian and Quest Reward And Has Bag Space
* Skilllibrarian thanks the Player for all their tireless work
* Skilllibrarian gestures towards Player
Player recieves `ITEM_OVAL_CHARM`.
Quest complete.

### Interact with Skilllibrarian and Quest Complete
* Skilllibrarian wants to scale up their machine to work in Pokémon Centers across the region, for everybody to use
* Skilllibrarian wonders how big they can get before Presto tries to take them down for illegal distribution...
* Skilllibrarian laughs and says that the blueprints for the machine are online, so anybody can copy them now - even if Skilllibrarian gets taken down, somebody will be able to make Moves available to all

# Summary & Notes
Skilllibrarian has built a machine that can create new TMs after copying it once.  Skilllibrarian wants to make this service available to all Trainers across Resido, regardless of their economic situation. Skilllibrarian asks the Player to bring them all 400 TMs to copy, and will give the Player an Oval Charm upon completion. Skilllibrarian understands this is is against copyright law, so they won't tell the Player about their work until the Player is in the True Timeline.

---

The player is able to access after finishing "[Aaand We're Back!](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/rec6JwGlcuewoTYwM?blocks=hide)".
