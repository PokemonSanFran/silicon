#ifndef GUARD_CONSTANTS_VARS_H
#define GUARD_CONSTANTS_VARS_H

#include "vars_define.h"

#define VARS_START 0x4000

// temporary vars
// The first 0x10 vars are temporary--they are cleared every time a map is loaded.
#define TEMP_VARS_START            0x4000
#define VAR_TEMP_0                 (TEMP_VARS_START + 0x0)
#define VAR_TEMP_1                 (TEMP_VARS_START + 0x1)
#define VAR_TEMP_2                 (TEMP_VARS_START + 0x2)
#define VAR_TEMP_3                 (TEMP_VARS_START + 0x3) // Note: Used when the player checks a TV
#define VAR_TEMP_4                 (TEMP_VARS_START + 0x4)
#define VAR_TEMP_5                 (TEMP_VARS_START + 0x5)
#define VAR_TEMP_6                 (TEMP_VARS_START + 0x6)
#define VAR_TEMP_7                 (TEMP_VARS_START + 0x7)
#define VAR_TEMP_8                 (TEMP_VARS_START + 0x8)
#define VAR_TEMP_9                 (TEMP_VARS_START + 0x9)
#define VAR_TEMP_A                 (TEMP_VARS_START + 0xA)
#define VAR_TEMP_B                 (TEMP_VARS_START + 0xB)
#define VAR_TEMP_C                 (TEMP_VARS_START + 0xC)
#define VAR_TEMP_D                 (TEMP_VARS_START + 0xD)
#define VAR_TEMP_E                 (TEMP_VARS_START + 0xE)
#define VAR_TEMP_F                 (TEMP_VARS_START + 0xF)
#define TEMP_VARS_END              VAR_TEMP_F
#define NUM_TEMP_VARS              (TEMP_VARS_END - TEMP_VARS_START + 1)

// object gfx id vars
// These 0x10 vars are used to dynamically control a map object's sprite.
// For example, the rival's sprite id is dynamically set based on the player's gender.
// See VarGetObjectEventGraphicsId().
#define VAR_OBJ_GFX_ID_0           0x4010
#define VAR_OBJ_GFX_ID_1           0x4011
#define VAR_OBJ_GFX_ID_2           0x4012
#define VAR_OBJ_GFX_ID_3           0x4013
#define VAR_OBJ_GFX_ID_4           0x4014
#define VAR_OBJ_GFX_ID_5           0x4015
#define VAR_OBJ_GFX_ID_6           0x4016
#define VAR_OBJ_GFX_ID_7           0x4017
#define VAR_OBJ_GFX_ID_8           0x4018
#define VAR_OBJ_GFX_ID_9           0x4019
#define VAR_OBJ_GFX_ID_A           0x401A
#define VAR_OBJ_GFX_ID_B           0x401B
#define VAR_OBJ_GFX_ID_C           0x401C
#define VAR_OBJ_GFX_ID_D           0x401D
#define VAR_OBJ_GFX_ID_E           0x401E
#define VAR_OBJ_GFX_ID_F           0x401F

// general purpose vars
#define VAR_RECYCLE_GOODS                                0x4020
#define VAR_REPEL_STEP_COUNT                             0x4021
#define VAR_ICE_STEP_COUNT                               0x4022
#define VAR_STARTER_MON                                  0x4023 // 0=Treecko, 1=Torchic, 2=Mudkip
#define VAR_CHOSEN_PSF_STARTER                           0x4023 //PSF Var
#define VAR_MIRAGE_RND_H                                 0x4024
#define VAR_MIRAGE_RND_L                                 0x4025
#define VAR_SECRET_BASE_MAP                              0x4026
#define VAR_CYCLING_ROAD_RECORD_COLLISIONS               0x4027
#define VAR_CYCLING_ROAD_RECORD_TIME_L                   0x4028
#define VAR_CYCLING_ROAD_RECORD_TIME_H                   0x4029
#define VAR_FRIENDSHIP_STEP_COUNTER                      0x402A
#define VAR_POISON_STEP_COUNTER                          0x402B
#define VAR_RESET_RTC_ENABLE                             0x402C
#define VAR_ENIGMA_BERRY_AVAILABLE                       0x402D
#define VAR_WONDER_NEWS_STEP_COUNTER                     0x402E

