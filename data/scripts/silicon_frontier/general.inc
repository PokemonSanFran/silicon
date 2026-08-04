SiliconFrontier_Dialogue_AskResume::
# 3 "data/scripts/silicon_frontier/general.pory"
	callnative BufferLastChallengeType
# 4 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_GetLastChallengeStreakLength
# 5 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, 0
	goto_if_eq SiliconFrontier_Dialogue_AskResume_2
# 11 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AskResume_Text_1, MSGBOX_YESNO
SiliconFrontier_Dialogue_AskResume_1:
# 13 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, NO
	goto_if_eq SiliconFrontier_Dialogue_AskResume_6
# 18 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFrontier_GetLastChallengeTypeFromCurrentFacility
# 19 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetLastChallenge
# 20 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_ChoosePartyMons
	return

SiliconFrontier_Dialogue_AskResume_2:
# 7 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AskResume_Text_0, MSGBOX_YESNO
	goto SiliconFrontier_Dialogue_AskResume_1

SiliconFrontier_Dialogue_AskResume_6:
# 15 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetLastChallenge
	return


SiliconFrontier_Dialogue_InteractAttendant::
# 25 "data/scripts/silicon_frontier/general.pory"
	lock
# 26 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFrontier_GetLastChallengeTypeFromCurrentFacility
# 27 "data/scripts/silicon_frontier/general.pory"
	call_if_ne VAR_RESULT, SILICON_FRONTIER_CHALLENGE_TYPE_NONE, SiliconFrontier_Dialogue_AskResume
# 28 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFroniter_Dialogue_AskMenu
	return


SiliconFrontier_Dialogue_ExplainFacility::
# 33 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainFacility_Text_0
# 34 "data/scripts/silicon_frontier/general.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, NULL, SiliconFrontier_Dialogue_ExplainFacility_Text_1, SiliconFrontier_Dialogue_ExplainFacility_Text_2, SiliconFrontier_Dialogue_ExplainFacility_Text_3, SiliconFrontier_Dialogue_ExplainFacility_Text_4, SiliconFrontier_Dialogue_ExplainFacility_Text_5, SiliconFrontier_Dialogue_ExplainFacility_Text_6
# 35 "data/scripts/silicon_frontier/general.pory"
	switch VAR_RESULT
# 37 "data/scripts/silicon_frontier/general.pory"
	case 0, SiliconFrontier_Dialogue_ExplainFacility_3
# 38 "data/scripts/silicon_frontier/general.pory"
	case 1, SiliconFrontier_Dialogue_ExplainFacility_4
# 39 "data/scripts/silicon_frontier/general.pory"
	case 2, SiliconFrontier_Dialogue_ExplainFacility_5
# 40 "data/scripts/silicon_frontier/general.pory"
	case 3, SiliconFrontier_Dialogue_ExplainFacility_6
# 41 "data/scripts/silicon_frontier/general.pory"
	case 4, SiliconFrontier_Dialogue_ExplainFacility_7
# 42 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFroniter_Dialogue_AskMenu
SiliconFrontier_Dialogue_ExplainFacility_1:
# 44 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_ExplainFacility
	return

SiliconFrontier_Dialogue_ExplainFacility_3:
# 37 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_ExplainBattleTower
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_4:
# 38 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_Dialogue_AllowedPokemon
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_5:
# 39 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_Dialogue_BattlePoints
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_6:
# 40 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_Dialogue_ExplainSaving
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_7:
# 41 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_Dialogue_ExplainBadges
	goto SiliconFrontier_Dialogue_ExplainFacility_1


SiliconFrontier_ExplainBattleTower::
# 49 "data/scripts/silicon_frontier/general.pory"
	callnative Script_BufferGetFacilityName
# 50 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_ExplainBattleTower_Text_0
	return


SiliconFrontier_Dialogue_AllowedPokemon::
# 55 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFroniter_CountCaughtBlockedSpecies
# 56 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AllowedPokemon_Text_0
# 57 "data/scripts/silicon_frontier/general.pory"
	compare VAR_0x8005, 0
	goto_if_ne SiliconFrontier_Dialogue_AllowedPokemon_1
	return

SiliconFrontier_Dialogue_AllowedPokemon_1:
# 59 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AllowedPokemon_Text_1
# 60 "data/scripts/silicon_frontier/general.pory"
	callnative ShowBattleFrontierCaughtBannedSpecies
# 61 "data/scripts/silicon_frontier/general.pory"
	waitstate
	return


SiliconFrontier_Dialogue_BattlePoints::
# 67 "data/scripts/silicon_frontier/general.pory"
	callnative Script_BufferBasePoints
# 68 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_BattlePoints_Text_0
# 70 "data/scripts/silicon_frontier/general.pory"
	callnative Script_BufferBossPoints
# 71 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_BattlePoints_Text_1
# 73 "data/scripts/silicon_frontier/general.pory"
	callnative Script_BufferMilestonePoints
# 74 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_BattlePoints_Text_2
	return


