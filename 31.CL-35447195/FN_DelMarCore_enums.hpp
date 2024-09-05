#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/DelMarCore.EDelmarDraftingState
	enum EDelmarDraftingState
	{
		EDelmarDraftingState__NotActive = 0,
		EDelmarDraftingState__HasTarget = 1,
		EDelmarDraftingState__GainingSpeed = 2,
		EDelmarDraftingState__GracePeriod = 3,
		EDelmarDraftingState__LosingSpeed = 4,
	};


	// Enum /Script/DelMarCore.EDelMarVehicleDriftState
	enum EDelMarVehicleDriftState
	{
		EDelMarVehicleDriftState__NotDrifting = 0,
		EDelMarVehicleDriftState__Drifting = 1,
		EDelMarVehicleDriftState__InitialKick = 2,
		EDelMarVehicleDriftState__SwapKick = 3,
		EDelMarVehicleDriftState__ExitVelocity = 4,
		EDelMarVehicleDriftState__ExitForward = 5,
		EDelMarVehicleDriftState__ForcedDrift = 6,
	};


	// Enum /Script/DelMarCore.EDelMarTurboZoneState
	enum EDelMarTurboZoneState
	{
		EDelMarTurboZoneState__None = 0,
		EDelMarTurboZoneState__Visible = 1,
		EDelMarTurboZoneState__Failed = 2,
		EDelMarTurboZoneState__Active = 3,
		EDelMarTurboZoneState__Success = 4,
		EDelMarTurboZoneState__Missed = 5,
	};


	// Enum /Script/DelMarCore.EDelMarVehicleForwardState
	enum EDelMarVehicleForwardState
	{
		EDelMarVehicleForwardState__None = 0,
		EDelMarVehicleForwardState__ForwardAccel = 1,
		EDelMarVehicleForwardState__Braking = 2,
		EDelMarVehicleForwardState__Reversing = 3,
	};


	// Enum /Script/DelMarCore.EDelMarSplineMovementType
	enum EDelMarSplineMovementType
	{
		EDelMarSplineMovementType__OneShot = 0,
		EDelMarSplineMovementType__Repeat = 1,
		EDelMarSplineMovementType__PingPong = 2,
	};


	// Enum /Script/DelMarCore.EDelMarFloatOperation
	enum EDelMarFloatOperation
	{
		DMFO_Set = 0,
		DMFO_Add = 1,
		DMFO_Subtract = 2,
		DMFO_Multiply = 3,
		DMFO_BaseMultiply = 4,
		DMFO_Divide = 5,
		DMFO_Min = 6,
		DMFO_Max = 7,
	};


	// Enum /Script/DelMarCore.EDelMarModifierStackingPolicy
	enum EDelMarModifierStackingPolicy
	{
		DMSP_Allow = 0,
		DMSP_DontAdd = 1,
		DMSP_ClearOthers = 2,
	};


	// Enum /Script/DelMarCore.EDelMarGlobalLeaderboardType
	enum EDelMarGlobalLeaderboardType
	{
		EDelMarGlobalLeaderboardType__Top = 0,
		EDelMarGlobalLeaderboardType__Focused = 1,
		EDelMarGlobalLeaderboardType__Friend = 2,
	};


	// Enum /Script/DelMarCore.EDelMarNetModel
	enum EDelMarNetModel
	{
		EDelMarNetModel__ClientAuthoritative = 0,
		EDelMarNetModel__ChaosRollback = 1,
	};


	// Enum /Script/DelMarCore.EDelMarJellyHazardProcessorInfo
	enum EDelMarJellyHazardProcessorInfo
	{
		EDelMarJellyHazardProcessorInfo__None = 0,
		EDelMarJellyHazardProcessorInfo__WithoutJellyHazardHit = 1,
		EDelMarJellyHazardProcessorInfo__WithJellyHazardHit = 2,
	};


	// Enum /Script/DelMarCore.EDelMarDemolishedProcessorInfo
	enum EDelMarDemolishedProcessorInfo
	{
		EDelMarDemolishedProcessorInfo__None = 0,
		EDelMarDemolishedProcessorInfo__WithoutDemolish = 1,
		EDelMarDemolishedProcessorInfo__WithDemolish = 2,
	};


	// Enum /Script/DelMarCore.EDelMarPositionChangeInfo
	enum EDelMarPositionChangeInfo
	{
		EDelMarPositionChangeInfo__None = 0,
		EDelMarPositionChangeInfo__PassPlayer = 1,
		EDelMarPositionChangeInfo__PassedByPlayer = 2,
	};


	// Enum /Script/DelMarCore.EDelMarPlaylistTypeInfo
	enum EDelMarPlaylistTypeInfo
	{
		EDelMarPlaylistTypeInfo__Any = 0,
		EDelMarPlaylistTypeInfo__Casual = 1,
		EDelMarPlaylistTypeInfo__Ranked = 2,
	};


	// Enum /Script/DelMarCore.EDelMarPhysicsRate
	enum EDelMarPhysicsRate
	{
		EDelMarPhysicsRate__ThirtyHz = 0,
		EDelMarPhysicsRate__SixtyHz = 1,
		EDelMarPhysicsRate__OneHundredTwentyHz = 2,
	};


	// Enum /Script/DelMarCore.EDelMarSplineGenerationMode
	enum EDelMarSplineGenerationMode
	{
		EDelMarSplineGenerationMode__PerSplinePoint = 0,
		EDelMarSplineGenerationMode__UserAmount = 1,
	};


	// Enum /Script/DelMarCore.EDelMarRaceMode
	enum EDelMarRaceMode
	{
		EDelMarRaceMode__ChallengeMode = 0,
		EDelMarRaceMode__CompetitiveMode = 1,
		EDelMarRaceMode__DeathRaceMode = 2,
		EDelMarRaceMode__TutorialRaceMode = 3,
		EDelMarRaceMode__Invalid = 4,
	};


	// Enum /Script/DelMarCore.EDelMarInvertSteerMethod
	enum EDelMarInvertSteerMethod
	{
		EDelMarInvertSteerMethod__CeilingAngle = 0,
		EDelMarInvertSteerMethod__CeilingTimeDelay = 1,
		EDelMarInvertSteerMethod__CeilingReleaseInput = 2,
		EDelMarInvertSteerMethod__Never = 3,
		EDelMarInvertSteerMethod__Always = 4,
	};


	// Enum /Script/DelMarCore.EDelMarKickflipDirection
	enum EDelMarKickflipDirection
	{
		EDelMarKickflipDirection__None = 0,
		EDelMarKickflipDirection__Up = 1,
		EDelMarKickflipDirection__Down = 2,
		EDelMarKickflipDirection__Left = 3,
		EDelMarKickflipDirection__Right = 4,
		EDelMarKickflipDirection__UpLeft = 5,
		EDelMarKickflipDirection__DownLeft = 6,
		EDelMarKickflipDirection__UpRight = 7,
		EDelMarKickflipDirection__DownRight = 8,
	};


	// Enum /Script/DelMarCore.EDelMarVehicleWheelIndex
	enum EDelMarVehicleWheelIndex
	{
		EDelMarVehicleWheelIndex__FrontLeft = 0,
		EDelMarVehicleWheelIndex__FrontRight = 1,
		EDelMarVehicleWheelIndex__BackLeft = 2,
		EDelMarVehicleWheelIndex__BackRight = 3,
		EDelMarVehicleWheelIndex__Num = 4,
	};


	// Enum /Script/DelMarCore.EMixModifierTarget
	enum EMixModifierTarget
	{
		EMixModifierTarget__Volume = 0,
		EMixModifierTarget__Pitch = 1,
		EMixModifierTarget__LowpassFrequency = 2,
	};


	// Enum /Script/DelMarCore.EDelMarCheckpointMeshType
	enum EDelMarCheckpointMeshType
	{
		EDelMarCheckpointMeshType__Default = 0,
		EDelMarCheckpointMeshType__StartLine = 1,
		EDelMarCheckpointMeshType__FinishLine = 2,
	};


	// Enum /Script/DelMarCore.EDelMarTimerDirection
	enum EDelMarTimerDirection
	{
		EDelMarTimerDirection__CountUp = 0,
		EDelMarTimerDirection__CountDown = 1,
	};


	// Enum /Script/DelMarCore.EDelMarPostRaceVote
	enum EDelMarPostRaceVote
	{
		EDelMarPostRaceVote__Unset = 0,
		EDelMarPostRaceVote__PlayAgain = 1,
		EDelMarPostRaceVote__NextMap = 2,
	};


	// Enum /Script/DelMarCore.EDelMarVehicleCollisionOverrideSetting
	enum EDelMarVehicleCollisionOverrideSetting
	{
		EDelMarVehicleCollisionOverrideSetting__Disabled = 0,
		EDelMarVehicleCollisionOverrideSetting__Enabled = 1,
		EDelMarVehicleCollisionOverrideSetting__Unset = 2,
		EDelMarVehicleCollisionOverrideSetting__Max = 3,
	};


	// Enum /Script/DelMarCore.EDelMarRaceSpawnMode
	enum EDelMarRaceSpawnMode
	{
		EDelMarRaceSpawnMode__SpawnAtMostRecentSplinePoint = 0,
		EDelMarRaceSpawnMode__SpawnAtMostRecentCheckpoint = 1,
		EDelMarRaceSpawnMode__SpawnAtRaceStart = 2,
		EDelMarRaceSpawnMode__NoAutomaticRespawn = 3,
	};


	// Enum /Script/DelMarCore.EDelMarPostMatchFlows
	enum EDelMarPostMatchFlows
	{
		EDelMarPostMatchFlows__PlayNowFlow = 0,
		EDelMarPostMatchFlows__PlayTogetherFlow = 1,
		EDelMarPostMatchFlows__PlayTrackFlow = 2,
	};


	// Enum /Script/DelMarCore.EDelMarPostMatchState
	enum EDelMarPostMatchState
	{
		EDelMarPostMatchState__WaitingForLocalPlayers = 0,
		EDelMarPostMatchState__WaitingForParty = 1,
		EDelMarPostMatchState__WaitingForLobby = 2,
		EDelMarPostMatchState__StartingNextRace = 3,
		EDelMarPostMatchState__MatchmakingStarted = 4,
		EDelMarPostMatchState__MatchmakingSucceeded = 5,
		EDelMarPostMatchState__MatchmakingFailed = 6,
		EDelMarPostMatchState__MatchmakingCancelled = 7,
		EDelMarPostMatchState__Idle = 8,
		EDelMarPostMatchState__Failed = 9,
		EDelMarPostMatchState__Completed = A,
		EDelMarPostMatchState__INVALID = B,
	};

}
