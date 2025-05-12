* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recC9efBBI7hXi7ZV?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Building Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_RECRUITLOCALARTISTS)` \== `TRUE`

### Building Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_RECRUITLOCALARTISTS)` \== `TRUE`

### Building Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_RECRUITLOCALARTISTS)` \== `TRUE`

### First Person Spoken
`VAR_QUEST_RECRUITLOLCAARTISTS` > `0`

### Second Person Spoken
`VAR_QUEST_RECRUITLOLCAARTISTS` > `1`

### First Mon Captured
`subquestmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_RECRUITLOCALARTISTS,SUB_QUEST_1)` \== `TRUE`

### Second Mon Captured
`subquestmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_RECRUITLOCALARTISTS,SUB_QUEST_2)` \== `TRUE`

### Third Mon Captured
`subquestmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_RECRUITLOCALARTISTS,SUB_QUEST_3)` \== `TRUE`

## Functions

### ProceedToSecondSpoken
If `VAR_QUEST_RECRUITLOLCAARTISTS` is 0, increase by 1.

### IncrementRecruitlocalartists
Increase `VAR_QUEST_RECRUITLOLCAARTISTS` by 1.

### DetermineMonLocation
When the Player first learns about the identity of the Smeargle, their location is randomly chosen from one of three on the map. That location's index is stored in `VAR_QUEST_RECRUITLOLCAARTISTS`.

When a Smeargle is defeated, it runs off to one of the other two locations, randomly generated.
When a Smeargle is captured, another Smeargle appears on screen, sees the Player, and runs off to one of the other two locations, randomly genreated.

If the Player leaves the map, the Smeargle is randomly placed at one of the three locations.

### Recruitlocalartistscreatemon
//PSF TODO figure out how to set other attributes of Smeargle
//https://pokepast.es/df4fe2c9b4dbcdde

If First Mon Captured, generate the Happy Hour Smeargle.

If Second Mon Captured, generate the False Swipe Smeargle.

If Third Mon Captured, generate the Smell Smash Smeargle.

## Variables / Flags

### `VAR_QUEST_RECRUITLOLCAARTISTS`

A variable to track the progress of the Player through the Quest.

| Value | Constant | Meaning |
| --- | --- | --- |
| 0 | `NOT_STARTED` | Has not spoken to anybody |
| 1 | `FIRST_SPOKEN` | Has spoken to first citizen about Smeargle |
| 2 | `SECOND_SPOKEN` | Has spokent to second citizen about Smeargle |

# Involved Instances

## [RecruitlocalartistsadvertiserA](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/rec411w20kVNoM4Qm?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistsadvertiserA is facing north, looking at a mural.
* RecruitlocalartistsadvertiserA is visible when Quest Inactive and Quest Reward.

## [RecruitlocalartistscitizenB](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recasapkkjolbxulN?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistscitizenB is walking around in a random direction.
* RecruitlocalartistscitizenB is always visible.

## [RecruitlocalartistscitizenC](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recmGRuFQYyZfruCx?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistscitizenC is walking around in a random direction.
* RecruitlocalartistscitizenC is always visible.

## [RecruitlocalartistscitizenD](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/reczRDR1Hocs0bCi6?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistscitizenD is walking around in a random direction.
* RecruitlocalartistscitizenD is always visible.

## [RecruitlocalartistscitizenE](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recgF8JPCSZytJwbh?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistscitizenE is walking around in a random direction.
* RecruitlocalartistscitizenE is always visible.

## [RecruitlocalartistscitizenF](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recul6wbz8hMz8PJY?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistscitizenF is walking around in a random direction.
* RecruitlocalartistscitizenF is always visible.

## [RecruitlocalartistscitizenG](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/rec5i2kDzX0LON9Q1?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistscitizenG is walking around in a random direction.
* RecruitlocalartistscitizenG is always visible.

## [RecruitlocalartistscitizenH](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recsgrbFrfNrjDAD6?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistscitizenH is walking around in a random direction.
* RecruitlocalartistscitizenH is NOT visible unless First Person Spoken.

## [RecruitlocalartistsMonI](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recvavNYUBHqRvS5Z?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistsMonD is facing a random direction.
* RecruitlocalartistsMonD is visible when
    * Second Person Spoken AND
    * First Mon Not Captured
    * It is currently night time

## [RecruitlocalartistsMonJ](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recE0MJ5xYDcscjIw?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistsMonE is facing a random direction.
* RecruitlocalartistsMonE is visible when
    * First Mon Captured
    * Second Mon Not Captured
    * It is currently night time

## [RecruitlocalartistsMonK](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/rec9wTrv5GQIskb1v?blocks=hide)

### `MAP_MERMEREZA_CITY`

