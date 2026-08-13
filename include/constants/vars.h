#ifndef GUARD_CONSTANTS_VARS_H
#define GUARD_CONSTANTS_VARS_H

#include "vars_define.h"
#include "constants/vars_frlg.h"

#define VARS_START 0x4000

// temporary vars
// The first 0x10 vars are temporary--they are cleared every time a map is loaded.
#define TEMP_VARS_START                                             0x4000
#define VAR_TEMP_0                                                  (TEMP_VARS_START + 0x0)
#define VAR_TEMP_1                                                  (TEMP_VARS_START + 0x1)
#define VAR_TEMP_2                                                  (TEMP_VARS_START + 0x2)
#define VAR_TEMP_3                                                  (TEMP_VARS_START + 0x3) // Note: Used when the player checks a TV
#define VAR_TEMP_4                                                  (TEMP_VARS_START + 0x4)
#define VAR_TEMP_5                                                  (TEMP_VARS_START + 0x5)
#define VAR_TEMP_6                                                  (TEMP_VARS_START + 0x6)
#define VAR_TEMP_7                                                  (TEMP_VARS_START + 0x7)
#define VAR_TEMP_8                                                  (TEMP_VARS_START + 0x8)
#define VAR_TEMP_9                                                  (TEMP_VARS_START + 0x9)
#define VAR_TEMP_A                                                  (TEMP_VARS_START + 0xA)
#define VAR_TEMP_B                                                  (TEMP_VARS_START + 0xB)
#define VAR_TEMP_C                                                  (TEMP_VARS_START + 0xC)
#define VAR_TEMP_D                                                  (TEMP_VARS_START + 0xD)
#define VAR_TEMP_E                                                  (TEMP_VARS_START + 0xE)
#define VAR_TEMP_F                                                  (TEMP_VARS_START + 0xF)
#define TEMP_VARS_END                                               VAR_TEMP_F
#define NUM_TEMP_VARS                                               (TEMP_VARS_END - TEMP_VARS_START + 1)

// object gfx id vars
// These 0x10 vars are used to dynamically control a map object's sprite.
// For example, the rival's sprite id is dynamically set based on the player's gender.
// See VarGetObjectEventGraphicsId().
#define VAR_OBJ_GFX_ID_0                                            0x4010
#define VAR_OBJ_GFX_ID_1                                            0x4011
#define VAR_OBJ_GFX_ID_2                                            0x4012
#define VAR_OBJ_GFX_ID_3                                            0x4013
#define VAR_OBJ_GFX_ID_4                                            0x4014
#define VAR_OBJ_GFX_ID_5                                            0x4015
#define VAR_OBJ_GFX_ID_6                                            0x4016
#define VAR_OBJ_GFX_ID_7                                            0x4017
#define VAR_OBJ_GFX_ID_8                                            0x4018
#define VAR_OBJ_GFX_ID_9                                            0x4019
#define VAR_OBJ_GFX_ID_A                                            0x401A
#define VAR_OBJ_GFX_ID_B                                            0x401B
#define VAR_OBJ_GFX_ID_C                                            0x401C
#define VAR_OBJ_GFX_ID_D                                            0x401D
#define VAR_OBJ_GFX_ID_E                                            0x401E
#define VAR_OBJ_GFX_ID_F                                            0x401F

// general purpose vars
#define VAR_RECYCLE_GOODS                                           0x4020
#define VAR_REPEL_STEP_COUNT                                        0x4021
#define VAR_ICE_STEP_COUNT                                          0x4022
#define VAR_STARTER_MON                                             0x4023 // 0=Treecko, 1=Torchic, 2=Mudkip
#define VAR_MIRAGE_RND_H                                            0x4024
#define VAR_MIRAGE_RND_L                                            0x4025
#define VAR_SECRET_BASE_MAP                                         0x4026
#define VAR_CYCLING_ROAD_RECORD_COLLISIONS                          0x4027
#define VAR_CYCLING_ROAD_RECORD_TIME_L                              0x4028
#define VAR_CYCLING_ROAD_RECORD_TIME_H                              0x4029
#define VAR_FRIENDSHIP_STEP_COUNTER                                 0x402A
#define VAR_POISON_STEP_COUNTER                                     0x402B
#define VAR_RESET_RTC_ENABLE                                        0x402C
#define VAR_ENIGMA_BERRY_AVAILABLE                                  0x402D
#define VAR_WONDER_NEWS_STEP_COUNTER                                0x402E
#define VAR_FRONTIER_MANIAC_FACILITY                                0x402F

