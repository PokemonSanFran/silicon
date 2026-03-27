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
	giveitem ITEM_MACH_BIKE, 1
	end


Debug_EventScript_Script_2::
	end


Debug_EventScript_Script_3::
	end


Debug_EventScript_Script_4::
	end


Debug_EventScript_Script_5::
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
# 255 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 256 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_0, MSGBOX_DEFAULT
# 257 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 258 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_1, MSGBOX_DEFAULT
# 259 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 260 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_2, MSGBOX_DEFAULT
# 261 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 262 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_3, MSGBOX_DEFAULT
# 263 "data/scripts/debug.pory"
	release
	end


Debug_CheckROMSpace::
# 269 "data/scripts/debug.pory"
	callnative CheckROMSize
# 270 "data/scripts/debug.pory"
	msgbox Debug_CheckROMSpace_Text_0, MSGBOX_DEFAULT
# 271 "data/scripts/debug.pory"
	release
	end


Debug_HatchAnEgg::
# 277 "data/scripts/debug.pory"
	lockall
# 278 "data/scripts/debug.pory"
	getpartysize
# 279 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 280 "data/scripts/debug.pory"
	special ChoosePartyMon
# 281 "data/scripts/debug.pory"
	waitstate
# 282 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 283 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 284 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 285 "data/scripts/debug.pory"
	special EggHatch
# 286 "data/scripts/debug.pory"
	waitstate
	return


Debug_HatchAnEgg_End::
# 290 "data/scripts/debug.pory"
	releaseall
	end


Debug_NoPokemon::
# 296 "data/scripts/debug.pory"
	msgbox Debug_NoPokemon_Text_0, MSGBOX_DEFAULT
# 297 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_HatchAnEgg_CantForceHatch::
# 303 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_CantForceHatch_Text_0, MSGBOX_DEFAULT
# 304 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_ZeroDaycareMons::
# 310 "data/scripts/debug.pory"
	msgbox DebugScript_ZeroDaycareMons_Text_0, MSGBOX_DEFAULT
# 311 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_OneDaycareMons::
# 317 "data/scripts/debug.pory"
	msgbox DebugScript_OneDaycareMons_Text_0, MSGBOX_DEFAULT
# 318 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_DaycareMonsNotCompatible::
# 324 "data/scripts/debug.pory"
	msgbox DebugScript_DaycareMonsNotCompatible_Text_0, MSGBOX_DEFAULT
# 325 "data/scripts/debug.pory"
	releaseall
	end


Debug_ShowExpansionVersion::
# 331 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 332 "data/scripts/debug.pory"
	msgbox Debug_ShowExpansionVersion_Text_0, MSGBOX_DEFAULT
# 333 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Not_Enabled::
# 339 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Not_Enabled_Text_0, MSGBOX_DEFAULT
# 340 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Event_Script::
# 346 "data/scripts/debug.pory"
	lock
# 347 "data/scripts/debug.pory"
	facefollowernpc
# 348 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Event_Script_Text_0, MSGBOX_DEFAULT
# 349 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Steven_Multi::
# 355 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 356 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_WallyTutorial::
# 362 "data/scripts/debug.pory"
	special SavePlayerParty
# 363 "data/scripts/debug.pory"
	special LoadWallyZigzagoon
# 364 "data/scripts/debug.pory"
	special StartWallyTutorialBattle
# 365 "data/scripts/debug.pory"
	waitstate
# 366 "data/scripts/debug.pory"
	special LoadPlayerParty
# 367 "data/scripts/debug.pory"
	release
	end


Debug_BerryPestsDisabled::
# 373 "data/scripts/debug.pory"
	msgbox Debug_BerryPestsDisabled_Text_0, MSGBOX_DEFAULT
# 374 "data/scripts/debug.pory"
	release
	end


Debug_BerryWeedsDisabled::
# 380 "data/scripts/debug.pory"
	msgbox Debug_BerryWeedsDisabled_Text_0, MSGBOX_DEFAULT
# 381 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_InflictStatus1::
# 389 "data/scripts/debug.pory"
	lockall
# 390 "data/scripts/debug.pory"
	getpartysize
# 391 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 392 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_0, 0
# 393 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_1, 1
# 394 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_2, 2
# 395 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
# 396 "data/scripts/debug.pory"
	switch VAR_RESULT
