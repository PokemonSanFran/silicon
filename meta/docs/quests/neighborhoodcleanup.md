* [Airtable](https//airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recEP8XLG8yZKQSFq?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### First Quest Inactive

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_NEIGHBORHOODCLEANUP1)` \== `TRUE`

### First Quest Reward

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_NEIGHBORHOODCLEANUP1)` \== `TRUE`

### First Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_NEIGHBORHOODCLEANUP1)` \== `TRUE`

### Second Quest Inactive

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_NEIGHBORHOODCLEANUP2)` \== `TRUE`

### Second Quest Reward

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_NEIGHBORHOODCLEANUP2)` \== `TRUE`

### Second Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_NEIGHBORHOODCLEANUP2)` \== `TRUE`

### Third Quest Inactive

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_NEIGHBORHOODCLEANUP3)` \== `TRUE`

### Third Quest Reward

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_NEIGHBORHOODCLEANUP3)` \== `TRUE`

### Third Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_NEIGHBORHOODCLEANUP3)` \== `TRUE`

### Stadium Built

`VAR_STORYLINE_STATE` \>= `STORY_CHAMPIONSHIP_EXPLAINED`

### Shelter Built

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_TEMPORARYSHELTER)` \== `TRUE`

### Mutual Aid Outreach Started

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_MUTUALAIDOUTREACH)` \!= `FALSE`

# Functions

## CountFirstSubquestsReward
If all subquests for the quest are complete, Quest is Reward.

# Involved Instances

## CleanuppoliceA

### [`MAP_ROUTE_2`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recNLHFOZmVZMsOG6?blocks=hide)

CleanuppoliceA is facing south, standing near the Arena entrance.
CleanuppoliceA is only visible when:
* First Quest is NOT Complete AND
* Stadium Built

### [`MAP_CURENO_PORT`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recyJZZB7U6wueBQO?blocks=hide)

CleanuppoliceA is facing west, standing near the Pokémon Center.
CleanuppoliceA is only visible when First Quest is Complete AND Second Quest is NOT Complete.

### [`MAP_GLAVEZ_HILL`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recMdgGlW1upeA7U7?blocks=hide)

CleanuppoliceA is facing north, standing near the entrance to Glavez Hill Peak.
CleanuppoliceA is only visible when Second Quest is Complete AND Third Quest is NOT Complete.

## CleanuppersonB

### [`MAP_ROUTE_2`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recLOxrWvWGH1LgDD?blocks=hide)

CleanuppersonB is walking in a random direction.
CleanuppersonB is only visible when:
* Stadium Built AND
* Subquest 1 for First Quest is NOT Complete

### [`MAP_CURENO_PORT`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/rec3rCDZXJxE4zVla?blocks=hide)

CleanuppersonB is walking in a random direction.
CleanuppersonB is only visible when:
* First Quest is Complete AND 
* Second Quest is NOT Complete AND
* Subquest 2 for First Quest is NOT Complete

### [`MAP_GLAVEZ_HILL`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/rectT9mLAmDsLco10?blocks=hide)

CleanuppersonB is walking in a random direction.
CleanuppersonB is only visible when:
* Second Quest is Complete AND 
* Third Quest is NOT Complete AND
* Subquest 3 for Second Quest is NOT Complete

### [`MAP_ROUTE_1`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/rec1PZnN2mHOYUo7g?blocks=hide)

CleanuppersonB is walking in a random direction.
CleanuppersonB is only visible when:
* Third Quest is Complete AND 
* Subquest 3 for Mutual Aid Outreach is NOT Complete

## CleanuppersonC

### [`MAP_ROUTE_2`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recDw1rfGZQH8K6aQ?blocks=hide)

CleanuppersonC is walking in a random direction.
CleanuppersonC is only visible when:
* Stadium Built AND
* Subquest 1 for First Quest is NOT Complete

### [`MAP_CURENO_PORT`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recpkSek8CPfroRvw?blocks=hide)

CleanuppersonC is walking in a random direction.
CleanuppersonC is only visible when:
* First Quest is Complete AND 
* Second Quest is NOT Complete AND
* Subquest 2 for First Quest is NOT Complete

### [`MAP_GLAVEZ_HILL`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recX39gkcPoE7vFOj?blocks=hide)

CleanuppersonC is walking in a random direction.
CleanuppersonC is only visible when:
* Second Quest is Complete AND 
* Third Quest is NOT Complete AND
* Subquest 3 for Second Quest is NOT Complete

