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
	callnative ClearBag
# 203 "data/scripts/debug.pory"
	additem ITEM_X_ATTACK, 1
# 204 "data/scripts/debug.pory"
	additem ITEM_CHERI_BERRY, 1
# 205 "data/scripts/debug.pory"
	additem ITEM_ESCAPE_ROPE, 1
# 206 "data/scripts/debug.pory"
	additem ITEM_SUPER_POTION, 1
# 207 "data/scripts/debug.pory"
	additem ITEM_VENUSAURITE, 1
# 208 "data/scripts/debug.pory"
	additem ITEM_BLACK_FLUTE, 1
# 209 "data/scripts/debug.pory"
	additem ITEM_POKE_BALL, 1
# 210 "data/scripts/debug.pory"
	additem ITEM_ZINC, 1
# 211 "data/scripts/debug.pory"
	additem ITEM_TINY_MUSHROOM, 1
# 212 "data/scripts/debug.pory"
	additem ITEM_FIRIUM_Z, 1
	end


Debug_EventScript_Script_2::
# 219 "data/scripts/debug.pory"
	callnative ClearBag
# 220 "data/scripts/debug.pory"
	additem ITEM_X_ATTACK, 1
# 221 "data/scripts/debug.pory"
	additem ITEM_X_DEFENSE, 1
# 222 "data/scripts/debug.pory"
	additem ITEM_X_SP_ATK, 1
# 223 "data/scripts/debug.pory"
	additem ITEM_X_SP_DEF, 1
# 224 "data/scripts/debug.pory"
	additem ITEM_X_SPEED, 1
# 225 "data/scripts/debug.pory"
	additem ITEM_FOCUS_SASH, 1
# 226 "data/scripts/debug.pory"
	additem ITEM_ORAN_BERRY, 1
# 227 "data/scripts/debug.pory"
	additem ITEM_STARF_BERRY, 1
# 228 "data/scripts/debug.pory"
	additem ITEM_PECHA_BERRY, 1
# 229 "data/scripts/debug.pory"
	additem ITEM_RAWST_BERRY, 1
# 230 "data/scripts/debug.pory"
	additem ITEM_ASPEAR_BERRY, 1
# 231 "data/scripts/debug.pory"
	additem ITEM_LEPPA_BERRY, 1
# 232 "data/scripts/debug.pory"
	additem ITEM_ESCAPE_ROPE, 1
# 233 "data/scripts/debug.pory"
	additem ITEM_MACH_BIKE, 1
# 234 "data/scripts/debug.pory"
	additem ITEM_HEXORB, 1
# 235 "data/scripts/debug.pory"
	additem ITEM_SCANNER, 1
# 236 "data/scripts/debug.pory"
	additem ITEM_FLY_TOOL, 1
# 237 "data/scripts/debug.pory"
	additem ITEM_ACRO_BIKE, 1
# 238 "data/scripts/debug.pory"
	additem ITEM_ROTOM_CATALOG, 1
# 239 "data/scripts/debug.pory"
	additem ITEM_SUPER_POTION, 1
# 240 "data/scripts/debug.pory"
	additem ITEM_HYPER_POTION, 1
# 241 "data/scripts/debug.pory"
	additem ITEM_MAX_POTION, 1
# 242 "data/scripts/debug.pory"
	additem ITEM_FULL_RESTORE, 1
# 243 "data/scripts/debug.pory"
	additem ITEM_REVIVE, 1
# 244 "data/scripts/debug.pory"
	additem ITEM_MAX_REVIVE, 1
# 245 "data/scripts/debug.pory"
	additem ITEM_VENUSAURITE, 1
# 246 "data/scripts/debug.pory"
	additem ITEM_CHARIZARDITE_X, 1
# 247 "data/scripts/debug.pory"
	additem ITEM_CHARIZARDITE_Y, 1
# 248 "data/scripts/debug.pory"
	additem ITEM_BLASTOISINITE, 1
# 249 "data/scripts/debug.pory"
	additem ITEM_BEEDRILLITE, 1
# 250 "data/scripts/debug.pory"
	additem ITEM_PIDGEOTITE, 1
