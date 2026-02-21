HoneydewTown_MapScripts::
# 2 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HoneydewTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 23 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HoneydewTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HoneydewTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 31 "data/maps/HoneydewTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HoneydewTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
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

HoneydewTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 24 "data/maps/HoneydewTown/scripts.pory"
	setrespawn HEAL_LOCATION_HONEYDEW_TOWN
	return

HoneydewTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 28 "data/maps/HoneydewTown/scripts.pory"
	map_script_2 VAR_PLYCHRME_BOAT_SPAWN, 0, HoneydewTown_EventScript_SpawnBoat
	.2byte 0

HoneydewTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 32 "data/maps/HoneydewTown/scripts.pory"
	map_script_2 VAR_PLYCHRME_INTRO, 0, HoneydewTown_EventScript_IntroCutscene
	.2byte 0


HoneydewTown_EventScript_SpawnBoat::
# 38 "data/maps/HoneydewTown/scripts.pory"
	setvar VAR_PLYCHRME_BOAT_SPAWN, 1
# 39 "data/maps/HoneydewTown/scripts.pory"
	setobjectxyperm LOCALID_INTRO_SHIP, 34, 32
# 40 "data/maps/HoneydewTown/scripts.pory"
	addobject LOCALID_INTRO_SHIP
	return


HoneydewTown_EventScript_IntroCutscene::
# 44 "data/maps/HoneydewTown/scripts.pory"
	lockall
# 45 "data/maps/HoneydewTown/scripts.pory"
	removeobject 4
# 46 "data/maps/HoneydewTown/scripts.pory"
	setvar VAR_PLYCHRME_INTRO, 1
# 47 "data/maps/HoneydewTown/scripts.pory"
	special SpawnCameraObject
# 48 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_INTRO_SHIP, HoneydewTown_EventScript_IntroCutscene_Movement_0
# 49 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_CAMERA, HoneydewTown_EventScript_IntroCutscene_Movement_1
# 50 "data/maps/HoneydewTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/HoneydewTown/scripts.pory"
	special RemoveCameraObject
# 52 "data/maps/HoneydewTown/scripts.pory"
	delay 72
# 53 "data/maps/HoneydewTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 54 "data/maps/HoneydewTown/scripts.pory"
	delay 16
# 55 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_EventScript_IntroCutscene_Movement_2
# 56 "data/maps/HoneydewTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/HoneydewTown/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/HoneydewTown/scripts.pory"
	waitse
# 59 "data/maps/HoneydewTown/scripts.pory"
	addobject 4
# 60 "data/maps/HoneydewTown/scripts.pory"
	clearflag FLAG_HIDE_HONEYDEW_SAILOR
# 61 "data/maps/HoneydewTown/scripts.pory"
	setmetatile 34, 32, 0x0BC, FALSE
# 62 "data/maps/HoneydewTown/scripts.pory"
	special DrawWholeMapView
# 63 "data/maps/HoneydewTown/scripts.pory"
	warpsilent MAP_HONEYDEW_TOWN, 18, 31
# 64 "data/maps/HoneydewTown/scripts.pory"
	waitstate
# 65 "data/maps/HoneydewTown/scripts.pory"
	delay 16
# 66 "data/maps/HoneydewTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 67 "data/maps/HoneydewTown/scripts.pory"
	releaseall
	return


HoneydewTown_EventScript_Welcome::
# 71 "data/maps/HoneydewTown/scripts.pory"
	lock
# 72 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 73 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_WelcomeText
# 74 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_GiveMap::
# 78 "data/maps/HoneydewTown/scripts.pory"
	lock
# 79 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 80 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_GiveMapText
# 81 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_LittleGirl::
# 85 "data/maps/HoneydewTown/scripts.pory"
	lock
# 86 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 87 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_LittleGirlText
# 88 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_Garden::
# 92 "data/maps/HoneydewTown/scripts.pory"
	lock
# 93 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 94 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_GardenText
# 95 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_MainSign::
# 99 "data/maps/HoneydewTown/scripts.pory"
	lock
# 100 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_MainSignText
# 101 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_ProfSign::
# 105 "data/maps/HoneydewTown/scripts.pory"
	lock
# 106 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ProfSignText
# 107 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_ProfHouseSign::
# 111 "data/maps/HoneydewTown/scripts.pory"
	lock
# 112 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ProfHouseSignText
# 113 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_MeetHawthFirst::
# 117 "data/maps/HoneydewTown/scripts.pory"
	lock
# 118 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_MeetHawthFirstText, MSGBOX_AUTOCLOSE
# 119 "data/maps/HoneydewTown/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_EventScript_MeetHawthFirst_Movement_0
# 120 "data/maps/HoneydewTown/scripts.pory"
	waitmovement LOCALID_PLAYER
# 121 "data/maps/HoneydewTown/scripts.pory"
	release
	return


# 48 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_IntroCutscene_Movement_0:
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_slow_left
# 48 "data/maps/HoneydewTown/scripts.pory"
	walk_slow_left
	step_end

# 49 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_IntroCutscene_Movement_1:
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_fast_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown/scripts.pory"
	walk_left
	step_end

# 55 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_IntroCutscene_Movement_2:
# 55 "data/maps/HoneydewTown/scripts.pory"
	set_visible
	step_end

# 119 "data/maps/HoneydewTown/scripts.pory"
HoneydewTown_EventScript_MeetHawthFirst_Movement_0:
# 119 "data/maps/HoneydewTown/scripts.pory"
	walk_left
	step_end

HoneydewTown_EventScript_WelcomeText::
# 124 "data/maps/HoneydewTown/scripts.pory"
	.string "We've made it to Honeydew!\n"
	.string "Hope the ride wasn't too rough, hahaha.\p"
	.string "If you're lookin' for the professor,\n"
	.string "he's probably in his lab, in the\l"
	.string "northwest part of town. Hard to miss.$"

HoneydewTown_EventScript_GiveMapText::
# 133 "data/maps/HoneydewTown/scripts.pory"
	.string "I saw you get off that boat...\n"
	.string "Are you new to the Myset region?\p"
	.string "Here, take this.\n"
	.string "Consider it a welcome present.$"

HoneydewTown_EventScript_LittleGirlText::
# 141 "data/maps/HoneydewTown/scripts.pory"
	.string "Um... I like your running shoes!\n"
	.string "I have a pair like that, too.\p"
	.string "Uh... you can press B to start running,\n"
	.string "but you probably already knew that...$"

HoneydewTown_EventScript_GardenText::
# 149 "data/maps/HoneydewTown/scripts.pory"
	.string "Tending to this garden isn't easy,\n"
	.string "but to me, it's worth it.\p"
	.string "With all the people coming to Myset for\n"
	.string "the League Challenge, I want to make\l"
	.string "this town as pretty as it can be.$"

HoneydewTown_EventScript_MainSignText::
# 158 "data/maps/HoneydewTown/scripts.pory"
	.string "Honeydew Town- \n"
	.string "“Facilitating new beginnings.”$"

HoneydewTown_EventScript_ProfSignText::
# 163 "data/maps/HoneydewTown/scripts.pory"
	.string "Prof. Hawthorne's Lab$"

HoneydewTown_EventScript_ProfHouseSignText::
# 167 "data/maps/HoneydewTown/scripts.pory"
	.string "Prof. Hawthorne's House$"

HoneydewTown_EventScript_MeetHawthFirstText::
# 171 "data/maps/HoneydewTown/scripts.pory"
	.string "(You should probably meet with Prof.\n"
	.string "Hawthorne first.)\p"
	.string "(His lab should be somewhere around\n"
	.string "here...)$"
