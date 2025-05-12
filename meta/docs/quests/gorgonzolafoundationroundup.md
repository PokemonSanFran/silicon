* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rec1ZvxAkMqZbEsPs?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_NAME)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_NAME)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_NAME)` \== `TRUE`

### Ready To Meet Jamil
* Player has one badge.
* Player has entered a Gym where they do not already have the Badge for that Gym.
* Player has not previously met Jamil

### Has Met Jamil
`VAR_QUEST_GORGONZOLA_FOUNDATION_JAMIL` >= `HAS_MET_JAMIL`

### Has Given Gold Potion
`VAR_QUEST_GORGONZOLA_FOUNDATION_JAMIL` >= `HAS_RECIEVED_GOLD_POTION`

### Has Finished Corsola Quest
`VAR_CUTE_POKEMON_GUESS` >= `VAR_CUTE_POKEMON_BATTLE_CRESALTA_COMPLETE`

## Variables / Flags
### `VAR_QUEST_GORGONZOLA_FOUNDATION_JAMIL`
A variable for tracking if the Player has met Jamil and/or recieved the Gold Potion from them.

| Value | Constant | Description |
| :---- | :---- | :---- |
| 0  | `HAS_NOT_MET_JAMIL` | Default State |
| 1 | `HAS_MET_JAMIL` | Has Met Jamil in Gym |
| 2  | `HAS_RECIEVED_GOLD_POTION` | Recieved Gold Potion from Jamil |

# Involved Instances

## Jamil 
### [`MAP_GYM_PERLACIA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rec1ZvxAkMqZbEsPs?blocks=hide)
### [`MAP_GYM_TORA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rec1ZvxAkMqZbEsPs?blocks=hide)
### [`MAP_GYM_MERMEREZA`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rec1ZvxAkMqZbEsPs?blocks=hide)
* Jamil is facing south.
* Jamil is only visible when Ready To Meet Jamil

### [`MAP_GF_HQ`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rec1ZvxAkMqZbEsPs?blocks=hide)
* Jamil is facing a direction.
* Jamil is always visible.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Get the members of the Gorgonzola Foundation to get back to work!

### Quest is Complete

* All of the members of the Gorgonzola Foundation are hard at work.

## `MAP_GYM_???`

### Player enters Gym and has not met Jamil and Bag Has No Space


Jamil steps three metatiles towards the Player.

Jamil: PLAYER!

Jamil: Going after another Gym Leader? Keep it up! I can't wait until you're the Champion.

Player (confuse): Do I know you?

Jamil: No, but it doesn't REALLY matter right now. No time to talk anyways.

Jamil: Boss told me to give you something, but somehow, as if by magic, your Bag doesn't have any room.

Jamil ...

Jamil: How did you do that? ...whatever.

Jamil: Once you're stronger, come visit us on Route 99.

Jamil: I'll give the present then.

Jamil: Good luck against GYM LEADER!

Player steps one metatile west.

Player faces east.

Jamil steps one metatiles south.

Player faces south.
Play `SE_EXIT`

Jamil is removed from the map.

### Player enters Gym and has not met Jamil and Bag Has Space


Jamil steps three metatiles towards the Player.

Jamil: PLAYER!

Jamil: Going after another Gym Leader? Keep it up! I can't wait until you're the Champion.

Player (confuse): Do I know you?

Jamil: No, but it doesn't REALLY matter right now. No time to talk anyways.

Jamil: Boss told me to give you this!

Jamil gestures towards Player.

Player recieves `ITEM_GOLD_POTION`.

Jamil: I hope that's super useful for you!

Jamil: Once you're stronger, come visit us on Route 99.

Jamil: Good luck against GYM LEADER!

Player steps one metatile west.

Player faces east.

Jamil steps one metatiles south.

Player faces south.
Play `SE_EXIT`

Jamil is removed from the map.

## `MAP_GF_HQ`

### Interact with Jamil and Quest Inactive and Has Not Met Jamil

Jamil: ...You probably shouldn't be here right now.

### Interact with Jamil and Quest Inactive And Has Met Jamil And Does Not Have Gold Potion And Bag Does Not Have Space

Jamil: Somehow, that's twice that we've met and your Bag doesn't have space for this.

Jamil: Twice?

Jamil: Make room in your bag.

### Interact with Jamil and Quest Inactive And Has Met Jamil And Does Not Have Gold Potion And Bag Have Space


Jamil: PLAYER!

Jamil: Good to see you again. And I was right! You're stronger now.
Player: Who are -

Jamil: Oh right, I never introduced myself!

Jamil: I'm Jamil. I'm a member of the Gorgonzola Foundation. 

Jamil: We're a video game studio... I guess. More like a bunch of friends in my house, but whatever.

Jamil: Anyways, you're a Trainer, you don't care about this stuff... but maybe I can bribe you into helping me.

Jamil gestures towards Player.

Jamil recieves `ITEM_GOLD_POTION`.
Player's Gold Potion Dose Size increases.
Go To "Before Quest Start".

### Interact with Jamil and Quest Inactive And Has Met Jamil


