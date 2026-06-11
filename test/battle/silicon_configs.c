#include "global.h"
#include "test/battle.h"
#include "palette.h"
#include "load_save.h"
#include "event_data.h"

#define MON_TO_USE SPECIES_TSAREENA

DOUBLE_BATTLE_TEST("OPTIONS (VISUAL): Pokémon Variation, None")
{
    gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_OFF;
    GIVEN {
        PLAYER(MON_TO_USE) { Shiny(FALSE); }
        PLAYER(MON_TO_USE) { Shiny(TRUE); }
        OPPONENT(MON_TO_USE) { Shiny(FALSE); HPIV(5); AttackIV(10); DefenseIV(15); SpAttackIV(20); SpDefenseIV(25); SpeedIV(30); Personality(1234); Nickname(COMPOUND_STRING("oppLeft")); }
        OPPONENT(MON_TO_USE) { Shiny(TRUE); HPIV(5); AttackIV(10); DefenseIV(15); SpAttackIV(20); SpDefenseIV(25); SpeedIV(30); Personality(1234); Nickname(COMPOUND_STRING("oppRight")); }
    } WHEN {
        TURN { }
    } THEN {
        for (u32 i = 1; i < 16; i++)
        {
            u16 colourPlayerLeft = gPlttBufferUnfaded[16 * 16 + 16 * 0 + i];
            u16 colourPlayerRight = gPlttBufferUnfaded[16 * 16 + 16 * 2 + i];
            u16 colourOpponentLeft = gPlttBufferUnfaded[16 * 16 + 16 * 1 + i];
            u16 colourOpponentRight = gPlttBufferUnfaded[16 * 16 + 16 * 3 + i];
            u16 normalColour = gSpeciesInfo[MON_TO_USE].palette[i];
            u16 shinyColour = gSpeciesInfo[MON_TO_USE].shinyPalette[i];

            EXPECT_EQ(colourPlayerLeft, colourOpponentLeft);
            EXPECT_EQ(colourPlayerRight, colourOpponentRight);
            EXPECT_EQ(colourPlayerLeft, normalColour);
            EXPECT_EQ(colourPlayerRight, shinyColour);
        }
    }
}

DOUBLE_BATTLE_TEST("OPTIONS (VISUAL): Pokémon Variation, IVs")
{
    gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_INDIVIDUAL_VALUES;
    GIVEN {
        PLAYER(MON_TO_USE) { Shiny(FALSE); }
        PLAYER(MON_TO_USE) { Shiny(TRUE); }
        OPPONENT(MON_TO_USE) { Shiny(FALSE); HPIV(5); AttackIV(10); DefenseIV(15); SpAttackIV(20); SpDefenseIV(25); SpeedIV(30); Personality(1234); }
        OPPONENT(MON_TO_USE) { Shiny(TRUE); HPIV(5); AttackIV(10); DefenseIV(15); SpAttackIV(20); SpDefenseIV(25); SpeedIV(30); Personality(1234); }
    } WHEN {
        TURN { }
    } THEN {
        bool32 normalEqual = TRUE;
        bool32 shinyEqual = TRUE;
        bool32 normalBaseEqual = TRUE;
        bool32 shinyBaseEqual = TRUE;
        for (u32 i = 1; i < 16; i++)
        {
            u16 colourPlayerLeft = gPlttBufferUnfaded[16 * 16 + 16 * 0 + i];
            u16 colourPlayerRight = gPlttBufferUnfaded[16 * 16 + 16 * 2 + i];
            u16 colourOpponentLeft = gPlttBufferUnfaded[16 * 16 + 16 * 1 + i];
            u16 colourOpponentRight = gPlttBufferUnfaded[16 * 16 + 16 * 3 + i];
            u16 normalColour = gSpeciesInfo[MON_TO_USE].palette[i];
            u16 shinyColour = gSpeciesInfo[MON_TO_USE].shinyPalette[i];

            if (colourPlayerLeft != colourOpponentLeft)
                normalEqual = FALSE;
            if (colourPlayerRight != colourOpponentRight)
                shinyEqual = FALSE;
            if (colourOpponentLeft != normalColour)
                normalBaseEqual = FALSE;
            if (colourOpponentRight != shinyColour)
                shinyBaseEqual = FALSE;
        }
        EXPECT_EQ(normalEqual, FALSE);
        EXPECT_EQ(shinyEqual, FALSE);
        EXPECT_EQ(normalBaseEqual, FALSE);
        EXPECT_EQ(shinyBaseEqual, FALSE);
    }
}

