[Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recRfwdLNMUMcT2v5?blocks=hide)  
[game\_pkmnsnfrn Script Handbook](https://docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_KITCHEN_VOLUNTEERING)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_KITCHEN_VOLUNTEERING)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_KITCHEN_VOLUNTEERING)` \== `TRUE`

## Variables / Flags

### `FLAG_DAILY_PANTRY`

A pantry quest can only be done once a day.

## Items

* ### [`ITEM_TIN_OF_BEANS`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwPpHmvETr8JVLjk/recKuYNY2nmGBuyh1?blocks=hide)

* ### [`ITEM_GRANOLA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwPpHmvETr8JVLjk/recQviKHFmJLrNoIh?blocks=hide)

* ### [`ITEM_PASTA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwPpHmvETr8JVLjk/recojLWFzqt5eujOp?blocks=hide)

* ### [`ITEM_PEANUT_BUTTER`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwPpHmvETr8JVLjk/rec0rtDblIU9ADht9?blocks=hide)

* ### [`ITEM_APPLE_SAUCE`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwPpHmvETr8JVLjk/recFJvhHRbQHI32a4?blocks=hide)

These are all key items only to be used for this quest.

# Involved Instances

## [Restaurantexpansionbusser](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recO7mLrRSYW30XIq?blocks=hide)

//PSF TODO Need a movement script of the NPC running from shelf to shelf to counter  
Only visible when `SUB_QUEST_4` of `QUEST_RESTAURANTEXPANSION2` is complete.
Restaurantexpansionbusser is running around and will resume running around once the player has finished talking to them.

# Scenes

## `QUEST_MENU`

### Quest is Active

Restaurantexpansionbusser needs help gathering items from the basement

### Quest is Complete

Restaurantexpansionbusser is grateful for your help, but will likely need more in the future…

## `BUZZR`

### Anytime

Restaurantexpansionbusser: We need staff at Flowers, the joint’s overflowing\! As long as ya show up, we don’t care who ya are\!

## `MAP_CAPHE_CITY_PANTRY`

### Interact with Restaurantexpansionbusser and Quest Inactive And Bag Does Not Have Room For Item

Restaurantexpansionbusser: Make some room in your bag if you’re here to help\! I gotta give you somethin’.

### Interact with Restaurantexpansionbusser and Quest Inactive And Bag Has Room For Item

Restaurantexpansionbusser: You're the Trainer that got me this gig, PLAYER!
Restaurantexpansionbusser: It’s nice to see ya.  
Restaurantexpansionbusser: All the other bozos are off today so I’m the only one in. 
Restaurantexpansionbusser: I can't bus tables and grab stuff some downstairs, can you help me out?
Restaurantexpansionbusser: I need someone to go down to the basement and help me restock the shelves with what’s down there.  
Restaurantexpansionbusser: We need beans, granola, pasta, peanut butter, and uh…Oh yeah, apple sauce.  
Restaurantexpansionbusser: Don’t freak out on me but there are some wild Pokemon down there, okay? They’re not after the food or anything they just, uh…Live there.  
Player receives `ITEM_STORAGE_KEY`.  
Restaurantexpansionbusser gestures to player.  
Restaurantexpansionbusser: Oh\! I almost forgot to give ya the key. Come back when you got those 5 items, okay?  
Quest starts.

### Interact with Restaurantexpansionbusser and Quest Active

Restaurantexpansionbusser does not turn to face the player.  
Restaurantexpansionbusser: Hope that kid gets back soon with the stuff…

### Interact with Restaurantexpansionbusser and Quest Reward

`FLAG_DAILY_PANTRY` is set.  
Player loses `ITEM_STORAGE_KEY`, `ITEM_TIN_OF_BEANS`, `ITEM_GRANOLA`, `ITEM_PASTA`,   
`ITEM_PEANUT_BUTTER`, `ITEM_APPLE_SAUCE` from inventory  
Run RandomlyBoostPartyMemberFriendship.  
Restaurantexpansionbusser: Hey, you got back here fast\!  
Restaurantexpansionbusser: You got all the stuff I asked for? And the key too, yeah?  
Player gestures to Restaurantexpansionbusser.  
Restaurantexpansionbusser gestures to Player.  
Restaurantexpansionbusser: Hey, nice\!  
Restaurantexpansionbusser: Gee kid you really came through for me\! Again! 
Restaurantexpansionbusser: I can’t thank ya enough.  
Restaurantexpansionbusser: You’re special. Drinks on the house next time you’re here\! Or, uh…Apple Juice, or somethin’. Although I guess its technically free anyways…
Quest complete.

### Interact with Restaurantexpansionbusser and Quest Complete and Daily Quest Complete

Restaurantexpansionbusser does not turn to face the player.  
Restaurantexpansionbusser: Man, its never ending\!

### Interact with Restaurantexpansionbusser and Quest Complete and Daily Quest Incomplete And Does Not Have Storage Key

Restaurantexpansionbusser: Hey, you're back\!  
Player: I had a feeling you needed the help.
Restaurantexpansionbusser: The pace is pretty wild! A lot of the newbies get all freaked out by the basement and don’t come back.  
Restaurantexpansionbusser gestures to Player.  
Player receives `ITEM_STORAGE_KEY`.  
Run KitchenvolunteeringFunc\_ChooseRandomPantryItem.
Restaurantexpansionbusser: Get me some \[random item\] will ya?

### Interact with Restaurantexpansionbusser and Quest Complete and Daily Quest Incomplete And Has Storage Key And Does Not Have Assigned Item

Restaurantexpansionbusser does not turn to face the player.  
Restaurantexpansionbusser: Hope that kid gets back soon with the stuff…

### Interact with Restaurantexpansionbusser and Quest Complete and Daily Quest Incomplete And Has Storage Key And Has Assigned Item

`FLAG_DAILY_PANTRY` is set.  
Player loses `ITEM_STORAGE_KEY`, `RANDOM_ITEM` from inventory  
Run RandomlyBoostPartyMemberFriendship.  
Restaurantexpansionbusser: How ya doin’, kid?  
Restaurantexpansionbusser: Hey, great. Thanks for the \[item\].  
Player gestures to Restaurantexpansionbusser.  
Restaurantexpansionbusser: Appreciate the support. It means a lot.  
Set `FLAG_DAILY_PANTRY`.

# Summary & Notes

After Belén has returned to the Gym, Flowers needs more help. If the Player talks to Restaurantexpansionbusser, they wil give you a key and ask you to go into the basement and get more supplies for the kitchen.

The first time the quest starts, there will be five items in the basement. Every time the player goes into the basement, the layout of the basement is different.

Once the player brings back all five items, Restaurantexpansionbusser takes back the key and the items the Player got.

Once a day, Player can repeat the quest, but will only be asked ot get a single item.

---

The player is able to access this quest after finishing ["Restaurant Expansion 2 "](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recNUo67U5RtGfLmZ?blocks=hide)  
