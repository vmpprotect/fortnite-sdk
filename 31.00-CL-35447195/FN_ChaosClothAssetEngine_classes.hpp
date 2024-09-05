#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosClothAssetEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData02_5[0x3]; // 0x8B9(0x3) UNKNOWN PROPERTY
		float BlendWeight; // 0x8BC(0x4)
		UChaosClothAssetInteractor ClothOutfitInteractor; // 0x8C0(0x8)
		unsigned char UnknownData03_7[0x58]; // 0x8C8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosClothAssetEngine.ChaosClothComponent");
			return ret;
		}

		void SuspendSimulation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC6660
		void SetEnableSimulation(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC6580
		void SetClothAsset(UChaosClothAsset InClothAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC64A0
		void ResumeSimulation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC63C0
		void ResetTeleportMode(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC62E0
		void ResetConfigProperties(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC6200
		void ResetCollisionSources(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC6120
		void RemoveCollisionSources(USkinnedMeshComponent SourceComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC6040
		void RemoveCollisionSource(USkinnedMeshComponent SourceComponent, UPhysicsAsset SourcePhysicsAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC5F60
		void RecreateClothSimulationProxy(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC5E80
		bool IsSimulationSuspended(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC5DA0
		bool IsSimulationEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC5CC0
		UChaosClothAssetInteractor GetClothOutfitInteractor(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC5BE0
		UChaosClothAsset GetClothAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC5B00
		void ForceNextUpdateTeleportAndReset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC5A20
		void ForceNextUpdateTeleport(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC5940
		void AddCollisionSource(USkinnedMeshComponent SourceComponent, UPhysicsAsset SourcePhysicsAsset, bool bUseSphylsOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC5860
	};


	// Class ChaosClothAssetEngine.ChaosClothAsset
	// Inherited from USkinnedAsset -> UStreamableRenderAsset -> UObject
	// Size: 0x2A0 (0x370 - 0xD0)
	class UChaosClothAsset : public USkinnedAsset	
	{
	public:
		unsigned char UnknownData05_3[0x20]; // 0xD0(0x20) UNKNOWN PROPERTY
		UDataflow DataflowAsset; // 0xF0(0x8)
		FString DataflowTerminal; // 0xF8(0x10)
		TArray Materials; // 0x108(0x10)
		USkeleton Skeleton; // 0x118(0x8)
		UPhysicsAsset PhysicsAsset; // 0x120(0x8)
		TArray LODInfo; // 0x128(0x10)
		FPerQualityLevelInt MinQualityLevelLOD; // 0x138(0x68)
		FPerPlatformBool DisableBelowMinLodStripping; // 0x1A0(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		FPerPlatformInt MinLOD; // 0x1A4(0x4)
		bool bSupportRayTracing : 1; // 0x1A8:0(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x1A9(0x3) UNKNOWN PROPERTY
		int32_t RayTracingMinLOD; // 0x1AC(0x4)
		bool bSmoothTransition; // 0x1B0(0x1)
		bool bUseMultipleInfluences; // 0x1B1(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x1B2(0x2) UNKNOWN PROPERTY
		float SkinningKernelRadius; // 0x1B4(0x4)
		UPhysicsAsset ShadowPhysicsAsset; // 0x1B8(0x8)
		FGuid AssetGuid; // 0x1C0(0x10)
		unsigned char UnknownData09_7[0x1A0]; // 0x1D0(0x1A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosClothAssetEngine.ChaosClothAsset");
			return ret;
		}

		UPhysicsAsset GetShadowPhysicsAsset(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6740
	};


	// Class ChaosClothAssetEngine.ChaosClothAssetInteractor
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UChaosClothAssetInteractor : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosClothAssetEngine.ChaosClothAssetInteractor");
			return ret;
		}

		void SetWeightedFloatValue(FString PropertyName, int32_t LODIndex, FVector2D Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414EC7460
		void SetVectorValue(FString PropertyName, int32_t LODIndex, FVector Value); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414EC7380
		void SetStringValue(FString PropertyName, int32_t LODIndex, FString Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC72A0
		void SetLowFloatValue(FString PropertyName, int32_t LODIndex, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC71C0
		void SetIntValue(FString PropertyName, int32_t LODIndex, int32_t Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC70E0
		void SetHighFloatValue(FString PropertyName, int32_t LODIndex, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC7000
		void SetFloatValue(FString PropertyName, int32_t LODIndex, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC6F20
		FVector2D GetWeightedFloatValue(FString PropertyName, int32_t LODIndex, FVector2D DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6E40
		FVector GetVectorValue(FString PropertyName, int32_t LODIndex, FVector DefaultValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6D60
		FString GetStringValue(FString PropertyName, int32_t LODIndex, FString DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6C80
		float GetLowFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6BA0
		int32_t GetIntValue(FString PropertyName, int32_t LODIndex, int32_t DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6AC0
		float GetHighFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC69E0
		float GetFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6900
		TArray GetAllProperties(int32_t LODIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC6820
	};

}
