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
# 89 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_2
# 92 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_3
# 95 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_4
# 98 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq MulberryWoods_EventScript_SeviperEncounter_5
MulberryWoods_EventScript_SeviperEncounter_1:
# 102 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 103 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_5
# 104 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 106 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_1, MSGBOX_AUTOCLOSE
# 107 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_6
# 108 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 109 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 110 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 111 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_0
# 112 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 113 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 114 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_Scarlett_Movement_4
# 115 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 116 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 117 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_2, MSGBOX_AUTOCLOSE
# 118 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 119 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_SeviperEncounter_Text_3, MSGBOX_AUTOCLOSE
# 120 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 121 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_5
# 122 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 123 "data/maps/MulberryWoods/scripts.pory"
	delay 106
# 124 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 125 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_7
# 126 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 127 "data/maps/MulberryWoods/scripts.pory"
	delay 120
# 128 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_8
# 129 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 130 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_9
# 131 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 132 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_3
# 133 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 134 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 135 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 136 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 137 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 138 "data/maps/MulberryWoods/scripts.pory"
	applymovement 12, MulberryWoods_EventScript_SeviperEncounter_Movement_10
# 139 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 140 "data/maps/MulberryWoods/scripts.pory"
	removeobject 12
# 141 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MET_PLYCHRME_STARTERS, 2
# 142 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_HIDE_SEVIPER
# 143 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 144 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

MulberryWoods_EventScript_SeviperEncounter_2:
# 90 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_1
# 91 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_3:
# 93 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_2
# 94 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_4:
# 96 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_3
# 97 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1

MulberryWoods_EventScript_SeviperEncounter_5:
# 99 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_SeviperEncounter_Movement_4
# 100 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_SeviperEncounter_1


MulberryWoods_EventScript_GruntEncounter0::
# 148 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 149 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 0
# 150 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntEncounter
	end


MulberryWoods_EventScript_GruntEncounter1::
# 155 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 156 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 1
# 157 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntEncounter
	end


MulberryWoods_EventScript_GruntEncounter2::
# 162 "data/maps/MulberryWoods/scripts.pory"
	lockall
# 163 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_0x8008, 2
# 164 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntEncounter
	end


MulberryWoods_EventScript_GruntEncounter::
# 169 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MET_PLYCHRME_STARTERS, 3
# 170 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 171 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 172 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 173 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 174 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 175 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 176 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_0
# 177 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 178 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_2
# 181 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_3
# 184 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_4
MulberryWoods_EventScript_GruntEncounter_1:
# 188 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 189 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_4
# 190 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 191 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 192 "data/maps/MulberryWoods/scripts.pory"
	playse SE_WALL_HIT
# 193 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_5
# 194 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_6
# 195 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 196 "data/maps/MulberryWoods/scripts.pory"
	delay 72
# 197 "data/maps/MulberryWoods/scripts.pory"
	playse SE_WALL_HIT
# 198 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_7
# 199 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_8
# 200 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 201 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 202 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 203 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 204 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 205 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 206 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_9
# 207 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 208 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 209 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_10
# 210 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_11
# 211 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 212 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 213 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 214 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_SeviperEncounter_Movement_7
# 215 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_12
# 216 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 217 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 218 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_13
# 219 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 220 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntEncounter_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 222 "data/maps/MulberryWoods/scripts.pory"
	addobject 18
# 223 "data/maps/MulberryWoods/scripts.pory"
	clearflag FLAG_HIDE_GRUNT_MULWOODS
# 224 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_14
# 225 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 226 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle1, MSGBOX_AUTOCLOSE
# 227 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_15
# 228 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 229 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 230 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_SeviperEncounter_Movement_0
# 231 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 232 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntEncounter_Text_1, MSGBOX_AUTOCLOSE
# 233 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 234 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_16
# 235 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_16
# 236 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_0
# 237 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 238 "data/maps/MulberryWoods/scripts.pory"
	fadeoutbgm 0
# 239 "data/maps/MulberryWoods/scripts.pory"
	delay 30
# 240 "data/maps/MulberryWoods/scripts.pory"
	playbgm MUS_HG_TEAM_ROCKET_HQ, FALSE
# 241 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle2, MSGBOX_AUTOCLOSE
# 242 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 243 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_17
# 244 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_18
# 245 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_19
# 246 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 247 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_20
# 248 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 249 "data/maps/MulberryWoods/scripts.pory"
	message MulberryWoods_EventScript_GruntPreBattle3
