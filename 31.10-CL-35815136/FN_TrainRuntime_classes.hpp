#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TrainRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TrainRuntime.FortTrainCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortTrainCheatManager : public UChildCheatManager	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainCheatManager");
			return ret;
		}

		void TeleportTrainToTrainStartLocation(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void TeleportTrainToCursor(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void TeleportToTrainStartLocation(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void TeleportToTrain(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetTrainStartLocationToCursor(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetTrainMoveInPositiveRailDirection(bool bMoveInPositiveRailDirection); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void PrintTrainDebug(); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class TrainRuntime.FortTrainSpawner
	// Inherited from AActor -> UObject
	// Size: 0xA0 (0x330 - 0x290)
	class AFortTrainSpawner : public AActor	
	{
	public:
		UTrainConfig* TrainConfig; // 0x290(0x8)
		FScalableFloat RandomizeSpawnLocation; // 0x298(0x28)
		FScalableFloat ReverseDirection; // 0x2C0(0x28)
		FScalableFloat RandomizeDirection; // 0x2E8(0x28)
		TWeakObjectPtr<AFortTrainRail*> Rail; // 0x310(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainSpawner");
			return ret;
		}
	};


	// Class TrainRuntime.TrainCar
	// Inherited from AFortGameplayTagActor -> AActor -> UObject
	// Size: 0x1A8 (0x460 - 0x2B8)
	class ATrainCar : public AFortGameplayTagActor	
	{
	public:
		unsigned char UnknownData00_3[0x14]; // 0x2B8(0x14) UNKNOWN PROPERTY
		bool bCanBeMarked : 1; // 0x2CC:0(0x1)
		bool bBlockMarking : 1; // 0x2CC:1(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x2CD(0x3) UNKNOWN PROPERTY
		FMarkedActorDisplayInfo MarkerDisplay; // 0x2D0(0xA0)
		FVector MarkerPositionOffset; // 0x370(0x18)
		float Length; // 0x388(0x4)
		float ConnectorLength; // 0x38C(0x4)
		UTargetingPreset* DestructionTargetingPreset; // 0x390(0x8)
		UTargetingPreset* ImpulseTargetingPreset; // 0x398(0x8)
		FScalableFloat DestroyBuildings; // 0x3A0(0x28)
		FScalableFloat DestroyOnlyTargetPlayerBuilds; // 0x3C8(0x28)
		FGameplayTagContainer DestructionActorTags; // 0x3F0(0x20)
		FGameplayTagContainer DestructionIgnoredActorTags; // 0x410(0x20)
		FTargetingRequestHandle DestructionAsyncTargetingHandle; // 0x430(0x4)
		FTargetingRequestHandle ImpulseAsyncTargetingHandle; // 0x434(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x438(0x8) UNKNOWN PROPERTY
		UFortSoundIndicatorComponent* OnboardSoundIndicatorComponent; // 0x440(0x8)
		UAudioShapeLineListComponent* OnboardAudioShapeLineList; // 0x448(0x8)
		USoundBase* TrainMoveSoundCue; // 0x450(0x8)
		USoundControlBus* PlayerOnboardControlBus; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.TrainCar");
			return ret;
		}

		void OnPawnDebasedTrainCar(AFortPawn* Pawn, AActor* NewBase); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnBasedOnTrainCar(AFortPawn* Pawn); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActorTargetedForImpulse(AActor* Actor); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751585BBC(relative to base address)
		void HandleMovementBaseChanged(UPrimitiveComponent* NewBaseComponent, FName BoneName); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751585AF8(relative to base address)
		FTransform GetTransformAtServerTime(float ServerTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751585984(relative to base address)
		UFortTrainManager GetTrainManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751585960(relative to base address)
		int32_t GetCarIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515858A0(relative to base address)
		void EnableAudioProcessingForLocalPlayerOnboard(float TimeIntervalToUpdate, UFortSoundIndicatorComponent* SoundIndicatorComponent, UAudioShapeLineListComponent* AudioShapeLineList, float ControlBusFadeTime); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749344184(relative to base address)
	};


	// Class TrainRuntime.TrainConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UTrainConfig : public UPrimaryDataAsset	
	{
	public:
		UClass* TrainManagerClass; // 0x30(0x8)
		TArray<UClass*> Cars; // 0x38(0x10)
		FScalableFloat MoveSpeed; // 0x48(0x28)
		FScalableFloat DefaultConnectorLength; // 0x70(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.TrainConfig");
			return ret;
		}
	};


	// Class TrainRuntime.FortTrainManager
	// Inherited from UMovementComponent -> UActorComponent -> UObject
	// Size: 0x150 (0x258 - 0x108)
	class UFortTrainManager : public UMovementComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x108(0x10) UNKNOWN PROPERTY
		bool bProceduralCarOrder; // 0x118(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		UDataTable* CarTable; // 0x120(0x8)
		TArray<FDataTableRowHandle> CarOrder; // 0x128(0x10)
		float DefaultConnectorLength; // 0x138(0x4)
		float BaseMoveSpeed; // 0x13C(0x4)
		FScalableFloat TruckLocationTolerance; // 0x140(0x28)
		FScalableFloat MaxIterations; // 0x168(0x28)
		FScalableFloat MaxErrorOffset; // 0x190(0x28)
		FScalableFloat ErrorCatchupSpeedModifier; // 0x1B8(0x28)
		AFortTrainRail* Rail; // 0x1E0(0x8)
		TArray<FTrainCarRuntimeData> Cars; // 0x1E8(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x1F8(0x10) UNKNOWN PROPERTY
		FTrainMovementData ReplicatedMovementData; // 0x208(0x10)
		unsigned char UnknownData03_6[0x20]; // 0x218(0x20) UNKNOWN PROPERTY
		UAudioShapeLineListComponent* CachedAudioShapeLineList; // 0x238(0x8)
		unsigned char UnknownData04_7[0x18]; // 0x240(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainManager");
			return ret;
		}

		void PlaceOnRails(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751585F60(relative to base address)
		void OnRep_ReplicatedMovementData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7499C9F00(relative to base address)
		void OnRep_Rail(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748C60238(relative to base address)
		void MoveToTimeAlongRail(float Time, bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751585E98(relative to base address)
		void MoveToPositionOnRailAtCurrentServerTime(bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751585E18(relative to base address)
		void MoveToPositionOnRail(float RailDistance, bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751585D50(relative to base address)
		void MoveAlongRail(float DeltaDistance, bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751585C80(relative to base address)
		FVector GetWorldLocationAtServerTime(float ServerTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751585A54(relative to base address)
	};


	// Class TrainRuntime.FortTrainStationComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x2D0 - 0x220)
	class UFortTrainStationComponent : public USceneComponent	
	{
	public:
		FGameplayTag IdentifierTag; // 0x220(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x224(0x4) UNKNOWN PROPERTY
		FScalableFloat EnterLength; // 0x228(0x28)
		FScalableFloat CoastLength; // 0x250(0x28)
		FScalableFloat ExitLength; // 0x278(0x28)
		FScalableFloat SpeedMultiplier; // 0x2A0(0x28)
		unsigned char UnknownData01_7[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainStationComponent");
			return ret;
		}
	};


	// Class TrainRuntime.FortTrainRail
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AFortTrainRail : public AActor	
	{
	public:
		TWeakObjectPtr<ALandscapeSplineActor*> LandscapeSplineActor; // 0x290(0x20)
		bool bMinimizeSplineComponent; // 0x2B0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2B1(0x3) UNKNOWN PROPERTY
		float MaxTangentDifference; // 0x2B4(0x4)
		USplineComponent* SplineComponent; // 0x2B8(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x2C0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainRail");
			return ret;
		}

		void ValidateSpline(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		float GetTimeFromNextTrainArrival(FGameplayTag& StationIdentifierTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515858C4(relative to base address)
		void GenerateSpline(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class TrainRuntime.FortTrainMovingPlatformComponent
	// Inherited from UFortMovingPlatformComponent -> UFortBaseMovingPlatformComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x218 - 0x1E0)
	class UFortTrainMovingPlatformComponent : public UFortMovingPlatformComponent	
	{
	public:
		UCurveVector* PickupPushCurve; // 0x1E0(0x8)
		FScalableFloat PickupTeleportDistance; // 0x1E8(0x28)
		unsigned char UnknownData00_7[0x8]; // 0x210(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainMovingPlatformComponent");
			return ret;
		}

		UFortTrainManager FindOrGetTrainManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75158587C(relative to base address)
	};

}
