[Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/recr0g6jHfPDpPPTH?blocks=hide)  
[game\_pkmnsnfrn Script Handbook](https://docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_FIND_THE_GUILTY)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_FIND_THE_GUILTY)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_FIND_THE_GUILTY)` \== `TRUE`

### Innocent Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_FREE_THE_INNOCENT)` \== `TRUE`

# Involved Instances

## [FreetheinnocentcomradeA](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rechUYsVYIS9AkfWW?blocks=hide)

FreetheinnocentcomradeA is only visible After Speech.  
FreetheinnocentcomradeA is facing north.

## [FindtheguiltyvictimB](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rechUYsVYIS9AkfWW?blocks=hide)

FindtheguiltyvictimB is only visible when Quest Complete.  
FindtheguiltyvictimB is facing south.

## [FindtheguiltyplantH](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rechUYsVYIS9AkfWW?blocks=hide)

### [`MAP_PIOCA_BRIDGE`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recHaMYJdThj3ojBF?blocks=hide)

FindtheguiltyplantH is NOT visible if Guilty Quest is complete.  
FindtheguiltyplantH is facing south.

### [`MAP_TORGEOT_CLIMB`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recjpX8wo0w3B4d2s?blocks=hide)

FindtheguiltyplantH is visible if Guilty Quest is complete.  
FindtheguiltyplantH is wandering randomly.

## [FindtheguiltyfriendI](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl98sGCesUarpAdy/viwP2YNv2F8XlInLT/recIVGmYaQ8rZGGPp?blocks=hide)

FindtheguiltyfriendI is NOT visible except for during a specific scene.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Figure out who is responsible for the hiking club robbery

### Quest is Complete

* Turns out FindtheguiltyplantH was hired to frame FindtheguiltyvictimB, but who?

## `BUZZR`

### Quest is Complete

* TideMember: Asks why Sharprise is meddling in the affairs of a local hiking club

## `MAP_ARANTRAZ_MESS_HALL`

### Interact with FreetheinnocentcomradeA and Innocent Quest Complete and Temp Flag Not Set

* FreetheinnocentcomradeA exclaims that the police actually let FindtheguiltyvictimB free  
* Wonders how they managed to mess up so badly  
* Says the player did a better job investigating than the police ever could

### Interact with FindtheguiltyvictimB and Quest Inactive

* FindtheguiltyvictimB asks if you’re the detective responsible for clearing their name  
* Player says they’re hardly a detective just another Trainer  
* FindtheguiltyvictimB recognizes you as the Champion no less, and says its good to have powerful comrades  
* FindtheguiltyvictimB says the real robbery perpetrator is still out there  
* FindtheguiltyvictimB explains that there was some grainy CCTV footage of the robbery  
* Footage showed a guy that sorta looked like FindtheguiltyvictimB but destroyed the door with a super strong Palafin and water was found at the crime scene afterwards  
* FindtheguiltyvictimB has some water types, never mind a Palafin  
* Police assumed water \+ similar looking guy \= guilty  
* FindtheguiltyvictimB wishes there was a better way to track down who could have been involved

Quest starts.

* FindtheguiltyvictimB wonders who has a Palafin that even cares about the hiking club

### Interact with FindtheguiltyvictimB and Quest Active

* FindtheguiltyvictimB wonders who has a Palafin that even cares about the hiking club

### Interact with FindtheguiltyvictimB and Quest Reward

* FindtheguiltyvictimB exclaims they heard the news  
* FindtheguiltyvictimB thinks its so weird that they claim to be a plant  
* FindtheguiltyvictimB doesn’t understand who would hire somebody to frame a random member of a hiking club  
* FindtheguiltyvictimB thanks for the player for their help

Quest complete.

### Interact with FindtheguiltyvictimB and Quest Complete

* FindtheguiltyvictimB wonders if the target wasn’t the hiking club but rather members of The Tide  
* FindtheguiltyvictimB can think of a few powerful groups hoping to discredit the The Tide

## `MAP_PIOCA_BRIDGE`

### Interact with FindtheguiltyplantH and Quest Active

If the player is NOT facing south, proceed to “FindtheguiltyplantH Pre Battle”.  
Fade to black.  
Move the player to one metatile to the right of FindtheguiltyplantH.  
Player faces west.  
FindtheguiltyplantH faces east.  
Fade from black.

### FindtheguiltyplantH Pre Battle

* Player asks if FindtheguiltyplantH is part of the hiking club  
* FindtheguiltyplantH nervously answers yes  
* Player remembers that FindtheguiltyplantH has a Palafin  
* Player asks if they know anybody else with a Palafin  
* FindtheguiltyplantH screams they didn’t do anything  
* FindtheguiltyplantH freaks out and attacks

Player battles FindtheguiltyplantH.

### FindtheguiltyplantH defeats Player

* FindtheguiltyplantH says they didn’t do anything wrong

### FindtheguiltyplantH is defeated

* FindtheguiltyplantH screams that they can’t take feeling guilty anymore

### After Defeating FindtheguiltyplantH

Quest is Reward.  
FindtheguiltyfriendI is added to the map.

* FindtheguiltyplantH has a mental breakdown and screams  
* FindtheguiltyplantH immediately admits to robbing the hiking clubhouse  
* FindtheguiltyplantH says they were hired to frame FindtheguiltyvictimB by some people with a lot of money  
* FindtheguiltyplantH is sorry and starts crying and says they have to go

FindtheguiltyplantH faces north.  
FindtheguiltyfriendI walks one step south.

* FindtheguiltyplantH is surprised to see FindtheguiltyfriendI  
* FindtheguiltyfriendI asks if they heard all that correctly  
* FindtheguiltyfriendI says they’re part of the triathlon club which FindtheguiltyplantH is also a part of  
* FindtheguiltyfriendI can’t believe all of this is going on and scolds FindtheguiltyplantH missing practices for this

FindtheguiltyfriendI walks one step east.  
FindtheguiltyfriendI faces south.

* FindtheguiltyfriendI thanks the player for helping uncover this  
* FindtheguiltyfriendI wants to figure out how to get justice  
* FindtheguiltyplantH cries and asks if they’re going to nail now  
* FindtheguiltyfriendI says that’s not up to them, but they’re going now, tells FindtheguiltyplantH to come on

FindtheguiltyfriendI walks three steps north.  
FindtheguiltyplantH walks three steps north.  
Screen fades to black.  
FindtheguiltyplantH is removed from map.  
FindtheguiltyfriendI is removed from the map.  
Screen fades from black.

## `MAP_TORGEOT_CLIMB`

### Interact with FindtheguiltyplantH and Quest Complete

* FindtheguiltyplantH is surprised / scared to see the player  
* FindtheguiltyplantH says they were banned from the running club until they did a 1000 hours of service by picking up trash on Torgeot CLimb
* FindtheguiltyplantH is thankful that the hiking club didn't move to have them arrested
* FindtheguiltyplantH was impressed by the system they had in place to handle people who had caused harm
* FindtheguiltyplantH is genuinely sorry and hopes there were more situations where people who have a way to make things right instead of being thrown in jail

# Summary \+ Notes

In this quest, the player helps uncover the truth behind a robbery at the hiking clubhouse. Initially, the police wrongly arrest FindtheguiltyvictimB based on circumstantial evidence involving water at the crime scene and their ownership of Water-type Pokémon. Through interactions, the player learns that FindtheguiltyplantH, another club member, was the true culprit, hired to frame FindtheguiltyvictimB. After a battle, FindtheguiltyplantH breaks down and confesses to the crime, revealing they were pressured by powerful groups. The quest ends with FindtheguiltyplantH facing the consequences of their actions, performing community service as part of their penance.  

---

The player is able to access this quest after finishing “[Find The Guilty](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/rechUYsVYIS9AkfWW?blocks=hide)”.

