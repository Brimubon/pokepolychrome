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
	setflag FLAG_ENABLE_NO_ENCOUNTER
# 58 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 59 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthIntroText6
# 60 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 1
# 61 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return


HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt::
# 65 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 66 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	clearflag FLAG_HIDE_SCARLETT_LAB
# 67 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	addobject 5
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_0
# 69 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 70 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 48
# 71 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1
# 72 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 73 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 74 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett1, MSGBOX_AUTOCLOSE
# 75 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_2
# 76 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 77 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_3
# 78 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 79 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 80 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt1, MSGBOX_AUTOCLOSE
# 81 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1
# 82 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 83 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 84 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 85 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt2, MSGBOX_AUTOCLOSE
# 86 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 87 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 88 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	removeitem ITEM_PARCEL
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_5
# 91 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 92 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 93 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 94 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 72
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt3, MSGBOX_AUTOCLOSE
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_6
# 98 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 99 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1
# 100 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 101 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	message HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_0
# 103 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitfanfare
# 104 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 105 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 106 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	closemessage
# 107 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 108 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt4, MSGBOX_AUTOCLOSE
# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_7
# 110 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 111 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_8
# 112 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 113 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 114 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett2, MSGBOX_AUTOCLOSE
# 115 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett3, MSGBOX_AUTOCLOSE
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_9
# 119 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_10
# 120 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 121 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 122 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_1, MSGBOX_AUTOCLOSE
# 123 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	removeobject 5
# 124 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 125 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 126 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt5, MSGBOX_AUTOCLOSE
# 127 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HONEYDEW_JOURNAL_STATE, 1
# 128 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_MULBERRY_WOODS_STATE, 1
# 129 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 3
# 130 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return


HoneydewTown_ProfsLab_EventScript_GiveJournal0::
# 134 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 135 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 0
# 136 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal1::
# 141 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 142 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 1
# 143 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal2::
# 148 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 149 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 2
# 150 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal3::
# 155 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 156 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 3
# 157 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal::
# 162 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HONEYDEW_JOURNAL_STATE, 2
# 163 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 1, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_0
# 164 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 165 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_GiveJournalText1, MSGBOX_AUTOCLOSE
# 166 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playse SE_PIN
# 167 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_1
# 168 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 169 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_2
# 172 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_3
# 175 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_4
# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_5
HoneydewTown_ProfsLab_EventScript_GiveJournal_1:
# 182 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_GiveJournalText2, MSGBOX_AUTOCLOSE
# 183 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	message HoneydewTown_ProfsLab_EventScript_GiveJournal_Text_0
# 185 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitfanfare
# 186 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 187 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	closemessage
# 188 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_GiveJournalText3, MSGBOX_AUTOCLOSE
# 189 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 1, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 190 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 191 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_ALL_BADGES
# 192 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_TEAM_ALPHA
# 193 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return

HoneydewTown_ProfsLab_EventScript_GiveJournal_2:
# 170 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_2
# 171 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1

HoneydewTown_ProfsLab_EventScript_GiveJournal_3:
# 173 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_3
# 174 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1

HoneydewTown_ProfsLab_EventScript_GiveJournal_4:
# 176 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_4
# 177 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1

HoneydewTown_ProfsLab_EventScript_GiveJournal_5:
# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_5
# 180 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1


HoneydewTown_ProfsLab_EventScript_Hawth::
# 197 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 198 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 199 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 200 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 1
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_2
# 202 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 3
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_3
# 204 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 4
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_4
HoneydewTown_ProfsLab_EventScript_Hawth_1:
# 207 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return

HoneydewTown_ProfsLab_EventScript_Hawth_2:
# 201 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText1
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1

HoneydewTown_ProfsLab_EventScript_Hawth_3:
# 203 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText2
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1

HoneydewTown_ProfsLab_EventScript_Hawth_4:
# 205 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText3
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1


HoneydewTown_ProfsLab_EventScript_Aide1::
# 211 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 212 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, HoneydewTown_ProfsLab_EventScript_Aide1_2
# 215 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 216 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	message HoneydewTown_ProfsLab_EventScript_Aide1Hub
# 217 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmessage
# 218 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 219 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, HoneydewTown_ProfsLab_EventScript_Aide1_Text_0, HoneydewTown_ProfsLab_EventScript_Aide1_Text_1
# 220 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Aide1_6
# 223 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1Goodbye, MSGBOX_AUTOCLOSE
HoneydewTown_ProfsLab_EventScript_Aide1_5:
# 225 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 1, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 226 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
HoneydewTown_ProfsLab_EventScript_Aide1_1:
# 228 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return

HoneydewTown_ProfsLab_EventScript_Aide1_2:
# 213 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1Text
	goto HoneydewTown_ProfsLab_EventScript_Aide1_1

HoneydewTown_ProfsLab_EventScript_Aide1_6:
# 221 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1ExplainJournal, MSGBOX_AUTOCLOSE
	goto HoneydewTown_ProfsLab_EventScript_Aide1_5


