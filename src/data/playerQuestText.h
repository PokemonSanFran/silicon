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
    .text = COMPOUND_STRING("Have dinner with Kei-Ying at his home in {STR_VAR_1}."),
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
  {
    .text = COMPOUND_STRING("Explore everything western Resido has to offer!"),
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_EAST_RESIDO_COMPLETE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Head to {STR_VAR_1} and the Arena construction site as soon as you can!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_CONSTRUCTION,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_CONSTRUCTION_STRIKE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = START_VS_GARBODOR,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_CALLED_TO_CONSTRUCTION,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Help Charlotte clear out The Tide from {STR_VAR_1} and stop them from destroying the {STR_VAR_2}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_CONSTRUCTION,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_CONSTRUCTION_STRIKE_STATE,
        .compareOp = EQUAL,
        .targetValue = START_VS_GARBODOR,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1}. "),
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
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_NEED_SLEEP_BEFORE_FRANK,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Meet Charlotte and Oliver at the northern half of {STR_VAR_1}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_PIOCA_BRIDGE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_GOLDENGATEBRIDGE_STATE,
        .compareOp = EQUAL,
        .targetValue = CALLED_BY_CHARLOTTE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Work with Charlotte to get Frank's journal from the maze inside {STR_VAR_1}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_LANJING_TUNNEL,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ROBINWILLIAMSTUNNEL_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = CHARLOTTE_INSIDE_TUNNEL,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ROBINWILLIAMSTUNNEL_STATE,
        .compareOp = LESS_THAN,
        .targetValue = FRANK_BOSS_DEFEATED,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Meet Charlotte in {STR_VAR_1}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ESPULEE_OUTSKIRTS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ESPULEE_OUTSKIRTS_STATE,
        .compareOp = EQUAL,
        .targetValue = ROBINWILLIAMSTUNNEL_PUZZLES_SOLVED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Spend the night in {STR_VAR_1} at Charlotte's family Komala Kabin."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ESPULEE_OUTSKIRTS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ESPULEE_OUTSKIRTS_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = CHARLOTTE_INVITED_KOMALACABIN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ESPULEE_OUTSKIRTS_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = CHARLOTTE_DEEP_STUDYING,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_LEAVERRA_FOREST_STATE,
        .compareOp = LESS_THAN,
        .targetValue = CHARLOTTE_WAITING_LEAVERRA_FOREST,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Head to the deepest part of {STR_VAR_1} to deliver Frank's journal."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_LEAVERRA_FOREST,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_LEAVERRA_FOREST_STATE,
        .compareOp = LESS_THAN,
        .targetValue = MET_FRANK,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_LEAVERRA_FOREST_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = CHARLOTTE_WAITING_LEAVERRA_FOREST,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Defeat all of Frank's Trainer bots in {STR_VAR_1} and continue the training."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_LEAVERRA_FOREST,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_LEAVERRA_FOREST_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = MET_FRANK,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_LEAVERRA_FOREST_STATE,
        .compareOp = LESS_THAN,
        .targetValue = POST_HAVE_YOU_SEEN_THE_NEWS,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get debriefed on the social media hack on the League Ops Floor of {STR_VAR_1}."),
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
        .dataAddress = VAR_LEAVERRA_FOREST_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_HAVE_YOU_SEEN_THE_NEWS,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_SHARPRISESPIRE_CONFERENCE_STATE,
        .compareOp = EQUAL,
        .targetValue = PRE_WELCOME_TO_THE_WAR_ROOM,
      }
    },
  },
  {
    .text = COMPOUND_STRING("Meet up with Charlotte and the police chief at the {STR_VAR_1} before going to {STR_VAR_2}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_FERRYBUILDING
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_SHARPRISESPIRE_CONFERENCE_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_WELCOME_TO_THE_WAR_ROOM,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_FERRYBUILDING_STATE,
        .compareOp = LESS_THAN,
        .targetValue = DEFEATED_SURVIVAL_CHANCE_BATTLE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_HALAI_ISLAND_STATE,
        .compareOp = LESS_THAN,
        .targetValue = WHY_ARE_YOU_HELPING_THEM,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Storm The Tide's HQ at the {STR_VAR_1}. Shut down The Tide's social media hack and help arrest all of their members! "),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_NAVAL_BASE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_HALAI_ISLAND_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = POST_SURVIVAL_CHANCE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_NAVAL_BASE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = CHASE_VIGRIM,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Navigate the {STR_VAR_1} and prevent Vigrim from escaping!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_NAVAL_BASE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_NAVAL_BASE_STATE,
        .compareOp = EQUAL,
        .targetValue = CHASE_VIGRIM,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_NAVAL_BASE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = SAVE_BAIYA_NAVAL_BASE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Defeat Kai: don't let Vigrim and Adaora escape the {STR_VAR_1}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_NAVAL_BASE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_NAVAL_BASE_STATE,
        .compareOp = EQUAL,
        .targetValue = SAVE_BAIYA_NAVAL_BASE,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Get a good night's rest back in {STR_VAR_1} and get ready for the SharpRise Pokemon League Championship!"),
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
        .targetValue = POST_NAVAL_BASE_RAID,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PLAYER_HOME_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = NEXT_DAY_CHAMPIONSHIP,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_START_CHAMPIONSHIP,
      }
    }
  },
  {
    .text = COMPOUND_STRING("Look at the tournament bracket to see your group's opponents, and explore {STR_VAR_1}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_CHAMPIONSHIP_EXPLAINED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Head into the {STR_VAR_1} Arena from the {STR_VAR_2} Locker Room and win your Group Matches!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_LOCKERS
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_CHARLOTTE_WON_GROUP,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_GROUP_STATE_COMPLETE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Congratulations on your Group Stage! Head back into the {STR_VAR_1} Arena for your Semifinal match!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_GROUP_STATE_COMPLETE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Go to the {STR_VAR_1} Skybox and watch the Semifinal match between Baiya and Charlotte."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_SKYBOX,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_SEMIFINAL_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_READY_FINALS,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Challenge Baiya in the {STR_VAR_1} Arena for the Championship!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_READY_FINALS,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_WON_FINALS,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Take a break and see all the sights on {STR_VAR_1}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ZENZU_ISLAND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_EXPLORE_ZENZU_ISLAND,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Win a friendly battle against Baiya on {STR_VAR_1}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ZENZU_ISLAND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_SAVE_BAIYA_ZENZU_ISLAND,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help Baiya with their Gym restoration program. Visit one the Gyms in {STR_VAR_1}, {STR_VAR_2}, or {STR_VAR_3} to see how you can get involved!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ESPULEE_OUTSKIRTS,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ZENZU_ISLAND,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HODOU_CITY,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_BAIYA_EXPLAIN_RESTORATION,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Get some rest at your new place in {STR_VAR_1} after the tough conversation with SharpRise Captial."),
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
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BAIYA_CALL_ARANTRAZ,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_SHARPRISESPIRE_CONFERENCE_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_YOU_REALIZE_WERE_EVIL_RIGHT,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Learn to {STR_VAR_1} from the surfers at {STR_VAR_2}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MOVE,
        .textTargetValue = MOVE_SURF,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_CRESALTA_VISTA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BAIYA_CALL_ARANTRAZ,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HANG20,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_SHARPRISESPIRE_CONFERENCE_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_YOU_REALIZE_WERE_EVIL_RIGHT,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Meet Baiya on {STR_VAR_1} to discuss SharpRise Capital."),
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
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_BAIYA_CALL_ARANTRAZ,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = EQUAL,
        .targetValue = BAIYA_SUMMONED_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HANG20,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Use {STR_VAR_1} to go to the northeastern side of the island. Baiya is waiting for you."),
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
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_ARRIVE_ARANTRAZ,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = LESS_THAN,
        .targetValue = PRE_YOU_REALIZE_THEYRE_EVIL_RIGHT,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HANG20,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Explore the lower levels of {STR_VAR_1} and find Baiya on the second level down."),
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
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = EQUAL,
        .targetValue = PRE_YOU_REALIZE_THEYRE_EVIL_RIGHT,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Get some rest at your new place in {STR_VAR_1}. Tomorrow, you begin destroying The Tide."),
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
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_YOU_REALIZE_THEYRE_EVIL_RIGHT,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN,
        .targetValue = STORY_MORNING_OF_TIMELINE_SPLIT,
      },
    }
  },
  {
    .text = COMPOUND_STRING("There's no turning back. Talk to Kei-Ying in the {STR_VAR_1} League Ops conference room to begin the operations to dismantle The Tide."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_MORNING_OF_TIMELINE_SPLIT,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help SharpRise Captial destroy The Tide. Visit Ramesh, Kei-Ying, or Oliver in their offices on the League Ops floor of {STR_VAR_1} to recieve your missions."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("The task {STR_VAR_1} in your ToDo List has the details of your mission to dismantle The Tide's home base."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_LETSBURNTHISMOTHERDOWN,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
    }
  },
  {
    .text = COMPOUND_STRING("The task {STR_VAR_1} in your ToDo List has the details of your mission to find and arrest the leader of The Tide, Vigrim."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_MANHUNT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
    }
  },
  {
    .text = COMPOUND_STRING("The task {STR_VAR_1} in your ToDo List has the details of your mission to shutdown the training centers for members of The Tide."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_HOWDISAPPOINTING,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You started two missions to destroy The Tide, {STR_VAR_1} and {STR_VAR_2}. Check your ToDo List for details."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_LETSBURNTHISMOTHERDOWN,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_MANHUNT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You started two missions to destroy The Tide, {STR_VAR_1} and {STR_VAR_2}. Check your ToDo List for details."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_LETSBURNTHISMOTHERDOWN,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_HOWDISAPPOINTING,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You started two missions to destroy The Tide, {STR_VAR_1} and {STR_VAR_2}. Check your ToDo List for details."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_MANHUNT,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_HOWDISAPPOINTING,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_ACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_REWARD,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You started all three missions to destroy The Tide, {STR_VAR_1}, {STR_VAR_2} and {STR_VAR_3}. Check your ToDo List for details."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_LETSBURNTHISMOTHERDOWN,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_MANHUNT,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_HOWDISAPPOINTING,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help SharpRise Captial destroy The Tide. Visit Ramesh or Kei-Ying in their offices on the League Ops floor of {STR_VAR_1} to recieve your missions."),  
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help SharpRise Captial destroy The Tide. Visit Oliver or Kei-Ying in their offices on the League Ops floor of {STR_VAR_1} to recieve your missions."),  
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help SharpRise Captial destroy The Tide. Visit Ramesh or Oliver in their offices on the League Ops floor of {STR_VAR_1} to recieve your missions."),  
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help SharpRise Captial destroy The Tide. Visit Kei-Ying in his office on the League Ops floor of {STR_VAR_1} to recieve your last mission."),  
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help SharpRise Captial destroy The Tide. Visit Ramesh in his office on the League Ops floor of {STR_VAR_1} to recieve your last mission."),  
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help SharpRise Captial destroy The Tide. Visit Oliver in his office on the League Ops floor of {STR_VAR_1} to recieve your last mission."),  
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_LEAGUEOPS,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = STORY_START_FALSE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = STORY_3RD_THE_TIDE_TAKEDOWN,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_LETSBURNTHISMOTHERDOWN,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_MANHUNT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_HOWDISAPPOINTING,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Head into the {STR_VAR_1} Arena from the {STR_VAR_2} Locker Room and participate in the exhibition battle against Diantha!"),
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_SAVE_DIANTHA,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You had quite the battle against Diantha! Get some fresh air outside the {STR_VAR_1}."),
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_STADIUM_ARENA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_CONGRATULATED_BY_LUCREZIA,
      },
    }
  },
  {
    .text = COMPOUND_STRING("The mysterious old lady told you to bring the {STR_VAR_1} to the highest point in the region... where is that?"),
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_ITEM,
        .textTargetValue = ITEM_WISH_TAG,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RECIEVED_BAMBOO_STAR,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_VISITED_TORGEOT_CLIMB,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("If you want to fix your mistakes, the weird old man at the top of {STR_VAR_1} says you to leave behind a Pokemon with the spirit of a Champion."),
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_TORGEOT_CLIMB,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_TIME_TRAVEL_STATE,
        .compareOp = EQUAL,
        .targetValue = TIME_TRAVEL_ASK_PLAYER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Was that a dream? Or is this another chance? Meet up with Baiya at the lowest point of {STR_VAR_1}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ_MESS_HALL,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_MORNING_OF_TIMELINE_SPLIT,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_TIMELINE_TIMETRAVEL,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("There's no turning back. Talk to Baiya in {STR_VAR_1} Mess Hall to finally fight back against the forces of SharpRise Capital."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ_MESS_HALL,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = EQUAL,
        .targetValue = LAST_CHANCE_TRUE_TIMELINE_START,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help Baiya locate Eleanor to reunite the Resido Elite Four. Start with the newspaper in {STR_VAR_1} to start your investigation."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_OROLAND_NEWSPAPER,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_START_TRUE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_MASK_OFF_STATE,
        .compareOp = EQUAL,
        .targetValue = ASSIGNED_MASK_OFF,
      },
    }
  },
  {
    .text = COMPOUND_STRING("The reporter in {STR_VAR_1} explained that Eleanor worked in {STR_VAR_2} helping small businesses grow and be sustainable."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_OROLAND_NEWSPAPER,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_MERMEREZA_CITY_CONSULTING,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_START_TRUE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_MASK_OFF_STATE,
        .compareOp = EQUAL,
        .targetValue = GOT_MASK_OFF_CLUE_1,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Eleanor's old coworker recalled that she used to treat the team to ramen in {STR_VAR_1}. Afterwards, she left to buy {STR_VAR_2} from her favorite store in {STR_VAR_3}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_TORA_TOWN,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_ITEM_PLURAL,
        .textTargetValue = ITEM_DUSK_BALL,
      },
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
        .compareOp = EQUAL,
        .targetValue = STORY_START_TRUE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_MASK_OFF_STATE,
        .compareOp = EQUAL,
        .targetValue = GOT_MASK_OFF_CLUE_2,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Eleanor regularly bought {STR_VAR_3} from {STR_VAR_1} Ball Shop. She often had books from {STR_VAR_2} Library."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_IRISINA_TOWN_BALLS,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_CAPHE_CITY_LIBRARY,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_ITEM_PLURAL,
        .textTargetValue = ITEM_DUSK_BALL,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_START_TRUE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_MASK_OFF_STATE,
        .compareOp = EQUAL,
        .targetValue = GOT_MASK_OFF_CLUE_3,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Eleanor gave lectures about the value of raising Pokemon where they were captured. The librarian admired the battle prowess of her {STR_VAR_1}. Eleanor traversed Resido using {STR_VAR_2}."), 
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_SPECIES,
        .textTargetValue = SPECIES_STANTLER,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MOVE,
        .textTargetValue = MOVE_FLY,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_START_TRUE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_MASK_OFF_STATE,
        .compareOp = EQUAL,
        .targetValue = GOT_MASK_OFF_CLUE_4,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Eleanor used to live in {STR_VAR_1}. She would train her Pokemon on {STR_VAR_2}, and then relax with a walk around {STR_VAR_3}."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_QIU_VILLAGE,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ROUTE98,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_WISHAAST_LAKE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_START_TRUE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_MASK_OFF_STATE,
        .compareOp = EQUAL,
        .targetValue = GOT_MASK_OFF_CLUE_5,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Vigrim wants to test your power now that you're working alongside them. Defeat them in a battle!"),
    .textComponent =
    {
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_START_TRUE_TIMELINE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_MASK_OFF_STATE,
        .compareOp = EQUAL,
        .targetValue = SAVE_VIGRIM_WISHAAST_LAKE_TRUE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Eleanor has gone to regroup with the Elite Four. She encouraged you to get some rest, as the battle continues tomorrow. Head home to {STR_VAR_1}!"),
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
        .compareOp = EQUAL,
        .targetValue = STORY_DEFEATED_VIGRIM,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_LOCKEDOUT_PLAYED,
        .compareOp = EQUAL,
        .targetValue = FALSE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("SharpRise Captial has revoked your perks, like your home. You can stay with Baiya on {STR_VAR_1} for now. Get some rest."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND_BAIYA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_DEFEATED_VIGRIM,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_FLAG,
        .dataAddress = FLAG_LOCKEDOUT_PLAYED,
        .compareOp = EQUAL,
        .targetValue = TRUE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("There is an all hands meeting in the {STR_VAR_1} Mess Hall, but you were invited to a warehouse rave in {STR_VAR_2}. Where will you go first?"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_CURENO_PORT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RECIVED_RAVE_INVITE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("The Tide is launched a new initative on {STR_VAR_1} to help cripple SharpRise Capital. Celebrate at the warehouse rave in {STR_VAR_2}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_CURENO_PORT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_OR_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_ARANTRAZ_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_SPEECHSPEECH,
      },
    }
  },
  {
    .text = COMPOUND_STRING("The warehouse rave in {STR_VAR_1} was a trap by SharpRise Captial - defeat Kei-Ying in battle!"),
    .textComponent =
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
        .dataAddress = VAR_WAREHOUSE_RAVE_STATE,
        .compareOp = EQUAL,
        .targetValue = SAVE_KEIYING_WAREHOUSE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You defeated Kei-Ying and got his help in escaping...head to {STR_VAR_1} for all all hands meeting!"),
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
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_OR_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_WAREHOUSE_RAVE_STATE,
        .compareOp = EQUAL,
        .targetValue = TOLD_BAIYA_ABOUT_KEIYING,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Team up with Eleanor, Tala, or Frank in the {STR_VAR_1} Mess Hall to begin weakening SharpRise Captial's hold on the region."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ_MESS_HALL,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = LESS_THAN,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check the task {STR_VAR_1} in your ToDo List to continue working with Frank!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_TAXICABTURNAROUND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = LESS_THAN,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check the task {STR_VAR_1} in your ToDo List to continue working with Eleanor!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BODEGABURNOUT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = LESS_THAN,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Help Tala and her reporter friend research fake news - complete tasks that you learn about on Buzzr!"),
    .textComponent =
    {
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = EQUAL,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Research fake news by completing tasks from Buzzr or check {STR_VAR_1} in your ToDo List to keep working with Eleanor."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BODEGABURNOUT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = EQUAL,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Research fake news by completing tasks from Buzzr or check {STR_VAR_1} in your ToDo List to keep working with Frank."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_TAXICABTURNAROUND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = EQUAL,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check {STR_VAR_1} in your ToDo List to keep working with Frank or {STR_VAR_2} to work with Eleanor."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_TAXICABTURNAROUND,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BODEGABURNOUT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = LESS_THAN,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check {STR_VAR_1} in your ToDo List to keep working with Frank, {STR_VAR_2} to work with Eleanor, or complete more tasks from Buzzr to help Tala."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_TAXICABTURNAROUND,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BODEGABURNOUT,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BODEGABURNOUT,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_TAXICABTURNAROUND,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_QUEST_BREAKTHEINTERNET_STATE,
        .compareOp = EQUAL,
        .targetValue = TALKED_TO_REPORTER,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check the task {STR_VAR_1} in your ToDo List to continue working with Frank!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_PERSUASIVEPASSENGER,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check the task {STR_VAR_1} in your ToDo List to continue working with Eleanor!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_WAREHOUSEWARFARE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check the task {STR_VAR_1} in your ToDo List to continue working with Tala!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BREAKTHEINTERNET,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check {STR_VAR_1} in your ToDo List to keep working with Tala or {STR_VAR_2} to work with Eleanor."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BREAKTHEINTERNET,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_WAREHOUSEWARFARE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check {STR_VAR_1} in your ToDo List to keep working with Tala or {STR_VAR_2} to work with Frank."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BREAKTHEINTERNET,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_PERSUASIVEPASSENGER,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check {STR_VAR_1} in your ToDo List to keep working with Frank or {STR_VAR_2} to work with Eleanor."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_PERSUASIVEPASSENGER,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_WAREHOUSEWARFARE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Check {STR_VAR_1} in your ToDo List to keep working with Frank, {STR_VAR_2} to work with Eleanor, or {STR_VAR_3} to work with Tala."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_PERSUASIVEPASSENGER,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_WAREHOUSEWARFARE,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_QUEST,
        .textTargetValue = QUEST_BREAKTHEINTERNET,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_RAVE_AND_SPEECH_COMPLETE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_WAREHOUSEWARFARE,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_PERSUASIVEPASSENGER,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_INACTIVE,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_QUEST,
        .dataAddress = QUEST_BREAKTHEINTERNET,
        .compareOp = NOT_EQUAL,
        .targetValue = FLAG_GET_COMPLETED,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You've crippled a corporate sponsor for now. Report your success back in the {STR_VAR_1} Mess Hall."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ARANTRAZ_MESS_HALL,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_1ST_TAKEDOWN,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Get some rest at Baiya's place on {STR_VAR_1} and prepare for the next campaign."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND_BAIYA,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_PRE_EARTHQUAKE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("That earthquake was intense! The power is out and people are calling for help. Go see how you can help the people of {STR_VAR_1}!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_HALAI_ISLAND_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_EARTHQUAKE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You, Adaora and Baiya have split up to see who you can help the people of {STR_VAR_1} in the earthquake aftermath!"),

    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_HALAI_ISLAND_STATE,
        .compareOp = EQUAL,
        .targetValue = START_EARTHQUAKE_RESCUE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("“{STR_VAR_1} @ 37.75030467013338, -122.3798002138461,{RIGHT_ARROW} 18030122” is the clue Adaora got from Kei-Ying. The coordinates are on {STR_VAR_2}, but what next?"),

    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_ITEM,
        .textTargetValue = ITEM_TM_DIG,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ROUTE4,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_HALAI_ISLAND_STATE,
        .compareOp = EQUAL,
        .targetValue = MEET_AT_ROUTE4,
      },
    }
  },
  {
    .text = COMPOUND_STRING("There's an entrance to something secret under {STR_VAR_1}. Go explore where it leads."),

    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ROUTE4,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PARC_STATE,
        .compareOp = EQUAL,
        .targetValue = THE_TIDE_DISCOVERED_LAB,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Why did Kei-Ying tell you go to the hidden entrance on {STR_VAR_1}? What secrets does this place have?"),

    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ROUTE4,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PARC_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = MAGNUS_UNLOCKED_DOOR,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PARC_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = TEAM_INSIDE_LAB,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Go through the entrance on {STR_VAR_1} and rescue all the restrained Pokemon from {STR_VAR_2}! They seem miserable..."),

    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_ROUTE4,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_PARC,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PARC_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = FREED_LAB_POKEMON_1,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_PARC_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = SAVE_BEFORE_DYNAMAX,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Regroup in the center of town on {STR_VAR_1} and figure out how to handle SharpRise Capital."),

    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_HALAI_ISLAND,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_HALAI_ISLAND_STATE,
        .compareOp = EQUAL,
        .targetValue = POST_THIS_ISNT_RANDOM,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Meet up with Baiya and the others at Ramesh's home in {STR_VAR_1}! It's time to take the fight to SharpRise Capital."),

    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_QIU_VILLAGE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_BEFORE_RAMESH_BREAKIN,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Search Ramesh's house in {STR_VAR_1} and find a way to access the warp panel."),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_QIU_VILLAGE,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_TOWER_RAID_STATE,
        .compareOp = EQUAL,
        .targetValue = SEARCHING_RAMESH_HOUSE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Ramesh's home in {STR_VAR_1} has a warp panel that leads inside {STR_VAR_2}. Use it to get to the top floor of {STR_VAR_2} and force a confession out of Lucrezia!"),
    .textComponent =
    {
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_QIU_VILLAGE,
      },
      {
        .textTargetType = QUEST_FLAVOR_GET_NAME_MAP,
        .textTargetValue = MAP_SHARPRISE_SPIRE_1F,
      },
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_TOWER_RAID_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = FOUND_RAMESH_WARP_DOOR,
      },
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_TOWER_RAID_STATE,
        .compareOp = LESS_THAN_OR_EQUAL,
        .targetValue = SAVE_CHARLOTTE_SHARPRISESPIRE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("Lucrezia's office on the League Ops floor of {STR_VAR_1} has a secret entrance. Use it to defeat Lucrezia once and for all!"),
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
        .dataAddress = VAR_TOWER_RAID_STATE,
        .compareOp = GREATER_THAN_OR_EQUAL,
        .targetValue = DEFEATED_CHARLOTTE_SHARPRISESPIRE,
      },
    }
  },
  {
    .text = COMPOUND_STRING("You became Champion, stamped out SharpRise Capital, and the region is a just a little better because of your efforts."),
    .textComponent =
    {
    },
    .textCondition = 
    {
      {
        .dataType = QUEST_FLAVOR_COMPARE_VAR,
        .dataAddress = VAR_STORYLINE_STATE,
        .compareOp = EQUAL,
        .targetValue = STORY_CLEAR,
      },
    }
  },
};

