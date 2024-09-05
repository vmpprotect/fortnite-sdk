#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosCloth
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ChaosCloth.ChaosClothConfig
	// Inherited from UClothConfigCommon -> UClothConfigBase -> UObject
	// Size: 0x100 (0x128 - 0x28)
	class UChaosClothConfig : public UClothConfigCommon	
	{
	public:
		EClothMassMode MassMode; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float UniformMass; // 0x2C(0x4)
		float TotalMass; // 0x30(0x4)
		float Density; // 0x34(0x4)
		float MinPerParticleMass; // 0x38(0x4)
		FChaosClothWeightedValue EdgeStiffnessWeighted; // 0x3C(0x8)
		FChaosClothWeightedValue BendingStiffnessWeighted; // 0x44(0x8)
		bool bUseBendingElements; // 0x4C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		float BucklingRatio; // 0x50(0x4)
		FChaosClothWeightedValue BucklingStiffnessWeighted; // 0x54(0x8)
		FChaosClothWeightedValue AreaStiffnessWeighted; // 0x5C(0x8)
		float VolumeStiffness; // 0x64(0x4)
		FChaosClothWeightedValue TetherStiffness; // 0x68(0x8)
		FChaosClothWeightedValue TetherScale; // 0x70(0x8)
		bool bUseGeodesicDistance; // 0x78(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		float ShapeTargetStiffness; // 0x7C(0x4)
		float CollisionThickness; // 0x80(0x4)
		float FrictionCoefficient; // 0x84(0x4)
		bool bUseCCD; // 0x88(0x1)
		bool bUseSelfCollisions; // 0x89(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x8A(0x2) UNKNOWN PROPERTY
		float SelfCollisionThickness; // 0x8C(0x4)
		float SelfCollisionFriction; // 0x90(0x4)
		bool bUseSelfIntersections; // 0x94(0x1)
		bool bUseSelfCollisionSpheres; // 0x95(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x96(0x2) UNKNOWN PROPERTY
		float SelfCollisionSphereRadius; // 0x98(0x4)
		float SelfCollisionSphereStiffness; // 0x9C(0x4)
		float SelfCollisionSphereRadiusCullMultiplier; // 0xA0(0x4)
		bool bUseLegacyBackstop; // 0xA4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY
		float DampingCoefficient; // 0xA8(0x4)
		float LocalDampingCoefficient; // 0xAC(0x4)
		bool bUsePointBasedWindModel; // 0xB0(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		FChaosClothWeightedValue Drag; // 0xB4(0x8)
		FChaosClothWeightedValue Lift; // 0xBC(0x8)
		bool bUseGravityOverride; // 0xC4(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY
		float GravityScale; // 0xC8(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FVector Gravity; // 0xD0(0x18)
		FChaosClothWeightedValue Pressure; // 0xE8(0x8)
		FChaosClothWeightedValue AnimDriveStiffness; // 0xF0(0x8)
		FChaosClothWeightedValue AnimDriveDamping; // 0xF8(0x8)
		FVector LinearVelocityScale; // 0x100(0x18)
		float AngularVelocityScale; // 0x118(0x4)
		float FictitiousAngularScale; // 0x11C(0x4)
		bool bUseTetrahedralConstraints; // 0x120(0x1)
		bool bUseThinShellVolumeConstraints; // 0x121(0x1)
		bool bUseContinuousCollisionDetection; // 0x122(0x1)
		unsigned char UnknownData09_7[0x5]; // 0x123(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCloth.ChaosClothConfig");
			return ret;
		}
	};


	// Class ChaosCloth.ChaosClothSharedSimConfig
	// Inherited from UClothSharedConfigCommon -> UClothConfigCommon -> UClothConfigBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UChaosClothSharedSimConfig : public UClothSharedConfigCommon	
	{
	public:
		int32_t IterationCount; // 0x28(0x4)
		int32_t MaxIterationCount; // 0x2C(0x4)
		int32_t SubdivisionCount; // 0x30(0x4)
		bool bUseLocalSpaceSimulation; // 0x34(0x1)
		bool bUseXPBDConstraints; // 0x35(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x36(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCloth.ChaosClothSharedSimConfig");
			return ret;
		}
	};


	// Class ChaosCloth.ChaosClothingSimulationFactory
	// Inherited from UClothingSimulationFactory -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChaosClothingSimulationFactory : public UClothingSimulationFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCloth.ChaosClothingSimulationFactory");
			return ret;
		}
	};


	// Class ChaosCloth.ChaosClothingInteractor
	// Inherited from UClothingInteractor -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UChaosClothingInteractor : public UClothingInteractor	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCloth.ChaosClothingInteractor");
			return ret;
		}

		void SetWind(FVector2D Drag, FVector2D Lift, float AirDensity, FVector WindVelocity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FE304(relative to base address)
		void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FE068(relative to base address)
		void SetPressure(FVector2D Pressure); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FDF50(relative to base address)
		void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506FDE54(relative to base address)
		void SetMaterialBuckling(FVector2D BucklingRatio, FVector2D BucklingStiffness); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FDC64(relative to base address)
		void SetMaterial(FVector2D EdgeStiffness, FVector2D BendingStiffness, FVector2D AreaStiffness); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FD9B4(relative to base address)
		void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506FD8F0(relative to base address)
		void SetLongRangeAttachment(FVector2D TetherStiffness, FVector2D TetherScale); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FD700(relative to base address)
		void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FD560(relative to base address)
		void SetDamping(float DampingCoefficient, float LocalDampingCoefficient); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506FD49C(relative to base address)
		void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506FD34C(relative to base address)
		void SetBackstop(bool bEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506FD2CC(relative to base address)
		void SetAnimDriveLinear(float AnimDriveStiffness); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506FD24C(relative to base address)
		void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FD05C(relative to base address)
		void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506FCECC(relative to base address)
		void ResetAndTeleport(bool bReset, bool bTeleport); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506FCE08(relative to base address)
	};


	// Class ChaosCloth.ChaosClothingSimulationInteractor
	// Inherited from UClothingSimulationInteractor -> UObject
	// Size: 0x20 (0xB0 - 0x90)
	class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x90(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosCloth.ChaosClothingSimulationInteractor");
			return ret;
		}
	};

}
