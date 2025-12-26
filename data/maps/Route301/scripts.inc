Route301_MapScripts::
	.byte 0


Route301_EventScript_ZangooseEncounter0::
# 4 "data/maps/Route301/scripts.pory"
	lockall
# 5 "data/maps/Route301/scripts.pory"
	setvar VAR_0x8008, 0
# 6 "data/maps/Route301/scripts.pory"
	goto Route301_EventScript_ZangooseEncounter
	end


Route301_EventScript_ZangooseEncounter1::
# 11 "data/maps/Route301/scripts.pory"
	lockall
# 12 "data/maps/Route301/scripts.pory"
	setvar VAR_0x8008, 1
# 13 "data/maps/Route301/scripts.pory"
	goto Route301_EventScript_ZangooseEncounter
	end


Route301_EventScript_ZangooseEncounter2::
# 18 "data/maps/Route301/scripts.pory"
	lockall
# 19 "data/maps/Route301/scripts.pory"
	setvar VAR_0x8008, 2
# 20 "data/maps/Route301/scripts.pory"
	goto Route301_EventScript_ZangooseEncounter
	end


Route301_EventScript_ZangooseEncounter::
# 25 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 26 "data/maps/Route301/scripts.pory"
	applymovement LOCALID_PLAYER, Route301_EventScript_ZangooseEncounter_Movement_0
# 27 "data/maps/Route301/scripts.pory"
	waitmovement LOCALID_PLAYER
# 28 "data/maps/Route301/scripts.pory"
	msgbox Route301_EventScript_ZangooseEncounter_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route301/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq Route301_EventScript_ZangooseEncounter_2
# 32 "data/maps/Route301/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route301_EventScript_ZangooseEncounter_3
# 35 "data/maps/Route301/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq Route301_EventScript_ZangooseEncounter_4
Route301_EventScript_ZangooseEncounter_1:
# 39 "data/maps/Route301/scripts.pory"
	delay 16
# 40 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 41 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_EventScript_ZangooseEncounter_Movement_4
# 42 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route301/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 44 "data/maps/Route301/scripts.pory"
	waitmoncry
# 45 "data/maps/Route301/scripts.pory"
	delay 30
# 46 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_EventScript_ZangooseEncounter_Movement_5
# 47 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route301/scripts.pory"
	msgbox Route301_EventScript_ZangooseEncounter_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route301/scripts.pory"
	applymovement LOCALID_PLAYER, Route301_EventScript_ZangooseEncounter_Movement_6
# 50 "data/maps/Route301/scripts.pory"
	waitmovement LOCALID_PLAYER
# 51 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_EventScript_ZangooseEncounter_Movement_7
# 52 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route301/scripts.pory"
	delay 48
# 54 "data/maps/Route301/scripts.pory"
	msgbox Route301_EventScript_ZangooseEncounter_Text_2, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route301/scripts.pory"
	delay 48
# 56 "data/maps/Route301/scripts.pory"
	msgbox Route301_EventScript_ZangooseEncounter_Text_3, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 58 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_EventScript_ZangooseEncounter_Movement_8
# 59 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route301/scripts.pory"
	delay 72
# 61 "data/maps/Route301/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_EventScript_ZangooseEncounter_Movement_9
# 63 "data/maps/Route301/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 64 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route301/scripts.pory"
	waitmoncry
# 66 "data/maps/Route301/scripts.pory"
	delay 72
# 67 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_EventScript_ZangooseEncounter_Movement_10
# 68 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route301/scripts.pory"
	delay 72
# 70 "data/maps/Route301/scripts.pory"
	applymovement 1, Route301_EventScript_ZangooseEncounter_Movement_11
# 71 "data/maps/Route301/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route301/scripts.pory"
	delay 30
# 73 "data/maps/Route301/scripts.pory"
	removeobject 1
# 74 "data/maps/Route301/scripts.pory"
	setvar VAR_MET_PLYCHRME_STARTERS, 1
# 75 "data/maps/Route301/scripts.pory"
	setflag FLAG_HIDE_ZANGOOSE
# 76 "data/maps/Route301/scripts.pory"
	releaseall
	return

Route301_EventScript_ZangooseEncounter_2:
# 30 "data/maps/Route301/scripts.pory"
	applymovement LOCALID_PLAYER, Route301_EventScript_ZangooseEncounter_Movement_1
# 31 "data/maps/Route301/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto Route301_EventScript_ZangooseEncounter_1

Route301_EventScript_ZangooseEncounter_3:
# 33 "data/maps/Route301/scripts.pory"
	applymovement LOCALID_PLAYER, Route301_EventScript_ZangooseEncounter_Movement_2