# 251 "data/scripts/debug.pory"
	additem ITEM_BLACK_FLUTE, 1
# 252 "data/scripts/debug.pory"
	additem ITEM_WHITE_FLUTE, 1
# 253 "data/scripts/debug.pory"
	additem ITEM_REPEL, 1
# 254 "data/scripts/debug.pory"
	additem ITEM_SUPER_REPEL, 1
# 255 "data/scripts/debug.pory"
	additem ITEM_MAX_REPEL, 1
# 256 "data/scripts/debug.pory"
	additem ITEM_LURE, 1
# 257 "data/scripts/debug.pory"
	additem ITEM_POKE_BALL, 1
# 258 "data/scripts/debug.pory"
	additem ITEM_GREAT_BALL, 1
# 259 "data/scripts/debug.pory"
	additem ITEM_ULTRA_BALL, 1
# 260 "data/scripts/debug.pory"
	additem ITEM_MASTER_BALL, 1
# 261 "data/scripts/debug.pory"
	additem ITEM_PREMIER_BALL, 1
# 262 "data/scripts/debug.pory"
	additem ITEM_HEAL_BALL, 1
# 263 "data/scripts/debug.pory"
	additem ITEM_ZINC, 1
# 264 "data/scripts/debug.pory"
	additem ITEM_ABILITY_CAPSULE, 1
# 265 "data/scripts/debug.pory"
	additem ITEM_PP_UP, 1
# 266 "data/scripts/debug.pory"
	additem ITEM_PP_MAX, 1
# 267 "data/scripts/debug.pory"
	additem ITEM_HEALTH_FEATHER, 1
# 268 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 1
# 269 "data/scripts/debug.pory"
	additem ITEM_TINY_MUSHROOM, 1
# 270 "data/scripts/debug.pory"
	additem ITEM_BIG_MUSHROOM, 1
# 271 "data/scripts/debug.pory"
	additem ITEM_BALM_MUSHROOM, 1
# 272 "data/scripts/debug.pory"
	additem ITEM_PEARL, 1
# 273 "data/scripts/debug.pory"
	additem ITEM_BIG_PEARL, 1
# 274 "data/scripts/debug.pory"
	additem ITEM_PEARL_STRING, 1
# 275 "data/scripts/debug.pory"
	additem ITEM_FIRIUM_Z, 1
# 276 "data/scripts/debug.pory"
	additem ITEM_WATERIUM_Z, 1
# 277 "data/scripts/debug.pory"
	additem ITEM_ELECTRIUM_Z, 1
# 278 "data/scripts/debug.pory"
	additem ITEM_GRASSIUM_Z, 1
# 279 "data/scripts/debug.pory"
	additem ITEM_ICIUM_Z, 1
# 280 "data/scripts/debug.pory"
	additem ITEM_FIGHTINIUM_Z, 1
# 281 "data/scripts/debug.pory"
	additem ITEM_TM429, 1
# 282 "data/scripts/debug.pory"
	additem ITEM_TM430, 1
# 283 "data/scripts/debug.pory"
	additem ITEM_TM431, 1
# 284 "data/scripts/debug.pory"
	additem ITEM_TM432, 1
# 285 "data/scripts/debug.pory"
	additem ITEM_TM433, 1
# 286 "data/scripts/debug.pory"
	additem ITEM_TM434, 1
	end


Debug_EventScript_Script_3::
	end


Debug_EventScript_Script_4::
# 297 "data/scripts/debug.pory"
	additem ITEM_LIECHI_BERRY, 4
	end


Debug_EventScript_Script_5::
# 303 "data/scripts/debug.pory"
	givemon SPECIES_ROTOM, 50, 0
# 304 "data/scripts/debug.pory"
	setwildbattle SPECIES_RATICATE, 50, 0
# 305 "data/scripts/debug.pory"
	dowildbattle
	end


Debug_EventScript_Script_6::
# 311 "data/scripts/debug.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
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
# 337 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 338 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_0, MSGBOX_DEFAULT
# 339 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 340 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_1, MSGBOX_DEFAULT
# 341 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 342 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_2, MSGBOX_DEFAULT
# 343 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 344 "data/scripts/debug.pory"
	msgbox Debug_CheckSaveBlock_Text_3, MSGBOX_DEFAULT
