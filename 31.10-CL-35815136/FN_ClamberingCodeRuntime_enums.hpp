#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ClamberingCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/ClamberingCodeRuntime.EPlayerBuiltWallType
	enum EPlayerBuiltWallType
	{
		EPlayerBuiltWallType__Solid = 0,
		EPlayerBuiltWallType__Windows = 1,
		EPlayerBuiltWallType__WindowC = 2,
		EPlayerBuiltWallType__WindowSide = 3,
		EPlayerBuiltWallType__DoorC = 4,
		EPlayerBuiltWallType__DoorS = 5,
		EPlayerBuiltWallType__DoorSide = 6,
		EPlayerBuiltWallType__Archway = 7,
		EPlayerBuiltWallType__ArchwayLarge = 8,
		EPlayerBuiltWallType__ArchwayLargeSupport = 9,
	};


	// Enum /Script/ClamberingCodeRuntime.EPlayerBuiltWallMaterialType
	enum EPlayerBuiltWallMaterialType
	{
		EPlayerBuiltWallMaterialType__Wood = 0,
		EPlayerBuiltWallMaterialType__Metal = 1,
		EPlayerBuiltWallMaterialType__Stone = 2,
	};


	// Enum /Script/ClamberingCodeRuntime.EClamberingType
	enum EClamberingType
	{
		EClamberingType__Invalid = 0,
		EClamberingType__Ledge = 1,
		EClamberingType__Window = 2,
	};


	// Enum /Script/ClamberingCodeRuntime.EClamberingState
	enum EClamberingState
	{
		EClamberingState__Inactive = 0,
		EClamberingState__Targeting = 1,
		EClamberingState__Ledge_Moving = 2,
		EClamberingState__Ledge_Failed = 3,
		EClamberingState__Window_Moving = 4,
		EClamberingState__Window_Failed = 5,
	};


	// Enum /Script/ClamberingCodeRuntime.EClamberingFailedReason
	enum EClamberingFailedReason
	{
		EClamberingFailedReason__None = 0,
		EClamberingFailedReason__Unknown = 1,
		EClamberingFailedReason__DebugForced = 2,
		EClamberingFailedReason__OwnerDied = 3,
		EClamberingFailedReason__OwnerDBNO = 4,
		EClamberingFailedReason__OwnerLaunched = 5,
		EClamberingFailedReason__SynchedActionNotStarted = 6,
		EClamberingFailedReason__OwnerTeleported = 7,
		EClamberingFailedReason__Ledge_PlayerTooFar = 8,
		EClamberingFailedReason__Ledge_TargetLocationInvalid = 9,
		EClamberingFailedReason__Ledge_TargetActorInvalid = A,
		EClamberingFailedReason__Ledge_TargetActorDestroyed = B,
		EClamberingFailedReason__Ledge_BlockerEncountered = C,
	};


	// Enum /Script/ClamberingCodeRuntime.EClamberingActivationMode
	enum EClamberingActivationMode
	{
		EClamberingActivationMode__ClientPreference = 0,
		EClamberingActivationMode__ForceAutoClambering = 1,
		EClamberingActivationMode__ForceManualClambering = 2,
	};


	// Enum /Script/ClamberingCodeRuntime.EClamberingDebugTextAlign
	enum EClamberingDebugTextAlign
	{
		EClamberingDebugTextAlign__Left = 0,
		EClamberingDebugTextAlign__Right = 1,
		EClamberingDebugTextAlign__Center = 2,
	};

}
