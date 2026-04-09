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
	delay 60
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_5
# 90 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 91 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 92 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 93 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 72
# 94 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 95 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt3, MSGBOX_AUTOCLOSE
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_6
# 97 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 98 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_1
# 99 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 100 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 101 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	message HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_0
# 102 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitfanfare
# 103 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 104 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 105 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	closemessage
# 106 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 107 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt4, MSGBOX_AUTOCLOSE
# 108 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_7
# 109 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 110 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_8
# 111 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 112 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 113 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett2, MSGBOX_AUTOCLOSE
# 114 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 115 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 116 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett3, MSGBOX_AUTOCLOSE
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 5, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_9
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 2, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_10
# 119 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 120 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 121 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_1, MSGBOX_AUTOCLOSE
# 122 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	removeobject 5
# 123 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 124 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 125 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt5, MSGBOX_AUTOCLOSE
# 126 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HONEYDEW_JOURNAL_STATE, 1
# 127 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_MULBERRY_WOODS_STATE, 1
# 128 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 3
# 129 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return


HoneydewTown_ProfsLab_EventScript_GiveJournal0::
# 133 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 134 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 0
# 135 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal1::
# 140 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 141 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 1
# 142 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal2::
# 147 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 148 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 2
# 149 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal3::
# 154 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lockall
# 155 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_0x8008, 3
# 156 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal
	end


HoneydewTown_ProfsLab_EventScript_GiveJournal::
# 161 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setvar VAR_HONEYDEW_JOURNAL_STATE, 2
# 162 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 1, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_0
# 163 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 164 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_GiveJournalText1, MSGBOX_AUTOCLOSE
# 165 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playse SE_PIN
# 166 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_1
# 167 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 168 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_2
# 171 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_3
# 174 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_4
# 177 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq HoneydewTown_ProfsLab_EventScript_GiveJournal_5
HoneydewTown_ProfsLab_EventScript_GiveJournal_1:
# 181 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_GiveJournalText2, MSGBOX_AUTOCLOSE
# 182 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 183 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	message HoneydewTown_ProfsLab_EventScript_GiveJournal_Text_0
# 184 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitfanfare
# 185 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 186 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	closemessage
# 187 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_GiveJournalText3, MSGBOX_AUTOCLOSE
# 188 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 1, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 189 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
# 190 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_ALL_BADGES
# 191 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_TEAM_ALPHA
# 192 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	releaseall
	return

HoneydewTown_ProfsLab_EventScript_GiveJournal_2:
# 169 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_2
# 170 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1

HoneydewTown_ProfsLab_EventScript_GiveJournal_3:
# 172 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_3
# 173 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1

HoneydewTown_ProfsLab_EventScript_GiveJournal_4:
# 175 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_4
# 176 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1

HoneydewTown_ProfsLab_EventScript_GiveJournal_5:
# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement LOCALID_PLAYER, HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_5
# 179 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto HoneydewTown_ProfsLab_EventScript_GiveJournal_1


HoneydewTown_ProfsLab_EventScript_Hawth::
# 196 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 197 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 198 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	setspeaker SP_NAME_HAWTHORNE
# 199 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 1
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_2
# 201 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 3
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_3
# 203 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_HAWTH_LAB_STATE, 4
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Hawth_4
HoneydewTown_ProfsLab_EventScript_Hawth_1:
# 206 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return

HoneydewTown_ProfsLab_EventScript_Hawth_2:
# 200 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText1
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1

HoneydewTown_ProfsLab_EventScript_Hawth_3:
# 202 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText2
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1

HoneydewTown_ProfsLab_EventScript_Hawth_4:
# 204 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_HawthRegText3
	goto HoneydewTown_ProfsLab_EventScript_Hawth_1


HoneydewTown_ProfsLab_EventScript_Aide1::
# 210 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 211 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, HoneydewTown_ProfsLab_EventScript_Aide1_2
# 214 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 215 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	message HoneydewTown_ProfsLab_EventScript_Aide1Hub
# 216 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmessage
# 217 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay 60
# 218 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, HoneydewTown_ProfsLab_EventScript_Aide1_Text_0, HoneydewTown_ProfsLab_EventScript_Aide1_Text_1
# 219 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HoneydewTown_ProfsLab_EventScript_Aide1_6
# 222 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1Goodbye, MSGBOX_AUTOCLOSE
HoneydewTown_ProfsLab_EventScript_Aide1_5:
# 224 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	applymovement 1, HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_4
# 225 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmovement 0
HoneydewTown_ProfsLab_EventScript_Aide1_1:
# 227 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return

