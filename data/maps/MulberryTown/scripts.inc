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
	random 4
# 9 "data/maps/MulberryTown/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/MulberryTown/scripts.pory"
	case 0, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 13 "data/maps/MulberryTown/scripts.pory"
	case 1, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 16 "data/maps/MulberryTown/scripts.pory"
	case 2, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 20 "data/maps/MulberryTown/scripts.pory"
	case 3, MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_5
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_7
# 12 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_8
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 14 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 15 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_6
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 17 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_6
# 18 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_7
# 19 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_8
	return

MulberryTown_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 21 "data/maps/MulberryTown/scripts.pory"
	clearflag FLAG_TEMP_5
	return


MulberryTown_EventScript_SuspiciousGrunt::
# 27 "data/maps/MulberryTown/scripts.pory"
	lockall
# 28 "data/maps/MulberryTown/scripts.pory"
	playse SE_PIN
# 29 "data/maps/MulberryTown/scripts.pory"
	applymovement 12, MulberryTown_EventScript_SuspiciousGrunt_Movement_0
# 30 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 31 "data/maps/MulberryTown/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_EventScript_SuspiciousGrunt_Movement_1
# 32 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 33 "data/maps/MulberryTown/scripts.pory"
	delay 16
# 34 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_SuspiciousGruntText1, MSGBOX_AUTOCLOSE
# 35 "data/maps/MulberryTown/scripts.pory"
	playse SE_LEDGE
# 36 "data/maps/MulberryTown/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_EventScript_SuspiciousGrunt_Movement_2
# 37 "data/maps/MulberryTown/scripts.pory"
	applymovement 12, MulberryTown_EventScript_SuspiciousGrunt_Movement_3
# 38 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 39 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_SuspiciousGrunt_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/MulberryTown/scripts.pory"
	applymovement 12, MulberryTown_EventScript_SuspiciousGrunt_Movement_4
# 41 "data/maps/MulberryTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/MulberryTown/scripts.pory"
	releaseall
	return


MulberryTown_EventScript_Grunt::
# 46 "data/maps/MulberryTown/scripts.pory"
	lock
# 47 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_GruntText
# 48 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_Artist1::
# 52 "data/maps/MulberryTown/scripts.pory"
	lock
# 53 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 54 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Artist1Text
# 55 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_BoyWithDog::
# 59 "data/maps/MulberryTown/scripts.pory"
	lock
# 60 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 61 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_BoyWithDogText
# 62 "data/maps/MulberryTown/scripts.pory"
	applymovement 5, MulberryTown_EventScript_BoyWithDog_Movement_0
# 63 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 64 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_Growlithe::
# 68 "data/maps/MulberryTown/scripts.pory"
	lock
# 69 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 70 "data/maps/MulberryTown/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 71 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Growlithe_Text_0
# 72 "data/maps/MulberryTown/scripts.pory"
	waitmoncry
# 73 "data/maps/MulberryTown/scripts.pory"
	applymovement 6, MulberryTown_EventScript_Growlithe_Movement_0
# 74 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 75 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_OldLady::
# 79 "data/maps/MulberryTown/scripts.pory"
	lock
# 80 "data/maps/MulberryTown/scripts.pory"
	dotimebasedevents
# 81 "data/maps/MulberryTown/scripts.pory"
	gettimeofday
# 82 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 82 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 87 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 88 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLadyAwakeText
# 89 "data/maps/MulberryTown/scripts.pory"
	release
	end

MulberryTown_EventScript_OldLady_1:
# 83 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLady_Text_0
# 84 "data/maps/MulberryTown/scripts.pory"
	release
	end


MulberryTown_EventScript_MainSign::
# 96 "data/maps/MulberryTown/scripts.pory"
	lock
# 97 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_MainSignText
# 98 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_ForestSign::
# 102 "data/maps/MulberryTown/scripts.pory"
	lock
# 103 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_ForestSignText
# 104 "data/maps/MulberryTown/scripts.pory"
	release
	return