# 345 "data/scripts/debug.pory"
	release
	end


Debug_CheckROMSpace::
# 351 "data/scripts/debug.pory"
	callnative CheckROMSize
# 352 "data/scripts/debug.pory"
	msgbox Debug_CheckROMSpace_Text_0, MSGBOX_DEFAULT
# 353 "data/scripts/debug.pory"
	release
	end


Debug_HatchAnEgg::
# 359 "data/scripts/debug.pory"
	lockall
# 360 "data/scripts/debug.pory"
	getpartysize
# 361 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 362 "data/scripts/debug.pory"
	special ChoosePartyMon
# 363 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 364 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 365 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 366 "data/scripts/debug.pory"
	special EggHatch
	return


Debug_HatchAnEgg_End::
# 370 "data/scripts/debug.pory"
	releaseall
	end


Debug_NoPokemon::
# 376 "data/scripts/debug.pory"
	msgbox Debug_NoPokemon_Text_0, MSGBOX_DEFAULT
# 377 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_HatchAnEgg_CantForceHatch::
# 383 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_CantForceHatch_Text_0, MSGBOX_DEFAULT
# 384 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_ZeroDaycareMons::
# 390 "data/scripts/debug.pory"
	msgbox DebugScript_ZeroDaycareMons_Text_0, MSGBOX_DEFAULT
# 391 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_OneDaycareMons::
# 397 "data/scripts/debug.pory"
	msgbox DebugScript_OneDaycareMons_Text_0, MSGBOX_DEFAULT
# 398 "data/scripts/debug.pory"
	releaseall
	end


DebugScript_DaycareMonsNotCompatible::
# 404 "data/scripts/debug.pory"
	msgbox DebugScript_DaycareMonsNotCompatible_Text_0, MSGBOX_DEFAULT
# 405 "data/scripts/debug.pory"
	releaseall
	end


Debug_ShowExpansionVersion::
# 411 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 412 "data/scripts/debug.pory"
	msgbox Debug_ShowExpansionVersion_Text_0, MSGBOX_DEFAULT
# 413 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Not_Enabled::
# 419 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Not_Enabled_Text_0, MSGBOX_DEFAULT
# 420 "data/scripts/debug.pory"
	release
	end


Debug_Follower_NPC_Event_Script::
# 426 "data/scripts/debug.pory"
	lock
# 427 "data/scripts/debug.pory"
	facefollowernpc
# 428 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Event_Script_Text_0, MSGBOX_DEFAULT
# 429 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Steven_Multi::
# 435 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 436 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_WallyTutorial::
# 442 "data/scripts/debug.pory"
	special SavePlayerParty
# 443 "data/scripts/debug.pory"
	special LoadWallyZigzagoon
# 444 "data/scripts/debug.pory"
	special StartWallyTutorialBattle
# 445 "data/scripts/debug.pory"
	special LoadPlayerParty
# 446 "data/scripts/debug.pory"
	release
	end


Debug_BerryPestsDisabled::
# 452 "data/scripts/debug.pory"
	msgbox Debug_BerryPestsDisabled_Text_0, MSGBOX_DEFAULT
# 453 "data/scripts/debug.pory"
	release
	end


Debug_BerryWeedsDisabled::
# 459 "data/scripts/debug.pory"
	msgbox Debug_BerryWeedsDisabled_Text_0, MSGBOX_DEFAULT
# 460 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_InflictStatus1::
# 468 "data/scripts/debug.pory"
	lockall
# 469 "data/scripts/debug.pory"
	getpartysize
# 470 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 471 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_0, 0
# 472 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_1, 1
# 473 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_2, 2
# 474 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
# 475 "data/scripts/debug.pory"
	switch VAR_RESULT
# 477 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_2
# 478 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_3
# 479 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_4
	return

Debug_EventScript_InflictStatus1_2:
# 477 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single
	return

Debug_EventScript_InflictStatus1_3:
# 478 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party
	return

