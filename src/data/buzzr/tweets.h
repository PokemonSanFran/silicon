const struct Tweet gTweets[] =
{
    [TWEET_NONE] =
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
    [TWEET_QUEST_NPC_RABIES] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("My cousin caught rabies in {STR_VAR_2}! Feral {STR_VAR_1} are attacking pets and people like crazy. Apparently the RSPCP's finally gonna do something about it and hook up people who can subdue or capture {STR_VAR_1} to chill things out over there. I'll be doing my part! &formycuz"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Rabies,
        .quest = QUEST_RABIESOUTBREAK,
        .dislikeCount = 8,
        .likeCount = 46,
    },
    [TWEET_STORY_EPILOGUE] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING(
                "We've got more work to do!\n"
                "Let's get at it."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_StoryClear,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 13,
    },
    [TWEET_QUEST_NPC_SMOOTHIE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I always go to the Marble Slab in {STR_VAR_1} before I start training with a new Pokémon. Their {STR_VAR_3} clears out a Pokémon’s toxins which makes them easier to train. It’s all natural too! Bring {STR_VAR_2} and they’ll make your first one free!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Ice,
        .quest = QUEST_SMOOTHIECRAFTING,
        .dislikeCount = 21,
        .likeCount = 14,
    },
    [TWEET_QUEST_NPC_DEOXYS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING(
                "I was attacked by a wild Pokémon! It\n"
                "suddenly fell from the sky, changed its\n"
                "shape into this super fast orange thing,\n"
                "and started shooting lasters at me...\n"
                "I did some searching online, and I think it\n"
                "was a Deoxys! I managed to get a pic..."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Deoxys,
        .quest = QUEST_VSDEOXYS,
        .dislikeCount = 24,
        .likeCount = 46,
        .tiles = (const u32[])INCGFX_U32("graphics/ui_menus/buzzr/tweet_pics/3.png", ".4bpp.smol"),
        .tilemap = (const u16[])INCBIN_U16("graphics/ui_menus/buzzr/tweet_pics/3.bin.smolTM"),
        .pal = (const u16[])INCGFX_U16("graphics/ui_menus/buzzr/tweet_pics/3.png", ".gbapal"),
    },
    [TWEET_QUEST_NPC_TUNNELS] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("There’s a rumor that the {STR_VAR_1} elders know of a treasure hidden in the city’s underground and it’s guarded by a powerful Pokemon! Can anybody find the treasure before they take the secret to their grave?"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Tunnels,
        .quest = QUEST_HODOUTUNNELS,
        .dislikeCount = 29,
        .likeCount = 13,
    },
    [TWEET_QUEST_NPC_FRESHWATER] =
    {
        .userId = BUZZR_USER_VAUGHN,
        .content = COMPOUND_STRING("Check out my favorite spot in {STR_VAR_1}! There's a clearing with no tall grass, beautiful trees, and a fresh water spring! The water tastes better than anywhere else in the region, and it’s got magical properties: If you bring an octopus Pokémon, it'll turn shiny!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Freshwater,
        .quest = QUEST_FRESHWATEREVOLUTION,
        .dislikeCount = 7,
        .likeCount = 25,
    },
    [TWEET_QUEST_NPC_STONE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Take the &MegaTrolleyChallenge and experience the best way to travel in Resido! Complete {STR_VAR_1} Mega rides, and visit the Mega G.R.U.N.T. HQ for a way to unlock your Pokémon’s Mega potential!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Stone,
        .quest = QUEST_BETWEENASTONEANDAHARDPLACE,
        .dislikeCount = 25,
        .likeCount = 32,
    },
    [TWEET_GYM_MERMEREZA_CITY_BADGE] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING(
                "{PLAYER} beat Belen!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_MermerezaCity_Badge,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 37,
    },
    [TWEET_GYM_TORA_TOWN_BADGE] =
    {
        .userId = BUZZR_USER_SHINZO,
        .content = COMPOUND_STRING(
                "{PLAYER} beat Shinzo!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_ToraTown_Badge,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 9,
    },
    [TWEET_GYM_PERLACIA_CITY_BADGE] =
    {
        .userId = BUZZR_USER_EMRYS,
        .content = COMPOUND_STRING(
                "{PLAYER} beat Emrys!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_PerlaciaCity_Badge,
        .quest = 0,
        .dislikeCount = 26,
        .likeCount = 19,
    },
    [TWEET_GYM_CHASILLA_BADGE] =
    {
        .userId = BUZZR_USER_PUA,
        .content = COMPOUND_STRING(
                "{PLAYER} beat Liko!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_Chasilla_Badge,
        .quest = 0,
        .dislikeCount = 40,
        .likeCount = 35,
    },
    [TWEET_GYM_FORT_YOBU_BADGE] =
    {
        .userId = BUZZR_USER_NERIENE,
        .content = COMPOUND_STRING(
                "{PLAYER} beat Nerienne!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_FortYobu_Badge,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 21,
    },
    [TWEET_GYM_HALERBA_CITY_BADGE] =
    {
        .userId = BUZZR_USER_DIMU,
        .content = COMPOUND_STRING(
                "{PLAYER} beat Dimu!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_HalerbaCity_Badge,
        .quest = 0,
        .dislikeCount = 31,
        .likeCount = 34,
    },
    [TWEET_GYM_TIRABUDIN_PLACE_BADGE] =
    {
        .userId = BUZZR_USER_BD,
        .content = COMPOUND_STRING(
                "{PLAYER} beat BD!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_TirabudinPlace_Badge,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 34,
    },
    [TWEET_GYM_IRISINA_TOWN_BADGE] =
    {
        .userId = BUZZR_USER_AMI,
        .content = COMPOUND_STRING(
                "{PLAYER} beat Ami Argento!\n"
                "This is placeholder text."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Gym_IrisinaTown_Badge,
        .quest = 0,
        .dislikeCount = 20,
        .likeCount = 18,
    },
    [TWEET_STORY_GRUNT_RESTORED] =
    {
        .userId = BUZZR_USER_GRUNT,
        .content = COMPOUND_STRING(
                "The ferry route between HalaiIsland and\n"
                "Ferrybuilding has been restored.\n"
                "We will update again when the other routes\n"
                "regain service.\n"
                "Thank you for your patience.\n"
                "Thank you for riding Greater Resido Urban Network Transit."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Story_GRUNT_Restored,
        .quest = 0,
        .dislikeCount = 1,
        .likeCount = 59,
    },
    [TWEET_STORY_STRIKE_BEGIN_1] =
    {
        .userId = BUZZR_USER_NEWS,
        .content = COMPOUND_STRING(
                "BREAKING NEWS: SharpRise Stadium construction\n"
                "crew has declared a strike. Their demands\n"
                "are unclear at this time. This puts the\n"
                "upcoming dates of the SharpRise Capital League\n"
                "Championship in danger.\n"
                "(1/2)"
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Story_Strike_Begin1,
        .quest = 0,
        .dislikeCount = 57,
        .likeCount = 12,
    },
    [TWEET_STORY_STRIKE_BEGIN_2] =
    {
        .userId = BUZZR_USER_NEWS,
        .content = COMPOUND_STRING(
                "BREAKING NEWS: SharpRise Stadium construction\n"
                "crew has declared a strike. Anonymous\n"
                "sources claim that The Tide is\n"
                "responsible for instigating this protest\n"
                "but we'll have more information as the\n"
                "situation develops.\n"
                "(2/2)"
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Story_Strike_Begin2,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 99,
    },
    [TWEET_STORY_WAREHOUSE_RAVE] =
    {
        .userId = BUZZR_USER_TIDE_EVENT_BOT,
        .content = COMPOUND_STRING(
                "Come celebrate the return of the Elite\n"
                "Four! Tonight, in the CurenoPort Packing\n"
                "District. Follow the music to the center\n"
                "warehouse!"
                ),
        .isPrivate = TRUE,
        .criteria = TweetCriteria_Story_Warehouse_Rave,
        .quest = 0,
        .dislikeCount = 3,
        .likeCount = 43,
    },
    [TWEET_QUEST_NOPODMOD_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Went on a date tonight. Super hot, great texter… but he was one of those NoPo weirdos! Why can’t you just be normal?!?!?! &RedFlags"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 47,
    },
    [TWEET_QUEST_NOPODMOD_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I’m feeling so isolated lately. It’s hard to find other people in the NoPo movement. Where do those people hang out?"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_IsCompulsiveHealingReward,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 14,
    },
    [TWEET_QUEST_NPC_RABIES_COMPLETE] =
    {
        .userId = BUZZR_USER_RSPCP,
        .content = COMPOUND_STRING("There is no rabies outbreak within the Resido region at this time. There is an increase of Pokémon infected with Pokérus at {STR_VAR_2}, but since humans are not impacted by Pokérus, this is not a public health concern at this time."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_IsRabiesComplete,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 18,
    },
    [TWEET_QUEST_NPC_SMOOTHIE_COMPLETE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I got scammed by the Marble Slab! My Pokémon got weaker, and it’s so expensive. 0 stars. If you want to reset Effort Values, just use an item like {STR_VAR_1}."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_IsSmoothieCraftingComplete,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 8,
    },
    [TWEET_QUEST_NPC_PSYOP] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Get ready for the &AuthenticHustle Challenge! You’ve gotta grind if you want your Phony {STR_VAR_1} to be peak. Catch one in a {STR_VAR_3}, max out its Effort Values, and come to {STR_VAR_2} to do the challenge right!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Psyop,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 14,
    },
    [TWEET_QUEST_NPC_PSYOP_ACTIVE_A] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Always on that {STR_VAR_2} mindset! I got my Antique {STR_VAR_1} through true grit and determination. Put in the work, and you can achieve greatness too!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_IsPsyopActive,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 4,
    },
    [TWEET_QUEST_NPC_PSYOP_ACTIVE_B] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I did the &AuthenticHustle Challenge, and now my {STR_VAR_1} is super legit! Buckle down, unlock that {STR_VAR_2} mindset, and you can achieve the same. Keep pushing!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_IsPsyopActive,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 31,
    },
    [TWEET_QUEST_NPC_PSYOP_ACTIVE_C] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I got one ability: {STR_VAR_2}. I’m on my {STR_VAR_1} mindset, all day, every day!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_IsPsyopActive,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 25,
    },
    [TWEET_QUEST_NPC_PSYOP_COMPLETE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Working three jobs just to save up for {STR_VAR_2} and {STR_VAR_3} - that’s the grind! My {STR_VAR_1} is going to be maxed out, and nothing will stop me. Haters don’t + me."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_IsPsyopComplete,
        .quest = 0,
        .dislikeCount = 1,
        .likeCount = 48,
    },
    [TWEET_STORY_FALSETIMELINE] =
    {
        .userId = BUZZR_USER_SHARPRISECAPTIAL,
        .content = COMPOUND_STRING(
                "The Tide's presence in Resido makes for a\n"
                "worse region for all. Starting today, we'll be\n"
                "working with the Police Dept. and\n"
                "Champion {PLAYER} to put an end to\n"
                "their terrorist activites."
                ),
        .isPrivate = FALSE,
        .criteria = NULL,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Arriba is nice and all, but G.R.U.N.T. is so much cheaper! &BallerOnABudget"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode1Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("TIL how accessible G.R.U.N.T. is! I lost my leg in a {STR_VAR_1} accident, and I can still easily navigate in my wheelchair!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode3Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_3] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Yo I’m DYING in this traffic with all these tech workers! I’m taking G.R.U.N.T. from now on, that’s wayyyy smarter!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode5Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_4] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("It’s fascinating how much {STR_VAR_1} resisted having a G.R.U.N.T. station. Access boosts property values, doesn’t it?"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_BetweenAStoneAndAHardPlace_HasRode9Times,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_BETWEENASTONEANDAHARDPLACE_NPC_5] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Did anybody else do this &MegaTrolleyChallenge? Absolute scam. I’m walking to work just to spite them!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_BetweenAStoneAndAHardPlace_IsRewardOrComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTAURANTEXPANSION1_1] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("I’m making some changes in the coming weeks. I’ve had a palate-warping experience and I’m ready to share it all with you!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestaurantExpansion1_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTAURANTEXPANSION1_2] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("I'm opening a new restaurant in {STR_VAR_1} called Flowers. Flowers will have a Pay-What-You-Can model. Resido is my home, and nobody in my home should ever go hungry."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestaurantExpansion1_2,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTAURANTEXPANSION1_3] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("Flowers will maintain my commitment to top-shelf ingredients and taste. Try our the menu and see for yourself!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestaurantExpansion1_3,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_DIGGINGUPADAORASDIRT_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Be mindful of this guy sniffin’ around asking questions about Adaora. I reckon he’s got “cop” written all over him."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Diggingupadaorasdirt_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_DIGGINGUPADAORASDIRT_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("A fight broke out in {STR_VAR_1} a while ago, and Adaora broke it up just by appearing! It was like something out of a manga…"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Diggingupadaorasdirt_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_DIGGINGUPADAORASDIRT_3] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I’m sick of the thugs hangin’ around {STR_VAR_1} like they own the place! Somebody’s gonna have to take the trash out sooner or later…"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Diggingupadaorasdirt_1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_DIGGINGUPADAORASDIRT_4] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I wonder how Adaora’s parents feel about their daughter having become a terrorist. Probably fled the region out of shame, that’s why you never hear about them."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RETURNDOLL] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Somehow, our child was reunited with her favorite doll we thought we’d lost in the move from {STR_VAR_1}! There really are some angels around these parts!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_ReturnDollComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_FREETHEINNOCENT_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("A suspect has been taken into custody over the robbery of the Resido Hiking Club: a member of The Tide known as FindtheguiltyvictimB."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_FREETHEINNOCENT_2] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("FreetheinnocentvictimB would never steal anything! The cops need to step their game up!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_FREETHEINNOCENT_3] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The police aren’t being aggressive enough. This hiker thief is a small fry. Gotta lock the rest of those Tide weirdos up too."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_FREETHEINNOCENT_4] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("The Tide shouldn’t be allowed to just get away with robbing an enthusiast club with no consequences. Glad one of ‘em finally got put in their place."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Freetheinnocent1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_FREETHEINNOCENT_5] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Somebody brought a boba cup back to the counter today straight from out of the garbage! Just another day in the life!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Freetheinnocent5,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_FINDTHEGUILTY_1] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("SharpRise meddling in the affairs of a hiking club of all things now. Reeks of fear if you ask me!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Findtheguilty1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTAURANTEXPANSION2] =
    {
        .userId = BUZZR_USER_BELEN,
        .content = COMPOUND_STRING("Looking for busboys, servers, chefs and line cooks - My new resturants wants to hire more Resido residents. DM me if you’re interested!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Restaurantexpansion1,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_KITCHENVOLUNTEERING] =
    {
        .userId = BUZZR_USER_RESTAURANTEXPANSIONBUSSER,
        .content = COMPOUND_STRING("We need staff at Flowers, the joint’s overflowing! As long as ya show up, we don’t care who ya are!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_Kitchenvolunteering,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREESPULEEGYM_ACTIVE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Did I just see Imelda getting ready to battle out in {STR_VAR_1}? Is something happening?"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestoreespuleegymActive,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREESPULEEGYM_COMPLETE_BAIYA] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING("Yo! Check out the {STR_VAR_1} Swap Meet some time, trainers! It's a great place to level up!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestoreespuleegymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREESPULEEGYM_COMPLETE_IMELDA] =
    {
        .userId = BUZZR_USER_IMELDA,
        .content = COMPOUND_STRING("The {STR_VAR_1} Antique Shop has become the {STR_VAR_1} Swap Meet! Please do come by for some quality battling some time."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestoreespuleegymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREZENZUISLAND_ACTIVE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Just heard what sounded like some crazy monster noises coming from {STR_VAR_1}. Is Doyle back to battling again?"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestorezenzugymActive,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREZENZUISLAND_COMPLETE_BAIYA] =
    {
        .userId = BUZZR_USER_BAIYA,
        .content = COMPOUND_STRING("Looking for a new place to level up, trainers? Check out {STR_VAR_1}'s new Battle Studio!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestorezenzugymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREZENZUISLAND_COMPLETE_DOYLE] =
    {
        .userId = BUZZR_USER_IMELDA,
        .content = COMPOUND_STRING("I'll soon be building up an independent film and battle studio on {STR_VAR_1}! Swing by sometime if you'd like to get involved!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestorezenzugymComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREHODOUCITY_ASSIGNED_RESTORATION] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I thought {STR_VAR_1} Gym was donezo, but I keep hearing strange banging sounds from over there. I went to go look, but the lights are always off!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestorehodoucityAssigned,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREHODOUCITY_FOUND_LEADER] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("It hasn’t been the same since the {STR_VAR_1} Gym closed. I saw Johnny around town today, and it brought back some real memories."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestorehodoucityFoundLeader,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREHODOUCITY_COMPLETE_RANDOM] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I went to {STR_VAR_1} Dojo and got totally wrecked! I need to focus on type specialization… &BackToTheLab"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestorehodoucityComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_RESTOREHODOUCITY_COMPLETE_JOHNNY] =
    {
        .userId = BUZZR_USER_JOHNNY,
        .content = COMPOUND_STRING("Trainers! I’m Johnny, the new leader of {STR_VAR_1} Dojo. Come test your skills with our Restricted Sparring. I’m excited to meet the new battle community of {STR_VAR_1}!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_RestorehodoucityComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_IMPROVBATTLING_ACTIVE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("I saw {PLAYER} at the {STR_VAR_1} Improv Show! It’s awesome to see new Trainers to the region embracing local traditions."),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_ImprovbattlingActive,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_IMPROVBATTLING_COMPLETE] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("{STR_VAR_1} Improv’s gimmick is super similar to the Battle Factory in Hoenn… or was it Sinnoh? Who did it first?"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_ImprovbattlingComplete,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_TEACHATRAINERTOFISH_FISHERFOLK] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Has anybody spent time with the Fisherfolk around {STR_VAR_1}? I thought fishing was supposed to be relaxing, but those guys are intense!"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [TWEET_QUEST_TEACHATRAINERTOFISH_DOCUMENTARY] =
    {
        .userId = BUZZR_USER_PLACEHOLDER,
        .content = COMPOUND_STRING("Watched a fishing documentary called “The Perfect Cast” about some Kalosian fishing techniques. I was too baked to understand, but Resido got a shoutout for a strong fishing culture! &masterthebaitt"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_AlwaysTrue,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
};
