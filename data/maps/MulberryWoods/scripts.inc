MulberryWoods_MapScripts::
	.byte 0


MulberryWoods_EventScript_NormalGirl::
# 5 "data/maps/MulberryWoods/scripts.pory"
	lock
# 6 "data/maps/MulberryWoods/scripts.pory"
	faceplayer
# 7 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_NormalGirlText
# 8 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_PressBSign::
# 12 "data/maps/MulberryWoods/scripts.pory"
	lock
# 13 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_PressBSignText
# 14 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_ExitSign::
# 18 "data/maps/MulberryWoods/scripts.pory"
	lock
# 19 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ExitSignText
# 20 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_NormalGirlText::
# 23 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm? Oh no, I'm not a trainer.\p"
	.string "But there are quite a few of them\n"
	.string "between here and Bisque City, so you\l"
	.string "should make sure to stock up on\l"
	.string "supplies at a Pokémon Center.$"

MulberryWoods_EventScript_PressBSignText::
# 31 "data/maps/MulberryWoods/scripts.pory"
	.string "Trainer Tips!\p"
	.string "When facing a wild Pokémon you don't\n"
	.string "feel like fighting, press B to quickly\l"
	.string "move your cursor to the “Run” option!$"

MulberryWoods_EventScript_ExitSignText::
# 38 "data/maps/MulberryWoods/scripts.pory"
	.string "Leaving Mulberry Woods\n"
	.string "Bisque City Ahead$"
