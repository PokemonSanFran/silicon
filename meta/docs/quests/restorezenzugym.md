* [Airtable](https://airtable.com/)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_RESTOREZENZUGYM)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_RESTOREZENZUGYM)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_RESTOREZENZUGYM)` \== `TRUE`

### Has Talked Baiya
`VAR_STORYLINE_STATE` \<= `STORY_POST_BATTLE_BAIYA_ZENZUISLAND`

## Functions
### `GenerateRoleMenu`
For each subquest that is not completed, show the following items in a list:
| Subquest | Item |
| --- | --- |
| `SUB_QUEST_1` | Fundraiser |
| `SUB_QUEST_2` | Visual Effects |
| `SUB_QUEST_3` | Actors |
| `SUB_QUEST_4` | Lighting |
| `SUB_QUEST_5` | Producer |

# Involved Instances

## Doyle

### [`MAP_ZENZU_ISLAND`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recBoRikFIhboPeKL?blocks=hide)

* Doyle is facing south.
* Doyle is not visible when Quest Complete or In False Timeline.
* Doyle is standing in front of the Espulee Gym, facing South, after Has Talked Baiya. 
* Doyle is otherwise standing at the north side of the island, facing the water.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Doyle needs to be convinced that Resido is worth fighting for

### Quest is Complete

* Doyle is going to set up his studio in Resido

## `BUZZR`

## Quest Active

* Random heard the cry of a fierce monster on Zenzu Island, wonders if Doyle is actively battling again

### Quest Complete

* Baiya encourages Trainers to check out Zenzu's Battle Studio as a great place to level up
* Doyle says he's going to start building up a new independent film and battle studio on Zenzu, wants the community to get involved

## `MAP_ZENZU_ISLAND`

### Interact with Doyle And Has Not Talked Baiya
Doyle does not face the Player.
* Doyle mutters about how Resido is doomed
* Doyle needs to take their talent elsewhere

### Interact with Doyle And Has Talked Baiya
* Doyle addresses the Player as Champion and says that Baiya said they'd be coming
* Doyle wants to test if Player has really earned the Champion title
Player battles against Doyle.

### Interact with Doyle And Has Battled Doyle Previously
* Doyle wants to test if Player has really earned the Champion title
Player battles against Doyle.

### Player loses to Doyle
* Doyle exclaims that they still got it

### Player defeats Doyle
* Doyle is shocked, they haven't had a chance to go all out with their Kaiju in a long time

### After Battle
* Doyle formally introduces themselves - they work on movie sets on Zenzu Island and used to moonlight as the Zeznu Gym Leader before that production got cancelled
* Player explains that Zenzu Gym is exactly why they're there
* Doyle interupts and says they were pretty upfront of Baiya
* Doyle has zero interest in spinning up a show that not only doesn't truly take the fight to Sharprise, but arguably helps them
* Doyle states Resido is a lost cause - 
* Doyle says that they're the monster expert of Resido, and the Sharprise executives are scarier than anything he's ever captured
* Doyle says their work needs to go to the next level, and thinks Baiya's plan can do that, just not in Resido, but would be succesful in somewhere like Unova's Pokestar Studios
* Doyle believes that their hand in creating change is best served as somebody creating revolutionary films and art, but needs to work somewhere where their work will have more support AND have more impact and therefore create change
* Doyle remarks that Zenzu Island's film and battle industry is too small in comparison - they should 
* Player argues that Resido will never get to that point unless people invest in it - Player also doesn't agree with The Tide, but acknowledges that their movement is made up of people who need to grow and nuture something
* Doyle aruges that Resido doesn't even have the people to start with
* Doyle says that if the Player and Baiya think Resido is worth saving, then prove it
Quest starts.
* Doyle says for their dream to have any legs in Resido, they need to find people that think about Pokémon battling in new, visionary ways, who also have the skills to help advance Doyle's vision of a studio
* Doyle comments that he's heard some whispers of people who can hack it, but everybody was generally a waste of time
* Doyle says they gave up trying to find new people, but they've put the locations of the remaining people in their list in Player's Todo List
* Doyle says maybe the Player will have better luck

### Interact with Doyle And Quest Active
* Doyle says for their dream to have any legs in Resido, they need to find people that think about Pokémon battling in new, visionary ways, who also have the skills to help advance Doyle's vision of a studio
* Doyle believes he's missing some key roles right now.
Run `GenerateRoleMenu`.

| Sub Quest | Menu Item|
| --- | --- |
| `SUB_QUEST_1` | Fundraiser |
| `SUB_QUEST_2` | Visual Effects |
| `SUB_QUEST_3` | Actors |
| `SUB_QUEST_4` | Lighting |
| `SUB_QUEST_5` | Producer |

### Player Presses B or Chooses Cancel
* Doyle asks if the Player is done wasting their time

### Player Selects Fundraiser
* Doyle needs somebody to help get funds for the new studio - somebody that already bought into thinking about battles differently and understands the vision

### Player Selects Visual Effects
* Doyle wants somebody who knows how to warp what people can see and feel using the equipment at their disposal

### Player Selects Actors
* Doyle wants actors that can think quick on their feet and don't need to be handheld through a script

### Player Selects Lighting
* Doyle knows that they can create top tier sets, but they'll need to work with somebody who can make their work shine with the best understanding of lighting and wiring

### Player Selects Producer
* Doyle knows they're not good at tactics and keeping things running - a producer who can perform under pressure will be key

### Interact with Doyle and Quest Reward
* Doyle is very impressed with both Player and Resido
* Doyle didn't think Resido really had all of these incredible people
* Doyle is excited to keep working on this
* Doyle thanks the Player for forcing them to think differently
* Doyle heard Player was a decent actor from ImprovtroupeA - Player should come through the Battle Studio sometime

## `MAP_CAPHE_CITY`
### Interact with Monty and Quest Active
**NOTE FOR FUDJ**

_I wrote this dialogue for an earlier version of the quest. Please update and alter it to match whatever was previously written._

`SUB_QUEST_1` complete.

If all subquests are complete, Quest Reward.

Player: Monty, you said you've made a bunch of money doing this, right?

Monty: Hueh hue, I'm not gonna brag, but I've made a pretty penny seperating fools from 
their money!

Monty: Why? Trying to get into hustling?

Player: No, but I know somebody that would want to work with you...

Screen fades to black.

2 seconds elapse.

Screen fades from black.

Monty: Fundraising, huh? And movies? I'm not sure if that's quite my vibe...

Screen fades to black.

Monty is removed from the map.

Screen fades from black.

## `MAP_POPIDORA_ARCADE`
### Interact with Arcademini and Quest Active
`SUB_QUEST_2` complete.
If all subquests are complete, Quest Reward.
* Arcademini asks if the Player has returned to adminster more punishment
* Player awakwardly says no, but actually has a question
* Player asks if Arcademini did all the lighting and wiring for the Punishment Roulette on their own
* Arcademini confirms and says this is only a fraction of what they're capapble of
* Player asks if Arcademini would be interested in doing more like this on a bigger scale
Screen fades to black.
Screen fades from black.
* Arcademini says that this job sounds very fufilling
* Arcademini asks the Player to keep a secret

### Player Answers No
* Arcademini understands and appreciates Player's honesty
* Arcademini will go talk to Doyle and see what they can do together
Screen fades to black.
Arcademini is removed from the map.
Screen fades from black.

### Player Answers Yes
* Arcademini says that Doyle is actually already familiar with their work
* Arcademini is excited to see an old friend

## `MAP_IRISINA_TOWN`
### Interact with Drughelmettester and Quest Active
**NOTE FOR FUDJ**

_I wrote this dialogue for an earlier version of the quest. Please update and alter it to match whatever was previously written._

`SUB_QUEST_2` complete.

If all subquests are complete, Quest Reward.

Player: Drughelmettester, Drughelmettester, you said you work in audio visual work, right?

Drughelmettester: Yeah, that's how BD and I first met.

Drughelmettester: Doyle, the old Gym Leader from Zenzu Island is looking to work with somebody like you.

Screen fades to black.

2 seconds elapse.

Screen fades from black.

Drughelmettester: Woah, a whole movie production? That's so much bigger than a rave or a Gym...

Drughelmettester: But man, my mind is already racing with the possibilities!

Screen fades to black.

Drughelmettester is removed from the map.

Screen fades from black.

## `MAP_PETAROSA_BOROUGH_IMPROV`
### Interact with ImprovtroupeA and Quest Active
** NOTE FOR FUDJ**
_I wrote this dialogue for an earlier version of the quest. Please update and alter it to match whatever was previously written.

`SUB_QUEST_3` complete.

If all subquests are complete, Quest Reward.

ImprovtroupeA: PLAYER! We're just taking a break - are you here to get some practice in?

Player: No! I actually wanted to talk to you.

Player: After we battled, you mentioned you wanted to get into acting, right?

ImprovtroupeA: It's what we all want to do!

Screen fades to black.

Screen fades from black.

ImprovtroupeA: That sounds like an insane oppurtunity!

ImprovtroupeA: We'll go talk to Doyle.

Screen fades to black.

ImprovtroupeA is removed from the map.

ImprovtroupeB is removed from the map.

ImprovtroupeC is removed from the map.

Screen fades from black.

## `CRESALTA_VISTA`
### Interact with Stresscuporgnanizer and Quest Active
`SUB_QUEST_5` complete.

If all subquests are complete, Quest Reward.

* Stresscuporgnanizer doesn't know how to begin to look for a job that would keep them intersted
* Player asks to confirm that Stresscuporgnanizer wants something high execution, high stress and fufilling
* Stresscuporgnanizer says exactly, and there's no way to just filter job roles by those qualities
* Player mentions that they might have a job role to fit those characteristics

Screen fades to black.

Screen fades from black.

* Stresscuporgnanizer never thought about working on film poroductions
* Stresscuporgnanizer admits that being a Producer DOES seem to have a lot of moving parts
* Stresscuporgnanizer says there's no better way to spike their adrenaline than to jump into a new job headfirst

Screen fades to black.

Stresscuporgnanizer is removed from the map.

Screen fades from black.

# Summary & Notes

Player battles Doyle. Once the Player wins, they properly introduce themselves and explain that they believe in Baiya's vision, but doesn't think its possible in Resido. Doyle says Sharprise and its League is already too far gone, and their talents are best when trying to create real revolutionary art and film. 

Doyle wants to take the same idea to Unova's PokéStar Studios where they think they'll be able to have a bigger impact. Alicia argues that Resido is worth investing in and fighting for, and Doyle challenges Player to prove it. Doyle will consider keeping the idea if the Player can find people in Resido with the skillset of what he needs and who think of battles in a forward, revolutionary way.

Player has to go and talk to five of the NPCs that give out "Unique Battle" quests and convince them to join Doyle's cause. This requires those quests to already be complete.

---

The player is able to access after finishing "[Let's Grab Lunch.](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recJlJgvJ3Sy07JXa?blocks=hide)".
