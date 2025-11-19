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


Debug_FlagsNotSetOverworldConfigMessage::
# 81 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text_0
# 82 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_FlagsNotSetBattleConfigMessage::
# 87 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text_0
# 88 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_BoxFilledMessage::
# 93 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text_0
# 94 "data/scripts/debug.pory"
	goto Debug_MessageEnd
	return


Debug_EventScript_CheckEVs::
# 99 "data/scripts/debug.pory"
	lockall
# 100 "data/scripts/debug.pory"
	getpartysize
# 101 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 102 "data/scripts/debug.pory"
	special ChoosePartyMon
# 103 "data/scripts/debug.pory"
	waitstate
# 104 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 105 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 106 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_0, MSGBOX_DEFAULT
# 107 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 108 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckEVs_Text_1, MSGBOX_DEFAULT
# 109 "data/scripts/debug.pory"
	goto Debug_EventScript_CheckEVs_End
	return


Debug_EventScript_CheckEVs_End::
# 114 "data/scripts/debug.pory"
	releaseall
	return


Debug_EventScript_CheckIVs::
# 119 "data/scripts/debug.pory"
	lockall
# 120 "data/scripts/debug.pory"
	getpartysize
# 121 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 122 "data/scripts/debug.pory"
	special ChoosePartyMon
# 123 "data/scripts/debug.pory"
	waitstate
# 124 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 125 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 126 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_0, MSGBOX_DEFAULT
# 127 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 128 "data/scripts/debug.pory"
	msgbox Debug_EventScript_CheckIVs_Text_1, MSGBOX_DEFAULT
	return


Debug_EventScript_CheckIVs_End::
# 133 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Script_1::
# 139 "data/scripts/debug.pory"
	glass MAPSEC_NAVAL_BASE, GLASS_LOCATION_RATE, VAR_RESULT
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
# 190 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 191 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_0, MSGBOX_DEFAULT
# 192 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 193 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_1, MSGBOX_DEFAULT
# 194 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 195 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_2, MSGBOX_DEFAULT
# 196 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 197 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_3, MSGBOX_DEFAULT
# 198 "data/scripts/debug.pory"
	release
	end


Debug_CheckROMSpace::
# 204 "data/scripts/debug.pory"
	callnative CheckROMSize
# 205 "data/scripts/debug.pory"
	msgbox Debug_CheckROMSpace_Text_0, MSGBOX_DEFAULT
# 206 "data/scripts/debug.pory"
	release
	end


Debug_HatchAnEgg::
# 212 "data/scripts/debug.pory"
	lockall
# 213 "data/scripts/debug.pory"
	getpartysize
# 214 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 215 "data/scripts/debug.pory"
	special ChoosePartyMon
# 216 "data/scripts/debug.pory"
	waitstate
# 217 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 218 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 219 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 220 "data/scripts/debug.pory"
	special EggHatch
# 221 "data/scripts/debug.pory"
	waitstate
	return


Debug_HatchAnEgg_End::
# 225 "data/scripts/debug.pory"
	releaseall
	end


Debug_NoPokemon::
# 231 "data/scripts/debug.pory"
	msgbox Debug_NoPokemon_Text_0, MSGBOX_DEFAULT
# 232 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_HatchAnEgg_CantForceHatch::
# 238 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_CantForceHatch_Text_0, MSGBOX_DEFAULT
# 239 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_ZeroDaycareMons::
# 245 "data/scripts/debug.pory"
	msgbox DebugScript_ZeroDaycareMons_Text_0, MSGBOX_DEFAULT
# 246 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_OneDaycareMons::
# 252 "data/scripts/debug.pory"
	msgbox DebugScript_OneDaycareMons_Text_0, MSGBOX_DEFAULT
# 253 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_DaycareMonsNotCompatible::
# 259 "data/scripts/debug.pory"
	msgbox DebugScript_DaycareMonsNotCompatible_Text_0, MSGBOX_DEFAULT
# 260 "data/scripts/debug.pory"
	releaseall
	end


Debug_ShowExpansionVersion::
# 266 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 267 "data/scripts/debug.pory"
	msgbox Debug_ShowExpansionVersion_Text_0, MSGBOX_DEFAULT
