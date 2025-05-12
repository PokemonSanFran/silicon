* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/recidpeIIYbG3L7hy?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Building Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_THELEANINGTOWER)` \== `TRUE`

### Building Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_THELEANINGTOWER)` \== `TRUE`

### Building Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_THELEANINGTOWER)` \== `TRUE`

# Involved Instances
## TheleaningtowerinspectorA

### [`MAP_PERLACIA_CITY`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recs7ZpglGWlclqMk?blocks=hide)

* TheleaningtowerinspectorA is facing south, standing in front of an open manhole which is otherwise fenced off.
* When the quest is active, they are standing southeast of the manhole.
* TheleaningtowerinspectorA is only visible when Quest Inactive or Quest Reward.

## [DrillguardF](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/reccSeVBJxp1XM0Ko?blocks=hide) / [DrillguardG](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/rectgvuUlWtRjxtfT?blocks=hide) / [DrillguardH](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recx2nZBTrUZad88l?blocks=hide) / [DrillguardI](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recbCrz6DZHkT7HEW?blocks=hide) / [DrilloperatorJ](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recqNBVpb44ZGfZa2?blocks=hide)

DrillguardX is only visible when Quest Active.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Investigate which Pokémon is causing the ground in Perlacia City to sink

### Quest is Complete

* Sinking foundation was due to fracking but why were they fracking

## `BUZZR`

### Anytime

* Random notices that some of the ground in Perlacia is starting to sink
* Random wonders if the Perlacia skyline looks... crooked to anybody else

### Quest Complete

* Random notices that Perlacia City seems so much quieter all of a sudden

## `MAP_PERLACIA_CITY`

### Interact with TheleaningtowerinspectorA And Quest Inactive
* TheleaningtowerinspectorA asks the Player if they notice anything off about this tower
* Player says it looks like any other skyscraper
* TheleaningtowerinspectorA says to look real close, like at the base
* TheleaningtowerinspectorA swears they don't see anything
* TheleaningtowerinspectorA goes absolutely ballistic and asks how is that possible
* TheleaningtowerinspectorA says in their 29 years of working in construction they've never seen a more lopsided tower in their lives
* TheleaningtowerinspectorA swears it looks like the tower is gonna flatten some kids any second
* Player pauses and admits that they can kinda see a difference
* TheleaningtowerinspectorA exclaims its an entire .5 degrees - that's insane
* TheleaningtowerinspectorA says a good chunk of the city is built on compacted landfill - the entirety of Zenzu Island is technically just a floating trash heap too
* TheleaningtowerinspectorA suspects that the building is starting to sink into that landfill because its being disturbed by a Pokémon
* TheleaningtowerinspectorA says normally when there's a Pokémon disturbance, they call in an entirely different department - his team isn't a bunch of Trainers, and they're not going to start
* TheleaningtowerinspectorA laments that whenever they call for Trainer backup, they get told its not a priority
* TheleaningtowerinspectorA things something needs to be done NOW
* TheleaningtowerinspectorA says the Player smells like a Trainer, and wants to know if you can help
* TheleaningtowerinspectorA thinks it will be easy - go down this manhole, walk down the tunnel, subdue the Pokémon down there, and TheleaningtowerinspectorA will reward the Player for their efforts
* TheleaningtowerinspectorA offers to Reward the Player handsomely for their efforts
* Player asks if its safe if the tower is sinking
* TheleaningtowerinspectorA laughs and doesn't understand how Trainers can battle alongisde literal fire breathing dragons but are afraid of a little cave in 
* TheleaningtowerinspectorA ensures so long as Player doesn't trigger a giant earthquake and split the ground open, Player should be fine
Quest starts.
* TheleaningtowerinspectorA says they've been staring at this tower all day - they're going to get a cup of coffee
Player steps one metatile to the left.
Player faces right.
TheleaningtowerinspectorA walks four metatiles south.
Screen fades to black.
TheleaningtowerinspectorA is removed from map.
Screen fades from black.

### Interact with TheleaningtowerinspectorA And Quest Reward And Bag Does Not Have Space
* TheleaningtowerinspectorA has a feeling that Player has done something great
* TheleaningtowerinspectorA tells the player to make room in their bag and come back

### Interact with TheleaningtowerinspectorA And Quest Reward And Bag Has Space
* TheleaningtowerinspectorA asks how did things go down there
* Player says there weren't any Pokémon down there at all
* TheleaningtowerinspectorA is confused
* Player says they did find a company that was drilling under the city
* TheleaningtowerinspectorA says that was probably causing the foundation to start to sink
* TheleaningtowerinspectorA thinks for a moment and then asks if the name "Boring Holdings LLC" sounds familiar
* Player says that this is the same company that was underground
* TheleaningtowerinspectorA says they've been doing all sorts of weird construction all over the region, laying power lines without any oversight
* TheleaningtowerinspectorA remembers they had a reward
TheleaningtowerinspectorA gestures towards the Player
Player recieves `ITEM_POTION`.
Quest complete.
* TheleaningtowerinspectorA is gonna have to escalate to their supervisor, they don't get paid enough for this
TheleaningtowerinspectorA walks four metatiles south.
Screen fades to black.
TheleaningtowerinspectorA is removed from map.
Screen fades from black.

