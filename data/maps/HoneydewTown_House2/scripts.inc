HoneydewTown_House2_MapScripts::
	.byte 0


HoneydewTown_House2_EventScript_Girl::
# 4 "data/maps/HoneydewTown_House2/scripts.pory"
	lock
# 5 "data/maps/HoneydewTown_House2/scripts.pory"
	faceplayer
# 6 "data/maps/HoneydewTown_House2/scripts.pory"
	msgbox HoneydewTown_House2_EventScript_GirlText
# 7 "data/maps/HoneydewTown_House2/scripts.pory"
	release
	return


HoneydewTown_House2_EventScript_Man::
# 11 "data/maps/HoneydewTown_House2/scripts.pory"
	lock
# 12 "data/maps/HoneydewTown_House2/scripts.pory"
	faceplayer
# 13 "data/maps/HoneydewTown_House2/scripts.pory"
	msgbox HoneydewTown_House2_EventScript_ManText
# 14 "data/maps/HoneydewTown_House2/scripts.pory"
	release
	return


HoneydewTown_House2_EventScript_GirlText::
# 17 "data/maps/HoneydewTown_House2/scripts.pory"
	.string "Have you been to Painter's Peak?\n"
	.string "It's just west of here.\p"
	.string "Sometimes, at night, I like to sit on the\n"
	.string "docks there, close my eyes, and listen\l"
	.string "to the sound of the waves crashing.$"

HoneydewTown_House2_EventScript_ManText::
# 26 "data/maps/HoneydewTown_House2/scripts.pory"
	.string "We moved to Honeydew from the big city\n"
	.string "not too long ago.\p"
	.string "The clean air here does wonders for my\n"
	.string "health.$"