# 268 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Not_Enabled::
# 274 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Not_Enabled_Text_0, MSGBOX_DEFAULT
# 275 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Event_Script::
# 281 "data/scripts/debug.pory"
	lock
# 282 "data/scripts/debug.pory"
	facefollowernpc
# 283 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Event_Script_Text_0, MSGBOX_DEFAULT
# 284 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Steven_Multi::
# 290 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 291 "data/scripts/debug.pory"
	release
	end


Debug_BerryPestsDisabled::
# 297 "data/scripts/debug.pory"
	msgbox Debug_BerryPestsDisabled_Text_0, MSGBOX_DEFAULT
# 298 "data/scripts/debug.pory"
	release
	end


Debug_BerryWeedsDisabled::
# 304 "data/scripts/debug.pory"
	msgbox Debug_BerryWeedsDisabled_Text_0, MSGBOX_DEFAULT
# 305 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_InflictStatus1::
# 313 "data/scripts/debug.pory"
	lockall
# 314 "data/scripts/debug.pory"
	getpartysize
# 315 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 316 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_0, 0
# 317 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_1, 1
# 318 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_2, 2
# 319 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
# 320 "data/scripts/debug.pory"
	switch VAR_RESULT
# 322 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_2
# 323 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_3
# 324 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_4
	return

Debug_EventScript_InflictStatus1_2:
# 322 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single
	return

Debug_EventScript_InflictStatus1_3:
# 323 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party
	return

Debug_EventScript_InflictStatus1_4:
# 324 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
# 325 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	return


Debug_EventScript_InflictStatus1_Close::
# 332 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single::
# 338 "data/scripts/debug.pory"
	special ChoosePartyMon
# 339 "data/scripts/debug.pory"
	waitstate
# 340 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 341 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 342 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 343 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 344 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 345 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 346 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 347 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 348 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 349 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 350 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 351 "data/scripts/debug.pory"
	switch VAR_RESULT
# 353 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_3
# 354 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_4
# 355 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_5
# 356 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_6
# 357 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_7
# 358 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_8
# 359 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Single_9
# 360 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Single_10
Debug_EventScript_InflictStatus1_Single_1:
# 362 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_3:
# 353 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Poison
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_4:
# 354 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Paralysis
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_5:
# 355 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Sleep
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_6:
# 356 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Burn
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_7:
# 357 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Freeze
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_8:
# 358 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Frostbite
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_9:
# 359 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_10:
# 360 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1


Debug_EventScript_SetHiddenNature::
# 368 "data/scripts/debug.pory"
	special ChoosePartyMon
# 369 "data/scripts/debug.pory"
	waitstate
# 370 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 371 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 372 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 373 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_0, 0
# 374 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_1, 1
# 375 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_2, 2
# 376 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_3, 3
# 377 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_4, 4
# 378 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_5, 5
# 379 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_6, 6
# 380 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_7, 7
# 381 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_8, 8
# 382 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_9, 9
# 383 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_10, 10
# 384 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_11, 11
# 385 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_12, 12
# 386 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_13, 13
# 387 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_14, 14
# 388 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_15, 15
# 389 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_16, 16
# 390 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_17, 17
# 391 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_18, 18
# 392 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_19, 19
# 393 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_20, 20
# 394 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_21, 21
# 395 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_22, 22
# 396 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_23, 23
# 397 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_24, 24
# 398 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 400 "data/scripts/debug.pory"
	switch VAR_RESULT
# 402 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetHiddenNature_3
Debug_EventScript_SetHiddenNature_1:
# 404 "data/scripts/debug.pory"
	special SetHiddenNature
# 405 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_SetHiddenNature_3:
# 402 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_SetHiddenNature_1


Debug_EventScript_InflictStatus1_Single_Poison::
# 411 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 412 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Paralysis::
# 418 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 419 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Sleep::
# 425 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 426 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Burn::
# 432 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 433 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Freeze::
# 439 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 440 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Frostbite::
# 446 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 447 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party::
# 453 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 454 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 455 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 456 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 457 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 458 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 459 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 460 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 461 "data/scripts/debug.pory"
	switch VAR_RESULT