DOUBLE_BATTLE_TEST("OPTIONS (VISUAL): Pokémon Variation, Nickname")
{
    gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_NICKNAME;
    GIVEN {
        PLAYER(MON_TO_USE) { Shiny(FALSE); }
        PLAYER(MON_TO_USE) { Shiny(TRUE); }
        OPPONENT(MON_TO_USE) { Shiny(FALSE); Nickname(COMPOUND_STRING("oppLeft")); }
        OPPONENT(MON_TO_USE) { Shiny(TRUE); Nickname(COMPOUND_STRING("oppRight")); }
    } WHEN {
        TURN { }
    } THEN {
        bool32 normalEqual = TRUE;
        bool32 shinyEqual = TRUE;
        bool32 normalBaseEqual = TRUE;
        bool32 shinyBaseEqual = TRUE;
        for (u32 i = 1; i < 16; i++)
        {
            u16 colourPlayerLeft = gPlttBufferUnfaded[16 * 16 + 16 * 0 + i];
            u16 colourPlayerRight = gPlttBufferUnfaded[16 * 16 + 16 * 2 + i];
            u16 colourOpponentLeft = gPlttBufferUnfaded[16 * 16 + 16 * 1 + i];
            u16 colourOpponentRight = gPlttBufferUnfaded[16 * 16 + 16 * 3 + i];
            u16 normalColour = gSpeciesInfo[MON_TO_USE].palette[i];
            u16 shinyColour = gSpeciesInfo[MON_TO_USE].shinyPalette[i];

            if (colourPlayerLeft != colourOpponentLeft)
                normalEqual = FALSE;
            if (colourPlayerRight != colourOpponentRight)
                shinyEqual = FALSE;
            if (colourOpponentLeft != normalColour)
                normalBaseEqual = FALSE;
            if (colourOpponentRight != shinyColour)
                shinyBaseEqual = FALSE;
        }
        EXPECT_EQ(normalEqual, FALSE);
        EXPECT_EQ(shinyEqual, FALSE);
        EXPECT_EQ(normalBaseEqual, FALSE);
        EXPECT_EQ(shinyBaseEqual, FALSE);
    }
}

DOUBLE_BATTLE_TEST("OPTIONS (VISUAL): Pokémon Variation, Personality")
{
    gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR_VARIATION] = VISUAL_OPTION_COLOR_VARIATION_PERSONALITY;
    GIVEN {
        PLAYER(MON_TO_USE) { Shiny(FALSE); }
        PLAYER(MON_TO_USE) { Shiny(TRUE); }
        OPPONENT(MON_TO_USE) { Shiny(FALSE); Personality(0x12345678); }
        OPPONENT(MON_TO_USE) { Shiny(TRUE); Personality(0x12345678); }
    } WHEN {
        TURN { }
    } THEN {
        bool32 normalEqual = TRUE;
        bool32 shinyEqual = TRUE;
        bool32 normalBaseEqual = TRUE;
        bool32 shinyBaseEqual = TRUE;
        for (u32 i = 1; i < 16; i++)
        {
            u16 colourPlayerLeft = gPlttBufferUnfaded[16 * 16 + 16 * 0 + i];
            u16 colourPlayerRight = gPlttBufferUnfaded[16 * 16 + 16 * 2 + i];
            u16 colourOpponentLeft = gPlttBufferUnfaded[16 * 16 + 16 * 1 + i];
            u16 colourOpponentRight = gPlttBufferUnfaded[16 * 16 + 16 * 3 + i];
            u16 normalColour = gSpeciesInfo[MON_TO_USE].palette[i];
            u16 shinyColour = gSpeciesInfo[MON_TO_USE].shinyPalette[i];

            if (colourPlayerLeft != colourOpponentLeft)
                normalEqual = FALSE;
            if (colourPlayerRight != colourOpponentRight)
                shinyEqual = FALSE;
            if (colourOpponentLeft != normalColour)
                normalBaseEqual = FALSE;
            if (colourOpponentRight != shinyColour)
                shinyBaseEqual = FALSE;
        }
        EXPECT_EQ(normalEqual, FALSE);
        EXPECT_EQ(shinyEqual, FALSE);
        EXPECT_EQ(normalBaseEqual, FALSE);
        EXPECT_EQ(shinyBaseEqual, FALSE);
    }
}

