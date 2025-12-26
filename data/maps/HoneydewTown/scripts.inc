HoneydewTown_MapScripts::
# 2 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/HoneydewTown/scripts.pory"
	setflag FLAG_TEMP_5
# 4 "data/maps/HoneydewTown/scripts.pory"
	setflag FLAG_TEMP_6
# 5 "data/maps/HoneydewTown/scripts.pory"
	setflag FLAG_TEMP_7
# 6 "data/maps/HoneydewTown/scripts.pory"
	setflag FLAG_TEMP_8
# 9 "data/maps/HoneydewTown/scripts.pory"
	random 4
# 10 "data/maps/HoneydewTown/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/HoneydewTown/scripts.pory"
	case 0, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 13 "data/maps/HoneydewTown/scripts.pory"
	case 1, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 15 "data/maps/HoneydewTown/scripts.pory"
	case 2, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 18 "data/maps/HoneydewTown/scripts.pory"
	case 3, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_5
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 12 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 14 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 16 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 17 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 19 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_8
	return


HoneydewTown_EventScript_Welcome::
# 25 "data/maps/HoneydewTown/scripts.pory"
	lock
# 26 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 27 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_WelcomeText
# 28 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_GiveMap::
# 32 "data/maps/HoneydewTown/scripts.pory"
	lock
# 33 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 34 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_GiveMapText
# 35 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_Shoes::
# 39 "data/maps/HoneydewTown/scripts.pory"
	lock
# 40 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 41 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ShoesText
# 42 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_Garden::
# 46 "data/maps/HoneydewTown/scripts.pory"
	lock
# 47 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 48 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_GardenText
# 49 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_MainSign::
# 53 "data/maps/HoneydewTown/scripts.pory"
	lock
# 54 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_MainSignText
# 55 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_ProfSign::
# 59 "data/maps/HoneydewTown/scripts.pory"
	lock
# 60 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ProfSignText
# 61 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_MeetHawthFirst::
# 65 "data/maps/HoneydewTown/scripts.pory"
	lock
# 66 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_MeetHawthFirstText, MSGBOX_AUTOCLOSE
# 67 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_EventScript_MeetHawthFirst_Movement_0
# 68 "data/maps/HoneydewTown/scripts.pory"
	waitmovement LOCALID_PLAYER
# 69 "data/maps/HoneydewTown/scripts.pory"
	release
	return


# 67 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_MeetHawthFirst_Movement_0:
# 67 "data/maps/HoneydewTown/scripts.pory"
	walk_left
	step_end

HoneydewTown_EventScript_WelcomeText::
# 72 "data/maps/HoneydewTown/scripts.pory"
	.string "We've made it to Honeydew!\n"
	.string "Hope the ride wasn't too rough, hehehe.\p"
	.string "If you're lookin' for the professor,\n"
	.string "he's probably in his lab, in the\l"
	.string "northwest part of town. Hard to miss.$"

HoneydewTown_EventScript_GiveMapText::
# 80 "data/maps/HoneydewTown/scripts.pory"
	.string "I saw you get off that boat...\n"
	.string "Are you new to the Coeze region?\p"
	.string "Here, take this.\n"
	.string "Consider it a welcome present.$"

HoneydewTown_EventScript_ShoesText::
# 87 "data/maps/HoneydewTown/scripts.pory"
	.string "Um... I like your running shoes!\n"
	.string "I have a pair like that, too.\p"
	.string "Uh... you can press B to start running,\n"
	.string "but you probably already knew that...$"

HoneydewTown_EventScript_GardenText::
# 94 "data/maps/HoneydewTown/scripts.pory"
	.string "Tending to this garden isn't easy,\n"
	.string "but to me, it's worth it.\p"
	.string "With all the people coming to Coeze for\n"
	.string "the League challenge, I want to make\l"
	.string "this town as pretty as it can be.$"

HoneydewTown_EventScript_MainSignText::
# 102 "data/maps/HoneydewTown/scripts.pory"
	.string "Honeydew Town- \n"
	.string "“Facilitating new beginnings.”$"

HoneydewTown_EventScript_ProfSignText::
# 107 "data/maps/HoneydewTown/scripts.pory"
	.string "Prof. Hawthorne's Lab$"

HoneydewTown_EventScript_MeetHawthFirstText::
# 111 "data/maps/HoneydewTown/scripts.pory"
	.string "(You should probably meet with Prof.\n"
	.string "Hawthorne first.)\p"
	.string "(His lab should be somewhere around\n"
	.string "here...)$"