# 463 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_3
# 464 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_4
# 465 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_5
# 466 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_6
# 467 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_7
# 468 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_8
# 469 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Party_9
# 470 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Party_10
Debug_EventScript_InflictStatus1_Party_1:
# 472 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_3:
# 463 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Poison
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_4:
# 464 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Paralysis
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_5:
# 465 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Sleep
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_6:
# 466 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Burn
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_7:
# 467 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Freeze
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_8:
# 468 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Frostbite
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_9:
# 469 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_10:
# 470 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1


Debug_EventScript_InflictStatus1_Party_Poison::
# 478 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 479 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Paralysis::
# 485 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 486 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Sleep::
# 492 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 493 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Burn::
# 499 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 500 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Freeze::
# 506 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 507 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Frostbite::
# 513 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 514 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_EWRAMCounters::
# 557 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 558 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text_0, MSGBOX_DEFAULT
# 559 "data/scripts/debug.pory"
	release
	end


Debug_PrintFontTest::
# 565 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_0, MSGBOX_DEFAULT
# 566 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_1, MSGBOX_DEFAULT
# 567 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_2, MSGBOX_DEFAULT
# 568 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_3, MSGBOX_DEFAULT
# 569 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_4, MSGBOX_DEFAULT
# 570 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_5, MSGBOX_DEFAULT
# 571 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_6, MSGBOX_DEFAULT
# 572 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_7, MSGBOX_DEFAULT
# 573 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_8, MSGBOX_DEFAULT
# 574 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_FontTest::
# 580 "data/scripts/debug.pory"
	lockall
# 581 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
	return


Debug_EventScript_TellTheTime::
# 598 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 599 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 600 "data/scripts/debug.pory"
	waitmessage
# 601 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_PrintTimeOfDay::
# 607 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 608 "data/scripts/debug.pory"
	msgbox Debug_EventScript_PrintTimeOfDay_Text_0, MSGBOX_DEFAULT
# 609 "data/scripts/debug.pory"
	waitmessage
# 610 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_FakeRTCNotEnabled::
# 616 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 617 "data/scripts/debug.pory"
	waitmessage
# 618 "data/scripts/debug.pory"
	closemessage
	return


Debug_FlagsNotSetOverworldConfigMessage_Text_0:
# 81 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/overworld.h'!$"

Debug_FlagsNotSetBattleConfigMessage_Text_0:
# 87 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/battle.h'!$"

Debug_BoxFilledMessage_Text_0:
# 93 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"

Debug_EventScript_CheckEVs_Text_0:
# 106 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs:\n"
	.string "{STR_VAR_2}, SPEED EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckEVs_Text_1:
# 108 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs:\n"
	.string "{STR_VAR_2}, SPDEF EVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_0:
# 126 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs:\n"
	.string "{STR_VAR_2}, SPEED IVs:\n"
	.string "{STR_VAR_3}$"

Debug_EventScript_CheckIVs_Text_1:
# 128 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs:\n"
	.string "{STR_VAR_2}, SPDEF IVs:\n"
	.string "{STR_VAR_3}$"

Debug_CheckSaveBlock_Text_0:
# 191 "data/scripts/debug.pory"
	.string "SaveBlock1 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_1:
# 193 "data/scripts/debug.pory"
	.string "SaveBlock2 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_2:
# 195 "data/scripts/debug.pory"
	.string "SaveBlock3 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_3:
# 197 "data/scripts/debug.pory"
	.string "{PKMN}Storage size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace_Text_0:
# 205 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_NoPokemon_Text_0:
# 231 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_CantForceHatch_Text_0:
# 238 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons_Text_0:
# 245 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"

DebugScript_OneDaycareMons_Text_0:
# 252 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"

DebugScript_DaycareMonsNotCompatible_Text_0:
# 259 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\n"
	.string "have babies together!$"

Debug_ShowExpansionVersion_Text_0:
# 267 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"

Debug_Follower_NPC_Not_Enabled_Text_0:
# 274 "data/scripts/debug.pory"
	.string "Feature unavailable.\n"
	.string "Set FNPC_ENABLE_NPC_FOLLOWERS to\l"
	.string "TRUE in 'include/config/follower_npc.h'.$"

Debug_Follower_NPC_Event_Script_Text_0:
# 283 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"

Debug_BerryPestsDisabled_Text_0:
# 297 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
	.string "Unable to force pests onto berry trees.$"

