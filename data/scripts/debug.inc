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
	waitstate
# 169 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 170 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 171 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_0, MSGBOX_DEFAULT
# 172 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 173 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_1, MSGBOX_DEFAULT
# 174 "data/scripts/debug.pory"
	goto Debug_EventScript_CheckEVs_End
	return


Debug_EventScript_CheckEVs_End::
# 179 "data/scripts/debug.pory"
	releaseall
	return


Debug_EventScript_CheckIVs::
# 184 "data/scripts/debug.pory"
	lockall
# 185 "data/scripts/debug.pory"
	getpartysize
# 186 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 187 "data/scripts/debug.pory"
	special ChoosePartyMon
# 188 "data/scripts/debug.pory"
	waitstate
# 189 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 190 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 191 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_0, MSGBOX_DEFAULT
# 192 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 193 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_1, MSGBOX_DEFAULT
	return


Debug_EventScript_CheckIVs_End::
# 198 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Script_1::
# 204 "data/scripts/debug.pory"
	startquest QUEST_IBELIEVEICANFLY
# 205 "data/scripts/debug.pory"
	givemon species = SPECIES_PIKACHU, level = 50, item = 0, move1 = MOVE_FLY
	end


Debug_EventScript_Script_2::
# 212 "data/scripts/debug.pory"
	startquest QUEST_FLIGHTPATTERNS
	end


Debug_EventScript_Script_3::
# 218 "data/scripts/debug.pory"
	completesubquest QUEST_RESTAURANTEXPANSION1, SUB_QUEST_3
	end


Debug_EventScript_Script_4::
# 224 "data/scripts/debug.pory"
	completesubquest QUEST_RESTAURANTEXPANSION1, SUB_QUEST_4
	end


Debug_EventScript_Script_5::
# 230 "data/scripts/debug.pory"
	getpartysize
# 231 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 232 "data/scripts/debug.pory"
	special ChoosePartyMon
# 233 "data/scripts/debug.pory"
	waitstate
# 234 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, exit
# 235 "data/scripts/debug.pory"
	editmonivs VAR_0x8004
# 236 "data/scripts/debug.pory"
	waitstate
# 238 "data/scripts/debug.pory"
exit:
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
	end


Debug_CheckSaveBlock::
# 269 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 270 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_0, MSGBOX_DEFAULT
# 271 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 272 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_1, MSGBOX_DEFAULT
# 273 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 274 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_2, MSGBOX_DEFAULT
# 275 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 276 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_3, MSGBOX_DEFAULT
# 277 "data/scripts/debug.pory"
	release
	end


Debug_CheckROMSpace::
# 283 "data/scripts/debug.pory"
	callnative CheckROMSize
# 284 "data/scripts/debug.pory"
	msgbox Debug_CheckROMSpace_Text_0, MSGBOX_DEFAULT
# 285 "data/scripts/debug.pory"
	release
	end


Debug_HatchAnEgg::
# 291 "data/scripts/debug.pory"
	lockall
# 292 "data/scripts/debug.pory"
	getpartysize
# 293 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 294 "data/scripts/debug.pory"
	special ChoosePartyMon
# 295 "data/scripts/debug.pory"
	waitstate
# 296 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 297 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 298 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 299 "data/scripts/debug.pory"
	special EggHatch
# 300 "data/scripts/debug.pory"
	waitstate
	return


Debug_HatchAnEgg_End::
# 304 "data/scripts/debug.pory"
	releaseall
	end


Debug_NoPokemon::
# 310 "data/scripts/debug.pory"
	msgbox Debug_NoPokemon_Text_0, MSGBOX_DEFAULT
# 311 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_HatchAnEgg_CantForceHatch::
# 317 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_CantForceHatch_Text_0, MSGBOX_DEFAULT
# 318 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_ZeroDaycareMons::
# 324 "data/scripts/debug.pory"
	msgbox DebugScript_ZeroDaycareMons_Text_0, MSGBOX_DEFAULT
# 325 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_OneDaycareMons::
# 331 "data/scripts/debug.pory"
	msgbox DebugScript_OneDaycareMons_Text_0, MSGBOX_DEFAULT
# 332 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_DaycareMonsNotCompatible::
# 338 "data/scripts/debug.pory"
	msgbox DebugScript_DaycareMonsNotCompatible_Text_0, MSGBOX_DEFAULT
# 339 "data/scripts/debug.pory"
	releaseall
	end


Debug_ShowExpansionVersion::
# 345 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 346 "data/scripts/debug.pory"
	msgbox Debug_ShowExpansionVersion_Text_0, MSGBOX_DEFAULT