### [`MAP_HODOU_CITY`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/rec43oWqgap6LSpmE?blocks=hide)

CleanuppersonC is walking in a random direction.
CleanuppersonC is only visible when:
* Third Quest is Complete AND 
* Subquest 4 for Mutual Aid Outreach is NOT Complete

## CleanuppersonD

### [`MAP_ROUTE_2`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recseKevJNIX9F9gA?blocks=hide)

CleanuppersonD is walking in a random direction.
CleanuppersonD is only visible when:
* Stadium Built AND
* Subquest 1 for First Quest is NOT Complete

### [`MAP_CURENO_PORT`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/reccuEQFxewBmu1hv?blocks=hide)

CleanuppersonD is walking in a random direction.
CleanuppersonD is only visible when:
* First Quest is Complete AND 
* Second Quest is NOT Complete AND
* Subquest 2 for First Quest is NOT Complete

### [`MAP_GLAVEZ_HILL`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recjHetayb0CioES5?blocks=hide)

CleanuppersonD is walking in a random direction.
CleanuppersonD is only visible when:
* Second Quest is Complete AND 
* Third Quest is NOT Complete AND
* Subquest 3 for Second Quest is NOT Complete

### [`MAP_ROUTE_E`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/rec3SnZhvp70pYbgi?blocks=hide)

CleanuppersonD is walking in a random direction.
CleanuppersonD is only visible when:
* Third Quest is Complete AND 
* Subquest 5 for Mutual Aid Outreach is NOT Complete

## CleanuppersonE

### [`MAP_ROUTE_2`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recW6eSFb2D8bZXuM?blocks=hide)

CleanuppersonE is walking in a random direction.
CleanuppersonE is only visible when:
* Stadium Built AND
* Subquest 1 for First Quest is NOT Complete

### [`MAP_CURENO_PORT`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recpQ2OMmjvznzUOC?blocks=hide)

CleanuppersonE is walking in a random direction.
CleanuppersonE is only visible when:
* First Quest is Complete AND 
* Second Quest is NOT Complete AND
* Subquest 2 for First Quest is NOT Complete

### [`MAP_GLAVEZ_HILL`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwpK02MHtYMg1Wgt/recyL46HK6yViyXid?blocks=hide)

CleanuppersonE is walking in a random direction.
CleanuppersonE is only visible when:
* Second Quest is Complete AND 
* Third Quest is NOT Complete AND
* Subquest 3 for Second Quest is NOT Complete

### [`MAP_ROUTE_98`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwuCeiqm8iguvZqV/recRkymSMiYCHw6JD?blocks=hide)

CleanuppersonE is walking in a random direction.
CleanuppersonE is only visible when:
* Third Quest is Complete AND 
* Subquest 6 for Mutual Aid Outreach is NOT Complete

# Scenes

## `QUEST_MENU`

### First Quest is Active

* Help CleanuppoliceA get the troublemakers away from the Arena

### First Quest is Complete

* You and CleanuppoliceA helped make the Sharprise Arena more attractive to tourists

### Second Quest is Active

* Encourage the unhoused people from the Arena to leave Cureno Port

### Second Quest is Complete

* The group of unhoused people from the Arena have moved on from Cureno Port
Quest Menu test

### Third Quest is Active

* Clean up the community of Glavez Hill by removing the unhoused populaition

### Third Quest is Complete

* The unhoused people have been pushed out of Glavez Hill

## `BUZZR`

### Stadium Built
* Random complains that going to the Arena isn't fun because the homeless people ruin the view
* Random complains that they got asked for money around the arena and don't want to have to deal with that

### First Quest Complete
* Random brought their family to the Arena was happy to see the area cleaned up
* Tide Member congrats the police on finally pushing unhoused people away from their new pride and joy
* Arriba employee complains that they're seeing more unhoused people from out of town and wonder why
* Random notices that the unhoused encampment near the Arena has been totally displaced

### Second Quest Complete
* Random thanks the police for protecting Cureno Port from an invasion

## `MAP_ROUTE_2`

### Interact with CleanuppoliceA and First Quest Inactive