Debug_BerryWeedsDisabled_Text_0:
# 304 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
	.string "Unable to force weeds onto berry trees.$"

Debug_EventScript_InflictStatus1_Text_0:
# 316 "data/scripts/debug.pory"
	.string "Single$"

Debug_EventScript_InflictStatus1_Text_1:
# 317 "data/scripts/debug.pory"
	.string "Party-wide$"

Debug_EventScript_InflictStatus1_Text_2:
# 318 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_SetHiddenNature_Text_0:
# 373 "data/scripts/debug.pory"
	.string "Hardy$"

Debug_EventScript_SetHiddenNature_Text_1:
# 374 "data/scripts/debug.pory"
	.string "Lonely$"

Debug_EventScript_SetHiddenNature_Text_2:
# 375 "data/scripts/debug.pory"
	.string "Brave$"

Debug_EventScript_SetHiddenNature_Text_3:
# 376 "data/scripts/debug.pory"
	.string "Adamant$"

Debug_EventScript_SetHiddenNature_Text_4:
# 377 "data/scripts/debug.pory"
	.string "Naughty$"

Debug_EventScript_SetHiddenNature_Text_5:
# 378 "data/scripts/debug.pory"
	.string "Bold$"

Debug_EventScript_SetHiddenNature_Text_6:
# 379 "data/scripts/debug.pory"
	.string "Docile$"

Debug_EventScript_SetHiddenNature_Text_7:
# 380 "data/scripts/debug.pory"
	.string "Relaxed$"

Debug_EventScript_SetHiddenNature_Text_8:
# 381 "data/scripts/debug.pory"
	.string "Impish$"

Debug_EventScript_SetHiddenNature_Text_9:
# 382 "data/scripts/debug.pory"
	.string "Lax$"

Debug_EventScript_SetHiddenNature_Text_10:
# 383 "data/scripts/debug.pory"
	.string "Timid$"

Debug_EventScript_SetHiddenNature_Text_11:
# 384 "data/scripts/debug.pory"
	.string "Hasty$"

Debug_EventScript_SetHiddenNature_Text_12:
# 385 "data/scripts/debug.pory"
	.string "Serious$"

Debug_EventScript_SetHiddenNature_Text_13:
# 386 "data/scripts/debug.pory"
	.string "Jolly$"

Debug_EventScript_SetHiddenNature_Text_14:
# 387 "data/scripts/debug.pory"
	.string "Naive$"

Debug_EventScript_SetHiddenNature_Text_15:
# 388 "data/scripts/debug.pory"
	.string "Modest$"

Debug_EventScript_SetHiddenNature_Text_16:
# 389 "data/scripts/debug.pory"
	.string "Mild$"

Debug_EventScript_SetHiddenNature_Text_17:
# 390 "data/scripts/debug.pory"
	.string "Quiet$"

Debug_EventScript_SetHiddenNature_Text_18:
# 391 "data/scripts/debug.pory"
	.string "Bashful$"

Debug_EventScript_SetHiddenNature_Text_19:
# 392 "data/scripts/debug.pory"
	.string "Rash$"

Debug_EventScript_SetHiddenNature_Text_20:
# 393 "data/scripts/debug.pory"
	.string "Calm$"

Debug_EventScript_SetHiddenNature_Text_21:
# 394 "data/scripts/debug.pory"
	.string "Gentle$"

Debug_EventScript_SetHiddenNature_Text_22:
# 395 "data/scripts/debug.pory"
	.string "Sassy$"

Debug_EventScript_SetHiddenNature_Text_23:
# 396 "data/scripts/debug.pory"
	.string "Careful$"

Debug_EventScript_SetHiddenNature_Text_24:
# 397 "data/scripts/debug.pory"
	.string "Quirky$"

Debug_EventScript_EWRAMCounters_Text_0:
# 558 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
	.string "Fishing Chain: {STR_VAR_2}.$"

Debug_PrintFontTest_Text_0:
# 565 "data/scripts/debug.pory"
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
# 566 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel angel adept for the nuance loads\n"
	.string "of the arena cocoa and quaalude. Blind\n"
	.string "blind bodice for the submit oboe of the\l"
	.string "club snob and abbot. Clique clique coast\l"
	.string "for the pouch loco of the franc assoc\l"
	.string "and accede. Dunce dunce docile for the\l"
	.string "loudness mastodon of the loud statehood\l"
	.string "and huddle.$"

