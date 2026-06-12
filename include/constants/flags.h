#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"
#include "constants/rematches.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10)
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
#define NUM_TEMP_FLAGS   (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)

//reserved for debug                                                 
#define FLAG_UNUSED_0x020                                            0x20 // Unused                                                     Flag
#define FLAG_UNUSED_0x021                                            0x21 // Unused                                                     Flag
#define FLAG_UNUSED_0x022                                            0x22 // Unused                                                     Flag
#define FLAG_UNUSED_0x023                                            0x23 // Unused                                                     Flag
#define FLAG_UNUSED_0x024                                            0x24 // Unused                                                     Flag
#define FLAG_UNUSED_0x025                                            0x25 // Unused                                                     Flag
#define FLAG_UNUSED_0x026                                            0x26 // Unused                                                     Flag

// Scripts
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL                      0x27
#define FLAG_SET_WALL_CLOCK                                          0x28
#define FLAG_RESCUED_BIRCH                                           0x29
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS                               0x2A
#define FLAG_HIDE_CONTEST_POKE_BALL                                  0x2B  // Always set after new game, object it hides is added                                                     directly
#define FLAG_MET_RIVAL_MOM                                           0x2C
#define FLAG_BIRCH_AIDE_MET                                          0x2D
#define FLAG_DECLINED_BIKE                                           0x2E
#define FLAG_RECEIVED_BIKE                                           0x2F

#define FLAG_ACT_1_1_COMPLETE                                        0x27
//#define FLAG_SET_WALL_CLOCK                                        0x28
#define FLAG_BAIYA_CALL_ARANTRAZ                                     0x29
#define FLAG_CONSTRUCTION_BREAKING_NEWS                              0x2A
#define FLAG_DEFEATED_CONSTRUCTION_MON_A                             0x2B
#define FLAG_DEFEATED_CONSTRUCTION_MON_B                             0x2C
#define FLAG_DEFEATED_LAB_DYNAMAX                                    0x2D
#define FLAG_DEFEATED_LAB_MON_A                                      0x2E
#define FLAG_DEFEATED_LAB_MON_B                                      0x2F

#define FLAG_WATTSON_REMATCH_AVAILABLE                               0x30
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS                            0x31
#define FLAG_GOOD_LUCK_SAFARI_ZONE                                   0x32 // Set after talking to NPC blocking Safari Zone entrance/exit                                                     once.
#define FLAG_RECEIVED_WAILMER_PAIL                                   0x33
#define FLAG_RECEIVED_POKEBLOCK_CASE                                 0x34
#define FLAG_RECEIVED_SECRET_POWER                                   0x35
#define FLAG_MET_TEAM_AQUA_HARBOR                                    0x36
#define FLAG_TV_EXPLAINED                                            0x37
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE                             0x38
#define FLAG_OCEANIC_MUSEUM_MET_REPORTER                             0x39
#define FLAG_RECEIVED_HM_STRENGTH                                    0x3A
#define FLAG_RECEIVED_HM_ROCK_SMASH                                  0x3B
#define FLAG_WHITEOUT_TO_LAVARIDGE                                   0x3C // Set after defeating Flannery, so the player cant white out from poison before receiving Go                                                     Goggles
#define FLAG_RECEIVED_HM_FLASH                                       0x3D
#define FLAG_RECEIVED_HM_FLY                                         0x3E
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT                          0x3F

#define FLAG_FACILITY_UNLOCK_LIKO                                    0x30
#define FLAG_FACILITY_UNLOCK_CHARLOTTE                               0x31
#define FLAG_FACILITY_UNLOCK_AMI_ARGENTO                             0x32
#define FLAG_FACILITY_UNLOCK_TALA                                    0x33
#define FLAG_FACILITY_UNLOCK_DIMU                                    0x34
#define FLAG_FACILITY_UNLOCK_ADAORA                                  0x35
#define FLAG_FACILITY_UNLOCK_EMRYS                                   0x36
#define FLAG_FACILITY_UNLOCK_MAGNUS                                  0x37
#define FLAG_FACILITY_UNLOCK_BD                                      0x38
#define FLAG_FACILITY_UNLOCK_BAIYA                                   0x39
#define FLAG_FACILITY_UNLOCK_NERIENE                                 0x3A
#define FLAG_FACILITY_UNLOCK_FRANK                                   0x3B
#define FLAG_FACILITY_UNLOCK_SHINZO                                  0x3C
#define FLAG_FACILITY_UNLOCK_KEI_YING                                0x3D
#define FLAG_FACILITY_UNLOCK_BELEN                                   0x3E
#define FLAG_FACILITY_UNLOCK_ELEANOR                                 0x3F

#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE                          0x40
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER                              0x41 // Used in order to activate a phone call from Scott, inviting the player to the SS                                                     Tidal.
#define FLAG_RECEIVED_METEORITE                                      0x42
#define FLAG_ADVENTURE_STARTED                                       0x43 // RECEIVED                                                     Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER                             0x44 // Set when Team Magma is defeated at Mossdeep's Space                                                     Center.
#define FLAG_MET_HIDDEN_POWER_GIVER                                  0x45
#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE                            0x46
#define FLAG_LANDMARK_MIRAGE_TOWER                                   0x47
#define FLAG_RECEIVED_TM_BRICK_BREAK                                 0x48
#define FLAG_RECEIVED_HM_SURF                                        0x49
#define FLAG_RECEIVED_HM_DIVE                                        0x4A
#define FLAG_REGISTER_RIVAL_POKENAV                                  0x4B
#define FLAG_DEFEATED_RIVAL_ROUTE_104                                0x4C
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD                             0x4D
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER                             0x4E
#define FLAG_ENABLE_ROXANNE_FIRST_CALL                               0x4F // Set after defeating Brawly. This will activate a call with Roxanne in order to register                                                     her.

#define FLAG_FOUGHT_FIRST_FACILITY_BOSS                              0x40
#define FLAG_EDUCATED_FOG_ROUTE11                                    0x41
#define FLAG_EDUCATED_FOG_ROUTE5                                     0x42
//#define FLAG_ADVENTURE_STARTED                                     0x43 // RECEIVED                                                     Pokédex.
#define FLAG_HIDE_FACILITY_OPPONENT                                  0x44
#define FLAG_IS_RESIDO_CHAMPION                                      0x45
#define FLAG_LOCKEDOUT_PLAYED                                        0x46
#define FLAG_PLAYED_CATCH_TUTORIAL                                   0x47
#define FLAG_PLAYER_HAS_SEEN_SHINY                                   0x48
#define FLAG_QUEST_PERSUASIVE_PASSENGER_PLAYER_KIDNAPPED             0x49
#define FLAG_QUEST_PERSUASIVE_SIBLING                                0x4A
#define FLAG_QUEST_ULTRAWORMHOLE_FIRST_TOTEM                         0x4B
#define FLAG_QUEST_WAREHOUSE_WARFARE_EXPLAINED                       0x4C
#define FLAG_QUEST_WAREHOUSEWARFARE_BARGE2_ENGINE_CLEAR              0x4D
#define FLAG_QUEST_WAREHOUSEWARFARE_BARGE2_WORKERS_CLEAR             0x4E
#define FLAG_QUEST_WAREHOUSEWARFARE_BARGE3_ENGINE_CLEAR              0x4F

#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN                          0x50
#define FLAG_DEFEATED_RIVAL_ROUTE103                                 0x51
#define FLAG_RECEIVED_DOLL_LANETTE                                   0x52
#define FLAG_RECEIVED_POTION_OLDALE                                  0x53
#define FLAG_RECEIVED_AMULET_COIN                                    0x54
#define FLAG_PENDING_DAYCARE_EGG                                     0x55
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY                          0x56
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL                         0x57 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register                                                     Wally.
#define FLAG_RECEIVED_HM_CUT                                         0x58
#define FLAG_SCOTT_CALL_FORTREE_GYM                                  0x59 // Triggers call from Scott after defeating                                                     Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY                           0x5A
#define FLAG_RECEIVED_6_SODA_POP                                     0x5B
#define FLAG_DEFEATED_SEASHORE_HOUSE                                 0x5C
#define FLAG_DEVON_GOODS_STOLEN                                      0x5D
#define FLAG_RECOVERED_DEVON_GOODS                                   0x5E
#define FLAG_RETURNED_DEVON_GOODS                                    0x5F

#define FLAG_RECIEVED_LEFTOVERS                                      0x50
#define FLAG_RECIEVED_NURSERY_EGG                                    0x51
#define FLAG_TIMELINE_FALSE                                          0x52
#define FLAG_TIMELINE_TIMETRAVEL                                     0x53
#define FLAG_TIMELINE_TRUE                                           0x54
//#define FLAG_PENDING_DAYCARE_EGG                                   0x55
#define FLAG_UNHOUSED_REQUEST                                        0x56
#define FLAG_SILICON_UNUSED_0x57                                     0x57
#define FLAG_SILICON_UNUSED_0x58                                     0x58
#define FLAG_SILICON_UNUSED_0x59                                     0x59
#define FLAG_SILICON_UNUSED_0x5A                                     0x5A
#define FLAG_SILICON_UNUSED_0x5B                                     0x5B
#define FLAG_SILICON_UNUSED_0x5C                                     0x5C
#define FLAG_SILICON_UNUSED_0x5D                                     0x5D
#define FLAG_SILICON_UNUSED_0x5E                                     0x5E
#define FLAG_SILICON_UNUSED_0x5F                                     0x5F

#define FLAG_CAUGHT_LUGIA                                            0x60
#define FLAG_CAUGHT_HO_OH                                            0x61
#define FLAG_MR_BRINEY_SAILING_INTRO                                 0x62
#define FLAG_DOCK_REJECTED_DEVON_GOODS                               0x63
#define FLAG_DELIVERED_DEVON_GOODS                                   0x64
#define FLAG_RECEIVED_CASTFORM                                       0x65
#define FLAG_RECEIVED_SUPER_ROD                                      0x66
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED                            0x67
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED                          0x68
#define FLAG_FORTREE_NPC_TRADE_COMPLETED                             0x69
#define FLAG_BATTLE_FRONTIER_TRADE_DONE                              0x6A
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE                              0x6B
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE                           0x6C
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN             0x6D
#define FLAG_COOL_PAINTING_MADE                                      0x6E
#define FLAG_BEAUTY_PAINTING_MADE                                    0x6F

#define FLAG_QUEST_ALLTHATGLITTERS_DEFEATED_POKEMON                  0x60
#define FLAG_QUEST_ULTRAWORMHOLE_BATTLED_ULTRA_BEAST                 0x61
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_0                     0x62
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_1                     0x63
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_2                     0x64
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_3                     0x65
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_4                     0x66
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_5                     0x67
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_6                     0x68
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_7                     0x69
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_8                     0x6A
#define FLAG_QUEST_ULTRAWORMHOLE_TOTEM_POKEMON_9                     0x6B
#define FLAG_RECEIVED_BREEDING_CENTER_WELCOME_KIT                    0x6C
#define FLAG_TALKED_TO_ELEANOR_POSTGAME                              0x6D
#define FLAG_CHOSEN_RESTORED_MULTI_BATTLE_NPC_PARTNER                0x6E
#define FLAG_SILICON_UNUSED_0x6F                                     0x6F

#define FLAG_CUTE_PAINTING_MADE                                      0x70
#define FLAG_SMART_PAINTING_MADE                                     0x71
#define FLAG_TOUGH_PAINTING_MADE                                     0x72
#define FLAG_RECEIVED_TM_ROCK_TOMB                                   0x73
#define FLAG_RECEIVED_TM_BULK_UP                                     0x74
#define FLAG_RECEIVED_TM_SHOCK_WAVE                                  0x75
#define FLAG_RECEIVED_TM_OVERHEAT                                    0x76
#define FLAG_RECEIVED_TM_FACADE                                      0x77
#define FLAG_RECEIVED_TM_AERIAL_ACE                                  0x78
#define FLAG_RECEIVED_TM_CALM_MIND                                   0x79
#define FLAG_RECEIVED_TM_WATER_PULSE                                 0x7A
#define FLAG_HIDE_SECRET_BASE_TRAINER                                0x7B
#define FLAG_DECORATION_1                                            0x7C
#define FLAG_DECORATION_2                                            0x7D
#define FLAG_DECORATION_3                                            0x7E
#define FLAG_DECORATION_4                                            0x7F

#define FLAG_TREE_ROUTE1_A                                           0x70
#define FLAG_TREE_ROUTE1_B                                           0x71
#define FLAG_TREE_ROUTE2_A                                           0x72
#define FLAG_TREE_ROUTE2_B                                           0x73
#define FLAG_TREE_ROUTE3_A                                           0x74
#define FLAG_TREE_ROUTE3_B                                           0x75
#define FLAG_TREE_ROUTE4_A                                           0x76
#define FLAG_TREE_ROUTE4_B                                           0x77
#define FLAG_TREE_ROUTE5_A                                           0x78
#define FLAG_TREE_ROUTE5_B                                           0x79
#define FLAG_TREE_ROUTE6_A                                           0x7A
#define FLAG_TREE_ROUTE6_B                                           0x7B
#define FLAG_TREE_ROUTE7_A                                           0x7C
#define FLAG_TREE_ROUTE7_B                                           0x7D
#define FLAG_TREE_ROUTE8_A                                           0x7E
#define FLAG_TREE_ROUTE8_B                                           0x7F

#define FLAG_DECORATION_5                                            0x80
#define FLAG_DECORATION_6                                            0x81
#define FLAG_DECORATION_7                                            0x82
#define FLAG_DECORATION_8                                            0x83
#define FLAG_DECORATION_9                                            0x84
#define FLAG_DECORATION_10                                           0x85
#define FLAG_DECORATION_11                                           0x86
#define FLAG_DECORATION_12                                           0x87
#define FLAG_DECORATION_13                                           0x88
#define FLAG_DECORATION_14                                           0x89
#define FLAG_RECEIVED_POKENAV                                        0x8A
#define FLAG_DELIVERED_STEVEN_LETTER                                 0x8B
#define FLAG_DEFEATED_WALLY_MAUVILLE                                 0x8C
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F                          0x8D
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP                             0x8E
#define FLAG_WALLY_SPEECH                                            0x8F

#define FLAG_TREE_ROUTE9_A                                           0x80
#define FLAG_TREE_ROUTE9_B                                           0x81
#define FLAG_TREE_ROUTE10_A                                          0x82
#define FLAG_TREE_ROUTE10_B                                          0x83
#define FLAG_TREE_ROUTE11_A                                          0x84
#define FLAG_TREE_ROUTE11_B                                          0x85
#define FLAG_TREE_ROUTE12_A                                          0x86
#define FLAG_TREE_ROUTE12_B                                          0x87
#define FLAG_TREE_ROUTE13_A                                          0x88
#define FLAG_TREE_ROUTE13_B                                          0x89
#define FLAG_TREE_ROUTE14_A                                          0x8A
#define FLAG_TREE_ROUTE14_B                                          0x8B
#define FLAG_TREE_ROUTE16_A                                          0x8C
#define FLAG_TREE_ROUTE16_B                                          0x8D
#define FLAG_TREE_ROUTE18_A                                          0x8E
#define FLAG_TREE_ROUTE18_B                                          0x8F

#define FLAG_RUSTURF_TUNNEL_OPENED                                   0x90
#define FLAG_RECEIVED_RED_SCARF                                      0x91
#define FLAG_RECEIVED_BLUE_SCARF                                     0x92
#define FLAG_RECEIVED_PINK_SCARF                                     0x93
#define FLAG_RECEIVED_GREEN_SCARF                                    0x94
#define FLAG_RECEIVED_YELLOW_SCARF                                   0x95
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER 0x96
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS                            0x97
#define FLAG_MET_ARCHIE_METEOR_FALLS                                 0x98
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON                           0x99
#define FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON                         0x9A
#define FLAG_FAN_CLUB_STRENGTH_SHARED                                0x9B // Set when you rate the strength of another trainer in Lilycove's Trainer Fan                                                     Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO                                 0x9C
#define FLAG_RECEIVED_RED_OR_BLUE_ORB                                0x9D
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO                          0x9E
#define FLAG_ENABLE_WALLY_MATCH_CALL                                 0x9F

#define FLAG_TREE_ROUTE20_A                                          0x90
#define FLAG_TREE_ROUTE20_B                                          0x91
#define FLAG_TREE_ROUTE22_A                                          0x92
#define FLAG_TREE_ROUTE22_B                                          0x93
#define FLAG_TREE_ROUTE98_A                                          0x94
#define FLAG_TREE_ROUTE98_B                                          0x95
#define FLAG_TREE_ROUTE99_A                                          0x96
#define FLAG_TREE_ROUTE99_B                                          0x97
#define FLAG_TREE_ROUTE100_A                                         0x98
#define FLAG_TREE_ROUTE100_B                                         0x99
#define FLAG_TREE_ROUTE_A_A                                          0x9A
#define FLAG_TREE_ROUTE_A_B                                          0x9B
#define FLAG_TREE_ROUTE_B_A                                          0x9C
#define FLAG_TREE_ROUTE_B_B                                          0x9D
#define FLAG_TREE_ROUTE_C_A                                          0x9E
#define FLAG_TREE_ROUTE_C_B                                          0x9F

#define FLAG_ENABLE_SCOTT_MATCH_CALL                                 0xA0
#define FLAG_ENABLE_MOM_MATCH_CALL                                   0xA1
#define FLAG_MET_DIVING_TREASURE_HUNTER                              0xA2
#define FLAG_MET_WAILMER_TRAINER                                     0xA3
#define FLAG_EVIL_LEADER_PLEASE_STOP                                 0xA4
#define FLAG_RECEIVED_GO_GOGGLES                                     0xA5
#define FLAG_WINGULL_SENT_ON_ERRAND                                  0xA6
#define FLAG_RECEIVED_MENTAL_HERB                                    0xA7
#define FLAG_WINGULL_DELIVERED_MAIL                                  0xA8
#define FLAG_RECEIVED_20_COINS                                       0xA9
#define FLAG_RECEIVED_STARTER_DOLL                                   0xAA
#define FLAG_RECEIVED_GOOD_ROD                                       0xAB
#define FLAG_REGI_DOORS_OPENED                                       0xAC
#define FLAG_RECEIVED_TM_RETURN                                      0xAD
#define FLAG_RECEIVED_TM_SLUDGE_BOMB                                 0xAE
#define FLAG_RECEIVED_TM_ROAR                                        0xAF

#define FLAG_TREE_ROUTE_D_A                                          0xA0
#define FLAG_TREE_ROUTE_D_B                                          0xA1
#define FLAG_TREE_ROUTE_E_A                                          0xA2
#define FLAG_TREE_ROUTE_E_B                                          0xA3
#define FLAG_SILICON_UNUSED_0xA4                                     0xA4
#define FLAG_SILICON_UNUSED_0xA5                                     0xA5
#define FLAG_SILICON_UNUSED_0xA6                                     0xA6
#define FLAG_SILICON_UNUSED_0xA7                                     0xA7
#define FLAG_SILICON_UNUSED_0xA8                                     0xA8
#define FLAG_SILICON_UNUSED_0xA9                                     0xA9
#define FLAG_SILICON_UNUSED_0xAA                                     0xAA
#define FLAG_SILICON_UNUSED_0xAB                                     0xAB
#define FLAG_SILICON_UNUSED_0xAC                                     0xAC
#define FLAG_SILICON_UNUSED_0xAD                                     0xAD
#define FLAG_SILICON_UNUSED_0xAE                                     0xAE
#define FLAG_SILICON_UNUSED_0xAF                                     0xAF

#define FLAG_RECEIVED_TM_GIGA_DRAIN                                  0xB0
#define FLAG_RECEIVED_TM_REST                                        0xB1
#define FLAG_RECEIVED_TM_ATTRACT                                     0xB2
#define FLAG_RECEIVED_GLASS_ORNAMENT                                 0xB3
#define FLAG_RECEIVED_SILVER_SHIELD                                  0xB4
#define FLAG_RECEIVED_GOLD_SHIELD                                    0xB5
#define FLAG_USED_STORAGE_KEY                                        0xB6
#define FLAG_USED_ROOM_1_KEY                                         0xB7
#define FLAG_USED_ROOM_2_KEY                                         0xB8
#define FLAG_USED_ROOM_4_KEY                                         0xB9
#define FLAG_USED_ROOM_6_KEY                                         0xBA
#define FLAG_MET_PROF_COZMO                                          0xBB
#define FLAG_RECEIVED_WAILMER_DOLL                                   0xBC
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104                         0xBD
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS                              0xBE
#define FLAG_RECEIVED_SPELON_BERRY                                   0xBF

#define FLAG_SILICON_UNUSED_0xB0                                     0xB0
#define FLAG_SILICON_UNUSED_0xB1                                     0xB1
#define FLAG_SILICON_UNUSED_0xB2                                     0xB2
#define FLAG_SILICON_UNUSED_0xB3                                     0xB3
#define FLAG_SILICON_UNUSED_0xB4                                     0xB4
#define FLAG_SILICON_UNUSED_0xB5                                     0xB5
#define FLAG_SILICON_UNUSED_0xB6                                     0xB6
#define FLAG_SILICON_UNUSED_0xB7                                     0xB7
#define FLAG_SILICON_UNUSED_0xB8                                     0xB8
#define FLAG_SILICON_UNUSED_0xB9                                     0xB9
#define FLAG_SILICON_UNUSED_0xBA                                     0xBA
#define FLAG_SILICON_UNUSED_0xBB                                     0xBB
#define FLAG_SILICON_UNUSED_0xBC                                     0xBC
#define FLAG_SILICON_UNUSED_0xBD                                     0xBD
#define FLAG_SILICON_UNUSED_0xBE                                     0xBE
#define FLAG_SILICON_UNUSED_0xBF                                     0xBF

#define FLAG_RECEIVED_PAMTRE_BERRY                                   0xC0
#define FLAG_RECEIVED_WATMEL_BERRY                                   0xC1
#define FLAG_RECEIVED_DURIN_BERRY                                    0xC2
#define FLAG_RECEIVED_BELUE_BERRY                                    0xC3
#define FLAG_ENABLE_RIVAL_MATCH_CALL                                 0xC4
#define FLAG_RECEIVED_CHARCOAL                                       0xC5
#define FLAG_LATIOS_OR_LATIAS_ROAMING                                0xC6
#define FLAG_RECEIVED_REPEAT_BALL                                    0xC7
#define FLAG_RECEIVED_OLD_ROD                                        0xC8
#define FLAG_RECEIVED_COIN_CASE                                      0xC9
#define FLAG_RETURNED_RED_OR_BLUE_ORB                                0xCA
#define FLAG_RECEIVED_TM_SNATCH                                      0xCB
#define FLAG_RECEIVED_TM_DIG                                         0xCC
#define FLAG_RECEIVED_TM_BULLET_SEED                                 0xCD
#define FLAG_ENTERED_ELITE_FOUR                                      0xCE
#define FLAG_RECEIVED_TM_HIDDEN_POWER                                0xCF

#define FLAG_SILICON_UNUSED_0xC0                                     0xC0
#define FLAG_SILICON_UNUSED_0xC1                                     0xC1
#define FLAG_SILICON_UNUSED_0xC2                                     0xC2
#define FLAG_SILICON_UNUSED_0xC3                                     0xC3
#define FLAG_SILICON_UNUSED_0xC4                                     0xC4
#define FLAG_SILICON_UNUSED_0xC5                                     0xC5
#define FLAG_SILICON_UNUSED_0xC6                                     0xC6
#define FLAG_SILICON_UNUSED_0xC7                                     0xC7
#define FLAG_SILICON_UNUSED_0xC8                                     0xC8
#define FLAG_SILICON_UNUSED_0xC9                                     0xC9
#define FLAG_SILICON_UNUSED_0xCA                                     0xCA
#define FLAG_SILICON_UNUSED_0xCB                                     0xCB
#define FLAG_SILICON_UNUSED_0xCC                                     0xCC
#define FLAG_SILICON_UNUSED_0xCD                                     0xCD
#define FLAG_SILICON_UNUSED_0xCE                                     0xCE
#define FLAG_SILICON_UNUSED_0xCF                                     0xCF

#define FLAG_RECEIVED_TM_TORMENT                                     0xD0
#define FLAG_RECEIVED_LAVARIDGE_EGG                                  0xD1
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON                             0xD2
#define FLAG_SECRET_BASE_REGISTRY_ENABLED                            0xD3
#define FLAG_RECEIVED_TM_THIEF                                       0xD4
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE                           0xD5
#define FLAG_RECEIVED_EXP_SHARE                                      0xD6
#define FLAG_POKERUS_EXPLAINED                                       0xD7
#define FLAG_RECEIVED_RUNNING_SHOES                                  0xD8
#define FLAG_RECEIVED_QUICK_CLAW                                     0xD9
#define FLAG_RECEIVED_KINGS_ROCK                                     0xDA
#define FLAG_RECEIVED_MACHO_BRACE                                    0xDB
#define FLAG_RECEIVED_SOOTHE_BELL                                    0xDC
#define FLAG_RECEIVED_WHITE_HERB                                     0xDD
#define FLAG_RECEIVED_SOFT_SAND                                      0xDE
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL                            0xDF

#define FLAG_SILICON_UNUSED_0xD0                                     0xD0
#define FLAG_SILICON_UNUSED_0xD1                                     0xD1
#define FLAG_SILICON_UNUSED_0xD2                                     0xD2
#define FLAG_SILICON_UNUSED_0xD3                                     0xD3
#define FLAG_SILICON_UNUSED_0xD4                                     0xD4
#define FLAG_SILICON_UNUSED_0xD5                                     0xD5
#define FLAG_SILICON_UNUSED_0xD6                                     0xD6
#define FLAG_SILICON_UNUSED_0xD7                                     0xD7
#define FLAG_SILICON_UNUSED_0xD8                                     0xD8
#define FLAG_SILICON_UNUSED_0xD9                                     0xD9
#define FLAG_SILICON_UNUSED_0xDA                                     0xDA
#define FLAG_SILICON_UNUSED_0xDB                                     0xDB
#define FLAG_SILICON_UNUSED_0xDC                                     0xDC
#define FLAG_SILICON_UNUSED_0xDD                                     0xDD
#define FLAG_SILICON_UNUSED_0xDE                                     0xDE
#define FLAG_SILICON_UNUSED_0xDF                                     0xDF

