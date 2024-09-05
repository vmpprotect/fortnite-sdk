#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SunRoseFlyingRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SunRoseFlyingRuntime.FlyingStatusConfig
	// Size: 0xB0 (0xB0 - 0x0)
	struct FFlyingStatusConfig	
	{
	public:
		EWingedFlyingStatus Status; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FScalableFloat InitialEnergyCost; // 0x8(0x28)
		FGameplayTag CooldownTag; // 0x30(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FScalableFloat CooldownDuration; // 0x38(0x28)
		FScalableFloat OnGoingEnergyCost; // 0x60(0x28)
		FScalableFloat EndOnEmptyEnergy; // 0x88(0x28)
	};


	// Struct SunRoseFlyingRuntime.FortMovementMode_WingedFlyingCreationData
	// Inherited from FFortMovementMode_FlyingCreationData -> FFortMovementMode_BaseExtCreationData
	// Size: 0x8 (0x38 - 0x30)
	struct FFortMovementMode_WingedFlyingCreationData : public FFortMovementMode_FlyingCreationData	
	{
	public:
		float FlyingEnergy; // 0x30(0x4)
		bool bConsumeExtraLeapEnergy; // 0x34(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};

}
