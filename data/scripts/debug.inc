Debug_MessageEnd::
# 4 "data/scripts/debug.pory"
	waitmessage
# 5 "data/scripts/debug.pory"
	waitbuttonpress
# 6 "data/scripts/debug.pory"
	releaseall
	end


Debug_ShowFieldMessageStringVar4::
# 12 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 13 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_CheatStart::
# 18 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 19 "data/scripts/debug.pory"
	setflag FLAG_RESCUED_BIRCH
# 20 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 21 "data/scripts/debug.pory"
	setflag FLAG_ADVENTURE_STARTED
# 22 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 23 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 24 "data/scripts/debug.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 25 "data/scripts/debug.pory"
	setvar VAR_ROUTE101_STATE, 3
# 26 "data/scripts/debug.pory"
	givemon SPECIES_TREECKO, 20, ITEM_NONE
# 27 "data/scripts/debug.pory"
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
# 28 "data/scripts/debug.pory"
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
# 29 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 30 "data/scripts/debug.pory"
	special SetUnlockedPokedexFlags
# 31 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 32 "data/scripts/debug.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 33 "data/scripts/debug.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 34 "data/scripts/debug.pory"
	special EnableNationalPokedex
# 35 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 36 "data/scripts/debug.pory"
	setflag FLAG_SYS_B_DASH
# 37 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4 : Received Running Shoes
# 38 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7 : Told to go meet rival
# 39 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2 : Met Rival ' s Mom ( and is corresponding gender )
# 40 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2 : Met Rival ' s Mom ( and is corresponding gender )
# 41 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4 : Received Pokedex
# 42 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_BIKE
# 43 "data/scripts/debug.pory"
	additem ITEM_ACRO_BIKE
# 44 "data/scripts/debug.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 45 "data/scripts/debug.pory"
	setvar VAR_ROUTE116_STATE, 2
# 46 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 47 "data/scripts/debug.pory"
	setflag FLAG_BADGE01_GET
# 48 "data/scripts/debug.pory"
	setflag FLAG_BADGE02_GET
# 49 "data/scripts/debug.pory"
	setflag FLAG_BADGE03_GET
# 50 "data/scripts/debug.pory"
	setflag FLAG_BADGE04_GET
# 51 "data/scripts/debug.pory"
	setflag FLAG_BADGE05_GET
# 52 "data/scripts/debug.pory"
	setflag FLAG_BADGE06_GET
# 53 "data/scripts/debug.pory"
	setflag FLAG_BADGE07_GET
# 54 "data/scripts/debug.pory"
	setflag FLAG_BADGE08_GET
# 55 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 56 "data/scripts/debug.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 57 "data/scripts/debug.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 58 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 59 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 60 "data/scripts/debug.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 61 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 62 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 63 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 64 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 65 "data/scripts/debug.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 66 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 67 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 68 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 69 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 70 "data/scripts/debug.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 71 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 72 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 73 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 74 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 75 "data/scripts/debug.pory"
	release
	end


Debug_CheatStartFrlg::
# 81 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 82 "data/scripts/debug.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 83 "data/scripts/debug.pory"
	setflag FLAG_OPENED_START_MENU
# 84 "data/scripts/debug.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 85 "data/scripts/debug.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 86 "data/scripts/debug.pory"
	givemon SPECIES_BULBASAUR, 20, ITEM_NONE
# 87 "data/scripts/debug.pory"
	givemon SPECIES_CHARMANDER, 20, ITEM_NONE
# 88 "data/scripts/debug.pory"
	givemon SPECIES_SQUIRTLE, 20, ITEM_NONE
# 89 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 90 "data/scripts/debug.pory"
	setflag FLAG_HIDE_RIVAL_IN_LAB
# 91 "data/scripts/debug.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 92 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 93 "data/scripts/debug.pory"
	special SetUnlockedPokedexFlags
# 94 "data/scripts/debug.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 95 "data/scripts/debug.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 96 "data/scripts/debug.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 97 "data/scripts/debug.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 98 "data/scripts/debug.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 99 "data/scripts/debug.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 100 "data/scripts/debug.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 101 "data/scripts/debug.pory"
	special EnableNationalPokedex
# 102 "data/scripts/debug.pory"
	setflag FLAG_SYS_B_DASH
# 103 "data/scripts/debug.pory"
	setflag FLAG_BADGE01_GET
# 104 "data/scripts/debug.pory"
	setflag FLAG_BADGE02_GET
# 105 "data/scripts/debug.pory"
	setflag FLAG_BADGE03_GET
# 106 "data/scripts/debug.pory"
	setflag FLAG_BADGE04_GET
# 107 "data/scripts/debug.pory"
	setflag FLAG_BADGE05_GET
# 108 "data/scripts/debug.pory"
	setflag FLAG_BADGE06_GET
# 109 "data/scripts/debug.pory"
	setflag FLAG_BADGE07_GET
# 110 "data/scripts/debug.pory"
	setflag FLAG_BADGE08_GET
# 111 "data/scripts/debug.pory"
	setflag FLAG_GOT_BIKE_VOUCHER
# 112 "data/scripts/debug.pory"
	setflag FLAG_GOT_BICYCLE
# 113 "data/scripts/debug.pory"
	additem ITEM_BICYCLE
# 114 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_PALLET_TOWN
# 115 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 116 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_PEWTER_CITY
# 117 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 118 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_CERULEAN_CITY
# 119 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_VERMILION_CITY
# 120 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 121 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 122 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_CELADON_CITY
# 123 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 124 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_SAFFRON_CITY
# 125 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 126 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 127 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_ONE_ISLAND
# 128 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_TWO_ISLAND
# 129 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_THREE_ISLAND
# 130 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_FOUR_ISLAND
# 131 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_FIVE_ISLAND
# 132 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_SIX_ISLAND
# 133 "data/scripts/debug.pory"
	setflag FLAG_WORLD_MAP_SEVEN_ISLAND
# 134 "data/scripts/debug.pory"
	release
	end


Debug_VarsNotSetBattleConfigMessage::
# 140 "data/scripts/debug.pory"
	message Debug_VarsNotSetBattleConfigMessage_Text_0
# 141 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_FlagsNotSetOverworldConfigMessage::
# 146 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text_0
# 147 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_FlagsNotSetBattleConfigMessage::
# 152 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text_0
# 153 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_BoxFilledMessage::
# 158 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text_0
# 159 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_EventScript_CheckEVs::
# 164 "data/scripts/debug.pory"
	lockall
# 165 "data/scripts/debug.pory"
	getpartysize
# 166 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 167 "data/scripts/debug.pory"
	special ChoosePartyMon