#define FLAG_RECEIVED_CLEANSE_TAG                                    0xE0
#define FLAG_RECEIVED_FOCUS_BAND                                     0xE1
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE                          0xE2
#define FLAG_RECEIVED_DEVON_SCOPE                                    0xE3
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE                          0xE4
#define FLAG_MET_DEVON_EMPLOYEE                                      0xE5
#define FLAG_MET_RIVAL_RUSTBORO                                      0xE6
#define FLAG_RECEIVED_SILK_SCARF                                     0xE7
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120                          0xE8
#define FLAG_RECEIVED_SS_TICKET                                      0xE9
#define FLAG_MET_RIVAL_LILYCOVE                                      0xEA
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE                       0xEB
#define FLAG_EXCHANGED_SCANNER                                       0xEC
#define FLAG_KECLEON_FLED_FORTREE                                    0xED
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS                           0xEE
#define FLAG_RECEIVED_MIRACLE_SEED                                   0xEF

#define FLAG_SILICON_UNUSED_0xE0                                     0xE0
#define FLAG_SILICON_UNUSED_0xE1                                     0xE1
#define FLAG_SILICON_UNUSED_0xE2                                     0xE2
#define FLAG_SILICON_UNUSED_0xE3                                     0xE3
#define FLAG_SILICON_UNUSED_0xE4                                     0xE4
#define FLAG_SILICON_UNUSED_0xE5                                     0xE5
#define FLAG_SILICON_UNUSED_0xE6                                     0xE6
#define FLAG_SILICON_UNUSED_0xE7                                     0xE7
#define FLAG_SILICON_UNUSED_0xE8                                     0xE8
#define FLAG_SILICON_UNUSED_0xE9                                     0xE9
#define FLAG_SILICON_UNUSED_0xEA                                     0xEA
#define FLAG_SILICON_UNUSED_0xEB                                     0xEB
#define FLAG_SILICON_UNUSED_0xEC                                     0xEC
#define FLAG_SILICON_UNUSED_0xED                                     0xED
#define FLAG_SILICON_UNUSED_0xEE                                     0xEE
#define FLAG_SILICON_UNUSED_0xEF                                     0xEF

#define FLAG_RECEIVED_BELDUM                                         0xF0
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK                           0xF1
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER                             0xF2
#define FLAG_RIVAL_LEFT_FOR_ROUTE103                                 0xF3
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER                            0xF4
#define FLAG_HAS_MATCH_CALL                                          0xF5
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV                             0xF6
#define FLAG_REGISTERED_STEVEN_POKENAV                               0xF7
#define FLAG_ENABLE_NORMAN_MATCH_CALL                                0xF8
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN                         0xF9 // Set after you follow Steven to the entrance of the Cave of                                                     Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS                                   0xFA
#define FLAG_MET_MAXIE_SOOTOPOLIS                                    0xFB
#define FLAG_MET_SCOTT_RUSTBORO                                      0xFC
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR                              0xFD // Set after speaking to Wallace within the Cave of                                                     Origin.
#define FLAG_RECEIVED_HM_WATERFALL                                   0xFE
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS                            0xFF

#define FLAG_SILICON_UNUSED_0xF0                                     0xF0
#define FLAG_SILICON_UNUSED_0xF1                                     0xF1
#define FLAG_SILICON_UNUSED_0xF2                                     0xF2
#define FLAG_SILICON_UNUSED_0xF3                                     0xF3
#define FLAG_SILICON_UNUSED_0xF4                                     0xF4
#define FLAG_SILICON_UNUSED_0xF5                                     0xF5
#define FLAG_SILICON_UNUSED_0xF6                                     0xF6
#define FLAG_SILICON_UNUSED_0xF7                                     0xF7
#define FLAG_SILICON_UNUSED_0xF8                                     0xF8
#define FLAG_SILICON_UNUSED_0xF9                                     0xF9
#define FLAG_SILICON_UNUSED_0xFA                                     0xFA
#define FLAG_SILICON_UNUSED_0xFB                                     0xFB
#define FLAG_SILICON_UNUSED_0xFC                                     0xFC
#define FLAG_SILICON_UNUSED_0xFD                                     0xFD
#define FLAG_SILICON_UNUSED_0xFE                                     0xFE
#define FLAG_SILICON_UNUSED_0xFF                                     0xFF

#define FLAG_RECEIVED_AURORA_TICKET                                  0x100
#define FLAG_RECEIVED_MYSTIC_TICKET                                  0x101
#define FLAG_RECEIVED_OLD_SEA_MAP                                    0x102
#define NUM_WONDER_CARD_FLAGS                                        (1 + FLAG_RECEIVED_OLD_SEA_MAP - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE                                    0x103
#define FLAG_CHOSE_ROOT_FOSSIL                                       0x104
#define FLAG_CHOSE_CLAW_FOSSIL                                       0x105
#define FLAG_RECEIVED_POWDER_JAR                                     0x106
#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER                         0x107
#define FLAG_MET_BATTLE_FRONTIER_BREEDER                             0x108
#define FLAG_MET_BATTLE_FRONTIER_MANIAC                              0x109
#define FLAG_ENTERED_CONTEST                                         0x10A
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN                          0x10B
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER                             0x10C
#define FLAG_ENABLE_MR_STONE_POKENAV                                 0x10D
#define FLAG_NURSE_MENTIONS_GOLD_CARD                                0x10E
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR                          0x10F

#define FLAG_SILICON_UNUSED_0x103                                    0x103
#define FLAG_SILICON_UNUSED_0x104                                    0x104
#define FLAG_SILICON_UNUSED_0x105                                    0x105
#define FLAG_SILICON_UNUSED_0x106                                    0x106
#define FLAG_SILICON_UNUSED_0x107                                    0x107
#define FLAG_SILICON_UNUSED_0x108                                    0x108
#define FLAG_SILICON_UNUSED_0x109                                    0x109
#define FLAG_SILICON_UNUSED_0x10A                                    0x10A
#define FLAG_SILICON_UNUSED_0x10B                                    0x10B
#define FLAG_SILICON_UNUSED_0x10C                                    0x10C
#define FLAG_SILICON_UNUSED_0x10D                                    0x10D
#define FLAG_SILICON_UNUSED_0x10E                                    0x10E
#define FLAG_SILICON_UNUSED_0x10F                                    0x10F

#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR                         0x110
#define FLAG_DEFEATED_DEOXYS                                         0x111
#define FLAG_BATTLED_DEOXYS                                          0x112
#define FLAG_SHOWN_EON_TICKET                                        0x113
#define FLAG_SHOWN_AURORA_TICKET                                     0x114
#define FLAG_SHOWN_OLD_SEA_MAP                                       0x115
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER                               0x116
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT                               0x117
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER                           0x118
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC                                 0x119
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME                             0x11A
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK                            0x11B
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE                            0x11C
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH                          0x11D
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE                           0x11E
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION                             0x11F

#define FLAG_SILICON_UNUSED_0x110                                    0x110
#define FLAG_SILICON_UNUSED_0x111                                    0x111
#define FLAG_SILICON_UNUSED_0x112                                    0x112
#define FLAG_SILICON_UNUSED_0x113                                    0x113
#define FLAG_SILICON_UNUSED_0x114                                    0x114
#define FLAG_SILICON_UNUSED_0x115                                    0x115
#define FLAG_SILICON_UNUSED_0x116                                    0x116
#define FLAG_SILICON_UNUSED_0x117                                    0x117
#define FLAG_SILICON_UNUSED_0x118                                    0x118
#define FLAG_SILICON_UNUSED_0x119                                    0x119
#define FLAG_SILICON_UNUSED_0x11A                                    0x11A
#define FLAG_SILICON_UNUSED_0x11B                                    0x11B
#define FLAG_SILICON_UNUSED_0x11C                                    0x11C
#define FLAG_SILICON_UNUSED_0x11D                                    0x11D
#define FLAG_SILICON_UNUSED_0x11E                                    0x11E
#define FLAG_SILICON_UNUSED_0x11F                                    0x11F

#define FLAG_DEFEATED_REGIROCK                                       0x120
#define FLAG_DEFEATED_REGICE                                         0x121
#define FLAG_DEFEATED_REGISTEEL                                      0x122
#define FLAG_DEFEATED_KYOGRE                                         0x123
#define FLAG_DEFEATED_GROUDON                                        0x124
#define FLAG_DEFEATED_RAYQUAZA                                       0x125
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE                         0x126
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE                         0x127
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE                         0x128
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT                       0x129
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT                       0x12A
#define FLAG_DEFEATED_SUDOWOODO                                      0x12B
#define FLAG_DEFEATED_MEW                                            0x12C
#define FLAG_DEFEATED_LATIAS_OR_LATIOS                               0x12D
#define FLAG_CAUGHT_LATIAS_OR_LATIOS                                 0x12E
#define FLAG_CAUGHT_MEW                                              0x12F

#define FLAG_SILICON_UNUSED_0x120                                    0x120
#define FLAG_SILICON_UNUSED_0x121                                    0x121
#define FLAG_SILICON_UNUSED_0x122                                    0x122
#define FLAG_SILICON_UNUSED_0x123                                    0x123
#define FLAG_SILICON_UNUSED_0x124                                    0x124
#define FLAG_SILICON_UNUSED_0x125                                    0x125
#define FLAG_SILICON_UNUSED_0x126                                    0x126
#define FLAG_SILICON_UNUSED_0x127                                    0x127
#define FLAG_SILICON_UNUSED_0x128                                    0x128
#define FLAG_SILICON_UNUSED_0x129                                    0x129
#define FLAG_SILICON_UNUSED_0x12A                                    0x12A
#define FLAG_SILICON_UNUSED_0x12B                                    0x12B
#define FLAG_SILICON_UNUSED_0x12C                                    0x12C
#define FLAG_SILICON_UNUSED_0x12D                                    0x12D
#define FLAG_SILICON_UNUSED_0x12E                                    0x12E
#define FLAG_SILICON_UNUSED_0x12F                                    0x12F

#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE                   0x130
#define FLAG_MET_SCOTT_IN_VERDANTURF                                 0x131
#define FLAG_MET_SCOTT_IN_FALLARBOR                                  0x132
#define FLAG_MET_SCOTT_IN_LILYCOVE                                   0x133
#define FLAG_MET_SCOTT_IN_EVERGRANDE                                 0x134
#define FLAG_MET_SCOTT_ON_SS_TIDAL                                   0x135
#define FLAG_SCOTT_GIVES_BATTLE_POINTS                               0x136
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS                              0x137
#define FLAG_ENABLE_ROXANNE_MATCH_CALL                               0x138
#define FLAG_ENABLE_BRAWLY_MATCH_CALL                                0x139
#define FLAG_ENABLE_WATTSON_MATCH_CALL                               0x13A
#define FLAG_ENABLE_FLANNERY_MATCH_CALL                              0x13B
#define FLAG_ENABLE_WINONA_MATCH_CALL                                0x13C
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL                         0x13D
#define FLAG_ENABLE_JUAN_MATCH_CALL                                  0x13E
#define FLAG_SHOWN_MYSTIC_TICKET                                     0x13F

#define FLAG_SILICON_UNUSED_0x130                                    0x130
#define FLAG_SILICON_UNUSED_0x131                                    0x131
#define FLAG_SILICON_UNUSED_0x132                                    0x132
#define FLAG_SILICON_UNUSED_0x133                                    0x133
#define FLAG_SILICON_UNUSED_0x134                                    0x134
#define FLAG_SILICON_UNUSED_0x135                                    0x135
#define FLAG_SILICON_UNUSED_0x136                                    0x136
#define FLAG_SILICON_UNUSED_0x137                                    0x137
#define FLAG_SILICON_UNUSED_0x138                                    0x138
#define FLAG_SILICON_UNUSED_0x139                                    0x139
#define FLAG_SILICON_UNUSED_0x13A                                    0x13A
#define FLAG_SILICON_UNUSED_0x13B                                    0x13B
#define FLAG_SILICON_UNUSED_0x13C                                    0x13C
#define FLAG_SILICON_UNUSED_0x13D                                    0x13D
#define FLAG_SILICON_UNUSED_0x13E                                    0x13E
#define FLAG_SILICON_UNUSED_0x13F                                    0x13F

#define FLAG_DEFEATED_HO_OH                                          0x140
#define FLAG_DEFEATED_LUGIA                                          0x141

#define FLAG_SILICON_UNUSED_0x140                                    0x140
#define FLAG_SILICON_UNUSED_0x141                                    0x141

// Event Flags
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                       0x142
#define FLAG_HIDE_APPRENTICE                                         0x143
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                 0x144
//#define FLAG_HIDE_UNION_ROOM_PLAYER_1                              0x145
//#define FLAG_HIDE_UNION_ROOM_PLAYER_2                              0x146
//#define FLAG_HIDE_UNION_ROOM_PLAYER_3                              0x147
//#define FLAG_HIDE_UNION_ROOM_PLAYER_4                              0x148
//#define FLAG_HIDE_UNION_ROOM_PLAYER_5                              0x149
//#define FLAG_HIDE_UNION_ROOM_PLAYER_6                              0x14A
//#define FLAG_HIDE_UNION_ROOM_PLAYER_7                              0x14B
//#define FLAG_HIDE_UNION_ROOM_PLAYER_8                              0x14C
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1                0x14D
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2                0x14E
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3                0x14F

#define FLAG_SILICON_UNUSED_0x142                                    0x142
#define FLAG_SILICON_UNUSED_0x143                                    0x143
#define FLAG_SILICON_UNUSED_0x144                                    0x144
#define FLAG_SILICON_UNUSED_0x145                                    0x145
#define FLAG_SILICON_UNUSED_0x146                                    0x146
#define FLAG_SILICON_UNUSED_0x147                                    0x147
#define FLAG_SILICON_UNUSED_0x148                                    0x148
#define FLAG_SILICON_UNUSED_0x149                                    0x149
#define FLAG_SILICON_UNUSED_0x14A                                    0x14A
#define FLAG_SILICON_UNUSED_0x14B                                    0x14B
#define FLAG_SILICON_UNUSED_0x14C                                    0x14C
#define FLAG_SILICON_UNUSED_0x14D                                    0x14D
#define FLAG_SILICON_UNUSED_0x14E                                    0x14E
#define FLAG_SILICON_UNUSED_0x14F                                    0x14F

#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4                0x150
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5                0x151
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6                0x152
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS             0x153
#define FLAG_HIDE_MEW                                            4
#define FLAG_HIDE_ROUTE_104_RIVAL                                    0x155
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                   0x156
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                   0x157
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM           0x158
#define FLAG_HIDE_ROUTE_103_RIVAL                                    0x159
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                     0x15A
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                         0x15B
#define FLAG_HIDE_PETALBURG_CITY_WALLY                               0x15C
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY    0x15D
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                          0x15E
#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                      0x15F

#define FLAG_SILICON_UNUSED_0x150                                    0x150
#define FLAG_SILICON_UNUSED_0x151                                    0x151
#define FLAG_SILICON_UNUSED_0x152                                    0x152
#define FLAG_SILICON_UNUSED_0x153                                    0x153
#define FLAG_SILICON_UNUSED_0x154                                    0x154
#define FLAG_SILICON_UNUSED_0x155                                    0x155
#define FLAG_SILICON_UNUSED_0x156                                    0x156
#define FLAG_SILICON_UNUSED_0x157                                    0x157
#define FLAG_SILICON_UNUSED_0x158                                    0x158
#define FLAG_SILICON_UNUSED_0x159                                    0x159
#define FLAG_SILICON_UNUSED_0x15A                                    0x15A
#define FLAG_SILICON_UNUSED_0x15B                                    0x15B
#define FLAG_SILICON_UNUSED_0x15C                                    0x15C
#define FLAG_SILICON_UNUSED_0x15D                                    0x15D
#define FLAG_SILICON_UNUSED_0x15E                                    0x15E
#define FLAG_SILICON_UNUSED_0x15F                                    0x15F

#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                           0x160
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                     0x161
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP               0x162
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                  0x163
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING       0x164
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING           0x165
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE              0x166
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                                0x167
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                            0x168
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                             0x169
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                                0x16A
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                           0x16B
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                        0x16C
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                           0x16D
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN             0x16E
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                     0x16F

#define FLAG_SILICON_UNUSED_0x160                                    0x160
#define FLAG_SILICON_UNUSED_0x161                                    0x161
#define FLAG_SILICON_UNUSED_0x162                                    0x162
#define FLAG_SILICON_UNUSED_0x163                                    0x163
#define FLAG_SILICON_UNUSED_0x164                                    0x164
#define FLAG_SILICON_UNUSED_0x165                                    0x165
#define FLAG_SILICON_UNUSED_0x166                                    0x166
#define FLAG_SILICON_UNUSED_0x167                                    0x167
#define FLAG_SILICON_UNUSED_0x168                                    0x168
#define FLAG_SILICON_UNUSED_0x169                                    0x169
#define FLAG_SILICON_UNUSED_0x16A                                    0x16A
#define FLAG_SILICON_UNUSED_0x16B                                    0x16B
#define FLAG_SILICON_UNUSED_0x16C                                    0x16C
#define FLAG_SILICON_UNUSED_0x16D                                    0x16D
#define FLAG_SILICON_UNUSED_0x16E                                    0x16E
#define FLAG_SILICON_UNUSED_0x16F                                    0x16F

#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                   0x170
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                 0x171
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                               0x172
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                                0x173
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                            0x174
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                        0x175
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN               0x176
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1           0x177
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2           0x178
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA           0x179
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM                0x17A
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                 0x17B
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                     0x17C
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM       0x17D
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK               0x17E
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                   0x17F

#define FLAG_SILICON_UNUSED_0x170                                    0x170
#define FLAG_SILICON_UNUSED_0x171                                    0x171
#define FLAG_SILICON_UNUSED_0x172                                    0x172
#define FLAG_SILICON_UNUSED_0x173                                    0x173
#define FLAG_SILICON_UNUSED_0x174                                    0x174
#define FLAG_SILICON_UNUSED_0x175                                    0x175
#define FLAG_SILICON_UNUSED_0x176                                    0x176
#define FLAG_SILICON_UNUSED_0x177                                    0x177
#define FLAG_SILICON_UNUSED_0x178                                    0x178
#define FLAG_SILICON_UNUSED_0x179                                    0x179
#define FLAG_SILICON_UNUSED_0x17A                                    0x17A
#define FLAG_SILICON_UNUSED_0x17B                                    0x17B
#define FLAG_SILICON_UNUSED_0x17C                                    0x17C
#define FLAG_SILICON_UNUSED_0x17D                                    0x17D
#define FLAG_SILICON_UNUSED_0x17E                                    0x17E
#define FLAG_SILICON_UNUSED_0x17F                                    0x17F

#define FLAG_HIDE_DEOXYS                                             0x180
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                       0x181
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                                0x182
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                              0x183
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                   0x184
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                         0x185
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                       0x186
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                           0x187
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                          0x188
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                               0x189
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                            0x18A
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1          0x18B
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                            0x18C
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                           0x18D
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                           0x18E
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                           0x18F

#define FLAG_SILICON_UNUSED_0x180                                    0x180
#define FLAG_SILICON_UNUSED_0x181                                    0x181
#define FLAG_SILICON_UNUSED_0x182                                    0x182
#define FLAG_SILICON_UNUSED_0x183                                    0x183
#define FLAG_SILICON_UNUSED_0x184                                    0x184
#define FLAG_SILICON_UNUSED_0x185                                    0x185
#define FLAG_SILICON_UNUSED_0x186                                    0x186
#define FLAG_SILICON_UNUSED_0x187                                    0x187
#define FLAG_SILICON_UNUSED_0x188                                    0x188
#define FLAG_SILICON_UNUSED_0x189                                    0x189
#define FLAG_SILICON_UNUSED_0x18A                                    0x18A
#define FLAG_SILICON_UNUSED_0x18B                                    0x18B
#define FLAG_SILICON_UNUSED_0x18C                                    0x18C
#define FLAG_SILICON_UNUSED_0x18D                                    0x18D
#define FLAG_SILICON_UNUSED_0x18E                                    0x18E
#define FLAG_SILICON_UNUSED_0x18F                                    0x18F

#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                           0x190
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                           0x191
#define FLAG_HIDE_PETALBURG_GYM_GREETER                              0x192
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                 0x193
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                 0x194
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM           0x195
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM               0x196
#define FLAG_HIDE_ROUTE_119_SCOTT                                    0x197
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                               0x198
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                                0x199
#define FLAG_HIDE_FANCLUB_OLD_LADY                                   0x19A
#define FLAG_HIDE_FANCLUB_BOY                                        0x19B
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                 0x19C
#define FLAG_HIDE_FANCLUB_LADY                                       0x19D
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT                0x19E
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                              0x19F

#define FLAG_SILICON_UNUSED_0x190                                    0x190
#define FLAG_SILICON_UNUSED_0x191                                    0x191
#define FLAG_SILICON_UNUSED_0x192                                    0x192
#define FLAG_SILICON_UNUSED_0x193                                    0x193
#define FLAG_SILICON_UNUSED_0x194                                    0x194
#define FLAG_SILICON_UNUSED_0x195                                    0x195
#define FLAG_SILICON_UNUSED_0x196                                    0x196
#define FLAG_SILICON_UNUSED_0x197                                    0x197
#define FLAG_SILICON_UNUSED_0x198                                    0x198
#define FLAG_SILICON_UNUSED_0x199                                    0x199
#define FLAG_SILICON_UNUSED_0x19A                                    0x19A
#define FLAG_SILICON_UNUSED_0x19B                                    0x19B
#define FLAG_SILICON_UNUSED_0x19C                                    0x19C
#define FLAG_SILICON_UNUSED_0x19D                                    0x19D
#define FLAG_SILICON_UNUSED_0x19E                                    0x19E
#define FLAG_SILICON_UNUSED_0x19F                                    0x19F

#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                              0x1A0
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                           0x1A1
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                           0x1A2
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                           0x1A3
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                           0x1A4
#define FLAG_HIDE_LUGIA                                              0x1A5
#define FLAG_HIDE_HO_OH                                              0x1A6
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                     0x1A7
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                    0x1A8
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                                0x1A9
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                         0x1AA
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                 0x1AB
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                    0x1AC
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND      0x1AD
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE          0x1AE
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                            0x1AF

#define FLAG_SILICON_UNUSED_0x1A0                                    0x1A0
#define FLAG_SILICON_UNUSED_0x1A1                                    0x1A1
#define FLAG_SILICON_UNUSED_0x1A2                                    0x1A2
#define FLAG_SILICON_UNUSED_0x1A3                                    0x1A3
#define FLAG_SILICON_UNUSED_0x1A4                                    0x1A4
#define FLAG_SILICON_UNUSED_0x1A5                                    0x1A5
#define FLAG_SILICON_UNUSED_0x1A6                                    0x1A6
#define FLAG_SILICON_UNUSED_0x1A7                                    0x1A7
#define FLAG_SILICON_UNUSED_0x1A8                                    0x1A8
#define FLAG_SILICON_UNUSED_0x1A9                                    0x1A9
#define FLAG_SILICON_UNUSED_0x1AA                                    0x1AA
#define FLAG_SILICON_UNUSED_0x1AB                                    0x1AB
#define FLAG_SILICON_UNUSED_0x1AC                                    0x1AC
#define FLAG_SILICON_UNUSED_0x1AD                                    0x1AD
#define FLAG_SILICON_UNUSED_0x1AE                                    0x1AE
#define FLAG_SILICON_UNUSED_0x1AF                                    0x1AF

#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL      0x1B0
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE       0x1B1
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                      0x1B2
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                                0x1B3
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL      0x1B4
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                            0x1B5
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL        0x1B6
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL            0x1B7
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                               0x1B8
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                         0x1B9
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE          0x1BA
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE          0x1BB
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                           0x1BC
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                           0x1BD
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                             0x1BE
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                              0x1BF

#define FLAG_SILICON_UNUSED_0x1B0                                    0x1B0
#define FLAG_SILICON_UNUSED_0x1B1                                    0x1B1
#define FLAG_SILICON_UNUSED_0x1B2                                    0x1B2
#define FLAG_SILICON_UNUSED_0x1B3                                    0x1B3
#define FLAG_SILICON_UNUSED_0x1B4                                    0x1B4
#define FLAG_SILICON_UNUSED_0x1B5                                    0x1B5
#define FLAG_SILICON_UNUSED_0x1B6                                    0x1B6
#define FLAG_SILICON_UNUSED_0x1B7                                    0x1B7
#define FLAG_SILICON_UNUSED_0x1B8                                    0x1B8
#define FLAG_SILICON_UNUSED_0x1B9                                    0x1B9
#define FLAG_SILICON_UNUSED_0x1BA                                    0x1BA
#define FLAG_SILICON_UNUSED_0x1BB                                    0x1BB
#define FLAG_SILICON_UNUSED_0x1BC                                    0x1BC
#define FLAG_SILICON_UNUSED_0x1BD                                    0x1BD
#define FLAG_SILICON_UNUSED_0x1BE                                    0x1BE
#define FLAG_SILICON_UNUSED_0x1BF                                    0x1BF

#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                      0x1C0
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                       0x1C1
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                          0x1C2
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS                0x1C3
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                 0x1C4
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                                0x1C5
#define FLAG_HIDE_ROUTE_128_STEVEN                                   0x1C6
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                        0x1C7
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT               0x1C8
#define FLAG_HIDE_ROUTE_110_BIRCH                                    0x1C9
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA      0x1CA
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                              0x1CB
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                       0x1CC
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN                0x1CD
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                          0x1CE
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                       0x1CF

#define FLAG_SILICON_UNUSED_0x1C0                                    0x1C0
#define FLAG_SILICON_UNUSED_0x1C1                                    0x1C1
#define FLAG_SILICON_UNUSED_0x1C2                                    0x1C2
#define FLAG_SILICON_UNUSED_0x1C3                                    0x1C3
#define FLAG_SILICON_UNUSED_0x1C4                                    0x1C4
#define FLAG_SILICON_UNUSED_0x1C5                                    0x1C5
#define FLAG_SILICON_UNUSED_0x1C6                                    0x1C6
#define FLAG_SILICON_UNUSED_0x1C7                                    0x1C7
#define FLAG_SILICON_UNUSED_0x1C8                                    0x1C8
#define FLAG_SILICON_UNUSED_0x1C9                                    0x1C9
#define FLAG_SILICON_UNUSED_0x1CA                                    0x1CA
#define FLAG_SILICON_UNUSED_0x1CB                                    0x1CB
#define FLAG_SILICON_UNUSED_0x1CC                                    0x1CC
#define FLAG_SILICON_UNUSED_0x1CD                                    0x1CD
#define FLAG_SILICON_UNUSED_0x1CE                                    0x1CE
#define FLAG_SILICON_UNUSED_0x1CF                                    0x1CF