#define VAR_ALWAYS_ZERO                                             0x4020
//#define VAR_REPEL_STEP_COUNT                                      0x4021
//#define VAR_ICE_STEP_COUNT                                        0x4022
#define VAR_SKY_BATTLE                                              0x4023
#define VAR_EARTHQUAKE_COUNT                                        0x4024
#define VAR_EARTHQUAKE_STEP_COUNTER                                 0x4025
#define VAR_DEXNAV_STEP_COUNTER                                     0x4026
#define VAR_SILICON_UNUSED_0x4027                                   0x4027
#define VAR_SILICON_UNUSED_0x4028                                   0x4028
#define VAR_SILICON_UNUSED_0x4029                                   0x4029
//#define VAR_FRIENDSHIP_STEP_COUNTER                               0x402A
//#define VAR_POISON_STEP_COUNTER                                   0x402B
//#define VAR_RESET_RTC_ENABLE                                      0x402C
#define VAR_CUTSCENE_SKIP                                           0x402D
#define VAR_UBER_QUEST_EXCEPTION_DESTINATION                        0x402E
#define VAR_SILICON_UNUSED_0x402F                                   0x402F

#define VAR_FRONTIER_GAMBLER_CHALLENGE                              0x4030
#define VAR_FRONTIER_GAMBLER_SET_CHALLENGE                          0x4031
#define VAR_FRONTIER_GAMBLER_AMOUNT_BET                             0x4032
#define VAR_FRONTIER_GAMBLER_STATE                                  0x4033
#define VAR_DEOXYS_ROCK_STEP_COUNT                                  0x4034
#define VAR_DEOXYS_ROCK_LEVEL                                       0x4035
#define VAR_PC_BOX_TO_SEND_MON                                      0x4036
#define VAR_ABNORMAL_WEATHER_LOCATION                               0x4037
#define VAR_ABNORMAL_WEATHER_STEP_COUNTER                           0x4038
#define VAR_SHOULD_END_ABNORMAL_WEATHER                             0x4039
#define VAR_FARAWAY_ISLAND_STEP_COUNTER                             0x403A
#define VAR_REGICE_STEPS_1                                          0x403B
#define VAR_REGICE_STEPS_2                                          0x403C
#define VAR_REGICE_STEPS_3                                          0x403D
#define VAR_ALTERING_CAVE_WILD_SET                                  0x403E
#define VAR_DAYS                                                    0x403F

#define VAR_MSGBOX_SPEAKER                                          0x4030
#define VAR_MSGBOX_TAIL                                             0x4031
#define VAR_MSGBOX_EMOTE                                            0x4032
#define VAR_MSGBOX_PHONE                                            0x4033
#define VAR_AUTOSAVE                                                0x4034
#define VAR_PERMA_TERRAIN                                           0x4035
//#define VAR_PC_BOX_TO_SEND_MON                                    0x4036
#define VAR_WILD_AI_FLAGS                                           0x4037
#define VAR_NO_BAG_USE                                              0x4038
#define VAR_LEVEL_CAP                                               0x4039
#define VAR_CURRENT_START_MENU_APP                                  0x403A
#define VAR_FIRSTRUNEXPERIENCE                                      0x403B
#define VAR_CHOSEN_PSF_STARTER                                      0x403C
#define VAR_TAXI_DESTINATION                                        0x403D
#define VAR_DEXNAV_SPECIES                                          0x403E
//#define VAR_DAYS                                                  0x403F

#define VAR_FANCLUB_FAN_COUNTER                                     0x4040
#define VAR_FANCLUB_LOSE_FAN_TIMER                                  0x4041
#define VAR_DEPT_STORE_FLOOR                                        0x4042
#define VAR_TRICK_HOUSE_LEVEL                                       0x4043
#define VAR_POKELOT_PRIZE_ITEM                                      0x4044
#define VAR_NATIONAL_DEX                                            0x4045
#define VAR_SEEDOT_SIZE_RECORD                                      0x4046
#define VAR_ASH_GATHER_COUNT                                        0x4047
#define VAR_BIRCH_STATE                                             0x4048
#define VAR_CRUISE_STEP_COUNT                                       0x4049
#define VAR_POKELOT_RND1                                            0x404A
#define VAR_POKELOT_PRIZE_PLACE                                     0x404B
#define VAR_POKELOT_RND2                                            0x404C
#define VAR_OLDALE_TOWN_STATE                                       0x404D
#define VAR_LITTLEROOT_TOWN_STATE                                   0x404E
#define VAR_LOTAD_SIZE_RECORD                                       0x404F

#define VAR_GIVEN_UNHOUSED                                          0x4040
#define VAR_FRONTIER_LAST_FOUGHT_BOSS                               0x4041
#define VAR_SHARPRISESPIRE_CONFERENCE_STATE                         0x4042
#define VAR_TOWER_FLOOR                                             0x4043
#define VAR_EMRYS_STATE                                             0x4044
#define VAR_PUA_STATE                                               0x4045
#define VAR_NERIENE_STATE                                           0x4046
#define VAR_DIMU_STATE                                              0x4047
#define VAR_BD_STATE                                                0x4048
#define VAR_AMIARGENTO_STATE                                        0x4049
//#define VAR_POKELOT_RND1                                          0x404A
#define VAR_ROUTE10_STATE                                           0x404B
//#define VAR_POKELOT_RND2                                          0x404C
#define VAR_ANBEH_BEND_STATE                                        0x404D
#define VAR_SHARPRISE_SPIRE_PRODUCTION_STATE                        0x404E
#define VAR_POPIDORA_PIER_STATE                                     0x404F

