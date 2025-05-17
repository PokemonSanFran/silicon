Common_EventScript_FindItem::
# 3 "data/scripts/item_ball_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 4 "data/scripts/item_ball_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
# 5 "data/scripts/item_ball_scripts.pory"
	call Common_EventScript_StoryItem
	end


Common_EventScript_StoryItem::
# 11 "data/scripts/item_ball_scripts.pory"
	switch VAR_RESULT
# 13 "data/scripts/item_ball_scripts.pory"
	case ITEM_OAKS_PARCEL, Common_EventScript_StoryItem_2
# 14 "data/scripts/item_ball_scripts.pory"
	case ITEM_ROTOM_CATALOG, Common_EventScript_StoryItem_3
# 15 "data/scripts/item_ball_scripts.pory"
	case ITEM_GRACIDEA, Common_EventScript_StoryItem_4
# 16 "data/scripts/item_ball_scripts.pory"
	case ITEM_REVEAL_GLASS, Common_EventScript_StoryItem_5
# 17 "data/scripts/item_ball_scripts.pory"
	case ITEM_DNA_SPLICERS, Common_EventScript_StoryItem_6
# 18 "data/scripts/item_ball_scripts.pory"
	case ITEM_ZYGARDE_CUBE, Common_EventScript_StoryItem_7
# 19 "data/scripts/item_ball_scripts.pory"
	case ITEM_PRISON_BOTTLE, Common_EventScript_StoryItem_8
# 20 "data/scripts/item_ball_scripts.pory"
	case ITEM_N_SOLARIZER, Common_EventScript_StoryItem_9
# 21 "data/scripts/item_ball_scripts.pory"
	case ITEM_N_LUNARIZER, Common_EventScript_StoryItem_10
# 22 "data/scripts/item_ball_scripts.pory"
	case ITEM_REINS_OF_UNITY, Common_EventScript_StoryItem_11
# 23 "data/scripts/item_ball_scripts.pory"
	case ITEM_PANNEN_JOURNAL_PAGE_1, Common_EventScript_StoryItem_12
# 24 "data/scripts/item_ball_scripts.pory"
	case ITEM_PANNEN_JOURNAL_PAGE_2, Common_EventScript_StoryItem_13
# 25 "data/scripts/item_ball_scripts.pory"
	case ITEM_PANNEN_JOURNAL_PAGE_3, Common_EventScript_StoryItem_14
	return

Common_EventScript_StoryItem_2:
# 13 "data/scripts/item_ball_scripts.pory"
	call EspuleeOutskirts_Ranger_Quest_Manofmanyhats_EventScript_ItemHeadphones
	return

Common_EventScript_StoryItem_3:
# 14 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff1
	return

Common_EventScript_StoryItem_4:
# 15 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff2
	return

Common_EventScript_StoryItem_5:
# 16 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff3
	return

Common_EventScript_StoryItem_6:
# 17 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff4
	return

Common_EventScript_StoryItem_7:
# 18 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff5
	return

Common_EventScript_StoryItem_8:
# 19 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff6
	return

Common_EventScript_StoryItem_9:
# 20 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff7
	return

Common_EventScript_StoryItem_10:
# 21 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff8
	return

Common_EventScript_StoryItem_11:
# 22 "data/scripts/item_ball_scripts.pory"
	call WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff9
	return

Common_EventScript_StoryItem_12:
# 23 "data/scripts/item_ball_scripts.pory"
	call Quest_Hiddengrottomapping_EventScript_Journal1
	return

Common_EventScript_StoryItem_13:
# 24 "data/scripts/item_ball_scripts.pory"
	call Quest_Hiddengrottomapping_EventScript_Journal2
	return

Common_EventScript_StoryItem_14:
# 25 "data/scripts/item_ball_scripts.pory"
	call Quest_Hiddengrottomapping_EventScript_Journal3
	return


EspuleeOutskirts_Ranger_Quest_Manofmanyhats_EventScript_ItemHeadphones::
# 32 "data/scripts/item_ball_scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_MANOFMANYHATS
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff1::
# 37 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_1
# 38 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff2::
# 43 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_2
# 44 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff3::
# 49 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_3
# 50 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff4::
# 55 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_4
# 56 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff5::
# 61 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_5
# 62 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff6::
# 67 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_6
# 68 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff7::
# 73 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_7
# 74 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff8::
# 79 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_8
# 80 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


WajabiLake_Quest_Theboywhocrieswithwolves_EventScript_ItemStuff9::
# 85 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THEBOYWHOCRIESWITHWOLVES, SUB_QUEST_9
# 86 "data/scripts/item_ball_scripts.pory"
	call Quest_Theboywhocriedwithwolves_CheckSubquests_Script
	return


Quest_Hiddengrottomapping_EventScript_Journal1::
# 91 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_HIDDENGROTTOMAPPING, SUB_QUEST_1
	return


Quest_Hiddengrottomapping_EventScript_Journal2::
# 96 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_HIDDENGROTTOMAPPING, SUB_QUEST_2
	return


Quest_Hiddengrottomapping_EventScript_Journal3::
# 101 "data/scripts/item_ball_scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_HIDDENGROTTOMAPPING, SUB_QUEST_3
	return