#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                            0x1D0
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                   0x1D1
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                       0x1D2
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                            0x1D3
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW             0x1D4
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL           0x1D5
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                    0x1D6
#define FLAG_HIDE_ROUTE_119_RIVAL                                    0x1D7
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                          0x1D8
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                           0x1D9
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                          0x1DA
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                 0x1DB
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                               0x1DC
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                               0x1DD
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                        0x1DE
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                      0x1DF

#define FLAG_SILICON_UNUSED_0x1D0                                    0x1D0
#define FLAG_SILICON_UNUSED_0x1D1                                    0x1D1
#define FLAG_SILICON_UNUSED_0x1D2                                    0x1D2
#define FLAG_SILICON_UNUSED_0x1D3                                    0x1D3
#define FLAG_SILICON_UNUSED_0x1D4                                    0x1D4
#define FLAG_SILICON_UNUSED_0x1D5                                    0x1D5
#define FLAG_SILICON_UNUSED_0x1D6                                    0x1D6
#define FLAG_SILICON_UNUSED_0x1D7                                    0x1D7
#define FLAG_SILICON_UNUSED_0x1D8                                    0x1D8
#define FLAG_SILICON_UNUSED_0x1D9                                    0x1D9
#define FLAG_SILICON_UNUSED_0x1DA                                    0x1DA
#define FLAG_SILICON_UNUSED_0x1DB                                    0x1DB
#define FLAG_SILICON_UNUSED_0x1DC                                    0x1DC
#define FLAG_SILICON_UNUSED_0x1DD                                    0x1DD
#define FLAG_SILICON_UNUSED_0x1DE                                    0x1DE
#define FLAG_SILICON_UNUSED_0x1DF                                    0x1DF

#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                     0x1E0
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                            0x1E1
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA           0x1E2
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN               0x1E3
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1            0x1E4
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2            0x1E5
#define FLAG_HIDE_PETALBURG_GYM_WALLY                                0x1E6
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                            0x1E7
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY           0x1E8
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                             0x1E9
#define FLAG_HIDE_FALLARBOR_POKEMON_CENTER_LANETTE                   0x1EA
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                           0x1EB
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT     0x1EC
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                            0x1ED
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                           0x1EE
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                            0x1EF

#define FLAG_SILICON_UNUSED_0x1E0                                    0x1E0
#define FLAG_SILICON_UNUSED_0x1E1                                    0x1E1
#define FLAG_SILICON_UNUSED_0x1E2                                    0x1E2
#define FLAG_SILICON_UNUSED_0x1E3                                    0x1E3
#define FLAG_SILICON_UNUSED_0x1E4                                    0x1E4
#define FLAG_SILICON_UNUSED_0x1E5                                    0x1E5
#define FLAG_SILICON_UNUSED_0x1E6                                    0x1E6
#define FLAG_SILICON_UNUSED_0x1E7                                    0x1E7
#define FLAG_SILICON_UNUSED_0x1E8                                    0x1E8
#define FLAG_SILICON_UNUSED_0x1E9                                    0x1E9
#define FLAG_SILICON_UNUSED_0x1EA                                    0x1EA
#define FLAG_SILICON_UNUSED_0x1EB                                    0x1EB
#define FLAG_SILICON_UNUSED_0x1EC                                    0x1EC
#define FLAG_SILICON_UNUSED_0x1ED                                    0x1ED
#define FLAG_SILICON_UNUSED_0x1EE                                    0x1EE
#define FLAG_SILICON_UNUSED_0x1EF                                    0x1EF

#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                                0x1F0
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                          0x1F1
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                              0x1F2
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                               0x1F3
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                                0x1F4
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                           0x1F5
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS          0x1F6
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1      0x1F7
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2      0x1F8
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE            0x1F9
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN     0x1FA
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                              0x1FB
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                   0x1FC
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                                0x1FD
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                                0x1FE
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                       0x1FF

#define FLAG_SILICON_UNUSED_0x1F0                                    0x1F0
#define FLAG_SILICON_UNUSED_0x1F1                                    0x1F1
#define FLAG_SILICON_UNUSED_0x1F2                                    0x1F2
#define FLAG_SILICON_UNUSED_0x1F3                                    0x1F3
#define FLAG_SILICON_UNUSED_0x1F4                                    0x1F4
#define FLAG_SILICON_UNUSED_0x1F5                                    0x1F5
#define FLAG_SILICON_UNUSED_0x1F6                                    0x1F6
#define FLAG_SILICON_UNUSED_0x1F7                                    0x1F7
#define FLAG_SILICON_UNUSED_0x1F8                                    0x1F8
#define FLAG_SILICON_UNUSED_0x1F9                                    0x1F9
#define FLAG_SILICON_UNUSED_0x1FA                                    0x1FA
#define FLAG_SILICON_UNUSED_0x1FB                                    0x1FB
#define FLAG_SILICON_UNUSED_0x1FC                                    0x1FC
#define FLAG_SILICON_UNUSED_0x1FD                                    0x1FD
#define FLAG_SILICON_UNUSED_0x1FE                                    0x1FE
#define FLAG_SILICON_UNUSED_0x1FF                                    0x1FF

#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                       0x200
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                         0x201
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2          0x202
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380           0x203
#define FLAG_HIDE_ROUTE_101_BIRCH                                    0x204
#define FLAG_HIDE_ROUTE_103_BIRCH                                    0x205
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                                0x206
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                                0x207
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                           0x208
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                           0x209
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                           0x20A
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                           0x20B
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                      0x20C
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                       0x20D
#define FLAG_HIDE_FALLARBOR_AZURILL                                  0x20E
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                    0x20F

#define FLAG_SILICON_UNUSED_0x200                                    0x200
#define FLAG_SILICON_UNUSED_0x201                                    0x201
#define FLAG_SILICON_UNUSED_0x202                                    0x202
#define FLAG_SILICON_UNUSED_0x203                                    0x203
#define FLAG_SILICON_UNUSED_0x204                                    0x204
#define FLAG_SILICON_UNUSED_0x205                                    0x205
#define FLAG_SILICON_UNUSED_0x206                                    0x206
#define FLAG_SILICON_UNUSED_0x207                                    0x207
#define FLAG_SILICON_UNUSED_0x208                                    0x208
#define FLAG_SILICON_UNUSED_0x209                                    0x209
#define FLAG_SILICON_UNUSED_0x20A                                    0x20A
#define FLAG_SILICON_UNUSED_0x20B                                    0x20B
#define FLAG_SILICON_UNUSED_0x20C                                    0x20C
#define FLAG_SILICON_UNUSED_0x20D                                    0x20D
#define FLAG_SILICON_UNUSED_0x20E                                    0x20E
#define FLAG_SILICON_UNUSED_0x20F                                    0x20F

#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                       0x210
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                          0x211
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON               0x212
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                              0x213
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                               0x214
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                         0x215
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                              0x216
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                           0x217
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                              0x218
#define FLAG_HIDE_ROUTE_110_RIVAL                                    0x219
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                               0x21A
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                               0x21B
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                            0x21C
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                            0x21D
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                                0x21E
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                      0x21F

#define FLAG_SILICON_UNUSED_0x210                                    0x210
#define FLAG_SILICON_UNUSED_0x211                                    0x211
#define FLAG_SILICON_UNUSED_0x212                                    0x212
#define FLAG_SILICON_UNUSED_0x213                                    0x213
#define FLAG_SILICON_UNUSED_0x214                                    0x214
#define FLAG_SILICON_UNUSED_0x215                                    0x215
#define FLAG_SILICON_UNUSED_0x216                                    0x216
#define FLAG_SILICON_UNUSED_0x217                                    0x217
#define FLAG_SILICON_UNUSED_0x218                                    0x218
#define FLAG_SILICON_UNUSED_0x219                                    0x219
#define FLAG_SILICON_UNUSED_0x21A                                    0x21A
#define FLAG_SILICON_UNUSED_0x21B                                    0x21B
#define FLAG_SILICON_UNUSED_0x21C                                    0x21C
#define FLAG_SILICON_UNUSED_0x21D                                    0x21D
#define FLAG_SILICON_UNUSED_0x21E                                    0x21E
#define FLAG_SILICON_UNUSED_0x21F                                    0x21F

#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                               0x220
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                              0x221
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                         0x222
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                               0x223
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                       0x224
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                              0x225
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                              0x226
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                       0x227
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                      0x228
#define FLAG_HIDE_REGIROCK                                           0x229
#define FLAG_HIDE_REGICE                                             0x22A
#define FLAG_HIDE_REGISTEEL                                          0x22B
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                             0x22C
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                            0x22D
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                       0x22E
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT                0x22F

#define FLAG_SILICON_UNUSED_0x220                                    0x220
#define FLAG_SILICON_UNUSED_0x221                                    0x221
#define FLAG_SILICON_UNUSED_0x222                                    0x222
#define FLAG_SILICON_UNUSED_0x223                                    0x223
#define FLAG_SILICON_UNUSED_0x224                                    0x224
#define FLAG_SILICON_UNUSED_0x225                                    0x225
#define FLAG_SILICON_UNUSED_0x226                                    0x226
#define FLAG_SILICON_UNUSED_0x227                                    0x227
#define FLAG_SILICON_UNUSED_0x228                                    0x228
#define FLAG_SILICON_UNUSED_0x229                                    0x229
#define FLAG_SILICON_UNUSED_0x22A                                    0x22A
#define FLAG_SILICON_UNUSED_0x22B                                    0x22B
#define FLAG_SILICON_UNUSED_0x22C                                    0x22C
#define FLAG_SILICON_UNUSED_0x22D                                    0x22D
#define FLAG_SILICON_UNUSED_0x22E                                    0x22E
#define FLAG_SILICON_UNUSED_0x22F                                    0x22F

#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                           0x230
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                  0x231
#define FLAG_HIDE_ROUTE_128_ARCHIE                                   0x232
#define FLAG_HIDE_ROUTE_128_MAXIE                                    0x233
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                        0x234
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                           0x235
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                         0x236
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE               0x237
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                        0x238
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                        0x239
#define FLAG_RECEIVED_SHOAL_SALT_1                                   0x23A
#define FLAG_RECEIVED_SHOAL_SALT_2                                   0x23B
#define FLAG_RECEIVED_SHOAL_SALT_3                                   0x23C
#define FLAG_RECEIVED_SHOAL_SALT_4                                   0x23D
#define FLAG_RECEIVED_SHOAL_SHELL_1                                  0x23E
#define FLAG_RECEIVED_SHOAL_SHELL_2                                  0x23F

#define FLAG_SILICON_UNUSED_0x230                                    0x230
#define FLAG_SILICON_UNUSED_0x231                                    0x231
#define FLAG_SILICON_UNUSED_0x232                                    0x232
#define FLAG_SILICON_UNUSED_0x233                                    0x233
#define FLAG_SILICON_UNUSED_0x234                                    0x234
#define FLAG_SILICON_UNUSED_0x235                                    0x235
#define FLAG_SILICON_UNUSED_0x236                                    0x236
#define FLAG_SILICON_UNUSED_0x237                                    0x237
#define FLAG_SILICON_UNUSED_0x238                                    0x238
#define FLAG_SILICON_UNUSED_0x239                                    0x239
#define FLAG_SILICON_UNUSED_0x23A                                    0x23A
#define FLAG_SILICON_UNUSED_0x23B                                    0x23B
#define FLAG_SILICON_UNUSED_0x23C                                    0x23C
#define FLAG_SILICON_UNUSED_0x23D                                    0x23D
#define FLAG_SILICON_UNUSED_0x23E                                    0x23E
#define FLAG_SILICON_UNUSED_0x23F                                    0x23F

#define FLAG_RECEIVED_SHOAL_SHELL_3                                  0x240
#define FLAG_RECEIVED_SHOAL_SHELL_4                                  0x241
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                         0x242
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                        0x243
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN       0x244
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                           0x245
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                           0x246
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT  0x247
#define FLAG_HIDE_ROUTE_118_STEVEN                                   0x248
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                 0x249
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL        0x24A
#define FLAG_HIDE_FORTREE_CITY_KECLEON                               0x24B
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                           0x24C
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                                0x24D
#define FLAG_HIDE_ROUTE_120_STEVEN                                   0x24E
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                             0x24F

#define FLAG_SILICON_UNUSED_0x240                                    0x240
#define FLAG_SILICON_UNUSED_0x241                                    0x241
#define FLAG_SILICON_UNUSED_0x242                                    0x242
#define FLAG_SILICON_UNUSED_0x243                                    0x243
#define FLAG_SILICON_UNUSED_0x244                                    0x244
#define FLAG_SILICON_UNUSED_0x245                                    0x245
#define FLAG_SILICON_UNUSED_0x246                                    0x246
#define FLAG_SILICON_UNUSED_0x247                                    0x247
#define FLAG_SILICON_UNUSED_0x248                                    0x248
#define FLAG_SILICON_UNUSED_0x249                                    0x249
#define FLAG_SILICON_UNUSED_0x24A                                    0x24A
#define FLAG_SILICON_UNUSED_0x24B                                    0x24B
#define FLAG_SILICON_UNUSED_0x24C                                    0x24C
#define FLAG_SILICON_UNUSED_0x24D                                    0x24D
#define FLAG_SILICON_UNUSED_0x24E                                    0x24E
#define FLAG_SILICON_UNUSED_0x24F                                    0x24F

#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                             0x250
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                             0x251
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                             0x252
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                       0x253
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                       0x254
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                  0x255
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE       0x256
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                    0x257
#define FLAG_HIDE_ROUTE_120_KECLEON_1                                0x258
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                               0x259
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                 0x25A
#define FLAG_HIDE_ROUTE_120_KECLEON_2                                0x25B
#define FLAG_HIDE_ROUTE_120_KECLEON_3                                0x25C
#define FLAG_HIDE_ROUTE_120_KECLEON_4                                0x25D
#define FLAG_HIDE_ROUTE_120_KECLEON_5                                0x25E
#define FLAG_HIDE_ROUTE_119_KECLEON_1                                0x25F

#define FLAG_SILICON_UNUSED_0x250                                    0x250
#define FLAG_SILICON_UNUSED_0x251                                    0x251
#define FLAG_SILICON_UNUSED_0x252                                    0x252
#define FLAG_SILICON_UNUSED_0x253                                    0x253
#define FLAG_SILICON_UNUSED_0x254                                    0x254
#define FLAG_SILICON_UNUSED_0x255                                    0x255
#define FLAG_SILICON_UNUSED_0x256                                    0x256
#define FLAG_SILICON_UNUSED_0x257                                    0x257
#define FLAG_SILICON_UNUSED_0x258                                    0x258
#define FLAG_SILICON_UNUSED_0x259                                    0x259
#define FLAG_SILICON_UNUSED_0x25A                                    0x25A
#define FLAG_SILICON_UNUSED_0x25B                                    0x25B
#define FLAG_SILICON_UNUSED_0x25C                                    0x25C
#define FLAG_SILICON_UNUSED_0x25D                                    0x25D
#define FLAG_SILICON_UNUSED_0x25E                                    0x25E
#define FLAG_SILICON_UNUSED_0x25F                                    0x25F

#define FLAG_HIDE_ROUTE_119_KECLEON_2                                0x260
#define FLAG_HIDE_ROUTE_101_BOY                                      0x261
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                  0x262
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON           0x263
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                        0x264
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                               0x265
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                           0x266
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                             0x267
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                            0x268
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                 0x269

#define FLAG_SILICON_UNUSED_0x260                                    0x260
#define FLAG_SILICON_UNUSED_0x261                                    0x261
#define FLAG_SILICON_UNUSED_0x262                                    0x262
#define FLAG_SILICON_UNUSED_0x263                                    0x263
#define FLAG_SILICON_UNUSED_0x264                                    0x264
#define FLAG_SILICON_UNUSED_0x265                                    0x265
#define FLAG_SILICON_UNUSED_0x266                                    0x266
#define FLAG_SILICON_UNUSED_0x267                                    0x267
#define FLAG_SILICON_UNUSED_0x268                                    0x268
#define FLAG_SILICON_UNUSED_0x269                                    0x269

// Item Ball Flags
#define FLAG_ITEM_ROUTE_102_POTION                                   0x26A
#define FLAG_ITEM_ROUTE_116_X_SPECIAL                                0x26B
#define FLAG_ITEM_ROUTE_104_PP_UP                                    0x26C
#define FLAG_ITEM_ROUTE_105_IRON                                     0x26D
#define FLAG_ITEM_ROUTE_106_PROTEIN                                  0x26E
#define FLAG_ITEM_ROUTE_109_PP_UP                                    0x26F

#define FLAG_SILICON_UNUSED_0x26A                                    0x26A
#define FLAG_SILICON_UNUSED_0x26B                                    0x26B
#define FLAG_SILICON_UNUSED_0x26C                                    0x26C
#define FLAG_SILICON_UNUSED_0x26D                                    0x26D
#define FLAG_SILICON_UNUSED_0x26E                                    0x26E
#define FLAG_SILICON_UNUSED_0x26F                                    0x26F

#define FLAG_ITEM_ROUTE_110_RARE_CANDY                               0x270
#define FLAG_ITEM_ROUTE_110_DIRE_HIT                                 0x271
#define FLAG_ITEM_ROUTE_111_TM_SANDSTORM                             0x272
#define FLAG_ITEM_ROUTE_111_STARDUST                                 0x273
#define FLAG_ITEM_ROUTE_111_HP_UP                                    0x274
#define FLAG_ITEM_ROUTE_112_NUGGET                                   0x275
#define FLAG_ITEM_ROUTE_113_MAX_ETHER                                0x276
#define FLAG_ITEM_ROUTE_113_SUPER_REPEL                              0x277
#define FLAG_ITEM_ROUTE_114_RARE_CANDY                               0x278
#define FLAG_ITEM_ROUTE_114_PROTEIN                                  0x279
#define FLAG_ITEM_ROUTE_115_SUPER_POTION                             0x27A
#define FLAG_ITEM_ROUTE_115_TM_FOCUS_PUNCH                           0x27B
#define FLAG_ITEM_ROUTE_115_IRON                                     0x27C
#define FLAG_ITEM_ROUTE_116_ETHER                                    0x27D
#define FLAG_ITEM_ROUTE_116_REPEL                                    0x27E
#define FLAG_ITEM_ROUTE_116_HP_UP                                    0x27F

#define FLAG_ITEM_ESPULEE_OUTSKIRTS_RANGER_HEADPHONES                0x270
#define FLAG_ITEM_ESPULEE_OUTSKIRTS_RANGER_ROCKY_HELMET              0x271
#define FLAG_ITEM_ESPULEE_OUTSKIRTS_RANGER_WIDE_LENS                 0x272
#define FLAG_ITEM_WAJABI_LAKE_STUFF1                                 0x273
#define FLAG_ITEM_WAJABI_LAKE_STUFF2                                 0x274
#define FLAG_ITEM_WAJABI_LAKE_STUFF3                                 0x275
#define FLAG_ITEM_WAJABI_LAKE_STUFF4                                 0x276
#define FLAG_ITEM_WAJABI_LAKE_STUFF5                                 0x277
#define FLAG_ITEM_WAJABI_LAKE_STUFF6                                 0x278
#define FLAG_ITEM_WAJABI_LAKE_STUFF7                                 0x279
#define FLAG_ITEM_WAJABI_LAKE_STUFF8                                 0x27A
#define FLAG_ITEM_WAJABI_LAKE_STUFF9                                 0x27B
#define FLAG_SILICON_UNUSED_0x27C                                    0x27C
#define FLAG_SILICON_UNUSED_0x27D                                    0x27D
#define FLAG_SILICON_UNUSED_0x27E                                    0x27E
#define FLAG_SILICON_UNUSED_0x27F                                    0x27F

#define FLAG_ITEM_ROUTE_117_GREAT_BALL                               0x280
#define FLAG_ITEM_ROUTE_117_REVIVE                                   0x281
#define FLAG_ITEM_ROUTE_119_SUPER_REPEL                              0x282
#define FLAG_ITEM_ROUTE_119_ZINC                                     0x283
#define FLAG_ITEM_ROUTE_119_ELIXIR_1                                 0x284
#define FLAG_ITEM_ROUTE_119_LEAF_STONE                               0x285
#define FLAG_ITEM_ROUTE_119_RARE_CANDY                               0x286
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_1                           0x287
#define FLAG_ITEM_ROUTE_120_NUGGET                                   0x288
#define FLAG_ITEM_ROUTE_120_FULL_HEAL                                0x289
#define FLAG_ITEM_ROUTE_123_CALCIUM                                  0x28A
#define FLAG_ITEM_ROUTE_127_ZINC                                     0x28B
#define FLAG_ITEM_ROUTE_127_CARBOS                                   0x28C
#define FLAG_ITEM_ROUTE_132_RARE_CANDY                               0x28D
#define FLAG_ITEM_ROUTE_133_BIG_PEARL                                0x28E
#define FLAG_ITEM_ROUTE_133_STAR_PIECE                               0x28F

#define FLAG_SILICON_UNUSED_0x280                                    0x280
#define FLAG_SILICON_UNUSED_0x281                                    0x281
#define FLAG_SILICON_UNUSED_0x282                                    0x282
#define FLAG_SILICON_UNUSED_0x283                                    0x283
#define FLAG_SILICON_UNUSED_0x284                                    0x284
#define FLAG_SILICON_UNUSED_0x285                                    0x285
#define FLAG_SILICON_UNUSED_0x286                                    0x286
#define FLAG_SILICON_UNUSED_0x287                                    0x287
#define FLAG_SILICON_UNUSED_0x288                                    0x288
#define FLAG_SILICON_UNUSED_0x289                                    0x289
#define FLAG_SILICON_UNUSED_0x28A                                    0x28A
#define FLAG_SILICON_UNUSED_0x28B                                    0x28B
#define FLAG_SILICON_UNUSED_0x28C                                    0x28C
#define FLAG_SILICON_UNUSED_0x28D                                    0x28D
#define FLAG_SILICON_UNUSED_0x28E                                    0x28E
#define FLAG_SILICON_UNUSED_0x28F                                    0x28F

#define FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE                          0x290
#define FLAG_ITEM_PETALBURG_CITY_ETHER                               0x291
#define FLAG_ITEM_RUSTBORO_CITY_X_DEFEND                             0x292
#define FLAG_ITEM_LILYCOVE_CITY_MAX_REPEL                            0x293
#define FLAG_ITEM_MOSSDEEP_CITY_NET_BALL                             0x294
#define FLAG_ITEM_METEOR_FALLS_1F_1R_TM_IRON_TAIL                    0x295
#define FLAG_ITEM_METEOR_FALLS_1F_1R_FULL_HEAL                       0x296
#define FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE                      0x297
#define FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP                           0x298
#define FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL                           0x299
#define FLAG_ITEM_RUSTURF_TUNNEL_MAX_ETHER                           0x29A
#define FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE                        0x29B
#define FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL                         0x29C
#define FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE                             0x29D
#define FLAG_ITEM_GRANITE_CAVE_B2F_REPEL                             0x29E
#define FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY                        0x29F

#define FLAG_SILICON_UNUSED_0x290                                    0x290
#define FLAG_SILICON_UNUSED_0x291                                    0x291
#define FLAG_SILICON_UNUSED_0x292                                    0x292
#define FLAG_SILICON_UNUSED_0x293                                    0x293
#define FLAG_SILICON_UNUSED_0x294                                    0x294
#define FLAG_SILICON_UNUSED_0x295                                    0x295
#define FLAG_SILICON_UNUSED_0x296                                    0x296
#define FLAG_SILICON_UNUSED_0x297                                    0x297
#define FLAG_SILICON_UNUSED_0x298                                    0x298
#define FLAG_SILICON_UNUSED_0x299                                    0x299
#define FLAG_SILICON_UNUSED_0x29A                                    0x29A
#define FLAG_SILICON_UNUSED_0x29B                                    0x29B
#define FLAG_SILICON_UNUSED_0x29C                                    0x29C
#define FLAG_SILICON_UNUSED_0x29D                                    0x29D
#define FLAG_SILICON_UNUSED_0x29E                                    0x29E
#define FLAG_SILICON_UNUSED_0x29F                                    0x29F

#define FLAG_ITEM_PETALBURG_WOODS_X_ATTACK                           0x2A0
#define FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL                         0x2A1
#define FLAG_ITEM_ROUTE_104_POKE_BALL                                0x2A2
#define FLAG_ITEM_PETALBURG_WOODS_ETHER                              0x2A3
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_3R_ECAPE_ROPE                     0x2A4
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL                   0x2A5
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL                   0x2A6
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL                     0x2A7
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL                   0x2A8
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL                     0x2A9
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL                     0x2AA
#define FLAG_ITEM_ROUTE_124_YELLOW_SHARD                             0x2AB
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL                  0x2AC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_TROPIC_MAIL                   0x2AD
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL                     0x2AE
#define FLAG_ITEM_JAGGED_PASS_BURN_HEAL                              0x2AF

#define FLAG_SILICON_UNUSED_0x2A0                                    0x2A0
#define FLAG_SILICON_UNUSED_0x2A1                                    0x2A1
#define FLAG_SILICON_UNUSED_0x2A2                                    0x2A2
#define FLAG_SILICON_UNUSED_0x2A3                                    0x2A3
#define FLAG_SILICON_UNUSED_0x2A4                                    0x2A4
#define FLAG_SILICON_UNUSED_0x2A5                                    0x2A5
#define FLAG_SILICON_UNUSED_0x2A6                                    0x2A6
#define FLAG_SILICON_UNUSED_0x2A7                                    0x2A7
#define FLAG_SILICON_UNUSED_0x2A8                                    0x2A8
#define FLAG_SILICON_UNUSED_0x2A9                                    0x2A9
#define FLAG_SILICON_UNUSED_0x2AA                                    0x2AA
#define FLAG_SILICON_UNUSED_0x2AB                                    0x2AB
#define FLAG_SILICON_UNUSED_0x2AC                                    0x2AC
#define FLAG_SILICON_UNUSED_0x2AD                                    0x2AD
#define FLAG_SILICON_UNUSED_0x2AE                                    0x2AE
#define FLAG_SILICON_UNUSED_0x2AF                                    0x2AF

