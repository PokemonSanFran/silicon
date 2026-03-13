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


Debug_VarsNotSetBattleConfigMessage::
# 81 "data/scripts/debug.pory"
	message Debug_VarsNotSetBattleConfigMessage_Text_0
# 82 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_FlagsNotSetOverworldConfigMessage::
# 87 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text_0
# 88 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_FlagsNotSetBattleConfigMessage::
# 93 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text_0
# 94 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_BoxFilledMessage::
# 99 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text_0
# 100 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_EventScript_CheckEVs::
# 105 "data/scripts/debug.pory"
	lockall
# 106 "data/scripts/debug.pory"
	getpartysize
# 107 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 108 "data/scripts/debug.pory"
	special ChoosePartyMon
# 109 "data/scripts/debug.pory"
	waitstate
# 110 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 111 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 112 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_0, MSGBOX_DEFAULT
# 113 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 114 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_1, MSGBOX_DEFAULT
# 115 "data/scripts/debug.pory"
	goto Debug_EventScript_CheckEVs_End
	return


Debug_EventScript_CheckEVs_End::
# 120 "data/scripts/debug.pory"
	releaseall
	return


Debug_EventScript_CheckIVs::
# 125 "data/scripts/debug.pory"
	lockall
# 126 "data/scripts/debug.pory"
	getpartysize
# 127 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 128 "data/scripts/debug.pory"
	special ChoosePartyMon
# 129 "data/scripts/debug.pory"
	waitstate
# 130 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 131 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 132 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_0, MSGBOX_DEFAULT
# 133 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 134 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_1, MSGBOX_DEFAULT
	return


Debug_EventScript_CheckIVs_End::
# 139 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Script_1::
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
# 195 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 196 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_0, MSGBOX_DEFAULT
# 197 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 198 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_1, MSGBOX_DEFAULT
# 199 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 200 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_2, MSGBOX_DEFAULT
# 201 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 202 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_3, MSGBOX_DEFAULT
# 203 "data/scripts/debug.pory"
	release
	end


Debug_CheckROMSpace::
# 209 "data/scripts/debug.pory"
	callnative CheckROMSize
# 210 "data/scripts/debug.pory"
	msgbox Debug_CheckROMSpace_Text_0, MSGBOX_DEFAULT
# 211 "data/scripts/debug.pory"
	release
	end


Debug_HatchAnEgg::
# 217 "data/scripts/debug.pory"
	lockall
# 218 "data/scripts/debug.pory"
	getpartysize
# 219 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 220 "data/scripts/debug.pory"
	special ChoosePartyMon
# 221 "data/scripts/debug.pory"
	waitstate
# 222 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 223 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 224 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 225 "data/scripts/debug.pory"
	special EggHatch
# 226 "data/scripts/debug.pory"
	waitstate
	return


Debug_HatchAnEgg_End::
# 230 "data/scripts/debug.pory"
	releaseall
	end


Debug_NoPokemon::
# 236 "data/scripts/debug.pory"
	msgbox Debug_NoPokemon_Text_0, MSGBOX_DEFAULT
# 237 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_HatchAnEgg_CantForceHatch::
# 243 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_CantForceHatch_Text_0, MSGBOX_DEFAULT
# 244 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_ZeroDaycareMons::
# 250 "data/scripts/debug.pory"
	msgbox DebugScript_ZeroDaycareMons_Text_0, MSGBOX_DEFAULT
# 251 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_OneDaycareMons::
# 257 "data/scripts/debug.pory"
	msgbox DebugScript_OneDaycareMons_Text_0, MSGBOX_DEFAULT
# 258 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_DaycareMonsNotCompatible::
# 264 "data/scripts/debug.pory"
	msgbox DebugScript_DaycareMonsNotCompatible_Text_0, MSGBOX_DEFAULT
# 265 "data/scripts/debug.pory"
	releaseall
	end


Debug_ShowExpansionVersion::
# 271 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 272 "data/scripts/debug.pory"
	msgbox Debug_ShowExpansionVersion_Text_0, MSGBOX_DEFAULT
