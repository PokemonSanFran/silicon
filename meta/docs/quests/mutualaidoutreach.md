* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/reccFZGD2nejEuc7k?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_MUTUALAIDOUTREACH)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_MUTUALAIDOUTREACH)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_MUTUALAIDOUTREACH)` \== `TRUE`

### Restuarant Expansion Cutscene Complete

`VAR_BELEN_STATE` \== `CUTSCENE_COMPLETE`

### Raid Started

`VAR_STORYLINE_STATE` \>= `STORY_WARP_TILE_ACCESSIBLE`

### Raid Complete

`VAR_STORYLINE_STATE` \< `STORY_CLEAR`

# Functions

## `GenerateOutreachMenu`
| Fund Subquest | List Item |
| --- | --- |
|`SUB_QUEST_1`| Food Security|
|`SUB_QUEST_2`| Healthcare|
|`SUB_QUEST_3`| Social Housing|
|`SUB_QUEST_4`| Criminal Reform|
|`SUB_QUEST_5`| Legal Defense|

When the matching subquest in `QUEST_MUTUALAIDFUND` is complete, the item is added to the list.

# Involved Instances

## Mutualaidfundraiser
### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recxkf7Sxz7g14Ftm?blocks=hide)
Mutualaidfundraiser is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## Mutualaidoutreacher
### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/reco3nlBENKicD9DN?blocks=hide)
* Mutualaidoutreacher is facing a random direction.
* Mutualaidoutreacher is only visible if
* any subquest from `QUEST_MUTUALAIDFUND` is complete

* Mutualaidoutreacher is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/reco3nlBENKicD9DN?blocks=hide)
Mutualaidoutreacher is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## Restaurantexpansionchef
The visibility and orientation of this instance is found in Restaurant Expansion 2.

## Boycrieswolvesdoctor
### [`MAP_LAKE_WAJABI`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recJnlcJ9dhNXA1qF?blocks=hide)
* Boycrieswolvesdoctor is visible when `SUB_QUEST_2` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recZg24wqExokSZUG?blocks=hide)
* Boycrieswolvesdoctor is facing a random direction.
* Boycrieswolvesdoctor is visible when `SUB_QUEST_2` of `QUEST_MUTUALAIDFUND` is complete.

* Boycrieswolvesdoctor is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recZg24wqExokSZUG?blocks=hide)
Boycrieswolvesdoctor is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## CleanuppersonB 
### [`MAP_ROUTE_1`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/rec1PZnN2mHOYUo7g?blocks=hide)
* CleanuppersonB is visible when `SUB_QUEST_3` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recmKxKHugA6VAKu1?blocks=hide)
* CleanuppersonB is facing a random direction.
* CleanuppersonB is visible when `SUB_QUEST_3` of `QUEST_MUTUALAIDFUND` is complete.

* CleanuppersonB is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recmKxKHugA6VAKu1?blocks=hide)
CleanuppersonB is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## CleanuppersonC
### [`MAP_HODOU_CITY`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/rec43oWqgap6LSpmE?blocks=hide)
* CleanuppersonC is visible when `SUB_QUEST_4` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recWU9bx4LmtlC1HH?blocks=hide)
* CleanuppersonC is facing a random direction.
* CleanuppersonC is visible when `SUB_QUEST_4` of `QUEST_MUTUALAIDFUND` is complete.

* CleanuppersonC is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recWU9bx4LmtlC1HH?blocks=hide)
CleanuppersonC is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## CleanuppersonD
### [`MAP_ROUTE_E`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/rec3SnZhvp70pYbgi?blocks=hide)
* CleanuppersonD is visible when `SUB_QUEST_5` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recmwuRteRTMIXsoF?blocks=hide)
* CleanuppersonD is facing a random direction.
* CleanuppersonD is visible when `SUB_QUEST_5` of `QUEST_MUTUALAIDFUND` is complete.

* CleanuppersonD is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recmwuRteRTMIXsoF?blocks=hide)
CleanuppersonD is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## CleanuppersonE
### [`MAP_ROUTE_98`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recRkymSMiYCHw6JD?blocks=hide)
* CleanuppersonE is visible when `SUB_QUEST_6` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/rectl5ft4yUCXOfBa?blocks=hide)
* CleanuppersonE is facing a random direction.
* CleanuppersonE is visible when `SUB_QUEST_6` of `QUEST_MUTUALAIDFUND` is complete.

* CleanuppersonE is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/rectl5ft4yUCXOfBa?blocks=hide)
CleanuppersonE is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## FindtheguiltyplantH
### [`MAP_TORGEOT_CLIMB`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recjpX8wo0w3B4d2s?blocks=hide)
* FindtheguiltyplantH is visible when `SUB_QUEST_7` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recj1Ke3vQGMVDTzB?blocks=hide)
* FindtheguiltyplantH is facing a random direction.
* FindtheguiltyplantH is visible when `SUB_QUEST_7` of `QUEST_MUTUALAIDFUND` is complete.

* FindtheguiltyplantH is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recj1Ke3vQGMVDTzB?blocks=hide)
FindtheguiltyplantH is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## BuildingscopepersonC
### [`MAP_ROUTE_4`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recaAHczcK9Dk2CTv?blocks=hide)
* BuildingscopepersonC is visible when `SUB_QUEST_8` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recyjbdRuZ1AQC6lU?blocks=hide)
* BuildingscopepersonC is facing a random direction.
* BuildingscopepersonC is visible when `SUB_QUEST_8` of `QUEST_MUTUALAIDFUND` is complete.

* BuildingscopepersonC is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recyjbdRuZ1AQC6lU?blocks=hide)
BuildingscopepersonC is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

## BuildingscopepersonB
### [`MAP_ROUTE_4`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recyw28SWkMirt22m?blocks=hide)
* BuildingscopepersonB is visible when `SUB_QUEST_8` of `QUEST_MUTUALAIDFUND` is not complete.

### [`MAP_MERMEREZA_CONSULTING`](https://airtable.com/appJxoYhsNja2FfjK/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recbxN8ZHvtL7dc0m?blocks=hide)
* BuildingscopepersonB is facing a random direction.
* BuildingscopepersonB is visible when `SUB_QUEST_8` of `QUEST_MUTUALAIDFUND` is not complete.

* BuildingscopepersonB is not visible if
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

### [MAP\_SHARPRISE\_SPIRE\_GIFT\_SHOP](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwXhHOH5FawEFIIC/recbxN8ZHvtL7dc0m?blocks=hide)
BuildingscopepersonB is only visible if 
* Quest Complete AND  
* Raid Started AND  
* Raid Not Complete

# Scenes

## `QUEST_MENU`

### Quest is Active
* Help Mutualaidoutreacher find people to collaborate with to realize the goals of the Mutual Aid Fund

### Quest is Complete
* Mutualaidoutreacher and Mutualaidfundraiser have begun all of their initatives

## `BUZZR`

### `SUB_QUEST_1` is complete
* Belén thanks Mutualaidoutreacher and Mutualaidfundraiser helping to further expand the work that Flowers can do
* Restaurantexpansionchef says they've never worked anywhere so busy but is glad to be doing good

### `SUB_QUEST_2` is complete
* Random is thankful that Boycrieswolvesdoctor was able to fix up a scrape they got before it got worse

### `SUB_QUEST_3`, `SUB_QUEST_4`, `SUB_QUEST_5`, and `SUB_QUEST_6` is complete
* CleanuppersonC says that Mutualaidoutreacher and Mutualaidfundraiser's social housing initative has been lifechanging
* Analyst talks about the best way to solve problems of unhoused is to simply get people in houses

### `SUB_QUEST_7` is complete
* Random attended FindtheguiltyplantH's most recent talk about justice and harm and had their eyes opened

### `SUB_QUEST_8` is complete
* Random mentions that there's a lawyer in Mermereza finally fighting back against landlords that abuse tenants

## `MAP_MERMEREZA_CONSULTING`

### Interact with Mutualaidoutreacher and Quest Inactive
* Mutualaidoutreacher greets Player
* Mutualaidoutreacher recognizes that Player is the fundraising machine they've heard so much about
* Player says they're just happy to help
* Mutualaidoutreacher establishes that they work alongside Mutualaidfundraiser to make sure these programs have the people needed to make them successful
* Mutualaidoutreacher says having a warchest is great, but people make the work worth doing
* Mutualaidoutreacher establishes they don't need the Player to go out of their way, but if they find people that would be uniquely able to either contribute or benefit from these causes, to please let them know about what Mutualaidoutreacher is working on
Quest starts.

### Interact with Mutualaidoutreacher and Quest Active
If the Player only has one subquest completed, Mutualaidoutreacher will immediately start talking about that specific cause. Otherwise:
* Mutualaidoutreacher greets Player and asks which of the following cause they wanted to talk about.
Run `GenerateOutreachMenu`.

### Player Selects Food Security And Restaurant Expansion Cutscene Not Complete
* Mutualaidoutreacher wishes Resido had a better concerted effort around getting food to hungry people
* Mutualaidoutreacher says its insane that Needles can exist while regular people a few blocks away go hungry

### Player Selects Food Security And Restaurant Expansion Cutscene Complete
* Mutualaidoutreacher says they saw Belén around Caphe City more than usual
* Mutualaidoutreacher wonders if Belén is planning to open another restaurant that people won't be able to afford there

### Player Selects Food Security And Restaurant Expansion Is Started But Restaurant Expansion 2 Is Not Complete
* Mutualaidoutreacher heard a rumor that Belén is starting a restaurant in Caphe City that anybody will be able to afford to eat it
* Mutualaidoutreacher is reserving judgement until its open

### Player Selects Food Security And Restaurant Expansion 2 Is Complete
* Mutualaidoutreacher has heard amazing things about Belén's new restaurant
* Mutualaidoutreacher would love to work with Flowers to get food to even more people
* Mutualaidoutreacher hopes the Mutual Aid Fund could be used to help feed even more people
* Mutualaidoutreacher asks the Player to help make that connection

### Player Selects Food Security And `SUB_QUEST_1` is Complete
* Mutualaidoutreacher says Restaurantexpansionchef was super excited to collaborate
* Mutualaidoutreacher is so happy that these funds are actually going to directly help people
* Mutualaidoutreacher says there's sometimes a lag between organizing an effort and people benefitting, so it's awesome to see this is not the case here

### Player Selects Healthcare And The Boy Who Cries With Wolves Is Incomplete
* Mutualaidoutreacher says in a perfect world, there would be a doctor who works at in this building and is able to set up shop and see people that don't have regular access to care
* Mutualaidoutreacher understands how difficult that would be - they don't have enough to really pay a doctor what they're worth
* Mutualaidoutreacher goes on to say that a doctor taking on EXTRA work likely won't work either, because most doctor already have an overwhelming caseload
* Mutualaidoutreacher heard a rumor of a doctor near Lake Wajabi that didn't work out of a hospital but wasn't sure how to verify that

### Player Selects Healthcare And The Boy Who Cries With Wolves Is Active or Reward
* Mutualaidoutreacher heard a rumor of a doctor near Lake Wajabi that didn't work out of a hospital but wasn't sure how to verify that

### Player Selects Healthcare And The Boy Who Cries With Wolves Is Complete
* Mutualaidoutreacher heard a rumor of a doctor near Lake Wajabi that didn't work out of a hospital but wasn't sure how to verify that
* Player confirms that they've met Boycrieswolvesdoctor and they are actually a doctor without a job
* Mutualaidoutreacher asks if they would be willing to come here and perhaps they can work something out

### Player Selects Healthcare And Relevant Outreach Subquest is Complete
* Mutualaidoutreacher cannot believe their luck
* Mutualaidoutreacher says Boycrieswolvesdoctor has been absolutely amazing and helpful
* Mutualaidoutreacher was happy to help get Boycrieswolvesdoctor off the streets too

### Player Selects Social Housing And Stadium Not Built
* Mutualaidoutreacher says this is one of the causes they're most passionate about
* Mutualaidoutreacher thinks the first test will have the most success with an existing community of unhoused people
* Mutualaidoutreacher says finding one that trusts people like Mutualaidoutreacher is easier said than done

### Player Selects Social Housing And Neighborhood Clean Up 3 Is Not Incomplete
* Mutualaidoutreacher has heard about Sharprise being cruel to unhoused communities around the Sharprise Arena and its surrounding towns
* Mutualaidoutreacher is annoyed that looking good for tourists is more important than actually helping people

### Player Selects Social Housing And Neighborhood Clean Up 3 Is Complete
* Mutualaidoutreacher is happy to hear that the unhoused near Sharprise Arena aren't being harassed anymore but is sad they've scattered across Resido
* Mutualaidoutreacher thinks that this cohort of people would be perfect for their social housing initative, but finding all of them will be a challenge

### Player Selects Social Housing And Any Relevant Outreach Subquest is Complete
* Mutualaidoutreacher is excited to hear they were able to find people that are interested in building a social housing community
* Mutualaidoutreacher thanks Player for referring them, hopes the Player can find the others too

### Player Selects Social Housing And All Relevant Outreach Subquest is Complete
* Mutualaidoutreacher is so excited that they can directly get people off the streets with the work that they and Player are doing
* Mutualaidoutreacher hopes this can be a model for other programs designed to help unhoused people

### Player Selects Criminal Reform And Find The Guilty Is Incomplete
* Mutualaidoutreacher says this initative is the most unique because its primarily educational
* Mutualaidoutreacher wants to find a group that is already praticing restorative justice in their circles and use the funds to help educate and amplify that messagee
* Heard a story about a member of the The Tide that got locked up for stealing from a club, and wishes the club had tried to practice this instead

### Player Selects Criminal Reform And Find The Guilty Is Active or Reward
* Mutualaidoutreacher saw online that the thief from The Tide had been framed for the crime
* Player confirms and says they're currently looking to find the real prepetrator
* Mutualaidoutreacher that this is exactly what they're talking about - the people have no incentive to actually help heal, so long as somebody is put away

### Player Selects Criminal Reform And Find The Guilty Is Complete
* Mutualaidoutreacher mentions that the hiking club seemed to be trying this out - their thief wasn't arrested but rather, is doing community service
* Mutualaidoutreacher wonders if they could talk to them or somebody from the club

### Player Selects Criminal Reform And Relevant Outreach Subquest is Complete
* Mutualaidoutreacher says it means a lot that FindtheguiltyplantH was so invested in giving other people a chance after they had been given a chance
* Mutualaidoutreacher thinks the words will mean even more in this way

### Player Selects Legal Defense And Building Scope Is Incomplete or Active or Reward
* Mutualaidoutreacher says there are so many people in the region that are being abused by bad bosses or landlords who can't stick up for themselves
* Mutualaidoutreacher says it can't be hard to find somebody that needs legal representation that would not otherwise be able to afford or nagivate it

### Player Selects Legal Defense And Building Scope Is Complete
* Mutualaidoutreacher says there are so many people in the region that are being abused by bad bosses or landlords who can't stick up for themselves
* Mutualaidoutreacher has heard rumors of that landlord going after people at a house in Petarosa Borough but wasn't able to confirm
* Mutualaidoutreacher wonders if they landed on their feet

### Player Selects Legal Defense And Relevant Outreach Subquest is Complete
* Mutualaidoutreacher is horrified to hear BuildingscopepersonC and BuildingscopepersonB's story
* Mutualaidoutreacher thinks its great that the Player remembered them and was able to make it right
* Mutualaidoutreacher says a lot of lawyers have expressed interest in going after the landlord and was happy to be able to connect them

### Interact with Mutualaidoutreacher and Quest Reward And Bag Does Not Have Space
* Mutualaidoutreacher notes that they're doing amazing work here
* Mutualaidoutreacher notices the Player's bag is full, tells Player to make some room and come back

### Interact with Mutualaidoutreacher and Quest Reward And Bag Has Space
* Mutualaidoutreacher is so excited to see that this project is really getting off the ground
* Mutualaidoutreacher hopes they can continue to grow and nuture Mutual Aid in Resido - the more people we can help, the better life gets for everybody
* Mutualaidoutreacher recognizes that Player has been instrumental in making all of this come together 
* Mutualaidoutreacher has something for Player as a thanks
Player recieves `ITEM_CATCHING_CHARM`.

### Interact with Mutualaidoutreacher and Quest Complete
* Mutualaidoutreacher says they're really happy, but they're not really the crying type, unlike Mutualaidfundraiser

### Interact with Boycrieswolvesdoctor
* Boycrieswolvesdoctor is excited to finally be working again and helping people
* Boycrieswolvesdoctor says they're eternally grateful to Player

### Interact with CleanuppersonB And Not All Relevant Outreach Subquests is Complete
* CleanuppersonB says it feels strange to be finally making progress towards getting off the streets, and hopes the others also get this break

### Interact with CleanuppersonB And All Relevant Outreach Subquest is Complete
* CleanuppersonB is excited to finally start rebuilding their live again
* CleanuppersonB is tired of just surviving

### Interact with CleanuppersonC And Not All Relevant Outreach Subquests is Complete
* CleanuppersonC says getting back into a routine is already making a difference
* CleanuppersonC hopes the others are afforded the same luxury and soon

### Interact with CleanuppersonC And All Relevant Outreach Subquest is Complete
* CleanuppersonC is excited to be contributing to something real that is theirs and not for somebody else
* CleanuppersonC feels even more validated to be with people

### Interact with CleanuppersonD And Not All Relevant Outreach Subquests is Complete
* CleanuppersonD feels really great
* CleanuppersonD recognizes that after watching after others for so long, it feels amazing for the world to be looking out for them
* CleanuppersonD can't stop thinking about the others from around Sharprise Arena and hopefully they'll be able to get into the social housing program too

### Interact with CleanuppersonD And All Relevant Outreach Subquest is Complete
* CleanuppersonD feels like they've found their purpose again
* CleanuppersonD says its amazing to not be invisible anymore
* CleanuppersonD wants to know how to figure out how to help even more people

### Interact with CleanuppersonE And Not All Relevant Outreach Subquests is Complete
* CleanuppersonE is reserving celebration unless the others from Sharprise are found too
* CleanuppersonE recognizes that they've been thought a lot and they're just tired now

### Interact with CleanuppersonE And All Relevant Outreach Subquest is Complete
* CleanuppersonE says that getting off the street is hopefully the first step to getting back into the classroom
* CleanuppersonE misses teaching

### Interact with FindtheguiltyplantH
* FindtheguiltyplantH isn't going to squander this second chance
* FindtheguiltyplantH wants to teach other communities to show the same understanding to those who do harm as the hiking club showed to him
* FindtheguiltyplantH hasn't talked to FreetheinnocentcomradeA since the incident began...

### Interact with BuildingscopepersonC
* BuildingscopepersonC thank Player for the referral
* BuildingscopepersonC is hopeful to see if their old landlord gets justice
* BuildingscopepersonC is sick of being pushed around by people with means

### Interact with BuildingscopepersonB
* BuildingscopepersonB has slowly forgiven Player and understand they were being manipulated
* BuildingscopepersonB knows they'll be okay and is more angry for the people that haven't had this oppurtunity in the past

## `MAP_CAPHE_CITY_PANTRY`
### Interact with Restaurantexpansionchef and Quest Active And Subquest Not Complete
`SUB_QUEST_1` complete.
`FLAG_TEMP_A` is set.
* Player asks if Flowers is still runninng entirely off Needles' profit margins
* Restaurantexpansionchef confirms and says they're happy for the work they're able to do, but wishes there was a way to do even more
* Player mentions they've been working with a Mutual Aid fund
Screen fades to black.
Screen fades from black.
* Restaurantexpansionchef is in disbelief
* Restaurantexpansionchef says they'll give a call once the lunch rush is done but thinks this is an amazing oppurtunity

### Interact with Restaurantexpansionchef and Quest Active And Subquest Complete And `FLAG_TEMP_A` is set
* Restaurantexpansionchef is in disbelief
* Restaurantexpansionchef says they'll give a call once the lunch rush is done but thinks this is an amazing oppurtunity

### Interact with Restaurantexpansionchef and Quest Active And Subquest Complete And `FLAG_TEMP_A` is not set
* Restaurantexpansionchef claims they were able to talk to Belén, Mutualaidoutreacher and Mutualaidfundraiser and are super excited
* Restaurantexpansionchef says Needles will continue to fund payroll and logistics, but the Mutual Aid funds will go towards getting more food and being able to feed more people

## `MAP_LAKE_WAJABI`
### Interact with Boycrieswolvesdoctor and Quest Active
`SUB_QUEST_2` complete.
* Player asks to confirm that Boycrieswolvesdoctor is a doctor
* Boycrieswolvesdoctor confirms and still got the magic touch
* Player mentions they've been working with a Mutual Aid fund
Screen fades to black.
Screen fades from black.
* Boycrieswolvesdoctor is excited and says that this sounds absolutely perfect
* Boycrieswolvesdoctor claims they've been helping some other unhoused people as they came across them, but something more established means that they can help even more people
* Boycrieswolvesdoctor is super grateful and wants to head over to Mermereza right now
Screen fades to black.
Boycrieswolvesdoctor is removed from the map.
Screen fades from black.

## `MAP_ROUTE_1`
### Interact with CleanuppersonB and Quest Active
`SUB_QUEST_3` complete.
* Player greets CleanuppersonB 
* CleanuppersonB remembers Player
* Player says they have some good news
Screen fades to black.
Screen fades from black.
* CleanuppersonB is shocked
* CleanuppersonB says its hard to take such good news after their life is flipped upside down
Screen fades to black.
CleanuppersonB is removed from the map.
Screen fades from black.

## `MAP_HODOU_CITY`
### Interact with CleanuppersonC and Quest Active
`SUB_QUEST_4` complete.
* Player greets CleanuppersonC
* CleanuppersonC remembers Player
* Player says they have some good news
Screen fades to black.
Screen fades from black.
* CleanuppersonC says it sounds like a dream
* CleanuppersonC says they've felt invisible for so long, it'll feel good to belond somewhere
Screen fades to black.
CleanuppersonC is removed from the map.
Screen fades from black.

## `MAP_ROUTE_E`
### Interact with CleanuppersonD and Quest Active
`SUB_QUEST_5` complete.
* Player greets CleanuppersonD
* CleanuppersonD remembers Player
* Player says they have some good news
Screen fades to black.
Screen fades from black.
* CleanuppersonD claims it feels amazing to finally feel like thre world cares about them again
* CleanuppersonD missses her mom on bad days, but even more on good days like this
Screen fades to black.
CleanuppersonD is removed from the map.
Screen fades from black.

## `MAP_ROUTE_98`
### Interact with CleanuppersonE and Quest Active
`SUB_QUEST_6` complete.
* Player greets CleanuppersonE
* CleanuppersonE remembers Player
* Player says they have some good news
Screen fades to black.
Screen fades from black.
* CleanuppersonE hasn't learned about anything like this
* CleanuppersonE is happy to learn though and won't fight against something that could help get them off the street
* CleanuppersonE thanks Player
Screen fades to black.
CleanuppersonE is removed from the map.
Screen fades from black.

## `MAP_TORGEOT_CLIMB`
### Interact with FindtheguiltyplantH and Quest Active
`SUB_QUEST_7` complete.
* FindtheguiltyplantH is surprised / scared to see the player  
* FindtheguiltyplantH says they were banned from the running club until they did a 1000 hours of service by picking up trash on Torgeot CLimb
* FindtheguiltyplantH is thankful that the hiking club didn't move to have them arrested
* FindtheguiltyplantH was impressed by the system they had in place to handle people who had caused harm
* FindtheguiltyplantH is genuinely sorry and hopes there were more situations where people who have a way to make things right instead of being thrown in jail
* Player asks if FindtheguiltyplantH would be interrested is talking about the experience of NOT being sent to jail
Screen fades to black.
Screen fades from black.
* FindtheguiltyplantH is very interested and wonders how big something like this can get
* FindtheguiltyplantH hadn't even considered this reality until they were exposed to it, and wants to do the same for other communities now
Screen fades to black.
FindtheguiltyplantH is removed from the map.
Screen fades from black.

## `MAP_ROUTE_4`
### Interact with BuildingscopepersonC or BuildingscopepersonB and Quest Active And Battle Complete
`SUB_QUEST_8` complete.
BuildingscopepersonB faces Player.
BuildingscopepersonC faces Player.
* Player says the people in Mermereza City are working on a Legal Defemnse Fund to help people who need advanced legal representation to get the help they need
* Player thinks BuildingscopepersonC and BuildingscopepersonB are the perfect people to participate in such a program
BuildingscopepersonB turns to BuildingscopepersonC
BuildingscopepersonC turns to BuildingscopepersonB
* BuildingscopepersonC hopes this can be the start to getting the justice they want
* BuildingscopepersonB says it can't hurt to go check it out
BuildingscopepersonB walks three metatiles away from Player.
BuildingscopepersonC walks three metatiles away from Player.
Screen fades to black.
BuildingscopepersonC is removed from the map.
BuildingscopepersonB is removed from the map.
Screen fades from black.

## `MAP_SHARPRISESPIRE_SERVER_ROOM`

### Interact with Mutualaidoutreacher
* Mutualaidoutreacher hopes they were helpful to the Player clearing out the floor for the Player
* Mutualaidoutreacher exclaims that some nerds aren't going to stop the people of Resido

### Interact with Mutualaidfundraiser
* Mutualaidfundraiser laughs that they have friends over at The Tide who let details of The Raid slip
* Mutualaidfundraiser said they couldn't resist trying to help out at the very least

### Interact with Boycrieswolvesdoctor
Player's Gold Potion is refilled.
Boycrieswolvesdoctor gestures towards Player.
* Boycrieswolvesdoctor tells Player that they've topped up their Gold Potion
* Boycrieswolvesdoctor tells Player to come back if they need more help
* Boycrieswolvesdoctor wishes the Player luck

### Interact with CleanuppersonB
* CleanuppersonB says it feels cathartic to finally take the fight to one of the big tech companies of having been a part of them for so long
* CleanuppersonB realizes the fight isn't against the people who work there, but rather, the systems they represent
 
### Interact with CleanuppersonC
* CleanuppersonC compliments The Tide on the operation they're running here
* CleanuppersonC says its not up to the muster of the combat he's seen but for a ragtag group of Trainers trying to do some good... it's all right

### Interact with CleanuppersonD
* CleanuppersonD hopes their mother would be proud of them and how they're fighting back
* CleanuppersonD says it feels great to have a purpose today

### Interact with CleanuppersonE
* CleanuppersonE loves the energy of the Raid
* CleanuppersonE is happy to be a part of something good and thinks this is the start of something real

### Interact with FindtheguiltyplantH
* FindtheguiltyplantH says they're pretty sure it was Sharprise that put them up to the task of robbing the hiking club in the first place
* FindtheguiltyplantH claims bringing the fight back to them was a full circle moment

### Interact with BuildingscopepersonC
* BuildingscopepersonC says sometimes lawyers won't do you have to scrap
* BuildingscopepersonC encourages Player to take them down

### Interact with BuildingscopepersonB
* BuildingscopepersonB was appaled to hear Sharprise's transgressions
* BuildingscopepersonB says makes them wonder how money will just blind people

# Summary & Notes
Player talks to Mutualaidoutreacher who tells them that they need to find people who can take these funds and make the Mutual Aid iniatives come to life.  Those initatives are Food Security, Healthcare, Social Housing, Criminial Reform, and Legal Defense.

This requires the Player to finish the following quests: The Boy Who Cries With Wolves, Restaurant Expansion 2, Neighborhood Clean Up 3, Find the Guilty, and Building Scope. Upon finishing those quests, the Player will need to talk to Boycrieswolvesdoctor, Restaurantexpansionchef, CleanuppersonB, CleanuppersonC, CleanuppersonD, CleanuppersonE, FindtheguiltyplantH, and BuildingscopepersonC / BuildingscopepersonB. Once they've all been recruited into the various causes, the quest will be complete.

---

The player is able to access after finishing a sub quest in "[Mutual Aid Fund](https://airtable.com/appJxoYhsNja2FfjK/tblzTEiSlQuwPFXec/viwaJSwgDyFgyNA5G/recSV7nFEnTcT5C9w?blocks=hide)