Debug_EventScript_InflictStatus1_4:
# 479 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
# 480 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	return


Debug_EventScript_InflictStatus1_Close::
# 486 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single::
# 492 "data/scripts/debug.pory"
	special ChoosePartyMon
# 493 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 494 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 495 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 496 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 497 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 498 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 499 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 500 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 501 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 502 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 503 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 504 "data/scripts/debug.pory"
	switch VAR_RESULT
# 506 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_3
# 507 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_4
# 508 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_5
# 509 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_6
# 510 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_7
# 511 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_8
# 512 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Single_9
# 513 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Single_10
Debug_EventScript_InflictStatus1_Single_1:
# 515 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_3:
# 506 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Poison
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_4:
# 507 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Paralysis
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_5:
# 508 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Sleep
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_6:
# 509 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Burn
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_7:
# 510 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Freeze
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_8:
# 511 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Single_Frostbite
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_9:
# 512 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1

Debug_EventScript_InflictStatus1_Single_10:
# 513 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Single_1


Debug_EventScript_KoPokemon::
# 521 "data/scripts/debug.pory"
	special ChoosePartyMon
# 522 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 523 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 524 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 525 "data/scripts/debug.pory"
	setko VAR_0x8004
# 526 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetHiddenNature::
# 532 "data/scripts/debug.pory"
	special ChoosePartyMon
# 533 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 534 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 535 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 536 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_0, 0
# 537 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_1, 1
# 538 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_2, 2
# 539 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_3, 3
# 540 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_4, 4
# 541 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_5, 5
# 542 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_6, 6
# 543 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_7, 7
# 544 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_8, 8
# 545 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_9, 9
# 546 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_10, 10
# 547 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_11, 11
# 548 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_12, 12
# 549 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_13, 13
# 550 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_14, 14
# 551 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_15, 15
# 552 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_16, 16
# 553 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_17, 17
# 554 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_18, 18
# 555 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_19, 19
# 556 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_20, 20
# 557 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_21, 21
# 558 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_22, 22
# 559 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_23, 23
# 560 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_SetHiddenNature_Text_24, 24
# 561 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 563 "data/scripts/debug.pory"
	switch VAR_RESULT
# 565 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetHiddenNature_3
Debug_EventScript_SetHiddenNature_1:
# 567 "data/scripts/debug.pory"
	special SetHiddenNature
# 568 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_SetHiddenNature_3:
# 565 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_SetHiddenNature_1


Debug_EventScript_SetAbility::
# 574 "data/scripts/debug.pory"
	special ChoosePartyMon
# 575 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 576 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 577 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 578 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 579 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 580 "data/scripts/debug.pory"
	switch VAR_RESULT
# 582 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbility_3
Debug_EventScript_SetAbility_1:
# 584 "data/scripts/debug.pory"
	special SetAbility
# 585 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	return

Debug_EventScript_SetAbility_3:
# 582 "data/scripts/debug.pory"
	goto Debug_EventScript_SetAbilityClose
	goto Debug_EventScript_SetAbility_1


Debug_EventScript_SetAbilityClose::
# 590 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_SetFriendship::
# 596 "data/scripts/debug.pory"
	special ChoosePartyMon
# 597 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 598 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_GivePokerus::
# 604 "data/scripts/debug.pory"
	special ChoosePartyMon
# 605 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetPokerus
# 606 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Poison::
# 612 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 613 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Paralysis::
# 619 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 620 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Sleep::
# 626 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 627 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Burn::
# 633 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 634 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Freeze::
# 640 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 641 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Single_Frostbite::
# 647 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 648 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party::
# 654 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 655 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 656 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 657 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 658 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 659 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 660 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 661 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 662 "data/scripts/debug.pory"
	switch VAR_RESULT
# 664 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_3
# 665 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_4
# 666 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_5
# 667 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_6
# 668 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_7
# 669 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_8
# 670 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Party_9
# 671 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Party_10
Debug_EventScript_InflictStatus1_Party_1:
# 673 "data/scripts/debug.pory"
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_3:
# 664 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Poison
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_4:
# 665 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Paralysis
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_5:
# 666 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Sleep
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_6:
# 667 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Burn
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_7:
# 668 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Freeze
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_8:
# 669 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Party_Frostbite
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_9:
# 670 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1

