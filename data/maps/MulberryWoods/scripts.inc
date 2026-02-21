MulberryWoods_MapScripts::
	.byte 0


MulberryWoods_EventScript_ScarlettEncounter0::
# 5 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 6 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 0
# 7 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_Scarlett
	end


MulberryWoods_EventScript_ScarlettEncounter1::
# 12 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 13 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 1
# 14 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_Scarlett
	end


MulberryWoods_EventScript_Scarlett::
# 19 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 20 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_Scarlett_Movement_0
# 21 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 22 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 23 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText1, MSGBOX_AUTOCLOSE
# 24 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq MulberryWoods_EventScript_Scarlett_2
# 27 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq MulberryWoods_EventScript_Scarlett_3
MulberryWoods_EventScript_Scarlett_1:
# 31 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_Scarlett_Movement_3
# 32 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 34 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText2, MSGBOX_AUTOCLOSE
# 35 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_Scarlett_Movement_4
# 36 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 38 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText3, MSGBOX_AUTOCLOSE
# 39 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_Scarlett_Movement_3
# 40 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 41 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 42 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ScarlettText4, MSGBOX_AUTOCLOSE
# 43 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_Scarlett_Movement_5
# 44 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/MulberryWoods/scripts.pory"
	removeobject 9
# 46 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_HIDE_SCARLETT_MULWOODS1
# 47 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_3
# 48 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MULBERRY_TOWN_GRUNT, 2
# 50 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

MulberryWoods_EventScript_Scarlett_2:
# 25 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_1
# 26 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_Scarlett_1

MulberryWoods_EventScript_Scarlett_3:
# 28 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_2
# 29 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_Scarlett_1


MulberryWoods_EventScript_SeviperEncounter0::
# 54 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 55 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 0
# 56 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter1::
# 61 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 62 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 1
# 63 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter2::
# 68 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 69 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 2
# 70 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter3::
# 75 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 76 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 3
# 77 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_SeviperEncounter
	end


MulberryWoods_EventScript_SeviperEncounter::
# 82 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 83 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 84 "data/maps/MulberryWoods/scripts.pory"
	delay 30
# 85 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 86 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_0
# 87 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 88 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_2
# 93 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_3
# 96 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_4
# 99 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_5
MulberryWoods_EventScript_SeviperEncounter_1:
# 103 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 104 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_5
# 105 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 106 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 107 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_1, MSGBOX_AUTOCLOSE
# 109 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_6
# 110 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 111 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 112 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 113 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_0
# 114 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 115 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 116 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_Scarlett_Movement_4
# 117 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 118 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 119 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_2, MSGBOX_AUTOCLOSE
# 120 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 121 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_3, MSGBOX_AUTOCLOSE
# 122 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 123 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_5
# 124 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 125 "data/maps/MulberryWoods/scripts.pory"
	delay 106
# 126 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 127 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_7
# 128 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 129 "data/maps/MulberryWoods/scripts.pory"
	delay 120
# 130 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_8
# 131 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 132 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_9
# 133 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 134 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_3
# 135 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 136 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 137 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 138 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 139 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 140 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_10
# 141 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 142 "data/maps/MulberryWoods/scripts.pory"
	removeobject 12
# 143 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MET_PLYCHRME_STARTERS, 2
# 144 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_HIDE_SEVIPER
# 145 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 146 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

MulberryWoods_EventScript_SeviperEncounter_2:
# 91 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_1
# 92 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_3:
# 94 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_2
# 95 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_4:
# 97 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_3
# 98 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_5:
# 100 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_4
# 101 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1


MulberryWoods_EventScript_GruntEncounter0::
# 150 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 151 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 0
# 152 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntEncounter
	end


MulberryWoods_EventScript_GruntEncounter1::
# 157 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 158 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 1
# 159 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntEncounter
	end


MulberryWoods_EventScript_GruntEncounter2::
# 164 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 165 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 2
# 166 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntEncounter
	end


