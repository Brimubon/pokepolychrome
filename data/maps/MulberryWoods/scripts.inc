MulberryWoods_MapScripts::
	.byte 0


MulberryWoods_EventScript_ScarlettEncounter0::
# 5 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 6 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 0
# 7 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_Scarlett
	end


MulberryWoods_EventScript_ScarlettEncounter1::
# 12 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 13 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 1
# 14 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_Scarlett
	end


MulberryWoods_EventScript_Scarlett::
# 19 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 20 "data/maps/MulberryWoods/scripts.pory"
	applymovement 10, MulberryWoods_EventScript_Scarlett_Movement_0
# 21 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 22 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 23 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText1, MSGBOX_AUTOCLOSE
# 24 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq MulberryWoods_EventScript_Scarlett_2
# 27 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq MulberryWoods_EventScript_Scarlett_3
MulberryWoods_EventScript_Scarlett_1:
# 31 "data/maps/MulberryWoods/scripts.pory"
	applymovement 10, MulberryWoods_EventScript_Scarlett_Movement_3
# 32 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 34 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText2, MSGBOX_AUTOCLOSE
# 35 "data/maps/MulberryWoods/scripts.pory"
	applymovement 10, MulberryWoods_EventScript_Scarlett_Movement_4
# 36 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 38 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText3, MSGBOX_AUTOCLOSE
# 39 "data/maps/MulberryWoods/scripts.pory"
	applymovement 10, MulberryWoods_EventScript_Scarlett_Movement_3
# 40 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 41 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 42 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText4, MSGBOX_AUTOCLOSE
# 43 "data/maps/MulberryWoods/scripts.pory"
	applymovement 10, MulberryWoods_EventScript_Scarlett_Movement_5
# 44 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/MulberryWoods/scripts.pory"
	removeobject 10
# 46 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_HIDE_SCARLETT_MULWOODS1
# 47 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_3
# 48 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MULBERRY_TOWN_GRUNT, 2
# 50 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

MulberryWoods_EventScript_Scarlett_2:
# 25 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_1
# 26 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_Scarlett_1

MulberryWoods_EventScript_Scarlett_3:
# 28 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_2
# 29 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_Scarlett_1


MulberryWoods_EventScript_NormalGirl::
# 54 "data/maps/MulberryWoods/scripts.pory"
	lock
# 55 "data/maps/MulberryWoods/scripts.pory"
	faceplayer
# 56 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_NormalGirlText
# 57 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_PressBSign::
# 61 "data/maps/MulberryWoods/scripts.pory"
	lock
# 62 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_PressBSignText
# 63 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_ExitSign::
# 67 "data/maps/MulberryWoods/scripts.pory"
	lock
# 68 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ExitSignText
# 69 "data/maps/MulberryWoods/scripts.pory"
	release
	return


# 20 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_0:
# 20 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_down
# 20 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_1:
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 28 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_2:
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 31 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_3:
# 31 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_right
	step_end

# 35 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_4:
# 35 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 43 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_5:
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

MulberryWoods_EventScript_ScarlettText1::
# 72 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh, {PLAYER}. There you are!\n"
	.string "Took you long enough!$"

MulberryWoods_EventScript_ScarlettText2::
# 77 "data/maps/MulberryWoods/scripts.pory"
	.string "Alright, so. Here's the plan.\p"
	.string "Whoever stole those Pokémon couldn't\n"
	.string "have gotten very far.$"

MulberryWoods_EventScript_ScarlettText3::
# 83 "data/maps/MulberryWoods/scripts.pory"
	.string "I'll check this side of the woods, and\n"
	.string "ask the trainers here if they saw\l"
	.string "anyone suspicious run by.$"

MulberryWoods_EventScript_ScarlettText4::
# 89 "data/maps/MulberryWoods/scripts.pory"
	.string "Meanwhile, you'll cover this side of the\n"
	.string "woods.\p"
	.string "If you run into the thief, then...{PAUSE 80}\n"
	.string "... um...\p"
	.string "Right, you, uh, don't have any Pokémon\n"
	.string "yet, do you...\p"
	.string "Then...{PAUSE 60} uh....{PAUSE 72} try distracting them!\n"
	.string "Make a loud noise or something!\p"
	.string "I promise, I'll come running to help as\n"
	.string "soon as I hear it!\p"
	.string "... ... ... ... ... ... ...\p"
	.string "Don't give me that look, alright?!\n"
	.string "We don't have time to come up with\l"
	.string "a better plan!\p"
	.string "Listen, I know you'll be fine.\n"
	.string "I know we've only just met, but...\p"
	.string "You seem like the kind of person who\n"
	.string "can handle themselves in any situation.\p"
	.string "So... I know that things will turn out\n"
	.string "just fine.\p"
	.string "...Okay?{PAUSE 72} Okay!\p"
	.string "Let's go thief hunting!$"

MulberryWoods_EventScript_NormalGirlText::
# 114 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm? Oh no, I'm not a trainer.\p"
	.string "But there are quite a few of them\n"
	.string "between here and Bisque City, so you\l"
	.string "should make sure you're stocked up on\l"
	.string "supplies.$"

MulberryWoods_EventScript_PressBSignText::
# 122 "data/maps/MulberryWoods/scripts.pory"
	.string "Trainer Tips!\p"
	.string "When facing a wild Pokémon you don't\n"
	.string "feel like fighting, press B to quickly\l"
	.string "move your cursor to the “Run” option!$"

MulberryWoods_EventScript_ExitSignText::
# 129 "data/maps/MulberryWoods/scripts.pory"
	.string "Leaving Mulberry Woods\n"
	.string "Bisque City Ahead$"
