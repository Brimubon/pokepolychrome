MulberryTown_House1_MapScripts::
	.byte 0


MulberryTown_House1_EventScript_OldWoman::
# 5 "data/maps/MulberryTown_House1/scripts.pory"
	lock
# 6 "data/maps/MulberryTown_House1/scripts.pory"
	faceplayer
# 7 "data/maps/MulberryTown_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ORAN_BERRY
# 8 "data/maps/MulberryTown_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MulberryTown_House1_EventScript_OldWoman_1
# 12 "data/maps/MulberryTown_House1/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, MulberryTown_House1_EventScript_OldWoman_4
# 15 "data/maps/MulberryTown_House1/scripts.pory"
	goto_if_set FLAG_SYS_QUEST_MENU_GET, MulberryTown_House1_EventScript_OldWoman_5
	return

MulberryTown_House1_EventScript_OldWoman_1:
# 9 "data/maps/MulberryTown_House1/scripts.pory"
	msgbox MulberryTown_House1_EventScript_OldWomanQuestDone
# 10 "data/maps/MulberryTown_House1/scripts.pory"
	release
	return

MulberryTown_House1_EventScript_OldWoman_4:
# 13 "data/maps/MulberryTown_House1/scripts.pory"
	msgbox MulberryTown_House1_EventScript_NoQuestMenu
# 14 "data/maps/MulberryTown_House1/scripts.pory"
	release
	return

MulberryTown_House1_EventScript_OldWoman_5:
# 16 "data/maps/MulberryTown_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_ORAN_BERRY
# 17 "data/maps/MulberryTown_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MulberryTown_House1_EventScript_OldWoman_8
# 22 "data/maps/MulberryTown_House1/scripts.pory"
	msgbox MulberryTown_House1_EventScript_OldWomanAskForBerry
# 23 "data/maps/MulberryTown_House1/scripts.pory"
	closemessage
# 24 "data/maps/MulberryTown_House1/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 2
# 25 "data/maps/MulberryTown_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MulberryTown_House1_EventScript_OldWoman_11
# 36 "data/maps/MulberryTown_House1/scripts.pory"
	msgbox MulberryTown_House1_EventScript_OldWomanNoBerry
# 37 "data/maps/MulberryTown_House1/scripts.pory"
	release
	return

MulberryTown_House1_EventScript_OldWoman_8:
# 18 "data/maps/MulberryTown_House1/scripts.pory"
	msgbox MulberryTown_House1_EventScript_OldWomanQuestStart, MSGBOX_AUTOCLOSE
# 19 "data/maps/MulberryTown_House1/scripts.pory"
	startquest QUEST_ORAN_BERRY
# 20 "data/maps/MulberryTown_House1/scripts.pory"
	release
	return

MulberryTown_House1_EventScript_OldWoman_11:
# 26 "data/maps/MulberryTown_House1/scripts.pory"
	msgbox MulberryTown_House1_EventScript_OldWomanDeliverBerry
# 27 "data/maps/MulberryTown_House1/scripts.pory"
	closemessage
# 28 "data/maps/MulberryTown_House1/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 2
# 29 "data/maps/MulberryTown_House1/scripts.pory"
	delay 60
# 30 "data/maps/MulberryTown_House1/scripts.pory"
	msgbox MulberryTown_House1_EventScript_OldWomanGiveReward
# 31 "data/maps/MulberryTown_House1/scripts.pory"
	closemessage
# 32 "data/maps/MulberryTown_House1/scripts.pory"
	giveitem ITEM_SODA_POP
# 33 "data/maps/MulberryTown_House1/scripts.pory"
	completequest QUEST_ORAN_BERRY
# 34 "data/maps/MulberryTown_House1/scripts.pory"
	release
	return


MulberryTown_House1_EventScript_NoQuestMenu::
# 44 "data/maps/MulberryTown_House1/scripts.pory"
	.string "... ...Oh, hello.\p"
	.string "...Pardon me, but could I ask you for\n"
	.string "a favor?\p"
	.string "...Hm? You're doing something important\n"
	.string "right now?\p"
	.string "Yes, I understand. Please come back\n"
	.string "once you're done.$"

MulberryTown_House1_EventScript_OldWomanQuestStart::
# 57 "data/maps/MulberryTown_House1/scripts.pory"
	.string "... ...Oh, hello.\p"
	.string "...Pardon me, but could I ask you for\n"
	.string "a favor?\p"
	.string "You see, my Teddiursa's come down with a\n"
	.string "little fever recently.\p"
	.string "I've been feeding it Oran Berries to\n"
	.string "help it recover.\p"
	.string "But, I sprained my ankle a few days ago\n"
	.string "and I haven't been able to go out and\l"
	.string "gather more.\p"
	.string "Could you get some more Oran Berries\n"
	.string "for me until my ankle recovers?\l"
	.string "Two should suffice.\p"
	.string "... ... ...You will? \n"
	.string "Oh, thank you very much!\p"
	.string "You can find Oran Berries in Mulberry\n"
	.string "Woods.\p"
	.string "Come back once you've gotten two\n"
	.string "of them.$"

MulberryTown_House1_EventScript_OldWomanAskForBerry::
# 87 "data/maps/MulberryTown_House1/scripts.pory"
	.string "Hello again, dear.\n"
	.string "Do you have the Oran Berries?$"

MulberryTown_House1_EventScript_OldWomanDeliverBerry::
# 92 "data/maps/MulberryTown_House1/scripts.pory"
	.string "... ...Ah, you've brought them!\n"
	.string "Excellent!$"

MulberryTown_House1_EventScript_OldWomanNoBerry::
# 97 "data/maps/MulberryTown_House1/scripts.pory"
	.string "...Oh, it doesn't seem like you have them.\p"
	.string "You should be able to find some in \n"
	.string "Mulberry Woods.\p"
	.string "Please, return here once you've gotten\n"
	.string "them.$"

MulberryTown_House1_EventScript_OldWomanGiveReward::
# 107 "data/maps/MulberryTown_House1/scripts.pory"
	.string "...Yes, this should be enough until my\n"
	.string "ankle heals.\p"
	.string "Thank you, dear. Here, take this as a\n"
	.string "small token of my appreciation.$"

MulberryTown_House1_EventScript_OldWomanQuestDone::
# 115 "data/maps/MulberryTown_House1/scripts.pory"
	.string "No need to fuss over us, dear.\n"
	.string "Teddiursa and I will be just fine.\p"
	.string "Thank you for all your help.$"