MulberryWoods_EventScript_GruntEncounter::
# 171 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MET_PLYCHRME_STARTERS, 3
# 172 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 173 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 174 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 175 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 176 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 177 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 178 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_0
# 179 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 180 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_2
# 183 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_3
# 186 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_4
MulberryWoods_EventScript_GruntEncounter_1:
# 190 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 191 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_4
# 192 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 193 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 194 "data/maps/MulberryWoods/scripts.pory"
	playse SE_WALL_HIT
# 195 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_5
# 196 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_6
# 197 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 198 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 199 "data/maps/MulberryWoods/scripts.pory"
	playse SE_WALL_HIT
# 200 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_7
# 201 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_8
# 202 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 203 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 204 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 205 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 206 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 207 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 208 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_9
# 209 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 210 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 211 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_10
# 212 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_11
# 213 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 214 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 215 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 216 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_7
# 217 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_12
# 218 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 219 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 220 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_13
# 221 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 222 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntEncounter_Text_0, MSGBOX_AUTOCLOSE
# 226 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 227 "data/maps/MulberryWoods/scripts.pory"
	addobject 18
# 228 "data/maps/MulberryWoods/scripts.pory"
	clearflag FLAG_HIDE_GRUNT_MULWOODS
# 229 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_14
# 230 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 231 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle1, MSGBOX_AUTOCLOSE
# 232 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_15
# 233 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 234 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 235 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_SeviperEncounter_Movement_0
# 236 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 237 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntEncounter_Text_1, MSGBOX_AUTOCLOSE
# 239 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 240 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_16
# 241 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_16
# 242 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_0
# 243 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 244 "data/maps/MulberryWoods/scripts.pory"
	fadeoutbgm 0
# 245 "data/maps/MulberryWoods/scripts.pory"
	delay 30
# 246 "data/maps/MulberryWoods/scripts.pory"
	playbgm MUS_HG_TEAM_ROCKET_HQ, FALSE
# 247 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle2, MSGBOX_AUTOCLOSE
# 248 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 249 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_17
# 250 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_18
# 251 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_19
# 252 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 253 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_20
# 254 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 255 "data/maps/MulberryWoods/scripts.pory"
	message MulberryWoods_EventScript_GruntPreBattle3
# 256 "data/maps/MulberryWoods/scripts.pory"
	waitmessage
# 257 "data/maps/MulberryWoods/scripts.pory"
	delay 30
# 258 "data/maps/MulberryWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, MulberryWoods_EventScript_GruntEncounter_Text_2, MulberryWoods_EventScript_GruntEncounter_Text_3
# 259 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_9
# 262 "data/maps/MulberryWoods/scripts.pory"
	closemessage
# 263 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 264 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntConfused, MSGBOX_AUTOCLOSE
MulberryWoods_EventScript_GruntEncounter_8:
# 266 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 267 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_21
# 268 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 269 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle4, MSGBOX_AUTOCLOSE
# 270 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_22
# 271 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 272 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 273 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 274 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 275 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 276 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_23
# 277 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 278 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 279 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntEncounter_Text_4, MSGBOX_AUTOCLOSE
# 283 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 284 "data/maps/MulberryWoods/scripts.pory"
	playse SE_BALL_OPEN
# 285 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_24
# 286 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_24
# 287 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 288 "data/maps/MulberryWoods/scripts.pory"
	removeobject 13
# 289 "data/maps/MulberryWoods/scripts.pory"
	removeobject 14
# 290 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 291 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 292 "data/maps/MulberryWoods/scripts.pory"
	givemon SPECIES_ZANGOOSE, 5, nature = NATURE_JOLLY, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 293 "data/maps/MulberryWoods/scripts.pory"
	givemon SPECIES_SEVIPER, 5, nature = NATURE_IMPISH, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 294 "data/maps/MulberryWoods/scripts.pory"
	message MulberryWoods_EventScript_GruntEncounter_Text_5
# 296 "data/maps/MulberryWoods/scripts.pory"
	waitmessage
# 297 "data/maps/MulberryWoods/scripts.pory"
	playfanfare MUS_HG_EVOLVED
# 298 "data/maps/MulberryWoods/scripts.pory"
	waitfanfare
