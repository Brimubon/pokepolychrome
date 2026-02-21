HoneydewTown_ProfsLab_MapScripts::
# 3 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HoneydewTown_ProfsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HoneydewTown_ProfsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	map_script_2 VAR_HAWTH_LAB_STATE, 0, HoneydewTown_ProfsLab_EventScript_HawthIntro
# 5 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	map_script_2 VAR_HAWTH_LAB_STATE, 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt
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
# 24 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_2
# 25 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 26 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_1, MSGBOX_AUTOCLOSE
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_3
# 29 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 30 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 31 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 32 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_2, MSGBOX_AUTOCLOSE
# 34 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playse SE_PIN
# 35 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_4
# 36 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 37 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 32
# 38 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 39 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_3, MSGBOX_AUTOCLOSE
# 40 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_5
# 41 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 42 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 43 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText3, MSGBOX_AUTOCLOSE
# 44 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 48
# 45 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 46 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText4, MSGBOX_AUTOCLOSE
# 47 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_6
# 48 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 49 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 50 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText5, MSGBOX_AUTOCLOSE
# 51 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_7
# 52 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 53 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 54 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_4, MSGBOX_AUTOCLOSE
# 56 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitfanfare
# 57 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 58 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText6
# 59 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 1
# 60 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return


HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt::
# 64 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 65 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	clearflag FLAG_HIDE_SCARLETT_LAB
# 66 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	addobject 5
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_0
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 69 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 48
# 70 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1
# 71 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 72 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 73 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett1, MSGBOX_AUTOCLOSE
# 74 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_2
# 75 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 76 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_3
# 77 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 78 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 79 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt1, MSGBOX_AUTOCLOSE
# 80 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1
# 81 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 82 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 83 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 84 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt2, MSGBOX_AUTOCLOSE
# 85 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 86 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 87 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_5
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 91 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 92 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 72
# 93 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 94 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt3, MSGBOX_AUTOCLOSE
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_6
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1
# 98 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 99 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	message HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_0
# 101 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitfanfare
# 102 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 103 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 104 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	closemessage
# 105 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 106 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt4, MSGBOX_AUTOCLOSE
# 107 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_7
# 108 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_8
# 110 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 111 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 112 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett2, MSGBOX_AUTOCLOSE
# 113 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 114 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 115 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett3, MSGBOX_AUTOCLOSE
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_9
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_10
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 119 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 120 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_1, MSGBOX_AUTOCLOSE
# 121 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	removeobject 5
# 122 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 123 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 124 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt5, MSGBOX_AUTOCLOSE
# 125 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_MULBERRY_WOODS_STATE, 1
# 126 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 3
# 127 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return


HoneydewTown_ProfsLab_EventScript_Hawth::
# 131 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 132 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 133 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 134 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 1
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_2
# 136 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 3
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_3
# 138 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 4
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_4
HoneydewTown_ProfsLab_EventScript_Hawth_1:
# 141 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return

HoneydewTown_ProfsLab_EventScript_Hawth_2:
# 135 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText1
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1

HoneydewTown_ProfsLab_EventScript_Hawth_3:
# 137 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText2
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1

HoneydewTown_ProfsLab_EventScript_Hawth_4:
# 139 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText3
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1


HoneydewTown_ProfsLab_EventScript_Aide1::
# 145 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 146 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1Text
# 147 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Aide2::
# 151 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 152 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 153 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide2Text
# 154 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Hoothoot::
# 158 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 159 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 160 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 161 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0
# 162 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmoncry
# 163 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1
# 165 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Bookshelf::
# 169 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 170 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0
# 172 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Machine::
# 176 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 177 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_MachineText
# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_PC::
# 182 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 183 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_PCText
# 184 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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

# 24 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_2:
# 24 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	face_down
	step_end

# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_3:
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 28 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
	step_end

# 35 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_4:
# 35 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	emote_exclamation_mark
# 35 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	jump_in_place_up
	step_end

# 40 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_5:
# 40 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 40 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
	step_end

# 47 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_6:
# 47 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthIntro_Movement_7:
# 51 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 51 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	face_down
	step_end

# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_0:
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1:
# 70 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_down
	step_end

# 74 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_2:
# 74 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 74 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 74 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_down
	step_end

# 76 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_3:
# 76 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
	step_end

# 85 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4:
# 85 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_up
	step_end

# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_5:
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_up
	step_end

# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_6:
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
	step_end

# 107 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_7:
# 107 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 107 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_right
	step_end

# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_8:
# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_left
	step_end

# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_9:
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
	step_end

# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_10:
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay_16
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay_16
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_down
	step_end

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_0:
# 22 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(W{PAUSE 48}-was that really supposed to be\n"
	.string "today...?)$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_1:
# 27 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Excuse me for a moment...$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_2:
# 32 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...{PAUSE 72} ... ... ... ... ... ... ...{PAUSE 84}\n"
	.string "... ... ... ... ... ... ... ... ... ...$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_3:
# 39 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "ACK!$"

HoneydewTown_ProfsLab_EventScript_HawthIntro_Text_4:
# 54 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(A small piece of paper was attached to\n"
	.string "your bag.)$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_0:
# 100 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_1:
# 120 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, wait! Scarlett!$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0:
# 161 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Hoo!$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1:
# 163 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's carrying a bunch of papers in its\n"
	.string "beak.)$"

HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0:
# 170 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's crammed with notes on Pokémon.\n"
	.string "...They're a little hard to read...)$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText1::
# 187 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "....Hm?{PAUSE 84} Ah, hello there!\n"
	.string "Welcome to my lab!\p"
	.string "What can I do for you?$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText2::
