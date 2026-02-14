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
        // PSF TODO Replace Glameow and Glavez Hill with string variables
        .userId = BUZZR_USER_KAI,
        .content = COMPOUND_STRING(
            "My cousin told me there's a mass rabies\n"
            "outbreak in Glavez Hill! Feral Glameow are\n"
            "attacking pets and people, accelerating \n"
            "spread of the disease. He heard the ASPCA's\n"
            "gonna hook up people who can subdue or\n"
            "capture Glameow to reduce their impact on\n"
            "the local community. I'll be doing my part!"
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Rabies,
        .quest = QUEST_RABIESOUTBREAK,
        .dislikeCount = 8,
        .likeCount = 46,
    },
    [TWEET_STORY_EPILOGUE] =
    {
        .userId = BUZZR_USER_KAI,
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
        .userId = BUZZR_USER_HARRIBAT,
        .content = COMPOUND_STRING(
            "Calling all Trainers! We're a new ice cream\n"
            "shop in Chasilla, and we've got the perfect\n"
            "smoothie to clean out your Pokémon and\n"
            "make them easier to train. Bring 3 Pecha\n"
            "Berry, 2 Nanab Berry, and a Rabuta Berry,\n"
            "and we'll make the first one for free!"
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Ice,
        .quest = QUEST_SMOOTHIECRAFTING,
        .dislikeCount = 21,
        .likeCount = 14,
    },
    [TWEET_QUEST_NPC_DEOXYS] =
    {
        .userId = BUZZR_USER_WAYNE,
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
        .tilesptr = sSampleTiles,
        .tilemapptr = sSampleTilemap,
        .palptr = sSamplePalette,
    },
    [TWEET_QUEST_NPC_TUNNELS] =
    {
        .userId = BUZZR_USER_LINN,
        .content = COMPOUND_STRING(
            "There's a rumor that there is a lost\n"
            "treasure hidden under HodouCity. Is\n"
            "anybody who knows the secrets\n"
            "still alive?"
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Tunnels,
        .quest = QUEST_HODOUTUNNELS,
        .dislikeCount = 29,
        .likeCount = 13,
    },
    [TWEET_QUEST_NPC_FRESHWATER] =
    {
        .userId = BUZZR_USER_VAUGHN,
        .content = COMPOUND_STRING(
            "Check out my favorite spot in HalerbaWilds!\n"
            "There's a clearing with no tall grass,\n"
            "beautiful trees, and a fresh water spring!\n"
            "The water tastes better than anywhere else\n"
            "in the region, and its got magicial\n"
            "properties: If you bring a octopus Pokémon,\n"
            "it'll turn shiny!"
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_Quest_NPC_Freshwater,
        .quest = QUEST_FRESHWATEREVOLUTION,
        .dislikeCount = 7,
        .likeCount = 25,
    },
    [TWEET_SAMPLE_7] =
    {
        .userId = BUZZR_USER_HARRIBAT,
        .content = COMPOUND_STRING("???"),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_21,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 14,
    },
    [TWEET_QUEST_NPC_STONE] =
    {
        .userId = BUZZR_USER_LAUREEN,
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
        .userId = BUZZR_USER_KAUNA,
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
            "BREAKING NEWS: SharpriseStadium construction\n"
            "crew has declared a strike. Their demands\n"
            "are unclear at this time. This puts the\n"
            "upcoming dates of the SharpriseCapital League\n"
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
            "BREAKING NEWS: SharpriseStadium construction\n"
            "crew has declared a strike. Anonymous\n"
            "sources claim that TheTide is\n"
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
    [22] =
    {
        .userId = BUZZR_USER_MICHELL,
        .content = COMPOUND_STRING(
            "This Pokémon has a terrifically strong\n"
            "constricting power. It can even flatten\n"
            "steel oil drums. Once it wraps its body\n"
            "around its foe, escaping is impossible."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_22,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 47,
    },
    [23] =
    {
        .userId = BUZZR_USER_DONALD,
        .content = COMPOUND_STRING(
            "It stores electricity in the electric sacs\n"
            "on its cheeks. When it releases pent-up\n"
            "energy in a burst, the electric power is\n"
            "equal to a lightning bolt."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_23,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 14,
    },
    [24] =
    {
        .userId = BUZZR_USER_CANDYCE,
        .content = COMPOUND_STRING(
            "If it stores too much electricity, its\n"
            "behavior turns aggressive. To avoid this,\n"
            "it occasionally discharges excess energy\n"
            "and calms itself down."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_24,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 18,
    },
    [25] =
    {
        .userId = BUZZR_USER_HILDE,
        .content = COMPOUND_STRING(
            "When it curls up in a ball, it can make any\n"
            "attack bounce off harmlessly. Its hide has\n"
            "turned tough and solid as a result of\n"
            "living in the desert."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_25,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 8,
    },
    [26] =
    {
        .userId = BUZZR_USER_CANDIS,
        .content = COMPOUND_STRING(
            "It curls up in a ball to protect itself from\n"
            "enemy attacks. It also curls up to prevent\n"
            "heatstroke during the daytime when\n"
            "temperatures rise sharply."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_26,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 4,
    },
    [27] =
    {
        .userId = BUZZR_USER_HARRIBAT,
        .content = COMPOUND_STRING(
            "Its highly toxic barbs are thought to have\n"
            "developed as protection for this small-\n"
            "bodied Pokémon. When enraged, it releases\n"
            "a horrible toxin from its horn."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_27,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 31,
    },
    [28] =
    {
        .userId = BUZZR_USER_COLLENE,
        .content = COMPOUND_STRING(
            "When it is with its friends or\n"
            "family, its barbs are tucked away to\n"
            "prevent injury. It appears to become\n"
            "nervous if separated from the others."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_28,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 25,
    },
    [29] =
    {
        .userId = BUZZR_USER_VIKKI,
        .content = COMPOUND_STRING(
            "It is adept at sending foes flying with\n"
            "harsh tackles using its tough, scaly body.\n"
            "This Pokémon is at its strongest when\n"
            "it is defending its young."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_29,
        .quest = 0,
        .dislikeCount = 1,
        .likeCount = 48,
    },
    [30] =
    {
        .userId = BUZZR_USER_ALAN,
        .content = COMPOUND_STRING(
            "The male Nidoran has developed muscles\n"
            "that freely move its ears in any direction.\n"
            "Even the slightest sound does not escape\n"
            "this Pokémon's notice."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_30,
        .quest = 0,
        .dislikeCount = 2,
        .likeCount = 45,
    },
    [31] =
    {
        .userId = BUZZR_USER_ALDA,
        .content = COMPOUND_STRING(
            "Its horn is harder than a diamond.\n"
            "If it senses a hostile presence, all the\n"
            "barbs on its back bristle up at once, and it\n"
            "challenges the foe with all its might."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_31,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 16,
    },
    [32] =
    {
        .userId = BUZZR_USER_LILLI,
        .content = COMPOUND_STRING(
            "A Nidoking's thick tail packs enormously\n"
            "destructive power capable of toppling\n"
            "a metal transmission tower. Once it goes\n"
            "on a rampage, there is no stopping it."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_32,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 13,
    },
    [TWEET_STORY_FALSETIMELINE] =
    {
        .userId = BUZZR_USER_SHARPRISECAPTIAL,
        .content = COMPOUND_STRING(
                "The Tide's presence in Residomakes for a\n"
                "worse region for all. Starting today, we'll be\n"
                "working with the Police Dept. and\n"
                "Champion {PLAYER} to put an end to\n"
                "their terrorist activites."
                ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_33,
        .quest = 0,
        .dislikeCount = 72,
        .likeCount = 4,
    },
    [36] =
    {
        .userId = BUZZR_USER_IVORY,
        .content = COMPOUND_STRING(
            "It has long been said that each of the\n"
            "nine tails embody an enchanted power.\n"
            "A long-lived Ninetales will have fur that\n"
            "shines like gold."
            ),
        .tilesptr = sSampleTiles,
        .tilemapptr = sSampleTilemap,
        .palptr = sSamplePalette,
        .isPrivate = FALSE,
        .criteria = TweetCriteria_36,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 8,
    },
    [37] =
    {
        .userId = BUZZR_USER_TARA,
        .content = COMPOUND_STRING(
            "Nothing can avoid falling asleep hearing a\n"
            "Jigglypuff's song. The sound waves of its\n"
            "singing voice match the brain waves of\n"
            "someone in a deep sleep."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_37,
        .quest = 0,
        .dislikeCount = 30,
        .likeCount = 26,
    },
    [38] =
    {
        .userId = BUZZR_USER_SHERRY,
        .content = COMPOUND_STRING(
            "Its fur is the ultimate in luxuriousness.\n"
            "Sleeping alongside a Wigglytuff is simply\n"
            "divine. Its body expands seemingly without\n"
            "end when it inhales."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_38,
        .quest = 0,
        .dislikeCount = 27,
        .likeCount = 28,
    },
    [39] =
    {
        .userId = BUZZR_USER_MAPLE,
        .content = COMPOUND_STRING(
            "While living in pitch-black caverns, their\n"
            "eyes gradually grew shut and deprived\n"
            "them of vision. They use ultrasonic waves\n"
            "to detect obstacles."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_39,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 22,
    },
    [40] =
    {
        .userId = BUZZR_USER_PLAYER,
        .content = COMPOUND_STRING(
            "Its fangs easily puncture even thick\n"
            "animal hide. It loves to feast on the blood\n"
            "of people and Pokémon. It flits about in\n"
            "darkness and strikes from behind."
            ),
        .isPrivate = TRUE,
        .criteria = TweetCriteria_40,
        .quest = 0,
        .dislikeCount = 15,
        .likeCount = 2,
    },
    [41] =
    {
        .userId = BUZZR_USER_DACIA,
        .content = COMPOUND_STRING(
            "This Pokémon grows by absorbing moonlight.\n"
            "During the daytime, it buries itself in the\n"
            "ground, leaving only its leaves exposed to\n"
            "avoid detection by its enemies."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_41,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 40,
    },
    [42] =
    {
        .userId = BUZZR_USER_VAN,
        .content = COMPOUND_STRING(
            "A horribly noxious honey drools from its\n"
            "mouth. One whiff of the honey can result\n"
            "in memory loss. Some fans are said to\n"
            "enjoy this overwhelming stink, however."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_42,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 20,
    },
    [43] =
    {
        .userId = BUZZR_USER_FRANCENE,
        .content = COMPOUND_STRING(
            "In seasons when it produces more pollen,\n"
            "the air around a Vileplume turns yellow\n"
            "with the powder as it walks. The pollen is\n"
            "highly toxic and causes paralysis."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_43,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 8,
    },
    [44] =
    {
        .userId = BUZZR_USER_LEISHA,
        .content = COMPOUND_STRING(
            "A Paras has parasitic tochukaso\n"
            "mushrooms growing on its back. They grow\n"
            "by drawing nutrients from the host. They\n"
            "are valued as a medicine for long life."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_44,
        .quest = 0,
        .dislikeCount = 11,
        .likeCount = 23,
    },
    [45] =
    {
        .userId = BUZZR_USER_SAVANNAH,
        .content = COMPOUND_STRING(
            "Parasect are known to infest the roots of\n"
            "large trees en masse and drain nutrients.\n"
            "When an infested tree dies, they move\n"
            "onto another tree all at once."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_45,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 46,
    },
    [46] =
    {
        .userId = BUZZR_USER_ANGLE,
        .content = COMPOUND_STRING(
            "Its coat of thin, stiff hair that covers\n"
            "its entire body is said to have evolved\n"
            "for protection. Its large eyes never fail\n"
            "to spot even miniscule prey."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_46,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 23,
    },
    [47] =
    {
        .userId = BUZZR_USER_EVELINA,
        .content = COMPOUND_STRING(
            "Venomoth are nocturnal--they are only\n"
            "active at night. Their favorite prey are\n"
            "insects that gather around streetlights,\n"
            "attracted by the light in the darkness."
            ),
        .tilesptr = sRockTunnelMapPreviewTiles,
        .tilemapptr = sRockTunnelMapPreviewTilemap,
        .palptr = sRockTunnelMapPreviewPalette,
        .isPrivate = FALSE,
        .criteria = TweetCriteria_47,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 5,
    },
    [48] =
    {
        .userId = BUZZR_USER_JERRY,
        .content = COMPOUND_STRING(
            "Diglett are raised in most farms.\n"
            "The reason is simple--wherever they\n"
            "burrow, the soil is left perfectly tilled\n"
            "for growing delicious crops."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_48,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 49,
    },
    [49] =
    {
        .userId = BUZZR_USER_VAUGHN,
        .content = COMPOUND_STRING(
            "Because the triplets originally split from\n"
            "one body, they think exactly alike.\n"
            "They work cooperatively to burrow\n"
            "endlessly through the ground."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_49,
        .quest = 0,
        .dislikeCount = 31,
        .likeCount = 45,
    },
    [50] =
    {
        .userId = BUZZR_USER_EDGARDO,
        .content = COMPOUND_STRING(
            "Meowth withdraw their sharp claws into\n"
            "their paws to silently sneak about.\n"
            "For some reason, this Pokémon loves\n"
            "shiny coins that glitter with light."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_50,
        .quest = 0,
        .dislikeCount = 30,
        .likeCount = 37,
    },
    [51] =
    {
        .userId = BUZZR_USER_JERALDINE,
        .content = COMPOUND_STRING(
            "A Persian's six bold whiskers sense air\n"
            "movements to determine what is in its\n"
            "vicinity. It becomes docile if grabbed\n"
            "by the whiskers."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_51,
        .quest = 0,
        .dislikeCount = 15,
        .likeCount = 20,
    },
    [52] =
    {
        .userId = BUZZR_USER_VIRGIL,
        .content = COMPOUND_STRING(
            "When its headache intensifies, it starts\n"
            "using strange powers. However, it has no\n"
            "recollection of its powers, so it always\n"
            "looks befuddled and bewildered."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_52,
        .quest = 0,
        .dislikeCount = 45,
        .likeCount = 45,
    },
    [53] =
    {
        .userId = BUZZR_USER_ANGLEA,
        .content = COMPOUND_STRING(
            "A Golduck is an adept swimmer.\n"
            "It sometimes joins competitive swimmers\n"
            "in training. It uses psychic powers when\n"
            "its forehead shimmers with light."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_53,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 25,
    },
    [54] =
    {
        .userId = BUZZR_USER_AGUSTIN,
        .content = COMPOUND_STRING(
            "When it starts shaking and its nasal\n"
            "breathing turns rough, it's a sure sign\n"
            "of anger. However, since this happens\n"
            "instantly, there is no time to flee."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_54,
        .quest = 0,
        .dislikeCount = 32,
        .likeCount = 24,
    },
    [55] =
    {
        .userId = BUZZR_USER_LAKIA,
        .content = COMPOUND_STRING(
            "When it becomes furious, its blood\n"
            "circulation becomes more robust, and\n"
            "its muscles are made stronger. But it\n"
            "also becomes much less intelligent."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_55,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 20,
    },
    [56] =
    {
        .userId = BUZZR_USER_FRANCESCO,
        .content = COMPOUND_STRING(
            "Its superb sense of smell ensures that\n"
            "this Pokémon won't forget any scent,\n"
            "no matter what. It uses its sense of smell\n"
            "to detect the emotions of others."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_56,
        .quest = 0,
        .dislikeCount = 22,
        .likeCount = 35,
    },
    [57] =
    {
        .userId = BUZZR_USER_VENITA,
        .content = COMPOUND_STRING(
            "This fleet-footed Pokémon is said to run\n"
            "over 6,200 miles in a single day and night.\n"
            "The fire that blazes wildly within its body\n"
            "is its source of power."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_57,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 44,
    },
    [58] =
    {
        .userId = BUZZR_USER_BELINDA,
        .content = COMPOUND_STRING(
            "It is possible to see this Pokémon's spiral\n"
            "innards right through its thin skin.\n"
            "However, the skin is also very flexible.\n"
            "Even sharp fangs bounce right off it."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_58,
        .quest = 0,
        .dislikeCount = 11,
        .likeCount = 2,
    },
    [59] =
    {
        .userId = BUZZR_USER_JEROMY,
        .content = COMPOUND_STRING(
            "Its body surface is always wet and slick\n"
            "with an oily fluid. Because of this greasy\n"
            "covering, it can easily slip and slide out\n"
            "of the clutches of any enemy in battle."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_59,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 27,
    },
    [60] =
    {
        .userId = BUZZR_USER_YANIRA,
        .content = COMPOUND_STRING(
            "Its highly developed muscles never grow\n"
            "fatigued, however much it exercises.\n"
            "This Pokémon can swim back and forth\n"
            "across the Pacific Ocean without effort."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_60,
        .quest = 0,
        .dislikeCount = 29,
        .likeCount = 16,
    },
    [61] =
    {
        .userId = BUZZR_USER_JERRY,
        .content = COMPOUND_STRING(
            "A Pokémon that sleeps 18 hours a day.\n"
            "Observation revealed that it uses\n"
            "Teleport to change its location once\n"
            "every hour."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_61,
        .quest = 0,
        .dislikeCount = 30,
        .likeCount = 33,
    },
    [62] =
    {
        .userId = BUZZR_USER_LOUETTA,
        .content = COMPOUND_STRING(
            "It is rumored that a boy with psychic\n"
            "abilities suddenly transformed into\n"
            "Kadabra while he was assisting research\n"
            "into extrasensory powers."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_62,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 46,
    },
    [63] =
    {
        .userId = BUZZR_USER_PEARLY,
        .content = COMPOUND_STRING(
            "While it has strong psychic abilities and\n"
            "high intelligence, an Alakazam's muscles\n"
            "are very weak. It uses psychic power to\n"
            "move its body."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_63,
        .quest = 0,
        .dislikeCount = 39,
        .likeCount = 47,
    },
    [64] =
    {
        .userId = BUZZR_USER_TYISHA,
        .content = COMPOUND_STRING(
            "It continually undertakes strenuous\n"
            "training to master all forms of martial\n"
            "arts. Its strength lets it easily hoist\n"
            "a sumo wrestler onto its shoulders."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_64,
        .quest = 0,
        .dislikeCount = 25,
        .likeCount = 32,
    },
    [65] =
    {
        .userId = BUZZR_USER_JUNKO,
        .content = COMPOUND_STRING(
            "A belt is worn by a Machoke to keep its\n"
            "overwhelming power under control.\n"
            "Because it is so dangerous, no one has\n"
            "ever removed the belt."
            ),
        .tilesptr = sRocketHideoutMapPreviewTiles,
        .tilemapptr = sRocketHideoutMapPreviewTilemap,
        .palptr = sRocketHideoutMapPreviewPalette,
        .isPrivate = FALSE,
        .criteria = TweetCriteria_65,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 15,
    },
    [66] =
    {
        .userId = BUZZR_USER_SHANE,
        .content = COMPOUND_STRING(
            "It is impossible to defend against punches\n"
            "and chops doled out by its four arms.\n"
            "Its fighting spirit flares up when it faces\n"
            "a tough opponent."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_66,
        .quest = 0,
        .dislikeCount = 39,
        .likeCount = 13,
    },
    [67] =
    {
        .userId = BUZZR_USER_DEIDRA,
        .content = COMPOUND_STRING(
            "A Bellsprout's thin and flexible body lets\n"
            "it bend and sway to avoid any attack,\n"
            "however strong it may be. From its mouth,\n"
            "it leaks a fluid that melts even iron."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_67,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 11,
    },
    [68] =
    {
        .userId = BUZZR_USER_OTTO,
        .content = COMPOUND_STRING(
            "At night, a Weepinbell hangs on to a tree\n"
            "branch with its hooked rear and sleeps.\n"
            "If it moves around in its sleep, it may\n"
            "wake up to find itself on the ground."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_68,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 29,
    },
    [69] =
    {
        .userId = BUZZR_USER_TASHA,
        .content = COMPOUND_STRING(
            "The long vine extending from its head is\n"
            "waved about as if it were a living thing to\n"
            "attract prey. When an unsuspecting victim\n"
            "approaches, it is swallowed whole."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_69,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 25,
    },
    [70] =
    {
        .userId = BUZZR_USER_TOD,
        .content = COMPOUND_STRING(
            "Its body is almost entirely composed of\n"
            "water. It ensnares its foe with its two\n"
            "long tentacles, then stabs with the poison\n"
            "stingers at their tips."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_70,
        .quest = 0,
        .dislikeCount = 23,
        .likeCount = 45,
    },
    [71] =
    {
        .userId = BUZZR_USER_EDWARDO,
        .content = COMPOUND_STRING(
            "It lives in complex rock formations on\n"
            "the ocean floor and traps prey using its\n"
            "80 tentacles. Its red orbs glow when it\n"
            "grows excited or agitated."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_71,
        .quest = 0,
        .dislikeCount = 28,
        .likeCount = 23,
    },
    [72] =
    {
        .userId = BUZZR_USER_HILDEGARDE,
        .content = COMPOUND_STRING(
            "It climbs mountain paths using only the\n"
            "power of its arms. Because they look just\n"
            "like boulders lining paths, hikers may step\n"
            "on them without noticing."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_72,
        .quest = 0,
        .dislikeCount = 43,
        .likeCount = 3,
    },
    [73] =
    {
        .userId = BUZZR_USER_CEDRICK,
        .content = COMPOUND_STRING(
            "They descend from mountains by tumbling\n"
            "down steep slopes. They are so brutal,\n"
            "they smash aside obstructing trees and\n"
            "massive boulders with thunderous tackles."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_73,
        .quest = 0,
        .dislikeCount = 40,
        .likeCount = 21,
    },
    [74] =
    {
        .userId = BUZZR_USER_SILVIA,
        .content = COMPOUND_STRING(
            "It is said to live in volcanic craters\n"
            "on mountain peaks. Once a year, it sheds\n"
            "its hide and grows larger. The shed hide\n"
            "crumbles and returns to the soil."
            ),
        .tilesptr = sPowerPlantMapPreviewTiles,
        .tilemapptr = sPowerPlantMapPreviewTilemap,
        .palptr = sPowerPlantMapPreviewPalette,
        .isPrivate = TRUE,
        .criteria = TweetCriteria_74,
        .quest = 0,
        .dislikeCount = 11,
        .likeCount = 25,
    },
    [75] =
    {
        .userId = BUZZR_USER_GWYNETH,
        .content = COMPOUND_STRING(
            "A Ponyta is very weak at birth. It can\n"
            "barely stand up. Its legs become stronger\n"
            "as it stumbles and falls while trying to\n"
            "keep up with its parent."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_75,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 46,
    },
    [76] =
    {
        .userId = BUZZR_USER_ORVAL,
        .content = COMPOUND_STRING(
            "It usually canters casually in the fields\n"
            "and plains. But once a Rapidash turns\n"
            "serious, its fiery manes flare and blaze\n"
            "as it gallops its way up to 150 mph."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_76,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 11,
    },
    [77] =
    {
        .userId = BUZZR_USER_AUSTIN,
        .content = COMPOUND_STRING(
            "It catches prey by dipping its tail in\n"
            "water at the side of a river. But it often\n"
            "forgets what it is doing and spends entire\n"
            "days just loafing at water's edge."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_77,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 24,
    },
    [78] =
    {
        .userId = BUZZR_USER_BORIS,
        .content = COMPOUND_STRING(
            "Its tail has a Shellder firmly attached\n"
            "with a bite. As a result, the tail can't be\n"
            "used for fishing anymore. This forces it\n"
            "to reluctantly swim and catch prey."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_78,
        .quest = 0,
        .dislikeCount = 45,
        .likeCount = 11,
    },
    [79] =
    {
        .userId = BUZZR_USER_REGINE,
        .content = COMPOUND_STRING(
            "The units at its sides are extremely\n"
            "powerful magnets. They generate enough\n"
            "magnetism to draw in iron objects from\n"
            "over 300 feet away."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_79,
        .quest = 0,
        .dislikeCount = 37,
        .likeCount = 3,
    },
    [80] =
    {
        .userId = BUZZR_USER_NELLE,
        .content = COMPOUND_STRING(
            "It is actually three Magnemite linked\n"
            "by magnetism. It generates powerful radio\n"
            "waves that raise temperatures by 3.6\n"
            "degrees F within a 3,300-foot radius."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_80,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 35,
    },
    [81] =
    {
        .userId = BUZZR_USER_ROZELLA,
        .content = COMPOUND_STRING(
            "It is always seen with a stick from a plant.\n"
            "Apparently, there are good sticks and bad\n"
            "sticks. This Pokémon occasionally fights\n"
            "with others over choice sticks."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_81,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 40,
    },
    [82] =
    {
        .userId = BUZZR_USER_SETH,
        .content = COMPOUND_STRING(
            "Even while eating or sleeping, one of the\n"
            "heads remains always vigilant for any sign\n"
            "of danger. When threatened, it flees at\n"
            "over 60 miles per hour."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_82,
        .quest = 0,
        .dislikeCount = 22,
        .likeCount = 14,
    },
    [83] =
    {
        .userId = BUZZR_USER_KALA,
        .content = COMPOUND_STRING(
            "A peculiar Pokémon species with three\n"
            "heads. It vigorously races across grassy\n"
            "plains even in arid seasons with little\n"
            "rainfall."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_83,
        .quest = 0,
        .dislikeCount = 14,
        .likeCount = 4,
    },
    [84] =
    {
        .userId = BUZZR_USER_GARRY,
        .content = COMPOUND_STRING(
            "Seel hunt for prey in frigid, ice-covered\n"
            "seas. When it needs to breathe, it punches\n"
            "a hole through the ice with the sharply\n"
            "protruding section of its head."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_84,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 33,
    },
    [85] =
    {
        .userId = BUZZR_USER_CHRISTEL,
        .content = COMPOUND_STRING(
            "It loves to snooze on bitterly cold ice.\n"
            "The sight of this Pokémon sleeping on\n"
            "a glacier was mistakenly thought to be\n"
            "a mermaid by a mariner long ago."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_85,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 12,
    },
    [86] =
    {
        .userId = BUZZR_USER_TOMMY,
        .content = COMPOUND_STRING(
            "Born from polluted sludge in the sea,\n"
            "Grimer's favorite food is anything filthy.\n"
            "They feed on wastewater pumped out from\n"
            "factories."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_86,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 8,
    },
    [87] =
    {
        .userId = BUZZR_USER_AILENE,
        .content = COMPOUND_STRING(
            "It prefers warm and humid habitats.\n"
            "In the summertime, the toxic substances\n"
            "in its body intensify, making Muk reek like\n"
            "putrid kitchen garbage."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_87,
        .quest = 0,
        .dislikeCount = 37,
        .likeCount = 6,
    },
    [88] =
    {
        .userId = BUZZR_USER_TIARA,
        .content = COMPOUND_STRING(
            "At night, it burrows a hole in the seafloor\n"
            "with its broad tongue to make a place to\n"
            "sleep. While asleep, it closes its shell,\n"
            "but leaves its tongue hanging out."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_88,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 37,
    },
    [89] =
    {
        .userId = BUZZR_USER_CHAE,
        .content = COMPOUND_STRING(
            "It swims in the sea by swallowing water,\n"
            "then jetting it out toward the rear.\n"
            "The Cloyster shoots spikes from its\n"
            "shell using the same system."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_89,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 16,
    },
    [90] =
    {
        .userId = BUZZR_USER_LITA,
        .content = COMPOUND_STRING(
            "When exposed to a strong wind, a Gastly's\n"
            "gaseous body quickly dwindles away.\n"
            "They cluster under the eaves of houses\n"
            "to escape the ravages of wind."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_90,
        .quest = 0,
        .dislikeCount = 1,
        .likeCount = 31,
    },
    [91] =
    {
        .userId = BUZZR_USER_LESLEE,
        .content = COMPOUND_STRING(
            "If a Haunter beckons you while it is\n"
            "floating in darkness, don't approach it.\n"
            "This Pokémon will try to lick you with its\n"
            "tongue and steal your life away."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_91,
        .quest = 0,
        .dislikeCount = 20,
        .likeCount = 35,
    },
    [92] =
    {
        .userId = BUZZR_USER_KERMIT,
        .content = COMPOUND_STRING(
            "Deep in the night, your shadow cast by\n"
            "a streetlight may suddenly overtake you.\n"
            "It is actually a Gengar running past\n"
            "you, pretending to be your shadow."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_92,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 32,
    },
    [93] =
    {
        .userId = BUZZR_USER_KRISTAN,
        .content = COMPOUND_STRING(
            "There is a magnet in its brain that\n"
            "prevents an Onix from losing direction\n"
            "while tunneling. As it grows older, its body\n"
            "becomes steadily rounder and smoother."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_93,
        .quest = 0,
        .dislikeCount = 5,
        .likeCount = 19,
    },
    [94] =
    {
        .userId = BUZZR_USER_CLASSIE,
        .content = COMPOUND_STRING(
            "If your nose becomes itchy while you are\n"
            "sleeping, it's a sure sign that a Drowzee is\n"
            "standing above your pillow and trying to\n"
            "eat your dream through your nostrils."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_94,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 10,
    },
    [95] =
    {
        .userId = BUZZR_USER_JAROD,
        .content = COMPOUND_STRING(
            "The arcing movement and glitter of the\n"
            "pendulum in a Hypno's hand lull the foe\n"
            "into deep hypnosis. While searching for\n"
            "prey, it polishes the pendulum."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_95,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 8,
    },
    [96] =
    {
        .userId = BUZZR_USER_MARILYNN,
        .content = COMPOUND_STRING(
            "Krabby live in holes dug into beaches.\n"
            "On sandy shores with little in the way\n"
            "of food, they can be seen squabbling with\n"
            "each other over territory."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_96,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 11,
    },
    [97] =
    {
        .userId = BUZZR_USER_LAURINDA,
        .content = COMPOUND_STRING(
            "It waves its huge, oversized claw in the\n"
            "air to communicate with others.\n"
            "But since the claw is so heavy, this\n"
            "Pokémon quickly tires."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_97,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 21,
    },
    [98] =
    {
        .userId = BUZZR_USER_LISA,
        .content = COMPOUND_STRING(
            "It bears an uncanny and unexplained\n"
            "resemblance to a Poké Ball. Because it\n"
            "explodes at the slightest shock, even\n"
            "veteran Trainers treat it with caution."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_98,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 28,
    },
    [99] =
    {
        .userId = BUZZR_USER_GARY,
        .content = COMPOUND_STRING(
            "They appear in great numbers at electric\n"
            "power plants. Because they feed on\n"
            "electricity, they cause massive and\n"
            "chaotic blackouts in nearby cities."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_99,
        .quest = 0,
        .dislikeCount = 30,
        .likeCount = 13,
    },
    [100] =
    {
        .userId = BUZZR_USER_MONTE,
        .content = COMPOUND_STRING(
            "It consists of six eggs that care for each\n"
            "other. The eggs attract each other and\n"
            "spin around. When cracks increasingly\n"
            "appear, it is close to evolution."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_100,
        .quest = 0,
        .dislikeCount = 24,
        .likeCount = 44,
    },
    [101] =
    {
        .userId = BUZZR_USER_VIOLET,
        .content = COMPOUND_STRING(
            "Originally from the tropics, Exeggutor's\n"
            "heads grow larger from exposure to strong\n"
            "sunlight. It is said that when the heads\n"
            "fall, they group to form an Exeggcute."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_101,
        .quest = 0,
        .dislikeCount = 32,
        .likeCount = 6,
    },
    [102] =
    {
        .userId = BUZZR_USER_WENONA,
        .content = COMPOUND_STRING(
            "It pines for the mother it will never see\n"
            "again. Seeing a likeness of its mother in\n"
            "the full moon, it cries. The stains on the\n"
            "skull it wears are from its tears."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_102,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 12,
    },
    [103] =
    {
        .userId = BUZZR_USER_OTTO,
        .content = COMPOUND_STRING(
            "A Marowak is the evolved form of a Cubone\n"
            "that has grown tough by overcoming the\n"
            "grief of losing its mother. Its tempered\n"
            "and hardened spirit is not easily broken."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_103,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 9,
    },
    [104] =
    {
        .userId = BUZZR_USER_LEIA,
        .content = COMPOUND_STRING(
            "Its legs freely stretch and contract.\n"
            "Using these springlike limbs, it bowls over\n"
            "foes with devastating kicks. After battle,\n"
            "it rubs down its tired legs."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_104,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 44,
    },
    [105] =
    {
        .userId = BUZZR_USER_KATLYN,
        .content = COMPOUND_STRING(
            "A Hitmonchan is said to possess the\n"
            "spirit of a boxer who aimed to become the\n"
            "world champion. Having an indomitable\n"
            "spirit means that it will never give up."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_105,
        .quest = 0,
        .dislikeCount = 34,
        .likeCount = 6,
    },
    [106] =
    {
        .userId = BUZZR_USER_MYRON,
        .content = COMPOUND_STRING(
            "Whenever it sees something unfamiliar,\n"
            "it always licks the object because it\n"
            "memorizes things by texture and taste.\n"
            "It is somewhat put off by sour things."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_106,
        .quest = 0,
        .dislikeCount = 24,
        .likeCount = 37,
    },
    [107] =
    {
        .userId = BUZZR_USER_LEDA,
        .content = COMPOUND_STRING(
            "Getting up close to a Koffing will give\n"
            "you a chance to observe, through its thin\n"
            "skin, the toxic gases swirling inside. It\n"
            "blows up at the slightest stimulation."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_107,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 6,
    },
    [108] =
    {
        .userId = BUZZR_USER_LORIANN,
        .content = COMPOUND_STRING(
            "By diluting its toxic gases with a special\n"
            "process, the highest grade of perfume can\n"
            "be extracted. To Weezing, gases emanating\n"
            "from garbage are the ultimate feast."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_108,
        .quest = 0,
        .dislikeCount = 22,
        .likeCount = 2,
    },
    [109] =
    {
        .userId = BUZZR_USER_XIAO,
        .content = COMPOUND_STRING(
            "Once it starts running, it doesn't stop.\n"
            "Its tiny brain makes it so stupid that it\n"
            "can't remember why it started running in\n"
            "the first place."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_109,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 34,
    },
    [110] =
    {
        .userId = BUZZR_USER_JEANNA,
        .content = COMPOUND_STRING(
            "Its horn, which rotates like a drill,\n"
            "destroys tall buildings with one strike.\n"
            "It stands on its hind legs, and its brain\n"
            "is well developed."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_110,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 40,
    },
    [111] =
    {
        .userId = BUZZR_USER_KARL,
        .content = COMPOUND_STRING(
            "Chansey lay nutritionally excellent eggs\n"
            "every day. The eggs are so delicious, they\n"
            "are eagerly devoured by even those people\n"
            "who have lost their appetite."
            ),
        .tilesptr = sPokemonMansionMapPreviewTiles,
        .tilemapptr = sPokemonMansionMapPreviewTilemap,
        .palptr = sPokemonMansionMapPreviewPalette,
        .isPrivate = FALSE,
        .criteria = TweetCriteria_111,
        .quest = 0,
        .dislikeCount = 23,
        .likeCount = 27,
    },
    [112] =
    {
        .userId = BUZZR_USER_NICOL,
        .content = COMPOUND_STRING(
            "Its vines snap off easily and painlessly\n"
            "if they are grabbed, allowing it to make a\n"
            "quick getaway. The lost vines are replaced\n"
            "by new growth the very next day."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_112,
        .quest = 0,
        .dislikeCount = 3,
        .likeCount = 48,
    },
    [113] =
    {
        .userId = BUZZR_USER_LOISE,
        .content = COMPOUND_STRING(
            "If you come across a young Kangaskhan\n"
            "playing by itself, never try to catch it.\n"
            "The baby's parent is sure to be in the area,\n"
            "and it will become violently enraged."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_113,
        .quest = 0,
        .dislikeCount = 43,
        .likeCount = 15,
    },
    [114] =
    {
        .userId = BUZZR_USER_FREDDY,
        .content = COMPOUND_STRING(
            "By cleverly flicking the fins on its back\n"
            "side to side, it moves in any direction\n"
            "while facing forward. It spits ink to\n"
            "escape if it senses danger."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_114,
        .quest = 0,
        .dislikeCount = 27,
        .likeCount = 33,
    },
    [115] =
    {
        .userId = BUZZR_USER_XIAO,
        .content = COMPOUND_STRING(
            "The poisonous barbs all over its body are\n"
            "highly valued as ingredients for making\n"
            "traditional herbal medicine. It shows no\n"
            "mercy to anything approaching its nest."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_115,
        .quest = 0,
        .dislikeCount = 45,
        .likeCount = 37,
    },
    [116] =
    {
        .userId = BUZZR_USER_LOWELL,
        .content = COMPOUND_STRING(
            "In the springtime, schools of Goldeen\n"
            "can be seen swimming up falls and rivers.\n"
            "It metes out staggering damage with its\n"
            "single horn."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_116,
        .quest = 0,
        .dislikeCount = 20,
        .likeCount = 16,
    },
    [117] =
    {
        .userId = BUZZR_USER_FRANCENE,
        .content = COMPOUND_STRING(
            "It punches holes in boulders on stream-\n"
            "beds. This is a clever innovation that\n"
            "prevents its eggs from being attacked or\n"
            "washed away by the current."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_117,
        .quest = 0,
        .dislikeCount = 5,
        .likeCount = 34,
    },
    [118] =
    {
        .userId = BUZZR_USER_FLORENTINO,
        .content = COMPOUND_STRING(
            "It gathers with others in the night and\n"
            "makes its red core glow on and off with\n"
            "the twinkling stars. It can regenerate\n"
            "limbs if they are severed from its body."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_118,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 18,
    },
    [119] =
    {
        .userId = BUZZR_USER_MAIDA,
        .content = COMPOUND_STRING(
            "People in ancient times imagined that\n"
            "Starmie were transformed from the\n"
            "reflections of stars that twinkled on\n"
            "gentle waves at night."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_119,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 27,
    },
    [120] =
    {
        .userId = BUZZR_USER_MYRTICE,
        .content = COMPOUND_STRING(
            "A Mr. Mime is a master of pantomime. It can\n"
            "convince others that something unseeable\n"
            "actually exists. Once believed, the\n"
            "imaginary object does become real."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_120,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 6,
    },
    [121] =
    {
        .userId = BUZZR_USER_LAURINDA,
        .content = COMPOUND_STRING(
            "Its blindingly fast speed adds to the\n"
            "sharpness of its twin forearm scythes.\n"
            "The scythes can slice through thick logs\n"
            "in one wicked stroke."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_121,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 18,
    },
    [122] =
    {
        .userId = BUZZR_USER_SHENA,
        .content = COMPOUND_STRING(
            "A Jynx sashays rhythmically as if it were\n"
            "dancing. Its motions are so bouncingly\n"
            "alluring, people seeing it are compelled to\n"
            "shake their hips without noticing."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_122,
        .quest = 0,
        .dislikeCount = 31,
        .likeCount = 2,
    },
    [123] =
    {
        .userId = BUZZR_USER_SHENA,
        .content = COMPOUND_STRING(
            "When a storm approaches, it competes with\n"
            "others to scale heights that are likely to\n"
            "be stricken by lightning. Some towns use\n"
            "Electabuzz in place of lightning rods."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_123,
        .quest = 0,
        .dislikeCount = 19,
        .likeCount = 15,
    },
    [124] =
    {
        .userId = BUZZR_USER_SANORA,
        .content = COMPOUND_STRING(
            "In battle, it blows out intense flames from\n"
            "all over its body to intimidate its foe.\n"
            "These fiery bursts create heat waves that\n"
            "ignite grass and trees in the area."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_124,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 5,
    },
    [125] =
    {
        .userId = BUZZR_USER_SHONNA,
        .content = COMPOUND_STRING(
            "Their pincers are strong enough to\n"
            "shatter thick logs. Because they dislike\n"
            "cold, Pinsir burrow and sleep under\n"
            "the ground on chilly nights."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_125,
        .quest = 0,
        .dislikeCount = 13,
        .likeCount = 41,
    },
    [126] =
    {
        .userId = BUZZR_USER_MYRTIS,
        .content = COMPOUND_STRING(
            "It is not satisfied unless it is rampaging\n"
            "at all times. If there is no opponent for\n"
            "Tauros to battle, it will charge at thick\n"
            "trees and knock them down to calm itself."
            ),
        .tilesptr = sPokemonTowerMapPreviewTiles,
        .tilemapptr = sPokemonTowerMapPreviewTilemap,
        .palptr = sPokemonTowerMapPreviewPalette,
        .isPrivate = TRUE,
        .criteria = TweetCriteria_126,
        .quest = 0,
        .dislikeCount = 2,
        .likeCount = 29,
    },
    [127] =
    {
        .userId = BUZZR_USER_NOELLA,
        .content = COMPOUND_STRING(
            "Its swimming muscles are weak, so it is\n"
            "easily washed away by currents. In places\n"
            "where water pools, you can see many\n"
            "Magikarp deposited there by the flow."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_127,
        .quest = 0,
        .dislikeCount = 42,
        .likeCount = 22,
    },
    [128] =
    {
        .userId = BUZZR_USER_CASSEY,
        .content = COMPOUND_STRING(
            "It is an extremely vicious and violent\n"
            "Pokémon. When humans begin to fight,\n"
            "it will appear and burn everything to the\n"
            "ground with intensely hot flames."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_128,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 5,
    },
    [129] =
    {
        .userId = BUZZR_USER_FRANCESCO,
        .content = COMPOUND_STRING(
            "People have driven Lapras almost to the\n"
            "point of extinction. In the evenings,\n"
            "it is said to sing plaintively as it seeks\n"
            "what few others of its kind still remain."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_129,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 9,
    },
    [130] =
    {
        .userId = BUZZR_USER_GENOVEVA,
        .content = COMPOUND_STRING(
            "A Ditto rearranges its cell structure to\n"
            "transform itself. However, if it tries to\n"
            "change based on its memory, it will get\n"
            "details wrong."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_130,
        .quest = 0,
        .dislikeCount = 45,
        .likeCount = 5,
    },
    [131] =
    {
        .userId = BUZZR_USER_ELLAN,
        .content = COMPOUND_STRING(
            "An Eevee has an unstable genetic makeup\n"
            "that suddenly mutates due to its\n"
            "environment. Radiation from various\n"
            "Stones causes this Pokémon to evolve."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_131,
        .quest = 0,
        .dislikeCount = 37,
        .likeCount = 26,
    },
    [132] =
    {
        .userId = BUZZR_USER_CATHIE,
        .content = COMPOUND_STRING(
            "Vaporeon underwent a spontaneous\n"
            "mutation and grew fins and gills that\n"
            "allow them to live underwater. They have\n"
            "the ability to freely control water."
            ),
        .isPrivate = TRUE,
        .criteria = TweetCriteria_132,
        .quest = 0,
        .dislikeCount = 39,
        .likeCount = 20,
    },
    [133] =
    {
        .userId = BUZZR_USER_ARDELL,
        .content = COMPOUND_STRING(
            "Its cells generate weak power that is\n"
            "amplified by its fur's static electricity\n"
            "to drop thunderbolts. The bristling fur is\n"
            "made of electrically charged needles."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_133,
        .quest = 0,
        .dislikeCount = 28,
        .likeCount = 31,
    },
    [134] =
    {
        .userId = BUZZR_USER_YULANDA,
        .content = COMPOUND_STRING(
            "Flareon's fluffy fur releases heat into\n"
            "the air so that its body does not get\n"
            "excessively hot. Its body temperature can\n"
            "rise to a maximum of 1,650 degrees F."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_134,
        .quest = 0,
        .dislikeCount = 49,
        .likeCount = 26,
    },
    [135] =
    {
        .userId = BUZZR_USER_BEN,
        .content = COMPOUND_STRING(
            "It is capable of reverting itself entirely\n"
            "back to program data in order to enter\n"
            "cyberspace. A Porygon is copy-\n"
            "protected so it cannot be duplicated."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_135,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 15,
    },
    [136] =
    {
        .userId = BUZZR_USER_FERNANDA,
        .content = COMPOUND_STRING(
            "One of the ancient and long-since-extinct\n"
            "Pokémon that have been regenerated\n"
            "from fossils by humans. If attacked,\n"
            "it withdraws into its hard shell."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_136,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 18,
    },
    [137] =
    {
        .userId = BUZZR_USER_AYANA,
        .content = COMPOUND_STRING(
            "An Omastar uses its tentacles to capture\n"
            "its prey. It is believed to have become\n"
            "extinct because its shell grew too large,\n"
            "making its movements slow and ponderous."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_137,
        .quest = 0,
        .dislikeCount = 35,
        .likeCount = 40,
    },
    [138] =
    {
        .userId = BUZZR_USER_MYRTICE,
        .content = COMPOUND_STRING(
            "It is a Pokémon that has been regenerated\n"
            "from a fossil. However, in rare cases, living\n"
            "examples have been discovered. Kabuto\n"
            "have not changed for 300 million years."
            ),
        .isPrivate = TRUE,
        .criteria = TweetCriteria_138,
        .quest = 0,
        .dislikeCount = 31,
        .likeCount = 10,
    },
    [139] =
    {
        .userId = BUZZR_USER_ELLSWORTH,
        .content = COMPOUND_STRING(
            "Kabutops once swam underwater to hunt \n"
            "for prey. It was apparently evolving from\n"
            "being a water dweller to living on land as\n"
            "evident from changes in its gills and legs."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_139,
        .quest = 0,
        .dislikeCount = 23,
        .likeCount = 5,
    },
    [140] =
    {
        .userId = BUZZR_USER_MARIO,
        .content = COMPOUND_STRING(
            "Aerodactyl is a Pokémon from the age\n"
            "of dinosaurs. It was regenerated from DNA\n"
            "extracted from amber. It is imagined to\n"
            "have been the king of the skies."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_140,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 15,
    },
    [141] =
    {
        .userId = BUZZR_USER_ROLF,
        .content = COMPOUND_STRING(
            "Snorlax's typical day consists of nothing\n"
            "more than eating and sleeping. It is such\n"
            "a docile Pokémon that there are children\n"
            "who use its big belly as a place to play."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_141,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 13,
    },
    [142] =
    {
        .userId = BUZZR_USER_JON,
        .content = COMPOUND_STRING(
            "Articuno is a legendary bird Pokémon that\n"
            "can control ice. The flapping of its wings\n"
            "chills the air. As a result, it is said that\n"
            "when this Pokémon flies, snow will fall."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_142,
        .quest = 0,
        .dislikeCount = 3,
        .likeCount = 23,
    },
    [143] =
    {
        .userId = BUZZR_USER_PLAYER,
        .content = COMPOUND_STRING(
            "Zapdos is a legendary bird Pokémon that\n"
            "has the ability to control electricity.\n"
            "It usually lives in thunderclouds. It gains\n"
            "power if it is stricken by lightning bolts."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_143,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 31,
    },
    [144] =
    {
        .userId = BUZZR_USER_PING,
        .content = COMPOUND_STRING(
            "Moltres is a legendary bird Pokémon\n"
            "that can control fire. If injured, it is said\n"
            "to dip its body in the molten magma of\n"
            "a volcano to burn and heal itself."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_144,
        .quest = 0,
        .dislikeCount = 16,
        .likeCount = 28,
    },
    [145] =
    {
        .userId = BUZZR_USER_LASHAUN,
        .content = COMPOUND_STRING(
            "A Dratini continually molts and sloughs\n"
            "off its old skin. It does so because the\n"
            "life energy within its body steadily builds\n"
            "to reach uncontrollable levels."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_145,
        .quest = 0,
        .dislikeCount = 26,
        .likeCount = 43,
    },
    [146] =
    {
        .userId = BUZZR_USER_JEROMY,
        .content = COMPOUND_STRING(
            "A Dragonair stores an enormous amount of\n"
            "energy inside its body. It is said to alter\n"
            "the weather around it by loosing energy\n"
            "from the crystals on its neck and tail."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_146,
        .quest = 0,
        .dislikeCount = 13,
        .likeCount = 3,
    },
    [147] =
    {
        .userId = BUZZR_USER_LOREAN,
        .content = COMPOUND_STRING(
            "It can circle the globe in just 16 hours.\n"
            "It is a kindhearted Pokémon that leads\n"
            "lost and foundering ships in a storm\n"
            "to the safety of land."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_147,
        .quest = 0,
        .dislikeCount = 38,
        .likeCount = 11,
    },
    [148] =
    {
        .userId = BUZZR_USER_CLEMENT,
        .content = COMPOUND_STRING(
            "A Pokémon that was created by genetic\n"
            "manipulation. However, even though the\n"
            "scientific power of humans made its body,\n"
            "they failed to give it a warm heart."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_148,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 37,
    },
    [149] =
    {
        .userId = BUZZR_USER_AUGUSTINE,
        .content = COMPOUND_STRING(
            "A Mew is said to possess the genes of all\n"
            "Pokémon. It is capable of making itself\n"
            "invisible at will, so it entirely avoids\n"
            "notice even if it approaches people."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_149,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 13,
    },
    [150] =
    {
        .userId = BUZZR_USER_PLAYER,
        .content = COMPOUND_STRING(
            "It waves its leaf around to keep foes\n"
            "at bay. However, a sweet fragrance also\n"
            "wafts from the leaf, creating a friendly\n"
            "atmosphere that becalms the battlers."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_150,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 41,
    },
    [151] =
    {
        .userId = BUZZR_USER_LAUREL,
        .content = COMPOUND_STRING(
            "A Bayleef's neck is ringed by curled-up\n"
            "leaves. Inside each leaf is a small tree\n"
            "shoot. The fragrance of this shoot\n"
            "makes people peppy."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_151,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 18,
    },
    [152] =
    {
        .userId = BUZZR_USER_SAVANNAH,
        .content = COMPOUND_STRING(
            "The fragrance of a Meganium's flower\n"
            "soothes and calms emotions. In battle,\n"
            "it gives off more of its becalming scent\n"
            "to blunt the foe's fighting spirit."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_152,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 44,
    },
    [153] =
    {
        .userId = BUZZR_USER_COLLENE,
        .content = COMPOUND_STRING(
            "It flares flames from its back to protect\n"
            "itself. The fire burns vigorously if the\n"
            "Pokémon is angry. When it is tired,\n"
            "it sputters with incomplete combustion."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_153,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 16,
    },
    [154] =
    {
        .userId = BUZZR_USER_DOUGLAS,
        .content = COMPOUND_STRING(
            "It intimidates foes with intense gusts of\n"
            "flames and superheated air. Its quick\n"
            "nimbleness lets it dodge attacks even\n"
            "while scorching an enemy."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_154,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 42,
    },
    [155] =
    {
        .userId = BUZZR_USER_DANICA,
        .content = COMPOUND_STRING(
            "It can hide behind a shimmering heat haze\n"
            "that it creates using its intense flames.\n"
            "Typhlosion create blazing explosive\n"
            "blasts that burn everything to cinders."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_155,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 3,
    },
    [156] =
    {
        .userId = BUZZR_USER_LATASHA,
        .content = COMPOUND_STRING(
            "Despite its small body, Totodile's jaws\n"
            "are very powerful. While it may think it is\n"
            "just playfully nipping, its bite has enough\n"
            "strength to cause serious injury."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_156,
        .quest = 0,
        .dislikeCount = 7,
        .likeCount = 3,
    },
    [157] =
    {
        .userId = BUZZR_USER_ANGLE,
        .content = COMPOUND_STRING(
            "Once its jaws clamp down on its foe, it will\n"
            "absolutely not let go. Because the tips of\n"
            "its fangs are forked back like fishhooks,\n"
            "they become irremovably embedded."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_157,
        .quest = 0,
        .dislikeCount = 45,
        .likeCount = 6,
    },
    [158] =
    {
        .userId = BUZZR_USER_DORETHA,
        .content = COMPOUND_STRING(
            "It opens its huge mouth to intimidate\n"
            "enemies. In battle, it runs using its thick\n"
            "and powerful hind legs to charge the\n"
            "foe with incredible speed."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_158,
        .quest = 0,
        .dislikeCount = 17,
        .likeCount = 23,
    },
    [159] =
    {
        .userId = BUZZR_USER_IRWIN,
        .content = COMPOUND_STRING(
            "They take turns standing guard when it\n"
            "is time to sleep. The sentry awakens the\n"
            "others if it senses danger. If one becomes\n"
            "separated, it turns sleepless with fear."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_159,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 7,
    },
    [160] =
    {
        .userId = BUZZR_USER_ROB,
        .content = COMPOUND_STRING(
            "A Furret has a very slim build. When under\n"
            "attack, it can squirm through narrow\n"
            "spaces and get away. In spite of its short\n"
            "limbs, it is very nimble and fleet."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_160,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 14,
    },
    [161] =
    {
        .userId = BUZZR_USER_BRIGIDA,
        .content = COMPOUND_STRING(
            "It has an internal organ that senses\n"
            "the earth's rotation. Using this special\n"
            "organ, a Hoothoot begins hooting at\n"
            "precisely the same time every day."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_161,
        .quest = 0,
        .dislikeCount = 34,
        .likeCount = 44,
    },
    [162] =
    {
        .userId = BUZZR_USER_LAURETTE,
        .content = COMPOUND_STRING(
            "It unfailingly catches prey in darkness.\n"
            "Noctowl owe their success to superior\n"
            "vision that allows them to see in minimal\n"
            "light, and to their supple and silent wings."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_162,
        .quest = 0,
        .dislikeCount = 24,
        .likeCount = 21,
    },
    [163] =
    {
        .userId = BUZZR_USER_KRISTEL,
        .content = COMPOUND_STRING(
            "Ledyba communicate using a fluid that\n"
            "they secrete from where the legs join the\n"
            "body. They are said to convey feelings to\n"
            "others by altering the fluid's scent."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_163,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 25,
    },
    [164] =
    {
        .userId = BUZZR_USER_ULA,
        .content = COMPOUND_STRING(
            "It is said that in lands with clean air,\n"
            "where the stars fill the sky, there live\n"
            "many Ledian. For good reason, they use\n"
            "the light of the stars as energy."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_164,
        .quest = 0,
        .dislikeCount = 16,
        .likeCount = 33,
    },
    [165] =
    {
        .userId = BUZZR_USER_JOSUE,
        .content = COMPOUND_STRING(
            "The web it spins can be considered its\n"
            "second nervous system. It is said that a\n"
            "Spinarak determines its prey by the tiny\n"
            "vibrations it feels through the web."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_165,
        .quest = 0,
        .dislikeCount = 15,
        .likeCount = 13,
    },
    [166] =
    {
        .userId = BUZZR_USER_JAMAL,
        .content = COMPOUND_STRING(
            "Its feet are tipped with tiny hooked claws\n"
            "that enable it to scuttle on ceilings and\n"
            "vertical walls. It constricts its foe with\n"
            "thin and strong silk webbing."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_166,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 8,
    },
    [167] =
    {
        .userId = BUZZR_USER_RAYFORD,
        .content = COMPOUND_STRING(
            "Over the course of evolution, its hind legs\n"
            "turned into wings. By alternately resting\n"
            "its front and rear wings, it can fly all day\n"
            "without having to stop."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_167,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 30,
    },
    [168] =
    {
        .userId = BUZZR_USER_VERNA,
        .content = COMPOUND_STRING(
            "When it senses danger, it discharges\n"
            "positive and negative electricity from its\n"
            "two antennae. It lives in depths beyond\n"
            "sunlight's reach."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_168,
        .quest = 0,
        .dislikeCount = 14,
        .likeCount = 43,
    },
    [169] =
    {
        .userId = BUZZR_USER_JEANIE,
        .content = COMPOUND_STRING(
            "The light-emitting orbs on its back are\n"
            "very bright. They are formed from a part of\n"
            "its dorsal fin. This Pokémon illuminates\n"
            "the inky darkness of deep seas."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_169,
        .quest = 0,
        .dislikeCount = 36,
        .likeCount = 48,
    },
    [170] =
    {
        .userId = BUZZR_USER_ELNA,
        .content = COMPOUND_STRING(
            "It is still inept at retaining electricity.\n"
            "When it is startled, it discharges power\n"
            "accidentally. It gets better at holding\n"
            "power as it grows older."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_170,
        .quest = 0,
        .dislikeCount = 32,
        .likeCount = 40,
    },
    [171] =
    {
        .userId = BUZZR_USER_NESTOR,
        .content = COMPOUND_STRING(
            "On nights with many shooting stars,\n"
            "Cleffa can be seen dancing in a ring.\n"
            "They dance until daybreak, when they\n"
            "quench their thirst with the morning dew."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_171,
        .quest = 0,
        .dislikeCount = 37,
        .likeCount = 33,
    },
    [172] =
    {
        .userId = BUZZR_USER_NIESHA,
        .content = COMPOUND_STRING(
            "Its soft and pliable body is very bouncy.\n"
            "When it sings continuously with all its\n"
            "might, its body steadily turns a deepening\n"
            "pink color."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_172,
        .quest = 0,
        .dislikeCount = 4,
        .likeCount = 25,
    },
    [173] =
    {
        .userId = BUZZR_USER_SANORA,
        .content = COMPOUND_STRING(
            "As its energy, it uses the feelings of\n"
            "compassion and pleasure exuded by\n"
            "people and Pokémon. It stores up happy\n"
            "feelings in its shell, then shares them out."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_173,
        .quest = 0,
        .dislikeCount = 25,
        .likeCount = 4,
    },
    [174] =
    {
        .userId = BUZZR_USER_BRYON,
        .content = COMPOUND_STRING(
            "It is said to be a Pokémon that brings good\n"
            "fortune. When it spots someone who is pure\n"
            "of heart, a Togetic appears and shares its\n"
            "happiness with that person."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_174,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 4,
    },
    [175] =
    {
        .userId = BUZZR_USER_KRISTEL,
        .content = COMPOUND_STRING(
            "It runs up short trees that grow on the\n"
            "savanna to peck at new shoots.\n"
            "A Natu's eyes look as if they are\n"
            "always observing something."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_175,
        .quest = 0,
        .dislikeCount = 10,
        .likeCount = 14,
    },
    [176] =
    {
        .userId = BUZZR_USER_HARRIETT,
        .content = COMPOUND_STRING(
            "It has the enigmatic power of foreseeing\n"
            "the future. Some people in different lands\n"
            "have long believed that Xatu are\n"
            "emissaries from another world."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_176,
        .quest = 0,
        .dislikeCount = 7,
        .likeCount = 28,
    },
    [177] =
    {
        .userId = BUZZR_USER_AHMAD,
        .content = COMPOUND_STRING(
            "Its fluffy wool rubs together and builds\n"
            "a static charge. The more energy is\n"
            "charged, the more brightly the lightbulb\n"
            "at the tip of its tail glows."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_177,
        .quest = 0,
        .dislikeCount = 47,
        .likeCount = 49,
    },
    [178] =
    {
        .userId = BUZZR_USER_DEVIN,
        .content = COMPOUND_STRING(
            "Its fleece quality changes to generate\n"
            "strong static electricity with a small\n"
            "amount of wool. The bare, slick parts of its\n"
            "hide are shielded against electricity."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_178,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 46,
    },
    [179] =
    {
        .userId = BUZZR_USER_LORIANN,
        .content = COMPOUND_STRING(
            "It gives off so much light that it can be\n"
            "seen even from space. People in the old\n"
            "days used its light to send signals back\n"
            "and forth with others far away."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_179,
        .quest = 0,
        .dislikeCount = 32,
        .likeCount = 2,
    },
    [180] =
    {
        .userId = BUZZR_USER_JUSTIN,
        .content = COMPOUND_STRING(
            "Its flower petals deepen in color through\n"
            "exposure to sunlight. When cloudy weather\n"
            "persists, it does a dance that is thought\n"
            "to be a ritual for summoning the sun."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_180,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 45,
    },
    [181] =
    {
        .userId = BUZZR_USER_KARL,
        .content = COMPOUND_STRING(
            "Its body is covered with water-repellent\n"
            "fur. Because of the fur, it can swim\n"
            "through water at high speed without being\n"
            "slowed by the water's resistance."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_181,
        .dislikeCount = 6,
        .likeCount = 18,
    },
    [182] =
    {
        .userId = BUZZR_USER_CANDYCE,
        .content = COMPOUND_STRING(
            "It lives in water virtually all day long.\n"
            "Its body color and pattern act as\n"
            "camouflage that makes it tough for\n"
            "enemies to spot in water."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_182,
        .quest = 0,
        .dislikeCount = 21,
        .likeCount = 12,
    },
    [183] =
    {
        .userId = BUZZR_USER_YING,
        .content = COMPOUND_STRING(
            "It mimics a tree to avoid being attacked\n"
            "by enemies. But since its forelegs\n"
            "remain green throughout the year, it is\n"
            "easily identified as a fake in the winter."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_183,
        .quest = 0,
        .dislikeCount = 24,
        .likeCount = 27,
    },
    [184] =
    {
        .userId = BUZZR_USER_GAVIN,
        .content = COMPOUND_STRING(
            "The curled hair on its head proves its\n"
            "status as a king. It is said that the\n"
            "longer and curlier the hair, the more\n"
            "respect it earns from its peers."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_184,
        .quest = 0,
        .dislikeCount = 28,
        .likeCount = 31,
    },
    [185] =
    {
        .userId = BUZZR_USER_FIDEL,
        .content = COMPOUND_STRING(
            "This Pokémon drifts and floats with the\n"
            "wind. If it senses the approach of strong\n"
            "winds, a Hoppip links leaves with others\n"
            "to prepare against being blown away."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_185,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 35,
    },
    [186] =
    {
        .userId = BUZZR_USER_NELIA,
        .content = COMPOUND_STRING(
            "It blossoms when the temperature rises\n"
            "above 64 degrees F. Because its flower's\n"
            "blooming changes with the temperature,\n"
            "it is sometimes used as a thermometer."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_186,
        .quest = 0,
        .dislikeCount = 48,
        .likeCount = 4,
    },
    [187] =
    {
        .userId = BUZZR_USER_MARYBETH,
        .content = COMPOUND_STRING(
            "Jumpluff ride warm southern winds to\n"
            "cross the sea and fly to foreign lands.\n"
            "This Pokémon lands when it encounters\n"
            "cold air while it is floating."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_187,
        .quest = 0,
        .dislikeCount = 2,
        .likeCount = 43,
    },
    [188] =
    {
        .userId = BUZZR_USER_DEVONA,
        .content = COMPOUND_STRING(
            "Its tail ends with a dexterous, handlike\n"
            "appendage. However, because it uses the\n"
            "tail so much, Aipom's real hands have\n"
            "become rather clumsy."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_188,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 2,
    },
    [189] =
    {
        .userId = BUZZR_USER_JEAN,
        .content = COMPOUND_STRING(
            "Sunkern try to minimize movement to\n"
            "conserve the nutrients they have stored\n"
            "in their bodies for evolution. They will\n"
            "not eat, subsisting only on morning dew."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_189,
        .quest = 0,
        .dislikeCount = 13,
        .likeCount = 20,
    },
    [190] =
    {
        .userId = BUZZR_USER_CHRISTINA,
        .content = COMPOUND_STRING(
            "Sunflora convert solar energy into\n"
            "nutrition. They are highly active in the\n"
            "warm daytime but suddenly stop moving as\n"
            "soon as the sun sets."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_190,
        .quest = 0,
        .dislikeCount = 32,
        .likeCount = 28,
    },
    [191] =
    {
        .userId = BUZZR_USER_EVAN,
        .content = COMPOUND_STRING(
            "It can see 360 degrees without moving\n"
            "its eyes. It is a great flier capable of\n"
            "making sudden stops and turning midair to\n"
            "quickly chase down targeted prey."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_191,
        .quest = 0,
        .dislikeCount = 11,
        .likeCount = 49,
    },
    [192] =
    {
        .userId = BUZZR_USER_CONNIE,
        .content = COMPOUND_STRING(
            "Wooper usually live in water but come\n"
            "out onto land seeking food occasionally.\n"
            "On land, they coat their bodies with a\n"
            "gooey, toxic film."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_192,
        .quest = 0,
        .dislikeCount = 33,
        .likeCount = 32,
    },
    [193] =
    {
        .userId = BUZZR_USER_OUIDA,
        .content = COMPOUND_STRING(
            "A Quagsire hunts by leaving its mouth wide\n"
            "open in water and waiting for its prey to\n"
            "blunder in. Because it doesn't move, it\n"
            "does not get very hungry."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_193,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 41,
    },
    [194] =
    {
        .userId = BUZZR_USER_MATT,
        .content = COMPOUND_STRING(
            "An Espeon is extremely loyal to any\n"
            "Trainer it considers to be worthy. It is\n"
            "said to have developed precognitive\n"
            "powers to protect its Trainer from harm."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_194,
        .quest = QUEST_VSDEOXYS,
        .dislikeCount = 22,
        .likeCount = 49,
    },
    [195] =
    {
        .userId = BUZZR_USER_CANDELARIA,
        .content = COMPOUND_STRING(
            "Umbreon evolved from exposure to the\n"
            "moon's energy pulses. It lurks in darkness\n"
            "and waits for its foes to move. The rings\n"
            "on its body glow when it leaps to attack."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_195,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 13,
    },
    [196] =
    {
        .userId = BUZZR_USER_ALISE,
        .content = COMPOUND_STRING(
            "Murkrow were feared as the alleged\n"
            "bearers of ill fortune. It shows strong\n"
            "interest in anything that sparkles. It will\n"
            "even try to steal rings from women."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_196,
        .quest = 0,
        .dislikeCount = 24,
        .likeCount = 6,
    },
    [197] =
    {
        .userId = BUZZR_USER_HILDEGARDE,
        .content = COMPOUND_STRING(
            "It undertakes research every day to\n"
            "solve the mysteries of the world.\n"
            "However, it apparently forgets everything\n"
            "if the Shellder on its head comes off."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_197,
        .quest = QUEST_BETWEENASTONEANDAHARDPLACE,
        .dislikeCount = 32,
        .likeCount = 19,
    },
    [198] =
    {
        .userId = BUZZR_USER_NADENE,
        .content = COMPOUND_STRING(
            "A Misdreavus frightens people with a\n"
            "creepy, sobbing cry. It apparently uses\n"
            "its red spheres to absorb the fear of foes\n"
            "as its nutrition."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_198,
        .quest = 0,
        .dislikeCount = 5,
        .likeCount = 14,
    },
    [199] =
    {
        .userId = BUZZR_USER_NICKI,
        .content = COMPOUND_STRING(
            "This Pokémon is shaped like ancient text\n"
            "characters. Although research is ongoing,\n"
            "it is a mystery as to which came first,\n"
            "the ancient writings or the various Unown."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_199,
        .quest = 0,
        .dislikeCount = 32,
        .likeCount = 23,
    },
    [200] =
    {
        .userId = BUZZR_USER_CARMELINA,
        .content = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_200,
        .quest = 0,
        .dislikeCount = 24,
        .likeCount = 13,
    },
    [201] =
    {
        .userId = BUZZR_USER_AILENE,
        .content = COMPOUND_STRING(
            "A Girafarig is an herbivore--it eats\n"
            "grass and tree shoots. While it is eating,\n"
            "its tail makes chewing and swallowing\n"
            "motions as if it were also eating."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_201,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 18,
    },
    [202] =
    {
        .userId = BUZZR_USER_LISABETH,
        .content = COMPOUND_STRING(
            "A Pineco hangs from a tree branch and\n"
            "waits for prey. While eating, if it is\n"
            "disturbed by someone shaking its tree, it\n"
            "falls on the ground and suddenly explodes."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_202,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 32,
    },
    [203] =
    {
        .userId = BUZZR_USER_HANH,
        .content = COMPOUND_STRING(
            "It keeps itself inside its steel shell.\n"
            "The shell is opened when it is catching\n"
            "prey, but it is so quick that the shell's\n"
            "inside cannot be seen."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_203,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 47,
    },
    [204] =
    {
        .userId = BUZZR_USER_CHRISTIE,
        .content = COMPOUND_STRING(
            "Its drill-tipped tail is used to burrow into\n"
            "the ground backwards. This Pokémon is\n"
            "known to make its nest in complex shapes\n"
            "deep under the ground."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_204,
        .quest = 0,
        .dislikeCount = 27,
        .likeCount = 7,
    },
    [205] =
    {
        .userId = BUZZR_USER_ZENOBIA,
        .content = COMPOUND_STRING(
            "It glides without making a single sound.\n"
            "It grasps the face of its foe using its\n"
            "hind and large front claws, then stabs\n"
            "with its poison barb."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_205,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 42,
    },
    [206] =
    {
        .userId = BUZZR_USER_NICOLASA,
        .content = COMPOUND_STRING(
            "Steelix live even further underground\n"
            "than Onix. This Pokémon is known to dig\n"
            "toward the earth's core, reaching a depth\n"
            "of over six-tenths of a mile underground."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_206,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 46,
    },
    [207] =
    {
        .userId = BUZZR_USER_RAYLENE,
        .content = COMPOUND_STRING(
            "By baring its fangs and making a scary\n"
            "face, it sends smaller Pokémon scurrying\n"
            "in terror. The Snubbull does seem a\n"
            "little sad at making its foes flee."
            ),
        .tilesptr = sSilphCoMapPreviewTiles,
        .tilemapptr = sSilphCoMapPreviewTilemap,
        .palptr = sPokemonTowerMapPreviewTilemap,
        .isPrivate = FALSE,
        .criteria = TweetCriteria_207,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 1,
    },
    [208] =
    {
        .userId = BUZZR_USER_FREEDA,
        .content = COMPOUND_STRING(
            "It has a particularly well-developed lower\n"
            "jaw. The huge fangs are heavy, causing\n"
            "it to tilt its head. Unless it is startled,\n"
            "it will not try to bite."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_208,
        .quest = 0,
        .dislikeCount = 3,
        .likeCount = 1,
    },
    [209] =
    {
        .userId = BUZZR_USER_KALA,
        .content = COMPOUND_STRING(
            "A Qwilfish uses the pressure of water\n"
            "it swallows to shoot toxic quills all at\n"
            "once from all over its body. It finds\n"
            "swimming to be somewhat challenging."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_209,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 3,
    },
    [210] =
    {
        .userId = BUZZR_USER_NEVADA,
        .content = COMPOUND_STRING(
            "A Scizor has a body with the hardness of\n"
            "steel. It is not easily fazed by ordinary\n"
            "sorts of attacks. It flaps its wings to\n"
            "regulate its body temperature."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_210,
        .quest = 0,
        .dislikeCount = 34,
        .likeCount = 42,
    },
    [211] =
    {
        .userId = BUZZR_USER_PLAYER,
        .content = COMPOUND_STRING(
            "A Shuckle hides under rocks, keeping its\n"
            "body concealed inside its shell while\n"
            "eating stored berries. The berries mix with\n"
            "its body fluids to become a juice."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_211,
        .quest = 0,
        .dislikeCount = 1,
        .likeCount = 6,
    },
    [212] =
    {
        .userId = BUZZR_USER_TIMIKA,
        .content = COMPOUND_STRING(
            "They gather in forests seeking the sweet\n"
            "sap of trees. It is completely clad in a\n"
            "steel-hard shell. It is proud of its horn,\n"
            "which it uses to fling foes."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_212,
        .quest = 0,
        .dislikeCount = 46,
        .likeCount = 5,
    },
    [213] =
    {
        .userId = BUZZR_USER_AUSTIN,
        .content = COMPOUND_STRING(
            "A Sneasel scales trees by punching its\n"
            "hooked claws into the bark. It seeks out\n"
            "unguarded nests and steals eggs for food\n"
            "while the parents are away."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_213,
        .quest = 0,
        .dislikeCount = 7,
        .likeCount = 14,
    },
    [214] =
    {
        .userId = BUZZR_USER_AARON,
        .content = COMPOUND_STRING(
            "It licks its palms that are sweetened by\n"
            "being soaked in honey. A Teddiursa makes\n"
            "its own honey by blending fruits and pollen\n"
            "collected by Beedrill."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_214,
        .quest = 0,
        .dislikeCount = 27,
        .likeCount = 5,
    },
    [215] =
    {
        .userId = BUZZR_USER_ELMER,
        .content = COMPOUND_STRING(
            "In forests, it is said that there are many\n"
            "streams and towering trees where an\n"
            "Ursaring gathers food. It walks through\n"
            "its forest collecting food every day."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_215,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 15,
    },
    [216] =
    {
        .userId = BUZZR_USER_IDELLA,
        .content = COMPOUND_STRING(
            "It is a species of Pokémon that lives in\n"
            "volcanic areas. If its body cools, its skin\n"
            "hardens and immobilizes it. To avoid that,\n"
            "it sleeps near magma."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_216,
        .quest = 0,
        .dislikeCount = 30,
        .likeCount = 12,
    },
    [217] =
    {
        .userId = BUZZR_USER_LOISE,
        .content = COMPOUND_STRING(
            "The shell on its back is made of hardened\n"
            "magma. Tens of thousands of years spent\n"
            "living in volcanic craters have turned\n"
            "Magcargo's bodies into magma."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_217,
        .quest = 0,
        .dislikeCount = 40,
        .likeCount = 33,
    },
    [218] =
    {
        .userId = BUZZR_USER_DANICA,
        .content = COMPOUND_STRING(
            "It roots for food by rubbing its snout\n"
            "against the ground. Its favorite food is a\n"
            "mushroom that grows under dried grass.\n"
            "It occasionally roots out hot springs."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_218,
        .quest = 0,
        .dislikeCount = 5,
        .likeCount = 34,
    },
    [219] =
    {
        .userId = BUZZR_USER_JEAN,
        .content = COMPOUND_STRING(
            "A Piloswine is covered by a thick coat\n"
            "of long hair for enduring freezing cold.\n"
            "It uses its tusks to dig up food that has\n"
            "been buried under ice."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_219,
        .quest = 0,
        .dislikeCount = 43,
        .likeCount = 41,
    },
    [220] =
    {
        .userId = BUZZR_USER_VENITA,
        .content = COMPOUND_STRING(
            "Corsola live in warm southern seas.\n"
            "If the sea becomes polluted, the beautiful\n"
            "coral stalks become discolored and crumble\n"
            "away in tatters."
            ),
        .tilesptr = sMtMoonMapPreviewTiles,
        .tilemapptr = sMtMoonMapPreviewTilemap,
        .palptr = sSilphCoMapPreviewTilemap,
        .isPrivate = TRUE,
        .criteria = TweetCriteria_220,
        .quest = 0,
        .dislikeCount = 47,
        .likeCount = 4,
    },
    [221] =
    {
        .userId = BUZZR_USER_CATHIE,
        .content = COMPOUND_STRING(
            "A Remoraid uses its abdominal muscles\n"
            "to forcefully expel swallowed water, then\n"
            "shoot down flying prey. When evolution\n"
            "approaches, it travels down rivers."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_221,
        .quest = 0,
        .dislikeCount = 13,
        .likeCount = 45,
    },
    [222] =
    {
        .userId = BUZZR_USER_MARIO,
        .content = COMPOUND_STRING(
            "It ensnares its foe with its suction-\n"
            "cupped tentacles before delivering the\n"
            "finishing blow. If the foe turns out to be\n"
            "too strong, it spews ink to escape."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_222,
        .quest = 0,
        .dislikeCount = 48,
        .likeCount = 37,
    },
    [223] =
    {
        .userId = BUZZR_USER_DYAN,
        .content = COMPOUND_STRING(
            "It carries food bundled up in its tail.\n"
            "There was a famous explorer who\n"
            "managed to scale Mt. Everest thanks\n"
            "to a Delibird sharing its food."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_223,
        .quest = 0,
        .dislikeCount = 30,
        .likeCount = 18,
    },
    [224] =
    {
        .userId = BUZZR_USER_CANDY,
        .content = COMPOUND_STRING(
            "On sunny days, schools of Mantine can be\n"
            "seen elegantly leaping over the waves.\n"
            "It is not bothered by the Remoraid that\n"
            "hitches rides."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_224,
        .quest = 0,
        .dislikeCount = 20,
        .likeCount = 30,
    },
    [225] =
    {
        .userId = BUZZR_USER_TASHA,
        .content = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_225,
        .quest = 0,
        .dislikeCount = 42,
        .likeCount = 22,
    },
    [226] =
    {
        .userId = BUZZR_USER_PLAYER,
        .content = COMPOUND_STRING(
            "Houndour communicate with each other\n"
            "using a variety of cries to corner their\n"
            "prey. This Pokémon's remarkable teamwork\n"
            "is simply unparalleled."
            ),
        .isPrivate = TRUE,
        .criteria = TweetCriteria_226,
        .quest = 0,
        .dislikeCount = 13,
        .likeCount = 30,
    },
    [227] =
    {
        .userId = BUZZR_USER_PLAYER,
        .content = COMPOUND_STRING(
            "In a Houndoom pack, the one with its horns\n"
            "raked sharply back serves a leadership\n"
            "role. They choose their leader by fighting\n"
            "among themselves."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_227,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 2,
    },
    [228] =
    {
        .userId = BUZZR_USER_PLAYER,
        .content = COMPOUND_STRING(
            "It sleeps quietly, deep on the seafloor.\n"
            "When it comes up to the surface, it\n"
            "creates a huge whirlpool that can swallow\n"
            "even ships."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_228,
        .quest = 0,
        .dislikeCount = 48,
        .likeCount = 16,
    },
    [229] =
    {
        .userId = BUZZR_USER_MABEL,
        .content = COMPOUND_STRING(
            "Phanpy's big ears serve as broad fans.\n"
            "When it becomes hot, it flaps the ears\n"
            "busily to cool down. Even the young are\n"
            "very strong."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_229,
        .quest = 0,
        .dislikeCount = 40,
        .likeCount = 11,
    },
    [230] =
    {
        .userId = BUZZR_USER_WAYNE,
        .content = COMPOUND_STRING(
            "A Donphan is so strong it can easily haul\n"
            "a dump truck. Its hide has toughened to a\n"
            "rock-hard state. An ordinary sort of\n"
            "attack won't even leave a scratch."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_230,
        .quest = 0,
        .dislikeCount = 42,
        .likeCount = 14,
    },
    [231] =
    {
        .userId = BUZZR_USER_ELLAN,
        .content = COMPOUND_STRING(
            "It was created by humans using the power\n"
            "of science. It has been given artificial\n"
            "intelligence that enables it to learn new\n"
            "gestures and emotions on its own."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_231,
        .quest = 0,
        .dislikeCount = 23,
        .likeCount = 22,
    },
    [232] =
    {
        .userId = BUZZR_USER_SHARPRISECAPTIAL,
        .content = COMPOUND_STRING(
            "Stantler's magnificent antlers were\n"
            "once traded at high prices as works of art.\n"
            "As a result, this Pokémon was hunted\n"
            "close to extinction."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_232,
        .quest = 0,
        .dislikeCount = 31,
        .likeCount = 13,
    },
    [233] =
    {
        .userId = BUZZR_USER_CATHERINA,
        .content = COMPOUND_STRING(
            "A Smeargle marks its territory using a\n"
            "fluid that leaks out from the tip of its\n"
            "tail. About 5,000 different marks left by\n"
            "this Pokémon have been found."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_233,
        .quest = 0,
        .dislikeCount = 12,
        .likeCount = 32,
    },
    [234] =
    {
        .userId = BUZZR_USER_JOSUE,
        .content = COMPOUND_STRING(
            "Tyrogue become stressed out if they do\n"
            "not get to train every day. When raising\n"
            "this Pokémon, the Trainer must establish\n"
            "a regular training schedule."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_234,
        .quest = 0,
        .dislikeCount = 6,
        .likeCount = 16,
    },
    [235] =
    {
        .userId = BUZZR_USER_GEORGEANNA,
        .content = COMPOUND_STRING(
            "Its technique of kicking while spinning is\n"
            "a remarkable mix of both offense and\n"
            "defense. Hitmontop travel faster\n"
            "spinning than they do walking."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_235,
        .quest = 0,
        .dislikeCount = 8,
        .likeCount = 35,
    },
    [236] =
    {
        .userId = BUZZR_USER_CHRISTOPHER,
        .content = COMPOUND_STRING(
            "It actively runs about, but also falls\n"
            "often. Whenever it falls, it will check its\n"
            "reflection on a lake's surface to make\n"
            "sure its face hasn't become dirty."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_236,
        .quest = 0,
        .dislikeCount = 31,
        .likeCount = 46,
    },
    [237] =
    {
        .userId = BUZZR_USER_CELESTA,
        .content = COMPOUND_STRING(
            "If it touches metal and discharges the\n"
            "electricity it has stored in its body, an\n"
            "Elekid begins swinging its arms in circles\n"
            "to recharge itself."
            ),
        .isPrivate = TRUE,
        .criteria = TweetCriteria_237,
        .quest = 0,
        .dislikeCount = 48,
        .likeCount = 35,
    },
    [238] =
    {
        .userId = BUZZR_USER_AHMAD,
        .content = COMPOUND_STRING(
            "If a Magby is spouting yellow flames from\n"
            "its mouth, it is in good health. When it is\n"
            "fatigued, black smoke will be mixed in with\n"
            "the flames."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_238,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 24,
    },
    [239] =
    {
        .userId = BUZZR_USER_CHRISTINA,
        .content = COMPOUND_STRING(
            "It gives over five gallons of milk daily.\n"
            "Its sweet milk is enjoyed by children and\n"
            "grown-ups alike. People who can't drink\n"
            "milk turn it into yogurt and eat it instead."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_239,
        .quest = 0,
        .dislikeCount = 38,
        .likeCount = 22,
    },
    [240] =
    {
        .userId = BUZZR_USER_KRISTAN,
        .content = COMPOUND_STRING(
            "If it senses sadness with its fluffy fur,\n"
            "a Blissey will rush over to the sad person,\n"
            "however far away, to share an egg of\n"
            "happiness that brings a smile to any face."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_240,
        .quest = 0,
        .dislikeCount = 27,
        .likeCount = 6,
    },
    [241] =
    {
        .userId = BUZZR_USER_ROBBIE,
        .content = COMPOUND_STRING(
            "Raikou embodies the speed of lightning.\n"
            "Its roars send shock waves shuddering\n"
            "through the air and ground as if\n"
            "lightning bolts were crashing down."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_241,
        .quest = 0,
        .dislikeCount = 5,
        .likeCount = 18,
    },
    [242] =
    {
        .userId = BUZZR_USER_LARA,
        .content = COMPOUND_STRING(
            "Entei embodies the passion of magma.\n"
            "It is thought to have been born in the\n"
            "eruption of a volcano. It blasts fire that\n"
            "consumes all that it touches."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_242,
        .quest = 0,
        .dislikeCount = 38,
        .likeCount = 11,
    },
    [243] =
    {
        .userId = BUZZR_USER_ROB,
        .content = COMPOUND_STRING(
            "Suicune embodies the compassion of\n"
            "a pure spring of water. It runs across\n"
            "the land with gliding elegance. It has the\n"
            "power to purify dirty water."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_243,
        .quest = 0,
        .dislikeCount = 44,
        .likeCount = 29,
    },
    [244] =
    {
        .userId = BUZZR_USER_JERALDINE,
        .content = COMPOUND_STRING(
            "A Larvitar is born deep under the ground.\n"
            "It must eat its way through the soil above\n"
            "and reach the surface for it to see its\n"
            "parents' faces."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_244,
        .quest = 0,
        .dislikeCount = 15,
        .likeCount = 32,
    },
    [245] =
    {
        .userId = BUZZR_USER_SHONNA,
        .content = COMPOUND_STRING(
            "A Pupitar creates a gas inside its body\n"
            "that it ejects under compression to propel\n"
            "itself like a jet. Its body can withstand\n"
            "a collision with solid steel."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_245,
        .quest = 0,
        .dislikeCount = 39,
        .likeCount = 18,
    },
    [246] =
    {
        .userId = BUZZR_USER_LAJUANA,
        .content = COMPOUND_STRING(
            "A Tyranitar is so overwhelmingly powerful."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_246,
        .quest = 0,
        .dislikeCount = 35,
        .likeCount = 29,
    },
    [247] =
    {
        .userId = BUZZR_USER_YULANDA,
        .content = COMPOUND_STRING(
            "Lugia is so powerful even a light\n"
            "fluttering of its wings can blow apart"
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_247,
        .quest = 0,
        .dislikeCount = 14,
        .likeCount = 28,
    },
    [248] =
    {
        .userId = BUZZR_USER_LUCINDA,
        .content = COMPOUND_STRING(
            "Its feathers--which glow in seven colors\n"
            "depending on the angle at which they are\n"
            "struck by light--are thought to bring joy."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_248,
        .quest = 0,
        .dislikeCount = 18,
        .likeCount = 25,
    },
    [249] =
    {
        .userId = BUZZR_USER_PAM,
        .content = COMPOUND_STRING(
            "This Pokémon has the ability to move\n"
            "through time. Records describing it as\n"
            "a forest deity can be found from many\n"
            "different eras. This Pokémon traveled\n"
            "through time to come from the future."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_249,
        .quest = 0,
        .dislikeCount = 26,
        .likeCount = 4,
    },
    [250] =
    {
        .userId = BUZZR_USER_TOD,
        .content = COMPOUND_STRING(
            "It makes its nest in a giant tree in the\n"
            "forest. It ferociously guards against\n"
            "anything nearing its territory. It is said\n"
            "to be the protector of the forest's trees.\n"
            "It quickly scales even vertical walls.\n"
            "It senses humidity with its tail."
            ),
        .isPrivate = TRUE,
        .criteria = TweetCriteria_250,
        .quest = 0,
        .dislikeCount = 3,
        .likeCount = 36,
    },
    [251] =
    {
        .userId = BUZZR_USER_BERNIE,
        .content = COMPOUND_STRING(
            "Leaves grow out of this Pokémon's body.\n"
            "They help obscure a Grovyle from the eyes\n"
            "of its enemies while it is in a thickly\n"
            "overgrown forest.\n"
            "Its strongly developed thigh muscles\n"
            "give it astounding agility and jumping\n"
            "performance."
            ),
        .tilesptr = sSeafoamIslandsMapPreviewTiles,
        .tilemapptr = sSeafoamIslandsMapPreviewTilemap,
        .palptr = sSeafoamIslandsMapPreviewPalette,
        .isPrivate = FALSE,
        .criteria = TweetCriteria_251,
        .quest = 0,
        .dislikeCount = 14,
        .likeCount = 22,
    },
    [252] =
    {
        .userId = BUZZR_USER_DOLLIE,
        .content = COMPOUND_STRING(
            "In the jungle, its power is without equal.\n"
            "This Pokémon carefully grows trees and\n"
            "plants. It regulates its body temperature\n"
            "by basking in sunlight."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_252,
        .quest = 0,
        .dislikeCount = 43,
        .likeCount = 38,
    },
    [253] =
    {
        .userId = BUZZR_USER_PENELOPE,
        .content = COMPOUND_STRING(
            "If attacked, it strikes back by spitting\n"
            "balls of fire it forms in its stomach.\n"
            "A Torchic dislikes darkness because it\n"
            "can't see its surroundings."
            ),
        .tilesptr = sRocketWarehouseMapPreviewTiles,
        .tilemapptr = sRocketWarehouseMapPreviewTilemap,
        .palptr = sRocketWarehouseMapPreviewPalette,
        .isPrivate = FALSE,
        .criteria = TweetCriteria_253,
        .quest = 0,
        .dislikeCount = 41,
        .likeCount = 26,
    },
    [254] =
    {
        .userId = BUZZR_USER_ORLANDO,
        .content = COMPOUND_STRING(
            "It lashes out with 10 kicks per second.\n"
            "Its strong fighting instinct compels it\n"
            "to keep up its offensive until the\n"
            "opponent gives up."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_254,
        .quest = 0,
        .dislikeCount = 22,
        .likeCount = 30,
    },
    [255] =
    {
        .userId = BUZZR_USER_TYISHA,
        .content = COMPOUND_STRING(
            "It learns martial arts that use punches\n"
            "and kicks. Every several years, its old\n"
            "feathers burn off, and new, supple\n"
            "feathers grow back in their place."
            ),
        .isPrivate = FALSE,
        .criteria = TweetCriteria_255,
        .quest = 0,
        .dislikeCount = 9,
        .likeCount = 7,
    },
};
