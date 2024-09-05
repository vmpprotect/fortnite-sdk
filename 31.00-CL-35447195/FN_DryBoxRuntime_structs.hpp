#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DryBoxRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DryBoxRuntime.NyxGlassTargetingData
	// Size: 0x48 (0x48 - 0x0)
	struct FNyxGlassTargetingData	
	{
	public:
		AActor LeftActor; // 0x0(0x8)
		AActor RightActor; // 0x8(0x8)
		FVector LeftAttachPoint; // 0x10(0x18)
		FVector RightAttachPoint; // 0x28(0x18)
		bool bFoundLeftAttachPoint; // 0x40(0x1)
		bool bFoundRightAttachPoint; // 0x41(0x1)
		bool bUsingDirectRaycast; // 0x42(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
	};


	// Struct DryBoxRuntime.NyxGlassVelocityMetadata
	// Size: 0x58 (0x58 - 0x0)
	struct FNyxGlassVelocityMetadata	
	{
	public:
		FVector OrigVelocity; // 0x0(0x18)
		FVector FinalVelocity; // 0x18(0x18)
		FVector FinalGasForce; // 0x30(0x18)
		float CalcMaxSpeedMultiplier; // 0x48(0x4)
		bool bCloseToAttachPoint; // 0x4C(0x1)
		bool bPerformedHoverCalculation; // 0x4D(0x1)
		bool bReachedSlashTarget; // 0x4E(0x1)
		bool bShouldApplySlashDamage; // 0x4F(0x1)
		bool bShouldLeapBack; // 0x50(0x1)
		bool bFinishedLeapingBack; // 0x51(0x1)
		bool bCancelAttackSequence; // 0x52(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x53(0x5) UNKNOWN PROPERTY
	};

}
