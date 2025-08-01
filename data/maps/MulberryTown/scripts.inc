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


MulberryTown_EventScript_MainSign::
# 12 "data/maps/MulberryTown/scripts.pory"
	lock
# 13 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_MainSignText
# 14 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_ForestSign::
# 18 "data/maps/MulberryTown/scripts.pory"
	lock
# 19 "data/maps/MulberryTown/scripts.pory"
	msgbox MulberryTown_EventScript_ForestSignText
# 20 "data/maps/MulberryTown/scripts.pory"
	release
	return


MulberryTown_EventScript_Artist1Text::
# 23 "data/maps/MulberryTown/scripts.pory"
	.string "Every now and then, I go into Mulberry\n"
	.string "Woods in search of the perfect muse.\p"
	.string "Sadly, the Pokemon there don't seem to\n"
	.string "appreciate my creative choices.$"

MulberryTown_EventScript_MainSignText::
# 30 "data/maps/MulberryTown/scripts.pory"
	.string "Mulberry Town- \n"
	.string "“A mysterious forest surrounds it.”$"

MulberryTown_EventScript_ForestSignText::
# 35 "data/maps/MulberryTown/scripts.pory"
	.string "Entering Mulberry Woods\p"
	.string "NOTE: Please stop putting top hats on\n"
	.string "the wild Pokemon here.$"
