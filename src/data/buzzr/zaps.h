const struct Zap gZaps[] =
{
    [ZAP_NONE] =
    {
        .userId = 0,
        .content = COMPOUND_STRING(
                "end of the line"
                ),
        .isPrivate = FALSE,
        .criteria = 0,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_STORY_SUMMON] =
    {
        .userId = BUZZR_USER_OLIVER,
        .content = COMPOUND_STRING("{PLAYER} and Charlotte, please meet me on the northern side of Pioca Bridge!"),
        .isPrivate = TRUE,
        .criteria = 0,
    },
    [ZAP_SUMMON_RESPONSE] =
    {
        .userId = BUZZR_USER_CHARLOTTE,
        .content = COMPOUND_STRING("It's been 2 minutes, I'm leaving for Pioca Bridge without you!"),
        .isPrivate = TRUE,
        .criteria = 0,
    },
    [ZAP_QUEST_NPC_RABIES] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("My cousin caught rabies in {STR_VAR_2}! Feral {STR_VAR_1} are attacking pets and people like crazy. Apparently the RSPCP's finally gonna do something about it and hook up people who can subdue or capture {STR_VAR_1} to chill things out over there. I'll be doing my part! #formycuz"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_NPC_Rabies,
        .quest = QUEST_RABIESOUTBREAK,
        .dislikeCount = 8,
        .likeCount = 46,
    },
    [ZAP_STORY_EPILOGUE] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING(
                "We've got more work to do!\n"
                "Let's get at it."
                ),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_StoryClear,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 13,
    },
    [ZAP_QUEST_NPC_SMOOTHIE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I always go to the Marble Slab in {STR_VAR_1} before I start training with a new Pokémon. Their {STR_VAR_3} clears out a Pokémon’s toxins which makes them easier to train. It’s all natural too! Bring {STR_VAR_2} and they’ll make your first one free!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_NPC_Ice,
        .quest = QUEST_SMOOTHIECRAFTING,
        .dislikeCount = 21,
        .likeCount = 14,
    },
    [ZAP_QUEST_NPC_DEOXYS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I think I was...Threatened by a Pokemon? It was the strangest thing. It was like it fell from the sky, faster than anything I'd ever seen, and then started zipping all around, flashing lights and making strange sounds. My poor Pokemon haven't been the same since. I've been looking up what it could've been and it seems hard to believe but...I think it might've been a Deoxys?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_NPC_Deoxys,
        .quest = QUEST_VSDEOXYS,
        .dislikeCount = 24,
        .likeCount = 46,
        .tiles = (const u32[])INCGFX_U32("graphics/ui_menus/buzzr/zap_pics/3.png", ".4bpp.smol"),
        .tilemap = (const u16[])INCBIN_U16("graphics/ui_menus/buzzr/zap_pics/3.bin.smolTM"),
        .pal = (const u16[])INCGFX_U16("graphics/ui_menus/buzzr/zap_pics/3.png", ".gbapal"),
    },
    [ZAP_QUEST_NPC_TUNNELS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("There’s a rumor that the {STR_VAR_1} elders know of a treasure hidden in the city’s underground and it’s guarded by a powerful Pokemon! Can anybody find the treasure before they take the secret to their grave?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_NPC_Tunnels,
        .quest = QUEST_HODOUTUNNELS,
        .dislikeCount = 29,
        .likeCount = 13,
    },
    [ZAP_QUEST_NPC_FRESHWATER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("There's this clearing in {STR_VAR_1} with no tall grass, beautiful trees and a fresh water spring. It's my favorite spot in the area. The water tastes better than any other I've ever tried, sometimes I swear its magical! I heard of a girl who had an octopus Pokemon turn shiny there!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_NPC_Freshwater,
        .quest = QUEST_FRESHWATEREVOLUTION,
        .dislikeCount = 7,
        .likeCount = 25,
    },
    [ZAP_QUEST_NPC_STONE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Take the #MegaTrolleyChallenge and experience the best way to travel in Resido! Complete {STR_VAR_1} Mega rides, and visit the Mega G.R.U.N.T. HQ for a way to unlock your Pokémon’s Mega potential!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_NPC_Stone,
        .quest = QUEST_BETWEENASTONEANDAHARDPLACE,
        .dislikeCount = 25,
        .likeCount = 32,
    },
    [ZAP_GYM_MERMEREZA_CITY_BADGE] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("My sincerest apologies to anyone whose orders were held up at Needles today, I was getting cooked myself! {PLAYER} shows a lot of promise. Now to handle these refund requests..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_MermerezaCity_Badge,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 37,
    },
    [ZAP_GYM_TORA_TOWN_BADGE] =
    {
        .userId = BUZZR_USER_SHINZO,
        .content = COMPOUND_STRING("I'm not sure they have the potential of a Cynthia or Lucian, but {PLAYER}'s skills are admirable. Well done on your victory, though you still have much to learn."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_ToraTown_Badge,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 9,
    },
    [ZAP_GYM_PERLACIA_CITY_BADGE] =
    {
        .userId = BUZZR_USER_EMRYS,
        .content = COMPOUND_STRING("Resido might have a real treasure on our hands if {PLAYER} sticks around, they got me good! Now, no more challengers for a while, please! I'm off on business!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_PerlaciaCity_Badge,
        .quest = 0,
        .dislikeCount = 26,
        .likeCount = 19,
    },
    [ZAP_GYM_CHASILLA_BADGE] =
    {
        .userId = BUZZR_USER_PUA,
        .content = COMPOUND_STRING("My little buddies and I were stoked to get to know you {PLAYER}, your battle style was rad! Swing by Chasilla again some time, you hear? I'm no teacher but I bet the students there could learn something from you!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_Chasilla_Badge,
        .quest = 0,
        .dislikeCount = 40,
        .likeCount = 35,
    },
    [ZAP_GYM_FORT_YOBU_BADGE] =
    {
        .userId = BUZZR_USER_NERIENE,
        .content = COMPOUND_STRING("Yeah, I lost! So what? A kink in the armor doesn't keep a good soldier down! Let that be a lesson to all Resido, you can lose the fight and still win the war. I'll be back with a vengeance. {PLAYER}!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_FortYobu_Badge,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 21,
    },
    [ZAP_GYM_HALERBA_CITY_BADGE] =
    {
        .userId = BUZZR_USER_DIMU,
        .content = COMPOUND_STRING("My battle with {PLAYER} today did significant harm to some of our nearby Acacia bushes. Props to the Gym Trainer who stepped in to water and secure them. It just about makes up for the loss."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_HalerbaCity_Badge,
        .quest = 0,
        .dislikeCount = 31,
        .likeCount = 34,
    },
    [ZAP_GYM_TIRABUDIN_PLACE_BADGE] =
    {
        .userId = BUZZR_USER_BD,
        .content = COMPOUND_STRING("Darn! I lost to {PLAYER} but I don't feel too bad about it! Sadness is all just chemicals in the brain after all, I'll get 'em fixed right up! GG from BD!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_TirabudinPlace_Badge,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 34,
    },
    [ZAP_GYM_IRISINA_TOWN_BADGE] =
    {
        .userId = BUZZR_USER_AMI,
        .content = COMPOUND_STRING("Hell yea! Y'all see that, queens? That was a battle right there! Mazel tov to you, {PLAYER}, give 'em hell in those League Finals! Me and the fam'll be rooting for you!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Gym_IrisinaTown_Badge,
        .quest = 0,
        .dislikeCount = 20,
        .likeCount = 18,
    },
    [ZAP_STORY_GRUNT_RESTORED] =
    {
        .userId = BUZZR_USER_GRUNT,
        .content = COMPOUND_STRING("The ferry route between Halai Island and Ferrybuilding has been restored. We will update again when the other routes regain service. Thank you for your patience. Thank you for riding Greater Resido Urban Network Transit."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Story_GRUNT_Restored,
        .quest = 0,
        .dislikeCount = 1,
        .likeCount = 59,
    },
    [ZAP_STORY_STRIKE_BEGIN_1] =
    {
        .userId = BUZZR_USER_NEWS,
        .content = COMPOUND_STRING("BREAKING NEWS: Sharprise Stadium construction crew has declared a strike. Their demands are unclear at this time. This puts the upcoming dates of the Sharprise Capital League Championship in danger. (1/2)"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Story_Strike_Begin1,
        .quest = 0,
        .dislikeCount = 57,
        .likeCount = 12,
    },
    [ZAP_STORY_STRIKE_BEGIN_2] =
    {
        .userId = BUZZR_USER_NEWS,
        .content = COMPOUND_STRING("BREAKING NEWS: Sharprise Stadium construction crew has declared a strike. Anonymous sources claim that The Tide is responsible for instigating this protest but we'll have more information as the situation develops. (2/2)"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Story_Strike_Begin2,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 99,
    },
    [ZAP_STORY_WAREHOUSE_RAVE] =
    {
        .userId = BUZZR_USER_TIDE_EVENT_BOT,
        .content = COMPOUND_STRING("Come celebrate the return of the Elite Four! Tonight, in the Cureno Port Packing District. Follow the music to the center warehouse!"),
        .isPrivate = TRUE,
        .criteria = ZapCriteria_Story_Warehouse_Rave,
        .quest = 0,
        .dislikeCount = 3,
        .likeCount = 43,
    },
    [ZAP_QUEST_NOPODMOD_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Went on a date tonight. Super hot, great texter… but he was one of those NoPo weirdos! Why can’t you just be normal?!?!?! #RedFlags"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 47,
    },
    [ZAP_QUEST_NOPODMOD_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I’m feeling so isolated lately. It’s hard to find other people in the NoPo movement. Where do those people hang out?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_IsCompulsiveHealingReward,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 14,
    },
    [ZAP_QUEST_NPC_RABIES_COMPLETE] =
    {
        .userId = BUZZR_USER_RSPCP,
        .content = COMPOUND_STRING("There is no rabies outbreak within the Resido region at this time. There is an increase of Pokémon infected with Pokérus at {STR_VAR_2}, but since humans are not impacted by Pokérus, this is not a public health concern at this time."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_IsRabiesComplete,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 18,
    },
    [ZAP_QUEST_NPC_SMOOTHIE_COMPLETE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I got scammed by the Marble Slab! My Pokémon got weaker, and it’s so expensive. 0 stars. If you want to reset Effort Values, just use an item like {STR_VAR_1}."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_IsSmoothieCraftingComplete,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 8,
    },
    [ZAP_QUEST_NPC_PSYOP] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Get ready for the #AuthenticHustle Challenge! You’ve gotta grind if you want your Phony {STR_VAR_1} to be peak. Catch one in a {STR_VAR_3}, max out its Effort Values, and come to {STR_VAR_2} to do the challenge right!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_NPC_Psyop,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 14,
    },
    [ZAP_QUEST_NPC_PSYOP_ACTIVE_A] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Always on that {STR_VAR_2} mindset! I got my Antique {STR_VAR_1} through true grit and determination. Put in the work, and you can achieve greatness too!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_IsPsyopActive,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 4,
    },
    [ZAP_QUEST_NPC_PSYOP_ACTIVE_B] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I did the #AuthenticHustle Challenge, and now my {STR_VAR_1} is super legit! Buckle down, unlock that {STR_VAR_2} mindset, and you can achieve the same. Keep pushing!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_IsPsyopActive,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 31,
    },
    [ZAP_QUEST_NPC_PSYOP_ACTIVE_C] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I got one ability: {STR_VAR_2}. I’m on my {STR_VAR_1} mindset, all day, every day!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_IsPsyopActive,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 25,
    },
    [ZAP_QUEST_NPC_PSYOP_COMPLETE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Working three jobs just to save up for {STR_VAR_2} and {STR_VAR_3} - that’s the grind! My {STR_VAR_1} is going to be maxed out, and nothing will stop me. Haters don’t @ me."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_IsPsyopComplete,
        .quest = 0,
        .dislikeCount = 1,
        .likeCount = 48,
    },
    [ZAP_STORY_FALSETIMELINE] =
    {
        .userId = BUZZR_USER_SHARPRISECAPTIAL,
        .content = COMPOUND_STRING("Our operations at Sharprise have long been hindered by the criminal actions of The Tide - as have, we believe, the wellbeing and prosperity of Resido. Our organisation no longer believes we can sit idly by whilst they continue, and will begin co-operating with authorities to see them disbanded. Thank you for your attention to this matter."),
        .isPrivate = FALSE,
        .criteria = NULL,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Arriba is nice and all, but G.R.U.N.T. is so much cheaper! #BallerOnABudget"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode1Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("TIL how accessible G.R.U.N.T. is! I lost my leg in a {STR_VAR_1} accident, and I can still easily navigate in my wheelchair!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode3Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_3] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Yo I’m DYING in this traffic with all these tech workers! I’m taking G.R.U.N.T. from now on, that’s wayyyy smarter!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode5Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_4] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("It’s fascinating how much {STR_VAR_1} resisted having a G.R.U.N.T. station. Access boosts property values, doesn’t it?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode9Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_5] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Did anybody else do this #MegaTrolleyChallenge? Absolute scam. I’m walking to work just to spite them!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_BetweenAStoneAndAHardPlace_IsRewardOrComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTAURANTEXPANSION1_1] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("I’m making some changes in the coming weeks. I’ve had a palate-warping experience and I’m ready to share it all with you!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestaurantExpansion1_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTAURANTEXPANSION1_2] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("I'm opening a new restaurant in {STR_VAR_1} called Flowers. Flowers will have a Pay-What-You-Can model. Resido is my home, and nobody in my home should ever go hungry."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestaurantExpansion1_2,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTAURANTEXPANSION1_3] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("Flowers will maintain my commitment to top-shelf ingredients and taste. Try our the menu and see for yourself!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestaurantExpansion1_3,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_DIGGINGUPADAORASDIRT_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Be mindful of this guy sniffin’ around asking questions about Adaora. I reckon he’s got “cop” written all over him."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Diggingupadaorasdirt_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_DIGGINGUPADAORASDIRT_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("A fight broke out in {STR_VAR_1} a while ago, and Adaora broke it up just by appearing! It was like something out of a manga…"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Diggingupadaorasdirt_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_DIGGINGUPADAORASDIRT_3] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I’m sick of the thugs hangin’ around {STR_VAR_1} like they own the place! Somebody’s gonna have to take the trash out sooner or later…"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Diggingupadaorasdirt_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_DIGGINGUPADAORASDIRT_4] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I wonder how Adaora’s parents feel about their daughter having become a terrorist. Probably fled the region out of shame, that’s why you never hear about them."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RETURNDOLL] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Somehow, our child was reunited with her favorite doll we thought we’d lost in the move from {STR_VAR_1}! There really are some angels around these parts!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_ReturnDollComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_FREETHEINNOCENT_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("A suspect has been taken into custody over the robbery of the Resido Hiking Club: a member of The Tide known as FindtheguiltyvictimB."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_FREETHEINNOCENT_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("FreetheinnocentvictimB would never steal anything! The cops need to step their game up!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_FREETHEINNOCENT_3] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The police aren’t being aggressive enough. This hiker thief is a small fry. Gotta lock the rest of those Tide weirdos up too."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_FREETHEINNOCENT_4] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The Tide shouldn’t be allowed to just get away with robbing an enthusiast club with no consequences. Glad one of ‘em finally got put in their place."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_FREETHEINNOCENT_5] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Somebody brought a boba cup back to the counter today straight from out of the garbage! Just another day in the life!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Freetheinnocent5,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_FINDTHEGUILTY_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("SharpRise meddling in the affairs of a hiking club of all things now. Reeks of fear if you ask me!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Findtheguilty1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTAURANTEXPANSION2] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("Looking for busboys, servers, chefs and line cooks - My new resturants wants to hire more Resido residents. DM me if you’re interested!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Restaurantexpansion1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_KITCHENVOLUNTEERING] =
    {
        .userId = BUZZR_USER_RESTAURANTEXPANSIONBUSSER,
        .content = COMPOUND_STRING("We need staff at Flowers, the joint’s overflowing! As long as ya show up, we don’t care who ya are!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Kitchenvolunteering,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREESPULEEGYM_ACTIVE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Did I just see Imelda getting ready to battle out in {STR_VAR_1}? Is something happening?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestoreespuleegymActive,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREESPULEEGYM_COMPLETE_BAIYA] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING("Yo! Check out the {STR_VAR_1} Swap Meet some time, trainers! It's a great place to level up!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestoreespuleegymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREESPULEEGYM_COMPLETE_IMELDA] =
    {
        .userId = BUZZR_USER_IMELDA,
        .content = COMPOUND_STRING("The {STR_VAR_1} Antique Shop has become the {STR_VAR_1} Swap Meet! Please do come by for some quality battling some time."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestoreespuleegymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREZENZUISLAND_ACTIVE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Just heard what sounded like some crazy monster noises coming from {STR_VAR_1}. Is Doyle back to battling again?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestorezenzugymActive,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREZENZUISLAND_COMPLETE_BAIYA] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING("Looking for a new place to level up, trainers? Check out {STR_VAR_1}'s new Battle Studio!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestorezenzugymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREZENZUISLAND_COMPLETE_DOYLE] =
    {
        .userId = BUZZR_USER_IMELDA,
        .content = COMPOUND_STRING("I'll soon be building up an independent film and battle studio on {STR_VAR_1}! Swing by sometime if you'd like to get involved!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestorezenzugymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREHODOUCITY_ASSIGNED_RESTORATION] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I thought {STR_VAR_1} Gym was donezo, but I keep hearing strange banging sounds from over there. I went to go look, but the lights are always off!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestorehodoucityAssigned,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREHODOUCITY_FOUND_LEADER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("It hasn’t been the same since the {STR_VAR_1} Gym closed. I saw Johnny around town today, and it brought back some real memories."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestorehodoucityFoundLeader,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREHODOUCITY_COMPLETE_RANDOM] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I went to {STR_VAR_1} Dojo and got totally wrecked! I need to focus on type specialization… #BackToTheLab"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestorehodoucityComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_RESTOREHODOUCITY_COMPLETE_JOHNNY] =
    {
        .userId = BUZZR_USER_JOHNNY,
        .content = COMPOUND_STRING("Trainers! I’m Johnny, the new leader of {STR_VAR_1} Dojo. Come test your skills with our Restricted Sparring. I’m excited to meet the new battle community of {STR_VAR_1}!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_RestorehodoucityComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_IMPROVBATTLING_ACTIVE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I saw {PLAYER} at the {STR_VAR_1} Improv Show! It’s awesome to see new Trainers to the region embracing local traditions."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_ImprovbattlingActive,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_IMPROVBATTLING_COMPLETE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("{STR_VAR_1} Improv’s gimmick is super similar to the Battle Factory in Hoenn… or was it Sinnoh? Who did it first?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_ImprovbattlingComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_TEACHATRAINERTOFISH_FISHERFOLK] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Has anybody spent time with the Fisherfolk around {STR_VAR_1}? I thought fishing was supposed to be relaxing, but those guys are intense!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_TEACHATRAINERTOFISH_DOCUMENTARY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Watched a fishing documentary called “The Perfect Cast” about some Kalosian fishing techniques. I was too baked to understand, but Resido got a shoutout for a strong fishing culture! #masterthebaitt"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HANG20_WARNING] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Has anybody tried to catch Pokémon around {STR_VAR_1}? These Pokémon are stronger than most of the Trainers around here!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HANG20_ROCKY_COASTS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The rocky coasts and freezing waters mean that only the strongest Pokémon can survive in {STR_VAR_1}’s beaches. Be careful!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_Hang20_FirstZapRead,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_AD] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Reject modernity. Embrace tradition. Join the Seafoam {STR_VAR_1} Society and learn true strength away from distractions."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_AD2] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Type diversity. Held items. Moves of different types. Do these actually make you stronger? All of the greats are focused. Shouldn’t you be?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_AD3] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Focus your mind. Focus your party. To begin your journey, narrow your party to only two types, and bring the tile to the northeastern bird in the tea leaves. Speak the word of the {STR_VAR_1}."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_CulturalPurity_Active,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_READYA] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Trainers are only supposed to train two types at a time. Distractions with diversity only take away from your core strength."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_CulturalPurity_ReadyForA,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_READYB] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Our ancestors didn’t have their Pokémon hold items. Why should you?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_CulturalPurity_ReadyForB,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_READYC] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Your Pokémon’s moves are stronger when their types match. You owe it to your Pokémon to let them access their rawest power."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_CulturalPurity_ReadyForC,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_READYD] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Gym Leader Shinzo has seen the light and is training with the Seafoam {STR_VAR_1} Society. Why haven’t you started?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_CulturalPurity_ReadyForD,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_CULTURAL_PURITY_READYD_CHAMPION] =
    {
        .userId = BUZZR_USER_SOCIETY,
        .content = COMPOUND_STRING("Even Champion {PLAYER} has seen the light and is ready to grow stronger. Why haven't you?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_CulturalPurity_ReadyForDChampion,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_LISTICLE_INTRO] =
    {
        .userId = BUZZR_USER_WATCHVIBES,
        .content = COMPOUND_STRING("We’ve got the top five hidden gems of Resido - visit them all and live how the locals live! Scroll for our top five!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasQuestStarted,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_LISTICLE_1] =
    {
        .userId = BUZZR_USER_WATCHVIBES,
        .content = COMPOUND_STRING("Start your day by watching the sunrise over Resido from the region’s pride and joy - the {STR_VAR_1}. The best view in the entire region is smack dab in the middle of the bridge!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasQuestStarted,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_LISTICLE_2] =
    {
        .userId = BUZZR_USER_WATCHVIBES,
        .content = COMPOUND_STRING("While they’re not native to this continent, Resido has a sizable population of wild {STR_VAR_2} that have made it their home! The trees of {STR_VAR_1} are the best way to spot these birds but watch out- they can be fierce in battle!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasQuestStarted,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_LISTICLE_3] =
    {
        .userId = BUZZR_USER_WATCHVIBES,
        .content = COMPOUND_STRING("Did battling with the {STR_VAR_2} wear you out? Refuel at {STR_VAR_1} Taqueria where you can find the finest tacos, burritos, and nachos in the region!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasQuestStarted,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_LISTICLE_4] =
    {
        .userId = BUZZR_USER_WATCHVIBES,
        .content = COMPOUND_STRING("Work off those tacos by taking a looooonnnng walk in the {STR_VAR_1}. They say the inside is an impossible maze- can you find the deepest room before you join its residents… permanently?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasQuestStarted,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_LISTICLE_5] =
    {
        .userId = BUZZR_USER_WATCHVIBES,
        .content = COMPOUND_STRING("Make the hike up to {STR_VAR_1} and watch the sun set over Resido from the tallest point in the region. It’s a view you’ll never forget! "),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasQuestStarted,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_SHINZO_1] =
    {
        .userId = BUZZR_USER_SHINZO,
        .content = COMPOUND_STRING("The {STR_VAR_1} is so long! Western regions have so many long bridges."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasSubquest1Completed,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_SHINZO_2] =
    {
        .userId = BUZZR_USER_SHINZO,
        .content = COMPOUND_STRING("{STR_VAR_1} has a beautiful assortment of {STR_VAR_2}! I even caught a white one, but I probably won’t use it in battle."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasSubquest2Completed,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_SHINZO_3] =
    {
        .userId = BUZZR_USER_SHINZO,
        .content = COMPOUND_STRING("I’d heard that {STR_VAR_1}’s food was good, but these tacos are incredible! It’s nothing like the tacos I had back home. What are they doing differently?..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasSubquest3Completed,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_SHINZO_4] =
    {
        .userId = BUZZR_USER_SHINZO,
        .content = COMPOUND_STRING("{STR_VAR_1} and Sinnoh’s Turnback Cave are both nearly inescapable mazes with a relationship to another world… How many locations like this are there?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasSubquest4Completed,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_HYBRID_CULTURE_SHINZO_5] =
    {
        .userId = BUZZR_USER_SHINZO,
        .content = COMPOUND_STRING("Finally! A hike that properly compares to Coronet’s grand heights. {STR_VAR_1}, and Resido itself, are rather beautiful."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_HybridCulture_HasSubquest5Completed,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [ZAP_QUEST_NPC_RANGERS_HIRING] =
    {
        .userId = BUZZR_USER_LEAVERRA_RNGRS,
        .content = COMPOUND_STRING("Get ready to learn more about our precious residents in {STR_VAR_1} thanks to our newly installed Nature Probes!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_InstallNatureProbes_HasQuestCompleted,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 67,
    },
    [ZAP_QUEST_NPC_INSTALLNATUREPROBESWORKER_JOBHUNTING] =
    {
        .userId = BUZZR_USER_INSTALLNATUREPROBESWORKER,
        .content = COMPOUND_STRING("Hi! I'm Installprobesworker, and if you're looking for an experienced Pokémon Ranger, check out my work on my profile."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_Quest_InstallNatureProbes_HasQuestCompleted,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 3,
    },
    [ZAP_ADAORA_MIDRIFF] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("That girl from The Tide with the awesome midriff was just talking to people in the Pokemon Center in Tora Town like it was no big deal, just smack talking corpos for anyone to hear! She's a bold one, being so open about who she works with."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ADAORA_ZODIAC] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I just found out Adaora's zodiac sign is a Crustle? Me too! If I could be bothered to get out of bed I just know I'd be a badass vigilante lady as well!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_LUCREZIA_JOB] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The Commissioner of the Pokemon League and the CEO of Sharprise are the same person?? She must be some woman! How do you ever find the time?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ADAORA_TRUST] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Adaora was in town today. She thinks big of her leader, says they've been working together for years now. - apparently she's an amazing battler and all this other stuff. But how can you trust someone to run an organization when you don't even know who they are?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ELEANOR_REMEMBER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Does anyone remember Eleanor of the Elite Four? She made this big stink when they decommissioned the League, and then she just...Disappeared? Way to fight the power girl, lol"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_FRANK_CAREFREE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("It's hard to believe that Frank guy used to be Elite Four, he seems too carefree to me. Is there something more to him or does coming from a family of battlers just make you good like that automatically?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BD_POPPERS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I dunno man, I don't get how Sharprise is supposed be such a bad thing when I'm getting some of the best poppers of my life totally legal from BD. My ass has been zonked out for 3 of the past 4 weeks and it's great"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_NEEDLES_REVIEW] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Needles in Mermereza is helmed by a head chef who is proficient in the kitchen and battles. My visit was busy, the dining area crammed to the walls - yet this did not deter the head chef, in fact, it motivated her! The seafood was exquisite, if not a little decadent, even for my tastes."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHARLOTTE_TRASH] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I lost to some blonde chick earlier in what I thought was a really good battle. She told me afterwards she was never scared she'd lose because she “deserved” to win because she “clearly works harder” than me. Sharprise once again flooding Resido with trash."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_DIMU_DISCOURSE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Open letter to Gym Leader Dimu: If you're so fussed about the conservation of nature, maybe don't take your checks from the big megacorp destroying the environment. Oh, I forgot you got your big research institute so nowhere else matters, right?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_DOYLE_CRINGE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I'm surprised I've never seen that Doyle guy at any of The Tide's little protests. He's always posting some nonsense like “what goes around comes around” and “you get what you give”. I guess he's too embarrassing even for them."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_RUDE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Some kid called Baiya just stormed through Route 7, berating a bunch of the trainers for being “Sharprise Stooges”. I couldn't believe the mouth on this guy! Then he beat like 3 of them in a row! Straight-up embarrassed them! Anyone else had any run-ins with this kid?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_MAINCHARACTER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I see Buzzr are finding out about Baiya again. In-between yelling at people on the street for supporting Sharprise he apparently organises “track pick-up days” every other weekend and trains at Pintillion House every afternoon. Bro thinks he's the main character"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_MEGACROSS_DEFENSE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Megacross Defense are helping make Resido the safest region in the world. Thanks to the co-operation of Sharprise Capital, the Sharprise Stadium will be the safest place in the world during the Championship! #talkshitgethit"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PLAYER_PRESENCE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Caught some of {PLAYER}'s battles on TV this past week. They're good! So why do they come off like such a deer in the headlights? I guess being a talented battler doesn't guarantee you screen presence."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_RAMESH_ANDROID] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("For people who don't think Sharprise is a problem, ever heard their Chief Marketing Officer talk? It's like listening to an android. I bet he'd sell out his own grandma if it meant moving up the corporate ladder"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BD_MULTITASK] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Resido has the greatest multi-taskers in the world. I just got back from this Un. Real. Drag show in Irisina Town. Turns out the headliner is the Gym Leader there too?? I just got roped into it by a friend! I had no idea! #amiargento"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CAPHE_MORRIS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Caphe City has fallen into disrepair for a very simple reason; a lack of political willpower. The region would rather chase short-term benefits from investments elsewhere. As mayor, I WILL make Resido's upper crust hear us. #MorrisForMayor"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_YOBU_PIOCA] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("They nearly demolished Fort Yobu to make way for Pioca Bridge, but the bridge's engineer found a way to redesign it so that wouldn't be necessary. Remember that next time your city council tells you we have to bulldoze to build new houses. #cityplanning"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_IRISINA_QUEER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("LGBTQ+ folk, Irisina Town is where it's at nowadays! In case you missed the memo, Caphe is old hat. The bars are dingy, the drinks are weak and the vibes are off. Come down to Irisina sometime and see what our community can really be like! #LGBTQIA #Irisina #queercity"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TIRABUDIN_ZINES] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Tirabudin Place Literary Journal has been going for decades, even as print media dies out, and I hope they can keep it up for a long time. We need more stuff like this. #Tirabudin #Poetry #Zines"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TIRABUDIN_ZINES2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("If y'all are ever looking for a detox, check out the Tirabudin Place Literary Journal. I got sick of all the arguing online and gave it a look and man is it nice to just read cool things made by real creatives instead."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TORA_MOCHI] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The mochi shop in Tora Town closed down?? The one that'd been there for like 100 years?? Were The Tide threatening to burn that down too? Ugh. I'm sick of this year."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BELEN_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I was chowing down in Needles when Belen lost to {PLAYER}. I didn't even react at all in the moment, I was too entranced by the food!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHINZO_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I'm hearing Shinzo took an L to one of those kids from Sharprise. I don't know who I'm supposed to root for in that scenario but I'm glad the little know-it-all got humbled."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_EMRYS_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("One of those trainers with the Sharprise money beat Emrys! They sure do know how to pick them, huh?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PUA_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Pua LOST!? I guess when you're so chilled out all the time and you've got such beautiful hair to worry about maintaining, it can happen..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_NERIENE_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Y'all I think {PLAYER} is like a Top 5 trainer in the region right now. Neriene is tough as nails and they just blew right through her defense!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_DIMU_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Seems like they weren't kidding about {PLAYER}. I just watched them beat Dimu and it was pretty impressive. I wonder how far they'll go?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BD_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("BD just got handled by {PLAYER}. That was awesome! Are Sharprise growing these kids in a lab or something?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_AMI_BYSTANDER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I think I just watched one of the wildest battles I've ever seen? Seriously, {PLAYER} VS Ami Argento was CRAZY. I don't see Ami lose very often at all. Y'all missed out if you weren't there for it!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHARPRISE_FLOWN] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("More Sharprise trainers getting flown in recently. They get transportation, lodging and all other kinds of expenses covered. Is being good at Pokemon battling really worth that much?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_INVASIVE_POKEMON] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("We're cognizant of the impact invasive Pokemon species have on our local ecosystems. For that reason, trainers entering Resido via the Sharprise League Program can only bring one Pokemon from outside!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_NEW_TRAINERS] =
    {
        .userId = BUZZR_USER_SHARPRISE_EMPLOYEE_A,
        .content = COMPOUND_STRING("Feisty new trainers arrived in Cuconu Town today, ready to take on the world! Think you've got what it takes to beat them, Resido? Give it your best shot! It'll make our League season all the better!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_LEAGUE_PROSPECTS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Some of The League's hot young prospects were given a briefing on the resources we're making available to them today. It'll take a lot to beat them. Think you're up to the challenge, Resido?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_STARTING_GUN] =
    {
        .userId = BUZZR_USER_OLIVER,
        .content = COMPOUND_STRING("Consider the starting gun fired! One of our budding young trainers sped off to start the Gym Challenge before we could even explain the rules to her! That's the hunger you're all up against!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_CHEWING] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Has anyone run into this blue-haired kid with the short fuse in Mermereza? Dude was chewing people out left and right over nothing! Not a great first impression for all the new folk imo"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CAPHE_QUEUE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Queues everywhere in Caphe City today. Through the streets, into the alleys...And what do you know, there's a bunch of Tide people all over the place? What the hell are they up to now?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHARLOTTE_PRODIGY] =
    {
        .userId = BUZZR_USER_LUCREZIA,
        .content = COMPOUND_STRING("We received a visit from budding young prodigy, Charlotte at Sharprise Tower today. We decided to give her a Transport Card to commemorate the occasion. Best of luck, Charlotte! #leaguechallenge"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_POPIDORA_FREAKS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("New folk in Resido; we do not own those freaks trying to kick the man out of his shop at Popidora Pier! Seriously, what is The Tide's deal!? Ugh, I hate my region sometimes"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_GO_GOGGLES] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("WHY ARE GO-GO GOGGLES SO HARD TO COME BY IN THIS DAMN REGION? WHY ARE THEY THE ONLY GOGGLES GOOD ENOUGH TO GET YOU THROUGH THE FOG IN THE WEST? AND WHY CAN'T I UNSTICK MY CAPS LOCK???"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHINJI_BUDGET] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Has anyone else ever heard that Champion Shinji walked away from Resido because Sharprise cut the budget for his celebration party? I don't know if that's true but if so, good riddance I guess LOL"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_LUCREZIA_EMRYS] =
    {
        .userId = BUZZR_USER_LUCREZIA,
        .content = COMPOUND_STRING("Today I once again had the pleasure of meeting one of the League's up-and-comers. Your win over Emrys was marvelous, {PLAYER}! I'm convinced you might have what it takes!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_CUSTOMS] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING("All these new Sharprise trainers care about is money! They've got no regard for our culture or customs! Does no one else see this!?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_RAMESH_THANKS] =
    {
        .userId = BUZZR_USER_RAMESH,
        .content = COMPOUND_STRING("Thank you all for tuning into our various League Challenger streams. We put a lot of resources into pioneering this technology and we're thrilled to be providing you with all the high-octane action!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CURENO_TIDE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("There was almost a dust-up at the park in Cureno Port today! Thankfully it was broken up by someone from The Tide. First time I've ever seen them diffuse a situation, lmao"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHARLOTTE_WINNING] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I'm calling it. Charlotte's winning the League. She's at 5 badges already! @ me when I'm right"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_WINNING] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Hot take: I hope Baiya wins the League. Yeah he's annoying but he's Resido through-and-through, and he's kiiiinda got a point about all the outsiders just being in it for the money!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PLAYER_POLICE] =
    {
        .userId = BUZZR_USER_ELDERLY,
        .content = COMPOUND_STRING("It's good to see people like that {PLAYER} keep those Tide idiots in check when the police are nowhere to be found. That was my first Buzz! Er, am I doing this right?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_GOLD_BREEDING] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Sharprise trainers get access to the Gold Tier program at the Chasilla Breeding Center? Where do I sign up!? I'm sick of sitting around waiting for my Slowpokes to kiss!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_EARTHQUAKE_PANIC] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Any other East-siders ever get nervous when ya hear something rumbling, thinking another earthquake's coming on? I just had a panic attack and it was literally my Politoed's stomach! LOL"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ARANTRAZ_SCANDAL] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("My Grandpappy was one of the journalists who first reported on the Arantraz Scandal as it broke. Even now, the story gets a little twisted in recountings. I worry for the future of truth online..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_LONG_BATTLE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Just had a battle go over an hour because some dude kept hitting Hypnosis. I can't be the only one who misses double battles, right? At least they went quicker!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_KEIYING_YOBU] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("What was Kei-Ying doing at Fort Yobu today? He doesn't strike me as the kind of guy to wanna look at guns and lasers."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_KEIYING_COMPETITIVE] =
    {
        .userId = BUZZR_USER_KEI_YING,
        .content = COMPOUND_STRING("Here in Resido I think we're most having the exciting competitive season in our history. Please do not let various unnamed hooliganism spoil that, and call it out as you see it!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHARLOTTE_PLAYER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Ssssick battle between Charlotte and {PLAYER} on the beach today. I wouldn't be surprised to see those two run it back in the League Finals!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TALA_FIRED] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I'm in my 20's and I don't think I could get a crowd as fired up as Tala if I had a live Houndoom! You should have heard this speech about keeping our traditions in Tirabudin alive today! Wow!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_TALA] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING("If you enjoyed Tala's speech at Tirabudin Place recently then you should also want Sharprise and their lackeys out of their region. They're not compatible with what Resido should be!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TIDE_CONSTRUCTION] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Can't hate The Tide for siding with some honest construction workers. Am I starting to like them? Eh. I'm sure they'll find a way to blow it all up in a week or two"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_GALAR_LEG] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("My Dad just got back from his job in Galar with a serious leg injury. He mines gems for a living and I'm sure the money's good and it's not ballet but...Is it really supposed to be this dangerous?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHAMPIONSHIP_DELAYED] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("DELAYED! We finally got a big awesome championship League like all the other regions and it gets DELAYED. Why can't we have nice things? I'm moving to Kanto"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHARLOTTE_RANDOM] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I battled Charlotte today. She beat me bad...And after I'd been doing so good too. She had the perfect start. Why did it feel like she knew exactly what I like to lead with?..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_FRANK_CASUAL] =
    {
        .userId = BUZZR_USER_RANDOM_MIDDLE_AGED,
        .content = COMPOUND_STRING("When I challenged the old Elite Four it was Frank that did me in. I found him such a strange fella...So laidback and casual, yet he has to have valued hard work to battle like that!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HACK_PSA] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("BREAKING: Widespread social media hack believed to be under way at Sharprise. Suspects yet to be named but believed to be affiliated with The Tide"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHAPRRISE_HACK] =
    {
        .userId = BUZZR_USER_SHARPRISE_LEAGUE_A,
        .content = COMPOUND_STRING("Resido League Championship finals come to you LIVE at an unspecified date in a stadium built by workers we screwed over, featuring trainers who think your region sucks. That's the Sharprise way, baby!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_RAID_PSA] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("ATTENTION CIVILIANS: There is a situation ongoing today at the Halai Island Naval Base. Residents and tourists are strictly advised to steer clear and not cross the police cordon."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHAMPIONSHIP_START] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Championships begin TODAY, BABY. I'm psyched! I've been following this all season. My money's on the kid with the Shock Wave Chandelure! Take that, Water types!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_POLICE_TIDE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Props to the police for finally getting something done and handing those Tide goons a spanking. Apparently some of the League challengers helped out too? Resido might be alright after all"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_TIDE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("If Baiya wins the Championships, watch him turn around and reveal that he was with The Tide all along and start preaching to everyone in the arena. God, please spare me"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PLAYER_SHARP] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("{PLAYER}'s looked sharp all season. I don't know if they're as good as Charlotte, but they're my dark horse to win the whole thing!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHARPRISE_FAN] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Oh no, this League Championship has been sick. I've booked the whole day off work to watch the finals. Am I...Becoming a Sharprise fan? Someone Salt Cure me!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHAPRIRSE_HACK_2] =
    {
        .userId = BUZZR_USER_SHARPRISECAPTIAL,
        .content = COMPOUND_STRING("Here at Sharprise we believe in one thing; nothing. We just want to make money because we're soulless hacks. Check out our profile for more incredible insights!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHAPRRISE_HACK_3] =
    {
        .userId = BUZZR_USER_SHARPRISECAPTIAL,
        .content = COMPOUND_STRING("From the people that brought you airdropped nepo babies with free travel passes, check out rampant unchecked capitalism and homelessness! Find out more at your local depressing Sharprise skyscraper!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHAPRRISE_HACK_4] =
    {
        .userId = BUZZR_USER_SHARPRISECAPTIAL,
        .content = COMPOUND_STRING("I hope no one finds out about all our weird freaky science experiments that are polluting the rivers and maybe also enraging really powerful wild Pokemon. Good thing I'm not posting about it online"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHARPRISE_HACK_5] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Miss the old League system? Feel bad for the old Elite Four who gave their blood, sweat and tears to this region and were forced out of a job? Well, we don't really have an answer for that"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHARPRISE_HACK_6] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Business monopolies aren't bad btw. We have one and it's great. We make sooo much many off of gems mined in foreign regions. We even give them out for free to rich kids who suck up to us enough!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_FANTASY_LEAGUE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("It's {PLAYER} VS Baiya in the finals!? My fantasy league is DEAD. Baiya's from Resido and all but {PLAYER} seems kinda cool...Who do I root for?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PLAYER_CHAMPION] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("So our Champion is {PLAYER}, huh? I remember watching them beat Dimu on stream way back and thinking they probably had the stuff. Well deserved imo!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PLAYER_BREAK] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("{PLAYER}. Great trainer. Not a great interview! They've gotta stop shoving this poor in front of the media all the time. They're not built for this! Give them a break, or better yet - some time off!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PLAYER_BAIYA] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Spotted {PLAYER} and Baiya having a friendly battle on Zenzu Island today. Got me real nostalgic for the Championship Finals. Are those two kinda buddy-buddy lately or something?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HODOU_JOHNNY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Yo, Houdou'ers. Did you guys see Johnny back in town today? I had to have my Wigglytuff Doubleslap me to make sure I wasn't seeing things! Something going on?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ZENZU_MOVING] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Lotta people moving stuff around in and out of buildings on Zenzu Island right now. Like, more than usual..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ESPULEE_SHELL] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The gym and antique store in Espulee Outskirts was a rare touch of humanity in that place. I was sad to see it a shell of its former self when I went back recently. I really am getting old..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TRAINING_VIBE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Popped by one of those new training centers that've been springing up recently. It's a cool vibe in there! Reminds me a bit of how Resido used to be"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ARANTRAZ_UNSETTLING] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Being at Arantraz gives me this weird, unsettled feeling. I mean I know it's a prison and all, but even worse than that. Place has to be giga haunted, and I bet there's so much we still don't know..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HODOU_FIGHT] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Sharprise goons backed by corrupt cops are gonna close in our new training center and try and close it down tonight. Will Hodou stand with us or must we fight on our own?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_POLICE_BRUTE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I'm no Tide supporter but what's happening in Hodou feels wrong. Police using brute force on people who've already surrendered...Like, bag 'em and all...But maybe not like that?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TIDE_RIOTS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Seems like The Tide'll be done for soon. All the riots in the streets and queues in the alleyways will be gone. Why do some people seem so mad about the idea?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHARPRISE_FAR] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("When are we gonna be sane and say this has all gone too far? Sharprise trainers bullying people at newspapers and consulting firms, making a Poke Ball seller cry? How are they any better than what they say The Tide are?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PLAYER_RANCID] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Pretty rancid atmosphere in the stadium today for {PLAYER}'s exhibition match. But if they just imagine their opponent's a harmless Poke Ball seller, that shouldn't bother them - right?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CREEPY_LADY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I live near the stadium and sometimes when I look out my window at night there's this old lady just hanging around out there...I don't think she means any harm to anyone but...Gives me the creeps..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TORGEOT_CHILLS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I still get chills just being around Torgeot Climb. Not even at the top! There's so much magic and mysticism here, nowhere else in Resido has a vibe like it."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHARPRISE_BOYCOTT] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Sharprise's rampant corruption and greed has gone unchecked too long, to the point that even the Champion can no longer turn a blind eye to it. What do you say Resido, boycott all products?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_IRISINA_BALL] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("My pa's looking at closing down his Poke Ball shop. This nice lady used to swing by most nights and buy tons of Dusk Balls, but now he says she's gone and he can't get by without. Can anyone help?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_E4_WATCH] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("A statement from The Resido Elite Four: We can not and do not tolerate the presence of Sharprise in our region. The fight back begins today. Watch this space."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAIYA_BUDDY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Baiya and our Champion being all buddy-buddy, if rumors are to be believed. You wouldn't believe it the way they were going at each other in those League Finals. Funny how things can change!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHAMP_CHEATED] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Got talking to a guy today who says he knows for a fact that the Champ cheated en route to the League Finals. They couldn't tell me how and work for Sharprise so...Make of that what you will"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BUZZR_MISINFORMATION] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Report: Almost 30% of zaps on Buzzr fall under Hammerlocke University's definition of misinformation. Will Resido ever regulate this? Or does it define misinformation differently?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BODEGA_SHOUTOUT] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Shoutout to some of the locals who've been helping me and ma unload deliveries to the bodega lately. Her back's giving out as many of y'all know. You's are the best! Resido, baby!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HALAI_NIGHTMARE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("This is horrible. It genuinely feels like a nightmare. I had friends on Halai...My thoughts go out to all who were affected..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HALAI_RECONSTRUCTION] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Reconstruction efforts underway in Halai. Casualties fall slightly short of triple digits. Aid is flowing but it's staggered, most infrastructure in place but weakened and hazardous."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HALAI_AID] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("In Halai giving out aid, an earthquake ain't gonna bring us down for good! We're way tougher than that! #halaiearthquake #residostrong"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_OLD_E4] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("It's times like this that I'm glad the old Elite Four are back. I don't know, having them around is a comfort. Is it weird to say I missed them even if I've never met any of them?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_FIRST_PROTEST] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I'm going to my first protest outside Sharprise Spire today. Idk, it just feels right. Resido hasn't felt like Resido lately and I think it's because they own most of it"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HUGE_TURNOUT] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Huge turnout outside Sharprise Spire for the protest today! What's more, sounds like there's a big commotion inside! Did some of us break in? I don't even care!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHAMP_STORMED] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The Champ and The Elite Four STORMED Sharprise Spire and beat up all the execs?? AYO That is the most badass thing I've heard in my life. RESIDO FOREVER, BAYBEE!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_INKAY_HYPNOSIS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("My Inkay learned Hypnosis last week and it is literally ruining my life. It put my MOM to sleep while she was cooking as a prank?? I gotta trade this thing for something bro"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ALT_GIRL] =
    {
        .userId = BUZZR_USER_GIRL,
        .content = COMPOUND_STRING("To the alt girl I locked eyes with in Irisina Town by the ball shop, PLEASE DM ME. I'm sorry I laughed. It's my defense mechanism when confronted with beautiful women!!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CURENO_ANKLE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Sprained my ankle cycling around Cureno Port, waited 3 hours in A&E, had some mid noodles and now I'm sat at home in a cast with my Murkrow pecking away at my head. It's only Tuesday."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_KALOS_TOURIST] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("These tourists from Kalos are SO RUDE. OMG. One of them asked ME for directions to Glavez Hill, I said I didn't know from here. He starts BERATING ME for not knowing?? Screw you, jerk!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BITE_MEGA] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("90% sure I just bit into a Mega Stone at one of the bakeries in Caphe City. I wanna see about suing but if I can find out what this Mega Evolves I might be in business for the League..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TIDE_DONE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The Tide are done for, it seems. I can't wait for the day I can leave my house without hearing some slogan or seeing the streets covered in stupid flags. "),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_TIDE_RUBBISH] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("For all that we heard about The Tide's leadership being super powerful, sure doesn't seem like they've been able to do much against Resido's best, eh? Good riddance to bad rubbish!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BAD_EARTHQUAKE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("When's the last time an earthquake this bad happened? I saw it on the news and I don't think a team of Tyranitar could have done that!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CHASILLA_EARTHQUAKE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("We even felt the ground shake a bit over here at Chasilla...Sending prayers out to everyone at Halai Island."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_OUTSIDER_CHAMPION] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("So {PLAYER} is our Champion...I don't know how I feel about it being someone from outside the region, but they seem like a nice enough kid. Better it be them than that Charlotte girl."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SICK_FINALS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("That was a sick League Finals. I didn't know Baiya was that good! But I did see {PLAYER} beat Belen way back when and put a bet down on them going all the way that day LOL"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PIOCA_FIREWORKS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The fireworks display at Pioca Bridge last night was AMAZING. The guys who train the Magmortars to shoot like that are national treasures."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_HANO_BEACH] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Byyeee Resido! I'm off to Alola for a 2-week vacation! Try not to have any earth-shattering events while I'm relaxing on Hano Beach!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_MIME_WALLS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("To the kid who thinks it's funny to have his Mime Jr. put up walls in front of people trying to get through Lanjing Tunnel - I'm gonna find you and give you a swirlie."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CAPHE_ESPULEE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Some lady strutted through Caphe today in a fancy coat literally pinching her nose. Me and a buddy had a ¥5 bet to see if we could guess where she was from. I said Espulee. I love the smell of money"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_COLD_COAST] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Oof. It's cold out today, especially by the coast! Wrap up warm, people!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_DEVON_CORP] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The Devon Corp in Hoenn are working on an eye lens that'll let you tell a Pokemon's nature just by looking at it up close. How does such a thing even work? “Nature” is a concept, not a science. Right?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_VICTORY_TACO] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Usually I treat myself to a Victory Taco after I win a battle but this kid passing through Mermereza totally stomped me today...How do I justify a Consolation Taco?..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_SHEER_COLD] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I hit three Sheer Colds in a row today. Do I go gambling?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BURN_HEAL] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Applying Burn Heals are the worst. My Pokemon doesn't want me going near the affected area! Can't we just hose 'em down or something?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_OLD_BUZZR] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("When do you think your kid's old enough to be allowed on Buzzr? I feel like most of us are pretty well-behaved on here but I feel like you can never be too safe..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PRESTO_CREEPY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Can't lie I think Presto's a little too good lately...Like I ordered a Good Rod from all the way in Cresalta earlier today and it showed up like 3 hours later? Is that not almost a little creepy?"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_POMEG_SPICY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I tried a Pomeg Berry myself today out of curiosity. Big mistake! Those things are for Pokemon only! Spicy berries should not be a thing!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_DRILBUR_EVOLVE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("YESSS! My Drilbur finally evolved into Excadrill today! Only it went to hug me right away and I nearly died because of all the spikes. We'll figure it out!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_PINTILLION_SPEWPA] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Today's the day. I'm taking on Pintillion House again! Last time I lost in literally the first battle but I've got a good feeling about this one! Let's get it, Spewpa!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_BATON_PASS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Oh. My. God. Today I pulled off a Baton Pass strategy during outside class, Pua just happened to be nearby and he shouted out that it was “beautiful”. I'm pretty sure I didn't even pass any stat changes but still!! “Beautiful!” Me! AHHHHHHHHH!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_CLUTCH_PRIORITY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("So I thought I was about to clutch with my Arcanine's Extremespeed, but I got KO'd by Fake Out? You mean some priority moves have MORE priority than others!? This is too much man I'm going back to bartending"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_ASSES_TEAM] =
    {
        .userId = BUZZR_USER_ELDERLY_B,
        .content = COMPOUND_STRING("Listen closely, young trainers! Winning a Pokemon battle is not just about hitting what's in front of you! Assess the team as a whole! What are the threats? Make sure you have your answers ready for when they come in!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_DUSK_STONE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Note to self, Doublade evolves into Aegislash with a Dusk Stone...Not by giving it a shield you stole from the ren faire..."),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
    [ZAP_STAT_CHANGE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Y'all up on your stat changes? Remember, if a Pokemon's stat goes up by 1 stage, it's increased by 50% of its original amount. If you're up 2 stages? That means you're doubled. So Agility increases your Speed by 2 stages, meaning it doubles your speed instantly!"),
        .isPrivate = FALSE,
        .criteria = ZapCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 0,
        .likeCount = 0,
    },
};