#define VAR_FRONTIER_MANIAC_FACILITY                     0x402F
#define VAR_FRONTIER_GAMBLER_CHALLENGE                   0x4030
#define VAR_FRONTIER_GAMBLER_SET_CHALLENGE               0x4031
#define VAR_FRONTIER_GAMBLER_AMOUNT_BET                  0x4032
#define VAR_FRONTIER_GAMBLER_STATE                       0x4033

#define VAR_DEOXYS_ROCK_STEP_COUNT                       0x4034
#define VAR_HIDDEN_GROTTO_STEP_COUNT                     0x4034 // Silicon
#define VAR_DEOXYS_ROCK_LEVEL                            0x4035
#define VAR_PC_BOX_TO_SEND_MON                           0x4036
#define VAR_ABNORMAL_WEATHER_LOCATION                    0x4037
#define VAR_ABNORMAL_WEATHER_STEP_COUNTER                0x4038
#define VAR_SHOULD_END_ABNORMAL_WEATHER                  0x4039
#define VAR_FARAWAY_ISLAND_STEP_COUNTER                  0x403A
#define VAR_QUEST_VSDEOXYS                               0x403B //PSF Var
#define VAR_REGICE_STEPS_1                               0x403B
#define VAR_REGICE_STEPS_2                               0x403C
#define VAR_REGICE_STEPS_3                               0x403D
#define VAR_ALTERING_CAVE_WILD_SET                       0x403E
#define VAR_DISTRIBUTE_EON_TICKET                        0x403F // This var is read and written, but is always zero. The only way to obtain the Eon Ticket in Emerald is via Record Mixing
#define VAR_DAYS                                         0x4040
#define VAR_FANCLUB_FAN_COUNTER                          0x4041
#define VAR_FANCLUB_LOSE_FAN_TIMER                       0x4042
#define VAR_DEPT_STORE_FLOOR                             0x4043
#define VAR_TOWER_FLOOR                                  0x4043 //PSF Var
#define VAR_TRICK_HOUSE_LEVEL                            0x4044
#define VAR_POKELOT_PRIZE_ITEM                           0x4045
#define VAR_NATIONAL_DEX                                 0x4046
#define VAR_SEEDOT_SIZE_RECORD                           0x4047
#define VAR_ASH_GATHER_COUNT                             0x4048
#define VAR_BIRCH_STATE                                  0x4049
#define VAR_CRUISE_STEP_COUNT                            0x404A
#define VAR_POKELOT_RND1                                 0x404B
#define VAR_NO_BAG_USE                                   0x404B // PSF Var
#define VAR_POKELOT_RND2                                 0x404C
#define VAR_POKELOT_PRIZE_PLACE                          0x404D
#define VAR_FLY_TOOL_SOURCE                              0x404E // PSF Var
#define VAR_LOTAD_SIZE_RECORD                            0x404F
#define VAR_LITTLEROOT_TOWN_STATE                        0x4050
#define VAR_FIRSTRUNEXPERIENCE 0x4050 // PSF Var
#define VAR_OLDALE_TOWN_STATE                            0x4051
#define VAR_DEFEATED_BACKYARD_COUNT                      0x4051 // PSF Var
#define VAR_LEVEL_CAP                                    0x4052 // PSF Var
#define VAR_LAVARIDGE_TOWN_STATE                         0x4053
#define VAR_QUEST_VOLUNTEER_FIREFIGHTER_COUNT            0x4053 // PSF Var
#define VAR_CURRENT_SECRET_BASE                          0x4054 // was probably allocated for VAR_FALLARBOR_TOWN_STATE at one point
#define VAR_ALWAYS_ZERO                        0x4055 // PSF Var
#define VAR_MSGBOX_SPEAKER                        0x4056 // PSF Var
#define VAR_PETALBURG_CITY_STATE                         0x4057
#define VAR_QUEST_COMPULSIVE_HEALING_PEER_SUPPORT_GROUP_DAILY_TYPE                   0x4057 // PSF Var
#define VAR_SLATEPORT_CITY_STATE                         0x4058
#define VAR_KEIYING_MANSION_STATE                           0x4058 // PSF Var
#define VAR_MSGBOX_TAIL                          0x4059 // PSF Var
#define VAR_RUSTBORO_CITY_STATE                          0x405A
#define VAR_MSGBOX_EMOTE                           0x405B // PSF Var
#define VAR_MSGBOX_PHONE                          0x405C // PSF Var
#define VAR_MOSSDEEP_CITY_STATE                          0x405D
#define VAR_MASK_OFF_STATE                               0x405D // PSF Var
#define VAR_SOOTOPOLIS_CITY_STATE                        0x405E
#define VAR_PROLOGUE_STATE                               0x405E // PSF Var
#define VAR_AUTOSAVE                                     0x405F // PSF Var
#define VAR_ROUTE101_STATE                               0x4060
#define VAR_TAXI_DESTINATION                             0x4060 // PSF Var
#define VAR_CURRENT_START_MENU_APP                               0x4061 // PSF Var
#define VAR_PERMA_TERRAIN                               0x4062 // PSF Var
#define VAR_ROUTE104_STATE                               0x4063
#define VAR_WAIT_YOU_WENT_WHERE                          0x4063 // PSF Var
#define VAR_WILD_AI_FLAGS                               0x4064 // PSF Var
#define VAR_STORYLINE_STATE                               0x4065 // PSF Var
#define VAR_GIVEN_UNHOUSED                               0x4066 // PSF Var
#define VAR_SHARPRISESTADIUM_TOURNAMENT_STATE                               0x4067 // PSF Var
#define VAR_FERRY_STATE                               0x4068 // PSF Var
#define VAR_ROUTE110_STATE                               0x4069
#define VAR_ARANTRAZ_EXHIBIT_STATE                       0x4069 // PSF Var
#define VAR_FRONTIER_LAST_FOUGHT_BOSS                               0x406A // PSF Var
#define VAR_SHINZO_STATE                               0x406B // PSF Var
#define VAR_EMRYS_STATE                               0x406C // PSF Var
#define VAR_PUA_STATE                               0x406D // PSF Var
#define VAR_NERIENE_STATE                               0x406E // PSF Var
#define VAR_ROUTE116_STATE                               0x406F
#define VAR_HALAI_ISLAND_STATE                                0x406F // PSF Var
#define VAR_DIMU_STATE                               0x4070 // PSF Var
#define VAR_ROUTE118_STATE                               0x4071
#define VAR_FAINTED_FOG_STATE                            0x4071 // PSF Var
#define VAR_ROUTE119_STATE                               0x4072
#define VAR_FORT_YOBU_STATE                              0x4072 // PSF Var
#define VAR_BD_STATE                               0x4073 // PSF Var
#define VAR_ROUTE121_STATE                               0x4074
#define VAR_NAVAL_BASE_STATE                              0x4074 // PSF Var
#define VAR_AMIARGENTO_STATE                               0x4075 // PSF Var
#define VAR_GYM_1_STATE                               0x4076 // PSF Var
#define VAR_GYM_2_STATE                               0x4077 // PSF Var
#define VAR_GYM_3_STATE                               0x4078 // PSF Var
#define VAR_GYM_4_STATE                               0x4079 // PSF Var
#define VAR_GYM_5_STATE                               0x407A // PSF Var
#define VAR_ROUTE128_STATE                               0x407B
#define VAR_PLAYER_HOME_STATE                            0x407B // PSF Var
#define VAR_GYM_6_STATE                               0x407C // PSF Var
#define VAR_GYM_7_STATE                               0x407D // PSF Var
#define VAR_GYM_8_STATE                               0x407E // PSF Var
#define VAR_ARANTRAZ_STATE                               0x407F // PSF Var
#define VAR_CHASILLA_STATE                               0x4080 // PSF Var
#define VAR_CURENO_PORT_STATE                               0x4081 // PSF Var
#define VAR_LITTLEROOT_HOUSES_STATE_MAY                  0x4082
#define VAR_BELEN_STATE                                0x4082 // PSF Var
#define VAR_FERRYBUILDING_STATE                                0x4083 // PSF Var
#define VAR_BIRCH_LAB_STATE                              0x4084
#define VAR_WAREHOUSE_RAVE_STATE                         0x4084 // PSF Var
#define VAR_PETALBURG_GYM_STATE                          0x4085 // 0-1: Wally tutorial, 2-6: 0-4 badges, 7: Defeated Norman, 8: Rematch Norman
#define VAR_ANBEH_BEND_STATE                          0x4085 // PSF Var
#define VAR_CONTEST_HALL_STATE                           0x4086
#define VAR_CATCHUP_EXPERIENCE_STEP_COUNTER              0x4086 // PSF Var
#define VAR_CABLE_CLUB_STATE                             0x4087
#define VAR_CONTEST_TYPE                                 0x4088
#define VAR_SECRET_BASE_INITIALIZED                      0x4089
#define VAR_CONTEST_PRIZE_PICKUP                         0x408A
#define VAR_POPIDORA_PIER_STATE                                0x408B // PSF Var
#define VAR_LITTLEROOT_HOUSES_STATE_BRENDAN              0x408C
#define VAR_CUTE_POKEMON_GUESS              0x408C // PSF Var
#define VAR_LITTLEROOT_RIVAL_STATE                       0x408D
#define VAR_DANCEBATTLE_STATE                       0x408D // PSF Var
#define VAR_BOARD_BRINEY_BOAT_STATE                      0x408E
#define VAR_DEFEATED_GLAMEOW_COUNT                      0x408E // PSF Var
#define VAR_DEVON_CORP_3F_STATE                          0x408F
#define VAR_DEFEATED_CRESALTA_VISTA_COUNT                          0x408F // PSF Var
#define VAR_BRINEY_HOUSE_STATE                           0x4090
#define VAR_CAPHE_CITY_STATE 0x4091 // PSF Var
#define VAR_LITTLEROOT_INTRO_STATE                       0x4092
#define VAR_BATTLE_8_STATE                       0x4092 // PSF Var
#define VAR_MAUVILLE_GYM_STATE                           0x4093
#define VAR_BEACH_BATTLE_STATE                           0x4093 // PSF Var
#define VAR_LILYCOVE_MUSEUM_2F_STATE                     0x4094
#define VAR_CHASILLA_AXE_STATE                     0x4094 // PSF Var
#define VAR_LILYCOVE_FAN_CLUB_STATE                      0x4095
#define VAR_QUEST_BREAKTHEINTERNET_STATE                      0x4095 // PSF Var
#define VAR_BRINEY_LOCATION                              0x4096
#define VAR_QUEST_CHALLENGEOFTHE7SISTERS_BEST_RECORD                              0x4096 // PSF Var
#define VAR_INIT_SECRET_BASE                             0x4097
#define VAR_QUEST_CHALLENGEOFTHE7SISTERS_CURRENT_RECORD                             0x4097 // PSF Var
#define VAR_PETALBURG_WOODS_STATE                        0x4098
#define VAR_QUEST_CHALLENGEOFTHE7SISTERS_LAST_RECORD                        0x4098 // PSF Var
#define VAR_LILYCOVE_CONTEST_LOBBY_STATE                 0x4099
#define VAR_QUEST_HODOUTUNNELS                 0x4099 // PSF Var
#define VAR_RUSTURF_TUNNEL_STATE                         0x409A
#define VAR_CONSTRUCTION_STRIKE_STATE                         0x409A // PSF Var
#define VAR_GOLDENGATEBRIDGE_STATE                                0x409B // PSF Var
#define VAR_ELITE_4_STATE                                0x409C
#define VAR_TIRABUDIN_PLACE_STATE                                0x409D // PSF Var
#define VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE      0x409E
#define VAR_MOSSDEEP_SPACE_CENTER_STATE                  0x409F
#define VAR_SLATEPORT_HARBOR_STATE                       0x40A0
#define VAR_INNER_CONSTRUCTION_SITE_STATE                                0x40A1 // PSF Var
#define VAR_SEAFLOOR_CAVERN_STATE                        0x40A2
#define VAR_CABLE_CAR_STATION_STATE                      0x40A3
#define VAR_SAFARI_ZONE_STATE                            0x40A4  // 0: In or out of SZ, 1: Player exiting SZ, 2: Player entering SZ
#define VAR_TRICK_HOUSE_BEING_WATCHED_STATE              0x40A5
#define VAR_TRICK_HOUSE_FOUND_TRICK_MASTER               0x40A6
#define VAR_TRICK_HOUSE_ENTRANCE_STATE                   0x40A7
#define VAR_ESPULEE_OUTSKIRTS_STATE                                0x40A8 // PSF Var
#define VAR_CYCLING_CHALLENGE_STATE                      0x40A9
#define VAR_QUEST_FOOD_TRUCK_BUREAUCRACY_STATE                      0x40A9 // PSF Var
#define VAR_SLATEPORT_MUSEUM_1F_STATE                    0x40AA
#define VAR_TRICK_HOUSE_PUZZLE_1_STATE                   0x40AB
#define VAR_DEFEATED_GARDEN_POKEMON                      0x40AB // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_2_STATE                   0x40AC
#define VAR_QUEST_GLITTERS_GOLD_STATE                   0x40AC // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_3_STATE                   0x40AD
#define VAR_QUEST_KITCHEN_ASSIGNED_ITEMS                   0x40AD // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_4_STATE                   0x40AE
#define VAR_QUEST_MANOFMANYHATS                   0x40AE // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_5_STATE                   0x40AF
#define VAR_QUEST_MUTUALAIDFUND_AMOUNT                   0x40AF // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_6_STATE                   0x40B0
#define VAR_QUEST_PERSUASIVE_PASSENGER_STATE                   0x40B0 // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE                   0x40B1
#define VAR_QUEST_RECRUITLOLCAARTISTS                   0x40B1 // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_8_STATE                   0x40B2
#define VAR_QUEST_REDOMUGGING_STATE                   0x40B2 // PSF Var
#define VAR_WEATHER_INSTITUTE_STATE                      0x40B3
#define VAR_QUEST_RESTOREHODOUGYM                      0x40B3 // PSF Var
#define VAR_SS_TIDAL_STATE                               0x40B4
#define VAR_QUEST_RESTOREESPULEEGYM                               0x40B4 // PSF Var
#define VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR              0x40B5
#define VAR_QUEST_RESTOREZENZUGYM              0x40B5 // PSF Var
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE_2                 0x40B6 // Leftover from RS, never set
#define VAR_SLATEPORT_FAN_CLUB_STATE                     0x40B7
#define VAR_LEAVERRA_FOREST_STATE                                0x40B8 // PSF Var
#define VAR_MT_PYRE_STATE                                0x40B9
#define VAR_NEW_MAUVILLE_STATE                           0x40BA
#define VAR_ROUTE99_STATE                                0x40BB // PSF Var
#define VAR_BRAVO_TRAINER_BATTLE_TOWER_ON                0x40BC
#define VAR_QUEST_SKILLLIBRARY_TM_COUNT                0x40BC //PSF Var
#define VAR_JAGGED_PASS_ASH_WEATHER                      0x40BD
#define VAR_QUEST_ULTRAWORMHOLE_WARP_DESTINATION                      0x40BD //PSF Var
#define VAR_GLASS_WORKSHOP_STATE                         0x40BE
#define VAR_QUEST_WAREHOUSEWARFARE_STATE                         0x40BE //PSF Var
#define VAR_METEOR_FALLS_STATE                           0x40BF
#define VAR_QUEST_WILDFIRERISK_ELECTRIC_COUNT                           0x40BF //PSF Var
#define VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE              0x40C0
#define VAR_QUEST_WILDFIRERISK_FIRE_COUNT              0x40C0 //PSF Var
#define VAR_TRICK_HOUSE_PRIZE_PICKUP                     0x40C1
#define VAR_QUEST_WILDFIRERISK_FLYING_COUNT                     0x40C1 //PSF Var
#define VAR_PACIFIDLOG_TM_RECEIVED_DAY                   0x40C2
#define VAR_QUEST_RPS_STREAK_COUNT                                    0x40C2 // PSF Var
#define VAR_VICTORY_ROAD_1F_STATE                        0x40C3
#define VAR_FOSSIL_RESURRECTION_STATE                    0x40C4
#define VAR_WHICH_FOSSIL_REVIVED                         0x40C5
#define VAR_STEVENS_HOUSE_STATE                          0x40C6
#define VAR_OLDALE_RIVAL_STATE                           0x40C7
#define VAR_JAGGED_PASS_STATE                            0x40C8
#define VAR_SCOTT_PETALBURG_ENCOUNTER                    0x40C9
#define VAR_SKY_PILLAR_STATE                             0x40CA
#define VAR_MIRAGE_TOWER_STATE                           0x40CB
#define VAR_FOSSIL_MANIAC_STATE                          0x40CC
#define VAR_CABLE_CLUB_TUTORIAL_STATE                    0x40CD
#define VAR_FRONTIER_BATTLE_MODE                         0x40CE
#define VAR_FRONTIER_FACILITY                            0x40CF
#define VAR_HAS_ENTERED_BATTLE_FRONTIER                  0x40D0 // Var is used like a flag.
#define VAR_SCOTT_STATE                                  0x40D1
#define VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE               0x40D2
#define VAR_DEX_UPGRADE_JOHTO_STARTER_STATE              0x40D3
#define VAR_SS_TIDAL_SCOTT_STATE                         0x40D4 // Always equal to FLAG_MET_SCOTT_ON_SS_TIDAL
#define VAR_ROAMER_POKEMON                               0x40D5 // 0 = Latias, 1 = Latios
#define VAR_TRAINER_HILL_IS_ACTIVE                       0x40D6
#define VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE                 0x40D7
#define VAR_SOOTOPOLIS_WALLACE_STATE                     0x40D8
#define VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT 0x40D9
#define VAR_EARTHQUAKE_COUNT                             0x40D9
#define VAR_REGISTER_BIRCH_STATE                         0x40DA
#define VAR_TIME_TRAVEL_STATE                            0x40DA // PSF Var
#define VAR_ROUTE10_STATE                                0x40DB // PSF Var
#define VAR_ROBINWILLIAMSTUNNEL_STATE                                0x40DC // PSF Var
#define VAR_GIFT_PICHU_SLOT                              0x40DD
#define VAR_GIFT_UNUSED_1                                0x40DE // Var is written to, but never read
#define VAR_GIFT_UNUSED_2                                0x40DF // Var is written to, but never read
#define VAR_GIFT_UNUSED_3                                0x40E0 // Var is written to, but never read
#define VAR_GIFT_UNUSED_4                                0x40E1 // Var is written to, but never read
#define VAR_GIFT_UNUSED_5                                0x40E2 // Var is written to, but never read
#define VAR_GIFT_UNUSED_6                                0x40E3 // Var is written to, but never read
#define VAR_GIFT_UNUSED_7                                0x40E4 // var is written to, but never read
#define VAR_SHARPRISESPIRE_CONFERENCE_STATE                                0x40E5 // PSF Var
#define VAR_DAILY_SLOTS                                  0x40E6
#define VAR_DAILY_WILDS                                  0x40E7
#define VAR_DAILY_BLENDER                                0x40E8
#define VAR_DAILY_PLANTED_BERRIES                        0x40E9
#define VAR_DAILY_PICKED_BERRIES                         0x40EA
#define VAR_DAILY_ROULETTE                               0x40EB
#define VAR_SECRET_BASE_STEP_COUNTER                     0x40EC // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LAST_ITEM_USED                   0x40ED // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LOW_TV_FLAGS                     0x40EE // Used by Secret Base TV programs
#define VAR_SECRET_BASE_HIGH_TV_FLAGS                    0x40EF // Used by Secret Base TV programs
#define VAR_SECRET_BASE_IS_NOT_LOCAL                     0x40F0 // Set to TRUE while in another player's secret base.
#define VAR_DAILY_BP                                     0x40F1
#define VAR_WALLY_CALL_STEP_COUNTER                      0x40F2
#define VAR_ANEWSTRIKE_STEP_COUNTER                      0x40F2 // PSF Var
#define VAR_SCOTT_FORTREE_CALL_STEP_COUNTER              0x40F3
#define VAR_BAIYA_CALL_ARANTRAZ_STEP_COUNTER                 0x40F3 // PSF Var
#define VAR_ROXANNE_CALL_STEP_COUNTER                    0x40F4
#define VAR_BUZZR_STEP_COUNTER                         0x40F4 // PSF Var
#define VAR_SCOTT_BF_CALL_STEP_COUNTER                   0x40F5
#define VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER             0x40F6
#define VAR_EARTHQUAKE_STEP_COUNTER                      0x40F6
#define VAR_SHARPRISE_SPIRE_PRODUCTION_STATE                                0x40F7 // PSF Var
#define VAR_TOWER_RAID_STATE                                0x40F8 // PSF Var
#define VAR_PARC_STATE                                0x40F9 // PSF Var
#define VAR_MANHUNT_STATE                                   0x40FA // PSF Var
#define VAR_GROUP_OF_ASSHOLES_STATE                                0x40FB // PSF Var
#define VAR_HOWDISAPPOINTING_STATE                                0x40FC // PSF Var
#define VAR_KEIYING_RAISON_DETRE_STATE                                0x40FD // PSF Var
#define VAR_LAST_RESTORATION_TAKEDOWN_QUEST                                0x40FE // PSF Var
#define VAR_LETSBURNTHISMOTHERSTATE                                0x40FF // PSF Var

