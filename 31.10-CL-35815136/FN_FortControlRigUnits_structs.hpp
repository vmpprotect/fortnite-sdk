#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortControlRigUnits
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortControlRigUnits.FortRigUnit_SphereTrace_WorkData
	// Size: 0x38 (0x38 - 0x0)
	struct FFortRigUnit_SphereTrace_WorkData	
	{
	public:
		uint32_t Hash; // 0x0(0x4)
		bool bHit; // 0x4(0x1)
		bool bInitialOverlap; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FVector HitLocation; // 0x8(0x18)
		FVector HitNormal; // 0x20(0x18)
	};


	// Struct FortControlRigUnits.FortRigUnit_SphereTraceByChannel
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0xE0 (0xE8 - 0x8)
	struct FFortRigUnit_SphereTraceByChannel : public FRigUnit	
	{
	public:
		FVector Start; // 0x8(0x18)
		FVector End; // 0x20(0x18)
		TEnumAsByte<ETraceTypeQuery> TraceChannel; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float Radius; // 0x3C(0x4)
		bool bTraceComplex; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		TArray<FName> IgnoreActorTags; // 0x48(0x10)
		FGameplayTagContainer IgnoreGameplayTags; // 0x58(0x20)
		EFortRigUnitTraceType TraceType; // 0x78(0x1)
		bool bHit; // 0x79(0x1)
		bool bInitialOverlap; // 0x7A(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x7B(0x5) UNKNOWN PROPERTY
		FVector HitLocation; // 0x80(0x18)
		FVector HitNormal; // 0x98(0x18)
		FFortRigUnit_SphereTrace_WorkData WorkData; // 0xB0(0x38)
	};

}
