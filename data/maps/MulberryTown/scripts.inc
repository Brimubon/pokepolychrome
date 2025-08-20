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


MulberryTown_EventScript_Artist1::
# 27 "data/maps/MulberryTown/scripts.pory"
	lock
# 28 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 29 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Artist1Text
# 30 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_BoyWithDog::
# 34 "data/maps/MulberryTown/scripts.pory"
	lock
# 35 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 36 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_BoyWithDogText
# 37 "data/maps/MulberryTown/scripts.pory"
	applymovement 5, MulberryTown_EventScript_BoyWithDog_Movement_0
# 38 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 39 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_Growlithe::
# 43 "data/maps/MulberryTown/scripts.pory"
	lock
# 44 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 45 "data/maps/MulberryTown/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 46 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Growlithe_Text_0
# 47 "data/maps/MulberryTown/scripts.pory"
	waitmoncry
# 48 "data/maps/MulberryTown/scripts.pory"
	applymovement 6, MulberryTown_EventScript_Growlithe_Movement_0
# 49 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 50 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_OldLady::
# 54 "data/maps/MulberryTown/scripts.pory"
	lock
# 55 "data/maps/MulberryTown/scripts.pory"
	dotimebasedevents
# 56 "data/maps/MulberryTown/scripts.pory"
	gettimeofday
# 57 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 57 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 62 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 63 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLadyAwakeText
# 64 "data/maps/MulberryTown/scripts.pory"
	release
	end

MulberryTown_EventScript_OldLady_1:
# 58 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLady_Text_0
# 59 "data/maps/MulberryTown/scripts.pory"
	release
	end


MulberryTown_EventScript_MainSign::
# 71 "data/maps/MulberryTown/scripts.pory"
	lock
# 72 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_MainSignText
# 73 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_ForestSign::
# 77 "data/maps/MulberryTown/scripts.pory"
	lock
# 78 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_ForestSignText
# 79 "data/maps/MulberryTown/scripts.pory"
	release
	return


# 37 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_BoyWithDog_Movement_0:
# 37 "data/maps/MulberryTown/scripts.pory"
	face_left
	step_end

# 48 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_Growlithe_Movement_0:
# 48 "data/maps/MulberryTown/scripts.pory"
	face_right
	step_end

MulberryTown_EventScript_Growlithe_Text_0:
# 46 "data/maps/MulberryTown/scripts.pory"
	.string "Grr-woof!$"

MulberryTown_EventScript_OldLady_Text_0:
# 58 "data/maps/MulberryTown/scripts.pory"
	.string "Zzzz....\p"
	.string "(Looks like she fell asleep...)$"

MulberryTown_EventScript_Artist1Text::
# 82 "data/maps/MulberryTown/scripts.pory"
	.string "Every now and then, I go into Mulberry\n"
	.string "Woods in search of the perfect muse.\p"
	.string "I hear rumors of a truly elegant\n"
	.string "Pokémon that resides there, but I fear\l"
	.string "my own Pokémon aren't strong enough to\l"
	.string "go looking for it on my own.\p"
	.string "Maybe if...oh, never you mind.$"

MulberryTown_EventScript_BoyWithDogText::
# 92 "data/maps/MulberryTown/scripts.pory"
	.string "A strange Pokémon just ran through\n"
	.string "town and into the woods over there.\p"
	.string "It moved so fast, it spooked my\n"
	.string "Growlithe.\p"
	.string "Be careful if you're going in there, ok?$"

MulberryTown_EventScript_OldLadyAwakeText::
# 100 "data/maps/MulberryTown/scripts.pory"
	.string "This town is always so quiet and\n"
	.string "peaceful.\p"
	.string "Sitting out here, with the ocean breeze\n"
	.string "and the tranquil sounds of nature...\p"
	.string "Why, I feel like I could stay here\n"
	.string "forever!$"

MulberryTown_EventScript_MainSignText::
# 109 "data/maps/MulberryTown/scripts.pory"
	.string "Mulberry Town- \n"
	.string "“The town with an air of elegance.”$"

MulberryTown_EventScript_ForestSignText::
# 114 "data/maps/MulberryTown/scripts.pory"
	.string "Entering Mulberry Woods$"