#define VAR_LAVARIDGE_TOWN_STATE                                    0x4050
#define VAR_CURRENT_SECRET_BASE                                     0x4051 // was probably allocated for VAR_FALLARBOR_TOWN_STATE at one point
#define VAR_PETALBURG_CITY_STATE                                    0x4052
#define VAR_SLATEPORT_CITY_STATE                                    0x4053
#define VAR_RUSTBORO_CITY_STATE                                     0x4054
#define VAR_MOSSDEEP_CITY_STATE                                     0x4055
#define VAR_SOOTOPOLIS_CITY_STATE                                   0x4056
#define VAR_ROUTE101_STATE                                          0x4057
#define VAR_ROUTE104_STATE                                          0x4058
#define VAR_ROUTE110_STATE                                          0x4059
#define VAR_ROUTE116_STATE                                          0x405A
#define VAR_ROUTE118_STATE                                          0x405B
#define VAR_ROUTE119_STATE                                          0x405C
#define VAR_ROUTE121_STATE                                          0x405D
#define VAR_ROUTE128_STATE                                          0x405E
#define VAR_LITTLEROOT_HOUSES_STATE_MAY                             0x405F

#define VAR_CURENO_PORT_STATE                                       0x4050
#define VAR_FERRYBUILDING_STATE                                     0x4051
#define VAR_CHASILLA_STATE                                          0x4052
#define VAR_ARANTRAZ_STATE                                          0x4053
#define VAR_FORT_YOBU_STATE                                         0x4054
#define VAR_ESPULEE_OUTSKIRTS_STATE                                 0x4055
#define VAR_TIRABUDIN_PLACE_STATE                                   0x4056
#define VAR_NAVAL_BASE_STATE                                        0x4057
#define VAR_GOLDENGATEBRIDGE_STATE                                  0x4058
#define VAR_ROBINWILLIAMSTUNNEL_STATE                               0x4059
#define VAR_ROUTE99_STATE                                           0x405A
#define VAR_LEAVERRA_FOREST_STATE                                   0x405B
#define VAR_PARC_STATE                                              0x405C
#define VAR_GYM_1_STATE                                             0x405D
#define VAR_GYM_3_STATE                                             0x405E
#define VAR_GYM_4_STATE                                             0x405F

#define VAR_BIRCH_LAB_STATE                                         0x4060
#define VAR_PETALBURG_GYM_STATE                                     0x4061 // 0-1: Wally tutorial, 2-6: 0-4 badges, 7: Defeated Norman, 8: Rematch Norman
#define VAR_CONTEST_HALL_STATE                                      0x4062
#define VAR_CABLE_CLUB_STATE                                        0x4063
#define VAR_CONTEST_TYPE                                            0x4064
#define VAR_SECRET_BASE_INITIALIZED                                 0x4065
#define VAR_CONTEST_PRIZE_PICKUP                                    0x4066
#define VAR_LITTLEROOT_HOUSES_STATE_BRENDAN                         0x4067
#define VAR_LITTLEROOT_RIVAL_STATE                                  0x4068
#define VAR_BOARD_BRINEY_BOAT_STATE                                 0x4069
#define VAR_DEVON_CORP_3F_STATE                                     0x406A
#define VAR_BRINEY_HOUSE_STATE                                      0x406B
#define VAR_LITTLEROOT_INTRO_STATE                                  0x406C
#define VAR_MAUVILLE_GYM_STATE                                      0x406D
#define VAR_LILYCOVE_MUSEUM_2F_STATE                                0x406E
#define VAR_LILYCOVE_FAN_CLUB_STATE                                 0x406F

#define VAR_GYM_5_STATE                                             0x4060
#define VAR_GYM_6_STATE                                             0x4061
#define VAR_GYM_7_STATE                                             0x4062
#define VAR_GYM_8_STATE                                             0x4063
#define VAR_PROLOGUE_STATE                                          0x4064
#define VAR_STORYLINE_STATE                                         0x4065
#define VAR_FERRY_STATE                                             0x4066
#define VAR_WAIT_YOU_WENT_WHERE                                     0x4067
#define VAR_MASK_OFF_STATE                                          0x4068
#define VAR_SHARPRISESTADIUM_TOURNAMENT_STATE                       0x4069
#define VAR_ARANTRAZ_EXHIBIT_STATE                                  0x406A
#define VAR_HALAI_ISLAND_STATE                                      0x406B
#define VAR_FAINTED_FOG_STATE                                       0x406C
#define VAR_PLAYER_FAVORITE_FOOD                                    0x406D
#define VAR_WAREHOUSE_RAVE_STATE                                    0x406E
#define VAR_BATTLE_8_STATE                                          0x406F