# 168 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 169 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 170 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_0, MSGBOX_DEFAULT
# 171 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 172 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_1, MSGBOX_DEFAULT
# 173 "data/scripts/debug.pory"
	goto Debug_EventScript_CheckEVs_End
	return


Debug_EventScript_CheckEVs_End::
# 178 "data/scripts/debug.pory"
	releaseall
	return


Debug_EventScript_CheckIVs::
# 183 "data/scripts/debug.pory"
	lockall
# 184 "data/scripts/debug.pory"
	getpartysize
# 185 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 186 "data/scripts/debug.pory"
	special ChoosePartyMon
# 187 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 188 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 189 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_0, MSGBOX_DEFAULT
# 190 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 191 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_1, MSGBOX_DEFAULT
	return


Debug_EventScript_CheckIVs_End::
# 196 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Script_1::
# 202 "data/scripts/debug.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTORETIRABUDINGYM
# 203 "data/scripts/debug.pory"
	warp MAP_TIRABUDIN_PLACE_GYM_LOBBY, 0
# 204 "data/scripts/debug.pory"
	waitstate
	end


Debug_EventScript_Script_2::
# 211 "data/scripts/debug.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM
# 212 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_1
# 213 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_2
# 214 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_3
# 215 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_4
# 216 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_5
# 217 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_6
# 218 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_7
# 219 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RESTOREHODOUGYM, SUB_QUEST_8
# 220 "data/scripts/debug.pory"
	warp MAP_HODOU_CITY_GYM, 0
# 221 "data/scripts/debug.pory"
	waitstate
	end


Debug_EventScript_Script_3::
	end


Debug_EventScript_Script_4::
	end


Debug_EventScript_Script_5::
# 237 "data/scripts/debug.pory"
	lock
# 238 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_5_Text_0
# 239 "data/scripts/debug.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, NULL, Debug_EventScript_Script_5_Text_1, Debug_EventScript_Script_5_Text_2, Debug_EventScript_Script_5_Text_3, Debug_EventScript_Script_5_Text_4, Debug_EventScript_Script_5_Text_5, Debug_EventScript_Script_5_Text_6, Debug_EventScript_Script_5_Text_7, Debug_EventScript_Script_5_Text_8, Debug_EventScript_Script_5_Text_9, Debug_EventScript_Script_5_Text_10, Debug_EventScript_Script_5_Text_11, Debug_EventScript_Script_5_Text_12, Debug_EventScript_Script_5_Text_13, Debug_EventScript_Script_5_Text_14, Debug_EventScript_Script_5_Text_15, Debug_EventScript_Script_5_Text_16
# 240 "data/scripts/debug.pory"
	callnative DebugToggleBosses
# 241 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_5_Text_17
# 242 "data/scripts/debug.pory"
	closemessage
# 243 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_6::
	end


Debug_EventScript_Script_7::
	end


Debug_EventScript_Script_8::
	end


Debug_EventScript_Script_9::
	end


Debug_EventScript_Script_10::
# 269 "data/scripts/debug.pory"
	givemon SPECIES_PIDGEOT, 100, 0
# 270 "data/scripts/debug.pory"
	givemon SPECIES_NIDOQUEEN, 100, 0
# 271 "data/scripts/debug.pory"
	givemon SPECIES_NIDOKING, 100, 0
# 272 "data/scripts/debug.pory"
	givemon SPECIES_CLEFABLE, 100, 0
# 273 "data/scripts/debug.pory"
	givemon SPECIES_NINETALES, 100, 0
# 274 "data/scripts/debug.pory"
	givemon SPECIES_PARASECT, 100, 0
# 275 "data/scripts/debug.pory"
	givemon SPECIES_POLIWRATH, 100, 0
# 276 "data/scripts/debug.pory"
	givemon SPECIES_ALAKAZAM, 100, 0
# 277 "data/scripts/debug.pory"
	givemon SPECIES_TENTACRUEL, 100, 0
# 278 "data/scripts/debug.pory"
	givemon SPECIES_SLOWBRO, 100, 0
# 279 "data/scripts/debug.pory"
	givemon SPECIES_DEWGONG, 100, 0
# 280 "data/scripts/debug.pory"
	givemon SPECIES_HYPNO, 100, 0
# 281 "data/scripts/debug.pory"
	givemon SPECIES_KINGLER, 100, 0
# 282 "data/scripts/debug.pory"
	givemon SPECIES_HITMONLEE, 100, 0
# 283 "data/scripts/debug.pory"
	givemon SPECIES_HITMONCHAN, 100, 0
# 284 "data/scripts/debug.pory"
	givemon SPECIES_WEEZING, 100, 0
# 285 "data/scripts/debug.pory"
	givemon SPECIES_MR_MIME, 100, 0
# 286 "data/scripts/debug.pory"
	givemon SPECIES_JYNX, 100, 0
# 287 "data/scripts/debug.pory"
	givemon SPECIES_GYARADOS, 100, 0
# 288 "data/scripts/debug.pory"
	givemon SPECIES_LAPRAS, 100, 0
# 289 "data/scripts/debug.pory"
	givemon SPECIES_DITTO, 100, 0
# 290 "data/scripts/debug.pory"
	givemon SPECIES_OMASTAR, 100, 0
# 291 "data/scripts/debug.pory"
	givemon SPECIES_KABUTOPS, 100, 0
# 292 "data/scripts/debug.pory"
	givemon SPECIES_AERODACTYL, 100, 0
# 293 "data/scripts/debug.pory"
	givemon SPECIES_DRAGONITE, 100, 0
# 294 "data/scripts/debug.pory"
	givemon SPECIES_NOCTOWL, 100, 0
# 295 "data/scripts/debug.pory"
	givemon SPECIES_ARIADOS, 100, 0
# 296 "data/scripts/debug.pory"
	givemon SPECIES_AMPHAROS, 100, 0
# 297 "data/scripts/debug.pory"
	givemon SPECIES_POLITOED, 100, 0
# 298 "data/scripts/debug.pory"
	givemon SPECIES_SLOWKING, 100, 0
# 299 "data/scripts/debug.pory"
	givemon SPECIES_GRANBULL, 100, 0
# 300 "data/scripts/debug.pory"
	givemon SPECIES_SCIZOR, 100, 0
# 301 "data/scripts/debug.pory"
	givemon SPECIES_SHUCKLE, 100, 0
# 302 "data/scripts/debug.pory"
	givemon SPECIES_CORSOLA, 100, 0
# 303 "data/scripts/debug.pory"
	givemon SPECIES_OCTILLERY, 100, 0
# 304 "data/scripts/debug.pory"
	givemon SPECIES_DONPHAN, 100, 0
# 305 "data/scripts/debug.pory"
	givemon SPECIES_SMEARGLE, 100, 0
