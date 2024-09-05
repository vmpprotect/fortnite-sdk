#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosClothAssetEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ChaosClothAssetEngine.ChaosClothComponent
	// Inherited from USkinnedMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x920 - 0x860)
	class UChaosClothComponent : public USkinnedMeshComponent	
	{
	public:
		FDataflowSimulationAsset SimulationAsset; // 0x860(0x58)
		bool bUseAttachedParentAsPoseComponent : 1; // 0x8B8:0(0x1)
		bool bWaitForParallelTask : 1; // 0x8B8:1(0x1)
		bool bEnableSimulation : 1; // 0x8B8:2(0x1)
		bool bSuspendSimulation : 1; // 0x8B8:3(0x1)
		bool bBindToLeaderComponent : 1; // 0x8B8:4(0x1)
		bool bTeleport : 1; // 0x8B8:5(0x1)
		bool bReset : 1; // 0x8B8:6(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x8B9(0x3) UNKNOWN PROPERTY
		float BlendWeight; // 0x8BC(0x4)
		UChaosClothAssetInteractor* ClothOutfitInteractor; // 0x8C0(0x8)
		unsigned char UnknownData01_7[0x58]; // 0x8C8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosClothAssetEngine.ChaosClothComponent");
			return ret;
		}

		void SuspendSimulation(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E82B0(relative to base address)
		void SetEnableSimulation(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7800(relative to base address)
		void SetClothAsset(UChaosClothAsset* InClothAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7778(relative to base address)
		void ResumeSimulation(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7760(relative to base address)
		void ResetTeleportMode(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7748(relative to base address)
		void ResetConfigProperties(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7734(relative to base address)
		void ResetCollisionSources(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7718(relative to base address)
		void RemoveCollisionSources(USkinnedMeshComponent* SourceComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7684(relative to base address)
		void RemoveCollisionSource(USkinnedMeshComponent* SourceComponent, UPhysicsAsset* SourcePhysicsAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E75A4(relative to base address)
		void RecreateClothSimulationProxy(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7590(relative to base address)
		bool IsSimulationSuspended(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E756C(relative to base address)
		bool IsSimulationEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E7548(relative to base address)
		UChaosClothAssetInteractor GetClothOutfitInteractor(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E6C58(relative to base address)
		UChaosClothAsset GetClothAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E6C34(relative to base address)
		void ForceNextUpdateTeleportAndReset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E6B78(relative to base address)
		void ForceNextUpdateTeleport(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E6B58(relative to base address)
		void AddCollisionSource(USkinnedMeshComponent* SourceComponent, UPhysicsAsset* SourcePhysicsAsset, bool bUseSphylsOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E6834(relative to base address)
	};


	// Class ChaosClothAssetEngine.ChaosClothAsset
	// Inherited from USkinnedAsset -> UStreamableRenderAsset -> UObject
	// Size: 0x2A0 (0x370 - 0xD0)
	class UChaosClothAsset : public USkinnedAsset	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xD0(0x20) UNKNOWN PROPERTY
		UDataflow* DataflowAsset; // 0xF0(0x8)
		FString DataflowTerminal; // 0xF8(0x10)
		TArray<FSkeletalMaterial> Materials; // 0x108(0x10)
		USkeleton* Skeleton; // 0x118(0x8)
		UPhysicsAsset* PhysicsAsset; // 0x120(0x8)
		TArray<FSkeletalMeshLODInfo> LODInfo; // 0x128(0x10)
		FPerQualityLevelInt MinQualityLevelLOD; // 0x138(0x68)
		FPerPlatformBool DisableBelowMinLodStripping; // 0x1A0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		FPerPlatformInt MinLOD; // 0x1A4(0x4)
		bool bSupportRayTracing : 1; // 0x1A8:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1A9(0x3) UNKNOWN PROPERTY
		int32_t RayTracingMinLOD; // 0x1AC(0x4)
		bool bSmoothTransition; // 0x1B0(0x1)
		bool bUseMultipleInfluences; // 0x1B1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x1B2(0x2) UNKNOWN PROPERTY
		float SkinningKernelRadius; // 0x1B4(0x4)
		UPhysicsAsset* ShadowPhysicsAsset; // 0x1B8(0x8)
		FGuid AssetGuid; // 0x1C0(0x10)
		unsigned char UnknownData04_7[0x1A0]; // 0x1D0(0x1A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosClothAssetEngine.ChaosClothAsset");
			return ret;
		}

		UPhysicsAsset GetShadowPhysicsAsset(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C8177AC(relative to base address)
	};


	// Class ChaosClothAssetEngine.ChaosClothAssetInteractor
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UChaosClothAssetInteractor : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosClothAssetEngine.ChaosClothAssetInteractor");
			return ret;
		}

		void SetWeightedFloatValue(FString PropertyName, int32_t LODIndex, FVector2D Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7521E8110(relative to base address)
		void SetVectorValue(FString PropertyName, int32_t LODIndex, FVector Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7521E7F64(relative to base address)
		void SetStringValue(FString PropertyName, int32_t LODIndex, FString Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7D90(relative to base address)
		void SetLowFloatValue(FString PropertyName, int32_t LODIndex, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7C78(relative to base address)
		void SetIntValue(FString PropertyName, int32_t LODIndex, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E7ABC(relative to base address)
		void SetHighFloatValue(FString PropertyName, int32_t LODIndex, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E79A4(relative to base address)
		void SetFloatValue(FString PropertyName, int32_t LODIndex, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521E788C(relative to base address)
		FVector2D GetWeightedFloatValue(FString PropertyName, int32_t LODIndex, FVector2D DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E7388(relative to base address)
		FVector GetVectorValue(FString PropertyName, int32_t LODIndex, FVector DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E71AC(relative to base address)
		FString GetStringValue(FString PropertyName, int32_t LODIndex, FString DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E7008(relative to base address)
		float GetLowFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E6C70(relative to base address)
		int32_t GetIntValue(FString PropertyName, int32_t LODIndex, int32_t DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E6EA8(relative to base address)
		float GetHighFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E6D8C(relative to base address)
		float GetFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E6C70(relative to base address)
		TArray GetAllProperties(int32_t LODIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7521E6B90(relative to base address)
	};

}
