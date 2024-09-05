#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClothingSystemRuntimeInterface
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ClothingSystemRuntimeInterface.ClothingAssetBase
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UClothingAssetBase : public UObject	
	{
	public:
		FString ImportedFilePath; // 0x28(0x10)
		FGuid AssetGuid; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothingAssetBase");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeInterface.ClothConfigBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClothConfigBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothConfigBase");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClothSharedSimConfigBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UClothingSimulationFactory : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeInterface.ClothingInteractor
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UClothingInteractor : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothingInteractor");
			return ret;
		}
	};


	// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UClothingSimulationInteractor : public UObject	
	{
	public:
		TMap ClothingInteractors; // 0x28(0x50)
		unsigned char UnknownData01_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
			return ret;
		}

		void SetNumSubsteps(int32_t NumSubsteps); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414499718
		void SetNumIterations(int32_t NumIterations); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414499638
		void SetMaxNumIterations(int32_t MaxNumIterations); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414499558
		void SetAnimDriveSpringStiffness(float InStiffness); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414499478
		void PhysicsAssetUpdated(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414499398
		float GetSimulationTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144992B8
		int32_t GetNumSubsteps(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144991D8
		int32_t GetNumKinematicParticles(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144990F8
		int32_t GetNumIterations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414499018
		int32_t GetNumDynamicParticles(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414498F38
		int32_t GetNumCloths(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414498E58
		UClothingInteractor GetClothingInteractor(FString ClothingAssetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414498D78
		void EnableGravityOverride(FVector& InVector); // Flags: RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414498C98
		void DisableGravityOverride(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414498BB8
		void ClothConfigUpdated(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414498AD8
	};


	// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UClothPhysicalMeshDataBase_Legacy : public UObject	
	{
	public:
		TArray Vertices; // 0x28(0x10)
		TArray Normals; // 0x38(0x10)
		TArray Indices; // 0x48(0x10)
		TArray InverseMasses; // 0x58(0x10)
		TArray BoneData; // 0x68(0x10)
		int32_t NumFixedVerts; // 0x78(0x4)
		int32_t MaxBoneWeights; // 0x7C(0x4)
		TArray SelfCollisionIndices; // 0x80(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x90(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
			return ret;
		}
	};

}