# 250 "data/maps/MulberryWoods/scripts.pory"
	waitmessage
# 251 "data/maps/MulberryWoods/scripts.pory"
	delay 30
# 252 "data/maps/MulberryWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, MulberryWoods_EventScript_GruntEncounter_Text_2, MulberryWoods_EventScript_GruntEncounter_Text_3
# 253 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MulberryWoods_EventScript_GruntEncounter_9
# 256 "data/maps/MulberryWoods/scripts.pory"
	closemessage
# 257 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 258 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntConfused, MSGBOX_AUTOCLOSE
MulberryWoods_EventScript_GruntEncounter_8:
# 260 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 261 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_21
# 262 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 263 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle4, MSGBOX_AUTOCLOSE
# 264 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_22
# 265 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_ZANGOOSE, CRY_MODE_NORMAL
# 266 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 267 "data/maps/MulberryWoods/scripts.pory"
	playmoncry SPECIES_SEVIPER, CRY_MODE_NORMAL
# 268 "data/maps/MulberryWoods/scripts.pory"
	waitmoncry
# 269 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 270 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_23
# 271 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 272 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 273 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntEncounter_Text_4, MSGBOX_AUTOCLOSE
# 274 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 275 "data/maps/MulberryWoods/scripts.pory"
	playse SE_BALL_OPEN
# 276 "data/maps/MulberryWoods/scripts.pory"
	applymovement 14, MulberryWoods_EventScript_GruntEncounter_Movement_24
# 277 "data/maps/MulberryWoods/scripts.pory"
	applymovement 13, MulberryWoods_EventScript_GruntEncounter_Movement_24
# 278 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 279 "data/maps/MulberryWoods/scripts.pory"
	removeobject 13
# 280 "data/maps/MulberryWoods/scripts.pory"
	removeobject 14
# 281 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 282 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 283 "data/maps/MulberryWoods/scripts.pory"
	givemon SPECIES_ZANGOOSE, 5, nature = NATURE_JOLLY, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 284 "data/maps/MulberryWoods/scripts.pory"
	givemon SPECIES_SEVIPER, 5, nature = NATURE_IMPISH, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 285 "data/maps/MulberryWoods/scripts.pory"
	message MulberryWoods_EventScript_GruntEncounter_Text_5
# 286 "data/maps/MulberryWoods/scripts.pory"
	waitmessage
# 287 "data/maps/MulberryWoods/scripts.pory"
	playfanfare MUS_HG_EVOLVED
# 288 "data/maps/MulberryWoods/scripts.pory"
	waitfanfare
# 289 "data/maps/MulberryWoods/scripts.pory"
	closemessage
# 290 "data/maps/MulberryWoods/scripts.pory"
	fadeoutbgm 0
# 291 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 292 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_25
# 293 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 294 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle5, MSGBOX_AUTOCLOSE
# 295 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 296 "data/maps/MulberryWoods/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_ROCKET, FALSE
# 297 "data/maps/MulberryWoods/scripts.pory"
	playse SE_LEDGE
# 298 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_26
# 299 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_Scarlett_Movement_3
# 300 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 301 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPreBattle6, MSGBOX_AUTOCLOSE
# 302 "data/maps/MulberryWoods/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 303 "data/maps/MulberryWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MULBERRY_WOODS, MulberryWoods_Text_NoWay
# 304 "data/maps/MulberryWoods/scripts.pory"
	goto MulberryWoods_EventScript_GruntPostBattle
	end

MulberryWoods_EventScript_GruntEncounter_2:
# 179 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_1
# 180 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_GruntEncounter_1

MulberryWoods_EventScript_GruntEncounter_3:
# 182 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_2
# 183 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_GruntEncounter_1

MulberryWoods_EventScript_GruntEncounter_4:
# 185 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GruntEncounter_Movement_3
# 186 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
	goto MulberryWoods_EventScript_GruntEncounter_1

MulberryWoods_EventScript_GruntEncounter_9:
# 254 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntHandPackage, MSGBOX_AUTOCLOSE
	goto MulberryWoods_EventScript_GruntEncounter_8