# 29 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_0:
# 29 "data/maps/MulberryTown/scripts.pory"
	walk_in_place_fast_right
# 29 "data/maps/MulberryTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_1:
# 31 "data/maps/MulberryTown/scripts.pory"
	walk_in_place_left
	step_end

# 36 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_2:
# 36 "data/maps/MulberryTown/scripts.pory"
	face_up
# 36 "data/maps/MulberryTown/scripts.pory"
	lock_facing_direction
# 36 "data/maps/MulberryTown/scripts.pory"
	jump_down
# 36 "data/maps/MulberryTown/scripts.pory"
	unlock_facing_direction
	step_end

# 37 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_3:
# 37 "data/maps/MulberryTown/scripts.pory"
	walk_right
# 37 "data/maps/MulberryTown/scripts.pory"
	face_down
	step_end

# 40 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_SuspiciousGrunt_Movement_4:
# 40 "data/maps/MulberryTown/scripts.pory"
	walk_left
# 40 "data/maps/MulberryTown/scripts.pory"
	face_up
	step_end

# 62 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_BoyWithDog_Movement_0:
# 62 "data/maps/MulberryTown/scripts.pory"
	face_left
	step_end

# 73 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_Growlithe_Movement_0:
# 73 "data/maps/MulberryTown/scripts.pory"
	face_right
	step_end

MulberryTown_EventScript_SuspiciousGrunt_Text_0:
# 39 "data/maps/MulberryTown/scripts.pory"
	.string "Now SCRAM!$"

MulberryTown_EventScript_Growlithe_Text_0:
# 71 "data/maps/MulberryTown/scripts.pory"
	.string "Grr-woof!$"

MulberryTown_EventScript_OldLady_Text_0:
# 83 "data/maps/MulberryTown/scripts.pory"
	.string "Zzzz...\p"
	.string "(Looks like she fell asleep...)$"

MulberryTown_EventScript_SuspiciousGruntText1::
# 107 "data/maps/MulberryTown/scripts.pory"
	.string "Huh?{PAUSE 72} H-hey!\n"
	.string "You can't go in there right now!\p"
	.string "....What? D{PAUSE 48}-don't ask me why!\n"
	.string "I don't need to explain myself to you!$"

MulberryTown_EventScript_GruntText::
# 114 "data/maps/MulberryTown/scripts.pory"
	.string "...Those little pests must've gone in\n"
	.string "here... there's nowhere else they could\l"
	.string "possibly be...\p"
	.string "I swear, once I get my hands on those...$"

MulberryTown_EventScript_Artist1Text::
# 121 "data/maps/MulberryTown/scripts.pory"
	.string "Every now and then, I go into Mulberry\n"
	.string "Woods in search of the perfect muse.\p"
	.string "I hear rumors of a truly elegant\n"
	.string "Pokémon that resides there, but...\p"
	.string "I fear my own Pokémon aren't strong\n"
	.string "enough to go looking for it on my own.\p"
	.string "Maybe if... oh, never you mind.$"

MulberryTown_EventScript_BoyWithDogText::
# 131 "data/maps/MulberryTown/scripts.pory"
	.string "A strange Pokémon just ran through\n"
	.string "town and into the woods over there.\p"
	.string "It moved so fast, it spooked my\n"
	.string "Growlithe.\p"
	.string "Be careful if you're going in there, ok?$"

MulberryTown_EventScript_OldLadyAwakeText::
# 139 "data/maps/MulberryTown/scripts.pory"
	.string "This town's atmosphere is always so\n"
	.string "quiet and peaceful.\p"
	.string "Sometimes I worry I'll fall asleep\n"
	.string "sitting out here like this, ohoho...$"

MulberryTown_EventScript_MainSignText::
# 146 "data/maps/MulberryTown/scripts.pory"
	.string "Mulberry Town- \n"
	.string "“The elegant seaside town.”$"

MulberryTown_EventScript_ForestSignText::
# 151 "data/maps/MulberryTown/scripts.pory"
	.string "Entering Mulberry Woods$"
