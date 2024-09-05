#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: KatanaGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct KatanaGameplayRuntime.FortKatanaPrimaryAttackVariationInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FFortKatanaPrimaryAttackVariationInfo	
	{
	public:
		FScalableFloat Range; // 0x0(0x28)
		FScalableFloat OffsetFromTarget; // 0x28(0x28)
		FFortAbilityTargetSelectionList TargetSelectionList; // 0x50(0x48)
	};


	// Struct KatanaGameplayRuntime.FortKatanaDashTargetingInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FFortKatanaDashTargetingInfo	
	{
	public:
		FVector DashDirection; // 0x0(0x18)
		float DashDistance; // 0x18(0x4)
		TWeakObjectPtr DashBlockingActor; // 0x1C(0x8)
		bool bWasDashDirectionAdjusted; // 0x24(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		TArray DamagedActors; // 0x28(0x10)
		float OutOfRangePercent; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};

}