# 347 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Not_Enabled::
# 353 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Not_Enabled_Text_0, MSGBOX_DEFAULT
# 354 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Event_Script::
# 360 "data/scripts/debug.pory"
	lock
# 361 "data/scripts/debug.pory"
	facefollowernpc
# 362 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Event_Script_Text_0, MSGBOX_DEFAULT
# 363 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Steven_Multi::
# 369 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 370 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_WallyTutorial::
# 376 "data/scripts/debug.pory"
	special SavePlayerParty
# 377 "data/scripts/debug.pory"
	special LoadWallyZigzagoon
# 378 "data/scripts/debug.pory"
	special StartWallyTutorialBattle
# 379 "data/scripts/debug.pory"
	waitstate
# 380 "data/scripts/debug.pory"
	special LoadPlayerParty
# 381 "data/scripts/debug.pory"
	release
	end


Debug_BerryPestsDisabled::
# 387 "data/scripts/debug.pory"
	msgbox Debug_BerryPestsDisabled_Text_0, MSGBOX_DEFAULT
# 388 "data/scripts/debug.pory"
	release
	end


Debug_BerryWeedsDisabled::
# 394 "data/scripts/debug.pory"
	msgbox Debug_BerryWeedsDisabled_Text_0, MSGBOX_DEFAULT
# 395 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_InflictStatus1::
# 403 "data/scripts/debug.pory"
	lockall
# 404 "data/scripts/debug.pory"
	getpartysize
# 405 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 406 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_0, 0
# 407 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_1, 1
# 408 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_2, 2
# 409 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
# 410 "data/scripts/debug.pory"
	switch VAR_RESULT
# 412 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_2
# 413 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_3
# 414 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_4
	return

Debug_EventScript_InflictStatus1_2:
# 412 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single
	return

Debug_EventScript_InflictStatus1_3:
# 413 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party
	return

Debug_EventScript_InflictStatus1_4:
# 414 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
# 415 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	return


Debug_EventScript_InflictStatus1_Close::
# 421 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single::
# 427 "data/scripts/debug.pory"
	special ChoosePartyMon
# 428 "data/scripts/debug.pory"
	waitstate
# 429 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 430 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 431 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 432 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 433 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 434 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 435 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 436 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 437 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 438 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 439 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 440 "data/scripts/debug.pory"
	switch VAR_RESULT
# 442 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_3
# 443 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_4
# 444 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_5
# 445 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_6
# 446 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_7
# 447 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_8
# 448 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Single_9
# 449 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Single_10
Debug_EventScript_InflictStatus1_Single_1:
# 451 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_3:
# 442 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Poison
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_4:
# 443 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Paralysis
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_5:
# 444 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Sleep
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_6:
# 445 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Burn
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_7:
# 446 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Freeze
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_8:
# 447 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Frostbite
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_9:
# 448 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_10:
# 449 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1


Debug_EventScript_KoPokemon::
# 457 "data/scripts/debug.pory"
	special ChoosePartyMon
# 458 "data/scripts/debug.pory"
	waitstate
# 459 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 460 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 461 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 462 "data/scripts/debug.pory"
	setko VAR_0x8004
# 463 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetHiddenNature::
# 469 "data/scripts/debug.pory"
	special ChoosePartyMon
# 470 "data/scripts/debug.pory"
	waitstate
# 471 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 472 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 473 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 474 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_0, 0
# 475 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_1, 1
# 476 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_2, 2
# 477 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_3, 3
# 478 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_4, 4
# 479 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_5, 5
# 480 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_6, 6
# 481 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_7, 7
# 482 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_8, 8
# 483 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_9, 9
# 484 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_10, 10
# 485 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_11, 11
# 486 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_12, 12
# 487 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_13, 13
# 488 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_14, 14
# 489 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_15, 15
# 490 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_16, 16
# 491 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_17, 17
# 492 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_18, 18
# 493 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_19, 19
# 494 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_20, 20
# 495 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_21, 21
# 496 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_22, 22
# 497 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_23, 23
# 498 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_24, 24
# 499 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 501 "data/scripts/debug.pory"
	switch VAR_RESULT
# 503 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetHiddenNature_3
Debug_EventScript_SetHiddenNature_1:
# 505 "data/scripts/debug.pory"
	special SetHiddenNature
# 506 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_SetHiddenNature_3:
# 503 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_SetHiddenNature_1


Debug_EventScript_SetAbility::
# 512 "data/scripts/debug.pory"
	special ChoosePartyMon
# 513 "data/scripts/debug.pory"
	waitstate
