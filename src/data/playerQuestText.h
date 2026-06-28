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
  {
    .text = COMPOUND_STRING("The party is for you! Grab a good seat before Eleanor starts her speech."),
    .textCondition = 
    {
      {
        .targetValue = WALK_INTO_HALL,
        .dataAddress = VAR_PROLOGUE_STATE,
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .compareOp = EQUAL,
      },
    },
  },
  {
    .text = COMPOUND_STRING("Get everybody's reactions to the announcement, and then get some air outside."),
    .textCondition = 
    {
      {
        .targetValue = ELEANOR_ANNOUNCE,
        .dataAddress = VAR_PROLOGUE_STATE,
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .compareOp = EQUAL,
      },
    },
  },
  {
    .text = COMPOUND_STRING("Go upstairs and check out your room, and explore the rest of the house."),
    .textCondition = 
    {
      {
        .targetValue = HAS_MET_CHARLOTTE,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .compareOp = GREATER_THAN_OR_EQUAL,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore {STR_VAR_1} and get some rest. Your adventure begins tomorrow!"),// cucuno town
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_CUCONU_TOWN,
      },
    },
    .textCondition = 
    {
      {
        .targetValue = CHECKED_OUT_BEDROOM,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .compareOp = GREATER_THAN_OR_EQUAL,
      }
    }
  },
  /*
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Try defeating as many Trainers as you can on {STR_VAR_1}! "),// Route 10
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Who's responsible for the line that's blocking Caphe City's western exit?"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Try defeating as many Trainers as you can on {STR_VAR_1}! "),// Anbeh Bend
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore everything eastern Resido has to offer!"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Why are all those Trainers on {STR_VAR_1} yelling at that one guy? ra pier"),// popidora pier hide until has visited popido
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// emrys
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore everything eastern Resido has to offer!"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Visit Adelaide on the League Ops Floor of {STR_VAR_1}! "),// sharprise spire hide until has talked to her
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Take a long walk around Cureno Port, the region's old shipping hub. "),// cureno port
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}. "),// cucuno town
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// chasilla
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Is there any way to explore western Resido without Go-Googles? "),// until met Adaora
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Take the ferry from {STR_VAR_1} or {STR_VAR_2} to visit {STR_VAR_3}. What Resido history can you learn? et Adaora, // after mHalai, Popidora"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Visit all the exhibits on Arantraz without leaving and win a prize! "),// after challenge start
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// fort yobu
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Have dinner with Kei-Ying's at his home in {STR_VAR_1}. "),// petarosa
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Relax and visit the {STR_VAR_1} Beach! "),// cresalta beach
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// halerba city
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// tirabudin gym
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Try a challenge at {STR_VAR_1}! "),// pintillion house
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}. "),// cucuno town
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Head to {STR_VAR_1} and the Arena construction site as soon as you can!"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Help Charlotte clear out The Tide from {STR_VAR_1} and stop them from destroying the Arena!"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in Cucuno Town."),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Meet Charlotte and Oliver at the northern half of {STR_VAR_1}."),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Work with Charlotte to get Frank's journal from {STR_VAR_1}."),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Spend the night in {STR_VAR_1} at Charlotte's family Komala Kabin. "),// espulee outskirts
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Head to the deepest part of {STR_VAR_1} to deliver Frank's journal. "),// leaverra forest
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat all of Frank's Trainer bots in {STR_VAR_1} and continue the training. "),// leaverra forest
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get debriefed on the social media hack on the League Ops Floor of {STR_VAR_1} "),// spire
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Meet up with Charlotte and the police chief at the {STR_VAR_1} before going to {STR_VAR_1}. ai island"),// ferry building hal
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Storm The Tide's HQ at the {STR_VAR_1} {STR_VAR_2}. Shut down The Tide's social media hack and help arrest all of their members! "),// halai island naval base
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat Kai: don't let Alcmene and Adaora escape the {STR_VAR_1}!"),
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}. "),// cucuno town
    .textCondition = 
    {
      {
        .targetValue = ,
        .dataAddress = ,
        .dataType = ,
        .compareOp = ,
      }
    }
  },
  */
};