* CleanuppoliceA says they're working security for the Arena
* One of their jobs is to make sure the area is welcoming to tourists and visitors
* CleanuppoliceA claims there have been complaints of troublemakers and vagrants around the stadium making people uncomfortable and hurting the vibes
* CleanuppoliceA asks if Player can help make them go away
Quest starts.
* CleanuppoliceA thinks talking to them should be enough but some of them might require a battle
CleanuppoliceA gestures towards Player.
* CleanuppoliceA tells Player they can see the suspected list of people in their Todo List

### Interact with CleanuppoliceA and First Quest Active

* CleanuppoliceA wishes these troublemakers didn't have to ruin it for everybody
* CleanuppoliceA thinks talking to them should be enough but some of them might require a battle
* CleanuppoliceA tells Player they can see the suspected list of people in their Todo List

### Interact with CleanuppoliceA and First Quest Reward and Bag Does Not Have Space

* CleanuppoliceA notices that all the people they were after are gone
* Tells the Player to come back with space in their bag

### Interact with CleanuppoliceA and First Quest Reward

* CleanuppoliceA notices that all the people they were after are gone
* CleanuppoliceA remarks that the atmosphere feels way better
CleanuppoliceA gestures to Player.
Player recieves `ITEM_POTION`.
Quest complete.
If Player is in the True Timeline:
    * Player remarks these people didn't seem to be hurting anybody but if anything they are just unhoused and not being bothersome
    * CleanuppoliceA cuts the Player off says they're just doing their job 
* CleanuppoliceA mutters about having to clean up the surrouding areas too
CleanuppoliceA walks three steps south.
Screen fades to black.
CleanuppoliceA is removed from the map.
Screen fades from black.

### Interact with CleanuppersonB and First Quest Inactive

* CleanuppersonB talks about how big and successful tech companies like Presto can be
* Thinks its a shame that the people who build those companies are not always as fortunate when there is a downturn

### Interact with CleanuppersonB and First Quest Active

* Player says they were sent by the officer patrolling and say that CleanuppersonB needs to loiter elsewhere
* CleanuppersonB says they're not just standing around - they're looking for a new job on the stadium's Wifi
* CleanuppersonB asks if they can stay if they can beat Player

Player battles CleanuppersonB.

### CleanuppersonB defeats Player

* CleanuppersonB wonders if they won because the player made a bad call

### CleanuppersonB is defeated

* CleanuppersonB realizes that this loss is because of a bad call

### After Defeating CleanuppersonB

First `SUB_QUEST_1` complete.
Run CountFirstSubquestsReward.
* CleanuppersonB admits that they figured if they won, the Player would just go away, but the Player is tough
* CleanuppersonB wishes they didn't have to be here at all - they just want to be working again

CleanuppersonB walks three steps north.
Screen fades to black.
CleanuppersonB is removed from the map.
Screen fades from black.

### Interact with CleanuppersonC and First Quest Inactive

* CleanuppersonC misses the camraderie of the armed forces despite the PTSD
* CleanuppersonC ended up on the street because they couldn't find work that could accomodate the mental illness

### Interact with CleanuppersonC and First Quest Active

* Player says they were sent by the officer patrolling and say that CleanuppersonB needs to loiter elsewhere
* CleanuppersonC laughs to himself and explains that he felt like being around the stadium gave him a sense of routine 
* CleanuppersonC says they'll go but ask if their Pokémon can get some exercise too

Player battles CleanuppersonC.

### CleanuppersonC defeats Player

* CleanuppersonC is back in the fighting spirit

### CleanuppersonC is defeated

* CleanuppersonC says it felt good to get a workout in

### After Defeating CleanuppersonC

First `SUB_QUEST_2` complete.
Run CountFirstSubquestsReward.

* CleanuppersonC says they'll go, they don't want any trouble
* CleanuppersonC isn't mad about their PTSD, but mad that the system let somebody who was willing to die for it would leave him on the streets when he got sick 

CleanuppersonC walks three steps north.
Screen fades to black.
CleanuppersonC is removed from the map.
Screen fades from black.

### Interact with CleanuppersonD and First Quest Inactive

* CleanuppersonD used to come here with her mother when she was little, long before the constrcution started and long before they were unhoused
* CleanuppersonD says there was nothing here, but it was nice to by the oceand and look out at Halai Island

### Interact with CleanuppersonD and First Quest Active

* Player says they were sent by the officer patrolling and say that CleanuppersonD needs to loiter elsewhere
* CleanuppersonD just wanted to look at the ocean like she did with her mom, isn't causing any trouble 
* CleanuppersonD asks Player would battle them and keep them company for a bit