Debug_PrintFontTest_Text_2:
# 567 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Enact enact eosin for the quench coed\n"
	.string "of the pique canoe and bleep. Furlong\n"
	.string "furlong focal for the genuflect profound\l"
	.string "of the motif aloof and offers. Gnome\l"
	.string "gnome gondola for the impugn logos of\l"
	.string "the unplug analog and smuggle. Human\l"
	.string "human hoist for the buddhist alcohol of\l"
	.string "the riyadh caliph and bathhouse.$"

Debug_PrintFontTest_Text_3:
# 568 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Inlet inlet iodine for the quince\n"
	.string "champion of the ennui scampi and shiite.\n"
	.string "Justin justin jocose for the djibouti\l"
	.string "sojourn of the oranj raj and hajjis. Knoll\l"
	.string "knoll koala for the banknote lookout of\l"
	.string "the dybbuk outlook and trekked. Linden\l"
	.string "linden loads for the ulna monolog of the\l"
	.string "consul menthol and shallot.$"

Debug_PrintFontTest_Text_4:
# 569 "data/scripts/debug.pory"
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
# 570 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Quanta quanta qophs for the inquest\n"
	.string "sheqel of the cinq coq and suqqu. Rhone\n"
	.string "rhone roman for the burnt porous of the\l"
	.string "lemur clamor and carrot. Snout snout\l"
	.string "sodium for the ensnare bosom of the\l"
	.string "genus pathos and missing. Tundra tundra\l"
	.string "tocsin for the nutmeg isotope of the\l"
	.string "peasant ingot and ottoman.$"

Debug_PrintFontTest_Text_6:
# 571 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Uncle uncle udder for the dunes cloud\n"
	.string "of the hindu thou and continuum. Vulcan\n"
	.string "vulcan vocal for the alluvial ovoid of the\l"
	.string "yugoslav chekhov and revved. Whale whale\l"
	.string "woman for the meanwhile blowout of the\l"
	.string "forepaw meadow and glowworm. Xmas xmas\l"
	.string "xenon for the bauxite doxology of the\l"
	.string "tableaux equinox and exxon.$"

Debug_PrintFontTest_Text_7:
# 572 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Yunnan yunnan young for the dynamo\n"
	.string "coyote of the obloquy employ and sayyid.\n"
	.string "Zloty zloty zodiac for the gizmo ozone of\l"
	.string "the franz laissez and buzzing.$"

Debug_PrintFontTest_Text_8:
# 573 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}42 × 138 = 5796.\n"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer lynx\n"
	.string "at a café; voilà, they're “worth” ♂1/♀1 =\l"
	.string "¥1. That's 10 + 9 - 8 = 11 Nintendo GBA\l"
	.string "can connect to a Nintendo GameCube\l"
	.string "console! He claimed-though I don't\l"
	.string "believe him-to have done so in an\l"
	.string "eyes-shut state…?$"

Debug_EventScript_TellTheTime_Text_0:
# 599 "data/scripts/debug.pory"
	.string "Time and date:\n"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}$"

Debug_EventScript_PrintTimeOfDay_Text_0:
# 608 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 616 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\n"
	.string "enabled. Please enable it in include/\l"
	.string "config/overworld.h$"

Debug_EventScript_InflictStatus1_Text_Close::
# 518 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_InflictStatus1_Text_Poison::
# 523 "data/scripts/debug.pory"
	.string "Poison$"

Debug_EventScript_InflictStatus1_Text_Paralysis::
# 528 "data/scripts/debug.pory"
	.string "Paralysis$"

Debug_EventScript_InflictStatus1_Text_Sleep::
# 533 "data/scripts/debug.pory"
	.string "Sleep$"

Debug_EventScript_InflictStatus1_Text_Burn::
# 538 "data/scripts/debug.pory"
	.string "Burn$"

Debug_EventScript_InflictStatus1_Text_Freeze::
# 543 "data/scripts/debug.pory"
	.string "Freeze$"

Debug_EventScript_InflictStatus1_Text_Frostbite::
# 548 "data/scripts/debug.pory"
	.string "Frostbite$"