#define VARS_END                                         0x40FF
#define VARS_COUNT                                       (VARS_END - VARS_START + 1)

#define SPECIAL_VARS_START            0x8000
// special vars
// They are commonly used as parameters to commands, or return values from commands.
#define VAR_0x8000                    0x8000
#define VAR_0x8001                    0x8001
#define VAR_0x8002                    0x8002
#define VAR_0x8003                    0x8003
#define VAR_0x8004                    0x8004
#define VAR_0x8005                    0x8005
#define VAR_0x8006                    0x8006
#define VAR_0x8007                    0x8007
#define VAR_0x8008                    0x8008
#define VAR_0x8009                    0x8009
#define VAR_0x800A                    0x800A
#define VAR_0x800B                    0x800B
#define VAR_FACING                    0x800C
#define VAR_RESULT                    0x800D
#define VAR_ITEM_ID                   0x800E
#define VAR_LAST_TALKED               0x800F
#define VAR_CONTEST_RANK              0x8010
#define VAR_CONTEST_CATEGORY          0x8011
#define VAR_MON_BOX_ID                0x8012
#define VAR_MON_BOX_POS               0x8013
#define VAR_CUTSCENE_SKIP             0x8014
#define VAR_TRAINER_BATTLE_OPPONENT_A 0x8015 // Alias of gTrainerBattleParameter.params.opponentA

