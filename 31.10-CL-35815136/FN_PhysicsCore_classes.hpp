#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PhysicsCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PhysicsCore.PhysicalMaterialPropertyBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPhysicalMaterialPropertyBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsCore.PhysicalMaterialPropertyBase");
			return ret;
		}
	};


	// Class PhysicsCore.BodySetupCore
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UBodySetupCore : public UObject	
	{
	public:
		FName BoneName; // 0x28(0x4)
		TEnumAsByte<EPhysicsType> PhysicsType; // 0x2C(0x1)
		TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag; // 0x2D(0x1)
		TEnumAsByte<EBodyCollisionResponse> CollisionReponse; // 0x2E(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x2F(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsCore.BodySetupCore");
			return ret;
		}
	};


	// Class PhysicsCore.ChaosPhysicalMaterial
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UChaosPhysicalMaterial : public UObject	
	{
	public:
		float Friction; // 0x28(0x4)
		float StaticFriction; // 0x2C(0x4)
		float Restitution; // 0x30(0x4)
		float LinearEtherDrag; // 0x34(0x4)
		float AngularEtherDrag; // 0x38(0x4)
		float SleepingLinearVelocityThreshold; // 0x3C(0x4)
		float SleepingAngularVelocityThreshold; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsCore.ChaosPhysicalMaterial");
			return ret;
		}
	};


	// Class PhysicsCore.PhysicalMaterial
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UPhysicalMaterial : public UObject	
	{
	public:
		float Friction; // 0x28(0x4)
		float StaticFriction; // 0x2C(0x4)
		TEnumAsByte<EFrictionCombineMode> FrictionCombineMode; // 0x30(0x1)
		bool bOverrideFrictionCombineMode; // 0x31(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float Restitution; // 0x34(0x4)
		TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode; // 0x38(0x1)
		bool bOverrideRestitutionCombineMode; // 0x39(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		float Density; // 0x3C(0x4)
		float SleepLinearVelocityThreshold; // 0x40(0x4)
		float SleepAngularVelocityThreshold; // 0x44(0x4)
		int32_t SleepCounterThreshold; // 0x48(0x4)
		float RaiseMassToPower; // 0x4C(0x4)
		float DestructibleDamageThresholdScale; // 0x50(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58(0x8)
		TEnumAsByte<EPhysicalSurface> SurfaceType; // 0x60(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		FPhysicalMaterialStrength Strength; // 0x64(0xC)
		FPhysicalMaterialDamageModifier DamageModifier; // 0x70(0x4)
		bool bShowExperimentalProperties; // 0x74(0x1)
		EPhysicalMaterialSoftCollisionMode SoftCollisionMode; // 0x75(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x76(0x2) UNKNOWN PROPERTY
		float SoftCollisionThickness; // 0x78(0x4)
		float BaseFrictionImpulse; // 0x7C(0x4)
		unsigned char UnknownData05_7[0x18]; // 0x80(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsCore.PhysicalMaterial");
			return ret;
		}
	};


	// Class PhysicsCore.PhysicsSettingsCore
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xB0 (0xE0 - 0x30)
	class UPhysicsSettingsCore : public UDeveloperSettings	
	{
	public:
		float DefaultGravityZ; // 0x30(0x4)
		float DefaultTerminalVelocity; // 0x34(0x4)
		float DefaultFluidFriction; // 0x38(0x4)
		int32_t SimulateScratchMemorySize; // 0x3C(0x4)
		int32_t RagdollAggregateThreshold; // 0x40(0x4)
		float TriangleMeshTriangleMinAreaThreshold; // 0x44(0x4)
		bool bEnableEnhancedDeterminism; // 0x48(0x1)
		bool bEnableShapeSharing; // 0x49(0x1)
		bool bEnablePCM; // 0x4A(0x1)
		bool bEnableStabilization; // 0x4B(0x1)
		bool bWarnMissingLocks; // 0x4C(0x1)
		bool bEnable2DPhysics; // 0x4D(0x1)
		bool bDefaultHasComplexCollision; // 0x4E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x4F(0x1) UNKNOWN PROPERTY
		float BounceThresholdVelocity; // 0x50(0x4)
		TEnumAsByte<EFrictionCombineMode> FrictionCombineMode; // 0x54(0x1)
		TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode; // 0x55(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
		float MaxAngularVelocity; // 0x58(0x4)
		float MaxDepenetrationVelocity; // 0x5C(0x4)
		float ContactOffsetMultiplier; // 0x60(0x4)
		float MinContactOffset; // 0x64(0x4)
		float MaxContactOffset; // 0x68(0x4)
		bool bSimulateSkeletalMeshOnDedicatedServer; // 0x6C(0x1)
		TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity; // 0x6D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
		FChaosSolverConfiguration SolverOptions; // 0x70(0x6C)
		unsigned char UnknownData03_7[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsCore.PhysicsSettingsCore");
			return ret;
		}
	};

}