# 273 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Not_Enabled::
# 279 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Not_Enabled_Text_0, MSGBOX_DEFAULT
# 280 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Event_Script::
# 286 "data/scripts/debug.pory"
	lock
# 287 "data/scripts/debug.pory"
	facefollowernpc
# 288 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Event_Script_Text_0, MSGBOX_DEFAULT
# 289 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Steven_Multi::
# 295 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 296 "data/scripts/debug.pory"
	release
	end


Debug_BerryPestsDisabled::
# 302 "data/scripts/debug.pory"
	msgbox Debug_BerryPestsDisabled_Text_0, MSGBOX_DEFAULT
# 303 "data/scripts/debug.pory"
	release
	end


Debug_BerryWeedsDisabled::
# 309 "data/scripts/debug.pory"
	msgbox Debug_BerryWeedsDisabled_Text_0, MSGBOX_DEFAULT
# 310 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_InflictStatus1::
# 318 "data/scripts/debug.pory"
	lockall
# 319 "data/scripts/debug.pory"
	getpartysize
# 320 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 321 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_0, 0
# 322 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_1, 1
# 323 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_2, 2
# 324 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
# 325 "data/scripts/debug.pory"
	switch VAR_RESULT
# 327 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_2
# 328 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_3
# 329 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_4
	return

Debug_EventScript_InflictStatus1_2:
# 327 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single
	return

Debug_EventScript_InflictStatus1_3:
# 328 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party
	return

Debug_EventScript_InflictStatus1_4:
# 329 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
# 330 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	return


Debug_EventScript_InflictStatus1_Close::
# 336 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single::
# 342 "data/scripts/debug.pory"
	special ChoosePartyMon
# 343 "data/scripts/debug.pory"
	waitstate
# 344 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 345 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 346 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 347 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 348 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 349 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 350 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 351 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 352 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 353 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 354 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 355 "data/scripts/debug.pory"
	switch VAR_RESULT
# 357 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_3
# 358 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_4
# 359 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_5
# 360 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_6
# 361 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_7
# 362 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_8
# 363 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Single_9
# 364 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Single_10
Debug_EventScript_InflictStatus1_Single_1:
# 366 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_3:
# 357 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Poison
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_4:
# 358 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Paralysis
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_5:
# 359 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Sleep
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_6:
# 360 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Burn
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_7:
# 361 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Freeze
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_8:
# 362 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Frostbite
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_9:
# 363 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_10:
# 364 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1


Debug_EventScript_SetHiddenNature::
# 372 "data/scripts/debug.pory"
	special ChoosePartyMon
# 373 "data/scripts/debug.pory"
	waitstate
# 374 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 375 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 376 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 377 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_0, 0
# 378 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_1, 1
# 379 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_2, 2
# 380 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_3, 3
# 381 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_4, 4
# 382 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_5, 5
# 383 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_6, 6
# 384 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_7, 7
# 385 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_8, 8
# 386 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_9, 9
# 387 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_10, 10
# 388 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_11, 11
# 389 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_12, 12
# 390 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_13, 13
# 391 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_14, 14
# 392 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_15, 15
# 393 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_16, 16
# 394 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_17, 17
# 395 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_18, 18
# 396 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_19, 19
# 397 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_20, 20
# 398 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_21, 21
# 399 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_22, 22
# 400 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_23, 23
# 401 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_24, 24
# 402 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 404 "data/scripts/debug.pory"
	switch VAR_RESULT
# 406 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetHiddenNature_3
Debug_EventScript_SetHiddenNature_1:
# 408 "data/scripts/debug.pory"
	special SetHiddenNature
# 409 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_SetHiddenNature_3:
# 406 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_SetHiddenNature_1


Debug_EventScript_SetAbility::
# 415 "data/scripts/debug.pory"
	special ChoosePartyMon
# 416 "data/scripts/debug.pory"
	waitstate
# 417 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 418 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 419 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 420 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 421 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 422 "data/scripts/debug.pory"
	switch VAR_RESULT
# 424 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbility_3
Debug_EventScript_SetAbility_1:
# 426 "data/scripts/debug.pory"
	special SetAbility