#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MAX_ELIXIR                        0x2B0
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL                         0x2B1
#define FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION                        0x2B2
#define FLAG_ITEM_MT_PYRE_EXTERIOR_TM_SKILL_SWAP                     0x2B3
#define FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL                            0x2B4
#define FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE                           0x2B5
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL     0x2B6
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER         0x2B7
#define FLAG_ITEM_SCORCHED_SLAB_TM_SUNNY_DAY                         0x2B8
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_TM_DRAGON_CLAW                 0x2B9
#define FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL                      0x2BA
#define FLAG_ITEM_SHOAL_CAVE_INNER_ROOM_RARE_CANDY                   0x2BB
#define FLAG_ITEM_SHOAL_CAVE_STAIRS_ROOM_ICE_HEAL                    0x2BC
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                         0x2BD
#define FLAG_ITEM_VICTORY_ROAD_1F_PP_UP                              0x2BE
#define FLAG_ITEM_VICTORY_ROAD_B1F_TM_PSYCHIC                        0x2BF

#define FLAG_SILICON_UNUSED_0x2B0                                    0x2B0
#define FLAG_SILICON_UNUSED_0x2B1                                    0x2B1
#define FLAG_SILICON_UNUSED_0x2B2                                    0x2B2
#define FLAG_SILICON_UNUSED_0x2B3                                    0x2B3
#define FLAG_SILICON_UNUSED_0x2B4                                    0x2B4
#define FLAG_SILICON_UNUSED_0x2B5                                    0x2B5
#define FLAG_SILICON_UNUSED_0x2B6                                    0x2B6
#define FLAG_SILICON_UNUSED_0x2B7                                    0x2B7
#define FLAG_SILICON_UNUSED_0x2B8                                    0x2B8
#define FLAG_SILICON_UNUSED_0x2B9                                    0x2B9
#define FLAG_SILICON_UNUSED_0x2BA                                    0x2BA
#define FLAG_SILICON_UNUSED_0x2BB                                    0x2BB
#define FLAG_SILICON_UNUSED_0x2BC                                    0x2BC
#define FLAG_SILICON_UNUSED_0x2BD                                    0x2BD
#define FLAG_SILICON_UNUSED_0x2BE                                    0x2BE
#define FLAG_SILICON_UNUSED_0x2BF                                    0x2BF

#define FLAG_ITEM_VICTORY_ROAD_B1F_FULL_RESTORE                      0x2C0
#define FLAG_ITEM_VICTORY_ROAD_B2F_FULL_HEAL                         0x2C1
#define FLAG_ITEM_MT_PYRE_6F_TM_SHADOW_BALL                          0x2C2
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM_EARTHQUAKE               0x2C3
#define FLAG_ITEM_FIERY_PATH_TM_TOXIC                                0x2C4
#define FLAG_ITEM_ROUTE_124_RED_SHARD                                0x2C5
#define FLAG_ITEM_ROUTE_124_BLUE_SHARD                               0x2C6
#define FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM_SOLAR_BEAM               0x2C7
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL                0x2C8
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE               0x2C9
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL               0x2CA
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_TM_ICE_BEAM               0x2CB
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE                   0x2CC
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY         0x2CD
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE     0x2CE
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM_RAIN_DANCE   0x2CF

#define FLAG_SILICON_UNUSED_0x2C0                                    0x2C0
#define FLAG_SILICON_UNUSED_0x2C1                                    0x2C1
#define FLAG_SILICON_UNUSED_0x2C2                                    0x2C2
#define FLAG_SILICON_UNUSED_0x2C3                                    0x2C3
#define FLAG_SILICON_UNUSED_0x2C4                                    0x2C4
#define FLAG_SILICON_UNUSED_0x2C5                                    0x2C5
#define FLAG_SILICON_UNUSED_0x2C6                                    0x2C6
#define FLAG_SILICON_UNUSED_0x2C7                                    0x2C7
#define FLAG_SILICON_UNUSED_0x2C8                                    0x2C8
#define FLAG_SILICON_UNUSED_0x2C9                                    0x2C9
#define FLAG_SILICON_UNUSED_0x2CA                                    0x2CA
#define FLAG_SILICON_UNUSED_0x2CB                                    0x2CB
#define FLAG_SILICON_UNUSED_0x2CC                                    0x2CC
#define FLAG_SILICON_UNUSED_0x2CD                                    0x2CD
#define FLAG_SILICON_UNUSED_0x2CE                                    0x2CE
#define FLAG_SILICON_UNUSED_0x2CF                                    0x2CF

#define FLAG_ITEM_ROUTE_121_CARBOS                                   0x2D0
#define FLAG_ITEM_ROUTE_123_ULTRA_BALL                               0x2D1
#define FLAG_ITEM_ROUTE_126_GREEN_SHARD                              0x2D2
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_2                           0x2D3
#define FLAG_ITEM_ROUTE_120_HYPER_POTION                             0x2D4
#define FLAG_ITEM_ROUTE_120_NEST_BALL                                0x2D5
#define FLAG_ITEM_ROUTE_123_ELIXIR                                   0x2D6
#define FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE                         0x2D7
#define FLAG_ITEM_FIERY_PATH_FIRE_STONE                              0x2D8
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM_HAIL                        0x2D9
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                 0x2DA
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                               0x2DB
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                               0x2DC
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                              0x2DD
#define FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL                      0x2DE
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                               0x2DF

#define FLAG_SILICON_UNUSED_0x2D0                                    0x2D0
#define FLAG_SILICON_UNUSED_0x2D1                                    0x2D1
#define FLAG_SILICON_UNUSED_0x2D2                                    0x2D2
#define FLAG_SILICON_UNUSED_0x2D3                                    0x2D3
#define FLAG_SILICON_UNUSED_0x2D4                                    0x2D4
#define FLAG_SILICON_UNUSED_0x2D5                                    0x2D5
#define FLAG_SILICON_UNUSED_0x2D6                                    0x2D6
#define FLAG_SILICON_UNUSED_0x2D7                                    0x2D7
#define FLAG_SILICON_UNUSED_0x2D8                                    0x2D8
#define FLAG_SILICON_UNUSED_0x2D9                                    0x2D9
#define FLAG_SILICON_UNUSED_0x2DA                                    0x2DA
#define FLAG_SILICON_UNUSED_0x2DB                                    0x2DB
#define FLAG_SILICON_UNUSED_0x2DC                                    0x2DC
#define FLAG_SILICON_UNUSED_0x2DD                                    0x2DD
#define FLAG_SILICON_UNUSED_0x2DE                                    0x2DE
#define FLAG_SILICON_UNUSED_0x2DF                                    0x2DF

#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                          0x2E0
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                             0x2E1
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                             0x2E2
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                             0x2E3
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                         0x2E4
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                       0x2E5
#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                              0x2E6
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                             0x2E7
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                  0x2E8
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                            0x2E9
#define FLAG_ITEM_ROUTE_119_NUGGET                                   0x2EA
#define FLAG_ITEM_ROUTE_104_POTION                                   0x2EB
#define FLAG_ITEM_ROUTE_103_PP_UP                                    0x2EC
#define FLAG_ITEM_ROUTE_108_STAR_PIECE                               0x2ED
#define FLAG_ITEM_ROUTE_109_POTION                                   0x2EE
#define FLAG_ITEM_ROUTE_110_ELIXIR                                   0x2EF

#define FLAG_SILICON_UNUSED_0x2E0                                    0x2E0
#define FLAG_SILICON_UNUSED_0x2E1                                    0x2E1
#define FLAG_SILICON_UNUSED_0x2E2                                    0x2E2
#define FLAG_SILICON_UNUSED_0x2E3                                    0x2E3
#define FLAG_SILICON_UNUSED_0x2E4                                    0x2E4
#define FLAG_SILICON_UNUSED_0x2E5                                    0x2E5
#define FLAG_SILICON_UNUSED_0x2E6                                    0x2E6
#define FLAG_SILICON_UNUSED_0x2E7                                    0x2E7
#define FLAG_SILICON_UNUSED_0x2E8                                    0x2E8
#define FLAG_SILICON_UNUSED_0x2E9                                    0x2E9
#define FLAG_SILICON_UNUSED_0x2EA                                    0x2EA
#define FLAG_SILICON_UNUSED_0x2EB                                    0x2EB
#define FLAG_SILICON_UNUSED_0x2EC                                    0x2EC
#define FLAG_SILICON_UNUSED_0x2ED                                    0x2ED
#define FLAG_SILICON_UNUSED_0x2EE                                    0x2EE
#define FLAG_SILICON_UNUSED_0x2EF                                    0x2EF

#define FLAG_ITEM_ROUTE_111_ELIXIR                                   0x2F0
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                             0x2F1
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                              0x2F2
#define FLAG_ITEM_ROUTE_116_POTION                                   0x2F3
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                 0x2F4
#define FLAG_ITEM_ROUTE_120_REVIVE                                   0x2F5
#define FLAG_ITEM_ROUTE_121_REVIVE                                   0x2F6
#define FLAG_ITEM_ROUTE_121_ZINC                                     0x2F7
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                        0x2F8
#define FLAG_ITEM_ROUTE_123_PP_UP                                    0x2F9
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                             0x2FA
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                                0x2FB
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                               0x2FC
#define FLAG_ITEM_ROUTE_132_PROTEIN                                  0x2FD
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                               0x2FE
#define FLAG_ITEM_ROUTE_134_CARBOS                                   0x2FF

#define FLAG_SILICON_UNUSED_0x2F0                                    0x2F0
#define FLAG_SILICON_UNUSED_0x2F1                                    0x2F1
#define FLAG_SILICON_UNUSED_0x2F2                                    0x2F2
#define FLAG_SILICON_UNUSED_0x2F3                                    0x2F3
#define FLAG_SILICON_UNUSED_0x2F4                                    0x2F4
#define FLAG_SILICON_UNUSED_0x2F5                                    0x2F5
#define FLAG_SILICON_UNUSED_0x2F6                                    0x2F6
#define FLAG_SILICON_UNUSED_0x2F7                                    0x2F7
#define FLAG_SILICON_UNUSED_0x2F8                                    0x2F8
#define FLAG_SILICON_UNUSED_0x2F9                                    0x2F9
#define FLAG_SILICON_UNUSED_0x2FA                                    0x2FA
#define FLAG_SILICON_UNUSED_0x2FB                                    0x2FB
#define FLAG_SILICON_UNUSED_0x2FC                                    0x2FC
#define FLAG_SILICON_UNUSED_0x2FD                                    0x2FD
#define FLAG_SILICON_UNUSED_0x2FE                                    0x2FE
#define FLAG_SILICON_UNUSED_0x2FF                                    0x2FF

#define FLAG_ITEM_ROUTE_134_STAR_PIECE                               0x300
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                            0x301
#define FLAG_ITEM_ROUTE_115_PP_UP                                    0x302
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                             0x303
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                             0x304
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                     0x305
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                   0x306
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                         0x307
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                         0x308
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                        0x309
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                      0x30A
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                   0x30B