# 306 "data/scripts/debug.pory"
	givemon SPECIES_HITMONTOP, 100, 0
# 307 "data/scripts/debug.pory"
	givemon SPECIES_MILTANK, 100, 0
# 308 "data/scripts/debug.pory"
	givemon SPECIES_BLISSEY, 100, 0
# 309 "data/scripts/debug.pory"
	givemon SPECIES_TYRANITAR, 100, 0
# 310 "data/scripts/debug.pory"
	givemon SPECIES_SWAMPERT, 100, 0
# 311 "data/scripts/debug.pory"
	givemon SPECIES_MIGHTYENA, 100, 0
# 312 "data/scripts/debug.pory"
	givemon SPECIES_LINOONE, 100, 0
# 313 "data/scripts/debug.pory"
	givemon SPECIES_SHIFTRY, 100, 0
# 314 "data/scripts/debug.pory"
	givemon SPECIES_SWELLOW, 100, 0
# 315 "data/scripts/debug.pory"
	givemon SPECIES_PELIPPER, 100, 0
# 316 "data/scripts/debug.pory"
	givemon SPECIES_GARDEVOIR, 100, 0
# 317 "data/scripts/debug.pory"
	givemon SPECIES_BRELOOM, 100, 0
# 318 "data/scripts/debug.pory"
	givemon SPECIES_AGGRON, 100, 0
# 319 "data/scripts/debug.pory"
	givemon SPECIES_MEDICHAM, 100, 0
# 320 "data/scripts/debug.pory"
	givemon SPECIES_SWALOT, 100, 0
# 321 "data/scripts/debug.pory"
	givemon SPECIES_SHARPEDO, 100, 0
# 322 "data/scripts/debug.pory"
	givemon SPECIES_CAMERUPT, 100, 0
# 323 "data/scripts/debug.pory"
	givemon SPECIES_TORKOAL, 100, 0
# 324 "data/scripts/debug.pory"
	givemon SPECIES_GRUMPIG, 100, 0
# 325 "data/scripts/debug.pory"
	givemon SPECIES_SPINDA, 100, 0
# 326 "data/scripts/debug.pory"
	givemon SPECIES_FLYGON, 100, 0
# 327 "data/scripts/debug.pory"
	givemon SPECIES_CRADILY, 100, 0
# 328 "data/scripts/debug.pory"
	givemon SPECIES_ARMALDO, 100, 0
# 329 "data/scripts/debug.pory"
	givemon SPECIES_WALREIN, 100, 0
# 330 "data/scripts/debug.pory"
	givemon SPECIES_HUNTAIL, 100, 0
# 331 "data/scripts/debug.pory"
	givemon SPECIES_GOREBYSS, 100, 0
# 332 "data/scripts/debug.pory"
	givemon SPECIES_RELICANTH, 100, 0
# 333 "data/scripts/debug.pory"
	givemon SPECIES_TORTERRA, 100, 0
# 334 "data/scripts/debug.pory"
	givemon SPECIES_KRICKETUNE, 100, 0
# 335 "data/scripts/debug.pory"
	givemon SPECIES_LUXRAY, 100, 0
# 336 "data/scripts/debug.pory"
	givemon SPECIES_BASTIODON, 100, 0
# 337 "data/scripts/debug.pory"
	givemon SPECIES_PACHIRISU, 100, 0
# 338 "data/scripts/debug.pory"
	givemon SPECIES_LOPUNNY, 100, 0
# 339 "data/scripts/debug.pory"
	givemon SPECIES_MISMAGIUS, 100, 0
# 340 "data/scripts/debug.pory"
	givemon SPECIES_HONCHKROW, 100, 0
# 341 "data/scripts/debug.pory"
	givemon SPECIES_PURUGLY, 100, 0
# 342 "data/scripts/debug.pory"
	givemon SPECIES_SKUNTANK, 100, 0
# 343 "data/scripts/debug.pory"
	givemon SPECIES_BRONZONG, 100, 0
# 344 "data/scripts/debug.pory"
	givemon SPECIES_SPIRITOMB, 100, 0
# 345 "data/scripts/debug.pory"
	givemon SPECIES_TOXICROAK, 100, 0
# 346 "data/scripts/debug.pory"
	givemon SPECIES_MAGMORTAR, 100, 0
# 347 "data/scripts/debug.pory"
	givemon SPECIES_TOGEKISS, 100, 0
# 348 "data/scripts/debug.pory"
	givemon SPECIES_GLISCOR, 100, 0
# 349 "data/scripts/debug.pory"
	givemon SPECIES_MAMOSWINE, 100, 0
# 350 "data/scripts/debug.pory"
	givemon SPECIES_PORYGON_Z, 100, 0
# 351 "data/scripts/debug.pory"
	givemon SPECIES_GALLADE, 100, 0
# 352 "data/scripts/debug.pory"
	givemon SPECIES_DUSKNOIR, 100, 0
# 353 "data/scripts/debug.pory"
	givemon SPECIES_ROTOM_WASH, 100, 0
# 354 "data/scripts/debug.pory"
	givemon SPECIES_ROTOM_MOW, 100, 0
# 355 "data/scripts/debug.pory"
	givemon SPECIES_ROTOM_HEAT, 100, 0
# 356 "data/scripts/debug.pory"
	givemon SPECIES_ROTOM_FROST, 100, 0
# 357 "data/scripts/debug.pory"
	givemon SPECIES_ROTOM_FAN, 100, 0
# 358 "data/scripts/debug.pory"
	givemon SPECIES_ROTOM, 100, 0
# 359 "data/scripts/debug.pory"
	givemon SPECIES_SERPERIOR, 100, 0
# 360 "data/scripts/debug.pory"
	givemon SPECIES_LIEPARD, 100, 0
# 361 "data/scripts/debug.pory"
	givemon SPECIES_MUSHARNA, 100, 0
# 362 "data/scripts/debug.pory"
	givemon SPECIES_ZEBSTRIKA, 100, 0
# 363 "data/scripts/debug.pory"
	givemon SPECIES_SWOOBAT, 100, 0
# 364 "data/scripts/debug.pory"
	givemon SPECIES_EXCADRILL, 100, 0
# 365 "data/scripts/debug.pory"
	givemon SPECIES_SEISMITOAD, 100, 0
# 366 "data/scripts/debug.pory"
	givemon SPECIES_LEAVANNY, 100, 0
# 367 "data/scripts/debug.pory"
	givemon SPECIES_LILLIGANT, 100, 0
# 368 "data/scripts/debug.pory"
	givemon SPECIES_SCRAFTY, 100, 0
# 369 "data/scripts/debug.pory"
	givemon SPECIES_SIGILYPH, 100, 0
# 370 "data/scripts/debug.pory"
	givemon SPECIES_COFAGRIGUS, 100, 0