MulberryWoods_EventScript_GruntPostBattle::
# 309 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_0
# 310 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 311 "data/maps/MulberryWoods/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 312 "data/maps/MulberryWoods/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq MulberryWoods_EventScript_GruntPostBattle_2
# 315 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText1, MSGBOX_AUTOCLOSE
MulberryWoods_EventScript_GruntPostBattle_1:
# 317 "data/maps/MulberryWoods/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 318 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 319 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 320 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett1, MSGBOX_AUTOCLOSE
# 321 "data/maps/MulberryWoods/scripts.pory"
	playse SE_PIN
# 322 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntEncounter_Movement_16
# 323 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 324 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText2, MSGBOX_AUTOCLOSE
# 325 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_1
# 326 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 327 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText3, MSGBOX_AUTOCLOSE
# 328 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_2
# 329 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 331 "data/maps/MulberryWoods/scripts.pory"
	delay 60
# 332 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_3
# 333 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 334 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleText4, MSGBOX_AUTOCLOSE
# 335 "data/maps/MulberryWoods/scripts.pory"
	applymovement 18, MulberryWoods_EventScript_GruntPostBattle_Movement_4
# 336 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 337 "data/maps/MulberryWoods/scripts.pory"
	removeobject 18
# 338 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 339 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 340 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett2, MSGBOX_AUTOCLOSE
# 341 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 342 "data/maps/MulberryWoods/scripts.pory"
	setobjectxyperm 9, 52, 27
# 343 "data/maps/MulberryWoods/scripts.pory"
	clearflag FLAG_HIDE_SCARLETT_MULWOODS1
# 344 "data/maps/MulberryWoods/scripts.pory"
	addobject 9
# 345 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_5
# 346 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 347 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 348 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett3, MSGBOX_AUTOCLOSE
# 349 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_6
# 350 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 351 "data/maps/MulberryWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 352 "data/maps/MulberryWoods/scripts.pory"
	special HealPlayerParty
# 353 "data/maps/MulberryWoods/scripts.pory"
	playfanfare MUS_HEAL
# 354 "data/maps/MulberryWoods/scripts.pory"
	waitfanfare
# 355 "data/maps/MulberryWoods/scripts.pory"
	delay 48
# 356 "data/maps/MulberryWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 357 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_3
# 358 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 359 "data/maps/MulberryWoods/scripts.pory"
	setspeaker SP_NAME_SCARLETT
# 360 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleScarlett4, MSGBOX_AUTOCLOSE
# 361 "data/maps/MulberryWoods/scripts.pory"
	applymovement 9, MulberryWoods_EventScript_GruntPostBattle_Movement_7
# 362 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
# 363 "data/maps/MulberryWoods/scripts.pory"
	removeobject 9
# 364 "data/maps/MulberryWoods/scripts.pory"
	delay 90
# 366 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleTagBreaks, MSGBOX_AUTOCLOSE
# 367 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_MULBERRY_TOWN_STATE, 2
# 368 "data/maps/MulberryWoods/scripts.pory"
	setvar VAR_HAWTH_LAB_STATE, 2
# 369 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

MulberryWoods_EventScript_GruntPostBattle_2:
# 313 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GruntPostBattleLost, MSGBOX_AUTOCLOSE
	goto MulberryWoods_EventScript_GruntPostBattle_1


MulberryWoods_EventScript_NormalGirl::
# 373 "data/maps/MulberryWoods/scripts.pory"
	lock
# 374 "data/maps/MulberryWoods/scripts.pory"
	faceplayer
# 375 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_NormalGirlText
# 376 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_PressBSign::
# 380 "data/maps/MulberryWoods/scripts.pory"
	lock
# 381 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_PressBSignText
# 382 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_ExitSign::
# 386 "data/maps/MulberryWoods/scripts.pory"
	lock
# 387 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ExitSignText
# 388 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_GoOtherWay::
# 392 "data/maps/MulberryWoods/scripts.pory"
	lock
# 393 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GoOtherWayText, MSGBOX_AUTOCLOSE
# 394 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GoOtherWay_Movement_0
# 395 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 396 "data/maps/MulberryWoods/scripts.pory"
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

# 90 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_1:
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 90 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 93 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_2:
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 93 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 96 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_3:
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 96 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_4:
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 99 "data/maps/MulberryWoods/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_5:
# 103 "data/maps/MulberryWoods/scripts.pory"
	face_player
# 103 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 107 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_6:
# 107 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_up
	step_end

# 125 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_7:
# 125 "data/maps/MulberryWoods/scripts.pory"
	emote_heart
	step_end