#define VAR_BRINEY_LOCATION                                         0x4070
#define VAR_INIT_SECRET_BASE                                        0x4071
#define VAR_PETALBURG_WOODS_STATE                                   0x4072
#define VAR_LILYCOVE_CONTEST_LOBBY_STATE                            0x4073
#define VAR_RUSTURF_TUNNEL_STATE                                    0x4074
#define VAR_ELITE_4_STATE                                           0x4075
#define VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE                 0x4076
#define VAR_MOSSDEEP_SPACE_CENTER_STATE                             0x4077
#define VAR_SLATEPORT_HARBOR_STATE                                  0x4078
#define VAR_SEAFLOOR_CAVERN_STATE                                   0x4079
#define VAR_CABLE_CAR_STATION_STATE                                 0x407A
#define VAR_SAFARI_ZONE_STATE                                       0x407B  // 0: In or out of SZ, 1: Player exiting SZ, 2: Player entering SZ
#define VAR_TRICK_HOUSE_BEING_WATCHED_STATE                         0x407C
#define VAR_TRICK_HOUSE_FOUND_TRICK_MASTER                          0x407D
#define VAR_TRICK_HOUSE_ENTRANCE_STATE                              0x407E
#define VAR_CYCLING_CHALLENGE_STATE                                 0x407F

#define VAR_BEACH_BATTLE_STATE                                      0x4070
#define VAR_CONSTRUCTION_STRIKE_STATE                               0x4071
#define VAR_INNER_CONSTRUCTION_SITE_STATE                           0x4072
#define VAR_TIME_TRAVEL_STATE                                       0x4073
#define VAR_TOWER_RAID_STATE                                        0x4074
#define VAR_MANHUNT_STATE                                           0x4075
#define VAR_GROUP_OF_ASSHOLES_STATE                                 0x4076
#define VAR_HOWDISAPPOINTING_STATE                                  0x4077
#define VAR_KEIYING_STATE                                           0x4078
#define VAR_LETSBURNTHISMOTHERSTATE                                 0x4079
#define VAR_PLAYER_HOME_STATE                                       0x407A
#define VAR_CAPHE_CITY_STATE                                        0x407B
#define VAR_SILICON_UNUSED_0x407C                                   0x407C
#define VAR_SILICON_UNUSED_0x407D                                   0x407D
#define VAR_SILICON_UNUSED_0x407E                                   0x407E
#define VAR_SILICON_UNUSED_0x407F                                   0x407F

#define VAR_SLATEPORT_MUSEUM_1F_STATE                               0x4080
#define VAR_TRICK_HOUSE_PUZZLE_1_STATE                              0x4081
#define VAR_TRICK_HOUSE_PUZZLE_2_STATE                              0x4082
#define VAR_TRICK_HOUSE_PUZZLE_3_STATE                              0x4083
#define VAR_TRICK_HOUSE_PUZZLE_4_STATE                              0x4084
#define VAR_TRICK_HOUSE_PUZZLE_5_STATE                              0x4085
#define VAR_TRICK_HOUSE_PUZZLE_6_STATE                              0x4086
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE                              0x4087
#define VAR_TRICK_HOUSE_PUZZLE_8_STATE                              0x4088
#define VAR_WEATHER_INSTITUTE_STATE                                 0x4089
#define VAR_SS_TIDAL_STATE                                          0x408A
#define VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR                         0x408B
#define VAR_SLATEPORT_FAN_CLUB_STATE                                0x408C
#define VAR_MT_PYRE_STATE                                           0x408D
#define VAR_NEW_MAUVILLE_STATE                                      0x408E
#define VAR_BRAVO_TRAINER_BATTLE_TOWER_ON                           0x408F

#define VAR_CHASILLA_AXE_STATE                                      0x4080
#define VAR_DANCEBATTLE_STATE                                       0x4081
#define VAR_DEFEATED_GLAMEOW_COUNT                                  0x4082
#define VAR_DEFEATED_CRESALTA_VISTA_COUNT                           0x4083
#define VAR_CUTE_POKEMON_GUESS                                      0x4084
#define VAR_CULTURAL_PURITY                                         0x4085
#define VAR_HYBRID_CULTURE                    VAR_CULTURAL_PURITY
#define VAR_GYM_2_STATE                               VAR_CULTURAL_PURITY
#define VAR_LAST_RESTORATION_TAKEDOWN_QUEST                         0x4086
#define VAR_DEFEATED_BACKYARD_COUNT                                 0x4087
#define VAR_QUEST_VSDEOXYS                                          0x4088
#define VAR_QUEST_VOLUNTEER_FIREFIGHTER_COUNT                       0x4089
#define VAR_QUEST_COMPULSIVE_HEALING_PEER_SUPPORT_GROUP_DAILY_TYPE  0x408A
#define VAR_QUEST_BREAKTHEINTERNET_STATE                            0x408B
#define VAR_QUEST_CHALLENGEOFTHE7SISTERS_BEST_RECORD                0x408C
#define VAR_QUEST_CHALLENGEOFTHE7SISTERS_CURRENT_RECORD             0x408D
#define VAR_QUEST_CHALLENGEOFTHE7SISTERS_LAST_RECORD                0x408E
#define VAR_QUEST_HODOUTUNNELS                                      0x408F