* RecruitlocalartistsMonE is facing a random direction.
* RecruitlocalartistsMonE is visible when
    * Second Mon Captured
    * Third Mon Not Captured
    * It is currently night time

# Scenes

## `QUEST_MENU`

### Quest is Active

* Help RecruitlocalartistsadvertiserA find the artists behind the mural in Mermereza City

### Quest is Complete

* The artists turned out to be Pokémon, but you captured them all

//PSF TODO Replace paint metatiles in Mermereza City with Sharprise League posters

## `BUZZR`

### Anytime
* Random if anybody has met the Mermereza City artists, loves how vibrant the city looks because of them

### Quest Complete
* Random wishes the taggers in Mermereza City came back, hates that they're just covered by ads now
* Hear a rumor that Sharprise got rid of the artists

## `MAP_MERMEREZA_CITY`

### Interact with RecruitlocalartistsadvertiserA and Quest Inactive
RecruitlocalartistsadvertiserA does not face the Player.
* RecruitlocalartistsadvertiserA remarks on how fascinating the art in Mermereza City is
RecruitlocalartistsadvertiserA turns to the Player
* RecruitlocalartistsadvertiserA says they do marketing in Perlacia City
* RecruitlocalartistsadvertiserA says their latest assignment to is find the identity of the "artists" in Perlacia City
* RecruitlocalartistsadvertiserA wants to hire them to work on a campaign they're doing, because everytime they put up flyers instead, the artists just paint over them
* RecruitlocalartistsadvertiserA has had trouble finding down the people involved and realize they people need to spend some time talking to people in Mermereza
* RecruitlocalartistsadvertiserA recognizes the Player as a Trainer
* RecruitlocalartistsadvertiserA knows that Trainers are always all over the city, talking to different people, and asks if the Player could help them out
* RecruitlocalartistsadvertiserA asks the Player to talk to the locals about the murals and see what people know
* RecruitlocalartistsadvertiserA ultimately wants to meet the artists, and wants the Player to bring them back here
Quest starts.
* RecruitlocalartistsadvertiserA says they'll do some asking around themselves.
* RecruitlocalartistsadvertiserA  asks the Player to find the artists and bring them back here later, they'll be waiting here.

### Interact with RecruitlocalartistsadvertiserA and Quest Active
* RecruitlocalartistsadvertiserA asks the Player to talk to the locals about the murals and see what people know
* RecruitlocalartistsadvertiserA ultimately wants to meet the artists, and wants the Player to bring them back here
* RecruitlocalartistsadvertiserA asks the player to find the artists and bring them back here later, they'll be waiting here.

### Interact with RecruitlocalartistsadvertiserA and Quest Reward And Bag Does Not Have Space
* RecruitlocalartistsadvertiserA is excited the Player made it back, hopes they have good news
* RecruitlocalartistsadvertiserA wants to reward the Player for their hard work, asks them to come back with space in their bag

### Interact with RecruitlocalartistsadvertiserA and Quest Reward And Bag Has Space
* RecruitlocalartistsadvertiserA is excited the Player made it back, hopes they have good news
* Player admits that its a little more interesting than expected

Screen fades to black.

Screen fades from black.
* RecruitlocalartistsadvertiserA is shocked to learn that the artists were Pokémon the whole time
* RecruitlocalartistsadvertiserA thinks for a moment
* RecruitlocalartistsadvertiserA asks if the Player caught all three
* Player confirms
* RecruitlocalartistsadvertiserA mumbles outloud about nobody left to paint over

RecruitlocalartistsadvertiserA gestures to Player

Player recieves `ITEM_POTION`.
* RecruitlocalartistsadvertiserA explains that's the reward for their help, and realizes that this solution is actually even better than people couldn't have imagined
* RecruitlocalartistsadvertiserA thanks the Player and says they have a lot of work to do

### Interact with RecruitlocalartistscitizenB and Quest Active
* Run ProceedToSecondSpoken.
* Player asks if what they know about the murals, specifically who creates them.
* RecruitlocalartistscitizenB explains that the murals first starting appearing 40 years ago
* RecruitlocalartistscitizenB said they started in one alley and just propograted outwards to other walls and places
* RecruitlocalartistscitizenB doesn't know who creates them though

### Interact with RecruitlocalartistscitizenC and Quest Active
* Run ProceedToSecondSpoken.
* Player asks if what they know about the murals, specifically who creates them.
* RecruitlocalartistscitizenC says that they've noticed Sharprise and Presto trying to do some advertising on the walls where murals are put up
* RecruitlocalartistscitizenC notes that within a day, new artwork is painted right over them within a few days
* RecruitlocalartistscitizenC doesn't know who is doing it, but clearly they don't like advertising