# 128 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_8:
# 128 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 128 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 128 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 130 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_9:
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 130 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 130 "data/maps/MulberryWoods/scripts.pory"
	face_left
	step_end

# 138 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_SeviperEncounter_Movement_10:
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 138 "data/maps/MulberryWoods/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_0:
# 176 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 179 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_1:
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 179 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 182 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_2:
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 182 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 185 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_3:
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 185 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 189 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_4:
# 189 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 189 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 189 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 193 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_5:
# 193 "data/maps/MulberryWoods/scripts.pory"
	walk_faster_right
# 193 "data/maps/MulberryWoods/scripts.pory"
	walk_faster_right
	step_end

# 194 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_6:
# 194 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 194 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 194 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 194 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 198 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_7:
# 198 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
	step_end

# 199 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_8:
# 199 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 199 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 199 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 199 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 206 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_9:
# 206 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_left
	step_end

# 209 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_10:
# 209 "data/maps/MulberryWoods/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 210 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_11:
# 210 "data/maps/MulberryWoods/scripts.pory"
	face_right
# 210 "data/maps/MulberryWoods/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 215 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_12:
# 215 "data/maps/MulberryWoods/scripts.pory"
	emote_heart
# 215 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 215 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 215 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 215 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 215 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 215 "data/maps/MulberryWoods/scripts.pory"
	face_up
	step_end

# 218 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_13:
# 218 "data/maps/MulberryWoods/scripts.pory"
	face_down
# 218 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 218 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 218 "data/maps/MulberryWoods/scripts.pory"
	face_left
	step_end

# 224 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_14:
# 224 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 224 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 224 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 224 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 224 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 224 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 224 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 224 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_down
	step_end

# 227 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_15:
# 227 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 227 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 227 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 227 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 227 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 227 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 227 "data/maps/MulberryWoods/scripts.pory"
	delay_16
	step_end

# 234 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_16:
# 234 "data/maps/MulberryWoods/scripts.pory"
	emote_exclamation_mark
# 234 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_right
	step_end

# 243 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_17:
# 243 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 243 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_left
# 243 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 244 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_18:
# 244 "data/maps/MulberryWoods/scripts.pory"
	delay_8
# 244 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 244 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 244 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 245 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_19:
# 245 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 245 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 245 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_left
# 245 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 247 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_20:
# 247 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 247 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 247 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 261 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_21:
# 261 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_right
# 261 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 261 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 261 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 264 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_22:
# 264 "data/maps/MulberryWoods/scripts.pory"
	face_up
	step_end

# 270 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_23:
# 270 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_down
# 270 "data/maps/MulberryWoods/scripts.pory"
	emote_question_mark
# 270 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 270 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
	step_end

# 276 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_24:
# 276 "data/maps/MulberryWoods/scripts.pory"
	enter_pokeball
	step_end

# 292 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_25:
# 292 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_slow_left
	step_end

# 298 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntEncounter_Movement_26:
# 298 "data/maps/MulberryWoods/scripts.pory"
	jump_in_place_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
# 298 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
	step_end

# 309 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_0:
# 309 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 309 "data/maps/MulberryWoods/scripts.pory"
	walk_slow_right
# 309 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 325 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_1:
# 325 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_fast_left
	step_end

# 328 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_2:
# 328 "data/maps/MulberryWoods/scripts.pory"
	walk_left
# 328 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 332 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_3:
# 332 "data/maps/MulberryWoods/scripts.pory"
	lock_facing_direction
# 332 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 332 "data/maps/MulberryWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 335 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_4:
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_right
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
# 335 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_down
	step_end

# 345 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_5:
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_up
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_in_place_left
# 345 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 345 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 345 "data/maps/MulberryWoods/scripts.pory"
	delay_16
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_up
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
# 345 "data/maps/MulberryWoods/scripts.pory"
	walk_fast_left
	step_end

# 349 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_6:
# 349 "data/maps/MulberryWoods/scripts.pory"
	walk_left
	step_end

# 361 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GruntPostBattle_Movement_7:
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_right
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_down
# 361 "data/maps/MulberryWoods/scripts.pory"
	walk_down
	step_end

# 394 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GoOtherWay_Movement_0:
# 394 "data/maps/MulberryWoods/scripts.pory"
	walk_right
	step_end

MulberryWoods_EventScript_SeviperEncounter_Text_0:
# 88 "data/maps/MulberryWoods/scripts.pory"
	.string "...Huh?\n"
	.string "That sounded like a Pokémon!$"

