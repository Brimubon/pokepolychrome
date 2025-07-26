HoneydewTown_MapScripts::
	.byte 0


HoneydewTown_EventScript_Welcome::
# 5 "data/maps/HoneydewTown/scripts.pory"
	lock
# 6 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 7 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_WelcomeText
# 8 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_GiveMap::
# 12 "data/maps/HoneydewTown/scripts.pory"
	lock
# 13 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 14 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_GiveMapText
# 15 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_Shoes::
# 19 "data/maps/HoneydewTown/scripts.pory"
	lock
# 20 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 21 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ShoesText
# 22 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_Garden::
# 26 "data/maps/HoneydewTown/scripts.pory"
	lock
# 27 "data/maps/HoneydewTown/scripts.pory"
	faceplayer
# 28 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_GardenText
# 29 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_MainSign::
# 33 "data/maps/HoneydewTown/scripts.pory"
	lock
# 34 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_MainSignText
# 35 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_ProfSign::
# 39 "data/maps/HoneydewTown/scripts.pory"
	lock
# 40 "data/maps/HoneydewTown/scripts.pory"
	msgbox HoneydewTown_EventScript_ProfSignText
# 41 "data/maps/HoneydewTown/scripts.pory"
	release
	return


HoneydewTown_EventScript_WelcomeText::
# 44 "data/maps/HoneydewTown/scripts.pory"
	.string "We've made it to Honeydew!\n"
	.string "Hope the ride wasn't too rough, hehehe.\p"
	.string "If you're lookin' for the professor,\n"
	.string "he's probably in his lab, in the\l"
	.string "northwest part of town. Hard to miss.$"

HoneydewTown_EventScript_GiveMapText::
# 52 "data/maps/HoneydewTown/scripts.pory"
	.string "I saw you get off that boat...\n"
	.string "Are you new to the Coeze region?\p"
	.string "Here, take this.\n"
	.string "Consider it a welcome present.$"

HoneydewTown_EventScript_ShoesText::
# 59 "data/maps/HoneydewTown/scripts.pory"
	.string "Um... I like your running shoes!\n"
	.string "I have a pair like that, too.\p"
	.string "Uh... you can press B to start running,\n"
	.string "but you probably already knew that...$"

HoneydewTown_EventScript_GardenText::
# 66 "data/maps/HoneydewTown/scripts.pory"
	.string "Tending to this garden isn't easy,\n"
	.string "but to me, it's worth it.\p"
	.string "With all the people coming to Coeze for\n"
	.string "the League challenge, I want to make\l"
	.string "this town as pretty as it can be.$"

HoneydewTown_EventScript_MainSignText::
# 74 "data/maps/HoneydewTown/scripts.pory"
	.string "Honeydew Town- \n"
	.string "“The town of fresh beginnings.”$"

HoneydewTown_EventScript_ProfSignText::
# 79 "data/maps/HoneydewTown/scripts.pory"
	.string "Prof. Hawthorne's Lab$"
