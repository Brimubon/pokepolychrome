HoneydewTown_ProfsLab_MapScripts::
	.byte 0


HoneydewTown_ProfsLab_HawthIntro::
# 5 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 6 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 7 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_HawthIntroText
# 8 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Aide1::
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 13 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Aide1Text
# 14 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Aide2::
# 18 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 19 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 20 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Aide2Text
# 21 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Hoothoot::
# 25 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 26 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Hoothoot_Text_0
# 29 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmoncry
# 30 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Hoothoot_Text_1
# 31 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Bookshelf::
# 35 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 36 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Bookshelf_Text_0
# 37 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Machine::
# 41 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 42 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_MachineText
# 43 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_PC::
# 47 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 48 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_PCText
# 49 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Hoothoot_Text_0:
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Hoo!$"

HoneydewTown_ProfsLab_Hoothoot_Text_1:
# 30 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's carrying a bunch of papers in its\n"
	.string "beak.)$"

HoneydewTown_ProfsLab_Bookshelf_Text_0:
# 36 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's crammed with notes on Pokémon.\n"
	.string "...They're a little hard to read...)$"

HoneydewTown_ProfsLab_HawthIntroText::
# 52 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Hello! Welcome to my lab!$"

HoneydewTown_ProfsLab_Aide1Text::
# 56 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "...Scyther....Seadra........\n"
	.string "...Sealeo...Seedot......\p"
	.string "Ugh, why can't I find our notes on\n"
	.string "Seaking?$"

HoneydewTown_ProfsLab_Aide2Text::
# 63 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Prof. Hawthorne studies the relations\n"
	.string "between different species of Pokémon.\p"
	.string "He used to go out a lot on fieldwork,\n"
	.string "but he's gotten too old for that\l"
	.string "nowadays.\p"
	.string "Now he leaves most of the fieldwork to\n"
	.string "his niece, Lucidia.$"

HoneydewTown_ProfsLab_MachineText::
# 73 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's a weird looking machine.)\p"
	.string "(There are tons of buttons and\n"
	.string "flashing lights on it...best to leave it\l"
	.string "alone.)$"

HoneydewTown_ProfsLab_PCText::
# 80 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's the Prof's PC.)\p"
	.string "(There's a picture of the Prof. and\n"
	.string "another person holding a Pokémon\l"
	.string "and smiling.)$"