# 299 "data/maps/MulberryWoods/scripts.pory"
	closemessage
# 300 "data/maps/MulberryWoods/scripts.pory"
	fadeoutbgm 0
# 301 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 302 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_25
# 303 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 304 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle5, MSGBOX_AUTOCLOSE
# 305 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 306 "data/maps/MulberryWoods/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_ROCKET, FALSE
# 307 "data/maps/MulberryWoods/scripts.pory"
	playse SE_LEDGE
# 308 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_26
# 309 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_3
# 310 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 311 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle6, MSGBOX_AUTOCLOSE
# 312 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 313 "data/maps/MulberryWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MULBERRY_WOODS, MulberryWoods_Text_NoWay
# 314 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntPostBattle
	end

MulberryWoods_EventScript_GruntEncounter_2:
# 181 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_1
# 182 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_GruntEncounter_1

MulberryWoods_EventScript_GruntEncounter_3:
# 184 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_2
# 185 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_GruntEncounter_1

MulberryWoods_EventScript_GruntEncounter_4:
# 187 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_3
# 188 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_GruntEncounter_1

MulberryWoods_EventScript_GruntEncounter_9:
# 260 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntHandPackage, MSGBOX_AUTOCLOSE
	goto MulberryWoods_EventScript_GruntEncounter_8


MulberryWoods_EventScript_GruntPostBattle::
# 319 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_0
# 320 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 321 "data/maps/MulberryWoods/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 322 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq MulberryWoods_EventScript_GruntPostBattle_2
# 325 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText1, MSGBOX_AUTOCLOSE
MulberryWoods_EventScript_GruntPostBattle_1:
# 327 "data/maps/MulberryWoods/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 328 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 329 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 330 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett1, MSGBOX_AUTOCLOSE
# 331 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 332 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_16
# 333 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 334 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText2, MSGBOX_AUTOCLOSE
# 335 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_1
# 336 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 337 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText3, MSGBOX_AUTOCLOSE
# 338 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_2
# 339 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 341 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 342 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_3
# 343 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 344 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText4, MSGBOX_AUTOCLOSE
# 345 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_4
# 346 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 347 "data/maps/MulberryWoods/scripts.pory"
	removeobject 18
# 348 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 349 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 350 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett2, MSGBOX_AUTOCLOSE
# 351 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 352 "data/maps/MulberryWoods/scripts.pory"
	setobjectxyperm 9, 52, 27
# 353 "data/maps/MulberryWoods/scripts.pory"
	clearflag FLAG_HIDE_SCARLETT_MULWOODS1
# 354 "data/maps/MulberryWoods/scripts.pory"
	addobject 9
# 355 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_5
# 356 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 357 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 358 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett3, MSGBOX_AUTOCLOSE
# 359 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_6
# 360 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 361 "data/maps/MulberryWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 362 "data/maps/MulberryWoods/scripts.pory"
	special HealPlayerParty
# 363 "data/maps/MulberryWoods/scripts.pory"
	playfanfare MUS_HEAL
# 364 "data/maps/MulberryWoods/scripts.pory"
	waitfanfare
# 365 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 366 "data/maps/MulberryWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 367 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_3
# 368 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 369 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 370 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett4, MSGBOX_AUTOCLOSE
# 371 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_7
# 372 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 373 "data/maps/MulberryWoods/scripts.pory"
	removeobject 9
# 374 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 376 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleTagBreaks, MSGBOX_AUTOCLOSE
# 377 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MULBERRY_TOWN_STATE, 2
# 378 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 2
# 379 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

MulberryWoods_EventScript_GruntPostBattle_2:
# 323 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleLost, MSGBOX_AUTOCLOSE
	goto MulberryWoods_EventScript_GruntPostBattle_1


MulberryWoods_EventScript_NormalGirl::
# 383 "data/maps/MulberryWoods/scripts.pory"
	lock
# 384 "data/maps/MulberryWoods/scripts.pory"
	faceplayer
# 385 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_NormalGirlText
# 386 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_PressBSign::
# 390 "data/maps/MulberryWoods/scripts.pory"
	lock
