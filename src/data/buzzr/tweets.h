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
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/buzzr/tweet_pics/3.4bpp.smol"),
        .tilemap = (const u16[])INCBIN_U16("graphics/ui_menus/buzzr/tweet_pics/3.bin.smolTM"),
        .pal = (const u16[])INCBIN_U16("graphics/ui_menus/buzzr/tweet_pics/3.gbapal"),
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
        .content = COMPOUND_STRING(
                "Riding the trolley is the best way to get\n"
                "around! If you ride the trolley more than\n"
                "ten times, come to the GRUNTHQ for a stone\n"
                "that can help Pokémon unlock their Mega\n"
                "potential!"
                ),
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
        .content = COMPOUND_STRING("I did the &AuthenticHustle Challenge, and now my {STR_VAR_1} is super legit! Buckle down, unlock that {STR_VAR_2} mindset, and you can achieve the same. Keep pushing!"), // PSF TODO replace & with #
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
        .content = COMPOUND_STRING("Working three jobs just to save up for {STR_VAR_2} and {STR_VAR_3} - that’s the grind! My {STR_VAR_1} is going to be maxed out, and nothing will stop me. Haters don’t + me."), // PSF TODO replace + with @
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
};
