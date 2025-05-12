* [Airtable](https://airtable.com/appJxoYhsNja2FfjK/tblzTEiSlQuwPFXec/viwaJSwgDyFgyNA5G/recSV7nFEnTcT5C9w?blocks=hide)
* [game\_pkmnsnfrn Script Handbook](https//docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_MUTUALAIDFUND)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_MUTUALAIDFUND)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_MUTUALAIDFUND)` \== `TRUE`

## Functions

### Waves of Change
The Waves of Change allow the player to select a Mutual Aid cause. Selecitng a cause will show the Player:
* What percent of the goal has the Player contributed?
    * Tracked by `VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_X`.
* What percent of the goal have other people contributed? 
    * Tracked by `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_X`.

From each cause's screen, the Player is prompted to donate a dollar amount to the cause. Players can increase or decrease the amount of money donated, with the maximum amount being either 
* the Player's maximum money.
* the amount left in the goal.
Whichever comes first.

The Player can only donate in 1% increments.

After selecitng an amount, this is subtracted from the Player's money, and the approrpiate `PLAYER_PERCENT` variable is updated.

### Passive Contributions
Every day at midnight, the game runs through the following calculations:
* If the Player has not started the quest, do nothing.
* If the Player is in the True Timeline, roll a random number from 0 to 5.
* If the Player is not in the True Timeline, roll a random number from 0 to 2.
* If this random number plus `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_X` is greater than `VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_X`, do nothing.
* Otherwise, increase `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_X` by this amount.

### Food Security

#### Variables
`VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_1`
`VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_1`

#### Subquest
`SUB_QUEST_1`

#### Related Quest
Restaurant Expansion

#### Fund Goal
$400810

#### Desc
Use the mutual aid fund to scale up and be less reliant on Needles, and use that to feed more people

### Healthcare

#### Variables
`VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_2`
`VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_2`

#### Subquest
`SUB_QUEST_2`

#### Related Quest
The Boy Who Cries With Wolves

#### Fund Goal
$64151

#### Desc
Use the mutual aid fund to get a doctor working full time to provide healthcare to those who can't otherwise access

### Social Housing

#### Variables
`VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_3`
`VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_3`

#### Subquest
`SUB_QUEST_3`

#### Related Quest
Neighborhood Clean Up

#### Fund Goal
$382525

#### Desc
Building and getting people into community based housing and get people off the streets

### Criminal Reform

#### Variables
`VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_4`
`VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_4`

#### Subquest
`SUB_QUEST_4`

#### Related Quest
Find The Guilty

#### Fund Goal
$122161 

#### Desc
Build programs to help harm victims and those who cause harm to getting to a place of real healing and justice 

### Legal Defense

#### Variables
`VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_5`
`VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_5`

#### Subquest
`SUB_QUEST_5`

#### Related Quest
Building Scope

#### Fund Goal
$30351

#### Desc
Getting people without the means or funds access to the legal system 

## Variables / Flags

### `VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_1`
### `VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_2`
### `VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_3`
### `VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_4`
### `VAR_QUEST_MUTUAL_AID_PLAYER_PERCENT_5`

### `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_1`
### `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_2`
### `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_3`
### `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_4`
### `VAR_QUEST_MUTUAL_AID_PASSIVE_PERCENT_5`

These are stored in saveBlock3 as raw values, NOT variables. This is because only 1 - 100 needs to be stored, so we can use u8 instead of u16.

# Involved Instances

## Instance Name

### [`Mutualaidfundraiser`]()

* Mutualaidfundraiser is facing a random direction.
* Mutualaidfundraiser is always visible.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Mutualaidfundraiser is building a mutual aid network and needs funding for them to be successful

### Quest is Complete

* Mutualaidfundraiser has successfuly funded all of their mutual aid initatives

## `BUZZR`

### Anytime

* Mutualaidfundraiser talks about the importance of building mutual aid, asks people to come to Mermereza to learn about it

## True Timeline

* Mutualaidfundraiser is happy to see people like Player getting involved in really making Resido a better place, has noticed more people donating

### Quest Reward

* Mutualaidfundraiser exclaims that the people of Resido are truly working towards building something magical and thanks everybody for their help

## `MAP_MERMEREZA_CONSULTING`

### Interact with Mutualaidfundraiser and Quest Inactive
* Mutualaidfundraiser says they were once unhoused, but were lucky enough to get a job and escape that cycle
* Mutualaidfundraiser is feels lucky, but wants to find a way to help people who aren't as lucky
* Mutualaidfundraiser is describes their latest project, a fund that people can donate it to help fund causes for those who can't afford them
* Mutualaidfundraiser says it would mean a lot if the Player could chip in
If Player is in False Timeline:
    * Mutualaidfundraiser exclaims that there's even an app  
If Player is not in False Timeline:
    * Mutualaidfundraiser says they worked with The Tide to build an app
* Mutualaidfundraiser explains that the App is used to track progress towards those goals
Mutualaidfundraiser gestures towards Player.
Run `EventScript_InstallWavesOfChangeApp`.
Quest starts.
* Mutualaidfundraiser asks to talk to them if Player wants to learn about any of the causes

### Interact with Mutualaidfundraiser and Quest Active
* Mutualaidfundraiser greets Player and asks which of the
Player is presented a menu with the following items:
* Food Security
* Healthcare
* Social Housing
* Criminal Reform
* Legal Defense

### Player Chooses Food Security
* Mutualaidfundraiser explains that this fund is to help bolster existing efforts that combat food insecurity for people and Pokémon
* Mutualaidfundraiser explains that traditional charity methods can work, but being reliant on government rules and funding means that some people are often shut out
* Mutualaidfundraiser wants to make sure nobody slips through the cracks
If `SUB_QUEST_1` is complete:
    * Mutualaidfundraiser says that this goal has already been met and thanks the Player so much for their help
    If `SUB_QUEST_1` of Outreach Quest is incomplete:
        * Mutualaidfundraiser suggests talking to Mutualaidoutreacher to help find the right way to direct these funds
    If `SUB_QUEST_1` of Outreach Quest is complete:
    * Mutualaidfundraiser is thrilled to hear that Belén's restaurant will be able to feed even more people now

### Player Chooses Healthcare
* Mutualaidfundraiser wants to create a fund that can pay a doctor to see humans that don't have access to healthcare
* Mutualaidfundraiser says that while they won't be a full hospital, somebody with medical knowledge who can help people before small sitautions sprial will be invaluable
If `SUB_QUEST_2` is complete:
    * Mutualaidfundraiser says that this goal has already been met and thanks the Player so much for their help
    If `SUB_QUEST_2` of Outreach Quest is incomplete:
        * Mutualaidfundraiser suggests talking to Mutualaidoutreacher to help find the right way to direct these funds
    If `SUB_QUEST_2` of Outreach Quest is complete:
    * Mutualaidfundraiser is so happy to see Boycrieswolvesdoctor seeing patients and able to work

### Player Chooses Social Housing
* Mutualaidfundraiser wants to create a fund where small communities can get funding to collectively own and provide housing
* Mutualaidfundraiser laughs that getting access to stable housing is a surprisingly simple solution to a lot of the problems of unhoused folk's problems
* Mutualaidfundraiser says that collective housing means that everybody that lives there has a stake in maintaining and improving the property
If `SUB_QUEST_3` is complete:
    * Mutualaidfundraiser says that this goal has already been met and thanks the Player so much for their help
    If `SUB_QUEST_3` of Outreach Quest is incomplete:
        * Mutualaidfundraiser suggests talking to Mutualaidoutreacher to help find the right way to direct these funds
    If `SUB_QUEST_3` of Outreach Quest is complete:
    * Mutualaidfundraiser thinks its awesome that fund is going to be used to keep an existing community together

### Player Chooses Criminal Reform 
* Mutualaidfundraiser wants to use these funds to create a local program to help people involved in harm own their healing, accountability and justice.
* Mutualaidfundraiser explains that these programs need to hire people that can mediate between those who hurt and have been hurt to help people lead to better outcomes.
* Mutualaidfundraiser laments that the criminal justice system is not focused on healing and actual justice - locking people up is not always correct answer, and odften times is not focused on the correct person
If `SUB_QUEST_4` is complete:
    * Mutualaidfundraiser says that this goal has already been met and thanks the Player so much for their help
    If `SUB_QUEST_4` of Outreach Quest is incomplete:
        * Mutualaidfundraiser suggests talking to Mutualaidoutreacher to help find the right way to direct these funds
    If `SUB_QUEST_4` of Outreach Quest is complete:
    * Mutualaidfundraiser thinks its inspiring to hear that FindtheguiltyplantH wants to help lead a program similar to the one that helped them

### Player Chooses Legal Defense
* Mutualaidfundraiser wants to use these funds to help get legal representation
* Mutualaidfundraiser says the current legal system requires people to jump through so many hoops and pay for lawyers, and most people can't navigate that without funding and help
* Mutualaidfundraiser says that people with money should not be able to use the legal sysetem to bully people who don't have the means
If `SUB_QUEST_5` is complete:
    * Mutualaidfundraiser says that this goal has already been met and thanks the Player so much for their help
    If `SUB_QUEST_5` of Outreach Quest is incomplete:
        * Mutualaidfundraiser suggests talking to Mutualaidoutreacher to help find the right way to direct these funds
    If `SUB_QUEST_5` of Outreach Quest is complete:
    * Mutualaidfundraiser hopes BuildingscopesquatterB and BuildingscopesquatterC are able to get their house back

### Interact with Mutualaidfundraiser and Quest Reward
* Mutualaidfundraiser never thought all of these goals would get filled up
* Mutualaidfundraiser is so happy to see poeple understand the importance of supporting each other
* Mutualaidfundraiser thanks the Player for all their contributions
* Mutualaidfundraiserdoesn't have anything to offer unfortunately, but hopes the Player sees the region improve with them

### Interact with Mutualaidfundraiser and Quest Complete and Outreach Quest Incomplete
* Mutualaidfundraiser says that fundraising is really only half of the battle
* Mutualaidfundraiser explains that finding people to faciliate and recieve programs is arguaby even harder
* Mutualaidfundraiser believes that Mutualaidoutreacher will absolutely make it work

### Interact with Mutualaidfundraiser and Quest Complete and Outreach Quest Complete
* Mutualaidfundraiser is moved to tears about how much good they're able to do
* Mutualaidfundraiser really hopes that this inspires these networks to get better as people understand the importance of helping each other and building communities of solidarity

# Summary & Notes
Mutualaidfundraiser explains to the Player that they're working on a network of Mutual Aid programs where people use their talents to help each other outside of the current systems of charity and government. Those initatives are Food Security, Healthcare, Social Housing, Criminial Reform, and Legal Defense.

Mutualaidfundraiser explains that The Tide helped build an app to help track these initatives, and asks the Player to join the cause. Mutualaidfundraiser installs the Waves of Change app on the Player's phone, and the Quest Starts. If the Player speaks to Mutualaidfundraiser again, they will explain each of the causes and how they will benefit the commnuity.

---

The Player is able to access after finishing "[Ready, Set, I Started 2 Hours Ago](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/reck2Uf6L8MgR6ObL?blocks=hide)".
