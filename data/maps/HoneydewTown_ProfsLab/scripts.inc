HoneydewTown_ProfsLab_MapScripts::
# 3 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HoneydewTown_ProfsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HoneydewTown_ProfsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	map_script_2 VAR_HAWTH_LAB_STATE, 0, HoneydewTown_ProfsLab_EventScript_HawthIntro
	.2byte 0


HoneydewTown_ProfsLab_EventScript_HawthIntro::
# 11 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_0
# 13 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 14 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 15 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText1, MSGBOX_AUTOCLOSE
# 16 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 17 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 18 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText2, MSGBOX_AUTOCLOSE
# 19 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_1
# 20 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 21 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 22 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_2
# 24 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 25 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 26 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_1, MSGBOX_AUTOCLOSE
# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_3
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 29 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 30 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 31 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_2, MSGBOX_AUTOCLOSE
# 32 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playse SE_PIN
# 33 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_4
# 34 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 35 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 32
# 36 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 37 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_3, MSGBOX_AUTOCLOSE
# 38 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_5
# 39 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 40 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 41 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText3, MSGBOX_AUTOCLOSE
# 42 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 48
# 43 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 44 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText4, MSGBOX_AUTOCLOSE
# 45 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_6
# 46 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 47 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 48 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText5, MSGBOX_AUTOCLOSE
# 49 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_7
# 50 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 51 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 52 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_4, MSGBOX_AUTOCLOSE
# 53 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitfanfare
# 54 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 55 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText6
# 56 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 1
# 57 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return


HoneydewTown_ProfsLab_EventScript_Hawth::
# 61 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 62 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 63 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 64 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText1
# 65 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Aide1::
# 69 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 70 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1Text
# 71 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Aide2::
# 75 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 76 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 77 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide2Text
# 78 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Hoothoot::
# 82 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 83 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 84 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 85 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0
# 86 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmoncry
# 87 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Bookshelf::
# 92 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 93 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0
# 94 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Machine::
# 98 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 99 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_MachineText
# 100 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_PC::
# 104 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 105 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_PCText
# 106 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_0:
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 12 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
	step_end

# 19 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_1:
# 19 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	face_left
	step_end

# 23 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_2:
# 23 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	face_down
	step_end

# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_3:
# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
	step_end

# 33 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_4:
# 33 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	emote_exclamation_mark
# 33 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	jump_in_place_up
	step_end

# 38 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_5:
# 38 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 38 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
	step_end

# 45 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_6:
# 45 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
	step_end

# 49 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_7:
# 49 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 49 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	face_down
	step_end

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_0:
# 22 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(W{PAUSE 48}-was that really supposed to be\n"
	.string "today...?)$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_1:
# 26 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Excuse me for a moment...$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_2:
# 31 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...{PAUSE 72} ... ... ... ... ... ... ...{PAUSE 84}\n"
	.string "... ... ... ... ... ... ... ... ... ...$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_3:
# 37 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "ACK!$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_4:
# 52 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(A small tag was attached to your bag.)$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0:
# 85 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Hoo!$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1:
# 87 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's carrying a bunch of papers in its\n"
	.string "beak.)$"

HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0:
# 93 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's crammed with notes on Pokémon.\n"
	.string "...They're a little hard to read...)$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText1::
# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "....Hm?{PAUSE 84} Ah, hello there!\n"
	.string "Welcome to my lab!\p"
	.string "What can I do for you?$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText2::
# 115 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "...........Oh?\p"
	.string "So you say your name is {PLAYER} and\n"
	.string "you're here to receive your Pokémon?\p"
	.string "...I{PAUSE 48}-I see.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText3::
# 122 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "R-right! {PLAYER}!\n"
	.string "So good to finally see you in person!\p"
	.string "I apologize, my schedule's been rather\n"
	.string "hectic lately...\p"
	.string "About your Pokémon, well... there's a\n"
	.string "small problem with that.\p"
	.string "You see, I had a package of Poké Balls\n"
	.string "with Pokémon in them set to be\l"
	.string "delivered to Mulberry Town's Pokémon\l"
	.string "Center.\p"
	.string "I asked my niece, Scarlett, to pick it up\n"
	.string "for me, but...\p"
	.string "Well, it's been some time and she has\n"
	.string "yet to return, so I'm quite worried...$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText4::
# 139 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, I know!{PAUSE 72} {PLAYER}!\p"
	.string "Could you stop by Mulberry Town for me\n"
	.string "and make sure everything's alright?\p"
	.string "If there are any major problems, I want\n"
	.string "you and Scarlett to return here right\l"
	.string "away.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText5::
# 148 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Now, Mulberry Town is just east of\n"
	.string "Honeydew, but you'll have to pass\l"
	.string "through some tall grass to get there.\p"
	.string "However, with this little tool right\n"
	.string "here, that won't be an issue!$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText6::
# 156 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "There! With that extra-strength\n"
	.string "Cleanse Tag, no wild Pokémon will\l"
	.string "approach you, no matter how strong.\p"
	.string "It's, uh, still quite fragile, though...\n"
	.string "so be careful!\p"
	.string "Well, off you go, then!$"

HoneydewTown_ProfsLab_EventScript_HawthRegText1::
# 165 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Remember, Mulberry Town is just east\n"
	.string "of here.\p"
	.string "With that special Cleanse Tag I gave\n"
	.string "you, it should be easy to reach.$"

HoneydewTown_ProfsLab_EventScript_Aide1Text::
# 172 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "...Scyther....{PAUSE 72} Seadra....{PAUSE 84}\n"
	.string "...Sealeo...{PAUSE 72} Seedot......\p"
	.string "Ugh, why can't I find our notes on\n"
	.string "Seaking?$"

HoneydewTown_ProfsLab_EventScript_Aide2Text::
# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Prof. Hawthorne studies the relations\n"
	.string "between different species of Pokémon.\p"
	.string "He used to go out a lot on fieldwork,\n"
	.string "but he's gotten too old for that\l"
	.string "nowadays.\p"
	.string "Now he leaves most of the fieldwork to\n"
	.string "his niece, Scarlett.$"

HoneydewTown_ProfsLab_EventScript_MachineText::
# 189 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's a weird looking machine.)\p"
	.string "(There are tons of buttons and\n"
	.string "flashing lights on it... best to leave it\l"
	.string "alone.)$"

HoneydewTown_ProfsLab_EventScript_PCText::
# 196 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's the Prof's PC.)\p"
	.string "(There's a picture of the Prof. and\n"
	.string "another person holding a Pokémon\l"
	.string "and smiling.)$"