SiliconFrontier_Dialogue_ExplainSaving::
# 79 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainSaving_Text_0
# 80 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_Dialogue_IfYouReset
# 81 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainSaving_Text_1
	return


SiliconFrontier_Dialogue_ExplainBadges::
# 86 "data/scripts/silicon_frontier/general.pory"
	callnative Script_BufferSilverBadgeAndStreak
# 87 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainBadges_Text_0
# 88 "data/scripts/silicon_frontier/general.pory"
	callnative Script_BufferGoldBadgeAndStreak
# 89 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainBadges_Text_1
	return


SiliconFroniter_Dialogue_AskMenu::
# 94 "data/scripts/silicon_frontier/general.pory"
	callnative Script_BufferGetFacilityName
# 95 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFroniter_Dialogue_AskMenu_Text_0
# 96 "data/scripts/silicon_frontier/general.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, NULL, SiliconFroniter_Dialogue_AskMenu_Text_1, SiliconFroniter_Dialogue_AskMenu_Text_2, SiliconFrontier_Dialogue_ExplainFacility_Text_6
# 97 "data/scripts/silicon_frontier/general.pory"
	switch VAR_RESULT
# 99 "data/scripts/silicon_frontier/general.pory"
	case 0, SiliconFroniter_Dialogue_AskMenu_2
# 100 "data/scripts/silicon_frontier/general.pory"
	case 1, SiliconFroniter_Dialogue_AskMenu_3
# 101 "data/scripts/silicon_frontier/general.pory"
	case MULTI_B_PRESSED, SiliconFroniter_Dialogue_AskMenu_4
# 102 "data/scripts/silicon_frontier/general.pory"
	case 2, SiliconFroniter_Dialogue_AskMenu_4
	return

SiliconFroniter_Dialogue_AskMenu_2:
# 99 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_RegisterChallenge
	return

SiliconFroniter_Dialogue_AskMenu_3:
# 100 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_ExplainFacility
	return

SiliconFroniter_Dialogue_AskMenu_4:
# 102 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFroniter_Dialogue_AskMenu
	return


SiliconFrontier_Script_QuitAttendant::
# 108 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_QuitAttendant_Text_0
# 109 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 110 "data/scripts/silicon_frontier/general.pory"
	release
	end


SiliconFrontier_Script_RegisterChallenge::
# 116 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_RegisterChallenge_Text_0
# 117 "data/scripts/silicon_frontier/general.pory"
	dynmultipush gText_Single, SILICON_FRONTIER_CHALLENGE_TYPE_SINGLE
# 118 "data/scripts/silicon_frontier/general.pory"
	dynmultipush gText_Double, SILICON_FRONTIER_CHALLENGE_TYPE_DOUBLE
# 119 "data/scripts/silicon_frontier/general.pory"
	dynmultipush SiliconFrontier_Script_RegisterChallenge_Text_1, SILICON_FRONTIER_CHALLENGE_TYPE_MULTI
# 120 "data/scripts/silicon_frontier/general.pory"
	dynmultipush SiliconFrontier_Dialogue_ExplainFacility_Text_6, MULTI_B_PRESSED
# 121 "data/scripts/silicon_frontier/general.pory"
	dynmultistack 0, 0, FALSE, 3, TRUE, 0, NULL
# 122 "data/scripts/silicon_frontier/general.pory"
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, SiliconFrontier_Script_QuitAttendant
# 123 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_ChoosePartyMons
	return


SiliconFrontier_Script_ChoosePartyMons::
# 128 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetCurrentChallengeFromVars
# 129 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetLastChallengeFromCurrentChallenge
# 131 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFrontier_IsPartyValidForChallenge
# 132 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiliconFrontier_Script_ChoosePartyMons_2
SiliconFrontier_Script_ChoosePartyMons_1:
# 137 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_ChoosePartyMons_Text_0
# 138 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 139 "data/scripts/silicon_frontier/general.pory"
	special SavePlayerParty
# 140 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetPartyScreenPickAmount
# 141 "data/scripts/silicon_frontier/general.pory"
	special ChoosePartyForBattleFrontier
# 142 "data/scripts/silicon_frontier/general.pory"
	goto_if_eq VAR_RESULT, FALSE, SiliconFrontier_Script_QuitAttendant
# 143 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetSelectedMons
# 144 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_CheckMonEligibility
# 145 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFrontier_AreChosenMonsEligible
# 146 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiliconFrontier_Script_ChoosePartyMons_5
SiliconFrontier_Script_ChoosePartyMons_4:
# 150 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_ChoosePartyMons_Text_1
# 151 "data/scripts/silicon_frontier/general.pory"
	setvar VAR_SILICON_FACILITY_CHALLENGE_STATUS, SILICON_FRONTIER_CHALLENGE_STARTED
# 152 "data/scripts/silicon_frontier/general.pory"
	startmenu_savescreen
# 153 "data/scripts/silicon_frontier/general.pory"
	goto_if_unset FLAG_SYS_SAVE_SUCCESSFUL, SiliconFrontier_Script_NeedToSave