# 398 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_2
# 399 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_3
# 400 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_4
	return

Debug_EventScript_InflictStatus1_2:
# 398 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single
	return

Debug_EventScript_InflictStatus1_3:
# 399 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party
	return

Debug_EventScript_InflictStatus1_4:
# 400 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
# 401 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	return


Debug_EventScript_InflictStatus1_Close::
# 408 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single::
# 414 "data/scripts/debug.pory"
	special ChoosePartyMon
# 415 "data/scripts/debug.pory"
	waitstate
# 416 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 417 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 418 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 419 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 420 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 421 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 422 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 423 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 424 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 425 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 426 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 427 "data/scripts/debug.pory"
	switch VAR_RESULT
# 429 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_3
# 430 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_4
# 431 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_5
# 432 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_6
# 433 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_7
# 434 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_8
# 435 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Single_9
# 436 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Single_10
Debug_EventScript_InflictStatus1_Single_1:
# 438 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_3:
# 429 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Poison
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_4:
# 430 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Paralysis
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_5:
# 431 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Sleep
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_6:
# 432 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Burn
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_7:
# 433 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Freeze
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_8:
# 434 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Frostbite
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_9:
# 435 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_10:
# 436 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1


Debug_EventScript_KoPokemon::
# 444 "data/scripts/debug.pory"
	special ChoosePartyMon
# 445 "data/scripts/debug.pory"
	waitstate
# 446 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 447 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 448 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 449 "data/scripts/debug.pory"
	setko VAR_0x8004
# 450 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetHiddenNature::
# 456 "data/scripts/debug.pory"
	special ChoosePartyMon
# 457 "data/scripts/debug.pory"
	waitstate
# 458 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 459 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 460 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 461 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_0, 0
# 462 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_1, 1
# 463 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_2, 2
# 464 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_3, 3
# 465 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_4, 4
# 466 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_5, 5
# 467 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_6, 6
# 468 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_7, 7
# 469 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_8, 8
# 470 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_9, 9
# 471 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_10, 10
# 472 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_11, 11
# 473 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_12, 12
# 474 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_13, 13
# 475 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_14, 14
# 476 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_15, 15
# 477 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_16, 16
# 478 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_17, 17
# 479 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_18, 18
# 480 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_19, 19
# 481 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_20, 20
# 482 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_21, 21
# 483 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_22, 22
# 484 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_23, 23
# 485 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_24, 24
# 486 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 488 "data/scripts/debug.pory"
	switch VAR_RESULT
# 490 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetHiddenNature_3
Debug_EventScript_SetHiddenNature_1:
# 492 "data/scripts/debug.pory"
	special SetHiddenNature
# 493 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_SetHiddenNature_3:
# 490 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_SetHiddenNature_1


Debug_EventScript_SetAbility::
# 499 "data/scripts/debug.pory"
	special ChoosePartyMon
# 500 "data/scripts/debug.pory"
	waitstate
# 501 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 502 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 503 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 504 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 505 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 506 "data/scripts/debug.pory"
	switch VAR_RESULT
# 508 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbility_3
Debug_EventScript_SetAbility_1:
# 510 "data/scripts/debug.pory"
	special SetAbility
# 511 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	return

Debug_EventScript_SetAbility_3:
# 508 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	goto Debug_EventScript_SetAbility_1


Debug_EventScript_SetAbilityClose::
# 516 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetFriendship::
# 522 "data/scripts/debug.pory"
	special ChoosePartyMon
# 523 "data/scripts/debug.pory"
	waitstate
# 524 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 525 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_GivePokerus::
# 531 "data/scripts/debug.pory"
	special ChoosePartyMon
# 532 "data/scripts/debug.pory"
	waitstate
# 533 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetPokerus
# 534 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Poison::
# 540 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 541 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Paralysis::
# 547 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 548 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Sleep::
# 554 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 555 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Burn::
# 561 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 562 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Freeze::
# 568 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 569 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Frostbite::
# 575 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 576 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party::
# 582 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 583 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 584 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 585 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 586 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 587 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 588 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 589 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 590 "data/scripts/debug.pory"
	switch VAR_RESULT