MulberryWoods_EventScript_SeviperEncounter_Text_1:
# 106 "data/maps/MulberryWoods/scripts.pory"
	.string "(There's that black tag from before.\n"
	.string "This time it's wrapped around its tail.)$"

MulberryWoods_EventScript_SeviperEncounter_Text_2:
# 117 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ... ... ...{PAUSE 84} ... ... ... ... ... ... ...$"

MulberryWoods_EventScript_SeviperEncounter_Text_3:
# 119 "data/maps/MulberryWoods/scripts.pory"
	.string "(You removed the tag.)$"

MulberryWoods_EventScript_GruntEncounter_Text_0:
# 220 "data/maps/MulberryWoods/scripts.pory"
	.string "(... ... ...Hm?)\p"
	.string "(These Pokémon are carrying\n"
	.string "Poké Balls...)$"

MulberryWoods_EventScript_GruntEncounter_Text_1:
# 232 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm?\n"
	.string "...Wait a minute.$"

MulberryWoods_EventScript_GruntEncounter_Text_2:
# 252 "data/maps/MulberryWoods/scripts.pory"
	.string "Hand over that package!$"

MulberryWoods_EventScript_GruntEncounter_Text_3:
# 252 "data/maps/MulberryWoods/scripts.pory"
	.string "(Try to imitate a Pokémon's cry, loudly.)$"

MulberryWoods_EventScript_GruntEncounter_Text_4:
# 273 "data/maps/MulberryWoods/scripts.pory"
	.string "(... ... ... ...Oh!)\p"
	.string "(These Pokemon...\n"
	.string "They want to join your side!)$"

MulberryWoods_EventScript_GruntEncounter_Text_5:
# 285 "data/maps/MulberryWoods/scripts.pory"
	.string "Zangoose and Seviper have joined\n"
	.string "your party!$"

MulberryWoods_EventScript_ScarlettText1::
# 399 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh, {PLAYER}. There you are!\n"
	.string "Took you long enough!$"

MulberryWoods_EventScript_ScarlettText2::
# 404 "data/maps/MulberryWoods/scripts.pory"
	.string "Alright, so. Here's the plan.\p"
	.string "Whoever stole those Pokémon couldn't\n"
	.string "have gotten very far.$"

MulberryWoods_EventScript_ScarlettText3::
# 410 "data/maps/MulberryWoods/scripts.pory"
	.string "I'll check this side of the woods, and\n"
	.string "ask the trainers here if they saw\l"
	.string "anyone suspicious run by.$"

MulberryWoods_EventScript_ScarlettText4::
# 416 "data/maps/MulberryWoods/scripts.pory"
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
# 441 "data/maps/MulberryWoods/scripts.pory"
	.string "Whew, alright!\n"
	.string "I think I shook those people off.\p"
	.string "Man, hiding in those bushes is such a\n"
	.string "pain.\p"
	.string "Now to find those Pokémon and get this\n"
	.string "package to the boss fast...$"

MulberryWoods_EventScript_GruntPreBattle2::
# 450 "data/maps/MulberryWoods/scripts.pory"
	.string "You there!\n"
	.string "Those Pokémon belong to me!\l"
	.string "I stole them fair and square.\p"
	.string "Now, get out of the way so I can take\n"
	.string "them back!$"

MulberryWoods_EventScript_GruntPreBattle3::
# 458 "data/maps/MulberryWoods/scripts.pory"
	.string "Hey, don't try anything funny!\n"
	.string "Look around, there's nowhere else\l"
	.string "for you to run, you know!$"

MulberryWoods_EventScript_GruntHandPackage::
# 464 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh, you're one of the people looking for\n"
	.string "this package, huh?\p"
	.string "Well, that's too bad!\p"
	.string "The Pokémon in here belong to my\n"
	.string "crew now!$"

MulberryWoods_EventScript_GruntConfused::
# 472 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ...Huh?\p"
	.string "W{PAUSE 60}-What was that supposed to be?\n"
	.string "What was that noise you just made?!$"

MulberryWoods_EventScript_GruntPreBattle4::
# 478 "data/maps/MulberryWoods/scripts.pory"
	.string "L{PAUSE 60}-Look, I don't have time for this!\p"
	.string "I've gotta get out of here and get this\n"
	.string "package over to my boss.\p"
	.string "So you'd better move out of the way and\n"
	.string "let me get those Pokémon, or else I'll-$"

