#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MetaHumanRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MetaHumanRuntime.MetaHumanCustomizableBodyPart
	// Size: 0x38 (0x38 - 0x0)
	struct FMetaHumanCustomizableBodyPart	
	{
	public:
		USkeletalMeshComponent* SkeletalMeshComponent; // 0x0(0x8)
		UClass* ControlRigClass; // 0x8(0x8)
		int32_t ControlRigLODThreshold; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UPhysicsAsset* PhysicsAsset; // 0x18(0x8)
		int32_t RigidBodyLODThreshold; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FString ComponentName; // 0x28(0x10)
	};

}