# 514 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 515 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 516 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 517 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 518 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 519 "data/scripts/debug.pory"
	switch VAR_RESULT
# 521 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbility_3
Debug_EventScript_SetAbility_1:
# 523 "data/scripts/debug.pory"
	special SetAbility
# 524 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	return

Debug_EventScript_SetAbility_3:
# 521 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	goto Debug_EventScript_SetAbility_1


Debug_EventScript_SetAbilityClose::
# 529 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetFriendship::
# 535 "data/scripts/debug.pory"
	special ChoosePartyMon
# 536 "data/scripts/debug.pory"
	waitstate
# 537 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 538 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_GivePokerus::
# 544 "data/scripts/debug.pory"
	special ChoosePartyMon
# 545 "data/scripts/debug.pory"
	waitstate
# 546 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetPokerus
# 547 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Poison::
# 553 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 554 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Paralysis::
# 560 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 561 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Sleep::
# 567 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 568 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Burn::
# 574 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 575 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Freeze::
# 581 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 582 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Frostbite::
# 588 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 589 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party::
# 595 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 596 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 597 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 598 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 599 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 600 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 601 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 602 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 603 "data/scripts/debug.pory"
	switch VAR_RESULT
# 605 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_3
# 606 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_4
# 607 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_5
# 608 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_6
# 609 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_7
# 610 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_8
# 611 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Party_9
# 612 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Party_10
Debug_EventScript_InflictStatus1_Party_1:
# 614 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_3:
# 605 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Poison
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_4:
# 606 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Paralysis
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_5:
# 607 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Sleep
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_6:
# 608 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Burn
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_7:
# 609 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Freeze
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_8:
# 610 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Frostbite
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_9:
# 611 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_10:
# 612 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1


Debug_EventScript_InflictStatus1_Party_Poison::
# 620 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 621 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Paralysis::
# 627 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 628 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Sleep::
# 634 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 635 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Burn::
# 641 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 642 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Freeze::
# 648 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 649 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Frostbite::
# 655 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 656 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_EWRAMCounters::
# 702 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 703 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text_0, MSGBOX_DEFAULT
# 704 "data/scripts/debug.pory"
	release
	end


Debug_PrintFontTest::
# 710 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_0, MSGBOX_DEFAULT
# 711 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_1, MSGBOX_DEFAULT
# 712 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_2, MSGBOX_DEFAULT
# 713 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_3, MSGBOX_DEFAULT
# 714 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_4, MSGBOX_DEFAULT
# 715 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_5, MSGBOX_DEFAULT
# 716 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_6, MSGBOX_DEFAULT
# 717 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_7, MSGBOX_DEFAULT
# 718 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_8, MSGBOX_DEFAULT
# 719 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_FontTest::
# 725 "data/scripts/debug.pory"
	lockall
# 726 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
	return


Debug_EventScript_TellTheTime::
# 743 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 744 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 745 "data/scripts/debug.pory"
	waitmessage
# 746 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_PrintTimeOfDay::
# 752 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 753 "data/scripts/debug.pory"
	msgbox Debug_EventScript_PrintTimeOfDay_Text_0, MSGBOX_DEFAULT
# 754 "data/scripts/debug.pory"
	waitmessage
# 755 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_FakeRTCNotEnabled::
# 761 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 762 "data/scripts/debug.pory"
	waitmessage
# 763 "data/scripts/debug.pory"
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
# 171 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs:\n"
	.string "{STR_VAR_2}, SPEED EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckEVs_Text_1:
# 173 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs:\n"
	.string "{STR_VAR_2}, SPDEF EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_0:
# 191 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs:\n"
	.string "{STR_VAR_2}, SPEED IVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_1:
# 193 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs:\n"
	.string "{STR_VAR_2}, SPDEF IVs:\n"
	.string "{STR_VAR_3}$"

Debug_CheckSaveBlock_Text_0:
# 270 "data/scripts/debug.pory"
	.string "SaveBlock1 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_1:
# 272 "data/scripts/debug.pory"
	.string "SaveBlock2 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_2:
# 274 "data/scripts/debug.pory"
	.string "SaveBlock3 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_3:
# 276 "data/scripts/debug.pory"
	.string "{PKMN}Storage size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace_Text_0:
# 284 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_NoPokemon_Text_0:
# 310 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_CantForceHatch_Text_0:
# 317 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons_Text_0:
# 324 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"

DebugScript_OneDaycareMons_Text_0:
# 331 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"

DebugScript_DaycareMonsNotCompatible_Text_0:
# 338 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\n"
	.string "have babies together!$"