Player battles CleanuppersonD.

### CleanuppersonD defeats Player

* CleanuppersonD is surprised but happy

### CleanuppersonD is defeated

* CleanuppersonD at least appreciates the company

### After Defeating CleanuppersonD

First `SUB_QUEST_3` complete.
Run CountFirstSubquestsReward.
* CleanuppersonD says they'll get away from the Arena,but wishes people understood how lonely and isolating it feels to be unhoused
* CleanuppersonD has spent most of their life caring for somebody and putting love into the world and they feel like they're not getting any of it back

CleanuppersonD walks three steps north.
Screen fades to black.
CleanuppersonD is removed from the map.
Screen fades from black.

### Interact with CleanuppersonE and First Quest Inactive

* CleanuppersonE says the crowds around the Arena make them feel connected to people
* CleanuppersonE loves watching families get excited to watch battles

### Interact with CleanuppersonE and First Quest Active

* Player says they were sent by the officer patrolling and say that CleanuppersonE needs to loiter elsewhere
* CleanuppersonE says its strange to be treated like a kid tresspassing - they're just trying to survive with nowhere to go
* CleanuppersonE asks if they can stay if they win
Player battles CleanuppersonE.

### CleanuppersonE defeats Player

* CleanuppersonE says Player failed the test

### CleanuppersonE is defeated

* CleanuppersonE says Player gets full marks

### After Defeating CleanuppersonE

First `SUB_QUEST_4` complete.
Run CountFirstSubquestsReward.

* CleanuppersonE says they'll go, don't worry about them
* CleanuppersonE is annoyed and hates the total lack of respect and regard from society
* CleanuppersonE thanks Player for being respectful and giving them a chance to prove that they're smarter than they seem

CleanuppersonE walks three steps north.
Screen fades to black.
CleanuppersonE is removed from the map.
Screen fades from black.

## `MAP_CURENO_PORT`

### Interact with CleanuppoliceA and Second Quest Inactive and Timeline True

* CleanuppoliceA recognizes the Player from the Arena
* Player recognizes CleanuppoliceA as the person trying to shuffle around unhoused people - asks don't they have somebody else to harass
* CleanuppoliceA claims they're just doing their job and people have to follow the rules
* CleanuppoliceA says if the Player doesn't want to help, then get out of the way

### Interact with CleanuppoliceA and Second Quest Inactive and Timeline Not True

* CleanuppoliceA recognizes the Player from the Arena
* CleanuppoliceA says the same troublemakers have all moved from outside the Arena to Cureno Port, and some of the citizens started to complain
* CleanuppoliceA asks if Player can help again, same routine as last time - talk to the troublemakers and round 'em all up
Quest starts.
* CleanuppoliceA thinks talking to them should be enough but some of them might require a battle
CleanuppoliceA gestures towards Player.
* CleanuppoliceA tells Player they can see the suspected list of people in their Todo List

### Interact with CleanuppoliceA and Second Quest Active and Timeline True

* CleanuppoliceA asks if the cleanup is going well
* Player says its disguisting to use cleanup to talk about people - those are people being harassed
* CleanuppoliceA claims they're just doing their job and people have to follow the rules
* CleanuppoliceA says if the Player doesn't want to help, then get out of the way

### Interact with CleanuppoliceA and Second Quest Active and Timeline Not True

* CleanuppoliceA wishes these people would just go away, it would make their job so much easier

### Interact with CleanuppoliceA and Second Quest Reward

* CleanuppoliceA notices all of the hoodlums must be gone, thanks Player again
CleanuppoliceA gestures to Player.
Player recieves `ITEM_POTION`.
Quest complete.
If Player is in the True Timeline:
    * Player asks why the Arena is spending so much effort to make the lives of the unhoused even more miserable
    * CleanuppoliceA cuts the Player off says they're just doing their job 
* CleanuppoliceA mutters that they better have gotten the hint this time
CleanuppoliceA walks three steps south.
Screen fades to black.
CleanuppoliceA is removed from the map.
Screen fades from black.

### Interact with CleanuppersonB and Second Quest Inactive

* CleanuppersonB recognizes Player from the Arena
* CleanuppersonB laughs and says they sometimes thought being near the Arena would get them closer to being back in the industry

### Interact with CleanuppersonB and Second Quest Active and Timeline True