# 427 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	return

Debug_EventScript_SetAbility_3:
# 424 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	goto Debug_EventScript_SetAbility_1


Debug_EventScript_SetAbilityClose::
# 432 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetFriendship::
# 438 "data/scripts/debug.pory"
	special ChoosePartyMon
# 439 "data/scripts/debug.pory"
	waitstate
# 440 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 441 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Poison::
# 447 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 448 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Paralysis::
# 454 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 455 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Sleep::
# 461 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 462 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Burn::
# 468 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 469 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Freeze::
# 475 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 476 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Frostbite::
# 482 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 483 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party::
# 489 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 490 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 491 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 492 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 493 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 494 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 495 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 496 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 497 "data/scripts/debug.pory"
	switch VAR_RESULT
# 499 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_3
# 500 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_4
# 501 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_5
# 502 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_6
# 503 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_7
# 504 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_8
# 505 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Party_9
# 506 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Party_10
Debug_EventScript_InflictStatus1_Party_1:
# 508 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_3:
# 499 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Poison
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_4:
# 500 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Paralysis
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_5:
# 501 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Sleep
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_6:
# 502 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Burn
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_7:
# 503 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Freeze
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_8:
# 504 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Frostbite
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_9:
# 505 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_10:
# 506 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1


Debug_EventScript_InflictStatus1_Party_Poison::
# 514 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 515 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Paralysis::
# 521 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 522 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Sleep::
# 528 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 529 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Burn::
# 535 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 536 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Freeze::
# 542 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 543 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Frostbite::
# 549 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 550 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_EWRAMCounters::
# 591 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 592 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text_0, MSGBOX_DEFAULT
# 593 "data/scripts/debug.pory"
	release
	end


Debug_PrintFontTest::
# 599 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_0, MSGBOX_DEFAULT
# 600 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_1, MSGBOX_DEFAULT
# 601 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_2, MSGBOX_DEFAULT
# 602 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_3, MSGBOX_DEFAULT
# 603 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_4, MSGBOX_DEFAULT
# 604 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_5, MSGBOX_DEFAULT
# 605 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_6, MSGBOX_DEFAULT
# 606 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_7, MSGBOX_DEFAULT
# 607 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_8, MSGBOX_DEFAULT
# 608 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_FontTest::
# 614 "data/scripts/debug.pory"
	lockall
# 615 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
	return


Debug_EventScript_TellTheTime::
# 632 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 633 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 634 "data/scripts/debug.pory"
	waitmessage
# 635 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_PrintTimeOfDay::
# 641 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 642 "data/scripts/debug.pory"
	msgbox Debug_EventScript_PrintTimeOfDay_Text_0, MSGBOX_DEFAULT
# 643 "data/scripts/debug.pory"
	waitmessage
# 644 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_FakeRTCNotEnabled::
# 650 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 651 "data/scripts/debug.pory"
	waitmessage
# 652 "data/scripts/debug.pory"
	closemessage
	return


Debug_VarsNotSetBattleConfigMessage_Text_0:
# 81 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable var in:\l"
	.string "'include/config/battle.h'!$"

Debug_FlagsNotSetOverworldConfigMessage_Text_0:
# 87 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/overworld.h'!$"

Debug_FlagsNotSetBattleConfigMessage_Text_0:
# 93 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/battle.h'!$"

Debug_BoxFilledMessage_Text_0:
# 99 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"

Debug_EventScript_CheckEVs_Text_0:
# 112 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs:\n"
	.string "{STR_VAR_2}, SPEED EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckEVs_Text_1:
# 114 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs:\n"
	.string "{STR_VAR_2}, SPDEF EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_0:
# 132 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs:\n"
	.string "{STR_VAR_2}, SPEED IVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_1:
# 134 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs:\n"
	.string "{STR_VAR_2}, SPDEF IVs:\n"
	.string "{STR_VAR_3}$"

Debug_CheckSaveBlock_Text_0:
# 196 "data/scripts/debug.pory"
	.string "SaveBlock1 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_1:
# 198 "data/scripts/debug.pory"
	.string "SaveBlock2 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_2:
# 200 "data/scripts/debug.pory"
	.string "SaveBlock3 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_3:
# 202 "data/scripts/debug.pory"
	.string "{PKMN}Storage size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace_Text_0:
# 210 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_NoPokemon_Text_0:
# 236 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_CantForceHatch_Text_0:
# 243 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons_Text_0:
# 250 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"

DebugScript_OneDaycareMons_Text_0:
# 257 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"

DebugScript_DaycareMonsNotCompatible_Text_0:
# 264 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\n"
	.string "have babies together!$"

Debug_ShowExpansionVersion_Text_0:
# 272 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"

Debug_Follower_NPC_Not_Enabled_Text_0:
# 279 "data/scripts/debug.pory"
	.string "Feature unavailable.\n"
	.string "Set FNPC_ENABLE_NPC_FOLLOWERS to\l"
	.string "TRUE in 'include/config/follower_npc.h'.$"

Debug_Follower_NPC_Event_Script_Text_0:
# 288 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"

Debug_BerryPestsDisabled_Text_0:
# 302 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
	.string "Unable to force pests onto berry trees.$"

Debug_BerryWeedsDisabled_Text_0:
# 309 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
	.string "Unable to force weeds onto berry trees.$"

Debug_EventScript_InflictStatus1_Text_0:
# 321 "data/scripts/debug.pory"
	.string "Single$"

Debug_EventScript_InflictStatus1_Text_1:
# 322 "data/scripts/debug.pory"
	.string "Party-wide$"

Debug_EventScript_InflictStatus1_Text_2:
# 323 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_SetHiddenNature_Text_0:
# 377 "data/scripts/debug.pory"
	.string "Hardy$"

Debug_EventScript_SetHiddenNature_Text_1:
# 378 "data/scripts/debug.pory"
	.string "Lonely$"

Debug_EventScript_SetHiddenNature_Text_2:
# 379 "data/scripts/debug.pory"
	.string "Brave$"

Debug_EventScript_SetHiddenNature_Text_3:
# 380 "data/scripts/debug.pory"
	.string "Adamant$"

Debug_EventScript_SetHiddenNature_Text_4:
# 381 "data/scripts/debug.pory"
	.string "Naughty$"

Debug_EventScript_SetHiddenNature_Text_5:
# 382 "data/scripts/debug.pory"
	.string "Bold$"

Debug_EventScript_SetHiddenNature_Text_6:
# 383 "data/scripts/debug.pory"
	.string "Docile$"

Debug_EventScript_SetHiddenNature_Text_7:
# 384 "data/scripts/debug.pory"
	.string "Relaxed$"

Debug_EventScript_SetHiddenNature_Text_8:
# 385 "data/scripts/debug.pory"
	.string "Impish$"

Debug_EventScript_SetHiddenNature_Text_9:
# 386 "data/scripts/debug.pory"
	.string "Lax$"

Debug_EventScript_SetHiddenNature_Text_10:
# 387 "data/scripts/debug.pory"
	.string "Timid$"

Debug_EventScript_SetHiddenNature_Text_11:
# 388 "data/scripts/debug.pory"
	.string "Hasty$"

Debug_EventScript_SetHiddenNature_Text_12:
# 389 "data/scripts/debug.pory"
	.string "Serious$"

Debug_EventScript_SetHiddenNature_Text_13:
# 390 "data/scripts/debug.pory"
	.string "Jolly$"

Debug_EventScript_SetHiddenNature_Text_14:
# 391 "data/scripts/debug.pory"
	.string "Naive$"

Debug_EventScript_SetHiddenNature_Text_15:
# 392 "data/scripts/debug.pory"
	.string "Modest$"

Debug_EventScript_SetHiddenNature_Text_16:
# 393 "data/scripts/debug.pory"
	.string "Mild$"

Debug_EventScript_SetHiddenNature_Text_17:
# 394 "data/scripts/debug.pory"
	.string "Quiet$"

Debug_EventScript_SetHiddenNature_Text_18:
# 395 "data/scripts/debug.pory"
	.string "Bashful$"

