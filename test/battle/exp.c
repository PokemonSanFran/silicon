#include "global.h"
#include "test/battle.h"

#if B_EXP_CATCH >= GEN_6

WILD_BATTLE_TEST("Pokemon gain exp after catching a Pokemon")
{
    u8 level = 0;

    PARAMETRIZE { level = 50; }
    PARAMETRIZE { level = MAX_LEVEL; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Level(level); }
        OPPONENT(SPECIES_CATERPIE) { HP(1); }
    } WHEN {
        TURN { USE_ITEM(player, ITEM_ULTRA_BALL); }
    } SCENE {
        MESSAGE("You used Ultra Ball!");
        ANIMATION(ANIM_TYPE_SPECIAL, B_ANIM_BALL_THROW, player);
        if (level != MAX_LEVEL) {
            EXPERIENCE_BAR(player);
        }
    }
}

#endif // B_EXP_CATCH

WILD_BATTLE_TEST("Higher leveled Pokemon give more exp", s32 exp)
{
    u8 level = 0;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP; // Battle Settings: Level
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1; // Battle Settings: Level

    PARAMETRIZE { level = 5; }
    PARAMETRIZE { level = 10; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Level(20); }
        OPPONENT(SPECIES_CATERPIE) { Level(level); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Caterpie fainted!");
        EXPERIENCE_BAR(player, captureGainedExp: &results[i].exp);
    } FINALLY {
        EXPECT_GT(results[1].exp, results[0].exp);
    }
}

WILD_BATTLE_TEST("Lucky Egg boosts gained exp points by 50%", s32 exp)
{
    u32 item = 0;

    PARAMETRIZE { item = ITEM_LUCKY_EGG; }
    PARAMETRIZE { item = ITEM_NONE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Level(20); Item(item); }
        OPPONENT(SPECIES_CATERPIE) { Level(10); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Caterpie fainted!");
        EXPERIENCE_BAR(player, captureGainedExp: &results[i].exp);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].exp, Q_4_12(1.5), results[0].exp);
    }
}

#if (B_SCALED_EXP == GEN_5 || B_SCALED_EXP >= GEN_7)

WILD_BATTLE_TEST("Exp is scaled to player and opponent's levels", s32 exp)
{
    u8 level = 0;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP; // Battle Settings: Level
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1; // Battle Settings: Level

    PARAMETRIZE { level = 5; }
    PARAMETRIZE { level = 10; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Level(level); }
        OPPONENT(SPECIES_CATERPIE) { Level(5); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Caterpie fainted!");
        EXPERIENCE_BAR(player, captureGainedExp: &results[i].exp);
    } FINALLY {
        EXPECT_GT(results[0].exp, results[1].exp);
    }
}

#endif

WILD_BATTLE_TEST("Large exp gains are supported", s32 exp) // #1455
{
    u8 level = 0;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP; // Battle Settings: Level
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1; // Battle Settings: Experience

    PARAMETRIZE { level = 10; }
    PARAMETRIZE { level = 50; }
    PARAMETRIZE { level = MAX_LEVEL; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Level(1); Item(ITEM_LUCKY_EGG); OTName("Test"); } // OT Name is different so it gets more exp as a traded mon
        OPPONENT(SPECIES_BLISSEY) { Level(level); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Blissey fainted!");
        EXPERIENCE_BAR(player, captureGainedExp: &results[i].exp);
    } THEN {
        EXPECT(GetMonData(&gPlayerParty[0], MON_DATA_LEVEL) > 1);
        EXPECT(GetMonData(&gPlayerParty[0], MON_DATA_EXP) > 1);
    } FINALLY {
        EXPECT_GT(results[1].exp, results[0].exp);
        EXPECT_GT(results[2].exp, results[1].exp);
    }
}

#if I_EXP_SHARE_ITEM < GEN_6