* CleanuppersonB recognizes Player from the Arena
* Player says they aren't here to make them go anywhere this time
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonB thanks Player
* CleanuppersonB never thought they'd be hiding behind Tide affiliated members - used to living the high life until they got laid off from one of these tech companies and wouldn't give The Tide the time of day previously

### Interact with CleanuppersonB and Second Quest Active and Timeline Not True

* CleanuppersonB recognizes Player from the Arena
* Player says they have bad news unfortunately, Cureno's Port's citizens are complaining
* CleanuppersonB wonders if those citizens would feel the same way if they all suddenly got laid off from Arriba
* CleanuppersonB asks if Player would indulge them and then they'll go
Player battles CleanuppersonB.

### CleanuppersonB defeats Player

* CleanuppersonB feels great for one second

### CleanuppersonB is defeated

* CleanuppersonB says they'll get a move on

### After Defeating CleanuppersonB

Second `SUB_QUEST_1` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonB says talking to somebody helps remind them of their life previously
* CleanuppersonB thinks about how they use to stay up late researching all the latest programming frameworks
* CleanuppersonB feels like a lifetime ago
CleanuppersonB walks three steps north.  
Screen fades to black.  
CleanuppersonB is removed from the map.  
Screen fades from black.

### Interact with CleanuppersonC and Second Quest Inactive

* CleanuppersonC recognizes Player from the Arena
* CleanuppersonC is happy to see somebody that doesn't act like CleanuppersonC is invisible

### Interact with CleanuppersonC and Second Quest Active and Timeline True

* CleanuppersonC recognizes Player from the Arena
* Player says they aren't here to make them go anywhere this time
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonC thanks the Player for the heads up
* CleanuppersonC says most peoplpe think the unhoused are invisible, except the people trying to make the lives of the unhoused worse

### Interact with CleanuppersonC and Second Quest Active and Timeline Not True

* CleanuppersonC recognizes Player from the Arena
* Player says they have bad news unfortunately, Cureno's Port's citizens are complaining
* CleanuppersonC sighs and hates the feeling of this stigma
* CleanuppersonC isn't dangerous, isn't hurting anybody, just wants to exist
* CleanuppersonC says they might as well get some exercise in
Player battles CleanuppersonC.

### CleanuppersonC defeats Player

* CleanuppersonC maybe is more dangerous than they thought

### CleanuppersonC is defeated

* CleanuppersonC had fun at least

### After Defeating CleanuppersonC

Second `SUB_QUEST_2` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonC wonders how much longer they'll have to do this
CleanuppersonC walks three steps north.  
Screen fades to black.  
CleanuppersonC is removed from the map.  
Screen fades from black.

### Interact with CleanuppersonD and Second Quest Inactive

* CleanuppersonD recognizes Player from the Arena
* CleanuppersonD has been wondering if they would be in better spot if they had been more selfish

### Interact with CleanuppersonD and Second Quest Active and Timeline True

* CleanuppersonD recognizes Player from the Arena
* Player says they aren't here to make them go anywhere this time
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonD thanks Player
* CleanuppersonD explains they used to be a full time caretaker for their mother
* CleanuppersonD says its feels so alien to have be in survival mode now, whereas before, they were a provider

### Interact with CleanuppersonD and Second Quest Active and Timeline Not True

Second `SUB_QUEST_3` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonD recognizes Player from the Arena
* Player says they have bad news unfortunately, Cureno's Port's citizens are complaining
* CleanuppersonD says they ended up on the streets because they couldn't afford the bills alone after CleanuppersonD's mother passed
* CleanuppersonD laments that they used to make a real difference in somebody else's life, and now they can't even make a difference in their own
CleanuppersonD walks three steps north.  
Screen fades to black.  
CleanuppersonD is removed from the map.  
Screen fades from black.

### Interact with CleanuppersonE and Second Quest Inactive

* CleanuppersonE recognizes Player from the Arena
* CleanuppersonE sees a lot of potential in Player - hopes they're living up to it instead of it being wasted living on the streets

### Interact with CleanuppersonE and Second Quest Active and Timeline True

* CleanuppersonE recognizes Player from the Arena
* Player says they aren't here to make them go anywhere this time
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonE wonders how many unhoused people they previously disregarded before they joined them
* CleanuppersonE states that everybody here had lives and contributions to the world - being unhoused doesn't make them go away

