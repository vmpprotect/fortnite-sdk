#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Buoyancy
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Buoyancy.BuoyancyEventInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBuoyancyEventInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Buoyancy.BuoyancyEventInterface");
			return ret;
		}

		void OnSurfaceTouching(AWaterBody* WaterBodyActor, UPrimitiveComponent* WaterComponent, UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSurfaceTouchEnd(AWaterBody* WaterBodyActor, UPrimitiveComponent* WaterComponent, UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSurfaceTouchBegin(AWaterBody* WaterBodyActor, UPrimitiveComponent* WaterComponent, UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class Buoyancy.BuoyancyRuntimeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UBuoyancyRuntimeSettings : public UDeveloperSettings	
	{
	public:
		bool bBuoyancyEnabled; // 0x30(0x1)
		bool bKeepFloatingObjectsAwake; // 0x31(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float WaterDensity; // 0x34(0x4)
		float WaterDrag; // 0x38(0x4)
		TEnumAsByte<ECollisionChannel> CollisionChannelForWaterObjects; // 0x3C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		int32_t MaxNumBoundsSubdivisions; // 0x40(0x4)
		float MinBoundsSubdivisionVol; // 0x44(0x4)
		char SurfaceTouchCallbackFlags; // 0x48(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		float MinVelocityForSurfaceTouchCallback; // 0x4C(0x4)
		bool bEnableSplineKeyCacheGrid; // 0x50(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float SplineKeyCacheGridSize; // 0x54(0x4)
		uint32_t SplineKeyCacheLimit; // 0x58(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Buoyancy.BuoyancyRuntimeSettings");
			return ret;
		}
	};


	// Class Buoyancy.BuoyancySubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UBuoyancySubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Buoyancy.BuoyancySubsystem");
			return ret;
		}

		bool IsEnabled(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74DF4E4AC(relative to base address)
	};

}
