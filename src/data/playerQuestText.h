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
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = CHECKED_OUT_BEDROOM,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore {STR_VAR_1} and get some rest. Your adventure begins tomorrow!"),
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
        .compareOp = EQUAL,
        .targetValue = POST_SWAGBAG,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Take a long walk around {STR_VAR_1}, the region's old shipping hub. "),
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_CURENO_PORT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
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
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_SHARPRISE_SPIRE_1F,
      },
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
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE03_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
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
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE03_GET,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_PERLACIA_CITY,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
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
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_POPIDORA_PIER,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_GROUP_OF_ASSHOLES_STATE,
        .compareOp = LESS_THAN,
        .targetValue = PLAYER_HAS_DEFEATED_THE_TIDE,
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
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_POPIDORA_PIER,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Try defeating as many Trainers as you can on {STR_VAR_1}! "),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_ANBEH_BEND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_ANBEH_BEND,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = (TRAINER_FLAGS_START + TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS),
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore everything eastern Resido has to offer!"),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_ANBEH_BEND,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_TORA_TOWN,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE02_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Who's responsible for the line that's blocking {STR_VAR_1}'s western exit?"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_CAPHE_CITY,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_CAPHE_CITY,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_CAPHE_CITY_STATE,
        .compareOp = EQUAL,
        .targetValue = LINE_IS_BLOCKING,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore everything eastern Resido has to offer!"),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_CAPHE_CITY,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Try defeating as many Trainers as you can on {STR_VAR_1}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_ROUTE10,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = TRAINER_FLAGS_START + TRAINER_BAIYA_NEWASSHOLEAPPEARS,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP, 
        .textTargetValue = MAP_MERMEREZA_CITY,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = SLEPT_AFTER_SWAGBAG,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE01_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}."),
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_CUCONU_TOWN,
      }
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_WEST_RESIDO_COMPLETE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Go to the {STR_VAR_1} on {STR_VAR_2} and take the ferry to {STR_VAR_3}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_FERRYBUILDING,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ROUTE4,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_HALAI_ISLAND,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_FERRY_FIXED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_CHASILLA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_HALAI_ISLAND,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE04_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Is there any way to explore western Resido without {STR_VAR_1}? "),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_ITEM,
        .textTargetValue = ITEM_GO_GOGGLES,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE04_GET,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_CHASILLA_STATE,
        .compareOp = LESS_THAN,
        .targetValue = GOT_ARANTRAZ_TICKET,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Take the ferry from {STR_VAR_1} or {STR_VAR_2} to visit {STR_VAR_3}. What Resido history can you learn?"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_POPIDORA_PIER,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_CHASILLA_STATE,
        .compareOp = EQUAL,
        .targetValue = GOT_ARANTRAZ_TICKET,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ARANTRAZ_EXHIBIT_STATE,
        .compareOp = LESS_THAN,
        .targetValue = ARANTRAZ_EXHIBIT_START,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Battle all the Trainers and visit all the exhibits on {STR_VAR_1} without leaving to win a prize!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ARANTRAZ_EXHIBIT_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = ARANTRAZ_EXHIBIT_START,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = LESS_THAN,
        .targetValue = BATTLED_TALA,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),//irisina gym 
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_IRISINA_TOWN,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_COMPLETE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE08_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Try a challenge at {STR_VAR_1}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_PINTILLON_HOUSE_INTERIOR_1F,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_COMPLETE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = TRAINER_FLAGS_START + TRAINER_BAIYA_BATTLE8,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_TIRABUDIN_PLACE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_COMPLETE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE07_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALERBA_CITY,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_COMPLETE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE06_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    },
  },
  {
    .text = COMPOUND_STRING("Relax and visit the {STR_VAR_1} Beach!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_CRESALTA_VISTA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_COMPLETE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = TRAINER_FLAGS_START + TRAINER_CHARLOTTE_BEACHBATTLE,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Have dinner with Kei-Ying's at his home in {STR_VAR_1}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_PETAROSA_BOROUGH,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_COMPLETE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE05_GET,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_FORT_YOBU_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = MET_KEIYING_OUTSIDE_GYM,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_KEIYING_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STATE_KEIYING_POST_RAISON_DETRE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Explore everything western Resido has to offer!"),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE05_GET,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_FORT_YOBU_STATE,
        .compareOp = LESS_THAN,
        .targetValue = MET_KEIYING_OUTSIDE_GYM,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Defeat the {STR_VAR_1} Gym!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_FORT_YOBU_GYM,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_COMPLETE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BADGE05_GET,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      }
    }
  },
  /*
     {
     .text = COMPOUND_STRING("Head to {STR_VAR_1} and the Arena construction site as soon as you can!"),
     .textComponent =
     {
     {
     },
     },
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
     .textComponent =
     {
     {
     },
     },
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
     .textComponent =
     {
     {
     },
     },
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
     .textComponent =
     {
     {
     },
     },
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
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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
  .text = COMPOUND_STRING("Navigate the {STR_VAR_1} and prevent Vigrim from escaping!"),// halai island naval base
  .textComponent =
  {
    {
    },
  },
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
  .text = COMPOUND_STRING("Defeat Kai: don't let Vigrim and Adaora escape the {STR_VAR_1}!"),
  .textComponent =
  {
    {
    },
  },
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
  .textComponent =
  {
    {
    },
  },
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