# 592 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_3
# 593 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_4
# 594 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_5
# 595 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_6
# 596 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_7
# 597 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_8
# 598 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Party_9
# 599 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Party_10
Debug_EventScript_InflictStatus1_Party_1:
# 601 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_3:
# 592 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Poison
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_4:
# 593 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Paralysis
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_5:
# 594 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Sleep
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_6:
# 595 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Burn
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_7:
# 596 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Freeze
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_8:
# 597 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Frostbite
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_9:
# 598 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_10:
# 599 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1


Debug_EventScript_InflictStatus1_Party_Poison::
# 607 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 608 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Paralysis::
# 614 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 615 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Sleep::
# 621 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 622 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Burn::
# 628 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 629 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Freeze::
# 635 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 636 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Frostbite::
# 642 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 643 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_EWRAMCounters::
# 689 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 690 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text_0, MSGBOX_DEFAULT
# 691 "data/scripts/debug.pory"
	release
	end


Debug_PrintFontTest::
# 697 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_0, MSGBOX_DEFAULT
# 698 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_1, MSGBOX_DEFAULT
# 699 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_2, MSGBOX_DEFAULT
# 700 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_3, MSGBOX_DEFAULT
# 701 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_4, MSGBOX_DEFAULT
# 702 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_5, MSGBOX_DEFAULT
# 703 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_6, MSGBOX_DEFAULT
# 704 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_7, MSGBOX_DEFAULT
# 705 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_8, MSGBOX_DEFAULT
# 706 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_FontTest::
# 712 "data/scripts/debug.pory"
	lockall
# 713 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
	return


Debug_EventScript_TellTheTime::
# 730 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 731 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 732 "data/scripts/debug.pory"
	waitmessage
# 733 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_PrintTimeOfDay::
# 739 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 740 "data/scripts/debug.pory"
	msgbox Debug_EventScript_PrintTimeOfDay_Text_0, MSGBOX_DEFAULT
# 741 "data/scripts/debug.pory"
	waitmessage
# 742 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_FakeRTCNotEnabled::
# 748 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 749 "data/scripts/debug.pory"
	waitmessage
# 750 "data/scripts/debug.pory"
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
# 256 "data/scripts/debug.pory"
	.string "SaveBlock1 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_1:
# 258 "data/scripts/debug.pory"
	.string "SaveBlock2 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_2:
# 260 "data/scripts/debug.pory"
	.string "SaveBlock3 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_3:
# 262 "data/scripts/debug.pory"
	.string "{PKMN}Storage size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace_Text_0:
# 270 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_NoPokemon_Text_0:
# 296 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_CantForceHatch_Text_0:
# 303 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons_Text_0:
# 310 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"

DebugScript_OneDaycareMons_Text_0:
# 317 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"

DebugScript_DaycareMonsNotCompatible_Text_0:
# 324 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\n"
	.string "have babies together!$"

Debug_ShowExpansionVersion_Text_0:
# 332 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"

Debug_Follower_NPC_Not_Enabled_Text_0:
# 339 "data/scripts/debug.pory"
	.string "Feature unavailable.\n"
	.string "Set FNPC_ENABLE_NPC_FOLLOWERS to\l"
	.string "TRUE in 'include/config/follower_npc.h'.$"

Debug_Follower_NPC_Event_Script_Text_0:
# 348 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"

Debug_BerryPestsDisabled_Text_0:
# 373 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
	.string "Unable to force pests onto berry trees.$"

Debug_BerryWeedsDisabled_Text_0:
# 380 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
	.string "Unable to force weeds onto berry trees.$"

Debug_EventScript_InflictStatus1_Text_0:
# 392 "data/scripts/debug.pory"
	.string "Single$"

Debug_EventScript_InflictStatus1_Text_1:
# 393 "data/scripts/debug.pory"
	.string "Party-wide$"

Debug_EventScript_InflictStatus1_Text_2:
# 394 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_SetHiddenNature_Text_0:
# 461 "data/scripts/debug.pory"
	.string "Hardy$"

Debug_EventScript_SetHiddenNature_Text_1:
# 462 "data/scripts/debug.pory"
	.string "Lonely$"

Debug_EventScript_SetHiddenNature_Text_2:
# 463 "data/scripts/debug.pory"
	.string "Brave$"

Debug_EventScript_SetHiddenNature_Text_3:
# 464 "data/scripts/debug.pory"
	.string "Adamant$"

Debug_EventScript_SetHiddenNature_Text_4:
# 465 "data/scripts/debug.pory"
	.string "Naughty$"

