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


MulberryWoods_EventScript_SeviperEncounter0::
# 54 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 55 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 0
# 56 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter1::
# 61 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 62 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 1
# 63 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter2::
# 68 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 69 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 2
# 70 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter3::
# 75 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 76 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 3
# 77 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter::
# 82 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 83 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 84 "data/maps/MulberryWoods/scripts.pory"
	delay 30
# 85 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 86 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_0
# 87 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 88 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_0, MSGBOX_AUTOCLOSE
# 89 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_2
# 92 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_3
# 95 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_4
# 98 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_5
MulberryWoods_EventScript_SeviperEncounter_1:
# 102 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 103 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_5
# 104 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 106 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_1, MSGBOX_AUTOCLOSE
# 107 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_6
# 108 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 109 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 110 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 111 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_0
# 112 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 113 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 114 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_Scarlett_Movement_4
# 115 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 116 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 117 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_2, MSGBOX_AUTOCLOSE
# 118 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 119 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_3, MSGBOX_AUTOCLOSE
# 120 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 121 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_5
# 122 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 123 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 124 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 125 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_7
# 126 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 127 "data/maps/MulberryWoods/scripts.pory"
	delay 120
# 128 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_8
# 129 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 130 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_9
# 131 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 132 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_3
# 133 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 134 "data/maps/MulberryWoods/scripts.pory"
	delay 120
# 135 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 136 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_7
# 137 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 138 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 139 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_10
# 140 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 141 "data/maps/MulberryWoods/scripts.pory"
	removeobject 14
# 142 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MET_PLYCHRME_STARTERS, 2
# 143 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_HIDE_SEVIPER
# 144 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

MulberryWoods_EventScript_SeviperEncounter_2:
# 90 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_1
# 91 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_3:
# 93 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_2
# 94 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_4:
# 96 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_3
# 97 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_5:
# 99 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_4
# 100 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1


MulberryWoods_EventScript_NormalGirl::
# 148 "data/maps/MulberryWoods/scripts.pory"
	lock
# 149 "data/maps/MulberryWoods/scripts.pory"
	faceplayer
# 150 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_NormalGirlText
# 151 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_PressBSign::
# 155 "data/maps/MulberryWoods/scripts.pory"
	lock
# 156 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_PressBSignText
# 157 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_ExitSign::
# 161 "data/maps/MulberryWoods/scripts.pory"
	lock
# 162 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ExitSignText
# 163 "data/maps/MulberryWoods/scripts.pory"
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

# 86 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_0:
# 86 "data/maps/MulberryWoods/scripts.pory"
	emote_question_mark
	step_end

# 90 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_1:
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 93 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_2:
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 96 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_3:
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_4:
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_5:
# 103 "data/maps/MulberryWoods/scripts.pory"
	face_player
# 103 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 107 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_6:
# 107 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_up
	step_end

# 125 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_7:
# 125 "data/maps/MulberryWoods/scripts.pory"
	emote_heart
	step_end

# 128 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_8:
# 128 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 128 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 128 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 130 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_9:
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 130 "data/maps/MulberryWoods/scripts.pory"
	face_left
	step_end

# 139 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_10:
# 139 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 139 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 139 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 139 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 139 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 139 "data/maps/MulberryWoods/scripts.pory"
	walk_right
	step_end

MulberryWoods_EventScript_SeviperEncounter_Text_0:
# 88 "data/maps/MulberryWoods/scripts.pory"
	.string "...Huh?\n"
	.string "That sounded like a Pokémon!$"

MulberryWoods_EventScript_SeviperEncounter_Text_1:
# 106 "data/maps/MulberryWoods/scripts.pory"
	.string "(There's that black tag from before...\n"
	.string "This time it's wrapped around its tail.)$"

MulberryWoods_EventScript_SeviperEncounter_Text_2:
# 117 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ... ... ...{PAUSE 84} ... ... ... ... ... ... ...$"

MulberryWoods_EventScript_SeviperEncounter_Text_3:
# 119 "data/maps/MulberryWoods/scripts.pory"
	.string "(You removed the tag.)$"

MulberryWoods_EventScript_ScarlettText1::
# 166 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh, {PLAYER}. There you are!\n"
	.string "Took you long enough!$"

MulberryWoods_EventScript_ScarlettText2::
# 171 "data/maps/MulberryWoods/scripts.pory"
	.string "Alright, so. Here's the plan.\p"
	.string "Whoever stole those Pokémon couldn't\n"
	.string "have gotten very far.$"

MulberryWoods_EventScript_ScarlettText3::
# 177 "data/maps/MulberryWoods/scripts.pory"
	.string "I'll check this side of the woods, and\n"
	.string "ask the trainers here if they saw\l"
	.string "anyone suspicious run by.$"

MulberryWoods_EventScript_ScarlettText4::
# 183 "data/maps/MulberryWoods/scripts.pory"
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
# 208 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm? Oh no, I'm not a trainer.\p"
	.string "But there are quite a few of them\n"
	.string "between here and Bisque City, so you\l"
	.string "should make sure you're stocked up on\l"
	.string "supplies.$"

MulberryWoods_EventScript_PressBSignText::
# 216 "data/maps/MulberryWoods/scripts.pory"
	.string "Trainer Tips!\p"
	.string "When facing a wild Pokémon you don't\n"
	.string "feel like fighting, press B to quickly\l"
	.string "move your cursor to the “Run” option!$"

MulberryWoods_EventScript_ExitSignText::
# 223 "data/maps/MulberryWoods/scripts.pory"
	.string "Leaving Mulberry Woods\n"
	.string "Bisque City Ahead$"