# 154 "data/scripts/silicon_frontier/general.pory"
	special ReducePlayerPartyToSelectedMons
# 155 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_Dialogue_IfYouReset
# 156 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 157 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_LeaveRoom
	return

SiliconFrontier_Script_ChoosePartyMons_2:
# 134 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_NotEnough
	goto SiliconFrontier_Script_ChoosePartyMons_1

SiliconFrontier_Script_ChoosePartyMons_5:
# 148 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_InvalidParty
	goto SiliconFrontier_Script_ChoosePartyMons_4


SiliconFrontier_Dialogue_IfYouReset::
# 162 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_IfYouReset_Text_0
	return


SiliconFrontier_Script_NeedToSave::
# 167 "data/scripts/silicon_frontier/general.pory"
	special LoadPlayerParty
# 168 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetCurrentChallenge
# 169 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_NeedToSave_Text_0
# 170 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_QuitAttendant
	return


SiliconFrontier_Script_LeaveRoom::
# 175 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_BATTLE_TOWER_SINGLES_ATTENDANT, 5, 2, DIR_WEST
# 176 "data/scripts/silicon_frontier/general.pory"
	delay 32
# 177 "data/scripts/silicon_frontier/general.pory"
	opendoor 4, 1
# 178 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_PLAYER, 4, 3, DIR_NORTH
# 179 "data/scripts/silicon_frontier/general.pory"
	waitmovement LOCALID_PLAYER
# 180 "data/scripts/silicon_frontier/general.pory"
	waitdooranim
# 181 "data/scripts/silicon_frontier/general.pory"
	playse SE_EXIT
# 182 "data/scripts/silicon_frontier/general.pory"
	applymovement LOCALID_PLAYER, SiliconFrontier_Script_LeaveRoom_Movement_0
# 183 "data/scripts/silicon_frontier/general.pory"
	waitmovement LOCALID_PLAYER
# 184 "data/scripts/silicon_frontier/general.pory"
	waitse
# 185 "data/scripts/silicon_frontier/general.pory"
	closedoor 4, 1
# 186 "data/scripts/silicon_frontier/general.pory"
	waitdooranim
# 187 "data/scripts/silicon_frontier/general.pory"
	warpsilent MAP_TIRABUDIN_PLACE_GYM_BATTLE_ROOM, 0
# 188 "data/scripts/silicon_frontier/general.pory"
	waitstate
	return


SiliconFrontier_Script_WalkIntoRoom::
# 193 "data/scripts/silicon_frontier/general.pory"
	lock
# 194 "data/scripts/silicon_frontier/general.pory"
	setvar VAR_SILICON_FACILITY_CHALLENGE_STATUS, SILICON_FRONTIER_CHALLENGE_IN_PROGRESS
# 195 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_StartBattle
	return


SiliconFrontier_Script_StartBattle::
# 200 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_AllowRecordedBattle
# 201 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_PLAYER, 3, 5, DIR_EAST
# 202 "data/scripts/silicon_frontier/general.pory"
	callnative LevelUpAllPokemonForFrontier
# 204 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetUpOpponent
# 206 "data/scripts/silicon_frontier/general.pory"
	removeobject LOCALID_TOWER_OPPONENT_A
# 207 "data/scripts/silicon_frontier/general.pory"
	clearflag FLAG_HIDE_FACILITY_OPPONENT
# 208 "data/scripts/silicon_frontier/general.pory"
	addobject LOCALID_TOWER_OPPONENT_A
# 210 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_TOWER_OPPONENT_A, 6, 5, DIR_WEST
# 211 "data/scripts/silicon_frontier/general.pory"
	waitmovement LOCALID_PLAYER
# 212 "data/scripts/silicon_frontier/general.pory"
	waitmovement LOCALID_TOWER_OPPONENT_A
# 214 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetUpTextA
# 215 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_StartBattle_Text_0
# 216 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 218 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_PLAYER, 4, 5, DIR_EAST
# 219 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_TOWER_OPPONENT_A, 5, 5, DIR_WEST
# 221 "data/scripts/silicon_frontier/general.pory"
	waitmovement LOCALID_PLAYER
# 222 "data/scripts/silicon_frontier/general.pory"
	waitmovement LOCALID_TOWER_OPPONENT_A
# 223 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_StartFacilityBattle
# 224 "data/scripts/silicon_frontier/general.pory"
	waitstate
# 225 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_DisableRecordedBattle
# 226 "data/scripts/silicon_frontier/general.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 227 "data/scripts/silicon_frontier/general.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_WON, SiliconFrontier_Script_LossBattle
# 228 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_WonBattle
	end


SiliconFroniter_Script_RecordBattle::
# 234 "data/scripts/silicon_frontier/general.pory"
	frontier_savebattle
# 235 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiliconFroniter_Script_RecordBattle_2
# 241 "data/scripts/silicon_frontier/general.pory"
	playse SE_SAVE