#define SPECIAL_VARS_END              0x8015

// If an overworld trigger uses this pseudo-variable as the trigger check,
// then the script will be run using RunScriptImmediately instead of in the
// global script context. This means it will run faster, but cannot do any
// cutscenes nor call a wait command. Used for weather effects in vanilla.
#define TRIGGER_RUN_IMMEDIATELY   0

// Temp var aliases
#define VAR_TEMP_CHALLENGE_STATUS  VAR_TEMP_0

#define VAR_TEMP_MIXED_RECORDS         VAR_TEMP_0
#define VAR_TEMP_RECORD_MIX_GIFT_ITEM  VAR_TEMP_1

#define VAR_TEMP_PLAYING_PYRAMID_MUSIC  VAR_TEMP_E

#define VAR_TEMP_FRONTIER_TUTOR_SELECTION  VAR_TEMP_D
#define VAR_TEMP_FRONTIER_TUTOR_ID         VAR_TEMP_E

#define VAR_TEMP_TRANSFERRED_SPECIES  VAR_TEMP_1

// Other var aliases

// When the variable 0x8000 is set to PLAYER_CAN_HEAL, HealPlayerParty
// will make sure to always heal the Player's party regardless of
// In-Game Options such as "Center Healing".
#define PLAYER_CAN_HEAL    42069

#if TESTING
#define TESTING_VARS_START                  0x9000
#define TESTING_VAR_DIFFICULTY              (TESTING_VARS_START + 0x0)
#define TESTING_VAR_STARTING_STATUS         (TESTING_VARS_START + 0x1)
#define TESTING_VAR_STARTING_STATUS_TIMER   (TESTING_VARS_START + 0x2)
#define TESTING_VAR_UNUSED_3                (TESTING_VARS_START + 0x3)
#define TESTING_VAR_UNUSED_4                (TESTING_VARS_START + 0x4)
#define TESTING_VAR_UNUSED_5                (TESTING_VARS_START + 0x5)
#define TESTING_VAR_UNUSED_6                (TESTING_VARS_START + 0x6)
#define TESTING_VAR_UNUSED_7                (TESTING_VARS_START + 0x7)
#endif // TESTING

#endif // GUARD_CONSTANTS_VARS_H