# 371 "data/scripts/debug.pory"
	givemon SPECIES_CARRACOSTA, 100, 0
# 372 "data/scripts/debug.pory"
	givemon SPECIES_GARBODOR, 100, 0
# 373 "data/scripts/debug.pory"
	givemon SPECIES_ZOROARK, 100, 0
# 374 "data/scripts/debug.pory"
	givemon SPECIES_VANILLUXE, 100, 0
# 375 "data/scripts/debug.pory"
	givemon SPECIES_AMOONGUSS, 100, 0
# 376 "data/scripts/debug.pory"
	givemon SPECIES_KLINKLANG, 100, 0
# 377 "data/scripts/debug.pory"
	givemon SPECIES_EELEKTROSS, 100, 0
# 378 "data/scripts/debug.pory"
	givemon SPECIES_CHANDELURE, 100, 0
# 379 "data/scripts/debug.pory"
	givemon SPECIES_HAXORUS, 100, 0
# 380 "data/scripts/debug.pory"
	givemon SPECIES_BEARTIC, 100, 0
# 381 "data/scripts/debug.pory"
	givemon SPECIES_MIENSHAO, 100, 0
# 382 "data/scripts/debug.pory"
	givemon SPECIES_GOLURK, 100, 0
# 383 "data/scripts/debug.pory"
	givemon SPECIES_BOUFFALANT, 100, 0
# 384 "data/scripts/debug.pory"
	givemon SPECIES_HYDREIGON, 100, 0
# 385 "data/scripts/debug.pory"
	givemon SPECIES_VOLCARONA, 100, 0
# 386 "data/scripts/debug.pory"
	givemon SPECIES_TALONFLAME, 100, 0
# 387 "data/scripts/debug.pory"
	givemon SPECIES_VIVILLON, 100, 0
# 388 "data/scripts/debug.pory"
	givemon SPECIES_FLORGES, 100, 0
# 389 "data/scripts/debug.pory"
	givemon SPECIES_PANGORO, 100, 0
# 390 "data/scripts/debug.pory"
	givemon SPECIES_AEGISLASH, 100, 0
# 391 "data/scripts/debug.pory"
	givemon SPECIES_SLURPUFF, 100, 0
# 392 "data/scripts/debug.pory"
	givemon SPECIES_MALAMAR, 100, 0
# 393 "data/scripts/debug.pory"
	givemon SPECIES_TYRANTRUM, 100, 0
# 394 "data/scripts/debug.pory"
	givemon SPECIES_HAWLUCHA, 100, 0
# 395 "data/scripts/debug.pory"
	givemon SPECIES_GOODRA, 100, 0
# 396 "data/scripts/debug.pory"
	givemon SPECIES_KLEFKI, 100, 0
# 397 "data/scripts/debug.pory"
	givemon SPECIES_NOIVERN, 100, 0
# 398 "data/scripts/debug.pory"
	givemon SPECIES_PRIMARINA, 100, 0
# 399 "data/scripts/debug.pory"
	givemon SPECIES_TOUCANNON, 100, 0
# 400 "data/scripts/debug.pory"
	givemon SPECIES_VIKAVOLT, 100, 0
# 401 "data/scripts/debug.pory"
	givemon SPECIES_CRABOMINABLE, 100, 0
# 402 "data/scripts/debug.pory"
	givemon SPECIES_ORICORIO_SENSU, 100, 0
# 403 "data/scripts/debug.pory"
	givemon SPECIES_ORICORIO_POM_POM, 100, 0
# 404 "data/scripts/debug.pory"
	givemon SPECIES_ORICORIO_BAILE, 100, 0
# 405 "data/scripts/debug.pory"
	givemon SPECIES_ORICORIO_PAU, 100, 0
# 406 "data/scripts/debug.pory"
	givemon SPECIES_RIBOMBEE, 100, 0
# 407 "data/scripts/debug.pory"
	givemon SPECIES_TOXAPEX, 100, 0
# 408 "data/scripts/debug.pory"
	givemon SPECIES_MUDSDALE, 100, 0
# 409 "data/scripts/debug.pory"
	givemon SPECIES_SHIINOTIC, 100, 0
# 410 "data/scripts/debug.pory"
	givemon SPECIES_SALAZZLE, 100, 0
# 411 "data/scripts/debug.pory"
	givemon SPECIES_TSAREENA, 100, 0
# 412 "data/scripts/debug.pory"
	givemon SPECIES_MINIOR, 100, 0
# 413 "data/scripts/debug.pory"
	givemon SPECIES_MIMIKYU, 100, 0
# 414 "data/scripts/debug.pory"
	givemon SPECIES_DHELMISE, 100, 0
# 415 "data/scripts/debug.pory"
	givemon SPECIES_GREEDENT, 100, 0
# 416 "data/scripts/debug.pory"
	givemon SPECIES_CORVIKNIGHT, 100, 0
# 417 "data/scripts/debug.pory"
	givemon SPECIES_ORBEETLE, 100, 0
# 418 "data/scripts/debug.pory"
	givemon SPECIES_THIEVUL, 100, 0
# 419 "data/scripts/debug.pory"
	givemon SPECIES_DREDNAW, 100, 0
# 420 "data/scripts/debug.pory"
	givemon SPECIES_SANDACONDA, 100, 0
# 421 "data/scripts/debug.pory"
	givemon SPECIES_CRAMORANT, 100, 0
# 422 "data/scripts/debug.pory"
	givemon SPECIES_BARRASKEWDA, 100, 0
# 423 "data/scripts/debug.pory"
	givemon SPECIES_CENTISKORCH, 100, 0
# 424 "data/scripts/debug.pory"
	givemon SPECIES_GRAPPLOCT, 100, 0
# 425 "data/scripts/debug.pory"
	givemon SPECIES_POLTEAGEIST, 100, 0
# 426 "data/scripts/debug.pory"
	givemon SPECIES_HATTERENE, 100, 0
# 427 "data/scripts/debug.pory"
	givemon SPECIES_EISCUE, 100, 0
# 428 "data/scripts/debug.pory"
	givemon SPECIES_COPPERAJAH, 100, 0
# 429 "data/scripts/debug.pory"
	givemon SPECIES_DRACOZOLT, 100, 0
# 430 "data/scripts/debug.pory"
	givemon SPECIES_ARCTOZOLT, 100, 0
# 431 "data/scripts/debug.pory"
	givemon SPECIES_DRACOVISH, 100, 0
# 432 "data/scripts/debug.pory"
	givemon SPECIES_ARCTOVISH, 100, 0
# 433 "data/scripts/debug.pory"
	givemon SPECIES_DURALUDON, 100, 0
