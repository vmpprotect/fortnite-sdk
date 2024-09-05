#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosNiagara
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ChaosNiagara.ChaosDestructionEvent
	// Size: 0x78 (0x78 - 0x0)
	struct FChaosDestructionEvent	
	{
	public:
		FVector Position; // 0x0(0x18)
		FVector Normal; // 0x18(0x18)
		FVector Velocity; // 0x30(0x18)
		FVector AngularVelocity; // 0x48(0x18)
		float ExtentMin; // 0x60(0x4)
		float ExtentMax; // 0x64(0x4)
		int32_t ParticleID; // 0x68(0x4)
		float Time; // 0x6C(0x4)
		int32_t Type; // 0x70(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
	};


	// Struct ChaosNiagara.ResolvedNiagaraGeometryCollection
	// Size: 0x10 (0x10 - 0x0)
	struct FResolvedNiagaraGeometryCollection	
	{
	public:
		TWeakObjectPtr<UGeometryCollection*> Collection; // 0x0(0x8)
		TWeakObjectPtr<UGeometryCollectionComponent*> Component; // 0x8(0x8)
	};

}
