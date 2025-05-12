[Airtable](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/rec4Cacb2V79JKY01?blocks=hide)  
[game\_pkmnsnfrn Script Handbook](https://docs.google.com/document/d/13TI3Jn3Cq8alPdOI0IBzDoryKTw1xP8dA4kpbc6Y5eg/edit?usp=drivesdk)

# Unique Content

## States

### Quest Inactive State

`questmenu(QUEST_MENU_CHECK_INACTIVE,QUEST_THE_BOY_WHO_CRIES_WITH_WOLVES)` \== `TRUE`

### Quest Reward State

`questmenu(QUEST_MENU_CHECK_REWARD,QUEST_THE_BOY_WHO_CRIES_WITH_WOLVES)` \== `TRUE`

### Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_THE_BOY_WHO_CRIES_WITH_WOLVES)` \== `TRUE`

### Backyard  Quest Complete

`questmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_BUT_ONLY_IN_MY_BACKYARD)` \== `TRUE`

### Has All Items

Player has `ITEM_FIRST_AID_KIT`, `ITEM_JEANS`, `ITEM_CELL_PHONE` in their inventory.

### Doctor Recruited

`subquestmenu(QUEST_MENU_CHECK_COMPLETE,QUEST_PERSUASIVE_PASSENGER,SU_QUEST2)` \== `TRUE`

## Functions

### Run CheckBoyWhoCriesRewardCheck.

If all subquests are complete, Quest is Reward.

## Variables / Flags

## Items

* [`ITEM_FIRST_AID_KIT`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwdOCy9A2R0FYVRl/rec0gVMCoFFxafSj6?blocks=hide)  
* [`ITEM_CELL_PHONE`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwdOCy9A2R0FYVRl/recAa2pAAalMH4YvE?blocks=hide)  
* [`ITEM_JEANS`](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbld7eqR3twPuNd8r/viwdOCy9A2R0FYVRl/rec9OcXGkLVzYn4fp?blocks=hide)

These are all key items only to be used for this quest.

# Involved Instances

## [Boycrieswolvesdoctor](https://airtable.com/appJxoYhBoywhocriesdoctorsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viwaQmECvq88JFIFf/rec4Cacb2V79JKY01?blocks=hide)

Boycrieswolvesdoctor is visible until Doctor Recruited.  
Boycrieswolvesdoctor is randomly walking around.

# Scenes

## `QUEST_MENU`

### Quest is Active

* Help Boywhocriesdoctor get their items that were thrown in the golf course

### Quest is Complete

* Boywhocriesdoctor got his things back, access to the golf course was useful after all

## `MAP_LAKE_WAJABI`

### Interact with Boywhocriesdoctor and Quest Inactive and Doesn’t Have All Items

Boywhocriesdoctor does not turn to face the player.  
Boywhocriesdoctor: Oh man…What am I gonna do?...  
Boywhocriesdoctor turns to face the player.  
Boywhocriesdoctor: Oh. Hello.  
Boywhocriesdoctor: S-some kids stole my stuff and threw it over the fence\!  
Boywhocriesdoctor: On the other side is the golf course…The members there are so rude\! They just pretend I’m not even here\!  
Boywhocriesdoctor: My stuff’s stuck in there and I’m stuck out here…Typical.  
Boywhocriesdoctor: I don’t even have a house… And now more is being taken from me…  
Player: Hey, I’m sorry those kids were so mean to you. Let me help you get your things back.  
Boywhocriesdoctor: Oh\! Oh\! Wow, really? Thanks so much\! That would be amazing\!  
Quest starts.  
Boywhocriesdoctor: Those were some of the last things I own…

### Interact with Boywhocriesdoctor and Quest Active And No Quest Items In Bag

Boywhocriesdoctor: Those were some of the last things I own…

### Interact with Boywhocriesdoctor and Quest Active And Has All Three Items In Bag

Player gestures towards Boywhocriesdoctor.  
Player: Heya, is this everything?  
`SUB_QUEST_1` is complete.  
`SUB_QUEST_2` is complete.  
`SUB_QUEST_3` is complete.  
Player loses `ITEM_FIRST_AID_KIT`.  
Player loses `ITEM_CELL_PHONE`.  
Player loses `ITEM_JEANS`.  
Progress to Interact with Boywhocriesdoctor and Quest Reward.

### Interact with Boywhocriesdoctor and Quest Active And Player Has First Aid Kit

`SUB_QUEST_1` is complete.  
Run CheckBoyWhoCriesRewardCheck.  
Player loses `ITEM_FIRST_AID_KIT`  
Player: Hey I found a First Aid Kit. Is this one of your things?  
Boywhocriesdoctor: It is\! That’s awesome\! Thanks\!  
Player gestures towards Boywhocriesdoctor.  
Boywhocriesdoctor: Basic first aid supplies are important\! It’s crucial you take care of cuts and scrapes before they get infected\!  
Boywhocriesdoctor: My daily meds are in here too…  
Boywhocriesdoctor: Ironic, huh? I used to be a Doctor and now I’m the one without medicine.  
Boywhocriesdoctor: This was probably the most important find. It means a lot.  
If Quest Reward, progress to Interact with Boywhocriesdoctor and Quest Reward.

### Interact with Boywhocriesdoctor and Quest Active And Player Has Cell Phone

`SUB_QUEST_2` is complete.  
Run CheckBoyWhoCriesRewardCheck.  
Player loses `ITEM_CELL_PHONE`  
Player: Think I got something for you.  
Boywhocriesdoctor: Hey, that’s…  
Player gestures towards Boywhocriesdoctor.  
Boywhocriesdoctor: Some people think that I’m lying about being homeless because I have a phone. Of course, cheap phones are easy to find if you know the right place to look.  
Boywhocriesdoctor: Without a phone it’s like you’re locked out of the world. Out of looking for housing, for example. I’m grateful.  
If Quest Reward, progress to Interact with Boywhocriesdoctor and Quest Reward.

### Interact with Boywhocriesdoctor and Quest Active And Player Has Jeans

`SUB_QUEST_3` is complete.  
Run CheckBoyWhoCriesRewardCheck.  
Player loses `ITEM_JEANS`  
Player: Something of yours?  
Boywhocriesdoctor: O-oh\! My clothes\!  
Player gestures towards Boywhocriesdoctor.  
Boywhocriesdoctor: Even just one piece of clothing in good condition is worth its weight in gold when you don’t have a home. This’ll go a long way for me\!  
If Quest Reward, progress to Interact with Boywhocriesdoctor and Quest Reward.

### Interact with Boywhocriesgatekeypad and Scope Quest Incomplete

Boywhocriesgatekeypad: Access denied. The Wajabi Golf Course is invitation only.

### Interact with Boywhocriesgatekeypad and Scope Quest Complete

Boywhocriesgatekeypad: Scanning….  
Boywhocriesgatekeypad: You have been recognized as PLAYER.  
Boywhocriesgatekeypad: Please enter.

### Interact with Boywhocriesdoctor and Quest Reward And Does Not Have Pokevial

Boywhocriesdoctor: Got a PokeVial yet?  
Player: I don’t. Do you know where I can get one?  
Boywhocriesdoctor: It’s a must-have for any trainer in Resido who wants to get serious.  
Boywhocriesdoctor: Come back when you have one\!

### Interact with Boywhocriesdoctor and Quest Reward And Player Has Pokevial

Quest Reward.  
Boywhocriesdoctor: Wow…I think this is everything…  
Boywhocriesdoctor: I…\*snivel\* I, uh…Don’t know how to express how much this means to me. We were just total strangers a few moments ago.  
Boywhocriesdoctor: Thank you. Thank you so much. I don’t have much, I’m sure you understand. But, I do know medicine.  
Boywhocriesdoctor gestures towards player.  
Pokevial capacity increase by 1\.  
Boywhocriesdoctor: There. I’ve put some more medicine in your PokeVial. Should be enough for one more dose.

### Interact with Boywhocriesdoctor and Quest Complete

Boywhocriesdoctor: Originally I’m from Kanto. I was a doctor in a place called Viridian City.  
Boywhocriesdoctor: Not to brag but people always said I had a magic touch, heh. Literally\! Once I get my hands on ya, you get better.  
Boywhocriesdoctor: I wanted to bring that to Resido.  
Boywhocriesdoctor: But this “magic touch” freaked some of my colleagues out. They think I’m faking or something, so now I can’t get a job or a recommendation anywhere.  
Boywhocriesdoctor: So I’m on the streets now. But hey\! It’s always darkest before the dawn\!  
Boywhocriesdoctor: Until that dawn comes, you know where I’ll be. Come find me should you ever need any medical help.

# Summary & Notes

Boywhocriesdoctor is unhoused and says that kids stole his stuff and scattered it around Lake. Boywhocriesdoctor asks Player for help. Player gets items for Boywhocriesdoctor, Boywhocriesdoctor gives Alicia a Pokevial Dose in exchange. 

Boycrieswolvesdoctor explains that they're an aspiring doctor from Viridian, came to Resido to help people, but they were sabotaged by peers out of jealousy,  never got any recommendations, couldn't find work, now unhoused and can't go home.

---

Player can access this quest at any point after [Young Padawan](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tbl0XF7TJc58WD4Bw/viwnITIE6FJVV13Gp/recNSdquhDRkvbA3O?blocks=hide) but won’t be able to finish it until [But Only In My Backyard](https://airtable.com/appJxoYhsNja2FfjK/shrcRVLWezjaT63bP/tblzTEiSlQuwPFXec/viw6wvVrzzEBV6NUs/rec4IJF6bavTATxSh?blocks=hide) is complete.
