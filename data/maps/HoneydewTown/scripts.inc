HoneydewTown_MapScripts::
# 2 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 29 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HoneydewTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 33 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HoneydewTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 37 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HoneydewTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/HoneydewTown/scripts.pory"
	setflag FLAG_TEMP_5
# 4 "data/maps/HoneydewTown/scripts.pory"
	setflag FLAG_TEMP_6
# 5 "data/maps/HoneydewTown/scripts.pory"
	setflag FLAG_TEMP_7
# 7 "data/maps/HoneydewTown/scripts.pory"
	random 3
# 8 "data/maps/HoneydewTown/scripts.pory"
	switch VAR_RESULT
# 9 "data/maps/HoneydewTown/scripts.pory"
	case 0, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 16 "data/maps/HoneydewTown/scripts.pory"
	case 1, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 18 "data/maps/HoneydewTown/scripts.pory"
	case 2, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 10 "data/maps/HoneydewTown/scripts.pory"
	gettimeofday
# 11 "data/maps/HoneydewTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 14 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_5
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 17 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 19 "data/maps/HoneydewTown/scripts.pory"
	gettimeofday
# 20 "data/maps/HoneydewTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_9
# 23 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_5
HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 25 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_6
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 12 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_7
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 21 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_TEMP_7
	goto HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD_8

HoneydewTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 30 "data/maps/HoneydewTown/scripts.pory"
	setrespawn HEAL_LOCATION_HONEYDEW_TOWN
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 34 "data/maps/HoneydewTown/scripts.pory"
	map_script_2 VAR_PLYCHRME_BOAT_SPAWN, 0, HoneydewTown_EventScript_SpawnBoat
	.2byte 0

HoneydewTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/HoneydewTown/scripts.pory"
	map_script_2 VAR_PLYCHRME_INTRO, 0, HoneydewTown_EventScript_IntroCutscene
	.2byte 0


HoneydewTown_EventScript_SpawnBoat::
# 44 "data/maps/HoneydewTown/scripts.pory"
	setvar VAR_PLYCHRME_BOAT_SPAWN, 1
# 45 "data/maps/HoneydewTown/scripts.pory"
	setobjectxyperm LOCALID_INTRO_SHIP, 34, 32
# 46 "data/maps/HoneydewTown/scripts.pory"
	addobject LOCALID_INTRO_SHIP
	return


HoneydewTown_EventScript_IntroCutscene::
# 50 "data/maps/HoneydewTown/scripts.pory"
	lockall
# 51 "data/maps/HoneydewTown/scripts.pory"
	removeobject 4
# 52 "data/maps/HoneydewTown/scripts.pory"
	setvar VAR_PLYCHRME_INTRO, 1
# 53 "data/maps/HoneydewTown/scripts.pory"
	special SpawnCameraObject
# 54 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_INTRO_SHIP, HoneydewTown_EventScript_IntroCutscene_Movement_0
# 55 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_CAMERA, HoneydewTown_EventScript_IntroCutscene_Movement_1
# 56 "data/maps/HoneydewTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/HoneydewTown/scripts.pory"
	special RemoveCameraObject
# 58 "data/maps/HoneydewTown/scripts.pory"
	delay 72
# 59 "data/maps/HoneydewTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 60 "data/maps/HoneydewTown/scripts.pory"
	delay 16
# 61 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_EventScript_IntroCutscene_Movement_2
# 62 "data/maps/HoneydewTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/HoneydewTown/scripts.pory"
	playse SE_EXIT
# 64 "data/maps/HoneydewTown/scripts.pory"
	waitse
# 65 "data/maps/HoneydewTown/scripts.pory"
	addobject 4
# 66 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_HIDE_HONEYDEW_SAILOR
# 67 "data/maps/HoneydewTown/scripts.pory"
	setmetatile 34, 32, 0x0BC, FALSE
# 68 "data/maps/HoneydewTown/scripts.pory"
	special DrawWholeMapView
# 69 "data/maps/HoneydewTown/scripts.pory"
	warpsilent MAP_HONEYDEW_TOWN, 18, 31
# 70 "data/maps/HoneydewTown/scripts.pory"
	waitstate
# 71 "data/maps/HoneydewTown/scripts.pory"
	delay 16
# 72 "data/maps/HoneydewTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 73 "data/maps/HoneydewTown/scripts.pory"
	releaseall
	return


HoneydewTown_EventScript_Welcome::
# 77 "data/maps/HoneydewTown/scripts.pory"
	lock
