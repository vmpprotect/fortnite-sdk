#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ContextualTraversalRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ContextualTraversalRuntime.FortMovementMode_TraversalBaseCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x120 (0x130 - 0x10)
	struct FFortMovementMode_TraversalBaseCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		FSynchedActionInfo SynchedActionInfo; // 0x10(0x30)
		FSynchedActionWarpPointInfo_Replicated SynchedActionWarpPointInfo; // 0x40(0xA0)
		FVector TargetLocation; // 0xE0(0x18)
		FRotator TargetRotation; // 0xF8(0x18)
		TWeakObjectPtr<AActor*> RefActor; // 0x110(0x8)
		TWeakObjectPtr<UPrimitiveComponent*> RefActorComponent; // 0x118(0x8)
		FName RefActorBoneName; // 0x120(0x4)
		EFortSynchedActionEndMovementMode EndMovementMode; // 0x124(0x1)
		bool bIsWindow; // 0x125(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x126(0x2) UNKNOWN PROPERTY
	};

}