#undef MON_TO_USE

WILD_BATTLE_TEST("OPTIONS (BATTLE): Take Wild Items, Never")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_TAKE_WILD_ITEMS] = BATTLE_OPTION_TAKE_WILD_ITEMS_NEVER;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_MASTER_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_EQ(CountTotalItemQuantityInBag(ITEM_MASTER_BALL), 0);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Take Wild Items, Ask (Yes)")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_TAKE_WILD_ITEMS] = BATTLE_OPTION_TAKE_WILD_ITEMS_ASK;
    GIVEN {
        gSiliconTestVariables.autoPressYes = TRUE;
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_MASTER_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_EQ(CountTotalItemQuantityInBag(ITEM_MASTER_BALL), 1);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Take Wild Items, Ask (No)")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_TAKE_WILD_ITEMS] = BATTLE_OPTION_TAKE_WILD_ITEMS_ASK;
    GIVEN {
        gSiliconTestVariables.autoPressNo = TRUE;
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_MASTER_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_EQ(CountTotalItemQuantityInBag(ITEM_MASTER_BALL), 0);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Take Wild Items, Always")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_TAKE_WILD_ITEMS] = BATTLE_OPTION_TAKE_WILD_ITEMS_ALWAYS;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_MASTER_BALL); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } SCENE {
        MESSAGE("Obtained Master Ball!");
    } THEN {
        EXPECT_EQ(CountTotalItemQuantityInBag(ITEM_MASTER_BALL), 1);
    }
}

#define LEVEL_TO_USE 10

static void AddMonToBox(void)
{
    struct BoxPokemon boxMon;
    u16 species = SPECIES_TESTING_ERRATIC;
    u8 speciesName[POKEMON_NAME_LENGTH + 1];
    CreateBoxMon(&boxMon, species, LEVEL_TO_USE, Random32(), OTID_STRUCT_PLAYER_ID);

    SetBoxMonData(&boxMon, MON_DATA_NICKNAME, &speciesName);
    SetBoxMonData(&boxMon, MON_DATA_SPECIES, &species);
    GiveBoxMonInitialMoveset(&boxMon);
    gPokemonStoragePtr->boxes[0][0] = boxMon;
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Experience, All")
{
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_ALL;
    GIVEN {
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(1); }
        AddMonToBox();
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_GT(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Experience, Party")
{
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_PARTY;
    GIVEN {
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(1); }
        AddMonToBox();
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_SPATK_EV), 0);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Experience, Active (no switch)")
{
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_ACTIVE;
    GIVEN {
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(1); }
        AddMonToBox();
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_SPATK_EV), 0);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_SPATK_EV), 0);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Experience, Active (switching)")
{
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXPERIENCE] = BATTLE_OPTION_EXPERIENCE_ACTIVE;
    GIVEN {
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(1); }
        AddMonToBox();
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_SPATK_EV), 0);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Points Message, On")
{
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_POINTS_MESSAGES] = BATTLE_OPTION_POINTS_MESSAGES_ON;
    GIVEN {
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUILLOTINE, player);
        MESSAGE("Erratic gained 2 Exp. Points and 1 Effort Value!");
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Points Message, Off")
{
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_POINTS_MESSAGES] = BATTLE_OPTION_POINTS_MESSAGES_OFF;
    GIVEN {
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUILLOTINE, player);
        NOT MESSAGE("Erratic gained 2 Exp. Points and 1 Effort Value!");
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Exp Multiplier, 0x")
{
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_0;

    GIVEN {
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(LEVEL_TO_USE); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUILLOTINE, player);
    } THEN {
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Exp Multiplier, Non-zero", u32 exp)
{
    enum optionBattleExpMultiplerValues multiplier;
    //  Necessry for exp to work
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;

    PARAMETRIZE { multiplier = BATTLE_OPTION_MULTIPLIER_1; }
    PARAMETRIZE { multiplier = BATTLE_OPTION_MULTIPLIER_2; }


    GIVEN {
        gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = multiplier;
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_TO_USE); }
        OPPONENT(SPECIES_SUNKERN) { Level(LEVEL_TO_USE); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUILLOTINE, player);
    } THEN {
        results[i].exp = GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP);
    } FINALLY {
        u32 baseExp = gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE];
        u32 mult1Exp = results[0].exp - baseExp;
        u32 mult2Exp = results[1].exp - baseExp;
        EXPECT_MUL_EQ(mult1Exp, Q_4_12(2.0), mult2Exp);
    }
}