# 242 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFroniter_Script_RecordBattle_Text_1
SiliconFroniter_Script_RecordBattle_1:
# 244 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_BattleMenu
	return

SiliconFroniter_Script_RecordBattle_2:
# 237 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFroniter_Script_RecordBattle_Text_0
	goto SiliconFroniter_Script_RecordBattle_1


SiliconFrontier_Script_WonBattle::
# 249 "data/scripts/silicon_frontier/general.pory"
	lock
# 250 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_TryIncrementWinStreakAndRecord
# 251 "data/scripts/silicon_frontier/general.pory"
	showbpbox
# 252 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_BufferBP
# 253 "data/scripts/silicon_frontier/general.pory"
	variableaddbp VAR_0x8007, TRUE
# 254 "data/scripts/silicon_frontier/general.pory"
	applymovement LOCALID_TOWER_OPPONENT_A, SiliconFrontier_Script_WonBattle_Movement_0
# 255 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_TIRABUDIN_BATTLE_ROOM_ATTENDANT, 1, 5, DIR_EAST
# 256 "data/scripts/silicon_frontier/general.pory"
	moveobjecttocoords LOCALID_PLAYER, 2, 5, DIR_WEST
# 257 "data/scripts/silicon_frontier/general.pory"
	waitmovement LOCALID_TOWER_OPPONENT_A
# 258 "data/scripts/silicon_frontier/general.pory"
	playse SE_EXIT
# 259 "data/scripts/silicon_frontier/general.pory"
	bypass_healblock
# 260 "data/scripts/silicon_frontier/general.pory"
	cueobjectplayer LOCALID_TIRABUDIN_BATTLE_ROOM_ATTENDANT
# 261 "data/scripts/silicon_frontier/general.pory"
	hidebpbox
# 262 "data/scripts/silicon_frontier/general.pory"
	waitse
# 263 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_TryAwardBadge
# 264 "data/scripts/silicon_frontier/general.pory"
	call_if_ne VAR_RESULT, SILICON_FRONTIER_BOSS_PHASE_COUNT, SiliconFrontier_Dialogue_AwardBadge
# 265 "data/scripts/silicon_frontier/general.pory"
	playse SE_USE_ITEM
# 266 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_BufferStreakString
# 267 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_BattleMenu
	return


SiliconFrontier_Script_BattleMenu::
# 272 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_BattleMenu_Text_0
# 273 "data/scripts/silicon_frontier/general.pory"
	waitse
# 275 "data/scripts/silicon_frontier/general.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, NULL, SiliconFrontier_Script_BattleMenu_Text_1, SiliconFrontier_Script_BattleMenu_Text_2
# 276 "data/scripts/silicon_frontier/general.pory"
	switch VAR_RESULT
# 278 "data/scripts/silicon_frontier/general.pory"
	case 0, SiliconFrontier_Script_BattleMenu_2
# 281 "data/scripts/silicon_frontier/general.pory"
	case 1, SiliconFrontier_Script_BattleMenu_3
# 283 "data/scripts/silicon_frontier/general.pory"
	case 2, SiliconFrontier_Script_BattleMenu_4
	return

SiliconFrontier_Script_BattleMenu_2:
# 279 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 280 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_StartBattle
	return

SiliconFrontier_Script_BattleMenu_3:
# 282 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_LeaveChallenge
	return

SiliconFrontier_Script_BattleMenu_4:
# 284 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFroniter_Script_RecordBattle
	return


SiliconFrontier_Dialogue_AwardBadge::
# 290 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_BufferAwardSpeech
# 291 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AwardBadge_Text_0
# 292 "data/scripts/silicon_frontier/general.pory"
	playfanfare MUS_GET_BADGE
# 293 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AwardBadge_Text_1
# 294 "data/scripts/silicon_frontier/general.pory"
	waitfanfare
# 296 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, SILICON_FRONTIER_BOSS_PHASE_SILVER
	goto_if_eq SiliconFrontier_Dialogue_AwardBadge_2
SiliconFrontier_Dialogue_AwardBadge_1:
# 302 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AwardBadge_Text_3
	return

SiliconFrontier_Dialogue_AwardBadge_2:
# 298 "data/scripts/silicon_frontier/general.pory"
	call SiliconFrontier_BufferGoldMilestone
# 299 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_AwardBadge_Text_2
	goto SiliconFrontier_Dialogue_AwardBadge_1


SiliconFrontier_Script_LossBattle::
# 307 "data/scripts/silicon_frontier/general.pory"
	lock
# 308 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetCurrentStreak
# 309 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_LeaveBattleRoom
	return


SiliconFrontier_Dialogue_InvalidParty::
# 314 "data/scripts/silicon_frontier/general.pory"
	setvar VAR_0x8006, 0
SiliconFrontier_Dialogue_InvalidParty_3:
# 317 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ReturnPartyCodes
# 318 "data/scripts/silicon_frontier/general.pory"
	switch VAR_RESULT
