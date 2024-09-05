#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PhysicsCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PhysicsCore.BodyInstanceCore
	// Size: 0xC (0xC - 0x0)
	struct FBodyInstanceCore	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		bool bSimulatePhysics : 1; // 0x8:0(0x1)
		bool bOverrideMass : 1; // 0x8:1(0x1)
		bool bEnableGravity : 1; // 0x8:2(0x1)
		bool bUpdateKinematicFromSimulation : 1; // 0x8:3(0x1)
		bool bAutoWeld : 1; // 0x8:4(0x1)
		bool bStartAwake : 1; // 0x8:5(0x1)
		bool bGenerateWakeEvents : 1; // 0x8:6(0x1)
		bool bUpdateMassWhenScaleChanges : 1; // 0x8:7(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct PhysicsCore.PhysicalMaterialStrength
	// Size: 0xC (0xC - 0x0)
	struct FPhysicalMaterialStrength	
	{
	public:
		float TensileStrength; // 0x0(0x4)
		float CompressionStrength; // 0x4(0x4)
		float ShearStrength; // 0x8(0x4)
	};


	// Struct PhysicsCore.PhysicalMaterialDamageModifier
	// Size: 0x4 (0x4 - 0x0)
	struct FPhysicalMaterialDamageModifier	
	{
	public:
		float DamageThresholdMultiplier; // 0x0(0x4)
	};

}
