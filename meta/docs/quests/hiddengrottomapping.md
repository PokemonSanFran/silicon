* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recvnWf1L6CjztA3Q?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Building Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_HIDDENGROTTOMAPPING)` \== `TRUE`

### Building Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_HIDDENGROTTOMAPPING)` \== `TRUE`

### Building Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_HIDDENGROTTOMAPPING)` \== `TRUE`

### Has Not Met

`FlagGet(FLAG_MET_WORMWHOLESEARCHERA)` == `FALSE`

## Functions

### `IncrementSubquestsTakePages`

For every page the Player has, the associated Subquest is Complete.
Remove all pages from Player.
If all subquests are complete, Quest Reward.

## Items

### `ITEM_WORMHOLE_JOURNAL_1`
### `ITEM_WORMHOLE_PAGES_2`
### `ITEM_WORMHOLE_PAGES_3`
### `ITEM_WORMHOLE_PAGES_4`
### `ITEM_WORMHOLE_PAGES_5`
### `ITEM_WORMHOLE_PAGES_6`

These are key items specifically for the quest. They cannot be used.

# Involved Instances

## Pannen

### [`MAP_ROUTE_X_GROTTO`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recvnWf1L6CjztA3Q?blocks=hide)

* Pannen is facing south.
* Pannen is visible when Has Not Met.

## Pannenspouse

### [`MAP_HALERBA_CITY_RESEARCHER_HOUSE`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/rech8Qa6K2lD7tEba?blocks=hide)

* Pannenspouse is facing east.
* Pannenspouse is only visibile if Quest Not Complete.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Find the other X page(s) from Pannen's journal

### Quest is Complete

* Pannen's journal is reconstructed and translated from Esperanto but Pannen still hasn't been found

## `MAP_XXX_GROTTO`

### Enter Grotto And Has Not Met
* Pannen is surprised to see somebody else here
Pannen steps three metatiles south.
* Pannen says hello in esperanto, then stops and says hello in English
* Pannen introduces themselves and asks the Player their name
* Pannen explains that they are both currently in a Hidden Grotto
* Pannen says that wild Pokémon create these spaces. Sometimes rare Pokémon use them for shelter, and other times, they leave behind Items that are valuable to Trainers
* Pannen researches WHY Pokémon create Hidden Grottos and is in this one in an attempt to learn how they work
* Pannen chuckles and has a feeling that the Player is the adventuring type
* Pannen encouages the Player to find more Hidden Grottos in the region - there could be something for the Player there
* Pannen says they live in Halerba City, maybe they'll see you around
Pannen steps one metatile east. 
Pannen steps five metatiles south.
Screen fades to black.
Pannen is removed from the map.
Screen fades from black.

## `MAP_HALERBA_CITY_RESEARCHER_HOUSE`

### Interact with Pannenspouse And Has Not Met
* Pannenspouse says Pannenspouse is a researcher around Pokémon habitats
* Pannenspouse says their spouse is also a researcher and does more fieldwork in hard to find places
* Pannenspouse says maybe the Player will run into their spouse

### Interact with Pannenspouse And Has Met
* Pannenspouse says Pannenspouse is a researcher around Pokémon habitats
* Pannenspouse says their spouse is also a researcher and does more fieldwork in hard to find places
* Player asks if Pannen is their spouse
* Pannenspouse confirms and wonders when they'll be back home
* Pannenspouse says Pannen spends days out in the field and forgets to write home, but doesn't get worried about it

### Interact with Pannenspouse And Has Met And Has Journal
* Pannenspouse says Pannenspouse is a researcher around Pokémon habitats
* Pannenspouse says their spouse is also a researcher and does more fieldwork in hard to find places
* Player says they believe they've met Pannenspouse's spouse, and found something in a hidden grotto
* Player tried to read it but the words didn't make sense
* Player thought Pannen would know what it is
Player gestures to Pannenspouse
Player loses `ITEM_WORMHOLE_JOURNAL`.
* Pannenspouse laughs and says its Pannen's journal
* Pannenspouse says this is a page from Pannen's journal
* Pannenspouse remembers that it was old and starting to come apart, but didn't realize how badly it was damaged
* Pannenspouse pauses
* Pannenspouse noticed that four of the pages were ripped out, looks like a lot of force was exerted
* Pannenspouse wonders if they're also in Grottos across the region
* Pannenspouse asks the Player to bring them back if they find them
Quest starts.
If Player Has Pages, proceed to "Interact with Pannenspouse And Quest Active And Has Pages"