### Interact with CleanuppersonE and Second Quest Active and Timeline Not True

* CleanuppersonE recognizes Player from the Arena
* CleanuppersonE guesses the Player is there because the Cureno Port citizens want them to go
* Player confirms this is correct
* CleanuppersonE says they're feeling fiesty today
* CleanuppersonE says maybe this time they can beat Player and don't have to go anywhere
Player battles CleanuppersonE.

### CleanuppersonE defeats Player

* CleanuppersonE says that's what potential looks like

### CleanuppersonE is defeated

* CleanuppersonE asks if they can have a do over

### After Defeating CleanuppersonE

Second `SUB_QUEST_4` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonE says the hardest part is being assumed to be stupid or worthless
* CleanuppersonE wonders how many unhoused people they previously disregarded before they joined them
* CleanuppersonE states that everybody here had lives and contributions to the world - being unhoused doesn't make them go away
CleanuppersonE walks three steps north.  
Screen fades to black.  
CleanuppersonE is removed from the map.  
Screen fades from black.

## `MAP_GLAVEZ_HILL`

### Interact with CleanuppoliceA and Third Quest Inactive and Timeline True

* CleanuppoliceA recognizes the Player from Cureno Port and the Arena
* Player recognizes CleanuppoliceA as the person trying to shuffle around unhoused people - asks don't they have somebody else to harass
* CleanuppoliceA claims they're just trying to make the region cleaner and people have to know their place
* CleanuppoliceA says if the Player doesn't want to help, then get out of the way

### Interact with CleanuppoliceA and Third Quest Inactive and Timeline Not True

* CleanuppoliceA recognizes the Player from Cureno Port and the Arena
* CleanuppoliceA followed some of the vagrants from Cureno Port and realized they all just moved to Glavez Hill instead
* CleanuppoliceA is frustrated that these people don't understand that they can't keep invading communities just because they're down on some luck
* CleanuppoliceA knows this far from the Arena, but he cares about the fabric of these communities and wants to help clean thme up too
* CleanuppoliceA believes the vagrants will get the hint after Player talks to them again - they seem to respect a powerful Trainer, and CleanuppoliceA will provide backup
* CleanuppoliceA asks if Player can help again, same routine as last time - talk to the troublemakers and round 'em all up
Quest starts.
cleanuppolicea gestures towards player.
* cleanuppolicea tells player they can see the suspected list of people in their todo list

### Interact with CleanuppoliceA and Third Quest Active and Timeline True

* CleanuppoliceA asks if the Player has finally managed to get rid of the vagrants
* Player has realized that pushing these people around doesn't actually solve any problems and wonders why this effort can't go towards helping them
* CleanuppoliceA claims they're just trying to make the region cleaner and people have to know their place
* CleanuppoliceA says if the Player doesn't want to help, then get out of the way

### Interact with CleanuppoliceA and Third Quest Active and Timeline Not True

* CleanuppoliceA asks if the Player has finally managed to get rid of the vagrants
* CleanuppoliceA hopes that these communities will finally be able to get some peace once they're done

### Interact with CleanuppoliceA and Third Quest Reward

* CleanuppoliceA watched all of them leave Glavez Hill
* CleanuppoliceA says its even better because it looks like they split up
* CleanuppoliceA hopes they all stay in Caphe City where they belong
* CleanuppoliceA thanks the Player for all their help
CleanuppoliceA gestures towards Player.
Player recieves `ITEM_POTION`.
* CleanuppoliceA says thanks for keeping the streets clean
CleanuppoliceA walks three steps south.
Screen fades to black.
CleanuppoliceA is removed from the map.
Screen fades from black.

### Interact with CleanuppersonB and Third Quest Inactive

* CleanuppersonB greets Player
* CleanuppersonB can't help but be jaded, and knows they probabyl won't be here for very long

### Interact with CleanuppersonB and Third Quest Active and Timeline True

* CleanuppersonB greets Player
* Player apologizes for before and realizes now that they shouldn't be shuffling people around
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonB says its the best news they've heard in a while
* CleanuppersonB claims the worst part of being homeless is how unpredictable it all is - not having a stable schedule or knowing where they can sleep is so stressful

### Interact with CleanuppersonB and Third Quest Active and Timeline Not True