# 391 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_PressBSignText
# 392 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_ExitSign::
# 396 "data/maps/MulberryWoods/scripts.pory"
	lock
# 397 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ExitSignText
# 398 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_GoOtherWay::
# 402 "data/maps/MulberryWoods/scripts.pory"
	lock
# 403 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GoOtherWayText, MSGBOX_AUTOCLOSE
# 404 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GoOtherWay_Movement_0
# 405 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 406 "data/maps/MulberryWoods/scripts.pory"
	release
	return


# 20 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_0:
# 20 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_down
# 20 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_1:
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 25 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 28 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_2:
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 28 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 31 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_3:
# 31 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_right
	step_end

# 35 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_4:
# 35 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 43 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_Scarlett_Movement_5:
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 43 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 86 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_0:
# 86 "data/maps/MulberryWoods/scripts.pory"
	emote_question_mark
	step_end

# 91 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_1:
# 91 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 91 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 91 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 91 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_2:
# 94 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 94 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 94 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 94 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 94 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_3:
# 97 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 97 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 97 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 97 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 97 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 97 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 100 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_4:
# 100 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 100 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 100 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 100 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 100 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 100 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 100 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_5:
# 104 "data/maps/MulberryWoods/scripts.pory"
	face_player
# 104 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 109 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_6:
# 109 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_up
	step_end

# 127 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_7:
# 127 "data/maps/MulberryWoods/scripts.pory"
	emote_heart
	step_end

# 130 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_8:
# 130 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 130 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 132 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_9:
# 132 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 132 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 132 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 132 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 132 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 132 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 132 "data/maps/MulberryWoods/scripts.pory"
	face_left
	step_end

# 140 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_10:
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 140 "data/maps/MulberryWoods/scripts.pory"
	walk_right
	step_end

# 178 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_0:
# 178 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 181 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_1:
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 181 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 184 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_2:
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 184 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 187 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_3:
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 187 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 191 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_4:
# 191 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 191 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 191 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 195 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_5:
# 195 "data/maps/MulberryWoods/scripts.pory"
	walk_faster_right
# 195 "data/maps/MulberryWoods/scripts.pory"
	walk_faster_right
	step_end

# 196 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_6:
# 196 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 196 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 196 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 196 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 200 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_7:
# 200 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
	step_end

# 201 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_8:
# 201 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 201 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 201 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 201 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 208 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_9:
# 208 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_left
	step_end

# 211 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_10:
# 211 "data/maps/MulberryWoods/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 212 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_11:
# 212 "data/maps/MulberryWoods/scripts.pory"
	face_right
# 212 "data/maps/MulberryWoods/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 217 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_12:
# 217 "data/maps/MulberryWoods/scripts.pory"
	emote_heart
# 217 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 217 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 217 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 217 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 217 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 217 "data/maps/MulberryWoods/scripts.pory"
	face_up
	step_end

# 220 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_13:
# 220 "data/maps/MulberryWoods/scripts.pory"
	face_down
# 220 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 220 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 220 "data/maps/MulberryWoods/scripts.pory"
	face_left
	step_end

# 229 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_14:
# 229 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 229 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 229 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 229 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 229 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 229 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 229 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 229 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_down
	step_end

# 232 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_15:
# 232 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 232 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 232 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 232 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 232 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 232 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 232 "data/maps/MulberryWoods/scripts.pory"
	delay_16
	step_end

# 240 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_16:
# 240 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
# 240 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_right
	step_end

# 249 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_17:
# 249 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 249 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_left
# 249 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 250 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_18:
# 250 "data/maps/MulberryWoods/scripts.pory"
	delay_8
# 250 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 250 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 250 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 251 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_19:
# 251 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 251 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 251 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_left
# 251 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 253 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_20:
# 253 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 253 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 253 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 267 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_21:
# 267 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_right
# 267 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 267 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 267 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 270 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_22:
# 270 "data/maps/MulberryWoods/scripts.pory"
	face_up
	step_end

# 276 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_23:
# 276 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_down
# 276 "data/maps/MulberryWoods/scripts.pory"
	emote_question_mark
