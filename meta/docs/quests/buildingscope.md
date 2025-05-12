* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBLXQWVnc629AmK?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Building Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_BUILDINGSCOPE)` \== `TRUE`

### Building Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_BUILDINGSCOPE)` \== `TRUE`

### Building Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_BUILDINGSCOPE)` \== `TRUE`

### Mutual Aid Started

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_MUTUALAID)` \!= `FALSE`

# Involved Instances

## [BuildingscopeworkerA](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBLXQWVnc629AmK?blocks=hide)

### `MAP_PETAROSA_BOROUGH`

* BuildingscopeworkerA is only visible when Building Quest is not Complete.

## BuildingscopepersonB

### [`MAP_PETAROSA_BOROUGH_SQUATTERS_MANSION`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBLXQWVnc629AmK?blocks=hide)

* BuildingscopeworkerB is facing north, sitting in a chair.
* BuildingscopeworkerB is only visible when Building Quest Active.

### [`MAP_ROUTE_4`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBLXQWVnc629AmK?blocks=hide)

* BuildingscopeworkerB is facing a random direction.
* BuildingscopeworkerB is ONLY visible when:
    * Building Quest complete.
    * Legal Defense Mutual Aid subquest incomplete.

## BuildingscopepersonC

### [`MAP_PETAROSA_BOROUGH_SQUATTERS_MANSION`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBLXQWVnc629AmK?blocks=hide)

* BuildingscopeworkerC is facing north, sitting in a chair.
* BuildingscopeworkerC is only visible when Building Quest Active.

### [`MAP_ROUTE_4`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recBLXQWVnc629AmK?blocks=hide)

* BuildingscopeworkerC is facing a random direction.
* BuildingscopeworkerC is ONLY visible when:
    * Building Quest complete.
    * Legal Defense Mutual Aid subquest incomplete.

# Scenes

## `QUEST_MENU`

### Building Quest is Active

* Need to help clear out the wild Pokémon from the mansion

### Building Quest is Complete

* Cleared out the mansion, but there weren't Pokémon in there

## `BUZZR`

### Quest Reward

* BuildingscopepersonB claiming their home was invaded by their landlord wants to know how to get help

## `MAP_PETAROSA_BOROUGH`

### Interact with Buildingscopeworker and Building Quest Inactive

* Buildingscopeworker says that they work with a housing company and they got assigned to get this mansion back on the market  
* Buildingscopeworker thought it was been uninhabited for years, and has been overrun by Pokémon and other creatues
* Buildingscopeworker isn't a Trainer but thinks the Pokémon hiding in there must be particularly strong
* Buildingscopeworker doesn't want to involve their boss and just wants to quickly handle the problem with making a ton of fuss
* Buildingscopeworker recongizes Player as a Trainer and asks if they would be willing to go in deal with the Pokémon
* Player says they guess they could try  
* Buildingscopeworker thanks them so much, and will make it worth the Player’s while.
Building Quest starts.  
Buildingscopeworker gestures towards Player
Player recieves `ITEM_HOUSE_KEY`.
Buildingscopeworker says with that the player should be able to go inside.
* Buildingscopeworker is suprised that things got this bad  
* Buildingscopeworker tells Player to come talk to them once they clear the Pokémon out

### Interact with Buildingscopeworker and Building Quest Active

* Buildingscopeworker is suprised that things got this bad  
* Buildingscopeworker tells Player to come talk to them once they clear the Pokémon out

### Interact with Buildingscopeworker and Building Quest Reward And Bag Does Not Have Space

* Buildingscopeworker suspects the Player has good news  
* Buildingscopeworker tells Player to make room in their bag 

### Interact with Buildingscopeworker and Building Quest Reward And Bag Has Space

* Buildingscopeworker asks if the Pokémon put up a real fight
* Player says there weren't wild Pokémon living there - people seemed to be living there
* Player explains that they were attacked and won, but the people inside got spooked and left before they could figure out what was going on
* Buildingscopeworker barely reacts but thinks its curious
* Buildingscopeworker claims they'll look into it
* Player starts to ask more questions but is cut off
* Buildingscopeworker asks the Player for the key back before they forget, and they have something for them
Player gestures towards Buildingscopeworker
Player loses `ITEM_HOUSE_KEY`.
Buildingscopeworker gestures to Player.  
Player receives `ITEM_POTION`.
* Buildingscopeworker is excited to get this back on the market without too much fuss
* Buildingscopeworker mumbles about evictions being too much work
If Player is standing west of the Buildingscopeworker, they take a step one metatile south and then face north.  
Buildingscopeworker steps one metatile north and four metatile steps west.  
Screen fades to black.  
Buildingscopeworker is removed from the map.  
Screen fades from black.  
Building Quest complete.

## `MAP_PETAROSA_BOROUGH_SQUATTERS_MANSION`

### Walk Inside and Has Not Battled Before

* BuildingscopepersonB yells out and asks who is there
* BuildingscopepersonC says they'll go see
BuildingscopepersonC takes one metatile step to the right and faces down.
* BuildingscopepersonC shouts that somebody is actually here
BuildingscopepersonB takes one metatile step to the left and runs 5 metatiles south.
* BuildingscopepersonB demands to know how Player got inside
* BuildingscopepersonC says it doesn't matter and says they'll make you leave
// PSF TODO Their battle has a specific gimmick that requires a specific set of mons
* Player battles BuildingscopepersonB and BuildingscopepersonC

### Walk Inside and Has Battled Before
BuildingscopepersonC takes one metatile step to the right and runs 5 metatiles south.
BuildingscopepersonB takes one metatile step to the left and runs 5 metatiles south.
* BuildingscopepersonB asks how many times they need to teach the Player this lesson
* BuildingscopepersonC mutters about not understanding how somebody got in multiple times
* Player battles BuildingscopepersonB and BuildingscopepersonC

### Player loses to BuildingscopepersonB and BuildingscopepersonC

* BuildingscopepersonB tells Player to leave them alone  
* BuildingscopepersonC tells Player to scram

### Player defeats BuildingscopepersonB and BuildingscopepersonC

* BuildingscopepersonB is surprised how tough the Player is
* BuildingscopepersonC claims they never lose when they're together

### Post BuildingscopepersonB and BuildingscopepersonC Battle

Building Quest is Reward.
* BuildingscopepersonB says they don't know what the Player is going to do to them
* BuildingscopepersonC exclaims they need to get out of there
BuildingscopepersonB steps two metatiles south.
BuildingscopepersonC steps one metatile east and two metatiles south.
Play `SE_EXIT`.
BuildingscopepersonB is removed from the map.
BuildingscopepersonC is removed from the map.
* Players what just happened there - did they break into somebody's house?

## `MAP_ROUTE_4`

### Interact with BuildingscopepersonB First Time
### Interact with BuildingscopepersonC First Time

BuildingscopepersonB faces Player.
BuildingscopepersonC faces Player.
* BuildingscopepersonB remembers Player
* BuildingscopepersonC shouts they won't let the Player get the jump on them again
Player battles BuildingscopepersonB and BuildingscopepersonC.

### Interact with BuildingscopepersonB If Previously Lost 
### Interact with BuildingscopepersonC If Previously Lost 
* BuildingscopepersonB remembers Player
* BuildingscopepersonC shouts they won't let the Player get the jump on them again
* Player just wants to talk
Player battles BuildingscopepersonB and BuildingscopepersonC.

### BuildingscopepersonB and BuildingscopepersonC defeats Player

* BuildingscopepersonB says they finally got the jump on the Player
* BuildingscopepersonC demends the Player get their home back

### BuildingscopepersonB and BuildingscopepersonC are defeated

* BuildingscopepersonB doesn't understand what they did wrong
* BuildingscopepersonC asks if the Player likes doing Sharprise's dirty work

### After Defeating BuildingscopepersonB 
BuildingscopepersonB faces Player.
BuildingscopepersonC faces Player.
* Player remembers BuildingscopepersonB and BuildingscopepersonC from Petarosa Borough
* Player asks to understand what happened, they were asked to get wild Pokémon out of a house
* BuildingscopepersonB says they were renting that house, they lived there normally
* BuildingscopepersonC were getting a great deal on it, the landlord had no idea what it was worth or the value of real money
* BuildingscopepersonB then one day they got a letter on the door saying they were being evicted
* BuildingscopepersonB didn't know what to do, and they started to reach out to a lawyer
* BuildingscopepersonC says that Player suddenly bust in their door one day and they fled and stayed with a friend
* BuildingscopepersonB says when they came back, they were locked out and their stuff was outside, just like that
* Player is stunned silent
* BuildingscopepersonC claim its been insanely stressful all because one guy wanted to make more money off a house
* BuildingscopepersonC had to part with some of their Pokémon and sell a lot of their stuff, and they didn't even do anything wrong
* BuildingscopepersonB is thankful that they are able to land on their feet and stay with a friend, and they'll be okay
* Player had no idea - the realtor didn't tell them any of that
* BuildingscopepersonB says talk is cheap - they're glad Player is sorry, but it doesn't make things right
* BuildingscopepersonC says they'd settle for bringing the realtor to justice, not even getting their old place back
Proceed to "Interact After Battle" based on Mutual Aid state.

### Interact After Battle And Mutual Aid Not Started
BuildingscopepersonB faces Player.
BuildingscopepersonC faces Player.
* Player is silent again
* Player doesn't know what needs to be done, but will figure something out
* Player will figure out how to make it right
* BuildingscopepersonB laughs and they'll believe in when they see it

# Summary & Notes
A realtor in Petarosa Bourough has been tasked with getting an abandoned mansion bakc on the makret, but claims that mansion has been overtaken by Pokémon. They are not a Trainer, and ask the Player to help, offering them a reward in exchange for clearing the mansion out.

The Player goes to clear the mansion but they are attacked by two people who appear to be living there. After defeating them, the realtor thanks the player and rewards them, and does not seme to react or mind that people were already there.

The player meets up with the tenants later on and attempt to battle the Player again. Upon losing, they explain to the player the entire situation - the player was tricked into being an unwitting enforcer and helped evict the pair without due process.

Player vows to figure out how to make it right. If the Mutual Aid Fund quest has started, the Player refers them to that group of people to get help.
 
---

The player is able to access this quest after finishing "[Young Padawan](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recNSdquhDRkvbA3O?blocks=hide)".