Jamil: PLAYER!

Jamil: Good to see you again. And I was right! You're stronger now.
Player: Who are -

Jamil: Oh right, I never introduced myself!

Jamil: I'm Jamil. I'm a member of the Gorgonzola Foundation. 

Jamil: We're a video game studio... I guess. More like a bunch of friends in my house, but whatever.

Jamil: Anyways, you're a Trainer, you don't care about this stuff... but maybe I can bribe you into helping me.

Jamil: Has the Gold Potion been useful during your adventure?

Player sees Yes / No box.

### Player Answers No


Jamil: Really? That's disappointing, we worked really hard on that! Well, let's see if this makes it more useful.

Jamil gestures towards Player.
Player's Gold Potion Dose Size increases.

Jamil: Now you can use the Gold Potion another time before having to refill it at a Pokémon Center.

### Player Answers Yes


Jamil: Awesome! We worked really hard on that! Well, let's see if this makes it more useful.

Jamil gestures towards Player.
Player's Gold Potion Dose Size increases.

Jamil: Now you can use the Gold Potion another time before having to refill it at a Pokémon Center.

### Before Quest Start


Jamil: That was for free. If you want more neat perks, you'll have to help me.
Quest starts.

Jamil: Like I said, we're a video game studio. I said we, but you'll notice that nobody is here.

Jamil: Everybody claims they're busy, but I'm sure most of them are just goofing off. 

Jamil: We're not going to be able to finish the game by the upcoming deadline if people don't get it into gear, but everybody is totally fine with that!

Jamil (whisper): Probably because boss is telling everybody that its fine...

Jamil: If you see a Gorgonzola Foundation staff member around Resido, can you tell them I sent you to bring them back here?

Jamil: They might need help with something else... but knowing that I've deputized a random Trainer should be enough to snap them back to our reality.

Jamil gestures towards Player.

Jamil: Your To-Do List should show you where everybody is in the region. Get them back here pronto!

### Interact with Jamil and Quest Active


Jamil: If it wasn't obvious, I'm the project manager for the studio.

Jamil: I make sure people get paid, deadlines are met, and things are organized.

Jamil: When I do my job perfectly, nobody even knows I'm here!

Jamil: Your To-Do List should show you where everybody is in the region. Get them back here pronto!

### Interact with Jamil and Quest Reward


Jamil faces east.

Jamil faces west.

Jamil: I'm not going to lie, I didn't think you would actually go out and get everybody.

Jamil: Furthermore, I didn't think they would all actually come back!

Jamil: I'm impressed, PLAYER. Unfortunately...

Jamil (sweat): I didn't actually prepare a reward for you!

Jamil: Hmmm.

Jamil: You know what? The studio has some extra funds for one-off expenses.

Jamil gestures towards Player.
Show Money Box.  
Play Money Sound.  
Add $500000 to the player.  
Update Money Box.  
Close Money Box.

Jamil: Rather than me give you some stupid trinket that you don't need, go buy yourself something!
Quest complete.

### Interact with Jamil and Quest Complete and Has Not Battled Ever


Jamil: I've always said we should get more directly involved with Trainers.

Jamil: I'm not strong, but watching Strider has kept me a little sharp.

Jamil: Up for a battle?

### Player Says Yes

Jamil: Let's cook!

Player battles Jamil.

### Player Says No

Jamil: Hmm, okay. If you change your mind...

### Interact with Jamil and Quest Complete And Has Battled Ever

Jamil: Back for another battle?

### Player Says Yes

Jamil: Let's cook!

Player battles Jamil.

### Player Says No

Jamil: Hmm, okay. If you change your mind...

### Player loses to Jamil

Jamil: Oof, losing to me? You've got some work to do.

### Player defeats Jamil

Jamil: gg!

### After Battle

Jamil: If you're in the mood, come back tomorrow. I'd be happy to battle again!

### Interact with Jamil and Quest Complete and Has Battled Today And Has Started Cute Pokemon

Jamil: You know Melissa, the barista? She's my girlfriend! Isn't she cute?

### Interact with Jamil and Quest Complete and Has Battled Today And Has Finished Corsola Quest

Jamil: That Corsola that you caught for Melissa? That was actually for me - I just think they're so cute!

### Interact with Jamil and Quest Complete and Has Battled Today And Has Finished Cute Pokemon

Jamil: If you see Melissa at work around Resido, could you please just check on her?

Jamil: Despite working all the time, sometimes she gets lonely.

# Summary & Notes
When the Player enters a Gym for their second badge, Jamil runs up to the Player, already knowing who they are, and gives them the Gold Potion. Jamil encourages the Player to visit them at Route 99 and quickly leaves.

When the Player talks to Jamil in their house later on, Jamil introduces themselves as a member of the Gorgonzola Foundation, and asks the Player to find all of the other members and have them come back to work. After getting everybody to come back, Jamil admits that they didn't think the Player would be able to do them, and pays their Reward from the Gorgonzola Foundation slush fund.

---

The player is able to access after finishing "[Aaand We're Back!](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/rec6JwGlcuewoTYwM?blocks=hide)".