### Interact with RecruitlocalartistscitizenD and Quest Active
* Run ProceedToSecondSpoken.
* Player asks if what they know about the murals, specifically who creates them.
* RecruitlocalartistscitizenD says the art used to have very clear messages about activism and culture
* RecruitlocalartistscitizenD notes that as time has gone on, they've gotten more and more abstract and... artsy
* RecruitlocalartistscitizenD doesn't know who it is but wonders if their tastes have changed

### Interact with RecruitlocalartistscitizenE and Quest Active
* Run ProceedToSecondSpoken.
* Player asks if what they know about the murals, specifically who creates them.
* RecruitlocalartistscitizenE doesn't know much abotu the murals, but knows that the city occasionally runs walking tours through Mermereza City using the different murals at stopping points
* RecruitlocalartistscitizenE says that even those giving the tours don't know who paints them

### Interact with RecruitlocalartistscitizenF and Quest Active
* Run ProceedToSecondSpoken.
* Player asks if what they know about the murals, specifically who creates them.
* RecruitlocalartistscitizenF believes that nobody has ever seen the artists working during the day, so they must be done at night

### Interact with RecruitlocalartistscitizenG and Quest Active
* Run ProceedToSecondSpoken.
* Player asks if what they know about the murals, specifically who creates them.
* RecruitlocalartistscitizenG says they don't know the identity of the artists, but they've noticed sometimes trails of paint leading from the murals, and then they just suddenly disappear, as if the person just flew away
* RecruitlocalartistscitizenG thinks its weird that a professional would leave a trail like that at all

### Interact with RecruitlocalartistscitizenH and Quest Active And First Person Spoken
* Run IncrementRecruitlocalartists.
* Player asks if what they know about the murals, specifically who creates them.

RecruitlocalartistsMon is added to the map offscreen.

RecruitlocalartistsMon steps three metatiles north.
* RecruitlocalartistscitizenH laughs and says they do know ONE thing that most people don't know
* RecruitlocalartistscitizenH whispers to the Player that its probably not a person at all
* RecruitlocalartistscitizenH claim to have seen a group of Pokémon running between the murals at night
* RecruitlocalartistsMon: !

RecruitlocalartistsMon runs three metatiles south.

RecruitlocalartistsMon is removed from the map.

Run `DetermineMonLocation`.

### Interact with RecruitlocalartistscitizenH and Quest Active and Second Person Spoken
* RecruitlocalartistscitizenH believes the wild Pokémon that paint the murals belonged to the original painter of the murals
* RecruitlocalartistscitizenH wonders what happened to their Trainer

### Interact with RecruitlocalartistsMonI / RecruitlocalartistsMonJ / RecruitlocalartistsMonK
Run `Recruitlocalartistscreatemon`.

Game prompts the Player to save.
* RecruitlocalartistsMonI plays it cry

Play the `SPECIES_SMEARGLE` cry using `CRY_MODE_ENCOUNTER`.

### Defeated Mon
Screen fades to black.

RecruitlocalartistsMon is removed from the map.

Screen fades from black.
* The Smeargle ran away!
* Player notes that RecruitlocalartistsadvertiserA wanted the Player to BRING the artists to them

Run `DetermineMonLocation`.

### Captured Mon
Screen fades to black.

RecruitlocalartistsMon is removed from the map.

Screen fades from black.

If all three Smeargle are captured, Quest Reward and do not proceed.

Otherwise proceed to Captured Mon and Quest Not Reward.

### Captured Mon and Quest Not Reward
* Player notes that RecruitlocalartistscitizenH said there were multiple Pokémon

RecruitlocalartistsMon is added to the map offscreen.

RecruitlocalartistsMon steps three metatiles north.
* RecruitlocalartistsMon: !

RecruitlocalartistsMon runs three metatiles south.

RecruitlocalartistsMon is removed from the map.

Run `DetermineMonLocation`.

# Summary & Notes
There is an advertiser is looking at the murals in Mermereza City. Advertiser has orders to find the artists of the murals and hire them to work on a campaign, but is having trouble finding their identity. The advertiser asks the Player for their help. The Player talks to a few people around town and is evantually learns that the artists are Pokémon that paint at night, and they always paint over advertisments. If the player goes to one of the murals at night, they'll find a wild Smeargle there. After capturing three wild Smeargle, the player goes back to where they met the advertiser and reveal that the artist is Pokémon. The advertiser is thrilled that they don't need to pay an artist and tells the player to keep the Pokémon. If the player goes back to the original mural, it is covered with flyers advertising the Sharprise League.

---

The player is able to access after finishing "[Ready, Set, I Started 2 Hours Ago](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/reck2Uf6L8MgR6ObL?blocks=hide)".