Debug_EventScript_InflictStatus1_Party_10:
# 671 "data/scripts/debug.pory"
	goto Debug_EventScript_InflictStatus1_Close
	goto Debug_EventScript_InflictStatus1_Party_1


Debug_EventScript_InflictStatus1_Party_Poison::
# 679 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 680 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Paralysis::
# 686 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 687 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Sleep::
# 693 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 694 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Burn::
# 700 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 701 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Freeze::
# 707 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 708 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_InflictStatus1_Party_Frostbite::
# 714 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 715 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_EWRAMCounters::
# 761 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 762 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text_0, MSGBOX_DEFAULT
# 763 "data/scripts/debug.pory"
	release
	end


Debug_PrintFontTest::
# 769 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_0, MSGBOX_DEFAULT
# 770 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_1, MSGBOX_DEFAULT
# 771 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_2, MSGBOX_DEFAULT
# 772 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_3, MSGBOX_DEFAULT
# 773 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_4, MSGBOX_DEFAULT
# 774 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_5, MSGBOX_DEFAULT
# 775 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_6, MSGBOX_DEFAULT
# 776 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_7, MSGBOX_DEFAULT
# 777 "data/scripts/debug.pory"
	msgbox Debug_PrintFontTest_Text_8, MSGBOX_DEFAULT
# 778 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_FontTest::
# 784 "data/scripts/debug.pory"
	lockall
# 785 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
	return


Debug_EventScript_TellTheTime::
# 802 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 803 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 804 "data/scripts/debug.pory"
	waitmessage
# 805 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_PrintTimeOfDay::
# 811 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 812 "data/scripts/debug.pory"
	msgbox Debug_EventScript_PrintTimeOfDay_Text_0, MSGBOX_DEFAULT
# 813 "data/scripts/debug.pory"
	waitmessage
# 814 "data/scripts/debug.pory"
	closemessage
	end


Debug_EventScript_FakeRTCNotEnabled::
# 820 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 821 "data/scripts/debug.pory"
	waitmessage
# 822 "data/scripts/debug.pory"
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

Debug_CheckSaveBlock_Text_0:
# 338 "data/scripts/debug.pory"
	.string "SaveBlock1 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_1:
# 340 "data/scripts/debug.pory"
	.string "SaveBlock2 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_2:
# 342 "data/scripts/debug.pory"
	.string "SaveBlock3 size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckSaveBlock_Text_3:
# 344 "data/scripts/debug.pory"
	.string "{PKMN}Storage size:\n"
	.string "{STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace_Text_0:
# 352 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_NoPokemon_Text_0:
# 376 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_CantForceHatch_Text_0:
# 383 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons_Text_0:
# 390 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"

DebugScript_OneDaycareMons_Text_0:
# 397 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"

DebugScript_DaycareMonsNotCompatible_Text_0:
# 404 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\n"
	.string "have babies together!$"

Debug_ShowExpansionVersion_Text_0:
# 412 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"

Debug_Follower_NPC_Not_Enabled_Text_0:
# 419 "data/scripts/debug.pory"
	.string "Feature unavailable.\n"
	.string "Set FNPC_ENABLE_NPC_FOLLOWERS to\l"
	.string "TRUE in 'include/config/follower_npc.h'.$"

Debug_Follower_NPC_Event_Script_Text_0:
# 428 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"

Debug_BerryPestsDisabled_Text_0:
# 452 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
	.string "Unable to force pests onto berry trees.$"

Debug_BerryWeedsDisabled_Text_0:
# 459 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
	.string "Unable to force weeds onto berry trees.$"

Debug_EventScript_InflictStatus1_Text_0:
# 471 "data/scripts/debug.pory"
	.string "Single$"

Debug_EventScript_InflictStatus1_Text_1:
# 472 "data/scripts/debug.pory"
	.string "Party-wide$"

Debug_EventScript_InflictStatus1_Text_2:
# 473 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_SetHiddenNature_Text_0:
# 536 "data/scripts/debug.pory"
	.string "Hardy$"

