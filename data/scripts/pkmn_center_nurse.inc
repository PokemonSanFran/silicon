Common_EventScript_PkmnCenterNurse::
	lock
	faceplayer
    copyvar VAR_0x8004, VAR_LAST_TALKED // siliconMerge
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, CountPlayerTrainerStars
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
    // Start Speedy Nurse
	//msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO, SPEAKER_NURSE
    setvar VAR_RESULT, YES
    // End Speedy Nurse
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
	end

EventScript_PkmnCenterNurse_Goodbye::
	msgbox gText_WeHopeToSeeYouAgain,,SPEAKER_NURSE // siliconMerge
    goto EventScript_PkmnCenterNurse_PlayerTurn // Speedy Nurse
	return

@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
EventScript_PkmnCenterNurse_HealPkmn::
	incrementgamestat GAME_STAT_USED_POKECENTER
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
	end

EventScript_PkmnCenterNurse_IllTakeYourPkmn::
	msgbox gText_IllTakeYourPkmn,,SPEAKER_NURSE // siliconMerge
	return

EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
	msgbox gText_IllTakeYourPkmn2,,SPEAKER_NURSE // siliconMerge
	return

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
	hidefollower 0
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Turn
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
.if OW_UNION_DISABLE_CHECK == FALSE && OW_FLAG_MOVE_UNION_ROOM_CHECK != 0
	setflag OW_FLAG_MOVE_UNION_ROOM_CHECK
	call CableClub_OnResume
	clearflag OW_FLAG_MOVE_UNION_ROOM_CHECK
.endif
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	return

EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
	copyvar VAR_0x8008, VAR_RESULT
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
	end

@ VAR_0x8004 is 1 when player has Gold Card
EventScript_PkmnCenterNurse_ReturnPkmn::
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
	msgbox gText_RestoredPkmnToFullHealth,,SPEAKER_NURSE // siliconMerge
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	msgbox gText_WeHopeToSeeYouAgain,,SPEAKER_NURSE // siliconMerge
    goto EventScript_PkmnCenterNurse_PlayerTurn // Speedy Nurse
	return

EventScript_PkmnCenterNurse_ReturnPkmn2::
	msgbox gText_ThankYouForWaiting,,SPEAKER_NURSE // siliconMerge
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	msgbox gText_WeHopeToSeeYouAgain2,,SPEAKER_NURSE // siliconMerge
    goto EventScript_PkmnCenterNurse_PlayerTurn // Speedy Nurse
	return

EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT, SPEAKER_NURSE // siliconMerge
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
	msgbox CableClub_Text_PlayerIsWaiting,,SPEAKER_NURSE // siliconMerge
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	msgbox gText_WeHopeToSeeYouAgain,,SPEAKER_NURSE // siliconMerge
    goto EventScript_PkmnCenterNurse_PlayerTurn // Speedy Nurse
	return

EventScript_PkmnCenterNurse_CheckPokerus::
	specialvar VAR_RESULT, IsPokerusInParty
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
	end

EventScript_PkmnCenterNurse_ExplainPokerus::
	msgbox gText_PokerusExplanation,,SPEAKER_NURSE // siliconMerge
	setflag FLAG_POKERUS_EXPLAINED
	return

EventScript_PkmnCenterNurse_GoldCard::
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT, SPEAKER_NURSE // siliconMerge
	playse SE_PIN
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x800B, Common_Movement_Delay48
	waitmovement 0
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO, SPEAKER_NURSE // siliconMerge
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	msgbox gText_WeHopeToSeeYouAgain2 // siliconMerge
    goto EventScript_PkmnCenterNurse_PlayerTurn // Speedy Nurse
	return

EventScript_PkmnCenterNurse_AskForUsual::
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO, SPEAKER_NURSE // siliconMerge
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	msgbox gText_WeHopeToSeeYouAgain2,,SPEAKER_NURSE // siliconMerge
    goto EventScript_PkmnCenterNurse_PlayerTurn // Speedy Nurse
	return
    // Start Speedy Nurse
EventScript_PkmnCenterNurse_PlayerTurn::
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
  waitmovement 0
  call TryAutoSave // autoSave
  release
  end
    // End Speedy Nurse

EventScript_PkmnCenterNurse_GoldCardHealPkmn::
	setvar VAR_0x8004, 1
	goto EventScript_PkmnCenterNurse_HealPkmn
	end

Movement_PkmnCenterNurse_Bow:
	nurse_joy_bow
	delay_4
	step_end

Movement_PkmnCenterNurse_Turn:
	walk_in_place_faster_left
	step_end