# 434 "data/scripts/debug.pory"
	givemon SPECIES_WYRDEER, 100, 0
# 435 "data/scripts/debug.pory"
	givemon SPECIES_KLEAVOR, 100, 0
# 436 "data/scripts/debug.pory"
	givemon SPECIES_URSALUNA, 100, 0
# 437 "data/scripts/debug.pory"
	givemon SPECIES_LOKIX, 100, 0
# 438 "data/scripts/debug.pory"
	givemon SPECIES_PAWMOT, 100, 0
# 439 "data/scripts/debug.pory"
	givemon SPECIES_MAUSHOLD, 100, 0
# 440 "data/scripts/debug.pory"
	givemon SPECIES_DACHSBUN, 100, 0
# 441 "data/scripts/debug.pory"
	givemon SPECIES_ARBOLIVA, 100, 0
# 442 "data/scripts/debug.pory"
	givemon SPECIES_SQUAWKABILLY, 100, 0
# 443 "data/scripts/debug.pory"
	givemon SPECIES_ARMAROUGE, 100, 0
# 444 "data/scripts/debug.pory"
	givemon SPECIES_CERULEDGE, 100, 0
# 445 "data/scripts/debug.pory"
	givemon SPECIES_KILOWATTREL, 100, 0
# 446 "data/scripts/debug.pory"
	givemon SPECIES_MABOSSTIFF, 100, 0
# 447 "data/scripts/debug.pory"
	givemon SPECIES_GRAFAIAI, 100, 0
# 448 "data/scripts/debug.pory"
	givemon SPECIES_TOEDSCRUEL, 100, 0
# 449 "data/scripts/debug.pory"
	givemon SPECIES_KLAWF, 100, 0
# 450 "data/scripts/debug.pory"
	givemon SPECIES_SCOVILLAIN, 100, 0
# 451 "data/scripts/debug.pory"
	givemon SPECIES_BOMBIRDIER, 100, 0
# 452 "data/scripts/debug.pory"
	givemon SPECIES_PALAFIN_ZERO, 100, 0
# 453 "data/scripts/debug.pory"
	givemon SPECIES_REVAVROOM, 100, 0
# 454 "data/scripts/debug.pory"
	givemon SPECIES_CETITAN, 100, 0
# 455 "data/scripts/debug.pory"
	givemon SPECIES_DONDOZO, 100, 0
# 456 "data/scripts/debug.pory"
	givemon SPECIES_TATSUGIRI, 100, 0
# 457 "data/scripts/debug.pory"
	givemon SPECIES_ANNIHILAPE, 100, 0
# 458 "data/scripts/debug.pory"
	givemon SPECIES_FARIGIRAF, 100, 0
# 459 "data/scripts/debug.pory"
	givemon SPECIES_BAXCALIBUR, 100, 0
# 460 "data/scripts/debug.pory"
	givemon SPECIES_GIMMIGHOUL_ROAMING, 100, 0
# 461 "data/scripts/debug.pory"
	givemon SPECIES_GHOLDENGO, 100, 0
# 462 "data/scripts/debug.pory"
	givemon SPECIES_ARCHALUDON, 100, 0
	end


Debug_CheckSaveBlock::
# 468 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 469 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_0, MSGBOX_DEFAULT
# 470 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 471 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_1, MSGBOX_DEFAULT
# 472 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 473 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_2, MSGBOX_DEFAULT
# 474 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 475 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_3, MSGBOX_DEFAULT
# 476 "data/scripts/debug.pory"
	release
	end


Debug_CheckROMSpace::
# 482 "data/scripts/debug.pory"
	callnative CheckROMSize
# 483 "data/scripts/debug.pory"
	msgbox Debug_CheckROMSpace_Text_0, MSGBOX_DEFAULT
# 484 "data/scripts/debug.pory"
	release
	end


Debug_HatchAnEgg::
# 490 "data/scripts/debug.pory"
	lockall
# 491 "data/scripts/debug.pory"
	getpartysize
# 492 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 493 "data/scripts/debug.pory"
	special ChoosePartyMon
# 494 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 495 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 496 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 497 "data/scripts/debug.pory"
	special EggHatch
	return


Debug_HatchAnEgg_End::
# 501 "data/scripts/debug.pory"
	releaseall
	end


Debug_NoPokemon::
# 507 "data/scripts/debug.pory"
	msgbox Debug_NoPokemon_Text_0, MSGBOX_DEFAULT
# 508 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_HatchAnEgg_CantForceHatch::
# 514 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_CantForceHatch_Text_0, MSGBOX_DEFAULT
# 515 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_ZeroDaycareMons::
# 521 "data/scripts/debug.pory"
	msgbox DebugScript_ZeroDaycareMons_Text_0, MSGBOX_DEFAULT
# 522 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_OneDaycareMons::
# 528 "data/scripts/debug.pory"
	msgbox DebugScript_OneDaycareMons_Text_0, MSGBOX_DEFAULT
# 529 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_DaycareMonsNotCompatible::
# 535 "data/scripts/debug.pory"
	msgbox DebugScript_DaycareMonsNotCompatible_Text_0, MSGBOX_DEFAULT
# 536 "data/scripts/debug.pory"
	releaseall
	end


Debug_ShowExpansionVersion::
# 542 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 543 "data/scripts/debug.pory"
	msgbox Debug_ShowExpansionVersion_Text_0, MSGBOX_DEFAULT
# 544 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Not_Enabled::
# 550 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Not_Enabled_Text_0, MSGBOX_DEFAULT
# 551 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Event_Script::
# 557 "data/scripts/debug.pory"
	lock
# 558 "data/scripts/debug.pory"
	facefollowernpc
# 559 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Event_Script_Text_0, MSGBOX_DEFAULT
# 560 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Steven_Multi::
# 566 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 567 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_WallyTutorial::
# 573 "data/scripts/debug.pory"
	special SavePlayerParty
# 574 "data/scripts/debug.pory"
	special LoadWallyZigzagoon
# 575 "data/scripts/debug.pory"
	special StartWallyTutorialBattle
# 576 "data/scripts/debug.pory"
	special LoadPlayerParty
# 577 "data/scripts/debug.pory"
	release
	end


Debug_BerryPestsDisabled::
# 583 "data/scripts/debug.pory"
	msgbox Debug_BerryPestsDisabled_Text_0, MSGBOX_DEFAULT
# 584 "data/scripts/debug.pory"
	release
	end


Debug_BerryWeedsDisabled::
# 590 "data/scripts/debug.pory"
	msgbox Debug_BerryWeedsDisabled_Text_0, MSGBOX_DEFAULT
# 591 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_InflictStatus1::
# 599 "data/scripts/debug.pory"
	lockall
# 600 "data/scripts/debug.pory"
	getpartysize