#define FLAG_SILICON_UNUSED_0x300                                    0x300
#define FLAG_SILICON_UNUSED_0x301                                    0x301
#define FLAG_SILICON_UNUSED_0x302                                    0x302
#define FLAG_SILICON_UNUSED_0x303                                    0x303
#define FLAG_SILICON_UNUSED_0x304                                    0x304
#define FLAG_SILICON_UNUSED_0x305                                    0x305
#define FLAG_SILICON_UNUSED_0x306                                    0x306
#define FLAG_SILICON_UNUSED_0x307                                    0x307
#define FLAG_SILICON_UNUSED_0x308                                    0x308
#define FLAG_SILICON_UNUSED_0x309                                    0x309
#define FLAG_SILICON_UNUSED_0x30A                                    0x30A
#define FLAG_SILICON_UNUSED_0x30B                                    0x30B

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                      0x30C
#define FLAG_HIDDEN_ITEM_LAVARIDGE_TOWN_ICE_HEAL                     (FLAG_HIDDEN_ITEMS_START + 0x00) //0x30C
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                          (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST                          (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ROUTE_113_ETHER                             (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS                            (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ROUTE_119_CALCIUM                           (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE_119_ULTRA_BALL                        (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL                       (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS                       (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL                        (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL                    (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD                   (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1                (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE                  (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL                   (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST                     (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL                        (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON                         (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL                    (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE                   (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP                        (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE                  (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD                    (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN                      (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PEARL                        (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_HEART_SCALE                   (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET                       (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_ULTRA_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_ROUTE_113_TM_DOUBLE_TEAM                    (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY                     (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY                     (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY                     (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY                     (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS               (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM                      (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POTION                            (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2                (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP                             (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                            (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                            (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE                            (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP                         (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION                      (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION                      (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST                          (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE                       (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1                (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2                (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE                            (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL                        (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1                     (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                        (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE                            (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL                         (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ROUTE_111_PROTEIN                           (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY                        (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION                      (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1             (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2             (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POKE_BALL                   (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL                         (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL                         (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ROUTE_109_ETHER                             (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ROUTE_110_POKE_BALL                         (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE                       (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                              (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                         (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2                      (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                              (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1                      (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                             (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                         (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION                      (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL                     (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL                      (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL                       (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER                  (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                         (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY                   (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL                  (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR                     (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL                  (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                            (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                          (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                        (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                         (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE                       (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE                       (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2                     (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3                     (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1                     (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2                     (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3                     (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY                   (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES                     (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE                       (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                            (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                             (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                        (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM                    (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC                       (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN                    (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON                       (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE         (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC                 (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP                (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH                   (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                        (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                         (FLAG_HIDDEN_ITEMS_START + 0x6F) //0x37B

#define FLAG_SILICON_UNUSED_0x30C                                    0x30C
#define FLAG_SILICON_UNUSED_0x30D                                    0x30D
#define FLAG_SILICON_UNUSED_0x30E                                    0x30E
#define FLAG_SILICON_UNUSED_0x30F                                    0x30F
#define FLAG_SILICON_UNUSED_0x310                                    0x310
#define FLAG_SILICON_UNUSED_0x311                                    0x311
#define FLAG_SILICON_UNUSED_0x312                                    0x312
#define FLAG_SILICON_UNUSED_0x313                                    0x313
#define FLAG_SILICON_UNUSED_0x314                                    0x314
#define FLAG_SILICON_UNUSED_0x315                                    0x315
#define FLAG_SILICON_UNUSED_0x316                                    0x316
#define FLAG_SILICON_UNUSED_0x317                                    0x317
#define FLAG_SILICON_UNUSED_0x318                                    0x318
#define FLAG_SILICON_UNUSED_0x319                                    0x319
#define FLAG_SILICON_UNUSED_0x31A                                    0x31A
#define FLAG_SILICON_UNUSED_0x31B                                    0x31B
#define FLAG_SILICON_UNUSED_0x31C                                    0x31C
#define FLAG_SILICON_UNUSED_0x31D                                    0x31D
#define FLAG_SILICON_UNUSED_0x31E                                    0x31E
#define FLAG_SILICON_UNUSED_0x31F                                    0x31F
#define FLAG_SILICON_UNUSED_0x320                                    0x320
#define FLAG_SILICON_UNUSED_0x321                                    0x321
#define FLAG_SILICON_UNUSED_0x322                                    0x322
#define FLAG_SILICON_UNUSED_0x323                                    0x323
#define FLAG_SILICON_UNUSED_0x324                                    0x324
#define FLAG_SILICON_UNUSED_0x325                                    0x325
#define FLAG_SILICON_UNUSED_0x326                                    0x326
#define FLAG_SILICON_UNUSED_0x327                                    0x327
#define FLAG_SILICON_UNUSED_0x328                                    0x328
#define FLAG_SILICON_UNUSED_0x329                                    0x329
#define FLAG_SILICON_UNUSED_0x32A                                    0x32A
#define FLAG_SILICON_UNUSED_0x32B                                    0x32B
#define FLAG_SILICON_UNUSED_0x32C                                    0x32C
#define FLAG_SILICON_UNUSED_0x32D                                    0x32D
#define FLAG_SILICON_UNUSED_0x32E                                    0x32E
#define FLAG_SILICON_UNUSED_0x32F                                    0x32F
#define FLAG_SILICON_UNUSED_0x330                                    0x330
#define FLAG_SILICON_UNUSED_0x331                                    0x331
#define FLAG_SILICON_UNUSED_0x332                                    0x332
#define FLAG_SILICON_UNUSED_0x333                                    0x333
#define FLAG_SILICON_UNUSED_0x334                                    0x334
#define FLAG_SILICON_UNUSED_0x335                                    0x335
#define FLAG_SILICON_UNUSED_0x336                                    0x336
#define FLAG_SILICON_UNUSED_0x337                                    0x337
#define FLAG_SILICON_UNUSED_0x338                                    0x338
#define FLAG_SILICON_UNUSED_0x339                                    0x339
#define FLAG_SILICON_UNUSED_0x33A                                    0x33A
#define FLAG_SILICON_UNUSED_0x33B                                    0x33B
#define FLAG_SILICON_UNUSED_0x33C                                    0x33C
#define FLAG_SILICON_UNUSED_0x33D                                    0x33D
#define FLAG_SILICON_UNUSED_0x33E                                    0x33E
#define FLAG_SILICON_UNUSED_0x33F                                    0x33F
#define FLAG_SILICON_UNUSED_0x340                                    0x340
#define FLAG_SILICON_UNUSED_0x341                                    0x341
#define FLAG_SILICON_UNUSED_0x342                                    0x342
#define FLAG_SILICON_UNUSED_0x343                                    0x343
#define FLAG_SILICON_UNUSED_0x344                                    0x344
#define FLAG_SILICON_UNUSED_0x345                                    0x345
#define FLAG_SILICON_UNUSED_0x346                                    0x346
#define FLAG_SILICON_UNUSED_0x347                                    0x347
#define FLAG_SILICON_UNUSED_0x348                                    0x348
#define FLAG_SILICON_UNUSED_0x349                                    0x349
#define FLAG_SILICON_UNUSED_0x34A                                    0x34A
#define FLAG_SILICON_UNUSED_0x34B                                    0x34B
#define FLAG_SILICON_UNUSED_0x34C                                    0x34C
#define FLAG_SILICON_UNUSED_0x34D                                    0x34D
#define FLAG_SILICON_UNUSED_0x34E                                    0x34E
#define FLAG_SILICON_UNUSED_0x34F                                    0x34F
#define FLAG_SILICON_UNUSED_0x350                                    0x350
#define FLAG_SILICON_UNUSED_0x351                                    0x351
#define FLAG_SILICON_UNUSED_0x352                                    0x352
#define FLAG_SILICON_UNUSED_0x353                                    0x353
#define FLAG_SILICON_UNUSED_0x354                                    0x354
#define FLAG_SILICON_UNUSED_0x355                                    0x355
#define FLAG_SILICON_UNUSED_0x356                                    0x356
#define FLAG_SILICON_UNUSED_0x357                                    0x357
#define FLAG_SILICON_UNUSED_0x358                                    0x358
#define FLAG_SILICON_UNUSED_0x359                                    0x359
#define FLAG_SILICON_UNUSED_0x35A                                    0x35A
#define FLAG_SILICON_UNUSED_0x35B                                    0x35B
#define FLAG_SILICON_UNUSED_0x35C                                    0x35C
#define FLAG_SILICON_UNUSED_0x35D                                    0x35D
#define FLAG_SILICON_UNUSED_0x35E                                    0x35E
#define FLAG_SILICON_UNUSED_0x35F                                    0x35F
#define FLAG_SILICON_UNUSED_0x360                                    0x360
#define FLAG_SILICON_UNUSED_0x361                                    0x361
#define FLAG_SILICON_UNUSED_0x362                                    0x362
#define FLAG_SILICON_UNUSED_0x363                                    0x363
#define FLAG_SILICON_UNUSED_0x364                                    0x364
#define FLAG_SILICON_UNUSED_0x365                                    0x365
#define FLAG_SILICON_UNUSED_0x366                                    0x366
#define FLAG_SILICON_UNUSED_0x367                                    0x367
#define FLAG_SILICON_UNUSED_0x368                                    0x368
#define FLAG_SILICON_UNUSED_0x369                                    0x369
#define FLAG_SILICON_UNUSED_0x36A                                    0x36A
#define FLAG_SILICON_UNUSED_0x36B                                    0x36B
#define FLAG_SILICON_UNUSED_0x36C                                    0x36C
#define FLAG_SILICON_UNUSED_0x36D                                    0x36D
#define FLAG_SILICON_UNUSED_0x36E                                    0x36E
#define FLAG_SILICON_UNUSED_0x36F                                    0x36F
#define FLAG_SILICON_UNUSED_0x370                                    0x370
#define FLAG_SILICON_UNUSED_0x371                                    0x371
#define FLAG_SILICON_UNUSED_0x372                                    0x372
#define FLAG_SILICON_UNUSED_0x373                                    0x373
#define FLAG_SILICON_UNUSED_0x374                                    0x374
#define FLAG_SILICON_UNUSED_0x375                                    0x375
#define FLAG_SILICON_UNUSED_0x376                                    0x376
#define FLAG_SILICON_UNUSED_0x377                                    0x377
#define FLAG_SILICON_UNUSED_0x378                                    0x378
#define FLAG_SILICON_UNUSED_0x379                                    0x379
#define FLAG_SILICON_UNUSED_0x37A                                    0x37A
#define FLAG_SILICON_UNUSED_0x37B                                    0x37B

// Flags for whether a rematchable trainer has been registered in the player's Match Call.
// Most are used implicitly by adding their REMATCH_* id to TRAINER_REGISTERED_FLAGS_START.
// Some Match Call entries (like those for gym leaders, Wally, and all non-trainer NPCs like Prof. Birch)
// have their own separate flag that needs to be set to be enabled; see src/pokenav_match_call_data.c
#define TRAINER_REGISTERED_FLAGS_START                               0x37C
#define FLAG_REGISTERED_ROSE                                         (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROSE) //0x37C
#define FLAG_REGISTERED_ANDRES                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_ANDRES)
#define FLAG_REGISTERED_DUSTY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_DUSTY)
#define FLAG_REGISTERED_LOLA                                         (TRAINER_REGISTERED_FLAGS_START + REMATCH_LOLA)F
#define FLAG_REGISTERED_RICKY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_RICKY)
#define FLAG_REGISTERED_LILA_AND_ROY                                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_LILA_AND_ROY)
#define FLAG_REGISTERED_CRISTIN                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_CRISTIN)
#define FLAG_REGISTERED_BROOKE                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_BROOKE)
#define FLAG_REGISTERED_WILTON                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_WILTON)
#define FLAG_REGISTERED_VALERIE                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_VALERIE)
#define FLAG_REGISTERED_CINDY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_CINDY)
#define FLAG_REGISTERED_THALIA                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_THALIA)
#define FLAG_REGISTERED_JESSICA                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_JESSICA)
#define FLAG_REGISTERED_WINSTON                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_WINSTON)
#define FLAG_REGISTERED_STEVE                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_STEVE)
#define FLAG_REGISTERED_TONY                                         (TRAINER_REGISTERED_FLAGS_START + REMATCH_TONY)
#define FLAG_REGISTERED_NOB                                          (TRAINER_REGISTERED_FLAGS_START + REMATCH_NOB)
#define FLAG_REGISTERED_KOJI                                         (TRAINER_REGISTERED_FLAGS_START + REMATCH_KOJI)
#define FLAG_REGISTERED_FERNANDO                                     (TRAINER_REGISTERED_FLAGS_START + REMATCH_FERNANDO)
#define FLAG_REGISTERED_DALTON                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_DALTON)
#define FLAG_REGISTERED_BERNIE                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_BERNIE)
#define FLAG_REGISTERED_ETHAN                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_ETHAN)
#define FLAG_REGISTERED_JOHN_AND_JAY                                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_JOHN_AND_JAY)
#define FLAG_REGISTERED_JEFFREY                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_JEFFREY)
#define FLAG_REGISTERED_CAMERON                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_CAMERON)
#define FLAG_REGISTERED_JACKI                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_JACKI)
#define FLAG_REGISTERED_WALTER                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALTER)
#define FLAG_REGISTERED_KAREN                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_KAREN)
#define FLAG_REGISTERED_JERRY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_JERRY)
#define FLAG_REGISTERED_ANNA_AND_MEG                                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_ANNA_AND_MEG)
#define FLAG_REGISTERED_ISABEL                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISABEL)
#define FLAG_REGISTERED_MIGUEL                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_MIGUEL)
#define FLAG_REGISTERED_TIMOTHY                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_TIMOTHY)
#define FLAG_REGISTERED_SHELBY                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_SHELBY)
#define FLAG_REGISTERED_CALVIN                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_CALVIN)
#define FLAG_REGISTERED_ELLIOT                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_ELLIOT)
#define FLAG_REGISTERED_ISAIAH                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISAIAH)
#define FLAG_REGISTERED_MARIA                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_MARIA)
#define FLAG_REGISTERED_ABIGAIL                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_ABIGAIL)
#define FLAG_REGISTERED_DYLAN                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_DYLAN)
#define FLAG_REGISTERED_KATELYN                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_KATELYN)
#define FLAG_REGISTERED_BENJAMIN                                     (TRAINER_REGISTERED_FLAGS_START + REMATCH_BENJAMIN)
#define FLAG_REGISTERED_PABLO                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_PABLO)
#define FLAG_REGISTERED_NICOLAS                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_NICOLAS)
#define FLAG_REGISTERED_ROBERT                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROBERT)
#define FLAG_REGISTERED_LAO                                          (TRAINER_REGISTERED_FLAGS_START + REMATCH_LAO)
#define FLAG_REGISTERED_CYNDY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_CYNDY)
#define FLAG_REGISTERED_MADELINE                                     (TRAINER_REGISTERED_FLAGS_START + REMATCH_MADELINE)
#define FLAG_REGISTERED_JENNY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_JENNY)
#define FLAG_REGISTERED_DIANA                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_DIANA)
#define FLAG_REGISTERED_AMY_AND_LIV                                  (TRAINER_REGISTERED_FLAGS_START + REMATCH_AMY_AND_LIV)
#define FLAG_REGISTERED_ERNEST                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_ERNEST)
#define FLAG_REGISTERED_CORY                                         (TRAINER_REGISTERED_FLAGS_START + REMATCH_CORY)
#define FLAG_REGISTERED_EDWIN                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_EDWIN)
#define FLAG_REGISTERED_LYDIA                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_LYDIA)
#define FLAG_REGISTERED_ISAAC                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_ISAAC)
#define FLAG_REGISTERED_GABRIELLE                                    (TRAINER_REGISTERED_FLAGS_START + REMATCH_GABRIELLE)
#define FLAG_REGISTERED_CATHERINE                                    (TRAINER_REGISTERED_FLAGS_START + REMATCH_CATHERINE)
#define FLAG_REGISTERED_JACKSON                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_JACKSON)
#define FLAG_REGISTERED_HALEY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_HALEY)
#define FLAG_REGISTERED_JAMES                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_JAMES)
#define FLAG_REGISTERED_TRENT                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_TRENT)
#define FLAG_REGISTERED_SAWYER                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_SAWYER)
#define FLAG_REGISTERED_KIRA_AND_DAN                                 (TRAINER_REGISTERED_FLAGS_START + REMATCH_KIRA_AND_DAN)
#define FLAG_REGISTERED_WALLY                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALLY_VR)
#define FLAG_REGISTERED_ROXANNE                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_ROXANNE)
#define FLAG_REGISTERED_BRAWLY                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_BRAWLY)
#define FLAG_REGISTERED_WATTSON                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_WATTSON)
#define FLAG_REGISTERED_FLANNERY                                     (TRAINER_REGISTERED_FLAGS_START + REMATCH_FLANNERY)
#define FLAG_REGISTERED_NORMAN                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_NORMAN)
#define FLAG_REGISTERED_WINONA                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_WINONA)
#define FLAG_REGISTERED_TATE_AND_LIZA                                (TRAINER_REGISTERED_FLAGS_START + REMATCH_TATE_AND_LIZA)
#define FLAG_REGISTERED_JUAN                                         (TRAINER_REGISTERED_FLAGS_START + REMATCH_JUAN)
#define FLAG_REGISTERED_SIDNEY                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_SIDNEY)
#define FLAG_REGISTERED_PHOEBE                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_PHOEBE)
#define FLAG_REGISTERED_GLACIA                                       (TRAINER_REGISTERED_FLAGS_START + REMATCH_GLACIA)
#define FLAG_REGISTERED_DRAKE                                        (TRAINER_REGISTERED_FLAGS_START + REMATCH_DRAKE)
#define FLAG_REGISTERED_WALLACE                                      (TRAINER_REGISTERED_FLAGS_START + REMATCH_WALLACE) //0x3C9

#define FLAG_SILICON_UNUSED_0x37C                                    0x37C
#define FLAG_SILICON_UNUSED_0x37D                                    0x37D
#define FLAG_SILICON_UNUSED_0x37E                                    0x37E
#define FLAG_SILICON_UNUSED_0x37F                                    0x37F
#define FLAG_SILICON_UNUSED_0x380                                    0x380
#define FLAG_SILICON_UNUSED_0x381                                    0x381
#define FLAG_SILICON_UNUSED_0x382                                    0x382
#define FLAG_SILICON_UNUSED_0x383                                    0x383
#define FLAG_SILICON_UNUSED_0x384                                    0x384
#define FLAG_SILICON_UNUSED_0x385                                    0x385
#define FLAG_SILICON_UNUSED_0x386                                    0x386
#define FLAG_SILICON_UNUSED_0x387                                    0x387
#define FLAG_SILICON_UNUSED_0x388                                    0x388
#define FLAG_SILICON_UNUSED_0x389                                    0x389
#define FLAG_SILICON_UNUSED_0x38A                                    0x38A
#define FLAG_SILICON_UNUSED_0x38B                                    0x38B
#define FLAG_SILICON_UNUSED_0x38C                                    0x38C
#define FLAG_SILICON_UNUSED_0x38D                                    0x38D
#define FLAG_SILICON_UNUSED_0x38E                                    0x38E
#define FLAG_SILICON_UNUSED_0x38F                                    0x38F
#define FLAG_SILICON_UNUSED_0x390                                    0x390
#define FLAG_SILICON_UNUSED_0x391                                    0x391
#define FLAG_SILICON_UNUSED_0x392                                    0x392
#define FLAG_SILICON_UNUSED_0x393                                    0x393
#define FLAG_SILICON_UNUSED_0x394                                    0x394
#define FLAG_SILICON_UNUSED_0x395                                    0x395
#define FLAG_SILICON_UNUSED_0x396                                    0x396
#define FLAG_SILICON_UNUSED_0x397                                    0x397
#define FLAG_SILICON_UNUSED_0x398                                    0x398
#define FLAG_SILICON_UNUSED_0x399                                    0x399
#define FLAG_SILICON_UNUSED_0x39A                                    0x39A
#define FLAG_SILICON_UNUSED_0x39B                                    0x39B
#define FLAG_SILICON_UNUSED_0x39C                                    0x39C
#define FLAG_SILICON_UNUSED_0x39D                                    0x39D
#define FLAG_SILICON_UNUSED_0x39E                                    0x39E
#define FLAG_SILICON_UNUSED_0x39F                                    0x39F
#define FLAG_SILICON_UNUSED_0x3A0                                    0x3A0
#define FLAG_SILICON_UNUSED_0x3A1                                    0x3A1
#define FLAG_SILICON_UNUSED_0x3A2                                    0x3A2
#define FLAG_SILICON_UNUSED_0x3A3                                    0x3A3
#define FLAG_SILICON_UNUSED_0x3A4                                    0x3A4
#define FLAG_SILICON_UNUSED_0x3A5                                    0x3A5
#define FLAG_SILICON_UNUSED_0x3A6                                    0x3A6
#define FLAG_SILICON_UNUSED_0x3A7                                    0x3A7
#define FLAG_SILICON_UNUSED_0x3A8                                    0x3A8
#define FLAG_SILICON_UNUSED_0x3A9                                    0x3A9
#define FLAG_SILICON_UNUSED_0x3AA                                    0x3AA
#define FLAG_SILICON_UNUSED_0x3AB                                    0x3AB
#define FLAG_SILICON_UNUSED_0x3AC                                    0x3AC
#define FLAG_SILICON_UNUSED_0x3AD                                    0x3AD
#define FLAG_SILICON_UNUSED_0x3AE                                    0x3AE
#define FLAG_SILICON_UNUSED_0x3AF                                    0x3AF
#define FLAG_SILICON_UNUSED_0x3B0                                    0x3B0
#define FLAG_SILICON_UNUSED_0x3B1                                    0x3B1
#define FLAG_SILICON_UNUSED_0x3B2                                    0x3B2
#define FLAG_SILICON_UNUSED_0x3B3                                    0x3B3
#define FLAG_SILICON_UNUSED_0x3B4                                    0x3B4
#define FLAG_SILICON_UNUSED_0x3B5                                    0x3B5
#define FLAG_SILICON_UNUSED_0x3B6                                    0x3B6
#define FLAG_SILICON_UNUSED_0x3B7                                    0x3B7
#define FLAG_SILICON_UNUSED_0x3B8                                    0x3B8
#define FLAG_SILICON_UNUSED_0x3B9                                    0x3B9
#define FLAG_SILICON_UNUSED_0x3BA                                    0x3BA
#define FLAG_SILICON_UNUSED_0x3BB                                    0x3BB
#define FLAG_SILICON_UNUSED_0x3BC                                    0x3BC
#define FLAG_SILICON_UNUSED_0x3BD                                    0x3BD
#define FLAG_SILICON_UNUSED_0x3BE                                    0x3BE
#define FLAG_SILICON_UNUSED_0x3BF                                    0x3BF
#define FLAG_SILICON_UNUSED_0x3C0                                    0x3C0
#define FLAG_SILICON_UNUSED_0x3C1                                    0x3C1
#define FLAG_SILICON_UNUSED_0x3C2                                    0x3C2
#define FLAG_SILICON_UNUSED_0x3C3                                    0x3C3
#define FLAG_SILICON_UNUSED_0x3C4                                    0x3C4
#define FLAG_SILICON_UNUSED_0x3C5                                    0x3C5
#define FLAG_SILICON_UNUSED_0x3C6                                    0x3C6
#define FLAG_SILICON_UNUSED_0x3C7                                    0x3C7
#define FLAG_SILICON_UNUSED_0x3C8                                    0x3C8
#define FLAG_SILICON_UNUSED_0x3C9                                    0x3C9

#define FLAG_DEFEATED_RUSTBORO_GYM                                   0x3CA
#define FLAG_DEFEATED_DEWFORD_GYM                                    0x3CB
#define FLAG_DEFEATED_MAUVILLE_GYM                                   0x3CC
#define FLAG_DEFEATED_LAVARIDGE_GYM                                  0x3CD
#define FLAG_DEFEATED_PETALBURG_GYM                                  0x3CE
#define FLAG_DEFEATED_FORTREE_GYM                                    0x3CF
#define FLAG_DEFEATED_MOSSDEEP_GYM                                   0x3D0
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                 0x3D1
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                            0x3D2

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                 0x3D3
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                 0x3D4
#define FLAG_DEFEATED_ELITE_4_GLACIA                                 0x3D5
#define FLAG_DEFEATED_ELITE_4_DRAKE                                  0x3D6

#define FLAG_SILICON_UNUSED_0x3CA                                    0x3CA
#define FLAG_SILICON_UNUSED_0x3CB                                    0x3CB
#define FLAG_SILICON_UNUSED_0x3CC                                    0x3CC
#define FLAG_SILICON_UNUSED_0x3CD                                    0x3CD
#define FLAG_SILICON_UNUSED_0x3CE                                    0x3CE
#define FLAG_SILICON_UNUSED_0x3CF                                    0x3CF
#define FLAG_SILICON_UNUSED_0x3D0                                    0x3D0
#define FLAG_SILICON_UNUSED_0x3D1                                    0x3D1
#define FLAG_SILICON_UNUSED_0x3D2                                    0x3D2

#define FLAG_SILICON_UNUSED_0x3D3                                    0x3D3
#define FLAG_SILICON_UNUSED_0x3D4                                    0x3D4
#define FLAG_SILICON_UNUSED_0x3D5                                    0x3D5
#define FLAG_SILICON_UNUSED_0x3D6                                    0x3D6


//if you wish to use/rename these flags, make sure to remove references to these in map scripts as detailed below

#define FLAG_MYSTERY_GIFT_DONE                                       0x3D7
#define FLAG_MYSTERY_GIFT_1                                          0x3D8
#define FLAG_MYSTERY_GIFT_2                                          0x3D9
#define FLAG_MYSTERY_GIFT_3                                          0x3DA
#define FLAG_MYSTERY_GIFT_4                                          0x3DB
#define FLAG_MYSTERY_GIFT_5                                          0x3DC
#define FLAG_MYSTERY_GIFT_6                                          0x3DD
#define FLAG_MYSTERY_GIFT_7                                          0x3DE
#define FLAG_MYSTERY_GIFT_8                                          0x3DF
#define FLAG_MYSTERY_GIFT_9                                          0x3E0
#define FLAG_MYSTERY_GIFT_10                                         0x3E1
#define FLAG_MYSTERY_GIFT_11                                         0x3E2
#define FLAG_MYSTERY_GIFT_12                                         0x3E3
#define FLAG_MYSTERY_GIFT_13                                         0x3E4
#define FLAG_MYSTERY_GIFT_14                                         0x3E5
#define FLAG_MYSTERY_GIFT_15                                         0x3E6

#define FLAG_SILICON_UNUSED_0x3E7                                    0x3E7
#define FLAG_SILICON_UNUSED_0x3E8                                    0x3E8
#define FLAG_SILICON_UNUSED_0x3E9                                    0x3E9
#define FLAG_SILICON_UNUSED_0x3EA                                    0x3EA
#define FLAG_SILICON_UNUSED_0x3EB                                    0x3EB

#define FLAG_SILICON_UNUSED_0x3EC                                    0x3EC
#define FLAG_SILICON_UNUSED_0x3ED                                    0x3ED
#define FLAG_SILICON_UNUSED_0x3EE                                    0x3EE

#define FLAG_SILICON_UNUSED_0x3EF                                    0x3EF
#define FLAG_SILICON_UNUSED_0x3F0                                    0x3F0
#define FLAG_SILICON_UNUSED_0x3F1                                    0x3F1
#define FLAG_SILICON_UNUSED_0x3F2                                    0x3F2
#define FLAG_SILICON_UNUSED_0x3F3                                    0x3F3

//Wonder Cards
#define FLAG_WONDER_CARD_UNUSED_1                                    0x3F4 // These Wonder Card flags are referenced but never                                                     set
#define FLAG_WONDER_CARD_UNUSED_2                                    0x3F5
#define FLAG_WONDER_CARD_UNUSED_3                                    0x3F6
#define FLAG_WONDER_CARD_UNUSED_4                                    0x3F7
#define FLAG_WONDER_CARD_UNUSED_5                                    0x3F8
#define FLAG_WONDER_CARD_UNUSED_6                                    0x3F9
#define FLAG_WONDER_CARD_UNUSED_7                                    0x3FA
#define FLAG_WONDER_CARD_UNUSED_8                                    0x3FB
#define FLAG_WONDER_CARD_UNUSED_9                                    0x3FC
#define FLAG_WONDER_CARD_UNUSED_10                                   0x3FD
#define FLAG_WONDER_CARD_UNUSED_11                                   0x3FE
#define FLAG_WONDER_CARD_UNUSED_12                                   0x3FF
#define FLAG_WONDER_CARD_UNUSED_13                                   0x400
#define FLAG_WONDER_CARD_UNUSED_14                                   0x401
#define FLAG_WONDER_CARD_UNUSED_15                                   0x402
#define FLAG_WONDER_CARD_UNUSED_16                                   0x403
#define FLAG_WONDER_CARD_UNUSED_17                                   0x404
// in 'src/mystery_gift.c'
// in section: 'static const u16 sReceivedGiftFlags[]'
// delete the 17 lines that start 'FLAG_WONDER_CARD_UNUSED' (lines 234 to 250)

#define FLAG_SILICON_UNUSED_0x405                                    0x405
#define FLAG_SILICON_UNUSED_0x406                                    0x406
#define FLAG_SILICON_UNUSED_0x407                                    0x407
#define FLAG_SILICON_UNUSED_0x408                                    0x408
#define FLAG_SILICON_UNUSED_0x409                                    0x409
#define FLAG_SILICON_UNUSED_0x40A                                    0x40A
#define FLAG_SILICON_UNUSED_0x40B                                    0x40B
#define FLAG_SILICON_UNUSED_0x40C                                    0x40C
#define FLAG_SILICON_UNUSED_0x40D                                    0x40D // //placed here to make the TRAINER_FLAGS_START begin at a 0                                                     flag
#define FLAG_SILICON_UNUSED_0x40E                                    0x40E // //placed here to make the TRAINER_FLAGS_START begin at a 0                                                     flag
#define FLAG_SILICON_UNUSED_0x40F                                    0x40F // //placed here to make the TRAINER_FLAGS_START begin at a 0                                                     flag

//note: once the above changes are made, TRAINER_FLAGS_START can be moved up to 0x3E0 and the new unused flags moved down to start at 0x740

// Trainer Flags
// Trainer flags currently occupy 0x410 - 0x76F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                          0x410
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x76F


// 240 unused flags
// unused flags start 0x770
// if using these for Trainer battles, delete the same amount of lines from below and update the above numbers.
// eg: delete 10 lines if adding 10 trainers and change the above to 0x779.
#define FLAG_UNUSED_0x770                                            0x770 // Unused                                                     Flag
#define FLAG_UNUSED_0x771                                            0x771 // Unused                                                     Flag
#define FLAG_UNUSED_0x772                                            0x772 // Unused                                                     Flag
#define FLAG_UNUSED_0x773                                            0x773 // Unused                                                     Flag
#define FLAG_UNUSED_0x774                                            0x774 // Unused                                                     Flag
#define FLAG_UNUSED_0x775                                            0x775 // Unused                                                     Flag
#define FLAG_UNUSED_0x776                                            0x776 // Unused                                                     Flag
#define FLAG_UNUSED_0x777                                            0x777 // Unused                                                     Flag
#define FLAG_UNUSED_0x778                                            0x778 // Unused                                                     Flag
#define FLAG_UNUSED_0x779                                            0x779 // Unused                                                     Flag
#define FLAG_UNUSED_0x77A                                            0x77A // Unused                                                     Flag
#define FLAG_UNUSED_0x77B                                            0x77B // Unused                                                     Flag
#define FLAG_UNUSED_0x77C                                            0x77C // Unused                                                     Flag
#define FLAG_UNUSED_0x77D                                            0x77D // Unused                                                     Flag
#define FLAG_UNUSED_0x77E                                            0x77E // Unused                                                     Flag
#define FLAG_UNUSED_0x77F                                            0x77F // Unused                                                     Flag

#define FLAG_UNUSED_0x780                                            0x780 // Unused                                                     Flag
#define FLAG_UNUSED_0x781                                            0x781 // Unused                                                     Flag
#define FLAG_UNUSED_0x782                                            0x782 // Unused                                                     Flag
#define FLAG_UNUSED_0x783                                            0x783 // Unused                                                     Flag
#define FLAG_UNUSED_0x784                                            0x784 // Unused                                                     Flag
#define FLAG_UNUSED_0x785                                            0x785 // Unused                                                     Flag
#define FLAG_UNUSED_0x786                                            0x786 // Unused                                                     Flag
#define FLAG_UNUSED_0x787                                            0x787 // Unused                                                     Flag
#define FLAG_UNUSED_0x788                                            0x788 // Unused                                                     Flag
#define FLAG_UNUSED_0x789                                            0x789 // Unused                                                     Flag
#define FLAG_UNUSED_0x78A                                            0x78A // Unused                                                     Flag
#define FLAG_UNUSED_0x78B                                            0x78B // Unused                                                     Flag
#define FLAG_UNUSED_0x78C                                            0x78C // Unused                                                     Flag
#define FLAG_UNUSED_0x78D                                            0x78D // Unused                                                     Flag
#define FLAG_UNUSED_0x78E                                            0x78E // Unused                                                     Flag
#define FLAG_UNUSED_0x78F                                            0x78F // Unused                                                     Flag

#define FLAG_UNUSED_0x790                                            0x790 // Unused                                                     Flag
#define FLAG_UNUSED_0x791                                            0x791 // Unused                                                     Flag
#define FLAG_UNUSED_0x792                                            0x792 // Unused                                                     Flag
#define FLAG_UNUSED_0x793                                            0x793 // Unused                                                     Flag
#define FLAG_UNUSED_0x794                                            0x794 // Unused                                                     Flag
#define FLAG_UNUSED_0x795                                            0x795 // Unused                                                     Flag
#define FLAG_UNUSED_0x796                                            0x796 // Unused                                                     Flag
#define FLAG_UNUSED_0x797                                            0x797 // Unused                                                     Flag
#define FLAG_UNUSED_0x798                                            0x798 // Unused                                                     Flag
#define FLAG_UNUSED_0x799                                            0x799 // Unused                                                     Flag
#define FLAG_UNUSED_0x79A                                            0x79A // Unused                                                     Flag
#define FLAG_UNUSED_0x79B                                            0x79B // Unused                                                     Flag
#define FLAG_UNUSED_0x79C                                            0x79C // Unused                                                     Flag
#define FLAG_UNUSED_0x79D                                            0x79D // Unused                                                     Flag
#define FLAG_UNUSED_0x79E                                            0x79E // Unused                                                     Flag
#define FLAG_UNUSED_0x79F                                            0x79F // Unused                                                     Flag

#define FLAG_UNUSED_0x7A0                                            0x7A0 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A1                                            0x7A1 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A2                                            0x7A2 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A3                                            0x7A3 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A4                                            0x7A4 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A5                                            0x7A5 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A6                                            0x7A6 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A7                                            0x7A7 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A8                                            0x7A8 // Unused                                                     Flag
#define FLAG_UNUSED_0x7A9                                            0x7A9 // Unused                                                     Flag
#define FLAG_UNUSED_0x7AA                                            0x7AA // Unused                                                     Flag
#define FLAG_UNUSED_0x7AB                                            0x7AB // Unused                                                     Flag
#define FLAG_UNUSED_0x7AC                                            0x7AC // Unused                                                     Flag
#define FLAG_UNUSED_0x7AD                                            0x7AD // Unused                                                     Flag
#define FLAG_UNUSED_0x7AE                                            0x7AE // Unused                                                     Flag
#define FLAG_UNUSED_0x7AF                                            0x7AF // Unused                                                     Flag

#define FLAG_UNUSED_0x7B0                                            0x7B0 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B1                                            0x7B1 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B2                                            0x7B2 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B3                                            0x7B3 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B4                                            0x7B4 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B5                                            0x7B5 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B6                                            0x7B6 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B7                                            0x7B7 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B8                                            0x7B8 // Unused                                                     Flag
#define FLAG_UNUSED_0x7B9                                            0x7B9 // Unused                                                     Flag
#define FLAG_UNUSED_0x7BA                                            0x7BA // Unused                                                     Flag
#define FLAG_UNUSED_0x7BB                                            0x7BB // Unused                                                     Flag
#define FLAG_UNUSED_0x7BC                                            0x7BC // Unused                                                     Flag
#define FLAG_UNUSED_0x7BD                                            0x7BD // Unused                                                     Flag
#define FLAG_UNUSED_0x7BE                                            0x7BE // Unused                                                     Flag
#define FLAG_UNUSED_0x7BF                                            0x7BF // Unused                                                     Flag

#define FLAG_UNUSED_0x7C0                                            0x7C0 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C1                                            0x7C1 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C2                                            0x7C2 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C3                                            0x7C3 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C4                                            0x7C4 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C5                                            0x7C5 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C6                                            0x7C6 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C7                                            0x7C7 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C8                                            0x7C8 // Unused                                                     Flag
#define FLAG_UNUSED_0x7C9                                            0x7C9 // Unused                                                     Flag
#define FLAG_UNUSED_0x7CA                                            0x7CA // Unused                                                     Flag
#define FLAG_UNUSED_0x7CB                                            0x7CB // Unused                                                     Flag
#define FLAG_UNUSED_0x7CC                                            0x7CC // Unused                                                     Flag
#define FLAG_UNUSED_0x7CD                                            0x7CD // Unused                                                     Flag
#define FLAG_UNUSED_0x7CE                                            0x7CE // Unused                                                     Flag
#define FLAG_UNUSED_0x7CF                                            0x7CF // Unused                                                     Flag

#define FLAG_UNUSED_0x7D0                                            0x7D0 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D1                                            0x7D1 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D2                                            0x7D2 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D3                                            0x7D3 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D4                                            0x7D4 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D5                                            0x7D5 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D6                                            0x7D6 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D7                                            0x7D7 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D8                                            0x7D8 // Unused                                                     Flag
#define FLAG_UNUSED_0x7D9                                            0x7D9 // Unused                                                     Flag
#define FLAG_UNUSED_0x7DA                                            0x7DA // Unused                                                     Flag
#define FLAG_UNUSED_0x7DB                                            0x7DB // Unused                                                     Flag
#define FLAG_UNUSED_0x7DC                                            0x7DC // Unused                                                     Flag
#define FLAG_UNUSED_0x7DD                                            0x7DD // Unused                                                     Flag
#define FLAG_UNUSED_0x7DE                                            0x7DE // Unused                                                     Flag
#define FLAG_UNUSED_0x7DF                                            0x7DF // Unused                                                     Flag

#define FLAG_UNUSED_0x7E0                                            0x7E0 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E1                                            0x7E1 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E2                                            0x7E2 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E3                                            0x7E3 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E4                                            0x7E4 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E5                                            0x7E5 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E6                                            0x7E6 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E7                                            0x7E7 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E8                                            0x7E8 // Unused                                                     Flag
#define FLAG_UNUSED_0x7E9                                            0x7E9 // Unused                                                     Flag
#define FLAG_UNUSED_0x7EA                                            0x7EA // Unused                                                     Flag
#define FLAG_UNUSED_0x7EB                                            0x7EB // Unused                                                     Flag
#define FLAG_UNUSED_0x7EC                                            0x7EC // Unused                                                     Flag
#define FLAG_UNUSED_0x7ED                                            0x7ED // Unused                                                     Flag
#define FLAG_UNUSED_0x7EE                                            0x7EE // Unused                                                     Flag
#define FLAG_UNUSED_0x7EF                                            0x7EF // Unused                                                     Flag

#define FLAG_UNUSED_0x7F0                                            0x7F0 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F1                                            0x7F1 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F2                                            0x7F2 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F3                                            0x7F3 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F4                                            0x7F4 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F5                                            0x7F5 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F6                                            0x7F6 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F7                                            0x7F7 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F8                                            0x7F8 // Unused                                                     Flag
#define FLAG_UNUSED_0x7F9                                            0x7F9 // Unused                                                     Flag
#define FLAG_UNUSED_0x7FA                                            0x7FA // Unused                                                     Flag
#define FLAG_UNUSED_0x7FB                                            0x7FB // Unused                                                     Flag
#define FLAG_UNUSED_0x7FC                                            0x7FC // Unused                                                     Flag
#define FLAG_UNUSED_0x7FD                                            0x7FD // Unused                                                     Flag
#define FLAG_UNUSED_0x7FE                                            0x7FE // Unused                                                     Flag
#define FLAG_UNUSED_0x7FF                                            0x7FF // Unused                                                     Flag

#define FLAG_UNUSED_0x800                                            0x800 // Unused                                                     Flag
#define FLAG_UNUSED_0x801                                            0x801 // Unused                                                     Flag
#define FLAG_UNUSED_0x802                                            0x802 // Unused                                                     Flag
#define FLAG_UNUSED_0x803                                            0x803 // Unused                                                     Flag
#define FLAG_UNUSED_0x804                                            0x804 // Unused                                                     Flag
#define FLAG_UNUSED_0x805                                            0x805 // Unused                                                     Flag
#define FLAG_UNUSED_0x806                                            0x806 // Unused                                                     Flag
#define FLAG_UNUSED_0x807                                            0x807 // Unused                                                     Flag
#define FLAG_UNUSED_0x808                                            0x808 // Unused                                                     Flag
#define FLAG_UNUSED_0x809                                            0x809 // Unused                                                     Flag
#define FLAG_UNUSED_0x80A                                            0x80A // Unused                                                     Flag
#define FLAG_UNUSED_0x80B                                            0x80B // Unused                                                     Flag
#define FLAG_UNUSED_0x80C                                            0x80C // Unused                                                     Flag
#define FLAG_UNUSED_0x80D                                            0x80D // Unused                                                     Flag
#define FLAG_UNUSED_0x80E                                            0x80E // Unused                                                     Flag
#define FLAG_UNUSED_0x80F                                            0x80F // Unused                                                     Flag

#define FLAG_UNUSED_0x810                                            0x810 // Unused                                                     Flag
#define FLAG_UNUSED_0x811                                            0x811 // Unused                                                     Flag
#define FLAG_UNUSED_0x812                                            0x812 // Unused                                                     Flag
#define FLAG_UNUSED_0x813                                            0x813 // Unused                                                     Flag
#define FLAG_UNUSED_0x814                                            0x814 // Unused                                                     Flag
#define FLAG_UNUSED_0x815                                            0x815 // Unused                                                     Flag
#define FLAG_UNUSED_0x816                                            0x816 // Unused                                                     Flag
#define FLAG_UNUSED_0x817                                            0x817 // Unused                                                     Flag
#define FLAG_UNUSED_0x818                                            0x818 // Unused                                                     Flag
#define FLAG_UNUSED_0x819                                            0x819 // Unused                                                     Flag
#define FLAG_UNUSED_0x81A                                            0x81A // Unused                                                     Flag
#define FLAG_UNUSED_0x81B                                            0x81B // Unused                                                     Flag
#define FLAG_UNUSED_0x81C                                            0x81C // Unused                                                     Flag
#define FLAG_UNUSED_0x81D                                            0x81D // Unused                                                     Flag
#define FLAG_UNUSED_0x81E                                            0x81E // Unused                                                     Flag
#define FLAG_UNUSED_0x81F                                            0x81F // Unused                                                     Flag

#define FLAG_UNUSED_0x820                                            0x820 // Unused                                                     Flag
#define FLAG_UNUSED_0x821                                            0x821 // Unused                                                     Flag
#define FLAG_UNUSED_0x822                                            0x822 // Unused                                                     Flag
#define FLAG_UNUSED_0x823                                            0x823 // Unused                                                     Flag
#define FLAG_UNUSED_0x824                                            0x824 // Unused                                                     Flag
#define FLAG_UNUSED_0x825                                            0x825 // Unused                                                     Flag
#define FLAG_UNUSED_0x826                                            0x826 // Unused                                                     Flag
#define FLAG_UNUSED_0x827                                            0x827 // Unused                                                     Flag
#define FLAG_UNUSED_0x828                                            0x828 // Unused                                                     Flag
#define FLAG_UNUSED_0x829                                            0x829 // Unused                                                     Flag
#define FLAG_UNUSED_0x82A                                            0x82A // Unused                                                     Flag
#define FLAG_UNUSED_0x82B                                            0x82B // Unused                                                     Flag
#define FLAG_UNUSED_0x82C                                            0x82C // Unused                                                     Flag
#define FLAG_UNUSED_0x82D                                            0x82D // Unused                                                     Flag
#define FLAG_UNUSED_0x82E                                            0x82E // Unused                                                     Flag
#define FLAG_UNUSED_0x82F                                            0x82F // Unused                                                     Flag

#define FLAG_UNUSED_0x830                                            0x830 // Unused                                                     Flag
#define FLAG_UNUSED_0x831                                            0x831 // Unused                                                     Flag
#define FLAG_UNUSED_0x832                                            0x832 // Unused                                                     Flag
#define FLAG_UNUSED_0x833                                            0x833 // Unused                                                     Flag
#define FLAG_UNUSED_0x834                                            0x834 // Unused                                                     Flag
#define FLAG_UNUSED_0x835                                            0x835 // Unused                                                     Flag
#define FLAG_UNUSED_0x836                                            0x836 // Unused                                                     Flag
#define FLAG_UNUSED_0x837                                            0x837 // Unused                                                     Flag
#define FLAG_UNUSED_0x838                                            0x838 // Unused                                                     Flag
#define FLAG_UNUSED_0x839                                            0x839 // Unused                                                     Flag
#define FLAG_UNUSED_0x83A                                            0x83A // Unused                                                     Flag
#define FLAG_UNUSED_0x83B                                            0x83B // Unused                                                     Flag
#define FLAG_UNUSED_0x83C                                            0x83C // Unused                                                     Flag
#define FLAG_UNUSED_0x83D                                            0x83D // Unused                                                     Flag
#define FLAG_UNUSED_0x83E                                            0x83E // Unused                                                     Flag
#define FLAG_UNUSED_0x83F                                            0x83F // Unused                                                     Flag

#define FLAG_UNUSED_0x840                                            0x840 // Unused                                                     Flag
#define FLAG_UNUSED_0x841                                            0x841 // Unused                                                     Flag
#define FLAG_UNUSED_0x842                                            0x842 // Unused                                                     Flag
#define FLAG_UNUSED_0x843                                            0x843 // Unused                                                     Flag
#define FLAG_UNUSED_0x844                                            0x844 // Unused                                                     Flag
#define FLAG_UNUSED_0x845                                            0x845 // Unused                                                     Flag
#define FLAG_UNUSED_0x846                                            0x846 // Unused                                                     Flag
#define FLAG_UNUSED_0x847                                            0x847 // Unused                                                     Flag
#define FLAG_UNUSED_0x848                                            0x848 // Unused                                                     Flag
#define FLAG_UNUSED_0x849                                            0x849 // Unused                                                     Flag
#define FLAG_UNUSED_0x84A                                            0x84A // Unused                                                     Flag
#define FLAG_UNUSED_0x84B                                            0x84B // Unused                                                     Flag
#define FLAG_UNUSED_0x84C                                            0x84C // Unused                                                     Flag
#define FLAG_UNUSED_0x84D                                            0x84D // Unused                                                     Flag
#define FLAG_UNUSED_0x84E                                            0x84E // Unused                                                     Flag
#define FLAG_UNUSED_0x84F                                            0x84F // Unused                                                     Flag

#define FLAG_UNUSED_0x850                                            0x850 // Unused                                                     Flag
#define FLAG_UNUSED_0x851                                            0x851 // Unused                                                     Flag
#define FLAG_UNUSED_0x852                                            0x852 // Unused                                                     Flag
#define FLAG_UNUSED_0x853                                            0x853 // Unused                                                     Flag
#define FLAG_UNUSED_0x854                                            0x854 // Unused                                                     Flag
#define FLAG_UNUSED_0x855                                            0x855 // Unused                                                     Flag
#define FLAG_UNUSED_0x856                                            0x856 // Unused                                                     Flag
#define FLAG_UNUSED_0x857                                            0x857 // Unused                                                     Flag
#define FLAG_UNUSED_0x858                                            0x858 // Unused                                                     Flag
#define FLAG_UNUSED_0x859                                            0x859 // Unused                                                     Flag
#define FLAG_UNUSED_0x85A                                            0x85A // Unused                                                     Flag
#define FLAG_UNUSED_0x85B                                            0x85B // Unused                                                     Flag
#define FLAG_UNUSED_0x85C                                            0x85C // Unused                                                     Flag
#define FLAG_UNUSED_0x85D                                            0x85D // Unused                                                     Flag
#define FLAG_UNUSED_0x85E                                            0x85E // Unused                                                     Flag
#define FLAG_UNUSED_0x85F                                            0x85F // Unused                                                     Flag


// System Flags

#define SYSTEM_FLAGS                                                 0x860

#define FLAG_SYS_POKEMON_GET                                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                                         (SYSTEM_FLAGS + 0x2)
#define FLAG_SYS_GAME_CLEAR                                          (SYSTEM_FLAGS + 0x3)
#define FLAG_SYS_CHAT_USED                                           (SYSTEM_FLAGS + 0x4)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                                 (SYSTEM_FLAGS + 0x5)

//#define FLAG_SYS_POKEMON_GET                                       (SYSTEM_FLAGS + 0x0)
#define FLAG_SYS_APP_POKEMON_GET                                     FLAG_SYS_POKEMON_GET
#define FLAG_SYS_APP_BAG_GET                                         FLAG_SYS_POKEMON_GET
#define FLAG_SYS_APP_OPTIONS_GET                                     FLAG_SYS_POKEMON_GET
#define FLAG_SYS_APP_PROLOUGE_GET                                    FLAG_SYS_POKEMON_GET
//#define FLAG_SYS_POKEDEX_GET                                       (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_APP_POKEDEX_GET                                     FLAG_SYS_POKEDEX_GET
#define FLAG_SYS_APP_QUEST_GET                                       FLAG_SYS_POKEDEX_GET
#define FLAG_SYS_APP_MAP_GET                                         FLAG_SYS_POKEDEX_GET
#define FLAG_SYS_APP_SURPRISE_TRADE_GET                              FLAG_SYS_POKEDEX_GET
#define FLAG_SYS_STARTER_APPS_GET                                    FLAG_SYS_POKEDEX_GET
#define FLAG_SYS_APP_BUZZR_GET                                       (SYSTEM_FLAGS + 0x2)
//define FLAG_SYS_GAME_CLEAR                                         (SYSTEM_FLAGS + 0x3)
#define FLAG_SYS_APP_DEXNAV_GET                                      (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_APP_GOOGLE_GLASS_GET                                (SYSTEM_FLAGS + 0x5)

// Badges
#define FLAG_BADGE01_GET                                             (SYSTEM_FLAGS + 0x6)
#define FLAG_BADGE02_GET                                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE03_GET                                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE04_GET                                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE05_GET                                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE06_GET                                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE07_GET                                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE08_GET                                             (SYSTEM_FLAGS + 0xD)
#define NUM_BADGES                                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xE)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1D)

#define FLAG_GROTTO_ROUTE_A                   (SYSTEM_FLAGS + 0xE)
#define FLAG_GROTTO_ROUTE_B                   (SYSTEM_FLAGS + 0xF)
#define FLAG_GROTTO_ROUTE_C                   (SYSTEM_FLAGS + 0x10)
#define FLAG_GROTTO_ROUTE_D                   (SYSTEM_FLAGS + 0x11)
#define FLAG_GROTTO_ROUTE_E                   (SYSTEM_FLAGS + 0x12)
#define FLAG_GROTTO_ROUTE1                   (SYSTEM_FLAGS + 0x13)
#define FLAG_GROTTO_ROUTE10                   (SYSTEM_FLAGS + 0x14)
#define FLAG_GROTTO_ROUTE100                   (SYSTEM_FLAGS + 0x15)
#define FLAG_GROTTO_ROUTE11                   (SYSTEM_FLAGS + 0x16)
#define FLAG_GROTTO_ROUTE12                   (SYSTEM_FLAGS + 0x17)
#define FLAG_GROTTO_ROUTE13                   (SYSTEM_FLAGS + 0x18)
#define FLAG_GROTTO_ROUTE14                   (SYSTEM_FLAGS + 0x19)
#define FLAG_GROTTO_ROUTE16                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_GROTTO_ROUTE18                   (SYSTEM_FLAGS + 0x1B)
#define FLAG_GROTTO_ROUTE2                   (SYSTEM_FLAGS + 0x1C)
#define FLAG_GROTTO_ROUTE20                   (SYSTEM_FLAGS + 0x1D)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1E) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x1F)
#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x20)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x21)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x22)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x23)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x24)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x25)
#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x26)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x27)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x2D)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x2E)

//#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1E)
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x1F)
//#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x20)
//#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x21)
//#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x22)
#define FLAG_LITTLE_CUP_BATTLE                       (SYSTEM_FLAGS + 0x23)
#define FLAG_GROTTO_ROUTE22                        (SYSTEM_FLAGS + 0x24)
#define FLAG_GROTTO_ROUTE3                        (SYSTEM_FLAGS + 0x25)
#define FLAG_GROTTO_ROUTE4                            (SYSTEM_FLAGS + 0x26)
#define FLAG_GROTTO_ROUTE5                           (SYSTEM_FLAGS + 0x27)
#define FLAG_GROTTO_ROUTE6                           (SYSTEM_FLAGS + 0x28)
#define FLAG_GROTTO_ROUTE7              (SYSTEM_FLAGS + 0x29)
#define FLAG_GROTTO_ROUTE8                         (SYSTEM_FLAGS + 0x2A)
//#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x2B)
#define FLAG_GROTTO_ROUTE9                       (SYSTEM_FLAGS + 0x2C)
#define FLAG_GROTTO_ROUTE98                         (SYSTEM_FLAGS + 0x2D)
#define FLAG_GROTTO_ROUTE99                         (SYSTEM_FLAGS + 0x2E)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x2F)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x30)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x31)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x32)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x33)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x34)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x35)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x36)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x37)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x38)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x39)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x3A)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x3B)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x3D)
#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x3E)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x3F)

#define FLAG_VISITED_ANBEH_BEND                     (SYSTEM_FLAGS + 0x2F)
#define FLAG_VISITED_ARANTRAZ                       (SYSTEM_FLAGS + 0x30)
#define FLAG_VISITED_CAPHE_CITY                     (SYSTEM_FLAGS + 0x31)
#define FLAG_VISITED_CHAPEL_CHIMES                  (SYSTEM_FLAGS + 0x32)
#define FLAG_VISITED_CHASILLA                       (SYSTEM_FLAGS + 0x33)
#define FLAG_VISITED_CRESALTA_VISTA                 (SYSTEM_FLAGS + 0x34)
#define FLAG_VISITED_CUCONU_TOWN                    (SYSTEM_FLAGS + 0x35)
#define FLAG_VISITED_CURENO_PORT                    (SYSTEM_FLAGS + 0x36)
#define FLAG_VISITED_ESPULEE_OUTSKIRTS              (SYSTEM_FLAGS + 0x37)
#define FLAG_VISITED_FERRYBUILDING                  (SYSTEM_FLAGS + 0x38)
#define FLAG_VISITED_FORT_YOBU                      (SYSTEM_FLAGS + 0x39)
#define FLAG_VISITED_GLAVEZ_HILL                    (SYSTEM_FLAGS + 0x3A)
#define FLAG_VISITED_HALAI_ISLAND                   (SYSTEM_FLAGS + 0x3B)
#define FLAG_VISITED_HALERBA_CITY                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_VISITED_HALERBAWILDS                   (SYSTEM_FLAGS + 0x3D)
//#define FLAG_SYS_PC_LANETTE                       (SYSTEM_FLAGS + 0x3E)
#define FLAG_SILICON_UNUSED_0x89F                   (SYSTEM_FLAGS + 0x3F)

#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x40)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x41)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x42)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x43)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x44)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x45)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x46)

//#define FLAG_SYS_ENC_UP_ITEM                      (SYSTEM_FLAGS + 0x40)
//#define FLAG_SYS_ENC_DOWN_ITEM                    (SYSTEM_FLAGS + 0x41)
#define FLAG_VISITED_HODOU_CITY                     (SYSTEM_FLAGS + 0x42)
#define FLAG_VISITED_IRISINA_TOWN                   (SYSTEM_FLAGS + 0x43)
#define FLAG_VISITED_LEAVERRA_FOREST                (SYSTEM_FLAGS + 0x44)
#define FLAG_VISITED_MERMEREZA_CITY                 (SYSTEM_FLAGS + 0x45)
#define FLAG_VISITED_NAVAL_BASE                     (SYSTEM_FLAGS + 0x46)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x4A)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x4B)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x4C)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x4D)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x4E)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x4F)

#define FLAG_VISITED_NONGYU_BRIDGE                  (SYSTEM_FLAGS + 0x47)
#define FLAG_VISITED_OROLAND                        (SYSTEM_FLAGS + 0x48)
#define FLAG_VISITED_OROLAND_COLISEUM               (SYSTEM_FLAGS + 0x49)
#define FLAG_VISITED_OROLANDFERRY                   (SYSTEM_FLAGS + 0x4A)
#define FLAG_VISITED_PALACEFINEARTS                 (SYSTEM_FLAGS + 0x4B)
#define FLAG_VISITED_PARC                           (SYSTEM_FLAGS + 0x4C)
#define FLAG_VISITED_PERLACIA_CITY                  (SYSTEM_FLAGS + 0x4D)
#define FLAG_VISITED_PETAROSA_BOROUGH               (SYSTEM_FLAGS + 0x4E)
#define FLAG_VISITED_PINTILLONHOUSE                 (SYSTEM_FLAGS + 0x4F)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x50)
#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x52)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x53) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x54)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x56)
#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x57)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x58)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x59)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x5A)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x5B)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x5C)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x5D)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x5E)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x5F)

#define FLAG_VISITED_PIOCA_BRIDGE                   (SYSTEM_FLAGS + 0x50)
#define FLAG_VISITED_POPIDORA_PIER                  (SYSTEM_FLAGS + 0x51)
#define FLAG_VISITED_QIU_VILLAGE                    (SYSTEM_FLAGS + 0x52)
//#define FLAG_SYS_B_DASH                           (SYSTEM_FLAGS + 0x53) // RECEIVED Running Shoes
//#define FLAG_SYS_CTRL_OBJ_DELETE                  (SYSTEM_FLAGS + 0x54)
#define FLAG_VISITED_ROBINWILLTUNNEL                (SYSTEM_FLAGS + 0x55)
#define FLAG_VISITED_ROUTE_A                        (SYSTEM_FLAGS + 0x56)
#define FLAG_SYS_RESTORED_TOWER_SILVER              (SYSTEM_FLAGS + 0x57)
#define FLAG_SYS_RESTORED_TOWER_GOLD                (SYSTEM_FLAGS + 0x58)
//#define FLAG_SYS_DOME_SILVER                      (SYSTEM_FLAGS + 0x59)
//#define FLAG_SYS_DOME_GOLD                        (SYSTEM_FLAGS + 0x5A)
//#define FLAG_SYS_PALACE_SILVER                    (SYSTEM_FLAGS + 0x5B)
//#define FLAG_SYS_PALACE_GOLD                      (SYSTEM_FLAGS + 0x5C)
//#define FLAG_SYS_ARENA_SILVER                     (SYSTEM_FLAGS + 0x5D)
//#define FLAG_SYS_ARENA_GOLD                       (SYSTEM_FLAGS + 0x5E)
#define FLAG_SYS_RESTORED_FACTORY_SILVER            (SYSTEM_FLAGS + 0x5F)

#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x60)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x62)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x63)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x65)
#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x66)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x67)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x68)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x69)
#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x6A)

#define FLAG_SYS_RESTORED_FACTORY_GOLD              (SYSTEM_FLAGS + 0x60)
#define FLAG_SYS_RESTORED_ARCADE_SILVER             (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESTORED_ARCADE_GOLD               (SYSTEM_FLAGS + 0x62)
#define FLAG_SYS_RESTORED_DOJO_SILVER               (SYSTEM_FLAGS + 0x63)
#define FLAG_SYS_RESTORED_DOJO_GOLD                 (SYSTEM_FLAGS + 0x64)
#define FLAG_VISITED_ROUTE_B                        (SYSTEM_FLAGS + 0x65)
#define FLAG_VISITED_ROUTE_C                        (SYSTEM_FLAGS + 0x66)
#define FLAG_VISITED_ROUTE_D                        (SYSTEM_FLAGS + 0x67)
#define FLAG_VISITED_ROUTE_E                        (SYSTEM_FLAGS + 0x68)
#define FLAG_VISITED_ROUTE1                         (SYSTEM_FLAGS + 0x69)
//#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE           (SYSTEM_FLAGS + 0x6A)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x6B)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x6C)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x6E)
#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x6F)

#define FLAG_VISITED_ROUTE2                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_VISITED_ROUTE3                         (SYSTEM_FLAGS + 0x6C)
#define FLAG_VISITED_ROUTE4                         (SYSTEM_FLAGS + 0x6D)
//#define FLAG_SYS_MYSTERY_GIFT_ENABLE              (SYSTEM_FLAGS + 0x6E)
#define FLAG_VISITED_ROUTE5                         (SYSTEM_FLAGS + 0x6F)

#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x70)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x71)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x72)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x73)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x74)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x75)
#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x76)

#define FLAG_VISITED_ROUTE6                         (SYSTEM_FLAGS + 0x70)
#define FLAG_VISITED_ROUTE7                         (SYSTEM_FLAGS + 0x71)
#define FLAG_VISITED_ROUTE8                         (SYSTEM_FLAGS + 0x72)
#define FLAG_VISITED_ROUTE9                         (SYSTEM_FLAGS + 0x73)
#define FLAG_VISITED_ROUTE10                        (SYSTEM_FLAGS + 0x74)
#define FLAG_VISITED_ROUTE11                        (SYSTEM_FLAGS + 0x75)
#define FLAG_VISITED_ROUTE12                        (SYSTEM_FLAGS + 0x76)

#define FLAG_VISITED_ROUTE13                        (SYSTEM_FLAGS + 0x77)
#define FLAG_VISITED_ROUTE14                        (SYSTEM_FLAGS + 0x78)
#define FLAG_VISITED_ROUTE16                        (SYSTEM_FLAGS + 0x79)

#define FLAG_VISITED_ROUTE18                        (SYSTEM_FLAGS + 0x7A) // Unused Flag
#define FLAG_VISITED_ROUTE20                        (SYSTEM_FLAGS + 0x7B) // Unused Flag
#define FLAG_VISITED_ROUTE22                        (SYSTEM_FLAGS + 0x7C) // Unused Flag
#define FLAG_VISITED_ROUTE98                        (SYSTEM_FLAGS + 0x7D) // Unused Flag
#define FLAG_VISITED_ROUTE99                        (SYSTEM_FLAGS + 0x7E) // Unused Flag
#define FLAG_VISITED_ROUTE100                       (SYSTEM_FLAGS + 0x7F) // Unused Flag

#define FLAG_VISITED_SECRET_PATH                    (SYSTEM_FLAGS + 0x80) // Unused Flag
#define FLAG_VISITED_SHARPRISESPIRE                 (SYSTEM_FLAGS + 0x81) // Unused Flag
#define FLAG_VISITED_SHARPRISESTADIUM               (SYSTEM_FLAGS + 0x82) // Unused Flag
#define FLAG_VISITED_TIRABUDIN_PLACE                (SYSTEM_FLAGS + 0x83) // Unused Flag
#define FLAG_VISITED_TORA_TOWN                      (SYSTEM_FLAGS + 0x84) // Unused Flag
#define FLAG_VISITED_TORGEOT_CLIMB_BASE             (SYSTEM_FLAGS + 0x85) // Unused Flag
#define FLAG_VISITED_WAJABI_LAKE                    (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_VISITED_WISHAAST_LAKE                  (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_VISITED_ZENZU_ISLAND                   (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_VISITED_TORGEOT_CLIMB                  (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_SYS_APP_PRESTO_GET                     (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_SYS_APP_TRAINER_CARD_GET               (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_SYS_APP_WAVES_OF_CHANGE_GET            (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_SYS_NO_CATCHING                        (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_SYS_NO_COLLISION                       (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_SYS_NO_ENCOUNTER                       (SYSTEM_FLAGS + 0x8F) // Unused Flag

#define FLAG_SYS_NO_TRAINER_SEE                     (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_SYS_USE_CUT                            (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_SYS_USE_ROCK_SMASH                     (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_SYS_USE_SURF                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_SYS_USE_WATERFALL                      (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_SMART_WILD_AI                          (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_SKY_BATTLE                             (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_POST_SKY_BATTLE                        (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_REMOVE_WARP_FADE                       (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_SPAWN_INVISIBLE                        (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_SHARPRISESTADIUM_TOURNAMENT_HAPPENING  (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_SHOULD_SKIP_CREDITS                    (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_SYS_CUSTOMIZATION_DATA_INITIALIZED     (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_SPEED_DEMON                            (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_DISABLE_SCALING                        (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_FORCE_DOUBLE_WILD                      (SYSTEM_FLAGS + 0x9F) // Unused Flag

#define FLAG_FORCE_NO_SHINY                         (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_FORCE_SHINY                            (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_INFINITE_LURE_GET                      (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_INFINITE_MODE_ON                       (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_INVERSE_BATTLE                         (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_NO_RUNNING                             (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_NO_WHITEOUT                            (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_FORCE_LOAD_OFFSCREEN_OBJ               (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_DEXNAV_SEARCHING                       (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_DEXNAV_DETECTOR                        (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag

#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag //0x91F
//if this last flag's name is edited, make sure to also change the name in the line "DAILY_FLAGS_START" below

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_DAILY_NOPOMOD_BATTLE                   (DAILY_FLAGS_START + 0x0)
#define FLAG_DAILY_QUEST_KITCHENVOLUNTEERING                   (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_ELEANOR_REMATCH                   (DAILY_FLAGS_START + 0x2)
#define FLAG_DAILY_KEIYING_REMATCH                   (DAILY_FLAGS_START + 0x3)
#define FLAG_SILICON_UNUSED_0x924                   (DAILY_FLAGS_START + 0x4)
#define FLAG_SILICON_UNUSED_0x925                   (DAILY_FLAGS_START + 0x5)
#define FLAG_SILICON_UNUSED_0x926                   (DAILY_FLAGS_START + 0x6)
#define FLAG_SILICON_UNUSED_0x927                   (DAILY_FLAGS_START + 0x7)
#define FLAG_SILICON_UNUSED_0x928                   (DAILY_FLAGS_START + 0x8)
#define FLAG_SILICON_UNUSED_0x929                   (DAILY_FLAGS_START + 0x9)
#define FLAG_SILICON_UNUSED_0x92A                   (DAILY_FLAGS_START + 0xA)
#define FLAG_SILICON_UNUSED_0x92B                   (DAILY_FLAGS_START + 0xB)
#define FLAG_SILICON_UNUSED_0x92C                   (DAILY_FLAGS_START + 0xC)
#define FLAG_SILICON_UNUSED_0x92D                   (DAILY_FLAGS_START + 0xD)
#define FLAG_SILICON_UNUSED_0x92E                   (DAILY_FLAGS_START + 0xE)
#define FLAG_SILICON_UNUSED_0x92F                   (DAILY_FLAGS_START + 0xF)
#define FLAG_SILICON_UNUSED_0x930                   (DAILY_FLAGS_START + 0x10)
#define FLAG_SILICON_UNUSED_0x931                   (DAILY_FLAGS_START + 0x11)
#define FLAG_SILICON_UNUSED_0x932                   (DAILY_FLAGS_START + 0x12)
#define FLAG_SILICON_UNUSED_0x933                   (DAILY_FLAGS_START + 0x13)
#define FLAG_SILICON_UNUSED_0x934                   (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
//if this last flag's name is edited, make sure to also change the name in the line "DAILY_FLAGS_END" below

#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define NUM_DAILY_FLAGS                             (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

#define FLAGS_COUNT 								(DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                         0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                    (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC                  (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR             (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003             (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG           (SPECIAL_FLAGS_START + 0x4)
#define FLAG_SAFE_FOLLOWER_MOVEMENT                 (SPECIAL_FLAGS_START + 0x5) // When set, applymovement does not put the follower inside a pokeball
                                                                            // Also, scripted movements on the player will move follower(s), too
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                           (SPECIAL_FLAGS_START + 0x7F)
#define NUM_SPECIAL_FLAGS                           (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)

// Temp flag aliases
#define FLAG_TEMP_SKIP_GABBY_INTERVIEW              FLAG_TEMP_1
#define FLAG_TEMP_REGICE_PUZZLE_STARTED             FLAG_TEMP_2
#define FLAG_TEMP_REGICE_PUZZLE_FAILED              FLAG_TEMP_3
#define FLAG_TEMP_HIDE_FOLLOWER                     FLAG_TEMP_E
#define FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE     FLAG_TEMP_11

// FRLG flags

#define FLAG_HIDE_BULBASAUR_BALL                           0
#define FLAG_HIDE_SQUIRTLE_BALL                            0
#define FLAG_HIDE_CHARMANDER_BALL                          0
#define FLAG_HIDE_OAK_IN_HIS_LAB                           0
#define FLAG_HIDE_OAK_IN_PALLET_TOWN                       0
#define FLAG_HIDE_RIVAL_IN_LAB                             0
#define FLAG_HIDE_PEWTER_CITY_GYM_GUIDE                    0
#define FLAG_HIDE_DOME_FOSSIL                              0
#define FLAG_HIDE_HELIX_FOSSIL                             0
#define FLAG_HIDE_NUGGET_BRIDGE_ROCKET                     0
#define FLAG_HIDE_BILL_CLEFAIRY                            0
#define FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE                   0
#define FLAG_HIDE_TOWER_FUJI                               0
#define FLAG_HIDE_POKEHOUSE_FUJI                           0
#define FLAG_HIDE_LIFT_KEY                                 0
#define FLAG_HIDE_SILPH_SCOPE                              0
#define FLAG_HIDE_HIDEOUT_GIOVANNI                         0
#define FLAG_HIDE_TOWN_MAP                                 0
#define FLAG_HIDE_POKEDEX                                  0
#define FLAG_HIDE_CERULEAN_ROCKET                          0
#define FLAG_HIDE_CERULEAN_RIVAL                           0
#define FLAG_HIDE_SS_ANNE_RIVAL                            0
#define FLAG_HIDE_SAFFRON_ROCKETS                          0
#define FLAG_HIDE_SAFFRON_CIVILIANS                        0
#define FLAG_HIDE_SEAFOAM_1F_BOULDER_1                     0
#define FLAG_HIDE_SEAFOAM_1F_BOULDER_2                     0
#define FLAG_HIDE_SEAFOAM_B1F_BOULDER_1                    0
#define FLAG_HIDE_SEAFOAM_B1F_BOULDER_2                    0
#define FLAG_HIDE_SEAFOAM_B2F_BOULDER_1                    0
#define FLAG_HIDE_SEAFOAM_B2F_BOULDER_2                    0
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_1                    0
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_2                    0
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_3                    0
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_4                    0
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_5                    0
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_6                    0
#define FLAG_HIDE_SEAFOAM_B4F_BOULDER_1                    0
#define FLAG_HIDE_SEAFOAM_B4F_BOULDER_2                    0
#define FLAG_HIDE_SILPH_RIVAL                              0
#define FLAG_HIDE_ROUTE_22_RIVAL                           0
#define FLAG_HIDE_PEWTER_MUSEUM_GUIDE                      0
#define FLAG_HIDE_TOWER_RIVAL                              0
#define FLAG_HIDE_MOLTRES                                  0
#define FLAG_HIDE_SILPH_ROCKETS                            0
#define FLAG_HIDE_ROUTE_12_SNORLAX                         0
#define FLAG_HIDE_VIRIDIAN_GIOVANNI                        0
#define FLAG_HIDE_OLD_AMBER                                0
#define FLAG_HIDE_EEVEE_BALL                               0
#define FLAG_HIDE_VICTORY_ROAD_2F_BOULDER                  0
#define FLAG_HIDE_VICTORY_ROAD_3F_BOULDER                  0
#define FLAG_HIDE_OAK_IN_CHAMP_ROOM                        0
#define FLAG_HIDE_GAME_CORNER_ROCKET                       0
#define FLAG_HIDE_CERULEAN_CAVE_GUARD                      0
#define FLAG_HIDE_ZAPDOS                                   0
#define FLAG_HIDE_TOWER_ROCKET_1                           0
#define FLAG_HIDE_CELADON_ROCKETS                          0
#define FLAG_HIDE_DOJO_HITMONLEE_BALL                      0
#define FLAG_HIDE_DOJO_HITMONCHAN_BALL                     0
#define FLAG_HIDE_CINNABAR_BILL                            0
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                      0
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                      0
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                      0
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                      0
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                      0
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                      0
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                      0
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                      0
#define FLAG_HIDE_CINNABAR_SEAGALLOP                       0
#define FLAG_HIDE_SAFFRON_FAN_CLUB_BLACKBELT               0
#define FLAG_HIDE_SAFFRON_FAN_CLUB_ROCKER                  0
#define FLAG_HIDE_SAFFRON_FAN_CLUB_WOMAN                   0
#define FLAG_HIDE_SAFFRON_FAN_CLUB_BEAUTY                  0
#define FLAG_HIDE_MG_DELIVERYMEN                           0
#define FLAG_HIDE_ONE_ISLAND_BILL                          0
#define FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL               0
#define FLAG_HIDE_ONE_ISLAND_POKECENTER_CELIO              0
#define FLAG_HIDE_TWO_ISLAND_GAME_CORNER_BIKER             0
#define FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE          0
#define FLAG_HIDE_LOSTELLE_IN_HER_HOME                     0
#define FLAG_0x077                                         0
#define FLAG_0x078                                         0
#define FLAG_HIDE_THREE_ISLAND_BIKERS                      0
#define FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST                 0
#define FLAG_HIDE_TWO_ISLAND_WOMAN                         0
#define FLAG_HIDE_TWO_ISLAND_BEAUTY                        0
#define FLAG_HIDE_TWO_ISLAND_SUPER_NERD                    0
#define FLAG_HIDE_THREE_ISLAND_ANTIBIKERS                  0
#define FLAG_0x07F                                         0
#define FLAG_HIDE_ROUTE_16_SNORLAX                         0
#define FLAG_HIDE_MEWTWO                                   0
#define FLAG_HIDE_ARTICUNO                                 0
#define FLAG_HIDE_TOWER_ROCKET_2                           0
#define FLAG_HIDE_TOWER_ROCKET_3                           0
#define FLAG_HIDE_POWER_PLANT_ELECTRODE_1                  0
#define FLAG_HIDE_POWER_PLANT_ELECTRODE_2                  0
#define FLAG_HIDE_SS_ANNE                                  0
#define FLAG_HIDE_FIVE_ISLAND_ROCKETS                      0
#define FLAG_HIDE_MT_EMBER_EXTERIOR_ROCKETS                0
#define FLAG_HIDE_RUBY                                     0
#define FLAG_HIDE_ICEFALL_CAVE_LORELEI                     0
#define FLAG_HIDE_LORELEI_IN_HER_HOUSE                     0
#define FLAG_HIDE_ICEFALL_CAVE_ROCKETS                     0
#define FLAG_HIDE_RUIN_VALLEY_SCIENTIST                    0
#define FLAG_HIDE_SAPPHIRE                                 0
#define FLAG_HIDE_DOTTED_HOLE_SCIENTIST                    0
#define FLAG_HIDE_THREE_ISLAND_LONE_BIKER                  0
#define FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY            0
#define FLAG_HIDE_LOST_CAVE_SELPHY                         0
#define FLAG_HIDE_RESORT_GORGEOUS_SELPHY                   0
#define FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY            0
#define FLAG_HIDE_SELPHYS_BUTLER                           0
#define FLAG_HIDE_FOUR_ISLAND_RIVAL                        0
#define FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL              0
#define FLAG_HIDE_BIRTH_ISLAND_METEORITE                   0
#define FLAG_HIDE_POSTGAME_GOSSIPERS                       0
#define FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS              0
#define FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL                0
#define FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL            0
#define FLAG_HIDE_VERMILION_CITY_OAKS_AIDE                 0
#define FLAG_HIDE_CINNABAR_POKECENTER_BILL                 0
#define FLAG_HIDE_CREDITS_RIVAL                            0
#define FLAG_HIDE_CREDITS_OAK                              0
#define FLAG_HIDE_LORELEI_HOUSE_MEOWTH_DOLL                0
#define FLAG_HIDE_LORELEI_HOUSE_CHANSEY_DOLL               0
#define FLAG_HIDE_LORELEIS_HOUSE_NIDORAN_F_DOLL            0
#define FLAG_HIDE_LORELEI_HOUSE_JIGGLYPUFF_DOLL            0
#define FLAG_HIDE_LORELEIS_HOUSE_NIDORAN_M_DOLL            0
#define FLAG_HIDE_LORELEIS_HOUSE_FEAROW_DOLL               0
#define FLAG_HIDE_LORELEIS_HOUSE_PIDGEOT_DOLL              0
#define FLAG_HIDE_LORELEIS_HOUSE_LAPRAS_DOLL               0
#define FLAG_HIDE_MISC_KANTO_ROCKETS                       0
#define FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS 0

#define FLAG_HIDE_ROUTE2_ETHER                                  0
#define FLAG_HIDE_ROUTE2_PARALYZE_HEAL                          0
#define FLAG_HIDE_VIRIDIAN_FOREST_POKE_BALL                     0
#define FLAG_HIDE_VIRIDIAN_FOREST_ANTIDOTE                      0
#define FLAG_HIDE_VIRIDIAN_FOREST_POTION                        0
#define FLAG_HIDE_MT_MOON_1F_PARALYZE_HEAL                      0
#define FLAG_HIDE_MT_MOON_1F_TM09                               0
#define FLAG_HIDE_MT_MOON_1F_POTION                             0
#define FLAG_HIDE_MT_MOON_1F_RARE_CANDY                         0
#define FLAG_HIDE_MT_MOON_1F_ESCAPE_ROPE                        0
#define FLAG_HIDE_MT_MOON_1F_MOON_STONE                         0
#define FLAG_HIDE_MT_MOON_B2F_STAR_PIECE                        0
#define FLAG_HIDE_MT_MOON_B2F_TM46                              0
#define FLAG_HIDE_ROUTE4_TM05                                   0
#define FLAG_HIDE_ROUTE24_TM45                                  0
#define FLAG_HIDE_ROUTE25_TM43                                  0
#define FLAG_HIDE_SSANNE_1F_ROOM2_TM31                          0
#define FLAG_HIDE_SSANNE_2F_ROOM2_STARDUST                      0
#define FLAG_HIDE_SSANNE_2F_ROOM4_X_ATTACK                      0
#define FLAG_HIDE_SSANNE_B1F_ROOM2_TM44                         0
#define FLAG_HIDE_SSANNE_B1F_ROOM3_ETHER                        0
#define FLAG_HIDE_SSANNE_B1F_ROOM5_SUPER_POTION                 0
#define FLAG_HIDE_SSANNE_KITCHEN_GREAT_BALL                     0
#define FLAG_HIDE_ROUTE9_TM40                                   0
#define FLAG_HIDE_ROCKET_HIDEOUT_B1F_ESCAPE_ROPE                0
#define FLAG_HIDE_ROCKET_HIDEOUT_B1F_HYPER_POTION               0
#define FLAG_HIDE_ROCKET_HIDEOUT_B2F_X_SPEED                    0
#define FLAG_HIDE_ROCKET_HIDEOUT_B2F_MOON_STONE                 0
#define FLAG_HIDE_ROCKET_HIDEOUT_B2F_TM12                       0
#define FLAG_HIDE_ROCKET_HIDEOUT_B2F_SUPER_POTION               0
#define FLAG_HIDE_ROCKET_HIDEOUT_B3F_RARE_CANDY                 0
#define FLAG_HIDE_ROCKET_HIDEOUT_B3F_TM21                       0
#define FLAG_HIDE_ROCKET_HIDEOUT_B4F_TM49                       0
#define FLAG_HIDE_ROCKET_HIDEOUT_B4F_MAX_ETHER                  0
#define FLAG_HIDE_ROCKET_HIDEOUT_B4F_CALCIUM                    0
#define FLAG_HIDE_POKEMON_TOWER_3F_ESCAPE_ROPE                  0
#define FLAG_HIDE_POKEMON_TOWER_4F_ELIXIR                       0
#define FLAG_HIDE_POKEMON_TOWER_4F_AWAKENING                    0
#define FLAG_HIDE_POKEMON_TOWER_4F_GREAT_BALL                   0
#define FLAG_HIDE_POKEMON_TOWER_5F_NUGGET                       0
#define FLAG_HIDE_POKEMON_TOWER_6F_RARE_CANDY                   0
#define FLAG_HIDE_POKEMON_TOWER_6F_X_ACCURACY                   0
#define FLAG_HIDE_ROUTE12_TM48                                  0
#define FLAG_HIDE_ROUTE12_IRON                                  0
#define FLAG_HIDE_ROUTE15_TM18                                  0
#define FLAG_HIDE_SAFARI_ZONE_CENTER_NUGGET                     0
#define FLAG_HIDE_SAFARI_ZONE_EAST_MAX_POTION                   0
#define FLAG_HIDE_SAFARI_ZONE_EAST_FULL_RESTORE                 0
#define FLAG_HIDE_SAFARI_ZONE_EAST_TM11                         0
#define FLAG_HIDE_SAFARI_ZONE_EAST_LEAF_STONE                   0
#define FLAG_HIDE_SAFARI_ZONE_NORTH_PROTEIN                     0
#define FLAG_HIDE_SAFARI_ZONE_NORTH_TM47                        0
#define FLAG_HIDE_SAFARI_ZONE_WEST_TM32                         0
#define FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH                   0
#define FLAG_HIDE_SAFARI_ZONE_WEST_MAX_POTION                   0
#define FLAG_HIDE_SAFARI_ZONE_WEST_MAX_REVIVE                   0
#define FLAG_HIDE_SILPH_CO_3F_HYPER_POTION                      0
#define FLAG_HIDE_SILPH_CO_4F_MAX_REVIVE                        0
#define FLAG_HIDE_SILPH_CO_4F_ESCAPE_ROPE                       0
#define FLAG_HIDE_SILPH_CO_4F_FULL_HEAL                         0
#define FLAG_HIDE_SILPH_CO_5F_PROTEIN                           0
#define FLAG_HIDE_SILPH_CO_5F_TM01                              0
#define FLAG_HIDE_SILPH_CO_5F_CARD_KEY                          0
#define FLAG_HIDE_SILPH_CO_6F_HP_UP                             0
#define FLAG_HIDE_SILPH_CO_6F_X_SPECIAL                         0
#define FLAG_HIDE_SILPH_CO_7F_CALCIUM                           0
#define FLAG_HIDE_SILPH_CO_7F_TM08                              0
#define FLAG_HIDE_SILPH_CO_10F_CARBOS                           0
#define FLAG_HIDE_SILPH_CO_10F_ULTRA_BALL                       0
#define FLAG_HIDE_SILPH_CO_10F_RARE_CANDY                       0
#define FLAG_HIDE_POWER_PLANT_MAX_POTION                        0
#define FLAG_HIDE_POWER_PLANT_TM17                              0
#define FLAG_HIDE_POWER_PLANT_TM25                              0
#define FLAG_HIDE_POWER_PLANT_THUNDER_STONE                     0
#define FLAG_HIDE_POWER_PLANT_ELIXIR                            0
#define FLAG_HIDE_POKEMON_MANSION_1F_CARBOS                     0
#define FLAG_HIDE_POKEMON_MANSION_1F_ESCAPE_ROPE                0
#define FLAG_HIDE_POKEMON_MANSION_2F_CALCIUM                    0
#define FLAG_HIDE_POKEMON_MANSION_3F_MAX_POTION                 0
#define FLAG_HIDE_POKEMON_MANSION_3F_IRON                       0
#define FLAG_HIDE_POKEMON_MANSION_B1F_TM14                      0
#define FLAG_HIDE_POKEMON_MANSION_B1F_FULL_RESTORE              0
#define FLAG_0x1A6                                              0
#define FLAG_HIDE_POKEMON_MANSION_B1F_TM22                      0
#define FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY                0
#define FLAG_HIDE_VICTORY_ROAD_1F_RARE_CANDY                    0
#define FLAG_HIDE_VICTORY_ROAD_1F_TM02                          0
#define FLAG_HIDE_VICTORY_ROAD_2F_GUARD_SPEC                    0
#define FLAG_HIDE_VICTORY_ROAD_2F_TM07                          0
#define FLAG_HIDE_VICTORY_ROAD_2F_FULL_HEAL                     0
#define FLAG_HIDE_VICTORY_ROAD_2F_TM37                          0
#define FLAG_HIDE_VICTORY_ROAD_3F_MAX_REVIVE                    0
#define FLAG_HIDE_VICTORY_ROAD_3F_TM50                          0
#define FLAG_HIDE_CERULEAN_CAVE_1F_MAX_ELIXIR                   0
#define FLAG_HIDE_CERULEAN_CAVE_1F_NUGGET                       0
#define FLAG_HIDE_CERULEAN_CAVE_1F_FULL_RESTORE                 0
#define FLAG_HIDE_CERULEAN_CAVE_2F_FULL_RESTORE                 0
#define FLAG_HIDE_CERULEAN_CAVE_2F_PP_UP                        0
#define FLAG_HIDE_CERULEAN_CAVE_2F_ULTRA_BALL                   0
#define FLAG_HIDE_CERULEAN_CAVE_B1F_MAX_REVIVE                  0
#define FLAG_HIDE_CERULEAN_CAVE_B1F_ULTRA_BALL                  0
#define FLAG_HIDE_FUCHSIA_CITY_WARDENS_HOUSE_RARE_CANDY         0
#define FLAG_HIDE_TWO_ISLAND_REVIVE                             0
#define FLAG_HIDE_THREE_ISLAND_ZINC                             0
#define FLAG_0x1BC                                              0
#define FLAG_0x1BD                                              0
#define FLAG_HIDE_VIRIDIAN_FOREST_POTION_2                      0
#define FLAG_HIDE_MT_MOON_B2F_REVIVE                            0
#define FLAG_HIDE_MT_MOON_B2F_ANTIDOTE                          0
#define FLAG_HIDE_ROUTE11_X_DEFEND                              0
#define FLAG_HIDE_ROUTE9_BURN_HEAL                              0
#define FLAG_HIDE_ROCK_TUNNEL_1F_REPEL                          0
#define FLAG_HIDE_ROCK_TUNNEL_1F_PEARL                          0
#define FLAG_HIDE_ROCK_TUNNEL_1F_ESCAPE_ROPE                    0
#define FLAG_HIDE_ROCK_TUNNEL_B1F_REVIVE                        0
#define FLAG_HIDE_ROCK_TUNNEL_B1F_MAX_ETHER                     0
#define FLAG_HIDE_SILPH_CO_8F_IRON                              0
#define FLAG_HIDE_SILPH_CO_11F_ZINC                             0
#define FLAG_HIDE_POKEMON_MANSION_1F_PROTEIN                    0
#define FLAG_HIDE_POKEMON_MANSION_2F_ZINC                       0
#define FLAG_HIDE_POKEMON_MANSION_2F_HP_UP                      0
#define FLAG_HIDE_VIRIDIAN_CITY_POTION                          0
#define FLAG_HIDE_ROUTE11_GREAT_BALL                            0
#define FLAG_HIDE_ROUTE11_AWAKENING                             0
#define FLAG_HIDE_POKEMON_TOWER_5F_CLEANSE_TAG                  0
#define FLAG_HIDE_CELADON_CITY_ETHER                            0
#define FLAG_HIDE_ROCKET_HIDEOUT_B3F_BLACK_GLASSES              0
#define FLAG_HIDE_SAFARI_ZONE_NORTH_QUICK_CLAW                  0
#define FLAG_HIDE_SEAFOAM_ISLANDS_1F_ICE_HEAL                   0
#define FLAG_HIDE_SEAFOAM_ISLANDS_B1F_WATER_STONE               0
#define FLAG_HIDE_SEAFOAM_ISLANDS_B1F_REVIVE                    0
#define FLAG_HIDE_SEAFOAM_ISLANDS_B2F_BIG_PEARL                 0
#define FLAG_HIDE_SEAFOAM_ISLANDS_B4F_ULTRA_BALL                0
#define FLAG_HIDE_FOUR_ISLAND_STAR_PIECE                        0
#define FLAG_HIDE_FOUR_ISLAND_STARDUST                          0
#define FLAG_HIDE_ONE_ISLAND_KINDLE_ROAD_ETHER                  0
#define FLAG_HIDE_ONE_ISLAND_KINDLE_ROAD_MAX_REPEL              0
#define FLAG_HIDE_ONE_ISLAND_KINDLE_ROAD_CARBOS                 0
#define FLAG_HIDE_FIVE_ISLAND_MEADOW_MAX_POTION                 0
#define FLAG_HIDE_FIVE_ISLAND_MEADOW_PP_UP                      0
#define FLAG_HIDE_FIVE_ISLAND_MEMORIAL_PILLAR_METAL_COAT        0
#define FLAG_HIDE_SIX_ISLAND_OUTCAST_ISLAND_PP_UP               0
#define FLAG_HIDE_SIX_ISLAND_WATER_PATH_ELIXIR                  0
#define FLAG_HIDE_SIX_ISLAND_WATER_PATH_DRAGON_SCALE            0
#define FLAG_HIDE_SIX_ISLAND_RUIN_VALLEY_FULL_RESTORE           0
#define FLAG_HIDE_SIX_ISLAND_RUIN_VALLEY_HP_UP                  0
#define FLAG_HIDE_SIX_ISLAND_RUIN_VALLEY_SUN_STONE              0
#define FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_KINGS_ROCK        0
#define FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_MAX_ELIXIR        0
#define FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_NUGGET            0
#define FLAG_HIDE_THREE_ISLAND_BERRY_FOREST_MAX_ETHER           0
#define FLAG_HIDE_THREE_ISLAND_BERRY_FOREST_FULL_HEAL           0
#define FLAG_HIDE_THREE_ISLAND_BERRY_FOREST_MAX_ELIXIR          0
#define FLAG_HIDE_MT_EMBER_EXTERIOR_ULTRA_BALL                  0
#define FLAG_HIDE_MT_EMBER_EXTERIOR_FIRE_STONE                  0
#define FLAG_HIDE_MT_EMBER_EXTERIOR_DIRE_HIT                    0
#define FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_1F_ULTRA_BALL        0
#define FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_1F_HM07              0
#define FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_B1F_FULL_RESTORE     0
#define FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_B1F_NEVER_MELT_ICE   0
#define FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_BIG_PEARL        0
#define FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_TM36             0
#define FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_PEARL            0
#define FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_UP_GRADE         0
#define FLAG_HIDE_FIVE_ISLAND_LOST_CAVE_ROOM10_SILK_SCARF       0
#define FLAG_HIDE_FIVE_ISLAND_LOST_CAVE_ROOM11_LAX_INCENSE      0
#define FLAG_HIDE_FIVE_ISLAND_LOST_CAVE_ROOM12_SEA_INCENSE      0
#define FLAG_HIDE_FIVE_ISLAND_LOST_CAVE_ROOM13_MAX_REVIVE       0
#define FLAG_HIDE_FIVE_ISLAND_LOST_CAVE_ROOM14_RARE_CANDY       0
#define FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_HOUSE_LUCKY_PUNCH 0
#define FLAG_HIDE_SILPH_CO_4F_TM41                              0

#define STORY_FLAGS_START                                0
#define FLAG_GOT_POTION_ON_ROUTE_1                       0
#define FLAG_GOT_TM34_FROM_SURGE                         0
#define FLAG_GOT_FOSSIL_FROM_MT_MOON                     0
#define FLAG_HELPED_BILL_IN_SEA_COTTAGE                  0
#define FLAG_GOT_SS_TICKET                               0
#define FLAG_GOT_SS_TICKET_DUP                           0
#define FLAG_GOT_TM42_AT_MEMORIAL_PILLAR                 0
#define FLAG_GOT_HM01                                    0
#define FLAG_GOT_HM02                                    0
#define FLAG_GOT_HM03                                    0
#define FLAG_GOT_HM04                                    0
#define FLAG_GOT_HM05                                    0
#define FLAG_RESCUED_MR_FUJI                             0
#define FLAG_GOT_POKE_FLUTE                              0
#define FLAG_0x23E                                       0
#define FLAG_GOT_TM28_FROM_ROCKET                        0
#define FLAG_GOT_OLD_ROD                                 0
#define FLAG_GOT_BIKE_VOUCHER                            0
#define FLAG_0x242                                       0
#define FLAG_GOT_COIN_CASE                               0
#define FLAG_GOT_GOOD_ROD                                0
#define FLAG_GOT_TM29_FROM_MR_PSYCHIC                    0
#define FLAG_GOT_LAPRAS_FROM_SILPH                       0
#define FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL       0
#define FLAG_DID_MIMIEN_TRADE                            0
#define FLAG_BOUGHT_MAGIKARP                             0
#define FLAG_DID_ZYNX_TRADE                              0
#define FLAG_DID_MS_NIDO_TRADE                           0
#define FLAG_0x24C                                       0
#define FLAG_DID_CH_DING_TRADE                           0
#define FLAG_GOT_TM38_FROM_BLAINE                        0
#define FLAG_OAK_SKIP_22_RIVAL_CHECK                     0
#define FLAG_GOT_MASTER_BALL_FROM_SILPH                  0
#define FLAG_DID_NINA_TRADE                              0
#define FLAG_GOT_ITEMFINDER                              0
#define FLAG_WOKE_UP_ROUTE_12_SNORLAX                    0
#define FLAG_GOT_TM39_FROM_BROCK                         0
#define FLAG_GOT_SUPER_ROD                               0
#define FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE                0
#define FLAG_DID_MARC_TRADE                              0
#define FLAG_BEAT_RIVAL_IN_OAKS_LAB                      0
#define FLAG_GOT_TM06_FROM_KOGA                          0
#define FLAG_0x25A                                       0
#define FLAG_GOT_TM27                                    0
#define FLAG_0x25C                                       0
#define FLAG_0x25D                                       0
#define FLAG_GOT_OLD_AMBER                               0
#define FLAG_0x25F                                       0
#define FLAG_0x260                                       0
#define FLAG_0x261                                       0
#define FLAG_0x262                                       0
#define FLAG_GOT_EEVEE                                   0
#define FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES           0
#define FLAG_CINNABAR_GYM_QUIZ_1                         0
#define FLAG_CINNABAR_GYM_QUIZ_2                         0
#define FLAG_CINNABAR_GYM_QUIZ_3                         0
#define FLAG_CINNABAR_GYM_QUIZ_4                         0
#define FLAG_CINNABAR_GYM_QUIZ_5                         0
#define FLAG_CINNABAR_GYM_QUIZ_6                         0
#define FLAG_POKEMON_MANSION_SWITCH_STATE                0
#define FLAG_OPENED_ROCKET_HIDEOUT                       0
#define FLAG_GOT_10_COINS_FROM_GAMBLER                   0
#define FLAG_GOT_20_COINS_FROM_GAMBLER                   0
#define FLAG_GOT_20_COINS_FROM_GAMBLER_2                 0
#define FLAG_GOT_BICYCLE                                 0
#define FLAG_GOT_DOME_FOSSIL                             0
#define FLAG_GOT_HELIX_FOSSIL                            0
#define FLAG_DID_ESPHERE_TRADE                           0
#define FLAG_DID_TANGENY_TRADE                           0
#define FLAG_DID_SEELOR_TRADE                            0
#define FLAG_0x277                                       0
#define FLAG_GOT_HITMON_FROM_DOJO                        0
#define FLAG_0x279                                       0
#define FLAG_SILPH_2F_DOOR_1                             0
#define FLAG_SILPH_2F_DOOR_2                             0
#define FLAG_SILPH_3F_DOOR_1                             0
#define FLAG_SILPH_3F_DOOR_2                             0
#define FLAG_SILPH_4F_DOOR_1                             0
#define FLAG_SILPH_4F_DOOR_2                             0
#define FLAG_SILPH_5F_DOOR_1                             0
#define FLAG_SILPH_5F_DOOR_2                             0
#define FLAG_SILPH_5F_DOOR_3                             0
#define FLAG_SILPH_6F_DOOR                               0
#define FLAG_SILPH_7F_DOOR_1                             0
#define FLAG_SILPH_7F_DOOR_2                             0
#define FLAG_SILPH_7F_DOOR_3                             0
#define FLAG_SILPH_8F_DOOR                               0
#define FLAG_SILPH_9F_DOOR_1                             0
#define FLAG_SILPH_9F_DOOR_2                             0
#define FLAG_SILPH_9F_DOOR_3                             0
#define FLAG_SILPH_9F_DOOR_4                             0
#define FLAG_SILPH_10F_DOOR                              0
#define FLAG_SILPH_11F_DOOR                              0
#define FLAG_0x28E                                       0
#define FLAG_0x28F                                       0
#define FLAG_MET_STICKER_MAN                             0
#define FLAG_PALLET_LADY_NOT_BLOCKING_SIGN               0
#define FLAG_GOT_VS_SEEKER                               0
#define FLAG_GOT_TM19_FROM_ERIKA                         0
#define FLAG_GOT_TM33_FROM_THIRSTY_GIRL                  0
#define FLAG_GOT_TM20_FROM_THIRSTY_GIRL                  0
#define FLAG_GOT_TM16_FROM_THIRSTY_GIRL                  0
#define FLAG_GOT_TM03_FROM_MISTY                         0
#define FLAG_GOT_TM26_FROM_GIOVANNI                      0
#define FLAG_0x299                                       0
#define FLAG_GOT_TM04_FROM_SABRINA                       0
#define FLAG_GOT_FAME_CHECKER                            0
#define FLAG_GOT_RECORD_SETTING_MAGIKARP                 0
#define FLAG_TWO_ISLAND_SHOP_INTRODUCED                  0
#define FLAG_TWO_ISLAND_SHOP_EXPANDED_1                  0
#define FLAG_TWO_ISLAND_SHOP_EXPANDED_2                  0
#define FLAG_TWO_ISLAND_SHOP_EXPANDED_3                  0
#define FLAG_SEVII_DETOUR_FINISHED                       0
#define FLAG_VISITED_TWO_ISLAND                          0
#define FLAG_RESCUED_LOSTELLE                            0
#define FLAG_0x2A4                                       0
#define FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT                 0
#define FLAG_GOT_TEA                                     0
#define FLAG_GOT_POWDER_JAR                              0
#define FLAG_FOUGHT_MEWTWO                               0
#define FLAG_FOUGHT_MOLTRES                              0
#define FLAG_FOUGHT_ARTICUNO                             0
#define FLAG_FOUGHT_ZAPDOS                               0
#define FLAG_TUTOR_DOUBLE_EDGE                           0
#define FLAG_TUTOR_THUNDER_WAVE                          0
#define FLAG_TUTOR_ROCK_SLIDE                            0
#define FLAG_TUTOR_EXPLOSION                             0
#define FLAG_TUTOR_MEGA_PUNCH                            0
#define FLAG_TUTOR_MEGA_KICK                             0
#define FLAG_TUTOR_DREAM_EATER                           0
#define FLAG_TUTOR_SOFT_BOILED                           0
#define FLAG_TUTOR_SUBSTITUTE                            0
#define FLAG_TUTOR_SWORDS_DANCE                          0
#define FLAG_TUTOR_SEISMIC_TOSS                          0
#define FLAG_TUTOR_COUNTER                               0
#define FLAG_TUTOR_METRONOME                             0
#define FLAG_TUTOR_MIMIC                                 0
#define FLAG_TUTOR_BODY_SLAM                             0
#define FLAG_VISITED_OAKS_LAB                            0
#define FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1              0
#define FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2              0
#define FLAG_STOPPED_SEAFOAM_B3F_CURRENT                 0
#define FLAG_STOPPED_SEAFOAM_B4F_CURRENT                 0
#define FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE           0
#define FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE               0
#define FLAG_UNLOCKED_ROCKET_WAREHOUSE                   0
#define FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR         0
#define FLAG_LEARNED_YES_NAH_CHANSEY                     0
#define FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1       0
#define FLAG_GOT_TOGEPI_EGG                              0
#define FLAG_NO_ROOM_FOR_TOGEPI_EGG                      0
#define FLAG_RECOVERED_SAPPHIRE                          0
#define FLAG_GOT_RUBY                                    0
#define FLAG_TUTOR_FRENZY_PLANT                          0
#define FLAG_TUTOR_BLAST_BURN                            0
#define FLAG_TUTOR_HYDRO_CANNON                          0
#define FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK             0
#define FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL            0
#define FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE             0
#define FLAG_FOUGHT_DEOXYS                               0
#define FLAG_0x2E5                                       0
#define FLAG_0x2E6                                       0
#define FLAG_0x2E7                                       0
#define FLAG_0x2E8                                       0
#define FLAG_0x2E9                                       0
#define FLAG_0x2EA                                       0
#define FLAG_0x2EB                                       0
#define FLAG_REVIVED_DOME                                0
#define FLAG_REVIVED_HELIX                               0
#define FLAG_REVIVED_AMBER                               0
#define FLAG_GOT_HM06                                    0
#define FLAG_FOUGHT_LUGIA                                0
#define FLAG_FOUGHT_HO_OH                                0
#define FLAG_OAK_SAW_DEX_COMPLETION                      0
#define FLAG_LUGIA_FLEW_AWAY                             0
#define FLAG_HO_OH_FLEW_AWAY                             0
#define FLAG_DEOXYS_FLEW_AWAY                            0
#define FLAG_TALKED_TO_TEA_LADY_AFTER_HOF                0
#define FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION            0
#define FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE                0
#define FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER      0
#define FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER 0
#define FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE              0
#define FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE   0
#define FLAG_OAKS_RATING_IS_VIA_PC                       0

#define FLAG_HIDDEN_ITEM_VIRIDIAN_FOREST_POTION                            0
#define FLAG_HIDDEN_ITEM_VIRIDIAN_FOREST_ANTIDOTE                          0
#define FLAG_HIDDEN_ITEM_MT_MOON_B2F_MOON_STONE                            0
#define FLAG_HIDDEN_ITEM_MT_MOON_B2F_ETHER                                 0
#define FLAG_HIDDEN_ITEM_ROUTE25_ELIXIR                                    0
#define FLAG_HIDDEN_ITEM_ROUTE25_ETHER                                     0
#define FLAG_HIDDEN_ITEM_ROUTE9_ETHER                                      0
#define FLAG_HIDDEN_ITEM_UNUSED_0x07                                       0
#define FLAG_HIDDEN_ITEM_SSANNE_B1F_CORRIDOR_HYPER_POTION                  0
#define FLAG_HIDDEN_ITEM_ROUTE10_SUPER_POTION                              0
#define FLAG_HIDDEN_ITEM_ROUTE10_MAX_ETHER                                 0
#define FLAG_HIDDEN_ITEM_ROCKET_HIDEOUT_B1F_PP_UP                          0
#define FLAG_HIDDEN_ITEM_ROCKET_HIDEOUT_B3F_NUGGET                         0
#define FLAG_HIDDEN_ITEM_ROCKET_HIDEOUT_B4F_NEST_BALL                      0
#define FLAG_HIDDEN_ITEM_POKEMON_TOWER_5F_BIG_MUSHROOM                     0
#define FLAG_HIDDEN_ITEM_ROUTE13_PP_UP                                     0
#define FLAG_HIDDEN_ITEM_UNUSED_0x10                                       0
#define FLAG_HIDDEN_ITEM_ROUTE17_RARE_CANDY                                0
#define FLAG_HIDDEN_ITEM_ROUTE17_FULL_RESTORE                              0
#define FLAG_HIDDEN_ITEM_ROUTE17_PP_UP                                     0
#define FLAG_HIDDEN_ITEM_ROUTE17_MAX_REVIVE                                0
#define FLAG_HIDDEN_ITEM_ROUTE17_MAX_ELIXIR                                0
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_CENTER_LEAF_STONE                     0
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_WEST_REVIVE                           0
#define FLAG_HIDDEN_ITEM_SILPH_CO_5F_ELIXIR                                0
#define FLAG_HIDDEN_ITEM_SILPH_CO_9F_MAX_POTION                            0
#define FLAG_HIDDEN_ITEM_SAFFRON_CITY_COPYCATS_HOUSE_2F_NUGGET             0
#define FLAG_HIDDEN_ITEM_POWER_PLANT_MAX_ELIXIR                            0
#define FLAG_HIDDEN_ITEM_POWER_PLANT_THUNDER_STONE                         0
#define FLAG_HIDDEN_ITEM_SEAFOAM_ISLANDS_B3F_NUGGET                        0
#define FLAG_HIDDEN_ITEM_SEAFOAM_ISLANDS_B4F_WATER_STONE                   0
#define FLAG_HIDDEN_ITEM_POKEMON_MANSION_1F_MOON_STONE                     0
#define FLAG_HIDDEN_ITEM_POKEMON_MANSION_3F_RARE_CANDY                     0
#define FLAG_HIDDEN_ITEM_POKEMON_MANSION_B1F_ELIXIR                        0
#define FLAG_HIDDEN_ITEM_ROUTE23_FULL_RESTORE                              0
#define FLAG_HIDDEN_ITEM_ROUTE23_ULTRA_BALL                                0
#define FLAG_HIDDEN_ITEM_ROUTE23_MAX_ETHER                                 0
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_FULL_RESTORE                      0
#define FLAG_HIDDEN_ITEM_CERULEAN_CAVE_1F_ULTRA_BALL                       0
#define FLAG_HIDDEN_ITEM_UNUSED_0x28                                       0
#define FLAG_HIDDEN_ITEM_ROUTE11_ESCAPE_ROPE                               0
#define FLAG_HIDDEN_ITEM_ROUTE12_HYPER_POTION                              0
#define FLAG_HIDDEN_ITEM_UNUSED_0x2B                                       0
#define FLAG_HIDDEN_ITEM_UNUSED_0x2C                                       0
#define FLAG_HIDDEN_ITEM_UNUSED_0x2D                                       0
#define FLAG_HIDDEN_ITEM_UNUSED_0x2E                                       0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_PP_UP                                0
#define FLAG_HIDDEN_ITEM_VERMILION_CITY_MAX_ETHER                          0
#define FLAG_HIDDEN_ITEM_CERULEAN_CITY_RARE_CANDY                          0
#define FLAG_HIDDEN_ITEM_ROUTE4_GREAT_BALL                                 0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS                    0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_2                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_3                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_4                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_5                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_6                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_7                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_8                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_9                  0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_10                 0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_11                 0
#define FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_12                 0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_SEVAULT_CANYON_CHERI_BERRY           0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE_4           0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE             0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE_2           0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE_3           0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_ROCKET_WAREHOUSE_NEST_BALL            0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_ROCKET_WAREHOUSE_NET_BALL             0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL_POTION        0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL_ANTIDOTE      0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL_PARALYZE_HEAL 0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL_AWAKENING     0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL_BURN_HEAL     0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL_ICE_HEAL      0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL_ETHER         0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_EAST_WEST_TUNNEL_POTION          0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_EAST_WEST_TUNNEL_ANTIDOTE        0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_EAST_WEST_TUNNEL_PARALYZE_HEAL   0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_EAST_WEST_TUNNEL_AWAKENING       0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_EAST_WEST_TUNNEL_BURN_HEAL       0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_EAST_WEST_TUNNEL_ICE_HEAL        0
#define FLAG_HIDDEN_ITEM_UNDERGROUND_PATH_EAST_WEST_TUNNEL_ETHER           0
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM                         0
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM_2                       0
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM_3                       0
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM                          0
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM_2                        0
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM_3                        0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_RAZZ_BERRY              0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_BLUK_BERRY              0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_NANAB_BERRY             0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_WEPEAR_BERRY            0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_ORAN_BERRY              0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_CHERI_BERRY             0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_CHESTO_BERRY            0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_PECHA_BERRY             0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_RAWST_BERRY             0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_ASPEAR_BERRY            0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_PERSIM_BERRY            0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_PINAP_BERRY             0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BERRY_FOREST_LUM_BERRY               0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_STARDUST                0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_STARDUST_2              0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_PEARL                   0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_PEARL_2                 0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_ULTRA_BALL              0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_ULTRA_BALL_2            0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_STAR_PIECE              0
#define FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_BIG_PEARL               0
#define FLAG_HIDDEN_ITEM_TWO_ISLAND_CAPE_BRINK_RARE_CANDY                  0
#define FLAG_HIDDEN_ITEM_PEWTER_CITY_POKE_BALL                             0
#define FLAG_HIDDEN_ITEM_ROUTE3_ORAN_BERRY                                 0
#define FLAG_HIDDEN_ITEM_ROUTE4_PERSIM_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE24_PECHA_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE25_ORAN_BERRY                                0
#define FLAG_HIDDEN_ITEM_ROUTE25_BLUK_BERRY                                0
#define FLAG_HIDDEN_ITEM_ROUTE6_SITRUS_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE6_RARE_CANDY                                 0
#define FLAG_HIDDEN_ITEM_SSANNE_KITCHEN_PECHA_BERRY                        0
#define FLAG_HIDDEN_ITEM_SSANNE_KITCHEN_CHERI_BERRY                        0
#define FLAG_HIDDEN_ITEM_SSANNE_KITCHEN_CHESTO_BERRY                       0
#define FLAG_HIDDEN_ITEM_ROUTE9_RARE_CANDY                                 0
#define FLAG_HIDDEN_ITEM_UNUSED_0x7C                                       0
#define FLAG_HIDDEN_ITEM_ROUTE10_PERSIM_BERRY                              0
#define FLAG_HIDDEN_ITEM_ROUTE10_CHERI_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE8_RAWST_BERRY                                0
#define FLAG_HIDDEN_ITEM_ROUTE8_LUM_BERRY                                  0
#define FLAG_HIDDEN_ITEM_ROUTE8_LEPPA_BERRY                                0
#define FLAG_HIDDEN_ITEM_ROUTE12_RARE_CANDY                                0
#define FLAG_HIDDEN_ITEM_ROUTE12_LEFTOVERS                                 0
#define FLAG_HIDDEN_ITEM_ROUTE16_LEFTOVERS                                 0
#define FLAG_HIDDEN_ITEM_FUCHSIA_CITY_MAX_REVIVE                           0
#define FLAG_HIDDEN_ITEM_ROCKET_HIDEOUT_B4F_NET_BALL                       0
#define FLAG_HIDDEN_ITEM_SILPH_CO_2F_ULTRA_BALL                            0
#define FLAG_HIDDEN_ITEM_SILPH_CO_3F_PROTEIN                               0
#define FLAG_HIDDEN_ITEM_SILPH_CO_4F_IRON                                  0
#define FLAG_HIDDEN_ITEM_SILPH_CO_5F_PP_UP                                 0
#define FLAG_HIDDEN_ITEM_SILPH_CO_6F_CARBOS                                0
#define FLAG_HIDDEN_ITEM_SILPH_CO_7F_ZINC                                  0
#define FLAG_HIDDEN_ITEM_SILPH_CO_8F_NUGGET                                0
#define FLAG_HIDDEN_ITEM_SILPH_CO_9F_CALCIUM                               0
#define FLAG_HIDDEN_ITEM_SILPH_CO_10F_HP_UP                                0
#define FLAG_HIDDEN_ITEM_SILPH_CO_11F_REVIVE                               0
#define FLAG_HIDDEN_ITEM_ROUTE23_LUM_BERRY                                 0
#define FLAG_HIDDEN_ITEM_ROUTE23_SITRUS_BERRY                              0
#define FLAG_HIDDEN_ITEM_ROUTE23_ASPEAR_BERRY                              0
#define FLAG_HIDDEN_ITEM_ROUTE23_LEPPA_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE14_ZINC                                      0
#define FLAG_HIDDEN_ITEM_ROUTE9_CHESTO_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE10_NANAB_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE7_WEPEAR_BERRY                               0
#define FLAG_HIDDEN_ITEM_ROUTE20_STARDUST                                  0
#define FLAG_HIDDEN_ITEM_ROUTE21_NORTH_PEARL                               0
#define FLAG_HIDDEN_ITEM_ROUTE23_MAX_ELIXIR                                0
#define FLAG_HIDDEN_ITEM_ROUTE4_RAZZ_BERRY                                 0
#define FLAG_HIDDEN_ITEM_ROUTE14_PINAP_BERRY                               0
#define FLAG_HIDDEN_ITEM_MT_EMBER_EXTERIOR_FIRE_STONE                      0
#define FLAG_HIDDEN_ITEM_POKEMON_TOWER_7F_SOOTHE_BELL                      0
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_SUMMIT_SACRED_ASH                      0
#define FLAG_HIDDEN_ITEM_TWO_ISLAND_CAPE_BRINK_PP_MAX                      0
#define FLAG_HIDDEN_ITEM_MT_EMBER_EXTERIOR_ULTRA_BALL                      0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_DUNSPARCE_TUNNEL_NUGGET              0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_PP_UP                                0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BOND_BRIDGE_MAX_REPEL                0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BOND_BRIDGE_PEARL                    0
#define FLAG_HIDDEN_ITEM_THREE_ISLAND_BOND_BRIDGE_STARDUST                 0
#define FLAG_HIDDEN_ITEM_FOUR_ISLAND_PEARL                                 0
#define FLAG_HIDDEN_ITEM_FOUR_ISLAND_ULTRA_BALL                            0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_BIG_PEARL             0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_RAZZ_BERRY            0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_SITRUS_BERRY          0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_BLUK_BERRY            0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_NEST_BALL             0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STARDUST              0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STAR_PIECE            0
#define FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STARDUST_2            0
#define FLAG_HIDDEN_ITEM_SIX_ISLAND_OUTCAST_ISLAND_STAR_PIECE              0
#define FLAG_HIDDEN_ITEM_SIX_ISLAND_OUTCAST_ISLAND_NET_BALL                0
#define FLAG_HIDDEN_ITEM_SIX_ISLAND_GREEN_PATH_ULTRA_BALL                  0
#define FLAG_HIDDEN_ITEM_SIX_ISLAND_WATER_PATH_ASPEAR_BERRY                0
#define FLAG_HIDDEN_ITEM_SIX_ISLAND_WATER_PATH_ORAN_BERRY                  0
#define FLAG_HIDDEN_ITEM_SIX_ISLAND_WATER_PATH_PINAP_BERRY                 0
#define FLAG_HIDDEN_ITEM_SIX_ISLAND_LEPPA_BERRY                            0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TRAINER_TOWER_BIG_PEARL              0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TRAINER_TOWER_PEARL                  0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TRAINER_TOWER_NANAB_BERRY            0
#define FLAG_HIDDEN_ITEM_SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE_RAWST_BERRY  0
#define FLAG_HIDDEN_ITEM_VIRIDIAN_CITY_GYM_MACHO_BRACE                     0
#define FLAG_HIDDEN_ITEM_SSANNE_EXTERIOR_LAVA_COOKIE                       0

#define FLAG_DEFEATED_BROCK           0
#define FLAG_DEFEATED_MISTY           0
#define FLAG_DEFEATED_LT_SURGE        0
#define FLAG_DEFEATED_ERIKA           0
#define FLAG_DEFEATED_KOGA            0
#define FLAG_DEFEATED_SABRINA         0
#define FLAG_DEFEATED_BLAINE          0
#define FLAG_DEFEATED_LEADER_GIOVANNI 0
#define FLAG_DEFEATED_LORELEI         0
#define FLAG_DEFEATED_BRUNO           0
#define FLAG_DEFEATED_AGATHA          0
#define FLAG_DEFEATED_LANCE           0
#define FLAG_DEFEATED_CHAMP           0

#define FLAG_0x82A                                                  0
#define FLAG_0x82B                                                  0
#define FLAG_SYS_SET_TRAINER_CARD_PROFILE                           0
#define FLAG_0x82E                                                  0
#define FLAG_SYS_ON_CYCLING_ROAD                                    0
#define FLAG_0x831                                                  0
#define FLAG_0x832                                                  0
#define FLAG_0x833                                                  0
#define FLAG_0x835                                                  0
#define FLAG_0x836                                                  0
#define FLAG_0x838                                                  0 // Set, never read
#define FLAG_0x83A                                                  0
#define FLAG_SYS_SAW_HELP_SYSTEM_INTRO                              0
#define FLAG_0x83D                                                  0
#define FLAG_OPENED_START_MENU                                      0
#define FLAG_SYS_PC_STORAGE_DISABLED                                0
#define FLAG_SYS_SEVII_MAP_123                                      0
#define FLAG_SYS_SEVII_MAP_4567                                     0
#define FLAG_SYS_GOT_BERRY_POUCH                                    0
#define FLAG_SYS_UNLOCKED_TANOBY_RUINS                              0

// World Map Flags
#define FLAG_WORLD_MAP_PALLET_TOWN                                  0
#define FLAG_WORLD_MAP_VIRIDIAN_CITY                                0
#define FLAG_WORLD_MAP_PEWTER_CITY                                  0
#define FLAG_WORLD_MAP_CERULEAN_CITY                                0
#define FLAG_WORLD_MAP_LAVENDER_TOWN                                0
#define FLAG_WORLD_MAP_VERMILION_CITY                               0
#define FLAG_WORLD_MAP_CELADON_CITY                                 0
#define FLAG_WORLD_MAP_FUCHSIA_CITY                                 0
#define FLAG_WORLD_MAP_CINNABAR_ISLAND                              0
#define FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR                      0
#define FLAG_WORLD_MAP_SAFFRON_CITY                                 0
#define FLAG_WORLD_MAP_ONE_ISLAND                                   0
#define FLAG_WORLD_MAP_TWO_ISLAND                                   0
#define FLAG_WORLD_MAP_THREE_ISLAND                                 0
#define FLAG_WORLD_MAP_FOUR_ISLAND                                  0
#define FLAG_WORLD_MAP_FIVE_ISLAND                                  0
#define FLAG_WORLD_MAP_SEVEN_ISLAND                                 0
#define FLAG_WORLD_MAP_SIX_ISLAND                                   0
#define FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F                     0
#define FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F                    0
#define FLAG_WORLD_MAP_VIRIDIAN_FOREST                              0
#define FLAG_WORLD_MAP_MT_MOON_1F                                   0
#define FLAG_WORLD_MAP_SSANNE_EXTERIOR                              0
#define FLAG_WORLD_MAP_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL          0
#define FLAG_WORLD_MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL            0
#define FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F                            0
#define FLAG_WORLD_MAP_VICTORY_ROAD_1F                              0
#define FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F                           0
#define FLAG_WORLD_MAP_SILPH_CO_1F                                  0
#define FLAG_WORLD_MAP_POKEMON_MANSION_1F                           0
#define FLAG_WORLD_MAP_SAFARI_ZONE_CENTER                           0
#define FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM                 0
#define FLAG_WORLD_MAP_ROCK_TUNNEL_1F                               0
#define FLAG_WORLD_MAP_SEAFOAM_ISLANDS_1F                           0
#define FLAG_WORLD_MAP_POKEMON_TOWER_1F                             0
#define FLAG_WORLD_MAP_CERULEAN_CAVE_1F                             0
#define FLAG_WORLD_MAP_POWER_PLANT                                  0
#define FLAG_WORLD_MAP_NAVEL_ROCK_EXTERIOR                          0
#define FLAG_WORLD_MAP_MT_EMBER_EXTERIOR                            0
#define FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST                    0
#define FLAG_WORLD_MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE            0
#define FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE                 0
#define FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY                          0
#define FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F                    0
#define FLAG_WORLD_MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE               0
#define FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH                      0
#define FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE                     0
#define FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER     0
#define FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL                0
#define FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY       0
#define FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR                        0

#if TESTING
#define TESTING_FLAGS_START                                          0x5000
#define TESTING_FLAG_SLEEP_CLAUSE               (TESTING_FLAGS_START + 0x0)
#define TESTING_FLAG_INVERSE_BATTLE             (TESTING_FLAGS_START + 0x1)
#define TESTING_FLAG_TRAINER_SLIDES             (TESTING_FLAGS_START + 0x2)
#define TESTING_FLAG_UNUSED_3                   (TESTING_FLAGS_START + 0x3)
#define TESTING_FLAG_UNUSED_4                   (TESTING_FLAGS_START + 0x4)
#define TESTING_FLAG_UNUSED_5                   (TESTING_FLAGS_START + 0x5)
#define TESTING_FLAG_UNUSED_6                   (TESTING_FLAGS_START + 0x6)
#define TESTING_FLAG_UNUSED_7                   (TESTING_FLAGS_START + 0x7)
#endif // TESTING


#endif // GUARD_CONSTANTS_FLAGS_H