#undef LEVEL_TO_USE

SINGLE_BATTLE_TEST("OPTIONS (BATTLE): Effort Values, Enabled")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EFFORT_VALUES] = BATTLE_OPTION_EFFORT_VALUES_ENABLED;

    GIVEN {
        gSiliconTestVariables.overrideEVs = TRUE;
        PLAYER(SPECIES_MEW) { HPEV(252); AttackEV(252); DefenseEV(252); SpAttackEV(252); SpDefenseEV(252); SpeedEV(252); }
        OPPONENT(SPECIES_MEW) { HPEV(0); AttackEV(0); DefenseEV(0); SpAttackEV(0); SpDefenseEV(0); SpeedEV(0); }
    } WHEN {
        TURN { }
    } THEN {
        EXPECT_GT(player->hp, opponent->hp);
        EXPECT_GT(player->attack, opponent->attack);
        EXPECT_GT(player->defense, opponent->defense);
        EXPECT_GT(player->spAttack, opponent->spAttack);
        EXPECT_GT(player->spDefense, opponent->spDefense);
        //  EXPECT_EQ(player->speed, opponent->speed); //   Speed is not set in the normal way in tests
    }
}

SINGLE_BATTLE_TEST("OPTIONS (BATTLE): Effort Values, Disabled")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EFFORT_VALUES] = BATTLE_OPTION_EFFORT_VALUES_DISABLED;

    GIVEN {
        gSiliconTestVariables.overrideEVs = TRUE;
        PLAYER(SPECIES_MEW) { HPEV(252); AttackEV(252); DefenseEV(252); SpAttackEV(252); SpDefenseEV(252); SpeedEV(252); }
        OPPONENT(SPECIES_MEW) { HPEV(0); AttackEV(0); DefenseEV(0); SpAttackEV(0); SpDefenseEV(0); SpeedEV(0); }
    } WHEN {
        TURN { }
    } THEN {
        EXPECT_EQ(player->hp, opponent->hp);
        EXPECT_EQ(player->attack, opponent->attack);
        EXPECT_EQ(player->defense, opponent->defense);
        EXPECT_EQ(player->spAttack, opponent->spAttack);
        EXPECT_EQ(player->spDefense, opponent->spDefense);
        //  EXPECT_EQ(player->speed, opponent->speed); //   Speed is not set in the normal way in tests
    }
}

SINGLE_BATTLE_TEST("OPTIONS (BATTLE): Individual Values, Enabled")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_INDIVIDUAL_VALUES] = BATTLE_OPTION_INDIVIDUAL_VALUES_ENABLED;

    GIVEN {
        gSiliconTestVariables.overrideIVs = TRUE;
        PLAYER(SPECIES_MEW) { HPIV(15); AttackIV(15); DefenseIV(15); SpAttackIV(15); SpDefenseIV(15); SpeedIV(15); }
        OPPONENT(SPECIES_MEW) { HPIV(0); AttackIV(0); DefenseIV(0); SpAttackIV(0); SpDefenseIV(0); SpeedIV(0); }
    } WHEN {
        TURN { }
    } THEN {
        EXPECT_GT(player->hp, opponent->hp);
        EXPECT_GT(player->attack, opponent->attack);
        EXPECT_GT(player->defense, opponent->defense);
        EXPECT_GT(player->spAttack, opponent->spAttack);
        EXPECT_GT(player->spDefense, opponent->spDefense);
        //  EXPECT_EQ(player->speed, opponent->speed); //   Speed is not set in the normal way in tests
    }
}