#define VAR_JAGGED_PASS_ASH_WEATHER                                 0x4090
#define VAR_GLASS_WORKSHOP_STATE                                    0x4091
#define VAR_METEOR_FALLS_STATE                                      0x4092
#define VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE                         0x4093
#define VAR_TRICK_HOUSE_PRIZE_PICKUP                                0x4094
#define VAR_PACIFIDLOG_TM_RECEIVED_DAY                              0x4095
#define VAR_VICTORY_ROAD_1F_STATE                                   0x4096
#define VAR_FOSSIL_RESURRECTION_STATE                               0x4097
#define VAR_WHICH_FOSSIL_REVIVED                                    0x4098
#define VAR_STEVENS_HOUSE_STATE                                     0x4099
#define VAR_OLDALE_RIVAL_STATE                                      0x409A
#define VAR_JAGGED_PASS_STATE                                       0x409B
#define VAR_SCOTT_PETALBURG_ENCOUNTER                               0x409C
#define VAR_SKY_PILLAR_STATE                                        0x409D
#define VAR_MIRAGE_TOWER_STATE                                      0x409E
#define VAR_FOSSIL_MANIAC_STATE                                     0x409F

#define VAR_QUEST_FOOD_TRUCK_BUREAUCRACY_STATE                      0x4090
#define VAR_QUEST_GLITTERS_GOLD_STATE                               0x4091
#define VAR_QUEST_KITCHEN_ASSIGNED_ITEMS                            0x4092
#define VAR_QUEST_MANOFMANYHATS                                     0x4093
#define VAR_QUEST_MUTUALAIDFUND_AMOUNT                              0x4094
#define VAR_QUEST_PERSUASIVE_PASSENGER_STATE                        0x4095
#define VAR_QUEST_RECRUITLOLCAARTISTS                               0x4096
//#define VAR_FOSSIL_RESURRECTION_STATE                             0x4097
#define VAR_QUEST_REDOMUGGING_STATE                                 0x4098
#define VAR_QUEST_RESTOREHODOUGYM                                   0x4099
#define VAR_QUEST_RESTOREZENZUGYM                                   0x409A
#define VAR_QUEST_SKILLLIBRARY_TM_COUNT                             0x409B
#define VAR_QUEST_ULTRAWORMHOLE_WARP_DESTINATION                    0x409C
#define VAR_QUEST_WAREHOUSEWARFARE_STATE                            0x409D
#define VAR_SILICON_UNUSED_0x409E                                   0x409E
#define VAR_SILICON_UNUSED_0x409F                                   0x409F

#define VAR_CABLE_CLUB_TUTORIAL_STATE                               0x40A0
#define VAR_FRONTIER_BATTLE_MODE                                    0x40A1
#define VAR_SILICON_UNUSED_0x40A2                                   0x40A2
#define VAR_HAS_ENTERED_BATTLE_FRONTIER                             0x40A3 // Var is used like a flag.
#define VAR_SCOTT_STATE                                             0x40A4
#define VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE                          0x40A5
#define VAR_DEX_UPGRADE_JOHTO_STARTER_STATE                         0x40A6
#define VAR_SS_TIDAL_SCOTT_STATE                                    0x40A7 // Always equal to FLAG_MET_SCOTT_ON_SS_TIDAL
#define VAR_ROAMER_POKEMON                                          0x40A8 // 0 = Latias, 1 = Latios
#define VAR_TRAINER_HILL_IS_ACTIVE                                  0x40A9
#define VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE                            0x40AA
#define VAR_SOOTOPOLIS_WALLACE_STATE                                0x40AB
#define VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT 0x40AC
#define VAR_REGISTER_BIRCH_STATE                                    0x40AD
#define VAR_GIFT_PICHU_SLOT                                         0x40AE
#define VAR_SILICON_UNUSED_0x40AF                                   0x40AF

#define VAR_QUEST_WILDFIRERISK_FLYING_COUNT                         0x40A0
//#define VAR_FRONTIER_BATTLE_MODE                                  0x40A1
#define VAR_SILICON_UNUSED_0x40A2                                   0x40A2
#define VAR_QUEST_RPS_STREAK_COUNT                                  0x40A3
#define VAR_QUEST_TEACHATRAINERTOFISH                               0x40A4
#define VAR_FLIGHT_PATH                                             0x40A5
#define VAR_DEFEATED_GARDEN_POKEMON                                 0x40A6
#define VAR_SILICON_UNUSED_0x40A7                                   0x40A7
#define VAR_SILICON_UNUSED_0x40A8                                   0x40A8
#define VAR_SILICON_UNUSED_0x40A9                                   0x40A9
#define VAR_SILICON_UNUSED_0x40AA                                   0x40AA
#define VAR_SILICON_UNUSED_0x40AB                                   0x40AB
#define VAR_SILICON_UNUSED_0x40AC                                   0x40AC
#define VAR_SILICON_UNUSED_0x40AD                                   0x40AD
#define VAR_SILICON_UNUSED_0x40AE                                   0x40AE
#define VAR_SILICON_UNUSED_0x40AF                                   0x40AF