Third `SUB_QUEST_1` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonB greets Player
* Player says that CleanuppersonB knows why they're there
* CleanuppersonB gets frustrated and says this ordeal sucks
* CleanuppersonB claims the worst part of being homeless is how unpredictable it all is - not having a stable schedule or knowing where they can sleep is so stressful
CleanuppersonB walks three steps north.  
Screen fades to black.  
CleanuppersonB is removed from the map.  
Screen fades from black.

### Interact with CleanuppersonC and Third Quest Inactive

* CleanuppersonC greets Player
* CleanuppersonC says they're having a particularly lucid day, glad CleanuppersonC can see the better sides of them

### Interact with CleanuppersonC and Third Quest Active and Timeline True

* CleanuppersonC greets Player
* Player apologizes for before and realizes now that they shouldn't be shuffling people around
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonC says the whole thing has been such a cycle that people don't understand
* They got this invisible disease (PTSD) from being a veteran,  became unhoused as a result, and being unhoused and not being able to manage that only makes the illness worse
* Wishes people understood he was just sick

### Interact with CleanuppersonC and Third Quest Active and Timeline Not True

* CleanuppersonC greets Player
* Player says that CleanuppersonB knows why they're there
* CleanuppersonC says they know they know, and laughs that CleanuppoliceA must really have it out for them
* CleanuppersonC says today is a good day, and says they're in the mood for a battle
Player battles CleanuppersonC.

### CleanuppersonC defeats Player

* CleanuppersonC says this lucidity is going a long way

### CleanuppersonC is defeated

* CleanuppersonC is happy they did something fun today

### After Defeating CleanuppersonC

Third `SUB_QUEST_3` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonC appreciates Player letting CleanuppersonC feel normal for a little while during the battle
* CleanuppersonC says the whole thing has been such a cycle that people don't understand
* They got this invisible disease (PTSD) from being a veteran,  became unhoused as a result, and being unhoused and not being able to manage that only makes the illness worse
* Wishes people understood he was just sick
CleanuppersonC walks three steps north.
Screen fades to black.  
CleanuppersonC is removed from the map.  
Screen fades from black.

### Interact with CleanuppersonD and Third Quest Inactive

* CleanuppersonD greets Player
* CleanuppersonD says they're just trying to keep their spirits up today
* CleanuppersonD thinks at least being with their Pokémon feels better

### Interact with CleanuppersonD and Third Quest Active and Timeline True

* CleanuppersonD greets Player
* Player apologizes for before and realizes now that they shouldn't be shuffling people around
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonD says this is the first time they've really felt like they were being cared for since they lost their home
* CleanuppersonD thinks Player's kindness will go a long way

### Interact with CleanuppersonD and Third Quest Active and Timeline Not True

* CleanuppersonD greets Player
* Player says that CleanuppersonD knows why they're there
* CleanuppersonD thinks for a moment and wonders why CleanuppoliceA lacks such critical thinking skills
* CleanuppersonD is spending so much time trying to make the problem go away when they could be trying to make sure people don't end up in these positions at all
* CleanuppersonD wants another battle before they go
Player battles CleanuppersonD.

### CleanuppersonD defeats Player

* CleanuppersonD is happy something went right

### CleanuppersonD is defeated

* CleanuppersonD isn't surprised

### After Defeating CleanuppersonD

Third `SUB_QUEST_4` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonD hopes Player never ends up in a situation like CleanuppersonD
CleanuppersonD walks three steps north.  
Screen fades to black.  
CleanuppersonD is removed from the map.  
Screen fades from black.

### Interact with CleanuppersonE and Third Quest Inactive

* CleanuppersonE greets Player
* CleanuppersonE likes Glavez Hill because its quiet, but has learned not to get used to anywhere in particular

### Interact with CleanuppersonE and Third Quest Active and Timeline True

* CleanuppersonE greets Player
* Player apologizes for before and realizes now that they shouldn't be shuffling people around
* Player warns that CleanuppoliceA is patrolling, but Player isn't going to rat them out
* CleanuppersonE thanks Player
* CleanuppersonE claims they were a teacher at one point, lost their job due to a department restrucing here and bills became too big before they could get another job
* CleanuppersonE loved seeing people understand things in real time
* CleanuppersonE believes that Player is starting to understand the unhoused peoples situation and hopes others can learn in the same way

### Interact with CleanuppersonE and Third Quest Active and Timeline Not True

