#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WaterAdvanced
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WaterAdvanced.ShallowWaterPhysicsAssetOverridesDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UShallowWaterPhysicsAssetOverridesDataAsset : public UDataAsset	
	{
	public:
		TMap Overrides; // 0x30(0x50)

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
		UNiagaraSystem NiagaraRiverSimulation; // 0x4C8(0x8)
		int32_t ResolutionMaxAxis; // 0x4D0(0x4)
		float SourceSize; // 0x4D4(0x4)
		float SimSpeed; // 0x4D8(0x4)
		int32_t NumSteps; // 0x4DC(0x4)
		AWaterBody SourceRiverWaterBody; // 0x4E0(0x8)
		AWaterBody SinkRiverWaterBody; // 0x4E8(0x8)
		TArray AdditonalRiverWaterBodies; // 0x4F0(0x10)
		bool PreviewBakedSim; // 0x500(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x501(0x7) UNKNOWN PROPERTY
		UTexture2D BakedWaterSurfaceTexture; // 0x508(0x8)
		TArray BottomContourActors; // 0x510(0x10)
		float BottomContourCaptureOffset; // 0x520(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		UNiagaraComponent RiverSimSystem; // 0x528(0x8)
		UTextureRenderTarget2D WaterInfoTexture; // 0x530(0x8)
		UTextureRenderTarget2D BakedWaterSurfaceRT; // 0x538(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x540(0x8) UNKNOWN PROPERTY
		TSet AllWaterBodies; // 0x548(0x50)
		FVector2D WorldGridSize; // 0x598(0x10)
		FVector SystemPos; // 0x5A8(0x18)
		TArray ShallowWaterSimArrayValues; // 0x5C0(0x10)

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
		UShallowWaterRiverComponent ShallowWaterRiverComponent; // 0x290(0x8)

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
		TWeakObjectPtr DefaultShallowWaterNiagaraSimulation; // 0x30(0x20)
		TWeakObjectPtr DefaultShallowWaterCollisionNDC; // 0x50(0x20)
		FShallowWaterSimParameters ShallowWaterSimParameters; // 0x70(0x8)
		TWeakObjectPtr WaterMPC; // 0x78(0x20)
		FName GridCenterMPCName; // 0x98(0x4)
		FName WorldGridSizeMPCName; // 0x9C(0x4)
		FName ResolutionMaxAxisMPCName; // 0xA0(0x4)
		FName NormalRTMaterialName; // 0xA4(0x4)
		bool UseDefaultShallowWaterSubsystem; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t MaxActivePawnNum; // 0xAC(0x4)
		int32_t MaxImpulseForceNum; // 0xB0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr PhysicsAssetProxiesDataAsset; // 0xB8(0x20)
		bool bVisualizeActivePawn; // 0xD8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

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
		UNiagaraComponent ShallowWaterNiagaraSimulation; // 0x40(0x8)
		UTextureRenderTarget2DArray WaterInfoTexture; // 0x48(0x8)
		UTextureRenderTarget2D NormalRT; // 0x50(0x8)
		UShallowWaterSettings Settings; // 0x58(0x8)
		UMaterialParameterCollection MPC; // 0x60(0x8)
		TArray ActivePawns; // 0x68(0x10)
		unsigned char UnknownData03_6[0x58]; // 0x78(0x58) UNKNOWN PROPERTY
		TSet WaterBodyComponentsWithProperMIDParameters; // 0xD0(0x50)
		TArray PendingWaterBodiesToSetMIDOnInitialize; // 0x120(0x10)
		TArray PreviousContexts; // 0x130(0x10)
		TArray PendingContexts; // 0x140(0x10)
		TMap VehicleCollisionProxies; // 0x150(0x50)
		unsigned char UnknownData04_6[0x8]; // 0x1A0(0x8) UNKNOWN PROPERTY
		TArray Tracker_Actors; // 0x1A8(0x10)
		TArray Tracker_Directs; // 0x1B8(0x10)
		unsigned char UnknownData05_7[0x50]; // 0x1C8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WaterAdvanced.ShallowWaterSubsystem");
			return ret;
		}

		void SetWaterBodyMIDParameters(AWaterBody WaterBody); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFBB78
		void RemoveCollisionTrackerForActor(AActor CollisionTrackerActor); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFBA98
		void RegisterImpact(FVector ImpactPosition, FVector ImpactVelocity, float ImpactRadius); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CFB9B8
		void OnWaterInfoTextureArrayCreated(UTextureRenderTarget2DArray WaterInfoTexture); // Flags: Final|Native|Protected 0x7FF414CFB8D8
		void OnLocalPlayerPawnBecomesValid(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Private 0x7FF414CFB7F8
		void OnLocalPlayerControllerBecomesValid(APlayerController InPlayerController); // Flags: Final|Native|Private 0x7FF414CFB718
		TSet GetAllOverlappingWaterBodiesAndUpdateCollisionTrackers(); // Flags: Native|Protected|BlueprintCallable 0x7FF414CFB638
		void AddCollisionTrackerForActor(AActor CollisionTrackerActor, float MaxLifespan); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFB558
	};

}