### Interact with Pannenspouse And Quest Active And Has No Pages
* Pannenspouse wonders if the other X pages of the journal are in other Hidden Grottos
* Pannenspouse says the Hidden Grottos might have something useful for the Player
* Pannenspouse asks if the Player happens to come across the other pages, to bring back here
* Pannenspouse says they're able to read the notes, and they'll leave them on the table

### Interact with Pannenspouse And Quest Active And Has Pages
Player gestures towards Pannenspouse
Run `IncrementSubquestsTakePages`.
* Pannenspouse exclaims that Player has more pages
* Pannenspouse thanks the Player and will see if they will give away clues to Pannen's whereabouts
If Quest Reward:
    * Pannenspouse realizes that all of the missing Pages are here
    * Pannenspouse doesn't think they're any closer to understanding what is happening
    Proceed to "Interact with Pannenspouse and Quest Reward".

### Interact with Pannenspouse and Quest Reward And Bag Has No Space
* Pannenspouse recognizes that it must have been taxing to travel across all these Hidden Gorttos
* Pannenspouse wants to give Player something for their efforts
* Pannenspouse says to empty their bag and come back

### Interact with Pannenspouse and Quest Reward and Bag Has Space
* Pannenspouse realizes that unfortunately, having the entire journal doesn't help shed light on where Pannen could be
* Pannenspouse says that they are starting to get a little worried that Pannen wanted to test the limits of becoming of Faller and did something dangerous
* Pannenspouse decides that sitting around ther house isn't going to solve anything
Pannenspouse gestures to Player.
Player recieves `ITEM_POTION`.
* Pannenspouse has decided to go out and do some fieldwork and see if they can find Pannen that way
* Pannenspouse has translated all of Pannen's notes from Esperanto to something the Player can understand, and says the Player can read them on the desk
* Pannenspouse hopes to meet Player back here with their spouse, someday
Pannenspouse steps one metatile west.
Pannenspouse steps four metatiles south.
Play `SE_EXIT`.
Pannenspouse is removed from the map.
Quest complete.

### Interact with Wormholejournal And Quest Not Active
* Table is covered in notes written in a language that Player don't know

### Interact with Wormholejournal and Quest Active
* Pannen notes are spread across the table
* Pannenspouse's notes are written in the margins in a different color ink

### Interact with Wormholejournal and Quest Complete
* Pannen's notes are translated with sticky notes on header, which does Player want to read
Menu presents following list to Player
* Topic A
* Topic B
* Topic C
* Topic D

**NOTE FOR FUDJ**
* The facts from [this list](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblAAVPMkZAa6oE95/viwsWvlxQKa9BhZdt?blocks=hide) should be written in Pannen's voice. Once you're done, I will organize them into groups depending on how you decide to write them (whatever flows best), and then the player can choose the topics from a list.

# Summary & Notes
When the Player enters a Hidden Grotto for the first time, they run into Pannen, who explains HIdden Grottos. Within that same Hidden Grotto is Pannen's journal. When the player brings the journal to Pannen's spouse, the spouse notices that some of the pages are ripped out. Spouse asks Player to bring back the pages to Pannen's journal, which are also found in other hidden Grottos.

After getting all the journal pieces, the spouse has no ideas as to where to Pannen could be - they've translated all of Pannen's notes from Esperanto so the Player can read them, but they've decided to go into the field and try to piece together where Pannen could be.

---

The player is able to access this quest after finishing "[Young Padawan](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recNSdquhDRkvbA3O?blocks=hide)".