Debug_EventScript_SetHiddenNature_Text_5:
# 466 "data/scripts/debug.pory"
	.string "Bold$"

Debug_EventScript_SetHiddenNature_Text_6:
# 467 "data/scripts/debug.pory"
	.string "Docile$"

Debug_EventScript_SetHiddenNature_Text_7:
# 468 "data/scripts/debug.pory"
	.string "Relaxed$"

Debug_EventScript_SetHiddenNature_Text_8:
# 469 "data/scripts/debug.pory"
	.string "Impish$"

Debug_EventScript_SetHiddenNature_Text_9:
# 470 "data/scripts/debug.pory"
	.string "Lax$"

Debug_EventScript_SetHiddenNature_Text_10:
# 471 "data/scripts/debug.pory"
	.string "Timid$"

Debug_EventScript_SetHiddenNature_Text_11:
# 472 "data/scripts/debug.pory"
	.string "Hasty$"

Debug_EventScript_SetHiddenNature_Text_12:
# 473 "data/scripts/debug.pory"
	.string "Serious$"

Debug_EventScript_SetHiddenNature_Text_13:
# 474 "data/scripts/debug.pory"
	.string "Jolly$"

Debug_EventScript_SetHiddenNature_Text_14:
# 475 "data/scripts/debug.pory"
	.string "Naive$"

Debug_EventScript_SetHiddenNature_Text_15:
# 476 "data/scripts/debug.pory"
	.string "Modest$"

Debug_EventScript_SetHiddenNature_Text_16:
# 477 "data/scripts/debug.pory"
	.string "Mild$"

Debug_EventScript_SetHiddenNature_Text_17:
# 478 "data/scripts/debug.pory"
	.string "Quiet$"

Debug_EventScript_SetHiddenNature_Text_18:
# 479 "data/scripts/debug.pory"
	.string "Bashful$"

Debug_EventScript_SetHiddenNature_Text_19:
# 480 "data/scripts/debug.pory"
	.string "Rash$"

Debug_EventScript_SetHiddenNature_Text_20:
# 481 "data/scripts/debug.pory"
	.string "Calm$"

Debug_EventScript_SetHiddenNature_Text_21:
# 482 "data/scripts/debug.pory"
	.string "Gentle$"

Debug_EventScript_SetHiddenNature_Text_22:
# 483 "data/scripts/debug.pory"
	.string "Sassy$"

Debug_EventScript_SetHiddenNature_Text_23:
# 484 "data/scripts/debug.pory"
	.string "Careful$"

Debug_EventScript_SetHiddenNature_Text_24:
# 485 "data/scripts/debug.pory"
	.string "Quirky$"

Debug_EventScript_EWRAMCounters_Text_0:
# 690 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
	.string "Fishing Chain: {STR_VAR_2}.$"

Debug_PrintFontTest_Text_0:
# 697 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel Adept Blind Bodice Clique\n"
	.string "Coast Dunce Docile Enact Eosin Furlong\n"
	.string "Focal Gnome Gondola Human Hoist Inlet\l"
	.string "Iodine Justin Jocose Knoll Koala Linden\l"
	.string "Loads Milliner Modal Number Nodule\l"
	.string "Onset Oddball Pneumo Poncho Quanta\l"
	.string "Qophs Rhone Roman Snout Sodium Tundra\l"
	.string "Tocsin Uncle Udder Vulcan Vocal Whale\l"
	.string "Woman Xmas Xenon Yunnan Young Zloty\l"
	.string "Zodiac.$"

Debug_PrintFontTest_Text_1:
# 698 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel angel adept for the nuance loads\n"
	.string "of the arena cocoa and quaalude. Blind\n"
	.string "blind bodice for the submit oboe of the\l"
	.string "club snob and abbot. Clique clique\l"
	.string "coast for the pouch loco of the franc\l"
	.string "assoc and accede. Dunce dunce docile\l"
	.string "for the loudness mastodon of the loud\l"
	.string "statehood and huddle.$"

Debug_PrintFontTest_Text_2:
# 699 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Enact enact eosin for the quench coed\n"
	.string "of the pique canoe and bleep. Furlong\n"
	.string "furlong focal for the genuflect\l"
	.string "profound of the motif aloof and offers.\l"
	.string "Gnome gnome gondola for the impugn\l"
	.string "logos of the unplug analog and smuggle.\l"
	.string "Human human hoist for the buddhist\l"
	.string "alcohol of the riyadh caliph and\l"
	.string "bathhouse.$"

