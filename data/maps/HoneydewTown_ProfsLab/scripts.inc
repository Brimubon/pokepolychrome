HoneydewTown_ProfsLab_MapScripts::
	.byte 0


HoneydewTown_ProfsLab_Aide1::
# 4 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 5 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Aide1Text
# 6 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Aide2::
# 10 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 11 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Aide2Text
# 13 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Hoothoot::
# 17 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 18 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 19 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 20 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Hoothoot_Text_0
# 21 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmoncry
# 22 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Hoothoot_Text_1
# 23 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Bookshelf::
# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_Bookshelf_Text_0
# 29 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Machine::
# 33 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 34 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_MachineText
# 35 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_PC::
# 39 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 40 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_PCText
# 41 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_Hoothoot_Text_0:
# 20 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Hoo!$"

HoneydewTown_ProfsLab_Hoothoot_Text_1:
# 22 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's carrying a bunch of papers in its\n"
	.string "beak.)$"

HoneydewTown_ProfsLab_Bookshelf_Text_0:
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's crammed with notes on Pokémon.\n"
	.string "...They're a little hard to read...)$"

HoneydewTown_ProfsLab_Aide1Text::
# 44 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "...Scyther....Seadra........\n"
	.string "...Sealeo...Seedot......\p"
	.string "Ugh, why can't I find our notes on\n"
	.string "Seaking?$"

HoneydewTown_ProfsLab_Aide2Text::
# 51 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Prof. Hawthorne studies the relations\n"
	.string "between different species of Pokémon.\p"
	.string "He used to go out a lot on fieldwork,\n"
	.string "but he's gotten too old for that\l"
	.string "nowadays.\p"
	.string "Now he leaves most of the fieldwork to\n"
	.string "his niece, Lucidia.$"

HoneydewTown_ProfsLab_MachineText::
# 61 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's a weird looking machine.)\p"
	.string "(There are tons of buttons and\n"
	.string "flashing lights on it...best to leave it\l"
	.string "alone.)$"

HoneydewTown_ProfsLab_PCText::
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's the Prof's PC.)\p"
	.string "(There's a picture of the Prof. and\n"
	.string "another person holding a Pokémon\l"
	.string "and smiling.)$"