WILD_BATTLE_TEST("Exp Share(held) gives Experience to mons which did not participate in battle")
{
    u32 item = 0;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP; // Battle Settings: Level
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1; // Battle Settings: Exp Multiplier
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_PARTY; // Battle Settings: Experience

    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_EXP_SHARE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT) { Level(40); Item(item); }
        OPPONENT(SPECIES_CATERPIE) { Level(10); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Caterpie fainted!");
        // This message should appear only for gen6> exp share.
        NOT MESSAGE("The rest of your team gained EXP. Points thanks to the Exp. Share!");
    } THEN {
        if (item == ITEM_EXP_SHARE)
            EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_EXP), gExperienceTables[gSpeciesInfo[SPECIES_WYNAUT].growthRate][40]);
        else
            EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_EXP), gExperienceTables[gSpeciesInfo[SPECIES_WYNAUT].growthRate][40]); // Battle Settings: Experience
            //EXPECT_EQ(GetMonData(&gPlayerParty[1], MON_DATA_EXP), gExperienceTables[gSpeciesInfo[SPECIES_WYNAUT].growthRate][40]); // Battle Settings: Experience
    }
}

#endif // I_EXP_SHARE_ITEM

WILD_BATTLE_TEST("Points Messages: Gains Exp")
{
    u32 bigEV = 0, item = 0, option = 0;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP; // Battle Settings: Level
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1; // Battle Settings: Exp Multiplier
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_PARTY; // Battle Settings: Experience

    for (u32 j = 0; j < BATTLE_OPTION_POINTS_MESSAGE_COUNT; j++)
    {
        PARAMETRIZE { bigEV = MAX_PER_STAT_EVS; item = ITEM_NONE; option = j;}
        PARAMETRIZE { bigEV = 25; item = ITEM_POWER_WEIGHT; option = j;}
        PARAMETRIZE { bigEV = 25; item = ITEM_NONE; option = j;}
    }
    GIVEN {
        gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_POINTS_MESSAGES] = option;
        PLAYER(SPECIES_WOBBUFFET) { Level(99); HPEV(bigEV); AttackEV(bigEV); DefenseEV(6); Item(item); }
        OPPONENT(SPECIES_CATERPIE) { Level(10); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Caterpie fainted!");

        if (option == BATTLE_OPTION_POINTS_MESSAGES_ON)
        {
            if (bigEV == MAX_PER_STAT_EVS)
                MESSAGE("Wobbuffet gained 3 Exp. Points!");
            else if (item == ITEM_POWER_WEIGHT)
                MESSAGE("Wobbuffet gained 3 Exp. Points and 9 Effort Values!");
            else
                MESSAGE("Wobbuffet gained 3 Exp. Points and 1 Effort Value!");
            MESSAGE("The Pokémon in your party gained experience and effort values!");
        }
        else
        {
            NONE_OF{
                MESSAGE("Wobbuffet gained 3 Exp. Points!");
                MESSAGE("Wobbuffet gained 3 Exp. Points and 9 Effort Values!");
                MESSAGE("Wobbuffet gained 3 Exp. Points and 1 Effort Value!");
                MESSAGE("The Pokémon in your party gained experience and effort values!");
             }
        }
    } THEN {
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_EXP), gExperienceTables[gSpeciesInfo[SPECIES_WOBBUFFET].growthRate][99]);

        if (bigEV == MAX_PER_STAT_EVS)
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV);
        else if (item == ITEM_POWER_WEIGHT)
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV + (gSpeciesInfo[SPECIES_CATERPIE].evYield_HP) + 8);
        else
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV + (gSpeciesInfo[SPECIES_CATERPIE].evYield_HP));
    }

}