# 78 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 79 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_WelcomeText
# 80 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_Woman::
# 84 "data/maps/HoneydewTown/scripts.pory"
	lock
# 85 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 86 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_WomanText, MSGBOX_AUTOCLOSE
# 87 "data/maps/HoneydewTown/scripts.pory"
	applymovement 3, HoneydewTown_EventScript_Woman_Movement_0
# 88 "data/maps/HoneydewTown/scripts.pory"
	waitmovement 0
# 89 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_LittleGirl::
# 93 "data/maps/HoneydewTown/scripts.pory"
	lock
# 94 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 95 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_LittleGirlText
# 96 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_Garden::
# 100 "data/maps/HoneydewTown/scripts.pory"
	lock
# 101 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 102 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_GardenText
# 103 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_MainSign::
# 107 "data/maps/HoneydewTown/scripts.pory"
	lock
# 108 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_MainSignText
# 109 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_ProfSign::
# 113 "data/maps/HoneydewTown/scripts.pory"
	lock
# 114 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ProfSignText
# 115 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_ProfHouseSign::
# 119 "data/maps/HoneydewTown/scripts.pory"
	lock
# 120 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ProfHouseSignText
# 121 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_MeetHawthFirst::
# 125 "data/maps/HoneydewTown/scripts.pory"
	lock
# 126 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_MeetHawthFirstText, MSGBOX_AUTOCLOSE
# 127 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_EventScript_MeetHawthFirst_Movement_0
# 128 "data/maps/HoneydewTown/scripts.pory"
	waitmovement LOCALID_PLAYER
# 129 "data/maps/HoneydewTown/scripts.pory"
	release
	return


# 54 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_IntroCutscene_Movement_0:
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_slow_left
# 54 "data/maps/HoneydewTown/scripts.pory"
	walk_slow_left
	step_end

# 55 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_IntroCutscene_Movement_1:
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 55 "data/maps/HoneydewTown/scripts.pory"
	walk_left
	step_end

# 61 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_IntroCutscene_Movement_2:
# 61 "data/maps/HoneydewTown/scripts.pory"
	set_visible
	step_end

# 87 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_Woman_Movement_0:
# 87 "data/maps/HoneydewTown/scripts.pory"
	face_up
	step_end

# 127 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_MeetHawthFirst_Movement_0:
# 127 "data/maps/HoneydewTown/scripts.pory"
	walk_left
	step_end

HoneydewTown_EventScript_WelcomeText::
# 132 "data/maps/HoneydewTown/scripts.pory"
	.string "We've made it to Honeydew!\n"
	.string "Hope the ride wasn't too rough, hahaha.\p"
	.string "If you're lookin' for the professor,\n"
	.string "he's probably in his lab, in the\l"
	.string "northwest part of town. Hard to miss.$"

HoneydewTown_EventScript_WomanText::
# 141 "data/maps/HoneydewTown/scripts.pory"
	.string "Hm? Oh, are you new to this region?\n"
	.string "So am I!\p"
	.string "The Pokémon here sure are fascinating,\n"
	.string "aren't they?$"

HoneydewTown_EventScript_LittleGirlText::
# 149 "data/maps/HoneydewTown/scripts.pory"
	.string "Um... I like your running shoes!\n"
	.string "I have a pair like that, too.\p"
	.string "Uh... you can press B to start running,\n"
	.string "but you probably already knew that...$"

HoneydewTown_EventScript_GardenText::
# 157 "data/maps/HoneydewTown/scripts.pory"
	.string "Tending to this garden isn't easy,\n"
	.string "but to me, it's worth it.\p"
	.string "With all the people coming to Myset for\n"
	.string "the League Challenge, I want to make\l"
	.string "this town as pretty as it can be.$"

HoneydewTown_EventScript_MainSignText::
# 166 "data/maps/HoneydewTown/scripts.pory"
	.string "Honeydew Town- \n"
	.string "“Facilitating new beginnings.”$"

HoneydewTown_EventScript_ProfSignText::
# 171 "data/maps/HoneydewTown/scripts.pory"
	.string "Prof. Hawthorne's Lab$"

HoneydewTown_EventScript_ProfHouseSignText::
# 175 "data/maps/HoneydewTown/scripts.pory"
	.string "Prof. Hawthorne's House$"

HoneydewTown_EventScript_MeetHawthFirstText::
# 179 "data/maps/HoneydewTown/scripts.pory"
	.string "(You should probably meet with Prof.\n"
	.string "Hawthorne first.)\p"
	.string "(His lab should be somewhere around\n"
	.string "here...)$"
