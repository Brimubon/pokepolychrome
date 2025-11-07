MulberryTown_PokemonCenter_MapScripts::
# 2 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MulberryTown_PokemonCenter_OnTransition
# 3 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


MulberryTown_PokemonCenter_OnTransition::
# 7 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_MULBERRY_TOWN
	return


MulberryTown_PokemonCenter_EventScript_Nurse::
# 11 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_MULBERRY_NURSE
# 12 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmessage
# 14 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


MulberryTown_PokemonCenter_EventScript_Girl1::
# 19 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 20 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 21 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl1Text
# 22 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


MulberryTown_PokemonCenter_EventScript_Boy1::
# 26 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 27 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 28 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Boy1Text
# 29 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


MulberryTown_PokemonCenter_EventScript_Girl2::
# 33 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 34 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 35 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2Text1
# 36 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_0
# 37 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 38 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2Text2
# 39 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_STUFFUL, CRY_MODE_NORMAL
# 40 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2_Text_0
# 41 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmoncry
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 6, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_1
# 43 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 6
# 44 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2Text3
# 45 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_2
# 46 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 47 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2_Text_1
# 48 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_3
# 49 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 50 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Girl2_Text_2
# 51 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 5, MulberryTown_PokemonCenter_EventScript_Girl2_Movement_0
# 52 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement 5
# 53 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


MulberryTown_PokemonCenter_EventScript_Stufful::
# 57 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	lock
# 58 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	faceplayer
# 59 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_STUFFUL, CRY_MODE_NORMAL
# 60 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	msgbox MulberryTown_PokemonCenter_EventScript_Stufful_Text_0
# 61 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmoncry
# 62 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	applymovement 6, MulberryTown_PokemonCenter_EventScript_Stufful_Movement_0
# 63 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	waitmovement
# 64 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	release
	return


# 36 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Girl2_Movement_0:
# 36 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	face_up
	step_end

# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Girl2_Movement_1:
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_up
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_down
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_left
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_right
# 42 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_down
	step_end

# 45 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Girl2_Movement_2:
# 45 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_up
	step_end

# 48 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Girl2_Movement_3:
# 48 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	face_player
	step_end

# 62 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
MulberryTown_PokemonCenter_EventScript_Stufful_Movement_0:
# 62 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	walk_in_place_down
	step_end

MulberryTown_PokemonCenter_EventScript_Girl2_Text_0:
# 40 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Stufful...?$"

MulberryTown_PokemonCenter_EventScript_Girl2_Text_1:
# 47 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string ".....$"

MulberryTown_PokemonCenter_EventScript_Girl2_Text_2:
# 50 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "...It's having an off day.$"

MulberryTown_PokemonCenter_EventScript_Stufful_Text_0:
# 60 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Stufful!$"

MulberryTown_PokemonCenter_EventScript_Girl1Text::
# 67 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "My Pokémon got poisoned while I was\n"
	.string "training it in the woods.\p"
	.string "I forgot to buy antidotes, but my\n"
	.string "Pokémon was able to recover on its own\l"
	.string "before it fainted.$"

MulberryTown_PokemonCenter_EventScript_Boy1Text::
# 75 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Pokémon Centers are amazing!\p"
	.string "Not only do they heal your Pokémon for\n"
	.string "free, they have beds you can rest in if\l"
	.string "you want to pass the time.$"

MulberryTown_PokemonCenter_EventScript_Girl2Text1::
# 82 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Isn't my Stufful just the cutest?\n"
	.string "You won't find a cuter Pokémon in all of\l"
	.string "Coeze, I assure you.\p"
	.string "Oh, and it's really smart and can do all\n"
	.string "kinds of neat tricks, too! Watch!$"

MulberryTown_PokemonCenter_EventScript_Girl2Text2::
# 90 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "C'mon, Stufful!\n"
	.string "Do the Baby-Doll Eyes and Brutal Swing\l"
	.string "combo, like we practiced!$"

MulberryTown_PokemonCenter_EventScript_Girl2Text3::
# 96 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "(The Stufful tripped on its feet and\n"
	.string "flailed around wildly...)$"