Debug_ShowExpansionVersion_Text_0:
# 346 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"

Debug_Follower_NPC_Not_Enabled_Text_0:
# 353 "data/scripts/debug.pory"
	.string "Feature unavailable.\n"
	.string "Set FNPC_ENABLE_NPC_FOLLOWERS to\l"
	.string "TRUE in 'include/config/follower_npc.h'.$"

Debug_Follower_NPC_Event_Script_Text_0:
# 362 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"

Debug_BerryPestsDisabled_Text_0:
# 387 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
	.string "Unable to force pests onto berry trees.$"

Debug_BerryWeedsDisabled_Text_0:
# 394 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
	.string "Unable to force weeds onto berry trees.$"

Debug_EventScript_InflictStatus1_Text_0:
# 406 "data/scripts/debug.pory"
	.string "Single$"

Debug_EventScript_InflictStatus1_Text_1:
# 407 "data/scripts/debug.pory"
	.string "Party-wide$"

Debug_EventScript_InflictStatus1_Text_2:
# 408 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_SetHiddenNature_Text_0:
# 474 "data/scripts/debug.pory"
	.string "Hardy$"

Debug_EventScript_SetHiddenNature_Text_1:
# 475 "data/scripts/debug.pory"
	.string "Lonely$"

Debug_EventScript_SetHiddenNature_Text_2:
# 476 "data/scripts/debug.pory"
	.string "Brave$"

Debug_EventScript_SetHiddenNature_Text_3:
# 477 "data/scripts/debug.pory"
	.string "Adamant$"

Debug_EventScript_SetHiddenNature_Text_4:
# 478 "data/scripts/debug.pory"
	.string "Naughty$"

Debug_EventScript_SetHiddenNature_Text_5:
# 479 "data/scripts/debug.pory"
	.string "Bold$"

Debug_EventScript_SetHiddenNature_Text_6:
# 480 "data/scripts/debug.pory"
	.string "Docile$"

Debug_EventScript_SetHiddenNature_Text_7:
# 481 "data/scripts/debug.pory"
	.string "Relaxed$"

Debug_EventScript_SetHiddenNature_Text_8:
# 482 "data/scripts/debug.pory"
	.string "Impish$"

Debug_EventScript_SetHiddenNature_Text_9:
# 483 "data/scripts/debug.pory"
	.string "Lax$"

Debug_EventScript_SetHiddenNature_Text_10:
# 484 "data/scripts/debug.pory"
	.string "Timid$"

Debug_EventScript_SetHiddenNature_Text_11:
# 485 "data/scripts/debug.pory"
	.string "Hasty$"

Debug_EventScript_SetHiddenNature_Text_12:
# 486 "data/scripts/debug.pory"
	.string "Serious$"

Debug_EventScript_SetHiddenNature_Text_13:
# 487 "data/scripts/debug.pory"
	.string "Jolly$"

Debug_EventScript_SetHiddenNature_Text_14:
# 488 "data/scripts/debug.pory"
	.string "Naive$"

Debug_EventScript_SetHiddenNature_Text_15:
# 489 "data/scripts/debug.pory"
	.string "Modest$"

Debug_EventScript_SetHiddenNature_Text_16:
# 490 "data/scripts/debug.pory"
	.string "Mild$"

Debug_EventScript_SetHiddenNature_Text_17:
# 491 "data/scripts/debug.pory"
	.string "Quiet$"

Debug_EventScript_SetHiddenNature_Text_18:
# 492 "data/scripts/debug.pory"
	.string "Bashful$"

Debug_EventScript_SetHiddenNature_Text_19:
# 493 "data/scripts/debug.pory"
	.string "Rash$"

Debug_EventScript_SetHiddenNature_Text_20:
# 494 "data/scripts/debug.pory"
	.string "Calm$"

Debug_EventScript_SetHiddenNature_Text_21:
# 495 "data/scripts/debug.pory"
	.string "Gentle$"

Debug_EventScript_SetHiddenNature_Text_22:
# 496 "data/scripts/debug.pory"
	.string "Sassy$"

Debug_EventScript_SetHiddenNature_Text_23:
# 497 "data/scripts/debug.pory"
	.string "Careful$"

Debug_EventScript_SetHiddenNature_Text_24:
# 498 "data/scripts/debug.pory"
	.string "Quirky$"

Debug_EventScript_EWRAMCounters_Text_0:
# 703 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
	.string "Fishing Chain: {STR_VAR_2}.$"