HoneydewTown_ProfsLab_EventScript_Aide2::
# 232 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 233 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 234 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide2Text
# 235 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Hoothoot::
# 239 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 240 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 241 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 242 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0
# 243 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmoncry
# 244 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1
# 246 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Bookshelf::
# 250 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 251 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0
# 253 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Machine::
# 257 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 258 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_MachineText
# 259 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_PC::
# 263 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 264 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_PCText
# 265 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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

# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_0:
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 68 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1:
# 71 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_down
	step_end

# 75 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_2:
# 75 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 75 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 75 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_down
	step_end

# 77 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_3:
# 77 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4:
# 86 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_up
	step_end

# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_5:
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_up
	step_end

# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_6:
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_7:
# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_right
	step_end

# 111 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_8:
# 111 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_left
	step_end

# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_9:
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
	step_end

# 119 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_10:
# 119 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay_16
# 119 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay_16
# 119 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_down
	step_end

# 163 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_0:
# 163 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_right
	step_end

# 167 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_1:
# 167 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	emote_question_mark
# 167 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_left
	step_end

# 170 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_2:
# 170 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
	step_end

# 173 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_3:
# 173 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 173 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
	step_end

# 176 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_4:
# 176 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 176 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 176 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
	step_end

# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_5:
# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
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
# 102 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_1:
# 122 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, wait! Scarlett!$"

HoneydewTown_ProfsLab_EventScript_GiveJournal_Text_0:
# 184 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER} received the Journal!$"

HoneydewTown_ProfsLab_EventScript_Aide1_Text_0:
# 219 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Explain the Journal.$"

HoneydewTown_ProfsLab_EventScript_Aide1_Text_1:
# 219 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Nothing.$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0:
# 242 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Hoo!$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1:
# 244 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's carrying a bunch of papers in its\n"
	.string "beak.)$"

HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0:
# 251 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's crammed with notes on Pokémon.\n"
	.string "...They're a little hard to read...)$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText1::
# 268 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "....Hm?{PAUSE 84} Ah, hello there!\n"
	.string "Welcome to my Pokémon lab!\p"
	.string "What can I do for you?$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText2::
# 275 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...Oh?\p"
	.string "So you say your name is {PLAYER} and\n"
	.string "you're here to receive your Pokémon?\p"
	.string "...I{PAUSE 48}-I see.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText3::
# 284 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 306 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, I know!{PAUSE 72} {PLAYER}!\p"
	.string "Could you stop by Mulberry Town for me\n"
	.string "and make sure everything's alright?\p"
	.string "If there are any major problems, I want\n"
	.string "you and Scarlett to return here right\l"
	.string "away.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText5::
# 317 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Now, Mulberry Town is just east of\n"
	.string "Honeydew, but you'll have to pass\l"
	.string "through some tall grass to get there.\p"
	.string "However, with this little tool right\n"
	.string "here, that won't be an issue!$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText6::
# 326 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "There! With that extra-strength\n"
	.string "Cleanse Tag, no wild Pokémon will\l"
	.string "approach you, no matter how strong.\p"
	.string "It's, uh, still quite fragile, though...\n"
	.string "so be careful!\p"
	.string "Well, off you go, then!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett1::
# 337 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, {PLAYER}! You made it!\n"
	.string "How was the trip back?$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt1::
# 342 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER}! Scarlett told me everything\n"
	.string "that happened.\p"
	.string "I'm glad things turned out alright,\n"
	.string "though I wish you had just\l"
	.string "come over here to tell me right away.\p"
	.string "... ...{PAUSE 60}Ahem. Well, I suppose it\n"
	.string "doesn't matter now.\p"
	.string "{PLAYER}, may I see those Pokémon\n"
	.string "you found?$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt2::
# 357 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 378 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...Good, it doesn't seem like there's\n"
	.string "anything missing!\p"
	.string "Are you ready, {PLAYER}?\p"
	.string "I know this has been quite the hectic\n"
	.string "delay so far, but it's finally time\l"
	.string "for you to start your Pokémon journey!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt4::
# 389 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "That little device I just gave you is\n"
	.string "called a Pokédex.\p"
	.string "It's a high-tech encyclopedia that\n"
	.string "records any Pokémon you meet or catch.\p"
	.string "Not only that, but it contains detailed\n"
	.string "information on what moves a Pokémon\l"
	.string "can learn, and how they evolve.\p"
	.string "It's an essential tool for any\n"
	.string "Pokémon trainer.$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett2::
# 404 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "So, you've got a Pokédex now!\n"
	.string "Congrats, {PLAYER}!\p"
	.string "But to make full use of it,\n"
	.string "you're gonna need some of these.$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett3::
# 412 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "You'll want to catch a bunch of\n"
	.string "different Pokémon if you want to\l"
	.string "take on the League Challenge.\p"
	.string "Speaking of which, your first stop will\n"
	.string "be the Pokémon Gym in Almond City.\p"
	.string "That reminds me, I need to get back\n"
	.string "to surveying the Pokémon on Route 304.\p"
	.string "Good luck, {PLAYER}!\n"
	.string "And see you later, professor!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt5::