MulberryWoods_EventScript_GruntPreBattle5::
# 486 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ... ... ... ... ... ... ... ... ... ... ... ... ... ... ...\p"
	.string "... ... ... ...{PAUSE 90}What?\p"
	.string "Did you-\n"
	.string "Did you just...$"

MulberryWoods_EventScript_GruntPreBattle6::
# 493 "data/maps/MulberryWoods/scripts.pory"
	.string "Did you just take those Pokémon\n"
	.string "WHILE I WAS TALKING TO YOU?!\p"
	.string "Oh, that's it!\n"
	.string "I've had enough!\p"
	.string "I'll show you what happens to people\n"
	.string "who mess with Team Alpha!$"

MulberryWoods_Text_NoWay::
# 502 "data/maps/MulberryWoods/scripts.pory"
	.string "N-no way! I lost?!\n"
	.string "Why, you little...$"

MulberryWoods_EventScript_GruntPostBattleLost::
# 507 "data/maps/MulberryWoods/scripts.pory"
	.string "Heh... heheh...\n"
	.string "I... I actually won?!\p"
	.string "Ha! Well, you can keep those Pokémon!\n"
	.string "They're clearly not worth my time!$"

MulberryWoods_EventScript_GruntPostBattleText1::
# 514 "data/maps/MulberryWoods/scripts.pory"
	.string "You've gotta be kidding me...\p"
	.string "Fine, keep those Pokémon!\n"
	.string "I didn't even like them anyway!$"

MulberryWoods_EventScript_GruntPostBattleScarlett1::
# 520 "data/maps/MulberryWoods/scripts.pory"
	.string "{PLAYER}! Are you okay?\n"
	.string "I heard a lot of noise coming from\l"
	.string "over here.\p"
	.string "Don't worry, I'm on my way!$"

MulberryWoods_EventScript_GruntPostBattleText2::
# 527 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh no!\n"
	.string "I can't deal with another person\l"
	.string "right now!$"

MulberryWoods_EventScript_GruntPostBattleText3::
# 533 "data/maps/MulberryWoods/scripts.pory"
	.string "Urgh, stealing this package has been\n"
	.string "way too stressful!\p"
	.string "Whatever, just take it!\n"
	.string "I'm outta here!$"

MulberryWoods_EventScript_GruntPostBattleText4::
# 540 "data/maps/MulberryWoods/scripts.pory"
	.string "A{PAUSE 60}-Anyway, don't get cocky!\p"
	.string "You may have won this time, but mark\n"
	.string "my words...\p"
	.string "You'll regret meddling with Team Alpha!$"

MulberryWoods_EventScript_GruntPostBattleScarlett2::
# 547 "data/maps/MulberryWoods/scripts.pory"
	.string "Oof!{PAUSE 90} Hey!\n"
	.string "Where do you think you're going?!$"

MulberryWoods_EventScript_GruntPostBattleScarlett3::
# 552 "data/maps/MulberryWoods/scripts.pory"
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
# 564 "data/maps/MulberryWoods/scripts.pory"
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
# 579 "data/maps/MulberryWoods/scripts.pory"
	.string "(... ... ... ... ... ...{PAUSE 72}!)\p"
	.string "(The tag Prof. Hawthorne gave you must\n"
	.string "have fallen off during the battle...)$"

MulberryWoods_EventScript_NormalGirlText::
# 585 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm? Oh no, I'm not a trainer.\p"
	.string "But there are quite a few of them\n"
	.string "between here and Bisque City, so you\l"
	.string "should make sure you're stocked up on\l"
	.string "supplies.$"

MulberryWoods_EventScript_PressBSignText::
# 593 "data/maps/MulberryWoods/scripts.pory"
	.string "Trainer Tips!\p"
	.string "When facing a wild Pokémon you don't\n"
	.string "feel like fighting, press B to quickly\l"
	.string "move your cursor to the “Run” option!$"

MulberryWoods_EventScript_ExitSignText::
# 600 "data/maps/MulberryWoods/scripts.pory"
	.string "Leaving Mulberry Woods\n"
	.string "Bisque City Ahead$"

MulberryWoods_EventScript_GoOtherWayText::
# 605 "data/maps/MulberryWoods/scripts.pory"
	.string "(There are Pokémon trainers past here.\n"
	.string "Best to go the other way for now.)$"