#define VAR_SILICON_UNUSED_0x40B0                                   0x40B0
#define VAR_SILICON_UNUSED_0x40B1                                   0x40B1
#define VAR_SILICON_UNUSED_0x40B2                                   0x40B2
#define VAR_SILICON_UNUSED_0x40B3                                   0x40B3
#define VAR_SILICON_UNUSED_0x40B4                                   0x40B4
#define VAR_SECRET_BASE_STEP_COUNTER                                0x40B5 // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LAST_ITEM_USED                              0x40B6 // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LOW_TV_FLAGS                                0x40B7 // Used by Secret Base TV programs
#define VAR_SECRET_BASE_HIGH_TV_FLAGS                               0x40B8 // Used by Secret Base TV programs
#define VAR_SECRET_BASE_IS_NOT_LOCAL                                0x40B9 // Set to TRUE while in another player's secret base.
#define VAR_SILICON_UNUSED_0x40BA                                   0x40BA
#define VAR_WALLY_CALL_STEP_COUNTER                                 0x40BB
#define VAR_SCOTT_FORTREE_CALL_STEP_COUNTER                         0x40BC
#define VAR_ROXANNE_CALL_STEP_COUNTER                               0x40BD
#define VAR_SCOTT_BF_CALL_STEP_COUNTER                              0x40BE
#define VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER                        0x40BF

#define VAR_SILICON_UNUSED_0x40B0                                   0x40B0
#define VAR_SILICON_UNUSED_0x40B1                                   0x40B1
#define VAR_SILICON_UNUSED_0x40B2                                   0x40B2
#define VAR_SILICON_UNUSED_0x40B3                                   0x40B3
#define VAR_SILICON_UNUSED_0x40B4                                   0x40B4
#define VAR_SILICON_UNUSED_0x40B5                                   0x40B5
#define VAR_SILICON_UNUSED_0x40B6                                   0x40B6
#define VAR_SILICON_UNUSED_0x40B7                                   0x40B7
#define VAR_SILICON_UNUSED_0x40B8                                   0x40B8
#define VAR_SILICON_UNUSED_0x40B9                                   0x40B9
#define VAR_SILICON_UNUSED_0x40BA                                   0x40BA
#define VAR_ANEWSTRIKE_STEP_COUNTER                                 0x40BB
#define VAR_BAIYA_CALL_ARANTRAZ_STEP_COUNTER                        0x40BC
#define VAR_BUZZR_STEP_COUNTER                                      0x40BD
#define VAR_HIDDEN_GROTTO_STEP_COUNT                                0x40BE
#define VAR_CATCHUP_EXPERIENCE_STEP_COUNTER                         0x40BF

// unused vars
#define VAR_SILICON_UNUSED_0x40C0                                   0x40C0 // Unused Var
#define VAR_SILICON_UNUSED_0x40C1                                   0x40C1 // Unused Var
#define VAR_SILICON_UNUSED_0x40C2                                   0x40C2 // Unused Var
#define VAR_SILICON_UNUSED_0x40C3                                   0x40C3 // Unused Var
#define VAR_SILICON_UNUSED_0x40C4                                   0x40C4 // Unused Var
#define VAR_SILICON_UNUSED_0x40C5                                   0x40C5 // Unused Var
#define VAR_SILICON_UNUSED_0x40C6                                   0x40C6 // Unused var
#define VAR_SILICON_UNUSED_0x40C7                                   0x40C7 // Unused Var
#define VAR_SILICON_UNUSED_0x40C8                                   0x40C8 // Unused Var
#define VAR_SILICON_UNUSED_0x40C9                                   0x40C9 // Unused Var
#define VAR_SILICON_UNUSED_0x40CA                                   0x40CA // Unused Var
#define VAR_SILICON_UNUSED_0x40CB                                   0x40CB // Unused Var
#define VAR_SILICON_UNUSED_0x40CC                                   0x40CC // Unused Var
#define VAR_SILICON_UNUSED_0x40CD                                   0x40CD // Unused Var
#define VAR_SILICON_UNUSED_0x40CE                                   0x40CE // Unused Var
#define VAR_FRONTIER_FACILITY                                       0x40CF // Must match FRLG

#define VAR_SILICON_UNUSED_0x40D0                                   0x40D0 // Unused Var
#define VAR_SILICON_UNUSED_0x40D1                                   0x40D1 // Unused Var
#define VAR_SILICON_UNUSED_0x40D2                                   0x40D2 // Unused Var
#define VAR_SILICON_UNUSED_0x40D3                                   0x40D3 // Unused Var
#define VAR_SILICON_UNUSED_0x40D4                                   0x40D4 // Unused Var
#define VAR_SILICON_UNUSED_0x40D5                                   0x40D5 // Unused Var


