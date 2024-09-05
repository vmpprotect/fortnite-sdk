#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ControlRigLibrary
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ControlRigLibrary.RigUnit_TwoBoneIKOffPlane
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xF0 (0x2B0 - 0x1C0)
	struct FRigUnit_TwoBoneIKOffPlane : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey BoneA; // 0x1C0(0x8)
		FRigElementKey BoneB; // 0x1C8(0x8)
		FRigElementKey BoneC; // 0x1D0(0x8)
		FRigElementKey BoneD; // 0x1D8(0x8)
		FVector Effector; // 0x1E0(0x18)
		FVector PoleVector; // 0x1F8(0x18)
		FVector PrimaryAxis; // 0x210(0x18)
		FVector SecondaryAxis; // 0x228(0x18)
		int32_t MaxIterations; // 0x240(0x4)
		float Tolerance; // 0x244(0x4)
		FCachedRigElement CachedBoneAIndex; // 0x248(0x18)
		FCachedRigElement CachedBoneBIndex; // 0x260(0x18)
		FCachedRigElement CachedBoneCIndex; // 0x278(0x18)
		FCachedRigElement CachedBoneDIndex; // 0x290(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x2A8(0x8) UNKNOWN PROPERTY
	};

}
