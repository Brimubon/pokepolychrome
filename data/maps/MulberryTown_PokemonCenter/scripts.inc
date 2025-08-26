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


MulberryTown_PokemonCenter_EventScript_Girl1Text::
# 32 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "My Pokémon got poisoned while I was\n"
	.string "training it in the woods.\p"
	.string "I forgot to buy any antidotes, but my\n"
	.string "Pokémon was able to recover on its own\l"
	.string "before it fainted.$"

MulberryTown_PokemonCenter_EventScript_Boy1Text::
# 40 "data/maps/MulberryTown_PokemonCenter/scripts.pory"
	.string "Pokémon Centers are amazing!\p"
	.string "Not only do they heal your Pokémon for\n"
	.string "free, they have beds you can rest in if\l"
	.string "you wanna pass the time.$"