# 34 "data/maps/Route301/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto Route301_EventScript_ZangooseEncounter_1

Route301_EventScript_ZangooseEncounter_4:
# 36 "data/maps/Route301/scripts.pory"
	applymovement LOCALID_PLAYER, Route301_EventScript_ZangooseEncounter_Movement_3
# 37 "data/maps/Route301/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto Route301_EventScript_ZangooseEncounter_1


# 26 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_0:
# 26 "data/maps/Route301/scripts.pory"
	emote_question_mark
# 26 "data/maps/Route301/scripts.pory"
	face_right
	step_end

# 30 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_1:
# 30 "data/maps/Route301/scripts.pory"
	walk_right
# 30 "data/maps/Route301/scripts.pory"
	walk_right
# 30 "data/maps/Route301/scripts.pory"
	walk_down
# 30 "data/maps/Route301/scripts.pory"
	walk_right
	step_end

# 33 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_2:
# 33 "data/maps/Route301/scripts.pory"
	walk_right
# 33 "data/maps/Route301/scripts.pory"
	walk_right
# 33 "data/maps/Route301/scripts.pory"
	walk_right
	step_end

# 36 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_3:
# 36 "data/maps/Route301/scripts.pory"
	walk_right
# 36 "data/maps/Route301/scripts.pory"
	walk_right
# 36 "data/maps/Route301/scripts.pory"
	walk_up
# 36 "data/maps/Route301/scripts.pory"
	walk_right
	step_end

# 41 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_4:
# 41 "data/maps/Route301/scripts.pory"
	face_player
# 41 "data/maps/Route301/scripts.pory"
	emote_exclamation_mark
	step_end

# 46 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_5:
# 46 "data/maps/Route301/scripts.pory"
	lock_facing_direction
# 46 "data/maps/Route301/scripts.pory"
	walk_slow_right
# 46 "data/maps/Route301/scripts.pory"
	unlock_facing_direction
	step_end

# 49 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_6:
# 49 "data/maps/Route301/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_7:
# 51 "data/maps/Route301/scripts.pory"
	walk_in_place_left
	step_end

# 58 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_8:
# 58 "data/maps/Route301/scripts.pory"
	walk_in_place_left
# 58 "data/maps/Route301/scripts.pory"
	emote_question_mark
	step_end

# 62 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_9:
# 62 "data/maps/Route301/scripts.pory"
	emote_double_exclamation_mark
# 62 "data/maps/Route301/scripts.pory"
	delay_16
# 62 "data/maps/Route301/scripts.pory"
	jump_in_place_left
# 62 "data/maps/Route301/scripts.pory"
	walk_in_place_up
# 62 "data/maps/Route301/scripts.pory"
	delay_16
# 62 "data/maps/Route301/scripts.pory"
	walk_in_place_fast_down
# 62 "data/maps/Route301/scripts.pory"
	delay_16
# 62 "data/maps/Route301/scripts.pory"
	walk_in_place_right
# 62 "data/maps/Route301/scripts.pory"
	walk_in_place_fast_down
# 62 "data/maps/Route301/scripts.pory"
	delay_16
# 62 "data/maps/Route301/scripts.pory"
	walk_in_place_left
	step_end

# 67 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_10:
# 67 "data/maps/Route301/scripts.pory"
	lock_facing_direction
# 67 "data/maps/Route301/scripts.pory"
	walk_slow_right
# 67 "data/maps/Route301/scripts.pory"
	unlock_facing_direction
# 67 "data/maps/Route301/scripts.pory"
	face_left
	step_end

# 70 "data/maps/Route301/scripts.pory"
Route301_EventScript_ZangooseEncounter_Movement_11:
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
# 70 "data/maps/Route301/scripts.pory"
	walk_faster_right
	step_end

Route301_EventScript_ZangooseEncounter_Text_0:
# 28 "data/maps/Route301/scripts.pory"
	.string "...Oh?\n"
	.string "It's a Pokémon!$"

Route301_EventScript_ZangooseEncounter_Text_1:
# 48 "data/maps/Route301/scripts.pory"
	.string "(It's got a small black band on its foot\n"
	.string "that it's trying to rip off...)$"

Route301_EventScript_ZangooseEncounter_Text_2:
# 54 "data/maps/Route301/scripts.pory"
	.string ".......{PAUSE 60} ............$"

Route301_EventScript_ZangooseEncounter_Text_3:
# 56 "data/maps/Route301/scripts.pory"
	.string "(You removed the band.)$"