Debug_EventScript_SetHiddenNature_Text_1:
# 537 "data/scripts/debug.pory"
	.string "Lonely$"

Debug_EventScript_SetHiddenNature_Text_2:
# 538 "data/scripts/debug.pory"
	.string "Brave$"

Debug_EventScript_SetHiddenNature_Text_3:
# 539 "data/scripts/debug.pory"
	.string "Adamant$"

Debug_EventScript_SetHiddenNature_Text_4:
# 540 "data/scripts/debug.pory"
	.string "Naughty$"

Debug_EventScript_SetHiddenNature_Text_5:
# 541 "data/scripts/debug.pory"
	.string "Bold$"

Debug_EventScript_SetHiddenNature_Text_6:
# 542 "data/scripts/debug.pory"
	.string "Docile$"

Debug_EventScript_SetHiddenNature_Text_7:
# 543 "data/scripts/debug.pory"
	.string "Relaxed$"

Debug_EventScript_SetHiddenNature_Text_8:
# 544 "data/scripts/debug.pory"
	.string "Impish$"

Debug_EventScript_SetHiddenNature_Text_9:
# 545 "data/scripts/debug.pory"
	.string "Lax$"

Debug_EventScript_SetHiddenNature_Text_10:
# 546 "data/scripts/debug.pory"
	.string "Timid$"

Debug_EventScript_SetHiddenNature_Text_11:
# 547 "data/scripts/debug.pory"
	.string "Hasty$"

Debug_EventScript_SetHiddenNature_Text_12:
# 548 "data/scripts/debug.pory"
	.string "Serious$"

Debug_EventScript_SetHiddenNature_Text_13:
# 549 "data/scripts/debug.pory"
	.string "Jolly$"

Debug_EventScript_SetHiddenNature_Text_14:
# 550 "data/scripts/debug.pory"
	.string "Naive$"

Debug_EventScript_SetHiddenNature_Text_15:
# 551 "data/scripts/debug.pory"
	.string "Modest$"

Debug_EventScript_SetHiddenNature_Text_16:
# 552 "data/scripts/debug.pory"
	.string "Mild$"

Debug_EventScript_SetHiddenNature_Text_17:
# 553 "data/scripts/debug.pory"
	.string "Quiet$"

Debug_EventScript_SetHiddenNature_Text_18:
# 554 "data/scripts/debug.pory"
	.string "Bashful$"

Debug_EventScript_SetHiddenNature_Text_19:
# 555 "data/scripts/debug.pory"
	.string "Rash$"

Debug_EventScript_SetHiddenNature_Text_20:
# 556 "data/scripts/debug.pory"
	.string "Calm$"

Debug_EventScript_SetHiddenNature_Text_21:
# 557 "data/scripts/debug.pory"
	.string "Gentle$"

Debug_EventScript_SetHiddenNature_Text_22:
# 558 "data/scripts/debug.pory"
	.string "Sassy$"

Debug_EventScript_SetHiddenNature_Text_23:
# 559 "data/scripts/debug.pory"
	.string "Careful$"

Debug_EventScript_SetHiddenNature_Text_24:
# 560 "data/scripts/debug.pory"
	.string "Quirky$"

Debug_EventScript_EWRAMCounters_Text_0:
# 762 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
	.string "Fishing Chain: {STR_VAR_2}.$"

Debug_PrintFontTest_Text_0:
# 769 "data/scripts/debug.pory"
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
# 770 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Angel angel adept for the nuance loads\n"
	.string "of the arena cocoa and quaalude. Blind\n"
	.string "blind bodice for the submit oboe of the\l"
	.string "club snob and abbot. Clique clique coast\l"
	.string "for the pouch loco of the franc assoc\l"
	.string "and accede. Dunce dunce docile for the\l"
	.string "loudness mastodon of the loud statehood\l"
	.string "and huddle.$"