# 320 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_PASS, SiliconFrontier_Dialogue_InvalidParty_7
# 321 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_EGG, SiliconFrontier_Dialogue_InvalidParty_8
# 323 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_LEGENDARY, SiliconFrontier_Dialogue_InvalidParty_9
# 325 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES, SiliconFrontier_Dialogue_InvalidParty_10
# 327 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_ITEM, SiliconFrontier_Dialogue_InvalidParty_11
# 329 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_TYPE, SiliconFrontier_Dialogue_InvalidParty_12
# 331 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES_ITEM, SiliconFrontier_Dialogue_InvalidParty_13
# 334 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES_TYPE, SiliconFrontier_Dialogue_InvalidParty_14
# 337 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_ITEM_TYPE, SiliconFrontier_Dialogue_InvalidParty_15
# 340 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_ALL, SiliconFrontier_Dialogue_InvalidParty_16
SiliconFrontier_Dialogue_InvalidParty_5:
# 345 "data/scripts/silicon_frontier/general.pory"
	addvar VAR_0x8006, 1
# 346 "data/scripts/silicon_frontier/general.pory"
	compare VAR_0x8006, FRONTIER_DOUBLES_PARTY_SIZE
	goto_if_lt SiliconFrontier_Dialogue_InvalidParty_3
# 347 "data/scripts/silicon_frontier/general.pory"
	special LoadPlayerParty
# 348 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetCurrentChallenge
# 349 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_AdjustPartyQuit
	return

SiliconFrontier_Dialogue_InvalidParty_7:
# 320 "data/scripts/silicon_frontier/general.pory"
	delay 1
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_8:
# 322 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_0
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_9:
# 324 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_1
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_10:
# 326 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_11:
# 328 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_12:
# 330 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_13:
# 332 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
# 333 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_14:
# 335 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
# 336 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_15:
# 338 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
# 339 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_16:
# 341 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
# 342 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
# 343 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5


SiliconFrontier_Dialogue_NotEnough::
# 354 "data/scripts/silicon_frontier/general.pory"
	callnative BufferLastChallengeType
# 355 "data/scripts/silicon_frontier/general.pory"
	callnative BufferPartySizeForChallenge
# 356 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_NotEnough_Text_0
# 357 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_AdjustPartyQuit
	return


SiliconFrontier_Script_AdjustPartyQuit::
# 362 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_AdjustPartyQuit_Text_0
# 363 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_QuitAttendant
	return


Debug_ToggleBosses::
# 368 "data/scripts/silicon_frontier/general.pory"
	msgbox Debug_ToggleBosses_Text_0
# 369 "data/scripts/silicon_frontier/general.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, NULL, Debug_ToggleBosses_Text_1, Debug_ToggleBosses_Text_2, Debug_ToggleBosses_Text_3, Debug_ToggleBosses_Text_4, Debug_ToggleBosses_Text_5, Debug_ToggleBosses_Text_6, Debug_ToggleBosses_Text_7, Debug_ToggleBosses_Text_8, Debug_ToggleBosses_Text_9, Debug_ToggleBosses_Text_10, Debug_ToggleBosses_Text_11, Debug_ToggleBosses_Text_12, Debug_ToggleBosses_Text_13, Debug_ToggleBosses_Text_14, Debug_ToggleBosses_Text_15, Debug_ToggleBosses_Text_16
# 370 "data/scripts/silicon_frontier/general.pory"
	callnative DebugToggleBosses
# 371 "data/scripts/silicon_frontier/general.pory"
	msgbox Debug_ToggleBosses_Text_17
# 372 "data/scripts/silicon_frontier/general.pory"
	closemessage
	end


SiliconFrontier_Dialogue_Disqualified::
# 378 "data/scripts/silicon_frontier/general.pory"
	lock
# 379 "data/scripts/silicon_frontier/general.pory"
	faceplayer
# 380 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetCurrentStreak
# 381 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_Disqualified_Text_0
# 382 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_SaveAfterQuitChallenge
	return


SiliconFrontier_Script_LeaveChallenge::
# 387 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_LeaveChallenge_Text_0
# 388 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 389 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_LeaveBattleRoom
	return


SiliconFrontier_Dialogue_LeaveBattleRoom::
# 394 "data/scripts/silicon_frontier/general.pory"
	setvar VAR_SILICON_FACILITY_CHALLENGE_STATUS, SILICON_FRONTIER_CHALLENGE_ENDED
# 395 "data/scripts/silicon_frontier/general.pory"
	warpsilent MAP_TIRABUDIN_PLACE_GYM_LOBBY, 4, 5
# 396 "data/scripts/silicon_frontier/general.pory"
	waitstate
	return


SiliconFrontier_Script_SaveAfterQuitChallenge::
# 401 "data/scripts/silicon_frontier/general.pory"
	lock
# 402 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_SaveAfterQuitChallenge_Text_0
# 403 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 404 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetCurrentChallenge
# 405 "data/scripts/silicon_frontier/general.pory"
	special LoadPlayerParty