// safe to rename
#define VAR_SILICON_UNUSED_0x40D6                                   0x40D6 // Unused Var
#define VAR_SILICON_UNUSED_0x40D7                                   0x40D7 // Unused Var
#define VAR_SILICON_UNUSED_0x40D8                                   0x40D8 // Unused Var
#define VAR_SILICON_UNUSED_0x40D9                                   0x40D9 // Unused Var
#define VAR_SILICON_UNUSED_0x40DA                                   0x40DA // Unused Var
#define VAR_SILICON_UNUSED_0x40DB                                   0x40DB // Unused Var
#define VAR_SILICON_UNUSED_0x40DC                                   0x40DC // Unused Var
#define VAR_SILICON_UNUSED_0x40DD                                   0x40DD // Unused Var
#define VAR_SILICON_UNUSED_0x40DE                                   0x40DE // Unused Var
#define VAR_SILICON_UNUSED_0x40DF                                   0x40DF // Unused Var

#define VAR_SILICON_UNUSED_0x40E0                                   0x40E0 // Unused Var
#define VAR_SILICON_UNUSED_0x40E1                                   0x40E1 // Unused Var
#define VAR_SILICON_UNUSED_0x40E2                                   0x40E2 // Unused Var
#define VAR_SILICON_UNUSED_0x40E3                                   0x40E3 // Unused Var
#define VAR_SILICON_UNUSED_0x40E4                                   0x40E4 // Unused Var
#define VAR_SILICON_UNUSED_0x40E5                                   0x40E5 // Unused Var
#define VAR_DAILY_SLOTS                                             0x40E6 // Must match FRLG
#define VAR_DAILY_WILDS                                             0x40E7 // Must match FRLG
#define VAR_DAILY_BLENDER                                           0x40E8 // Must match FRLG
#define VAR_DAILY_PLANTED_BERRIES                                   0x40E9 // Must match FRLG
#define VAR_DAILY_PICKED_BERRIES                                    0x40EA // Must match FRLG
#define VAR_DAILY_ROULETTE                                          0x40EB // Must match FRLG
#define VAR_SILICON_UNUSED_0x40EC                                   0x40EC // Unused Var
#define VAR_SILICON_UNUSED_0x40ED                                   0x40ED // Unused Var
#define VAR_SILICON_UNUSED_0x40EE                                   0x40EE // Unused Var
#define VAR_SILICON_UNUSED_0x40EF                                   0x40EF // Unused Var

#define VAR_SILICON_UNUSED_0x40F0                                   0x40F0 // Unused Var
#define VAR_DAILY_BP                                                0x40F1 // Must match FRLG
#define VAR_SILICON_UNUSED_0x40F2                                   0x40F2 // Unused Var
#define VAR_SILICON_UNUSED_0x40F3                                   0x40F3 // Unused Var
#define VAR_SILICON_UNUSED_0x40F4                                   0x40F4 // Unused Var
#define VAR_SILICON_UNUSED_0x40F5                                   0x40F5 // Unused Var
#define VAR_SILICON_UNUSED_0x40F6                                   0x40F6 // Unused Var
#define VAR_SILICON_UNUSED_0x40F7                                   0x40F7 // Unused Var
#define VAR_SILICON_UNUSED_0x40F8                                   0x40F8 // Unused Var
#define VAR_SILICON_UNUSED_0x40F9                                   0x40F9 // Unused Var
#define VAR_SILICON_UNUSED_0x40FA                                   0x40FA // Unused Var
#define VAR_SILICON_UNUSED_0x40FB                                   0x40FB // Unused Var
#define VAR_SILICON_UNUSED_0x40FC                                   0x40FC // Unused Var
#define VAR_SILICON_UNUSED_0x40FD                                   0x40FD // Unused Var
#define VAR_SILICON_UNUSED_0x40FE                                   0x40FE // Unused Var


