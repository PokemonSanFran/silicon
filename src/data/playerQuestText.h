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
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PROLOGUE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = DEFEATED_MAGNUS,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = TRAINER_FLAGS_START + TRAINER_MAGNUS_PROLOGUE,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
    },
  },
  {
    .text = COMPOUND_STRING("The party is for you! Grab a good seat before Eleanor starts her speech."),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PROLOGUE_STATE,
        .compareOp = EQUAL,
        .targetValue = WALK_INTO_HALL,
      },
    },
  },
  {
    .text = COMPOUND_STRING("Get everybody's reactions to the announcement, and then get some air outside."),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PROLOGUE_STATE,
        .compareOp = EQUAL,
        .targetValue = ELEANOR_ANNOUNCE,
      },
    },
  },
  {
    .text = COMPOUND_STRING("Go upstairs and check out your room, and explore the rest of the house."),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = HAS_MET_CHARLOTTE,
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
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = CHECKED_OUT_BEDROOM,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Take a long walk around {STR_VAR_1}, the region's old shipping hub. "),
    {
      .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
      .textTargetValue = MAP_CURENO_PORT,
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_CURENO_PORT_STATE,
        .compareOp = LESS_THAN,
        .targetValue = POST_HOW_DO_WE_GET_HOME,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Visit Adelaide on the League Ops Floor of {STR_VAR_1}! "),
    {
      .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
      .textTargetValue = MAP_SHARPRISE_SPIRE_1F,
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_SHARPRISESPIRE_CONFERENCE_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_WOW_YOURE_STRONG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG
        .dataAddress = FLAG_BADGE03_GET,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore everything eastern Resido has to offer!"),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_SHARPRISESPIRE_CONFERENCE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = POST_WOW_YOURE_STRONG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG
        .dataAddress = FLAG_BADGE03_GET,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    {
      .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
      .textTargetValue = MAP_PERLACIA_CITY,
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE03_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Why are all those Trainers on {STR_VAR_1} yelling at that one guy?"),
    {
      .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
      .textTargetValue = MAP_POPIDORA_PIER,
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_GROUP_OF_ASSHOLES_STATE,
        .compareOp = PLAYER_HAS_DEFEATED_THE_TIDE,
        .targetValue = LESS_THAN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_POPIDORA_PIER,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore everything eastern Resido has to offer!"),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_POPIDORA_PIER,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  /*
  {
    .text = COMPOUND_STRING("Try defeating as many Trainers as you can on {STR_VAR_1}! "),// Anbeh Bendpopido
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Who's responsible for the line that's blocking Caphe City's western exit?"),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Try defeating as many Trainers as you can on {STR_VAR_1}! "),// Route 10
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}. "),// cucuno town
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// chasilla
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Is there any way to explore western Resido without Go-Googles? "),// until met Adaora
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Take the ferry from {STR_VAR_1} or {STR_VAR_2} to visit {STR_VAR_3}. What Resido history can you learn? et Adaora, // after mHalai, Popidora"),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Visit all the exhibits on Arantraz without leaving and win a prize! "),// after challenge start
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// fort yobu
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Have dinner with Kei-Ying's at his home in {STR_VAR_1}. "),// petarosa
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Relax and visit the {STR_VAR_1} Beach! "),// cresalta beach
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// halerba city
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym! "),// tirabudin gym
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Try a challenge at {STR_VAR_1}! "),// pintillion house
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}. "),// cucuno town
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Head to {STR_VAR_1} and the Arena construction site as soon as you can!"),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Help Charlotte clear out The Tide from {STR_VAR_1} and stop them from destroying the Arena!"),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in Cucuno Town."),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Meet Charlotte and Oliver at the northern half of {STR_VAR_1}."),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Work with Charlotte to get Frank's journal from {STR_VAR_1}."),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Spend the night in {STR_VAR_1} at Charlotte's family Komala Kabin. "),// espulee outskirts
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Head to the deepest part of {STR_VAR_1} to deliver Frank's journal. "),// leaverra forest
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat all of Frank's Trainer bots in {STR_VAR_1} and continue the training. "),// leaverra forest
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get debriefed on the social media hack on the League Ops Floor of {STR_VAR_1} "),// spire
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Meet up with Charlotte and the police chief at the {STR_VAR_1} before going to {STR_VAR_1}. ai island"),// ferry building hal
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Storm The Tide's HQ at the {STR_VAR_1} {STR_VAR_2}. Shut down The Tide's social media hack and help arrest all of their members! "),// halai island naval base
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat Kai: don't let Alcmene and Adaora escape the {STR_VAR_1}!"),
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}. "),// cucuno town
    .textCondition = 
    {
      {
        .dataType = ,
        .dataAddress = ,
        .compareOp = ,
        .targetValue = ,
      }
    }
  },
  */
};

