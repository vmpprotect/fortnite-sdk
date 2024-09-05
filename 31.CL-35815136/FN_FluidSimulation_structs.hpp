#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FluidSimulation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceSocketInfo.FluidForceSocketInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FFluidForceSocketInfo	
	{
	public:
		TMap<FName, FName> SocketsandEndpoints_6_B3EDD8FC43A7C681151F46BE0AA158C5; // 0x0(0x50)
	};


	// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamic.FluidForceDynamic
	// Size: 0x70 (0x70 - 0x0)
	struct FFluidForceDynamic	
	{
	public:
		TEnumAsByte<FluidDynamicForceMeshType> ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234; // 0x4(0x4)
		float ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		USceneComponent* ForceComponent_34_ABF6640F40D37677EF6F809E09046055; // 0x10(0x8)
		UMaterialInterface* MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x18(0x8)
		FFluidForceSocketInfo SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A; // 0x20(0x50)
	};


	// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
	// Size: 0x148 (0x148 - 0x0)
	struct FFluidForceDynamicPerInstanceData	
	{
	public:
		FFluidForceDynamic ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1; // 0x0(0x70)
		FVector ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD; // 0x70(0x18)
		FVector ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361; // 0x88(0x18)
		float BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03; // 0xA0(0x4)
		float WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8; // 0xA4(0x4)
		TMap<FName, FVector> SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA; // 0xA8(0x50)
		TMap<FName, FVector> SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537; // 0xF8(0x50)
	};


	// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulseTimedEffects.FluidForceImpulseTimedEffects
	// Size: 0x28 (0x28 - 0x0)
	struct FFluidForceImpulseTimedEffects	
	{
	public:
		bool EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC; // 0x4(0x4)
		float Strength_29_2CAA30794D1EFF60AE1C3491D011CECF; // 0x8(0x4)
		float WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234; // 0xC(0x4)
		float StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x10(0x4)
		float Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113; // 0x14(0x4)
		float StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UMaterialInterface* MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF; // 0x20(0x8)
	};


	// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulse.FluidForceImpulse
	// Size: 0x58 (0x58 - 0x0)
	struct FFluidForceImpulse	
	{
	public:
		FVector WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC; // 0x0(0x18)
		float ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234; // 0x18(0x4)
		float ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF; // 0x1C(0x4)
		UMaterialInterface* MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x20(0x8)
		float Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113; // 0x28(0x4)
		float StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F; // 0x2C(0x4)
		FFluidForceImpulseTimedEffects TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E; // 0x30(0x28)
	};


	// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulsePerInstanceData.FluidForceImpulsePerInstanceData
	// Size: 0x61 (0x61 - 0x0)
	struct FFluidForceImpulsePerInstanceData	
	{
	public:
		FFluidForceImpulse ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC; // 0x0(0x58)
		float ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F; // 0x58(0x4)
		float StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F; // 0x5C(0x4)
		bool IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284; // 0x60(0x1)
	};

}
