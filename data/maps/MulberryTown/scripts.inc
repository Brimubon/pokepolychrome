MulberryTown_MapScripts::
# 2 "data/maps/MulberryTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MulberryTown/scripts.pory"
	setflag FLAG_TEMP_5
# 4 "data/maps/MulberryTown/scripts.pory"
	setflag FLAG_TEMP_6
# 5 "data/maps/MulberryTown/scripts.pory"
	setflag FLAG_TEMP_7
# 6 "data/maps/MulberryTown/scripts.pory"
	setflag FLAG_TEMP_8
# 8 "data/maps/MulberryTown/scripts.pory"
	random 3
# 9 "data/maps/MulberryTown/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/MulberryTown/scripts.pory"
	case 0, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 19 "data/maps/MulberryTown/scripts.pory"
	case 1, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 26 "data/maps/MulberryTown/scripts.pory"
	case 2, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/MulberryTown/scripts.pory"
	gettimeofday
# 12 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 16 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 17 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_8
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 20 "data/maps/MulberryTown/scripts.pory"
	gettimeofday
# 21 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 24 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_5
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 27 "data/maps/MulberryTown/scripts.pory"
	gettimeofday
# 28 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_11
# 31 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_8
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 13 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_6
# 14 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_7
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 22 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_7
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 29 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_6
	return


MulberryTown_EventScript_SuspiciousGrunt::
# 38 "data/maps/MulberryTown/scripts.pory"
	lockall
# 39 "data/maps/MulberryTown/scripts.pory"
	playse SE_PIN
# 40 "data/maps/MulberryTown/scripts.pory"
	applymovement 11, MulberryTown_EventScript_SuspiciousGrunt_Movement_0
# 41 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/MulberryTown/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_EventScript_SuspiciousGrunt_Movement_1
# 43 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 44 "data/maps/MulberryTown/scripts.pory"
	delay 16
# 45 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_SuspiciousGruntText1, MSGBOX_AUTOCLOSE
# 46 "data/maps/MulberryTown/scripts.pory"
	playse SE_LEDGE
# 47 "data/maps/MulberryTown/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_EventScript_SuspiciousGrunt_Movement_2
# 48 "data/maps/MulberryTown/scripts.pory"
	applymovement 11, MulberryTown_EventScript_SuspiciousGrunt_Movement_3
# 49 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 50 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_SuspiciousGrunt_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/MulberryTown/scripts.pory"
	applymovement 11, MulberryTown_EventScript_SuspiciousGrunt_Movement_4
# 52 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/MulberryTown/scripts.pory"
	releaseall
	return


MulberryTown_EventScript_Grunt::
# 57 "data/maps/MulberryTown/scripts.pory"
	lock
# 58 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_GruntText
# 59 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_Artist1::
# 63 "data/maps/MulberryTown/scripts.pory"
	lock
# 64 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 65 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Artist1Text
# 66 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_BoyWithDog::
# 70 "data/maps/MulberryTown/scripts.pory"
	lock
# 71 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 72 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_BoyWithDogText
# 73 "data/maps/MulberryTown/scripts.pory"
	applymovement 5, MulberryTown_EventScript_BoyWithDog_Movement_0
# 74 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 75 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_Growlithe::
# 79 "data/maps/MulberryTown/scripts.pory"
	lock
# 80 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 81 "data/maps/MulberryTown/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 82 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Growlithe_Text_0
# 83 "data/maps/MulberryTown/scripts.pory"
	waitmoncry
# 84 "data/maps/MulberryTown/scripts.pory"
	applymovement 6, MulberryTown_EventScript_Growlithe_Movement_0
# 85 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 86 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_OldLady::
# 90 "data/maps/MulberryTown/scripts.pory"
	lock
# 91 "data/maps/MulberryTown/scripts.pory"
	gettimeofday
# 92 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 92 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 99 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 100 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLadyAwakeText
# 101 "data/maps/MulberryTown/scripts.pory"
	release
	end

MulberryTown_EventScript_OldLady_1:
# 93 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLady_Text_0
# 96 "data/maps/MulberryTown/scripts.pory"
	release
	end


MulberryTown_EventScript_MainSign::
# 108 "data/maps/MulberryTown/scripts.pory"
	lock
# 109 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_MainSignText
# 110 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_ForestSign::
# 114 "data/maps/MulberryTown/scripts.pory"
	lock
# 115 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_ForestSignText
# 116 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_GoBack::
# 120 "data/maps/MulberryTown/scripts.pory"
	lock