# 406 "data/scripts/silicon_frontier/general.pory"
	setvar VAR_SILICON_FACILITY_CHALLENGE_STATUS, SILICON_FRONTIER_CHALLENGE_NOT_STARTED
# 407 "data/scripts/silicon_frontier/general.pory"
	setflag FLAG_SHOULD_SKIP_CREDITS
# 408 "data/scripts/silicon_frontier/general.pory"
	startmenu_savescreen
# 409 "data/scripts/silicon_frontier/general.pory"
	clearflag FLAG_SHOULD_SKIP_CREDITS
# 410 "data/scripts/silicon_frontier/general.pory"
	call_if_unset FLAG_SYS_SAVE_SUCCESSFUL, SiliconFrontier_Dialogue_SaveFailed
# 411 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_QuitAttendant
	return


SiliconFrontier_Dialogue_SaveFailed::
# 416 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_SaveFailed_Text_0
	return


SiliconFrontier_Script_FacePlayerUp::
# 421 "data/scripts/silicon_frontier/general.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


# 182 "data/scripts/silicon_frontier/general.pory"
SiliconFrontier_Script_LeaveRoom_Movement_0:
# 182 "data/scripts/silicon_frontier/general.pory"
	walk_up
# 182 "data/scripts/silicon_frontier/general.pory"
	walk_up
# 182 "data/scripts/silicon_frontier/general.pory"
	set_invisible
	step_end

# 254 "data/scripts/silicon_frontier/general.pory"
SiliconFrontier_Script_WonBattle_Movement_0:
# 254 "data/scripts/silicon_frontier/general.pory"
	walk_up
# 254 "data/scripts/silicon_frontier/general.pory"
	walk_up
# 254 "data/scripts/silicon_frontier/general.pory"
	walk_up
# 254 "data/scripts/silicon_frontier/general.pory"
	walk_up
# 254 "data/scripts/silicon_frontier/general.pory"
	set_invisible
	step_end

SiliconFrontier_Dialogue_AskResume_Text_0:
# 7 "data/scripts/silicon_frontier/general.pory"
	.string "Welcome back! Are you ready to start a\n"
	.string "new {STR_VAR_1} challenge?$"

SiliconFrontier_Dialogue_AskResume_Text_1:
# 11 "data/scripts/silicon_frontier/general.pory"
	.string "Welcome back! Are you here to continue\n"
	.string "your {STR_VAR_1} challenge?$"

SiliconFrontier_Dialogue_ExplainFacility_Text_0:
# 33 "data/scripts/silicon_frontier/general.pory"
	.string "What would you like information on?$"

SiliconFrontier_Dialogue_ExplainFacility_Text_1:
# 34 "data/scripts/silicon_frontier/general.pory"
	.string "Rules$"

SiliconFrontier_Dialogue_ExplainFacility_Text_2:
# 34 "data/scripts/silicon_frontier/general.pory"
	.string "Pokemon Allowed$"

SiliconFrontier_Dialogue_ExplainFacility_Text_3:
# 34 "data/scripts/silicon_frontier/general.pory"
	.string "Battle Points$"

SiliconFrontier_Dialogue_ExplainFacility_Text_4:
# 34 "data/scripts/silicon_frontier/general.pory"
	.string "Saving$"

SiliconFrontier_Dialogue_ExplainFacility_Text_5:
# 34 "data/scripts/silicon_frontier/general.pory"
	.string "Bosses$"

SiliconFrontier_Dialogue_ExplainFacility_Text_6:
# 34 "data/scripts/silicon_frontier/general.pory"
	.string "Never mind.$"

SiliconFrontier_ExplainBattleTower_Text_0:
# 50 "data/scripts/silicon_frontier/general.pory"
	.string "At the {STR_VAR_1}, defeat as many\n"
	.string "Trainers in a row as you can! Once you\n"
	.string "register with your party, you battle\l"
	.string "against a randomly chosen Trainer. If you\l"
	.string "defeat them, your party is healed and\l"
	.string "then you battle another Trainer. You\l"
	.string "keep going until you finally lose.$"

SiliconFrontier_Dialogue_AllowedPokemon_Text_0:
# 56 "data/scripts/silicon_frontier/general.pory"
	.string "You can compete with any Pokemon\n"
	.string "normally found in Resido.$"

SiliconFrontier_Dialogue_AllowedPokemon_Text_1:
# 59 "data/scripts/silicon_frontier/general.pory"
	.string "You cannot compete with these Pokemon.$"

SiliconFrontier_Dialogue_BattlePoints_Text_0:
# 68 "data/scripts/silicon_frontier/general.pory"
	.string "After every win, you recieve\n"
	.string "{STR_VAR_1} Battle Point. Battle\n"
	.string "Points can be used to purchases prizes!$"

SiliconFrontier_Dialogue_BattlePoints_Text_1:
# 71 "data/scripts/silicon_frontier/general.pory"
	.string "Every {STR_VAR_1} wins, you'll get\n"
	.string "{STR_VAR_2} Battle Points, and every\n"
	.string "win after that will reward an extra\l"
	.string "{STR_VAR_3} Battle Point.$"

