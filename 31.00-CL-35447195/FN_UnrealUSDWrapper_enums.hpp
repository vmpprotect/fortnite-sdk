#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UnrealUSDWrapper
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/UnrealUSDWrapper.EUsdPurpose
	enum EUsdPurpose
	{
		EUsdPurpose__Default = 0,
		EUsdPurpose__Proxy = 1,
		EUsdPurpose__Render = 2,
		EUsdPurpose__Guide = 4,
	};


	// Enum /Script/UnrealUSDWrapper.EUsdDefaultKind
	enum EUsdDefaultKind
	{
		EUsdDefaultKind__None = 0,
		EUsdDefaultKind__Model = 1,
		EUsdDefaultKind__Component = 2,
		EUsdDefaultKind__Group = 4,
		EUsdDefaultKind__Assembly = 8,
		EUsdDefaultKind__Subcomponent = 10,
	};


	// Enum /Script/UnrealUSDWrapper.EUsdLoadPolicy
	enum EUsdLoadPolicy
	{
		EUsdLoadPolicy__UsdLoadWithDescendants = 0,
		EUsdLoadPolicy__UsdLoadWithoutDescendants = 1,
	};


	// Enum /Script/UnrealUSDWrapper.EUsdInitialLoadSet
	enum EUsdInitialLoadSet
	{
		EUsdInitialLoadSet__LoadAll = 0,
		EUsdInitialLoadSet__LoadNone = 1,
	};


	// Enum /Script/UnrealUSDWrapper.EUsdInterpolationType
	enum EUsdInterpolationType
	{
		EUsdInterpolationType__Held = 0,
		EUsdInterpolationType__Linear = 1,
	};


	// Enum /Script/UnrealUSDWrapper.EUsdRootMotionHandling
	enum EUsdRootMotionHandling
	{
		EUsdRootMotionHandling__NoAdditionalRootMotion = 0,
		EUsdRootMotionHandling__UseMotionFromSkelRoot = 1,
		EUsdRootMotionHandling__UseMotionFromSkeleton = 2,
	};


	// Enum /Script/UnrealUSDWrapper.EUsdListPosition
	enum EUsdListPosition
	{
		EUsdListPosition__FrontOfPrependList = 0,
		EUsdListPosition__BackOfPrependList = 1,
		EUsdListPosition__FrontOfAppendList = 2,
		EUsdListPosition__BackOfAppendList = 3,
	};

}