# 121 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_GoBackText, MSGBOX_AUTOCLOSE
# 122 "data/maps/MulberryTown/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_EventScript_GoBack_Movement_0
# 123 "data/maps/MulberryTown/scripts.pory"
	waitmovement LOCALID_PLAYER
# 124 "data/maps/MulberryTown/scripts.pory"
	release
	return


# 40 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_0:
# 40 "data/maps/MulberryTown/scripts.pory"
	walk_in_place_fast_right
# 40 "data/maps/MulberryTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 42 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_1:
# 42 "data/maps/MulberryTown/scripts.pory"
	walk_in_place_left
	step_end

# 47 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_2:
# 47 "data/maps/MulberryTown/scripts.pory"
	face_up
# 47 "data/maps/MulberryTown/scripts.pory"
	lock_facing_direction
# 47 "data/maps/MulberryTown/scripts.pory"
	jump_down
# 47 "data/maps/MulberryTown/scripts.pory"
	unlock_facing_direction
	step_end

# 48 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_3:
# 48 "data/maps/MulberryTown/scripts.pory"
	walk_right
# 48 "data/maps/MulberryTown/scripts.pory"
	face_down
	step_end

# 51 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_4:
# 51 "data/maps/MulberryTown/scripts.pory"
	walk_left
# 51 "data/maps/MulberryTown/scripts.pory"
	face_up
	step_end

# 73 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_BoyWithDog_Movement_0:
# 73 "data/maps/MulberryTown/scripts.pory"
	face_left
	step_end

# 84 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_Growlithe_Movement_0:
# 84 "data/maps/MulberryTown/scripts.pory"
	face_right
	step_end

# 122 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_GoBack_Movement_0:
# 122 "data/maps/MulberryTown/scripts.pory"
	walk_right
	step_end

MulberryTown_EventScript_SuspiciousGrunt_Text_0:
# 50 "data/maps/MulberryTown/scripts.pory"
	.string "Now SCRAM!$"

MulberryTown_EventScript_Growlithe_Text_0:
# 82 "data/maps/MulberryTown/scripts.pory"
	.string "Grr-woof!$"

MulberryTown_EventScript_OldLady_Text_0:
# 93 "data/maps/MulberryTown/scripts.pory"
	.string "Zzzz...\p"
	.string "(Looks like she fell asleep...)$"

MulberryTown_EventScript_SuspiciousGruntText1::
# 127 "data/maps/MulberryTown/scripts.pory"
	.string "Huh?{PAUSE 72} H-hey!\n"
	.string "You can't go in there right now!\p"
	.string "....What? D{PAUSE 48}-don't ask me why!\n"
	.string "I don't need to explain myself to you!$"

MulberryTown_EventScript_GruntText::
# 135 "data/maps/MulberryTown/scripts.pory"
	.string "...Those little pests must've gone in\n"
	.string "here... there's nowhere else they could\l"
	.string "possibly be...\p"
	.string "I swear, once I get my hands on those...$"

MulberryTown_EventScript_Artist1Text::
# 143 "data/maps/MulberryTown/scripts.pory"
	.string "Every now and then, I go into Mulberry\n"
	.string "Woods in search of the perfect muse.\p"
	.string "I hear rumors of a truly elegant\n"
	.string "Pokémon that resides there, but...\p"
	.string "I fear my own Pokémon aren't strong\n"
	.string "enough to go looking for it on my own.\p"
	.string "Maybe if... oh, never you mind.$"

MulberryTown_EventScript_BoyWithDogText::
# 156 "data/maps/MulberryTown/scripts.pory"
	.string "A strange Pokémon just ran through\n"
	.string "town and into the woods over there.\p"
	.string "It moved so fast, it spooked my\n"
	.string "Growlithe.\p"
	.string "Be careful if you're going in there, ok?$"

MulberryTown_EventScript_OldLadyAwakeText::
# 166 "data/maps/MulberryTown/scripts.pory"
	.string "This town's atmosphere is always so\n"
	.string "quiet and peaceful.\p"
	.string "Sometimes I worry I'll fall asleep\n"
	.string "sitting out here like this, ohoho...$"

MulberryTown_EventScript_MainSignText::
# 174 "data/maps/MulberryTown/scripts.pory"
	.string "Mulberry Town- \n"
	.string "“The elegant seaside town.”$"

MulberryTown_EventScript_ForestSignText::
# 179 "data/maps/MulberryTown/scripts.pory"
	.string "Entering Mulberry Woods$"

MulberryTown_EventScript_GoBackText::
# 183 "data/maps/MulberryTown/scripts.pory"
	.string "(Too late to go back now...\n"
	.string "You've got to catch that Pokemon thief\l"
	.string "before it's too late!)$"
