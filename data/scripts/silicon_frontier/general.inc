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
	msgbox SiliconFrontier_Dialogue_InteractAttendant_Text_0
# 27 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFrontier_GetLastChallengeTypeFromCurrentFacility
# 28 "data/scripts/silicon_frontier/general.pory"
	call_if_ne VAR_RESULT, SILICON_FRONTIER_CHALLENGE_TYPE_NONE, SiliconFrontier_Dialogue_AskResume
# 29 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFroniter_Dialogue_AskMenu
	return


SiliconFrontier_Dialogue_ExplainFacility::
# 34 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainFacility_Text_0
# 35 "data/scripts/silicon_frontier/general.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, NULL, SiliconFrontier_Dialogue_ExplainFacility_Text_1, SiliconFrontier_Dialogue_ExplainFacility_Text_2, SiliconFrontier_Dialogue_ExplainFacility_Text_3, SiliconFrontier_Dialogue_ExplainFacility_Text_4, SiliconFrontier_Dialogue_ExplainFacility_Text_5, SiliconFrontier_Dialogue_ExplainFacility_Text_6
# 36 "data/scripts/silicon_frontier/general.pory"
	switch VAR_RESULT
# 38 "data/scripts/silicon_frontier/general.pory"
	case 0, SiliconFrontier_Dialogue_ExplainFacility_3
# 39 "data/scripts/silicon_frontier/general.pory"
	case 1, SiliconFrontier_Dialogue_ExplainFacility_4
# 40 "data/scripts/silicon_frontier/general.pory"
	case 2, SiliconFrontier_Dialogue_ExplainFacility_5
# 41 "data/scripts/silicon_frontier/general.pory"
	case 3, SiliconFrontier_Dialogue_ExplainFacility_6
# 42 "data/scripts/silicon_frontier/general.pory"
	case 4, SiliconFrontier_Dialogue_ExplainFacility_7
# 43 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFroniter_Dialogue_AskMenu
SiliconFrontier_Dialogue_ExplainFacility_1:
# 45 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFroniter_Dialogue_AskMenu
	return

SiliconFrontier_Dialogue_ExplainFacility_3:
# 38 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainFacility_Text_7
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_4:
# 39 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainFacility_Text_8
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_5:
# 40 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainFacility_Text_9
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_6:
# 41 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainFacility_Text_10
	goto SiliconFrontier_Dialogue_ExplainFacility_1

SiliconFrontier_Dialogue_ExplainFacility_7:
# 42 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_ExplainFacility_Text_11
	goto SiliconFrontier_Dialogue_ExplainFacility_1


SiliconFroniter_Dialogue_AskMenu::
# 50 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFroniter_Dialogue_AskMenu_Text_0
# 51 "data/scripts/silicon_frontier/general.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, NULL, SiliconFroniter_Dialogue_AskMenu_Text_1, SiliconFroniter_Dialogue_AskMenu_Text_2, SiliconFrontier_Dialogue_ExplainFacility_Text_6
# 52 "data/scripts/silicon_frontier/general.pory"
	switch VAR_RESULT
# 54 "data/scripts/silicon_frontier/general.pory"
	case 0, SiliconFroniter_Dialogue_AskMenu_2
# 55 "data/scripts/silicon_frontier/general.pory"
	case 1, SiliconFroniter_Dialogue_AskMenu_3
# 56 "data/scripts/silicon_frontier/general.pory"
	case MULTI_B_PRESSED, SiliconFroniter_Dialogue_AskMenu_4
# 57 "data/scripts/silicon_frontier/general.pory"
	case 2, SiliconFroniter_Dialogue_AskMenu_4
	return

SiliconFroniter_Dialogue_AskMenu_2:
# 54 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_RegisterChallenge
	return

SiliconFroniter_Dialogue_AskMenu_3:
# 55 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_ExplainFacility
	return

SiliconFroniter_Dialogue_AskMenu_4:
# 57 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_QuitAttendant
	return


SiliconFrontier_Script_QuitAttendant::
# 63 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_QuitAttendant_Text_0
# 64 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 65 "data/scripts/silicon_frontier/general.pory"
	release
	end


SiliconFrontier_Script_RegisterChallenge::
# 71 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_RegisterChallenge_Text_0
# 72 "data/scripts/silicon_frontier/general.pory"
	dynmultipush gText_Single, SILICON_FRONTIER_CHALLENGE_TYPE_SINGLE
# 73 "data/scripts/silicon_frontier/general.pory"
	dynmultipush gText_Double, SILICON_FRONTIER_CHALLENGE_TYPE_DOUBLE
