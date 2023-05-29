OldaleShowhouse_MapScripts::
	.byte 0

OldaleShowhouse_Text_ShowhouseSign:
	.string "Oldale Town Showhouse\n"
	.string "“Look Ma! I made a Romhack!”$"

OldaleShowhouse_EventScript_ShowhouseSign::
	msgbox OldaleShowhouse_Text_ShowhouseSign, MSGBOX_SIGN
	end