* CleanuppersonE greets Player
* Player says that CleanuppersonE can't hang Glavez Hill just like the other times
* CleanuppersonE can't understand what the end game is supposed to be
* CleanuppersonE knows they can't stay if they win, and know they can't win, but they feel like at least trying
Player battles CleanuppersonE.

### CleanuppersonE defeats Player

* CleanuppersonE says this is too good to be true

### CleanuppersonE is defeated

* CleanuppersonE has no notes on the Player's performance

### After Defeating CleanuppersonE

Third `SUB_QUEST_4` complete.  
Run CountFirstSubquestsReward.
* CleanuppersonE claims they were a teacher at one point, lost their job due to a department restrucing here and bills became too big before they could get another job
* CleanuppersonE is very used to seeing people understand things in real time
* CleanuppersonE believes that Player is starting to understand the unhoused peoples situation and hopes others can learn in the same way
CleanuppersonE walks three steps north.  
Screen fades to black.  
CleanuppersonE is removed from the map.  
Screen fades from black.

## `MAP_ROUTE_1`

### Interact with CleanuppersonB and Mutual Aid Outreach Not Started

* Player greets CleanuppersonB
* CleanuppersonB remembers Player
* CleanuppersonB remarks that they didn't have to go far from Glavez Hill and thinks they're finally being left alone

## `MAP_HODOU_CITY`

### Interact with CleanuppersonC and Mutual Aid Outreach Not Started

* Player greets CleanuppersonC
* CleanuppersonC remembers Player
* CleanuppersonC says there's so many people here its easy to get lost among the people, and doesn't get singled out as much

## `MAP_ROUTE_E`

### Interact with CleanuppersonD and Mutual Aid Outreach Not Started

* Player greets CleanuppersonD
* CleanuppersonD remembers Player
* CleanuppersonD says this isn't the same ocean as near Sharprise Arena, but maybe they just like being near water after all

## `MAP_ROUTE_98`

### Interact with CleanuppersonE and Mutual Aid Outreach Not Started

* Player greets CleanuppersonE
* CleanuppersonE remembers Player
* CleanuppersonE says being near the University is hard
* CleanuppersonE saw one of their old students and couldn't face them - didn't want the kid to see an authority figure in such a position, but it was good to see the student doing well

# Summary and Notes

## First
CleanuppoliceA works security for Sharprise Arena and has been tasked with cleaning up the area from troublemakers and vagrants. CleanuppoliceA asks the Player to help clear the area. After talking to all the identified troublemakers, it is revealed that all four are just unhoused people, but after a battle and some conversation, all four agree to leave the area. 

If the Player is in the True Timeline, the player will take note of the fact that these are not troublemakers but in fact, just unhoused people and refuse to work with CleanuppoliceA going forward, but either way gets a Reward when all four people are gone.

## Second
CleanuppoliceA works security for Sharprise Arena and has been tasked with cleaning up the area from troublemakers and vagrants. This extends to Cureno Port, which is the town next to the Arena, and a vocal minority of the citizens have made clear their displeasure with the influx of unhoused people. CleanuppoliceA asks the Player to help clear the area. 

In the True Timeline, Player will refuse to work with CleanuppoliceA at all and thinks harassing the unhoused is cruel. 

All of the unhoused people from the last quest recognize the Player, and tell more of their story, but after but after a battle and some conversation, all four agree to leave the area. 

If the Player is in the True Timeline, the player will take note of the fact that these are not troublemakers but in fact, just unhoused people and refuse to work with CleanuppoliceA going forward, but either way gets a Reward when all four people are gone.

## Third
CleanuppoliceA works security for Sharprise Arena and has been tasked with cleaning up the area from troublemakers and vagrants. Officially, this does not extend to Glavez Hill, but CleanuppoliceA wants to stamp out these vagrants once and for all and wants to push them out of this perfectly good town. CleanuppoliceA asks the Player to help clear the area. 

In the True Timeline, Player will refuse to work with CleanuppoliceA at all and thinks harassing the unhoused is cruel. 

All of the unhoused people from the last quest recognize the Player, and tell more of their story, but after but after a battle and some conversation, all four agree to leave the area. 

If the Player is in the True Timeline, the player will take note of the fact that these are not troublemakers but in fact, just unhoused people and refuse to work with CleanuppoliceA going forward, but either way gets a Reward when all four people are gone.
 
---

The player is able to access this quest after finishing "[Why Are You Helping Them?](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/rec1hQfpMQMcgpcqC?blocks=hide)".