# 74 "data/scripts/silicon_frontier/general.pory"
	dynmultipush SiliconFrontier_Script_RegisterChallenge_Text_1, SILICON_FRONTIER_CHALLENGE_TYPE_MULTI
# 75 "data/scripts/silicon_frontier/general.pory"
	dynmultipush SiliconFrontier_Dialogue_ExplainFacility_Text_6, MULTI_B_PRESSED
# 76 "data/scripts/silicon_frontier/general.pory"
	dynmultistack 0, 0, FALSE, 3, TRUE, 0, NULL
# 77 "data/scripts/silicon_frontier/general.pory"
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, SiliconFrontier_Script_QuitAttendant
# 78 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_ChoosePartyMons
	return


SiliconFrontier_Script_ChoosePartyMons::
# 83 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetCurrentChallengeFromVars
# 84 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetLastChallengeFromCurrentChallenge
# 86 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFrontier_IsPartyValidForChallenge
# 87 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiliconFrontier_Script_ChoosePartyMons_2
SiliconFrontier_Script_ChoosePartyMons_1:
# 92 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_ChoosePartyMons_Text_0
# 93 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 94 "data/scripts/silicon_frontier/general.pory"
	special SavePlayerParty
# 95 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetPartyScreenPickAmount
# 96 "data/scripts/silicon_frontier/general.pory"
	special ChoosePartyForBattleFrontier
# 97 "data/scripts/silicon_frontier/general.pory"
	goto_if_eq VAR_RESULT, FALSE, SiliconFrontier_Script_QuitAttendant
# 98 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_SetSelectedMons
# 99 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_CheckMonEligibility
# 100 "data/scripts/silicon_frontier/general.pory"
	callnative Script_SiliconFrontier_AreChosenMonsEligible
# 101 "data/scripts/silicon_frontier/general.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiliconFrontier_Script_ChoosePartyMons_5
SiliconFrontier_Script_ChoosePartyMons_4:
# 105 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_ChoosePartyMons_Text_1
# 106 "data/scripts/silicon_frontier/general.pory"
	setflag FLAG_SYS_FRONTIER_CHALLENGE_STARTED
# 107 "data/scripts/silicon_frontier/general.pory"
	startmenu_savescreen
# 108 "data/scripts/silicon_frontier/general.pory"
	goto_if_unset FLAG_SYS_SAVE_SUCCESSFUL, SiliconFrontier_Script_NeedToSave
# 109 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_ChoosePartyMons_Text_2
# 110 "data/scripts/silicon_frontier/general.pory"
	closemessage
# 111 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_WalkIntoRoom
	return

SiliconFrontier_Script_ChoosePartyMons_2:
# 89 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_NotEnough
	goto SiliconFrontier_Script_ChoosePartyMons_1

SiliconFrontier_Script_ChoosePartyMons_5:
# 103 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Dialogue_InvalidParty
	goto SiliconFrontier_Script_ChoosePartyMons_4


SiliconFrontier_Script_NeedToSave::
# 116 "data/scripts/silicon_frontier/general.pory"
	special LoadPlayerParty
# 117 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ResetCurrentChallenge
# 118 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_NeedToSave_Text_0
# 119 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_QuitAttendant
	return


SiliconFrontier_Script_WalkIntoRoom::
	return


SiliconFrontier_Script_StartBattle::
# 132 "data/scripts/silicon_frontier/general.pory"
	callnative LevelAllPokemonTo50
	return


SiliconFrontier_Script_WonBattle::
	return


SiliconFrontier_Script_LossBattle::
	return


SiliconFrontier_Dialogue_InvalidParty::
# 176 "data/scripts/silicon_frontier/general.pory"
	setvar VAR_0x8006, 0
SiliconFrontier_Dialogue_InvalidParty_3:
# 179 "data/scripts/silicon_frontier/general.pory"
	callnative SiliconFrontier_ReturnPartyCodes
# 180 "data/scripts/silicon_frontier/general.pory"
	switch VAR_RESULT
