#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("TryStartingStatuses properly set up on first turn")
{
    enum StartingStatus status = 0; 
    enum Hazards hazard = HAZARDS_NONE;

    PARAMETRIZE { status = STARTING_STATUS_SPIKES_PLAYER_L1; hazard = HAZARDS_SPIKES; }
    PARAMETRIZE { status = STARTING_STATUS_TOXIC_SPIKES_PLAYER_L1; hazard = HAZARDS_TOXIC_SPIKES; }
    PARAMETRIZE { status = STARTING_STATUS_STEALTH_ROCK_PLAYER; hazard = HAZARDS_STEALTH_ROCK; }
    PARAMETRIZE { status = STARTING_STATUS_STICKY_WEB_PLAYER; hazard = HAZARDS_STICKY_WEB; }
    PARAMETRIZE { status = STARTING_STATUS_SHARP_STEEL_PLAYER; hazard = HAZARDS_STEELSURGE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        StartingStatus(status, 0);
    } WHEN {
        TURN { }
    } THEN {
        EXPECT(IsHazardOnSide(B_SIDE_PLAYER, hazard));
    }
}

SINGLE_BATTLE_TEST("TryStartingStatuses properly set up after death")
{
    u32 deadMons = 0;
    enum StartingStatus status = 0; 
    enum Hazards hazard = HAZARDS_NONE;

    for (u32 j = 1; j <= 5; j++)
    {
        PARAMETRIZE { deadMons = j; status = STARTING_STATUS_SPIKES_PLAYER_L1; hazard = HAZARDS_SPIKES; }
        PARAMETRIZE { deadMons = j; status = STARTING_STATUS_TOXIC_SPIKES_PLAYER_L1; hazard = HAZARDS_TOXIC_SPIKES; }
        PARAMETRIZE { deadMons = j; status = STARTING_STATUS_STEALTH_ROCK_PLAYER; hazard = HAZARDS_STEALTH_ROCK; }
        PARAMETRIZE { deadMons = j; status = STARTING_STATUS_STICKY_WEB_PLAYER; hazard = HAZARDS_STICKY_WEB; }
        PARAMETRIZE { deadMons = j; status = STARTING_STATUS_SHARP_STEEL_PLAYER; hazard = HAZARDS_STEELSURGE; }
    }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        StartingStatus(status, deadMons);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 1); }
        TURN { MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 2); }
        TURN { MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 3); }
        TURN { MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 4); }
        TURN { MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 5); }
    } THEN {
        EXPECT(IsHazardOnSide(B_SIDE_PLAYER, hazard));
    }
}

SINGLE_BATTLE_TEST("TryStartingStatuses properly works even if the effect was removed")
{
    enum StartingStatus status = 0; 
    enum Hazards hazard = HAZARDS_NONE;

    PARAMETRIZE { status = STARTING_STATUS_SPIKES_PLAYER_L1; hazard = HAZARDS_SPIKES; }
    PARAMETRIZE { status = STARTING_STATUS_TOXIC_SPIKES_PLAYER_L1; hazard = HAZARDS_TOXIC_SPIKES; }
    PARAMETRIZE { status = STARTING_STATUS_STEALTH_ROCK_PLAYER; hazard = HAZARDS_STEALTH_ROCK; }
    PARAMETRIZE { status = STARTING_STATUS_STICKY_WEB_PLAYER; hazard = HAZARDS_STICKY_WEB; }
    PARAMETRIZE { status = STARTING_STATUS_SHARP_STEEL_PLAYER; hazard = HAZARDS_STEELSURGE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        StartingStatus(status, 0);
        StartingStatus(status, 1);
    } WHEN {
        TURN { MOVE(player, MOVE_RAPID_SPIN); MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 1); }
        TURN { }
    } THEN {
        EXPECT(IsHazardOnSide(B_SIDE_PLAYER, hazard));
    }
}

SINGLE_BATTLE_TEST("StaringStatuses check the 6th index for the last pokemon even if the party is less than 6")
{
    enum StartingStatus status = 0; 
    enum Hazards hazard = HAZARDS_NONE;

    PARAMETRIZE { status = STARTING_STATUS_SPIKES_PLAYER_L1; hazard = HAZARDS_SPIKES; }
    PARAMETRIZE { status = STARTING_STATUS_TOXIC_SPIKES_PLAYER_L1; hazard = HAZARDS_TOXIC_SPIKES; }
    PARAMETRIZE { status = STARTING_STATUS_STEALTH_ROCK_PLAYER; hazard = HAZARDS_STEALTH_ROCK; }
    PARAMETRIZE { status = STARTING_STATUS_STICKY_WEB_PLAYER; hazard = HAZARDS_STICKY_WEB; }
    PARAMETRIZE { status = STARTING_STATUS_SHARP_STEEL_PLAYER; hazard = HAZARDS_STEELSURGE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        StartingStatus(status, 5);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 1); }
        TURN { }
    } THEN {
        EXPECT(IsHazardOnSide(B_SIDE_PLAYER, hazard));
    }
}