## `MAP_PERLACIA_UNDERGROUND`

### Interacts with DrillguardF for the first time

* DrillguardF have strict orders to keep this operation top secret, Player will have to leave
Player battles DrillguardF.

### Player loses to DrillguardF

* DrillguardF tells Player to leave immediately

### Player defeats DrillguardF

* DrillguardF needs backup

### Interact with DrillguardF after battle

* DrillguardF wonders if they should admit that they were beaten or just claim a Trainer snuck past them

### Interacts with DrillguardG for the first time

* DrillguardG wonders if Trainers don't have anything better to do than snoop around tunnels
Player battles DrillguardG.

### Player loses to DrillguardG

* DrillguardG tells Player to scram

### Player defeats DrillguardG

* DrillguardG wonders if maybe there are some Pokémon down here

### Interact with DrillguardG after battle

* DrillguardG says they're not in charge, and they're not getting paid enough by Boring Holdings to fight with some kids

### Interacts with DrillguardH for the first time

* DrillguardH says that Player isn't going any deeper down here
Player battles DrillguardH.

### Player loses to DrillguardH

* DrillguardH boasts that nobody was going to get past them

### Player defeats DrillguardH

* DrillguardH laments that all their time training was totally wasted

### Interact with DrillguardH after battle

* DrillguardH asks the Player why they're even down here
* Player says they're causing the foundation above them to be disrupted
* DrillguardH wonders if that's actually really bad

### Interacts with DrillguardI for the first time

* DrillguardI is shocked Player got past DrillguardH
* DrillguardI doesn't think this is going to go well
Player battles DrillguardI.

### Player loses to DrillguardI

* DrillguardI wonders if DrillguardH just softened Player up

### Player defeats DrillguardI

* DrillguardI is not surprised

### Interact with DrillguardI after battle

* DrillguardI says the drill operator is the strongest of them, good luck

### Interacts with DrilloperatorJ for the first time

* DrilloperatorJ is confused as to why a kid is down here
* Player explains that their drilling is causing the foundation of building in Perlacia to sink
* DrilloperatorJ says that sounds dangerous
* DrilloperatorJ but also says that its not their problem
* DrilloperatorJ says they hired Boring Holdings to lay power lines to underneath the Sharprise Spire, and they won't get paid unless that gets done
* DrilloperatorJ says the landfill foundation is somebody else's problem and knows for sure the client isn't going to care
* Player doesn't understand why they wouldn't care
* DrilloperatorJ says they're not turning off this drill, so Player is going to have to get past them to do it
Player battles DrilloperatorJ.

### Interacts with DrilloperatorJ after losing
* DrilloperatorJ says they're not turning off this drill, so Player is going to have to get past them to do it
Player battles DrilloperatorJ.

### Player loses to DrilloperatorJ

* DrilloperatorJ says they're gonna drill baby drill

### Player defeats DrilloperatorJ

* DrilloperatorJ says this is not good for the bottom line

### Interact with DrilloperatorJ after battle

* DrilloperatorJ says this doesn't mean aynthing
* DrilloperatorJ agress that stop drilling for now, but knows that their client will just lobby the government to get an exception and start back up again
* DrilloperatorJ says all the Player did was buy some time
DrilloperatorJ walks one metatile south.
Player faces south.
DrilloperatorJ walks five metatiles east.
Player faces east.
Screen fades to black.
DrilloperatorJ is removed from the map.
Screen fades from black.
Quest is Reward.

# Summary & Notes
A construction worker in Perlacia City has noticed that one of the buildings in Perliacia City is sinking and starting to lean as a result. Worker says that the foundation of Perlacia is built on landfill and believes that a Pokémon is disrupting the foundation.

Worker says that nobody on his team is qualified enough to deal with a Pokémon strong enough to disrupt the ground in such a big way, but says the team that normally deals with these things isn't answering any requests to deal with it.

Worker wants Player to go underground and figure out what the issue is. Alicia goes down and discovered a fracking operation which is laying power lines to underneath the Sharprise Spire.

Player battles them all and gets them to stop. Worker is surprised by identifies the company as Boring Holdings LLC, which is a company that has been doing all kinds of illegal and unapproved work around the region, but doesn't know why.

---

The player is able to access after finishing "[Ready, Set, I Started 2 Hours Ago](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/reck2Uf6L8MgR6ObL?blocks=hide)".
