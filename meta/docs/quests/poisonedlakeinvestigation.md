# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_POISONED_LAKE_INVESTIGATION)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_POISONED_LAKE_INVESTIGATION)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_POISONED_LAKE_INVESTIGATION)` \== `TRUE`

## Functions

### IncrementDimuState

Increase `VAR_DIMU_STATE` by 1\.

## Variables / Flags

### `VAR_DIMU_STATE`

A variable tracking the player’s progress against Dimu’s quests and battles.

| Value | Constant | Description |
| :---- | :---- | :---- |
|  |  | States associated with Dimu’s first quest |
|  | `DEFEATED_DRILLGUARDA` | Has Defeated DrillguardA |
|  | `DEFEATED_DRILLGUARDB` | Has Defeated DrillguardB |
|  | `DEFEATED_DRILLGUARDC` | Has Defeated DrillguardC |
|  | `DEFEATED_DRILLGUARDD` | Has Defeated DrillguardD |
|  | `DEFEATED_DRILLGUARDE`  | Has Defeated DrillguardE |
|  | `HAS_HEARD_SCREAM` | Has Heard Scream |

# Involved Instances

## Dimu

### [`MAP_PERLACIA_CITY`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwwvWMSHWZpPk3yK/recyHgGNOGjBjGVCT?blocks=hide)

Dimu is facing west.  
Dimu is only visible when Quest Inactive AND `QUEST_ECOSYSTEM_IMPACT_STUDY` is complete.

### [`MAP_UNDERWATER_CAVE`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwwvWMSHWZpPk3yK/recJsDudTHwIQ8iGF?blocks=hide)

Dimu is facing north.  
Dimus is only visible when Quest Active.

## [DrillguardA](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwwvWMSHWZpPk3yK/recH2mazoQ4zGr6yV?blocks=hide) / [DrillguardB](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwwvWMSHWZpPk3yK/rec0veUwmWmuKTf05?blocks=hide) / [DrillguardC](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwwvWMSHWZpPk3yK/rec68ZdOXqIfsopfX?blocks=hide) / [DrillguardD](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwwvWMSHWZpPk3yK/recJn3IlIlFLPOzUR?blocks=hide) / [DrillguardE](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwwvWMSHWZpPk3yK/recfJ2r4DGfp23oPT?blocks=hide)

DrillguardX is only visible when Quest Active.

# Scenes

## `QUEST_MENU`

### Quest is Active

Investigate and stop the pollution in Route 10’s lake\!

### Quest is Complete

You uncovered and shut down the drilling project under Route 10\.

## `MAP_PERLACIA_CITY`

//PSF TODO Update Dimu text to fit her Gym text

### Interact with Dimu and Quest Inactive

Dimu: Oh, PLAYER.  
Dimu (whisper): …actually.  
Dimu: I’d like you to…  
Dimu: investigate something for me.  
Dimu: There’s a small lake on Route 10\. Pokémon used to live there, but the pollution levels have recently drastically increased.  
Dimu: I’d like to…  
Dimu: investigate myself, but I’m actually concluding another study.  
Dimu: You’ve proven to be a valuable ally of Pokémon and worthy of my trust.  
Dimu: Could you look at the lake on Route 10 and deduce what’s causing the pollution?  
Dimu: If you figure out how to stop it, I’ll even upgrade the Hyper Aroma that I gave you.  
Quest starts.  
Dimu: I’ll see you…  
Dimu: around.

## `MAP_ROUTE_10`

### Player Enters Route

If Quest is not Active or greater, Dive metatiles on the lake are replaced with the Route 10 water metatiles.

### Player Interacts with Lake And Cannot Surf

Noxious fumes waft off the water’s surface… A Pokémon may be able to cross it.

### Player Interacts with Lake and Can Surf

Noxious fumes waft off the water’s surface… Would you like to use Surf?

### Player Interacts with Dive Warp and Cannot Dive

It’s a deep part of the murky pool. A Pokémon may be able to dive down.

### Player Interacts with Dive Warp and Can Dive

It’s a deep part of the murky pool. Would you like to use Dive?

## `MAP_ROUTE_10_UNDERWATER`

### Player Takes First Step Underwater

The water is too toxic to swim in\! Your Pokémon taking damage from the pollution.

### Player Attempts To Resurface And Can Dive

Light is barely visible through the nearly opaque water. Would you like to use Dive?

### Player Attempts To Resurface And Can Not Dive

Light is barely visible through the nearly opaque water. A Pokémon may be able to surface.

## `MAP_UNDERWATER_CAVE`

All of the instances in this cave are positioned in a way that you cannot see multiple at a time on one screen.

When the player enters this cave and Quest Active, there are some patches of ground that have a layer of grass and flowers over them. No trainers are standing on these patches of grass.

If `VAR_DIMU_STATE` \< `HAS_HEARD_SCREAM`, then the BGM for this map is `MUS_CAVE_DRILL`.

### Interacts with DrillguardA for the first time

DrillguardA: Hey\! This is a top secret operation, and we have orders to keep everybody out\!  
Player battles DrillguardA.  
If the Player wins, run IncrementDimuState.

### Player loses to DrillguardA

DrillguardA: And stay out\!

### Player defeats DrillguardA

DrillguardA: I’m going to need backup\!

### Interact with DrillguardA after battle

DrillguardA (shout, phone): This is DrillguardA\! I need backup at the tunnel entrance\!  
DrillguardA (shock,whisper): Why isn’t anybody answering?

### Interacts with DrillguardB for the first time.

DrillguardB: What is some Trainer doing down here? There’s no special Pokemon or anything.  
Player: Yeah, because you scared them away\! Your construction is harming the water and the Pokemon around here\!   
DrillguardB: Look, we’re supposed to dig a tunnel, lay some cables, and that’s it.   
DrillguardB: You got a problem, take it up with Boring Holdings\!

