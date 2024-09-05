#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KatanaGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		TWeakObjectPtr<AActor*> DashBlockingActor; // 0x1C(0x8)
		bool bWasDashDirectionAdjusted; // 0x24(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		TArray<AActor*> DamagedActors; // 0x28(0x10)
		float OutOfRangePercent; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};

}
