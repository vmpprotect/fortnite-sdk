#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MetaHumanRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MetaHumanRuntime.MetaHumanCustomizableBodyPart
	// Size: 0x38 (0x38 - 0x0)
	struct FMetaHumanCustomizableBodyPart	
	{
	public:
		USkeletalMeshComponent SkeletalMeshComponent; // 0x0(0x8)
		UClass ControlRigClass; // 0x8(0x8)
		int32_t ControlRigLODThreshold; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UPhysicsAsset PhysicsAsset; // 0x18(0x8)
		int32_t RigidBodyLODThreshold; // 0x20(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FString ComponentName; // 0x28(0x10)
	};

}