Player battles DrillguardB.  
If the Player wins, run IncrementDimuState.

### Player loses to DrillguardB

DrillguardB: I don’t make the rules.

### Player defeats DrillguardB

DrillguardB: How did you even know to Dive down here?

### Interact with DrillguardB after battle

DrillguardB: All of the construction projects in Resido have to get strict regulator approval. If you’ve got a problem, take it up with them\!  
DrillguardB (whisper): …you know, I don’t remember seeing any of those government approval signs, now that I think about it.

### Interacts with DrillguardC for the first time

DrillguardC (shock): Aah\! Where did DrillguardF go?\!?\! I swear they were here a second ago\!  
Player battles DrillguardC.  
If the Player wins, run IncrementDimuState.

### Player loses to DrillguardC

DrillguardC: Now to find DrillguardF…

### Player defeats DrillguardC

DrillguardC: Am I going to disappear too\!?

### Interact with DrillguardC after battle

DrillguardC: He was standing guard next to me, and I went to pee and come back and they were gone\!  
DrillguardC (whisper): And how is there grass in here? We’re under a mountain\!

### Interacts with DrillguardD for the first time

DrillguardD: What? How did you get past DrillguardC and DrillguardF?  
Player battles DrillguardD.  
If the Player wins, run IncrementDimuState.

### Player loses to DrillguardD

DrillguardD: You don’t belong down here anyways\!

### Player defeats DrillguardD

DrillguardD: Oh.. I see how you got past them.

### Interact with DrillguardD after battle

DrillguardD: That lake at the entrance… I don’t think Pokémon are going to be able to live in that lake for a long, long time.

### Interacts with DrillguardE for the first time

DrillguardE: I had no idea this drill would be so loud\!  
Player battles DrillguardE.  
If the Player wins, run IncrementDimuState.

### Player loses to DrillguardE

DrillguardE: Too distracted to fight me, huh?

### Player defeats DrillguardE

DrillguardE: I can’t even hear myself think\!

### Interact with DrillguardE after battle

DrillguardE: As we dig deeper and deeper, we see a ton of Pokémon fleeing, even when we’re not in their way. Do you think they’re trying to get away from the sound?

### Approach Drill

If 

* the player steps on a tile that sections off the last portion of the cave AND   
* Quest is Active

Then:  
Run IncrementDimuState.  
???: No\! I was just doing my job, I’m sorry\!  
??? (shout): Please\! Have mercy\!  
Play Arboliva’s cry.  
Play Cave Music without drill sound.

### Interact with Dimu

Set `FLAG_INFINITE_LURE` to `TRUE`.  
Dimu: Oh, PLAYER.  
Player (question): Wait, how long have you been here?  
Dimu: I…  
Dimu: just got down here. I…  
Dimu: ran past you as you were battling. I found another way to get down here.  
Dimu: I’ve taken the key,   
Dimu faces north.  
Dimu faces the player.  
Dimu: so they won’t be able to do anymore damage.  
Dimu: What’s worse, is these bureaucrats will say anything to justify these horrors.  
Dimu: Power? Internet? What else could Perlacia City possibly need?  
Dimu looks around.  
Dimu: It’s going to take so long to restore this area so that Pokemon will return. Disgusting.  
Dimu faces the player.  
Dimu: Ah yes, I believe you were being motivated by my promised reward…  
Dimu gestures to the player.  
Play item get sound effect.  
Dimu installed Lure Mode into Hyper Aroma.  
Dimu: Hyper Aroma now has two modes \- Lure or Repel. Repel is the original mode that I gave you, which will keep Pokemon away. Lure will attract Pokemon towards you.  
Dimu: The Hyper Aroma has some interesting side effects in Lure mode.   
Dimu: Pokemon encountered are stronger than Pokemon in the area normally are.   
Dimu: Pokemon encountered are twice as likely to be alternatively colored. The data suggests that’s .048828125%.  
Player: Thanks Dimu. This is really neat.  
Quest complete.  
Player (shock): Oh\! I heard somebody yelling when I was \-  
Dimu faces north.  
Dimu: I think my Pokemon need more rigorous exercise. I don’t like having to rely on a human, but Trainer battles are the most efficient way.  
Dimu: If you’re looking to train, come to the Halerba Gym. We’ll rematch until I’m ready.  
Dimu walks east five steps and south five steps.  
Dimu is removed from the map.

# Old Summary

**You can stop reading here.**  
"Underwater in a lake that is being poisoned by runoff from a mining operation. Every X steps in the water, either above or below ground, will cause the player's Pokémon to be poisoned lose Y% of their total HP. The player is notified the first time this happens.

Player will need Dive to get here."

"NEW QUEST  
Dimu is concerned about disruptions in one area's wildlife, Dimu sends you to invesitgate what it is

once you're there, the employees start battling you and as you get deeper and deeper, you are evantually led to shut down the operation to stop hurting wildlife

the drilling to lay the power lines under route 10 is hurting the habitat

it needs to be clear that pokemon are disrupted

there is a lake on route 10 with clearly contaminated water, going into the water at all poisoned one random member of your team, diving in the lake and going through a tunnel reveals a cave where the drilling operating is taking place

operating is laying new power lines for the data center under salesforcetower which is powering the ultra wormhole research

dimu is lying \- claims she has no idea what it is but is absolutely tricking the player into ecosabotage

OLD

Dimu talks about SF tradition of giving each other berries after battles. Thinks the tradition is cute but is worried about the berry ecosystem in SF  
Asks you to help her collect the berries in Muir Woods to plant into the botantic garden to help sustain the practice  
Can be found randomly generating in different corners of Muir Woods"  
