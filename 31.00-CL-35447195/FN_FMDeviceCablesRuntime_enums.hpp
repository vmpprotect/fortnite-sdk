#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMDeviceCablesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/FMDeviceCablesRuntime.EPortSelectStatus
	enum EPortSelectStatus
	{
		EPortSelectStatus__Error = 0,
		EPortSelectStatus__ControllerCableUsed = 1,
		EPortSelectStatus__GaveControllerCable = 2,
		EPortSelectStatus__CableSwap = 3,
		EPortSelectStatus__NewCableUsed = 4,
		EPortSelectStatus__ConstantCableUsed = 5,
		EPortSelectStatus__ConnectionEnded = 6,
		EPortSelectStatus__NoCableAvailable = 7,
		EPortSelectStatus__TypeMismatch = 8,
		EPortSelectStatus__AttemptedMultiConnect = 9,
		EPortSelectStatus__SelfSelect = A,
		EPortSelectStatus__InvalidConnection = B,
		EPortSelectStatus__WouldCreateLoop = C,
		EPortSelectStatus__Unselectable = D,
	};


	// Enum /Script/FMDeviceCablesRuntime.EDeviceCableActivatedState
	enum EDeviceCableActivatedState
	{
		EDeviceCableActivatedState__Active = 0,
		EDeviceCableActivatedState__Dormant = 1,
	};


	// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortAnimationSyncType
	enum EDeviceCablePortAnimationSyncType
	{
		EDeviceCablePortAnimationSyncType__Follower = 0,
		EDeviceCablePortAnimationSyncType__Authority = 1,
		EDeviceCablePortAnimationSyncType__Independent = 2,
	};


	// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortFlowType
	enum EDeviceCablePortFlowType
	{
		EDeviceCablePortFlowType__Input = 0,
		EDeviceCablePortFlowType__Output = 1,
		EDeviceCablePortFlowType__Any = 2,
	};


	// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortDataType
	enum EDeviceCablePortDataType
	{
		EDeviceCablePortDataType__Scalar = 0,
		EDeviceCablePortDataType__Note = 1,
		EDeviceCablePortDataType__Audio = 2,
		EDeviceCablePortDataType__Texture = 3,
		EDeviceCablePortDataType__Mesh = 4,
		EDeviceCablePortDataType__Any = 5,
	};


	// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortSelectableState
	enum EDeviceCablePortSelectableState
	{
		EDeviceCablePortSelectableState__Selectable = 0,
		EDeviceCablePortSelectableState__Unselectable = 1,
	};


	// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCablePortComponentAllowMultipleConnections
	enum EFMDeviceCablePortComponentAllowMultipleConnections
	{
		EFMDeviceCablePortComponentAllowMultipleConnections__NoPreference = 0,
		EFMDeviceCablePortComponentAllowMultipleConnections__ForceMultiple = 1,
		EFMDeviceCablePortComponentAllowMultipleConnections__ForceSingle = 2,
	};


	// Enum /Script/FMDeviceCablesRuntime.EDeviceCableLoadableState
	enum EDeviceCableLoadableState
	{
		EDeviceCableLoadableState__Loadable = 0,
		EDeviceCableLoadableState__NotLoadable = 1,
	};


	// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableAnimationQuality
	enum EFMDeviceCableAnimationQuality
	{
		EFMDeviceCableAnimationQuality__High = 0,
		EFMDeviceCableAnimationQuality__Med = 1,
		EFMDeviceCableAnimationQuality__Low = 2,
	};


	// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableWildcardOrderingState
	enum EFMDeviceCableWildcardOrderingState
	{
		EFMDeviceCableWildcardOrderingState__Inactive = 0,
		EFMDeviceCableWildcardOrderingState__Pending = 1,
		EFMDeviceCableWildcardOrderingState__Active = 2,
	};


	// Enum /Script/FMDeviceCablesRuntime.EDeviceCableInteractionType
	enum EDeviceCableInteractionType
	{
		EDeviceCableInteractionType__Free = 0,
		EDeviceCableInteractionType__StaticOutput = 1,
	};

}