# 601 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 602 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_0, 0
# 603 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_1, 1
# 604 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_2, 2
# 605 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
# 606 "data/scripts/debug.pory"
	switch VAR_RESULT
# 608 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_2
# 609 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_3
# 610 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_4
	return

Debug_EventScript_InflictStatus1_2:
# 608 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single
	return

Debug_EventScript_InflictStatus1_3:
# 609 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party
	return

Debug_EventScript_InflictStatus1_4:
# 610 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
# 611 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	return


Debug_EventScript_InflictStatus1_Close::
# 617 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single::
# 623 "data/scripts/debug.pory"
	special ChoosePartyMon
# 624 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 625 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 626 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 627 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 628 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 629 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 630 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 631 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 632 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 633 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 634 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 635 "data/scripts/debug.pory"
	switch VAR_RESULT
# 637 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_3
# 638 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_4
# 639 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_5
# 640 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_6
# 641 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_7
# 642 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_8
# 643 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Single_9
# 644 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Single_10
Debug_EventScript_InflictStatus1_Single_1:
# 646 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_3:
# 637 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Poison
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_4:
# 638 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Paralysis
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_5:
# 639 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Sleep
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_6:
# 640 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Burn
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_7:
# 641 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Freeze
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_8:
# 642 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Frostbite
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_9:
# 643 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_10:
# 644 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1


Debug_EventScript_KoPokemon::
# 652 "data/scripts/debug.pory"
	special ChoosePartyMon
# 653 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 654 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 655 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 656 "data/scripts/debug.pory"
	setko VAR_0x8004
# 657 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetHiddenNature::
# 663 "data/scripts/debug.pory"
	special ChoosePartyMon
# 664 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 665 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 666 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 667 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_0, 0
# 668 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_1, 1
# 669 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_2, 2
# 670 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_3, 3
# 671 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_4, 4
# 672 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_5, 5
# 673 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_6, 6
# 674 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_7, 7
# 675 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_8, 8
# 676 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_9, 9
# 677 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_10, 10
# 678 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_11, 11
# 679 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_12, 12
# 680 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_13, 13
# 681 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_14, 14
# 682 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_15, 15
# 683 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_16, 16
# 684 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_17, 17
# 685 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_18, 18
# 686 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_19, 19
# 687 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_20, 20
# 688 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_21, 21
# 689 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_22, 22
# 690 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_23, 23
# 691 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_24, 24
# 692 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 694 "data/scripts/debug.pory"
	switch VAR_RESULT
# 696 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetHiddenNature_3
Debug_EventScript_SetHiddenNature_1:
# 698 "data/scripts/debug.pory"
	special SetHiddenNature
# 699 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_SetHiddenNature_3:
# 696 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_SetHiddenNature_1


Debug_EventScript_SetAbility::
# 705 "data/scripts/debug.pory"
	special ChoosePartyMon
# 706 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 707 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 708 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 709 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 710 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 711 "data/scripts/debug.pory"
	switch VAR_RESULT
# 713 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbility_3
Debug_EventScript_SetAbility_1:
# 715 "data/scripts/debug.pory"
	special SetAbility
# 716 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	return

Debug_EventScript_SetAbility_3:
# 713 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	goto Debug_EventScript_SetAbility_1


Debug_EventScript_SetAbilityClose::
# 721 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetFriendship::
# 727 "data/scripts/debug.pory"
	special ChoosePartyMon
# 728 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 729 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_GivePokerus::
# 735 "data/scripts/debug.pory"
	special ChoosePartyMon
# 736 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetPokerus
# 737 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Poison::
# 743 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 744 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Paralysis::
# 750 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 751 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Sleep::
# 757 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 758 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Burn::
# 764 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 765 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Freeze::
# 771 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 772 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Frostbite::
# 778 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 779 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party::
# 785 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 786 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 787 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 788 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 789 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 790 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 791 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 792 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 793 "data/scripts/debug.pory"
	switch VAR_RESULT
# 795 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_3
# 796 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_4
# 797 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_5
# 798 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_6
# 799 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_7
# 800 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_8
# 801 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Party_9
# 802 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Party_10
Debug_EventScript_InflictStatus1_Party_1:
# 804 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_3:
# 795 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Poison
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_4:
# 796 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Paralysis
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_5:
# 797 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Sleep
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_6:
# 798 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Burn
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_7:
# 799 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Freeze
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_8:
# 800 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Frostbite
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_9:
# 801 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_10:
# 802 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1


Debug_EventScript_InflictStatus1_Party_Poison::
# 810 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 811 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Paralysis::
# 817 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 818 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Sleep::
# 824 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 825 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Burn::
# 831 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 832 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Freeze::
# 838 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 839 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Frostbite::
# 845 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 846 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_EWRAMCounters::
# 892 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 893 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text_0, MSGBOX_DEFAULT
# 894 "data/scripts/debug.pory"
	release
	end


Debug_PrintFontTest::
# 900 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_0, MSGBOX_DEFAULT
# 901 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_1, MSGBOX_DEFAULT
# 902 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_2, MSGBOX_DEFAULT
# 903 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_3, MSGBOX_DEFAULT
# 904 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_4, MSGBOX_DEFAULT
# 905 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_5, MSGBOX_DEFAULT
# 906 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_6, MSGBOX_DEFAULT
# 907 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_7, MSGBOX_DEFAULT
# 908 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_8, MSGBOX_DEFAULT
# 909 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_FontTest::
# 915 "data/scripts/debug.pory"
	lockall
# 916 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
	return


Debug_EventScript_TellTheTime::
# 933 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 934 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 935 "data/scripts/debug.pory"
	waitmessage
# 936 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_PrintTimeOfDay::
# 942 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 943 "data/scripts/debug.pory"
	msgbox Debug_EventScript_PrintTimeOfDay_Text_0, MSGBOX_DEFAULT
# 944 "data/scripts/debug.pory"
	waitmessage
# 945 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_FakeRTCNotEnabled::
# 951 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 952 "data/scripts/debug.pory"
	waitmessage
# 953 "data/scripts/debug.pory"
	closemessage
	return


Debug_VarsNotSetBattleConfigMessage_Text_0:
# 140 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable var in:\l"
	.string "'include/config/battle.h'!$"

Debug_FlagsNotSetOverworldConfigMessage_Text_0:
# 146 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/overworld.h'!$"

Debug_FlagsNotSetBattleConfigMessage_Text_0:
# 152 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/battle.h'!$"

Debug_BoxFilledMessage_Text_0:
# 158 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"

Debug_EventScript_CheckEVs_Text_0:
# 170 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs:\n"
	.string "{STR_VAR_2}, SPEED EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckEVs_Text_1:
# 172 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs:\n"
	.string "{STR_VAR_2}, SPDEF EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_0:
# 189 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs:\n"
	.string "{STR_VAR_2}, SPEED IVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_1:
# 191 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs:\n"
	.string "{STR_VAR_2}, SPDEF IVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_Script_5_Text_0:
# 238 "data/scripts/debug.pory"
	.string "what boss do you want to unlock?$"

Debug_EventScript_Script_5_Text_1:
# 239 "data/scripts/debug.pory"
	.string "Pua$"

Debug_EventScript_Script_5_Text_2:
# 239 "data/scripts/debug.pory"
	.string "Baiya$"

Debug_EventScript_Script_5_Text_3:
# 239 "data/scripts/debug.pory"
	.string "Ami_Argento$"

Debug_EventScript_Script_5_Text_4:
# 239 "data/scripts/debug.pory"
	.string "Tala$"

Debug_EventScript_Script_5_Text_5:
# 239 "data/scripts/debug.pory"
	.string "Dimu$"

Debug_EventScript_Script_5_Text_6:
# 239 "data/scripts/debug.pory"
	.string "Adaora$"

Debug_EventScript_Script_5_Text_7:
# 239 "data/scripts/debug.pory"
	.string "Emrys$"

Debug_EventScript_Script_5_Text_8:
# 239 "data/scripts/debug.pory"
	.string "Magnus$"

Debug_EventScript_Script_5_Text_9:
# 239 "data/scripts/debug.pory"
	.string "Bd$"

Debug_EventScript_Script_5_Text_10:
# 239 "data/scripts/debug.pory"
	.string "Charlotte$"

Debug_EventScript_Script_5_Text_11:
# 239 "data/scripts/debug.pory"
	.string "Neriene$"

Debug_EventScript_Script_5_Text_12:
# 239 "data/scripts/debug.pory"
	.string "Frank$"

Debug_EventScript_Script_5_Text_13:
# 239 "data/scripts/debug.pory"
	.string "Shinzo$"

Debug_EventScript_Script_5_Text_14:
# 239 "data/scripts/debug.pory"
	.string "Kei_Ying$"

Debug_EventScript_Script_5_Text_15:
# 239 "data/scripts/debug.pory"
	.string "Belen$"

Debug_EventScript_Script_5_Text_16:
# 239 "data/scripts/debug.pory"
	.string "Eleanor$"

Debug_EventScript_Script_5_Text_17:
# 241 "data/scripts/debug.pory"
	.string "done$"

Debug_CheckSaveBlock_Text_0:
# 469 "data/scripts/debug.pory"
	.string "SaveBlock1 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_1:
# 471 "data/scripts/debug.pory"
	.string "SaveBlock2 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_2:
# 473 "data/scripts/debug.pory"
	.string "SaveBlock3 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_3:
# 475 "data/scripts/debug.pory"
	.string "{PKMN}Storage size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace_Text_0:
# 483 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_NoPokemon_Text_0:
# 507 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_CantForceHatch_Text_0:
# 514 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons_Text_0:
# 521 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"

DebugScript_OneDaycareMons_Text_0:
# 528 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"

DebugScript_DaycareMonsNotCompatible_Text_0:
# 535 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\n"
	.string "have babies together!$"

Debug_ShowExpansionVersion_Text_0:
# 543 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"

Debug_Follower_NPC_Not_Enabled_Text_0:
# 550 "data/scripts/debug.pory"
	.string "Feature unavailable.\n"
	.string "Set FNPC_ENABLE_NPC_FOLLOWERS to\l"
	.string "TRUE in 'include/config/follower_npc.h'.$"

Debug_Follower_NPC_Event_Script_Text_0:
# 559 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"

Debug_BerryPestsDisabled_Text_0:
# 583 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
	.string "Unable to force pests onto berry trees.$"

Debug_BerryWeedsDisabled_Text_0:
# 590 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
	.string "Unable to force weeds onto berry trees.$"

Debug_EventScript_InflictStatus1_Text_0:
# 602 "data/scripts/debug.pory"
	.string "Single$"

Debug_EventScript_InflictStatus1_Text_1:
# 603 "data/scripts/debug.pory"
	.string "Party-wide$"

Debug_EventScript_InflictStatus1_Text_2:
# 604 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_SetHiddenNature_Text_0:
# 667 "data/scripts/debug.pory"
	.string "Hardy$"

Debug_EventScript_SetHiddenNature_Text_1:
# 668 "data/scripts/debug.pory"
	.string "Lonely$"

Debug_EventScript_SetHiddenNature_Text_2:
# 669 "data/scripts/debug.pory"
	.string "Brave$"

Debug_EventScript_SetHiddenNature_Text_3:
# 670 "data/scripts/debug.pory"
	.string "Adamant$"

Debug_EventScript_SetHiddenNature_Text_4:
# 671 "data/scripts/debug.pory"
	.string "Naughty$"

Debug_EventScript_SetHiddenNature_Text_5:
# 672 "data/scripts/debug.pory"
	.string "Bold$"

Debug_EventScript_SetHiddenNature_Text_6:
# 673 "data/scripts/debug.pory"
	.string "Docile$"

Debug_EventScript_SetHiddenNature_Text_7:
# 674 "data/scripts/debug.pory"
	.string "Relaxed$"

Debug_EventScript_SetHiddenNature_Text_8:
# 675 "data/scripts/debug.pory"
	.string "Impish$"

Debug_EventScript_SetHiddenNature_Text_9:
# 676 "data/scripts/debug.pory"
	.string "Lax$"

Debug_EventScript_SetHiddenNature_Text_10:
# 677 "data/scripts/debug.pory"
	.string "Timid$"

Debug_EventScript_SetHiddenNature_Text_11:
# 678 "data/scripts/debug.pory"
	.string "Hasty$"

Debug_EventScript_SetHiddenNature_Text_12:
# 679 "data/scripts/debug.pory"
	.string "Serious$"

Debug_EventScript_SetHiddenNature_Text_13:
# 680 "data/scripts/debug.pory"
	.string "Jolly$"

Debug_EventScript_SetHiddenNature_Text_14:
# 681 "data/scripts/debug.pory"
	.string "Naive$"

Debug_EventScript_SetHiddenNature_Text_15:
# 682 "data/scripts/debug.pory"
	.string "Modest$"

Debug_EventScript_SetHiddenNature_Text_16:
# 683 "data/scripts/debug.pory"
	.string "Mild$"

Debug_EventScript_SetHiddenNature_Text_17:
# 684 "data/scripts/debug.pory"
	.string "Quiet$"

Debug_EventScript_SetHiddenNature_Text_18:
# 685 "data/scripts/debug.pory"
	.string "Bashful$"

