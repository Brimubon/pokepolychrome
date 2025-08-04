MulberryTown_MapScripts::
	.byte 0


MulberryTown_EventScript_Artist1::
# 5 "data/maps/MulberryTown/scripts.pory"
	lock
# 6 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 7 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Artist1Text
# 8 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_BoyWithDog::
# 12 "data/maps/MulberryTown/scripts.pory"
	lock
# 13 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 14 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_BoyWithDogText
# 15 "data/maps/MulberryTown/scripts.pory"
	applymovement 5, MulberryTown_EventScript_BoyWithDog_Movement_0
# 16 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 17 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_Growlithe::
# 21 "data/maps/MulberryTown/scripts.pory"
	lock
# 22 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 23 "data/maps/MulberryTown/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 24 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_Growlithe_Text_0
# 25 "data/maps/MulberryTown/scripts.pory"
	waitmoncry
# 26 "data/maps/MulberryTown/scripts.pory"
	applymovement 6, MulberryTown_EventScript_Growlithe_Movement_0
# 27 "data/maps/MulberryTown/scripts.pory"
	waitmovement
# 28 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_OldLady::
# 32 "data/maps/MulberryTown/scripts.pory"
	lock
# 33 "data/maps/MulberryTown/scripts.pory"
	dotimebasedevents
# 34 "data/maps/MulberryTown/scripts.pory"
	gettimeofday
# 35 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 35 "data/maps/MulberryTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq MulberryTown_EventScript_OldLady_1
# 40 "data/maps/MulberryTown/scripts.pory"
	faceplayer
# 41 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLadyAwakeText
# 42 "data/maps/MulberryTown/scripts.pory"
	release
	end

MulberryTown_EventScript_OldLady_1:
# 36 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_OldLady_Text_0
# 37 "data/maps/MulberryTown/scripts.pory"
	release
	end


MulberryTown_EventScript_MainSign::
# 49 "data/maps/MulberryTown/scripts.pory"
	lock
# 50 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_MainSignText
# 51 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_ForestSign::
# 55 "data/maps/MulberryTown/scripts.pory"
	lock
# 56 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_ForestSignText
# 57 "data/maps/MulberryTown/scripts.pory"
	release
	return


# 15 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_BoyWithDog_Movement_0:
# 15 "data/maps/MulberryTown/scripts.pory"
	face_left
	step_end

# 26 "data/maps/MulberryTown/scripts.pory"
MulberryTown_EventScript_Growlithe_Movement_0:
# 26 "data/maps/MulberryTown/scripts.pory"
	face_right
	step_end

MulberryTown_EventScript_Growlithe_Text_0:
# 24 "data/maps/MulberryTown/scripts.pory"
	.string "Grr-woof!$"

MulberryTown_EventScript_OldLady_Text_0:
# 36 "data/maps/MulberryTown/scripts.pory"
	.string "Zzzz....\p"
	.string "(Looks like she fell asleep...)$"

MulberryTown_EventScript_Artist1Text::
# 60 "data/maps/MulberryTown/scripts.pory"
	.string "Every now and then, I go into Mulberry\n"
	.string "Woods in search of the perfect muse.\p"
	.string "I hear rumors of a truly elegant\n"
	.string "Pokémon that resides there, but I fear\l"
	.string "my own Pokémon aren't strong enough to\l"
	.string "go looking for it on my own.\p"
	.string "Maybe if...oh, never you mind.$"

MulberryTown_EventScript_BoyWithDogText::
# 70 "data/maps/MulberryTown/scripts.pory"
	.string "A strange Pokémon just ran through\n"
	.string "town and into the woods over there.\p"
	.string "It moved so fast, it spooked my\n"
	.string "Growlithe.\p"
	.string "Be careful if you're going in there, ok?$"

MulberryTown_EventScript_OldLadyAwakeText::
# 78 "data/maps/MulberryTown/scripts.pory"
	.string "This town is always so quiet and\n"
	.string "peaceful.\p"
	.string "Sitting out here, with the ocean breeze\n"
	.string "and the tranquil sounds of nature...\p"
	.string "Why, I feel like I could stay here\n"
	.string "forever!$"

MulberryTown_EventScript_MainSignText::
# 87 "data/maps/MulberryTown/scripts.pory"
	.string "Mulberry Town- \n"
	.string "“A mysterious forest surrounds it.”$"

MulberryTown_EventScript_ForestSignText::
# 92 "data/maps/MulberryTown/scripts.pory"
	.string "Entering Mulberry Woods$"
