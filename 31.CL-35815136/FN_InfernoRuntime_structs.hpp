#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InfernoRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct InfernoRuntime.FortCurieVoxelPropagationProperties
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortCurieVoxelPropagationProperties : public FTableRowBase	
	{
	public:
		float PropagationZDirectionDownMultiplier; // 0x8(0x4)
		float PropagationZDirectionUpMultiplier; // 0xC(0x4)
		float PropagationBaseDelay; // 0x10(0x4)
		float PropagationBaseSpeed; // 0x14(0x4)
	};


	// Struct InfernoRuntime.FortCurieVoxelFirePropagationManagerTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FFortCurieVoxelFirePropagationManagerTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct InfernoRuntime.FortCurieVoxelFireParticleGrassData
	// Size: 0x58 (0x58 - 0x0)
	struct FFortCurieVoxelFireParticleGrassData	
	{
	public:
		unsigned char UnknownData00_2[0x58]; // 0x0(0x58) UNKNOWN PROPERTY
	};

}
