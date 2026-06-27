#include "quest_logic.h"
#include "quest_flavor_lookup.h"
#include "constants/maps.h"

static const struct PlayerAdventureText playerAdventureText[] = 
{
    {
        .text = COMPOUND_STRING("Defeat Magnus and claim your title as Champion of Resido!"),
        .textCondition = 
        {
            {
                .targetValue = DEFEATED_MAGNUS,
                .dataAddress = VAR_PROLOGUE_STATE,
                .dataType = QUEST_FLAVOR_COMPARE_VAR,
                .compareOp = LESS_THAN,
            },
            {
                .targetValue = FALSE,
                .dataAddress = TRAINER_FLAGS_START + TRAINER_MAGNUS_PROLOGUE,
                .dataType = QUEST_FLAVOR_COMPARE_FLAG,
                .compareOp = EQUAL,
            },
        },
    },
};

