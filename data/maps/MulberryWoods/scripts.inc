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
	applymovement 14, MulberryWoods_EventScript_Scarlett_Movement_4
# 175 "data/maps/MulberryWoods/scripts.pory"
	waitmovement 0
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
	msgbox MulberryWoods_EventScript_GruntEncounter_Text_0
# 223 "data/maps/MulberryWoods/scripts.pory"
	releaseall
	return

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


MulberryWoods_EventScript_NormalGirl::
# 227 "data/maps/MulberryWoods/scripts.pory"
	lock
# 228 "data/maps/MulberryWoods/scripts.pory"
	faceplayer
# 229 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_NormalGirlText
# 230 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_PressBSign::
# 234 "data/maps/MulberryWoods/scripts.pory"
	lock
# 235 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_PressBSignText
# 236 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_ExitSign::
# 240 "data/maps/MulberryWoods/scripts.pory"
	lock
# 241 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_ExitSignText
# 242 "data/maps/MulberryWoods/scripts.pory"
	release
	return


MulberryWoods_EventScript_GoOtherWay::
# 246 "data/maps/MulberryWoods/scripts.pory"
	lock
# 247 "data/maps/MulberryWoods/scripts.pory"
	msgbox MulberryWoods_EventScript_GoOtherWayText, MSGBOX_AUTOCLOSE
# 248 "data/maps/MulberryWoods/scripts.pory"
	applymovement LOCALID_PLAYER, MulberryWoods_EventScript_GoOtherWay_Movement_0
# 249 "data/maps/MulberryWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 250 "data/maps/MulberryWoods/scripts.pory"
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

# 248 "data/maps/MulberryWoods/scripts.pory"
MulberryWoods_EventScript_GoOtherWay_Movement_0:
# 248 "data/maps/MulberryWoods/scripts.pory"
	walk_right
	step_end

MulberryWoods_EventScript_SeviperEncounter_Text_0:
# 88 "data/maps/MulberryWoods/scripts.pory"
	.string "...Huh?\n"
	.string "That sounded like a Pokémon!$"

MulberryWoods_EventScript_SeviperEncounter_Text_1:
# 106 "data/maps/MulberryWoods/scripts.pory"
	.string "(There's that black tag from before...\n"
	.string "This time it's wrapped around its tail.)$"

MulberryWoods_EventScript_SeviperEncounter_Text_2:
# 117 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ... ... ...{PAUSE 84} ... ... ... ... ... ... ...$"

MulberryWoods_EventScript_SeviperEncounter_Text_3:
# 119 "data/maps/MulberryWoods/scripts.pory"
	.string "(You removed the tag.)$"

MulberryWoods_EventScript_GruntEncounter_Text_0:
# 222 "data/maps/MulberryWoods/scripts.pory"
	.string "... ... ...Hm?\p"
	.string "That's odd...\n"
	.string "These Pokémon are carrying Poké Balls...$"

MulberryWoods_EventScript_ScarlettText1::
# 253 "data/maps/MulberryWoods/scripts.pory"
	.string "Oh, {PLAYER}. There you are!\n"
	.string "Took you long enough!$"

MulberryWoods_EventScript_ScarlettText2::
# 258 "data/maps/MulberryWoods/scripts.pory"
	.string "Alright, so. Here's the plan.\p"
	.string "Whoever stole those Pokémon couldn't\n"
	.string "have gotten very far.$"

MulberryWoods_EventScript_ScarlettText3::
# 264 "data/maps/MulberryWoods/scripts.pory"
	.string "I'll check this side of the woods, and\n"
	.string "ask the trainers here if they saw\l"
	.string "anyone suspicious run by.$"

MulberryWoods_EventScript_ScarlettText4::
# 270 "data/maps/MulberryWoods/scripts.pory"
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

MulberryWoods_EventScript_NormalGirlText::
# 295 "data/maps/MulberryWoods/scripts.pory"
	.string "Hm? Oh no, I'm not a trainer.\p"
	.string "But there are quite a few of them\n"
	.string "between here and Bisque City, so you\l"
	.string "should make sure you're stocked up on\l"
	.string "supplies.$"

MulberryWoods_EventScript_PressBSignText::
# 303 "data/maps/MulberryWoods/scripts.pory"
	.string "Trainer Tips!\p"
	.string "When facing a wild Pokémon you don't\n"
	.string "feel like fighting, press B to quickly\l"
	.string "move your cursor to the “Run” option!$"

MulberryWoods_EventScript_ExitSignText::
# 310 "data/maps/MulberryWoods/scripts.pory"
	.string "Leaving Mulberry Woods\n"
	.string "Bisque City Ahead$"

MulberryWoods_EventScript_GoOtherWayText::
# 315 "data/maps/MulberryWoods/scripts.pory"
	.string "(There are Pokémon trainers past here...\n"
	.string "Best to go the other way for now.)$"