SiliconFrontier_Dialogue_BattlePoints_Text_2:
# 74 "data/scripts/silicon_frontier/general.pory"
	.string "After earning the {STR_VAR_1} or\n"
	.string "{STR_VAR_2} for the first time, you'll\n"
	.string "get a one time bonus of {STR_VAR_3}\l"
	.string "Points!$"

SiliconFrontier_Dialogue_ExplainSaving_Text_0:
# 79 "data/scripts/silicon_frontier/general.pory"
	.string "Once your party has been registered, you\n"
	.string "must save the game to proceed.$"

SiliconFrontier_Dialogue_ExplainSaving_Text_1:
# 81 "data/scripts/silicon_frontier/general.pory"
	.string "Don't try to cheat!$"

SiliconFrontier_Dialogue_ExplainBadges_Text_0:
# 87 "data/scripts/silicon_frontier/general.pory"
	.string "After winning {STR_VAR_1} battles in\n"
	.string "a row, Trainers will recieve the\n"
	.string "{STR_VAR_2}.$"

SiliconFrontier_Dialogue_ExplainBadges_Text_1:
# 89 "data/scripts/silicon_frontier/general.pory"
	.string "If they can get to a streak of\n"
	.string "{STR_VAR_1} wins, Trainers will\n"
	.string "recieve the coveted {STR_VAR_2}!$"

SiliconFroniter_Dialogue_AskMenu_Text_0:
# 95 "data/scripts/silicon_frontier/general.pory"
	.string "Welcome to the {STR_VAR_1}! What\n"
	.string "would you like to do?$"

SiliconFroniter_Dialogue_AskMenu_Text_1:
# 96 "data/scripts/silicon_frontier/general.pory"
	.string "Start Challenge$"

SiliconFroniter_Dialogue_AskMenu_Text_2:
# 96 "data/scripts/silicon_frontier/general.pory"
	.string "Info$"

SiliconFrontier_Script_QuitAttendant_Text_0:
# 108 "data/scripts/silicon_frontier/general.pory"
	.string "We hope to see you again!$"

SiliconFrontier_Script_RegisterChallenge_Text_0:
# 116 "data/scripts/silicon_frontier/general.pory"
	.string "Which challenge would you like to start?$"

SiliconFrontier_Script_RegisterChallenge_Text_1:
# 119 "data/scripts/silicon_frontier/general.pory"
	.string "Multi$"

SiliconFrontier_Script_ChoosePartyMons_Text_0:
# 137 "data/scripts/silicon_frontier/general.pory"
	.string "Which Pokemon will you enter the Facility\n"
	.string "with?$"

SiliconFrontier_Script_ChoosePartyMons_Text_1:
# 150 "data/scripts/silicon_frontier/general.pory"
	.string "Your party has been registered! You must\n"
	.string "now save the game to proceed.$"

SiliconFrontier_Dialogue_IfYouReset_Text_0:
# 162 "data/scripts/silicon_frontier/general.pory"
	.string "If you turn off or reset your game\n"
	.string "before saving again, you will be\n"
	.string "disqualified, and your entire streak and\l"
	.string "prizes will be forfeit.$"

SiliconFrontier_Script_NeedToSave_Text_0:
# 169 "data/scripts/silicon_frontier/general.pory"
	.string "Unfortunately, you cannot enter the\n"
	.string "facility until you save. Please return\n"
	.string "when you're ready to save.$"

SiliconFrontier_Script_StartBattle_Text_0:
# 215 "data/scripts/silicon_frontier/general.pory"
	.string "{STR_VAR_1}$"

SiliconFroniter_Script_RecordBattle_Text_0:
# 237 "data/scripts/silicon_frontier/general.pory"
	.string "There was an error of some kind. Your\n"
	.string "battle could not be saved.$"

SiliconFroniter_Script_RecordBattle_Text_1:
# 242 "data/scripts/silicon_frontier/general.pory"
	.string "Your battle was recorded! You can watch\n"
	.string "it later.$"

SiliconFrontier_Script_BattleMenu_Text_0:
# 272 "data/scripts/silicon_frontier/general.pory"
	.string "Your party has been fully healed. Would\n"
	.string "you like to continue your {STR_VAR_2}\n"
	.string "battle streak?$"

SiliconFrontier_Script_BattleMenu_Text_1:
# 275 "data/scripts/silicon_frontier/general.pory"
	.string "Continue$"

SiliconFrontier_Script_BattleMenu_Text_2:
# 275 "data/scripts/silicon_frontier/general.pory"
	.string "Leave$"

SiliconFrontier_Dialogue_AwardBadge_Text_0:
# 291 "data/scripts/silicon_frontier/general.pory"
	.string "Congratulations on your win against\n"
	.string "{STR_VAR_1}!$"

