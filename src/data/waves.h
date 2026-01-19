static struct WavesData sWavesInformation[GOAL_COUNT] =
{
    [GOAL_NONE] =
    {
        .title = COMPOUND_STRING("Return"),
        .desc = COMPOUND_STRING("???"),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/small.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/sprite.gbapal"),
        .goal = 100,
        .relatedSubQuest = SUB_QUEST_6,
        .relatedQuest = QUEST_NONE,
    },
    [GOAL_FOOD_SECURITY] =
    {
        .title = COMPOUND_STRING("Food Security"),
        .desc = COMPOUND_STRING("Use the mutual aid fund to scale up and be less reliant on charity, and use that to feed more people."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/small.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/sprite.gbapal"),
        .goal = 400810,
        .relatedSubQuest = SUB_QUEST_1,
        .relatedQuest = QUEST_RESTAURANTEXPANSION2,
    },

    [GOAL_HEALTHCARE] =
    {
        .title = COMPOUND_STRING("Healthcare"),
        .desc = COMPOUND_STRING("Use the mutual aid fund to get a doctor working full time to provide healthcare to those who can't otherwise access it."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/small.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/sprite.gbapal"),
        .goal = 64151,
        .relatedSubQuest = SUB_QUEST_2,
        .relatedQuest = QUEST_THEBOYWHOCRIESWITHWOLVES,
    },

    [GOAL_SOCIAL_HOUSING] =
    {
        .title = COMPOUND_STRING("Social Housing"),
        .desc = COMPOUND_STRING("Building and getting people into community-based housing and getting people off the streets."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/small.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/sprite.gbapal"),
        .goal = 382525,
        .relatedSubQuest = SUB_QUEST_3,
        .relatedQuest = QUEST_NEIGHBORHOODCLEANUP3,
    },

    [GOAL_CRIMINAL_REFORM] =
    {
        .title = COMPOUND_STRING("Criminal Reform"),
        .desc = COMPOUND_STRING("Build programs to help harm victims and those who cause harm reach a place of real healing and justice."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/small.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/sprite.gbapal"),
        .goal = 122161,
        .relatedSubQuest = SUB_QUEST_4,
        .relatedQuest = QUEST_FINDTHEGUILTY,
    },

    [GOAL_LEGAL_DEFENSE] =
    {
        .title = COMPOUND_STRING("Legal Defense"),
        .desc = COMPOUND_STRING("Getting people without the means or funds access to the legal system."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/small.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/sprite.gbapal"),
        .goal = 30351,
        .relatedSubQuest = SUB_QUEST_5,
        .relatedQuest = QUEST_BUILDINGSCOPE,
    },
};