Debug_PrintFontTest_Text_3:
# 700 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Inlet inlet iodine for the quince\n"
	.string "champion of the ennui scampi and\n"
	.string "shiite. Justin justin jocose for the\l"
	.string "djibouti sojourn of the oranj raj and\l"
	.string "hajjis. Knoll knoll koala for the\l"
	.string "banknote lookout of the dybbuk\l"
	.string "outlook and trekked. Linden linden\l"
	.string "loads for the ulna monolog of the\l"
	.string "consul menthol and shallot.$"

Debug_PrintFontTest_Text_4:
# 701 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Milliner milliner modal for the alumna\n"
	.string "solomon of the album custom and\n"
	.string "summon. Number number nodule for the\l"
	.string "unmade economic of the shotgun bison\l"
	.string "and tunnel. Onset onset oddball for the\l"
	.string "abandon podium of the antiquo tempo\l"
	.string "and moonlit. Pneumo pneumo poncho for\l"
	.string "the dauphin opossum of the holdup\l"
	.string "bishop and supplies.$"

Debug_PrintFontTest_Text_5:
# 702 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Quanta quanta qophs for the inquest\n"
	.string "sheqel of the cinq coq and suqqu. Rhone\n"
	.string "rhone roman for the burnt porous of the\l"
	.string "lemur clamor and carrot. Snout snout\l"
	.string "sodium for the ensnare bosom of the\l"
	.string "genus pathos and missing. Tundra\l"
	.string "tundra tocsin for the nutmeg isotope\l"
	.string "of the peasant ingot and ottoman.$"

Debug_PrintFontTest_Text_6:
# 703 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Uncle uncle udder for the dunes cloud\n"
	.string "of the hindu thou and continuum. Vulcan\n"
	.string "vulcan vocal for the alluvial ovoid of\l"
	.string "the yugoslav chekhov and revved. Whale\l"
	.string "whale woman for the meanwhile blowout\l"
	.string "of the forepaw meadow and glowworm.\l"
	.string "Xmas xmas xenon for the bauxite\l"
	.string "doxology of the tableaux equinox and\l"
	.string "exxon.$"

Debug_PrintFontTest_Text_7:
# 704 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Yunnan yunnan young for the dynamo\n"
	.string "coyote of the obloquy employ and\n"
	.string "sayyid. Zloty zloty zodiac for the gizmo\l"
	.string "ozone of the franz laissez and buzzing.$"

Debug_PrintFontTest_Text_8:
# 705 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}42 × 138 = 5796.\n"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer\n"
	.string "lynx at a café; voilà, they're “worth”\l"
	.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
	.string "Nintendo GBA can connect to a Nintendo\l"
	.string "GameCube console! He claimed-though I\l"
	.string "don't believe him-to have done so in an\l"
	.string "eyes-shut state…?$"

Debug_EventScript_TellTheTime_Text_0:
# 731 "data/scripts/debug.pory"
	.string "Time and date:\n"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}$"

Debug_EventScript_PrintTimeOfDay_Text_0:
# 740 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 748 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\n"
	.string "enabled. Please enable it in include/\l"
	.string "config/overworld.h$"

Debug_EventScript_InflictStatus1_Text_Close::
# 647 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_InflictStatus1_Text_Poison::
# 652 "data/scripts/debug.pory"
	.string "Poison$"

Debug_EventScript_InflictStatus1_Text_Paralysis::
# 657 "data/scripts/debug.pory"
	.string "Paralysis$"

Debug_EventScript_InflictStatus1_Text_Sleep::
# 662 "data/scripts/debug.pory"
	.string "Sleep$"

Debug_EventScript_InflictStatus1_Text_Burn::
# 667 "data/scripts/debug.pory"
	.string "Burn$"

Debug_EventScript_InflictStatus1_Text_Freeze::
# 672 "data/scripts/debug.pory"
	.string "Freeze$"

Debug_EventScript_InflictStatus1_Text_Frostbite::
# 677 "data/scripts/debug.pory"
	.string "Frostbite$"

Debug_EventScript_InflictStatus1_Text_KO::
# 682 "data/scripts/debug.pory"
	.string "KO$"