SINGLE_BATTLE_TEST("OPTIONS (BATTLE): Individual Values, Disabled")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_INDIVIDUAL_VALUES] = BATTLE_OPTION_INDIVIDUAL_VALUES_DISABLED;

    GIVEN {
        gSiliconTestVariables.overrideIVs = TRUE;
        PLAYER(SPECIES_MEW) { HPIV(15); AttackIV(15); DefenseIV(15); SpAttackIV(15); SpDefenseIV(15); SpeedIV(15); }
        OPPONENT(SPECIES_MEW) { HPIV(0); AttackIV(0); DefenseIV(0); SpAttackIV(0); SpDefenseIV(0); SpeedIV(0); }
    } WHEN {
        TURN { }
    } THEN {
        EXPECT_EQ(player->hp, opponent->hp);
        EXPECT_EQ(player->attack, opponent->attack);
        EXPECT_EQ(player->defense, opponent->defense);
        EXPECT_EQ(player->spAttack, opponent->spAttack);
        EXPECT_EQ(player->spDefense, opponent->spDefense);
        //  EXPECT_EQ(player->speed, opponent->speed); //   Speed is not set in the normal way in tests
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Player level caps, Enabled (under cap)")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_CAP;
    u16 *var;
    GIVEN {
        var = GetVarPointer(B_LEVEL_CAP_VARIABLE);
        *var = 0;
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_CAP_VALUE_0 - 1); }
        OPPONENT(SPECIES_SUNKERN) { Level(LEVEL_CAP_VALUE_0 - 1); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_CAP_VALUE_0 - 1]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Player level caps, Enabled (at cap)")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_CAP;
    u16 *var;
    GIVEN {
        var = GetVarPointer(B_LEVEL_CAP_VARIABLE);
        *var = 0;
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_CAP_VALUE_0); }
        OPPONENT(SPECIES_SUNKERN) { Level(LEVEL_CAP_VALUE_0 - 1); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_CAP_VALUE_0]);
    }
}

WILD_BATTLE_TEST("OPTIONS (BATTLE): Player level caps, Disabled")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    u16 *var;
    GIVEN {
        var = GetVarPointer(B_LEVEL_CAP_VARIABLE);
        *var = 0;
        PLAYER(SPECIES_TESTING_ERRATIC) { Level(LEVEL_CAP_VALUE_0); }
        OPPONENT(SPECIES_SUNKERN) { Level(LEVEL_CAP_VALUE_0 - 1); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } THEN {
        EXPECT_GT(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_CAP_VALUE_0]);
    }
}

AI_SINGLE_BATTLE_TEST("OPTIONS (BATTLE): Switch Style (SHIFT)")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_SWITCH_STYLE] = OPTIONS_BATTLE_STYLE_SHIFT;

    GIVEN {
        gSiliconTestVariables.overrideSwitchMode = TRUE;
        //  Not testing actually switching pokemon right now
        //  since that seems to not be possible
        gSiliconTestVariables.autoPressNo = TRUE;
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE(AI_TRAINER_NAME " is about to send out Wobbuffet. Will you switch your Pokémon?");
    }
}

AI_SINGLE_BATTLE_TEST("OPTIONS (BATTLE): Switch Style (SET)")
{
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_SWITCH_STYLE] = OPTIONS_BATTLE_STYLE_SET;

    GIVEN {
        gSiliconTestVariables.overrideSwitchMode = TRUE;
        gSiliconTestVariables.autoPressNo = TRUE;
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_GUILLOTINE); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        NOT MESSAGE(AI_TRAINER_NAME " is about to send out Wobbuffet. Will you switch your Pokémon?");
    }
}

/*
AI_SINGLE_BATTLE_TEST("OPTIONS (BATTLE): Mid Battle Evo (ON)")
{
    //  Necessary for being able to get exp
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_PLAYER_LEVEL] = BATTLE_OPTION_LEVEL_NO_CAP;
    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_EXP_MULTIPLIER] = BATTLE_OPTION_MULTIPLIER_1;

    gSaveBlock2Ptr->optionsBattle[BATTLE_OPTIONS_MID_BATTLE_EVOLUTION] = BATTLE_OPTION_MID_BATTLE_EVOLUTION_ON;

    GIVEN {
        PLAYER(SPECIES_TESTING_PREEVO) { Level(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_MEMENTO); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { }
        TURN { }
    }
}
*/