# 182 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_PASS, SiliconFrontier_Dialogue_InvalidParty_7
# 183 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_EGG, SiliconFrontier_Dialogue_InvalidParty_8
# 185 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_LEGENDARY, SiliconFrontier_Dialogue_InvalidParty_9
# 187 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES, SiliconFrontier_Dialogue_InvalidParty_10
# 189 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_ITEM, SiliconFrontier_Dialogue_InvalidParty_11
# 191 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_TYPE, SiliconFrontier_Dialogue_InvalidParty_12
# 193 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES_ITEM, SiliconFrontier_Dialogue_InvalidParty_13
# 196 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_SPECIES_TYPE, SiliconFrontier_Dialogue_InvalidParty_14
# 199 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_ITEM_TYPE, SiliconFrontier_Dialogue_InvalidParty_15
# 202 "data/scripts/silicon_frontier/general.pory"
	case SILICON_FRONTIER_ELIGIBILITY_CODE_ALL, SiliconFrontier_Dialogue_InvalidParty_16
SiliconFrontier_Dialogue_InvalidParty_5:
# 207 "data/scripts/silicon_frontier/general.pory"
	addvar VAR_0x8006, 1
# 208 "data/scripts/silicon_frontier/general.pory"
	compare VAR_0x8006, FRONTIER_DOUBLES_PARTY_SIZE
	goto_if_lt SiliconFrontier_Dialogue_InvalidParty_3
# 209 "data/scripts/silicon_frontier/general.pory"
	special LoadPlayerParty
# 210 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_AdjustPartyQuit
	return

SiliconFrontier_Dialogue_InvalidParty_7:
# 182 "data/scripts/silicon_frontier/general.pory"
	delay 1
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_8:
# 184 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_0
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_9:
# 186 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_1
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_10:
# 188 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_11:
# 190 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_12:
# 192 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_13:
# 194 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
# 195 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_14:
# 197 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
# 198 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_15:
# 200 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
# 201 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5

SiliconFrontier_Dialogue_InvalidParty_16:
# 203 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_2
# 204 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_3
# 205 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_InvalidParty_Text_4
	goto SiliconFrontier_Dialogue_InvalidParty_5


SiliconFrontier_Dialogue_NotEnough::
# 215 "data/scripts/silicon_frontier/general.pory"
	callnative BufferLastChallengeType
# 216 "data/scripts/silicon_frontier/general.pory"
	callnative BufferPartySizeForChallenge
# 217 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Dialogue_NotEnough_Text_0
# 218 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_AdjustPartyQuit
	return


SiliconFrontier_Script_AdjustPartyQuit::
# 223 "data/scripts/silicon_frontier/general.pory"
	msgbox SiliconFrontier_Script_AdjustPartyQuit_Text_0
# 224 "data/scripts/silicon_frontier/general.pory"
	goto SiliconFrontier_Script_QuitAttendant
	return


SiliconFrontier_Dialogue_AskResume_Text_0:
# 7 "data/scripts/silicon_frontier/general.pory"
	.string "Welcome back! Are you ready to start a\n"
	.string "new {STR_VAR_1} challenge?$"

SiliconFrontier_Dialogue_AskResume_Text_1:
# 11 "data/scripts/silicon_frontier/general.pory"
	.string "Are you here to continue your\n"
	.string "{STR_VAR_1} challenge?$"

SiliconFrontier_Dialogue_InteractAttendant_Text_0:
# 26 "data/scripts/silicon_frontier/general.pory"
	.string "Welcome to the Battle Tower!$"

SiliconFrontier_Dialogue_ExplainFacility_Text_0:
# 34 "data/scripts/silicon_frontier/general.pory"
	.string "What would you like information on?$"

SiliconFrontier_Dialogue_ExplainFacility_Text_1:
# 35 "data/scripts/silicon_frontier/general.pory"
	.string "Rules$"

SiliconFrontier_Dialogue_ExplainFacility_Text_2:
# 35 "data/scripts/silicon_frontier/general.pory"
	.string "Pokemon Allowed$"

SiliconFrontier_Dialogue_ExplainFacility_Text_3:
# 35 "data/scripts/silicon_frontier/general.pory"
	.string "Battle Points$"

SiliconFrontier_Dialogue_ExplainFacility_Text_4:
# 35 "data/scripts/silicon_frontier/general.pory"
	.string "Saving$"

SiliconFrontier_Dialogue_ExplainFacility_Text_5:
# 35 "data/scripts/silicon_frontier/general.pory"
	.string "Badges$"

SiliconFrontier_Dialogue_ExplainFacility_Text_6:
# 35 "data/scripts/silicon_frontier/general.pory"
	.string "Never mind.$"

SiliconFrontier_Dialogue_ExplainFacility_Text_7:
# 38 "data/scripts/silicon_frontier/general.pory"
	.string "I explain the rules of the facility.$"

SiliconFrontier_Dialogue_ExplainFacility_Text_8:
# 39 "data/scripts/silicon_frontier/general.pory"
	.string "I explain which Pokemon are allowed.$"

