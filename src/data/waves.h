static struct WavesData sWavesInformation[GOAL_COUNT] =
{
    [GOAL_NONE] =
    {
        .title = COMPOUND_STRING("Return"),
        .desc = COMPOUND_STRING("???"),
        .goal = 100,
        .relatedSubQuest = SUB_QUEST_6,
        .relatedQuest = QUEST_NONE,
    },
    [GOAL_FOOD_SECURITY] =
    {
        .title = COMPOUND_STRING("Food Security"),
        .desc = COMPOUND_STRING("Scale up existing food programs, be less reliant on charity, and feed more people."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/thumbnail_food_security.4bpp"),
        .image = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/full_food_security.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_thumbnail_food_security.gbapal"),
        .fullPalette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_full_food_security.gbapal"),
        .goal = 366000,
        .relatedSubQuest = SUB_QUEST_1,
        .relatedQuest = QUEST_RESTAURANTEXPANSION2,
    },

    [GOAL_HEALTHCARE] =
    {
        .title = COMPOUND_STRING("Healthcare"),
        .desc = COMPOUND_STRING("Fund a doctor that provides healthcare to those who can't otherwise access it."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/thumbnail_healthcare.4bpp"),
        .image = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/full_healthcare.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_thumbnail_healthcare.gbapal"),
        .fullPalette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_full_healthcare.gbapal"),
        .goal = 101000,
        .relatedSubQuest = SUB_QUEST_2,
        .relatedQuest = QUEST_THEBOYWHOCRIESWITHWOLVES,
    },

    [GOAL_SOCIAL_HOUSING] =
    {
        .title = COMPOUND_STRING("Social Housing"),
        .desc = COMPOUND_STRING("Building and getting people into community-based housing and getting people off the streets."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/thumbnail_social_housing.4bpp"),
        .image = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/full_social_housing.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_thumbnail_social_housing.gbapal"),
        .fullPalette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_full_social_housing.gbapal"),
        .goal = 267000,
        .relatedSubQuest = SUB_QUEST_3,
        .relatedQuest = QUEST_NEIGHBORHOODCLEANUP3,
    },

    [GOAL_CRIMINAL_REFORM] =
    {
        .title = COMPOUND_STRING("Criminal Reform"),
        .desc = COMPOUND_STRING("Develop programs to help victims and perpetrators of harm reach real healing and justice."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/thumbnail_criminal_reform.4bpp"),
        .image = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/full_criminal_reform.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_thumbnail_criminal_reform.gbapal"),
        .fullPalette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_full_criminal_reform.gbapal"),
        .goal = 131000,
        .relatedSubQuest = SUB_QUEST_4,
        .relatedQuest = QUEST_FINDTHEGUILTY,
    },

    [GOAL_LEGAL_DEFENSE] =
    {
        .title = COMPOUND_STRING("Legal Defense"),
        .desc = COMPOUND_STRING("Getting people without the means or funds access to the legal system."),
        .thumbnail = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/thumbnail_legal_defense.4bpp"),
        .image = (const u32[]) INCBIN_U32("graphics/ui_menus/waves/assets/full_legal_defense.4bpp"),
        .palette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_thumbnail_legal_defense.gbapal"),
        .fullPalette = (const u16[]) INCBIN_U16("graphics/ui_menus/waves/palettes/pal_full_legal_defense.gbapal"),
        .goal = 135000,
        .relatedSubQuest = SUB_QUEST_5,
        .relatedQuest = QUEST_BUILDINGSCOPE,
    },
};

