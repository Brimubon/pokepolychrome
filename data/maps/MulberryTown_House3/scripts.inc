MulberryTown_House3_MapScripts::
	.byte 0


MulberryTown_House3_EventScript_Woman1::
# 4 "data/maps/MulberryTown_House3/scripts.pory"
	lock
# 5 "data/maps/MulberryTown_House3/scripts.pory"
	faceplayer
# 6 "data/maps/MulberryTown_House3/scripts.pory"
	msgbox MulberryTown_House3_EventScript_Woman1Text
# 7 "data/maps/MulberryTown_House3/scripts.pory"
	release
	return


MulberryTown_House3_EventScript_Woman2::
# 11 "data/maps/MulberryTown_House3/scripts.pory"
	lock
# 12 "data/maps/MulberryTown_House3/scripts.pory"
	faceplayer
# 13 "data/maps/MulberryTown_House3/scripts.pory"
	msgbox MulberryTown_House3_EventScript_Woman2Text
# 14 "data/maps/MulberryTown_House3/scripts.pory"
	release
	return


MulberryTown_House3_EventScript_Woman1Text::
# 18 "data/maps/MulberryTown_House3/scripts.pory"
	.string "Sniffle...\p"
	.string "I opened the windows to let some fresh\n"
	.string "air in... but I got a bunch of pollen\l"
	.string "instead.\p"
	.string "Ah...{PAUSE 48} Aah... ... ...{PAUSE 90} ACHOO!$"

MulberryTown_House3_EventScript_Woman2Text::
# 28 "data/maps/MulberryTown_House3/scripts.pory"
	.string "I hear there's some rare Pokémon you\n"
	.string "can find deep inside Mulberry Woods.\p"
	.string "But to get there, you'd either have to\n"
	.string "find a way to cut those small trees near\l"
	.string "the entrance, or go around.$"
