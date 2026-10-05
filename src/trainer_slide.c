#include "global.h"
#include "battle.h"
#include "battle_ai_util.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "party_menu.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/comparison_operators.h"
#include "constants/flags.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/vars.h"
#include "constants/weather.h"
#include "trainer_slide.h"
#include "battle_message.h"

static u32 BattlerHPPercentage(enum BattlerId battler, enum ComparisonOperators operation, u32 threshold);
static u32 GetPartyMonCount(u32 lastId, struct Pokemon *party, bool32 onlyAlive);
static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId);
static bool32 ShouldRunTrainerSlideLandsFirstCriticalHit(enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLandsFirstSuperEffectiveHit(enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLandsFirstSTABMove(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLandsFirstDown(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideMonUnaffected(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastSwitchIn(enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastHalfHP(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastLowHp(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId);
static void SetTrainerSlideParameters(enum BattlerId battler, u32* lastId, u32* trainerId, u32* retValue);
static bool32 IsSlideInitalizedOrPlayed(enum BattlerId battler, enum TrainerSlideType slideId);

// Partner trainers must be added as TRAINER_PARTNER(PARTNER_XXXX)
static const u8* const sTrainerSlides[DIFFICULTY_COUNT][TRAINER_PARTNER(PARTNER_COUNT)][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("The Tide won't back down, and neither will I!"),
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Just one more, team. We've got this..."),
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Ruthless."),
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("That's the least you deserve. Back off already! "),
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Hold fast, Drednaw. We can fight our way out of this!"),
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Might doesn't make right! You have no clue what you're doing!"),
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("I hate that it's come to this. Don't you?"),
        [TRAINER_ADAORA_HOWDISAPPOINTING][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Ugh! You're not even from here, and look at the chaos you're causing!"),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Oh dear! The Champion losing to a businesswoman, how embarrassing!"),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("You ungrateful little brat! We gave you everything and this is how you repay us!?"),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Look at what you've made me do! This going to cause a scene for sure!"),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("I've seen you do this plenty of times. I can handle it, I'm sure."),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Grr! You're endangering some very precious Pokemon here! "),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("I finished top in all my classes. Of course I know how to exploit an opening."),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Keep pushing me, trainer! See where it gets you! "),
        [TRAINER_LUCREZIA_A][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Ready to give up and call this nonsense off yet? "),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Abduct them! E-explode them! Whatever you have to do, I don't care! "),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("*Pant*...*Pant*..."),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("Years of my life I spent building Sharprise into what it is! You're not about to take it all away from me, you snivelling ingrate!!! "),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Yes...More! "),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("I tell you, stop that! Listen to your superiors! "),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Do you have an ounce of restraint in you? Think of all you'll ruin! "),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("I'll send these Pokemon flying across the Resido skyline if I have to."),
        [TRAINER_LUCREZIA_B][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("I'll drown your whole stupid team in poison if I have to! Just get out of my way!"),
        [TRAINER_VIGRIM][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("It'll take a lot more than that to break us. "),
        [TRAINER_VIGRIM][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("......"),
        [TRAINER_VIGRIM][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("It's been raining in Resido for too long now!"),
        [TRAINER_VIGRIM][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Your Pokemon love you a lot. I wonder if they understand what you're doing. "),
        [TRAINER_VIGRIM][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("This is what we trained for! Let's give it everything we've got! "),
        [TRAINER_VIGRIM][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("History will judge us accordingly."),
        [TRAINER_VIGRIM][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("I'll not be perturbed! I lead The Tide for a reason! "),
        [TRAINER_VIGRIM][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("Alola is a place of tolerance and equality. You shame it with this. "),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("This is our last stand. We have to win! "),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("What are you really doing this for!? For some company!? Think!"),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("We're not done! Not just yet... "),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("A light at the end of the tunnel... "),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("That's a start. "),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("We fight on. "),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Opportunistic. I expected nothing less. "),
        [TRAINER_VIGRIM_MANHUNT][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("You left yourself exposed. Fighting like a rabid dog will do that to you."),
        [TRAINER_FRANK][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("It's nearly over, huh? Guess I'll be able to get somethin' to eat."),
        [TRAINER_FRANK][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("I expected better than this! What became of all my training? "),
        [TRAINER_FRANK][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("Bigger they are, I guess... "),
        [TRAINER_FRANK][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("Look alive, kiddo! There's more where that came from!"),
        [TRAINER_FRANK][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Fine, I'll Mega Evolve! But if I cause a forest fire, you're helpin' me put it out! Fwahaha! "),
        [TRAINER_FRANK][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Turning up the heat, are we?...Suits me just fine!"),
        [TRAINER_FRANK][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Yeah, I meant to do that."),
        [TRAINER_FRANK][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Yowch, kid! Don't remember teachin' ya that one! "),
        [TRAINER_BD][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("I'm sick of being underestimated. I'll show you all! "),
        [TRAINER_BD][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("How did you?...The smoke and fumes are meant to prevent exactly that... "),
        [TRAINER_BD][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("Nothing to take the edge off that at your age. Sucks being young, I guess."),
        [TRAINER_BD][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE]=COMPOUND_STRING("You're clearly good. But “good” isn't gonna be enough."),
        [TRAINER_BD][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Type matchups. Way easier to memorize than the periodic table."),
        [TRAINER_BD][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Ouch! We'll need some strong stuff for that. "),
        [TRAINER_BD][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("I sacrificed a lot to get to where I am! I can't just go out like this..."),
        [TRAINER_BD][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You've been a great little test subject. Let's end this, shall we?"),
        [TRAINER_BELEN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("That's one down, but I'm ready for a long shift! "),
        //[TRAINER_BELEN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("So you know your types...But battling's not just science. It's art! "),
        [TRAINER_BELEN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("Those Orre flavors are interesting...Let me sample some more."),
        [TRAINER_BELEN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("Well there was your appetiser...Now let's get into the meat of things!"),
        [TRAINER_BELEN][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("Oh! That one just went right through you, huh? I'm not supposed to have off days... "),
        [TRAINER_BELEN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("An exquisite combination! Yes...Some spice was necessary."),
        [TRAINER_BELEN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("I fuel Mermereza! Me and my chefs never tire!"),
        [TRAINER_BELEN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("This is messy! I should have worn an older apron... "),
        [TRAINER_BELEN][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("Dessert will be served soon. Just remain seated. "),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Tch! I'm sure that was a lucky guess."),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("I finished top of my class at a prestigious trainer school. "),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("You don't want to make me work a little harder for this? "),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("How embarrassing. That one'll have to train a lot harder."),
        //[TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Luck. It's the only chance you have, really. "),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Nice to see, but totally unnecessary."),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("I *snicker* shouldn't laugh, really..."),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("... "),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("I see now why you've been lagging behind."),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("Don't get cocky now..."),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("Oh, you've learned a new trick I see!"),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("I've been able to do this for ages. "),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Call it a happy accident."),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Should I be impressed?"),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Even a broken clock...et cetera, et cetera. "),
        [TRAINER_CHARLOTTE_BEACHBATTLE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Too much time relaxing, not enough time training, I think."),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Do your worst! It'll...Change nothing!"),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("I've wanted to do this since the day I was saddled with you! "),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("If you'd just kept your nose out, none of this would have happened! "),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("What is it with you!? We came here to be the strongest, didn't we? Why all the drama?"),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("This is not what I needed right now..."),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("You shouldn't even be here! Just leave Resido if it's so bad!"),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Yes, yes, very impressive."),
        [TRAINER_CHARLOTTE_IMIN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Don't tell me you've started underestimating me now? How insulting. "),
        [TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Luck! Well I guess that's how you might beat me..."),
        [TRAINER_DIMU][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("People brand nature-lovers as soft and weak. Then they take a hit like that. "),
        [TRAINER_DIMU][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Pretty fortunate, but I won't complain. I'll just fight harder. "),
        [TRAINER_DIMU][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("That creeping feeling? It's doubt. Don't let it ensnare you. "),
        [TRAINER_DIMU][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE]=COMPOUND_STRING("You've got some interesting type combinations... "),
        [TRAINER_DIMU][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("Nature is far too resilient for that. You can't just brute force it. "),
        [TRAINER_DIMU][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("That's embarrassing. "),
        [TRAINER_DIMU][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("We won't go quietly! We'll fight 'till the sun goes down!"),
        [TRAINER_DIMU][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You're gonna have to pull it together if you want my badge. "),
        [TRAINER_DIMU_REMATCH][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You reap what you sow, and I've been rather patient indeed..."),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Heh, jumping the Champion like this...Did I bite off more than I could chew? I certainly hope so!"),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Your foundations are looking a little shaky there!"),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("It's been a while since we've faced resistance like this! How I miss it! "),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Wait! Let me turn the cameras on so I can document this!!"),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("I'd loved to have seen *that* with some slow-mo..."),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("You'll bring my team to its knees with with more hits like that! Well, some of them don't have knees...Whatever!!"),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("I hear you've beaten a lot of people with this. Well? Don't hold back now!"),
        [TRAINER_DOYLE_ZENZU_ISLAND][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Clouds gather...Winds howl...A true monster is sure to appear!"),
        [TRAINER_ELEANOR][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Ha! Guess I'm stronger without the mask. "),
        [TRAINER_ELEANOR][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("I remember this predicament all too well...This time will be different! "),
        [TRAINER_ELEANOR][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("How nice it is to see this under different circumstances."),
        [TRAINER_ELEANOR][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Resido may not be at stake, but we still have a reputation to uphold! Mega Evolve!"),
        [TRAINER_ELEANOR][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Very nicely done, as much as it pains me."),
        [TRAINER_ELEANOR][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("There's more where that came from."),
        [TRAINER_ELEANOR][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("A fine performance...But I know it's not just for show. "),
        [TRAINER_ELEANOR][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Battling like this...I feel...Refreshed. "),
        [TRAINER_EMRYS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("The erosion sets in..."),
        [TRAINER_EMRYS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("All according to plan. Ready for a wash, {PLAYER}?"),
        [TRAINER_EMRYS][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("Well, well, well...Now this *is* rare."),
        [TRAINER_EMRYS][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Look at the bright side! I'll log this in my journal."),
        [TRAINER_EMRYS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("Pressure makes diamonds. How will you respond?"),
        [TRAINER_EMRYS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE]=COMPOUND_STRING("My Pokemon have weathered worse than that! Look at how hardy they are!"),
        [TRAINER_EMRYS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("You'll be underwater soon. At least fetch me a Dome Fossil while you're down there. "),
        [TRAINER_EMRYS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Too much more of that could spell disaster..."),
        [TRAINER_IMELDA][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("That'll leave a mark! Another one, anyway."),
        [TRAINER_IMELDA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("I've an eye for detail, and weakness."),
        [TRAINER_IMELDA][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Let's see it then! What's the height of your capabilities?"),
        [TRAINER_IMELDA][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Old and dirty doesn't mean useless, it means something's weathered many storms before!"),
        [TRAINER_IMELDA][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("Hmm. You're a trainer after my own heart."),
        [TRAINER_IMELDA][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("An ancient ritual from a foreign land...There's little more thrilling to me! "),
        [TRAINER_IMELDA][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You look ready to break. Would you prefer me to hold back, Champion? "),
        [TRAINER_IMELDA][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("How many battles do you think we've seen? This is nothing new to us. "),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Eat it, tourist! "),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Gah! Lucky break... "),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("I'm sending you packing. "),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("We're not done yet. Quitting ain't in our nature!"),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("Don't even know how type matchups work...So carried by SharpRise... "),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("Whatever! I'll learn from it!"),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Take advantage, it's what you people do. "),
        [TRAINER_BAIYA_NEWASSHOLEAPPEARS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("There's more where that came from!"),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("Does it feel good? Winning with all your handouts and dirty money?"),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("I don't like fighting so bitterly like this. But it has to be done. "),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("We're down but we're not out."),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Ha! Yeah, get mad."),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("We're just getting started! "),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Ngh. It's...Gonna take a lot more than that. "),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("This island's my home! You're not welcome here! "),
        [TRAINER_BAIYA_ASSHOLEHOME][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("We've always had to make do with less. We can still win! "),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You won't stand a chance against The Sisters at this rate!"),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("C'mon buddy...I need you to pull off something big for me!"),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("That hurts, but I'll get you back for it."),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("We're not messing around!"),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("What can I say? Now we're on an even playing field. "),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("We're hardened. We were ready for this! "),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("I didn't expect to sweep you. It's a team effort!"),
        [TRAINER_BAIYA_BATTLE8][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("I train here all the time to get wins like this! I'm gonna bring it home!"),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("You have no idea what you're doing! "),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You made a mistake coming here. You overplayed your hand!"),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("I'm gonna blow you away! No holding back!"),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Brace yourselves, guys...We can't back down..."),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("I've still got some tricks up my sleeve. "),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("You'd better hope this move lands better than you look doing it. "),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("What doesn't KO us makes us stronger!"),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("I'm not celebrating yet. I don't get complacent, unlike some!"),
        [TRAINER_BAIYA_WHYAREYOUHELPINGTHEM][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Step one, but there's a lot more to go..."),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("So close I can almost taste it...Don't get in your own head, Baiya! "),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("The crowd...I'm not used to being cheered for...That's why I can't lose! "),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("This is it...We make it through this and we can win, guys... "),
        //[TRAINER_BAIYA_FINALS][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Resido may not love me, but I love it! See how far I'll go for it!"),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("A hit like that in the finals...No good..."),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Okay! Just a few more of those!..."),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Can't believe I got hit by that...The lights are shining so bright..."),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("This is what all my training has been leading up to...I deserve to be here. "),
        [TRAINER_BAIYA_FINALS][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Halai...Pintillion...This is what it's all been for. Let's bring it home!"),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("Haven't gotten rusty at all since the big win, huh? "),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Well, well, well! If only I coulda done this back at the stadium... "),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Hmph. Start as you mean to go on, I guess... "),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Consider it an equalizer for all that sponsorship money. "),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("Just because we're not in the League anymore, doesn't mean you can just start messing around!"),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("I think the thought of food's getting to my head... "),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Here we go again... "),
        [TRAINER_BAIYA_LETSGRABLUNCH][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("It's a start... "),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("Just see reason! Give that thick skull of yours a shake! "),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("I don't ever wanna see you again after this, ya hear me!?"),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("We'll push you suits back with everything we have!"),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("This is how far you'll go, huh? You're so ignorant..."),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Yeah, you'll take any advantage you can get. "),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("I don't care what it takes anymore. "),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Stop butting in! You only make things worse! "),
        [TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Does this feel good? Do you love winning this much? "),
        [TRAINER_KEI_YING][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Your bonds have always shone through. This is nothing we weren't prepared for!"),
        [TRAINER_KEI_YING][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("No worthy tree is ever chopped with a single swing. "),
        [TRAINER_KEI_YING][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("And we fight on still!"),
        [TRAINER_KEI_YING][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("I rest my hopes in you, let's dig deep in our hearts. "),
        [TRAINER_KEI_YING][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("Heh! Perhaps I'm going senile... "),
        [TRAINER_KEI_YING][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("Loathe as I am to say, this is a power I owe to SharpRise. Don't lose to it, now!"),
        [TRAINER_KEI_YING][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Well-spotted! We've taken many such hits before, however."),
        [TRAINER_KEI_YING][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Ever flowing like water...But not a single strike can be predictable... "),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("We just need you to co-operate, Champion. Why throw away all that you've done?"),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("It's not too late to turn back. There's still a place for you with us."),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("I don't want to have to do this. "),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE]=COMPOUND_STRING("You're on form as ever..."),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("I know it's not pleasant to fight, but it seems like we must!"),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("Oh, of course! A, uh...Mistake on my part!"),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("I...Hmm. "),
        [TRAINER_KEI_YING_WAREHOUSE_RAVE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("That looked...Painful."),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You've been worn down, I see...You need better stamina. "),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("My back's against the wall! Yet, I persist. "),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("Hahaha! I pity your enemies. "),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("Your victory may have been but a mirage. "),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("My instincts are still sharp."),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Oof! That nearly knocked me off my feet! "),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("We shall learn from this and adapt..."),
        [TRAINER_MAGNUS_PROLOGUE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("We account for every matchup. Always."),
        [TRAINER_NERIENE][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("Here's a technique we've been saving for a special occasion. Behold! "),
        [TRAINER_NERIENE][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("Oh, you've got Z-Moves, huh? Good! I love testing my endurance! "),
        [TRAINER_NERIENE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Step 1 of Military Dominance: Identify and exploit the enemy weakness."),
        [TRAINER_NERIENE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("So I left myself exposed...Well struck. "),
        [TRAINER_NERIENE][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("I LOOVE the smell of BATTLE in the mornin'! "),
        [TRAINER_NERIENE][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("Thank you for your sacrifice, soldier. It won't be in vain! "),
        [TRAINER_NERIENE][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("This is gonna take the most powerful weapon I have..."),
        [TRAINER_NERIENE][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Don't chicken out on me now. This is the fun part!"),
        [TRAINER_PUA][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("My team are amped! They've been chomping at the bit for this!"),
        [TRAINER_PUA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("It's chill. There's a lot of battle left to go! "),
        //[TRAINER_PUA][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("Strength is one thing, but understanding...That's where most are slacking!"),
        [TRAINER_PUA][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("Not gonna lie, I zoned out for a moment! Hahahaha!"),
        [TRAINER_PUA][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("Yikes! You've been doing your homework, that's for sure. "),
        [TRAINER_PUA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT]=COMPOUND_STRING("It's elementary stuff, y'know?"),
        [TRAINER_PUA][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("My Pokemon are having a blast. They don't want the fun to end just yet! "),
        [TRAINER_PUA][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Don't be discouraged! C'mon, {PLAYER}! Gimme your best shot! "),
        [TRAINER_PUA][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("Being strong's one thing, but understanding's a whole different ball game, homie!"),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You're near your end, naturally. "),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("I...Hadn't accounted for this, but it's no matter!"),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION]=COMPOUND_STRING("No more games. Let's wipe the slate clean!"),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION]=COMPOUND_STRING("This power I'm sensing...Off the charts..."),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("That went even better than expected. "),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Pah. An unpleasant little variable..."),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("You've seen the brains, now feel the brawn! "),
        [TRAINER_RAMESH_IMIN][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("Well...A wrench has been thrown into the works..."),
        [TRAINER_SHINZO][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("You've proven nothing until you've won..."),
        [TRAINER_SHINZO][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("You're looking a little stressed. You can go to one of those ridiculous tacky restaurants once you lose. "),
        [TRAINER_SHINZO][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("And idiot can just attack non-stop to try to win. Skilled trainers use precision strikes."),
        [TRAINER_SHINZO][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Tch! Lucky shot. "),
        [TRAINER_SHINZO][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("Ancient warriors of Hisui used similar techniques."),
        [TRAINER_SHINZO][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE]=COMPOUND_STRING("We're unfazed."),
        [TRAINER_SHINZO][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("The first domino falls. "),
        [TRAINER_SHINZO][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("Tactical sacrifices are often necessary. Don't gloat."),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Are the lights a little too bright? Or am I just that good? Ha! "),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Adding some drama to affairs, eh? I like it! "),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("Diversity is our strength. You'll never know what to expect next!"),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE]=COMPOUND_STRING("A powerful trainer, you are. My favourite type of opponent! "),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_OPPONENT_Z_MOVE]=COMPOUND_STRING("Usually I reserve this for when I'm touring in Alola. You're a special case! "),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_ATTACKER_Z_MOVE]=COMPOUND_STRING("You've got moves! *Z-Moves*! Let's see it!"),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN]=COMPOUND_STRING("You've done well to get this far, but there's no quit in us. We can do this dance all day."),
        [TRAINER_AMIARGENTO][TRAINER_SLIDE_SELF_LAST_SWITCHIN]=COMPOUND_STRING("Your feet look sore, your Pokemon are tired...You might need to work on your stamina, hon."),
        //[TRAINER_TALA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("What a delight it is to spread our wings."),
        [TRAINER_TALA][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE]=COMPOUND_STRING("Strong! But will it be enough?..."),
        [TRAINER_TALA][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN]=COMPOUND_STRING("That one will grow stronger in time, I'm sure."),
        [TRAINER_TALA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN]=COMPOUND_STRING("And if you should win? How will you carry your pride?"),
        [TRAINER_TALA][TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED]=COMPOUND_STRING("We fly high, always. It's how we gain perspective."),
        [TRAINER_TALA][TRAINER_SLIDE_SELF_MON_UNAFFECTED]=COMPOUND_STRING("Hohoho! Well-manoeuvered."),
        //[TRAINER_TALA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("My eyes are keen, even into my old age. "),
        [TRAINER_TALA][TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Cunning! Not always a bad thing..."),
        [TRAINER_TALA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE]=COMPOUND_STRING("Ah...Feels good to spread our wings again."),
        [TRAINER_TALA][TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT]=COMPOUND_STRING("Yeah I'm getting old, but my eyes are still keen!"),
    },
};

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][FRONTIER_TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        //[   Doyle Facility  ][  TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT  ]=  COMPOUND_STRING("A dramatic start! Every good story needs an inciting incident!  "),
    },
};

#define TRAINER_RED_TEST    1
#define TRAINER_LEAF_TEST   2
#define PARTNER_STEVEN_TEST 1

static const u8* const sTestTrainerSlides[DIFFICULTY_COUNT][MAX_TRAINERS_COUNT_EMERALD + PARTNER_COUNT][TRAINER_SLIDE_COUNT] =
{
#include "../test/battle/trainer_slides.h"
};

static u32 BattlerHPPercentage(enum BattlerId battler, enum ComparisonOperators operation, u32 threshold)
{
    switch (operation)
    {
    case LESS_THAN:
        return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
    case EQUAL:
        return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
    case GREATER_THAN:
        return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
    case LESS_THAN_OR_EQUAL:
        return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
    case GREATER_THAN_OR_EQUAL:
        return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
    case NOT_EQUAL:
    default:
        return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

static const s8 sMultiBattleOrder[] = {0, 2, 3, 1, 4, 5};

static u32 GetPartyMonCount(u32 lastId, struct Pokemon *party, bool32 onlyAlive)
{
    u32 count = 0;

    for (u32 i = 0; i < lastId; i++)
    {
        enum Species species = GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG);
        if (species != SPECIES_NONE
                && species != SPECIES_EGG
                && (!onlyAlive || GetMonData(&party[i], MON_DATA_HP)))
        {
            count++;
        }
    }

    return count;
}

static bool8 ShouldUseManhuntVigrim(u32 trainerId)
{
    if (trainerId != TRAINER_VIGRIM)
        return FALSE;

    return (VarGet(VAR_MANHUNT_STATE) == SAVED_BEFORE_VIGRIM);
}

static const u8* const *GetTrainerSlideArray(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
#if TESTING
    return (FlagGet(TESTING_FLAG_TRAINER_SLIDES) ? sTestTrainerSlides[difficulty][trainerId] : NULL);
#else
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return sFrontierTrainerSlides[difficulty][trainerId];
        // Start siliconMerge
    else if (ShouldUseManhuntVigrim(trainerId))
        return sTrainerSlides[difficulty][TRAINER_VIGRIM_MANHUNT];
        // End siliconMerge
    else
        return sTrainerSlides[difficulty][trainerId];
#endif // TESTING
}

static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

#if TESTING
    if (VarGet(TESTING_VAR_TRAINER_SLIDES) == slideId)
    {
        if (trainerSlides[slideId] == NULL)
            return (trainerSlidesNormal[slideId] != NULL);
        else
            return TRUE;
    }
    else
    {
        return FALSE;
    }
#else
    if (trainerSlides[slideId] == NULL)
        return (trainerSlidesNormal[slideId] != NULL);
    else
        return TRUE;
#endif // TESTING
}

void SetTrainerSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] != NULL)
        gBattleStruct->trainerSlideMsg = trainerSlides[slideId];
    else
        gBattleStruct->trainerSlideMsg = trainerSlidesNormal[slideId];
}

static bool32 ShouldRunTrainerSlideLandsFirstCriticalHit(enum BattlerId battler, enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(battler, slideId);
}

static bool32 ShouldRunTrainerSlideLandsFirstSuperEffectiveHit(enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (slideId == TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT)
    {
        if (GetBattlerSide(battler) == GetBattlerSide(gBattlerAttacker))
            return FALSE;
    }
    else
    {
        if (GetBattlerSide(battler) != GetBattlerSide(gBattlerAttacker))
            return FALSE;
    }

    if (!IsTrainerSlideInitialized(battler, slideId))
        return FALSE;

    if (!IsBattlerAlive(battler))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlideLandsFirstSTABMove(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(battler, slideId))
        return FALSE;

    if (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) != GetPartyMonCount(lastId, GetBattlerParty(battler), FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlideLandsFirstDown(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (gBattlerFainted == GetPartnerBattler(battler))
        return FALSE;

    enum BattlerId partyBattler = battler;

    if (slideId == TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN)
        partyBattler = gBattlerFainted;

    return ((GetPartyMonCount(lastId, GetBattlerParty(partyBattler), TRUE) == (GetPartyMonCount(lastId, GetBattlerParty(partyBattler), FALSE) - 1)));
}

static bool32 ShouldRunTrainerSlideMonUnaffected(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(battler, slideId))
        return FALSE;

    return (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) == GetPartyMonCount(lastId, GetBattlerParty(battler), FALSE));
}

static bool32 ShouldRunTrainerSlideLastSwitchIn(enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (slideId == TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN)
    {
        enum BattlerId oppositeBattler = GetOppositeBattler(battler);
        enum BattlerId oppositePartner = GetPartnerBattler(oppositeBattler);

        return (CountUsablePartyMons(oppositeBattler) == 0 && CountUsablePartyMons(oppositePartner) == 0);
    }
    return !CanBattlerSwitch(battler);
}

static bool32 ShouldRunTrainerSlideLastHalfHP(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (IsSlideInitalizedOrPlayed(battler, slideId))
        return FALSE;

    if (slideId == TRAINER_SLIDE_OPPONENT_LAST_HALF_HP)
    {
        enum BattlerId oppositeBattler = GetOppositeBattler(battler);
        enum BattlerId oppositePartner = GetPartnerBattler(oppositeBattler);

        bool32 oppositeLastMon = GetPartyMonCount(lastId, GetBattlerParty(oppositeBattler), TRUE) == 1;
        bool32 partnerLastMon = GetPartyMonCount(lastId, GetBattlerParty(oppositePartner), TRUE) == 1;

        if (!(oppositeLastMon || partnerLastMon))
            return FALSE;

        return ((oppositeLastMon && BattlerHPPercentage(oppositeBattler, GREATER_THAN, 4) && BattlerHPPercentage(oppositeBattler, LESS_THAN_OR_EQUAL, 2))
         || (partnerLastMon && BattlerHPPercentage(oppositePartner, GREATER_THAN, 4) && BattlerHPPercentage(oppositePartner, LESS_THAN_OR_EQUAL, 2)));
    }
    else
    {
        if (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) != 1)
            return FALSE;

        if (BattlerHPPercentage(battler, GREATER_THAN, 2))
            return FALSE;

        return (BattlerHPPercentage(battler, GREATER_THAN, 4));
    }
}

static bool32 ShouldRunTrainerSlideLastLowHp(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (IsSlideInitalizedOrPlayed(battler, slideId))
        return FALSE;

    if (slideId == TRAINER_SLIDE_OPPONENT_LAST_LOW_HP)
    {
        enum BattlerId oppositeBattler = GetOppositeBattler(battler);
        enum BattlerId oppositePartner = GetPartnerBattler(oppositeBattler);

        bool32 oppositeLastMon = GetPartyMonCount(lastId, GetBattlerParty(oppositeBattler), TRUE) == 1;
        bool32 partnerLastMon = GetPartyMonCount(lastId, GetBattlerParty(oppositePartner), TRUE) == 1;

        if (!(oppositeLastMon || partnerLastMon))
            return FALSE;

        if (!IsBattlerAlive(battler))
            return FALSE;

        return ((oppositeLastMon && BattlerHPPercentage(oppositeBattler, LESS_THAN_OR_EQUAL, 4))
         || (partnerLastMon && BattlerHPPercentage(oppositePartner, LESS_THAN_OR_EQUAL, 4)));
    }
    else
    {
        if (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) != 1)
            return FALSE;

        if (!IsBattlerAlive(battler))
            return FALSE;

        return (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4));
    }
}

static void SetTrainerSlideParameters(enum BattlerId battler, u32* lastId, u32* trainerId, u32* retValue)
{
    if ((battler & BIT_SIDE) == B_SIDE_OPPONENT)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
        {
            if (!AreMultiPartiesFullTeams())
                *lastId = MULTI_PARTY_SIZE;
            if (GetBattlerTrainer(battler) == B_TRAINER_OPPONENT_B)
            {
                *trainerId = TRAINER_BATTLE_PARAM.opponentB;
                *retValue = TRAINER_SLIDE_TARGET_TRAINER_B;
            }
        }
    }
    else if (GetBattlerTrainer(battler) == B_TRAINER_PARTNER && gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
    {
        if (!AreMultiPartiesFullTeams())
            *lastId = MULTI_PARTY_SIZE;
        *trainerId = gPartnerTrainerId;
        *retValue = TRAINER_SLIDE_TARGET_TRAINER_PARTNER;
    }
    else if (BattlerIsPlayer(battler))
    {
        *trainerId = TRAINER_NONE;
        *retValue = TRAINER_SLIDE_TARGET_NONE;
    }
}

enum TrainerSlideTargets ShouldDoTrainerSlide(enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (BattlerIsPlayer(battler))
        return TRAINER_SLIDE_TARGET_NONE;

    u32 lastId = PARTY_SIZE, trainerId = TRAINER_BATTLE_PARAM.opponentA;
    u32 retValue = TRAINER_SLIDE_TARGET_TRAINER_A;
    bool32 shouldRun = FALSE;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!IsDoubleBattle() && (battler > B_BATTLER_1))
        return TRAINER_SLIDE_TARGET_NONE;

    if (GetBattlerTrainer(battler) == B_TRAINER_PLAYER)
        return TRAINER_SLIDE_TARGET_NONE;

    SetTrainerSlideParameters(battler, &lastId, &trainerId, &retValue);
    if (IsSpecialTrainer(trainerId))
        return TRAINER_SLIDE_TARGET_NONE;

    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();
    gBattleScripting.battler = battler;

    if (IsTrainerSlidePlayed(battler, slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    switch (slideId)
    {
        case TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT:
        case TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlideLandsFirstCriticalHit(battler, slideId);
            break;
        case TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT:
        case TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
            shouldRun = ShouldRunTrainerSlideLandsFirstSuperEffectiveHit(battler, slideId);
            break;
        case TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE:
        case TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE:
            shouldRun = ShouldRunTrainerSlideLandsFirstSTABMove(lastId, battler, slideId);
            break;
        case TRAINER_SLIDE_DEFENDER_TAKES_FIRST_DOWN:
        case TRAINER_SLIDE_ATTACKER_LANDS_FIRST_DOWN:
            shouldRun = ShouldRunTrainerSlideLandsFirstDown(lastId, battler, slideId);
            break;
        case TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED:
        case TRAINER_SLIDE_SELF_MON_UNAFFECTED:
            shouldRun = ShouldRunTrainerSlideMonUnaffected(lastId, battler, slideId);
            break;
        case TRAINER_SLIDE_OPPONENT_LAST_SWITCHIN:
        case TRAINER_SLIDE_SELF_LAST_SWITCHIN:
            shouldRun = ShouldRunTrainerSlideLastSwitchIn(battler, slideId);
            break;
        case TRAINER_SLIDE_OPPONENT_LAST_HALF_HP:
        case TRAINER_SLIDE_SELF_LAST_HALF_HP:
            shouldRun = ShouldRunTrainerSlideLastHalfHP(lastId, battler, slideId);
            break;
        case TRAINER_SLIDE_OPPONENT_LAST_LOW_HP:
        case TRAINER_SLIDE_SELF_LAST_LOW_HP:
            shouldRun = ShouldRunTrainerSlideLastLowHp(lastId, battler, slideId);
            break;
    case TRAINER_SLIDE_STARTING_STATUS: // bdHazards
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
        case TRAINER_SLIDE_ATTACKER_MEGA_EVOLUTION:
        case TRAINER_SLIDE_ATTACKER_Z_MOVE:
        case TRAINER_SLIDE_ATTACKER_DYNAMAX:
        case TRAINER_SLIDE_ATTACKER_TERA:
        case TRAINER_SLIDE_OPPONENT_MEGA_EVOLUTION:
        case TRAINER_SLIDE_OPPONENT_Z_MOVE:
        case TRAINER_SLIDE_OPPONENT_DYNAMAX:
        case TRAINER_SLIDE_OPPONENT_TERA:
            shouldRun = TRUE;
            break;
        default:
            return TRAINER_SLIDE_TARGET_NONE;
    }

    if (shouldRun == FALSE)
        return TRAINER_SLIDE_TARGET_NONE;

    // Prevents slides triggering twice in single-trainer doubles
    if (GetBattlerTrainer(battler) == GetBattlerTrainer(GetPartnerBattler(battler)))
        MarkTrainerSlideAsPlayed(GetPartnerBattler(battler), slideId);

    MarkTrainerSlideAsPlayed(battler, slideId);
    SetTrainerSlideMessage(difficulty,trainerId,slideId);
    return retValue;
}

static bool32 IsSlideInitalizedOrPlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (IsTrainerSlideInitialized(battler, slideId))
        return TRUE;

    if (IsTrainerSlidePlayed(battler, slideId))
        return TRUE;

    return FALSE;
}

void TryInitializeFirstSTABMoveTrainerSlide(enum BattlerId battlerDef, enum BattlerId battlerAtk, enum Type moveType)
{
    /*enum TrainerSlideType slideId = TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE;
    enum BattlerId slideBattler = battlerAtk;

    if (BattlerIsPlayer(battlerAtk))
    {
        slideId = TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE;
        slideBattler = battlerDef;
    }

    if (IsSlideInitalizedOrPlayed(slideBattler, slideId))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    InitalizeTrainerSlide(slideBattler, slideId);*/

    enum TrainerSlideType slideId = TRAINER_SLIDE_ATTACKER_LANDS_FIRST_STAB_MOVE;
    enum BattlerId slideBattler = battlerAtk;
    bool32 skip = FALSE;

    if (IsSlideInitalizedOrPlayed(slideBattler, slideId))
        skip = TRUE;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    if (GetBattlerSide(battlerDef) == GetBattlerSide(battlerAtk))
        return;

    if (!skip)
        InitalizeTrainerSlide(slideBattler, slideId);

    slideId = TRAINER_SLIDE_DEFENDER_TAKES_FIRST_STAB_MOVE;
    slideBattler = battlerDef;

    if (IsSlideInitalizedOrPlayed(slideBattler, slideId))
        return;

    InitalizeTrainerSlide(slideBattler, slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstCriticalHit(enum BattlerId target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_DEFENDER_TAKES_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(target, slideId))
        return;

    if (IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(target, slideId);
}

void TryInitializeTrainerSlideEnemyLandsFirstCriticalHit(enum BattlerId target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ATTACKER_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(gBattlerAttacker, slideId))
        return;

    if (!IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(gBattlerAttacker, slideId);
}

void TryInitializeTrainerSlideLandsFirstSuperEffectiveHit(enum BattlerId battlerDef, enum BattlerId battlerAtk)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ATTACKER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;
    enum BattlerId slideBattler = battlerAtk;
    bool32 skip = FALSE;

    if (IsSlideInitalizedOrPlayed(slideBattler, slideId))
        skip = TRUE;

    if (GetBattlerSide(battlerDef) == GetBattlerSide(battlerAtk))
        return;

    if (!skip)
        InitalizeTrainerSlide(slideBattler, slideId);

    slideId = TRAINER_SLIDE_DEFENDER_TAKES_FIRST_SUPER_EFFECTIVE_HIT;
    slideBattler = battlerDef;

    if (IsSlideInitalizedOrPlayed(slideBattler, slideId))
        return;

    InitalizeTrainerSlide(slideBattler, slideId);
}

void TryInitializeTrainerSlideMonUnaffected(enum BattlerId battlerDef, enum BattlerId battlerAtk)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_OPPONENT_MON_UNAFFECTED;
    enum BattlerId slideBattler = battlerAtk;
    bool32 skip = FALSE;

    if (IsSlideInitalizedOrPlayed(slideBattler, slideId))
        skip = TRUE;

    if (GetBattlerSide(battlerDef) == GetBattlerSide(battlerAtk))
        return;

    if (!skip)
        InitalizeTrainerSlide(slideBattler, slideId);

    slideId = TRAINER_SLIDE_SELF_MON_UNAFFECTED;
    slideBattler = battlerDef;

    if (IsSlideInitalizedOrPlayed(slideBattler, slideId))
        return;

    InitalizeTrainerSlide(slideBattler, slideId);
}

bool32 IsTrainerSlideInitialized(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messageInitalized[battler][arrayIndex] & (1 << bitPosition)) != 0;
}

bool32 IsTrainerSlidePlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messagePlayed[battler][arrayIndex] & (1 << bitPosition)) != 0;
}

void InitalizeTrainerSlide(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messageInitalized[battler][arrayIndex] |= (1 << bitPosition);
}

void MarkInitializedTrainerSlidesAsPlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    if (IsTrainerSlideInitialized(battler, slideId) && !IsTrainerSlidePlayed(battler, slideId))
        gBattleStruct->slideMessageStatus.messagePlayed[battler][arrayIndex] |= (1 << bitPosition);
}

void MarkTrainerSlideAsPlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messagePlayed[battler][arrayIndex] |= (1 << bitPosition);
}
