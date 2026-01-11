HoneydewTown_House1_MapScripts::
	.byte 0


HoneydewTown_House1_EventScript_Fisher::
# 4 "data/maps/HoneydewTown_House1/scripts.pory"
	lock
# 5 "data/maps/HoneydewTown_House1/scripts.pory"
	faceplayer
# 6 "data/maps/HoneydewTown_House1/scripts.pory"
	msgbox HoneydewTown_House1_EventScript_FisherText
# 7 "data/maps/HoneydewTown_House1/scripts.pory"
	release
	return


HoneydewTown_House1_EventScript_FisherText::
# 10 "data/maps/HoneydewTown_House1/scripts.pory"
	.string "Recently, Prof. Hawthorne's spent most\n"
	.string "of his time cooped up in his lab.\p"
	.string "He doesn't even stop by for our weekly\n"
	.string "chess matches anymore.\p"
	.string "Poor guy must be swamped with work....\n"
	.string "Or maybe he's just scared of losing his\l"
	.string "winning streak, hehehe.$"