# 194 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...Oh?\p"
	.string "So you say your name is {PLAYER} and\n"
	.string "you're here to receive your Pokémon?\p"
	.string "...I{PAUSE 48}-I see.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText3::
# 203 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 225 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, I know!{PAUSE 72} {PLAYER}!\p"
	.string "Could you stop by Mulberry Town for me\n"
	.string "and make sure everything's alright?\p"
	.string "If there are any major problems, I want\n"
	.string "you and Scarlett to return here right\l"
	.string "away.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText5::
# 236 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Now, Mulberry Town is just east of\n"
	.string "Honeydew, but you'll have to pass\l"
	.string "through some tall grass to get there.\p"
	.string "However, with this little tool right\n"
	.string "here, that won't be an issue!$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText6::
# 245 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "There! With that extra-strength\n"
	.string "Cleanse Tag, no wild Pokémon will\l"
	.string "approach you, no matter how strong.\p"
	.string "It's, uh, still quite fragile, though...\n"
	.string "so be careful!\p"
	.string "Well, off you go, then!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett1::
# 256 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, {PLAYER}! You made it!\n"
	.string "How was the trip back?$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt1::
# 261 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER}! Scarlett told me everything\n"
	.string "that happened.\p"
	.string "I'm glad things turned out well,\n"
	.string "though I wish you had come over here\l"
	.string "to tell me right away.\p"
	.string "...Well, I suppose it doesn't matter now.\n"
	.string "{PLAYER}, may I see those Pokémon\l"
	.string "you found?$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt2::
# 274 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...Hm, how interesting!\p"
	.string "These Pokémon aren't very common\n"
	.string "in this region.\p"
	.string "And though you've only just met them,\n"
	.string "they're already starting to trust you.\p"
	.string "The person who stole these Pokémon,\n"
	.string "they said they were from Team Alpha,\l"
	.string "correct?\p"
	.string "That name doesn't ring any bells, but if\n"
	.string "they're going around nabbing Pokemon,\l"
	.string "we should keep an eye on them.\p"
	.string "Ah, right. {PLAYER}, would you mind\n"
	.string "giving me that package?$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt3::
# 295 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...Good, it doesn't seem like there's\n"
	.string "anything missing!\p"
	.string "Are you ready, {PLAYER}?\p"
	.string "I know this has been quite the hectic\n"
	.string "delay so far, but it's finally time\l"
	.string "for you to start your Pokémon journey!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt4::
# 306 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "That little device I just gave you is\n"
	.string "called a Pokédex.\p"
	.string "It's a high-tech encyclopedia that\n"
	.string "records any Pokémon you meet or catch.\p"
	.string "Not only that, but it contains detailed\n"
	.string "information on what moves a Pokémon \l"
	.string "can learn, and how they evolve.\p"
	.string "It's an essential tool for any\n"
	.string "Pokémon trainer.$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett2::
# 321 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "So, you've got a Pokédex now!\n"
	.string "Congrats, {PLAYER}!\p"
	.string "But to make full use of it,\n"
	.string "you're gonna need some of these.$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett3::
# 329 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "You'll want to catch a bunch of\n"
	.string "different Pokémon if you want to\l"
	.string "take on the League Challenge.\p"
	.string "Speaking of which, your first stop will\n"
	.string "be the Pokémon Gym in Bisque City.\l"
	.string "It's past Mulberry Woods.\p"
	.string "Anyway, I need to get back to surveying\n"
	.string "the Pokémon on Route 304.\p"
	.string "Good luck, {PLAYER}!\n"
	.string "And see you later, professor!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt5::
# 345 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Well, there she goes. \n"
	.string "Never staying in one place for too long.\l"
	.string "I suppose I'll have to talk to her later.\p"
	.string "And as for you, {PLAYER}, I believe\n"
	.string "you're on your way to becoming a \l"
	.string "truly exceptional Pokémon trainer.\p"
	.string "Good luck on your travels!$"

HoneydewTown_ProfsLab_EventScript_HawthRegText1::
# 357 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Remember, Mulberry Town is just east\n"
	.string "of here.\p"
	.string "With that special Cleanse Tag I gave\n"
	.string "you, it should be easy to reach.$"

HoneydewTown_ProfsLab_EventScript_HawthRegText2::
# 365 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "The cloest Pokémon Gym from here is\n"
	.string "the one in Bisque City.\p"
	.string "I wish you good luck in your travels!$"

HoneydewTown_ProfsLab_EventScript_HawthRegText3::
# 372 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Keep collecting gym badges.$"

HoneydewTown_ProfsLab_EventScript_Aide1Text::
# 376 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "...Scyther....{PAUSE 72} Seadra....{PAUSE 84}\n"
	.string "...Sealeo...{PAUSE 72} Seedot......\p"
	.string "Ugh, why can't I find our notes on\n"
	.string "Seaking?$"

HoneydewTown_ProfsLab_EventScript_Aide2Text::
# 384 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Prof. Hawthorne studies the relations\n"
	.string "between different species of Pokémon.\p"
	.string "He used to go out a lot on fieldwork,\n"
	.string "but he's gotten too old for that\l"
	.string "nowadays.\p"
	.string "Now he leaves most of the fieldwork to\n"
	.string "his niece, Scarlett.$"

HoneydewTown_ProfsLab_EventScript_MachineText::
# 396 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's a weird looking machine.)\p"
	.string "(There are tons of buttons and\n"
	.string "flashing lights on it... best to leave it\l"
	.string "alone.)$"

HoneydewTown_ProfsLab_EventScript_PCText::
# 404 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's the Prof's PC.)\p"
	.string "(There's a picture of the Prof. and\n"
	.string "another person holding a Pokémon\l"
	.string "and smiling.)$"
