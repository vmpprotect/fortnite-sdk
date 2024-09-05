#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: _Verse
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Verse/_Verse/VNI/Verse.Verse_accessor
	enum Verse_accessor
	{
		Verse_accessor__Dummy = 0,
	};


	// Enum /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_debug_draw_duration_policy
	enum Diagnostics_debug_draw_duration_policy
	{
		Diagnostics_debug_draw_duration_policy__SingleFrame = 0,
		Diagnostics_debug_draw_duration_policy__FiniteDuration = 1,
		Diagnostics_debug_draw_duration_policy__Persistent = 2,
	};


	// Enum /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_log_level
	enum Diagnostics_log_level
	{
		Diagnostics_log_level__Debug = 0,
		Diagnostics_log_level__Verbose = 1,
		Diagnostics_log_level__Normal = 2,
		Diagnostics_log_level__Warning = 3,
		Diagnostics_log_level__Error = 4,
	};


	// Enum /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Testing_test_result
	enum Testing_test_result
	{
		Testing_test_result__Passed = 0,
		Testing_test_result__Failed = 1,
		Testing_test_result__Skipped = 2,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_horizontal_alignment
	enum UI_horizontal_alignment
	{
		UI_horizontal_alignment__Center = 0,
		UI_horizontal_alignment__Left = 1,
		UI_horizontal_alignment__Right = 2,
		UI_horizontal_alignment__Fill = 3,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_image_tiling
	enum UI_image_tiling
	{
		UI_image_tiling__Stretch = 0,
		UI_image_tiling__Repeat = 1,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_orientation
	enum UI_orientation
	{
		UI_orientation__Horizontal = 0,
		UI_orientation__Vertical = 1,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_text_justification
	enum UI_text_justification
	{
		UI_text_justification__Left = 0,
		UI_text_justification__Center = 1,
		UI_text_justification__Right = 2,
		UI_text_justification__InvariantLeft = 3,
		UI_text_justification__InvariantRight = 4,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_text_overflow_policy
	enum UI_text_overflow_policy
	{
		UI_text_overflow_policy__Clip = 0,
		UI_text_overflow_policy__Ellipsis = 1,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_ui_input_mode
	enum UI_ui_input_mode
	{
		UI_ui_input_mode__None = 0,
		UI_ui_input_mode__All = 1,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_vertical_alignment
	enum UI_vertical_alignment
	{
		UI_vertical_alignment__Center = 0,
		UI_vertical_alignment__Top = 1,
		UI_vertical_alignment__Bottom = 2,
		UI_vertical_alignment__Fill = 3,
	};


	// Enum /VerseUI/_Verse/VNI/VerseUI.UI_widget_visibility
	enum UI_widget_visibility
	{
		UI_widget_visibility__Visible = 0,
		UI_widget_visibility__Collapsed = 1,
		UI_widget_visibility__Hidden = 2,
	};


	// Enum /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.EpicGames_Input_input_event
	enum EpicGames_Input_input_event
	{
		EpicGames_Input_input_event__Pressed = 0,
		EpicGames_Input_input_event__Released = 1,
	};


	// Enum /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.EpicGames_Input_verse_key
	enum EpicGames_Input_verse_key
	{
		EpicGames_Input_verse_key__Gamepad_FaceButton_Top = 0,
		EpicGames_Input_verse_key__Gamepad_FaceButton_Bottom = 1,
		EpicGames_Input_verse_key__Gamepad_FaceButton_Left = 2,
		EpicGames_Input_verse_key__Gamepad_FaceButton_Right = 3,
		EpicGames_Input_verse_key__Gamepad_LeftShoulder = 4,
		EpicGames_Input_verse_key__Gamepad_RightShoulder = 5,
		EpicGames_Input_verse_key__Gamepad_LeftTrigger = 6,
		EpicGames_Input_verse_key__Gamepad_RightTrigger = 7,
		EpicGames_Input_verse_key__Gamepad_DPad_Up = 8,
		EpicGames_Input_verse_key__Gamepad_DPad_Down = 9,
		EpicGames_Input_verse_key__Gamepad_DPad_Left = A,
		EpicGames_Input_verse_key__Gamepad_DPad_Right = B,
		EpicGames_Input_verse_key__Gamepad_LeftX = C,
		EpicGames_Input_verse_key__Gamepad_LeftY = D,
		EpicGames_Input_verse_key__Gamepad_RightX = E,
		EpicGames_Input_verse_key__Gamepad_RightY = F,
		EpicGames_Input_verse_key__Gamepad_LeftTriggerAxis = 10,
		EpicGames_Input_verse_key__Gamepad_RightTriggerAxis = 11,
		EpicGames_Input_verse_key__Mouse_X = 12,
		EpicGames_Input_verse_key__Mouse_Y = 13,
		EpicGames_Input_verse_key__Mouse_WheelAxis = 14,
		EpicGames_Input_verse_key__Mouse_LeftButton = 15,
		EpicGames_Input_verse_key__Mouse_RightButton = 16,
		EpicGames_Input_verse_key__Mouse_MiddleButton = 17,
		EpicGames_Input_verse_key__Mouse_ThumbButton = 18,
		EpicGames_Input_verse_key__Mouse_ThumbButton2 = 19,
		EpicGames_Input_verse_key__Mouse_ScrollUp = 1A,
		EpicGames_Input_verse_key__Mouse_ScrollDown = 1B,
		EpicGames_Input_verse_key__Keyboard_Up = 1C,
		EpicGames_Input_verse_key__Keyboard_Down = 1D,
		EpicGames_Input_verse_key__Keyboard_Left = 1E,
		EpicGames_Input_verse_key__Keyboard_Right = 1F,
		EpicGames_Input_verse_key__Keyboard_Enter = 20,
		EpicGames_Input_verse_key__Keyboard_Multiply = 21,
		EpicGames_Input_verse_key__Keyboard_Divide = 22,
		EpicGames_Input_verse_key__Keyboard_Add = 23,
		EpicGames_Input_verse_key__Keyboard_Subtract = 24,
		EpicGames_Input_verse_key__Keyboard_Decimal = 25,
		EpicGames_Input_verse_key__Keyboard_SpaceBar = 26,
		EpicGames_Input_verse_key__Keyboard_LeftShift = 27,
		EpicGames_Input_verse_key__Keyboard_RightShift = 28,
		EpicGames_Input_verse_key__Keyboard_LeftControl = 29,
		EpicGames_Input_verse_key__Keyboard_RightControl = 2A,
		EpicGames_Input_verse_key__Keyboard_LeftAlt = 2B,
		EpicGames_Input_verse_key__Keyboard_RightAlt = 2C,
		EpicGames_Input_verse_key__NumPad_Zero = 2D,
		EpicGames_Input_verse_key__NumPad_One = 2E,
		EpicGames_Input_verse_key__NumPad_Two = 2F,
		EpicGames_Input_verse_key__NumPad_Three = 30,
		EpicGames_Input_verse_key__NumPad_Four = 31,
		EpicGames_Input_verse_key__NumPad_Five = 32,
		EpicGames_Input_verse_key__NumPad_Six = 33,
		EpicGames_Input_verse_key__NumPad_Seven = 34,
		EpicGames_Input_verse_key__NumPad_Eight = 35,
		EpicGames_Input_verse_key__NumPad_Nine = 36,
		EpicGames_Input_verse_key__E = 37,
		EpicGames_Input_verse_key__I = 38,
		EpicGames_Input_verse_key__J = 39,
		EpicGames_Input_verse_key__K = 3A,
		EpicGames_Input_verse_key__L = 3B,
		EpicGames_Input_verse_key__Z = 3C,
		EpicGames_Input_verse_key__TAB = 3D,
		EpicGames_Input_verse_key__Zero = 3E,
		EpicGames_Input_verse_key__One = 3F,
		EpicGames_Input_verse_key__Two = 40,
		EpicGames_Input_verse_key__Three = 41,
		EpicGames_Input_verse_key__Four = 42,
		EpicGames_Input_verse_key__Five = 43,
		EpicGames_Input_verse_key__Six = 44,
		EpicGames_Input_verse_key__Seven = 45,
		EpicGames_Input_verse_key__Eight = 46,
		EpicGames_Input_verse_key__Nine = 47,
	};


	// Enum /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_day_of_week
	enum VerseExperimental_day_of_week
	{
		VerseExperimental_day_of_week__Monday = 0,
		VerseExperimental_day_of_week__Tuesday = 1,
		VerseExperimental_day_of_week__Wednesday = 2,
		VerseExperimental_day_of_week__Thursday = 3,
		VerseExperimental_day_of_week__Friday = 4,
		VerseExperimental_day_of_week__Saturday = 5,
		VerseExperimental_day_of_week__Sunday = 6,
	};


	// Enum /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_month_of_year
	enum VerseExperimental_month_of_year
	{
		VerseExperimental_month_of_year__January = 0,
		VerseExperimental_month_of_year__February = 1,
		VerseExperimental_month_of_year__March = 2,
		VerseExperimental_month_of_year__April = 3,
		VerseExperimental_month_of_year__May = 4,
		VerseExperimental_month_of_year__June = 5,
		VerseExperimental_month_of_year__July = 6,
		VerseExperimental_month_of_year__August = 7,
		VerseExperimental_month_of_year__September = 8,
		VerseExperimental_month_of_year__October = 9,
		VerseExperimental_month_of_year__November = A,
		VerseExperimental_month_of_year__December = B,
	};


	// Enum /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_search_sort_type
	enum Tags_tag_search_sort_type
	{
		Tags_tag_search_sort_type__Unsorted = 0,
		Tags_tag_search_sort_type__Sorted = 1,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Components_activation_state
	enum VGameplayRst_Components_activation_state
	{
		VGameplayRst_Components_activation_state__Active = 0,
		VGameplayRst_Components_activation_state__Inactive = 1,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Geometry_collision_type
	enum VGameplayRst_Geometry_collision_type
	{
		VGameplayRst_Geometry_collision_type__NoCollision = 0,
		VGameplayRst_Geometry_collision_type__QueryOnly = 1,
		VGameplayRst_Geometry_collision_type__SimulationOnly = 2,
		VGameplayRst_Geometry_collision_type__QueryAndSimulation = 3,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Geometry_default_mesh_type
	enum VGameplayRst_Geometry_default_mesh_type
	{
		VGameplayRst_Geometry_default_mesh_type__Cube = 0,
		VGameplayRst_Geometry_default_mesh_type__Sphere = 1,
		VGameplayRst_Geometry_default_mesh_type__Cylinder = 2,
		VGameplayRst_Geometry_default_mesh_type__Cone = 3,
		VGameplayRst_Geometry_default_mesh_type__Plane = 4,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_collision_shape_mode
	enum VGameplayRst_Physics_collision_shape_mode
	{
		VGameplayRst_Physics_collision_shape_mode__CollisionMesh = 0,
		VGameplayRst_Physics_collision_shape_mode__CollisionBox = 1,
		VGameplayRst_Physics_collision_shape_mode__CollisionCapsule = 2,
		VGameplayRst_Physics_collision_shape_mode__CollisionSphere = 3,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_dof_movement_mode
	enum VGameplayRst_Physics_dof_movement_mode
	{
		VGameplayRst_Physics_dof_movement_mode__Default = 0,
		VGameplayRst_Physics_dof_movement_mode__SixDOF = 1,
		VGameplayRst_Physics_dof_movement_mode__YZPlane = 2,
		VGameplayRst_Physics_dof_movement_mode__XZPlane = 3,
		VGameplayRst_Physics_dof_movement_mode__XYPlane = 4,
		VGameplayRst_Physics_dof_movement_mode__CustomPlane = 5,
		VGameplayRst_Physics_dof_movement_mode__NoConstraints = 6,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_category
	enum VGameplayRst_Physics_physics_trace_category
	{
		VGameplayRst_Physics_physics_trace_category__Channel = 0,
		VGameplayRst_Physics_physics_trace_category__Profile = 1,
		VGameplayRst_Physics_physics_trace_category__Object = 2,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_channel
	enum VGameplayRst_Physics_physics_trace_channel
	{
		VGameplayRst_Physics_physics_trace_channel__WorldStatic = 0,
		VGameplayRst_Physics_physics_trace_channel__WorldDynamic = 1,
		VGameplayRst_Physics_physics_trace_channel__Pawn = 2,
		VGameplayRst_Physics_physics_trace_channel__Visibility = 3,
		VGameplayRst_Physics_physics_trace_channel__Camera = 4,
		VGameplayRst_Physics_physics_trace_channel__PhysicsBody = 5,
		VGameplayRst_Physics_physics_trace_channel__Vehicle = 6,
		VGameplayRst_Physics_physics_trace_channel__Destructible = 7,
		VGameplayRst_Physics_physics_trace_channel__GameTraceChannel1 = 8,
		VGameplayRst_Physics_physics_trace_channel__GameTraceChannel2 = 9,
		VGameplayRst_Physics_physics_trace_channel__GameTraceChannel3 = A,
		VGameplayRst_Physics_physics_trace_channel__GameTraceChannel4 = B,
		VGameplayRst_Physics_physics_trace_channel__GameTraceChannel5 = C,
		VGameplayRst_Physics_physics_trace_channel__GameTraceChannel6 = D,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_shape
	enum VGameplayRst_Physics_physics_trace_shape
	{
		VGameplayRst_Physics_physics_trace_shape__Line = 0,
		VGameplayRst_Physics_physics_trace_shape__Box = 1,
		VGameplayRst_Physics_physics_trace_shape__ShapeSphere = 2,
	};


	// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_type
	enum VGameplayRst_Physics_physics_trace_type
	{
		VGameplayRst_Physics_physics_trace_type__Single = 0,
		VGameplayRst_Physics_physics_trace_type__Multi = 1,
		VGameplayRst_Physics_physics_trace_type__Test = 2,
	};


	// Enum /VerseQuery/_Verse/VNI/VerseQuery.collision_channel_response
	enum collision_channel_response
	{
		collision_channel_response__Ignore = 0,
		collision_channel_response__Overlap = 1,
		collision_channel_response__Block = 2,
	};


	// Enum /VerseInput/_Verse/VNI/VerseInput.ControlInput_dead_zone_type
	enum ControlInput_dead_zone_type
	{
		ControlInput_dead_zone_type__Radial = 0,
		ControlInput_dead_zone_type__Axial = 1,
	};


	// Enum /VerseInput/_Verse/VNI/VerseInput.ControlInput_swizzle_order
	enum ControlInput_swizzle_order
	{
		ControlInput_swizzle_order__XZY = 0,
		ControlInput_swizzle_order__YXZ = 1,
		ControlInput_swizzle_order__YZX = 2,
		ControlInput_swizzle_order__ZYX = 3,
		ControlInput_swizzle_order__ZXY = 4,
	};


	// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_effect
	enum VerseMovement_move_response_effect
	{
		VerseMovement_move_response_effect__Force = 0,
		VerseMovement_move_response_effect__VelocityChange = 1,
		VerseMovement_move_response_effect__Transform = 2,
	};


	// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_frame
	enum VerseMovement_move_response_frame
	{
		VerseMovement_move_response_frame__Absolute = 0,
		VerseMovement_move_response_frame__move_response_frame_Object = 1,
		VerseMovement_move_response_frame__move_response_frame_Camera = 2,
	};


	// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_modifier
	enum VerseMovement_move_response_modifier
	{
		VerseMovement_move_response_modifier__move_response_modifier_Add = 0,
		VerseMovement_move_response_modifier__TargetTransform = 1,
		VerseMovement_move_response_modifier__TargetVelocity = 2,
		VerseMovement_move_response_modifier__OverrideTransform = 3,
		VerseMovement_move_response_modifier__OverrideVelocity = 4,
	};


	// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_type
	enum VerseMovement_move_response_type
	{
		VerseMovement_move_response_type__Linear = 0,
		VerseMovement_move_response_type__Angular = 1,
	};


	// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_trigger_type
	enum VerseMovement_move_trigger_type
	{
		VerseMovement_move_trigger_type__Input = 0,
		VerseMovement_move_trigger_type__Constraint = 1,
		VerseMovement_move_trigger_type__Physics = 2,
		VerseMovement_move_trigger_type__Trace = 3,
		VerseMovement_move_trigger_type__Constant = 4,
	};


	// Enum /VerseWorldPartition/_Verse/VNI/VerseWorldPartition.VerseWorldPartition_data_layer_runtime_state
	enum VerseWorldPartition_data_layer_runtime_state
	{
		VerseWorldPartition_data_layer_runtime_state__Unloaded = 0,
		VerseWorldPartition_data_layer_runtime_state__Loaded = 1,
		VerseWorldPartition_data_layer_runtime_state__Activated = 2,
	};


	// Enum /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_PlayerType
	enum Playspace_PlayerType
	{
		Playspace_PlayerType__All = 0,
		Playspace_PlayerType__ActivePlayer = 1,
		Playspace_PlayerType__Spectator = 2,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.AI_ai_action_result
	enum AI_ai_action_result
	{
		AI_ai_action_result__Success = 0,
		AI_ai_action_result__Failure = 1,
		AI_ai_action_result__Canceled = 2,
		AI_ai_action_result__Disallowed = 3,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.AI_fort_guard_alert_level
	enum AI_fort_guard_alert_level
	{
		AI_fort_guard_alert_level__Unaware = 0,
		AI_fort_guard_alert_level__Suspicious = 1,
		AI_fort_guard_alert_level__LostTarget = 2,
		AI_fort_guard_alert_level__Alerted = 3,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.AI_fort_obstacle_status
	enum AI_fort_obstacle_status
	{
		AI_fort_obstacle_status__incoming_obstacle = 0,
		AI_fort_obstacle_status__blocked_by_obstacle = 1,
		AI_fort_obstacle_status__trap_obstacle = 2,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.AI_movement_style
	enum AI_movement_style
	{
		AI_movement_style__Walking = 0,
		AI_movement_style__Running = 1,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.AI_navigation_result
	enum AI_navigation_result
	{
		AI_navigation_result__Reached = 0,
		AI_navigation_result__PartiallyReached = 1,
		AI_navigation_result__Interrupted = 2,
		AI_navigation_result__Blocked = 3,
		AI_navigation_result__Unreachable = 4,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.Animation_PlayAnimation_play_animation_result
	enum Animation_PlayAnimation_play_animation_result
	{
		Animation_PlayAnimation_play_animation_result__Completed = 0,
		Animation_PlayAnimation_play_animation_result__Interrupted = 1,
		Animation_PlayAnimation_play_animation_result__Error = 2,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.Animation_PlayAnimation_play_animation_state
	enum Animation_PlayAnimation_play_animation_state
	{
		Animation_PlayAnimation_play_animation_state__BlendingIn = 0,
		Animation_PlayAnimation_play_animation_state__Playing = 1,
		Animation_PlayAnimation_play_animation_state__BlendingOut = 2,
		Animation_PlayAnimation_play_animation_state__Completed = 3,
		Animation_PlayAnimation_play_animation_state__Stopped = 4,
		Animation_PlayAnimation_play_animation_state__Interrupted = 5,
		Animation_PlayAnimation_play_animation_state__Error = 6,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.FortPlayerUtilities_preferred_rendering_mode
	enum FortPlayerUtilities_preferred_rendering_mode
	{
		FortPlayerUtilities_preferred_rendering_mode__MaximizeFramerate = 0,
		FortPlayerUtilities_preferred_rendering_mode__MaximizeResolution = 1,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.Game_teleport_to_result
	enum Game_teleport_to_result
	{
		Game_teleport_to_result__Ok = 0,
		Game_teleport_to_result__UnknownError = 1,
		Game_teleport_to_result__InvalidDestination = 2,
		Game_teleport_to_result__CollidingDestination = 3,
		Game_teleport_to_result__InvalidObject = 4,
		Game_teleport_to_result__ScaleNotAllowed = 5,
		Game_teleport_to_result__DestinationOutOfBounds = 6,
	};


	// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.Teams_team_attitude
	enum Teams_team_attitude
	{
		Teams_team_attitude__Friendly = 0,
		Teams_team_attitude__Neutral = 1,
		Teams_team_attitude__Hostile = 2,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_animation_controller_state
	enum Devices_CreativeAnimation_animation_controller_state
	{
		Devices_CreativeAnimation_animation_controller_state__InvalidObject = 0,
		Devices_CreativeAnimation_animation_controller_state__AnimationNotSet = 1,
		Devices_CreativeAnimation_animation_controller_state__Stopped = 2,
		Devices_CreativeAnimation_animation_controller_state__Playing = 3,
		Devices_CreativeAnimation_animation_controller_state__Paused = 4,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_animation_mode
	enum Devices_CreativeAnimation_animation_mode
	{
		Devices_CreativeAnimation_animation_mode__OneShot = 0,
		Devices_CreativeAnimation_animation_mode__PingPong = 1,
		Devices_CreativeAnimation_animation_mode__Loop = 2,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_await_next_keyframe_result
	enum Devices_CreativeAnimation_await_next_keyframe_result
	{
		Devices_CreativeAnimation_await_next_keyframe_result__KeyframeReached = 0,
		Devices_CreativeAnimation_await_next_keyframe_result__NotPlaying = 1,
		Devices_CreativeAnimation_await_next_keyframe_result__AnimationAborted = 2,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_get_animation_controller_result
	enum Devices_CreativeAnimation_get_animation_controller_result
	{
		Devices_CreativeAnimation_get_animation_controller_result__Ok = 0,
		Devices_CreativeAnimation_get_animation_controller_result__UnknownError = 1,
		Devices_CreativeAnimation_get_animation_controller_result__InvalidObject = 2,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_playstoppause_result
	enum Devices_CreativeAnimation_playstoppause_result
	{
		Devices_CreativeAnimation_playstoppause_result__Ok = 0,
		Devices_CreativeAnimation_playstoppause_result__AnimationNotSet = 1,
		Devices_CreativeAnimation_playstoppause_result__InvalidObject = 2,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_set_animation_result
	enum Devices_CreativeAnimation_set_animation_result
	{
		Devices_CreativeAnimation_set_animation_result__Ok = 0,
		Devices_CreativeAnimation_set_animation_result__UnknownError = 1,
		Devices_CreativeAnimation_set_animation_result__NoKeyframes = 2,
		Devices_CreativeAnimation_set_animation_result__LoopingAnimationDoesNotLoop = 3,
		Devices_CreativeAnimation_set_animation_result__KeyframeOutOfBounds = 4,
		Devices_CreativeAnimation_set_animation_result__InvalidLocation = 5,
		Devices_CreativeAnimation_set_animation_result__InvalidTime = 6,
		Devices_CreativeAnimation_set_animation_result__InvalidInterpolationParameters = 7,
		Devices_CreativeAnimation_set_animation_result__ScaleNotAllowed = 8,
		Devices_CreativeAnimation_set_animation_result__InvalidObject = 9,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_move_to_internal_result
	enum Devices_move_to_internal_result
	{
		Devices_move_to_internal_result__DestinationReached = 0,
		Devices_move_to_internal_result__WillNotReachDestination = 1,
		Devices_move_to_internal_result__UnknownError = 2,
		Devices_move_to_internal_result__InvalidDestination = 3,
		Devices_move_to_internal_result__InvalidTime = 4,
		Devices_move_to_internal_result__InvalidObject = 5,
		Devices_move_to_internal_result__ScaleNotAllowed = 6,
		Devices_move_to_internal_result__DestinationOutOfBounds = 7,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_move_to_result
	enum Devices_move_to_result
	{
		Devices_move_to_result__DestinationReached = 0,
		Devices_move_to_result__WillNotReachDestination = 1,
	};


	// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_spawn_prop_result
	enum Devices_spawn_prop_result
	{
		Devices_spawn_prop_result__Ok = 0,
		Devices_spawn_prop_result__UnknownError = 1,
		Devices_spawn_prop_result__InvalidSpawnPoint = 2,
		Devices_spawn_prop_result__SpawnPointOutOfBounds = 3,
		Devices_spawn_prop_result__InvalidAsset = 4,
		Devices_spawn_prop_result__TooManyProps = 5,
	};


	// Enum /ItemizationCore/_Verse/VNI/ItemizationCoreRuntime.active_item_limit_behavior
	enum active_item_limit_behavior
	{
		active_item_limit_behavior__UnequipLeastRecentlyUsed = 0,
		active_item_limit_behavior__Block = 1,
	};


	// Enum /ItemizationCore/_Verse/VNI/ItemizationCoreRuntime.inventory_creation_type
	enum inventory_creation_type
	{
		inventory_creation_type__Runtime = 0,
		inventory_creation_type__SetupData = 1,
	};


	// Enum /ItemizationCore/_Verse/VNI/ItemizationCoreRuntime.item_state
	enum item_state
	{
		item_state__NotInInventory = 0,
		item_state__InInventory = 1,
		item_state__Equipped = 2,
	};


	// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_player_status_type
	enum Game_Player_player_status_type
	{
		Game_Player_player_status_type__OnGround = 0,
		Game_Player_player_status_type__Skydiving = 1,
		Game_Player_player_status_type__UsingGlider = 2,
		Game_Player_player_status_type__InVehicle = 3,
		Game_Player_player_status_type__Shooting = 4,
		Game_Player_player_status_type__AimingDownSights = 5,
		Game_Player_player_status_type__InStasis = 6,
	};


	// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerAttribute
	enum Game_Player_PlayerAttribute
	{
		Game_Player_PlayerAttribute__CurrentHealth = 0,
		Game_Player_PlayerAttribute__CurrentShield = 1,
		Game_Player_PlayerAttribute__InitialHealth = 2,
		Game_Player_PlayerAttribute__InitialShield = 3,
		Game_Player_PlayerAttribute__Damage = 4,
		Game_Player_PlayerAttribute__ShieldDamage = 5,
	};


	// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerAttributeOperation
	enum Game_Player_PlayerAttributeOperation
	{
		Game_Player_PlayerAttributeOperation__Add = 0,
		Game_Player_PlayerAttributeOperation__Multiply = 1,
		Game_Player_PlayerAttributeOperation__Divide = 2,
		Game_Player_PlayerAttributeOperation__Override = 3,
		Game_Player_PlayerAttributeOperation__SetMax = 4,
		Game_Player_PlayerAttributeOperation__SetMin = 5,
	};


	// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_PlayerSettingState
	enum Game_PlayerSettingState
	{
		Game_PlayerSettingState__PlayerDefault = 0,
		Game_PlayerSettingState__PlayerAllow = 1,
		Game_PlayerSettingState__PlayerDisallow = 2,
	};


	// Enum /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_activate_ability_result
	enum Game_Abilities_activate_ability_result
	{
		Game_Abilities_activate_ability_result__Activated = 0,
		Game_Abilities_activate_ability_result__Canceled = 1,
		Game_Abilities_activate_ability_result__Completed = 2,
		Game_Abilities_activate_ability_result__Failed = 3,
		Game_Abilities_activate_ability_result__NotOwned = 4,
		Game_Abilities_activate_ability_result__Invalid = 5,
	};


	// Enum /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_add_ability_result
	enum Game_Abilities_add_ability_result
	{
		Game_Abilities_add_ability_result__Added = 0,
		Game_Abilities_add_ability_result__AlreadyOwned = 1,
		Game_Abilities_add_ability_result__Invalid = 2,
	};


	// Enum /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_remove_ability_result
	enum Game_Abilities_remove_ability_result
	{
		Game_Abilities_remove_ability_result__NotOwned = 0,
		Game_Abilities_remove_ability_result__Removed = 1,
		Game_Abilities_remove_ability_result__Invalid = 2,
	};


	// Enum /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_PingCommand_command_type
	enum CompanionAI_PingCommand_command_type
	{
		CompanionAI_PingCommand_command_type__go_to = 0,
		CompanionAI_PingCommand_command_type__back_to_me = 1,
		CompanionAI_PingCommand_command_type__back_to_default = 2,
		CompanionAI_PingCommand_command_type__hold_position = 3,
		CompanionAI_PingCommand_command_type__revive = 4,
		CompanionAI_PingCommand_command_type__invalid = 5,
	};


	// Enum /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_PingCommand_entity_type
	enum CompanionAI_PingCommand_entity_type
	{
		CompanionAI_PingCommand_entity_type__pawn = 0,
		CompanionAI_PingCommand_entity_type__pickup = 1,
		CompanionAI_PingCommand_entity_type__weapon = 2,
		CompanionAI_PingCommand_entity_type__container = 3,
		CompanionAI_PingCommand_entity_type__player_built_actor = 4,
		CompanionAI_PingCommand_entity_type__building_actor = 5,
		CompanionAI_PingCommand_entity_type__undefined = 6,
	};

}