Debug_PrintFontTest_Text_2:
# 771 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Enact enact eosin for the quench coed\n"
	.string "of the pique canoe and bleep. Furlong\n"
	.string "furlong focal for the genuflect profound\l"
	.string "of the motif aloof and offers. Gnome\l"
	.string "gnome gondola for the impugn logos of\l"
	.string "the unplug analog and smuggle. Human\l"
	.string "human hoist for the buddhist alcohol of\l"
	.string "the riyadh caliph and bathhouse.$"

Debug_PrintFontTest_Text_3:
# 772 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Inlet inlet iodine for the quince\n"
	.string "champion of the ennui scampi and shiite.\n"
	.string "Justin justin jocose for the djibouti\l"
	.string "sojourn of the oranj raj and hajjis. Knoll\l"
	.string "knoll koala for the banknote lookout of\l"
	.string "the dybbuk outlook and trekked. Linden\l"
	.string "linden loads for the ulna monolog of the\l"
	.string "consul menthol and shallot.$"

Debug_PrintFontTest_Text_4:
# 773 "data/scripts/debug.pory"
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
# 774 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Quanta quanta qophs for the inquest\n"
	.string "sheqel of the cinq coq and suqqu. Rhone\n"
	.string "rhone roman for the burnt porous of the\l"
	.string "lemur clamor and carrot. Snout snout\l"
	.string "sodium for the ensnare bosom of the\l"
	.string "genus pathos and missing. Tundra tundra\l"
	.string "tocsin for the nutmeg isotope of the\l"
	.string "peasant ingot and ottoman.$"

Debug_PrintFontTest_Text_6:
# 775 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Uncle uncle udder for the dunes cloud\n"
	.string "of the hindu thou and continuum. Vulcan\n"
	.string "vulcan vocal for the alluvial ovoid of the\l"
	.string "yugoslav chekhov and revved. Whale whale\l"
	.string "woman for the meanwhile blowout of the\l"
	.string "forepaw meadow and glowworm. Xmas xmas\l"
	.string "xenon for the bauxite doxology of the\l"
	.string "tableaux equinox and exxon.$"

Debug_PrintFontTest_Text_7:
# 776 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}Yunnan yunnan young for the dynamo\n"
	.string "coyote of the obloquy employ and sayyid.\n"
	.string "Zloty zloty zodiac for the gizmo ozone of\l"
	.string "the franz laissez and buzzing.$"

Debug_PrintFontTest_Text_8:
# 777 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}42 × 138 = 5796.\n"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer lynx\n"
	.string "at a café; voilà, they're “worth” ♂1/♀1 =\l"
	.string "¥1. That's 10 + 9 - 8 = 11 Nintendo GBA\l"
	.string "can connect to a Nintendo GameCube\l"
	.string "console! He claimed-though I don't\l"
	.string "believe him-to have done so in an\l"
	.string "eyes-shut state…?$"

Debug_EventScript_TellTheTime_Text_0:
# 803 "data/scripts/debug.pory"
	.string "Time and date:\n"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}$"

Debug_EventScript_PrintTimeOfDay_Text_0:
# 812 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 820 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\n"
	.string "enabled. Please enable it in include/\l"
	.string "config/overworld.h$"

Debug_EventScript_InflictStatus1_Text_Close::
# 719 "data/scripts/debug.pory"
	.string "Close$"

Debug_EventScript_InflictStatus1_Text_Poison::
# 724 "data/scripts/debug.pory"
	.string "Poison$"

Debug_EventScript_InflictStatus1_Text_Paralysis::
# 729 "data/scripts/debug.pory"
	.string "Paralysis$"

Debug_EventScript_InflictStatus1_Text_Sleep::
# 734 "data/scripts/debug.pory"
	.string "Sleep$"

Debug_EventScript_InflictStatus1_Text_Burn::
# 739 "data/scripts/debug.pory"
	.string "Burn$"

Debug_EventScript_InflictStatus1_Text_Freeze::
# 744 "data/scripts/debug.pory"
	.string "Freeze$"

Debug_EventScript_InflictStatus1_Text_Frostbite::
# 749 "data/scripts/debug.pory"
	.string "Frostbite$"

Debug_EventScript_InflictStatus1_Text_KO::
# 754 "data/scripts/debug.pory"
	.string "KO$"
