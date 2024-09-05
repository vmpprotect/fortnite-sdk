#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClothingSystemRuntimeNv
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ClothingSystemRuntimeNv.ClothConfigNv
	// Inherited from UClothConfigCommon -> UClothConfigBase -> UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UClothConfigNv : public UClothConfigCommon	
	{
	public:
		EClothingWindMethodNv ClothingWindMethod; // 0x28(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FClothConstraintSetupNv VerticalConstraint; // 0x2C(0x10)
		FClothConstraintSetupNv HorizontalConstraint; // 0x3C(0x10)
		FClothConstraintSetupNv BendConstraint; // 0x4C(0x10)
		FClothConstraintSetupNv ShearConstraint; // 0x5C(0x10)
		float SelfCollisionRadius; // 0x6C(0x4)
		float SelfCollisionStiffness; // 0x70(0x4)
		float SelfCollisionCullScale; // 0x74(0x4)
		FVector Damping; // 0x78(0x18)
		float Friction; // 0x90(0x4)
		float WindDragCoefficient; // 0x94(0x4)
		float WindLiftCoefficient; // 0x98(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FVector LinearDrag; // 0xA0(0x18)
		FVector AngularDrag; // 0xB8(0x18)
		FVector LinearInertiaScale; // 0xD0(0x18)
		FVector AngularInertiaScale; // 0xE8(0x18)
		FVector CentrifugalInertiaScale; // 0x100(0x18)
		float SolverFrequency; // 0x118(0x4)
		float StiffnessFrequency; // 0x11C(0x4)
		float GravityScale; // 0x120(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		FVector GravityOverride; // 0x128(0x18)
		bool bUseGravityOverride; // 0x140(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x141(0x3) UNKNOWN PROPERTY
		float TetherStiffness; // 0x144(0x4)
		float TetherLimit; // 0x148(0x4)
		float CollisionThickness; // 0x14C(0x4)
		float AnimDriveSpringStiffness; // 0x150(0x4)
		float AnimDriveDamperStiffness; // 0x154(0x4)
		EClothingWindMethod_Legacy WindMethod; // 0x158(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x159(0x3) UNKNOWN PROPERTY
		FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x15C(0x10)
		FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x16C(0x10)
		FClothConstraintSetup_Legacy BendConstraintConfig; // 0x17C(0x10)
		FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x18C(0x10)
		unsigned char UnknownData11_7[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeNv.ClothConfigNv");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
	// Inherited from UClothingSimulationFactory -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClothingSimulationFactoryNv : public UClothingSimulationFactory	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
	// Inherited from UClothingSimulationInteractor -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UClothingSimulationInteractorNv : public UClothingSimulationInteractor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
			return ret;
		}

		void SetAnimDriveDamperStiffness(float InStiffness); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41458E0F8
	};


	// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
	// Inherited from UClothPhysicalMeshDataBase_Legacy -> UObject
	// Size: 0x40 (0x120 - 0xE0)
	class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy	
	{
	public:
		TArray MaxDistances; // 0xE0(0x10)
		TArray BackstopDistances; // 0xF0(0x10)
		TArray BackstopRadiuses; // 0x100(0x10)
		TArray AnimDriveMultipliers; // 0x110(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy");
			return ret;
		}
	};

}