#define VAR_SILICON_UNUSED_0x40FF                                   0x40FF // Leftover from RS, never set
/*
data/maps/Route110_TrickHousePuzzle7/scripts.inc
> you may have already deleted these sections if you followed [Reclaim Unused Flags](https://github.com/pret/pokeemerald/wiki/Reclaim-Unused-Flags)
(NOTE: doing this will also free up 5 flags `FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1` to 5)
in the map_script header, delete: (lines 2 to 5)

	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle7_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle7_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle7_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHousePuzzle7_OnFrame


delete lines and entire sections ( now lines 4 to 93)

	@ Puzzle Room 7 in RSE uses whatever puzzle Mossdeep Gym uses

	@ Because Mossdeep Gym was redesigned for Emerald, theres a good deal of leftover script from the old R/S puzzle

	Route110_TrickHousePuzzle7_OnResume

	Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles

	@ Leftover from R/S, none of the below metatile scripts are ever called

	Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn

	Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn

	Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn

	Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn

	Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn

	Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff

	Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff

	Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff

	Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff

	Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff

	Route110_TrickHousePuzzle7_OnTransition

	Route110_TrickHousePuzzle7_EventScript_TeleportedTransition

	Route110_TrickHousePuzzle7_OnLoad

	Route110_TrickHousePuzzle7_OnFrame

	Route110_TrickHousePuzzle7_EventScript_ClearState2


then delete entire sections (now lines 15 to 130)
	@ Unused, leftover from R/S

	Route110_TrickHousePuzzle7_EventScript_TeleportPad

	@ All the below switch scripts are unused leftover from R/S

	Route110_TrickHousePuzzle7_EventScript_Switch1

	Route110_TrickHousePuzzle7_EventScript_Switch2

	Route110_TrickHousePuzzle7_EventScript_Switch3

	Route110_TrickHousePuzzle7_EventScript_Switch4

	Route110_TrickHousePuzzle7_EventScript_Switch5

	@ All the below switch scripts are unused leftover from R/S

	Route110_TrickHousePuzzle7_EventScript_SetSwitch1On

	Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off

	Route110_TrickHousePuzzle7_EventScript_SetSwitch2On

	Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off

	Route110_TrickHousePuzzle7_EventScript_SetSwitch3On

	Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off

	Route110_TrickHousePuzzle7_EventScript_SetSwitch4On

	Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off

	Route110_TrickHousePuzzle7_EventScript_SetSwitch5On

	Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off
*/


#define VARS_END                                                    0x40FF
#define VARS_COUNT                                                  (VARS_END - VARS_START + 1)

#define SPECIAL_VARS_START                                          0x8000
// special vars
// They are commonly used as parameters to commands, or return values from commands.
#define VAR_0x8000                                                  0x8000
#define VAR_0x8001                                                  0x8001
#define VAR_0x8002                                                  0x8002
#define VAR_0x8003                                                  0x8003
#define VAR_0x8004                                                  0x8004
#define VAR_0x8005                                                  0x8005
#define VAR_0x8006                                                  0x8006
#define VAR_0x8007                                                  0x8007
#define VAR_0x8008                                                  0x8008
#define VAR_0x8009                                                  0x8009
#define VAR_0x800A                                                  0x800A
#define VAR_0x800B                                                  0x800B
#define VAR_FACING                                                  0x800C
#define VAR_RESULT                                                  0x800D
#define VAR_ITEM_ID                                                 0x800E
#define VAR_LAST_TALKED                                             0x800F
#define VAR_CONTEST_RANK                                            0x8010
#define VAR_CONTEST_CATEGORY                                        0x8011
#define VAR_MON_BOX_ID                                              0x8012
#define VAR_MON_BOX_POS                                             0x8013
#define VAR_SILICON_UNUSED_0x8014                                   0x8014
#define VAR_TRAINER_BATTLE_OPPONENT_A 0x8015 // Alias of gTrainerBattleOpponent_A

#define SPECIAL_VARS_END                                            0x8015

// If an overworld trigger uses this pseudo-variable as the trigger check,
// then the script will be run using RunScriptImmediately instead of in the
// global script context. This means it will run faster, but cannot do any
// cutscenes nor call a wait command. Used for weather effects in vanilla.
#define TRIGGER_RUN_IMMEDIATELY   0

// Temp var aliases
#define VAR_TEMP_CHALLENGE_STATUS                                   VAR_TEMP_0

#define VAR_TEMP_MIXED_RECORDS                                      VAR_TEMP_0
#define VAR_TEMP_RECORD_MIX_GIFT_ITEM                               VAR_TEMP_1

#define VAR_TEMP_PLAYING_PYRAMID_MUSIC                              VAR_TEMP_E

#define VAR_TEMP_FRONTIER_TUTOR_SELECTION                           VAR_TEMP_D
#define VAR_TEMP_FRONTIER_TUTOR_ID                                  VAR_TEMP_E

#define VAR_TEMP_TRANSFERRED_SPECIES                                VAR_TEMP_1

// Other var aliases

// When the variable 0x8000 is set to PLAYER_CAN_HEAL, HealPlayerParty
// will make sure to always heal the Player's party regardless of
// In-Game Options such as "Center Healing".
#define PLAYER_CAN_HEAL    42069

#if TESTING
#define TESTING_VARS_START                  0x9000
#define TESTING_VAR_DIFFICULTY              (TESTING_VARS_START + 0x0)
#define TESTING_VAR_TRAINER_SLIDES          (TESTING_VARS_START + 0x1)
#define TESTING_VAR_UNUSED_2                (TESTING_VARS_START + 0x2)
#define TESTING_VAR_UNUSED_3                (TESTING_VARS_START + 0x3)
#define TESTING_VAR_UNUSED_4                (TESTING_VARS_START + 0x4)
#define TESTING_VAR_UNUSED_5                (TESTING_VARS_START + 0x5)
#define TESTING_VAR_UNUSED_6                (TESTING_VARS_START + 0x6)
#define TESTING_VAR_UNUSED_7                (TESTING_VARS_START + 0x7)
#endif // TESTING

#endif // GUARD_CONSTANTS_VARS_H