WILD_BATTLE_TEST("Points Messages: Gains Boosted Exp")
{
    u32 bigEV = 0, item = 0, option = 0;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP; // Battle Settings: Level
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1; // Battle Settings: Exp Multiplier
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_PARTY; // Battle Settings: Experience

    for (u32 j = 0; j < BATTLE_OPTION_POINTS_MESSAGE_COUNT; j++)
    {
        PARAMETRIZE { bigEV = MAX_PER_STAT_EVS; item = ITEM_NONE; option = j;}
        PARAMETRIZE { bigEV = 25; item = ITEM_POWER_WEIGHT; option = j;}
        PARAMETRIZE { bigEV = 25; item = ITEM_NONE; option = j;}
    }

    GIVEN {
        gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_POINTS_MESSAGES] = option;
        PLAYER(SPECIES_WOBBUFFET) { Level(99); HPEV(bigEV); AttackEV(bigEV); DefenseEV(6); OTName("Test"); Item(item); }
        OPPONENT(SPECIES_CATERPIE) { Level(10); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Caterpie fainted!");

        if (option == BATTLE_OPTION_POINTS_MESSAGES_ON)
        {
            if (bigEV == MAX_PER_STAT_EVS)
                MESSAGE("Wobbuffet gained a boosted 4 Exp. Points!");
            else if (item == ITEM_POWER_WEIGHT)
                MESSAGE("Wobbuffet gained a boosted 4 Exp. Points and 9 Effort Values!");
            else
                MESSAGE("Wobbuffet gained a boosted 4 Exp. Points and 1 Effort Value!");
            MESSAGE("The Pokémon in your party gained experience and effort values!");
        }
        else
        {
            NONE_OF{
                MESSAGE("Wobbuffet gained a boosted 4 Exp. Points!");
                MESSAGE("Wobbuffet gained a boosted 4 Exp. Points and 9 Effort Values!");
                MESSAGE("Wobbuffet gained a boosted 4 Exp. Points and 1 Effort Value!");
                MESSAGE("The Pokémon in your party gained experience and effort values!");
             }
        }
    } THEN {
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_EXP), gExperienceTables[gSpeciesInfo[SPECIES_WOBBUFFET].growthRate][99]);

        if (bigEV == MAX_PER_STAT_EVS)
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV);
        else if (item == ITEM_POWER_WEIGHT)
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV + (gSpeciesInfo[SPECIES_CATERPIE].evYield_HP) + 8);
        else
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV + (gSpeciesInfo[SPECIES_CATERPIE].evYield_HP));
    }

}

WILD_BATTLE_TEST("Points Messages: Gains EVs")
{
    u32 bigEV = 0, item = 0, option = 0;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP; // Battle Settings: Level
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1; // Battle Settings: Exp Multiplier
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_PARTY; // Battle Settings: Experience

    for (u32 j = 0; j < BATTLE_OPTION_POINTS_MESSAGE_COUNT; j++)
    {
        PARAMETRIZE { bigEV = MAX_PER_STAT_EVS; item = ITEM_NONE; option = j;}
        PARAMETRIZE { bigEV = 25; item = ITEM_POWER_WEIGHT; option = j;}
        PARAMETRIZE { bigEV = 25; item = ITEM_NONE; option = j;}
    }

    GIVEN {
        gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_POINTS_MESSAGES] = option;
        PLAYER(SPECIES_WOBBUFFET) { Level(100); HPEV(bigEV); AttackEV(bigEV); DefenseEV(6); Item(item); }
        OPPONENT(SPECIES_CATERPIE) { Level(10); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("The wild Caterpie fainted!");

        if (option == BATTLE_OPTION_POINTS_MESSAGES_ON)
        {
            if (item == ITEM_POWER_WEIGHT)
                MESSAGE("Wobbuffet gained 9 Effort Values!");
            else if (bigEV != MAX_PER_STAT_EVS)
                MESSAGE("Wobbuffet gained 1 Effort Value!");
            MESSAGE("The Pokémon in your party gained experience and effort values!");
        }
        else
        {
            NONE_OF{
                MESSAGE("Wobbuffet gained 9 Effort Values!");
                MESSAGE("Wobbuffet gained 1 Effort Value!");
                MESSAGE("The Pokémon in your party gained experience and effort values!");
             }
        }
    } THEN {
        if (bigEV == MAX_PER_STAT_EVS)
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV);
        else if (item == ITEM_POWER_WEIGHT)
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV + (gSpeciesInfo[SPECIES_CATERPIE].evYield_HP) + 8);
        else
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP_EV), bigEV + (gSpeciesInfo[SPECIES_CATERPIE].evYield_HP));
    }

}