# 427 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Well, there she goes.\n"
	.string "Never staying in one place for too long.\l"
	.string "I'll have to talk to her later.\p"
	.string "And as for you, {PLAYER}, I believe\n"
	.string "you're on your way to becoming a\l"
	.string "truly exceptional Pokémon trainer.\p"
	.string "Almond City is just past Mulberry Woods,\n"
	.string "so it shouldn't be difficult to reach.\p"
	.string "That being said, if you find yourself\n"
	.string "getting lost, I have a spare Town Map\l"
	.string "at my house that you can use.\p"
	.string "Almond City's Pokémon Gym is located\n"
	.string "within its Trainer School, so I suggest\l"
	.string "you take a look at some of the classes\l"
	.string "they offer as well.\p"
	.string "Even if you consider yourself to be an\n"
	.string "experienced trainer, you might learn\l"
	.string "something new there.\p"
	.string "...Well, that's all from me for now.\n"
	.string "Good luck on your travels!$"

HoneydewTown_ProfsLab_EventScript_GiveJournalText1::
# 456 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ... ... ...You there.\n"
	.string "Come over here for a second.$"

HoneydewTown_ProfsLab_EventScript_GiveJournalText2::
# 461 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "You're, uh, {PLAYER}, correct?\n"
	.string "I overheard your conversation with\l"
	.string "the professor.\p"
	.string "... ... ...Here, take this.$"

HoneydewTown_ProfsLab_EventScript_GiveJournalText3::
# 469 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "While you're out exploring the region,\n"
	.string "you'll encounter many different people.\p"
	.string "Some may ask you to assist them with \n"
	.string "something, and it can be hard to keep it\l"
	.string "all in your head.\p"
	.string "That journal there should help you\n"
	.string "remember everything you need to do.\p"
	.string "Look, I've even written some things\n"
	.string "down for you to get you started.\p"
	.string "It's pretty simple, but let me know if\n"
	.string "you need help learning how to use it.\p"
	.string "...I've tried giving some of these to \n"
	.string "the professor to make this place a bit\l"
	.string "more organized, but he always ends up\l"
	.string "losing them in the end.\p"
	.string "So... I hope you get more use out of it\n"
	.string "than he did.\p"
	.string "... ... ...Um, that's all.\n"
	.string "Good luck out there.$"

HoneydewTown_ProfsLab_EventScript_Aide1Hub::
# 498 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ... ... ...Yes?\n"
	.string "What is it?$"

HoneydewTown_ProfsLab_EventScript_Aide1ExplainJournal::
# 503 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "It's quite simple, really.\p"
	.string "Once you've accepted a request from\n"
	.string "someone, details about it will be\l"
	.string "recorded in there automatically.\p"
	.string "For more complex requests with several\n"
	.string "smaller requirements, you can press the\l"
	.string "A button to view them on their own.\p"
	.string "Press the R button to filter\n"
	.string "requests by what state they're in.\l"
	.string "Or press Start to sort requests\l"
	.string "alpabetically.\p"
	.string "... ... ...Oh, and you can also press the\n"
	.string "Select button on a request to pin it to\l"
	.string "the top of the journal.\p"
	.string "...Yes, I believe that's all.\n"
	.string "Feel free to talk to me again if you\l"
	.string "forget any of this.\p"
	.string "... ... ...Goodbye for now, then.$"

HoneydewTown_ProfsLab_EventScript_Aide1Goodbye::
# 530 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ... ...Right.\n"
	.string "Goodbye, then.$"

HoneydewTown_ProfsLab_EventScript_HawthRegText1::
# 535 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Remember, Mulberry Town is just east\n"
	.string "of here.\p"
	.string "With that special Cleanse Tag I gave\n"
	.string "you, it should be easy to reach.$"

HoneydewTown_ProfsLab_EventScript_HawthRegText2::
# 543 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "The cloest Pokémon Gym from here is\n"
	.string "the one in Almond City.\p"
	.string "I wish you good luck in your travels!$"

HoneydewTown_ProfsLab_EventScript_HawthRegText3::
# 550 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Keep collecting gym badges.$"

HoneydewTown_ProfsLab_EventScript_Aide1Text::
# 554 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "...Scyther....{PAUSE 72} Seadra....{PAUSE 84}\n"
	.string "...Sealeo...{PAUSE 72} Seedot......\p"
	.string "Ugh, why can't I find our notes on\n"
	.string "Seaking?$"

HoneydewTown_ProfsLab_EventScript_Aide2Text::
# 562 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Prof. Hawthorne studies the relations\n"
	.string "between different species of Pokémon.\p"
	.string "He used to go out a lot on fieldwork,\n"
	.string "but he's gotten too old for that\l"
	.string "nowadays.\p"
	.string "Now he leaves most of the fieldwork to\n"
	.string "his niece, Scarlett.$"

HoneydewTown_ProfsLab_EventScript_MachineText::
# 574 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's a weird looking machine.)\p"
	.string "(There are tons of buttons and\n"
	.string "flashing lights on it... best to leave it\l"
	.string "alone.)$"

HoneydewTown_ProfsLab_EventScript_PCText::
# 582 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's the Prof's PC.)\p"
	.string "(There's a picture of the Prof. and\n"
	.string "another person holding a Pokémon\l"
	.string "and smiling.)$"
