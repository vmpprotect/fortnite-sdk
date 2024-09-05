#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VehicleCosmeticsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VehicleCosmeticsRuntime.FortItemVehiclePreviewActor
	// Inherited from AFortItemPreviewMultiAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0xA0 (0x640 - 0x5A0)
	class AFortItemVehiclePreviewActor : public AFortItemPreviewMultiAngleActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x5A0(0x8) UNKNOWN PROPERTY
		UCameraComponent* ZoomedOutVehicleCameraComponent; // 0x5A8(0x8)
		UCameraComponent* ZoomedInVehicleCameraComponent; // 0x5B0(0x8)
		UCameraComponent* ZoomedOutWheelCameraComponent; // 0x5B8(0x8)
		UCameraComponent* ZoomedInWheelCameraComponent; // 0x5C0(0x8)
		UCameraComponent* ZoomedOutBoostCameraComponent; // 0x5C8(0x8)
		UCameraComponent* ZoomedInBoostCameraComponent; // 0x5D0(0x8)
		UCameraComponent* ZoomedOutDriftTrailCameraComponent; // 0x5D8(0x8)
		UCameraComponent* ZoomedInDriftTrailCameraComponent; // 0x5E0(0x8)
		bool bUseSingleConfiguredCamera; // 0x5E8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5E9(0x3) UNKNOWN PROPERTY
		float FrameSettingHeightOffset; // 0x5EC(0x4)
		float FrameSettingExpansionOffset; // 0x5F0(0x4)
		EFortUICameraFrameTargetBoundingBehavior FrameSettingBoundingBehavior; // 0x5F4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5F5(0x3) UNKNOWN PROPERTY
		float FrameSettingZoomInBoundsScale; // 0x5F8(0x4)
		bool bOverrideTargetBounds; // 0x5FC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5FD(0x3) UNKNOWN PROPERTY
		FFortUICameraFrameTargetBounds OverrideTargetBounds; // 0x600(0x20)
		UChildActorComponent* PreviewVehicleActorComponent; // 0x620(0x8)
		AVehicleCosmeticsPreviewVehicle* PreviewVehicleActor; // 0x628(0x8)
		unsigned char UnknownData04_7[0x10]; // 0x630(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor");
			return ret;
		}

		void HandleVehicleCosmeticsReady(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505C0204(relative to base address)
		void HandleDriftTrailStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505BFE30(relative to base address)
		void HandleBoostStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505BFDF4(relative to base address)
		void HandleBoostFinished(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505BFDE0(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsLevelPreviewActor
	// Inherited from AActor -> UObject
	// Size: 0x150 (0x3E0 - 0x290)
	class AFortVehicleCosmeticsLevelPreviewActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x290(0x48) UNKNOWN PROPERTY
		UFortVehicleCosmeticsItemDefinition_Body* BodyAsset; // 0x2D8(0x8)
		UFortVehicleCosmeticsItemDefinition_Booster* BoosterAsset; // 0x2E0(0x8)
		UFortVehicleCosmeticsItemDefinition_DriftTrail* DriftTrailAsset; // 0x2E8(0x8)
		UFortVehicleCosmeticsItemDefinition_Skin* SkinAsset; // 0x2F0(0x8)
		UFortVehicleCosmeticsItemDefinition_Wheel* WheelAsset; // 0x2F8(0x8)
		AFortItemVehiclePreviewActor* CosmeticsPreviewActor; // 0x300(0x8)
		UVehicleCosmeticsItemDefinition_Body* BodyItemDef; // 0x308(0x8)
		UVehicleCosmeticsItemDefinition_Booster* BoosterItemDef; // 0x310(0x8)
		UVehicleCosmeticsItemDefinition_DriftTrail* DriftTrailItemDef; // 0x318(0x8)
		UVehicleCosmeticsItemDefinition_Skin* SkinItemDef; // 0x320(0x8)
		UVehicleCosmeticsItemDefinition_Wheel* WheelItemDef; // 0x328(0x8)
		bool bEnableBoost : 1; // 0x330:0(0x1)
		bool bEnableDriftTrail : 1; // 0x330:1(0x1)
		bool bEnableAsynchronousLoading : 1; // 0x330:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x331(0x3) UNKNOWN PROPERTY
		FLinearColor BodyColor; // 0x334(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x344(0x4) UNKNOWN PROPERTY
		FString BodyPaintName; // 0x348(0x10)
		FLinearColor SkinColor; // 0x358(0x10)
		FString SkinName; // 0x368(0x10)
		FString SkinPaintName; // 0x378(0x10)
		FString WheelPaintName; // 0x388(0x10)
		bool bCreateBodyPaintedVariants : 1; // 0x398:0(0x1)
		bool bCreateSkinPaintedVariants : 1; // 0x398:1(0x1)
		bool bCreateWheelPaintedVariants : 1; // 0x398:2(0x1)
		unsigned char UnknownData03_5[0x7]; // 0x399(0x7) UNKNOWN PROPERTY
		TArray<FFortVehicleCosmeticsLevelPreviewPaintedVariantCollection> PaintedVariantCollections; // 0x3A0(0x10)
		unsigned char UnknownData04_7[0x30]; // 0x3B0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsLevelPreviewActor");
			return ret;
		}

		void TryRebuildCosmetics(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7505C0D24(relative to base address)
		void SetWheelPaintName(FString NewWheelPaintName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C0C88(relative to base address)
		void SetWheelAsset(UFortVehicleCosmeticsItemDefinition_Wheel* NewWheelAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C0A68(relative to base address)
		void SetSkinPaintName(FString NewSkinPaintName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C0870(relative to base address)
		void SetSkinAsset(UFortVehicleCosmeticsItemDefinition_Skin* NewSkinAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C07D4(relative to base address)
		void SetDriftTrailEnabled(bool bEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C0754(relative to base address)
		void SetDriftTrailAsset(UFortVehicleCosmeticsItemDefinition_DriftTrail* NewDriftTrailAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C06C0(relative to base address)
		void SetBoosterEnabled(bool bEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C0640(relative to base address)
		void SetBoosterAsset(UFortVehicleCosmeticsItemDefinition_Booster* NewBoosterAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C05AC(relative to base address)
		void SetBodyPaintName(FString NewBodyPaintName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C0510(relative to base address)
		void SetBodyAsset(UFortVehicleCosmeticsItemDefinition_Body* NewBodyAsset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C0474(relative to base address)
		TArray GetPossibleSkinNames(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505BFD38(relative to base address)
		TArray GetPossiblePaintNames(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505BFCA8(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsAIControllerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleCosmeticsAIControllerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsAIControllerInterface");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsEditorPreviewSettings
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UVehicleCosmeticsEditorPreviewSettings : public UObject	
	{
	public:
		TArray<FVehicleCosmeticsEditorPreviewSlotInfo> PreviewSlotInfos; // 0x28(0x10)
		TWeakObjectPtr<UClass*> FortItemVehiclePreviewClass; // 0x38(0x20)
		TWeakObjectPtr<UClass*> FortVehicleCosmeticsLevelPreviewClass; // 0x58(0x20)
		TWeakObjectPtr<UClass*> VehicleCosmeticsPreviewClass; // 0x78(0x20)
		TWeakObjectPtr<UDataTable*> PaintTable; // 0x98(0x20)
		FGameplayTag BodySchemaTag; // 0xB8(0x4)
		FGameplayTag WheelSchemaTag; // 0xBC(0x4)
		FGameplayTag PaintedVariantChannelTag; // 0xC0(0x4)
		FGameplayTag PaintedVariantNameTag; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsEditorPreviewSettings");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsPreviewConfigs
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UVehicleCosmeticsPreviewConfigs : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr<UClass*> VehiclePreviewActorClass; // 0x30(0x20)
		TWeakObjectPtr<UClass*> DefaultBoostPreviewActorClass; // 0x50(0x20)
		TWeakObjectPtr<UClass*> DefaultTrailPreviewActorClass; // 0x70(0x20)
		TWeakObjectPtr<UClass*> VehiclePreviewPrefabAssetClass; // 0x90(0x20)
		TWeakObjectPtr<UFortVehicleCosmeticsItemDefinition_Body*> VehiclePreviewDefaultPreviewBody; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewConfigs");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle
	// Inherited from AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0xC0 (0x21D0 - 0x2110)
	class AVehicleCosmeticsPreviewVehicle : public AFortAthenaSKVehicle	
	{
	public:
		unsigned char UnknownData00_1[0xC0]; // 0x2110(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle");
			return ret;
		}

		void HandleOnVehicleCosmeticsFinished(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505C0170(relative to base address)
		void HandleOnDriftTrailApplied(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505C0098(relative to base address)
		void HandleOnBoostApplied(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505C0084(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleCosmeticsBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary");
			return ret;
		}

		int32_t GetMaxSignificanceLOD_RearWheelDriftFX(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7505BFC90(relative to base address)
		int32_t GetMaxSignificanceLOD_Generic(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7505BFC78(relative to base address)
		int32_t GetMaxSignificanceLOD_FrontWheelDriftFX(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7505BFC60(relative to base address)
		int32_t GetMaxSignificanceLOD_BoostFX(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7505BFC48(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition
	// Inherited from UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xA0 (0x538 - 0x498)
	class UFortVehicleCosmeticsItemDefinition : public UAthenaCosmeticItemDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x498(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UVehicleCosmeticsItemDefinition*> VehicleCosmeticsItemDef; // 0x4A0(0x20)
		TArray<TWeakObjectPtr> VehicleCosmeticsItemDefForTiers; // 0x4C0(0x10)
		FGameplayTag ItemTypeTag; // 0x4D0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4D4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UVehicleCosmeticsPreviewConfigs*> PreviewConfig; // 0x4D8(0x20)
		TArray<FVehicleCosmeticsRestrictionDefinition> RestrictionDefinitions; // 0x4F8(0x10)
		TWeakObjectPtr<UFortVehicleCosmeticsItemDefinition*> ItemPreviewVehicleBody; // 0x508(0x20)
		TArray<FCosmeticCustomizationInfo> ItemPreviewBodyVariantOverrides; // 0x528(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Body
	// Inherited from UFortVehicleCosmeticsItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x538 - 0x538)
	class UFortVehicleCosmeticsItemDefinition_Body : public UFortVehicleCosmeticsItemDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Body");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Booster
	// Inherited from UFortVehicleCosmeticsItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x538 - 0x538)
	class UFortVehicleCosmeticsItemDefinition_Booster : public UFortVehicleCosmeticsItemDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Booster");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_DriftTrail
	// Inherited from UFortVehicleCosmeticsItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x538 - 0x538)
	class UFortVehicleCosmeticsItemDefinition_DriftTrail : public UFortVehicleCosmeticsItemDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_DriftTrail");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_EngineAudio
	// Inherited from UFortVehicleCosmeticsItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x538 - 0x538)
	class UFortVehicleCosmeticsItemDefinition_EngineAudio : public UFortVehicleCosmeticsItemDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_EngineAudio");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Skin
	// Inherited from UFortVehicleCosmeticsItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x538 - 0x538)
	class UFortVehicleCosmeticsItemDefinition_Skin : public UFortVehicleCosmeticsItemDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Skin");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Wheel
	// Inherited from UFortVehicleCosmeticsItemDefinition -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x538 - 0x538)
	class UFortVehicleCosmeticsItemDefinition_Wheel : public UFortVehicleCosmeticsItemDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Wheel");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.FortVehicleCosmeticsVariantTokenType
	// Inherited from UFortVariantTokenType -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortVehicleCosmeticsVariantTokenType : public UFortVariantTokenType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsVariantTokenType");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UPlayerCustomizableObjectCacheComponent : public UPlayerStateComponent	
	{
	public:
		TMap<UClass*, UCustomizableObjectInstance*> CachedInstanceMap; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent");
			return ret;
		}

		void OnSeamlessTravelStart(UWorld* CurrentWorld, FString LevelName); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7505C03A8(relative to base address)
		void OnPlayerDisconnected(AFortPlayerStateAthena* PlayerState, bool bIsDisconnected); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7505C02E0(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleCosmeticsActorSpawnLogic : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachTo
	// Inherited from UVehicleCosmeticsActorSpawnLogic -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UVehicleCosmeticsActorSpawnLogic_AttachTo : public UVehicleCosmeticsActorSpawnLogic	
	{
	public:
		FName AttachSocket; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachTo");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachToEach
	// Inherited from UVehicleCosmeticsActorSpawnLogic -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UVehicleCosmeticsActorSpawnLogic_AttachToEach : public UVehicleCosmeticsActorSpawnLogic	
	{
	public:
		TArray<FName> AttachSockets; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachToEach");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_Booster
	// Inherited from UVehicleCosmeticsActorSpawnLogic -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleCosmeticsActorSpawnLogic_Booster : public UVehicleCosmeticsActorSpawnLogic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_Booster");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsActor
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AVehicleCosmeticsActor : public AActor	
	{
	public:
		UVehicleCosmeticsActorSpawnLogic* SpawnLogic; // 0x290(0x8)
		TArray<UClass*> CosmeticDependencies; // 0x298(0x10)
		TScriptInterface<Class> VehicleInterface; // 0x2A8(0x10)
		TScriptInterface<Class> VehicleCosmeticsInterface; // 0x2B8(0x10)
		UActorComponent* VehicleCosmeticComponent; // 0x2C8(0x8)
		FName SocketAttachedTo; // 0x2D0(0x4)
		int32_t BoosterPortsNum; // 0x2D4(0x4)
		UClass* BoostAGBClass; // 0x2D8(0x8)
		UAudioGameplayBehavior* BoostAGBComponent; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor");
			return ret;
		}

		USkeletalMeshComponent GetBodyMeshComponent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505BFBA8(relative to base address)
		void DriftStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505BFB6C(relative to base address)
		void DriftFinished(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505BFB58(relative to base address)
		void ColorReady(FName InColor, FVehicleCosmeticsAdditionalParameterInfos& InInfo); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7505BF518(relative to base address)
		void BP_OnVehicleWheelsLeftGround(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleLanded(float LandingForced, bool bLandedKickflip); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCosmeticApplied(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnColorReady(FName Color, FVehicleCosmeticsAdditionalParameterInfos AdditionalInfo); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBoostStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBoostFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBonusSpeedDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBonusSpeedActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoostStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505BF3F0(relative to base address)
		void BoostFinished(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505BF3DC(relative to base address)
		void ApplyCosmetic(); // Flags: Native|Public, Memory Exec: 0x7FF747E38E94(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsAnimInstance
	// Inherited from UVehicleBouncyChassisAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xA8 (0x950 - 0x8A8)
	class UVehicleCosmeticsAnimInstance : public UVehicleBouncyChassisAnimInstance	
	{
	public:
		bool bDriftBoostActive; // 0x8A8(0x1)
		bool bUnderthrustActive; // 0x8A9(0x1)
		bool bDriftActive; // 0x8AA(0x1)
		bool bKickflipActive; // 0x8AB(0x1)
		bool bJumpActive; // 0x8AC(0x1)
		bool bTurboActive; // 0x8AD(0x1)
		bool bStartlineBoostActive; // 0x8AE(0x1)
		bool bDraftingActive; // 0x8AF(0x1)
		bool bWorldBonusSpeedApplied; // 0x8B0(0x1)
		bool bHasTireMod; // 0x8B1(0x1)
		bool bIsBoosting; // 0x8B2(0x1)
		bool bShouldWheelSpinForPreview; // 0x8B3(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x8B4(0x4) UNKNOWN PROPERTY
		FVehicleCosmeticsAnimPreviewSettings PreviewSettings; // 0x8B8(0x58)
		float PreviewWheelSpin; // 0x910(0x4)
		bool bCanEnterTransition_IdleToBoostStart; // 0x914(0x1)
		bool bCanEnterTransition_BoostStartToBoostLoop; // 0x915(0x1)
		bool bCanEnterTransition_BoostLoopToBoostEnd; // 0x916(0x1)
		bool bCanEnterTransition_BoostEndToIdle; // 0x917(0x1)
		FCachedAnimRelevancyData BoostStartToBoostLoopRelevancyData; // 0x918(0x14)
		FCachedAnimRelevancyData BoostEndToIdleRelevancyData; // 0x92C(0x14)
		float BoostStartToBoostLoopRemainingTimeThreshold; // 0x940(0x4)
		float BoostEndToIdleRemainingTimeThreshold; // 0x944(0x4)
		UVehicleCosmeticsAssembledMeshUserComponent* CachedCosmeticsComponent; // 0x948(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimInstance");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent
	// Inherited from UAssembledMeshUserComponent -> UActorComponent -> UObject
	// Size: 0x658 (0x750 - 0xF8)
	class UVehicleCosmeticsAssembledMeshUserComponent : public UAssembledMeshUserComponent	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0xF8(0x28) UNKNOWN PROPERTY
		UCustomizableObjectInstance* TempCustomizableObjectInstance; // 0x120(0x8)
		unsigned char UnknownData01_6[0x20]; // 0x128(0x20) UNKNOWN PROPERTY
		FReplicatedCosmeticLoadoutData OwningCosmeticLoadoutData; // 0x148(0x18)
		unsigned char UnknownData02_6[0x10]; // 0x160(0x10) UNKNOWN PROPERTY
		TArray<FVehicleCosmeticsDefaultLoadoutInfo> DefaultLoadoutInfos; // 0x170(0x10)
		unsigned char UnknownData03_6[0x1]; // 0x180(0x1) UNKNOWN PROPERTY
		bool bVehicleCosmeticsEnabled; // 0x181(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x182(0x6) UNKNOWN PROPERTY
		TArray<AVehicleCosmeticsActor*> SpawnedCosmeticActors_Body; // 0x188(0x10)
		TArray<AVehicleCosmeticsActor*> SpawnedCosmeticActors_Wheel; // 0x198(0x10)
		TArray<AVehicleCosmeticsActor*> SpawnedCosmeticActors_Booster; // 0x1A8(0x10)
		TArray<AVehicleCosmeticsActor*> SpawnedCosmeticActors_DriftTrail; // 0x1B8(0x10)
		TArray<AVehicleCosmeticsActor*> SpawnedCosmeticActors_Skin; // 0x1C8(0x10)
		TMap<FName, bool> HasBeenCustomizedMap; // 0x1D8(0x50)
		TMap<int32_t, UAssembledMeshSchema*> MeshPartDataMap; // 0x228(0x50)
		unsigned char UnknownData05_6[0x388]; // 0x278(0x388) UNKNOWN PROPERTY
		TArray<FTirePopReplacementInfo> TirePopReplacementInfos; // 0x600(0x10)
		FGameplayTagQuery LoadoutSlotTagQuery; // 0x610(0x48)
		unsigned char UnknownData06_6[0x8]; // 0x658(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCosmeticActorSpawned; // 0x660(0x10)
		FScalableFloat CustomizationEnabled; // 0x670(0x28)
		FScalableFloat CosmeticsLoadoutFXLoopTime; // 0x698(0x28)
		FMulticastInlineDelegate OnEngineAudioUpdated; // 0x6C0(0x10)
		FMulticastInlineDelegate OnVehicleCosmeticsFailed; // 0x6D0(0x10)
		unsigned char UnknownData07_7[0x70]; // 0x6E0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent");
			return ret;
		}

		void VehicleEngineAudioCosmeticUpdated__DelegateSignature(TWeakObjectPtr<UVehicleCosmeticsItemDefinition_EngineAudio*> Item); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VehicleCosmeticsOnCosmeticItemSpawned__DelegateSignature(AVehicleCosmeticsActor* CosmeticActor); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetVehicleCosmeticsEnabled(bool bEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505C090C(relative to base address)
		void OnVehicleCosmeticsFailed__DelegateSignature(FVehicleCosmeticsFailureInfo ReasonInfo); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_OwningCosmeticsLoadoutData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748178BD0(relative to base address)
		void HandleTireRepaired(int32_t TireIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7505C0184(relative to base address)
		void HandleTirePopped(int32_t TireIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7493F0E1C(relative to base address)
		void HandleOnExplode(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7505C00AC(relative to base address)
		void HandleModApplied(AFortAthenaVehicle* Vehicle, FGameplayTag& ModTag); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7505BFED8(relative to base address)
		void HandleForceApplyVehicleCosmetics(FSpawnerInfoForcedCosmetics& ForcedCosmetics); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7505BFE44(relative to base address)
		void HandleDriftStarted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505BFE1C(relative to base address)
		void HandleDriftFinished(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505BFE08(relative to base address)
		void HandleBoostStarted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7491CF398(relative to base address)
		void HandleBoostFinished(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7491F03B4(relative to base address)
		void HandleBodyPhysicsChanges(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7505BFDCC(relative to base address)
		void HandleBeginVehicleCosmetics(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7490623A4(relative to base address)
		void ClientOnCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo); // Flags: Final|RequiredAPI|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF7505BF404(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleCosmeticsCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager");
			return ret;
		}

		void VehicleCosmeticsDriftEnabled(bool bNewValue); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF7505C0D38(relative to base address)
		void SetVehicleCosmeticsLoadout_WheelPainted(FString PaintName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_Wheel(FString WheelName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_SkinPainted(FString PaintName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_SkinColor(FString SkinColor, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_Skin(FString SkinName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_DriftTrailPainted(FString PaintName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_DriftTrail(FString DriftSmokeName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_BoosterPainted(FString PaintName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_Booster(FString BoosterName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_BodyPainted(FString PaintName, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_BodyColor(FString BodyColor, FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505C0994(relative to base address)
		void SetVehicleCosmeticsLoadout_Body(FString BodyName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void SetVehicleCosmeticsLoadout(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505BF62C(relative to base address)
		void SetVehicleCosmetics_DriftTrailPainted(FString PaintName); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void SetVehicleCosmetics_BoosterPainted(FString PaintName); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void SetVehicleActiveArchetype(FName VehicleArchetypeTagName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void GrantVehicleCosmeticsLoadedAssets(FString CheatName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void DumpVehicleCosmeticsPhysicsShapeCollision(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF7505BFB94(relative to base address)
		void DumpVehicleCosmeticsLoadedAssetVariantTokenTypes(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DumpVehicleCosmeticsLoadedAssetTemplateIds(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DumpVehicleCosmeticsLoadedAssetSkeletalMeshes(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DumpVehicleCosmeticsLoadedAssetCheatNames(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DumpVehicleCosmeticsComponents(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF7505BFB80(relative to base address)
		void CustomizeVehicle(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505BF62C(relative to base address)
		void CustomizeAllVehicles(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505BF62C(relative to base address)
		void ClearVehicleCosmeticsLoadout(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleCosmeticsInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface");
			return ret;
		}

		bool ShouldWheelSpinForPreview(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E260A0C(relative to base address)
		bool IsUnderthrustActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505C02B8(relative to base address)
		bool IsTurboActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505C0290(relative to base address)
		bool IsStartlineBoostActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505C0268(relative to base address)
		bool IsKickflipActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505C0240(relative to base address)
		bool IsJumpAbilityActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505C0218(relative to base address)
		bool IsDrifting(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749ACFF0C(relative to base address)
		bool IsDriftBoostActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEDDEA0(relative to base address)
		TArray GetWheelSkeletalMeshComponents(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7481519C8(relative to base address)
		FName GetWheelItemName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505BFDA0(relative to base address)
		FName GetTurboItemName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505BFD74(relative to base address)
		FName GetDriftTrailItemName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505BFC1C(relative to base address)
		float GetDraftingAppliedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505BFBF0(relative to base address)
		FName GetBodyItemName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7492E2CAC(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition
	// Inherited from UAssembledMeshSchema -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x30 (0x210 - 0x1E0)
	class UVehicleCosmeticsItemDefinition : public UAssembledMeshSchema	
	{
	public:
		TArray<TWeakObjectPtr> CosmeticAttachments; // 0x1E0(0x10)
		TArray<FVehicleCosmeticsCosmeticAttachmentQueryInfo> CosmeticAttachmentQueryInfos; // 0x1F0(0x10)
		TArray<FString> CheatNames; // 0x200(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Body
	// Inherited from UVehicleCosmeticsItemDefinition -> UAssembledMeshSchema -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x1E8 (0x3F8 - 0x210)
	class UVehicleCosmeticsItemDefinition_Body : public UVehicleCosmeticsItemDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x210(0x8) UNKNOWN PROPERTY
		FVehicleCosmeticsCustomizableObjectIntInfo BodyGroup; // 0x218(0x8)
		FName SkinDataTableParameterName; // 0x220(0x4)
		FName BodyColorParameterName; // 0x224(0x4)
		FName SkinColorParameterName; // 0x228(0x4)
		FName PaintedDataTableParameterName; // 0x22C(0x4)
		TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> AdditionalVariantInfos; // 0x230(0x50)
		TArray<FVehicleCosmeticsBodyPhysicsQueryInfo> PhysicsQueryInfos; // 0x280(0x10)
		TArray<FVehicleCosmeticsAnimInfo> AnimInfos; // 0x290(0x10)
		TWeakObjectPtr<USkeleton*> WheelAttachSkeletonReference; // 0x2A0(0x20)
		TArray<FWheelAttachInfo> WheelAttachInfos; // 0x2C0(0x10)
		TWeakObjectPtr<USkeleton*> BoosterAttachSkeletonReference; // 0x2D0(0x20)
		TArray<FBoosterAttachInfo> BoosterAttachInfos; // 0x2F0(0x10)
		TWeakObjectPtr<UVehicleCosmeticsItemDefinition_Wheel*> DefaultWheelItemDef; // 0x300(0x20)
		FDataTableRowHandle DefaultSkinRow; // 0x320(0x10)
		TWeakObjectPtr<UVehicleCosmeticsItemDefinition_EngineAudio*> AudioData; // 0x330(0x20)
		FGameplayTagQuery BodyTypeTagQuery; // 0x350(0x48)
		FGameplayTagContainer TagsToAdd; // 0x398(0x20)
		FGameplayTagContainer TagsToRemove; // 0x3B8(0x20)
		TArray<FVehicleCosmeticsBodyWindowQueryInfo> WindowQueryInfos; // 0x3D8(0x10)
		TArray<FVehicleCosmeticsBodyAttachmentQueryInfo> BodyAttachmentQueryInfos; // 0x3E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Body");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Booster
	// Inherited from UVehicleCosmeticsItemDefinition -> UAssembledMeshSchema -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x260 - 0x210)
	class UVehicleCosmeticsItemDefinition_Booster : public UVehicleCosmeticsItemDefinition	
	{
	public:
		TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> AdditionalVariantInfos; // 0x210(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Booster");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_DriftTrail
	// Inherited from UVehicleCosmeticsItemDefinition -> UAssembledMeshSchema -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x260 - 0x210)
	class UVehicleCosmeticsItemDefinition_DriftTrail : public UVehicleCosmeticsItemDefinition	
	{
	public:
		TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> AdditionalVariantInfos; // 0x210(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_DriftTrail");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleAudioCosmeticData
	// Inherited from UDataAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UVehicleAudioCosmeticData : public UDataAsset	
	{
	public:
		TWeakObjectPtr<USoundBase*> EngineSound; // 0x30(0x20)
		TWeakObjectPtr<USoundBase*> EngineSound_LowSpec; // 0x50(0x20)
		USoundBase* EngineIgnitionSound; // 0x70(0x8)
		USoundBase* EngineOffSound; // 0x78(0x8)
		USoundBase* HornSound; // 0x80(0x8)
		bool bIsIP; // 0x88(0x1)
		bool bCanIgnoreLoadManagement; // 0x89(0x1)
		bool bIgnoreShifting; // 0x8A(0x1)
		bool bIgnoreExhaustPops; // 0x8B(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticData");
			return ret;
		}

		TWeakObjectPtr GetEngineSound(bool bHighSpec); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7485EB084(relative to base address)
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_EngineAudio
	// Inherited from UVehicleCosmeticsItemDefinition -> UAssembledMeshSchema -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x230 - 0x210)
	class UVehicleCosmeticsItemDefinition_EngineAudio : public UVehicleCosmeticsItemDefinition	
	{
	public:
		TWeakObjectPtr<UVehicleAudioCosmeticData*> Data; // 0x210(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_EngineAudio");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Skin
	// Inherited from UVehicleCosmeticsItemDefinition -> UAssembledMeshSchema -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x40 (0x250 - 0x210)
	class UVehicleCosmeticsItemDefinition_Skin : public UVehicleCosmeticsItemDefinition	
	{
	public:
		bool bLockColor; // 0x210(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x211(0x3) UNKNOWN PROPERTY
		FLinearColor LockedBodyColor; // 0x214(0x10)
		FLinearColor LockedSkinColor; // 0x224(0x10)
		FName PaintedDataTableParameterName; // 0x234(0x4)
		FName PaintedEnumParameterName; // 0x238(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
		TArray<FVehicleCosmeticsAdditionalParameterInfos> AdditionalSkinInfos; // 0x240(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Skin");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Wheel
	// Inherited from UVehicleCosmeticsItemDefinition -> UAssembledMeshSchema -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x98 (0x2A8 - 0x210)
	class UVehicleCosmeticsItemDefinition_Wheel : public UVehicleCosmeticsItemDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x210(0x8) UNKNOWN PROPERTY
		FVehicleCosmeticsCustomizableObjectIntInfo WheelGroup; // 0x218(0x8)
		FName PaintedDataTableParameterName; // 0x220(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x224(0x4) UNKNOWN PROPERTY
		FInstancedStruct WheelTirePoppedInfo; // 0x228(0x10)
		TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> AdditionalVariantInfos; // 0x238(0x50)
		TArray<FVehicleCosmeticsAnimInfo> AnimInfos; // 0x288(0x10)
		TArray<FWheelSetupInfo> WheelSetupInfos; // 0x298(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Wheel");
			return ret;
		}
	};


	// Class VehicleCosmeticsRuntime.VehicleCosmeticsWheelAnimInstance
	// Inherited from UVehicleCosmeticsAnimInstance -> UVehicleBouncyChassisAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x70 (0x9C0 - 0x950)
	class UVehicleCosmeticsWheelAnimInstance : public UVehicleCosmeticsAnimInstance	
	{
	public:
		FRotator SpinnerSpin; // 0x950(0x18)
		unsigned char UnknownData00_7[0x58]; // 0x968(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleCosmeticsRuntime.VehicleCosmeticsWheelAnimInstance");
			return ret;
		}
	};

}
