MulberryTown_PokemonCenter_MapScripts::
# 2 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MulberryTown_PokemonCenter_OnTransition
# 3 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MulberryTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MulberryTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	map_script_2 VAR_MULBERRY_TOWN_GRUNT, 0, MulberryTown_PokemonCenter_EventScript_Scarlett
	.2byte 0


MulberryTown_PokemonCenter_OnTransition::
# 10 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_MULBERRY_TOWN
	return


MulberryTown_PokemonCenter_EventScript_Scarlett::
# 14 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lockall
# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_0
# 16 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 17 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	delay 16
# 18 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 2, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_1
# 19 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 20 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_ScarlettText1, MSGBOX_AUTOCLOSE
# 21 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 7, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_2
# 22 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 24 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_ScarlettText2, MSGBOX_AUTOCLOSE
# 25 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 2, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_3
# 26 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_ScarlettText3, MSGBOX_AUTOCLOSE
# 28 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	playse SE_PIN
# 29 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 3, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_4
# 30 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 31 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_ScarlettText4, MSGBOX_AUTOCLOSE
# 32 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 7, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_5
# 33 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 34 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 35 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_ScarlettText5, MSGBOX_AUTOCLOSE
# 36 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	playse SE_LEDGE
# 37 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 7, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_6
# 38 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 39 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 40 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Scarlett_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	delay 16
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 7, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_7
# 43 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 44 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 45 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Scarlett_Text_1, MSGBOX_AUTOCLOSE
# 46 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	delay 60
# 47 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 48 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_ScarlettText6, MSGBOX_AUTOCLOSE
# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 7, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_8
# 50 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 51 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_9
# 52 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 53 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 54 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_ScarlettText7, MSGBOX_AUTOCLOSE
# 55 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 7, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_7
# 56 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 57 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	delay 16
# 58 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	removeobject 7
# 59 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_SCARLETT_MULBERRY
# 60 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	removeobject 12, MAP_MULBERRY_TOWN
# 61 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_MULBERRY_GRUNT
# 62 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setvar VAR_MULBERRY_TOWN_GRUNT, 1
# 63 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setvar VAR_MULBERRY_TOWN_STATE, 1
# 64 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	releaseall
	return


MulberryTown_PokemonCenter_EventScript_Nurse::
# 68 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, MulberryTown_PokemonCenter_EventScript_Nurse_2
# 75 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_MULBERRY_NURSE
# 76 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 77 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmessage
# 78 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitbuttonpress
MulberryTown_PokemonCenter_EventScript_Nurse_1:
# 81 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return

MulberryTown_PokemonCenter_EventScript_Nurse_2:
# 69 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 70 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_NoPokemonText
# 71 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_PokemonCenter_EventScript_Nurse_Movement_0
# 72 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
	goto MulberryTown_PokemonCenter_EventScript_Nurse_1


MulberryTown_PokemonCenter_EventScript_Clerk::
# 85 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 86 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 87 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, MulberryTown_PokemonCenter_EventScript_Clerk_2
# 92 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	message gText_HowMayIServeYou
# 93 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmessage
# 94 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	pokemart MulberryTown_PokemonCenter_Pokemart
# 95 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain
MulberryTown_PokemonCenter_EventScript_Clerk_1:
# 97 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return

MulberryTown_PokemonCenter_EventScript_Clerk_2:
# 88 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_UnpackingText
# 89 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryTown_PokemonCenter_EventScript_Nurse_Movement_0
# 90 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 0
	goto MulberryTown_PokemonCenter_EventScript_Clerk_1


	.align 2
# 100 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_Pokemart:
# 101 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 102 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 103 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 104 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 105 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

MulberryTown_PokemonCenter_EventScript_Girl1::
# 109 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 110 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 111 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl1Text
# 112 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


MulberryTown_PokemonCenter_EventScript_Boy1::
# 116 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 117 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 118 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Boy1Text
# 119 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


MulberryTown_PokemonCenter_EventScript_Girl2::
# 123 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 124 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 125 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2Text1
# 126 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_0
# 127 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 128 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2Text2
# 129 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_STUFFUL, CRY_MODE_NORMAL
# 130 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2_Text_0
# 131 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmoncry
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 6, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_1
# 133 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 6
# 134 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2Text3
# 135 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_2
# 136 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 137 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2_Text_1
# 138 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_2
# 139 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 140 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2_Text_2
# 141 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_0
# 142 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 143 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


MulberryTown_PokemonCenter_EventScript_Stufful::
# 147 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 148 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 149 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_STUFFUL, CRY_MODE_NORMAL
# 150 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Stufful_Text_0, MSGBOX_AUTOCLOSE
# 151 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmoncry
# 152 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 6, MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_1
# 153 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement
# 154 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_0:
# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_up
# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_up
# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_right
# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_right
# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	face_up
	step_end

# 18 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_1:
# 18 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_down
	step_end

# 21 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_2:
# 21 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_up
	step_end

# 25 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_3:
# 25 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_slow_down
	step_end

# 29 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_4:
# 29 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	emote_exclamation_mark
# 29 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_left
	step_end

# 32 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_5:
# 32 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_right
	step_end

# 37 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_6:
# 37 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_fast_down
# 37 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 37 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	jump_up
# 37 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_7:
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_8:
# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_left
# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_left
# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_down
# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_down
# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_right
	step_end