Debug_EventScript_SetHiddenNature_Text_19:
# 686 "data/scripts/debug.pory"
	.string "Rash$"

Debug_EventScript_SetHiddenNature_Text_20:
# 687 "data/scripts/debug.pory"
	.string "Calm$"

Debug_EventScript_SetHiddenNature_Text_21:
# 688 "data/scripts/debug.pory"
	.string "Gentle$"

Debug_EventScript_SetHiddenNature_Text_22:
# 689 "data/scripts/debug.pory"
	.string "Sassy$"

Debug_EventScript_SetHiddenNature_Text_23:
# 690 "data/scripts/debug.pory"
	.string "Careful$"

Debug_EventScript_SetHiddenNature_Text_24:
# 691 "data/scripts/debug.pory"
	.string "Quirky$"

Debug_EventScript_EWRAMCounters_Text_0:
# 893 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
	.string "Fishing Chain: {STR_VAR_2}.$"

Debug_PrintFontTest_Text_0:
# 900 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel Adept Blind Bodice Clique\n"
	.string "Coast Dunce Docile Enact Eosin Furlong\n"
	.string "Focal Gnome Gondola Human Hoist Inlet\l"
	.string "Iodine Justin Jocose Knoll Koala Linden\l"
	.string "Loads Milliner Modal Number Nodule Onset\l"
	.string "Oddball Pneumo Poncho Quanta Qophs\l"
	.string "Rhone Roman Snout Sodium Tundra Tocsin\l"
	.string "Uncle Udder Vulcan Vocal Whale Woman\l"
	.string "Xmas Xenon Yunnan Young Zloty Zodiac.$"

Debug_PrintFontTest_Text_1:
# 901 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel angel adept for the nuance loads\n"
	.string "of the arena cocoa and quaalude. Blind\n"
	.string "blind bodice for the submit oboe of the\l"
	.string "club snob and abbot. Clique clique coast\l"
	.string "for the pouch loco of the franc assoc\l"
	.string "and accede. Dunce dunce docile for the\l"
	.string "loudness mastodon of the loud statehood\l"
	.string "and huddle.$"

Debug_PrintFontTest_Text_2:
# 902 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Enact enact eosin for the quench coed\n"
	.string "of the pique canoe and bleep. Furlong\n"
	.string "furlong focal for the genuflect profound\l"
	.string "of the motif aloof and offers. Gnome\l"
	.string "gnome gondola for the impugn logos of\l"
	.string "the unplug analog and smuggle. Human\l"
	.string "human hoist for the buddhist alcohol of\l"
	.string "the riyadh caliph and bathhouse.$"

Debug_PrintFontTest_Text_3:
# 903 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Inlet inlet iodine for the quince\n"
	.string "champion of the ennui scampi and shiite.\n"
	.string "Justin justin jocose for the djibouti\l"
	.string "sojourn of the oranj raj and hajjis. Knoll\l"
	.string "knoll koala for the banknote lookout of\l"
	.string "the dybbuk outlook and trekked. Linden\l"
	.string "linden loads for the ulna monolog of the\l"
	.string "consul menthol and shallot.$"

Debug_PrintFontTest_Text_4:
# 904 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Milliner milliner modal for the alumna\n"
	.string "solomon of the album custom and summon.\n"
	.string "Number number nodule for the unmade\l"
	.string "economic of the shotgun bison and\l"
	.string "tunnel. Onset onset oddball for the\l"
	.string "abandon podium of the antiquo tempo and\l"
	.string "moonlit. Pneumo pneumo poncho for the\l"
	.string "dauphin opossum of the holdup bishop and\l"
	.string "supplies.$"

Debug_PrintFontTest_Text_5:
# 905 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Quanta quanta qophs for the inquest\n"
	.string "sheqel of the cinq coq and suqqu. Rhone\n"
	.string "rhone roman for the burnt porous of the\l"
	.string "lemur clamor and carrot. Snout snout\l"
	.string "sodium for the ensnare bosom of the\l"
	.string "genus pathos and missing. Tundra tundra\l"
	.string "tocsin for the nutmeg isotope of the\l"
	.string "peasant ingot and ottoman.$"

Debug_PrintFontTest_Text_6:
# 906 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Uncle uncle udder for the dunes cloud\n"
	.string "of the hindu thou and continuum. Vulcan\n"
	.string "vulcan vocal for the alluvial ovoid of the\l"
	.string "yugoslav chekhov and revved. Whale whale\l"
	.string "woman for the meanwhile blowout of the\l"
	.string "forepaw meadow and glowworm. Xmas xmas\l"
	.string "xenon for the bauxite doxology of the\l"
	.string "tableaux equinox and exxon.$"

Debug_PrintFontTest_Text_7:
# 907 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Yunnan yunnan young for the dynamo\n"
	.string "coyote of the obloquy employ and sayyid.\n"
	.string "Zloty zloty zodiac for the gizmo ozone of\l"
	.string "the franz laissez and buzzing.$"

Debug_PrintFontTest_Text_8:
# 908 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}42 × 138 = 5796.\n"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer lynx\n"
	.string "at a café; voilà, they're “worth” ♂1/♀1 =\l"
	.string "¥1. That's 10 + 9 - 8 = 11 Nintendo GBA\l"
	.string "can connect to a Nintendo GameCube\l"
	.string "console! He claimed-though I don't\l"
	.string "believe him-to have done so in an\l"
	.string "eyes-shut state…?$"

Debug_EventScript_TellTheTime_Text_0:
# 934 "data/scripts/debug.pory"
	.string "Time and date:\n"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}$"

Debug_EventScript_PrintTimeOfDay_Text_0:
# 943 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 951 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\n"
	.string "enabled. Please enable it in include/\l"
	.string "config/overworld.h$"

Debug_EventScript_InflictStatus1_Text_Close::
# 850 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_InflictStatus1_Text_Poison::
# 855 "data/scripts/debug.pory"
	.string "Poison$"

Debug_EventScript_InflictStatus1_Text_Paralysis::
# 860 "data/scripts/debug.pory"
	.string "Paralysis$"

Debug_EventScript_InflictStatus1_Text_Sleep::
# 865 "data/scripts/debug.pory"
	.string "Sleep$"

Debug_EventScript_InflictStatus1_Text_Burn::
# 870 "data/scripts/debug.pory"
	.string "Burn$"

Debug_EventScript_InflictStatus1_Text_Freeze::
# 875 "data/scripts/debug.pory"
	.string "Freeze$"

Debug_EventScript_InflictStatus1_Text_Frostbite::
# 880 "data/scripts/debug.pory"
	.string "Frostbite$"

Debug_EventScript_InflictStatus1_Text_KO::
# 885 "data/scripts/debug.pory"
	.string "KO$"