HoneydewTown_ProfsLab_EventScript_Aide1_2:
# 212 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1Text
	goto HoneydewTown_ProfsLab_EventScript_Aide1_1

HoneydewTown_ProfsLab_EventScript_Aide1_6:
# 220 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide1ExplainJournal, MSGBOX_AUTOCLOSE
	goto HoneydewTown_ProfsLab_EventScript_Aide1_5


HoneydewTown_ProfsLab_EventScript_Aide2::
# 231 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 232 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 233 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Aide2Text
# 234 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Hoothoot::
# 238 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 239 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	faceplayer
# 240 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 241 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0
# 242 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	waitmoncry
# 243 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1
# 245 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Bookshelf::
# 249 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 250 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0
# 252 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_Machine::
# 256 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 257 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_MachineText
# 258 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	release
	return


HoneydewTown_ProfsLab_EventScript_PC::
# 262 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	lock
# 263 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	msgbox HoneydewTown_ProfsLab_EventScript_PCText
# 264 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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

# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_5:
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_up
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 89 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_up
	step_end

# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_6:
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_right
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 96 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_7:
# 108 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_down
# 108 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_right
	step_end

# 110 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_8:
# 110 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_left
	step_end

# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_9:
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
# 117 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_fast_down
	step_end

# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Movement_10:
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay_16
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	delay_16
# 118 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_down
	step_end

# 162 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_0:
# 162 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_right
	step_end

# 166 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_1:
# 166 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	emote_question_mark
# 166 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_in_place_left
	step_end

# 169 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_2:
# 169 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
	step_end

# 172 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_3:
# 172 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 172 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
	step_end

# 175 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_4:
# 175 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 175 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 175 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
	step_end

# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
HoneydewTown_ProfsLab_EventScript_GiveJournal_Movement_5:
# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	walk_left
# 178 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 101 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt_Text_1:
# 121 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, wait! Scarlett!$"

HoneydewTown_ProfsLab_EventScript_GiveJournal_Text_0:
# 183 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER} received the Journal!$"

HoneydewTown_ProfsLab_EventScript_Aide1_Text_0:
# 218 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Explain the Journal.$"

HoneydewTown_ProfsLab_EventScript_Aide1_Text_1:
# 218 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Nothing.$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_0:
# 241 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Hoo!$"

HoneydewTown_ProfsLab_EventScript_Hoothoot_Text_1:
# 243 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's carrying a bunch of papers in its\n"
	.string "beak.)$"

HoneydewTown_ProfsLab_EventScript_Bookshelf_Text_0:
# 250 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's crammed with notes on Pokémon.\n"
	.string "...They're a little hard to read...)$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText1::
# 267 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "....Hm?{PAUSE 84} Ah, hello there!\n"
	.string "Welcome to my lab!\p"
	.string "What can I do for you?$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText2::
# 274 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...Oh?\p"
	.string "So you say your name is {PLAYER} and\n"
	.string "you're here to receive your Pokémon?\p"
	.string "...I{PAUSE 48}-I see.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText3::
# 283 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 305 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, I know!{PAUSE 72} {PLAYER}!\p"
	.string "Could you stop by Mulberry Town for me\n"
	.string "and make sure everything's alright?\p"
	.string "If there are any major problems, I want\n"
	.string "you and Scarlett to return here right\l"
	.string "away.$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText5::
# 316 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Now, Mulberry Town is just east of\n"
	.string "Honeydew, but you'll have to pass\l"
	.string "through some tall grass to get there.\p"
	.string "However, with this little tool right\n"
	.string "here, that won't be an issue!$"

HoneydewTown_ProfsLab_EventScript_HawthIntroText6::
# 325 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "There! With that extra-strength\n"
	.string "Cleanse Tag, no wild Pokémon will\l"
	.string "approach you, no matter how strong.\p"
	.string "It's, uh, still quite fragile, though...\n"
	.string "so be careful!\p"
	.string "Well, off you go, then!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett1::
