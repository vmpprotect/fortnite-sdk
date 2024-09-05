#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ClothingSystemRuntimeInterface
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		TMap<FName, UClothingInteractor*> ClothingInteractors; // 0x28(0x50)
		unsigned char UnknownData00_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
			return ret;
		}

		void SetNumSubsteps(int32_t NumSubsteps); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BCA2628(relative to base address)
		void SetNumIterations(int32_t NumIterations); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BCA25A4(relative to base address)
		void SetMaxNumIterations(int32_t MaxNumIterations); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BCA2520(relative to base address)
		void SetAnimDriveSpringStiffness(float InStiffness); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74BCA249C(relative to base address)
		void PhysicsAssetUpdated(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747B0DC80(relative to base address)
		float GetSimulationTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2484(relative to base address)
		int32_t GetNumSubsteps(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA246C(relative to base address)
		int32_t GetNumKinematicParticles(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2458(relative to base address)
		int32_t GetNumIterations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2440(relative to base address)
		int32_t GetNumDynamicParticles(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2428(relative to base address)
		int32_t GetNumCloths(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2414(relative to base address)
		UClothingInteractor GetClothingInteractor(FString ClothingAssetName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2374(relative to base address)
		void EnableGravityOverride(FVector& InVector); // Flags: RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74BCA22AC(relative to base address)
		void DisableGravityOverride(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747E989FC(relative to base address)
		void ClothConfigUpdated(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
	};


	// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UClothPhysicalMeshDataBase_Legacy : public UObject	
	{
	public:
		TArray<FVector3f> Vertices; // 0x28(0x10)
		TArray<FVector3f> Normals; // 0x38(0x10)
		TArray<uint32_t> Indices; // 0x48(0x10)
		TArray<float> InverseMasses; // 0x58(0x10)
		TArray<FClothVertBoneData> BoneData; // 0x68(0x10)
		int32_t NumFixedVerts; // 0x78(0x4)
		int32_t MaxBoneWeights; // 0x7C(0x4)
		TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x90(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
			return ret;
		}
	};

}