Debug_PrintFontTest_Text_0:
# 710 "data/scripts/debug.pory"
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
# 711 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel angel adept for the nuance loads\n"
	.string "of the arena cocoa and quaalude. Blind\n"
	.string "blind bodice for the submit oboe of the\l"
	.string "club snob and abbot. Clique clique coast\l"
	.string "for the pouch loco of the franc assoc\l"
	.string "and accede. Dunce dunce docile for the\l"
	.string "loudness mastodon of the loud statehood\l"
	.string "and huddle.$"

Debug_PrintFontTest_Text_2:
# 712 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Enact enact eosin for the quench coed\n"
	.string "of the pique canoe and bleep. Furlong\n"
	.string "furlong focal for the genuflect profound\l"
	.string "of the motif aloof and offers. Gnome\l"
	.string "gnome gondola for the impugn logos of\l"
	.string "the unplug analog and smuggle. Human\l"
	.string "human hoist for the buddhist alcohol of\l"
	.string "the riyadh caliph and bathhouse.$"

Debug_PrintFontTest_Text_3:
# 713 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Inlet inlet iodine for the quince\n"
	.string "champion of the ennui scampi and shiite.\n"
	.string "Justin justin jocose for the djibouti\l"
	.string "sojourn of the oranj raj and hajjis. Knoll\l"
	.string "knoll koala for the banknote lookout of\l"
	.string "the dybbuk outlook and trekked. Linden\l"
	.string "linden loads for the ulna monolog of the\l"
	.string "consul menthol and shallot.$"

Debug_PrintFontTest_Text_4:
# 714 "data/scripts/debug.pory"
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
# 715 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Quanta quanta qophs for the inquest\n"
	.string "sheqel of the cinq coq and suqqu. Rhone\n"
	.string "rhone roman for the burnt porous of the\l"
	.string "lemur clamor and carrot. Snout snout\l"
	.string "sodium for the ensnare bosom of the\l"
	.string "genus pathos and missing. Tundra tundra\l"
	.string "tocsin for the nutmeg isotope of the\l"
	.string "peasant ingot and ottoman.$"

Debug_PrintFontTest_Text_6:
# 716 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Uncle uncle udder for the dunes cloud\n"
	.string "of the hindu thou and continuum. Vulcan\n"
	.string "vulcan vocal for the alluvial ovoid of the\l"
	.string "yugoslav chekhov and revved. Whale whale\l"
	.string "woman for the meanwhile blowout of the\l"
	.string "forepaw meadow and glowworm. Xmas xmas\l"
	.string "xenon for the bauxite doxology of the\l"
	.string "tableaux equinox and exxon.$"

Debug_PrintFontTest_Text_7:
# 717 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Yunnan yunnan young for the dynamo\n"
	.string "coyote of the obloquy employ and sayyid.\n"
	.string "Zloty zloty zodiac for the gizmo ozone of\l"
	.string "the franz laissez and buzzing.$"

Debug_PrintFontTest_Text_8:
# 718 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}42 × 138 = 5796.\n"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer lynx\n"
	.string "at a café; voilà, they're “worth” ♂1/♀1 =\l"
	.string "¥1. That's 10 + 9 - 8 = 11 Nintendo GBA\l"
	.string "can connect to a Nintendo GameCube\l"
	.string "console! He claimed-though I don't\l"
	.string "believe him-to have done so in an\l"
	.string "eyes-shut state…?$"

Debug_EventScript_TellTheTime_Text_0:
# 744 "data/scripts/debug.pory"
	.string "Time and date:\n"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}$"

Debug_EventScript_PrintTimeOfDay_Text_0:
# 753 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 761 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\n"
	.string "enabled. Please enable it in include/\l"
	.string "config/overworld.h$"

Debug_EventScript_InflictStatus1_Text_Close::
# 660 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_InflictStatus1_Text_Poison::
# 665 "data/scripts/debug.pory"
	.string "Poison$"

Debug_EventScript_InflictStatus1_Text_Paralysis::
# 670 "data/scripts/debug.pory"
	.string "Paralysis$"

Debug_EventScript_InflictStatus1_Text_Sleep::
# 675 "data/scripts/debug.pory"
	.string "Sleep$"

Debug_EventScript_InflictStatus1_Text_Burn::
# 680 "data/scripts/debug.pory"
	.string "Burn$"

Debug_EventScript_InflictStatus1_Text_Freeze::
# 685 "data/scripts/debug.pory"
	.string "Freeze$"

Debug_EventScript_InflictStatus1_Text_Frostbite::
# 690 "data/scripts/debug.pory"
	.string "Frostbite$"

Debug_EventScript_InflictStatus1_Text_KO::
# 695 "data/scripts/debug.pory"
	.string "KO$"