# 336 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Oh, {PLAYER}! You made it!\n"
	.string "How was the trip back?$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt1::
# 341 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "{PLAYER}! Scarlett told me everything\n"
	.string "that happened.\p"
	.string "I'm glad things turned out well,\n"
	.string "though I wish you had come over here\l"
	.string "to tell me right away.\p"
	.string "...Well, I suppose it doesn't matter now.\n"
	.string "{PLAYER}, may I see those Pokémon\l"
	.string "you found?$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt2::
# 354 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 375 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ...Good, it doesn't seem like there's\n"
	.string "anything missing!\p"
	.string "Are you ready, {PLAYER}?\p"
	.string "I know this has been quite the hectic\n"
	.string "delay so far, but it's finally time\l"
	.string "for you to start your Pokémon journey!$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGrunt4::
# 386 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 401 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "So, you've got a Pokédex now!\n"
	.string "Congrats, {PLAYER}!\p"
	.string "But to make full use of it,\n"
	.string "you're gonna need some of these.$"

HoneydewTown_ProfsLab_EventScript_HawthAfterGruntScarlett3::
# 409 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 425 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Well, there she goes. \n"
	.string "Never staying in one place for too long.\l"
	.string "I suppose I'll have to talk to her later.\p"
	.string "And as for you, {PLAYER}, I believe\n"
	.string "you're on your way to becoming a \l"
	.string "truly exceptional Pokémon trainer.\p"
	.string "Good luck on your travels!$"

HoneydewTown_ProfsLab_EventScript_GiveJournalText1::
# 437 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ... ... ...You there.\n"
	.string "Come over here for a second.$"

HoneydewTown_ProfsLab_EventScript_GiveJournalText2::
# 442 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "You're, uh, {PLAYER}, correct?\n"
	.string "I overheard your conversation with\l"
	.string "the professor.\p"
	.string "... ... ...Here, take this.$"

HoneydewTown_ProfsLab_EventScript_GiveJournalText3::
# 450 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
	.string "... ... ...Well, that's all.\n"
	.string "Good luck out there.$"

HoneydewTown_ProfsLab_EventScript_Aide1Hub::
# 479 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ... ... ...Yes?\n"
	.string "What is it?$"

HoneydewTown_ProfsLab_EventScript_Aide1ExplainJournal::
# 484 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
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
# 511 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "... ... ... ...Right.\n"
	.string "Goodbye, then.$"

HoneydewTown_ProfsLab_EventScript_HawthRegText1::
# 516 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Remember, Mulberry Town is just east\n"
	.string "of here.\p"
	.string "With that special Cleanse Tag I gave\n"
	.string "you, it should be easy to reach.$"

HoneydewTown_ProfsLab_EventScript_HawthRegText2::
# 524 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "The cloest Pokémon Gym from here is\n"
	.string "the one in Bisque City.\p"
	.string "I wish you good luck in your travels!$"

HoneydewTown_ProfsLab_EventScript_HawthRegText3::
# 531 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Keep collecting gym badges.$"

HoneydewTown_ProfsLab_EventScript_Aide1Text::
# 535 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "...Scyther....{PAUSE 72} Seadra....{PAUSE 84}\n"
	.string "...Sealeo...{PAUSE 72} Seedot......\p"
	.string "Ugh, why can't I find our notes on\n"
	.string "Seaking?$"

HoneydewTown_ProfsLab_EventScript_Aide2Text::
# 543 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "Prof. Hawthorne studies the relations\n"
	.string "between different species of Pokémon.\p"
	.string "He used to go out a lot on fieldwork,\n"
	.string "but he's gotten too old for that\l"
	.string "nowadays.\p"
	.string "Now he leaves most of the fieldwork to\n"
	.string "his niece, Scarlett.$"

HoneydewTown_ProfsLab_EventScript_MachineText::
# 555 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's a weird looking machine.)\p"
	.string "(There are tons of buttons and\n"
	.string "flashing lights on it... best to leave it\l"
	.string "alone.)$"

HoneydewTown_ProfsLab_EventScript_PCText::
# 563 "data/maps/HoneydewTown_ProfsLab/scripts.pory"
	.string "(It's the Prof's PC.)\p"
	.string "(There's a picture of the Prof. and\n"
	.string "another person holding a Pokémon\l"
	.string "and smiling.)$"
