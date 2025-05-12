#include "global.h"
#include "test/battle.h"

// Start siliconNewBalls
SINGLE_BATTLE_TEST("Ball Animations: Show all Ball animations", s16 damage)
{
    u16 ball;
    PARAMETRIZE { ball = BALL_STRANGE; }
    PARAMETRIZE { ball = BALL_POKE; }
    PARAMETRIZE { ball = BALL_GREAT; }
    PARAMETRIZE { ball = BALL_ULTRA; }
    PARAMETRIZE { ball = BALL_MASTER; }
    PARAMETRIZE { ball = BALL_PREMIER; }
    PARAMETRIZE { ball = BALL_HEAL; }
    PARAMETRIZE { ball = BALL_NET; }
    PARAMETRIZE { ball = BALL_NEST; }
    PARAMETRIZE { ball = BALL_DIVE; }
    PARAMETRIZE { ball = BALL_DUSK; }
    PARAMETRIZE { ball = BALL_TIMER; }
    PARAMETRIZE { ball = BALL_QUICK; }
    PARAMETRIZE { ball = BALL_REPEAT; }
    PARAMETRIZE { ball = BALL_LUXURY; }
    PARAMETRIZE { ball = BALL_LEVEL; }
    PARAMETRIZE { ball = BALL_LURE; }
    PARAMETRIZE { ball = BALL_MOON; }
    PARAMETRIZE { ball = BALL_FRIEND; }
    PARAMETRIZE { ball = BALL_LOVE; }
    PARAMETRIZE { ball = BALL_FAST; }
    PARAMETRIZE { ball = BALL_HEAVY; }
    PARAMETRIZE { ball = BALL_DREAM; }
    PARAMETRIZE { ball = BALL_SAFARI; }
    PARAMETRIZE { ball = BALL_SPORT; }
    PARAMETRIZE { ball = BALL_PARK; }
    PARAMETRIZE { ball = BALL_BEAST; }
    PARAMETRIZE { ball = BALL_CHERISH; }
    PARAMETRIZE { ball = ITEM_NEWA_BALL;}
    PARAMETRIZE { ball = ITEM_NEWB_BALL;}
    PARAMETRIZE { ball = ITEM_NEWC_BALL;}
    PARAMETRIZE { ball = ITEM_NEWD_BALL;}
    PARAMETRIZE { ball = ITEM_NEWE_BALL;}
    PARAMETRIZE { ball = ITEM_NEWF_BALL;}
    PARAMETRIZE { ball = ITEM_NEWG_BALL;}
    PARAMETRIZE { ball = ITEM_NEWH_BALL;}
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ball(ball); }
        OPPONENT(SPECIES_WOBBUFFET) {Ball(ball);}
    } WHEN {
        TURN { MOVE(player, MOVE_HELPING_HAND); MOVE(opponent, MOVE_HELPING_HAND); }
    } SCENE {
        SEND_IN_MESSAGE("Wobbuffet");
    }
}

WILD_BATTLE_TEST("Ball Animations: Show all Ball catch animations")
{
    u16 ball = 0;

    PARAMETRIZE { ball = ITEM_STRANGE_BALL; }
    PARAMETRIZE { ball = ITEM_POKE_BALL; }
    PARAMETRIZE { ball = ITEM_GREAT_BALL; }
    PARAMETRIZE { ball = ITEM_ULTRA_BALL; }
    PARAMETRIZE { ball = ITEM_MASTER_BALL; }
    PARAMETRIZE { ball = ITEM_PREMIER_BALL; }
    PARAMETRIZE { ball = ITEM_HEAL_BALL; }
    PARAMETRIZE { ball = ITEM_NET_BALL; }
    PARAMETRIZE { ball = ITEM_NEST_BALL; }
    PARAMETRIZE { ball = ITEM_DIVE_BALL; }
    PARAMETRIZE { ball = ITEM_DUSK_BALL; }
    PARAMETRIZE { ball = ITEM_TIMER_BALL; }
    PARAMETRIZE { ball = ITEM_QUICK_BALL; }
    PARAMETRIZE { ball = ITEM_REPEAT_BALL; }
    PARAMETRIZE { ball = ITEM_LUXURY_BALL; }
    PARAMETRIZE { ball = ITEM_LEVEL_BALL; }
    PARAMETRIZE { ball = ITEM_LURE_BALL; }
    PARAMETRIZE { ball = ITEM_MOON_BALL; }
    PARAMETRIZE { ball = ITEM_FRIEND_BALL; }
    PARAMETRIZE { ball = ITEM_LOVE_BALL; }
    PARAMETRIZE { ball = ITEM_FAST_BALL; }
    PARAMETRIZE { ball = ITEM_HEAVY_BALL; }
    PARAMETRIZE { ball = ITEM_DREAM_BALL; }
    PARAMETRIZE { ball = ITEM_SAFARI_BALL; }
    PARAMETRIZE { ball = ITEM_SPORT_BALL; }
    PARAMETRIZE { ball = ITEM_PARK_BALL; }
    PARAMETRIZE { ball = ITEM_BEAST_BALL; }
    PARAMETRIZE { ball = ITEM_CHERISH_BALL; }
    PARAMETRIZE { ball = ITEM_NEWA_BALL;}
    PARAMETRIZE { ball = ITEM_NEWB_BALL;}
    PARAMETRIZE { ball = ITEM_NEWC_BALL;}
    PARAMETRIZE { ball = ITEM_NEWD_BALL;}
    PARAMETRIZE { ball = ITEM_NEWE_BALL;}
    PARAMETRIZE { ball = ITEM_NEWF_BALL;}
    PARAMETRIZE { ball = ITEM_NEWG_BALL;}
    PARAMETRIZE { ball = ITEM_NEWH_BALL;}
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ball(ball);}
        OPPONENT(SPECIES_CATERPIE) {Ball(ball);}
    } WHEN {
        TURN { USE_ITEM(player, ball, partyIndex: 0); }
    } SCENE {
        ANIMATION(ANIM_TYPE_SPECIAL, B_ANIM_BALL_THROW, player);
    }
}
// End siliconNewBalls
TO_DO_BATTLE_TEST("Poke Balls can't be thrown when there's 2 opposing wild battlers")
TO_DO_BATTLE_TEST("Poke Balls can't be thrown when there's no space in the Pokemon Storage System")
TO_DO_BATTLE_TEST("Poke Balls can't be thrown when an opposing wild battler is in a semi-invulnerable state")
TO_DO_BATTLE_TEST("Poke Balls can't be thrown when B_FLAG_NO_CATCHING is set")
