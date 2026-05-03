MulberryTown_House2_MapScripts::
	.byte 0


MulberryTown_House2_EventScript_LittleBoy::
# 4 "data/maps/MulberryTown_House2/scripts.pory"
	lock
# 5 "data/maps/MulberryTown_House2/scripts.pory"
	faceplayer
# 6 "data/maps/MulberryTown_House2/scripts.pory"
	message MulberryTown_House2_EventScript_LittleBoy_Text_0
# 8 "data/maps/MulberryTown_House2/scripts.pory"
	waitmessage
# 9 "data/maps/MulberryTown_House2/scripts.pory"
	delay 60
# 10 "data/maps/MulberryTown_House2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, MulberryTown_House2_EventScript_LittleBoy_Text_1, MulberryTown_House2_EventScript_LittleBoy_Text_2
# 11 "data/maps/MulberryTown_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MulberryTown_House2_EventScript_LittleBoy_2
# 14 "data/maps/MulberryTown_House2/scripts.pory"
	msgbox MulberryTown_House2_EventScript_LittleBoy_Text_3, MSGBOX_AUTOCLOSE
MulberryTown_House2_EventScript_LittleBoy_1:
# 17 "data/maps/MulberryTown_House2/scripts.pory"
	release
	return

MulberryTown_House2_EventScript_LittleBoy_2:
# 12 "data/maps/MulberryTown_House2/scripts.pory"
	msgbox MulberryTown_House2_EventScript_LittleBoyText1, MSGBOX_AUTOCLOSE
	goto MulberryTown_House2_EventScript_LittleBoy_1


MulberryTown_House2_EventScript_Man::
# 21 "data/maps/MulberryTown_House2/scripts.pory"
	lock
# 22 "data/maps/MulberryTown_House2/scripts.pory"
	faceplayer
# 23 "data/maps/MulberryTown_House2/scripts.pory"
	msgbox MulberryTown_House2_EventScript_ManText1
# 24 "data/maps/MulberryTown_House2/scripts.pory"
	release
	return


MulberryTown_House2_EventScript_LittleBoy_Text_0:
# 6 "data/maps/MulberryTown_House2/scripts.pory"
	.string "Hey! Hey! Hey! You! I'm bored!\n"
	.string "Play with me!$"

MulberryTown_House2_EventScript_LittleBoy_Text_1:
# 10 "data/maps/MulberryTown_House2/scripts.pory"
	.string "Sure!$"

MulberryTown_House2_EventScript_LittleBoy_Text_2:
# 10 "data/maps/MulberryTown_House2/scripts.pory"
	.string "No way!$"

MulberryTown_House2_EventScript_LittleBoy_Text_3:
# 14 "data/maps/MulberryTown_House2/scripts.pory"
	.string "Booo!\n"
	.string "You're no fun!$"

MulberryTown_House2_EventScript_ManText1::
# 27 "data/maps/MulberryTown_House2/scripts.pory"
	.string "The quiet atmosphere of this town\n"
	.string "makes it a popular spot for older folks\l"
	.string "looking to settle down.\p"
	.string "Unfortunately, that means there's not\n"
	.string "a lot of kids around here.$"

MulberryTown_House2_EventScript_LittleBoyText1::
# 36 "data/maps/MulberryTown_House2/scripts.pory"
	.string "Really? You'll really play with me?\n"
	.string "Finally!$"