Debug_EventScript_SetHiddenNature_Text_19:
# 396 "data/scripts/debug.pory"
	.string "Rash$"

Debug_EventScript_SetHiddenNature_Text_20:
# 397 "data/scripts/debug.pory"
	.string "Calm$"

Debug_EventScript_SetHiddenNature_Text_21:
# 398 "data/scripts/debug.pory"
	.string "Gentle$"

Debug_EventScript_SetHiddenNature_Text_22:
# 399 "data/scripts/debug.pory"
	.string "Sassy$"

Debug_EventScript_SetHiddenNature_Text_23:
# 400 "data/scripts/debug.pory"
	.string "Careful$"

Debug_EventScript_SetHiddenNature_Text_24:
# 401 "data/scripts/debug.pory"
	.string "Quirky$"

Debug_EventScript_EWRAMCounters_Text_0:
# 592 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
	.string "Fishing Chain: {STR_VAR_2}.$"

Debug_PrintFontTest_Text_0:
# 599 "data/scripts/debug.pory"
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
# 600 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel angel adept for the nuance loads\n"
	.string "of the arena cocoa and quaalude. Blind\n"
	.string "blind bodice for the submit oboe of the\l"
	.string "club snob and abbot. Clique clique\l"
	.string "coast for the pouch loco of the franc\l"
	.string "assoc and accede. Dunce dunce docile\l"
	.string "for the loudness mastodon of the loud\l"
	.string "statehood and huddle.$"

Debug_PrintFontTest_Text_2:
# 601 "data/scripts/debug.pory"
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
# 602 "data/scripts/debug.pory"
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
# 603 "data/scripts/debug.pory"
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
# 604 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Quanta quanta qophs for the inquest\n"
	.string "sheqel of the cinq coq and suqqu. Rhone\n"
	.string "rhone roman for the burnt porous of the\l"
	.string "lemur clamor and carrot. Snout snout\l"
	.string "sodium for the ensnare bosom of the\l"
	.string "genus pathos and missing. Tundra\l"
	.string "tundra tocsin for the nutmeg isotope\l"
	.string "of the peasant ingot and ottoman.$"

Debug_PrintFontTest_Text_6:
# 605 "data/scripts/debug.pory"
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
# 606 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Yunnan yunnan young for the dynamo\n"
	.string "coyote of the obloquy employ and\n"
	.string "sayyid. Zloty zloty zodiac for the gizmo\l"
	.string "ozone of the franz laissez and buzzing.$"

Debug_PrintFontTest_Text_8:
# 607 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}42 × 138 = 5796.\n"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer\n"
	.string "lynx at a café; voilà, they're “worth”\l"
	.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
	.string "Nintendo GBA can connect to a Nintendo\l"
	.string "GameCube console! He claimed-though I\l"
	.string "don't believe him-to have done so in an\l"
	.string "eyes-shut state…?$"

Debug_EventScript_TellTheTime_Text_0:
# 633 "data/scripts/debug.pory"
	.string "Time and date:\n"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}$"

Debug_EventScript_PrintTimeOfDay_Text_0:
# 642 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 650 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\n"
	.string "enabled. Please enable it in include/\l"
	.string "config/overworld.h$"

Debug_EventScript_InflictStatus1_Text_Close::
# 554 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_InflictStatus1_Text_Poison::
# 559 "data/scripts/debug.pory"
	.string "Poison$"

Debug_EventScript_InflictStatus1_Text_Paralysis::
# 564 "data/scripts/debug.pory"
	.string "Paralysis$"

Debug_EventScript_InflictStatus1_Text_Sleep::
# 569 "data/scripts/debug.pory"
	.string "Sleep$"

Debug_EventScript_InflictStatus1_Text_Burn::
# 574 "data/scripts/debug.pory"
	.string "Burn$"

Debug_EventScript_InflictStatus1_Text_Freeze::
# 579 "data/scripts/debug.pory"
	.string "Freeze$"

Debug_EventScript_InflictStatus1_Text_Frostbite::
# 584 "data/scripts/debug.pory"
	.string "Frostbite$"
