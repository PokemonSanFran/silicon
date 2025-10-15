#include "global.h"
#include "bg.h"
#include "window.h"
#include "waves.h"
#include "constants/quests.h"
#include "constants/waves.h"

static struct WavesData sWavesInformation[GOAL_COUNT] =
{
    [GOAL_NONE] =
    {
        .title = COMPOUND_STRING("???"),
        .desc = COMPOUND_STRING("???"),
        .thumbnail = 0,
        .palette = 0,
        .goal = 100,
        .relatedSubQuest = SUB_QUEST_6,
        .relatedQuest = QUEST_NONE,
    },
    [GOAL_FOOD_SECURITY] =
    {
        .title = COMPOUND_STRING("Food Security"),
        .desc = COMPOUND_STRING("Use the mutual aid fund to scale up and be less reliant on Needles, and use that to feed more people."),
        .thumbnail = 0,
        .palette = 0,
        .goal = 400810,
        .relatedSubQuest = SUB_QUEST_1,
        .relatedQuest = QUEST_RESTAURANTEXPANSION2,
    },

    [GOAL_HEALTHCARE] =
    {
        .title = COMPOUND_STRING("Healthcare"),
        .desc = COMPOUND_STRING("Use the mutual aid fund to get a doctor working full time to provide healthcare to those who can't otherwise access it."),
        .thumbnail = 0,
        .palette = 0,
        .goal = 64151,
        .relatedSubQuest = SUB_QUEST_2,
        .relatedQuest = QUEST_THEBOYWHOCRIESWITHWOLVES,
    },

    [GOAL_SOCIAL_HOUSING] =
    {
        .title = COMPOUND_STRING("Social Housing"),
        .desc = COMPOUND_STRING("Building and getting people into community-based housing and getting people off the streets."),
        .thumbnail = 0,
        .palette = 0,
        .goal = 382525,
        .relatedSubQuest = SUB_QUEST_3,
        .relatedQuest = QUEST_NEIGHBORHOODCLEANUP3,
    },

    [GOAL_CRIMINAL_REFORM] =
    {
        .title = COMPOUND_STRING("Criminal Reform"),
        .desc = COMPOUND_STRING("Build programs to help harm victims and those who cause harm reach a place of real healing and justice."),
        .thumbnail = 0,
        .palette = 0,
        .goal = 122161,
        .relatedSubQuest = SUB_QUEST_4,
        .relatedQuest = QUEST_FINDTHEGUILTY,
    },

    [GOAL_LEGAL_DEFENSE] =
    {
        .title = COMPOUND_STRING("Legal Defense"),
        .desc = COMPOUND_STRING("Getting people without the means or funds access to the legal system."),
        .thumbnail = 0,
        .palette = 0,
        .goal = 30351,
        .relatedSubQuest = SUB_QUEST_5,
        .relatedQuest = QUEST_BUILDINGSCOPE,
    },
};

static const struct BgTemplate sWavesBgTemplates[BG_WAVES_COUNT] =
{
    [BG0_WAVES_BACKGROUND] =
    {
        .bg = BG0_WAVES_BACKGROUND,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    [BG1_WAVES_TEXT] =
    {
        .bg = BG1_WAVES_TEXT,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .priority = 0,
    },
};

static const struct WindowTemplate sWavesGridWindows[] =
{
    [WIN_WAVES_CARD_HEADER] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1,
    },
    [WIN_WAVES_CARD_1] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2),
    },
    [WIN_WAVES_CARD_2] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7),
    },
    [WIN_WAVES_CARD_3] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_CARD_4] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_CARD_5] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_CARD_6] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 8,
        .height = 7,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    [WIN_WAVES_GOAL_FOOTER] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7) + (8 * 7),
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sWavesGoalWindows[] =
{
    [WIN_WAVES_GOAL_HEADER] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1,
    },
    [WIN_WAVES_GOAL_TITLE] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 1,
        .tilemapTop = 3,
        .width = 12,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2),
    },
    [WIN_WAVES_GOAL_DESC] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = 30,
        .height = 5,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2),
    },
    [WIN_WAVES_GOAL_PLAYER] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 15,
        .tilemapTop = 5,
        .width = 13,
        .height = 1,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5),
    },
    [WIN_WAVES_GOAL_PASSIVE] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 15,
        .tilemapTop = 7,
        .width = 13,
        .height = 1,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1),
    },
    [WIN_WAVES_GOAL_TOTAL] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 15,
        .tilemapTop = 7,
        .width = 13,
        .height = 1,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1),
    },
    [WIN_WAVES_GOAL_RAISED] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 14,
        .tilemapTop = 3,
        .width = 15,
        .height = 10,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1) + (15 * 7),
    },
    [WIN_WAVES_GOAL_FOOTER] =
    {
        .bg = BG1_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_INTERFACE_ID,
        .baseBlock = 1 + (30 * 2) + (12 * 2) + (30 * 5) + (13 * 1) + (13 * 1) + (15 * 7) + (15 * 10)
    },
    DUMMY_WIN_TEMPLATE
};

