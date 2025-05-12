[Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recNUo67U5RtGfLmZ?blocks=hide)  
[game\_pkmnsnfrn Script Handbook](https://docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk) 

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_RESTAURANTEXPANSION2)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_RESTAURANTEXPANSION2)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_RESTAURANTEXPANSION2)` \== `TRUE`

## Functions

## Variables / Flags

### `VAR_BELEN_STATE`

Tracks the progress of Bélen’s overall questline.

1. Battle 1 Complete  
2. Cutscene Complete  
3. Quest 1 Complete  
4. Quest 2 Complete  
5. Battle 2 Complete

# Involved Instances

## Restaurantexpansionhostess

### [`MAP_ROUTE_1`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

Visible unless `SUB_QUEST_1` is complete.

### `MAP_CAPHE_CITY_PANTRY`

Only visible when `SUB_QUEST_1` is complete.

## Restaurantexpansionchef

### [`MAP_ROUTE_99`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

Visible unless `SUB_QUEST_2` is complete.

### `MAP_CAPHE_CITY_PANTRY`

Only visible when `SUB_QUEST_2` is complete.

## Restaurantexpansionlinecook

### [`MAP_ROUTE_4`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

Visible unless `SUB_QUEST_3` is complete.

### `MAP_CAPHE_CITY_PANTRY`

Only visible when `SUB_QUEST_3` is complete.

## Restaurantexpansionbusser

### [`MAP_ROUTE_9`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

Visible unless `SUB_QUEST_4` is complete.

### `MAP_CAPHE_CITY_PANTRY`

Only visible when `SUB_QUEST_4` is complete.

## Belén

### [`MAP_CAPHE_CITY_PANTRY`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recNUo67U5RtGfLmZ?blocks=hide)
Visible unless Quest complete.

# Scenes

## `QUEST_MENU`

### Quest is Active

Track down the people who responded to Belén’s zap on Buzzr.

### Quest is Complete

The new hires appear to be doing well\! The opening of Flowers has been a success.

## `BUZZR`

### Quest is Active

Belén: Looking for busboys, servers, chefs and line cooks \- My new resturants wants hire more Resido residents. DM me if you’re interested\!

## `MAP_CAPHE_CITY_PANTRY`

### Interact with Belén and Expansion 1 Quest Complete and `FLAG_TEMP_A` and is NOT set

Belén: Player, did you see my zap?  
Shows player the zap calling for new employees.  
Belén: The new model has been three stars, but I need to hire more\!  
Belén: I went through my DMs and made a list of people who pass the freshness check. My staff needs to be as diverse as my menu\!  
Belén: Can you go sniff them out, see if they’re ripe, and send them back here?  
Belén gestures towards the player.  
Belén: There’s a list of locations in your Todo. Come back when you’ve found me a waitress, a chef, a line cook, and a busser.  
Quest starts.  
Belén: On the double\!

### Interact with Belén Quest Active

Belén does not face the player.  
Belén does not stop moving.  
Belén (shout): PLAYER, did you greet those tables yet?   
Belén (shout): The locations are in your Todo, but I need help now\!  
One of the following messages is randomly chosen.

* Belén (whisper): I need to take the Liechi out of the syrup and then grind them into paste.	  
* Belén (whisper): The Ganlon Berry are small enough that I don’t need to cut them.  
* Belén: I’ll do two sets. The first with chili paste and scallion and one with soybean paste\! But how can I make the scallions more exciting?  
* Belén (whisper): I think Shuca oil is going to have the most favorable smoke point for these.  
* Belén (whisper): I can keep costs down by using jackfruit instead of the usual Miltank Lechonk blend… just need to make sure the umami is on point\!  
* Belén (whisper): Frying these feels so similar to empanadas\!  
* Belén (whisper): Oops, my rice flour ratio is a little off.  
* Belén (whisper): Nomel \- Magost reduction just seems to simmer a little longer\!

## `MAP_ROUTE_1`

### Interacts with Restaurantexpansionhostess for the first time

Restaurantexpansionhostess: What can I get you to eat today?
Player battles Restauran2texpansionhostess.

### Player loses to Restaurantexpansionhostess

Restaurantexpansionhostess: Oh wow, extra spicy I see!

### Player defeats Restaurantexpansionhostess

Restaurantexpansionhostess: I think the kitchen 86'd a win!\!

After Restaurantexpansionhostess is defeated, If Quest Active, “Player Defeats Restaurantexpansionhostess After Battle and Quest Active” automatically plays after battle.

### Interact with Restaurantexpansionhostess after battle

Restaurantexpansionhostess: Haha, I’m so silly\! I used to work as a server, but those days are long gone.

### Player Defeats Restaurantexpansionhostess After Battle and Quest Active

`subquestmenu(QUEST_MENU_COMPLETE_QUEST,QUEST_RESTAURANTEXPANSION2,SUB_QUEST_1)`  
If all 7 subquests for `QUEST_RESTAURANTEXPANSION2` are complete, then `QUEST_RESTAURANTEXPANSION2` is set to Reward.  
Restaurantexpansionhostess: Haha, I’m so silly\! I used to work as a server, but those days are long gone.  
Player: Flowers is looking for a hostess. Belén said she found you on Buzzr\!   
Player: Are you still interested?  
Restaurantexpansionhostess: Oh my gosh, like I didn’t think anybody was reading that, how embarrassing… but like, I can at least drop by. Thanks\!

Restaurantexpansionhostess walks away and leaves the screen.

## `MAP_ROUTE_99`

### Interacts with Restaurantexpansionchef for the first time

Restaurantexpansionchef: You think a battle will take my mind off food?  
Player battles Restaurantexpansionchef.

### Player loses to Restaurantexpansionchef

Restaurantexpansionchef: Man, something flame grilled would really hit that spot.

### Player defeats Restaurantexpansionchef

Restaurantexpansionchef: Now I’m hungry and I lost?

After Restaurantexpansionchef is defeated, If Quest Active, “Player Defeats Restaurantexpansionchef After Battle and Quest Active” automatically plays after battle.

### Interact with Restaurantexpansionchef after battle

Restaurantexpansionchef: I used to be the head chef over at the Oroland Coliseum\! Ever since it closed. I’ve been out of work and out on the streets. I think it’s been ten years now...

### Player Defeats Restaurantexpansionchef After Battle and Quest Active

`subquestmenu(QUEST_MENU_COMPLETE_QUEST,QUEST_RESTAURANTEXPANSION2,SUB_QUEST_2)`  
If all 7 subquests for `QUEST_RESTAURANTEXPANSION2` are complete, then `QUEST_RESTAURANTEXPANSION2` is set to Reward.  
Restaurantexpansionchef: I used to be the head chef over at the Oroland Coliseum\! Ever since it closed. I’ve been out of work and out on the streets. I think it’s been ten years now...  
Player: Flowers is looking for a chef. Belén said she found you on Buzzr\!  
Restaurantexpansionchef: Wait, people are actually reading those crazy zaps? Man, just to be back doing what I loved would mean everything\!

Restaurantexpansionchef walks away and leaves the screen.

## `MAP_ROUTE_4`

### Interacts with Restaurantexpansionlinecook for the first time

Restaurantexpansionlinecook: Last night I tried to make an Arepa like Belén… and it was a culinary disaster. Am I cut out to be a line cook?  
Player battles Restaurantexpansionlinecook.

### Player loses to Restaurantexpansionlinecook

Restaurantexpansionlinecook: Maybe I’m not so bad after all.

### Player defeats Restaurantexpansionlinecook

Restaurantexpansionlinecook: I’m not even cut out to battle\!

After Restaurantexpansionlinecook is defeated, If Quest Active, “Player Defeats Restaurantexpansionlinecook After Battle and Quest Active” automatically plays after battle.

### Interact with Restaurantexpansionlinecook after battle

Restaurantexpansionlinecook: Belén got famous off bringing different street foods from around the world to her restaurant. It’s an awesome way for so many people to get to try things from new cultures\! I’m becoming a line cook so I can do the same thing.

### Player Defeats Restaurantexpansionlinecook After Battle and Quest Active

`subquestmenu(QUEST_MENU_COMPLETE_QUEST,QUEST_RESTAURANTEXPANSION2,SUB_QUEST_3)`  
If all 7 subquests for `QUEST_RESTAURANTEXPANSION2` are complete, then `QUEST_RESTAURANTEXPANSION2` is set to Reward.  
Restaurantexpansionlinecook: Belén got famous off bringing different street foods from around the world to her restaurant. It’s an awesome way for so many people to get to try things from new cultures\! I’m becoming a line cook so I can do the same thing.  
Player: Flowers is looking for a line cook. Belén said she found you on Buzzr\!  
Player: Do you want to work under Belén?  
Restaurantexpansionlinecook: Me? At Flowers? This sounds insane\! I’ll be able to try Buneary Chow, work on my Currywurst…

Restaurantexpansionlinecook walks away and leaves the screen.

## `MAP_ROUTE_9`

### Interacts with Restaurantexpansionbusser for the first time

Restaurantexpansionbusser: How am I supposed to land a gig when every job is askin' for 10 years of experience?  
Player battles Restaurantexpansionbusser.

### Player loses to Restaurantexpansionbusser

Restaurantexpansionbusser: You gotta rack up more years on the job to top me! 

### Player defeats Restaurantexpansionbusser

Restaurantexpansionbusser: Man, if you’re that tough, you could waltz into any job you wanted.

After Restaurantexpansionbusser is defeated, If Quest Active, “Player Defeats Restaurantexpansionbusser After Battle and Quest Active” automatically plays after battle.

### Interact with Restaurantexpansionbusser after battle

Restaurantexpansionbusser: A simple gig would be nice, you know? Like bussing tables! Nobody needs experience to grab plates, right?

### Player Defeats Restaurantexpansionbusser After Battle and Quest Active

`subquestmenu(QUEST_MENU_COMPLETE_QUEST,QUEST_RESTAURANTEXPANSION2,SUB_QUEST_4)`  
If all 7 subquests for `QUEST_RESTAURANTEXPANSION2` are complete, then `QUEST_RESTAURANTEXPANSION2` is set to Reward.  
Restaurantexpansionbusser: A simple gig would be nice, you know? Like bussing tables! Nobody needs experience to grab plates, right?
Player: Flowers is looking for a busser. Belén said she found you on Buzzr\!  
Restaurantexpansionbusser: Hey, if she's not checking resumes for university degrees in plate-clearing, I'm there\!

Restaurantexpansionbusser walks away and leaves the screen.

## `MAP_CAPHE_CITY_PANTRY`

### Interacts with Restaurantexpansionbusser and Quest Active OR Quest Complete and `FLAG_TEMP_A` and is set 

Restaurantexpansionbusser: Belén is always going on about showing, not telling, and really making it happen. Her dishes speak for themselves, but how do I show her I want to start moving up? 
Restaurantexpansionbusser: How do I show her I'm ready to move up?

### Interact with Restaurantexpansionlinecook

Restaurantexpansionlinecook: Watching Belén is amazing. Somehow, she’s able to perfectly split her focus between Gym Battles and cooking, and does them both perfectly\!

### Interacts with Restaurantexpansionchef and Quest Not Complete OR Quest Complete AND `FLAG_TEMP_A` is set.

Restaurantexpansionchef: Belén’s new thing is about impressing the world with her high end dishes. And now to be a part of that after ten years away… I’m so happy\!

### Interacts with Restaurantexpansionchef Ever OR Quest Complete and `FLAG_TEMP_A` and is not set 
Restaurantexpansionchef: Belén left me to run Flowers so she can handle Needles.
Restaurantexpansionchef: Flowers runs entirely off the profit margins from Needles, which limits how many people we can serve.
Restaurantexpansionchef: I love what we're doing here, but it breaks my heart to see that we can't help more people.

### Interacts with Restaurantexpansionhostess

Restaurantexpansionhostess: Belén is really great at handling pressure in the kitchen and battles\! Whenever things don’t go her away, she doesn’t ever lose her cool.  
Restaurantexpansionhostess: Some of the patrons could learn from her\!

### Interact with Belén and Quest Reward and Bag Does Not Have Room For Item

Belén: I can’t let you clock out until I pay you\! Make some room in your bag.

### Interact with Belén and Quest Reward and Bag Has Room For Item

Set `FLAG_TEMP_A`.  
Set `VAR_BELEN_STATE` to `QUEST_2_COMPLETE.`  
Belén (happy): These new hires are top notch, PLAYER\! Thanks for sourcing them for me.  
Belén: And of course, we pay out all the help…  
Belén gestures to the player.  
Player receives a Potion.  
Belén: I’ve been so focused on opening the new restaurant and my battling skills are starting to stale. 
Belén: Needles is still going to be my top focus, since its cashflow is what will keep the lights on here. I'm going to head back there and let Restaurantexpansionchef hold down the fort.
Belén: When you come back to the Gym, let’s battle again\!  
Quest complete.

### Interact with Belén and Quest Complete and `FLAG_TEMP_A` and is set 

Belén: I need to marinate in my last loss, but I’ll be ready to jump into the frying pan with you tomorrow\!

# Summary & Notes
Belén claims they need more employees running Flowers, and puts out a zap asking people to apply. She is specifically looking for people that have lost their jobs but have restaurant experience. Belén gives the Player some locations and asks them to find a waitress, busser, chef, and line cook.

All four of them are Trainers previously battled durin the player's journey. Upon defeating them and talking to them, they will relocate to and start working at Flowers. Upon recruiting all four people, Belén goes back to focus on Needles and tells the Player she's open to rematches whenever the Player likes.

---

The player is able to access this quest after finishing ["Restaurant Expansion"](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recFqez0B58XZd98o?blocks=hide)