SiliconFrontier_Dialogue_AwardBadge_Text_1:
# 293 "data/scripts/silicon_frontier/general.pory"
	.string "For your wonderful achievement of a\n"
	.string "{STR_VAR_2} win streak, we are proud\n"
	.string "to present you with the {STR_VAR_3}!$"

SiliconFrontier_Dialogue_AwardBadge_Text_2:
# 299 "data/scripts/silicon_frontier/general.pory"
	.string "We look forward to seeing you achieve a\n"
	.string "{STR_VAR_1} win streak!$"

SiliconFrontier_Dialogue_AwardBadge_Text_3:
# 302 "data/scripts/silicon_frontier/general.pory"
	.string "We hope you continue training with us\n"
	.string "going forward!$"

SiliconFrontier_Dialogue_InvalidParty_Text_0:
# 322 "data/scripts/silicon_frontier/general.pory"
	.string "{STR_VAR_1} is an Egg. It cannot be\n"
	.string "entered.$"

SiliconFrontier_Dialogue_InvalidParty_Text_1:
# 324 "data/scripts/silicon_frontier/general.pory"
	.string "{STR_VAR_1} isn't a Pokemon we're\n"
	.string "familiar with... I don't think its fair to\n"
	.string "enter with this.$"

SiliconFrontier_Dialogue_InvalidParty_Text_2:
# 326 "data/scripts/silicon_frontier/general.pory"
	.string "Each species in your registered party\n"
	.string "must be a unique species.\n"
	.string "{STR_VAR_1}'s species was in your\l"
	.string "registered party more than once.$"

SiliconFrontier_Dialogue_InvalidParty_Text_3:
# 328 "data/scripts/silicon_frontier/general.pory"
	.string "Each item held in your registered party\n"
	.string "must be a unique item. {STR_VAR_1} is\n"
	.string "holding {STR_VAR_2}, which is already\l"
	.string "held by another member of your\l"
	.string "registered party.$"

SiliconFrontier_Dialogue_InvalidParty_Text_4:
# 330 "data/scripts/silicon_frontier/general.pory"
	.string "You selected {STR_VAR_3}-type for\n"
	.string "this challenge, but {STR_VAR_1} does\n"
	.string "not have that type.$"

SiliconFrontier_Dialogue_NotEnough_Text_0:
# 356 "data/scripts/silicon_frontier/general.pory"
	.string "Taking on a {STR_VAR_1} challenge\n"
	.string "requires that you have at least\n"
	.string "{STR_VAR_2} Pokemon in your party.$"

SiliconFrontier_Script_AdjustPartyQuit_Text_0:
# 362 "data/scripts/silicon_frontier/general.pory"
	.string "Please adjust your party and return once\n"
	.string "you're ready.$"

Debug_ToggleBosses_Text_0:
# 368 "data/scripts/silicon_frontier/general.pory"
	.string "what boss do you want to unlock?$"

Debug_ToggleBosses_Text_1:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Pua$"

Debug_ToggleBosses_Text_2:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Baiya$"

Debug_ToggleBosses_Text_3:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Ami_Argento$"

Debug_ToggleBosses_Text_4:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Tala$"

Debug_ToggleBosses_Text_5:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Dimu$"

Debug_ToggleBosses_Text_6:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Adaora$"

Debug_ToggleBosses_Text_7:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Emrys$"

Debug_ToggleBosses_Text_8:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Magnus$"

Debug_ToggleBosses_Text_9:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Bd$"

Debug_ToggleBosses_Text_10:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Charlotte$"

Debug_ToggleBosses_Text_11:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Neriene$"

Debug_ToggleBosses_Text_12:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Frank$"

Debug_ToggleBosses_Text_13:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Shinzo$"

Debug_ToggleBosses_Text_14:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Kei_Ying$"

Debug_ToggleBosses_Text_15:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Belen$"

Debug_ToggleBosses_Text_16:
# 369 "data/scripts/silicon_frontier/general.pory"
	.string "Eleanor$"

Debug_ToggleBosses_Text_17:
# 371 "data/scripts/silicon_frontier/general.pory"
	.string "done$"

SiliconFrontier_Dialogue_Disqualified_Text_0:
# 381 "data/scripts/silicon_frontier/general.pory"
	.string "You turned off or reset your game during\n"
	.string "the challenge! Unfortunately, your\n"
	.string "entire streak is now forfeit.$"

SiliconFrontier_Script_LeaveChallenge_Text_0:
# 387 "data/scripts/silicon_frontier/general.pory"
	.string "You will stop the current challenge. You\n"
	.string "are free to return at any time, and your\n"
	.string "streak will be resumed.$"

SiliconFrontier_Script_SaveAfterQuitChallenge_Text_0:
# 402 "data/scripts/silicon_frontier/general.pory"
	.string "We will now save your progress. Please\n"
	.string "wait.$"

SiliconFrontier_Dialogue_SaveFailed_Text_0:
# 416 "data/scripts/silicon_frontier/general.pory"
	.string "Saving your progress did not work. Your\n"
	.string "progress has not been saved. Please try\n"
	.string "to save again.$"