# 276 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 276 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 285 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_24:
# 285 "data/maps/MulberryWoods/scripts.pory"
	enter_pokeball
	step_end

# 302 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_25:
# 302 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_slow_left
	step_end

# 308 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_26:
# 308 "data/maps/MulberryWoods/scripts.pory"
	jump_in_place_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 308 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
	step_end

# 319 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_0:
# 319 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 319 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_right
# 319 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 335 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_1:
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
	step_end

# 338 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_2:
# 338 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 338 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 342 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_3:
# 342 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 342 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 342 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 345 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_4:
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
	step_end

# 355 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_5:
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
# 355 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 355 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 355 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_up
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 355 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
	step_end

# 359 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_6:
# 359 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 371 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_7:
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 371 "data/maps/MulberryWoods/scripts.pory"
	walk_down
	step_end

# 404 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GoOtherWay_Movement_0:
# 404 "data/maps/MulberryWoods/scripts.pory"
	walk_right
	step_end

MulberryWoods_EventScript_SeviperEncounter_Text_0:
# 88 "data/maps/MulberryWoods/scripts.pory"
	.string "...Huh?\n"
	.string "That sounded like a Pokémon!$"

MulberryWoods_EventScript_SeviperEncounter_Text_1:
# 107 "data/maps/MulberryWoods/scripts.pory"
	.string "(There's that black tag from before.\n"
	.string "This time it's wrapped around its tail.)$"

MulberryWoods_EventScript_SeviperEncounter_Text_2:
# 119 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ... ... ...{PAUSE 84} ... ... ... ... ... ... ...$"

MulberryWoods_EventScript_SeviperEncounter_Text_3:
# 121 "data/maps/MulberryWoods/scripts.pory"
	.string "(You removed the tag.)$"

MulberryWoods_EventScript_GruntEncounter_Text_0:
# 222 "data/maps/MulberryWoods/scripts.pory"
	.string "(... ... ...Hm?)\p"
	.string "(These Pokémon are carrying\n"
	.string "Poké Balls...)$"

MulberryWoods_EventScript_GruntEncounter_Text_1:
# 237 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm?\n"
	.string "...Wait a minute.$"

MulberryWoods_EventScript_GruntEncounter_Text_2:
# 258 "data/maps/MulberryWoods/scripts.pory"
	.string "Hand over that package!$"

MulberryWoods_EventScript_GruntEncounter_Text_3:
# 258 "data/maps/MulberryWoods/scripts.pory"
	.string "(Try to imitate a Pokémon's cry, loudly.)$"

MulberryWoods_EventScript_GruntEncounter_Text_4:
# 279 "data/maps/MulberryWoods/scripts.pory"
	.string "(... ... ... ...Oh!)\p"
	.string "(These Pokemon...\n"
	.string "They want to join your side!)$"

MulberryWoods_EventScript_GruntEncounter_Text_5:
# 294 "data/maps/MulberryWoods/scripts.pory"
	.string "Zangoose and Seviper have joined\n"
	.string "your party!$"

MulberryWoods_EventScript_ScarlettText1::
# 409 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh, {PLAYER}. There you are!\n"
	.string "Took you long enough!$"

MulberryWoods_EventScript_ScarlettText2::
# 414 "data/maps/MulberryWoods/scripts.pory"
	.string "Alright, so. Here's the plan.\p"
	.string "Whoever stole those Pokémon couldn't\n"
	.string "have gotten very far.$"

MulberryWoods_EventScript_ScarlettText3::
# 421 "data/maps/MulberryWoods/scripts.pory"
	.string "I'll check this side of the woods, and\n"
	.string "ask the trainers here if they saw\l"
	.string "anyone suspicious run by.$"

