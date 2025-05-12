[Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)  
[game\_pkmnsnfrn Script Handbook](https://docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk) 

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_RESTAURANTEXPANSION)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_RESTAURANTEXPANSION)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_RESTAURANTEXPANSION)` \== `TRUE`

### Cutscene Complete

`VAR_BELEN_STATE` \== `CUTSCENE_COMPLETE`

### Battle 1 Complete

`VAR_BELEN_STATE` \== `BATTLE_1_COMPLETE`

## Functions

### Quest\_RestaurantExpansion\_GetNextLocation

1. Get the player’s completed quests for `QUEST_RESTAURANTEXPANSION`  
2. Find the first incomplete quest  
3. Buffer the mapsec name of the location for that quest to gStringVar1

## Variables / Flags

### `VAR_BELEN_STATE`

Tracks the progress of Bélen’s overall questline.

1. Battle 1 Complete  
2. Cutscene Complete  
3. Quest 1 Complete  
4. Quest 2 Complete  
5. Battle 2 Complete

# Involved Instances

## Belén

### [`MAP_OROLAND`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

Belén is only visible when Battle 1 Complete. She is leaning against a wall, facing south.

### [`MAP_CAPHE_CITY`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

Belén is only visible when Cutscene Complete and Quest Inactive. She is standing in front of the Caphe Food Pantry.

### [`MAP_CAPHE_CITY_PANTRY`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

Belén is only visible when Quest 1 is Active AND Quest 2 is Not Complete. She is running around the kitchen in Caphe City Pantry, stopping to stir some pots.

## Hungryparent

### `MAP_OROLAND`

Hungryparent is never intractable and is only visible during the events of a scene.

## Hungrykid

### `MAP_OROLAND`

Hungrykid is never intractable and is only visible during the events of a scene.

## Centerhuman\_\*

Each Pokémon Center has a Nurse. The nurse is always visible, facing south. These four nurses here are the ones involved in the quest.

* [Centerhuman\_EspuleeOutskirts](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)  
* [Centerhuman\_Chasilla](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)  
* [Centerhuman\_TirabudinPlace](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)  
* [Centerhuman\_Perlacia](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwARR76I3LO5EdEs/recFqez0B58XZd98o?blocks=hide)

# Scenes

## `QUEST_MENU`

### Quest is Active

Help advertise the Needles makeover by bringing food to the Pokémon Center staff across the region. 

### Quest is Complete

Word is getting out about Needles, even to clients that usually never went. Belen’s new strategy is slowly taking shape.

## `BUZZR`

### Quest is Active

### Belen

I’m making some changes to Needles in the coming weeks. I’ve had a palette warping experience, and I’m ready to share it all with you\!

### Belen

Needles will be moving to a Pay What You Can model. Resido is my home, and nobody in my home will be hungry.

### Belen

I’m still committed to top shelf ingredients and taste. Try our new menu and see for yourself.

## `MAP_OROLAND`

### Interact with Belén and Battle 1 Complete

Set `VAR_BELEN_STATE` to `CUTSCENE_COMPLETE.`  
Belén: Hello {PLAYER}. What a delicious surprise\!  
Belén: Are you here for the grand re-opening of the updated menu for Millenium Bakery?  
Player: I didn't even know that was a thing...  
Belén: Oh\! Come on, we'll go together.  
Belen and the player start walking west.  
Belén: If my restaurant is going to be at the peak of Resido culinary culture, I need to do a lot of work in the front of house. I have to make sure I understand the region's preferred palettes, while also making sure I can continually elevate the plates that leave my line.  
Belén: I try to stay ahead of the tickets, one restaurant opening at a time.  
Player: What do you mean by elevate?  
Belén: I'm not just trying to plate up Resido cuisine, I'm serving the best cuts of Resido cuisine. Freshest ingredients from the ground, finest Kalosian chefs, with no expense spared. I want my food to be the definitive dining experience of Resido\!  
Belen and the player stopped walking and face the restaurant.  
Hungryparent and hungrykid are on screen, and walk towards Belen and the player.  
Hungryparent: Hey man, you got a couple dollars for food?  
Belen: Sorry, I don’t have any cash.  
Hungryparent: It’s cool. Come on, little man.  
Hungryparent and Hungrykid walk south, away from the restaurant.  
Belen walks south towards Hungryparent and Hungrykid.  
Player faces south.  
Belen (shock, yelling): Wait\! Hold on.  
Belen: Can I actually buy you dinner?  
Hungryparent: Wait, really? That’s awful nice man.  
Belen: This restaurant is experimenting with a blend of flavors tonight, and I want \- hold on.  
Belen walks back to the player.  
Belen: {PLAYER}, we'll have to take a raincheck. I'll see you around!
Belen, Hungryparent, Hungrykid all walk into the restaurant.

### `MAP_CAPHE_CITY`

### Interact with Belen while Quest Inactive

Belen (sweat): {PLAYER}, sorry about the restaurant in Oroland\!  
Player: No problem\! That was a really nice thing you did.  
Belen: They really expanded my palette.  
Belen (shout): How can I serve the people of this region if the majority of the people can't afford our menu? That kid had never even heard of Cioppino. A good Cioppino? With Cloyster and Seaking? To die for\!  
Belen: That's why I'm making some changes. 
Belen: I bought this abandoned nightclub a while ago, and I've been using it as a test kitchen for making new creations.
Belen: I'm going to turn it into a with a Pay What You Can model. Anybody can eat there and experience the best cuisine Resido has to offer.  
Player (happy): Wow\! That's a huge change, congratulations\!  
Belen (happy): I've been hard at work adjusting the menu and suppliers to make sure it'll all work, but I'm ready for the next step in the recipe. That's where you come in\!  
Player (shock): Me? But I can't really cook...  
Belen: Not cooking. Outreach\! You're a Trainer, and you've traveled around the region \- you've met all the people that I wasn't serving before.  
Belen: Pokémon Centers are great places where people can gather, and the front of house there are all seen as members of their local communities. I want you to deliver meals to a few key nurses, and convince them to spread the word. What'd you say?  
Quest starts.  
Belen: I’ll start cooking the first dish. Come see me inside when you’re ready for the first delivery.  
Belen walks into the building.

## `MAP_MERMEREZA_GYM`

### Interact with Belen And Quest Active And Does Not Have Space For Key Item

Belen: I need hands, PLAYER, I got food dying in the window\! Make room in your bag for something important.

### Interact with Belen Quest Active and Any Quest Item Is In Bag

Belen does not face the player.  
Belen does not stop moving.  
Run Quest\_RestaurantExpansion\_GetNextLocation.  
Belen: PLAYER, get over to the Pokémon Center in STR\_VAR\_1\! This food has to get there at peak freshness\!  
One of the following messages is randomly chosen.

* Belen (whisper): I need to take the Liechi out of the syrup and then grind them into paste.	  
* Belen (whisper): The Ganlon Berry are small enough that I don’t need to cut them.  
* Belen: I’ll do two sets. The first with chili paste and scallion and one with soybean paste\! But how can I make the scallions more exciting?  
* Belen (whisper): I think Shuca oil is going to have the most favorable smoke point for these.  
* Belen (whisper): I can keep costs down by using jackfruit instead of the usual Miltank Lechonk blend… just need to make sure the umami is on point\!  
* Belen (whisper): Frying these feels so similar to empanadas\!  
* Belen (whisper): Oops, my rice flour ratio is a little off.  
* Belen (whisper): Nomel \- Magost reduction just seems to simmer a little longer\!

### Interact with Belen and Quest Active And Has Space for Key Item And Number of Completed Subquests is 0

Belen: First, you're going to EspuleeOutskirts. A lot of my existing clients are there, and I want to whet their appetite for the grand re-opening.  
Player: Wait, I thought you wanted to do a couple different places?  
Belen: Yeah, but I'm cooking the meals one at a time\! I can't have you dragging soggy food around the region like Doordash\! Deliver that one, and then come back to me for the next one.  
Player (thought, sweat): ...I regret this now.  
Belen gestures to the player.  
Player receives `ITEM_BELEN_CHE`.  
Belen continues moving.

### Interact with Belen and Quest Active And Has Space for Key Item And Number of Completed Subquests is 1

Belen: Next on the menu is TirabudinPlace\! Here you go.  
Player: Hey Belén, how are you paying for this new place?  
Belen: Needles' clients were in a top shelf price range \- money was never an object. 
Belen: A lot of them won't notice if I double prices\! 
Belen: So I'll use the cashflow from there to fund this place!
Belen gestures to the player.  
Player receives `ITEM_BELEN_KARIOKA`.  
Belen continues moving.

### Interact with Belen and Quest Active And Has Space for Key Item And Number of Completed Subquests is 2

Belen: Okay, now go to Perlacia City. Gotta get those techies that work downtown, you know?  
Player: How many of these are left?  
Belen: Just one more after this\!  
Belen gestures to the player.  
Player receives `ITEM_BELEN_CHEBUREKI`.  
Belen continues moving.

### Interact with Belen and Quest Active And Has Space for Key Item And Number of Completed Subquests is 3

Belen: Last order for the night... Chasilla\! Students have to eat too, you know?  
Player (thought, sweat): This is exhausting... I feel like I'm working in their kitchen\!  
Belen gestures to the player.  
Player receives `ITEM_BELEN_JIANBING`.  
Belen continues moving.

### Interact with Belen and Quest Reward and Bag Does Not Have Room For Item

Belen: I can’t let you clock out until I pay you\! Make some room in your bag.

### Interact with Belen and Quest Reward and Bag Has Room For Item

Set `FLAG_TEMP_A`.  
Set `VAR_BELEN_STATE` to `QUEST_1_COMPLETE.`  
Belen (happy): {PLAYER}, this is three star work\! I’m getting all sorts of new followers on Buzzr.  
Player: It was good to help out.  
Belen: As for your payment.  
Belen gestures to the player.  
Player receives a Potion.  
Belen: Now to work on hiring…  
Quest complete.

### Interact with Belen and Quest Complete and `FLAG_TEMP_A` and is set 

Belen: Now to work on hiring…

## `MAP_ESUPLEEOUTSKIRTSCENTER_1F`

### Interact with Centerhuman while `ITEM_BELEN_CHE` is in Bag

This scene plays after the player heals OR says “No” to wanting to heal.  
Player loses `ITEM_BELEN_CHE`.  
`SUB_QUEST_1` complete.  
Player: Actually, I have a question. Have you eaten at Needles?  
Centerhuman\_EspuleeOutskirts: Yes, I absolutely love their Tauros Burrito\!  
Player: They're launching a new restaurant, and sent over a meal for you to try. And if you like it…  
Screen fades to black.  
Screen fades back in.  
Centerhuman\_EspuleeOutskirts: This is delicious wow\! I'll absolutely tell people about this.  
Player (happy, thought): That went well\!

## `MAP_TIRABUDINPLACECENTER_1F`

### Interact with Centerhuman while `ITEM_BELEN_KARIOKA` is in Bag

This scene plays after the player heals OR says “No” to wanting to heal.  
Player loses `ITEM_BELEN_KARIOKA`.  
`SUB_QUEST_2` complete.  
Player: Actually, I have a question. Have you eaten at Needles?  
Centerhuman\_TirabudinPlace: Nah, that's some rich people's food, you know?.  
Player: The owner is opening another restaurant with a Pay What You Can model, which is why I'm here\! They want you to try some of their new menu items and see if you like...  
Screen fades to black.  
Screen fades back in.  
Centerhuman\_TirabudinPlace: Okay, this is pretty tight. And you said it's cheaper than Needles? Okay, I'll have to check it out soon. I’ll talk it up\!  
Player (happy, thought): Two down\!

## `MAP_PERLACIACENTER_1F`

### Interact with Centerhuman while `ITEM_BELEN_CHEBUREKI` is in Bag

This scene plays after the player heals OR says “No” to wanting to heal.  
Player loses `ITEM_BELEN_CHEBUREKI`.  
`SUB_QUEST_3` complete.  
Player: Actually, I have a question. Have you eaten at Needles?  
Centerhuman\_Perlacia: No, they never had salads and that's really what I'm into right now\!  
Centerhuman\_Perlacia: They're opening another restaurant with a new menu and expanding their options. I brought some, free of charge for you to try…  
Screen fades to black.  
Screen fades back in.  
Centerhuman\_Perlacia: I don't know if its better than a salad, but its tasty for sure. I'll mention it to hungry Trainers.

## `MAP_CHASILLACENTER_1F`

### Interact with Centerhuman while `ITEM_BELEN_JIANBING` is in Bag

This scene plays after the player heals OR says “No” to wanting to heal.  
Player loses `ITEM_BELEN_JIANBING`.  
`SUB_QUEST_4` complete.  
Centerhuman\_Chasilla: That place is too uptight, I just want somewhere casual I can eat between classes, you know?  
Player: They're opening a new restaurant that is going to be relaxed, and I brought over a free meal\!  
Screen fades to black.  
Screen fades back in.  
Centerhuman\_Chasilla: Chill vibes and good food? That's my kind of spot. I can talk this up all day.  
Player (happy, thought): The last one\! Time to head back to STR\_VAR\_1.


# Summary & Notes
Belén runs into the Player in Oroland. Belén explains that they're there for the opening of a new restaurant, and wants to try it out. Belén invites Player to eat dinner with them, but they are interrupted by an unhoused father and his son. Belén is moved by their request for spare change for food and decides to buy them dinner instead, canceling their dinner with Player.

Belén meets up with Player in Caphe City. Belén reveals that they previously purchased an old night club and was using it as a test kitchen for new dishes. Belén claims that they will be transforming it into a resturant with a Pay What You Can Model. Belén tells the Player they want to advertise using the Pokémon Center nurses, and asks the Player to help. Belén will cook new dishes, and the Player needs to bring them to the nurses to sample and spread the word if they like it.
 
---

The player is able to access this quest after finishing ["Enter Belén"](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recE7mu6uysonZpSj?blocks=hide).


