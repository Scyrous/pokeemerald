Route115_EventObjects: @ 852A1BC
	object_event 1, EVENT_OBJ_GFX_WOMAN_3, 0, 18, 68, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, Route115_EventScript_1F2973, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN_1, 0, 5, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 6, Route115_EventScript_1F298E, 0
	object_event 3, EVENT_OBJ_GFX_BLACK_BELT, 0, 27, 53, 3, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 1, 1, 1, 4, Route115_EventScript_1F2A07, 0
	object_event 4, EVENT_OBJ_GFX_BERRY_TREE, 0, 12, 5, 3, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, 0, 69, BerryTreeScript, 0
	object_event 5, EVENT_OBJ_GFX_BERRY_TREE, 0, 13, 5, 3, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, 0, 70, BerryTreeScript, 0
	object_event 6, EVENT_OBJ_GFX_BERRY_TREE, 0, 14, 5, 3, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, 0, 71, BerryTreeScript, 0
	object_event 7, EVENT_OBJ_GFX_GIRL_3, 0, 15, 50, 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 0, 0, 1, 3, Route115_EventScript_1F2A69, 0
	object_event 8, EVENT_OBJ_GFX_BLACK_BELT, 0, 19, 15, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 5, 0, 1, 2, Route115_EventScript_1F29F0, 0
	object_event 9, EVENT_OBJ_GFX_MANIAC, 0, 24, 62, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 0, 0, 1, 4, Route115_EventScript_1F2ACB, 0
	object_event 10, EVENT_OBJ_GFX_ITEM_BALL, 0, 20, 60, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route115_EventScript_290E2A, 1016
	object_event 11, EVENT_OBJ_GFX_ITEM_BALL, 0, 18, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route115_EventScript_290E37, 1017
	object_event 12, EVENT_OBJ_GFX_ITEM_BALL, 0, 23, 29, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route115_EventScript_290E44, 1018
	object_event 13, EVENT_OBJ_GFX_BERRY_TREE, 0, 31, 64, 3, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, 0, 55, BerryTreeScript, 0
	object_event 14, EVENT_OBJ_GFX_BERRY_TREE, 0, 31, 65, 3, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, 0, 56, BerryTreeScript, 0
	object_event 15, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 29, 50, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route115_EventScript_2907A6, 17
	object_event 16, EVENT_OBJ_GFX_ITEM_BALL, 0, 31, 56, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route115_EventScript_290E51, 1118
	object_event 17, EVENT_OBJ_GFX_RUNNING_TRIATHLETE_F, 0, 10, 15, 3, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT, 3, 3, 1, 2, Route115_EventScript_1F2AE2, 0
	object_event 18, EVENT_OBJ_GFX_LITTLE_BOY_1, 0, 11, 12, 3, MOVEMENT_TYPE_TREE_DISGUISE, 1, 1, 1, 3, Route115_EventScript_1F2AF9, 0
	object_event 19, EVENT_OBJ_GFX_GIRL_3, 0, 15, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 1, 4, Route115_EventScript_1F2B27, 0
	object_event 20, EVENT_OBJ_GFX_LASS, 0, 10, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 1, 4, Route115_EventScript_1F2B10, 0
	object_event 21, EVENT_OBJ_GFX_LASS, 0, 28, 62, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 1, 4, Route115_EventScript_1F2B3E, 0
	object_event 22, EVENT_OBJ_GFX_ITEM_BALL, 0, 26, 67, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route115_EventScript_290E6B, 1161
	object_event 23, EVENT_OBJ_GFX_ITEM_BALL, 0, 12, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route115_EventScript_290E5E, 1144

Route115_MapWarps: @ 852A3E4
	warp_def 27, 37, 0, 1, MAP_METEOR_FALLS_1F_1R
	warp_def 21, 6, 0, 0, MAP_TERRA_CAVE_ENTRANCE
	warp_def 36, 10, 0, 0, MAP_TERRA_CAVE_ENTRANCE

Route115_MapBGEvents: @ 852A3FC
	bg_secret_base_event 32, 6, 0, SECRET_BASE_BROWN_CAVE4_2
	bg_secret_base_event 21, 18, 0, SECRET_BASE_BROWN_CAVE3_2
	bg_event 16, 64, 0, BG_EVENT_PLAYER_FACING_ANY, Route115_EventScript_1F297C
	bg_event 25, 38, 3, BG_EVENT_PLAYER_FACING_ANY, Route115_EventScript_1F2985
	bg_secret_base_event 8, 30, 0, SECRET_BASE_YELLOW_CAVE2_3
	bg_secret_base_event 32, 39, 0, SECRET_BASE_BROWN_CAVE1_2
	bg_secret_base_event 26, 15, 0, SECRET_BASE_BROWN_CAVE2_2
	bg_secret_base_event 23, 8, 0, SECRET_BASE_BROWN_CAVE1_3
	bg_secret_base_event 32, 46, 0, SECRET_BASE_BROWN_CAVE2_3
	bg_secret_base_event 7, 20, 0, SECRET_BASE_TREE2_4
	bg_secret_base_event 8, 20, 0, SECRET_BASE_TREE3_3
	bg_secret_base_event 25, 24, 0, SECRET_BASE_BROWN_CAVE3_3
	bg_secret_base_event 20, 53, 0, SECRET_BASE_RED_CAVE3_1
	bg_hidden_item_event 15, 49, 3, ITEM_HEART_SCALE, 97

Route115_MapEvents:: @ 852A4A4
	map_events Route115_EventObjects, Route115_MapWarps, 0x0, Route115_MapBGEvents