MulberryWoods_EventScript_ScarlettText4::
# 427 "data/maps/MulberryWoods/scripts.pory"
	.string "Meanwhile, you'll cover this side of the\n"
	.string "woods.\p"
	.string "If you run into the thief, then...{PAUSE 80}\n"
	.string "... um...\p"
	.string "Right, you, uh, don't have any Pokémon\n"
	.string "yet, do you...\p"
	.string "Then...{PAUSE 60} uh....{PAUSE 72} try distracting them!\n"
	.string "Make a loud noise or something!\p"
	.string "I promise, I'll come running to help as\n"
	.string "soon as I hear it!\p"
	.string "... ... ... ... ... ... ...\p"
	.string "Don't give me that look, alright?!\n"
	.string "We don't have time to come up with\l"
	.string "a better plan!\p"
	.string "Listen, I know you'll be fine.\n"
	.string "I know we've only just met, but...\p"
	.string "You seem like the kind of person who\n"
	.string "can handle themselves in any situation.\p"
	.string "So... I know that things will turn out\n"
	.string "just fine.\p"
	.string "...Okay?{PAUSE 72} Okay!\p"
	.string "Let's go thief hunting!$"

MulberryWoods_EventScript_GruntPreBattle1::
# 463 "data/maps/MulberryWoods/scripts.pory"
	.string "Whew, alright!\n"
	.string "I think I shook those people off.\p"
	.string "Man, hiding in those bushes is such a\n"
	.string "pain.\p"
	.string "Now to find those Pokémon and get this\n"
	.string "package to the boss fast...$"

MulberryWoods_EventScript_GruntPreBattle2::
# 474 "data/maps/MulberryWoods/scripts.pory"
	.string "You there!\n"
	.string "Those Pokémon belong to me!\l"
	.string "I stole them fair and square.\p"
	.string "Now, get out of the way so I can take\n"
	.string "them back!$"

MulberryWoods_EventScript_GruntPreBattle3::
# 483 "data/maps/MulberryWoods/scripts.pory"
	.string "Hey, don't try anything funny!\n"
	.string "Look around, there's nowhere else\l"
	.string "for you to run, you know!$"

MulberryWoods_EventScript_GruntHandPackage::
# 489 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh, you're one of the people looking for\n"
	.string "this package, huh?\p"
	.string "Well, that's too bad!\p"
	.string "The Pokémon in here belong to my\n"
	.string "crew now!$"

MulberryWoods_EventScript_GruntConfused::
# 499 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ...Huh?\p"
	.string "W{PAUSE 60}-What was that supposed to be?\n"
	.string "What was that noise you just made?!$"

MulberryWoods_EventScript_GruntPreBattle4::
# 506 "data/maps/MulberryWoods/scripts.pory"
	.string "L{PAUSE 60}-Look, I don't have time for this!\p"
	.string "I've gotta get out of here and get this\n"
	.string "package over to my boss.\p"
	.string "So you'd better move out of the way and\n"
	.string "let me get those Pokémon, or else I'll-$"

MulberryWoods_EventScript_GruntPreBattle5::
# 516 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ... ... ... ... ... ... ... ... ... ... ... ... ... ... ...\p"
	.string "... ... ... ...{PAUSE 90}What?\p"
	.string "Did you-\n"
	.string "Did you just...$"

MulberryWoods_EventScript_GruntPreBattle6::
# 525 "data/maps/MulberryWoods/scripts.pory"
	.string "Did you just take those Pokémon\n"
	.string "WHILE I WAS TALKING TO YOU?!\p"
	.string "Oh, that's it!\n"
	.string "I've had enough!\p"
	.string "I'll show you what happens to people\n"
	.string "who mess with Team Alpha!$"

MulberryWoods_Text_NoWay::
# 536 "data/maps/MulberryWoods/scripts.pory"
	.string "N-no way! I lost?!\n"
	.string "Why, you little...$"

MulberryWoods_EventScript_GruntPostBattleLost::
# 541 "data/maps/MulberryWoods/scripts.pory"
	.string "Heh... heheh...\n"
	.string "I... I actually won?!\p"
	.string "Ha! Well, you can keep those Pokémon!\n"
	.string "They're clearly not worth my time!$"

MulberryWoods_EventScript_GruntPostBattleText1::
# 549 "data/maps/MulberryWoods/scripts.pory"
	.string "You've gotta be kidding me...\p"
	.string "Fine, keep those Pokémon!\n"
	.string "I didn't even like them anyway!$"