# 51 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Scarlett_Movement_9:
# 51 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_left
	step_end

# 71 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Nurse_Movement_0:
# 71 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	face_down
	step_end

# 126 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Girl2_Movement_0:
# 126 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	face_up
	step_end

# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Girl2_Movement_1:
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_up
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	delay_16
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_down
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	delay_16
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_left
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_right
# 132 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_down
	step_end

# 138 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Girl2_Movement_2:
# 138 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	face_player
	step_end

MulberryTown_PokemonCenter_EventScript_Scarlett_Text_0:
# 40 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "ACK!$"

MulberryTown_PokemonCenter_EventScript_Scarlett_Text_1:
# 45 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "E{PAUSE 48}-excuse me!\n"
	.string "I'm kinda in a hurry right now!$"

MulberryTown_PokemonCenter_EventScript_Girl2_Text_0:
# 130 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Stufful...?$"

MulberryTown_PokemonCenter_EventScript_Girl2_Text_1:
# 137 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "... ... ... ...$"

MulberryTown_PokemonCenter_EventScript_Girl2_Text_2:
# 140 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "...It's having an off day.$"

MulberryTown_PokemonCenter_EventScript_Stufful_Text_0:
# 150 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Stufful!$"

MulberryTown_PokemonCenter_EventScript_ScarlettText1::
# 157 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "My apologies, ma'am. I've triple checked\n"
	.string "all the deliveries we've made today,\l"
	.string "but...\p"
	.string "It seems the package you're looking for\n"
	.string "has already been picked up.$"

MulberryTown_PokemonCenter_EventScript_ScarlettText2::
# 165 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Really? Oh no...\p"
	.string "Do you at least remember what the\n"
	.string "person who took it looked like?$"

MulberryTown_PokemonCenter_EventScript_ScarlettText3::
# 171 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "....Hmm...\p"
	.string "Oh! I think they were wearing some kind\n"
	.string "of weird, all-black outfit.\p"
	.string "It made it pretty hard to see what\n"
	.string "their face looked like...$"

MulberryTown_PokemonCenter_EventScript_ScarlettText4::
# 179 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Hey! I think I saw someone like that\n"
	.string "take off towards Mulberry Woods!$"

MulberryTown_PokemonCenter_EventScript_ScarlettText5::
# 184 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Mulberry Woods?! I've gotta catch up to\n"
	.string "them before they get too far!\p"
	.string "Thanks for the help!$"

MulberryTown_PokemonCenter_EventScript_ScarlettText6::
# 190 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "...Hey, wait.\n"
	.string "Haven't I seen you somewhere before?\p"
	.string "...{PAUSE 72}Oh, you're {PLAYER}, aren't you?\n"
	.string "I guess my uncle must've sent you here.\p"
	.string "{SPEAKER NAME_SCARLETT}My name's Scarlett.\n"
	.string "It's nice to finally meet you!\p"
	.string "... ... {PAUSE 72} ... ... ....\p"
	.string "Ah, right!{PAUSE 60} Listen! {PLAYER}!\n"
	.string "I'm gonna need your help!\p"
	.string "Someone ran off with the Pokémon we\n"
	.string "were going to give away.\p"
	.string "You've gotta help me catch them before\n"
	.string "it's too late!$"

MulberryTown_PokemonCenter_EventScript_ScarlettText7::
# 206 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Meet me in Mulberry Woods, alright?\n"
	.string "We'll talk more there!$"

MulberryTown_PokemonCenter_EventScript_NoPokemonText::
# 211 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Hello, and welcome to... oh?\p"
	.string "It doesn't seem like you have any\n"
	.string "Pokémon.\p"
	.string "Make sure to come back once you do so\n"
	.string "we can restore them to full health!$"

MulberryTown_PokemonCenter_EventScript_UnpackingText::
# 219 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Apologies, we're still busy unpacking\n"
	.string "some of our supplies.\p"
	.string "Come back later and we should have\n"
	.string "some goods available to sell to you!$"

MulberryTown_PokemonCenter_EventScript_Girl1Text::
# 226 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "My Pokémon got poisoned while I was\n"
	.string "training it in the woods.\p"
	.string "I forgot to buy antidotes, but my\n"
	.string "Pokémon was able to recover on its own\l"
	.string "before it fainted.$"

MulberryTown_PokemonCenter_EventScript_Boy1Text::
# 234 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Pokémon Centers are amazing!\p"
	.string "Not only do they heal your Pokémon for\n"
	.string "free, they have beds you can rest in if\l"
	.string "you want to pass the time.$"

MulberryTown_PokemonCenter_EventScript_Girl2Text1::
# 241 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Isn't my Stufful just the cutest?\n"
	.string "You won't find a cuter Pokémon in all of\l"
	.string "Myset, I assure you.\p"
	.string "Oh, and it's really smart and can do all\n"
	.string "kinds of neat tricks, too! Watch!$"

MulberryTown_PokemonCenter_EventScript_Girl2Text2::
# 249 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "C'mon, Stufful!\n"
	.string "Do the Baby-Doll Eyes and Brutal Swing\l"
	.string "combo, like we practiced!$"

MulberryTown_PokemonCenter_EventScript_Girl2Text3::
# 255 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "(The Stufful tripped on its feet and\n"
	.string "flailed around wildly...)$"
