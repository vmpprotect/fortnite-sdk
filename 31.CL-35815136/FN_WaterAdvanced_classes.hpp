#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WaterAdvanced
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WaterAdvanced.ShallowWaterPhysicsAssetOverridesDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UShallowWaterPhysicsAssetOverridesDataAsset : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, FShallowWaterPhysicsAssetOverride> Overrides; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WaterAdvanced.ShallowWaterPhysicsAssetOverridesDataAsset");
			return ret;
		}
	};


	// Class WaterAdvanced.ShallowWaterRiverComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x5D0 - 0x4C8)
	class UShallowWaterRiverComponent : public UPrimitiveComponent	
	{
	public:
		UNiagaraSystem* NiagaraRiverSimulation; // 0x4C8(0x8)
		int32_t ResolutionMaxAxis; // 0x4D0(0x4)
		float SourceSize; // 0x4D4(0x4)
		float SimSpeed; // 0x4D8(0x4)
		int32_t NumSteps; // 0x4DC(0x4)
		AWaterBody* SourceRiverWaterBody; // 0x4E0(0x8)
		AWaterBody* SinkRiverWaterBody; // 0x4E8(0x8)
		TArray<AWaterBody*> AdditonalRiverWaterBodies; // 0x4F0(0x10)
		bool PreviewBakedSim; // 0x500(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x501(0x7) UNKNOWN PROPERTY
		UTexture2D* BakedWaterSurfaceTexture; // 0x508(0x8)
		TArray<AActor*> BottomContourActors; // 0x510(0x10)
		float BottomContourCaptureOffset; // 0x520(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		UNiagaraComponent* RiverSimSystem; // 0x528(0x8)
		UTextureRenderTarget2D* WaterInfoTexture; // 0x530(0x8)
		UTextureRenderTarget2D* BakedWaterSurfaceRT; // 0x538(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x540(0x8) UNKNOWN PROPERTY
		TSet<AWaterBody*> AllWaterBodies; // 0x548(0x50)
		FVector2D WorldGridSize; // 0x598(0x10)
		FVector SystemPos; // 0x5A8(0x18)
		TArray<FVector4> ShallowWaterSimArrayValues; // 0x5C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WaterAdvanced.ShallowWaterRiverComponent");
			return ret;
		}
	};


	// Class WaterAdvanced.ShallowWaterRiver
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AShallowWaterRiver : public AActor	
	{
	public:
		UShallowWaterRiverComponent* ShallowWaterRiverComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WaterAdvanced.ShallowWaterRiver");
			return ret;
		}
	};


	// Class WaterAdvanced.ShallowWaterSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xB0 (0xE0 - 0x30)
	class UShallowWaterSettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr<UNiagaraSystem*> DefaultShallowWaterNiagaraSimulation; // 0x30(0x20)
		TWeakObjectPtr<UNiagaraDataChannelAsset*> DefaultShallowWaterCollisionNDC; // 0x50(0x20)
		FShallowWaterSimParameters ShallowWaterSimParameters; // 0x70(0x8)
		TWeakObjectPtr<UMaterialParameterCollection*> WaterMPC; // 0x78(0x20)
		FName GridCenterMPCName; // 0x98(0x4)
		FName WorldGridSizeMPCName; // 0x9C(0x4)
		FName ResolutionMaxAxisMPCName; // 0xA0(0x4)
		FName NormalRTMaterialName; // 0xA4(0x4)
		bool UseDefaultShallowWaterSubsystem; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t MaxActivePawnNum; // 0xAC(0x4)
		int32_t MaxImpulseForceNum; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UShallowWaterPhysicsAssetOverridesDataAsset*> PhysicsAssetProxiesDataAsset; // 0xB8(0x20)
		bool bVisualizeActivePawn; // 0xD8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WaterAdvanced.ShallowWaterSettings");
			return ret;
		}
	};


	// Class WaterAdvanced.ShallowWaterSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1D8 (0x218 - 0x40)
	class UShallowWaterSubsystem : public UTickableWorldSubsystem	
	{
	public:
		UNiagaraComponent* ShallowWaterNiagaraSimulation; // 0x40(0x8)
		UTextureRenderTarget2DArray* WaterInfoTexture; // 0x48(0x8)
		UTextureRenderTarget2D* NormalRT; // 0x50(0x8)
		UShallowWaterSettings* Settings; // 0x58(0x8)
		UMaterialParameterCollection* MPC; // 0x60(0x8)
		TArray<TWeakObjectPtr> ActivePawns; // 0x68(0x10)
		unsigned char UnknownData00_6[0x58]; // 0x78(0x58) UNKNOWN PROPERTY
		TSet<TWeakObjectPtr> WaterBodyComponentsWithProperMIDParameters; // 0xD0(0x50)
		TArray<TWeakObjectPtr> PendingWaterBodiesToSetMIDOnInitialize; // 0x120(0x10)
		TArray<FShallowWaterCollisionContext> PreviousContexts; // 0x130(0x10)
		TArray<FShallowWaterCollisionContext> PendingContexts; // 0x140(0x10)
		TMap<FShallowWaterCollisionContext, USkeletalMeshComponent*> VehicleCollisionProxies; // 0x150(0x50)
		unsigned char UnknownData01_6[0x8]; // 0x1A0(0x8) UNKNOWN PROPERTY
		TArray<FShallowWaterCollisionTracker_Actor> Tracker_Actors; // 0x1A8(0x10)
		TArray<FShallowWaterCollisionTracker_Direct> Tracker_Directs; // 0x1B8(0x10)
		unsigned char UnknownData02_7[0x50]; // 0x1C8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WaterAdvanced.ShallowWaterSubsystem");
			return ret;
		}

		void SetWaterBodyMIDParameters(AWaterBody* WaterBody); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138BC48(relative to base address)
		void RemoveCollisionTrackerForActor(AActor* CollisionTrackerActor); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75138BB80(relative to base address)
		void RegisterImpact(FVector ImpactPosition, FVector ImpactVelocity, float ImpactRadius); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75138B8C0(relative to base address)
		void OnWaterInfoTextureArrayCreated(UTextureRenderTarget2DArray* WaterInfoTexture); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75138B804(relative to base address)
		void OnLocalPlayerPawnBecomesValid(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF75138B740(relative to base address)
		void OnLocalPlayerControllerBecomesValid(APlayerController* InPlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF75138B6C0(relative to base address)
		TSet GetAllOverlappingWaterBodiesAndUpdateCollisionTrackers(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75138B604(relative to base address)
		void AddCollisionTrackerForActor(AActor* CollisionTrackerActor, float MaxLifespan); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75138B410(relative to base address)
	};

}