MulberryWoods_EventScript_GruntPostBattleScarlett1::
# 556 "data/maps/MulberryWoods/scripts.pory"
	.string "{PLAYER}! Are you okay?\n"
	.string "I heard a lot of noise coming from\l"
	.string "over here.\p"
	.string "Don't worry, I'm on my way!$"

MulberryWoods_EventScript_GruntPostBattleText2::
# 564 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh no!\n"
	.string "I can't deal with another person\l"
	.string "right now!$"

MulberryWoods_EventScript_GruntPostBattleText3::
# 570 "data/maps/MulberryWoods/scripts.pory"
	.string "Urgh, stealing this package has been\n"
	.string "way too stressful!\p"
	.string "Whatever, just take it!\n"
	.string "I'm outta here!$"

MulberryWoods_EventScript_GruntPostBattleText4::
# 578 "data/maps/MulberryWoods/scripts.pory"
	.string "A{PAUSE 60}-Anyway, don't get cocky!\p"
	.string "You may have won this time, but mark\n"
	.string "my words...\p"
	.string "You'll regret meddling with Team Alpha!$"

MulberryWoods_EventScript_GruntPostBattleScarlett2::
# 587 "data/maps/MulberryWoods/scripts.pory"
	.string "Oof!{PAUSE 90} Hey!\n"
	.string "Where do you think you're going?!$"

MulberryWoods_EventScript_GruntPostBattleScarlett3::
# 592 "data/maps/MulberryWoods/scripts.pory"
	.string "{PLAYER}! What happened?!\p"
	.string "That... that was the thief, wasn't it?\n"
	.string "What did they do? Are you hurt?\p"
	.string "... ... ... ... ... ... ... ... ... ... ... ...{PAUSE 72}\n"
	.string "Hold on, you got the package!\p"
	.string "And those Poké Balls at your side...\n"
	.string "When did you...?\p"
	.string "Er, let me heal your Pokémon first.\n"
	.string "Then you can explain everything.$"

MulberryWoods_EventScript_GruntPostBattleScarlett4::
# 608 "data/maps/MulberryWoods/scripts.pory"
	.string "Huh... so that's what happened.\p"
	.string "I'm sorry I wasn't there to help, but\n"
	.string "you handled things really well on\l"
	.string "your own!\p"
	.string "... ... ... ...{PAUSE 72}Ah, right!\n"
	.string "We need to get that package back\l"
	.string "to the professor.\p"
	.string "I bet he's worried sick about us by now.\n"
	.string "I'll meet you back at the lab, okay?\p"
	.string "Now that you have Pokémon, you won't\n"
	.string "have much trouble making it back.\p"
	.string "Alright, see you there!$"

MulberryWoods_EventScript_GruntPostBattleTagBreaks::
# 628 "data/maps/MulberryWoods/scripts.pory"
	.string "(... ... ... ... ... ...{PAUSE 72}!)\p"
	.string "(The tag Prof. Hawthorne gave you must\n"
	.string "have fallen off during the battle...)$"

MulberryWoods_EventScript_NormalGirlText::
# 635 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm? Oh no, I'm not a trainer.\p"
	.string "But there are quite a few of them\n"
	.string "between here and Bisque City, so you\l"
	.string "should make sure you're stocked up on\l"
	.string "supplies.$"

MulberryWoods_EventScript_PressBSignText::
# 644 "data/maps/MulberryWoods/scripts.pory"
	.string "Trainer Tips!\p"
	.string "When facing a wild Pokémon you don't\n"
	.string "feel like fighting, press B to quickly\l"
	.string "move your cursor to the “Run” option!$"

MulberryWoods_EventScript_ExitSignText::
# 652 "data/maps/MulberryWoods/scripts.pory"
	.string "Leaving Mulberry Woods\n"
	.string "Bisque City Ahead$"

MulberryWoods_EventScript_GoOtherWayText::
# 657 "data/maps/MulberryWoods/scripts.pory"
	.string "(There are Pokémon trainers past here.\n"
	.string "Best to go the other way for now.)$"