SiliconFrontier_Dialogue_ExplainFacility_Text_9:
# 40 "data/scripts/silicon_frontier/general.pory"
	.string "I explain Battle Points.$"

SiliconFrontier_Dialogue_ExplainFacility_Text_10:
# 41 "data/scripts/silicon_frontier/general.pory"
	.string "I explain saving.$"

SiliconFrontier_Dialogue_ExplainFacility_Text_11:
# 42 "data/scripts/silicon_frontier/general.pory"
	.string "I explain getting badges at 50 and 100\n"
	.string "win streaks.$"

SiliconFroniter_Dialogue_AskMenu_Text_0:
# 50 "data/scripts/silicon_frontier/general.pory"
	.string "What would you like to do?$"

SiliconFroniter_Dialogue_AskMenu_Text_1:
# 51 "data/scripts/silicon_frontier/general.pory"
	.string "Start Challenge$"

SiliconFroniter_Dialogue_AskMenu_Text_2:
# 51 "data/scripts/silicon_frontier/general.pory"
	.string "Info$"

SiliconFrontier_Script_QuitAttendant_Text_0:
# 63 "data/scripts/silicon_frontier/general.pory"
	.string "We hope to see you again!$"

SiliconFrontier_Script_RegisterChallenge_Text_0:
# 71 "data/scripts/silicon_frontier/general.pory"
	.string "Which challenge would you like to start?$"

SiliconFrontier_Script_RegisterChallenge_Text_1:
# 74 "data/scripts/silicon_frontier/general.pory"
	.string "Multi$"

SiliconFrontier_Script_ChoosePartyMons_Text_0:
# 92 "data/scripts/silicon_frontier/general.pory"
	.string "Which Pokemon will you enter the Facility\n"
	.string "with?$"

SiliconFrontier_Script_ChoosePartyMons_Text_1:
# 105 "data/scripts/silicon_frontier/general.pory"
	.string "Your party has been registered! You must\n"
	.string "now save the game to proceed.$"

SiliconFrontier_Script_ChoosePartyMons_Text_2:
# 109 "data/scripts/silicon_frontier/general.pory"
	.string "If you turn off your game before saving\n"
	.string "again, you will be disqualified, and your\n"
	.string "prizes will be forfeit.$"

SiliconFrontier_Script_NeedToSave_Text_0:
# 118 "data/scripts/silicon_frontier/general.pory"
	.string "Unfortunately, you cannot enter the\n"
	.string "facility until you save. Please return\n"
	.string "when you're ready to save.$"

SiliconFrontier_Dialogue_InvalidParty_Text_0:
# 184 "data/scripts/silicon_frontier/general.pory"
	.string "{STR_VAR_1} is an Egg. It cannot be\n"
	.string "entered.$"

SiliconFrontier_Dialogue_InvalidParty_Text_1:
# 186 "data/scripts/silicon_frontier/general.pory"
	.string "{STR_VAR_1} isn't a Pokemon we're\n"
	.string "familiar with... I don't think its fair to\n"
	.string "enter with this.$"

SiliconFrontier_Dialogue_InvalidParty_Text_2:
# 188 "data/scripts/silicon_frontier/general.pory"
	.string "Each species in your registered party\n"
	.string "must be a unique species.\n"
	.string "{STR_VAR_1}'s species was in your\l"
	.string "registered party more than once.$"

SiliconFrontier_Dialogue_InvalidParty_Text_3:
# 190 "data/scripts/silicon_frontier/general.pory"
	.string "Each item held in your registered party\n"
	.string "must be a unique item. {STR_VAR_1} is\n"
	.string "holding {STR_VAR_2}, which is already\l"
	.string "held by another member of your\l"
	.string "registered party.$"

SiliconFrontier_Dialogue_InvalidParty_Text_4:
# 192 "data/scripts/silicon_frontier/general.pory"
	.string "You selected {STR_VAR_3}-type for\n"
	.string "this challenge, but {STR_VAR_1} does\n"
	.string "not have that type.$"

SiliconFrontier_Dialogue_NotEnough_Text_0:
# 217 "data/scripts/silicon_frontier/general.pory"
	.string "Taking on a {STR_VAR_1} challenge\n"
	.string "requires that you have at least\n"
	.string "{STR_VAR_2} Pokemon in your party.$"

SiliconFrontier_Script_AdjustPartyQuit_Text_0:
# 223 "data/scripts/silicon_frontier/general.pory"
	.string "Please adjust your party and return once\n"
	.string "you're ready.$"
