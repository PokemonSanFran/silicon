#include "global.h"
#include "test/battle.h"
#include "palette.h"
#include "load_save.h"

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
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
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
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
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
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_EQ(GetMonData(&gPlayerParty[1], MON_DATA_SPATK_EV), 0);
        EXPECT_EQ(GetMonData(&gPlayerParty[1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
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
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gPlayerParty[0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_SPATK_EV), 0);
        EXPECT_GT(GetMonData(&gPlayerParty[1], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_SPATK_EV), 0);
        EXPECT_EQ(GetBoxMonData(&gPokemonStoragePtr->boxes[0][0], MON_DATA_EXP), gExperienceTables[GROWTH_ERRATIC][LEVEL_TO_USE]);
    }
}

#undef LEVEL_TO_USE
